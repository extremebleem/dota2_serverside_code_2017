// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_bloodstone.cpp:26
class CDOTA_Item_Recipe_Bloodstone : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Bloodstone(CDOTA_Item_Recipe_Bloodstone &);
	CDOTA_Item_Recipe_Bloodstone(CDOTA_Item_Recipe_Bloodstone &);
	CDOTA_Item_Recipe_Bloodstone();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Bloodstone();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_bloodstone.cpp:39
class CDOTA_Item_Bloodstone : public CDOTA_Item {
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
	CDOTA_Item_Bloodstone(CDOTA_Item_Bloodstone &);
	CDOTA_Item_Bloodstone(CDOTA_Item_Bloodstone &);
	CDOTA_Item_Bloodstone();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual bool ProRatesChargesWhenSelling();
	virtual ~CDOTA_Item_Bloodstone();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// vtable[339] ProRatesChargesWhenSelling
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_bloodstone.cpp:51
class C_CDOTA_Item_Bloodstone_MapInstall {
	C_CDOTA_Item_Bloodstone_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_bloodstone.cpp:88
class CDOTA_Modifier_Item_Bloodstone : public CDOTA_Buff_Item {
public:

private:

	int bonus_health;  // +0xba8
	int bonus_mana;  // +0xbac
	int bonus_health_regen;  // +0xbb0
	int bonus_mana_regen;  // +0xbb4
	int bonus_damage;  // +0xbb8
	int heal_on_death_range;  // +0xbbc
	int heal_on_death_base;  // +0xbc0
	int heal_on_death_per_charge;  // +0xbc4
	float respawn_time_reduction;  // +0xbc8
	int death_gold_reduction;  // +0xbcc
	float on_death_removal;  // +0xbd0
	CDOTA_Modifier_Item_Bloodstone();
	virtual void OnCreated(KeyValues *);
	virtual bool IsHidden();
	virtual int GetAttributes();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierHealthBonus(const CModifierParams &);
	ModifierVariant_t GetModifierManaBonus(const CModifierParams &);
	ModifierVariant_t GetModifierPercentageManaRegen(const CModifierParams &);
	ModifierVariant_t GetModifierConstantManaRegen(const CModifierParams &);
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t GetModifierConstantRespawnTime(const CModifierParams &);
	ModifierVariant_t GetModifierConstantDeathGoldCost(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Bloodstone();

	// vtable[57] OnCreated
	// vtable[11] IsHidden
	// vtable[7] GetAttributes
	// vtable[65] DeclareFunctions
	// sizeof = 3032
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Bloodstone::~CDOTA_Item_Recipe_Bloodstone  (line 26, @0x0000000002d648f0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Bloodstone::~CDOTA_Item_Recipe_Bloodstone(CDOTA_Item_Recipe_Bloodstone *const this)
{
  this->_vptr_IHandleEntity = &off_469B1B0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Bloodstone::~CDOTA_Item_Recipe_Bloodstone  (line 26, @0x0000000002d64910, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Bloodstone
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Bloodstone::~CDOTA_Item_Recipe_Bloodstone(CDOTA_Item_Recipe_Bloodstone *const this)
{
  this->_vptr_IHandleEntity = &off_469B1B0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Bloodstone::Schema_DynamicBinding  (line 28, @0x0000000002d61360, libserver.so)
// globals: CDOTA_Item_Recipe_Bloodstone::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Bloodstone::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Bloodstone *const this)
{
  return CDOTA_Item_Recipe_Bloodstone::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Bloodstone::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002d61370, libserver.so)
// globals: CDOTA_Item_Recipe_Bloodstone::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Bloodstone::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Bloodstone::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Bloodstone::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Bloodstone::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002d61380, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Bloodstone>
void __fastcall CDOTA_Item_Recipe_Bloodstone::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Bloodstone::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Bloodstone::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002d613a0, libserver.so)
void __fastcall CDOTA_Item_Recipe_Bloodstone::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Bloodstone::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Bloodstone::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002d613c0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Bloodstone::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Bloodstone::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Bloodstone::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002d613d0, libserver.so)
// globals: CDOTA_Item_Recipe_Bloodstone::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Bloodstone::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Bloodstone::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Bloodstone::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Bloodstone::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002d62870, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Bloodstone::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Bloodstone::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Bloodstone::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002d63930, libserver.so)  // inlines: CDOTA_Item_Recipe_Bloodstone, Construct<CDOTA_Item_Recipe_Bloodstone>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Bloodstone::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Bloodstone::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_469B1B0;
  }
  return p;
}


// CDOTA_Item_Recipe_Bloodstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002d66810, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Bloodstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Bloodstone::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Bloodstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002d66830, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Bloodstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Bloodstone::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Bloodstone::GetEntityClassInternal  (line 28, @0x0000000002d6d5c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_01.cpp
// strings: "item_recipe_bloodstone", "CDOTA_Item_Recipe_Bloodstone"
// globals: `guard variable for'CDOTA_Item_Recipe_Bloodstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BloodstoneClass, CDOTA_Item_Recipe_Bloodstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BloodstoneClass, __dso_handle, CDOTA_Item_Recipe_Bloodstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Bloodstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BloodstoneClassInfo, CDOTA_Item_Recipe_Bloodstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BloodstoneClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Bloodstone::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Bloodstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BloodstoneClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Bloodstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BloodstoneClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Bloodstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BloodstoneClass);
    CDOTA_Item_Recipe_Bloodstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BloodstoneClass._vptr_CEntityClass = off_469B130;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Bloodstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BloodstoneClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Bloodstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Bloodstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BloodstoneClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_BloodstoneClass != 0 )
    return &CDOTA_Item_Recipe_Bloodstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BloodstoneClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Bloodstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BloodstoneClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Bloodstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BloodstoneClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Bloodstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BloodstoneClassInfo,
      "CDOTA_Item_Recipe_Bloodstone",
      "item_recipe_bloodstone",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Bloodstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BloodstoneClassInfo);
  }
  CDOTA_Item_Recipe_Bloodstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BloodstoneClass.m_pClassInfo = &CDOTA_Item_Recipe_Bloodstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BloodstoneClassInfo;
  CDOTA_Item_Recipe_Bloodstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BloodstoneClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Bloodstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BloodstoneClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_BloodstoneClass = &CDOTA_Item_Recipe_Bloodstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BloodstoneClass;
  CDOTA_Item_Recipe_Bloodstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_BloodstoneClassInfo.m_pClass = &CDOTA_Item_Recipe_Bloodstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BloodstoneClass;
  CDOTA_Item_Recipe_Bloodstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BloodstoneClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_BloodstoneClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Bloodstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_BloodstoneClass;
}


