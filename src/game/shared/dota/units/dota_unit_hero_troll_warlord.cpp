// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_troll_warlord.cpp:32
class CDOTA_Unit_Hero_TrollWarlord : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_TrollWarlord(CDOTA_Unit_Hero_TrollWarlord &);
	CDOTA_Unit_Hero_TrollWarlord(CDOTA_Unit_Hero_TrollWarlord &);
	CDOTA_Unit_Hero_TrollWarlord();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void CalculateActivityModifiers(Activity);
	virtual ~CDOTA_Unit_Hero_TrollWarlord();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[442] CalculateActivityModifiers
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_troll_warlord.cpp:58
class C_CDOTA_Unit_Hero_TrollWarlord_MapInstall {
	C_CDOTA_Unit_Hero_TrollWarlord_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_troll_warlord.cpp:71
class CDOTA_Ability_TrollWarlord_BerserkersRage : public CDOTABaseAbility {
public:

private:

	int m_iOriginalAttackCapabilities;  // +0x390
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
	CDOTA_Ability_TrollWarlord_BerserkersRage(CDOTA_Ability_TrollWarlord_BerserkersRage &);
	CDOTA_Ability_TrollWarlord_BerserkersRage(CDOTA_Ability_TrollWarlord_BerserkersRage &);
	CDOTA_Ability_TrollWarlord_BerserkersRage();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnToggle();
	virtual bool ResetToggleOnRespawn();
	virtual bool ProcsMagicStick();
	virtual void OnStolen(CDOTABaseAbility *);
	virtual void OnUnStolen();
	virtual void OnUpgrade();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_TrollWarlord_BerserkersRage();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[270] OnToggle
	// vtable[281] ResetToggleOnRespawn
	// vtable[239] ProcsMagicStick
	// vtable[307] OnStolen
	// vtable[308] OnUnStolen
	// vtable[268] OnUpgrade
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_troll_warlord.cpp:101
class C_CDOTA_Ability_TrollWarlord_BerserkersRage_MapInstall {
	C_CDOTA_Ability_TrollWarlord_BerserkersRage_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_troll_warlord.cpp:196
class CDOTA_Modifier_TrollWarlord_BerserkersRage : public CDOTA_Buff {
public:

private:

	int bonus_move_speed;  // +0xba8
	int bonus_range;  // +0xbac
	int bonus_hp;  // +0xbb0
	int bonus_armor;  // +0xbb4
	int bash_chance;  // +0xbb8
	int bash_damage;  // +0xbbc
	float base_attack_time;  // +0xbc0
	float bash_duration;  // +0xbc4
	CDOTA_Modifier_TrollWarlord_BerserkersRage();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual bool RemoveOnDeath();
	virtual bool AllowIllusionDuplicate();
	virtual const char * GetEffectName();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPreAttack(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierAttackRangeBonus(const CModifierParams &);
	ModifierVariant_t GetModifierBaseAttackTimeConstant(const CModifierParams &);
	ModifierVariant_t GetModifierHealthBonus(const CModifierParams &);
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	ModifierVariant_t GetModifierProcAttack_BonusDamage_Magical(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	ModifierVariant_t GetAttackSound(const CModifierParams &);
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_TrollWarlord_BerserkersRage();

	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// vtable[54] RemoveOnDeath
	// vtable[18] AllowIllusionDuplicate
	// vtable[67] GetEffectName
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_troll_warlord.cpp:404
class CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged : public CDOTABaseAbility {
public:

private:

	int m_iArrowProjectile;  // +0x39c
	int axe_width;  // +0x3a0
	float axe_speed;  // +0x3a4
	float axe_range;  // +0x3a8
	int axe_spread;  // +0x3ac
	int axe_count;  // +0x3b0

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
	CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged(CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged &);
	CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged(CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged &);
	CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual void OnUpgrade();
	virtual float GetCooldown(int);
	virtual Activity GetGestureBasedActivity();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[268] OnUpgrade
	// vtable[242] GetCooldown
	// vtable[211] GetGestureBasedActivity
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// sizeof = 976
};

// src/game/shared/dota/units/dota_unit_hero_troll_warlord.cpp:434
class C_CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged_MapInstall {
	C_CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_troll_warlord.cpp:585
class CDOTA_Modifier_TrollWarlord_WhirlingAxes_Slow : public CDOTA_Buff {
public:

private:

	int movement_speed;  // +0xba8
	CDOTA_Modifier_TrollWarlord_WhirlingAxes_Slow();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_TrollWarlord_WhirlingAxes_Slow();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_troll_warlord.cpp:637
class CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee : public CDOTABaseAbility {
public:

private:

	int m_nAxeIdx;  // +0x3a8
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
	CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee(CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee &);
	CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee(CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee &);
	CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual void OnUpgrade();
	virtual const char * GetStolenActivityModifier();
	virtual float GetCooldown(int);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[268] OnUpgrade
	// vtable[310] GetStolenActivityModifier
	// vtable[242] GetCooldown
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 944
};

// src/game/shared/dota/units/dota_unit_hero_troll_warlord.cpp:659
class C_CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee_MapInstall {
	C_CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_troll_warlord.cpp:723
class CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee : public CDOTA_Buff {
public:

private:

	int damage;  // +0xba8
	int hit_radius;  // +0xbac
	int axe_movement_speed;  // +0xbb0
	float whirl_duration;  // +0xbb4
	float max_range;  // +0xbb8
	float blind_duration;  // +0xbbc
	float m_flRotation;  // +0xbc0
	float m_flAxeRadius;  // +0xbc4
	float m_flDieTime;  // +0xbc8
	int m_nSwapIndex;  // +0xbcc
	bool m_bReturning;  // +0xbd0

	int m_nAxeFXIndex[2];  // +0xbd4

	CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee();

	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// vtable[7] GetAttributes
	// sizeof = 3088
};

// src/game/shared/dota/units/dota_unit_hero_troll_warlord.cpp:922
class CDOTA_Modifier_TrollWarlord_Axe_Invulnerable : public CDOTA_Buff {
public:

	CDOTA_Modifier_TrollWarlord_Axe_Invulnerable();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_TrollWarlord_Axe_Invulnerable();

	// vtable[5] CheckState
	// vtable[11] IsHidden
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_troll_warlord.cpp:951
class CDOTA_Modifier_TrollWarlord_WhirlingAxes_Blind : public CDOTA_Buff {
public:

private:

	int blind_pct;  // +0xba8
	CDOTA_Modifier_TrollWarlord_WhirlingAxes_Blind();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMiss_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_TrollWarlord_WhirlingAxes_Blind();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMiss_Percentage
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_troll_warlord.cpp:999
class CDOTA_Ability_TrollWarlord_Fervor : public CDOTABaseAbility {
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
	CDOTA_Ability_TrollWarlord_Fervor(CDOTA_Ability_TrollWarlord_Fervor &);
	CDOTA_Ability_TrollWarlord_Fervor(CDOTA_Ability_TrollWarlord_Fervor &);
	CDOTA_Ability_TrollWarlord_Fervor();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_TrollWarlord_Fervor();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_troll_warlord.cpp:1013
class CDOTA_Modifier_TrollWarlord_Fervor : public CDOTA_Buff {
public:

private:

	int max_stacks;  // +0xba8
	int attack_speed;  // +0xbac
	EHANDLE m_hUnit;  // +0xbb0
	CDOTA_Modifier_TrollWarlord_Fervor();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t OnAttack(const CModifierParams &);
	virtual ~CDOTA_Modifier_TrollWarlord_Fervor();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_troll_warlord.cpp:1114
class CDOTA_Ability_TrollWarlord_BattleTrance : public CDOTABaseAbility {
public:

private:

	float trance_duration;  // +0x390
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
	CDOTA_Ability_TrollWarlord_BattleTrance(CDOTA_Ability_TrollWarlord_BattleTrance &);
	CDOTA_Ability_TrollWarlord_BattleTrance(CDOTA_Ability_TrollWarlord_BattleTrance &);
	CDOTA_Ability_TrollWarlord_BattleTrance();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_TrollWarlord_BattleTrance();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_troll_warlord.cpp:1194
class CDOTA_Modifier_TrollWarlord_BattleTrance : public CDOTA_Buff {
public:

private:

	int attack_speed;  // +0xba8
	CDOTA_Modifier_TrollWarlord_BattleTrance();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsPurgable();
	virtual const char * GetEffectName();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual ~CDOTA_Modifier_TrollWarlord_BattleTrance();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[14] IsPurgable
	// vtable[67] GetEffectName
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_TrollWarlord::~CDOTA_Unit_Hero_TrollWarlord  (line 32, @0x0000000002d2d2e0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_TrollWarlord::~CDOTA_Unit_Hero_TrollWarlord(CDOTA_Unit_Hero_TrollWarlord *const this)
{
  this->_vptr_IHandleEntity = &off_4649E90;
  this->_vptr_INextBotEventResponder = &off_464AE70;
  this->_vptr_CObstructionObject = &off_464B1A0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_TrollWarlord::~CDOTA_Unit_Hero_TrollWarlord  (line 32, @0x0000000002d2d320, libserver.so)  // inlines: ~CDOTA_Unit_Hero_TrollWarlord
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_TrollWarlord::~CDOTA_Unit_Hero_TrollWarlord(CDOTA_Unit_Hero_TrollWarlord *const this)
{
  this->_vptr_IHandleEntity = &off_4649E90;
  this->_vptr_INextBotEventResponder = &off_464AE70;
  this->_vptr_CObstructionObject = &off_464B1A0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_TrollWarlord::Schema_DynamicBinding  (line 34, @0x0000000002d1f710, libserver.so)
// globals: CDOTA_Unit_Hero_TrollWarlord::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_TrollWarlord::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_TrollWarlord *const this)
{
  return CDOTA_Unit_Hero_TrollWarlord::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_TrollWarlord::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 34, @0x0000000002d1f740, libserver.so)
// globals: CDOTA_Unit_Hero_TrollWarlord::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_TrollWarlord::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_TrollWarlord::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_TrollWarlord::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_TrollWarlord::CEntityInstanceEntityClass::DestructInstance  (line 34, @0x0000000002d1f750, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_TrollWarlord>
void __fastcall CDOTA_Unit_Hero_TrollWarlord::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_TrollWarlord::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_TrollWarlord::CEntityInstanceEntityClass::FreeInstance  (line 34, @0x0000000002d1f770, libserver.so)
void __fastcall CDOTA_Unit_Hero_TrollWarlord::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_TrollWarlord::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_TrollWarlord::CEntityInstanceEntityClass::CanAllocate  (line 34, @0x0000000002d1f790, libserver.so)
bool __fastcall CDOTA_Unit_Hero_TrollWarlord::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_TrollWarlord::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_TrollWarlord::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 34, @0x0000000002d1f7a0, libserver.so)
// globals: CDOTA_Unit_Hero_TrollWarlord::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_TrollWarlord::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_TrollWarlord::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_TrollWarlord::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_TrollWarlord::CEntityInstanceEntityClass::AllocateInstance  (line 34, @0x0000000002d24f50, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_TrollWarlord::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_TrollWarlord::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_TrollWarlord::CEntityInstanceEntityClass::ConstructInstance  (line 34, @0x0000000002d28920, libserver.so)  // inlines: CDOTA_Unit_Hero_TrollWarlord, Construct<CDOTA_Unit_Hero_TrollWarlord>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_TrollWarlord::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_TrollWarlord::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_4649E90;
    *(p + 236) = &off_464AE70;
    *(p + 257) = &off_464B1A0;
  }
  return p;
}


// CDOTA_Unit_Hero_TrollWarlord::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 34, @0x0000000002d35570, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_TrollWarlord::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_TrollWarlord::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_TrollWarlord::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 34, @0x0000000002d35750, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_TrollWarlord::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_TrollWarlord::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_TrollWarlord::GetEntityClassInternal  (line 34, @0x0000000002d4d4b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "npc_dota_hero_troll_warlord", "CDOTA_Unit_Hero_TrollWarlord"
// globals: `guard variable for'CDOTA_Unit_Hero_TrollWarlord::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TrollWarlordClass, CDOTA_Unit_Hero_TrollWarlord::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TrollWarlordClass, __dso_handle, CDOTA_Unit_Hero_TrollWarlord::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_TrollWarlord::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TrollWarlordClassInfo, CDOTA_Unit_Hero_TrollWarlord::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TrollWarlordClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_TrollWarlord::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_TrollWarlord::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TrollWarlordClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_TrollWarlord::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TrollWarlordClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_TrollWarlord::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TrollWarlordClass);
    CDOTA_Unit_Hero_TrollWarlord::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TrollWarlordClass._vptr_CEntityClass = off_4649E10;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_TrollWarlord::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TrollWarlordClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_TrollWarlord::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_TrollWarlord::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TrollWarlordClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_TrollWarlordClass != 0 )
    return &CDOTA_Unit_Hero_TrollWarlord::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TrollWarlordClass;
  if ( `guard variable for'CDOTA_Unit_Hero_TrollWarlord::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TrollWarlordClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_TrollWarlord::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TrollWarlordClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_TrollWarlord::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TrollWarlordClassInfo,
      "CDOTA_Unit_Hero_TrollWarlord",
      "npc_dota_hero_troll_warlord",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_TrollWarlord::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TrollWarlordClassInfo);
  }
  CDOTA_Unit_Hero_TrollWarlord::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TrollWarlordClass.m_pClassInfo = &CDOTA_Unit_Hero_TrollWarlord::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TrollWarlordClassInfo;
  CDOTA_Unit_Hero_TrollWarlord::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TrollWarlordClass.m_pBaseClassInfo = CDOTA_Unit_Hero_TrollWarlord::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TrollWarlordClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_TrollWarlordClass = &CDOTA_Unit_Hero_TrollWarlord::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TrollWarlordClass;
  CDOTA_Unit_Hero_TrollWarlord::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TrollWarlordClassInfo.m_pClass = &CDOTA_Unit_Hero_TrollWarlord::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TrollWarlordClass;
  CDOTA_Unit_Hero_TrollWarlord::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TrollWarlordClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_TrollWarlordClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_TrollWarlord::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TrollWarlordClass;
}


// CDOTA_Unit_Hero_TrollWarlord::CalculateActivityModifiers  (line 37, @0x0000000002d2d710, libserver.so)
// calls: CDOTA_BaseNPC::CalculateActivityModifiers, CDOTA_BaseNPC::GetAttackSpeed, CDOTA_BaseNPC::AddActivityModifier
// strings: "fastest", "faster"
void __fastcall CDOTA_Unit_Hero_TrollWarlord::CalculateActivityModifiers(
        CDOTA_Unit_Hero_TrollWarlord *const this,
        Activity iActivity)
{
  float v3; // xmm0_4
  UtlSymId_t v4[16]; // [rsp+0h] [rbp-20h] BYREF

  CDOTA_BaseNPC::CalculateActivityModifiers(this, iActivity);
  v3 = CDOTA_BaseNPC::GetAttackSpeed(this) * 100.0;
  if ( v3 > 430.0 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "fastest");
  }
  else if ( v3 >= 320.0 && v3 <= 430.0 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "faster");
  }
  else if ( v3 >= 200.0 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "fast");
  }
}


// CDOTA_Unit_Hero_TrollWarlord::YouForgotToImplementOrDeclareServerClass  (line 58, @0x0000000002cc9e00, libserver.so)
int __fastcall CDOTA_Unit_Hero_TrollWarlord::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_TrollWarlord *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_TrollWarlord::GetServerClass  (line 58, @0x0000000002cde4b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_TrollWarlord::GetServerClass(CDOTA_Unit_Hero_TrollWarlord *const this)
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


// CDOTA_Ability_TrollWarlord_BerserkersRage::~CDOTA_Ability_TrollWarlord_BerserkersRage  (line 71, @0x0000000002d2c310, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_TrollWarlord_BerserkersRage::~CDOTA_Ability_TrollWarlord_BerserkersRage(
        CDOTA_Ability_TrollWarlord_BerserkersRage *const this)
{
  this->_vptr_IHandleEntity = &off_464B270;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_TrollWarlord_BerserkersRage::~CDOTA_Ability_TrollWarlord_BerserkersRage  (line 71, @0x0000000002d2c330, libserver.so)  // inlines: ~CDOTA_Ability_TrollWarlord_BerserkersRage
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_TrollWarlord_BerserkersRage::~CDOTA_Ability_TrollWarlord_BerserkersRage(
        CDOTA_Ability_TrollWarlord_BerserkersRage *const this)
{
  this->_vptr_IHandleEntity = &off_464B270;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_TrollWarlord_BerserkersRage::Schema_DynamicBinding  (line 73, @0x0000000002d1f7b0, libserver.so)
// globals: CDOTA_Ability_TrollWarlord_BerserkersRage::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_TrollWarlord_BerserkersRage::Schema_DynamicBinding(
        const CDOTA_Ability_TrollWarlord_BerserkersRage *const this)
{
  return CDOTA_Ability_TrollWarlord_BerserkersRage::s_pSchemaBinding;
}


// CDOTA_Ability_TrollWarlord_BerserkersRage::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 73, @0x0000000002d1f7c0, libserver.so)
// globals: CDOTA_Ability_TrollWarlord_BerserkersRage::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_TrollWarlord_BerserkersRage::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_TrollWarlord_BerserkersRage::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_TrollWarlord_BerserkersRage::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_TrollWarlord_BerserkersRage::CEntityInstanceEntityClass::DestructInstance  (line 73, @0x0000000002d1f7d0, libserver.so)  // inlines: Destruct<CDOTA_Ability_TrollWarlord_BerserkersRage>
void __fastcall CDOTA_Ability_TrollWarlord_BerserkersRage::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_TrollWarlord_BerserkersRage::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_TrollWarlord_BerserkersRage::CEntityInstanceEntityClass::FreeInstance  (line 73, @0x0000000002d1f7f0, libserver.so)
void __fastcall CDOTA_Ability_TrollWarlord_BerserkersRage::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_TrollWarlord_BerserkersRage::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_TrollWarlord_BerserkersRage::CEntityInstanceEntityClass::CanAllocate  (line 73, @0x0000000002d1f810, libserver.so)
bool __fastcall CDOTA_Ability_TrollWarlord_BerserkersRage::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_TrollWarlord_BerserkersRage::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_TrollWarlord_BerserkersRage::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 73, @0x0000000002d1f820, libserver.so)
// globals: CDOTA_Ability_TrollWarlord_BerserkersRage::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_TrollWarlord_BerserkersRage::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_TrollWarlord_BerserkersRage::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_TrollWarlord_BerserkersRage::s_pSchemaBinding;
}


// CDOTA_Ability_TrollWarlord_BerserkersRage::CEntityInstanceEntityClass::AllocateInstance  (line 73, @0x0000000002d24f90, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_TrollWarlord_BerserkersRage::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_TrollWarlord_BerserkersRage::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_TrollWarlord_BerserkersRage::CEntityInstanceEntityClass::ConstructInstance  (line 73, @0x0000000002d294c0, libserver.so)  // inlines: CDOTA_Ability_TrollWarlord_BerserkersRage, Construct<CDOTA_Ability_TrollWarlord_BerserkersRage>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_TrollWarlord_BerserkersRage::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_TrollWarlord_BerserkersRage::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_464B270;
  }
  return p;
}


// CDOTA_Ability_TrollWarlord_BerserkersRage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 73, @0x0000000002d34810, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_TrollWarlord_BerserkersRage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_TrollWarlord_BerserkersRage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_TrollWarlord_BerserkersRage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 73, @0x0000000002d34830, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_TrollWarlord_BerserkersRage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_TrollWarlord_BerserkersRage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_TrollWarlord_BerserkersRage::GetEntityClassInternal  (line 73, @0x0000000002d4a030, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "troll_warlord_berserkers_rage", "CDOTA_Ability_TrollWarlord_BerserkersRage"
// globals: `guard variable for'CDOTA_Ability_TrollWarlord_BerserkersRage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_BerserkersRageClass, CDOTA_Ability_TrollWarlord_BerserkersRage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_BerserkersRageClass, __dso_handle, CDOTA_Ability_TrollWarlord_BerserkersRage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_TrollWarlord_BerserkersRage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_BerserkersRageClassInfo, CDOTA_Ability_TrollWarlord_BerserkersRage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_BerserkersRageClassInfo
CEntityClass *__cdecl CDOTA_Ability_TrollWarlord_BerserkersRage::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_TrollWarlord_BerserkersRage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_BerserkersRageClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_TrollWarlord_BerserkersRage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_BerserkersRageClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_TrollWarlord_BerserkersRage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_BerserkersRageClass);
    CDOTA_Ability_TrollWarlord_BerserkersRage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_BerserkersRageClass._vptr_CEntityClass = off_464B1F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_TrollWarlord_BerserkersRage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_BerserkersRageClass);
    __cxa_atexit(
      CDOTA_Ability_TrollWarlord_BerserkersRage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_TrollWarlord_BerserkersRage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_BerserkersRageClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_TrollWarlord_BerserkersRageClass != 0 )
    return &CDOTA_Ability_TrollWarlord_BerserkersRage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_BerserkersRageClass;
  if ( `guard variable for'CDOTA_Ability_TrollWarlord_BerserkersRage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_BerserkersRageClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_TrollWarlord_BerserkersRage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_BerserkersRageClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_TrollWarlord_BerserkersRage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_BerserkersRageClassInfo,
      "CDOTA_Ability_TrollWarlord_BerserkersRage",
      "troll_warlord_berserkers_rage",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_TrollWarlord_BerserkersRage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_BerserkersRageClassInfo);
  }
  CDOTA_Ability_TrollWarlord_BerserkersRage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_BerserkersRageClass.m_pClassInfo = &CDOTA_Ability_TrollWarlord_BerserkersRage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_BerserkersRageClassInfo;
  CDOTA_Ability_TrollWarlord_BerserkersRage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_BerserkersRageClass.m_pBaseClassInfo = CDOTA_Ability_TrollWarlord_BerserkersRage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_BerserkersRageClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_TrollWarlord_BerserkersRageClass = &CDOTA_Ability_TrollWarlord_BerserkersRage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_BerserkersRageClass;
  CDOTA_Ability_TrollWarlord_BerserkersRage::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_BerserkersRageClassInfo.m_pClass = &CDOTA_Ability_TrollWarlord_BerserkersRage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_BerserkersRageClass;
  CDOTA_Ability_TrollWarlord_BerserkersRage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_BerserkersRageClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_TrollWarlord_BerserkersRageClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_TrollWarlord_BerserkersRage::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_BerserkersRageClass;
}


// CDOTA_Ability_TrollWarlord_BerserkersRage::ResetToggleOnRespawn  (line 78, @0x0000000002d1f830, libserver.so)
bool __fastcall CDOTA_Ability_TrollWarlord_BerserkersRage::ResetToggleOnRespawn(
        CDOTA_Ability_TrollWarlord_BerserkersRage *const this)
{
  return 0;
}


// CDOTA_Ability_TrollWarlord_BerserkersRage::ProcsMagicStick  (line 90, @0x0000000002d1f840, libserver.so)
bool __fastcall CDOTA_Ability_TrollWarlord_BerserkersRage::ProcsMagicStick(
        CDOTA_Ability_TrollWarlord_BerserkersRage *const this)
{
  return 0;
}


// CDOTA_Ability_TrollWarlord_BerserkersRage::YouForgotToImplementOrDeclareServerClass  (line 101, @0x0000000002cc9e10, libserver.so)
int __fastcall CDOTA_Ability_TrollWarlord_BerserkersRage::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_TrollWarlord_BerserkersRage *const this)
{
  return 0;
}


// CDOTA_Ability_TrollWarlord_BerserkersRage::GetServerClass  (line 101, @0x0000000002cddfb0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_TrollWarlord_BerserkersRage::GetServerClass(
        CDOTA_Ability_TrollWarlord_BerserkersRage *const this)
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


// CDOTA_Ability_TrollWarlord_BerserkersRage::OnToggle  (line 111, @0x0000000002cd12a0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::GetLifeState, CDOTABaseAbility::OnToggle, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::SwapAbilities, KeyValues::~KeyValues, CDOTA_BaseNPC::RemoveModifierByName, DOTA_EmitSound, CDOTA_BaseNPC::StartGesture, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_troll_warlord_berserkers_rage", "troll_warlord_whirling_axes_melee", "troll_warlord_whirling_axes_ranged", "Hero_TrollWarlord.BerserkersRage.Toggle"
void __fastcall CDOTA_Ability_TrollWarlord_BerserkersRage::OnToggle(
        CDOTA_Ability_TrollWarlord_BerserkersRage *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-28h]

  v12 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CBaseEntity::GetLifeState(Caster) != LifeState_t::LIFE_DYING )
  {
    CDOTABaseAbility::OnToggle(this);
    if ( this->m_bToggleState.m_Value )
    {
      KeyValues::KeyValues(&kv, "modifier_troll_warlord_berserkers_rage");
      v3 = CDOTABaseAbility::GetCaster(this);
      v4 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v4, v3, this, "modifier_troll_warlord_berserkers_rage", &kv, 0);
      v5 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::SwapAbilities(v5, "troll_warlord_whirling_axes_ranged", "troll_warlord_whirling_axes_melee", 0, 1);
      KeyValues::~KeyValues(&kv);
    }
    else
    {
      v6 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::RemoveModifierByName(v6, "modifier_troll_warlord_berserkers_rage");
      v7 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::SwapAbilities(v7, "troll_warlord_whirling_axes_ranged", "troll_warlord_whirling_axes_melee", 1, 0);
    }
    v8 = CDOTABaseAbility::GetCaster(this);
    if ( (*(v8->_vptr_IHandleEntity + 408))(v8) != 0 )
    {
      v10 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::StartGesture(v10, 1510, 0.1, 0.1, 9, 0, 1.0);
    }
    v9 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "Hero_TrollWarlord.BerserkersRage.Toggle", v9);
  }
}


// CDOTA_Ability_TrollWarlord_BerserkersRage::OnStolen  (line 137, @0x0000000002ccbb20, libserver.so)  // inlines: HasAttackCapability
// calls: CDOTABaseAbility::GetCaster
void __fastcall CDOTA_Ability_TrollWarlord_BerserkersRage::OnStolen(
        CDOTA_Ability_TrollWarlord_BerserkersRage *const this,
        CDOTABaseAbility *pSourceAbility)
{
  this->m_iOriginalAttackCapabilities = 0;
  if ( (CDOTABaseAbility::GetCaster(this)->m_iAttackCapabilities.m_Value & 2) != 0 )
  {
    this->m_iOriginalAttackCapabilities = 2;
  }
  else if ( (CDOTABaseAbility::GetCaster(this)->m_iAttackCapabilities.m_Value & 3) != 0 )
  {
    this->m_iOriginalAttackCapabilities = 1;
  }
}


// CDOTA_Ability_TrollWarlord_BerserkersRage::OnUnStolen  (line 154, @0x0000000002cd7500, libserver.so)  // inlines: NetworkStateChanged, Set, SetAttackCapability
// calls: CDOTABaseAbility::OnUnStolen, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_troll_warlord_berserkers_rage"
void __fastcall CDOTA_Ability_TrollWarlord_BerserkersRage::OnUnStolen(
        CDOTA_Ability_TrollWarlord_BerserkersRage *const this)
{
  int m_iOriginalAttackCapabilities; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v4; // r12
  CDOTA_BaseNPC *v5; // rax

  CDOTABaseAbility::OnUnStolen(this);
  m_iOriginalAttackCapabilities = this->m_iOriginalAttackCapabilities;
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = Caster;
  if ( m_iOriginalAttackCapabilities != Caster->m_iAttackCapabilities.m_Value )
  {
    (*(Caster->_vptr_IHandleEntity + 22))(Caster, 2436, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v4->m_iAttackCapabilities.m_Value = m_iOriginalAttackCapabilities;
  }
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v5, "modifier_troll_warlord_berserkers_rage");
}


// CDOTA_Ability_TrollWarlord_BerserkersRage::OnUpgrade  (line 166, @0x0000000002cd18e0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::ForceRefresh, CDOTABaseAbility::OnUpgrade
// strings: "modifier_troll_warlord_berserkers_rage"
void __fastcall CDOTA_Ability_TrollWarlord_BerserkersRage::OnUpgrade(
        CDOTA_Ability_TrollWarlord_BerserkersRage *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_troll_warlord_berserkers_rage", 0);
  if ( ModifierByName != 0 )
    CDOTA_Buff::ForceRefresh(ModifierByName);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_TrollWarlord_BerserkersRage::GetAbilityDamageToTargetOverInterval  (line 180, @0x0000000002cfee80, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttacksPerSecond, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "bash_chance", "bash_damage"
__int64 __fastcall CDOTA_Ability_TrollWarlord_BerserkersRage::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_TrollWarlord_BerserkersRage *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  float fNumAttacksa; // [rsp+0h] [rbp-1Ch]
  float fNumAttacksb; // [rsp+0h] [rbp-1Ch]
  float fNumAttacksc; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    fNumAttacksa = fInterval / CDOTA_BaseNPC::GetAttacksPerSecond(Caster);
    fNumAttacksb = (CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bash_chance", -1, 0) / 100.0) * fNumAttacksa;
    fNumAttacksc = fNumAttacksb * CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bash_damage", -1, 0);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fNumAttacksc);
  }
  return result;
}


// CDOTA_Modifier_TrollWarlord_BerserkersRage::~CDOTA_Modifier_TrollWarlord_BerserkersRage  (line 196, @0x0000000002d27250, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_TrollWarlord_BerserkersRage::~CDOTA_Modifier_TrollWarlord_BerserkersRage(
        CDOTA_Modifier_TrollWarlord_BerserkersRage *const this)
{
  this->_vptr_CDOTA_Buff = &off_464BD30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_TrollWarlord_BerserkersRage::~CDOTA_Modifier_TrollWarlord_BerserkersRage  (line 196, @0x0000000002d27270, libserver.so)  // inlines: ~CDOTA_Modifier_TrollWarlord_BerserkersRage
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_TrollWarlord_BerserkersRage::~CDOTA_Modifier_TrollWarlord_BerserkersRage(
        CDOTA_Modifier_TrollWarlord_BerserkersRage *const this)
{
  this->_vptr_CDOTA_Buff = &off_464BD30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_TrollWarlord_BerserkersRage::IsPurgable  (line 201, @0x0000000002d1f850, libserver.so)
bool __fastcall CDOTA_Modifier_TrollWarlord_BerserkersRage::IsPurgable(
        CDOTA_Modifier_TrollWarlord_BerserkersRage *const this)
{
  return 0;
}


// CDOTA_Modifier_TrollWarlord_BerserkersRage::IsHidden  (line 202, @0x0000000002d1f860, libserver.so)
bool __fastcall CDOTA_Modifier_TrollWarlord_BerserkersRage::IsHidden(
        CDOTA_Modifier_TrollWarlord_BerserkersRage *const this)
{
  return 1;
}


// CDOTA_Modifier_TrollWarlord_BerserkersRage::RemoveOnDeath  (line 203, @0x0000000002d1f870, libserver.so)
bool __fastcall CDOTA_Modifier_TrollWarlord_BerserkersRage::RemoveOnDeath(
        CDOTA_Modifier_TrollWarlord_BerserkersRage *const this)
{
  return 0;
}


// CDOTA_Modifier_TrollWarlord_BerserkersRage::AllowIllusionDuplicate  (line 204, @0x0000000002d1f880, libserver.so)
bool __fastcall CDOTA_Modifier_TrollWarlord_BerserkersRage::AllowIllusionDuplicate(
        CDOTA_Modifier_TrollWarlord_BerserkersRage *const this)
{
  return 1;
}


// CDOTA_Modifier_TrollWarlord_BerserkersRage::GetEffectName  (line 206, @0x0000000002d1f890, libserver.so)
// strings: "particles/units/heroes/hero_troll_warlord/troll_warlord_berserk_buff.vpcf"
const char *__fastcall CDOTA_Modifier_TrollWarlord_BerserkersRage::GetEffectName(
        CDOTA_Modifier_TrollWarlord_BerserkersRage *const this)
{
  return "particles/units/heroes/hero_troll_warlord/troll_warlord_berserk_buff.vpcf";
}


// CDOTA_Modifier_TrollWarlord_BerserkersRage::OnCreated  (line 239, @0x0000000002d0df60, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, NetworkStateChanged, Set, SetAttackCapability
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::SwapAbilities
// strings: "bonus_move_speed", "bonus_range", "bash_chance", "bash_damage", "base_attack_time", "bash_duration" (8 total)
void __fastcall CDOTA_Modifier_TrollWarlord_BerserkersRage::OnCreated(
        CDOTA_Modifier_TrollWarlord_BerserkersRage *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  CDOTABaseAbility *v10; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rbx

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->bonus_move_speed, "bonus_move_speed");
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
  {
    this->bonus_range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_range", -1, 0);
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_3;
LABEL_15:
    this->bonus_hp = 0;
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_4;
    goto LABEL_16;
  }
  this->bonus_range = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_15;
LABEL_3:
  this->bonus_hp = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_hp", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_4:
    this->bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bonus_armor", -1, 0);
    goto LABEL_5;
  }
LABEL_16:
  this->bonus_armor = 0;
LABEL_5:
  v7 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v7, &this->bash_chance, "bash_chance");
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 != 0 )
    this->bash_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "bash_damage", -1, 0);
  else
    this->bash_damage = 0;
  v9 = CDOTA_Buff::GetAbility(this);
  if ( v9 != 0 )
    this->base_attack_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v9, "base_attack_time", -1, 0);
  else
    this->base_attack_time = 0.0;
  v10 = CDOTA_Buff::GetAbility(this);
  if ( v10 != 0 )
    this->bash_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v10, "bash_duration", -1, 0);
  else
    this->bash_duration = 0.0;
  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::SwapAbilities(Caster, "troll_warlord_whirling_axes_melee", "troll_warlord_whirling_axes_ranged", 1, 0);
  v12 = CDOTA_Buff::GetCaster(this);
  v13 = v12;
  if ( v12->m_iAttackCapabilities.m_Value != 1 )
  {
    (*(v12->_vptr_IHandleEntity + 22))(v12, 2436, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v13->m_iAttackCapabilities.m_Value = 1;
  }
}


// CDOTA_Modifier_TrollWarlord_BerserkersRage::OnRefresh  (line 256, @0x0000000002d0d260, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "bonus_move_speed", "bonus_range", "bash_chance", "bash_damage", "base_attack_time", "bash_duration"
void __fastcall CDOTA_Modifier_TrollWarlord_BerserkersRage::OnRefresh(
        CDOTA_Modifier_TrollWarlord_BerserkersRage *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  CDOTABaseAbility *v10; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_move_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_move_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_move_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_range", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_12;
    }
  }
  this->bonus_range = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->bonus_hp = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_hp", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
    goto LABEL_13;
  }
LABEL_12:
  this->bonus_hp = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bonus_armor", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_14;
  }
LABEL_13:
  this->bonus_armor = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->bash_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "bash_chance", -1, 0);
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_7;
    goto LABEL_15;
  }
LABEL_14:
  this->bash_chance = 0;
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 != 0 )
  {
LABEL_7:
    this->bash_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "bash_damage", -1, 0);
    v9 = CDOTA_Buff::GetAbility(this);
    if ( v9 != 0 )
      goto LABEL_8;
LABEL_16:
    this->base_attack_time = 0.0;
    v10 = CDOTA_Buff::GetAbility(this);
    if ( v10 != 0 )
      goto LABEL_9;
    goto LABEL_17;
  }
LABEL_15:
  this->bash_damage = 0;
  v9 = CDOTA_Buff::GetAbility(this);
  if ( v9 == 0 )
    goto LABEL_16;
LABEL_8:
  this->base_attack_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v9, "base_attack_time", -1, 0);
  v10 = CDOTA_Buff::GetAbility(this);
  if ( v10 != 0 )
  {
LABEL_9:
    this->bash_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v10, "bash_duration", -1, 0);
    return;
  }
LABEL_17:
  this->bash_duration = 0.0;
}


// CDOTA_Modifier_TrollWarlord_BerserkersRage::DeclareFunctions  (line 270, @0x0000000002cc9e20, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_TrollWarlord_BerserkersRage::GetModifierPreAttack(CModifierParams const&), CDOTA_Modifier_TrollWarlord_BerserkersRage::GetModifierMoveSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_TrollWarlord_BerserkersRage::GetModifierAttackRangeBonus(CModifierParams const&), CDOTA_Modifier_TrollWarlord_BerserkersRage::GetModifierBaseAttackTimeConstant(CModifierParams const&), CDOTA_Modifier_TrollWarlord_BerserkersRage::GetModifierHealthBonus(CModifierParams const&), CDOTA_Modifier_TrollWarlord_BerserkersRage::GetModifierPhysicalArmorBonus(CModifierParams const&), CDOTA_Modifier_TrollWarlord_BerserkersRage::GetModifierProcAttack_BonusDamage_Magical(CModifierParams const&), CDOTA_Modifier_TrollWarlord_BerserkersRage::GetActivityTranslationModifiers(CModifierParams const&) (9 total)
void __fastcall CDOTA_Modifier_TrollWarlord_BerserkersRage::DeclareFunctions(
        CDOTA_Modifier_TrollWarlord_BerserkersRage *const this)
{
  this->m_Functions[8].__pfn = CDOTA_Modifier_TrollWarlord_BerserkersRage::GetModifierPreAttack;
  this->m_Functions[8].__delta = 0;
  this->m_Functions[11].__delta = 0;
  this->m_Functions[11].__pfn = CDOTA_Modifier_TrollWarlord_BerserkersRage::GetModifierMoveSpeedBonus_Constant;
  this->m_Functions[69].__pfn = CDOTA_Modifier_TrollWarlord_BerserkersRage::GetModifierAttackRangeBonus;
  this->m_Functions[26].__pfn = CDOTA_Modifier_TrollWarlord_BerserkersRage::GetModifierBaseAttackTimeConstant;
  this->m_Functions[58].__pfn = CDOTA_Modifier_TrollWarlord_BerserkersRage::GetModifierHealthBonus;
  this->m_Functions[45].__pfn = CDOTA_Modifier_TrollWarlord_BerserkersRage::GetModifierPhysicalArmorBonus;
  this->m_Functions[5].__pfn = CDOTA_Modifier_TrollWarlord_BerserkersRage::GetModifierProcAttack_BonusDamage_Magical;
  this->m_Functions[155].__pfn = CDOTA_Modifier_TrollWarlord_BerserkersRage::GetActivityTranslationModifiers;
  this->m_Functions[69].__delta = 0;
  this->m_Functions[26].__delta = 0;
  this->m_Functions[58].__delta = 0;
  this->m_Functions[45].__delta = 0;
  this->m_Functions[5].__delta = 0;
  this->m_Functions[155].__delta = 0;
  this->m_Functions[156].__pfn = CDOTA_Modifier_TrollWarlord_BerserkersRage::GetAttackSound;
  this->m_Functions[156].__delta = 0;
}


// CDOTA_Modifier_TrollWarlord_BerserkersRage::OnDestroy  (line 285, @0x0000000002cd7b50, libserver.so)  // inlines: NetworkStateChanged, Set, SetAttackCapability
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::SwapAbilities, CDOTA_Buff::GetAbility
// strings: "troll_warlord_whirling_axes_ranged", "troll_warlord_whirling_axes_melee"
void __fastcall CDOTA_Modifier_TrollWarlord_BerserkersRage::OnDestroy(
        CDOTA_Modifier_TrollWarlord_BerserkersRage *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rbx

  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::SwapAbilities(Caster, "troll_warlord_whirling_axes_melee", "troll_warlord_whirling_axes_ranged", 0, 1);
  if ( CDOTA_Buff::GetAbility(this) != 0 && !CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value )
  {
    v3 = CDOTA_Buff::GetCaster(this);
    if ( v3->m_iAttackCapabilities.m_Value != 2 )
    {
      (*(v3->_vptr_IHandleEntity + 22))(v3, 2436, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v3->m_iAttackCapabilities.m_Value = 2;
    }
  }
}


// CDOTA_Modifier_TrollWarlord_BerserkersRage::GetModifierMoveSpeedBonus_Constant  (line 297, @0x0000000002cc9f10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_TrollWarlord_BerserkersRage::GetModifierMoveSpeedBonus_Constant(
        CDOTA_Modifier_TrollWarlord_BerserkersRage *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_move_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_TrollWarlord_BerserkersRage::GetModifierAttackRangeBonus  (line 304, @0x0000000002cd2a50, libserver.so)
// calls: CDOTA_Buff::GetAbility
ModifierVariant_t __fastcall CDOTA_Modifier_TrollWarlord_BerserkersRage::GetModifierAttackRangeBonus(
        CDOTA_Modifier_TrollWarlord_BerserkersRage *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value )
  {
    result.m_szVal = 0;
    *v4.m128i_i32 = (-100 - this->bonus_range);
    result.m_eType = _mm_cvtsi128_si32(v4);
  }
  else
  {
    result.m_szVal = 0;
    *v3.m128i_i32 = -this->bonus_range;
    result.m_eType = _mm_cvtsi128_si32(v3);
  }
  *&result.m_eType = (result.m_eType << 32) | 1;
  return result;
}


// CDOTA_Modifier_TrollWarlord_BerserkersRage::GetModifierBaseAttackTimeConstant  (line 314, @0x0000000002cc9f30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_TrollWarlord_BerserkersRage::GetModifierBaseAttackTimeConstant(
        CDOTA_Modifier_TrollWarlord_BerserkersRage *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->base_attack_time) << 32) | 1;
  return result;
}


// CDOTA_Modifier_TrollWarlord_BerserkersRage::GetModifierHealthBonus  (line 321, @0x0000000002cc9f50, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_TrollWarlord_BerserkersRage::GetModifierHealthBonus(
        CDOTA_Modifier_TrollWarlord_BerserkersRage *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_hp;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_TrollWarlord_BerserkersRage::GetModifierPhysicalArmorBonus  (line 328, @0x0000000002cc9f70, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_TrollWarlord_BerserkersRage::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_TrollWarlord_BerserkersRage *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_TrollWarlord_BerserkersRage::GetActivityTranslationModifiers  (line 333, @0x0000000002cc9f90, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_TrollWarlord_BerserkersRage::GetActivityTranslationModifiers(
        CDOTA_Modifier_TrollWarlord_BerserkersRage *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "melee";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_TrollWarlord_BerserkersRage::GetAttackSound  (line 338, @0x0000000002cc9fb0, libserver.so)
// strings: "Hero_TrollWarlord.ProjectileImpact"
ModifierVariant_t __fastcall CDOTA_Modifier_TrollWarlord_BerserkersRage::GetAttackSound(
        CDOTA_Modifier_TrollWarlord_BerserkersRage *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "Hero_TrollWarlord.ProjectileImpact";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_TrollWarlord_BerserkersRage::GetModifierPreAttack  (line 345, @0x0000000002cda940, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, RollPseudoRandomPercentage, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, CDOTA_BaseNPC::PreventCritOrBashAnimations, CDOTA_BaseNPC::SelectWeightedSequenceWithEconomy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_TrollWarlord_BerserkersRage::GetModifierPreAttack(
        CDOTA_Modifier_TrollWarlord_BerserkersRage *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Caster; // rax
  uint32 m_Index; // ecx
  CEntityIdentity *v7; // rax
  CEntityIdentity *v8; // rax
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CEntityInstance *v13; // rax
  int m_Id; // eax
  __int64 iRecord; // r12
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rax
  CDOTA_AttackRecord *v18; // r12

  if ( (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    if ( RollPseudoRandomPercentage(this->bash_chance, DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_TROLL_BASH, Caster)
      && !params->bRangedAttack )
    {
      m_Index = params->hattacker.m_Index;
      if ( m_Index + 2 <= 1
        || (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
        || (v8 = &v7[params->hattacker.m_Index & 0x1FF]) == 0
        || m_Index != v8->m_EHandle.m_Index
        || (m_pInstance = v8->m_pInstance, v8->m_pInstance == 0)
        || !m_pInstance->m_bIsDOTANPC )
      {
        m_pInstance = 0;
      }
      v10 = params->htarget.m_Index;
      if ( v10 + 2 > 1 )
      {
        v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
        if ( v11 != 0 )
        {
          v12 = &v11[params->htarget.m_Index & 0x1FF];
          if ( v12 != 0 && v10 == v12->m_EHandle.m_Index )
          {
            v13 = v12->m_pInstance;
            if ( v12->m_pInstance != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 )
            {
              m_Id = v13[43].m_iszPrivateVScripts.u.m_Id;
              if ( (m_Id & 0x193) != 0
                && (m_Id & 0x10) == 0
                && (CDOTA_Buff::GetCaster(this)->m_iAttackCapabilities.m_Value & 2) == 0 )
              {
                iRecord = params->iRecord;
                AttackRecordsManager = GetAttackRecordsManager();
                RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
                v18 = RecordByIndex;
                if ( RecordByIndex != 0 && RecordByIndex->m_nBashSource == 0 )
                {
                  RecordByIndex->m_nBashSource = this->m_iSerialNumber;
                  if ( !CDOTA_BaseNPC::PreventCritOrBashAnimations(m_pInstance)
                    && CDOTA_BaseNPC::SelectWeightedSequenceWithEconomy(m_pInstance, 1705).m_Data != -1 )
                  {
                    v18->m_animation = 1705;
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


// CDOTA_Modifier_TrollWarlord_BerserkersRage::GetModifierProcAttack_BonusDamage_Magical  (line 370, @0x0000000002cda6a0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex (15 total)
// strings: "modifier_bashed", "Hero_TrollWarlord.BerserkersRage.Stun", "particles/generic_gameplay/generic_minibash.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_TrollWarlord_BerserkersRage::GetModifierProcAttack_BonusDamage_Magical(
        CDOTA_Modifier_TrollWarlord_BerserkersRage *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // ecx
  CEntityIdentity *v6; // rax
  CEntityIdentity *v7; // rax
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CBaseEntity *v12; // r14
  uint32 m_iUnitType; // eax
  __int64 iRecord; // rbx
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rax
  float v17; // xmm1_4
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  CDOTA_ParticleManager *v22; // rax
  __m128i v23; // xmm1
  unsigned __int64 v24; // [rsp+8h] [rbp-58h]
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-38h]
  ModifierVariant_t result; // 0:rax.16

  v26 = __readfsqword(0x28u);
  if ( (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x10000000) != 0 || params->bRangedAttack )
    goto LABEL_3;
  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v7 = &v6[params->htarget.m_Index & 0x1FF]) == 0
    || m_Index != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v9 = params->hattacker.m_Index;
  if ( v9 + 2 <= 1
    || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v11 = &v10[params->hattacker.m_Index & 0x1FF]) == 0
    || v9 != v11->m_EHandle.m_Index
    || (v12 = v11->m_pInstance, v11->m_pInstance == 0)
    || !v12->m_bIsDOTANPC )
  {
    v12 = 0;
  }
  if ( m_pInstance == 0
    || ((m_iUnitType = m_pInstance->m_iUnitType) & 0x193) == 0
    || (m_iUnitType & 0x10) != 0
    || (CDOTA_Buff::GetCaster(this)->m_iAttackCapabilities.m_Value & 2) != 0
    || (iRecord = params->iRecord,
        AttackRecordsManager = GetAttackRecordsManager(),
        (RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord)) == 0)
    || RecordByIndex->m_nBashSource != this->m_iSerialNumber )
  {
LABEL_3:
    *&result.m_eType = 1;
  }
  else
  {
    KeyValues::KeyValues(&kv, "modifier_bashed");
    KeyValues::SetFloat(&kv, "duration", v17);
    Ability = CDOTA_Buff::GetAbility(this);
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::AddNewModifier(m_pInstance, Parent, Ability, "modifier_bashed", &kv, 0);
    DOTA_EmitSound(10, "Hero_TrollWarlord.BerserkersRage.Stun", m_pInstance);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/generic_gameplay/generic_minibash.vpcf",
                 7,
                 m_pInstance,
                 0,
                 v12);
    v22 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v22, Particle);
    *v23.m128i_i32 = this->bash_damage;
    v24 = (_mm_cvtsi128_si32(v23) << 32) | 1;
    KeyValues::~KeyValues(&kv);
    *&result.m_eType = v24;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::~CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged  (line 404, @0x0000000002d464d0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::~CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged(
        CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged *const this)
{
  this->_vptr_IHandleEntity = &off_464C090;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitUnits);
  if ( (this->m_hHitUnits.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitUnits.m_Memory),
        (this->m_hHitUnits.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitUnits.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::~CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged  (line 404, @0x0000000002d46880, libserver.so)  // inlines: Purge, ~CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::~CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged(
        CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged *const this)
{
  this->_vptr_IHandleEntity = &off_464C090;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitUnits);
  if ( (this->m_hHitUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitUnits.m_Memory);
    if ( (this->m_hHitUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitUnits.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::Schema_DynamicBinding  (line 406, @0x0000000002d1f8a0, libserver.so)
// globals: CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::Schema_DynamicBinding(
        const CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged *const this)
{
  return CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::s_pSchemaBinding;
}


// CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 406, @0x0000000002d1f8b0, libserver.so)
// globals: CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::CEntityInstanceEntityClass::DestructInstance  (line 406, @0x0000000002d1f8c0, libserver.so)  // inlines: Destruct<CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged>
void __fastcall CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::CEntityInstanceEntityClass::FreeInstance  (line 406, @0x0000000002d1f8e0, libserver.so)
void __fastcall CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::CEntityInstanceEntityClass::CanAllocate  (line 406, @0x0000000002d1f900, libserver.so)
bool __fastcall CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 406, @0x0000000002d1f910, libserver.so)
// globals: CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::s_pSchemaBinding;
}


// CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::CEntityInstanceEntityClass::AllocateInstance  (line 406, @0x0000000002d24fd0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 976);
  memset(v1, 0, 0x3D0u);
  return v1;
}


// CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::CEntityInstanceEntityClass::ConstructInstance  (line 406, @0x0000000002d32120, libserver.so)  // inlines: CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 238) = 0;
    *p = &off_464C090;
    *(p + 120) = 0;
    *(p + 242) = 0;
    *(p + 243) = 0;
  }
  return p;
}


// CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 406, @0x0000000002d34860, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 406, @0x0000000002d34880, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetEntityClassInternal  (line 406, @0x0000000002d4a180, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "troll_warlord_whirling_axes_ranged", "CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged"
// globals: `guard variable for'CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_WhirlingAxes_RangedClass, CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_WhirlingAxes_RangedClass, __dso_handle, CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_WhirlingAxes_RangedClassInfo, CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_WhirlingAxes_RangedClassInfo
CEntityClass *__cdecl CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_WhirlingAxes_RangedClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_WhirlingAxes_RangedClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_WhirlingAxes_RangedClass);
    CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_WhirlingAxes_RangedClass._vptr_CEntityClass = off_464C010;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_WhirlingAxes_RangedClass);
    __cxa_atexit(
      CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_WhirlingAxes_RangedClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_TrollWarlord_WhirlingAxes_RangedClass != 0 )
    return &CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_WhirlingAxes_RangedClass;
  if ( `guard variable for'CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_WhirlingAxes_RangedClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_WhirlingAxes_RangedClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_WhirlingAxes_RangedClassInfo,
      "CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged",
      "troll_warlord_whirling_axes_ranged",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_WhirlingAxes_RangedClassInfo);
  }
  CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_WhirlingAxes_RangedClass.m_pClassInfo = &CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_WhirlingAxes_RangedClassInfo;
  CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_WhirlingAxes_RangedClass.m_pBaseClassInfo = CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_WhirlingAxes_RangedClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_TrollWarlord_WhirlingAxes_RangedClass = &CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_WhirlingAxes_RangedClass;
  CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_WhirlingAxes_RangedClassInfo.m_pClass = &CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_WhirlingAxes_RangedClass;
  CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_WhirlingAxes_RangedClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_TrollWarlord_WhirlingAxes_RangedClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_WhirlingAxes_RangedClass;
}


// CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetGestureBasedActivity  (line 416, @0x0000000002d1f920, libserver.so)
Activity __fastcall CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetGestureBasedActivity(
        CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged *const this)
{
  return 1669;
}


// CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::YouForgotToImplementOrDeclareServerClass  (line 434, @0x0000000002cc9fd0, libserver.so)
int __fastcall CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged *const this)
{
  return 0;
}


// CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetServerClass  (line 434, @0x0000000002cde3b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetServerClass(
        CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged *const this)
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


// CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetCooldown  (line 444, @0x0000000002cfef40, libserver.so)
// calls: CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_troll_warlord"
float __fastcall CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetCooldown(
        CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float result; // xmm0_4
  float flCooldown; // [rsp+Ch] [rbp-14h]

  flCooldown = CDOTABaseAbility::GetCooldown(this, iLevel);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_troll_warlord", 0);
  result = flCooldown;
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    return flCooldown - CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  return result;
}


// CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::OnSpellStart  (line 459, @0x0000000002d01dc0, libserver.so)  // inlines: CEntityHandle, CHandle, FastSqrt, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, Length, Normalized, Set, Vector, VectorLength, VectorLerp, VectorMultiply, VectorRotate, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator-, operator=, sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCursorPosition, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, VectorNormalize, MatrixBuildRotationAboutAxis, VectorRotate, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, DOTA_EmitSound, CDOTA_ProjectileManager::CreateLinearProjectile, CBaseEntity::GetAbsAngles (13 total)
// strings: "axe_width", "axe_speed", "axe_range", "axe_spread", "axe_count", "Hero_TrollWarlord.WhirlingAxes.Ranged" (7 total)
void __fastcall CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::OnSpellStart(
        CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  float v4; // xmm2_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  int axe_count; // eax
  int i; // r12d
  CEntityIdentity *m_pEntity; // rdx
  int v13; // eax
  __int16 v14; // cx
  float v15; // xmm3_4
  vec_t z; // xmm3_4
  vec_t y; // xmm5_4
  vec_t x; // xmm3_4
  vec_t v19; // xmm3_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  float axe_range; // xmm7_4
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  const QAngle *AbsAngles; // rax
  float axe_speed; // [rsp+Ch] [rbp-134h]
  Vector vDirection; // [rsp+20h] [rbp-120h] BYREF
  Vector vecStartRot; // [rsp+30h] [rbp-110h] BYREF
  Vector vecEndRot; // [rsp+40h] [rbp-100h] BYREF
  Vector vecRotAxis; // [rsp+50h] [rbp-F0h] BYREF
  matrix3x4_t matRot; // [rsp+60h] [rbp-E0h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+90h] [rbp-B0h] BYREF
  Vector CursorPosition; // 0:kr00_12.12

  this->axe_width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "axe_width", -1, 0);
  this->axe_speed = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "axe_speed", -1, 0);
  this->axe_range = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "axe_range", -1, 0);
  this->axe_spread = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "axe_spread", -1, 0);
  this->axe_count = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "axe_count", -1, 0);
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  v4 = CursorPosition.x - AbsOrigin->x;
  v5 = CursorPosition.z - AbsOrigin->z;
  *(&info.pszEffectName + 1) = CursorPosition.y - AbsOrigin->y;
  *&info.pszEffectName = v4;
  *&info.pAbility = v5;
  VectorNormalize(&info);
  vDirection = *&info.pszEffectName;
  v6 = 0.0099999998;
  if ( fsqrt(
         ((vDirection.x * vDirection.x) + (*(&info.pszEffectName + 1) * *(&info.pszEffectName + 1)))
       + (*&info.pAbility * *&info.pAbility)) < 0.0099999998 )
  {
    v26 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v26);
    AngleVectors(AbsAngles, &vDirection, 0, 0);
  }
  vDirection.z = 0.0;
  vecRotAxis.x = 0.0;
  vecRotAxis.y = 0.0;
  vecRotAxis.z = 1.0;
  MatrixBuildRotationAboutAxis(&vecRotAxis, v6, &matRot);
  VectorRotate(&vDirection.x, &matRot, &vecStartRot.x);
  MatrixBuildRotationAboutAxis(&vecRotAxis, v7, &matRot);
  VectorRotate(&vDirection.x, &matRot, &vecEndRot.x);
  v8 = CDOTABaseAbility::GetCaster(this);
  this->m_vStartPos = *CBaseEntity::GetAbsOrigin(v8);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitUnits);
  v9 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_TrollWarlord.WhirlingAxes.Ranged", v9);
  axe_count = this->axe_count;
  if ( axe_count > 0 )
  {
    for ( i = 0; i < axe_count; ++i )
    {
      v15 = i / axe_count;
      axe_speed = this->axe_speed;
      *(&info.pszEffectName + 1) = ((vecEndRot.y - vecStartRot.y) * v15) + vecStartRot.y;
      *&info.pAbility = ((vecEndRot.z - vecStartRot.z) * v15) + vecStartRot.z;
      *&info.pszEffectName = ((vecEndRot.x - vecStartRot.x) * v15) + vecStartRot.x;
      VectorNormalize(&info);
      z = vec3_origin.z;
      info.bHasFrontalCone = 1;
      y = vec3_origin.y;
      info.vAcceleration.z = z;
      x = this->m_vStartPos.x;
      info.vAcceleration.y = y;
      info.vSpawnOrigin.x = x;
      v19 = this->m_vStartPos.y;
      v20 = *&info.pszEffectName;
      info.vAcceleration.x = vec3_origin.x;
      v21 = *(&info.pszEffectName + 1);
      info.hSource.m_Index = -1;
      v22 = *&info.pAbility;
      info.pszEffectName = "particles/units/heroes/hero_troll_warlord/troll_warlord_whirling_axe_ranged.vpcf";
      info.fDistance = 0.0;
      info.fStartRadius = 0.0;
      info.fEndRadius = 0.0;
      info.bCheckStartPosition = 0;
      info.iUnitTargetTeam = 0;
      info.iUnitTargetType = 0;
      info.iUnitTargetFlags = 0;
      info.bProvidesVision = 0;
      info.iVisionTeamNumber = -1;
      info.iVisionRadius = -1;
      info.bDrawsOnMinimap = 0;
      info.bVisibleToEnemies = 1;
      info.bIgnoreSource = 0;
      info.bStickyFoWReveal = 0;
      info.pKVExtraData = 0;
      info.fExpireTime = 0.0;
      info.fMaxSpeed = 0.0;
      info.pAbility = this;
      info.vSpawnOrigin.y = v19;
      vptr_IHandleEntity = this->_vptr_IHandleEntity;
      axe_range = this->axe_range;
      info.vSpawnOrigin.z = this->m_vStartPos.z;
      info.vVelocity.z = v22 * axe_speed;
      info.vVelocity.x = v20 * axe_speed;
      info.vVelocity.y = v21 * axe_speed;
      info.fDistance = vptr_IHandleEntity[228](this) + axe_range;
      info.fStartRadius = this->axe_width;
      info.fEndRadius = info.fStartRadius;
      v25 = CDOTABaseAbility::GetCaster(this);
      if ( v25 != 0 && (m_pEntity = v25->m_pEntity) != 0 )
      {
        v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v14 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(info.hSource.m_Index) = v14 | info.hSource.m_Index & 0x8000;
        info.hSource.m_Index = (v13 << 15) | info.hSource.m_Index & 0x7FFF;
      }
      else
      {
        info.hSource.m_Index = -1;
      }
      info.iUnitTargetTeam = 2;
      info.iUnitTargetType = 19;
      CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
      axe_count = this->axe_count;
    }
  }
}


// CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::OnUpgrade  (line 517, @0x0000000002ccf190, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "troll_warlord_whirling_axes_melee"
void __fastcall CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::OnUpgrade(
        CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "troll_warlord_whirling_axes_melee", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::OnProjectileHit  (line 531, @0x0000000002d11090, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, GrowMemory, HasElement, InState, IndexToIdentity, IsConsideredHero, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, __stack_chk_fail, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTABaseAbility::GetCaster, ApplyDamage, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, CUtlMemory<CHandle<CBaseEntity>, int>::Grow (13 total)
// strings: "axe_damage", "axe_slow_duration", "modifier_troll_warlord_whirling_axes_slow", "Hero_TrollWarlord.WhirlingAxes.Target"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::OnProjectileHit(
        CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged *const this,
        _WORD *hTarget,
        const Vector *const vLocation)
{
  int LevelSpecialValue; // r13d
  CEntityIdentity *v6; // rax
  CEntityIdentity *v7; // rax
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 m_iUnitType; // r14d
  unsigned __int64 m_Value; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v13; // cx
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *v15; // rax
  int v16; // edx
  __int16 v17; // cx
  __int64 m_Size; // r13
  int v19; // eax
  CHandle<CBaseEntity> *v20; // rax
  float v21; // xmm1_4
  CDOTA_BaseNPC *v22; // rax
  CHandle<CBaseEntity> src; // [rsp+0h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "axe_damage", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "axe_slow_duration", -1, 0);
  if ( (*hTarget + 2) > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[*hTarget & 0x1FF];
      if ( v7 != 0 && *hTarget == v7->m_EHandle.m_Index )
      {
        m_pInstance = v7->m_pInstance;
        if ( v7->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          m_iUnitType = m_pInstance->m_iUnitType;
          if ( (m_iUnitType & 0x80u) != 0 || (m_iUnitType & 3) != 0 )
          {
            m_Value = m_pInstance->m_nUnitState64.m_Value;
            if ( (m_Value & 0x200) == 0 && !m_pInstance->m_bIsWaitingToSpawn.m_Value && (m_Value & 0x100) == 0 )
            {
              src.m_Index = -1;
              m_pEntity = m_pInstance->m_pEntity;
              if ( m_pEntity != 0 )
              {
                v13 = 0x7FFF;
                if ( m_pEntity->m_EHandle.m_Index != -1 )
                  v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v13 & 0x7FFF;
              }
              if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                     &this->m_hHitUnits,
                     &src) < 0
                && (m_iUnitType & 0x800) == 0 )
              {
                Caster = CDOTABaseAbility::GetCaster(this);
                ApplyDamage(Caster, m_pInstance, this, LevelSpecialValue, 2, 0);
                src.m_Index = -1;
                v15 = m_pInstance->m_pEntity;
                if ( v15 != 0 )
                {
                  v16 = (v15->m_EHandle.m_Index >> 15) - (v15->m_flags & 1);
                  v17 = 0x7FFF;
                  if ( v15->m_EHandle.m_Index != -1 )
                    v17 = v15->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(src.m_Index) = v17 | src.m_Index & 0x8000;
                  src.m_Index = (v16 << 15) | src.m_Index & 0x7FFF;
                }
                m_Size = this->m_hHitUnits.m_Size;
                v19 = this->m_hHitUnits.m_Size;
                if ( m_Size == this->m_hHitUnits.m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hHitUnits.m_Memory, 1);
                  v19 = this->m_hHitUnits.m_Size;
                }
                this->m_hHitUnits.m_Size = v19 + 1;
                v20 = &this->m_hHitUnits.m_Memory.m_pMemory[m_Size];
                if ( v20 != 0 )
                  v20->m_Index = src.m_Index;
                KeyValues::KeyValues(&kv, "modifier_troll_warlord_whirling_axes_slow");
                KeyValues::SetFloat(&kv, "duration", v21);
                v22 = CDOTABaseAbility::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(
                  m_pInstance,
                  v22,
                  this,
                  "modifier_troll_warlord_whirling_axes_slow",
                  &kv,
                  0);
                DOTA_EmitSound(10, "Hero_TrollWarlord.WhirlingAxes.Target", m_pInstance);
                KeyValues::~KeyValues(&kv);
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


// CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetAbilityDamageToTargetOverInterval  (line 566, @0x0000000002cfefb0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "axe_damage"
__int64 __fastcall CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "axe_damage", -1, 0);
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetSlowDuration  (line 576, @0x0000000002cff010, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "axe_slow_duration"
float __fastcall CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged::GetSlowDuration(
        CDOTA_Ability_TrollWarlord_WhirlingAxes_Ranged *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "axe_slow_duration", -1, 0);
}


// CDOTA_Modifier_TrollWarlord_WhirlingAxes_Slow::~CDOTA_Modifier_TrollWarlord_WhirlingAxes_Slow  (line 585, @0x0000000002d27200, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_TrollWarlord_WhirlingAxes_Slow::~CDOTA_Modifier_TrollWarlord_WhirlingAxes_Slow(
        CDOTA_Modifier_TrollWarlord_WhirlingAxes_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_464CB50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_TrollWarlord_WhirlingAxes_Slow::~CDOTA_Modifier_TrollWarlord_WhirlingAxes_Slow  (line 585, @0x0000000002d27220, libserver.so)  // inlines: ~CDOTA_Modifier_TrollWarlord_WhirlingAxes_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_TrollWarlord_WhirlingAxes_Slow::~CDOTA_Modifier_TrollWarlord_WhirlingAxes_Slow(
        CDOTA_Modifier_TrollWarlord_WhirlingAxes_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_464CB50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_TrollWarlord_WhirlingAxes_Slow::OnCreated  (line 605, @0x0000000002d08da0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_TrollWarlord_WhirlingAxes_Slow::OnCreated(
        CDOTA_Modifier_TrollWarlord_WhirlingAxes_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movement_speed", -1, 0);
  else
    this->movement_speed = 0;
}


// CDOTA_Modifier_TrollWarlord_WhirlingAxes_Slow::OnRefresh  (line 612, @0x0000000002d08ec0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_TrollWarlord_WhirlingAxes_Slow::OnRefresh(
        CDOTA_Modifier_TrollWarlord_WhirlingAxes_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movement_speed", -1, 0);
  else
    this->movement_speed = 0;
}


// CDOTA_Modifier_TrollWarlord_WhirlingAxes_Slow::DeclareFunctions  (line 619, @0x0000000002cc9fe0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_TrollWarlord_WhirlingAxes_Slow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_TrollWarlord_WhirlingAxes_Slow::DeclareFunctions(
        CDOTA_Modifier_TrollWarlord_WhirlingAxes_Slow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_TrollWarlord_WhirlingAxes_Slow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_TrollWarlord_WhirlingAxes_Slow::GetModifierMoveSpeedBonus_Percentage  (line 626, @0x0000000002cca000, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_TrollWarlord_WhirlingAxes_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_TrollWarlord_WhirlingAxes_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->movement_speed;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::~CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee  (line 637, @0x0000000002d46540, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::~CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee(
        CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee *const this)
{
  this->_vptr_IHandleEntity = &off_464CEB0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hAxes);
  if ( (this->m_hAxes.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hAxes.m_Memory),
        (this->m_hAxes.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hAxes.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::~CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee  (line 637, @0x0000000002d469d0, libserver.so)  // inlines: Purge, ~CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::~CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee(
        CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee *const this)
{
  this->_vptr_IHandleEntity = &off_464CEB0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hAxes);
  if ( (this->m_hAxes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hAxes.m_Memory);
    if ( (this->m_hAxes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hAxes.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::Schema_DynamicBinding  (line 639, @0x0000000002d1f930, libserver.so)
// globals: CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::Schema_DynamicBinding(
        const CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee *const this)
{
  return CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::s_pSchemaBinding;
}


// CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 639, @0x0000000002d1f940, libserver.so)
// globals: CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::CEntityInstanceEntityClass::DestructInstance  (line 639, @0x0000000002d1f950, libserver.so)  // inlines: Destruct<CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee>
void __fastcall CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::CEntityInstanceEntityClass::FreeInstance  (line 639, @0x0000000002d1f970, libserver.so)
void __fastcall CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::CEntityInstanceEntityClass::CanAllocate  (line 639, @0x0000000002d1f990, libserver.so)
bool __fastcall CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 639, @0x0000000002d1f9a0, libserver.so)
// globals: CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::s_pSchemaBinding;
}


// CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::CEntityInstanceEntityClass::AllocateInstance  (line 639, @0x0000000002d25010, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 944);
  memset(v1, 0, 0x3B0u);
  return v1;
}


// CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::CEntityInstanceEntityClass::ConstructInstance  (line 639, @0x0000000002d32180, libserver.so)  // inlines: CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 0;
    *p = &off_464CEB0;
    *(p + 115) = 0;
    *(p + 232) = 0;
    *(p + 233) = 0;
  }
  return p;
}


// CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 639, @0x0000000002d348b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 639, @0x0000000002d348d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetEntityClassInternal  (line 639, @0x0000000002d4a2d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "troll_warlord_whirling_axes_melee", "CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee"
// globals: `guard variable for'CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_Whirling_Axes_MeleeClass, CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_Whirling_Axes_MeleeClass, __dso_handle, CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_Whirling_Axes_MeleeClassInfo, CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_Whirling_Axes_MeleeClassInfo
CEntityClass *__cdecl CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_Whirling_Axes_MeleeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_Whirling_Axes_MeleeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_Whirling_Axes_MeleeClass);
    CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_Whirling_Axes_MeleeClass._vptr_CEntityClass = off_464CE30;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_Whirling_Axes_MeleeClass);
    __cxa_atexit(
      CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_Whirling_Axes_MeleeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_TrollWarlord_Whirling_Axes_MeleeClass != 0 )
    return &CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_Whirling_Axes_MeleeClass;
  if ( `guard variable for'CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_Whirling_Axes_MeleeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_Whirling_Axes_MeleeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_Whirling_Axes_MeleeClassInfo,
      "CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee",
      "troll_warlord_whirling_axes_melee",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_Whirling_Axes_MeleeClassInfo);
  }
  CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_Whirling_Axes_MeleeClass.m_pClassInfo = &CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_Whirling_Axes_MeleeClassInfo;
  CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_Whirling_Axes_MeleeClass.m_pBaseClassInfo = CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_Whirling_Axes_MeleeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_TrollWarlord_Whirling_Axes_MeleeClass = &CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_Whirling_Axes_MeleeClass;
  CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_Whirling_Axes_MeleeClassInfo.m_pClass = &CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_Whirling_Axes_MeleeClass;
  CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_Whirling_Axes_MeleeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_TrollWarlord_Whirling_Axes_MeleeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_Whirling_Axes_MeleeClass;
}


// CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetStolenActivityModifier  (line 645, @0x0000000002d1f9b0, libserver.so)
const char *__fastcall CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetStolenActivityModifier(
        CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee *const this)
{
  return "axes";
}


// CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::YouForgotToImplementOrDeclareServerClass  (line 659, @0x0000000002cca020, libserver.so)
int __fastcall CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee *const this)
{
  return 0;
}


// CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetServerClass  (line 659, @0x0000000002cde1b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetServerClass(
        CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee *const this)
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


// CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetCooldown  (line 669, @0x0000000002cff030, libserver.so)
// calls: CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_troll_warlord"
float __fastcall CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetCooldown(
        CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float result; // xmm0_4
  float flCooldown; // [rsp+Ch] [rbp-14h]

  flCooldown = CDOTABaseAbility::GetCooldown(this, iLevel);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_troll_warlord", 0);
  result = flCooldown;
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    return flCooldown - CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  return result;
}


// CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::OnUpgrade  (line 684, @0x0000000002ccf1e0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "troll_warlord_whirling_axes_ranged"
void __fastcall CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::OnUpgrade(
        CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "troll_warlord_whirling_axes_ranged", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::OnSpellStart  (line 698, @0x0000000002cccd90, libserver.so)
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::StartGesture, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_troll_warlord_whirling_axes_melee", "Hero_TrollWarlord.WhirlingAxes.Melee"
void __fastcall CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::OnSpellStart(
        CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee *const this)
{
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_troll_warlord_whirling_axes_melee");
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_troll_warlord_whirling_axes_melee", &kv, 0);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v4, 1511, 0.1, 0.1, 9, 0, 1.0);
  v5 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_TrollWarlord.WhirlingAxes.Melee", v5);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetAbilityDamageToTargetOverInterval  (line 712, @0x0000000002cff0b0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_TrollWarlord_Whirling_Axes_Melee *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee::~CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee  (line 723, @0x0000000002d46d10, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee::~CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee(
        CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee *const this)
{
  this->_vptr_CDOTA_Buff = &off_464D970;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hAxes);
  if ( (this->m_hAxes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hAxes.m_Memory);
    if ( (this->m_hAxes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hAxes.m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->hitEntities);
  if ( (this->hitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->hitEntities.m_Memory),
        (this->hitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->hitEntities.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee::~CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee  (line 723, @0x0000000002d46dc0, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee::~CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee(
        CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee *const this)
{
  this->_vptr_CDOTA_Buff = &off_464D970;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hAxes);
  if ( (this->m_hAxes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hAxes.m_Memory);
    if ( (this->m_hAxes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hAxes.m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->hitEntities);
  if ( (this->hitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->hitEntities.m_Memory);
    if ( (this->hitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->hitEntities.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee::IsPurgable  (line 728, @0x0000000002d1f9c0, libserver.so)
bool __fastcall CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee::IsPurgable(
        CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee *const this)
{
  return 0;
}


// CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee::IsHidden  (line 729, @0x0000000002d1f9d0, libserver.so)
bool __fastcall CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee::IsHidden(
        CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee *const this)
{
  return 1;
}


// CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee::GetAttributes  (line 735, @0x0000000002d1f9e0, libserver.so)
int __fastcall CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee::GetAttributes(
        CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee *const this)
{
  return 2;
}


// CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee::OnCreated  (line 764, @0x0000000002d11720, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, DOTAGameRules, Element, Get, GetEHandle, GetEntryIndex, GetGameTime, GetInstance, GetModifier_Constant_First, GetSerialNumber, GetTeamNumber, GrowMemory, IsListeningToEvent, IsSpecialIllusion, NetworkStateChanged, Set, SetBlockCreepSpawn, SetShouldDoFlyHeightVisual, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator=<bool>, operator[]
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetParent, KeyValues::KeyValues, CDOTA_Buff::GetCaster, DOTA_CreateUnitByName, CBaseEntity::AddEffects, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CEntityHandle::operator CEntityInstance*, GetParticleManager (21 total)
// strings: "max_range", "axe_movement_speed", "whirl_duration", "blind_duration", "modifier_troll_warlord_axe_invulnerable", "npc_dota_troll_warlord_axe" (7 total)
void __fastcall CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee::OnCreated(
        CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTA_BaseNPC *Parent; // rax
  int i; // r12d
  int m_Value; // r15d
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *UnitByName; // rax
  CDOTA_BaseNPC *v15; // r14
  CDOTA_BaseNPC *v16; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v18; // cx
  __int64 m_Size; // r14
  int v20; // eax
  CHandle<CBaseEntity> *v21; // rax
  float v22; // xmm0_4
  float v23; // xmm0_4
  CHandle<CBaseEntity> *m_pMemory; // rdi
  CBaseEntity *v25; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax
  CHandle<CBaseEntity> *v28; // rdi
  int v29; // r13d
  const CBaseAnimating *v30; // r14
  CDOTA_ParticleManager *v31; // rax
  __int64 v32; // r12
  int v33; // r13d
  CDOTA_ParticleManager *v34; // rax
  int v35; // r13d
  CDOTA_ParticleManager *v36; // rax
  CBaseEntity *v37; // r13
  CDOTA_ParticleManager *v38; // rax
  const CBaseAnimating *v39; // r14
  CDOTA_ParticleManager *v40; // rax
  CDOTA_ParticleManager *v41; // rax
  CDOTA_ParticleManager *v42; // rax
  float v43; // xmm1_4
  __int64 v44; // rdx
  vec_t vecFallbackPosition; // [rsp+8h] [rbp-68h]
  int v46; // [rsp+10h] [rbp-60h]
  double v47; // [rsp+10h] [rbp-60h]
  KeyValues kv; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v49; // [rsp+38h] [rbp-38h]
  Vector v50; // 0:xmm0_8.8,8:xmm1_4.4

  v49 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(Ability, &this->max_range, "max_range");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->damage, "damage");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->hit_radius, "hit_radius");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->axe_movement_speed, "axe_movement_speed");
  v7 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v7, &this->whirl_duration, "whirl_duration");
  v8 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v8, &this->blind_duration, "blind_duration");
  Parent = CDOTA_Buff::GetParent(this);
  if ( Parent != 0
    && Parent->m_bIsDOTANPC
    && (!Parent->m_bIsIllusion.m_Value
     || (v44 = Parent->m_ModifierManager.m_buffsForModifiers[108]) != 0xFF
     && Parent->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v44].m_Size > 0
     && CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
          &Parent->m_ModifierManager,
          modifierfunction::MODIFIER_PROPERTY_SUPER_ILLUSION,
          &CModifierParams::s_Default) == 1.0) )
  {
    for ( i = 4; i != 0; --i )
    {
      KeyValues::KeyValues(&kv, "modifier_troll_warlord_axe_invulnerable");
      m_Value = CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value;
      Caster = CDOTA_Buff::GetCaster(this);
      v13 = CDOTA_Buff::GetCaster(this);
      UnitByName = DOTA_CreateUnitByName("npc_dota_troll_warlord_axe", &vec3_origin, 0, v13, Caster, m_Value);
      v15 = UnitByName;
      if ( UnitByName != 0 )
      {
        if ( UnitByName->m_bShouldDoFlyHeightVisual.m_Value )
        {
          (*(UnitByName->_vptr_IHandleEntity + 22))(UnitByName, 4188, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          v15->m_bShouldDoFlyHeightVisual.m_Value = 0;
        }
        CBaseEntity::AddEffects(v15, 32);
        v16 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v15, v16, 0, "modifier_troll_warlord_axe_invulnerable", &kv, 0);
        v15->m_bBlocksCreepSpawn = 0;
        v46 = -1;
        m_pEntity = v15->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v18 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          v46 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v18 & 0x7FFF;
        }
        m_Size = this->m_hAxes.m_Size;
        v20 = this->m_hAxes.m_Size;
        if ( m_Size == this->m_hAxes.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hAxes.m_Memory, 1);
          v20 = this->m_hAxes.m_Size;
        }
        this->m_hAxes.m_Size = v20 + 1;
        v21 = &this->m_hAxes.m_Memory.m_pMemory[m_Size];
        if ( v21 != 0 )
          v21->m_Index = v46;
      }
      KeyValues::~KeyValues(&kv);
    }
  }
  v22 = 0.0;
  this->m_flAxeRadius = 10.0;
  this->m_flRotation = 0.0;
  this->m_bReturning = 0;
  if ( g_pGameRules != 0 )
    v22 = *&g_pGameRules[18].m_szQuestName[20];
  v23 = v22 + this->whirl_duration;
  this->m_nAxeFXIndex[1] = -1;
  m_pMemory = this->m_hAxes.m_Memory.m_pMemory;
  this->m_nAxeFXIndex[0] = -1;
  this->m_flDieTime = v23;
  v25 = CEntityHandle::operator CEntityInstance *(m_pMemory);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_troll_warlord/troll_warlord_whirling_axe_melee.vpcf",
               1,
               v25,
               0,
               0);
  v28 = this->m_hAxes.m_Memory.m_pMemory;
  this->m_nAxeFXIndex[0] = Particle;
  v29 = Particle;
  v30 = CEntityHandle::operator CEntityInstance *(v28);
  v31 = GetParticleManager();
  v32 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(v31, v29, 1, v30, 1, 0, vec3_invalid, 1);
  v33 = this->m_nAxeFXIndex[0];
  *&v47 = this->axe_movement_speed;
  *(&v47 + 1) = *&v47;
  v34 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v34, v33, 2, v47, *&v47);
  v35 = this->m_nAxeFXIndex[0];
  *&v47 = this->whirl_duration;
  HIDWORD(v47) = LODWORD(v47);
  v36 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v36, v35, 4, v47, *&v47);
  CDOTA_Buff::AddParticle(this, this->m_nAxeFXIndex[0], 0, 0, -1, 0, 0);
  v37 = CEntityHandle::operator CEntityInstance *(this->m_hAxes.m_Memory.m_pMemory + 1);
  v38 = GetParticleManager();
  LODWORD(v37) = CDOTA_ParticleManager::CreateParticle(
                   v38,
                   "particles/units/heroes/hero_troll_warlord/troll_warlord_whirling_axe_melee.vpcf",
                   1,
                   v37,
                   0,
                   0);
  this->m_nAxeFXIndex[1] = v37;
  v39 = CEntityHandle::operator CEntityInstance *(this->m_hAxes.m_Memory.m_pMemory + 1);
  v40 = GetParticleManager();
  *&v50.x = v32;
  v50.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v40, v37, 1, v39, 1, 0, v50, 1);
  LODWORD(v32) = this->m_nAxeFXIndex[1];
  *&v47 = this->axe_movement_speed;
  *(&v47 + 1) = *&v47;
  v41 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v41, v32, 2, v47, *&v47);
  LODWORD(v32) = this->m_nAxeFXIndex[1];
  *&v47 = this->whirl_duration;
  HIDWORD(v47) = LODWORD(v47);
  v42 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v42, v32, 4, v47, *&v47);
  CDOTA_Buff::AddParticle(this, this->m_nAxeFXIndex[1], 0, 0, -1, 0, 0);
  (*(this->_vptr_CDOTA_Buff + 56))(this);
  CDOTA_Buff::StartIntervalThink(this, 0.0, v43);
}


// CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee::OnIntervalThink  (line 825, @0x0000000002d107d0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, DOTAGameRules, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetSerialNumber, GetTeamNumber, GrowMemory, HasElement, IndexToIdentity, IsValid, LookupEntity, Purge, RemapValClamped, Set, ToDOTABaseNPC, Vector, VectorAdd, VectorDivide, VectorSubtract, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*, operator+, operator-, operator->, operator/, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: sincos, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, GetGroundHeight, CEntityHandle::operator CEntityInstance*, CBaseEntity::SetAbsVelocity, CBaseEntity::SetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTA_Buff::GetAbility, ApplyDamage, KeyValues::KeyValues (23 total)
// strings: "modifier_troll_warlord_whirling_axes_blind", "Hero_TrollWarlord.WhirlingAxes.Target"
// globals: CEntityHandle::gm_pEntityList
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee::OnIntervalThink(
        CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee *const this)
{
  __m128d v2; // xmm1
  float m_flDieTime; // xmm3_4
  CGameRules *v4; // rax
  bool v5; // zf
  double v6; // xmm0_8
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm2_4
  float v10; // xmm3_4
  __m128 v11; // xmm2
  float m_flAxeRadius; // xmm1_4
  __m128d v13; // xmm1
  __m128d v14; // xmm0
  unsigned int v15; // xmm1_4
  float v16; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  vec_t v19; // xmm1_4
  vec_t v20; // xmm2_4
  const CBaseEntity *v21; // rax
  const Vector *v22; // rax
  CHandle<CBaseEntity> *v23; // rdi
  float v24; // xmm1_4
  float v25; // xmm0_4
  CBaseEntity *v26; // rax
  CBaseEntity *v27; // rax
  __m128i v28; // xmm5
  float v29; // r13d
  CDOTA_BaseNPC *v30; // r12
  CDOTA_BaseNPC *v31; // rax
  __int64 v32; // r12
  unsigned __int16 *v33; // rdx
  int v34; // eax
  __int16 v35; // cx
  CEntityIdentity *v36; // rdx
  CEntityIdentity *v37; // rdx
  CEntityInstance *m_pInstance; // r13
  CEntityIdentity *m_pEntity; // r14
  __int16 v40; // cx
  int v41; // eax
  __int16 v42; // cx
  int v43; // eax
  __int64 m_Size; // r14
  int v45; // eax
  CHandle<CBaseEntity> *v46; // rax
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *v48; // rax
  float v49; // xmm1_4
  CDOTABaseAbility *v50; // r14
  CDOTA_BaseNPC *v51; // rax
  float v52; // xmm1_4
  float v53; // xmm1_4
  CEntityInstance *v54; // rax
  CEntityInstance *v55; // rax
  float t; // [rsp+24h] [rbp-ECh]
  float flY; // [rsp+28h] [rbp-E8h]
  float flX; // [rsp+2Ch] [rbp-E4h]
  __int64 v59; // [rsp+38h] [rbp-D8h]
  int i; // [rsp+4Ch] [rbp-C4h]
  float src; // [rsp+60h] [rbp-B0h]
  unsigned __int64 flDamagea; // [rsp+68h] [rbp-A8h]
  float flDamageb; // [rsp+68h] [rbp-A8h]
  float flDamage; // [rsp+68h] [rbp-A8h]
  float flDamagec; // [rsp+68h] [rbp-A8h]
  double cosx; // [rsp+70h] [rbp-A0h] BYREF
  unsigned __int64 sinx; // [rsp+78h] [rbp-98h] BYREF
  CHandle<CBaseEntity> v68; // [rsp+80h] [rbp-90h] BYREF
  Vector vecAxeLoc; // [rsp+90h] [rbp-80h] BYREF
  __int128 vecVelocity; // [rsp+A0h] [rbp-70h] OVERLAPPED BYREF
  int v71; // [rsp+B0h] [rbp-60h]
  int v72; // [rsp+B4h] [rbp-5Ch]
  KeyValues kv; // [rsp+C0h] [rbp-50h] BYREF
  unsigned __int64 v74; // [rsp+D8h] [rbp-38h]

  v74 = __readfsqword(0x28u);
  v2 = _mm_cvtps_pd(LODWORD(this->m_flRotation));
  m_flDieTime = this->m_flDieTime;
  v4 = g_pGameRules;
  v2.m128d_f64[0] = v2.m128d_f64[0]
                  + (gpGlobals->frametime + gpGlobals->frametime) * 3.141592653589793 / 0.800000011920929;
  v5 = g_pGameRules == 0;
  v6 = _mm_movedup_pd(v2).m128d_f64[0];
  *v2.m128d_f64 = this->whirl_duration;
  v7 = v6;
  this->m_flRotation = v7;
  v8 = *v2.m128d_f64 - 0.1;
  if ( v5 )
    v9 = 0.0;
  else
    v9 = *&v4[18].m_szQuestName[20];
  v10 = m_flDieTime - v9;
  if ( v8 == 0.0 )
  {
    v11.m128_f32[0] = v10 - 0.0;
    LODWORD(t) = _mm_andnot_ps(_mm_cmple_ss(0, v11), 0x3F800000u).m128_u32[0];
  }
  else
  {
    v52 = v10 / v8;
    if ( v52 < 0.0 )
    {
      t = 1.0;
    }
    else
    {
      t = 0.0;
      if ( v52 <= 1.0 )
        t = 1.0 - (v52 + 0.0);
    }
  }
  m_flAxeRadius = this->m_flAxeRadius;
  if ( (this->max_range - this->hit_radius) > m_flAxeRadius )
  {
    if ( this->m_bReturning )
      m_flAxeRadius = m_flAxeRadius - 7.0;
    else
      m_flAxeRadius = m_flAxeRadius + 7.0;
    this->m_flAxeRadius = m_flAxeRadius;
  }
  *&flDamagea = m_flAxeRadius;
  sincos(v7, &sinx, &cosx);
  v13 = flDamagea;
  v14 = sinx;
  v14.m128d_f64[0] = *&sinx * *&flDamagea;
  v13.m128d_f64[0] = *&flDamagea * cosx;
  flX = _mm_movedup_pd(v14).m128d_f64[0];
  flY = _mm_movedup_pd(v13).m128d_f64[0];
  if ( this->m_hAxes.m_Size > 0 )
  {
    *&v15 = flY;
    v16 = flX;
    v59 = 0;
    i = 0;
    while ( 1 )
    {
      src = *&v15;
      flDamageb = v16;
      Caster = CDOTA_Buff::GetCaster(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
      v19 = src + AbsOrigin->y;
      v20 = AbsOrigin->z + 0.0;
      vecAxeLoc.x = flDamageb + AbsOrigin->x;
      vecAxeLoc.y = v19;
      vecAxeLoc.z = v20;
      vecAxeLoc.z = GetGroundHeight(&vecAxeLoc, 0) + 92.0;
      flDamage = gpGlobals->frametime;
      if ( flDamage > 0.0 )
      {
        v21 = CEntityHandle::operator CEntityInstance *(&this->m_hAxes.m_Memory.m_pMemory[v59]);
        v22 = CBaseEntity::GetAbsOrigin(v21);
        v23 = &this->m_hAxes.m_Memory.m_pMemory[v59];
        v24 = (vecAxeLoc.z - v22->z) * (1.0 / flDamage);
        v25 = (vecAxeLoc.x - v22->x) * (1.0 / flDamage);
        *(&vecVelocity + 1) = (vecAxeLoc.y - v22->y) * (1.0 / flDamage);
        *(&vecVelocity + 2) = v24;
        *&vecVelocity = v25;
        v26 = CEntityHandle::operator CEntityInstance *(v23);
        CBaseEntity::SetAbsVelocity(v26, &vecVelocity);
      }
      v27 = CEntityHandle::operator CEntityInstance *(&this->m_hAxes.m_Memory.m_pMemory[v59]);
      CBaseEntity::SetAbsOrigin(v27, &vecAxeLoc);
      *v28.m128i_i32 = this->hit_radius;
      LODWORD(vecVelocity) = 0;
      *(&vecVelocity + 1) = 0;
      v71 = 0;
      v72 = 0;
      v29 = COERCE_FLOAT(_mm_cvtsi128_si32(v28));
      v30 = CDOTA_Buff::GetCaster(this);
      v31 = CDOTA_Buff::GetCaster(this);
      FindUnitsInRadius(v31->m_iTeamNum.m_Value, &vecAxeLoc, v30, v29, &vecVelocity, 2, 19, 0, 0, 0);
      if ( vecVelocity > 0 )
      {
        v32 = 0;
        do
        {
          while ( 1 )
          {
            v33 = (*(&vecVelocity + 1) + 4 * v32);
            v34 = *v33;
            if ( (*v33 + 2) > 1 )
            {
              v35 = *v33;
              v36 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v33 >> 9) & 0x3F];
              if ( v36 != 0 )
              {
                v37 = &v36[v35 & 0x1FF];
                if ( v37 != 0 && v34 == v37->m_EHandle.m_Index )
                {
                  m_pInstance = v37->m_pInstance;
                  if ( v37->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                  {
                    v68.m_Index = -1;
                    m_pEntity = m_pInstance->m_pEntity;
                    if ( m_pEntity != 0 )
                    {
                      v40 = 0x7FFF;
                      v41 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                      if ( m_pEntity->m_EHandle.m_Index != -1 )
                        v40 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                      LOWORD(v68.m_Index) = v40 | v68.m_Index & 0x8000;
                      v68.m_Index = (v41 << 15) | v68.m_Index & 0x7FFF;
                    }
                    if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                           &this->hitEntities,
                           &v68) < 0
                      && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x800) == 0 )
                    {
                      break;
                    }
                  }
                }
              }
            }
            if ( vecVelocity <= ++v32 )
              goto LABEL_37;
          }
          v68.m_Index = -1;
          if ( m_pEntity != 0 )
          {
            v42 = 0x7FFF;
            v43 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
            if ( m_pEntity->m_EHandle.m_Index != -1 )
              v42 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
            LOWORD(v68.m_Index) = v42 | v68.m_Index & 0x8000;
            v68.m_Index = (v43 << 15) | v68.m_Index & 0x7FFF;
          }
          m_Size = this->hitEntities.m_Size;
          v45 = this->hitEntities.m_Size;
          if ( m_Size == this->hitEntities.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->hitEntities.m_Memory, 1);
            v45 = this->hitEntities.m_Size;
          }
          this->hitEntities.m_Size = v45 + 1;
          v46 = &this->hitEntities.m_Memory.m_pMemory[m_Size];
          if ( v46 != 0 )
            v46->m_Index = v68.m_Index;
          flDamagec = this->damage;
          Ability = CDOTA_Buff::GetAbility(this);
          v48 = CDOTA_Buff::GetCaster(this);
          ApplyDamage(v48, m_pInstance, Ability, flDamagec, 2, 0);
          KeyValues::KeyValues(&kv, "modifier_troll_warlord_whirling_axes_blind");
          KeyValues::SetFloat(&kv, "duration", v49);
          v50 = CDOTA_Buff::GetAbility(this);
          v51 = CDOTA_Buff::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(m_pInstance, v51, v50, "modifier_troll_warlord_whirling_axes_blind", &kv, 0);
          DOTA_EmitSound(10, "Hero_TrollWarlord.WhirlingAxes.Target", m_pInstance);
          KeyValues::~KeyValues(&kv);
          ++v32;
        }
        while ( vecVelocity > v32 );
      }
LABEL_37:
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&vecVelocity);
      if ( (v72 & 0xC0000000) == 0 )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge((&vecVelocity + 8));
        if ( (v72 & 0xC0000000) == 0 )
          CUtlMemory<CHandle<CBaseEntity>,int>::Purge((&vecVelocity + 8));
      }
      if ( this->m_hAxes.m_Size <= ++i )
        break;
      *&v15 = flY;
      v16 = flX;
      if ( i == 1 )
      {
        *&v15 = -flY;
        v16 = -flX;
      }
      ++v59;
    }
  }
  if ( t >= 0.55000001 )
  {
    if ( this->m_bReturning )
    {
      v54 = CEntityHandle::operator CEntityInstance *(this->m_hAxes.m_Memory.m_pMemory);
      (*(v54->_vptr_IHandleEntity + 70))(v54, 4);
      v55 = CEntityHandle::operator CEntityInstance *(this->m_hAxes.m_Memory.m_pMemory + 1);
      (*(v55->_vptr_IHandleEntity + 70))(v55, 4);
      CDOTA_Buff::Destroy(this, 0, 0, 0);
    }
    else
    {
      this->m_bReturning = 1;
      v53 = 0.0;
      if ( g_pGameRules != 0 )
        v53 = *&g_pGameRules[18].m_szQuestName[20];
      this->m_flDieTime = (this->whirl_duration - 0.1) + v53;
      this->m_flAxeRadius = this->m_flAxeRadius - 10.0;
    }
  }
}


// CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee::OnDestroy  (line 910, @0x0000000002cd8070, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator[]
// calls: UTIL_Remove
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee::OnDestroy(
        CDOTA_Modifier_TrollWarlord_Whirling_Axes_Melee *const this)
{
  __int64 v2; // r12
  int i; // ebx
  CEntityInstance *m_pInstance; // rdi
  CHandle<CBaseEntity> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx

  v2 = 0;
  for ( i = 0; this->m_hAxes.m_Size > i; ++v2 )
  {
    m_pInstance = 0;
    v5 = &this->m_hAxes.m_Memory.m_pMemory[v2];
    m_Index = v5->m_Index;
    if ( v5->m_Index + 2 > 1 )
    {
      v7 = v5->m_Index;
      v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
      if ( v8 != 0 )
      {
        v9 = &v8[v7 & 0x1FF];
        if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
          m_pInstance = v9->m_pInstance;
      }
    }
    UTIL_Remove(m_pInstance);
    ++i;
  }
}


// CDOTA_Modifier_TrollWarlord_Axe_Invulnerable::~CDOTA_Modifier_TrollWarlord_Axe_Invulnerable  (line 922, @0x0000000002d271b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_TrollWarlord_Axe_Invulnerable::~CDOTA_Modifier_TrollWarlord_Axe_Invulnerable(
        CDOTA_Modifier_TrollWarlord_Axe_Invulnerable *const this)
{
  this->_vptr_CDOTA_Buff = &off_464DC90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_TrollWarlord_Axe_Invulnerable::~CDOTA_Modifier_TrollWarlord_Axe_Invulnerable  (line 922, @0x0000000002d271d0, libserver.so)  // inlines: ~CDOTA_Modifier_TrollWarlord_Axe_Invulnerable
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_TrollWarlord_Axe_Invulnerable::~CDOTA_Modifier_TrollWarlord_Axe_Invulnerable(
        CDOTA_Modifier_TrollWarlord_Axe_Invulnerable *const this)
{
  this->_vptr_CDOTA_Buff = &off_464DC90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_TrollWarlord_Axe_Invulnerable::IsHidden  (line 928, @0x0000000002d1f9f0, libserver.so)
bool __fastcall CDOTA_Modifier_TrollWarlord_Axe_Invulnerable::IsHidden(
        CDOTA_Modifier_TrollWarlord_Axe_Invulnerable *const this)
{
  return 1;
}


// CDOTA_Modifier_TrollWarlord_Axe_Invulnerable::CheckState  (line 935, @0x0000000002cca030, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_TrollWarlord_Axe_Invulnerable::CheckState(
        CDOTA_Modifier_TrollWarlord_Axe_Invulnerable *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x2904100uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFD6FBEFFLL;
}


// CDOTA_Modifier_TrollWarlord_WhirlingAxes_Blind::~CDOTA_Modifier_TrollWarlord_WhirlingAxes_Blind  (line 951, @0x0000000002d27160, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_TrollWarlord_WhirlingAxes_Blind::~CDOTA_Modifier_TrollWarlord_WhirlingAxes_Blind(
        CDOTA_Modifier_TrollWarlord_WhirlingAxes_Blind *const this)
{
  this->_vptr_CDOTA_Buff = &off_464DFB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_TrollWarlord_WhirlingAxes_Blind::~CDOTA_Modifier_TrollWarlord_WhirlingAxes_Blind  (line 951, @0x0000000002d27180, libserver.so)  // inlines: ~CDOTA_Modifier_TrollWarlord_WhirlingAxes_Blind
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_TrollWarlord_WhirlingAxes_Blind::~CDOTA_Modifier_TrollWarlord_WhirlingAxes_Blind(
        CDOTA_Modifier_TrollWarlord_WhirlingAxes_Blind *const this)
{
  this->_vptr_CDOTA_Buff = &off_464DFB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_TrollWarlord_WhirlingAxes_Blind::IsDebuff  (line 956, @0x0000000002d1fa00, libserver.so)
bool __fastcall CDOTA_Modifier_TrollWarlord_WhirlingAxes_Blind::IsDebuff(
        CDOTA_Modifier_TrollWarlord_WhirlingAxes_Blind *const this)
{
  return 1;
}


// CDOTA_Modifier_TrollWarlord_WhirlingAxes_Blind::OnCreated  (line 973, @0x0000000002d095e0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "blind_pct"
void __fastcall CDOTA_Modifier_TrollWarlord_WhirlingAxes_Blind::OnCreated(
        CDOTA_Modifier_TrollWarlord_WhirlingAxes_Blind *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->blind_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "blind_pct", -1, 0);
  else
    this->blind_pct = 0;
}


// CDOTA_Modifier_TrollWarlord_WhirlingAxes_Blind::DeclareFunctions  (line 980, @0x0000000002cca050, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_TrollWarlord_WhirlingAxes_Blind::DeclareFunctions(
        CDOTA_Modifier_TrollWarlord_WhirlingAxes_Blind *const this)
{
  this->m_Functions[44].__pfn = (&stru_10 + 697);
  this->m_Functions[44].__delta = 0;
}


// CDOTA_Modifier_TrollWarlord_WhirlingAxes_Blind::GetModifierMiss_Percentage  (line 987, @0x0000000002cca070, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_TrollWarlord_WhirlingAxes_Blind::GetModifierMiss_Percentage(
        CDOTA_Modifier_TrollWarlord_WhirlingAxes_Blind *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->blind_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_TrollWarlord_Fervor::~CDOTA_Ability_TrollWarlord_Fervor  (line 999, @0x0000000002d2c360, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_TrollWarlord_Fervor::~CDOTA_Ability_TrollWarlord_Fervor(
        CDOTA_Ability_TrollWarlord_Fervor *const this)
{
  this->_vptr_IHandleEntity = &off_464E310;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_TrollWarlord_Fervor::~CDOTA_Ability_TrollWarlord_Fervor  (line 999, @0x0000000002d2c380, libserver.so)  // inlines: ~CDOTA_Ability_TrollWarlord_Fervor
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_TrollWarlord_Fervor::~CDOTA_Ability_TrollWarlord_Fervor(
        CDOTA_Ability_TrollWarlord_Fervor *const this)
{
  this->_vptr_IHandleEntity = &off_464E310;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_TrollWarlord_Fervor::Schema_DynamicBinding  (line 1001, @0x0000000002d1fa10, libserver.so)
// globals: CDOTA_Ability_TrollWarlord_Fervor::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_TrollWarlord_Fervor::Schema_DynamicBinding(
        const CDOTA_Ability_TrollWarlord_Fervor *const this)
{
  return CDOTA_Ability_TrollWarlord_Fervor::s_pSchemaBinding;
}


// CDOTA_Ability_TrollWarlord_Fervor::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1001, @0x0000000002d1fa20, libserver.so)
// globals: CDOTA_Ability_TrollWarlord_Fervor::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_TrollWarlord_Fervor::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_TrollWarlord_Fervor::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_TrollWarlord_Fervor::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_TrollWarlord_Fervor::CEntityInstanceEntityClass::DestructInstance  (line 1001, @0x0000000002d1fa30, libserver.so)  // inlines: Destruct<CDOTA_Ability_TrollWarlord_Fervor>
void __fastcall CDOTA_Ability_TrollWarlord_Fervor::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_TrollWarlord_Fervor::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_TrollWarlord_Fervor::CEntityInstanceEntityClass::FreeInstance  (line 1001, @0x0000000002d1fa50, libserver.so)
void __fastcall CDOTA_Ability_TrollWarlord_Fervor::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_TrollWarlord_Fervor::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_TrollWarlord_Fervor::CEntityInstanceEntityClass::CanAllocate  (line 1001, @0x0000000002d1fa70, libserver.so)
bool __fastcall CDOTA_Ability_TrollWarlord_Fervor::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_TrollWarlord_Fervor::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_TrollWarlord_Fervor::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1001, @0x0000000002d1fa80, libserver.so)
// globals: CDOTA_Ability_TrollWarlord_Fervor::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_TrollWarlord_Fervor::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_TrollWarlord_Fervor::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_TrollWarlord_Fervor::s_pSchemaBinding;
}


// CDOTA_Ability_TrollWarlord_Fervor::CEntityInstanceEntityClass::AllocateInstance  (line 1001, @0x0000000002d25050, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_TrollWarlord_Fervor::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_TrollWarlord_Fervor::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_TrollWarlord_Fervor::CEntityInstanceEntityClass::ConstructInstance  (line 1001, @0x0000000002d294f0, libserver.so)  // inlines: CDOTA_Ability_TrollWarlord_Fervor, Construct<CDOTA_Ability_TrollWarlord_Fervor>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_TrollWarlord_Fervor::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_TrollWarlord_Fervor::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_464E310;
  }
  return p;
}


// CDOTA_Ability_TrollWarlord_Fervor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1001, @0x0000000002d34900, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_TrollWarlord_Fervor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_TrollWarlord_Fervor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_TrollWarlord_Fervor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1001, @0x0000000002d34920, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_TrollWarlord_Fervor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_TrollWarlord_Fervor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_TrollWarlord_Fervor::GetEntityClassInternal  (line 1001, @0x0000000002d4a420, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "CDOTA_Ability_TrollWarlord_Fervor"
// globals: `guard variable for'CDOTA_Ability_TrollWarlord_Fervor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_FervorClass, CDOTA_Ability_TrollWarlord_Fervor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_FervorClass, __dso_handle, CDOTA_Ability_TrollWarlord_Fervor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_TrollWarlord_Fervor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_FervorClassInfo, CDOTA_Ability_TrollWarlord_Fervor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_FervorClassInfo
CEntityClass *__cdecl CDOTA_Ability_TrollWarlord_Fervor::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_TrollWarlord_Fervor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_FervorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_TrollWarlord_Fervor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_FervorClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_TrollWarlord_Fervor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_FervorClass);
    CDOTA_Ability_TrollWarlord_Fervor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_FervorClass._vptr_CEntityClass = off_464E290;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_TrollWarlord_Fervor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_FervorClass);
    __cxa_atexit(
      CDOTA_Ability_TrollWarlord_Fervor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_TrollWarlord_Fervor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_FervorClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_TrollWarlord_FervorClass != 0 )
    return &CDOTA_Ability_TrollWarlord_Fervor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_FervorClass;
  if ( `guard variable for'CDOTA_Ability_TrollWarlord_Fervor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_FervorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_TrollWarlord_Fervor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_FervorClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_TrollWarlord_Fervor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_FervorClassInfo,
      "CDOTA_Ability_TrollWarlord_Fervor",
      "troll_warlord_fervor",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_TrollWarlord_Fervor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_FervorClassInfo);
  }
  CDOTA_Ability_TrollWarlord_Fervor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_FervorClass.m_pClassInfo = &CDOTA_Ability_TrollWarlord_Fervor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_FervorClassInfo;
  CDOTA_Ability_TrollWarlord_Fervor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_FervorClass.m_pBaseClassInfo = CDOTA_Ability_TrollWarlord_Fervor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_FervorClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_TrollWarlord_FervorClass = &CDOTA_Ability_TrollWarlord_Fervor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_FervorClass;
  CDOTA_Ability_TrollWarlord_Fervor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_FervorClassInfo.m_pClass = &CDOTA_Ability_TrollWarlord_Fervor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_FervorClass;
  CDOTA_Ability_TrollWarlord_Fervor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_FervorClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_TrollWarlord_FervorClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_TrollWarlord_Fervor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_FervorClass;
}


// CDOTA_Ability_TrollWarlord_Fervor::GetIntrinsicModifierName  (line 1004, @0x0000000002d1fa90, libserver.so)
// strings: "modifier_troll_warlord_fervor"
const char *__fastcall CDOTA_Ability_TrollWarlord_Fervor::GetIntrinsicModifierName(
        CDOTA_Ability_TrollWarlord_Fervor *const this)
{
  return "modifier_troll_warlord_fervor";
}


// CDOTA_Modifier_TrollWarlord_Fervor::~CDOTA_Modifier_TrollWarlord_Fervor  (line 1013, @0x0000000002d27110, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_TrollWarlord_Fervor::~CDOTA_Modifier_TrollWarlord_Fervor(
        CDOTA_Modifier_TrollWarlord_Fervor *const this)
{
  this->_vptr_CDOTA_Buff = &off_464EDD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_TrollWarlord_Fervor::~CDOTA_Modifier_TrollWarlord_Fervor  (line 1013, @0x0000000002d27130, libserver.so)  // inlines: ~CDOTA_Modifier_TrollWarlord_Fervor
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_TrollWarlord_Fervor::~CDOTA_Modifier_TrollWarlord_Fervor(
        CDOTA_Modifier_TrollWarlord_Fervor *const this)
{
  this->_vptr_CDOTA_Buff = &off_464EDD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_TrollWarlord_Fervor::IsPurgable  (line 1020, @0x0000000002d1faa0, libserver.so)
bool __fastcall CDOTA_Modifier_TrollWarlord_Fervor::IsPurgable(CDOTA_Modifier_TrollWarlord_Fervor *const this)
{
  return 0;
}


// CDOTA_Modifier_TrollWarlord_Fervor::IsHidden  (line 1021, @0x0000000002d1fab0, libserver.so)
bool __fastcall CDOTA_Modifier_TrollWarlord_Fervor::IsHidden(CDOTA_Modifier_TrollWarlord_Fervor *const this)
{
  return (*(this->_vptr_CDOTA_Buff + 27))(this) == 0;
}


// CDOTA_Modifier_TrollWarlord_Fervor::OnCreated  (line 1045, @0x0000000002d09ed0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_TrollWarlord_Fervor::OnCreated(
        CDOTA_Modifier_TrollWarlord_Fervor *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->max_stacks = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->attack_speed = 0;
    goto LABEL_4;
  }
  this->max_stacks = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "max_stacks", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "attack_speed", -1, 0);
LABEL_4:
  (*(this->_vptr_CDOTA_Buff + 28))(this, 0);
}


// CDOTA_Modifier_TrollWarlord_Fervor::OnRefresh  (line 1054, @0x0000000002d099a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_TrollWarlord_Fervor::OnRefresh(
        CDOTA_Modifier_TrollWarlord_Fervor *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->max_stacks = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "max_stacks", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "attack_speed", -1, 0);
      return;
    }
  }
  else
  {
    this->max_stacks = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->attack_speed = 0;
}


// CDOTA_Modifier_TrollWarlord_Fervor::DeclareFunctions  (line 1062, @0x0000000002cca090, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_TrollWarlord_Fervor::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_TrollWarlord_Fervor::OnAttack(CModifierParams const&)
void __fastcall CDOTA_Modifier_TrollWarlord_Fervor::DeclareFunctions(CDOTA_Modifier_TrollWarlord_Fervor *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_TrollWarlord_Fervor::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[120].__delta = 0;
  this->m_Functions[120].__pfn = CDOTA_Modifier_TrollWarlord_Fervor::OnAttack;
}


// CDOTA_Modifier_TrollWarlord_Fervor::GetModifierAttackSpeedBonus_Constant  (line 1070, @0x0000000002cd2780, libserver.so)
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_TrollWarlord_Fervor::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_TrollWarlord_Fervor *const this,
        const CModifierParams *const params)
{
  __m128i v4; // xmm0
  int v5; // eax
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) != 0 )
    return 1uLL;
  v4 = (*(this->_vptr_CDOTA_Buff + 27))(this);
  result.m_szVal = 0;
  *v4.m128i_i32 = (this->attack_speed * v5);
  *&result.m_eType = (_mm_cvtsi128_si32(v4) << 32) | 1;
  return result;
}


// CDOTA_Modifier_TrollWarlord_Fervor::OnAttack  (line 1080, @0x0000000002cdc830, libserver.so)  // inlines: AttackerNPC, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, Set, Target, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTA_Buff::GetParent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_TrollWarlord_Fervor::OnAttack(
        CDOTA_Modifier_TrollWarlord_Fervor *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CEntityInstance *v12; // rax
  uint32 v13; // edx
  CEntityInstance *v14; // rax
  __int64 v15; // rsi
  CEntityIdentity *v16; // rcx
  CEntityIdentity *v17; // rcx
  uint32 v18; // edx
  CEntityInstance *v19; // rdi
  CEntityIdentity *v20; // rcx
  char *v21; // rcx
  CEntityIdentity *m_pEntity; // rdx
  int v23; // eax
  __int16 v24; // cx
  ModifierVariant_t result; // 0:rax.16

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
  if ( v5->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC || CDOTA_Buff::GetParent(this) != m_pInstance )
    goto LABEL_5;
  v9 = params->hattacker.m_Index;
  if ( v9 + 2 <= 1
    || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v11 = &v10[params->hattacker.m_Index & 0x1FF]) == 0
    || v9 != v11->m_EHandle.m_Index
    || (v12 = v11->m_pInstance) == 0
    || BYTE3(v12[7]._vptr_IHandleEntity) == 0 )
  {
    v12 = 0;
  }
  if ( LOBYTE(v12[71].m_pEntity) != 0 )
  {
LABEL_5:
    *&result.m_eType = 1;
LABEL_6:
    result.m_szVal = 0;
    return result;
  }
  result.m_szVal = CDOTA_Buff::GetParent(this);
  *&result.m_eType = 1;
  if ( (result.m_szVal[2787] & 0x10) != 0 )
    goto LABEL_6;
  v13 = params->htarget.m_Index;
  v14 = 0;
  v15 = CEntityHandle::gm_pEntityList;
  if ( v13 + 2 > 1 )
  {
    v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
    if ( v16 != 0 )
    {
      v17 = &v16[params->htarget.m_Index & 0x1FF];
      if ( v17 != 0 && v13 == v17->m_EHandle.m_Index )
        v14 = v17->m_pInstance;
    }
  }
  v18 = this->m_hUnit.m_Index;
  v19 = 0;
  if ( v18 + 2 > 1 )
  {
    v20 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hUnit.m_Index) >> 9) & 0x3F];
    if ( v20 != 0 )
    {
      v15 = 120LL * (this->m_hUnit.m_Index & 0x1FF);
      v21 = v20 + v15;
      if ( v21 != 0 && v18 == *(v21 + 4) )
        v19 = *v21;
    }
  }
  if ( v14 == v19 )
  {
    if ( (*(this->_vptr_CDOTA_Buff + 27))(this, v15) < this->max_stacks )
    {
      (*(this->_vptr_CDOTA_Buff + 25))(this);
      *&result.m_eType = 1;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if ( v14 != 0 && (m_pEntity = v14->m_pEntity) != 0 )
  {
    v23 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v24 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v24 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hUnit.m_Index) = v24 | this->m_hUnit.m_Index & 0x8000;
    this->m_hUnit.m_Index = (v23 << 15) | this->m_hUnit.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hUnit.m_Index = -1;
  }
  (*(this->_vptr_CDOTA_Buff + 28))(this, 1);
  return 1uLL;
}


// CDOTA_Ability_TrollWarlord_BattleTrance::~CDOTA_Ability_TrollWarlord_BattleTrance  (line 1114, @0x0000000002d2c3b0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_TrollWarlord_BattleTrance::~CDOTA_Ability_TrollWarlord_BattleTrance(
        CDOTA_Ability_TrollWarlord_BattleTrance *const this)
{
  this->_vptr_IHandleEntity = &off_464F130;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_TrollWarlord_BattleTrance::~CDOTA_Ability_TrollWarlord_BattleTrance  (line 1114, @0x0000000002d2c3d0, libserver.so)  // inlines: ~CDOTA_Ability_TrollWarlord_BattleTrance
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_TrollWarlord_BattleTrance::~CDOTA_Ability_TrollWarlord_BattleTrance(
        CDOTA_Ability_TrollWarlord_BattleTrance *const this)
{
  this->_vptr_IHandleEntity = &off_464F130;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_TrollWarlord_BattleTrance::Schema_DynamicBinding  (line 1116, @0x0000000002d1fad0, libserver.so)
// globals: CDOTA_Ability_TrollWarlord_BattleTrance::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_TrollWarlord_BattleTrance::Schema_DynamicBinding(
        const CDOTA_Ability_TrollWarlord_BattleTrance *const this)
{
  return CDOTA_Ability_TrollWarlord_BattleTrance::s_pSchemaBinding;
}


// CDOTA_Ability_TrollWarlord_BattleTrance::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1116, @0x0000000002d1fae0, libserver.so)
// globals: CDOTA_Ability_TrollWarlord_BattleTrance::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_TrollWarlord_BattleTrance::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_TrollWarlord_BattleTrance::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_TrollWarlord_BattleTrance::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_TrollWarlord_BattleTrance::CEntityInstanceEntityClass::DestructInstance  (line 1116, @0x0000000002d1faf0, libserver.so)  // inlines: Destruct<CDOTA_Ability_TrollWarlord_BattleTrance>
void __fastcall CDOTA_Ability_TrollWarlord_BattleTrance::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_TrollWarlord_BattleTrance::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_TrollWarlord_BattleTrance::CEntityInstanceEntityClass::FreeInstance  (line 1116, @0x0000000002d1fb10, libserver.so)
void __fastcall CDOTA_Ability_TrollWarlord_BattleTrance::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_TrollWarlord_BattleTrance::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_TrollWarlord_BattleTrance::CEntityInstanceEntityClass::CanAllocate  (line 1116, @0x0000000002d1fb30, libserver.so)
bool __fastcall CDOTA_Ability_TrollWarlord_BattleTrance::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_TrollWarlord_BattleTrance::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_TrollWarlord_BattleTrance::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1116, @0x0000000002d1fb40, libserver.so)
// globals: CDOTA_Ability_TrollWarlord_BattleTrance::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_TrollWarlord_BattleTrance::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_TrollWarlord_BattleTrance::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_TrollWarlord_BattleTrance::s_pSchemaBinding;
}


// CDOTA_Ability_TrollWarlord_BattleTrance::CEntityInstanceEntityClass::AllocateInstance  (line 1116, @0x0000000002d25090, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_TrollWarlord_BattleTrance::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_TrollWarlord_BattleTrance::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_TrollWarlord_BattleTrance::CEntityInstanceEntityClass::ConstructInstance  (line 1116, @0x0000000002d29520, libserver.so)  // inlines: CDOTA_Ability_TrollWarlord_BattleTrance, Construct<CDOTA_Ability_TrollWarlord_BattleTrance>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_TrollWarlord_BattleTrance::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_TrollWarlord_BattleTrance::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_464F130;
  }
  return p;
}


// CDOTA_Ability_TrollWarlord_BattleTrance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1116, @0x0000000002d34950, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_TrollWarlord_BattleTrance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_TrollWarlord_BattleTrance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_TrollWarlord_BattleTrance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1116, @0x0000000002d34970, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_TrollWarlord_BattleTrance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_TrollWarlord_BattleTrance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_TrollWarlord_BattleTrance::GetEntityClassInternal  (line 1116, @0x0000000002d4a570, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "troll_warlord_battle_trance", "CDOTA_Ability_TrollWarlord_BattleTrance"
// globals: `guard variable for'CDOTA_Ability_TrollWarlord_BattleTrance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_BattleTranceClass, CDOTA_Ability_TrollWarlord_BattleTrance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_BattleTranceClass, __dso_handle, CDOTA_Ability_TrollWarlord_BattleTrance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_TrollWarlord_BattleTrance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_BattleTranceClassInfo, CDOTA_Ability_TrollWarlord_BattleTrance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_BattleTranceClassInfo
CEntityClass *__cdecl CDOTA_Ability_TrollWarlord_BattleTrance::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_TrollWarlord_BattleTrance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_BattleTranceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_TrollWarlord_BattleTrance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_BattleTranceClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_TrollWarlord_BattleTrance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_BattleTranceClass);
    CDOTA_Ability_TrollWarlord_BattleTrance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_BattleTranceClass._vptr_CEntityClass = off_464F0B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_TrollWarlord_BattleTrance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_BattleTranceClass);
    __cxa_atexit(
      CDOTA_Ability_TrollWarlord_BattleTrance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_TrollWarlord_BattleTrance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_BattleTranceClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_TrollWarlord_BattleTranceClass != 0 )
    return &CDOTA_Ability_TrollWarlord_BattleTrance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_BattleTranceClass;
  if ( `guard variable for'CDOTA_Ability_TrollWarlord_BattleTrance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_BattleTranceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_TrollWarlord_BattleTrance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_BattleTranceClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_TrollWarlord_BattleTrance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_BattleTranceClassInfo,
      "CDOTA_Ability_TrollWarlord_BattleTrance",
      "troll_warlord_battle_trance",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_TrollWarlord_BattleTrance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_BattleTranceClassInfo);
  }
  CDOTA_Ability_TrollWarlord_BattleTrance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_BattleTranceClass.m_pClassInfo = &CDOTA_Ability_TrollWarlord_BattleTrance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_BattleTranceClassInfo;
  CDOTA_Ability_TrollWarlord_BattleTrance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_BattleTranceClass.m_pBaseClassInfo = CDOTA_Ability_TrollWarlord_BattleTrance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_BattleTranceClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_TrollWarlord_BattleTranceClass = &CDOTA_Ability_TrollWarlord_BattleTrance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_BattleTranceClass;
  CDOTA_Ability_TrollWarlord_BattleTrance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_TrollWarlord_BattleTranceClassInfo.m_pClass = &CDOTA_Ability_TrollWarlord_BattleTrance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_BattleTranceClass;
  CDOTA_Ability_TrollWarlord_BattleTrance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_BattleTranceClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_TrollWarlord_BattleTranceClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_TrollWarlord_BattleTrance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_TrollWarlord_BattleTranceClass;
}


// CDOTA_Ability_TrollWarlord_BattleTrance::OnSpellStart  (line 1132, @0x0000000002cf7020, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::StartGesture, DOTA_EmitSound, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CBaseEntity::GetAbsOrigin, FindUnitsInRadius (16 total)
// strings: "trance_duration", "Hero_TrollWarlord.BattleTrance.Cast", "Hero_TrollWarlord.BattleTrance.Cast.Team", "modifier_troll_warlord_battle_trance", "particles/units/heroes/hero_troll_warlord/troll_warlord_battletrance_cast.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_TrollWarlord_BattleTrance::OnSpellStart(
        CDOTA_Ability_TrollWarlord_BattleTrance *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  float v5; // xmm1_4
  CDOTA_BaseNPC *v6; // rbx
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v10; // rax
  CDOTA_BaseNPC *v11; // r12
  CDOTA_BaseNPC *v12; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v14; // rax
  __int64 v15; // r12
  int v16; // ebx
  CHandle<CBaseEntity> *v17; // rdx
  uint32 m_Index; // eax
  __int16 v19; // cx
  CEntityIdentity *v20; // rdx
  CEntityIdentity *v21; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  float v23; // xmm1_4
  CDOTA_BaseNPC *v24; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+68h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "trance_duration", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(Caster, 1513, 0.1, 0.1, 9, 0, 1.0);
  v3 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(8, "Hero_TrollWarlord.BattleTrance.Cast", v3);
  v4 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(4, "Hero_TrollWarlord.BattleTrance.Cast.Team", v4);
  KeyValues::KeyValues(&kv, "modifier_troll_warlord_battle_trance");
  KeyValues::SetFloat(&kv, "duration", v5);
  v6 = CDOTABaseAbility::GetCaster(this);
  v7 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v7, v6, this, "modifier_troll_warlord_battle_trance", &kv, 0);
  v8 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v8) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_troll_warlord/troll_warlord_battletrance_cast.vpcf",
                  1,
                  v8,
                  0,
                  0);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v10, v8);
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v11 = CDOTABaseAbility::GetCaster(this);
  v12 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v12);
  v14 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v14->m_iTeamNum.m_Value, AbsOrigin, v11, -1.0, &entities, 1, 1, 139264, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v15 = 0;
    v16 = 0;
    do
    {
      while ( 1 )
      {
        v17 = &entities.m_Memory.m_pMemory[v15];
        m_Index = entities.m_Memory.m_pMemory[v15].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v19 = v17->m_Index;
          v20 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v17->m_Index) >> 9) & 0x3F];
          if ( v20 != 0 )
          {
            v21 = &v20[v19 & 0x1FF];
            if ( v21 != 0 && m_Index == v21->m_EHandle.m_Index )
            {
              m_pInstance = v21->m_pInstance;
              if ( v21->m_pInstance != 0
                && m_pInstance->m_bIsDOTANPC
                && CDOTABaseAbility::GetCaster(this) != m_pInstance )
              {
                break;
              }
            }
          }
        }
        ++v16;
        ++v15;
        if ( entities.m_Size <= v16 )
          goto LABEL_12;
      }
      KeyValues::SetFloat(&kv, "duration", v23);
      v24 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v24, this, "modifier_troll_warlord_battle_trance", &kv, 0);
      ++v16;
      ++v15;
    }
    while ( entities.m_Size > v16 );
  }
LABEL_12:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_TrollWarlord_BattleTrance::GetAbilityDamageToTargetOverInterval  (line 1172, @0x0000000002cff110, libserver.so)  // inlines: RemapVal
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttackSpeed, CDOTA_BaseNPC::GetAttacksPerSecond, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetAverageTrueAttackDamage, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_TrollWarlord_BattleTrance::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_TrollWarlord_BattleTrance *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v8; // rax
  float v9; // xmm2_4
  float v10; // xmm2_4
  CDOTA_BaseNPC *v11; // rax
  __m128 v12; // xmm2
  float AttackSpeed; // [rsp-4h] [rbp-20h]
  float fIntervala; // [rsp+0h] [rbp-1Ch]
  float fIntervalb; // [rsp+0h] [rbp-1Ch]
  float fIntervalc; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    AttackSpeed = CDOTA_BaseNPC::GetAttackSpeed(Caster);
    v8 = CDOTABaseAbility::GetCaster(this);
    fIntervala = CDOTA_BaseNPC::GetAttacksPerSecond(v8);
    v9 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "attack_speed", -1, 0) + AttackSpeed;
    if ( AttackSpeed == 0.0 )
    {
      v12.m128_f32[0] = v9 - AttackSpeed;
      LODWORD(v10) = _mm_cmple_ss(0LL, v12).m128_u32[0] & LODWORD(fIntervala);
    }
    else
    {
      v10 = ((v9 * fIntervala) / AttackSpeed) + 0.0;
    }
    fIntervalb = (v10 - fIntervala) * fInterval;
    v11 = CDOTABaseAbility::GetCaster(this);
    fIntervalc = fIntervalb * CDOTA_BaseNPC::GetAverageTrueAttackDamage(v11, pTarget);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalc);
  }
  return result;
}


// CDOTA_Modifier_TrollWarlord_BattleTrance::~CDOTA_Modifier_TrollWarlord_BattleTrance  (line 1194, @0x0000000002d270c0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_TrollWarlord_BattleTrance::~CDOTA_Modifier_TrollWarlord_BattleTrance(
        CDOTA_Modifier_TrollWarlord_BattleTrance *const this)
{
  this->_vptr_CDOTA_Buff = &off_464FBF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_TrollWarlord_BattleTrance::~CDOTA_Modifier_TrollWarlord_BattleTrance  (line 1194, @0x0000000002d270e0, libserver.so)  // inlines: ~CDOTA_Modifier_TrollWarlord_BattleTrance
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_TrollWarlord_BattleTrance::~CDOTA_Modifier_TrollWarlord_BattleTrance(
        CDOTA_Modifier_TrollWarlord_BattleTrance *const this)
{
  this->_vptr_CDOTA_Buff = &off_464FBF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_TrollWarlord_BattleTrance::IsPurgable  (line 1201, @0x0000000002d1fb50, libserver.so)
bool __fastcall CDOTA_Modifier_TrollWarlord_BattleTrance::IsPurgable(
        CDOTA_Modifier_TrollWarlord_BattleTrance *const this)
{
  return 0;
}


// CDOTA_Modifier_TrollWarlord_BattleTrance::GetEffectName  (line 1203, @0x0000000002d1fb60, libserver.so)
// strings: "particles/units/heroes/hero_troll_warlord/troll_warlord_battletrance_buff.vpcf"
const char *__fastcall CDOTA_Modifier_TrollWarlord_BattleTrance::GetEffectName(
        CDOTA_Modifier_TrollWarlord_BattleTrance *const this)
{
  return "particles/units/heroes/hero_troll_warlord/troll_warlord_battletrance_buff.vpcf";
}


// CDOTA_Modifier_TrollWarlord_BattleTrance::OnCreated  (line 1217, @0x0000000002d09220, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_TrollWarlord_BattleTrance::OnCreated(
        CDOTA_Modifier_TrollWarlord_BattleTrance *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "attack_speed", -1, 0);
  else
    this->attack_speed = 0;
}


// CDOTA_Modifier_TrollWarlord_BattleTrance::OnRefresh  (line 1224, @0x0000000002d09280, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_TrollWarlord_BattleTrance::OnRefresh(
        CDOTA_Modifier_TrollWarlord_BattleTrance *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "attack_speed", -1, 0);
  else
    this->attack_speed = 0;
}


// CDOTA_Modifier_TrollWarlord_BattleTrance::DeclareFunctions  (line 1231, @0x0000000002cca0d0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_TrollWarlord_BattleTrance::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_TrollWarlord_BattleTrance::DeclareFunctions(
        CDOTA_Modifier_TrollWarlord_BattleTrance *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_TrollWarlord_BattleTrance::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
}


// CDOTA_Modifier_TrollWarlord_BattleTrance::GetModifierAttackSpeedBonus_Constant  (line 1238, @0x0000000002cd2620, libserver.so)
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_TrollWarlord_BattleTrance::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_TrollWarlord_BattleTrance *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value )
    return 1uLL;
  *v3.m128i_i32 = this->attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


