// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_ring_of_basilius.cpp:27
class CDOTA_Item_Recipe_Ring_Of_Basilius : public CDOTA_Item {
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
	CDOTA_Item_Recipe_Ring_Of_Basilius(CDOTA_Item_Recipe_Ring_Of_Basilius &);
	CDOTA_Item_Recipe_Ring_Of_Basilius(CDOTA_Item_Recipe_Ring_Of_Basilius &);
	CDOTA_Item_Recipe_Ring_Of_Basilius();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_Ring_Of_Basilius();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_ring_of_basilius.cpp:39
class CDOTA_Modifier_Item_Ring_Of_Basilius_Aura : public CDOTA_Buff_Item {
public:

	bool m_bAppliesToCreeps;  // +0xba8

private:

	int aura_radius;  // +0xbac
	CDOTA_Modifier_Item_Ring_Of_Basilius_Aura();
	virtual void OnCreated(KeyValues *);
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraRadius();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Item_Ring_Of_Basilius_Aura();

	// vtable[57] OnCreated
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[41] GetAuraRadius
	// vtable[14] IsPurgable
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_ring_of_basilius.cpp:78
class CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus : public CDOTA_Buff {
public:

private:

	int aura_bonus_armor;  // +0xba8
	float aura_mana_regen;  // +0xbac
	CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPhysicalArmorBonusUnique(const CModifierParams &);
	ModifierVariant_t GetModifierConstantManaRegen(const CModifierParams &);
	virtual const char * GetTexture();
	virtual ~CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[32] GetTexture
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_ring_of_basilius.cpp:133
class CDOTA_Item_Ring_Of_Basilius : public CDOTA_Item {
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
	CDOTA_Item_Ring_Of_Basilius(CDOTA_Item_Ring_Of_Basilius &);
	CDOTA_Item_Ring_Of_Basilius(CDOTA_Item_Ring_Of_Basilius &);
	CDOTA_Item_Ring_Of_Basilius();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual void OnEquip();
	virtual void OnUnequip();
	virtual void OnToggle();
	virtual bool ResetToggleOnRespawn();
	virtual ~CDOTA_Item_Ring_Of_Basilius();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[333] OnEquip
	// vtable[334] OnUnequip
	// vtable[270] OnToggle
	// vtable[281] ResetToggleOnRespawn
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_ring_of_basilius.cpp:153
class C_CDOTA_Item_Ring_Of_Basilius_MapInstall {
	C_CDOTA_Item_Ring_Of_Basilius_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_ring_of_basilius.cpp:236
class CDOTA_Modifier_Item_Ring_Of_Basilius : public CDOTA_Buff_Item {
public:

private:

