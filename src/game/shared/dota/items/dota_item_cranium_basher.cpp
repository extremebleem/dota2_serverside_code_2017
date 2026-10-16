// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_cranium_basher.cpp:26
class CDOTA_Item_Recipe_CraniumBasher : public CDOTA_Item {
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
	CDOTA_Item_Recipe_CraniumBasher(CDOTA_Item_Recipe_CraniumBasher &);
	CDOTA_Item_Recipe_CraniumBasher(CDOTA_Item_Recipe_CraniumBasher &);
	CDOTA_Item_Recipe_CraniumBasher();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_CraniumBasher();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_cranium_basher.cpp:38
class CDOTA_Item_CraniumBasher : public CDOTA_Item {
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
	CDOTA_Item_CraniumBasher(CDOTA_Item_CraniumBasher &);
	CDOTA_Item_CraniumBasher(CDOTA_Item_CraniumBasher &);
	CDOTA_Item_CraniumBasher();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Item_CraniumBasher();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_cranium_basher.cpp:50
class CDOTA_Modifier_Item_CraniumBasher : public CDOTA_Buff_Item {
public:

private:

	int bonus_damage;  // +0xba8
	int bonus_strength;  // +0xbac
	int bash_chance_melee;  // +0xbb0
	int bash_chance_ranged;  // +0xbb4
	float bash_duration;  // +0xbb8
	float bash_cooldown;  // +0xbbc
	int bonus_chance_damage;  // +0xbc0
	CDOTA_Modifier_Item_CraniumBasher();
	ModifierVariant_t GetModifierPreAttack(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierProcAttack_BonusDamage_Magical(const CModifierParams &);
	ModifierVariant_t GetModifierPostAttack(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Item_CraniumBasher();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3016
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_CraniumBasher::~CDOTA_Item_Recipe_CraniumBasher  (line 26, @0x0000000002d860e0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_CraniumBasher::~CDOTA_Item_Recipe_CraniumBasher(
        CDOTA_Item_Recipe_CraniumBasher *const this)
{
  this->_vptr_IHandleEntity = &off_46BF2B0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_CraniumBasher::~CDOTA_Item_Recipe_CraniumBasher  (line 26, @0x0000000002d86100, libserver.so)  // inlines: ~CDOTA_Item_Recipe_CraniumBasher
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_CraniumBasher::~CDOTA_Item_Recipe_CraniumBasher(
        CDOTA_Item_Recipe_CraniumBasher *const this)
{
  this->_vptr_IHandleEntity = &off_46BF2B0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_CraniumBasher::Schema_DynamicBinding  (line 28, @0x0000000002d811c0, libserver.so)
// globals: CDOTA_Item_Recipe_CraniumBasher::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_CraniumBasher::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_CraniumBasher *const this)
{
  return CDOTA_Item_Recipe_CraniumBasher::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_CraniumBasher::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002d811d0, libserver.so)
// globals: CDOTA_Item_Recipe_CraniumBasher::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_CraniumBasher::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_CraniumBasher::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_CraniumBasher::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_CraniumBasher::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002d811e0, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_CraniumBasher>
void __fastcall CDOTA_Item_Recipe_CraniumBasher::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_CraniumBasher::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_CraniumBasher::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002d81200, libserver.so)
void __fastcall CDOTA_Item_Recipe_CraniumBasher::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_CraniumBasher::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_CraniumBasher::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002d81220, libserver.so)
bool __fastcall CDOTA_Item_Recipe_CraniumBasher::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_CraniumBasher::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_CraniumBasher::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002d81230, libserver.so)
// globals: CDOTA_Item_Recipe_CraniumBasher::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_CraniumBasher::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_CraniumBasher::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_CraniumBasher::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_CraniumBasher::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002d837f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_CraniumBasher::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_CraniumBasher::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_CraniumBasher::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002d84d40, libserver.so)  // inlines: CDOTA_Item_Recipe_CraniumBasher, Construct<CDOTA_Item_Recipe_CraniumBasher>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_CraniumBasher::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_CraniumBasher::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46BF2B0;
  }
  return p;
}


// CDOTA_Item_Recipe_CraniumBasher::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002d88750, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_CraniumBasher::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_CraniumBasher::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_CraniumBasher::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002d88770, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_CraniumBasher::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_CraniumBasher::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_CraniumBasher::GetEntityClassInternal  (line 28, @0x0000000002d907c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "item_recipe_basher", "CDOTA_Item_Recipe_CraniumBasher"
// globals: `guard variable for'CDOTA_Item_Recipe_CraniumBasher::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_CraniumBasherClass, CDOTA_Item_Recipe_CraniumBasher::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_CraniumBasherClass, __dso_handle, CDOTA_Item_Recipe_CraniumBasher::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_CraniumBasher::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_CraniumBasherClassInfo, CDOTA_Item_Recipe_CraniumBasher::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_CraniumBasherClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_CraniumBasher::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_CraniumBasher::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_CraniumBasherClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_CraniumBasher::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_CraniumBasherClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_CraniumBasher::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_CraniumBasherClass);
    CDOTA_Item_Recipe_CraniumBasher::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_CraniumBasherClass._vptr_CEntityClass = off_46BF230;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_CraniumBasher::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_CraniumBasherClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_CraniumBasher::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_CraniumBasher::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_CraniumBasherClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_CraniumBasherClass != 0 )
    return &CDOTA_Item_Recipe_CraniumBasher::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_CraniumBasherClass;
  if ( `guard variable for'CDOTA_Item_Recipe_CraniumBasher::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_CraniumBasherClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_CraniumBasher::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_CraniumBasherClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_CraniumBasher::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_CraniumBasherClassInfo,
      "CDOTA_Item_Recipe_CraniumBasher",
      "item_recipe_basher",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_CraniumBasher::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_CraniumBasherClassInfo);
  }
  CDOTA_Item_Recipe_CraniumBasher::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_CraniumBasherClass.m_pClassInfo = &CDOTA_Item_Recipe_CraniumBasher::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_CraniumBasherClassInfo;
  CDOTA_Item_Recipe_CraniumBasher::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_CraniumBasherClass.m_pBaseClassInfo = CDOTA_Item_Recipe_CraniumBasher::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_CraniumBasherClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_CraniumBasherClass = &CDOTA_Item_Recipe_CraniumBasher::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_CraniumBasherClass;
  CDOTA_Item_Recipe_CraniumBasher::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_CraniumBasherClassInfo.m_pClass = &CDOTA_Item_Recipe_CraniumBasher::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_CraniumBasherClass;
  CDOTA_Item_Recipe_CraniumBasher::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_CraniumBasherClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_CraniumBasherClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_CraniumBasher::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_CraniumBasherClass;
}


// CDOTA_Item_CraniumBasher::~CDOTA_Item_CraniumBasher  (line 38, @0x0000000002d86130, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_CraniumBasher::~CDOTA_Item_CraniumBasher(CDOTA_Item_CraniumBasher *const this)
{
  this->_vptr_IHandleEntity = &off_46BFEB0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_CraniumBasher::~CDOTA_Item_CraniumBasher  (line 38, @0x0000000002d86150, libserver.so)  // inlines: ~CDOTA_Item_CraniumBasher
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_CraniumBasher::~CDOTA_Item_CraniumBasher(CDOTA_Item_CraniumBasher *const this)
{
  this->_vptr_IHandleEntity = &off_46BFEB0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_CraniumBasher::Schema_DynamicBinding  (line 40, @0x0000000002d81240, libserver.so)
// globals: CDOTA_Item_CraniumBasher::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_CraniumBasher::Schema_DynamicBinding(
        const CDOTA_Item_CraniumBasher *const this)
{
  return CDOTA_Item_CraniumBasher::s_pSchemaBinding;
}


// CDOTA_Item_CraniumBasher::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 40, @0x0000000002d81250, libserver.so)
// globals: CDOTA_Item_CraniumBasher::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_CraniumBasher::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_CraniumBasher::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_CraniumBasher::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_CraniumBasher::CEntityInstanceEntityClass::DestructInstance  (line 40, @0x0000000002d81260, libserver.so)  // inlines: Destruct<CDOTA_Item_CraniumBasher>
void __fastcall CDOTA_Item_CraniumBasher::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_CraniumBasher::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_CraniumBasher::CEntityInstanceEntityClass::FreeInstance  (line 40, @0x0000000002d81280, libserver.so)
void __fastcall CDOTA_Item_CraniumBasher::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_CraniumBasher::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_CraniumBasher::CEntityInstanceEntityClass::CanAllocate  (line 40, @0x0000000002d812a0, libserver.so)
bool __fastcall CDOTA_Item_CraniumBasher::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_CraniumBasher::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_CraniumBasher::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 40, @0x0000000002d812b0, libserver.so)
// globals: CDOTA_Item_CraniumBasher::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_CraniumBasher::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_CraniumBasher::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_CraniumBasher::s_pSchemaBinding;
}


// CDOTA_Item_CraniumBasher::CEntityInstanceEntityClass::AllocateInstance  (line 40, @0x0000000002d83830, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_CraniumBasher::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_CraniumBasher::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_CraniumBasher::CEntityInstanceEntityClass::ConstructInstance  (line 40, @0x0000000002d84d70, libserver.so)  // inlines: CDOTA_Item_CraniumBasher, Construct<CDOTA_Item_CraniumBasher>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_CraniumBasher::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_CraniumBasher::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_46BFEB0;
  }
  return p;
}


// CDOTA_Item_CraniumBasher::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002d887a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_CraniumBasher::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_CraniumBasher::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_CraniumBasher::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 40, @0x0000000002d887c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_CraniumBasher::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_CraniumBasher::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_CraniumBasher::GetEntityClassInternal  (line 40, @0x0000000002d90910, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CBaseEntity::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_02.cpp
// strings: "item_basher", "CDOTA_Item_CraniumBasher", "dota_item", "CDOTA_Item", "dota_base_ability", "CDOTABaseAbility"
// globals: `guard variable for'CDOTA_Item_CraniumBasher::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CraniumBasherClass, CDOTA_Item_CraniumBasher::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CraniumBasherClass, __dso_handle, CDOTA_Item_CraniumBasher::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_CraniumBasher::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CraniumBasherClassInfo, CDOTA_Item_CraniumBasher::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CraniumBasherClassInfo, `guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo, CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo (10 total)
CEntityClass *__cdecl CDOTA_Item_CraniumBasher::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_CraniumBasher::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CraniumBasherClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_CraniumBasher::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CraniumBasherClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_CraniumBasher::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CraniumBasherClass);
    CDOTA_Item_CraniumBasher::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CraniumBasherClass._vptr_CEntityClass = off_46BFE30;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_CraniumBasher::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CraniumBasherClass);
    __cxa_atexit(
      CDOTA_Item_CraniumBasher::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_CraniumBasher::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CraniumBasherClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_CraniumBasherClass != 0 )
    return &CDOTA_Item_CraniumBasher::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CraniumBasherClass;
  if ( `guard variable for'CDOTA_Item_CraniumBasher::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CraniumBasherClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_CraniumBasher::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CraniumBasherClassInfo) != 0 )
  {
    if ( `guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo) != 0 )
    {
      if ( `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo) != 0 )
      {
        EntityClassInfo = CBaseEntity::GetEntityClassInfo();
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo,
          "CDOTABaseAbility",
          "dota_base_ability",
          0,
          EntityClassInfo);
        __cxa_guard_release(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo,
        "CDOTA_Item",
        "dota_item",
        0,
        &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
      __cxa_guard_release(&`guard variable for'CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_CraniumBasher::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CraniumBasherClassInfo,
      "CDOTA_Item_CraniumBasher",
      "item_basher",
      0,
      &CDOTA_Item::GetEntityClassInfo(void)::g_EntityCDOTA_ItemClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_CraniumBasher::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CraniumBasherClassInfo);
  }
  CDOTA_Item_CraniumBasher::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CraniumBasherClass.m_pClassInfo = &CDOTA_Item_CraniumBasher::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CraniumBasherClassInfo;
  CDOTA_Item_CraniumBasher::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CraniumBasherClass.m_pBaseClassInfo = CDOTA_Item_CraniumBasher::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CraniumBasherClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_CraniumBasherClass = &CDOTA_Item_CraniumBasher::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CraniumBasherClass;
  CDOTA_Item_CraniumBasher::GetEntityClassInfo(void)::g_EntityCDOTA_Item_CraniumBasherClassInfo.m_pClass = &CDOTA_Item_CraniumBasher::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CraniumBasherClass;
  CDOTA_Item_CraniumBasher::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CraniumBasherClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_CraniumBasherClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_CraniumBasher::GetEntityClassInternal(void)::g_EntityCDOTA_Item_CraniumBasherClass;
}