// CDOTA_Item_Bloodstone::~CDOTA_Item_Bloodstone  (line 39, @0x0000000002d64940, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Bloodstone::~CDOTA_Item_Bloodstone(CDOTA_Item_Bloodstone *const this)
{
  this->_vptr_IHandleEntity = &off_469BDB0;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Bloodstone::~CDOTA_Item_Bloodstone  (line 39, @0x0000000002d64960, libserver.so)  // inlines: ~CDOTA_Item_Bloodstone
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Bloodstone::~CDOTA_Item_Bloodstone(CDOTA_Item_Bloodstone *const this)
{
  this->_vptr_IHandleEntity = &off_469BDB0;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Bloodstone::Schema_DynamicBinding  (line 41, @0x0000000002d613e0, libserver.so)
// globals: CDOTA_Item_Bloodstone::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Bloodstone::Schema_DynamicBinding(
        const CDOTA_Item_Bloodstone *const this)
{
  return CDOTA_Item_Bloodstone::s_pSchemaBinding;
}


// CDOTA_Item_Bloodstone::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002d613f0, libserver.so)
// globals: CDOTA_Item_Bloodstone::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Bloodstone::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Bloodstone::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Bloodstone::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Bloodstone::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002d61400, libserver.so)  // inlines: Destruct<CDOTA_Item_Bloodstone>
void __fastcall CDOTA_Item_Bloodstone::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Bloodstone::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Bloodstone::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002d61420, libserver.so)
void __fastcall CDOTA_Item_Bloodstone::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Bloodstone::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Bloodstone::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002d61440, libserver.so)
bool __fastcall CDOTA_Item_Bloodstone::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Bloodstone::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Bloodstone::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002d61450, libserver.so)
// globals: CDOTA_Item_Bloodstone::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Bloodstone::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Bloodstone::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Bloodstone::s_pSchemaBinding;
}