	int bonus_damage;  // +0xba8
	int bonus_armor;  // +0xbac
	CDOTA_Modifier_Item_Ring_Of_Basilius();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_Ring_Of_Basilius();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_Ring_Of_Basilius::~CDOTA_Item_Recipe_Ring_Of_Basilius  (line 27, @0x0000000002df3190, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_Ring_Of_Basilius::~CDOTA_Item_Recipe_Ring_Of_Basilius(
        CDOTA_Item_Recipe_Ring_Of_Basilius *const this)
{
  this->_vptr_IHandleEntity = &off_474A730;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_Ring_Of_Basilius::~CDOTA_Item_Recipe_Ring_Of_Basilius  (line 27, @0x0000000002df31b0, libserver.so)  // inlines: ~CDOTA_Item_Recipe_Ring_Of_Basilius
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_Ring_Of_Basilius::~CDOTA_Item_Recipe_Ring_Of_Basilius(
        CDOTA_Item_Recipe_Ring_Of_Basilius *const this)
{
  this->_vptr_IHandleEntity = &off_474A730;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_Ring_Of_Basilius::Schema_DynamicBinding  (line 29, @0x0000000002deebf0, libserver.so)
// globals: CDOTA_Item_Recipe_Ring_Of_Basilius::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Ring_Of_Basilius::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Ring_Of_Basilius *const this)
{
  return CDOTA_Item_Recipe_Ring_Of_Basilius::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Ring_Of_Basilius::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 29, @0x0000000002deec00, libserver.so)
// globals: CDOTA_Item_Recipe_Ring_Of_Basilius::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_Ring_Of_Basilius::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_Ring_Of_Basilius::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Ring_Of_Basilius::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Ring_Of_Basilius::CEntityInstanceEntityClass::DestructInstance  (line 29, @0x0000000002deec10, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_Ring_Of_Basilius>
void __fastcall CDOTA_Item_Recipe_Ring_Of_Basilius::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_Ring_Of_Basilius::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_Ring_Of_Basilius::CEntityInstanceEntityClass::FreeInstance  (line 29, @0x0000000002deec30, libserver.so)
void __fastcall CDOTA_Item_Recipe_Ring_Of_Basilius::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_Ring_Of_Basilius::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_Ring_Of_Basilius::CEntityInstanceEntityClass::CanAllocate  (line 29, @0x0000000002deec50, libserver.so)
bool __fastcall CDOTA_Item_Recipe_Ring_Of_Basilius::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_Ring_Of_Basilius::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_Ring_Of_Basilius::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 29, @0x0000000002deec60, libserver.so)
// globals: CDOTA_Item_Recipe_Ring_Of_Basilius::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_Ring_Of_Basilius::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_Ring_Of_Basilius::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_Ring_Of_Basilius::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_Ring_Of_Basilius::CEntityInstanceEntityClass::AllocateInstance  (line 29, @0x0000000002df0d00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_Ring_Of_Basilius::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_Ring_Of_Basilius::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_Ring_Of_Basilius::CEntityInstanceEntityClass::ConstructInstance  (line 29, @0x0000000002df20f0, libserver.so)  // inlines: CDOTA_Item_Recipe_Ring_Of_Basilius, Construct<CDOTA_Item_Recipe_Ring_Of_Basilius>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_Ring_Of_Basilius::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_Ring_Of_Basilius::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_474A730;
  }
  return p;
}


// CDOTA_Item_Recipe_Ring_Of_Basilius::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002df53a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_Ring_Of_Basilius::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Ring_Of_Basilius::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_Ring_Of_Basilius::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 29, @0x0000000002df53c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_Ring_Of_Basilius::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_Ring_Of_Basilius::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_Ring_Of_Basilius::GetEntityClassInternal  (line 29, @0x0000000002dfa000, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_06.cpp
// strings: "item_recipe_ring_of_basilius", "CDOTA_Item_Recipe_Ring_Of_Basilius"
// globals: `guard variable for'CDOTA_Item_Recipe_Ring_Of_Basilius::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ring_Of_BasiliusClass, CDOTA_Item_Recipe_Ring_Of_Basilius::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ring_Of_BasiliusClass, __dso_handle, CDOTA_Item_Recipe_Ring_Of_Basilius::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_Ring_Of_Basilius::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ring_Of_BasiliusClassInfo, CDOTA_Item_Recipe_Ring_Of_Basilius::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ring_Of_BasiliusClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_Ring_Of_Basilius::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_Ring_Of_Basilius::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ring_Of_BasiliusClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Ring_Of_Basilius::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ring_Of_BasiliusClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_Ring_Of_Basilius::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ring_Of_BasiliusClass);
    CDOTA_Item_Recipe_Ring_Of_Basilius::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ring_Of_BasiliusClass._vptr_CEntityClass = off_474A6B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Ring_Of_Basilius::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ring_Of_BasiliusClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_Ring_Of_Basilius::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_Ring_Of_Basilius::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ring_Of_BasiliusClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_Ring_Of_BasiliusClass != 0 )
    return &CDOTA_Item_Recipe_Ring_Of_Basilius::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ring_Of_BasiliusClass;
  if ( `guard variable for'CDOTA_Item_Recipe_Ring_Of_Basilius::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ring_Of_BasiliusClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_Ring_Of_Basilius::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ring_Of_BasiliusClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_Ring_Of_Basilius::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ring_Of_BasiliusClassInfo,
      "CDOTA_Item_Recipe_Ring_Of_Basilius",
      "item_recipe_ring_of_basilius",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_Ring_Of_Basilius::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ring_Of_BasiliusClassInfo);
  }
  CDOTA_Item_Recipe_Ring_Of_Basilius::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ring_Of_BasiliusClass.m_pClassInfo = &CDOTA_Item_Recipe_Ring_Of_Basilius::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ring_Of_BasiliusClassInfo;
  CDOTA_Item_Recipe_Ring_Of_Basilius::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ring_Of_BasiliusClass.m_pBaseClassInfo = CDOTA_Item_Recipe_Ring_Of_Basilius::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ring_Of_BasiliusClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_Ring_Of_BasiliusClass = &CDOTA_Item_Recipe_Ring_Of_Basilius::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ring_Of_BasiliusClass;
  CDOTA_Item_Recipe_Ring_Of_Basilius::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_Ring_Of_BasiliusClassInfo.m_pClass = &CDOTA_Item_Recipe_Ring_Of_Basilius::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ring_Of_BasiliusClass;
  CDOTA_Item_Recipe_Ring_Of_Basilius::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ring_Of_BasiliusClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_Ring_Of_BasiliusClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_Ring_Of_Basilius::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_Ring_Of_BasiliusClass;
}


// CDOTA_Modifier_Item_Ring_Of_Basilius_Aura::~CDOTA_Modifier_Item_Ring_Of_Basilius_Aura  (line 39, @0x0000000002df19c0, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Ring_Of_Basilius_Aura::~CDOTA_Modifier_Item_Ring_Of_Basilius_Aura(
        CDOTA_Modifier_Item_Ring_Of_Basilius_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Ring_Of_Basilius_Aura::~CDOTA_Modifier_Item_Ring_Of_Basilius_Aura  (line 39, @0x0000000002df19e0, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Ring_Of_Basilius_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Ring_Of_Basilius_Aura::~CDOTA_Modifier_Item_Ring_Of_Basilius_Aura(
        CDOTA_Modifier_Item_Ring_Of_Basilius_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Ring_Of_Basilius_Aura::IsAura  (line 45, @0x0000000002deec70, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Ring_Of_Basilius_Aura::IsAura(
        CDOTA_Modifier_Item_Ring_Of_Basilius_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Ring_Of_Basilius_Aura::GetModifierAura  (line 46, @0x0000000002deec80, libserver.so)
// strings: "modifier_item_ring_of_basilius_aura_bonus"
const char *__fastcall CDOTA_Modifier_Item_Ring_Of_Basilius_Aura::GetModifierAura(
        CDOTA_Modifier_Item_Ring_Of_Basilius_Aura *const this)
{
  return "modifier_item_ring_of_basilius_aura_bonus";
}


// CDOTA_Modifier_Item_Ring_Of_Basilius_Aura::GetAuraSearchTeam  (line 48, @0x0000000002deec90, libserver.so)
int __fastcall CDOTA_Modifier_Item_Ring_Of_Basilius_Aura::GetAuraSearchTeam(
        CDOTA_Modifier_Item_Ring_Of_Basilius_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_Ring_Of_Basilius_Aura::GetAuraSearchType  (line 49, @0x0000000002deeca0, libserver.so)
int __fastcall CDOTA_Modifier_Item_Ring_Of_Basilius_Aura::GetAuraSearchType(
        CDOTA_Modifier_Item_Ring_Of_Basilius_Aura *const this)
{
  return !this->m_bAppliesToCreeps ? 1 : 19;
}


// CDOTA_Modifier_Item_Ring_Of_Basilius_Aura::GetAuraRadius  (line 50, @0x0000000002deecc0, libserver.so)
int __fastcall CDOTA_Modifier_Item_Ring_Of_Basilius_Aura::GetAuraRadius(
        CDOTA_Modifier_Item_Ring_Of_Basilius_Aura *const this)
{
  return this->aura_radius;
}


// CDOTA_Modifier_Item_Ring_Of_Basilius_Aura::IsPurgable  (line 52, @0x0000000002deecd0, libserver.so)
bool __fastcall CDOTA_Modifier_Item_Ring_Of_Basilius_Aura::IsPurgable(
        CDOTA_Modifier_Item_Ring_Of_Basilius_Aura *const this)
{
  return 0;
}


// CDOTA_Modifier_Item_Ring_Of_Basilius_Aura::OnCreated  (line 67, @0x0000000002dec9b0, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>
void __fastcall CDOTA_Modifier_Item_Ring_Of_Basilius_Aura::OnCreated(
        CDOTA_Modifier_Item_Ring_Of_Basilius_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->aura_radius, "aura_radius");
  this->m_bAppliesToCreeps = 1;
}


// CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus::~CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus  (line 78, @0x0000000002df1e60, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus::~CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus(
        CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus *const this)
{
  this->_vptr_CDOTA_Buff = &off_474B610;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus::~CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus  (line 78, @0x0000000002df1e80, libserver.so)  // inlines: ~CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus::~CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus(
        CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus *const this)
{
  this->_vptr_CDOTA_Buff = &off_474B610;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus::GetTexture  (line 87, @0x0000000002deece0, libserver.so)
// strings: "item_ring_of_basilius_active"
const char *__fastcall CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus::GetTexture(
        CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus *const this)
{
  return "item_ring_of_basilius_active";
}


// CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus::OnCreated  (line 99, @0x0000000002dedb90, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "aura_bonus_armor", "aura_mana_regen"
void __fastcall CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus::OnCreated(
        CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->aura_bonus_armor, "aura_bonus_armor");
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    this->aura_mana_regen = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "aura_mana_regen", -1, 0);
  else
    this->aura_mana_regen = 0.0;
}


// CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus::DeclareFunctions  (line 107, @0x0000000002de3e20, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus::GetModifierPhysicalArmorBonusUnique(CModifierParams const&), CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus::GetModifierConstantManaRegen(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus::DeclareFunctions(
        CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus *const this)
{
  this->m_Functions[46].__pfn = CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus::GetModifierPhysicalArmorBonusUnique;
  this->m_Functions[46].__delta = 0;
  this->m_Functions[53].__delta = 0;
  this->m_Functions[53].__pfn = CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus::GetModifierConstantManaRegen;
}


// CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus::GetModifierConstantManaRegen  (line 115, @0x0000000002de3e60, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus::GetModifierConstantManaRegen(
        CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->aura_mana_regen) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus::GetModifierPhysicalArmorBonusUnique  (line 122, @0x0000000002de3e80, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus::GetModifierPhysicalArmorBonusUnique(
        CDOTA_Modifier_Item_Ring_Of_Basilius_Aura_Bonus *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->aura_bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Item_Ring_Of_Basilius::~CDOTA_Item_Ring_Of_Basilius  (line 133, @0x0000000002df31e0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Ring_Of_Basilius::~CDOTA_Item_Ring_Of_Basilius(CDOTA_Item_Ring_Of_Basilius *const this)
{
  this->_vptr_IHandleEntity = &off_474B970;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Ring_Of_Basilius::~CDOTA_Item_Ring_Of_Basilius  (line 133, @0x0000000002df3200, libserver.so)  // inlines: ~CDOTA_Item_Ring_Of_Basilius
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Ring_Of_Basilius::~CDOTA_Item_Ring_Of_Basilius(CDOTA_Item_Ring_Of_Basilius *const this)
{
  this->_vptr_IHandleEntity = &off_474B970;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Ring_Of_Basilius::Schema_DynamicBinding  (line 135, @0x0000000002deecf0, libserver.so)
// globals: CDOTA_Item_Ring_Of_Basilius::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Ring_Of_Basilius::Schema_DynamicBinding(
        const CDOTA_Item_Ring_Of_Basilius *const this)
{
  return CDOTA_Item_Ring_Of_Basilius::s_pSchemaBinding;
}


// CDOTA_Item_Ring_Of_Basilius::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 135, @0x0000000002deed00, libserver.so)
// globals: CDOTA_Item_Ring_Of_Basilius::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Ring_Of_Basilius::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Ring_Of_Basilius::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Ring_Of_Basilius::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Ring_Of_Basilius::CEntityInstanceEntityClass::DestructInstance  (line 135, @0x0000000002deed10, libserver.so)  // inlines: Destruct<CDOTA_Item_Ring_Of_Basilius>
void __fastcall CDOTA_Item_Ring_Of_Basilius::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Ring_Of_Basilius::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Ring_Of_Basilius::CEntityInstanceEntityClass::FreeInstance  (line 135, @0x0000000002deed30, libserver.so)
void __fastcall CDOTA_Item_Ring_Of_Basilius::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Ring_Of_Basilius::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Ring_Of_Basilius::CEntityInstanceEntityClass::CanAllocate  (line 135, @0x0000000002deed50, libserver.so)
bool __fastcall CDOTA_Item_Ring_Of_Basilius::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Ring_Of_Basilius::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Ring_Of_Basilius::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 135, @0x0000000002deed60, libserver.so)
// globals: CDOTA_Item_Ring_Of_Basilius::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Ring_Of_Basilius::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Ring_Of_Basilius::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Ring_Of_Basilius::s_pSchemaBinding;
}


// CDOTA_Item_Ring_Of_Basilius::CEntityInstanceEntityClass::AllocateInstance  (line 135, @0x0000000002df0d40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Ring_Of_Basilius::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Ring_Of_Basilius::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Ring_Of_Basilius::CEntityInstanceEntityClass::ConstructInstance  (line 135, @0x0000000002df2120, libserver.so)  // inlines: CDOTA_Item_Ring_Of_Basilius, Construct<CDOTA_Item_Ring_Of_Basilius>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Ring_Of_Basilius::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Ring_Of_Basilius::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_474B970;
  }
  return p;
}


// CDOTA_Item_Ring_Of_Basilius::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 135, @0x0000000002df53f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Ring_Of_Basilius::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Ring_Of_Basilius::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Ring_Of_Basilius::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 135, @0x0000000002df5410, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Ring_Of_Basilius::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Ring_Of_Basilius::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Ring_Of_Basilius::GetEntityClassInternal  (line 135, @0x0000000002dfa150, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_06.cpp
// strings: "item_ring_of_basilius", "CDOTA_Item_Ring_Of_Basilius"
// globals: `guard variable for'CDOTA_Item_Ring_Of_Basilius::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ring_Of_BasiliusClass, CDOTA_Item_Ring_Of_Basilius::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ring_Of_BasiliusClass, __dso_handle, CDOTA_Item_Ring_Of_Basilius::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Ring_Of_Basilius::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ring_Of_BasiliusClassInfo, CDOTA_Item_Ring_Of_Basilius::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ring_Of_BasiliusClassInfo
CEntityClass *__cdecl CDOTA_Item_Ring_Of_Basilius::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Ring_Of_Basilius::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ring_Of_BasiliusClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Ring_Of_Basilius::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ring_Of_BasiliusClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Ring_Of_Basilius::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ring_Of_BasiliusClass);
    CDOTA_Item_Ring_Of_Basilius::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ring_Of_BasiliusClass._vptr_CEntityClass = off_474B8F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Ring_Of_Basilius::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ring_Of_BasiliusClass);
    __cxa_atexit(
      CDOTA_Item_Ring_Of_Basilius::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Ring_Of_Basilius::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ring_Of_BasiliusClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Ring_Of_BasiliusClass != 0 )
    return &CDOTA_Item_Ring_Of_Basilius::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ring_Of_BasiliusClass;
  if ( `guard variable for'CDOTA_Item_Ring_Of_Basilius::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ring_Of_BasiliusClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Ring_Of_Basilius::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ring_Of_BasiliusClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Ring_Of_Basilius::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ring_Of_BasiliusClassInfo,
      "CDOTA_Item_Ring_Of_Basilius",
      "item_ring_of_basilius",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Ring_Of_Basilius::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ring_Of_BasiliusClassInfo);
  }
  CDOTA_Item_Ring_Of_Basilius::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ring_Of_BasiliusClass.m_pClassInfo = &CDOTA_Item_Ring_Of_Basilius::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ring_Of_BasiliusClassInfo;
  CDOTA_Item_Ring_Of_Basilius::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ring_Of_BasiliusClass.m_pBaseClassInfo = CDOTA_Item_Ring_Of_Basilius::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ring_Of_BasiliusClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Ring_Of_BasiliusClass = &CDOTA_Item_Ring_Of_Basilius::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ring_Of_BasiliusClass;
  CDOTA_Item_Ring_Of_Basilius::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Ring_Of_BasiliusClassInfo.m_pClass = &CDOTA_Item_Ring_Of_Basilius::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ring_Of_BasiliusClass;
  CDOTA_Item_Ring_Of_Basilius::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ring_Of_BasiliusClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Ring_Of_BasiliusClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Ring_Of_Basilius::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Ring_Of_BasiliusClass;
}


// CDOTA_Item_Ring_Of_Basilius::GetIntrinsicModifierName  (line 138, @0x0000000002deed70, libserver.so)
// strings: "modifier_item_ring_of_basilius"
const char *__fastcall CDOTA_Item_Ring_Of_Basilius::GetIntrinsicModifierName(CDOTA_Item_Ring_Of_Basilius *const this)
{
  return "modifier_item_ring_of_basilius";
}


// CDOTA_Item_Ring_Of_Basilius::ResetToggleOnRespawn  (line 144, @0x0000000002deed80, libserver.so)
bool __fastcall CDOTA_Item_Ring_Of_Basilius::ResetToggleOnRespawn(CDOTA_Item_Ring_Of_Basilius *const this)
{
  return 0;
}


// CDOTA_Item_Ring_Of_Basilius::YouForgotToImplementOrDeclareServerClass  (line 153, @0x0000000002de3ea0, libserver.so)
int __fastcall CDOTA_Item_Ring_Of_Basilius::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Item_Ring_Of_Basilius *const this)
{
  return 0;
}


// CDOTA_Item_Ring_Of_Basilius::GetServerClass  (line 153, @0x0000000002de7df0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_Ring_Of_Basilius::GetServerClass(CDOTA_Item_Ring_Of_Basilius *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  CEntityClass *v4; // rdx
  CEntityClassInfo *v5; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
    {
      v4 = m_pBaseClassInfo->m_pClass;
      result = v4->m_pGameClass;
      if ( result == 0 )
      {
        v5 = v4->m_pBaseClassInfo;
        if ( v5 != 0 )
          return CEntityClass::GetGameClass(v5->m_pClass, 0);
      }
    }
  }
  return result;
}


// CDOTA_Item_Ring_Of_Basilius::OnEquip  (line 162, @0x0000000002de4dd0, libserver.so)
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTA_Item::OnEquip, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_item_ring_of_basilius", "modifier_item_ring_of_basilius_aura"
void __fastcall CDOTA_Item_Ring_Of_Basilius::OnEquip(CDOTA_Item_Ring_Of_Basilius *const this)
{
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v3; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-28h]

  v5 = __readfsqword(0x28u);
  if ( (*(this->_vptr_IHandleEntity + 348))(this) == 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_item_ring_of_basilius");
    Caster = CDOTABaseAbility::GetCaster(this);
    v3 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_item_ring_of_basilius_aura", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
  CDOTA_Item::OnEquip(this);
}


// CDOTA_Item_Ring_Of_Basilius::OnUnequip  (line 177, @0x0000000002de4f90, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_Item::OnUnequip
// strings: "modifier_item_ring_of_basilius_aura"
void __fastcall CDOTA_Item_Ring_Of_Basilius::OnUnequip(CDOTA_Item_Ring_Of_Basilius *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  if ( (*(this->_vptr_IHandleEntity + 348))(this) == 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_item_ring_of_basilius_aura");
  }
  CDOTA_Item::OnUnequip(this);
}


// CDOTA_Item_Ring_Of_Basilius::OnToggle  (line 190, @0x0000000002de50b0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::OnToggle, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_item_ring_of_basilius_aura"
void __fastcall CDOTA_Item_Ring_Of_Basilius::OnToggle(CDOTA_Item_Ring_Of_Basilius *const this)
{
  CDOTA_BaseNPC *v2; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax

  if ( CDOTABaseAbility::GetCaster(this) == 0
    || (v2 = CDOTABaseAbility::GetCaster(this), (*(v2->_vptr_IHandleEntity + 408))(v2) != 0) )
  {
    CDOTABaseAbility::OnToggle(this);
    Caster = CDOTABaseAbility::GetCaster(this);
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_item_ring_of_basilius_aura", 0);
    if ( ModifierByName != 0 )
      LOBYTE(ModifierByName[1]._vptr_CDOTA_Buff) = !this->m_bToggleState.m_Value;
    (*(this->_vptr_IHandleEntity + 297))(this);
  }
}


// CDOTA_Modifier_Item_Ring_Of_Basilius::~CDOTA_Modifier_Item_Ring_Of_Basilius  (line 236, @0x0000000002df1970, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_Ring_Of_Basilius::~CDOTA_Modifier_Item_Ring_Of_Basilius(
        CDOTA_Modifier_Item_Ring_Of_Basilius *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_Ring_Of_Basilius::~CDOTA_Modifier_Item_Ring_Of_Basilius  (line 236, @0x0000000002df1990, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_Ring_Of_Basilius
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_Ring_Of_Basilius::~CDOTA_Modifier_Item_Ring_Of_Basilius(
        CDOTA_Modifier_Item_Ring_Of_Basilius *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_Ring_Of_Basilius::OnCreated  (line 255, @0x0000000002dec9f0, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>
void __fastcall CDOTA_Modifier_Item_Ring_Of_Basilius::OnCreated(
        CDOTA_Modifier_Item_Ring_Of_Basilius *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->bonus_damage, "bonus_damage");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->bonus_armor, "bonus_armor");
}


// CDOTA_Modifier_Item_Ring_Of_Basilius::DeclareFunctions  (line 263, @0x0000000002de3eb0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_Ring_Of_Basilius::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Item_Ring_Of_Basilius::GetModifierPhysicalArmorBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_Ring_Of_Basilius::DeclareFunctions(
        CDOTA_Modifier_Item_Ring_Of_Basilius *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_Ring_Of_Basilius::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[45].__delta = 0;
  this->m_Functions[45].__pfn = CDOTA_Modifier_Item_Ring_Of_Basilius::GetModifierPhysicalArmorBonus;
}


// CDOTA_Modifier_Item_Ring_Of_Basilius::GetModifierPreAttack_BonusDamage  (line 271, @0x0000000002de3ef0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Ring_Of_Basilius::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_Ring_Of_Basilius *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_Ring_Of_Basilius::GetModifierPhysicalArmorBonus  (line 278, @0x0000000002de3f10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_Ring_Of_Basilius::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Item_Ring_Of_Basilius *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