// CDOTA_Item_CraniumBasher::GetIntrinsicModifierName  (line 42, @0x0000000002d812c0, libserver.so)
// strings: "modifier_item_cranium_basher"
const char *__fastcall CDOTA_Item_CraniumBasher::GetIntrinsicModifierName(CDOTA_Item_CraniumBasher *const this)
{
  return "modifier_item_cranium_basher";
}


// CDOTA_Modifier_Item_CraniumBasher::~CDOTA_Modifier_Item_CraniumBasher  (line 50, @0x0000000002d840a0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_CraniumBasher::~CDOTA_Modifier_Item_CraniumBasher(
        CDOTA_Modifier_Item_CraniumBasher *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_CraniumBasher::~CDOTA_Modifier_Item_CraniumBasher  (line 50, @0x0000000002d840c0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_CraniumBasher
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_CraniumBasher::~CDOTA_Modifier_Item_CraniumBasher(
        CDOTA_Modifier_Item_CraniumBasher *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_CraniumBasher::DeclareFunctions  (line 76, @0x0000000002d6f0f0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_CraniumBasher::GetModifierPreAttack(CModifierParams const&), CDOTA_Modifier_Item_CraniumBasher::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Item_CraniumBasher::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_Item_CraniumBasher::GetModifierProcAttack_BonusDamage_Magical(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_CraniumBasher::DeclareFunctions(CDOTA_Modifier_Item_CraniumBasher *const this)
{
  this->m_Functions[8].__pfn = CDOTA_Modifier_Item_CraniumBasher::GetModifierPreAttack;
  this->m_Functions[8].__delta = 0;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_CraniumBasher::GetModifierPreAttack_BonusDamage;
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_CraniumBasher::GetModifierBonusStats_Strength;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[5].__pfn = CDOTA_Modifier_Item_CraniumBasher::GetModifierProcAttack_BonusDamage_Magical;
  this->m_Functions[5].__delta = 0;
}


// CDOTA_Modifier_Item_CraniumBasher::OnCreated  (line 84, @0x0000000002d7d9f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "bash_chance_melee", "bash_chance_ranged", "bash_duration", "bash_cooldown", "bonus_chance_damage"
void __fastcall CDOTA_Modifier_Item_CraniumBasher::OnCreated(
        CDOTA_Modifier_Item_CraniumBasher *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_strength = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_strength", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_11;
    }
  }
  this->bonus_strength = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->bash_chance_melee = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bash_chance_melee", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
    goto LABEL_12;
  }
LABEL_11:
  this->bash_chance_melee = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->bash_chance_ranged = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bash_chance_ranged", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_13;
  }
LABEL_12:
  this->bash_chance_ranged = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->bash_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "bash_duration", -1, 0);
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_7;
LABEL_14:
    this->bash_cooldown = 0.0;
    v9 = CDOTA_Buff::GetAbility(this);
    if ( v9 != 0 )
      goto LABEL_8;
    goto LABEL_15;
  }
