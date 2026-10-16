// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/items/dota_item_ring_of_aquila.cpp:26
class CDOTA_Item_Recipe_RingOfAquila : public CDOTA_Item {
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
	CDOTA_Item_Recipe_RingOfAquila(CDOTA_Item_Recipe_RingOfAquila &);
	CDOTA_Item_Recipe_RingOfAquila(CDOTA_Item_Recipe_RingOfAquila &);
	CDOTA_Item_Recipe_RingOfAquila();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Item_Recipe_RingOfAquila();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 1000
};

// src/game/shared/dota/items/dota_item_ring_of_aquila.cpp:38
class CDOTA_Modifier_Item_RingOfAquila_Aura : public CDOTA_Buff_Item {
public:

	bool m_bAppliesToCreeps;  // +0xba8

private:

	int aura_radius;  // +0xbac
	CDOTA_Modifier_Item_RingOfAquila_Aura();
	virtual void OnCreated(KeyValues *);
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraRadius();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Item_RingOfAquila_Aura();

	// vtable[57] OnCreated
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[41] GetAuraRadius
	// vtable[14] IsPurgable
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_ring_of_aquila.cpp:75
class CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus : public CDOTA_Buff {
public:

private:

	int aura_bonus_armor;  // +0xba8
	float aura_mana_regen;  // +0xbac
	CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPhysicalArmorBonusUnique(const CModifierParams &);
	ModifierVariant_t GetModifierConstantManaRegen(const CModifierParams &);
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[11] IsHidden
	// sizeof = 2992
};

// src/game/shared/dota/items/dota_item_ring_of_aquila.cpp:127
class CDOTA_Item_RingOfAquila : public CDOTA_Item {
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
	CDOTA_Item_RingOfAquila(CDOTA_Item_RingOfAquila &);
	CDOTA_Item_RingOfAquila(CDOTA_Item_RingOfAquila &);
	CDOTA_Item_RingOfAquila();
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
	virtual ~CDOTA_Item_RingOfAquila();
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

// src/game/shared/dota/items/dota_item_ring_of_aquila.cpp:147
class C_CDOTA_Item_RingOfAquila_MapInstall {
	C_CDOTA_Item_RingOfAquila_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/items/dota_item_ring_of_aquila.cpp:230
class CDOTA_Modifier_Item_RingOfAquila : public CDOTA_Buff_Item {
public:

private:

	int bonus_strength;  // +0xba8
	int bonus_agility;  // +0xbac
	int bonus_intellect;  // +0xbb0
	int bonus_damage;  // +0xbb4
	int bonus_armor;  // +0xbb8
	CDOTA_Modifier_Item_RingOfAquila();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Intellect(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_Item_RingOfAquila();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 3008
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Item_Recipe_RingOfAquila::~CDOTA_Item_Recipe_RingOfAquila  (line 26, @0x0000000002df30f0, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_Recipe_RingOfAquila::~CDOTA_Item_Recipe_RingOfAquila(
        CDOTA_Item_Recipe_RingOfAquila *const this)
{
  this->_vptr_IHandleEntity = &off_4748350;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_Recipe_RingOfAquila::~CDOTA_Item_Recipe_RingOfAquila  (line 26, @0x0000000002df3110, libserver.so)  // inlines: ~CDOTA_Item_Recipe_RingOfAquila
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_Recipe_RingOfAquila::~CDOTA_Item_Recipe_RingOfAquila(
        CDOTA_Item_Recipe_RingOfAquila *const this)
{
  this->_vptr_IHandleEntity = &off_4748350;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_Recipe_RingOfAquila::Schema_DynamicBinding  (line 28, @0x0000000002deea50, libserver.so)
// globals: CDOTA_Item_Recipe_RingOfAquila::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_RingOfAquila::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_RingOfAquila *const this)
{
  return CDOTA_Item_Recipe_RingOfAquila::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_RingOfAquila::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 28, @0x0000000002deea60, libserver.so)
// globals: CDOTA_Item_Recipe_RingOfAquila::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_Recipe_RingOfAquila::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_Recipe_RingOfAquila::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_RingOfAquila::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_RingOfAquila::CEntityInstanceEntityClass::DestructInstance  (line 28, @0x0000000002deea70, libserver.so)  // inlines: Destruct<CDOTA_Item_Recipe_RingOfAquila>
void __fastcall CDOTA_Item_Recipe_RingOfAquila::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_Recipe_RingOfAquila::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_Recipe_RingOfAquila::CEntityInstanceEntityClass::FreeInstance  (line 28, @0x0000000002deea90, libserver.so)
void __fastcall CDOTA_Item_Recipe_RingOfAquila::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_Recipe_RingOfAquila::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_Recipe_RingOfAquila::CEntityInstanceEntityClass::CanAllocate  (line 28, @0x0000000002deeab0, libserver.so)
bool __fastcall CDOTA_Item_Recipe_RingOfAquila::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_Recipe_RingOfAquila::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_Recipe_RingOfAquila::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 28, @0x0000000002deeac0, libserver.so)
// globals: CDOTA_Item_Recipe_RingOfAquila::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_Recipe_RingOfAquila::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_Recipe_RingOfAquila::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_Recipe_RingOfAquila::s_pSchemaBinding;
}


// CDOTA_Item_Recipe_RingOfAquila::CEntityInstanceEntityClass::AllocateInstance  (line 28, @0x0000000002df0c80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_Recipe_RingOfAquila::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_Recipe_RingOfAquila::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_Recipe_RingOfAquila::CEntityInstanceEntityClass::ConstructInstance  (line 28, @0x0000000002df2090, libserver.so)  // inlines: CDOTA_Item_Recipe_RingOfAquila, Construct<CDOTA_Item_Recipe_RingOfAquila>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_Recipe_RingOfAquila::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_Recipe_RingOfAquila::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4748350;
  }
  return p;
}


// CDOTA_Item_Recipe_RingOfAquila::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002df5300, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_Recipe_RingOfAquila::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_RingOfAquila::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_Recipe_RingOfAquila::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 28, @0x0000000002df5320, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_Recipe_RingOfAquila::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_Recipe_RingOfAquila::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_Recipe_RingOfAquila::GetEntityClassInternal  (line 28, @0x0000000002df9b20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_06.cpp
// strings: "item_recipe_ring_of_aquila", "CDOTA_Item_Recipe_RingOfAquila"
// globals: `guard variable for'CDOTA_Item_Recipe_RingOfAquila::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RingOfAquilaClass, CDOTA_Item_Recipe_RingOfAquila::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RingOfAquilaClass, __dso_handle, CDOTA_Item_Recipe_RingOfAquila::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_Recipe_RingOfAquila::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RingOfAquilaClassInfo, CDOTA_Item_Recipe_RingOfAquila::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RingOfAquilaClassInfo
CEntityClass *__cdecl CDOTA_Item_Recipe_RingOfAquila::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_Recipe_RingOfAquila::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RingOfAquilaClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_RingOfAquila::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RingOfAquilaClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_Recipe_RingOfAquila::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RingOfAquilaClass);
    CDOTA_Item_Recipe_RingOfAquila::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RingOfAquilaClass._vptr_CEntityClass = off_47482D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_RingOfAquila::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RingOfAquilaClass);
    __cxa_atexit(
      CDOTA_Item_Recipe_RingOfAquila::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_Recipe_RingOfAquila::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RingOfAquilaClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_Recipe_RingOfAquilaClass != 0 )
    return &CDOTA_Item_Recipe_RingOfAquila::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RingOfAquilaClass;
  if ( `guard variable for'CDOTA_Item_Recipe_RingOfAquila::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RingOfAquilaClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_Recipe_RingOfAquila::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RingOfAquilaClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_Recipe_RingOfAquila::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RingOfAquilaClassInfo,
      "CDOTA_Item_Recipe_RingOfAquila",
      "item_recipe_ring_of_aquila",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_Recipe_RingOfAquila::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RingOfAquilaClassInfo);
  }
  CDOTA_Item_Recipe_RingOfAquila::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RingOfAquilaClass.m_pClassInfo = &CDOTA_Item_Recipe_RingOfAquila::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RingOfAquilaClassInfo;
  CDOTA_Item_Recipe_RingOfAquila::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RingOfAquilaClass.m_pBaseClassInfo = CDOTA_Item_Recipe_RingOfAquila::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RingOfAquilaClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_Recipe_RingOfAquilaClass = &CDOTA_Item_Recipe_RingOfAquila::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RingOfAquilaClass;
  CDOTA_Item_Recipe_RingOfAquila::GetEntityClassInfo(void)::g_EntityCDOTA_Item_Recipe_RingOfAquilaClassInfo.m_pClass = &CDOTA_Item_Recipe_RingOfAquila::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RingOfAquilaClass;
  CDOTA_Item_Recipe_RingOfAquila::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RingOfAquilaClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_Recipe_RingOfAquilaClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_Recipe_RingOfAquila::GetEntityClassInternal(void)::g_EntityCDOTA_Item_Recipe_RingOfAquilaClass;
}


// CDOTA_Modifier_Item_RingOfAquila_Aura::~CDOTA_Modifier_Item_RingOfAquila_Aura  (line 38, @0x0000000002df1a60, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_RingOfAquila_Aura::~CDOTA_Modifier_Item_RingOfAquila_Aura(
        CDOTA_Modifier_Item_RingOfAquila_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_RingOfAquila_Aura::~CDOTA_Modifier_Item_RingOfAquila_Aura  (line 38, @0x0000000002df1a80, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_RingOfAquila_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_RingOfAquila_Aura::~CDOTA_Modifier_Item_RingOfAquila_Aura(
        CDOTA_Modifier_Item_RingOfAquila_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_RingOfAquila_Aura::IsAura  (line 44, @0x0000000002deead0, libserver.so)
bool __fastcall CDOTA_Modifier_Item_RingOfAquila_Aura::IsAura(CDOTA_Modifier_Item_RingOfAquila_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_RingOfAquila_Aura::GetModifierAura  (line 45, @0x0000000002deeae0, libserver.so)
// strings: "modifier_item_ring_of_aquila_aura_bonus"
const char *__fastcall CDOTA_Modifier_Item_RingOfAquila_Aura::GetModifierAura(
        CDOTA_Modifier_Item_RingOfAquila_Aura *const this)
{
  return "modifier_item_ring_of_aquila_aura_bonus";
}


// CDOTA_Modifier_Item_RingOfAquila_Aura::GetAuraSearchTeam  (line 47, @0x0000000002deeaf0, libserver.so)
int __fastcall CDOTA_Modifier_Item_RingOfAquila_Aura::GetAuraSearchTeam(
        CDOTA_Modifier_Item_RingOfAquila_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Item_RingOfAquila_Aura::GetAuraSearchType  (line 48, @0x0000000002deeb00, libserver.so)
int __fastcall CDOTA_Modifier_Item_RingOfAquila_Aura::GetAuraSearchType(
        CDOTA_Modifier_Item_RingOfAquila_Aura *const this)
{
  return !this->m_bAppliesToCreeps ? 1 : 19;
}


// CDOTA_Modifier_Item_RingOfAquila_Aura::GetAuraRadius  (line 49, @0x0000000002deeb20, libserver.so)
int __fastcall CDOTA_Modifier_Item_RingOfAquila_Aura::GetAuraRadius(CDOTA_Modifier_Item_RingOfAquila_Aura *const this)
{
  return this->aura_radius;
}


// CDOTA_Modifier_Item_RingOfAquila_Aura::IsPurgable  (line 51, @0x0000000002deeb30, libserver.so)
bool __fastcall CDOTA_Modifier_Item_RingOfAquila_Aura::IsPurgable(CDOTA_Modifier_Item_RingOfAquila_Aura *const this)
{
  return 0;
}


// CDOTA_Modifier_Item_RingOfAquila_Aura::OnCreated  (line 64, @0x0000000002dec8c0, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>
void __fastcall CDOTA_Modifier_Item_RingOfAquila_Aura::OnCreated(
        CDOTA_Modifier_Item_RingOfAquila_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->aura_radius, "aura_radius");
  this->m_bAppliesToCreeps = 1;
}


// CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus::~CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus  (line 75, @0x0000000002df1eb0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus::~CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus(
        CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus *const this)
{
  this->_vptr_CDOTA_Buff = &off_4749230;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus::~CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus  (line 75, @0x0000000002df1ed0, libserver.so)  // inlines: ~CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus::~CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus(
        CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus *const this)
{
  this->_vptr_CDOTA_Buff = &off_4749230;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus::IsHidden  (line 84, @0x0000000002deeb40, libserver.so)
bool __fastcall CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus::IsHidden(
        CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus *const this)
{
  return 0;
}


// CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus::OnCreated  (line 96, @0x0000000002dedb10, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "aura_bonus_armor", "aura_mana_regen"
void __fastcall CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus::OnCreated(
        CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus *const this,
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


// CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus::DeclareFunctions  (line 104, @0x0000000002de3c60, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus::GetModifierPhysicalArmorBonusUnique(CModifierParams const&), CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus::GetModifierConstantManaRegen(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus::DeclareFunctions(
        CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus *const this)
{
  this->m_Functions[46].__pfn = CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus::GetModifierPhysicalArmorBonusUnique;
  this->m_Functions[46].__delta = 0;
  this->m_Functions[53].__delta = 0;
  this->m_Functions[53].__pfn = CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus::GetModifierConstantManaRegen;
}


// CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus::GetModifierConstantManaRegen  (line 112, @0x0000000002de3ca0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus::GetModifierConstantManaRegen(
        CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->aura_mana_regen) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus::GetModifierPhysicalArmorBonusUnique  (line 119, @0x0000000002de3cc0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus::GetModifierPhysicalArmorBonusUnique(
        CDOTA_Modifier_Item_RingOfAquila_Aura_Bonus *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->aura_bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Item_RingOfAquila::~CDOTA_Item_RingOfAquila  (line 127, @0x0000000002df3140, libserver.so)
// calls: CDOTA_Item::~CDOTA_Item
void __fastcall CDOTA_Item_RingOfAquila::~CDOTA_Item_RingOfAquila(CDOTA_Item_RingOfAquila *const this)
{
  this->_vptr_IHandleEntity = &off_4749590;
  CDOTA_Item::~CDOTA_Item(this);
}


// CDOTA_Item_RingOfAquila::~CDOTA_Item_RingOfAquila  (line 127, @0x0000000002df3160, libserver.so)  // inlines: ~CDOTA_Item_RingOfAquila
// calls: CDOTA_Item::~CDOTA_Item, CBaseEntity::operator delete
void __fastcall CDOTA_Item_RingOfAquila::~CDOTA_Item_RingOfAquila(CDOTA_Item_RingOfAquila *const this)
{
  this->_vptr_IHandleEntity = &off_4749590;
  CDOTA_Item::~CDOTA_Item(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Item_RingOfAquila::Schema_DynamicBinding  (line 129, @0x0000000002deeb50, libserver.so)
// globals: CDOTA_Item_RingOfAquila::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_RingOfAquila::Schema_DynamicBinding(
        const CDOTA_Item_RingOfAquila *const this)
{
  return CDOTA_Item_RingOfAquila::s_pSchemaBinding;
}


// CDOTA_Item_RingOfAquila::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 129, @0x0000000002deeb60, libserver.so)
// globals: CDOTA_Item_RingOfAquila::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Item_RingOfAquila::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Item_RingOfAquila::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_RingOfAquila::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Item_RingOfAquila::CEntityInstanceEntityClass::DestructInstance  (line 129, @0x0000000002deeb70, libserver.so)  // inlines: Destruct<CDOTA_Item_RingOfAquila>
void __fastcall CDOTA_Item_RingOfAquila::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Item_RingOfAquila::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Item_RingOfAquila::CEntityInstanceEntityClass::FreeInstance  (line 129, @0x0000000002deeb90, libserver.so)
void __fastcall CDOTA_Item_RingOfAquila::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Item_RingOfAquila::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Item_RingOfAquila::CEntityInstanceEntityClass::CanAllocate  (line 129, @0x0000000002deebb0, libserver.so)
bool __fastcall CDOTA_Item_RingOfAquila::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Item_RingOfAquila::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Item_RingOfAquila::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 129, @0x0000000002deebc0, libserver.so)
// globals: CDOTA_Item_RingOfAquila::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Item_RingOfAquila::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Item_RingOfAquila::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Item_RingOfAquila::s_pSchemaBinding;
}


// CDOTA_Item_RingOfAquila::CEntityInstanceEntityClass::AllocateInstance  (line 129, @0x0000000002df0cc0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Item_RingOfAquila::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Item_RingOfAquila::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1000);
  memset(v1, 0, 0x3E8u);
  return v1;
}


// CDOTA_Item_RingOfAquila::CEntityInstanceEntityClass::ConstructInstance  (line 129, @0x0000000002df20c0, libserver.so)  // inlines: CDOTA_Item_RingOfAquila, Construct<CDOTA_Item_RingOfAquila>
// calls: CDOTA_Item::CDOTA_Item
CEntityInstance *__fastcall CDOTA_Item_RingOfAquila::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Item_RingOfAquila::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_Item::CDOTA_Item(p);
    *p = &off_4749590;
  }
  return p;
}


// CDOTA_Item_RingOfAquila::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 129, @0x0000000002df5350, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Item_RingOfAquila::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_RingOfAquila::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Item_RingOfAquila::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 129, @0x0000000002df5370, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Item_RingOfAquila::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Item_RingOfAquila::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Item_RingOfAquila::GetEntityClassInternal  (line 129, @0x0000000002df9c70, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_Item::InitScriptDesc, CDOTA_Item::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_item_06.cpp
// strings: "CDOTA_Item_RingOfAquila"
// globals: `guard variable for'CDOTA_Item_RingOfAquila::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfAquilaClass, CDOTA_Item_RingOfAquila::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfAquilaClass, __dso_handle, CDOTA_Item_RingOfAquila::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Item_RingOfAquila::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfAquilaClassInfo, CDOTA_Item_RingOfAquila::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfAquilaClassInfo
CEntityClass *__cdecl CDOTA_Item_RingOfAquila::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Item_RingOfAquila::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfAquilaClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_RingOfAquila::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfAquilaClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Item_RingOfAquila::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfAquilaClass);
    CDOTA_Item_RingOfAquila::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfAquilaClass._vptr_CEntityClass = off_4749510;
    __cxa_guard_release(&`guard variable for'CDOTA_Item_RingOfAquila::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfAquilaClass);
    __cxa_atexit(
      CDOTA_Item_RingOfAquila::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Item_RingOfAquila::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfAquilaClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Item_RingOfAquilaClass != 0 )
    return &CDOTA_Item_RingOfAquila::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfAquilaClass;
  if ( `guard variable for'CDOTA_Item_RingOfAquila::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfAquilaClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Item_RingOfAquila::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfAquilaClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Item::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Item_RingOfAquila::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfAquilaClassInfo,
      "CDOTA_Item_RingOfAquila",
      "item_ring_of_aquila",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Item_RingOfAquila::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfAquilaClassInfo);
  }
  CDOTA_Item_RingOfAquila::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfAquilaClass.m_pClassInfo = &CDOTA_Item_RingOfAquila::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfAquilaClassInfo;
  CDOTA_Item_RingOfAquila::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfAquilaClass.m_pBaseClassInfo = CDOTA_Item_RingOfAquila::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfAquilaClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Item_RingOfAquilaClass = &CDOTA_Item_RingOfAquila::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfAquilaClass;
  CDOTA_Item_RingOfAquila::GetEntityClassInfo(void)::g_EntityCDOTA_Item_RingOfAquilaClassInfo.m_pClass = &CDOTA_Item_RingOfAquila::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfAquilaClass;
  CDOTA_Item_RingOfAquila::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfAquilaClass.m_pScriptClassDesc = CDOTA_Item::InitScriptDesc();
  g_pEntityCDOTA_Item_RingOfAquilaClass->m_pComponentOverrides = 0;
  return &CDOTA_Item_RingOfAquila::GetEntityClassInternal(void)::g_EntityCDOTA_Item_RingOfAquilaClass;
}


