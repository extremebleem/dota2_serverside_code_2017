// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_weapon_greater_critical.cpp:26
class CDOTA_Item_Recipe_GreaterCritical : public CDOTA_Item {
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
	CDOTA_Item_Recipe_GreaterCritical(CDOTA_Item_Recipe_GreaterCritical &);
	CDOTA_Item_Recipe_GreaterCritical(CDOTA_Item_Recipe_GreaterCritical &);
	CDOTA_Item_Recipe_GreaterCritical();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_GreaterCritical();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_weapon_greater_critical.cpp:37
class CDOTA_Item_GreaterCritical : public CDOTA_Item {
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
	CDOTA_Item_GreaterCritical(CDOTA_Item_GreaterCritical &);
	CDOTA_Item_GreaterCritical(CDOTA_Item_GreaterCritical &);
	CDOTA_Item_GreaterCritical();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_GreaterCritical();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_weapon_greater_critical.cpp:49
class CDOTA_Modifier_Item_GreaterCritical : public CDOTA_Buff_Item {
public:

private:

	int bonus_damage;  // +0xba8
	int crit_chance;  // +0xbac
	int crit_multiplier;  // +0xbb0
	CDOTA_Modifier_Item_GreaterCritical();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_CriticalStrike(const CModifierParams &);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_GreaterCritical();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_GreaterCritical::~CDOTA_Item_Recipe_GreaterCritical  (line 26, @0x0000000002e22c00, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_GreaterCritical::~CDOTA_Item_Recipe_GreaterCritical(
        CDOTA_Item_Recipe_GreaterCritical *const this)
{
  this->_vptr_IHandleEntity = &off_47942F0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_GreaterCritical::~CDOTA_Item_Recipe_GreaterCritical  (line 26, @0x0000000002e22c20, libserver.so)  // inlines: ~CDOTA_Item_Recipe_GreaterCritical
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_GreaterCritical::~CDOTA_Item_Recipe_GreaterCritical(
        CDOTA_Item_Recipe_GreaterCritical *const this)
{
  this->_vptr_IHandleEntity = &off_47942F0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_GreaterCritical::Schema_DynamicBinding  (line 28, @0x0000000002e21270, libserver.so)
// globals: CDOTA_Item_Recipe_GreaterCritical::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_GreaterCritical::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_GreaterCritical *const this)
{
  return CDOTA_Item_Recipe_GreaterCritical::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_GreaterCritical::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002e21280, libserver.so)
// globals: CDOTA_Item_Recipe_GreaterCritical::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_GreaterCritical::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_GreaterCritical::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_GreaterCritical::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_GreaterCritical::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002e21290, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_GreaterCritical>
void __fastcall CDOTA_Item_Recipe_GreaterCritical::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_GreaterCritical::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_GreaterCritical::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002e212b0, libserver.so)
void __fastcall CDOTA_Item_Recipe_GreaterCritical::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_GreaterCritical::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_GreaterCritical::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002e212d0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_GreaterCritical::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_GreaterCritical::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_GreaterCritical::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002e212e0, libserver.so)
// globals: CDOTA_Item_Recipe_GreaterCritical::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_GreaterCritical::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_GreaterCritical::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_GreaterCritical::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_GreaterCritical::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002e21eb0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_GreaterCritical::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_GreaterCritical::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_GreaterCritical::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002e227d0, libserver.so)  // inlines: CDOTA_Item_Recipe_GreaterCritical, Construct<CDOTA_Item_Recipe_GreaterCritical>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_GreaterCritical::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_GreaterCritical::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_47942F0;
  }
  return p;
}


// CDOTA_Item_Recipe_GreaterCritical::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002e23bd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_GreaterCritical::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_GreaterCritical::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_GreaterCritical::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002e23bf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_GreaterCritical::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_GreaterCritical::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal  (line 28, @0x0000000002e271c0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_08.cpp
// strings: "item_recipe_greater_crit", "CDOTA_Item_Recipe_GreaterCritical"
// globals: `guard variable for'CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass, CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Item_Recipe_GreaterCritical::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClassInfo, CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass) != 0 )
  {
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_designerName.u.m_Id = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_AllHelpers.m_Size = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_classInputs.m_Size = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_classOutputs.m_Size = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_hNetworkSerializer = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_pBaseClassInfo = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_pClassInfo = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_flags = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_nAllHelpersFlags = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_pScriptClassDesc = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_pInputs = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_nInputCount = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_pOutputs = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_nOutputCount = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_pGameClass = 0;
    CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass._vptr_CEntityClass = off_4794270;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_GreaterCritical::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_GreaterCriticalClass != 0 )
    return &CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass;
  if ( `guard variable for'CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClassInfo,
      "CDOTA_Item_Recipe_GreaterCritical",
      "item_recipe_greater_crit",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClassInfo);
  }
  CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_pClassInfo = &CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClassInfo;
  CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_pBaseClassInfo = CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_GreaterCriticalClass = &CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass;
  CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClassInfo.m_pClass = &CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass;
  CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_GreaterCriticalClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_GreaterCriticalClass;
}


// CDOTA_Item_GreaterCritical::~CDOTA_Item_GreaterCritical  (line 37, @0x0000000002e22c50, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_GreaterCritical::~CDOTA_Item_GreaterCritical(CDOTA_Item_GreaterCritical *const this)
{
  this->_vptr_IHandleEntity = &off_4794EF0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_GreaterCritical::~CDOTA_Item_GreaterCritical  (line 37, @0x0000000002e22c70, libserver.so)  // inlines: ~CDOTA_Item_GreaterCritical
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_GreaterCritical::~CDOTA_Item_GreaterCritical(CDOTA_Item_GreaterCritical *const this)
{
  this->_vptr_IHandleEntity = &off_4794EF0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_GreaterCritical::Schema_DynamicBinding  (line 39, @0x0000000002e212f0, libserver.so)
// globals: CDOTA_Item_GreaterCritical::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_GreaterCritical::Schema_DynamicBinding(
        const CDOTA_Item_GreaterCritical *const this)
{
  return CDOTA_Item_GreaterCritical::s_pSchemaBinding;
}


// CDOTA_Item_GreaterCritical::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 39, @0x0000000002e21300, libserver.so)
// globals: CDOTA_Item_GreaterCritical::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_GreaterCritical::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_GreaterCritical::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_GreaterCritical::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_GreaterCritical::CEntityInstanceEntityClass::DestructInstance  (line 39, @0x0000000002e21310, libserver.so)  // inlines: Destruct<CDOTA_Item_GreaterCritical>
void __fastcall CDOTA_Item_GreaterCritical::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_GreaterCritical::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_GreaterCritical::CEntityInstanceEntityClass::FreeInstance  (line 39, @0x0000000002e21330, libserver.so)
void __fastcall CDOTA_Item_GreaterCritical::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_GreaterCritical::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_GreaterCritical::CEntityInstanceEntityClass::CanAllocate  (line 39, @0x0000000002e21350, libserver.so)
bool __fastcall CDOTA_Item_GreaterCritical::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_GreaterCritical::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_GreaterCritical::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 39, @0x0000000002e21360, libserver.so)
// globals: CDOTA_Item_GreaterCritical::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_GreaterCritical::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_GreaterCritical::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_GreaterCritical::s_pSchemaBinding;
}


// CDOTA_Item_GreaterCritical::CEntityInstanceEntityClass::AllocateInstance  (line 39, @0x0000000002e21ef0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_GreaterCritical::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_GreaterCritical::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_GreaterCritical::CEntityInstanceEntityClass::ConstructInstance  (line 39, @0x0000000002e22800, libserver.so)  // inlines: CDOTA_Item_GreaterCritical, Construct<CDOTA_Item_GreaterCritical>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_GreaterCritical::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_GreaterCritical::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4794EF0;
  }
  return p;
}


// CDOTA_Item_GreaterCritical::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002e23c20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_GreaterCritical::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_GreaterCritical::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_GreaterCritical::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002e23c40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_GreaterCritical::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_GreaterCritical::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_GreaterCritical::GetEntityClassInternal  (line 39, @0x0000000002e28fd0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_08.cpp
// strings: "CDOTA_Item_GreaterCritical"
// globals: `guard variable for'CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass, CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Item_GreaterCritical::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_GreaterCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GreaterCriticalClassInfo, CDOTA_Item_GreaterCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GreaterCriticalClassInfo
CEntityClass *__cdecl CDOTA_Item_GreaterCritical::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass) != 0 )
  {
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_designerName.u.m_Id = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_AllHelpers.m_Size = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_classInputs.m_Size = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_classOutputs.m_Size = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_hNetworkSerializer = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_pBaseClassInfo = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_pClassInfo = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_flags = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_nAllHelpersFlags = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_pScriptClassDesc = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_pInputs = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_nInputCount = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_pOutputs = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_nOutputCount = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_pGameClass = 0;
    CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass._vptr_CEntityClass = off_4794E70;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass);
    __cxa_atexit(
      CDOTA_Item_GreaterCritical::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_GreaterCriticalClass != 0 )
    return &CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass;
  if ( `guard variable for'CDOTA_Item_GreaterCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GreaterCriticalClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_GreaterCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GreaterCriticalClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_GreaterCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GreaterCriticalClassInfo,
      "CDOTA_Item_GreaterCritical",
      "item_greater_crit",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_GreaterCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GreaterCriticalClassInfo);
  }
  CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_pClassInfo = &CDOTA_Item_GreaterCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GreaterCriticalClassInfo;
  CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_pBaseClassInfo = CDOTA_Item_GreaterCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GreaterCriticalClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_GreaterCriticalClass = &CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass;
  CDOTA_Item_GreaterCritical::GetEntityClassInfo(void)::g_EntityCDOTA_Item_GreaterCriticalClassInfo.m_pClass = &CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass;
  CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_GreaterCriticalClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_GreaterCritical::GetEntityClassInternal(void)::g_EntityCDOTA_Item_GreaterCriticalClass;
}


// CDOTA_Item_GreaterCritical::GetIntrinsicModifierName  (line 41, @0x0000000002e21370, libserver.so)
// strings: "modifier_item_greater_crit"
const char *__fastcall CDOTA_Item_GreaterCritical::GetIntrinsicModifierName(CDOTA_Item_GreaterCritical *const this)
{
  return "modifier_item_greater_crit";
}


// CDOTA_Modifier_Item_GreaterCritical::~CDOTA_Modifier_Item_GreaterCritical  (line 49, @0x0000000002e22410, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_GreaterCritical::~CDOTA_Modifier_Item_GreaterCritical(
        CDOTA_Modifier_Item_GreaterCritical *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_GreaterCritical::~CDOTA_Modifier_Item_GreaterCritical  (line 49, @0x0000000002e22430, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_GreaterCritical
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_GreaterCritical::~CDOTA_Modifier_Item_GreaterCritical(
        CDOTA_Modifier_Item_GreaterCritical *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_GreaterCritical::DeclareFunctions  (line 69, @0x0000000002e18ab0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_GreaterCritical::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Item_GreaterCritical::GetModifierPreAttack_CriticalStrike(CModifierParams const&), CDOTA_Modifier_Item_GreaterCritical::OnAttackLanded(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_GreaterCritical::DeclareFunctions(CDOTA_Modifier_Item_GreaterCritical *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_GreaterCritical::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[83].__delta = 0;
  this->m_Functions[83].__pfn = CDOTA_Modifier_Item_GreaterCritical::GetModifierPreAttack_CriticalStrike;
  this->m_Functions[121].__pfn = CDOTA_Modifier_Item_GreaterCritical::OnAttackLanded;
  this->m_Functions[121].__delta = 0;
}


// CDOTA_Modifier_Item_GreaterCritical::OnCreated  (line 76, @0x0000000002e1e2c0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Item_GreaterCritical::OnCreated(
        CDOTA_Modifier_Item_GreaterCritical *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->crit_chance = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->bonus_damage = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->crit_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "crit_chance", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->crit_multiplier = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "crit_multiplier", -1, 0);
    return;
  }
LABEL_7:
  this->crit_multiplier = 0;
}


// CDOTA_Modifier_Item_GreaterCritical::GetModifierPreAttack_BonusDamage  (line 85, @0x0000000002e18b10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_GreaterCritical::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_GreaterCritical *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_GreaterCritical::GetModifierPreAttack_CriticalStrike  (line 90, @0x0000000002e1a800, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, RollPseudoRandomPercentage
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_GreaterCritical::GetModifierPreAttack_CriticalStrike(
        CDOTA_Modifier_Item_GreaterCritical *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rax
  uint32 v7; // edx
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v9; // rcx
  CEntityIdentity *v10; // rcx
  CEntityInstance *v11; // rcx
  int m_Id; // edx
  CDOTA_BaseNPC *Parent; // rax
  __m128i v14; // xmm0
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->htarget.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v7 = params->hattacker.m_Index;
  if ( v7 + 2 <= 1
    || (m_Index_low = LOWORD(params->hattacker.m_Index),
        (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v10 = &v9[m_Index_low & 0x1FF]) == 0
    || v7 != v10->m_EHandle.m_Index
    || (v11 = v10->m_pInstance) == 0
    || BYTE3(v11[7]._vptr_IHandleEntity) == 0 )
  {
    v11 = 0;
  }
  if ( m_pInstance == 0 )
    return 1uLL;
  m_Id = m_pInstance[43].m_iszPrivateVScripts.u.m_Id;
  if ( (m_Id & 0x10) != 0 )
    return 1uLL;
  if ( (m_Id & 0x193) == 0 )
    return 1uLL;
  if ( v11 == 0 )
    return 1uLL;
  if ( HIBYTE(v11[7].m_CScriptComponent) == HIBYTE(m_pInstance[7].m_CScriptComponent) )
    return 1uLL;
  Parent = CDOTA_Buff::GetParent(this);
  if ( !RollPseudoRandomPercentage(this->crit_chance, DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_GREATERCRIT, Parent) )
    return 1uLL;
  *v14.m128i_i32 = this->crit_multiplier;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v14) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_GreaterCritical::OnAttackLanded  (line 107, @0x0000000002e1a970, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound
// strings: "DOTA_Item.Daedelus.Crit"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_GreaterCritical::OnAttackLanded(
        CDOTA_Modifier_Item_GreaterCritical *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  uint32 v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_BaseNPC *v10; // r14
  __int64 iRecord; // r13
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // r13

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->hattacker.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v7 = params->htarget.m_Index;
  if ( v7 + 2 <= 1
    || (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v9 = &v8[params->htarget.m_Index & 0x1FF]) == 0
    || v7 != v9->m_EHandle.m_Index
    || (v10 = v9->m_pInstance, v9->m_pInstance == 0)
    || !v10->m_bIsDOTANPC )
  {
    v10 = 0;
  }
  iRecord = params->iRecord;
  AttackRecordsManager = GetAttackRecordsManager();
  RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
  if ( m_pInstance != 0
    && CDOTA_Buff::GetParent(this) == m_pInstance
    && v10 != 0
    && RecordByIndex != 0
    && RecordByIndex->m_flCriticalBonus > 1.0 )
  {
    CDOTA_BaseNPC::UnitEmitSound(v10, "DOTA_Item.Daedelus.Crit", 0.0, 0, 0);
  }
  return 1uLL;
}


