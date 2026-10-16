// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_sven.cpp:32
class CDOTA_Unit_Hero_Sven : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Sven(CDOTA_Unit_Hero_Sven &);
	CDOTA_Unit_Hero_Sven(CDOTA_Unit_Hero_Sven &);
	CDOTA_Unit_Hero_Sven();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetSoundSet();
	virtual ~CDOTA_Unit_Hero_Sven();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[460] GetSoundSet
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_sven.cpp:41
class C_CDOTA_Unit_Hero_Sven_MapInstall {
	C_CDOTA_Unit_Hero_Sven_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_sven.cpp:66
class CDOTA_Ability_Sven_StormBolt : public CDOTABaseAbility {
public:

private:

	int vision_radius;  // +0x390
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
	CDOTA_Ability_Sven_StormBolt(CDOTA_Ability_Sven_StormBolt &);
	CDOTA_Ability_Sven_StormBolt(CDOTA_Ability_Sven_StormBolt &);
	CDOTA_Ability_Sven_StormBolt();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual float GetAOERadius();
	virtual bool OnAbilityPhaseStart();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual const char * GetStolenActivityModifier();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual float GetCooldown(int);
	virtual ~CDOTA_Ability_Sven_StormBolt();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[333] GetAOERadius
	// vtable[264] OnAbilityPhaseStart
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[310] GetStolenActivityModifier
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// vtable[242] GetCooldown
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_sven.cpp:89
class C_CDOTA_Ability_Sven_StormBolt_MapInstall {
	C_CDOTA_Ability_Sven_StormBolt_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_sven.cpp:238
class CDOTA_Ability_Sven_GreatCleave : public CDOTABaseAbility {
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
	CDOTA_Ability_Sven_GreatCleave(CDOTA_Ability_Sven_GreatCleave &);
	CDOTA_Ability_Sven_GreatCleave(CDOTA_Ability_Sven_GreatCleave &);
	CDOTA_Ability_Sven_GreatCleave();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Sven_GreatCleave();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_sven.cpp:251
class CDOTA_Modifier_Sven_GreatCleave : public CDOTA_Buff {
public:

private:

	int cleave_starting_width;  // +0xba8
	int cleave_ending_width;  // +0xbac
	int cleave_distance;  // +0xbb0
	int great_cleave_damage;  // +0xbb4
	short int m_nLastCleaveRecord;  // +0xbb8

	int m_nLastCleaveKills;  // +0xbbc
	CDOTA_Modifier_Sven_GreatCleave();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual ~CDOTA_Modifier_Sven_GreatCleave();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_sven.cpp:385
class CDOTA_Ability_Sven_Warcry : public CDOTABaseAbility {
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
	CDOTA_Ability_Sven_Warcry(CDOTA_Ability_Sven_Warcry &);
	CDOTA_Ability_Sven_Warcry(CDOTA_Ability_Sven_Warcry &);
	CDOTA_Ability_Sven_Warcry();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual bool PlaysDefaultAnimWhenStolen();
	virtual const char * GetStolenActivityModifier();
	virtual ~CDOTA_Ability_Sven_Warcry();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[309] PlaysDefaultAnimWhenStolen
	// vtable[310] GetStolenActivityModifier
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_sven.cpp:401
class C_CDOTA_Ability_Sven_Warcry_MapInstall {
	C_CDOTA_Ability_Sven_Warcry_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_sven.cpp:441
class CDOTA_Modifier_Sven_Warcry : public CDOTA_Buff {
public:

private:

	int warcry_armor;  // +0xba8
	int warcry_movespeed;  // +0xbac
	CDOTA_Modifier_Sven_Warcry();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	ModifierVariant_t GetActivityModifiers(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual const char * GetTexture();
	virtual ~CDOTA_Modifier_Sven_Warcry();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[32] GetTexture
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_sven.cpp:559
class CDOTA_Ability_Sven_GodsStrength : public CDOTABaseAbility {
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

public:

private:

	CDOTA_Ability_Sven_GodsStrength(CDOTA_Ability_Sven_GodsStrength &);
	CDOTA_Ability_Sven_GodsStrength(CDOTA_Ability_Sven_GodsStrength &);
	CDOTA_Ability_Sven_GodsStrength();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool PlaysDefaultAnimWhenStolen();
	virtual const char * GetStolenActivityModifier();
	virtual ~CDOTA_Ability_Sven_GodsStrength();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[309] PlaysDefaultAnimWhenStolen
	// vtable[310] GetStolenActivityModifier
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_sven.cpp:596
class CDOTA_Modifier_Sven_GodsStrength : public CDOTA_Buff {
public:

private:

	int gods_strength_damage;  // +0xba8
	int radius_scepter;  // +0xbac
	CDOTA_Modifier_Sven_GodsStrength();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnRefresh(KeyValues *);
	virtual bool IsPurgable();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual const char * GetHeroEffectName();
	virtual int HeroEffectPriority();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual bool GetAuraEntityReject(CDOTA_BaseNPC *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBaseDamageOutgoing_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Sven_GodsStrength();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[58] OnRefresh
	// vtable[14] IsPurgable
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[72] GetHeroEffectName
	// vtable[73] HeroEffectPriority
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[42] GetAuraEntityReject
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_sven.cpp:713
class CDOTA_Modifier_Sven_GodsStrength_Child : public CDOTA_Buff {
public:

private:

	int gods_strength_damage_scepter;  // +0xba8
	CDOTA_Modifier_Sven_GodsStrength_Child();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBaseDamageOutgoing_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Sven_GodsStrength_Child();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_sven.cpp:764
class CDOTA_Ability_Holdout_GodsStrength : public CDOTA_Ability_Sven_GodsStrength {
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
	CDOTA_Ability_Holdout_GodsStrength(CDOTA_Ability_Holdout_GodsStrength &);
	CDOTA_Ability_Holdout_GodsStrength(CDOTA_Ability_Holdout_GodsStrength &);
	CDOTA_Ability_Holdout_GodsStrength();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Holdout_GodsStrength();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_sven.cpp:798
class CDOTA_Modifier_Holdout_GodsStrength : public CDOTA_Buff {
public:

private:

	int bonus_strength;  // +0xba8
	int model_scale;  // +0xbac
	int gods_strength_damage;  // +0xbb0
	float cooldown_reduction_per_kill;  // +0xbb4
	CDOTA_Modifier_Holdout_GodsStrength();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnRefresh(KeyValues *);
	virtual bool IsPurgable();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual const char * GetHeroEffectName();
	virtual int HeroEffectPriority();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBaseDamageOutgoing_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Strength(const CModifierParams &);
	ModifierVariant_t ModelScale(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual ~CDOTA_Modifier_Holdout_GodsStrength();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[58] OnRefresh
	// vtable[14] IsPurgable
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[72] GetHeroEffectName
	// vtable[73] HeroEffectPriority
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Sven::~CDOTA_Unit_Hero_Sven  (line 32, @0x0000000002a67f60, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Sven::~CDOTA_Unit_Hero_Sven(CDOTA_Unit_Hero_Sven *const this)
{
  this->_vptr_IHandleEntity = &off_43A19B0;
  this->_vptr_INextBotEventResponder = &off_43A2990;
  this->_vptr_CObstructionObject = &off_43A2CC0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Sven::~CDOTA_Unit_Hero_Sven  (line 32, @0x0000000002a67fa0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Sven
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Sven::~CDOTA_Unit_Hero_Sven(CDOTA_Unit_Hero_Sven *const this)
{
  this->_vptr_IHandleEntity = &off_43A19B0;
  this->_vptr_INextBotEventResponder = &off_43A2990;
  this->_vptr_CObstructionObject = &off_43A2CC0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Sven::Schema_DynamicBinding  (line 34, @0x0000000002a60fc0, libserver.so)
// globals: CDOTA_Unit_Hero_Sven::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Sven::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Sven *const this)
{
  return CDOTA_Unit_Hero_Sven::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Sven::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 34, @0x0000000002a60ff0, libserver.so)
// globals: CDOTA_Unit_Hero_Sven::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Sven::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Sven::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Sven::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Sven::CEntityInstanceEntityClass::DestructInstance  (line 34, @0x0000000002a61000, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Sven>
void __fastcall CDOTA_Unit_Hero_Sven::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Sven::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Sven::CEntityInstanceEntityClass::FreeInstance  (line 34, @0x0000000002a61020, libserver.so)
void __fastcall CDOTA_Unit_Hero_Sven::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Sven::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Sven::CEntityInstanceEntityClass::CanAllocate  (line 34, @0x0000000002a61040, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Sven::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Sven::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Sven::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 34, @0x0000000002a61050, libserver.so)
// globals: CDOTA_Unit_Hero_Sven::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Sven::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Sven::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Sven::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Sven::CEntityInstanceEntityClass::AllocateInstance  (line 34, @0x0000000002a63ef0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Sven::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Sven::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Sven::CEntityInstanceEntityClass::ConstructInstance  (line 34, @0x0000000002a65cd0, libserver.so)  // inlines: CDOTA_Unit_Hero_Sven, Construct<CDOTA_Unit_Hero_Sven>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Sven::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Sven::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_43A19B0;
    *(p + 236) = &off_43A2990;
    *(p + 257) = &off_43A2CC0;
  }
  return p;
}


// CDOTA_Unit_Hero_Sven::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 34, @0x0000000002a6b580, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Sven::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Sven::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Sven::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 34, @0x0000000002a6b7e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Sven::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Sven::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Sven::GetEntityClassInternal  (line 34, @0x0000000002a71dd0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "npc_dota_hero_sven", "CDOTA_Unit_Hero_Sven"
// globals: `guard variable for'CDOTA_Unit_Hero_Sven::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SvenClass, CDOTA_Unit_Hero_Sven::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SvenClass, __dso_handle, CDOTA_Unit_Hero_Sven::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Sven::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SvenClassInfo, CDOTA_Unit_Hero_Sven::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SvenClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Sven::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Sven::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SvenClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Sven::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SvenClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Sven::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SvenClass);
    CDOTA_Unit_Hero_Sven::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SvenClass._vptr_CEntityClass = off_43A1930;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Sven::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SvenClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Sven::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Sven::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SvenClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_SvenClass != 0 )
    return &CDOTA_Unit_Hero_Sven::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SvenClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Sven::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SvenClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Sven::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SvenClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Sven::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SvenClassInfo,
      "CDOTA_Unit_Hero_Sven",
      "npc_dota_hero_sven",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Sven::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SvenClassInfo);
  }
  CDOTA_Unit_Hero_Sven::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SvenClass.m_pClassInfo = &CDOTA_Unit_Hero_Sven::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SvenClassInfo;
  CDOTA_Unit_Hero_Sven::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SvenClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Sven::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SvenClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_SvenClass = &CDOTA_Unit_Hero_Sven::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SvenClass;
  CDOTA_Unit_Hero_Sven::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SvenClassInfo.m_pClass = &CDOTA_Unit_Hero_Sven::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SvenClass;
  CDOTA_Unit_Hero_Sven::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SvenClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_SvenClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Sven::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SvenClass;
}


// CDOTA_Unit_Hero_Sven::YouForgotToImplementOrDeclareServerClass  (line 41, @0x0000000002a3f430, libserver.so)
int __fastcall CDOTA_Unit_Hero_Sven::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Sven *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Sven::GetServerClass  (line 41, @0x0000000002a486f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Sven::GetServerClass(CDOTA_Unit_Hero_Sven *const this)
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


// CDOTA_Unit_Hero_Sven::GetSoundSet  (line 50, @0x0000000002a40730, libserver.so)
// calls: CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::GetSoundSet
// strings: "modifier_sven_gods_strength", "Hero_Sven.GodsStrength"
const char *__fastcall CDOTA_Unit_Hero_Sven::GetSoundSet(CDOTA_Unit_Hero_Sven *const this)
{
  if ( CDOTA_BaseNPC::FindModifierByName(this, "modifier_sven_gods_strength", 0) != 0 )
    return "Hero_Sven.GodsStrength";
  else
    return CDOTA_BaseNPC::GetSoundSet(this);
}


// CDOTA_Ability_Sven_StormBolt::~CDOTA_Ability_Sven_StormBolt  (line 66, @0x0000000002a674b0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Sven_StormBolt::~CDOTA_Ability_Sven_StormBolt(CDOTA_Ability_Sven_StormBolt *const this)
{
  this->_vptr_IHandleEntity = &off_43A2D90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Sven_StormBolt::~CDOTA_Ability_Sven_StormBolt  (line 66, @0x0000000002a674d0, libserver.so)  // inlines: ~CDOTA_Ability_Sven_StormBolt
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Sven_StormBolt::~CDOTA_Ability_Sven_StormBolt(CDOTA_Ability_Sven_StormBolt *const this)
{
  this->_vptr_IHandleEntity = &off_43A2D90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Sven_StormBolt::Schema_DynamicBinding  (line 68, @0x0000000002a61060, libserver.so)
// globals: CDOTA_Ability_Sven_StormBolt::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Sven_StormBolt::Schema_DynamicBinding(
        const CDOTA_Ability_Sven_StormBolt *const this)
{
  return CDOTA_Ability_Sven_StormBolt::s_pSchemaBinding;
}


// CDOTA_Ability_Sven_StormBolt::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 68, @0x0000000002a61070, libserver.so)
// globals: CDOTA_Ability_Sven_StormBolt::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Sven_StormBolt::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Sven_StormBolt::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Sven_StormBolt::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Sven_StormBolt::CEntityInstanceEntityClass::DestructInstance  (line 68, @0x0000000002a61080, libserver.so)  // inlines: Destruct<CDOTA_Ability_Sven_StormBolt>
void __fastcall CDOTA_Ability_Sven_StormBolt::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Sven_StormBolt::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Sven_StormBolt::CEntityInstanceEntityClass::FreeInstance  (line 68, @0x0000000002a610a0, libserver.so)
void __fastcall CDOTA_Ability_Sven_StormBolt::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Sven_StormBolt::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Sven_StormBolt::CEntityInstanceEntityClass::CanAllocate  (line 68, @0x0000000002a610c0, libserver.so)
bool __fastcall CDOTA_Ability_Sven_StormBolt::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Sven_StormBolt::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Sven_StormBolt::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 68, @0x0000000002a610d0, libserver.so)
// globals: CDOTA_Ability_Sven_StormBolt::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Sven_StormBolt::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Sven_StormBolt::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Sven_StormBolt::s_pSchemaBinding;
}


// CDOTA_Ability_Sven_StormBolt::CEntityInstanceEntityClass::AllocateInstance  (line 68, @0x0000000002a63f30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Sven_StormBolt::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Sven_StormBolt::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Sven_StormBolt::CEntityInstanceEntityClass::ConstructInstance  (line 68, @0x0000000002a660e0, libserver.so)  // inlines: CDOTA_Ability_Sven_StormBolt, Construct<CDOTA_Ability_Sven_StormBolt>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Sven_StormBolt::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Sven_StormBolt::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43A2D90;
  }
  return p;
}


// CDOTA_Ability_Sven_StormBolt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 68, @0x0000000002a6ac00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Sven_StormBolt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Sven_StormBolt::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Sven_StormBolt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 68, @0x0000000002a6ac20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Sven_StormBolt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Sven_StormBolt::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Sven_StormBolt::GetEntityClassInternal  (line 68, @0x0000000002a71f20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "sven_storm_bolt", "CDOTA_Ability_Sven_StormBolt"
// globals: `guard variable for'CDOTA_Ability_Sven_StormBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_StormBoltClass, CDOTA_Ability_Sven_StormBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_StormBoltClass, __dso_handle, CDOTA_Ability_Sven_StormBolt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Sven_StormBolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_StormBoltClassInfo, CDOTA_Ability_Sven_StormBolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_StormBoltClassInfo
CEntityClass *__cdecl CDOTA_Ability_Sven_StormBolt::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Sven_StormBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_StormBoltClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Sven_StormBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_StormBoltClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Sven_StormBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_StormBoltClass);
    CDOTA_Ability_Sven_StormBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_StormBoltClass._vptr_CEntityClass = off_43A2D10;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Sven_StormBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_StormBoltClass);
    __cxa_atexit(
      CDOTA_Ability_Sven_StormBolt::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Sven_StormBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_StormBoltClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Sven_StormBoltClass != 0 )
    return &CDOTA_Ability_Sven_StormBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_StormBoltClass;
  if ( `guard variable for'CDOTA_Ability_Sven_StormBolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_StormBoltClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Sven_StormBolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_StormBoltClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Sven_StormBolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_StormBoltClassInfo,
      "CDOTA_Ability_Sven_StormBolt",
      "sven_storm_bolt",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Sven_StormBolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_StormBoltClassInfo);
  }
  CDOTA_Ability_Sven_StormBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_StormBoltClass.m_pClassInfo = &CDOTA_Ability_Sven_StormBolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_StormBoltClassInfo;
  CDOTA_Ability_Sven_StormBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_StormBoltClass.m_pBaseClassInfo = CDOTA_Ability_Sven_StormBolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_StormBoltClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Sven_StormBoltClass = &CDOTA_Ability_Sven_StormBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_StormBoltClass;
  CDOTA_Ability_Sven_StormBolt::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_StormBoltClassInfo.m_pClass = &CDOTA_Ability_Sven_StormBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_StormBoltClass;
  CDOTA_Ability_Sven_StormBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_StormBoltClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Sven_StormBoltClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Sven_StormBolt::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_StormBoltClass;
}


// CDOTA_Ability_Sven_StormBolt::GetAOERadius  (line 72, @0x0000000002a77180, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bolt_aoe"
float __fastcall CDOTA_Ability_Sven_StormBolt::GetAOERadius(CDOTA_Ability_Sven_StormBolt *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bolt_aoe", -1, 0);
}


// CDOTA_Ability_Sven_StormBolt::GetStolenActivityModifier  (line 78, @0x0000000002a610e0, libserver.so)
const char *__fastcall CDOTA_Ability_Sven_StormBolt::GetStolenActivityModifier(
        CDOTA_Ability_Sven_StormBolt *const this)
{
  return "bolt";
}


// CDOTA_Ability_Sven_StormBolt::YouForgotToImplementOrDeclareServerClass  (line 89, @0x0000000002a3f440, libserver.so)
int __fastcall CDOTA_Ability_Sven_StormBolt::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Sven_StormBolt *const this)
{
  return 0;
}


// CDOTA_Ability_Sven_StormBolt::GetServerClass  (line 89, @0x0000000002a485f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Sven_StormBolt::GetServerClass(CDOTA_Ability_Sven_StormBolt *const this)
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


// CDOTA_Ability_Sven_StormBolt::GetCooldown  (line 99, @0x0000000002a534c0, libserver.so)
// calls: CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_sven"
float __fastcall CDOTA_Ability_Sven_StormBolt::GetCooldown(CDOTA_Ability_Sven_StormBolt *const this, int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float result; // xmm0_4
  float flCooldown; // [rsp+Ch] [rbp-14h]

  flCooldown = CDOTABaseAbility::GetCooldown(this, iLevel);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_sven", 0);
  result = flCooldown;
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    return flCooldown - CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  return result;
}


// CDOTA_Ability_Sven_StormBolt::OnSpellStart  (line 115, @0x0000000002a53530, libserver.so)  // inlines: CEntityHandle, CHandle, Color, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, Set, operator=, sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorTarget, CDOTA_ProjectileManager::CreateTrackingProjectile, CDOTA_BaseNPC::UnitEmitSound, __stack_chk_fail
// strings: "particles/units/heroes/hero_sven/sven_spell_storm_bolt.vpcf", "Hero_Sven.StormBolt"
void __fastcall CDOTA_Ability_Sven_StormBolt::OnSpellStart(CDOTA_Ability_Sven_StormBolt *const this)
{
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v6; // cx
  CBaseEntity *CursorTarget; // rax
  CEntityIdentity *v8; // rdx
  __int16 v9; // cx
  int m_Value; // eax
  CDOTA_BaseNPC *v11; // rax
  sTrackingProjectileCreateInfo info; // [rsp+0h] [rbp-80h] BYREF
  unsigned __int64 v13; // [rsp+68h] [rbp-18h]

  v13 = __readfsqword(0x28u);
  this->vision_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "vision_radius", -1, 0);
  info.hSource.m_Index = -1;
  info.hTarget.m_Index = -1;
  info.colorGemColor = 0;
  info.pAttackRecord = 0;
  info.iMoveSpeed = 0;
  info.vSourceLoc.x = vec3_origin.x;
  y = vec3_origin.y;
  info.iSourceAttachment = 1;
  info.vSourceLoc.y = y;
  z = vec3_origin.z;
  info.bProvidesVision = 0;
  info.vSourceLoc.z = z;
  info.iVisionTeamNumber = -1;
  info.iVisionRadius = 0;
  info.bDrawsOnMinimap = 0;
  info.bDodgeable = 1;
  info.bIsAttack = 0;
  info.bVisibleToEnemies = 1;
  info.pKVExtraData = 0;
  info.bReplaceExisting = 0;
  info.flExpireTime = 0.0;
  info.flMaxImpactTime = 0.0;
  info.bServerOnly = 0;
  info.pszEffectName = "particles/units/heroes/hero_sven/sven_spell_storm_bolt.vpcf";
  info.pAbility = this;
  info.iMoveSpeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bolt_speed", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( Caster != 0 && (m_pEntity = Caster->m_pEntity) != 0 )
  {
    v6 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    if ( CursorTarget == 0 )
      goto LABEL_13;
  }
  else
  {
    info.hSource.m_Index = -1;
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    if ( CursorTarget == 0 )
      goto LABEL_13;
  }
  v8 = CursorTarget->m_pEntity;
  if ( v8 == 0 )
  {
LABEL_13:
    info.hTarget.m_Index = -1;
    goto LABEL_10;
  }
  if ( v8->m_EHandle.m_Index == -1 )
    v9 = 0x7FFF;
  else
    v9 = v8->m_EHandle.m_Index & 0x7FFF;
  info.hTarget.m_Index = (((v8->m_EHandle.m_Index >> 15) - (v8->m_flags & 1)) << 15) | v9 & 0x7FFF;
LABEL_10:
  info.bDodgeable = 1;
  info.bProvidesVision = 1;
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  info.iSourceAttachment = 2;
  info.iVisionTeamNumber = m_Value;
  info.iVisionRadius = this->vision_radius;
  CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
  v11 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v11, "Hero_Sven.StormBolt", 0.0, 0, 0);
}


// CDOTA_Ability_Sven_StormBolt::OnAbilityPhaseStart  (line 140, @0x0000000002a40b60, libserver.so)  // inlines: VectorAdd, operator+
// calls: CDOTABaseAbility::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "particles/units/heroes/hero_sven/sven_spell_storm_bolt_lightning.vpcf", "attach_sword"
bool __fastcall CDOTA_Ability_Sven_StormBolt::OnAbilityPhaseStart(CDOTA_Ability_Sven_StormBolt *const this)
{
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v4; // r13
  CDOTA_ParticleManager *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_ParticleManager *v8; // rax
  CDOTA_ParticleManager *v9; // rax
  double vLightningOffset; // [rsp+10h] [rbp-30h]
  float vLightningOffset_8; // [rsp+18h] [rbp-28h]

  Caster = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_sven/sven_spell_storm_bolt_lightning.vpcf",
                      2,
                      Caster,
                      0,
                      0);
  v4 = CDOTABaseAbility::GetCaster(this);
  v5 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v5, Caster, 0, v4, 5, "attach_sword", vec3_invalid, 1);
  v6 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
  vLightningOffset_8 = AbsOrigin->z + 1600.0;
  *(&vLightningOffset + 1) = AbsOrigin->y + 0.0;
  *&vLightningOffset = AbsOrigin->x + 0.0;
  v8 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v8, Caster, 1, vLightningOffset, vLightningOffset_8);
  v9 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v9, Caster);
  return 1;
}


// CDOTA_Ability_Sven_StormBolt::OnProjectileHit  (line 157, @0x0000000002a5a3a0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsRealHero, IsValid, LookupEntity, SpeakConcept, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator->, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTA_BaseNPC::UnitEmitSound, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCaster, FindUnitsInRadius, KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTA_BaseNPC::FindModifierByName, EconEntity_OnOwnerKillEaterEvent (22 total)
// strings: "Hero_Sven.StormBoltImpact", "bolt_aoe", "modifier_stun", "bolt_stun_duration", "modifier_teleporting", "modifier_stunned" (7 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_Sven_StormBolt::OnProjectileHit(
        CDOTA_Ability_Sven_StormBolt *const this,
        const CEntityHandle *hTarget,
        const Vector *const vLocation)
{
  CDOTA_BaseNPC *v5; // rax
  __m128i v6; // xmm3
  float v7; // r13d
  const CBaseEntity *v8; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *Caster; // rax
  float v11; // xmm1_4
  CDOTA_BaseNPC *v12; // rax
  __int64 v13; // r14
  int v14; // r13d
  CHandle<CBaseEntity> *v15; // rdx
  uint32 m_Index; // eax
  __int16 v17; // cx
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CEntityInstance *m_pInstance; // rbx
  int (**vptr_IHandleEntity)(...); // rax
  CDOTA_BaseNPC_Hero *v22; // rsi
  CDOTA_BaseNPC *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  float v25; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_BaseNPC_Hero *pKiller; // [rsp+28h] [rbp-C8h]
  CDOTA_BaseNPC *pCacheNPC; // [rsp+30h] [rbp-C0h]
  int nHeroesHit; // [rsp+38h] [rbp-B8h]
  float flDamage; // [rsp+3Ch] [rbp-B4h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-B0h] BYREF
  CResponseCriteriaSet criteria; // [rsp+60h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+A0h] [rbp-50h] BYREF
  unsigned __int64 v35; // [rsp+B8h] [rbp-38h]

  v35 = __readfsqword(0x28u);
  v5 = CEntityHandle::operator CEntityInstance *(hTarget);
  pCacheNPC = v5;
  if ( v5 != 0 && v5->m_bIsDOTANPC && !CDOTA_BaseNPC::TriggerSpellAbsorb(v5, this, 1) )
  {
    CDOTA_BaseNPC::UnitEmitSound(pCacheNPC, "Hero_Sven.StormBoltImpact", 0.0, 0, 0);
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    *v6.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bolt_aoe", -1, 0);
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
    v8 = CEntityHandle::operator CEntityInstance *(hTarget);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
    Caster = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(Caster->m_iTeamNum.m_Value, AbsOrigin, pCacheNPC, v7, &entities, 2, 19, 0, 0, 0);
    KeyValues::KeyValues(&kv, "modifier_stun");
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "bolt_stun_duration", -1, 0);
    KeyValues::SetFloat(&kv, "duration", v11);
    v12 = CDOTABaseAbility::GetCaster(this);
    if ( v12 != 0 && (v12->m_iUnitType & 1) != 0 )
      pKiller = v12;
    else
      pKiller = 0;
    if ( entities.m_Size > 0 )
    {
      nHeroesHit = 0;
      v13 = 0;
      v14 = 0;
      do
      {
        v15 = &entities.m_Memory.m_pMemory[v13];
        m_Index = entities.m_Memory.m_pMemory[v13].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v17 = v15->m_Index;
          v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v15->m_Index) >> 9) & 0x3F];
          if ( v18 != 0 )
          {
            v19 = &v18[v17 & 0x1FF];
            if ( v19 != 0 && m_Index == v19->m_EHandle.m_Index )
            {
              m_pInstance = v19->m_pInstance;
              if ( v19->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
              {
                vptr_IHandleEntity = m_pInstance[58]._vptr_IHandleEntity;
                if ( (BYTE1(vptr_IHandleEntity) & 2) == 0
                  && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0
                  && (BYTE1(vptr_IHandleEntity) & 1) == 0 )
                {
                  if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
                  {
                    ++nHeroesHit;
                    if ( CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_teleporting", 0) != 0
                      && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) != 0 )
                    {
                      v22 = 0;
                      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                        v22 = m_pInstance;
                      EconEntity_OnOwnerKillEaterEvent(
                        pKiller,
                        v22,
                        kill_eater_event_t::kKillEaterEventType_Sven_TeleportInterrupts,
                        1,
                        INVALID_ITEM_DEF_INDEX);
                    }
                  }
                  flDamage = (*(this->_vptr_IHandleEntity + 247))(this);
                  v23 = CDOTABaseAbility::GetCaster(this);
                  ApplyDamage(v23, m_pInstance, this, flDamage, 2, 0);
                  v24 = CDOTABaseAbility::GetCaster(this);
                  CDOTA_BaseNPC::AddNewModifier(m_pInstance, v24, this, "modifier_stunned", &kv, 0);
                }
              }
            }
          }
        }
        ++v14;
        ++v13;
      }
      while ( entities.m_Size > v14 );
      if ( nHeroesHit > 1 )
        EconEntity_OnOwnerKillEaterEvent(
          pKiller,
          0,
          kill_eater_event_t::kKillEaterEventType_Sven_DoubleStuns,
          1,
          INVALID_ITEM_DEF_INDEX);
    }
    if ( CDOTA_BaseNPC::FindModifierByName(pCacheNPC, "modifier_teleporting", 0) != 0
      && (*(pCacheNPC->_vptr_IHandleEntity + 408))(pCacheNPC) != 0 )
    {
      CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
      CResponseCriteriaSet::AppendCriteria(&criteria, "interrupted_teleport", 1.0, v25);
      m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
      if ( m_pSpeech != 0 )
        CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 4, 0, 0, 0, 0);
      CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
    }
    KeyValues::~KeyValues(&kv);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
  return 1;
}


// CDOTA_Ability_Sven_StormBolt::GetAbilityDamageToTargetOverInterval  (line 217, @0x0000000002a41ff0, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Sven_StormBolt::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Sven_StormBolt *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int v6; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    v6 = (*(this->_vptr_IHandleEntity + 247))(this, fInterval);
    return (v6 * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Ability_Sven_StormBolt::GetStunDuration  (line 227, @0x0000000002a59890, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "bolt_stun_duration"
float __fastcall CDOTA_Ability_Sven_StormBolt::GetStunDuration(CDOTA_Ability_Sven_StormBolt *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "bolt_stun_duration", -1, 1);
}


// CDOTA_Ability_Sven_GreatCleave::~CDOTA_Ability_Sven_GreatCleave  (line 238, @0x0000000002a67500, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Sven_GreatCleave::~CDOTA_Ability_Sven_GreatCleave(
        CDOTA_Ability_Sven_GreatCleave *const this)
{
  this->_vptr_IHandleEntity = &off_43A3890;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Sven_GreatCleave::~CDOTA_Ability_Sven_GreatCleave  (line 238, @0x0000000002a67520, libserver.so)  // inlines: ~CDOTA_Ability_Sven_GreatCleave
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Sven_GreatCleave::~CDOTA_Ability_Sven_GreatCleave(
        CDOTA_Ability_Sven_GreatCleave *const this)
{
  this->_vptr_IHandleEntity = &off_43A3890;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Sven_GreatCleave::Schema_DynamicBinding  (line 240, @0x0000000002a610f0, libserver.so)
// globals: CDOTA_Ability_Sven_GreatCleave::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Sven_GreatCleave::Schema_DynamicBinding(
        const CDOTA_Ability_Sven_GreatCleave *const this)
{
  return CDOTA_Ability_Sven_GreatCleave::s_pSchemaBinding;
}


// CDOTA_Ability_Sven_GreatCleave::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 240, @0x0000000002a61100, libserver.so)
// globals: CDOTA_Ability_Sven_GreatCleave::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Sven_GreatCleave::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Sven_GreatCleave::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Sven_GreatCleave::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Sven_GreatCleave::CEntityInstanceEntityClass::DestructInstance  (line 240, @0x0000000002a61110, libserver.so)  // inlines: Destruct<CDOTA_Ability_Sven_GreatCleave>
void __fastcall CDOTA_Ability_Sven_GreatCleave::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Sven_GreatCleave::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Sven_GreatCleave::CEntityInstanceEntityClass::FreeInstance  (line 240, @0x0000000002a61130, libserver.so)
void __fastcall CDOTA_Ability_Sven_GreatCleave::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Sven_GreatCleave::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Sven_GreatCleave::CEntityInstanceEntityClass::CanAllocate  (line 240, @0x0000000002a61150, libserver.so)
bool __fastcall CDOTA_Ability_Sven_GreatCleave::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Sven_GreatCleave::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Sven_GreatCleave::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 240, @0x0000000002a61160, libserver.so)
// globals: CDOTA_Ability_Sven_GreatCleave::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Sven_GreatCleave::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Sven_GreatCleave::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Sven_GreatCleave::s_pSchemaBinding;
}


// CDOTA_Ability_Sven_GreatCleave::CEntityInstanceEntityClass::AllocateInstance  (line 240, @0x0000000002a63f70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Sven_GreatCleave::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Sven_GreatCleave::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Sven_GreatCleave::CEntityInstanceEntityClass::ConstructInstance  (line 240, @0x0000000002a66110, libserver.so)  // inlines: CDOTA_Ability_Sven_GreatCleave, Construct<CDOTA_Ability_Sven_GreatCleave>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Sven_GreatCleave::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Sven_GreatCleave::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43A3890;
  }
  return p;
}


// CDOTA_Ability_Sven_GreatCleave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 240, @0x0000000002a6ac50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Sven_GreatCleave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Sven_GreatCleave::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Sven_GreatCleave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 240, @0x0000000002a6ac70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Sven_GreatCleave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Sven_GreatCleave::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Sven_GreatCleave::GetEntityClassInternal  (line 240, @0x0000000002a72070, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "CDOTA_Ability_Sven_GreatCleave"
// globals: `guard variable for'CDOTA_Ability_Sven_GreatCleave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_GreatCleaveClass, CDOTA_Ability_Sven_GreatCleave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_GreatCleaveClass, __dso_handle, CDOTA_Ability_Sven_GreatCleave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Sven_GreatCleave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_GreatCleaveClassInfo, CDOTA_Ability_Sven_GreatCleave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_GreatCleaveClassInfo
CEntityClass *__cdecl CDOTA_Ability_Sven_GreatCleave::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Sven_GreatCleave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_GreatCleaveClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Sven_GreatCleave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_GreatCleaveClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Sven_GreatCleave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_GreatCleaveClass);
    CDOTA_Ability_Sven_GreatCleave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_GreatCleaveClass._vptr_CEntityClass = off_43A3810;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Sven_GreatCleave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_GreatCleaveClass);
    __cxa_atexit(
      CDOTA_Ability_Sven_GreatCleave::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Sven_GreatCleave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_GreatCleaveClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Sven_GreatCleaveClass != 0 )
    return &CDOTA_Ability_Sven_GreatCleave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_GreatCleaveClass;
  if ( `guard variable for'CDOTA_Ability_Sven_GreatCleave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_GreatCleaveClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Sven_GreatCleave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_GreatCleaveClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Sven_GreatCleave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_GreatCleaveClassInfo,
      "CDOTA_Ability_Sven_GreatCleave",
      "sven_great_cleave",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Sven_GreatCleave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_GreatCleaveClassInfo);
  }
  CDOTA_Ability_Sven_GreatCleave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_GreatCleaveClass.m_pClassInfo = &CDOTA_Ability_Sven_GreatCleave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_GreatCleaveClassInfo;
  CDOTA_Ability_Sven_GreatCleave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_GreatCleaveClass.m_pBaseClassInfo = CDOTA_Ability_Sven_GreatCleave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_GreatCleaveClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Sven_GreatCleaveClass = &CDOTA_Ability_Sven_GreatCleave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_GreatCleaveClass;
  CDOTA_Ability_Sven_GreatCleave::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_GreatCleaveClassInfo.m_pClass = &CDOTA_Ability_Sven_GreatCleave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_GreatCleaveClass;
  CDOTA_Ability_Sven_GreatCleave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_GreatCleaveClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Sven_GreatCleaveClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Sven_GreatCleave::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_GreatCleaveClass;
}


// CDOTA_Ability_Sven_GreatCleave::GetIntrinsicModifierName  (line 243, @0x0000000002a61170, libserver.so)
// strings: "modifier_sven_great_cleave"
const char *__fastcall CDOTA_Ability_Sven_GreatCleave::GetIntrinsicModifierName(
        CDOTA_Ability_Sven_GreatCleave *const this)
{
  return "modifier_sven_great_cleave";
}


// CDOTA_Modifier_Sven_GreatCleave::~CDOTA_Modifier_Sven_GreatCleave  (line 251, @0x0000000002a65390, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Sven_GreatCleave::~CDOTA_Modifier_Sven_GreatCleave(
        CDOTA_Modifier_Sven_GreatCleave *const this)
{
  this->_vptr_CDOTA_Buff = &off_43A4350;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Sven_GreatCleave::~CDOTA_Modifier_Sven_GreatCleave  (line 251, @0x0000000002a653b0, libserver.so)  // inlines: ~CDOTA_Modifier_Sven_GreatCleave
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Sven_GreatCleave::~CDOTA_Modifier_Sven_GreatCleave(
        CDOTA_Modifier_Sven_GreatCleave *const this)
{
  this->_vptr_CDOTA_Buff = &off_43A4350;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Sven_GreatCleave::IsHidden  (line 256, @0x0000000002a61180, libserver.so)
bool __fastcall CDOTA_Modifier_Sven_GreatCleave::IsHidden(CDOTA_Modifier_Sven_GreatCleave *const this)
{
  return 1;
}


// CDOTA_Modifier_Sven_GreatCleave::OnCreated  (line 280, @0x0000000002a561f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "cleave_starting_width", "cleave_ending_width", "cleave_distance", "great_cleave_damage"
void __fastcall CDOTA_Modifier_Sven_GreatCleave::OnCreated(CDOTA_Modifier_Sven_GreatCleave *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  this->m_nLastCleaveRecord = -1;
  this->m_nLastCleaveKills = 0;
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->cleave_starting_width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                    Ability,
                                    "cleave_starting_width",
                                    -1,
                                    0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->cleave_starting_width = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->cleave_ending_width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "cleave_ending_width", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->cleave_distance = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->cleave_ending_width = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->cleave_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "cleave_distance", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->great_cleave_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "great_cleave_damage", -1, 0);
    return;
  }
LABEL_9:
  this->great_cleave_damage = 0;
}


// CDOTA_Modifier_Sven_GreatCleave::OnRefresh  (line 292, @0x0000000002a560d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "cleave_starting_width", "cleave_ending_width", "cleave_distance", "great_cleave_damage"
void __fastcall CDOTA_Modifier_Sven_GreatCleave::OnRefresh(CDOTA_Modifier_Sven_GreatCleave *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->cleave_starting_width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                    Ability,
                                    "cleave_starting_width",
                                    -1,
                                    0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->cleave_starting_width = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->cleave_ending_width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "cleave_ending_width", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->cleave_distance = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->cleave_ending_width = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->cleave_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "cleave_distance", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->great_cleave_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "great_cleave_damage", -1, 0);
    return;
  }
LABEL_9:
  this->great_cleave_damage = 0;
}


// CDOTA_Modifier_Sven_GreatCleave::DeclareFunctions  (line 302, @0x0000000002a3f450, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Sven_GreatCleave::OnAttackLanded(CModifierParams const&), CDOTA_Modifier_Sven_GreatCleave::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_Sven_GreatCleave::DeclareFunctions(CDOTA_Modifier_Sven_GreatCleave *const this)
{
  this->m_Functions[121].__pfn = CDOTA_Modifier_Sven_GreatCleave::OnAttackLanded;
  this->m_Functions[121].__delta = 0;
  this->m_Functions[138].__delta = 0;
  this->m_Functions[138].__pfn = CDOTA_Modifier_Sven_GreatCleave::OnDeath;
}


// CDOTA_Modifier_Sven_GreatCleave::OnAttackLanded  (line 310, @0x0000000002a49050, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, DoCleaveAttack, EconEntity_OnOwnerKillEaterEvent
// strings: "modifier_monkey_king_boundless_strike_crit", "particles/units/heroes/hero_sven/sven_spell_great_cleave.vpcf"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
ModifierVariant_t __fastcall CDOTA_Modifier_Sven_GreatCleave::OnAttackLanded(
        CDOTA_Modifier_Sven_GreatCleave *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_BaseNPC *Parent; // rax
  CEntityInstance *v10; // rax
  CDOTA_BaseNPC *v11; // r13
  char m_CScriptComponent_high; // r14
  float great_cleave_damage; // xmm0_4
  float cleave_distance; // xmm3_4
  float cleave_ending_width; // xmm2_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *v17; // rax
  int v18; // eax
  CEntityInstance *v19; // rax
  CDOTA_BaseNPC_Hero *v20; // rdi
  float flCleaveDamage; // [rsp+0h] [rbp-30h]
  float flDistance; // [rsp+4h] [rbp-2Ch]
  float flEndingWidth; // [rsp+8h] [rbp-28h]
  float flStartingWidth; // [rsp+Ch] [rbp-24h]
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->hattacker.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0
          && m_pInstance->m_bIsDOTANPC
          && CDOTA_Buff::GetParent(this) == m_pInstance
          && !CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value )
        {
          result.m_szVal = CDOTA_Buff::GetParent(this);
          *&result.m_eType = 1;
          if ( (result.m_szVal[2787] & 0x10) != 0 )
            goto LABEL_6;
          Parent = CDOTA_Buff::GetParent(this);
          if ( CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_monkey_king_boundless_strike_crit", 0) == 0 )
          {
            v10 = CEntityHandle::operator CEntityInstance *(&params->htarget);
            v11 = v10;
            if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
            {
              m_CScriptComponent_high = HIBYTE(v10[7].m_CScriptComponent);
              if ( m_CScriptComponent_high != CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value )
              {
                great_cleave_damage = this->great_cleave_damage;
                cleave_distance = this->cleave_distance;
                cleave_ending_width = this->cleave_ending_width;
                this->m_nLastCleaveRecord = params->iRecord;
                flDistance = cleave_distance;
                flEndingWidth = cleave_ending_width;
                flStartingWidth = this->cleave_starting_width;
                flCleaveDamage = (great_cleave_damage * params->fDamage) / 100.0;
                Ability = CDOTA_Buff::GetAbility(this);
                v17 = CDOTA_Buff::GetParent(this);
                v18 = DoCleaveAttack(
                        v17,
                        v11,
                        Ability,
                        flCleaveDamage,
                        flStartingWidth,
                        flEndingWidth,
                        flDistance,
                        "particles/units/heroes/hero_sven/sven_spell_great_cleave.vpcf",
                        params);
                this->m_nLastCleaveKills = v18;
                if ( v18 > 1 )
                {
                  v19 = CEntityHandle::operator CEntityInstance *(&params->hattacker);
                  if ( v19 == 0
                    || BYTE3(v19[7]._vptr_IHandleEntity) == 0
                    || (v20 = v19, (v19[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) )
                  {
                    v20 = 0;
                  }
                  EconEntity_OnOwnerKillEaterEvent(
                    v20,
                    0,
                    kill_eater_event_t::kKillEaterEventType_Sven_CleaveDoubleKills,
                    1,
                    INVALID_ITEM_DEF_INDEX);
                  this->m_nLastCleaveRecord = -1;
                  this->m_nLastCleaveKills = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  *&result.m_eType = 1;
LABEL_6:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Sven_GreatCleave::OnDeath  (line 351, @0x0000000002a48c90, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsRealHero, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CEntityHandle::operator CEntityInstance*, EconEntity_OnOwnerKillEaterEvent
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
ModifierVariant_t __fastcall CDOTA_Modifier_Sven_GreatCleave::OnDeath(
        CDOTA_Modifier_Sven_GreatCleave *const this,
        const CModifierParams *const params)
{
  __int16 m_nLastCleaveRecord; // ax
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // rdi
  uint32 v9; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *v12; // r13
  int v13; // eax
  bool v14; // sf
  CEntityInstance *v15; // rax
  CDOTA_BaseNPC_Hero *v16; // rdi

  m_nLastCleaveRecord = this->m_nLastCleaveRecord;
  if ( m_nLastCleaveRecord != -1 && m_nLastCleaveRecord == params->iRecord && this->m_nLastCleaveKills != 0 )
  {
    m_Index = params->hunit.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[params->hunit.m_Index & 0x1FF];
        if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        {
          m_pInstance = v7->m_pInstance;
          if ( v7->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
            && LOBYTE(m_pInstance[71].m_pEntity) == 0
            && (*(m_pInstance->_vptr_IHandleEntity + 436))(m_pInstance) == 0 )
          {
            v9 = params->hattacker.m_Index;
            if ( v9 + 2 > 1 )
            {
              v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
              if ( v10 != 0 )
              {
                v11 = &v10[params->hattacker.m_Index & 0x1FF];
                if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
                {
                  v12 = v11->m_pInstance;
                  if ( v11->m_pInstance != 0
                    && v12->m_bIsDOTANPC
                    && CDOTA_Buff::GetParent(this) == v12
                    && !CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value )
                  {
                    v13 = this->m_nLastCleaveKills + 1;
                    v14 = this->m_nLastCleaveKills < 0;
                    this->m_nLastCleaveKills = v13;
                    if ( !(v14 ^ __OFSUB__(v13, 1) | (v13 == 1)) )
                    {
                      v15 = CEntityHandle::operator CEntityInstance *(&params->hattacker);
                      if ( v15 == 0
                        || BYTE3(v15[7]._vptr_IHandleEntity) == 0
                        || (v16 = v15, (v15[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) )
                      {
                        v16 = 0;
                      }
                      EconEntity_OnOwnerKillEaterEvent(
                        v16,
                        0,
                        kill_eater_event_t::kKillEaterEventType_Sven_CleaveDoubleKills,
                        1,
                        INVALID_ITEM_DEF_INDEX);
                      this->m_nLastCleaveRecord = -1;
                      this->m_nLastCleaveKills = 0;
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


// CDOTA_Ability_Sven_Warcry::~CDOTA_Ability_Sven_Warcry  (line 385, @0x0000000002a67550, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Sven_Warcry::~CDOTA_Ability_Sven_Warcry(CDOTA_Ability_Sven_Warcry *const this)
{
  this->_vptr_IHandleEntity = &off_43A46B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Sven_Warcry::~CDOTA_Ability_Sven_Warcry  (line 385, @0x0000000002a67570, libserver.so)  // inlines: ~CDOTA_Ability_Sven_Warcry
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Sven_Warcry::~CDOTA_Ability_Sven_Warcry(CDOTA_Ability_Sven_Warcry *const this)
{
  this->_vptr_IHandleEntity = &off_43A46B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Sven_Warcry::Schema_DynamicBinding  (line 387, @0x0000000002a61190, libserver.so)
// globals: CDOTA_Ability_Sven_Warcry::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Sven_Warcry::Schema_DynamicBinding(
        const CDOTA_Ability_Sven_Warcry *const this)
{
  return CDOTA_Ability_Sven_Warcry::s_pSchemaBinding;
}


// CDOTA_Ability_Sven_Warcry::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 387, @0x0000000002a611a0, libserver.so)
// globals: CDOTA_Ability_Sven_Warcry::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Sven_Warcry::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Sven_Warcry::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Sven_Warcry::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Sven_Warcry::CEntityInstanceEntityClass::DestructInstance  (line 387, @0x0000000002a611b0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Sven_Warcry>
void __fastcall CDOTA_Ability_Sven_Warcry::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Sven_Warcry::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Sven_Warcry::CEntityInstanceEntityClass::FreeInstance  (line 387, @0x0000000002a611d0, libserver.so)
void __fastcall CDOTA_Ability_Sven_Warcry::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Sven_Warcry::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Sven_Warcry::CEntityInstanceEntityClass::CanAllocate  (line 387, @0x0000000002a611f0, libserver.so)
bool __fastcall CDOTA_Ability_Sven_Warcry::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Sven_Warcry::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Sven_Warcry::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 387, @0x0000000002a61200, libserver.so)
// globals: CDOTA_Ability_Sven_Warcry::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Sven_Warcry::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Sven_Warcry::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Sven_Warcry::s_pSchemaBinding;
}


// CDOTA_Ability_Sven_Warcry::CEntityInstanceEntityClass::AllocateInstance  (line 387, @0x0000000002a63fb0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Sven_Warcry::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Sven_Warcry::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Sven_Warcry::CEntityInstanceEntityClass::ConstructInstance  (line 387, @0x0000000002a66140, libserver.so)  // inlines: CDOTA_Ability_Sven_Warcry, Construct<CDOTA_Ability_Sven_Warcry>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Sven_Warcry::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Sven_Warcry::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43A46B0;
  }
  return p;
}


// CDOTA_Ability_Sven_Warcry::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 387, @0x0000000002a6aca0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Sven_Warcry::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Sven_Warcry::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Sven_Warcry::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 387, @0x0000000002a6acc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Sven_Warcry::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Sven_Warcry::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Sven_Warcry::GetEntityClassInternal  (line 387, @0x0000000002a721c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "CDOTA_Ability_Sven_Warcry"
// globals: `guard variable for'CDOTA_Ability_Sven_Warcry::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_WarcryClass, CDOTA_Ability_Sven_Warcry::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_WarcryClass, __dso_handle, CDOTA_Ability_Sven_Warcry::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Sven_Warcry::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_WarcryClassInfo, CDOTA_Ability_Sven_Warcry::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_WarcryClassInfo
CEntityClass *__cdecl CDOTA_Ability_Sven_Warcry::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Sven_Warcry::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_WarcryClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Sven_Warcry::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_WarcryClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Sven_Warcry::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_WarcryClass);
    CDOTA_Ability_Sven_Warcry::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_WarcryClass._vptr_CEntityClass = off_43A4630;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Sven_Warcry::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_WarcryClass);
    __cxa_atexit(
      CDOTA_Ability_Sven_Warcry::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Sven_Warcry::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_WarcryClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Sven_WarcryClass != 0 )
    return &CDOTA_Ability_Sven_Warcry::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_WarcryClass;
  if ( `guard variable for'CDOTA_Ability_Sven_Warcry::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_WarcryClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Sven_Warcry::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_WarcryClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Sven_Warcry::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_WarcryClassInfo,
      "CDOTA_Ability_Sven_Warcry",
      "sven_warcry",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Sven_Warcry::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_WarcryClassInfo);
  }
  CDOTA_Ability_Sven_Warcry::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_WarcryClass.m_pClassInfo = &CDOTA_Ability_Sven_Warcry::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_WarcryClassInfo;
  CDOTA_Ability_Sven_Warcry::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_WarcryClass.m_pBaseClassInfo = CDOTA_Ability_Sven_Warcry::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_WarcryClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Sven_WarcryClass = &CDOTA_Ability_Sven_Warcry::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_WarcryClass;
  CDOTA_Ability_Sven_Warcry::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_WarcryClassInfo.m_pClass = &CDOTA_Ability_Sven_Warcry::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_WarcryClass;
  CDOTA_Ability_Sven_Warcry::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_WarcryClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Sven_WarcryClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Sven_Warcry::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_WarcryClass;
}


// CDOTA_Ability_Sven_Warcry::PlaysDefaultAnimWhenStolen  (line 393, @0x0000000002a61210, libserver.so)
bool __fastcall CDOTA_Ability_Sven_Warcry::PlaysDefaultAnimWhenStolen(CDOTA_Ability_Sven_Warcry *const this)
{
  return 0;
}


// CDOTA_Ability_Sven_Warcry::GetStolenActivityModifier  (line 394, @0x0000000002a61220, libserver.so)
const char *__fastcall CDOTA_Ability_Sven_Warcry::GetStolenActivityModifier(CDOTA_Ability_Sven_Warcry *const this)
{
  return "strength";
}


// CDOTA_Ability_Sven_Warcry::YouForgotToImplementOrDeclareServerClass  (line 401, @0x0000000002a3f490, libserver.so)
int __fastcall CDOTA_Ability_Sven_Warcry::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Sven_Warcry *const this)
{
  return 0;
}


// CDOTA_Ability_Sven_Warcry::GetServerClass  (line 401, @0x0000000002a487f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Sven_Warcry::GetServerClass(CDOTA_Ability_Sven_Warcry *const this)
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


// CDOTA_Ability_Sven_Warcry::OnSpellStart  (line 410, @0x0000000002a54780, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt (18 total)
// strings: "warcry_radius", "modifier_sven_warcry", "particles/units/heroes/hero_sven/sven_spell_warcry.vpcf", "attach_head", "Hero_Sven.WarCry"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Sven_Warcry::OnSpellStart(CDOTA_Ability_Sven_Warcry *const this)
{
  __m128i v2; // xmm3
  float v3; // r14d
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v7; // rax
  __int64 v8; // r14
  int v9; // r13d
  CDOTA_BaseNPC *m_pInstance; // r15
  float v11; // xmm1_4
  CDOTA_BaseNPC *v12; // rax
  CHandle<CBaseEntity> *v13; // rdx
  uint32 m_Index; // eax
  __int16 v15; // cx
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  CDOTA_BaseNPC *v18; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v20; // r13
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+20h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+58h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  entities.m_Size = 0;
  *v2.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "warcry_radius", -1, 0);
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, Caster, v3, &entities, 1, 19, 0, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      v13 = &entities.m_Memory.m_pMemory[v8];
      m_Index = entities.m_Memory.m_pMemory[v8].m_Index;
      if ( m_Index + 2 <= 1
        || (v15 = v13->m_Index,
            (v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v13->m_Index) >> 9) & 0x3F]) == 0)
        || (v17 = &v16[v15 & 0x1FF]) == 0
        || m_Index != v17->m_EHandle.m_Index
        || (m_pInstance = v17->m_pInstance, v17->m_pInstance == 0)
        || !m_pInstance->m_bIsDOTANPC )
      {
        m_pInstance = 0;
      }
      KeyValues::KeyValues(&kv, "modifier_sven_warcry");
      CDOTABaseAbility::GetDuration(this);
      KeyValues::SetFloat(&kv, "duration", v11);
      v12 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v12, this, "modifier_sven_warcry", &kv, 0);
      ++v9;
      ++v8;
      KeyValues::~KeyValues(&kv);
    }
    while ( entities.m_Size > v9 );
  }
  v18 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v18) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_sven/sven_spell_warcry.vpcf",
                   1,
                   v18,
                   0,
                   0);
  v20 = CDOTABaseAbility::GetCaster(this);
  v21 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v21, v18, 2, v20, 5, "attach_head", vec3_invalid, 1);
  v22 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v22, v18);
  v23 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v23, "Hero_Sven.WarCry", 0.0, 0, 0);
  v24 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v24, 1518, 0.1, 0.1, 9, 0, 1.0);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Modifier_Sven_Warcry::~CDOTA_Modifier_Sven_Warcry  (line 441, @0x0000000002a65340, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Sven_Warcry::~CDOTA_Modifier_Sven_Warcry(CDOTA_Modifier_Sven_Warcry *const this)
{
  this->_vptr_CDOTA_Buff = &off_43A5170;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Sven_Warcry::~CDOTA_Modifier_Sven_Warcry  (line 441, @0x0000000002a65360, libserver.so)  // inlines: ~CDOTA_Modifier_Sven_Warcry
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Sven_Warcry::~CDOTA_Modifier_Sven_Warcry(CDOTA_Modifier_Sven_Warcry *const this)
{
  this->_vptr_CDOTA_Buff = &off_43A5170;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Sven_Warcry::GetTexture  (line 457, @0x0000000002a61230, libserver.so)
const char *__fastcall CDOTA_Modifier_Sven_Warcry::GetTexture(CDOTA_Modifier_Sven_Warcry *const this)
{
  return "sven_warcry";
}


// CDOTA_Modifier_Sven_Warcry::OnCreated  (line 468, @0x0000000002a558f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "warcry_armor", "warcry_movespeed"
void __fastcall CDOTA_Modifier_Sven_Warcry::OnCreated(CDOTA_Modifier_Sven_Warcry *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->warcry_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "warcry_armor", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->warcry_movespeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "warcry_movespeed", -1, 0);
      return;
    }
  }
  else
  {
    this->warcry_armor = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->warcry_movespeed = 0;
}


// CDOTA_Modifier_Sven_Warcry::OnRefresh  (line 486, @0x0000000002a55bc0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "warcry_armor", "warcry_movespeed"
void __fastcall CDOTA_Modifier_Sven_Warcry::OnRefresh(CDOTA_Modifier_Sven_Warcry *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->warcry_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "warcry_armor", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->warcry_movespeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "warcry_movespeed", -1, 0);
      return;
    }
  }
  else
  {
    this->warcry_armor = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->warcry_movespeed = 0;
}


// CDOTA_Modifier_Sven_Warcry::DeclareFunctions  (line 494, @0x0000000002a3f4a0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Sven_Warcry::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Sven_Warcry::GetModifierPhysicalArmorBonus(CModifierParams const&), CDOTA_Modifier_Sven_Warcry::OnDeath(CModifierParams const&), CDOTA_Modifier_Sven_Warcry::GetActivityModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_Sven_Warcry::DeclareFunctions(CDOTA_Modifier_Sven_Warcry *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Sven_Warcry::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[45].__delta = 0;
  this->m_Functions[45].__pfn = CDOTA_Modifier_Sven_Warcry::GetModifierPhysicalArmorBonus;
  this->m_Functions[138].__pfn = CDOTA_Modifier_Sven_Warcry::OnDeath;
  this->m_Functions[138].__delta = 0;
  this->m_Functions[155].__pfn = CDOTA_Modifier_Sven_Warcry::GetActivityModifiers;
  this->m_Functions[155].__delta = 0;
}


// CDOTA_Modifier_Sven_Warcry::GetActivityModifiers  (line 505, @0x0000000002a423d0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster
ModifierVariant_t __fastcall CDOTA_Modifier_Sven_Warcry::GetActivityModifiers(
        CDOTA_Modifier_Sven_Warcry *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rbx
  ModifierVariant_t result; // 0:rax.16

  Parent = CDOTA_Buff::GetParent(this);
  result = CDOTA_Buff::GetCaster(this);
  if ( Parent == *&result.m_eType )
    result.m_szVal = "sven_warcry";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_Sven_Warcry::GetModifierMoveSpeedBonus_Percentage  (line 516, @0x0000000002a3f510, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Sven_Warcry::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Sven_Warcry *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->warcry_movespeed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Sven_Warcry::GetModifierPhysicalArmorBonus  (line 523, @0x0000000002a3f530, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Sven_Warcry::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Sven_Warcry *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->warcry_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Sven_Warcry::OnDeath  (line 530, @0x0000000002a46570, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsRealHero, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, EconEntity_OnOwnerKillEaterEvent
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
ModifierVariant_t __fastcall CDOTA_Modifier_Sven_Warcry::OnDeath(
        CDOTA_Modifier_Sven_Warcry *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  __int64 v5; // rcx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC_Hero *m_pInstance; // rbx
  uint32 v9; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *v12; // r13
  CDOTA_BaseNPC *Parent; // r14
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC_Hero *v15; // rdi
  CDOTA_BaseNPC_Hero *v16; // rsi

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v5 = params->hunit.m_Index & 0x1FF;
      v6 = &v3[v5];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
      {
        m_pInstance = v6->m_pInstance;
        if ( v6->m_pInstance != 0
          && m_pInstance->m_bIsDOTANPC
          && (m_pInstance->m_iUnitType & 1) != 0
          && !m_pInstance->m_bIsIllusion.m_Value
          && (*(m_pInstance->_vptr_IHandleEntity + 436))(
               m_pInstance,
               params,
               v6,
               v5 * 120,
               CEntityHandle::gm_pEntityList) == 0 )
        {
          v9 = params->hattacker.m_Index;
          if ( v9 + 2 > 1 )
          {
            v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
            if ( v10 != 0 )
            {
              v11 = &v10[params->hattacker.m_Index & 0x1FF];
              if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
              {
                v12 = v11->m_pInstance;
                if ( v11->m_pInstance != 0 && v12->m_bIsDOTANPC )
                {
                  Parent = CDOTA_Buff::GetParent(this);
                  if ( Parent == v12 )
                  {
                    Caster = CDOTA_Buff::GetCaster(this);
                    if ( Caster == 0 || (Caster->m_iUnitType & 1) == 0 )
                    {
                      v15 = 0;
                      goto LABEL_22;
                    }
                    v15 = Caster;
                    if ( Caster != Parent )
                    {
LABEL_22:
                      v16 = 0;
                      if ( (m_pInstance->m_iUnitType & 1) != 0 )
                        v16 = m_pInstance;
                      EconEntity_OnOwnerKillEaterEvent(
                        v15,
                        v16,
                        kill_eater_event_t::kKillEaterEventType_Sven_WarcryAssists,
                        1,
                        INVALID_ITEM_DEF_INDEX);
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
  }
  return 1uLL;
}


// CDOTA_Ability_Sven_GodsStrength::~CDOTA_Ability_Sven_GodsStrength  (line 559, @0x0000000002a675a0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Sven_GodsStrength::~CDOTA_Ability_Sven_GodsStrength(
        CDOTA_Ability_Sven_GodsStrength *const this)
{
  this->_vptr_IHandleEntity = &off_43A54D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Sven_GodsStrength::~CDOTA_Ability_Sven_GodsStrength  (line 559, @0x0000000002a675c0, libserver.so)  // inlines: ~CDOTA_Ability_Sven_GodsStrength
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Sven_GodsStrength::~CDOTA_Ability_Sven_GodsStrength(
        CDOTA_Ability_Sven_GodsStrength *const this)
{
  this->_vptr_IHandleEntity = &off_43A54D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Sven_GodsStrength::Schema_DynamicBinding  (line 561, @0x0000000002a61240, libserver.so)
// globals: CDOTA_Ability_Sven_GodsStrength::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Sven_GodsStrength::Schema_DynamicBinding(
        const CDOTA_Ability_Sven_GodsStrength *const this)
{
  return CDOTA_Ability_Sven_GodsStrength::s_pSchemaBinding;
}


// CDOTA_Ability_Sven_GodsStrength::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 561, @0x0000000002a61250, libserver.so)
// globals: CDOTA_Ability_Sven_GodsStrength::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Sven_GodsStrength::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Sven_GodsStrength::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Sven_GodsStrength::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Sven_GodsStrength::CEntityInstanceEntityClass::DestructInstance  (line 561, @0x0000000002a61260, libserver.so)  // inlines: Destruct<CDOTA_Ability_Sven_GodsStrength>
void __fastcall CDOTA_Ability_Sven_GodsStrength::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Sven_GodsStrength::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Sven_GodsStrength::CEntityInstanceEntityClass::FreeInstance  (line 561, @0x0000000002a61280, libserver.so)
void __fastcall CDOTA_Ability_Sven_GodsStrength::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Sven_GodsStrength::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Sven_GodsStrength::CEntityInstanceEntityClass::CanAllocate  (line 561, @0x0000000002a612a0, libserver.so)
bool __fastcall CDOTA_Ability_Sven_GodsStrength::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Sven_GodsStrength::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Sven_GodsStrength::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 561, @0x0000000002a612b0, libserver.so)
// globals: CDOTA_Ability_Sven_GodsStrength::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Sven_GodsStrength::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Sven_GodsStrength::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Sven_GodsStrength::s_pSchemaBinding;
}


// CDOTA_Ability_Sven_GodsStrength::CEntityInstanceEntityClass::AllocateInstance  (line 561, @0x0000000002a63ff0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Sven_GodsStrength::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Sven_GodsStrength::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Sven_GodsStrength::CEntityInstanceEntityClass::ConstructInstance  (line 561, @0x0000000002a66170, libserver.so)  // inlines: CDOTA_Ability_Sven_GodsStrength, Construct<CDOTA_Ability_Sven_GodsStrength>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Sven_GodsStrength::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Sven_GodsStrength::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43A54D0;
  }
  return p;
}


// CDOTA_Ability_Sven_GodsStrength::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 561, @0x0000000002a6acf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Sven_GodsStrength::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Sven_GodsStrength::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Sven_GodsStrength::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 561, @0x0000000002a6ad10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Sven_GodsStrength::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Sven_GodsStrength::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Sven_GodsStrength::GetEntityClassInfo  (line 561, @0x0000000002a72310, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release
// callers: CDOTA_Ability_Holdout_GodsStrength::GetEntityClassInternal
// strings: "CDOTA_Ability_Sven_GodsStrength", "dota_base_ability", "CDOTABaseAbility", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CDOTA_Ability_Sven_GodsStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClassInfo, CDOTA_Ability_Sven_GodsStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClassInfo, `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo, CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo
CEntityClassInfo *__cdecl CDOTA_Ability_Sven_GodsStrength::GetEntityClassInfo()
{
  if ( `guard variable for'CDOTA_Ability_Sven_GodsStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClassInfo != 0 )
    return &CDOTA_Ability_Sven_GodsStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Sven_GodsStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClassInfo) == 0 )
    return &CDOTA_Ability_Sven_GodsStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClassInfo;
  if ( `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo) != 0 )
    {
      if ( `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo) != 0 )
      {
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo,
          "CGameEntity",
          0,
          0,
          &g_EntityRootClassInfo);
        __cxa_guard_release(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo,
        "CBaseEntity",
        0,
        0,
        &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo,
      "CDOTABaseAbility",
      "dota_base_ability",
      0,
      &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CDOTA_Ability_Sven_GodsStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClassInfo,
    "CDOTA_Ability_Sven_GodsStrength",
    "sven_gods_strength",
    0,
    &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTA_Ability_Sven_GodsStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClassInfo);
  return &CDOTA_Ability_Sven_GodsStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClassInfo;
}


// CDOTA_Ability_Sven_GodsStrength::GetEntityClassInternal  (line 561, @0x0000000002a72460, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "CDOTA_Ability_Sven_GodsStrength"
// globals: `guard variable for'CDOTA_Ability_Sven_GodsStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClass, CDOTA_Ability_Sven_GodsStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClass, __dso_handle, CDOTA_Ability_Sven_GodsStrength::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Sven_GodsStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClassInfo, CDOTA_Ability_Sven_GodsStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClassInfo
CEntityClass *__cdecl CDOTA_Ability_Sven_GodsStrength::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Sven_GodsStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Sven_GodsStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Sven_GodsStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClass);
    CDOTA_Ability_Sven_GodsStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClass._vptr_CEntityClass = off_43A5450;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Sven_GodsStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClass);
    __cxa_atexit(
      CDOTA_Ability_Sven_GodsStrength::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Sven_GodsStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Sven_GodsStrengthClass != 0 )
    return &CDOTA_Ability_Sven_GodsStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClass;
  if ( `guard variable for'CDOTA_Ability_Sven_GodsStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Sven_GodsStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Sven_GodsStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClassInfo,
      "CDOTA_Ability_Sven_GodsStrength",
      "sven_gods_strength",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Sven_GodsStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClassInfo);
  }
  CDOTA_Ability_Sven_GodsStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClass.m_pClassInfo = &CDOTA_Ability_Sven_GodsStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClassInfo;
  CDOTA_Ability_Sven_GodsStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClass.m_pBaseClassInfo = CDOTA_Ability_Sven_GodsStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Sven_GodsStrengthClass = &CDOTA_Ability_Sven_GodsStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClass;
  CDOTA_Ability_Sven_GodsStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClassInfo.m_pClass = &CDOTA_Ability_Sven_GodsStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClass;
  CDOTA_Ability_Sven_GodsStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Sven_GodsStrengthClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Sven_GodsStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Sven_GodsStrengthClass;
}


// CDOTA_Ability_Sven_GodsStrength::PlaysDefaultAnimWhenStolen  (line 566, @0x0000000002a612c0, libserver.so)
bool __fastcall CDOTA_Ability_Sven_GodsStrength::PlaysDefaultAnimWhenStolen(
        CDOTA_Ability_Sven_GodsStrength *const this)
{
  return 0;
}


// CDOTA_Ability_Sven_GodsStrength::GetStolenActivityModifier  (line 567, @0x0000000002a612d0, libserver.so)
const char *__fastcall CDOTA_Ability_Sven_GodsStrength::GetStolenActivityModifier(
        CDOTA_Ability_Sven_GodsStrength *const this)
{
  return "strength";
}


// CDOTA_Ability_Sven_GodsStrength::OnSpellStart  (line 574, @0x0000000002a41060, libserver.so)  // inlines: entindex
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::StartGesture, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound, CEntityInstance::GetEntityIndex (16 total)
// strings: "modifier_sven_gods_strength", "particles/units/heroes/hero_sven/sven_spell_gods_strength.vpcf", "Hero_Sven.GodsStrength"
void __fastcall CDOTA_Ability_Sven_GodsStrength::OnSpellStart(CDOTA_Ability_Sven_GodsStrength *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v8; // r14
  CDOTA_ParticleManager *v9; // rax
  CDOTA_ParticleManager *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CEntityIndex v13; // eax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-28h]

  v15 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_sven_gods_strength");
  CDOTABaseAbility::GetDuration(this);
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_sven_gods_strength", &kv, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v5, 1519, 0.1, 0.1, 9, 0, 1.0);
  v6 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v6) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_sven/sven_spell_gods_strength.vpcf",
                  1,
                  v6,
                  0,
                  0);
  v8 = CDOTABaseAbility::GetCaster(this);
  v9 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v9, v6, 1, v8, 1, 0, vec3_invalid, 1);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v10, v6);
  v11 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v11, "Hero_Sven.GodsStrength", 0.0, 0, 0);
  v12 = CDOTABaseAbility::GetCaster(this);
  v13.m_Data = CEntityInstance::GetEntityIndex(v12).m_Data;
  CreateUnitEvent(v13, 0, 25, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_IMPORTANT_ABILITY);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Sven_GodsStrength::~CDOTA_Modifier_Sven_GodsStrength  (line 596, @0x0000000002a652f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Sven_GodsStrength::~CDOTA_Modifier_Sven_GodsStrength(
        CDOTA_Modifier_Sven_GodsStrength *const this)
{
  this->_vptr_CDOTA_Buff = &off_43A5F90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Sven_GodsStrength::~CDOTA_Modifier_Sven_GodsStrength  (line 596, @0x0000000002a65310, libserver.so)  // inlines: ~CDOTA_Modifier_Sven_GodsStrength
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Sven_GodsStrength::~CDOTA_Modifier_Sven_GodsStrength(
        CDOTA_Modifier_Sven_GodsStrength *const this)
{
  this->_vptr_CDOTA_Buff = &off_43A5F90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Sven_GodsStrength::IsPurgable  (line 604, @0x0000000002a612e0, libserver.so)
bool __fastcall CDOTA_Modifier_Sven_GodsStrength::IsPurgable(CDOTA_Modifier_Sven_GodsStrength *const this)
{
  return 0;
}


// CDOTA_Modifier_Sven_GodsStrength::GetStatusEffectName  (line 606, @0x0000000002a612f0, libserver.so)
// strings: "particles/status_fx/status_effect_gods_strength.vpcf"
const char *__fastcall CDOTA_Modifier_Sven_GodsStrength::GetStatusEffectName(
        CDOTA_Modifier_Sven_GodsStrength *const this)
{
  return "particles/status_fx/status_effect_gods_strength.vpcf";
}


// CDOTA_Modifier_Sven_GodsStrength::StatusEffectPriority  (line 607, @0x0000000002a61300, libserver.so)
int __fastcall CDOTA_Modifier_Sven_GodsStrength::StatusEffectPriority(CDOTA_Modifier_Sven_GodsStrength *const this)
{
  return 1000;
}


// CDOTA_Modifier_Sven_GodsStrength::GetHeroEffectName  (line 608, @0x0000000002a61310, libserver.so)
// strings: "particles/units/heroes/hero_sven/sven_gods_strength_hero_effect.vpcf"
const char *__fastcall CDOTA_Modifier_Sven_GodsStrength::GetHeroEffectName(
        CDOTA_Modifier_Sven_GodsStrength *const this)
{
  return "particles/units/heroes/hero_sven/sven_gods_strength_hero_effect.vpcf";
}


// CDOTA_Modifier_Sven_GodsStrength::HeroEffectPriority  (line 609, @0x0000000002a61320, libserver.so)
int __fastcall CDOTA_Modifier_Sven_GodsStrength::HeroEffectPriority(CDOTA_Modifier_Sven_GodsStrength *const this)
{
  return 100;
}


// CDOTA_Modifier_Sven_GodsStrength::IsAura  (line 611, @0x0000000002a67070, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::HasScepter
bool __fastcall CDOTA_Modifier_Sven_GodsStrength::IsAura(CDOTA_Modifier_Sven_GodsStrength *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  return CDOTA_BaseNPC::HasScepter(Parent);
}


// CDOTA_Modifier_Sven_GodsStrength::GetModifierAura  (line 612, @0x0000000002a61330, libserver.so)
// strings: "modifier_sven_gods_strength_child"
const char *__fastcall CDOTA_Modifier_Sven_GodsStrength::GetModifierAura(CDOTA_Modifier_Sven_GodsStrength *const this)
{
  return "modifier_sven_gods_strength_child";
}


// CDOTA_Modifier_Sven_GodsStrength::GetAuraSearchTeam  (line 614, @0x0000000002a61340, libserver.so)
int __fastcall CDOTA_Modifier_Sven_GodsStrength::GetAuraSearchTeam(CDOTA_Modifier_Sven_GodsStrength *const this)
{
  return 1;
}


// CDOTA_Modifier_Sven_GodsStrength::GetAuraSearchType  (line 615, @0x0000000002a61350, libserver.so)
int __fastcall CDOTA_Modifier_Sven_GodsStrength::GetAuraSearchType(CDOTA_Modifier_Sven_GodsStrength *const this)
{
  return 1;
}


// CDOTA_Modifier_Sven_GodsStrength::GetAuraSearchFlags  (line 616, @0x0000000002a61360, libserver.so)
int __fastcall CDOTA_Modifier_Sven_GodsStrength::GetAuraSearchFlags(CDOTA_Modifier_Sven_GodsStrength *const this)
{
  return 64;
}


// CDOTA_Modifier_Sven_GodsStrength::GetAuraRadius  (line 617, @0x0000000002a61370, libserver.so)
int __fastcall CDOTA_Modifier_Sven_GodsStrength::GetAuraRadius(CDOTA_Modifier_Sven_GodsStrength *const this)
{
  return this->radius_scepter;
}


// CDOTA_Modifier_Sven_GodsStrength::GetAuraEntityReject  (line 618, @0x0000000002a66660, libserver.so)
// calls: CDOTA_Buff::GetParent
bool __fastcall CDOTA_Modifier_Sven_GodsStrength::GetAuraEntityReject(
        CDOTA_Modifier_Sven_GodsStrength *const this,
        CDOTA_BaseNPC *pNPC)
{
  return CDOTA_Buff::GetParent(this) == pNPC;
}


// CDOTA_Modifier_Sven_GodsStrength::OnCreated  (line 642, @0x0000000002a51600, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle
// strings: "gods_strength_damage", "particles/units/heroes/hero_sven/sven_spell_gods_strength_ambient.vpcf", "attach_weapon", "attach_head"
void __fastcall CDOTA_Modifier_Sven_GodsStrength::OnCreated(
        CDOTA_Modifier_Sven_GodsStrength *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v7; // r14
  CDOTA_ParticleManager *v8; // rax
  __int64 v9; // r13
  CDOTA_BaseNPC *v10; // r14
  CDOTA_ParticleManager *v11; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-24h]
  Vector v13; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->gods_strength_damage, "gods_strength_damage");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->radius_scepter, "radius_scepter");
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_sven/sven_spell_gods_strength_ambient.vpcf",
                      1,
                      Parent,
                      0,
                      0);
  v7 = CDOTA_Buff::GetParent(this);
  v8 = GetParticleManager();
  v9 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(v8, Parent, 0, v7, 5, "attach_weapon", vec3_invalid, 1);
  v10 = CDOTA_Buff::GetParent(this);
  v11 = GetParticleManager();
  *&v13.x = v9;
  v13.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v11, Parent, 2, v10, 5, "attach_head", v13, 1);
  CDOTA_Buff::AddParticle(this, Parent, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_Sven_GodsStrength::OnDestroy  (line 668, @0x0000000002a3f550, libserver.so)
void __fastcall CDOTA_Modifier_Sven_GodsStrength::OnDestroy(CDOTA_Modifier_Sven_GodsStrength *const this)
{
  ;
}


// CDOTA_Modifier_Sven_GodsStrength::OnRefresh  (line 690, @0x0000000002a55a10, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "gods_strength_damage"
void __fastcall CDOTA_Modifier_Sven_GodsStrength::OnRefresh(
        CDOTA_Modifier_Sven_GodsStrength *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->gods_strength_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "gods_strength_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->radius_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "radius_scepter", -1, 0);
      return;
    }
  }
  else
  {
    this->gods_strength_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->radius_scepter = 0;
}


// CDOTA_Modifier_Sven_GodsStrength::DeclareFunctions  (line 698, @0x0000000002a3f560, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Sven_GodsStrength::GetModifierBaseDamageOutgoing_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Sven_GodsStrength::DeclareFunctions(CDOTA_Modifier_Sven_GodsStrength *const this)
{
  this->m_Functions[34].__pfn = CDOTA_Modifier_Sven_GodsStrength::GetModifierBaseDamageOutgoing_Percentage;
  this->m_Functions[34].__delta = 0;
}


// CDOTA_Modifier_Sven_GodsStrength::GetModifierBaseDamageOutgoing_Percentage  (line 705, @0x0000000002a3f580, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Sven_GodsStrength::GetModifierBaseDamageOutgoing_Percentage(
        CDOTA_Modifier_Sven_GodsStrength *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->gods_strength_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Sven_GodsStrength_Child::~CDOTA_Modifier_Sven_GodsStrength_Child  (line 713, @0x0000000002a652a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Sven_GodsStrength_Child::~CDOTA_Modifier_Sven_GodsStrength_Child(
        CDOTA_Modifier_Sven_GodsStrength_Child *const this)
{
  this->_vptr_CDOTA_Buff = &off_43A62B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Sven_GodsStrength_Child::~CDOTA_Modifier_Sven_GodsStrength_Child  (line 713, @0x0000000002a652c0, libserver.so)  // inlines: ~CDOTA_Modifier_Sven_GodsStrength_Child
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Sven_GodsStrength_Child::~CDOTA_Modifier_Sven_GodsStrength_Child(
        CDOTA_Modifier_Sven_GodsStrength_Child *const this)
{
  this->_vptr_CDOTA_Buff = &off_43A62B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Sven_GodsStrength_Child::OnCreated  (line 732, @0x0000000002a550b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "gods_strength_damage_scepter"
void __fastcall CDOTA_Modifier_Sven_GodsStrength_Child::OnCreated(
        CDOTA_Modifier_Sven_GodsStrength_Child *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->gods_strength_damage_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                           Ability,
                                           "gods_strength_damage_scepter",
                                           -1,
                                           0);
  else
    this->gods_strength_damage_scepter = 0;
}


// CDOTA_Modifier_Sven_GodsStrength_Child::OnRefresh  (line 739, @0x0000000002a553b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "gods_strength_damage_scepter"
void __fastcall CDOTA_Modifier_Sven_GodsStrength_Child::OnRefresh(
        CDOTA_Modifier_Sven_GodsStrength_Child *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->gods_strength_damage_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                           Ability,
                                           "gods_strength_damage_scepter",
                                           -1,
                                           0);
  else
    this->gods_strength_damage_scepter = 0;
}


// CDOTA_Modifier_Sven_GodsStrength_Child::DeclareFunctions  (line 746, @0x0000000002a3f5a0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Sven_GodsStrength_Child::GetModifierBaseDamageOutgoing_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Sven_GodsStrength_Child::DeclareFunctions(
        CDOTA_Modifier_Sven_GodsStrength_Child *const this)
{
  this->m_Functions[34].__pfn = CDOTA_Modifier_Sven_GodsStrength_Child::GetModifierBaseDamageOutgoing_Percentage;
  this->m_Functions[34].__delta = 0;
}


// CDOTA_Modifier_Sven_GodsStrength_Child::GetModifierBaseDamageOutgoing_Percentage  (line 753, @0x0000000002a3f5c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Sven_GodsStrength_Child::GetModifierBaseDamageOutgoing_Percentage(
        CDOTA_Modifier_Sven_GodsStrength_Child *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->gods_strength_damage_scepter;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Holdout_GodsStrength::~CDOTA_Ability_Holdout_GodsStrength  (line 764, @0x0000000002a675f0, libserver.so)  // inlines: ~CDOTA_Ability_Sven_GodsStrength
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Holdout_GodsStrength::~CDOTA_Ability_Holdout_GodsStrength(
        CDOTA_Ability_Holdout_GodsStrength *const this)
{
  this->_vptr_IHandleEntity = &off_43A54D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Holdout_GodsStrength::~CDOTA_Ability_Holdout_GodsStrength  (line 764, @0x0000000002a67610, libserver.so)  // inlines: ~CDOTA_Ability_Holdout_GodsStrength, ~CDOTA_Ability_Sven_GodsStrength
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Holdout_GodsStrength::~CDOTA_Ability_Holdout_GodsStrength(
        CDOTA_Ability_Holdout_GodsStrength *const this)
{
  this->_vptr_IHandleEntity = &off_43A54D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Holdout_GodsStrength::Schema_DynamicBinding  (line 766, @0x0000000002a61380, libserver.so)
// globals: CDOTA_Ability_Holdout_GodsStrength::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Holdout_GodsStrength::Schema_DynamicBinding(
        const CDOTA_Ability_Holdout_GodsStrength *const this)
{
  return CDOTA_Ability_Holdout_GodsStrength::s_pSchemaBinding;
}


// CDOTA_Ability_Holdout_GodsStrength::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 766, @0x0000000002a61390, libserver.so)
// globals: CDOTA_Ability_Holdout_GodsStrength::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Holdout_GodsStrength::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Holdout_GodsStrength::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Holdout_GodsStrength::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Holdout_GodsStrength::CEntityInstanceEntityClass::DestructInstance  (line 766, @0x0000000002a613a0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Holdout_GodsStrength>
void __fastcall CDOTA_Ability_Holdout_GodsStrength::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Holdout_GodsStrength::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Holdout_GodsStrength::CEntityInstanceEntityClass::FreeInstance  (line 766, @0x0000000002a613c0, libserver.so)
void __fastcall CDOTA_Ability_Holdout_GodsStrength::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Holdout_GodsStrength::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Holdout_GodsStrength::CEntityInstanceEntityClass::CanAllocate  (line 766, @0x0000000002a613e0, libserver.so)
bool __fastcall CDOTA_Ability_Holdout_GodsStrength::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Holdout_GodsStrength::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Holdout_GodsStrength::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 766, @0x0000000002a613f0, libserver.so)
// globals: CDOTA_Ability_Holdout_GodsStrength::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Holdout_GodsStrength::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Holdout_GodsStrength::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Holdout_GodsStrength::s_pSchemaBinding;
}


// CDOTA_Ability_Holdout_GodsStrength::CEntityInstanceEntityClass::AllocateInstance  (line 766, @0x0000000002a64030, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Holdout_GodsStrength::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Holdout_GodsStrength::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Holdout_GodsStrength::CEntityInstanceEntityClass::ConstructInstance  (line 766, @0x0000000002a661a0, libserver.so)  // inlines: CDOTA_Ability_Holdout_GodsStrength, CDOTA_Ability_Sven_GodsStrength, Construct<CDOTA_Ability_Holdout_GodsStrength>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Holdout_GodsStrength::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Holdout_GodsStrength::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43A6610;
  }
  return p;
}


// CDOTA_Ability_Holdout_GodsStrength::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 766, @0x0000000002a6ad40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Holdout_GodsStrength::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Holdout_GodsStrength::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Holdout_GodsStrength::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 766, @0x0000000002a6ad60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Holdout_GodsStrength::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Holdout_GodsStrength::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Holdout_GodsStrength::GetEntityClassInternal  (line 766, @0x0000000002a725b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTA_Ability_Sven_GodsStrength::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "holdout_gods_strength", "CDOTA_Ability_Holdout_GodsStrength"
// globals: `guard variable for'CDOTA_Ability_Holdout_GodsStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GodsStrengthClass, CDOTA_Ability_Holdout_GodsStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GodsStrengthClass, __dso_handle, CDOTA_Ability_Holdout_GodsStrength::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Holdout_GodsStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_GodsStrengthClassInfo, CDOTA_Ability_Holdout_GodsStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_GodsStrengthClassInfo
CEntityClass *__cdecl CDOTA_Ability_Holdout_GodsStrength::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Holdout_GodsStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GodsStrengthClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Holdout_GodsStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GodsStrengthClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Holdout_GodsStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GodsStrengthClass);
    CDOTA_Ability_Holdout_GodsStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GodsStrengthClass._vptr_CEntityClass = off_43A6590;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Holdout_GodsStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GodsStrengthClass);
    __cxa_atexit(
      CDOTA_Ability_Holdout_GodsStrength::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Holdout_GodsStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GodsStrengthClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Holdout_GodsStrengthClass != 0 )
    return &CDOTA_Ability_Holdout_GodsStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GodsStrengthClass;
  if ( `guard variable for'CDOTA_Ability_Holdout_GodsStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_GodsStrengthClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Holdout_GodsStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_GodsStrengthClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Ability_Sven_GodsStrength::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Holdout_GodsStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_GodsStrengthClassInfo,
      "CDOTA_Ability_Holdout_GodsStrength",
      "holdout_gods_strength",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Holdout_GodsStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_GodsStrengthClassInfo);
  }
  CDOTA_Ability_Holdout_GodsStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GodsStrengthClass.m_pClassInfo = &CDOTA_Ability_Holdout_GodsStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_GodsStrengthClassInfo;
  CDOTA_Ability_Holdout_GodsStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GodsStrengthClass.m_pBaseClassInfo = CDOTA_Ability_Holdout_GodsStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_GodsStrengthClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Holdout_GodsStrengthClass = &CDOTA_Ability_Holdout_GodsStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GodsStrengthClass;
  CDOTA_Ability_Holdout_GodsStrength::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_GodsStrengthClassInfo.m_pClass = &CDOTA_Ability_Holdout_GodsStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GodsStrengthClass;
  CDOTA_Ability_Holdout_GodsStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GodsStrengthClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Holdout_GodsStrengthClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Holdout_GodsStrength::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_GodsStrengthClass;
}


// CDOTA_Ability_Holdout_GodsStrength::OnSpellStart  (line 776, @0x0000000002a41210, libserver.so)  // inlines: entindex
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::StartGesture, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound, CEntityInstance::GetEntityIndex (16 total)
// strings: "modifier_holdout_gods_strength", "particles/units/heroes/hero_sven/sven_spell_gods_strength.vpcf", "Hero_Sven.GodsStrength"
void __fastcall CDOTA_Ability_Holdout_GodsStrength::OnSpellStart(CDOTA_Ability_Holdout_GodsStrength *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v8; // r14
  CDOTA_ParticleManager *v9; // rax
  CDOTA_ParticleManager *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CEntityIndex v13; // eax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-28h]

  v15 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_holdout_gods_strength");
  CDOTABaseAbility::GetDuration(this);
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_holdout_gods_strength", &kv, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v5, 1519, 0.1, 0.1, 9, 0, 1.0);
  v6 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v6) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_sven/sven_spell_gods_strength.vpcf",
                  1,
                  v6,
                  0,
                  0);
  v8 = CDOTABaseAbility::GetCaster(this);
  v9 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v9, v6, 1, v8, 1, 0, vec3_invalid, 1);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v10, v6);
  v11 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v11, "Hero_Sven.GodsStrength", 0.0, 0, 0);
  v12 = CDOTABaseAbility::GetCaster(this);
  v13.m_Data = CEntityInstance::GetEntityIndex(v12).m_Data;
  CreateUnitEvent(v13, 0, 25, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_IMPORTANT_ABILITY);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Holdout_GodsStrength::~CDOTA_Modifier_Holdout_GodsStrength  (line 798, @0x0000000002a65250, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Holdout_GodsStrength::~CDOTA_Modifier_Holdout_GodsStrength(
        CDOTA_Modifier_Holdout_GodsStrength *const this)
{
  this->_vptr_CDOTA_Buff = &off_43A70D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Holdout_GodsStrength::~CDOTA_Modifier_Holdout_GodsStrength  (line 798, @0x0000000002a65270, libserver.so)  // inlines: ~CDOTA_Modifier_Holdout_GodsStrength
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Holdout_GodsStrength::~CDOTA_Modifier_Holdout_GodsStrength(
        CDOTA_Modifier_Holdout_GodsStrength *const this)
{
  this->_vptr_CDOTA_Buff = &off_43A70D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Holdout_GodsStrength::IsPurgable  (line 806, @0x0000000002a61400, libserver.so)
bool __fastcall CDOTA_Modifier_Holdout_GodsStrength::IsPurgable(CDOTA_Modifier_Holdout_GodsStrength *const this)
{
  return 0;
}


// CDOTA_Modifier_Holdout_GodsStrength::GetStatusEffectName  (line 808, @0x0000000002a61410, libserver.so)
// strings: "particles/status_fx/status_effect_gods_strength.vpcf"
const char *__fastcall CDOTA_Modifier_Holdout_GodsStrength::GetStatusEffectName(
        CDOTA_Modifier_Holdout_GodsStrength *const this)
{
  return "particles/status_fx/status_effect_gods_strength.vpcf";
}


// CDOTA_Modifier_Holdout_GodsStrength::StatusEffectPriority  (line 809, @0x0000000002a61420, libserver.so)
int __fastcall CDOTA_Modifier_Holdout_GodsStrength::StatusEffectPriority(
        CDOTA_Modifier_Holdout_GodsStrength *const this)
{
  return 1000;
}


// CDOTA_Modifier_Holdout_GodsStrength::GetHeroEffectName  (line 810, @0x0000000002a61430, libserver.so)
// strings: "particles/units/heroes/hero_sven/sven_gods_strength_hero_effect.vpcf"
const char *__fastcall CDOTA_Modifier_Holdout_GodsStrength::GetHeroEffectName(
        CDOTA_Modifier_Holdout_GodsStrength *const this)
{
  return "particles/units/heroes/hero_sven/sven_gods_strength_hero_effect.vpcf";
}


// CDOTA_Modifier_Holdout_GodsStrength::HeroEffectPriority  (line 811, @0x0000000002a61440, libserver.so)
int __fastcall CDOTA_Modifier_Holdout_GodsStrength::HeroEffectPriority(CDOTA_Modifier_Holdout_GodsStrength *const this)
{
  return 100;
}


// CDOTA_Modifier_Holdout_GodsStrength::OnCreated  (line 830, @0x0000000002a5ddd0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle
// strings: "gods_strength_damage", "model_scale", "cooldown_reduction_per_kill", "particles/units/heroes/hero_sven/sven_spell_gods_strength_ambient.vpcf", "attach_head"
void __fastcall CDOTA_Modifier_Holdout_GodsStrength::OnCreated(
        CDOTA_Modifier_Holdout_GodsStrength *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v9; // r13
  CDOTA_ParticleManager *v10; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->gods_strength_damage, "gods_strength_damage");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->bonus_strength, "bonus_strength");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->model_scale, "model_scale");
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
    this->cooldown_reduction_per_kill = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                          v6,
                                          "cooldown_reduction_per_kill",
                                          -1,
                                          0);
  else
    this->cooldown_reduction_per_kill = 0.0;
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_sven/sven_spell_gods_strength_ambient.vpcf",
                      1,
                      Parent,
                      0,
                      0);
  v9 = CDOTA_Buff::GetParent(this);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v10, Parent, 2, v9, 5, "attach_head", vec3_invalid, 1);
  CDOTA_Buff::AddParticle(this, Parent, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_Holdout_GodsStrength::OnDestroy  (line 857, @0x0000000002a3f5e0, libserver.so)
void __fastcall CDOTA_Modifier_Holdout_GodsStrength::OnDestroy(CDOTA_Modifier_Holdout_GodsStrength *const this)
{
  ;
}


// CDOTA_Modifier_Holdout_GodsStrength::OnRefresh  (line 879, @0x0000000002a5d4a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "gods_strength_damage", "model_scale", "cooldown_reduction_per_kill"
void __fastcall CDOTA_Modifier_Holdout_GodsStrength::OnRefresh(
        CDOTA_Modifier_Holdout_GodsStrength *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->gods_strength_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "gods_strength_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->gods_strength_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_strength = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_strength", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->model_scale = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->bonus_strength = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->model_scale = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "model_scale", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->cooldown_reduction_per_kill = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                          v6,
                                          "cooldown_reduction_per_kill",
                                          -1,
                                          0);
    return;
  }
LABEL_9:
  this->cooldown_reduction_per_kill = 0.0;
}


// CDOTA_Modifier_Holdout_GodsStrength::DeclareFunctions  (line 889, @0x0000000002a3f5f0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Holdout_GodsStrength::GetModifierBonusStats_Strength(CModifierParams const&), CDOTA_Modifier_Holdout_GodsStrength::ModelScale(CModifierParams const&), CDOTA_Modifier_Holdout_GodsStrength::OnDeath(CModifierParams const&), CDOTA_Modifier_Holdout_GodsStrength::GetModifierBaseDamageOutgoing_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Holdout_GodsStrength::DeclareFunctions(CDOTA_Modifier_Holdout_GodsStrength *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Holdout_GodsStrength::GetModifierBonusStats_Strength;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[153].__delta = 0;
  this->m_Functions[153].__pfn = CDOTA_Modifier_Holdout_GodsStrength::ModelScale;
  this->m_Functions[138].__pfn = CDOTA_Modifier_Holdout_GodsStrength::OnDeath;
  this->m_Functions[138].__delta = 0;
  this->m_Functions[34].__pfn = CDOTA_Modifier_Holdout_GodsStrength::GetModifierBaseDamageOutgoing_Percentage;
  this->m_Functions[34].__delta = 0;
}


// CDOTA_Modifier_Holdout_GodsStrength::GetModifierBaseDamageOutgoing_Percentage  (line 899, @0x0000000002a3f660, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Holdout_GodsStrength::GetModifierBaseDamageOutgoing_Percentage(
        CDOTA_Modifier_Holdout_GodsStrength *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->gods_strength_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Holdout_GodsStrength::ModelScale  (line 906, @0x0000000002a3f680, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Holdout_GodsStrength::ModelScale(
        CDOTA_Modifier_Holdout_GodsStrength *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->model_scale;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Holdout_GodsStrength::GetModifierBonusStats_Strength  (line 913, @0x0000000002a3f6a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Holdout_GodsStrength::GetModifierBonusStats_Strength(
        CDOTA_Modifier_Holdout_GodsStrength *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_strength;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Holdout_GodsStrength::OnDeath  (line 918, @0x0000000002a48bb0, libserver.so)  // inlines: AttackerNPC, Get, GetInstance, Max<float>, ToDOTABaseNPC, operator CBaseEntity*
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CDOTA_BaseNPC::GetAbilityByIndex, CDOTABaseAbility::GetCooldownTimeRemaining, CDOTABaseAbility::EndCooldown
ModifierVariant_t __fastcall CDOTA_Modifier_Holdout_GodsStrength::OnDeath(
        CDOTA_Modifier_Holdout_GodsStrength *const this,
        const CModifierParams *const params)
{
  CEntityInstance *v3; // rax
  CDOTA_BaseNPC *v4; // rbx
  int i; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTABaseAbility *v9; // rbx
  float flCurCD; // [rsp+Ch] [rbp-24h]

  v3 = CEntityHandle::operator CEntityInstance *(&params->hattacker);
  if ( v3 != 0 && BYTE3(v3[7]._vptr_IHandleEntity) != 0 )
    v4 = v3;
  else
    v4 = 0;
  if ( CDOTA_Buff::GetCaster(this) != 0 && CDOTA_Buff::GetParent(this) == v4 )
  {
    for ( i = 0; i != 24; ++i )
    {
      Caster = CDOTA_Buff::GetCaster(this);
      AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(Caster, i);
      v9 = AbilityByIndex;
      if ( AbilityByIndex != 0 && (*(AbilityByIndex->_vptr_IHandleEntity + 245))(AbilityByIndex) == 0 )
      {
        flCurCD = CDOTABaseAbility::GetCooldownTimeRemaining(v9);
        CDOTABaseAbility::EndCooldown(v9);
        (*(v9->_vptr_IHandleEntity + 241))(v9, fmaxf(flCurCD - this->cooldown_reduction_per_kill, 0.0));
      }
    }
  }
  return 1uLL;
}