// CDOTA_Item_RingOfAquila::GetIntrinsicModifierName  (line 133, @0x0000000002deebd0, libserver.so)
// strings: "modifier_item_ring_of_aquila"
const char *__fastcall CDOTA_Item_RingOfAquila::GetIntrinsicModifierName(CDOTA_Item_RingOfAquila *const this)
{
  return "modifier_item_ring_of_aquila";
}


// CDOTA_Item_RingOfAquila::ResetToggleOnRespawn  (line 139, @0x0000000002deebe0, libserver.so)
bool __fastcall CDOTA_Item_RingOfAquila::ResetToggleOnRespawn(CDOTA_Item_RingOfAquila *const this)
{
  return 0;
}


// CDOTA_Item_RingOfAquila::YouForgotToImplementOrDeclareServerClass  (line 147, @0x0000000002de3ce0, libserver.so)
int __fastcall CDOTA_Item_RingOfAquila::YouForgotToImplementOrDeclareServerClass(CDOTA_Item_RingOfAquila *const this)
{
  return 0;
}


// CDOTA_Item_RingOfAquila::GetServerClass  (line 147, @0x0000000002de7d20, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Item_RingOfAquila::GetServerClass(CDOTA_Item_RingOfAquila *const this)
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


// CDOTA_Item_RingOfAquila::OnEquip  (line 156, @0x0000000002de4d20, libserver.so)
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTA_Item::OnEquip, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_item_ring_of_aquila", "modifier_item_ring_of_aquila_aura"
void __fastcall CDOTA_Item_RingOfAquila::OnEquip(CDOTA_Item_RingOfAquila *const this)
{
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v3; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-28h]

  v5 = __readfsqword(0x28u);
  if ( (*(this->_vptr_IHandleEntity + 348))(this) == 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_item_ring_of_aquila");
    Caster = CDOTABaseAbility::GetCaster(this);
    v3 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_item_ring_of_aquila_aura", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
  CDOTA_Item::OnEquip(this);
}