// CDOTA_Item_Bloodstone::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002d628b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Bloodstone::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Bloodstone::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Bloodstone::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002d63960, libserver.so)  // inlines: CDOTA_Item_Bloodstone, Construct<CDOTA_Item_Bloodstone>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Bloodstone::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Bloodstone::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_469BDB0;
  }
  return p;
}


// CDOTA_Item_Bloodstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002d66860, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Bloodstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Bloodstone::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Bloodstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002d66880, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Bloodstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Bloodstone::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Bloodstone::GetEntityClassInternal  (line 41, @0x0000000002d6d710, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_01.cpp
// strings: "CDOTA_Item_Bloodstone"
// globals: `guard variable for'CDOTA_Item_Bloodstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BloodstoneClass, CDOTA_Item_Bloodstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BloodstoneClass, __dso_handle, CDOTA_Item_Bloodstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Bloodstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BloodstoneClassInfo, CDOTA_Item_Bloodstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BloodstoneClassInfo
CEntityClass *__cdecl CDOTA_Item_Bloodstone::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Bloodstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BloodstoneClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Bloodstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BloodstoneClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Bloodstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BloodstoneClass);
    CDOTA_Item_Bloodstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BloodstoneClass._vptr_CEntityClass = off_469BD30;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Bloodstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BloodstoneClass);
    __cxa_atexit(
      CDOTA_Item_Bloodstone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Bloodstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BloodstoneClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_BloodstoneClass != 0 )
    return &CDOTA_Item_Bloodstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BloodstoneClass;
  if ( `guard variable for'CDOTA_Item_Bloodstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BloodstoneClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Bloodstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BloodstoneClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Bloodstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BloodstoneClassInfo,
      "CDOTA_Item_Bloodstone",
      "item_bloodstone",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Bloodstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BloodstoneClassInfo);
  }
  CDOTA_Item_Bloodstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BloodstoneClass.m_pClassInfo = &CDOTA_Item_Bloodstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BloodstoneClassInfo;
  CDOTA_Item_Bloodstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BloodstoneClass.m_pBaseClassInfo = CDOTA_Item_Bloodstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BloodstoneClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_BloodstoneClass = &CDOTA_Item_Bloodstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BloodstoneClass;
  CDOTA_Item_Bloodstone::GetEntityClassInfo(void)::g_EntityCDOTA_Item_BloodstoneClassInfo.m_pClass = &CDOTA_Item_Bloodstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BloodstoneClass;
  CDOTA_Item_Bloodstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BloodstoneClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_BloodstoneClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Bloodstone::GetEntityClassInternal(void)::g_EntityCDOTA_Item_BloodstoneClass;
}


// CDOTA_Item_Bloodstone::GetIntrinsicModifierName  (line 45, @0x0000000002d61460, libserver.so)
// strings: "modifier_item_bloodstone"
const char *__fastcall CDOTA_Item_Bloodstone::GetIntrinsicModifierName(CDOTA_Item_Bloodstone *const this)
{
  return "modifier_item_bloodstone";
}


// CDOTA_Item_Bloodstone::ProRatesChargesWhenSelling  (line 48, @0x0000000002d61470, libserver.so)
bool __fastcall CDOTA_Item_Bloodstone::ProRatesChargesWhenSelling(CDOTA_Item_Bloodstone *const this)
{
  return 0;
}


// CDOTA_Item_Bloodstone::YouForgotToImplementOrDeclareServerClass  (line 51, @0x0000000002d546e0, libserver.so)
int __fastcall CDOTA_Item_Bloodstone::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_Bloodstone *const this)
{
  return 0;
}


// CDOTA_Item_Bloodstone::GetServerClass  (line 51, @0x0000000002d587b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Bloodstone::GetServerClass(CDOTA_Item_Bloodstone *const this)
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


// CDOTA_Item_Bloodstone::OnSpellStart  (line 59, @0x0000000002d55400, libserver.so)  // inlines: ToDOTABaseNPCHero
// calls: CDOTABaseAbility::GetCaster, CDOTA_ModifierManager::RemoveModifierByName, CDOTA_BaseNPC::Kill
// strings: "modifier_dazzle_shallow_grave"
void __fastcall CDOTA_Item_Bloodstone::OnSpellStart(CDOTA_Item_Bloodstone *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // r12
  CDOTA_BaseNPC *v5; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_ModifierManager::RemoveModifierByName(&Caster->m_ModifierManager, "modifier_dazzle_shallow_grave");
  v3 = CDOTABaseAbility::GetCaster(this);
  if ( v3 != 0 && (v3->m_iUnitType & 1) != 0 )
  {
    v4 = CDOTABaseAbility::GetCaster(this);
    v5 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::Kill(v5, this, v4, 0.0, 0);
  }
}


// CDOTA_Modifier_Item_Bloodstone::~CDOTA_Modifier_Item_Bloodstone  (line 88, @0x0000000002d62b70, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Bloodstone::~CDOTA_Modifier_Item_Bloodstone(
        CDOTA_Modifier_Item_Bloodstone *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Bloodstone::~CDOTA_Modifier_Item_Bloodstone  (line 88, @0x0000000002d62b90, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Bloodstone
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Bloodstone::~CDOTA_Modifier_Item_Bloodstone(
        CDOTA_Modifier_Item_Bloodstone *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Bloodstone::IsHidden  (line 95, @0x0000000002d61480, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Bloodstone::IsHidden(CDOTA_Modifier_Item_Bloodstone *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Bloodstone::GetAttributes  (line 96, @0x0000000002d61490, libserver.so)
int __fastcall CDOTA_Modifier_Item_Bloodstone::GetAttributes(CDOTA_Modifier_Item_Bloodstone *const this)
{
  return 3;
}


// CDOTA_Modifier_Item_Bloodstone::OnCreated  (line 130, @0x0000000002d5d510, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "bonus_health", "bonus_mana", "bonus_health_regen", "bonus_mana_regen", "heal_on_death_range", "heal_on_death_base" (10 total)
void __fastcall CDOTA_Modifier_Item_Bloodstone::OnCreated(CDOTA_Modifier_Item_Bloodstone *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  CDOTABaseAbility *v10; // rax
  CDOTABaseAbility *v11; // rax
  CDOTABaseAbility *v12; // rax
  CDOTABaseAbility *v13; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->bonus_health, "bonus_health");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->bonus_mana, "bonus_mana");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->bonus_health_regen, "bonus_health_regen");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->bonus_mana_regen, "bonus_mana_regen");
  v7 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v7, &this->bonus_damage, "bonus_damage");
  v8 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v8, &this->heal_on_death_range, "heal_on_death_range");
  v9 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v9, &this->heal_on_death_base, "heal_on_death_base");
  v10 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v10, &this->heal_on_death_per_charge, "heal_on_death_per_charge");
  v11 = CDOTA_Buff::GetAbility(this);
  if ( v11 != 0 )
    this->respawn_time_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                     v11,
                                     "respawn_time_reduction",
                                     -1,
                                     0);
  else
    this->respawn_time_reduction = 0.0;
  v12 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v12, &this->death_gold_reduction, "death_gold_reduction");
  v13 = CDOTA_Buff::GetAbility(this);
  if ( v13 != 0 )
    this->on_death_removal = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v13, "on_death_removal", -1, 0);
  else
    this->on_death_removal = 0.0;
}


// CDOTA_Modifier_Item_Bloodstone::DeclareFunctions  (line 148, @0x0000000002d546f0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Bloodstone::GetModifierHealthBonus(CModifierParams const&), CDOTA_Modifier_Item_Bloodstone::GetModifierManaBonus(CModifierParams const&), CDOTA_Modifier_Item_Bloodstone::GetModifierPercentageManaRegen(CModifierParams const&), CDOTA_Modifier_Item_Bloodstone::GetModifierConstantManaRegen(CModifierParams const&), CDOTA_Modifier_Item_Bloodstone::GetModifierConstantHealthRegen(CModifierParams const&), CDOTA_Modifier_Item_Bloodstone::GetModifierConstantRespawnTime(CModifierParams const&), CDOTA_Modifier_Item_Bloodstone::GetModifierConstantDeathGoldCost(CModifierParams const&), CDOTA_Modifier_Item_Bloodstone::GetModifierPreAttack_BonusDamage(CModifierParams const&) (9 total)
void __fastcall CDOTA_Modifier_Item_Bloodstone::DeclareFunctions(CDOTA_Modifier_Item_Bloodstone *const this)
{
  this->m_Functions[58].__pfn = CDOTA_Modifier_Item_Bloodstone::GetModifierHealthBonus;
  this->m_Functions[58].__delta = 0;
  this->m_Functions[59].__delta = 0;
  this->m_Functions[59].__pfn = CDOTA_Modifier_Item_Bloodstone::GetModifierManaBonus;
  this->m_Functions[54].__pfn = CDOTA_Modifier_Item_Bloodstone::GetModifierPercentageManaRegen;
  this->m_Functions[52].__pfn = CDOTA_Modifier_Item_Bloodstone::GetModifierConstantManaRegen;
  this->m_Functions[56].__pfn = CDOTA_Modifier_Item_Bloodstone::GetModifierConstantHealthRegen;
  this->m_Functions[74].__pfn = CDOTA_Modifier_Item_Bloodstone::GetModifierConstantRespawnTime;
  this->m_Functions[81].__pfn = CDOTA_Modifier_Item_Bloodstone::GetModifierConstantDeathGoldCost;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_Bloodstone::GetModifierPreAttack_BonusDamage;
  this->m_Functions[54].__delta = 0;
  this->m_Functions[52].__delta = 0;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[74].__delta = 0;
  this->m_Functions[81].__delta = 0;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[138].__pfn = CDOTA_Modifier_Item_Bloodstone::OnDeath;
  this->m_Functions[138].__delta = 0;
}


// CDOTA_Modifier_Item_Bloodstone::GetModifierPreAttack_BonusDamage  (line 162, @0x0000000002d547e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Bloodstone::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_Bloodstone *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Bloodstone::GetModifierHealthBonus  (line 167, @0x0000000002d54800, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Bloodstone::GetModifierHealthBonus(
        CDOTA_Modifier_Item_Bloodstone *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Bloodstone::GetModifierManaBonus  (line 172, @0x0000000002d54820, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Bloodstone::GetModifierManaBonus(
        CDOTA_Modifier_Item_Bloodstone *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_mana;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Bloodstone::GetModifierPercentageManaRegen  (line 177, @0x0000000002d54840, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Bloodstone::GetModifierPercentageManaRegen(
        CDOTA_Modifier_Item_Bloodstone *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_mana_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Bloodstone::GetModifierConstantManaRegen  (line 182, @0x0000000002d55650, libserver.so)
// calls: CDOTA_Buff_Item::GetItem
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Bloodstone::GetModifierConstantManaRegen(
        CDOTA_Modifier_Item_Bloodstone *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff_Item::GetItem(this) == 0 )
    return 1uLL;
  result = CDOTA_Buff_Item::GetItem(this);
  *v3.m128i_i32 = *(*&result.m_eType + 972LL);
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Bloodstone::GetModifierConstantHealthRegen  (line 192, @0x0000000002d54860, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Bloodstone::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Item_Bloodstone *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_health_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Bloodstone::GetModifierConstantRespawnTime  (line 197, @0x0000000002d556a0, libserver.so)
// calls: CDOTA_Buff_Item::GetItem
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Bloodstone::GetModifierConstantRespawnTime(
        CDOTA_Modifier_Item_Bloodstone *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff_Item::GetItem(this) == 0 )
    return 1uLL;
  result = CDOTA_Buff_Item::GetItem(this);
  *v3.m128i_i32 = -*(*&result.m_eType + 972LL) * this->respawn_time_reduction;
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Bloodstone::GetModifierConstantDeathGoldCost  (line 207, @0x0000000002d55700, libserver.so)
// calls: CDOTA_Buff_Item::GetItem
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Bloodstone::GetModifierConstantDeathGoldCost(
        CDOTA_Modifier_Item_Bloodstone *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff_Item::GetItem(this) == 0 )
    return 1uLL;
  *v3.m128i_i32 = (CDOTA_Buff_Item::GetItem(this)->m_iCurrentCharges.m_Value * this->death_gold_reduction);
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Bloodstone::OnDeath  (line 217, @0x0000000002d5d6b0, libserver.so)  // inlines: AttackerNPC, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_Buff_Item::GetItem, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::Heal, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex (20 total)
// strings: "particles/items_fx/bloodstone_heal.vpcf", "charge_range"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Bloodstone::OnDeath(
        CDOTA_Modifier_Item_Bloodstone *const this,
        const CModifierParams *const params)
{
  CEntityInstance *v3; // rax
  CEntityInstance *v4; // rax
  CEntityInstance *v5; // r12
  CDOTA_BaseNPC *v7; // rax
  __m128i v8; // xmm2
  float v9; // r12d
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v11; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v13; // rax
  __int64 v14; // r13
  int i; // r12d
  unsigned __int16 *v16; // rdx
  int v17; // eax
  __int16 v18; // cx
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  CDOTABaseAbility *v22; // rax
  CDOTA_BaseNPC *v23; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  unsigned __int8 m_Value; // r12
  CEntityInstance *v28; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *Ability; // rax
  CEntityInstance *v31; // rax
  CDOTA_BaseNPC *v32; // r12
  CDOTA_BaseNPC *v33; // rax
  float v34; // xmm1_4
  CEntityInstance *v35; // rax
  int v36; // r12d
  CDOTA_BaseNPC *v37; // rax
  CDOTA_BaseNPC *v38; // rax
  CDOTA_UnitInventory *Inventory; // rax
  CDOTA_Item *ItemInInventory; // r12
  CDOTA_BaseNPC *v41; // r12
  EHANDLE *p_hunit; // [rsp+30h] [rbp-60h]
  CDOTA_Item *Item; // [rsp+38h] [rbp-58h]
  float v45; // [rsp+38h] [rbp-58h]
  int charge_range; // [rsp+40h] [rbp-50h] BYREF
  __int64 v47; // [rsp+48h] [rbp-48h]
  int v48; // [rsp+50h] [rbp-40h]
  int v49; // [rsp+54h] [rbp-3Ch]
  ModifierVariant_t result; // 0:rax.16

  p_hunit = &params->hunit;
  v3 = CEntityHandle::operator CEntityInstance *(&params->hunit);
  if ( v3 == 0 )
    goto LABEL_7;
  if ( BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
  {
    if ( (*(v3->_vptr_IHandleEntity + 436))(v3) != 0 )
      goto LABEL_7;
    v7 = CEntityHandle::operator CEntityInstance *(p_hunit);
    if ( v7 == 0 )
      goto LABEL_7;
    if ( v7->m_bIsDOTANPC && v7 == CDOTA_Buff::GetParent(this) )
      goto LABEL_13;
  }
  v4 = CEntityHandle::operator CEntityInstance *(p_hunit);
  v5 = v4;
  if ( v4 != 0 )
  {
    if ( BYTE3(v4[7]._vptr_IHandleEntity) == 0 )
    {
LABEL_5:
      if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 && (v5[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
      {
        m_Value = CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value;
        v28 = CEntityHandle::operator CEntityInstance *(p_hunit);
        if ( v28 == 0 || BYTE3(v28[7]._vptr_IHandleEntity) == 0 )
          v28 = 0;
        if ( m_Value != HIBYTE(v28[7].m_CScriptComponent) )
        {
          Parent = CDOTA_Buff::GetParent(this);
          if ( (*(Parent->_vptr_IHandleEntity + 408))(Parent) != 0 )
          {
            Ability = CDOTA_Buff::GetAbility(this);
            DotaRetrieveAbilityValue<int>(Ability, &charge_range, "charge_range");
            v45 = charge_range;
            v31 = CEntityHandle::operator CEntityInstance *(p_hunit);
            if ( v31 == 0 || (v32 = v31, BYTE3(v31[7]._vptr_IHandleEntity) == 0) )
              v32 = 0;
            v33 = CDOTA_Buff::GetParent(this);
            if ( CDOTA_BaseNPC::IsEntityInRange(v33, v32, v45, v34)
              || (v35 = CEntityHandle::operator CEntityInstance *(&params->hattacker)) != 0
              && BYTE3(v35[7]._vptr_IHandleEntity) != 0
              && (v36 = (*(v35->_vptr_IHandleEntity + 414))(v35),
                  v37 = CDOTA_Buff::GetParent(this),
                  v36 == (*(v37->_vptr_IHandleEntity + 414))(v37)) )
            {
              v38 = CDOTA_Buff::GetParent(this);
              Inventory = CDOTA_BaseNPC::GetInventory(v38);
              ItemInInventory = CDOTA_UnitInventory::FindItemInInventory(Inventory, "item_bloodstone", 1, 0, -1);
              if ( ItemInInventory != 0
                && ItemInInventory == CDOTA_Buff::GetAbility(this)
                && ItemInInventory->m_iState == 1 )
              {
                CDOTA_Item::AddCharges(ItemInInventory, 1);
              }
            }
          }
        }
      }
      goto LABEL_7;
    }
    v41 = (*(v4->_vptr_IHandleEntity + 390))(v4);
    if ( v41 == 0 || v41 != CDOTA_Buff::GetParent(this) )
    {
      v5 = CEntityHandle::operator CEntityInstance *(p_hunit);
      goto LABEL_5;
    }
LABEL_13:
    *&result.m_eType = 1;
    if ( params->bReincarnate )
      goto LABEL_8;
    *v8.m128i_i32 = this->heal_on_death_range;
    charge_range = 0;
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v9 = COERCE_FLOAT(_mm_cvtsi128_si32(v8));
    Caster = CDOTA_Buff::GetCaster(this);
    v11 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
    v13 = CDOTA_Buff::GetParent(this);
    FindUnitsInRadius(v13->m_iTeamNum.m_Value, AbsOrigin, Caster, v9, &charge_range, 1, 19, 16, 0, 0);
    Item = CDOTA_Buff_Item::GetItem(this);
    if ( charge_range > 0 )
    {
      v14 = 0;
      for ( i = 0; i < charge_range; ++i )
      {
        while ( 1 )
        {
          v16 = (v47 + v14);
          v17 = *(v47 + v14);
          if ( (v17 + 2) > 1 )
          {
            v18 = *v16;
            v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v16 >> 9) & 0x3F];
            if ( v19 != 0 )
            {
              v20 = &v19[v18 & 0x1FF];
              if ( v20 != 0 && v17 == v20->m_EHandle.m_Index )
              {
                m_pInstance = v20->m_pInstance;
                if ( v20->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                  break;
              }
            }
          }
          ++i;
          v14 += 4;
          if ( charge_range <= i )
            goto LABEL_26;
        }
        if ( Item != 0 )
        {
          v22 = CDOTA_Buff::GetAbility(this);
          CDOTA_BaseNPC::Heal(
            m_pInstance,
            (this->heal_on_death_base + Item->m_iCurrentCharges.m_Value * this->heal_on_death_per_charge),
            v22,
            0,
            1);
        }
        v23 = CDOTA_Buff::GetParent(this);
        ParticleManager = GetParticleManager();
        LODWORD(v23) = CDOTA_ParticleManager::CreateParticle(
                         ParticleManager,
                         "particles/items_fx/bloodstone_heal.vpcf",
                         1,
                         v23,
                         0,
                         0);
        v25 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v25, v23, 1, m_pInstance, 1, 0, vec3_invalid, 1);
        v26 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v26, v23);
        v14 += 4;
      }
    }
LABEL_26:
    if ( Item != 0 )
      CDOTA_Item::SetCurrentCharges(Item, (Item->m_iCurrentCharges.m_Value * this->on_death_removal));
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&charge_range);
    v5 = CEntityHandle::operator CEntityInstance *(p_hunit);
    goto LABEL_5;
  }
LABEL_7:
  *&result.m_eType = 1;
LABEL_8:
  result.m_szVal = 0;
  return result;
}