LABEL_13:
  this->bash_duration = 0.0;
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 == 0 )
    goto LABEL_14;
LABEL_7:
  this->bash_cooldown = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8, "bash_cooldown", -1, 0);
  v9 = CDOTA_Buff::GetAbility(this);
  if ( v9 != 0 )
  {
LABEL_8:
    this->bonus_chance_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v9, "bonus_chance_damage", -1, 0);
    return;
  }
LABEL_15:
  this->bonus_chance_damage = 0;
}


// CDOTA_Modifier_Item_CraniumBasher::GetModifierPreAttack_BonusDamage  (line 97, @0x0000000002d6f160, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_CraniumBasher::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_CraniumBasher *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_CraniumBasher::GetModifierBonusStats_Strength  (line 102, @0x0000000002d6f180, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_CraniumBasher::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_CraniumBasher *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_strength;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_CraniumBasher::GetModifierPreAttack  (line 107, @0x0000000002d734f0, libserver.so)  // inlines: AttackerNPC, FStrEq, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnitName, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, String, TargetNPC, ToCStr, ToDOTABaseNPC, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff_Item::GetItem, RollPseudoRandomPercentage, CDOTA_BaseNPC::FindModifierByName, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, CDOTA_BaseNPC::PreventCritOrBashAnimations, CDOTA_BaseNPC::SelectWeightedSequenceWithEconomy
// strings: "npc_dota_hero_spirit_breaker", "modifier_faceless_void_time_lock", "npc_dota_hero_slardar", "npc_dota_hero_troll_warlord", "npc_dota_hero_faceless_void"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_CraniumBasher::GetModifierPreAttack(
        CDOTA_Modifier_Item_CraniumBasher *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r14
  unsigned int bash_chance_ranged; // r13d
  const char *m_pAsString; // rsi
  const char *v11; // rsi
  const char *v12; // rsi
  const char *v13; // rsi
  CDOTA_Item *Item; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v16; // rax
  uint32 v17; // eax
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CEntityInstance *v20; // rax
  int m_Id; // eax
  __int64 iRecord; // rbx
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rax
  CDOTA_AttackRecord *v25; // rbx

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    return 1uLL;
  v5 = &v4[params->hattacker.m_Index & 0x1FF];
  if ( v5 == 0 )
    return 1uLL;
  if ( m_Index != v5->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    return 1uLL;
  bash_chance_ranged = this->bash_chance_ranged;
  if ( (*(&m_pInstance[50].m_worldGroupId + 1) & 2) == 0 )
    bash_chance_ranged = this->bash_chance_melee;
  if ( params->bCraniumBasherTested )
    return 1uLL;
  params->bCraniumBasherTested = 1;
  m_pAsString = CDOTA_Buff::GetParent(this)->m_iszUnitName.m_Value.u.m_pAsString;
  if ( m_pAsString != 0 )
  {
    if ( m_pAsString == "npc_dota_hero_slardar" )
      return 1uLL;
    if ( strcmp(m_pAsString, "npc_dota_hero_slardar") == 0 )
      return 1uLL;
  }
  v11 = CDOTA_Buff::GetParent(this)->m_iszUnitName.m_Value.u.m_pAsString;
  if ( v11 == 0 || v11 != "npc_dota_hero_troll_warlord" && strcmp(v11, "npc_dota_hero_troll_warlord") != 0 )
  {
    v12 = CDOTA_Buff::GetParent(this)->m_iszUnitName.m_Value.u.m_pAsString;
    if ( v12 == 0 || v12 != "npc_dota_hero_faceless_void" && strcmp(v12, "npc_dota_hero_faceless_void") != 0 )
    {
      v13 = CDOTA_Buff::GetParent(this)->m_iszUnitName.m_Value.u.m_pAsString;
      if ( (v13 == 0 || v13 != "npc_dota_hero_spirit_breaker" && strcmp(v13, "npc_dota_hero_spirit_breaker") != 0)
        && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
      {
        Item = CDOTA_Buff_Item::GetItem(this);
        if ( (*(Item->_vptr_IHandleEntity + 245))(Item) != 0 )
        {
          Parent = CDOTA_Buff::GetParent(this);
          if ( RollPseudoRandomPercentage(
                 bash_chance_ranged,
                 DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_ITEM_BASHER,
                 Parent) )
          {
            v16 = CDOTA_Buff::GetParent(this);
            if ( CDOTA_BaseNPC::FindModifierByName(v16, "modifier_faceless_void_time_lock", 0) == 0 )
            {
              v17 = params->htarget.m_Index;
              if ( v17 + 2 > 1 )
              {
                v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
                if ( v18 != 0 )
                {
                  v19 = &v18[params->htarget.m_Index & 0x1FF];
                  if ( v19 != 0 && v17 == v19->m_EHandle.m_Index )
                  {
                    v20 = v19->m_pInstance;
                    if ( v19->m_pInstance != 0
                      && BYTE3(v20[7]._vptr_IHandleEntity) != 0
                      && LOBYTE(v20[71]._vptr_IHandleEntity) == 0
                      && (BYTE1(v20[58]._vptr_IHandleEntity) & 1) == 0 )
                    {
                      m_Id = v20[43].m_iszPrivateVScripts.u.m_Id;
                      if ( (m_Id & 0x10) == 0 && (m_Id & 0x193) != 0 )
                      {
                        iRecord = params->iRecord;
                        AttackRecordsManager = GetAttackRecordsManager();
                        RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
                        v25 = RecordByIndex;
                        if ( RecordByIndex != 0 && RecordByIndex->m_nBashSource == 0 )
                        {
                          RecordByIndex->m_nBashSource = this->m_iSerialNumber;
                          if ( !CDOTA_BaseNPC::PreventCritOrBashAnimations(m_pInstance)
                            && CDOTA_BaseNPC::SelectWeightedSequenceWithEconomy(m_pInstance, 1705).m_Data != -1 )
                          {
                            v25->m_animation = 1705;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Item_CraniumBasher::GetModifierProcAttack_BonusDamage_Magical  (line 149, @0x0000000002d73d90, libserver.so)  // inlines: AttackerNPC, FStrEq, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnitName, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, String, TargetNPC, ToCStr, ToDOTABaseNPC, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, CDOTA_Buff_Item::GetItem, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, CEntityHandle::operator CEntityInstance*, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, GetParticleManager (16 total)
// strings: "npc_dota_hero_spirit_breaker", "modifier_bashed", "DOTA_Item.SkullBasher", "particles/generic_gameplay/generic_minibash.vpcf", "npc_dota_hero_slardar", "npc_dota_hero_troll_warlord" (7 total)
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_CraniumBasher::GetModifierProcAttack_BonusDamage_Magical(
        CDOTA_Modifier_Item_CraniumBasher *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CBaseEntity *m_pInstance; // r13
  const char *m_pAsString; // rsi
  const char *v10; // rsi
  const char *v11; // rsi
  const char *v12; // rsi
  CDOTA_Item *Item; // rax
  __int64 iRecord; // r14
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rax
  CEntityInstance *v17; // rax
  CDOTA_BaseNPC *v18; // rbx
  int m_Id; // eax
  float v20; // xmm1_4
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v25; // rax
  CDOTA_Item *v26; // rax
  __m128i v27; // xmm1
  unsigned __int64 v28; // [rsp+8h] [rbp-58h]
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-38h]
  ModifierVariant_t result; // 0:rax.16

  v30 = __readfsqword(0x28u);
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1 )
    goto LABEL_5;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    goto LABEL_5;
  v5 = &v4[params->hattacker.m_Index & 0x1FF];
  if ( v5 == 0 )
    goto LABEL_5;
  if ( m_Index != v5->m_EHandle.m_Index )
    goto LABEL_5;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0 )
    goto LABEL_5;
  if ( !m_pInstance->m_bIsDOTANPC )
    goto LABEL_5;
  if ( params->bCraniumBasherTested )
    goto LABEL_5;
  params->bCraniumBasherTested = 1;
  m_pAsString = CDOTA_Buff::GetParent(this)->m_iszUnitName.m_Value.u.m_pAsString;
  if ( m_pAsString != 0 && (m_pAsString == "npc_dota_hero_slardar" || strcmp(m_pAsString, "npc_dota_hero_slardar") == 0) )
    goto LABEL_5;
  v10 = CDOTA_Buff::GetParent(this)->m_iszUnitName.m_Value.u.m_pAsString;
  if ( v10 != 0 && (v10 == "npc_dota_hero_troll_warlord" || strcmp(v10, "npc_dota_hero_troll_warlord") == 0) )
    goto LABEL_5;
  v11 = CDOTA_Buff::GetParent(this)->m_iszUnitName.m_Value.u.m_pAsString;
  if ( v11 != 0 && (v11 == "npc_dota_hero_faceless_void" || strcmp(v11, "npc_dota_hero_faceless_void") == 0) )
    goto LABEL_5;
  v12 = CDOTA_Buff::GetParent(this)->m_iszUnitName.m_Value.u.m_pAsString;
  if ( v12 != 0 && (v12 == "npc_dota_hero_spirit_breaker" || strcmp(v12, "npc_dota_hero_spirit_breaker") == 0) )
    goto LABEL_5;
  Item = CDOTA_Buff_Item::GetItem(this);
  if ( (*(Item->_vptr_IHandleEntity + 245))(Item) == 0
    || (iRecord = params->iRecord,
        AttackRecordsManager = GetAttackRecordsManager(),
        (RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord)) == 0)
    || RecordByIndex->m_nBashSource != this->m_iSerialNumber
    || (v17 = CEntityHandle::operator CEntityInstance *(&params->htarget), v18 = v17, v17 == 0)
    || BYTE3(v17[7]._vptr_IHandleEntity) == 0
    || LOBYTE(v17[71]._vptr_IHandleEntity) != 0
    || (BYTE1(v17[58]._vptr_IHandleEntity) & 1) != 0
    || ((m_Id = v17[43].m_iszPrivateVScripts.u.m_Id) & 0x10) != 0
    || (m_Id & 0x193) == 0 )
  {
LABEL_5:
    *&result.m_eType = 1;
  }
  else
  {
    KeyValues::KeyValues(&kv, "modifier_bashed");
    KeyValues::SetFloat(&kv, "duration", v20);
    Ability = CDOTA_Buff::GetAbility(this);
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::AddNewModifier(v18, Parent, Ability, "modifier_bashed", &kv, 0);
    CDOTA_BaseNPC::UnitEmitSound(v18, "DOTA_Item.SkullBasher", 0.0, 0, 0);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/generic_gameplay/generic_minibash.vpcf",
                 7,
                 v18,
                 0,
                 m_pInstance);
    v25 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v25, Particle);
    v26 = CDOTA_Buff_Item::GetItem(this);
    (*(v26->_vptr_IHandleEntity + 241))(v26, -1.0);
    *v27.m128i_i32 = this->bonus_chance_damage;
    v28 = (_mm_cvtsi128_si32(v27) << 32) | 1;
    KeyValues::~KeyValues(&kv);
    *&result.m_eType = v28;
  }
  result.m_szVal = 0;
  return result;
}