// CDOTA_Item_RingOfAquila::OnUnequip  (line 171, @0x0000000002de4f50, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_Item::OnUnequip
// strings: "modifier_item_ring_of_aquila_aura"
void __fastcall CDOTA_Item_RingOfAquila::OnUnequip(CDOTA_Item_RingOfAquila *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  if ( (*(this->_vptr_IHandleEntity + 348))(this) == 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_item_ring_of_aquila_aura");
  }
  CDOTA_Item::OnUnequip(this);
}


// CDOTA_Item_RingOfAquila::OnToggle  (line 184, @0x0000000002de5020, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::OnToggle, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_item_ring_of_aquila_aura"
void __fastcall CDOTA_Item_RingOfAquila::OnToggle(CDOTA_Item_RingOfAquila *const this)
{
  CDOTA_BaseNPC *v2; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax

  if ( CDOTABaseAbility::GetCaster(this) == 0
    || (v2 = CDOTABaseAbility::GetCaster(this), (*(v2->_vptr_IHandleEntity + 408))(v2) != 0) )
  {
    CDOTABaseAbility::OnToggle(this);
    Caster = CDOTABaseAbility::GetCaster(this);
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_item_ring_of_aquila_aura", 0);
    if ( ModifierByName != 0 )
      LOBYTE(ModifierByName[1]._vptr_CDOTA_Buff) = !this->m_bToggleState.m_Value;
    (*(this->_vptr_IHandleEntity + 297))(this);
  }
}


// CDOTA_Modifier_Item_RingOfAquila::~CDOTA_Modifier_Item_RingOfAquila  (line 230, @0x0000000002df1a10, libserver.so)  // inlines: ~CDOTA_Buff_Item
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Item_RingOfAquila::~CDOTA_Modifier_Item_RingOfAquila(
        CDOTA_Modifier_Item_RingOfAquila *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Item_RingOfAquila::~CDOTA_Modifier_Item_RingOfAquila  (line 230, @0x0000000002df1a30, libserver.so)  // inlines: ~CDOTA_Buff_Item, ~CDOTA_Modifier_Item_RingOfAquila
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Item_RingOfAquila::~CDOTA_Modifier_Item_RingOfAquila(
        CDOTA_Modifier_Item_RingOfAquila *const this)
{
  this->_vptr_CDOTA_Buff = &off_4115EF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Item_RingOfAquila::OnCreated  (line 255, @0x0000000002dec900, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>
// strings: "bonus_agility", "bonus_intellect"
void __fastcall CDOTA_Modifier_Item_RingOfAquila::OnCreated(
        CDOTA_Modifier_Item_RingOfAquila *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->bonus_strength, "bonus_strength");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->bonus_agility, "bonus_agility");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->bonus_intellect, "bonus_intellect");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->bonus_damage, "bonus_damage");
  v7 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v7, &this->bonus_armor, "bonus_armor");
}


// CDOTA_Modifier_Item_RingOfAquila::DeclareFunctions  (line 264, @0x0000000002de3cf0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Item_RingOfAquila::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_Item_RingOfAquila::GetModifierBonusStats_Agility(CModifierParams const&), CDOTA_Modifier_Item_RingOfAquila::GetModifierBonusStats_Intellect(CModifierParams const&), CDOTA_Modifier_Item_RingOfAquila::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Item_RingOfAquila::GetModifierPhysicalArmorBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Item_RingOfAquila::DeclareFunctions(CDOTA_Modifier_Item_RingOfAquila *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Item_RingOfAquila::GetModifierBonusStats_Strength;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Item_RingOfAquila::GetModifierBonusStats_Agility;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Item_RingOfAquila::GetModifierBonusStats_Intellect;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Item_RingOfAquila::GetModifierPreAttack_BonusDamage;
  this->m_Functions[66].__delta = 0;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[45].__pfn = CDOTA_Modifier_Item_RingOfAquila::GetModifierPhysicalArmorBonus;
  this->m_Functions[45].__delta = 0;
}


// CDOTA_Modifier_Item_RingOfAquila::GetModifierBonusStats_Strength  (line 273, @0x0000000002de3d80, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_RingOfAquila::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Item_RingOfAquila *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_strength;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_RingOfAquila::GetModifierBonusStats_Agility  (line 278, @0x0000000002de3da0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_RingOfAquila::GetModifierBonusStats_Agility(
        CDOTA_Modifier_Item_RingOfAquila *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_agility;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_RingOfAquila::GetModifierBonusStats_Intellect  (line 283, @0x0000000002de3dc0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_RingOfAquila::GetModifierBonusStats_Intellect(
        CDOTA_Modifier_Item_RingOfAquila *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_intellect;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_RingOfAquila::GetModifierPreAttack_BonusDamage  (line 288, @0x0000000002de3de0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_RingOfAquila::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Item_RingOfAquila *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Item_RingOfAquila::GetModifierPhysicalArmorBonus  (line 293, @0x0000000002de3e00, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Item_RingOfAquila::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Item_RingOfAquila *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


