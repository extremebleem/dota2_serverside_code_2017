// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_abyssal_underlord.cpp:39
class CDOTA_Unit_Hero_AbyssalUnderlord : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_AbyssalUnderlord(CDOTA_Unit_Hero_AbyssalUnderlord &);
	CDOTA_Unit_Hero_AbyssalUnderlord(CDOTA_Unit_Hero_AbyssalUnderlord &);
	CDOTA_Unit_Hero_AbyssalUnderlord();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual bool OnLoadState(KeyValues *);
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void CalculateActivityModifiers(Activity);
	virtual ~CDOTA_Unit_Hero_AbyssalUnderlord();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[467] OnLoadState
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[442] CalculateActivityModifiers
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_abyssal_underlord.cpp:83
class C_CDOTA_Unit_Hero_AbyssalUnderlord_MapInstall {
	C_CDOTA_Unit_Hero_AbyssalUnderlord_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_abyssal_underlord.cpp:109
class CDOTA_Ability_AbyssalUnderlord_Firestorm : public CDOTABaseAbility {
public:

private:

	int m_nFXIndex;  // +0x390
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
	CDOTA_Ability_AbyssalUnderlord_Firestorm(CDOTA_Ability_AbyssalUnderlord_Firestorm &);
	CDOTA_Ability_AbyssalUnderlord_Firestorm(CDOTA_Ability_AbyssalUnderlord_Firestorm &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Ability_AbyssalUnderlord_Firestorm();
	virtual void OnSpellStart();
	virtual bool OnAbilityPhaseStart();
	virtual void OnAbilityPhaseInterrupted();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_AbyssalUnderlord_Firestorm();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_abyssal_underlord.cpp:140
class C_CDOTA_Ability_AbyssalUnderlord_Firestorm_MapInstall {
	C_CDOTA_Ability_AbyssalUnderlord_Firestorm_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_abyssal_underlord.cpp:239
class CDOTA_Modifier_AbyssalUnderlord_Firestorm_Thinker : public CDOTA_Buff {
public:

private:

	int wave_damage;  // +0xba8
	int wave_count;  // +0xbac
	int radius;  // +0xbb0
	float wave_interval;  // +0xbb4
	float burn_duration;  // +0xbb8
	float first_wave_delay;  // +0xbbc
	int dont_burn_ancients;  // +0xbc0
	CDOTA_Modifier_AbyssalUnderlord_Firestorm_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_AbyssalUnderlord_Firestorm_Thinker();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[11] IsHidden
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_abyssal_underlord.cpp:340
class CDOTA_Modifier_AbyssalUnderlord_Firestorm_Burn : public CDOTA_Buff {
public:

private:

	float burn_damage;  // +0xba8
	float burn_interval;  // +0xbac
	CDOTA_Modifier_AbyssalUnderlord_Firestorm_Burn();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual const char * GetEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_AbyssalUnderlord_Firestorm_Burn();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[67] GetEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_abyssal_underlord.cpp:384
class CDOTA_Ability_AbyssalUnderlord_PitOfMalice : public CDOTABaseAbility {
public:

private:

	int m_nFXIndex;  // +0x390
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
	CDOTA_Ability_AbyssalUnderlord_PitOfMalice(CDOTA_Ability_AbyssalUnderlord_PitOfMalice &);
	CDOTA_Ability_AbyssalUnderlord_PitOfMalice(CDOTA_Ability_AbyssalUnderlord_PitOfMalice &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual bool OnAbilityPhaseStart();
	virtual void OnAbilityPhaseInterrupted();
	CDOTA_Ability_AbyssalUnderlord_PitOfMalice();
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_AbyssalUnderlord_PitOfMalice();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[321] GetSlowDuration
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_abyssal_underlord.cpp:416
class C_CDOTA_Ability_AbyssalUnderlord_PitOfMalice_MapInstall {
	C_CDOTA_Ability_AbyssalUnderlord_PitOfMalice_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_abyssal_underlord.cpp:520
class CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Thinker : public CDOTA_Buff {
public:

private:

	int pit_damage;  // +0xba8
	int radius;  // +0xbac
	float pit_interval;  // +0xbb0
	float ensnare_duration;  // +0xbb4
	CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Thinker();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[11] IsHidden
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_abyssal_underlord.cpp:594
class CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Ensnare : public CDOTA_Modifier_Rooted {
public:

	CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Ensnare();

private:

	virtual void OnCreated(KeyValues *);
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual void CheckState(CDOTABuffState &);
	virtual int GetPriority();
	virtual ~CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Ensnare();

	// vtable[57] OnCreated
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[5] CheckState
	// vtable[6] GetPriority
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_abyssal_underlord.cpp:641
class CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Buff_Placer : public CDOTA_Buff {
public:

	CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Buff_Placer(CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Buff_Placer &);
	CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Buff_Placer(const CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Buff_Placer &);
	CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Buff_Placer();

private:

	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Buff_Placer();

	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_abyssal_underlord.cpp:658
class CDOTA_Ability_AbyssalUnderlord_AtrophyAura : public CDOTABaseAbility {
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
	CDOTA_Ability_AbyssalUnderlord_AtrophyAura(CDOTA_Ability_AbyssalUnderlord_AtrophyAura &);
	CDOTA_Ability_AbyssalUnderlord_AtrophyAura(CDOTA_Ability_AbyssalUnderlord_AtrophyAura &);
	CDOTA_Ability_AbyssalUnderlord_AtrophyAura();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_AbyssalUnderlord_AtrophyAura();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_abyssal_underlord.cpp:672
class CDOTA_Modifier_AbyssalUnderlord_AtrophyAura : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	int m_nFXIndex;  // +0xbac
	CDOTA_Modifier_AbyssalUnderlord_AtrophyAura();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_AbyssalUnderlord_AtrophyAura();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[11] IsHidden
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_abyssal_underlord.cpp:742
class CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect : public CDOTA_Buff {
public:

private:

	int damage_reduction_pct;  // +0xba8
	float bonus_damage_duration;  // +0xbac
	int bonus_damage_from_creep;  // +0xbb0
	int bonus_damage_from_hero;  // +0xbb4
	bool m_bWasHidden;  // +0xbb8
	CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBaseDamageOutgoing_Percentage(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual ~CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_abyssal_underlord.cpp:899
class CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff : public CDOTA_Buff {
public:

private:

	int bonus_damage_from_hero;  // +0xba8
	CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff();
	virtual void OnCreated(KeyValues *);
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual void OnDurationExpired();
	virtual int GetAttributes();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff();

	// vtable[57] OnCreated
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// vtable[55] OnDurationExpired
	// vtable[7] GetAttributes
	// vtable[14] IsPurgable
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_abyssal_underlord.cpp:959
class CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff : public CDOTA_Buff {
public:

private:

	int bonus_damage_from_creep;  // +0xba8
	CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff();
	virtual void OnCreated(KeyValues *);
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual void OnDurationExpired();
	virtual int GetAttributes();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff();

	// vtable[57] OnCreated
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// vtable[55] OnDurationExpired
	// vtable[7] GetAttributes
	// vtable[14] IsPurgable
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_abyssal_underlord.cpp:1019
class CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter : public CDOTA_Buff {
public:

	CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t OnTooltip(const CModifierParams &);
	virtual ~CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter();

	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_abyssal_underlord.cpp:1065
class CDOTA_Ability_AbyssalUnderlord_DarkRift : public CDOTABaseAbility {
public:

private:

	float teleport_delay;  // +0x390
	EHANDLE m_hTeleportTarget;  // +0x394
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
	CDOTA_Ability_AbyssalUnderlord_DarkRift(CDOTA_Ability_AbyssalUnderlord_DarkRift &);
	CDOTA_Ability_AbyssalUnderlord_DarkRift(CDOTA_Ability_AbyssalUnderlord_DarkRift &);
	CDOTA_Ability_AbyssalUnderlord_DarkRift();
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
	virtual const char * GetAssociatedSecondaryAbilities();
	EHANDLE GetTeleportUnit();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual ~CDOTA_Ability_AbyssalUnderlord_DarkRift();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[268] OnUpgrade
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[256] CastFilterResult
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_abyssal_underlord.cpp:1091
class C_CDOTA_Ability_AbyssalUnderlord_DarkRift_MapInstall {
	C_CDOTA_Ability_AbyssalUnderlord_DarkRift_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_abyssal_underlord.cpp:1250
class CDOTA_Modifier_AbyssalUnderlord_DarkRift : public CDOTA_Buff {
public:

private:

	int m_nfxTargetTp;  // +0xba8
	int radius;  // +0xbac
	int duration;  // +0xbb0
	int m_nfxAmbientFx;  // +0xbb4
	CDOTA_Modifier_AbyssalUnderlord_DarkRift();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnDurationExpired();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_AbyssalUnderlord_DarkRift();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[55] OnDurationExpired
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_abyssal_underlord.cpp:1402
class CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift : public CDOTABaseAbility {
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
	CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift(CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift &);
	CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift(CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift &);
	CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual bool ProcsMagicStick();
	virtual void OnSpellStart();
	virtual const char * GetAssociatedPrimaryAbilities();
	virtual bool IsHiddenWhenStolen();
	virtual const char * GetAbilityTextureName(bool);
	virtual ~CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[239] ProcsMagicStick
	// vtable[266] OnSpellStart
	// vtable[303] GetAssociatedPrimaryAbilities
	// vtable[306] IsHiddenWhenStolen
	// vtable[333] GetAbilityTextureName
	// sizeof = 912
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_AbyssalUnderlord::~CDOTA_Unit_Hero_AbyssalUnderlord  (line 39, @0x0000000002c99a50, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_AbyssalUnderlord::~CDOTA_Unit_Hero_AbyssalUnderlord(
        CDOTA_Unit_Hero_AbyssalUnderlord *const this)
{
  this->_vptr_IHandleEntity = &off_457E230;
  this->_vptr_INextBotEventResponder = &off_457F210;
  this->_vptr_CObstructionObject = &off_457F540;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_AbyssalUnderlord::~CDOTA_Unit_Hero_AbyssalUnderlord  (line 39, @0x0000000002c99a90, libserver.so)  // inlines: ~CDOTA_Unit_Hero_AbyssalUnderlord
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_AbyssalUnderlord::~CDOTA_Unit_Hero_AbyssalUnderlord(
        CDOTA_Unit_Hero_AbyssalUnderlord *const this)
{
  this->_vptr_IHandleEntity = &off_457E230;
  this->_vptr_INextBotEventResponder = &off_457F210;
  this->_vptr_CObstructionObject = &off_457F540;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_AbyssalUnderlord::Schema_DynamicBinding  (line 41, @0x0000000002c86730, libserver.so)
// globals: CDOTA_Unit_Hero_AbyssalUnderlord::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_AbyssalUnderlord::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_AbyssalUnderlord *const this)
{
  return CDOTA_Unit_Hero_AbyssalUnderlord::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_AbyssalUnderlord::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002c86760, libserver.so)
// globals: CDOTA_Unit_Hero_AbyssalUnderlord::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_AbyssalUnderlord::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_AbyssalUnderlord::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_AbyssalUnderlord::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_AbyssalUnderlord::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002c86770, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_AbyssalUnderlord>
void __fastcall CDOTA_Unit_Hero_AbyssalUnderlord::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_AbyssalUnderlord::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_AbyssalUnderlord::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002c86790, libserver.so)
void __fastcall CDOTA_Unit_Hero_AbyssalUnderlord::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_AbyssalUnderlord::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_AbyssalUnderlord::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002c867b0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_AbyssalUnderlord::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_AbyssalUnderlord::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_AbyssalUnderlord::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002c867c0, libserver.so)
// globals: CDOTA_Unit_Hero_AbyssalUnderlord::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_AbyssalUnderlord::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_AbyssalUnderlord::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_AbyssalUnderlord::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_AbyssalUnderlord::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002c8efa0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_AbyssalUnderlord::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_AbyssalUnderlord::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_AbyssalUnderlord::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002c93d60, libserver.so)  // inlines: CDOTA_Unit_Hero_AbyssalUnderlord, Construct<CDOTA_Unit_Hero_AbyssalUnderlord>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_AbyssalUnderlord::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_AbyssalUnderlord::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_457E230;
    *(p + 236) = &off_457F210;
    *(p + 257) = &off_457F540;
  }
  return p;
}


// CDOTA_Unit_Hero_AbyssalUnderlord::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002ca3610, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_AbyssalUnderlord::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_AbyssalUnderlord::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_AbyssalUnderlord::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002ca3750, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_AbyssalUnderlord::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_AbyssalUnderlord::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_AbyssalUnderlord::GetEntityClassInternal  (line 41, @0x0000000002cbd980, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "npc_dota_hero_abyssal_underlord", "CDOTA_Unit_Hero_AbyssalUnderlord"
// globals: `guard variable for'CDOTA_Unit_Hero_AbyssalUnderlord::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AbyssalUnderlordClass, CDOTA_Unit_Hero_AbyssalUnderlord::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AbyssalUnderlordClass, __dso_handle, CDOTA_Unit_Hero_AbyssalUnderlord::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_AbyssalUnderlord::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AbyssalUnderlordClassInfo, CDOTA_Unit_Hero_AbyssalUnderlord::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AbyssalUnderlordClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_AbyssalUnderlord::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_AbyssalUnderlord::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AbyssalUnderlordClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_AbyssalUnderlord::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AbyssalUnderlordClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_AbyssalUnderlord::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AbyssalUnderlordClass);
    CDOTA_Unit_Hero_AbyssalUnderlord::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AbyssalUnderlordClass._vptr_CEntityClass = off_457E1B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_AbyssalUnderlord::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AbyssalUnderlordClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_AbyssalUnderlord::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_AbyssalUnderlord::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AbyssalUnderlordClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_AbyssalUnderlordClass != 0 )
    return &CDOTA_Unit_Hero_AbyssalUnderlord::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AbyssalUnderlordClass;
  if ( `guard variable for'CDOTA_Unit_Hero_AbyssalUnderlord::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AbyssalUnderlordClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_AbyssalUnderlord::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AbyssalUnderlordClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_AbyssalUnderlord::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AbyssalUnderlordClassInfo,
      "CDOTA_Unit_Hero_AbyssalUnderlord",
      "npc_dota_hero_abyssal_underlord",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_AbyssalUnderlord::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AbyssalUnderlordClassInfo);
  }
  CDOTA_Unit_Hero_AbyssalUnderlord::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AbyssalUnderlordClass.m_pClassInfo = &CDOTA_Unit_Hero_AbyssalUnderlord::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AbyssalUnderlordClassInfo;
  CDOTA_Unit_Hero_AbyssalUnderlord::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AbyssalUnderlordClass.m_pBaseClassInfo = CDOTA_Unit_Hero_AbyssalUnderlord::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AbyssalUnderlordClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_AbyssalUnderlordClass = &CDOTA_Unit_Hero_AbyssalUnderlord::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AbyssalUnderlordClass;
  CDOTA_Unit_Hero_AbyssalUnderlord::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AbyssalUnderlordClassInfo.m_pClass = &CDOTA_Unit_Hero_AbyssalUnderlord::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AbyssalUnderlordClass;
  CDOTA_Unit_Hero_AbyssalUnderlord::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AbyssalUnderlordClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_AbyssalUnderlordClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_AbyssalUnderlord::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AbyssalUnderlordClass;
}


// CDOTA_Unit_Hero_AbyssalUnderlord::CalculateActivityModifiers  (line 50, @0x0000000002c976d0, libserver.so)
// calls: CDOTA_BaseNPC::CalculateActivityModifiers, CDOTA_BaseNPC::GetAttackSpeed, CDOTA_BaseNPC::AddActivityModifier
// strings: "fastest", "faster"
void __fastcall CDOTA_Unit_Hero_AbyssalUnderlord::CalculateActivityModifiers(
        CDOTA_Unit_Hero_AbyssalUnderlord *const this,
        Activity iActivity)
{
  float v3; // xmm0_4
  UtlSymId_t v4[16]; // [rsp+0h] [rbp-20h] BYREF

  CDOTA_BaseNPC::CalculateActivityModifiers(this, iActivity);
  v3 = CDOTA_BaseNPC::GetAttackSpeed(this) * 100.0;
  if ( v3 > 351.0 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "fastest");
  }
  else if ( v3 >= 275.0 && v3 <= 350.0 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "faster");
  }
  else if ( v3 >= 169.0 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "fast");
  }
  if ( (*(this->_vptr_IHandleEntity + 386))(this) <= 399 )
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "walk");
  else
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "run");
}


// CDOTA_Unit_Hero_AbyssalUnderlord::YouForgotToImplementOrDeclareServerClass  (line 83, @0x0000000002c1b5a0, libserver.so)
int __fastcall CDOTA_Unit_Hero_AbyssalUnderlord::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_AbyssalUnderlord *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_AbyssalUnderlord::GetServerClass  (line 83, @0x0000000002c34e70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_AbyssalUnderlord::GetServerClass(CDOTA_Unit_Hero_AbyssalUnderlord *const this)
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


// CDOTA_Unit_Hero_AbyssalUnderlord::OnLoadState  (line 91, @0x0000000002c1fbf0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::OnLoadState, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::SwapAbilities
// strings: "abyssal_underlord_dark_rift", "abyssal_underlord_cancel_dark_rift"
bool __fastcall CDOTA_Unit_Hero_AbyssalUnderlord::OnLoadState(
        CDOTA_Unit_Hero_AbyssalUnderlord *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC_Hero::OnLoadState(this, pKV);
  if ( CDOTA_BaseNPC::FindAbilityByName(this, "abyssal_underlord_dark_rift", 0)->m_bHidden.m_Value )
    CDOTA_BaseNPC::SwapAbilities(this, "abyssal_underlord_dark_rift", "abyssal_underlord_cancel_dark_rift", 1, 0);
  return 1;
}


// CDOTA_Ability_AbyssalUnderlord_Firestorm::~CDOTA_Ability_AbyssalUnderlord_Firestorm  (line 109, @0x0000000002c97b10, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_AbyssalUnderlord_Firestorm::~CDOTA_Ability_AbyssalUnderlord_Firestorm(
        CDOTA_Ability_AbyssalUnderlord_Firestorm *const this)
{
  this->_vptr_IHandleEntity = &off_457F610;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_AbyssalUnderlord_Firestorm::~CDOTA_Ability_AbyssalUnderlord_Firestorm  (line 109, @0x0000000002c97b30, libserver.so)  // inlines: ~CDOTA_Ability_AbyssalUnderlord_Firestorm
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_AbyssalUnderlord_Firestorm::~CDOTA_Ability_AbyssalUnderlord_Firestorm(
        CDOTA_Ability_AbyssalUnderlord_Firestorm *const this)
{
  this->_vptr_IHandleEntity = &off_457F610;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_AbyssalUnderlord_Firestorm::Schema_DynamicBinding  (line 111, @0x0000000002c867d0, libserver.so)
// globals: CDOTA_Ability_AbyssalUnderlord_Firestorm::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_AbyssalUnderlord_Firestorm::Schema_DynamicBinding(
        const CDOTA_Ability_AbyssalUnderlord_Firestorm *const this)
{
  return CDOTA_Ability_AbyssalUnderlord_Firestorm::s_pSchemaBinding;
}


// CDOTA_Ability_AbyssalUnderlord_Firestorm::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 111, @0x0000000002c867e0, libserver.so)
// globals: CDOTA_Ability_AbyssalUnderlord_Firestorm::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_AbyssalUnderlord_Firestorm::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_AbyssalUnderlord_Firestorm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_AbyssalUnderlord_Firestorm::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_AbyssalUnderlord_Firestorm::CEntityInstanceEntityClass::DestructInstance  (line 111, @0x0000000002c867f0, libserver.so)  // inlines: Destruct<CDOTA_Ability_AbyssalUnderlord_Firestorm>
void __fastcall CDOTA_Ability_AbyssalUnderlord_Firestorm::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_AbyssalUnderlord_Firestorm::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_AbyssalUnderlord_Firestorm::CEntityInstanceEntityClass::FreeInstance  (line 111, @0x0000000002c86810, libserver.so)
void __fastcall CDOTA_Ability_AbyssalUnderlord_Firestorm::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_AbyssalUnderlord_Firestorm::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_AbyssalUnderlord_Firestorm::CEntityInstanceEntityClass::CanAllocate  (line 111, @0x0000000002c86830, libserver.so)
bool __fastcall CDOTA_Ability_AbyssalUnderlord_Firestorm::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_AbyssalUnderlord_Firestorm::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_AbyssalUnderlord_Firestorm::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 111, @0x0000000002c86840, libserver.so)
// globals: CDOTA_Ability_AbyssalUnderlord_Firestorm::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_AbyssalUnderlord_Firestorm::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_AbyssalUnderlord_Firestorm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_AbyssalUnderlord_Firestorm::s_pSchemaBinding;
}


// CDOTA_Ability_AbyssalUnderlord_Firestorm::CEntityInstanceEntityClass::AllocateInstance  (line 111, @0x0000000002c8efe0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_AbyssalUnderlord_Firestorm::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_AbyssalUnderlord_Firestorm::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_AbyssalUnderlord_Firestorm::CEntityInstanceEntityClass::ConstructInstance  (line 111, @0x0000000002c94450, libserver.so)  // inlines: CDOTA_Ability_AbyssalUnderlord_Firestorm, Construct<CDOTA_Ability_AbyssalUnderlord_Firestorm>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_AbyssalUnderlord_Firestorm::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_AbyssalUnderlord_Firestorm::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = -1;
    *p = &off_457F610;
  }
  return p;
}


// CDOTA_Ability_AbyssalUnderlord_Firestorm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 111, @0x0000000002ca1580, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_AbyssalUnderlord_Firestorm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_AbyssalUnderlord_Firestorm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_AbyssalUnderlord_Firestorm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 111, @0x0000000002ca15a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_AbyssalUnderlord_Firestorm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_AbyssalUnderlord_Firestorm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_AbyssalUnderlord_Firestorm::GetEntityClassInternal  (line 111, @0x0000000002cb8190, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "abyssal_underlord_firestorm", "CDOTA_Ability_AbyssalUnderlord_Firestorm"
// globals: `guard variable for'CDOTA_Ability_AbyssalUnderlord_Firestorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_FirestormClass, CDOTA_Ability_AbyssalUnderlord_Firestorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_FirestormClass, __dso_handle, CDOTA_Ability_AbyssalUnderlord_Firestorm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_AbyssalUnderlord_Firestorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_FirestormClassInfo, CDOTA_Ability_AbyssalUnderlord_Firestorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_FirestormClassInfo
CEntityClass *__cdecl CDOTA_Ability_AbyssalUnderlord_Firestorm::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_AbyssalUnderlord_Firestorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_FirestormClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_AbyssalUnderlord_Firestorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_FirestormClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_AbyssalUnderlord_Firestorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_FirestormClass);
    CDOTA_Ability_AbyssalUnderlord_Firestorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_FirestormClass._vptr_CEntityClass = off_457F590;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_AbyssalUnderlord_Firestorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_FirestormClass);
    __cxa_atexit(
      CDOTA_Ability_AbyssalUnderlord_Firestorm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_AbyssalUnderlord_Firestorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_FirestormClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_AbyssalUnderlord_FirestormClass != 0 )
    return &CDOTA_Ability_AbyssalUnderlord_Firestorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_FirestormClass;
  if ( `guard variable for'CDOTA_Ability_AbyssalUnderlord_Firestorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_FirestormClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_AbyssalUnderlord_Firestorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_FirestormClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_AbyssalUnderlord_Firestorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_FirestormClassInfo,
      "CDOTA_Ability_AbyssalUnderlord_Firestorm",
      "abyssal_underlord_firestorm",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_AbyssalUnderlord_Firestorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_FirestormClassInfo);
  }
  CDOTA_Ability_AbyssalUnderlord_Firestorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_FirestormClass.m_pClassInfo = &CDOTA_Ability_AbyssalUnderlord_Firestorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_FirestormClassInfo;
  CDOTA_Ability_AbyssalUnderlord_Firestorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_FirestormClass.m_pBaseClassInfo = CDOTA_Ability_AbyssalUnderlord_Firestorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_FirestormClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_AbyssalUnderlord_FirestormClass = &CDOTA_Ability_AbyssalUnderlord_Firestorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_FirestormClass;
  CDOTA_Ability_AbyssalUnderlord_Firestorm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_FirestormClassInfo.m_pClass = &CDOTA_Ability_AbyssalUnderlord_Firestorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_FirestormClass;
  CDOTA_Ability_AbyssalUnderlord_Firestorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_FirestormClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_AbyssalUnderlord_FirestormClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_AbyssalUnderlord_Firestorm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_FirestormClass;
}


// CDOTA_Ability_AbyssalUnderlord_Firestorm::YouForgotToImplementOrDeclareServerClass  (line 140, @0x0000000002c1b5b0, libserver.so)
int __fastcall CDOTA_Ability_AbyssalUnderlord_Firestorm::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_AbyssalUnderlord_Firestorm *const this)
{
  return 0;
}


// CDOTA_Ability_AbyssalUnderlord_Firestorm::GetServerClass  (line 140, @0x0000000002c34d30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_AbyssalUnderlord_Firestorm::GetServerClass(
        CDOTA_Ability_AbyssalUnderlord_Firestorm *const this)
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


// CDOTA_Ability_AbyssalUnderlord_Firestorm::OnSpellStart  (line 149, @0x0000000002c536e0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetTeamNumber
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, Thinker_Create, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "wave_duration", "modifier_abyssal_underlord_firestorm_thinker", "Hero_AbyssalUnderlord.Firestorm.Cast"
void __fastcall CDOTA_Ability_AbyssalUnderlord_Firestorm::OnSpellStart(
        CDOTA_Ability_AbyssalUnderlord_Firestorm *const this)
{
  float v2; // xmm1_4
  int m_Value; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // rax
  KeyValues kv; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+48h] [rbp-28h]
  Vector CursorPosition; // 0:kr00_12.12

  v7 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "wave_duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_abyssal_underlord_firestorm_thinker");
  KeyValues::SetFloat(&kv, "duration", v2);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(Caster, this, "modifier_abyssal_underlord_firestorm_thinker", &kv, CursorPosition, m_Value, 0, 1, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(14, "Hero_AbyssalUnderlord.Firestorm.Cast", v5);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_AbyssalUnderlord_Firestorm::OnAbilityPhaseStart  (line 163, @0x0000000002c5e880, libserver.so)  // inlines: CBroadcastRecipientFilter, CDOTAPVSFilter, CEntityIndex, CReliableBroadcastRecipientFilter, CUtlMemory, CUtlVector, CUtlVectorBase, EmitSound_t, GetLevelSpecialValueFor<int>, Purge, RemoveAll, SoundEventGuid_t, Vector, ~CBroadcastRecipientFilter, ~CDOTAPVSFilter, ~CReliableBroadcastRecipientFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCursorPosition, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CRecipientFilter::RemoveAllRecipients, CDOTABaseAbility::GetCaster, CBaseEntity::GetTeam, CRecipientFilter::AddRecipientsByTeam, GetGlobalTeam, CDOTABaseAbility::CreateAbilityParticleEffect, GetParticleManager (23 total)
// strings: "particles/units/heroes/heroes_underlord/underlord_firestorm_pre.vpcf", "Hero_AbyssalUnderlord.Firestorm.Start"
bool __fastcall CDOTA_Ability_AbyssalUnderlord_Firestorm::OnAbilityPhaseStart(
        CDOTA_Ability_AbyssalUnderlord_Firestorm *const this)
{
  int LevelSpecialValue; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CTeam *Team; // rax
  CTeam *GlobalTeam; // rax
  CDOTA_BaseNPC *v6; // rax
  int v7; // eax
  int v8; // r14d
  CDOTA_ParticleManager *ParticleManager; // rax
  int m_nFXIndex; // r14d
  CDOTA_ParticleManager *v11; // rax
  __m128i v12; // xmm2
  int v13; // r14d
  float v14; // r13d
  CDOTA_ParticleManager *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  CTeam *v17; // rax
  CTeam *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  double vecFXData; // [rsp+0h] [rbp-1E0h]
  Vector vecCursPos; // [rsp+10h] [rbp-1D0h] BYREF
  EmitSound_t ep; // [rsp+20h] [rbp-1C0h] BYREF
  CDOTAPVSFilter filterStart; // [rsp+80h] [rbp-160h] BYREF
  unsigned __int64 v25; // [rsp+1B8h] [rbp-28h]

  v25 = __readfsqword(0x28u);
  HIDWORD(vecFXData) = 1065353216;
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  *&vecFXData = (LevelSpecialValue + 10);
  vecCursPos = CDOTABaseAbility::GetCursorPosition(this);
  CRecipientFilter::CRecipientFilter(&filterStart);
  filterStart._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filterStart);
  filterStart._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filterStart);
  CRecipientFilter::RemoveAllRecipients(&filterStart);
  Caster = CDOTABaseAbility::GetCaster(this);
  Team = CBaseEntity::GetTeam(Caster);
  CRecipientFilter::AddRecipientsByTeam(&filterStart, Team);
  GlobalTeam = GetGlobalTeam(1);
  CRecipientFilter::AddRecipientsByTeam(&filterStart, GlobalTeam);
  v6 = CDOTABaseAbility::GetCaster(this);
  v7 = CDOTABaseAbility::CreateAbilityParticleEffect(
         this,
         "particles/units/heroes/heroes_underlord/underlord_firestorm_pre.vpcf",
         8,
         v6,
         &filterStart);
  this->m_nFXIndex = v7;
  v8 = v7;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, v8, 0, *&vecCursPos.x, vecCursPos.z);
  m_nFXIndex = this->m_nFXIndex;
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v11, m_nFXIndex, 1, vecFXData, 1.0);
  *v12.m128i_i32 = LevelSpecialValue;
  v13 = this->m_nFXIndex;
  v14 = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
  v15 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleFoWProperties(v15, v13, 0, -1, v14);
  filterStart._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filterStart);
  if ( CDOTABaseAbility::GetCaster(this) != 0 )
  {
    CRecipientFilter::CRecipientFilter(&filterStart);
    filterStart._vptr_IRecipientFilter = &off_42B2CB0;
    CDOTAPVSFilter::AddRecipientsByDOTAPVS(&filterStart, &vecCursPos);
    v16 = CDOTABaseAbility::GetCaster(this);
    v17 = CBaseEntity::GetTeam(v16);
    CRecipientFilter::RemoveRecipientsNotOnTeam(&filterStart, v17);
    v18 = GetGlobalTeam(1);
    CRecipientFilter::AddRecipientsByTeam(&filterStart, v18);
    ep.m_pSoundName = 0;
    ep.m_flVolume = 1.0;
    ep.m_SoundLevel = soundlevel_t::SNDLVL_NONE;
    ep.m_nFlags = 0;
    ep.m_nPitch = 100;
    ep.m_pOrigin = 0;
    ep.m_flSoundTime = 0.0;
    ep.m_pflSoundDuration = 0;
    ep.m_bEmitCloseCaption = 1;
    ep.m_bWarnOnMissingCloseCaption = 0;
    ep.m_bWarnOnDirectWaveReference = 0;
    ep.m_nSpeakerEntity.m_Data = -1;
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
    ep.m_nChannel = 6;
    v19 = CDOTABaseAbility::GetCaster(this);
    ep.m_pSoundName = CDOTA_BaseNPC::FindReplacementSound(v19, "Hero_AbyssalUnderlord.Firestorm.Start");
    ep.m_pOrigin = &vecCursPos;
    CBaseEntity::EmitSound(&filterStart, 0, &ep);
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
      if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
    }
    filterStart._vptr_IRecipientFilter = &off_42B2CB0;
    CRecipientFilter::~CRecipientFilter(&filterStart);
  }
  return 1;
}


// CDOTA_Ability_AbyssalUnderlord_Firestorm::OnAbilityPhaseInterrupted  (line 202, @0x0000000002c20070, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect
void __fastcall CDOTA_Ability_AbyssalUnderlord_Firestorm::OnAbilityPhaseInterrupted(
        CDOTA_Ability_AbyssalUnderlord_Firestorm *const this)
{
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax

  m_nFXIndex = this->m_nFXIndex;
  if ( m_nFXIndex != -1 )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 1);
    this->m_nFXIndex = -1;
  }
}


// CDOTA_Ability_AbyssalUnderlord_Firestorm::GetAbilityDamageToTargetOverInterval  (line 215, @0x0000000002c6ae90, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "wave_count", "wave_interval", "wave_damage", "burn_damage", "burn_duration"
__int64 __fastcall CDOTA_Ability_AbyssalUnderlord_Firestorm::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_AbyssalUnderlord_Firestorm *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r13d
  int v8; // r13d
  float fWaveDamagea; // [rsp+0h] [rbp-30h]
  float fWavesHit; // [rsp+4h] [rbp-2Ch]
  float fWavesHita; // [rsp+4h] [rbp-2Ch]
  float fWavesHitb; // [rsp+4h] [rbp-2Ch]
  float fWavesHitc; // [rsp+4h] [rbp-2Ch]
  float fWavesHitd; // [rsp+4h] [rbp-2Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
    fWavesHit = LevelSpecialValue / (*(pTarget->_vptr_IHandleEntity + 386))(pTarget);
    v8 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "wave_count", -1, 0);
    fWavesHita = fminf(
                   fWavesHit,
                   fminf(fInterval, CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "wave_interval", -1, 0) * v8))
               * v8;
    fWaveDamagea = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "wave_damage", -1, 0) * fWavesHita;
    fWavesHitb = (CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "burn_damage", -1, 0) / 100.0) * fWavesHita;
    fWavesHitc = fWavesHitb * (*(pTarget->_vptr_IHandleEntity + 156))(pTarget);
    fWavesHitd = fWaveDamagea
               + (CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "burn_duration", -1, 0) * fWavesHitc);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fWavesHitd);
  }
  return result;
}


// CDOTA_Modifier_AbyssalUnderlord_Firestorm_Thinker::~CDOTA_Modifier_AbyssalUnderlord_Firestorm_Thinker  (line 239, @0x0000000002c93820, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_AbyssalUnderlord_Firestorm_Thinker::~CDOTA_Modifier_AbyssalUnderlord_Firestorm_Thinker(
        CDOTA_Modifier_AbyssalUnderlord_Firestorm_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_45800D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_AbyssalUnderlord_Firestorm_Thinker::~CDOTA_Modifier_AbyssalUnderlord_Firestorm_Thinker  (line 239, @0x0000000002c93840, libserver.so)  // inlines: ~CDOTA_Modifier_AbyssalUnderlord_Firestorm_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_AbyssalUnderlord_Firestorm_Thinker::~CDOTA_Modifier_AbyssalUnderlord_Firestorm_Thinker(
        CDOTA_Modifier_AbyssalUnderlord_Firestorm_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_45800D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_AbyssalUnderlord_Firestorm_Thinker::IsHidden  (line 247, @0x0000000002c86850, libserver.so)
bool __fastcall CDOTA_Modifier_AbyssalUnderlord_Firestorm_Thinker::IsHidden(
        CDOTA_Modifier_AbyssalUnderlord_Firestorm_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_AbyssalUnderlord_Firestorm_Thinker::OnCreated  (line 266, @0x0000000002c746f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "wave_damage", "wave_count", "wave_interval", "burn_duration", "first_wave_delay", "dont_burn_ancients"
void __fastcall CDOTA_Modifier_AbyssalUnderlord_Firestorm_Thinker::OnCreated(
        CDOTA_Modifier_AbyssalUnderlord_Firestorm_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  float v10; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->wave_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "wave_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->wave_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->wave_count = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "wave_count", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_12;
    }
  }
  this->wave_count = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "radius", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
    goto LABEL_13;
  }
LABEL_12:
  this->radius = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->wave_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "wave_interval", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_14;
  }
LABEL_13:
  this->wave_interval = 0.0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->burn_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "burn_duration", -1, 0);
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_7;
LABEL_15:
    this->first_wave_delay = 0.0;
    v9 = CDOTA_Buff::GetAbility(this);
    if ( v9 != 0 )
      goto LABEL_8;
LABEL_16:
    this->dont_burn_ancients = 0;
    goto LABEL_9;
  }
LABEL_14:
  this->burn_duration = 0.0;
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 == 0 )
    goto LABEL_15;
LABEL_7:
  this->first_wave_delay = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8, "first_wave_delay", -1, 0);
  v9 = CDOTA_Buff::GetAbility(this);
  if ( v9 == 0 )
    goto LABEL_16;
LABEL_8:
  this->dont_burn_ancients = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v9, "dont_burn_ancients", -1, 0);
LABEL_9:
  CDOTA_Buff::StartIntervalThink(this, this->first_wave_delay, v10);
}


// CDOTA_Modifier_AbyssalUnderlord_Firestorm_Thinker::OnIntervalThink  (line 284, @0x0000000002c4e520, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::GetCaster, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleFoWProperties, CDOTA_Buff::AddParticle, DOTA_EmitSoundLocationWithCaster (24 total)
// strings: "particles/units/heroes/heroes_underlord/abyssal_underlord_firestorm_wave.vpcf", "attach_hitloc", "Hero_AbyssalUnderlord.Firestorm", "modifier_abyssal_underlord_firestorm_burn", "Hero_AbyssalUnderlord.Firestorm.Target"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_AbyssalUnderlord_Firestorm_Thinker::OnIntervalThink(
        CDOTA_Modifier_AbyssalUnderlord_Firestorm_Thinker *const this)
{
  float v1; // xmm1_4
  int wave_count; // eax
  float wave_interval; // xmm0_4
  __m128i v5; // xmm3
  float v6; // r14d
  CDOTA_BaseNPC *v7; // r12
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  Vector *v12; // rax
  int m_Size; // r14d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_ParticleManager *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  const Vector *v18; // r12
  CDOTA_BaseNPC *v19; // r15
  CDOTA_ParticleManager *v20; // rax
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  __m128i v23; // xmm4
  CDOTA_ParticleManager *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  __int64 v26; // rbx
  CHandle<CBaseEntity> *v27; // rdx
  uint32 m_Index; // eax
  __int16 v29; // cx
  CEntityIdentity *v30; // rdx
  CEntityIdentity *v31; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  unsigned __int64 m_Value; // rax
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *v35; // rax
  float v36; // xmm1_4
  CDOTABaseAbility *v37; // r14
  CDOTA_BaseNPC *v38; // rax
  CDOTA_BaseNPC *Parent; // rax
  float flDamage; // [rsp+2Ch] [rbp-94h]
  Vector vStormPos; // [rsp+30h] [rbp-90h] BYREF
  double v42; // [rsp+40h] [rbp-80h]
  float v43; // [rsp+48h] [rbp-78h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+50h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v46; // [rsp+88h] [rbp-38h]

  v46 = __readfsqword(0x28u);
  wave_count = this->wave_count;
  if ( wave_count <= 0 )
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
    Parent = CDOTA_Buff::GetParent(this);
    UTIL_Remove(Parent);
  }
  else
  {
    wave_interval = this->wave_interval;
    this->wave_count = wave_count - 1;
    CDOTA_Buff::StartIntervalThink(this, wave_interval, v1);
    *v5.m128i_i32 = this->radius;
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
    v7 = CDOTA_Buff::GetParent(this);
    v8 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
    v10 = CDOTA_Buff::GetParent(this);
    FindUnitsInRadius(v10->m_iTeamNum.m_Value, AbsOrigin, v7, v6, &entities, 2, 19, 0, 0, 0);
    v11 = CDOTA_Buff::GetParent(this);
    v12 = CBaseEntity::GetAbsOrigin(v11);
    m_Size = entities.m_Size;
    vStormPos = *v12;
    LODWORD(AbsOrigin) = CDOTA_Buff::CreateBuffParticleEffect(
                           this,
                           "particles/units/heroes/heroes_underlord/abyssal_underlord_firestorm_wave.vpcf",
                           2,
                           0,
                           0);
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(ParticleManager, AbsOrigin, 0, *&vStormPos.x, vStormPos.z);
    Caster = CDOTA_Buff::GetCaster(this);
    v16 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v16, AbsOrigin, 1, Caster, 1, 0, vec3_invalid, 1);
    v17 = CDOTA_Buff::GetCaster(this);
    v18 = CBaseEntity::GetAbsOrigin(v17);
    v19 = CDOTA_Buff::GetCaster(this);
    v20 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v20, AbsOrigin, 2, v19, 5, "attach_hitloc", *v18, 1);
    *&v42 = this->radius;
    HIDWORD(v42) = LODWORD(v42);
    v21 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v21, AbsOrigin, 4, v42, *&v42);
    *&v42 = m_Size;
    *(&v42 + 1) = m_Size;
    v43 = m_Size;
    v22 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v22, AbsOrigin, 5, v42, m_Size);
    *v23.m128i_i32 = this->radius;
    LODWORD(v18) = _mm_cvtsi128_si32(v23);
    v24 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleFoWProperties(v24, AbsOrigin, 0, -1, *&v18);
    CDOTA_Buff::AddParticle(this, AbsOrigin, 0, 0, -1, 0, 0);
    v25 = CDOTA_Buff::GetCaster(this);
    DOTA_EmitSoundLocationWithCaster(&vStormPos, "Hero_AbyssalUnderlord.Firestorm", v25);
    if ( entities.m_Size > 0 )
    {
      v26 = 0;
      do
      {
        while ( 1 )
        {
          v27 = &entities.m_Memory.m_pMemory[v26];
          m_Index = v27->m_Index;
          if ( v27->m_Index + 2 > 1 )
          {
            v29 = v27->m_Index;
            v30 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v27->m_Index) >> 9) & 0x3F];
            if ( v30 != 0 )
            {
              v31 = &v30[v29 & 0x1FF];
              if ( v31 != 0 && m_Index == v31->m_EHandle.m_Index )
              {
                m_pInstance = v31->m_pInstance;
                if ( v31->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                {
                  m_Value = m_pInstance->m_nUnitState64.m_Value;
                  if ( (m_Value & 0x200) == 0 && !m_pInstance->m_bIsWaitingToSpawn.m_Value && (m_Value & 0x100) == 0 )
                  {
                    flDamage = this->wave_damage;
                    Ability = CDOTA_Buff::GetAbility(this);
                    v35 = CDOTA_Buff::GetCaster(this);
                    ApplyDamage(v35, m_pInstance, Ability, flDamage, 2, 0);
                    if ( this->dont_burn_ancients == 0 || !m_pInstance->m_bIsAncient.m_Value )
                      break;
                  }
                }
              }
            }
          }
          if ( entities.m_Size <= ++v26 )
            goto LABEL_17;
        }
        KeyValues::KeyValues(&kv, "modifier_abyssal_underlord_firestorm_burn");
        KeyValues::SetFloat(&kv, "duration", v36);
        v37 = CDOTA_Buff::GetAbility(this);
        v38 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(m_pInstance, v38, v37, "modifier_abyssal_underlord_firestorm_burn", &kv, 0);
        CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_AbyssalUnderlord.Firestorm.Target", 0.0, 0, 0);
        KeyValues::~KeyValues(&kv);
        ++v26;
      }
      while ( entities.m_Size > v26 );
    }
LABEL_17:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
}


// CDOTA_Modifier_AbyssalUnderlord_Firestorm_Burn::~CDOTA_Modifier_AbyssalUnderlord_Firestorm_Burn  (line 340, @0x0000000002c937d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_AbyssalUnderlord_Firestorm_Burn::~CDOTA_Modifier_AbyssalUnderlord_Firestorm_Burn(
        CDOTA_Modifier_AbyssalUnderlord_Firestorm_Burn *const this)
{
  this->_vptr_CDOTA_Buff = &off_45803F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_AbyssalUnderlord_Firestorm_Burn::~CDOTA_Modifier_AbyssalUnderlord_Firestorm_Burn  (line 340, @0x0000000002c937f0, libserver.so)  // inlines: ~CDOTA_Modifier_AbyssalUnderlord_Firestorm_Burn
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_AbyssalUnderlord_Firestorm_Burn::~CDOTA_Modifier_AbyssalUnderlord_Firestorm_Burn(
        CDOTA_Modifier_AbyssalUnderlord_Firestorm_Burn *const this)
{
  this->_vptr_CDOTA_Buff = &off_45803F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_AbyssalUnderlord_Firestorm_Burn::GetEffectName  (line 347, @0x0000000002c86860, libserver.so)
// strings: "particles/units/heroes/heroes_underlord/abyssal_underlord_firestorm_wave_burn.vpcf"
const char *__fastcall CDOTA_Modifier_AbyssalUnderlord_Firestorm_Burn::GetEffectName(
        CDOTA_Modifier_AbyssalUnderlord_Firestorm_Burn *const this)
{
  return "particles/units/heroes/heroes_underlord/abyssal_underlord_firestorm_wave_burn.vpcf";
}


// CDOTA_Modifier_AbyssalUnderlord_Firestorm_Burn::StatusEffectPriority  (line 348, @0x0000000002c86870, libserver.so)
int __fastcall CDOTA_Modifier_AbyssalUnderlord_Firestorm_Burn::StatusEffectPriority(
        CDOTA_Modifier_AbyssalUnderlord_Firestorm_Burn *const this)
{
  return 35;
}


// CDOTA_Modifier_AbyssalUnderlord_Firestorm_Burn::OnCreated  (line 360, @0x0000000002c599d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "burn_damage", "burn_interval"
void __fastcall CDOTA_Modifier_AbyssalUnderlord_Firestorm_Burn::OnCreated(
        CDOTA_Modifier_AbyssalUnderlord_Firestorm_Burn *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->burn_damage = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->burn_interval = 0.0;
    goto LABEL_4;
  }
  this->burn_damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "burn_damage", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->burn_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "burn_interval", -1, 0);
LABEL_4:
  (*(this->_vptr_CDOTA_Buff + 56))(this);
  CDOTA_Buff::StartIntervalThink(this, this->burn_interval, v5);
}


// CDOTA_Modifier_AbyssalUnderlord_Firestorm_Burn::OnIntervalThink  (line 373, @0x0000000002c1ee50, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, ApplyDamage
void __fastcall CDOTA_Modifier_AbyssalUnderlord_Firestorm_Burn::OnIntervalThink(
        CDOTA_Modifier_AbyssalUnderlord_Firestorm_Burn *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *v4; // r12
  CDOTA_BaseNPC *Caster; // rax
  float v6; // [rsp+Ch] [rbp-24h]
  float v7; // [rsp+Ch] [rbp-24h]

  v6 = this->burn_damage / 100.0;
  Parent = CDOTA_Buff::GetParent(this);
  v7 = v6 * (*(Parent->_vptr_IHandleEntity + 156))(Parent);
  Ability = CDOTA_Buff::GetAbility(this);
  v4 = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, v4, Ability, v7, 2, 0);
}


// CDOTA_Ability_AbyssalUnderlord_PitOfMalice::~CDOTA_Ability_AbyssalUnderlord_PitOfMalice  (line 384, @0x0000000002c97b60, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_AbyssalUnderlord_PitOfMalice::~CDOTA_Ability_AbyssalUnderlord_PitOfMalice(
        CDOTA_Ability_AbyssalUnderlord_PitOfMalice *const this)
{
  this->_vptr_IHandleEntity = &off_4580750;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_AbyssalUnderlord_PitOfMalice::~CDOTA_Ability_AbyssalUnderlord_PitOfMalice  (line 384, @0x0000000002c97b80, libserver.so)  // inlines: ~CDOTA_Ability_AbyssalUnderlord_PitOfMalice
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_AbyssalUnderlord_PitOfMalice::~CDOTA_Ability_AbyssalUnderlord_PitOfMalice(
        CDOTA_Ability_AbyssalUnderlord_PitOfMalice *const this)
{
  this->_vptr_IHandleEntity = &off_4580750;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_AbyssalUnderlord_PitOfMalice::Schema_DynamicBinding  (line 386, @0x0000000002c86880, libserver.so)
// globals: CDOTA_Ability_AbyssalUnderlord_PitOfMalice::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_AbyssalUnderlord_PitOfMalice::Schema_DynamicBinding(
        const CDOTA_Ability_AbyssalUnderlord_PitOfMalice *const this)
{
  return CDOTA_Ability_AbyssalUnderlord_PitOfMalice::s_pSchemaBinding;
}


// CDOTA_Ability_AbyssalUnderlord_PitOfMalice::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 386, @0x0000000002c86890, libserver.so)
// globals: CDOTA_Ability_AbyssalUnderlord_PitOfMalice::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_AbyssalUnderlord_PitOfMalice::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_AbyssalUnderlord_PitOfMalice::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_AbyssalUnderlord_PitOfMalice::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_AbyssalUnderlord_PitOfMalice::CEntityInstanceEntityClass::DestructInstance  (line 386, @0x0000000002c868a0, libserver.so)  // inlines: Destruct<CDOTA_Ability_AbyssalUnderlord_PitOfMalice>
void __fastcall CDOTA_Ability_AbyssalUnderlord_PitOfMalice::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_AbyssalUnderlord_PitOfMalice::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_AbyssalUnderlord_PitOfMalice::CEntityInstanceEntityClass::FreeInstance  (line 386, @0x0000000002c868c0, libserver.so)
void __fastcall CDOTA_Ability_AbyssalUnderlord_PitOfMalice::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_AbyssalUnderlord_PitOfMalice::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_AbyssalUnderlord_PitOfMalice::CEntityInstanceEntityClass::CanAllocate  (line 386, @0x0000000002c868e0, libserver.so)
bool __fastcall CDOTA_Ability_AbyssalUnderlord_PitOfMalice::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_AbyssalUnderlord_PitOfMalice::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_AbyssalUnderlord_PitOfMalice::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 386, @0x0000000002c868f0, libserver.so)
// globals: CDOTA_Ability_AbyssalUnderlord_PitOfMalice::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_AbyssalUnderlord_PitOfMalice::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_AbyssalUnderlord_PitOfMalice::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_AbyssalUnderlord_PitOfMalice::s_pSchemaBinding;
}


// CDOTA_Ability_AbyssalUnderlord_PitOfMalice::CEntityInstanceEntityClass::AllocateInstance  (line 386, @0x0000000002c8f020, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_AbyssalUnderlord_PitOfMalice::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_AbyssalUnderlord_PitOfMalice::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_AbyssalUnderlord_PitOfMalice::CEntityInstanceEntityClass::ConstructInstance  (line 386, @0x0000000002c94490, libserver.so)  // inlines: CDOTA_Ability_AbyssalUnderlord_PitOfMalice, Construct<CDOTA_Ability_AbyssalUnderlord_PitOfMalice>, InValidate, SndOpEventGuid_t, SoundEventGuid_t
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_AbyssalUnderlord_PitOfMalice::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_AbyssalUnderlord_PitOfMalice::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 229) = 0;
    *p = &off_4580750;
    *(p + 230) = -1;
    *(p + 228) = -1;
  }
  return p;
}


// CDOTA_Ability_AbyssalUnderlord_PitOfMalice::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 386, @0x0000000002ca15d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_AbyssalUnderlord_PitOfMalice::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_AbyssalUnderlord_PitOfMalice::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_AbyssalUnderlord_PitOfMalice::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 386, @0x0000000002ca15f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_AbyssalUnderlord_PitOfMalice::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_AbyssalUnderlord_PitOfMalice::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_AbyssalUnderlord_PitOfMalice::GetEntityClassInternal  (line 386, @0x0000000002cb82e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "abyssal_underlord_pit_of_malice", "CDOTA_Ability_AbyssalUnderlord_PitOfMalice"
// globals: `guard variable for'CDOTA_Ability_AbyssalUnderlord_PitOfMalice::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_PitOfMaliceClass, CDOTA_Ability_AbyssalUnderlord_PitOfMalice::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_PitOfMaliceClass, __dso_handle, CDOTA_Ability_AbyssalUnderlord_PitOfMalice::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_AbyssalUnderlord_PitOfMalice::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_PitOfMaliceClassInfo, CDOTA_Ability_AbyssalUnderlord_PitOfMalice::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_PitOfMaliceClassInfo
CEntityClass *__cdecl CDOTA_Ability_AbyssalUnderlord_PitOfMalice::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_AbyssalUnderlord_PitOfMalice::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_PitOfMaliceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_AbyssalUnderlord_PitOfMalice::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_PitOfMaliceClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_AbyssalUnderlord_PitOfMalice::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_PitOfMaliceClass);
    CDOTA_Ability_AbyssalUnderlord_PitOfMalice::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_PitOfMaliceClass._vptr_CEntityClass = off_45806D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_AbyssalUnderlord_PitOfMalice::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_PitOfMaliceClass);
    __cxa_atexit(
      CDOTA_Ability_AbyssalUnderlord_PitOfMalice::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_AbyssalUnderlord_PitOfMalice::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_PitOfMaliceClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_AbyssalUnderlord_PitOfMaliceClass != 0 )
    return &CDOTA_Ability_AbyssalUnderlord_PitOfMalice::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_PitOfMaliceClass;
  if ( `guard variable for'CDOTA_Ability_AbyssalUnderlord_PitOfMalice::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_PitOfMaliceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_AbyssalUnderlord_PitOfMalice::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_PitOfMaliceClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_AbyssalUnderlord_PitOfMalice::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_PitOfMaliceClassInfo,
      "CDOTA_Ability_AbyssalUnderlord_PitOfMalice",
      "abyssal_underlord_pit_of_malice",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_AbyssalUnderlord_PitOfMalice::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_PitOfMaliceClassInfo);
  }
  CDOTA_Ability_AbyssalUnderlord_PitOfMalice::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_PitOfMaliceClass.m_pClassInfo = &CDOTA_Ability_AbyssalUnderlord_PitOfMalice::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_PitOfMaliceClassInfo;
  CDOTA_Ability_AbyssalUnderlord_PitOfMalice::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_PitOfMaliceClass.m_pBaseClassInfo = CDOTA_Ability_AbyssalUnderlord_PitOfMalice::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_PitOfMaliceClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_AbyssalUnderlord_PitOfMaliceClass = &CDOTA_Ability_AbyssalUnderlord_PitOfMalice::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_PitOfMaliceClass;
  CDOTA_Ability_AbyssalUnderlord_PitOfMalice::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_PitOfMaliceClassInfo.m_pClass = &CDOTA_Ability_AbyssalUnderlord_PitOfMalice::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_PitOfMaliceClass;
  CDOTA_Ability_AbyssalUnderlord_PitOfMalice::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_PitOfMaliceClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_AbyssalUnderlord_PitOfMaliceClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_AbyssalUnderlord_PitOfMalice::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_PitOfMaliceClass;
}


// CDOTA_Ability_AbyssalUnderlord_PitOfMalice::YouForgotToImplementOrDeclareServerClass  (line 416, @0x0000000002c1b5c0, libserver.so)
int __fastcall CDOTA_Ability_AbyssalUnderlord_PitOfMalice::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_AbyssalUnderlord_PitOfMalice *const this)
{
  return 0;
}


// CDOTA_Ability_AbyssalUnderlord_PitOfMalice::GetServerClass  (line 416, @0x0000000002c355f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_AbyssalUnderlord_PitOfMalice::GetServerClass(
        CDOTA_Ability_AbyssalUnderlord_PitOfMalice *const this)
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


// CDOTA_Ability_AbyssalUnderlord_PitOfMalice::OnSpellStart  (line 425, @0x0000000002c65a70, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, Vector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCursorPosition, CDOTABaseAbility::GetCaster, Thinker_Create, CDOTABaseAbility::CreateAbilityParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleFoWProperties, CDOTA_ParticleManager::ReleaseParticleIndex (17 total)
// strings: "pit_duration", "modifier_abyssal_underlord_pit_of_malice_thinker", "particles/units/heroes/heroes_underlord/underlord_pitofmalice.vpcf", "Hero_AbyssalUnderlord.PitOfMalice", "particles/units/heroes/heroes_underlord/underlord_pit_cast.vpcf", "attach_attack1"
void __fastcall CDOTA_Ability_AbyssalUnderlord_PitOfMalice::OnSpellStart(
        CDOTA_Ability_AbyssalUnderlord_PitOfMalice *const this)
{
  __m128i v2; // xmm0
  float v3; // r15d
  int LevelSpecialValue; // r14d
  float v5; // xmm1_4
  int m_Value; // r12d
  CDOTA_BaseNPC *Caster; // rax
  int AbilityParticleEffect; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v10; // rax
  CDOTA_ParticleManager *v11; // rax
  __m128i v12; // xmm3
  float v13; // r14d
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  int v18; // r12d
  CDOTA_BaseNPC *v19; // rbx
  CDOTA_ParticleManager *v20; // rax
  CDOTA_ParticleManager *v21; // rax
  Vector vecCursPos; // [rsp+10h] [rbp-80h] BYREF
  Vector vecFXData; // [rsp+20h] [rbp-70h]
  double pit_duration; // [rsp+30h] [rbp-60h]
  float v25; // [rsp+38h] [rbp-58h]
  KeyValues kv; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+58h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  *v2.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "pit_duration", -1, 0);
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_abyssal_underlord_pit_of_malice_thinker");
  KeyValues::SetFloat(&kv, "duration", v5);
  vecCursPos = CDOTABaseAbility::GetCursorPosition(this);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  Caster = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(Caster, this, "modifier_abyssal_underlord_pit_of_malice_thinker", &kv, vecCursPos, m_Value, 0, 1, 0);
  *&vecFXData.y = 1092616192;
  vecFXData.x = (LevelSpecialValue + 10);
  AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                            this,
                            "particles/units/heroes/heroes_underlord/underlord_pitofmalice.vpcf",
                            8,
                            0,
                            0);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, AbilityParticleEffect, 0, *&vecCursPos.x, vecCursPos.z);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v10, AbilityParticleEffect, 1, *&vecFXData.x, 0.0);
  *&pit_duration = v3;
  *(&pit_duration + 1) = v3;
  v25 = v3;
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v11, AbilityParticleEffect, 2, pit_duration, v3);
  *v12.m128i_i32 = LevelSpecialValue;
  v13 = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
  v14 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleFoWProperties(v14, AbilityParticleEffect, 0, -1, v13);
  v15 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v15, AbilityParticleEffect);
  v16 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSoundLocationWithCaster(&vecCursPos, "Hero_AbyssalUnderlord.PitOfMalice", v16);
  v17 = CDOTABaseAbility::GetCaster(this);
  v18 = CDOTABaseAbility::CreateAbilityParticleEffect(
          this,
          "particles/units/heroes/heroes_underlord/underlord_pit_cast.vpcf",
          3,
          v17,
          0);
  v19 = CDOTABaseAbility::GetCaster(this);
  v20 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v20, v18, 0, v19, 5, "attach_attack1", vec3_invalid, 1);
  v21 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v21, v18);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_AbyssalUnderlord_PitOfMalice::OnAbilityPhaseStart  (line 456, @0x0000000002c5ec60, libserver.so)  // inlines: CBroadcastRecipientFilter, CDOTAPVSFilter, CEntityIndex, CReliableBroadcastRecipientFilter, CUtlMemory, CUtlVector, CUtlVectorBase, EmitSound_t, GetLevelSpecialValueFor<int>, InValidate, Purge, RemoveAll, SoundEventGuid_t, Vector, ~CBroadcastRecipientFilter, ~CDOTAPVSFilter, ~CReliableBroadcastRecipientFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCursorPosition, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CRecipientFilter::RemoveAllRecipients, CDOTABaseAbility::GetCaster, CBaseEntity::GetTeam, CRecipientFilter::AddRecipientsByTeam, GetGlobalTeam, CDOTABaseAbility::CreateAbilityParticleEffect, GetParticleManager (23 total)
// strings: "particles/units/heroes/heroes_underlord/underlord_pitofmalice_pre.vpcf", "Hero_AbyssalUnderlord.PitOfMalice.Start"
bool __fastcall CDOTA_Ability_AbyssalUnderlord_PitOfMalice::OnAbilityPhaseStart(
        CDOTA_Ability_AbyssalUnderlord_PitOfMalice *const this)
{
  int LevelSpecialValue; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CTeam *Team; // rax
  CTeam *GlobalTeam; // rax
  CDOTA_BaseNPC *v6; // rax
  int v7; // eax
  int v8; // r14d
  CDOTA_ParticleManager *ParticleManager; // rax
  int m_nFXIndex; // r14d
  CDOTA_ParticleManager *v11; // rax
  __m128i v12; // xmm2
  int v13; // r14d
  float v14; // r13d
  CDOTA_ParticleManager *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  CTeam *v17; // rax
  CTeam *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  bool v20; // zf
  Vector vecCursPos; // [rsp+0h] [rbp-1E0h] BYREF
  Vector vecFXData; // [rsp+10h] [rbp-1D0h]
  EmitSound_t ep; // [rsp+20h] [rbp-1C0h] BYREF
  CDOTAPVSFilter filterStart; // [rsp+80h] [rbp-160h] BYREF
  unsigned __int64 v26; // [rsp+1B8h] [rbp-28h]
  SndOpEventGuid_t v27; // 0:rax.8

  v26 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  vecCursPos = CDOTABaseAbility::GetCursorPosition(this);
  *&vecFXData.y = 0x3F8000003F800000LL;
  vecFXData.x = (LevelSpecialValue + 10);
  CRecipientFilter::CRecipientFilter(&filterStart);
  filterStart._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filterStart);
  filterStart._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filterStart);
  CRecipientFilter::RemoveAllRecipients(&filterStart);
  Caster = CDOTABaseAbility::GetCaster(this);
  Team = CBaseEntity::GetTeam(Caster);
  CRecipientFilter::AddRecipientsByTeam(&filterStart, Team);
  GlobalTeam = GetGlobalTeam(1);
  CRecipientFilter::AddRecipientsByTeam(&filterStart, GlobalTeam);
  v6 = CDOTABaseAbility::GetCaster(this);
  v7 = CDOTABaseAbility::CreateAbilityParticleEffect(
         this,
         "particles/units/heroes/heroes_underlord/underlord_pitofmalice_pre.vpcf",
         8,
         v6,
         &filterStart);
  this->m_nFXIndex = v7;
  v8 = v7;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, v8, 0, *&vecCursPos.x, vecCursPos.z);
  m_nFXIndex = this->m_nFXIndex;
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v11, m_nFXIndex, 1, *&vecFXData.x, vecFXData.z);
  *v12.m128i_i32 = LevelSpecialValue;
  v13 = this->m_nFXIndex;
  v14 = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
  v15 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleFoWProperties(v15, v13, 0, -1, v14);
  filterStart._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filterStart);
  if ( CDOTABaseAbility::GetCaster(this) != 0 )
  {
    CRecipientFilter::CRecipientFilter(&filterStart);
    filterStart._vptr_IRecipientFilter = &off_42B2CB0;
    CDOTAPVSFilter::AddRecipientsByDOTAPVS(&filterStart, &vecCursPos);
    v16 = CDOTABaseAbility::GetCaster(this);
    v17 = CBaseEntity::GetTeam(v16);
    CRecipientFilter::RemoveRecipientsNotOnTeam(&filterStart, v17);
    v18 = GetGlobalTeam(1);
    CRecipientFilter::AddRecipientsByTeam(&filterStart, v18);
    ep.m_pSoundName = 0;
    ep.m_flVolume = 1.0;
    ep.m_SoundLevel = soundlevel_t::SNDLVL_NONE;
    ep.m_nFlags = 0;
    ep.m_nPitch = 100;
    ep.m_pOrigin = 0;
    ep.m_flSoundTime = 0.0;
    ep.m_pflSoundDuration = 0;
    ep.m_bEmitCloseCaption = 1;
    ep.m_bWarnOnMissingCloseCaption = 0;
    ep.m_bWarnOnDirectWaveReference = 0;
    ep.m_nSpeakerEntity.m_Data = -1;
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
    ep.m_nChannel = 6;
    v19 = CDOTABaseAbility::GetCaster(this);
    ep.m_pSoundName = CDOTA_BaseNPC::FindReplacementSound(v19, "Hero_AbyssalUnderlord.PitOfMalice.Start");
    ep.m_pOrigin = &vecCursPos;
    v27 = CBaseEntity::EmitSound(&filterStart, 0, &ep);
    v20 = (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0;
    this->m_nPitPhaseStartSound = v27;
    ep.m_UtlVecSoundOrigin.m_Size = 0;
    if ( v20 )
    {
      CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
      if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
    }
    filterStart._vptr_IRecipientFilter = &off_42B2CB0;
    CRecipientFilter::~CRecipientFilter(&filterStart);
  }
  else
  {
    this->m_nPitPhaseStartSound.m_nGuid.m_Data = 0;
    this->m_nPitPhaseStartSound.m_hStackHash = -1;
  }
  return 1;
}


// CDOTA_Ability_AbyssalUnderlord_PitOfMalice::OnAbilityPhaseInterrupted  (line 496, @0x0000000002c39390, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CSoundOpGameSystem::StopSoundEvent
void __fastcall CDOTA_Ability_AbyssalUnderlord_PitOfMalice::OnAbilityPhaseInterrupted(
        CDOTA_Ability_AbyssalUnderlord_PitOfMalice *const this)
{
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax

  m_nFXIndex = this->m_nFXIndex;
  if ( m_nFXIndex != -1 )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 1);
    this->m_nFXIndex = -1;
    CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, &this->m_nPitPhaseStartSound);
  }
}


// CDOTA_Ability_AbyssalUnderlord_PitOfMalice::GetSlowDuration  (line 512, @0x0000000002c55ef0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "ensnare_duration"
float __fastcall CDOTA_Ability_AbyssalUnderlord_PitOfMalice::GetSlowDuration(
        CDOTA_Ability_AbyssalUnderlord_PitOfMalice *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "ensnare_duration", -1, 1);
}


// CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Thinker::~CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Thinker  (line 520, @0x0000000002c93780, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Thinker::~CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Thinker(
        CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4581210;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Thinker::~CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Thinker  (line 520, @0x0000000002c937a0, libserver.so)  // inlines: ~CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Thinker::~CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Thinker(
        CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4581210;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Thinker::IsHidden  (line 528, @0x0000000002c86900, libserver.so)
bool __fastcall CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Thinker::IsHidden(
        CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Thinker::OnCreated  (line 543, @0x0000000002c73230, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "pit_damage", "pit_interval", "ensnare_duration"
void __fastcall CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Thinker::OnCreated(
        CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  float v7; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->pit_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "pit_damage", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_9:
      this->pit_interval = 0.0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
LABEL_10:
      this->ensnare_duration = 0.0;
      goto LABEL_6;
    }
  }
  this->pit_damage = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_9;
LABEL_4:
  this->pit_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "pit_interval", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_10;
LABEL_5:
  this->ensnare_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "ensnare_duration", -1, 0);
LABEL_6:
  (*(this->_vptr_CDOTA_Buff + 56))(this);
  CDOTA_Buff::StartIntervalThink(this, 0.0, v7);
}


// CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Thinker::OnIntervalThink  (line 558, @0x0000000002c57c00, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues (15 total)
// strings: "modifier_abyssal_underlord_pit_of_malice_buff_placer", "special_bonus_unique_underlord", "modifier_abyssal_underlord_pit_of_malice_ensare"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Thinker::OnIntervalThink(
        CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Thinker *const this)
{
  __m128i v1; // xmm2
  float v3; // r14d
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v7; // rax
  __int64 v8; // rbx
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityInstance *m_pInstance; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v17; // xmm1_4
  CDOTA_BaseNPC *v18; // rax
  float v19; // xmm1_4
  CDOTA_BaseNPC *v20; // rax
  CDOTABaseAbility *flDuration; // [rsp+28h] [rbp-98h]
  CDOTABaseAbility *flDurationa; // [rsp+28h] [rbp-98h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp-38h]

  entities.m_Memory.m_nAllocationCount = 0;
  *v1.m128i_i32 = this->radius;
  entities.m_Size = 0;
  v26 = __readfsqword(0x28u);
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  Parent = CDOTA_Buff::GetParent(this);
  v5 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, Parent, v3, &entities, 2, 19, 0, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v8 = 0;
    do
    {
      while ( 1 )
      {
        v9 = &entities.m_Memory.m_pMemory[v8];
        m_Index = v9->m_Index;
        if ( v9->m_Index + 2 > 1 )
        {
          v11 = v9->m_Index;
          v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F];
          if ( v12 != 0 )
          {
            v13 = &v12[v11 & 0x1FF];
            if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
            {
              m_pInstance = v13->m_pInstance;
              if ( v13->m_pInstance != 0
                && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0
                && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 1) == 0
                && CDOTA_BaseNPC::FindModifierByName(
                     m_pInstance,
                     "modifier_abyssal_underlord_pit_of_malice_buff_placer",
                     0) == 0 )
              {
                break;
              }
            }
          }
        }
        if ( entities.m_Size <= ++v8 )
          goto LABEL_17;
      }
      Caster = CDOTA_Buff::GetCaster(this);
      AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_underlord", 0);
      if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
        CDOTABaseAbility::GetLevelSpecialValueFor<float>(AbilityByName, "value", 1, 1);
      KeyValues::KeyValues(&kv, "modifier_abyssal_underlord_pit_of_malice_ensare");
      KeyValues::SetFloat(&kv, "duration", v17);
      flDuration = CDOTA_Buff::GetAbility(this);
      v18 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(
        m_pInstance,
        v18,
        flDuration,
        "modifier_abyssal_underlord_pit_of_malice_ensare",
        &kv,
        0);
      KeyValues::KeyValues(&kv2, "modifier_abyssal_underlord_pit_of_malice_buff_placer");
      KeyValues::SetFloat(&kv2, "duration", v19);
      flDurationa = CDOTA_Buff::GetAbility(this);
      v20 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(
        m_pInstance,
        v20,
        flDurationa,
        "modifier_abyssal_underlord_pit_of_malice_buff_placer",
        &kv2,
        0);
      KeyValues::~KeyValues(&kv2);
      KeyValues::~KeyValues(&kv);
      ++v8;
    }
    while ( entities.m_Size > v8 );
  }
LABEL_17:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Ensnare::~CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Ensnare  (line 594, @0x0000000002c91420, libserver.so)  // inlines: ~CDOTA_Modifier_Rooted
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Ensnare::~CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Ensnare(
        CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Ensnare *const this)
{
  this->_vptr_CDOTA_Buff = &off_411ECF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Ensnare::~CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Ensnare  (line 594, @0x0000000002c91440, libserver.so)  // inlines: ~CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Ensnare, ~CDOTA_Modifier_Rooted
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Ensnare::~CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Ensnare(
        CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Ensnare *const this)
{
  this->_vptr_CDOTA_Buff = &off_411ECF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Ensnare::GetStatusEffectName  (line 597, @0x0000000002c86910, libserver.so)
// strings: "particles/status_fx/status_effect_frost.vpcf"
const char *__fastcall CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Ensnare::GetStatusEffectName(
        CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Ensnare *const this)
{
  return "particles/status_fx/status_effect_frost.vpcf";
}


// CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Ensnare::StatusEffectPriority  (line 598, @0x0000000002c86920, libserver.so)
int __fastcall CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Ensnare::StatusEffectPriority(
        CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Ensnare *const this)
{
  return 420;
}


// CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Ensnare::GetPriority  (line 602, @0x0000000002c86930, libserver.so)
int __fastcall CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Ensnare::GetPriority(
        CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Ensnare *const this)
{
  return 2;
}


// CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Ensnare::OnCreated  (line 610, @0x0000000002c20910, libserver.so)  // inlines: IsRealHero
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle, DOTA_EmitSound
// strings: "particles/units/heroes/heroes_underlord/abyssal_underlord_pitofmalice_stun.vpcf", "Hero_AbyssalUnderlord.Pit.TargetHero", "particles/units/heroes/heroes_underlord/abyssal_underlord_pitofmalice_stun_light.vpcf", "Hero_AbyssalUnderlord.Pit.Target"
void __fastcall CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Ensnare::OnCreated(
        CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Ensnare *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax
  int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *v5; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  int v9; // r12d
  CDOTA_BaseNPC *v10; // r13
  CDOTA_ParticleManager *v11; // rax
  CDOTA_BaseNPC *v12; // rax

  Parent = CDOTA_Buff::GetParent(this);
  if ( (Parent->m_iUnitType & 1) != 0 && !Parent->m_bIsIllusion.m_Value
    || (v8 = CDOTA_Buff::GetParent(this), (*(v8->_vptr_IHandleEntity + 436))(v8) != 0) )
  {
    BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                           this,
                           "particles/units/heroes/heroes_underlord/abyssal_underlord_pitofmalice_stun.vpcf",
                           2,
                           0,
                           0);
    v5 = CDOTA_Buff::GetParent(this);
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, BuffParticleEffect, 0, v5, 1, 0, vec3_invalid, 1);
    CDOTA_Buff::AddParticle(this, BuffParticleEffect, 0, 0, -1, 0, 0);
    v7 = CDOTA_Buff::GetParent(this);
    DOTA_EmitSound(10, "Hero_AbyssalUnderlord.Pit.TargetHero", v7);
  }
  else
  {
    v9 = CDOTA_Buff::CreateBuffParticleEffect(
           this,
           "particles/units/heroes/heroes_underlord/abyssal_underlord_pitofmalice_stun_light.vpcf",
           2,
           0,
           0);
    v10 = CDOTA_Buff::GetParent(this);
    v11 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v11, v9, 0, v10, 1, 0, vec3_invalid, 1);
    CDOTA_Buff::AddParticle(this, v9, 0, 0, -1, 0, 0);
    v12 = CDOTA_Buff::GetParent(this);
    DOTA_EmitSound(10, "Hero_AbyssalUnderlord.Pit.Target", v12);
  }
}


// CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Ensnare::CheckState  (line 631, @0x0000000002c20f80, libserver.so)  // inlines: Disable
// calls: CDOTA_Modifier_Rooted::CheckState
void __fastcall CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Ensnare::CheckState(
        CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Ensnare *const this,
        CDOTABuffState *const buffState)
{
  CDOTA_Modifier_Rooted::CheckState(this, buffState);
  buffState->m_nDisabledStateMask |= 0x80uLL;
  buffState->m_nEnabledStateMask &= ~0x80uLL;
}


// CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Buff_Placer::~CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Buff_Placer  (line 641, @0x0000000002c93c30, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Buff_Placer::~CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Buff_Placer(
        CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Buff_Placer *const this)
{
  this->_vptr_CDOTA_Buff = &off_4581810;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Buff_Placer::~CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Buff_Placer  (line 641, @0x0000000002c93c50, libserver.so)  // inlines: ~CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Buff_Placer
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Buff_Placer::~CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Buff_Placer(
        CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Buff_Placer *const this)
{
  this->_vptr_CDOTA_Buff = &off_4581810;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Buff_Placer::IsPurgable  (line 644, @0x0000000002c86940, libserver.so)
bool __fastcall CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Buff_Placer::IsPurgable(
        CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Buff_Placer *const this)
{
  return 0;
}


// CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Buff_Placer::IsHidden  (line 645, @0x0000000002c86950, libserver.so)
bool __fastcall CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Buff_Placer::IsHidden(
        CDOTA_Modifier_AbyssalUnderlord_PitOfMalice_Buff_Placer *const this)
{
  return 1;
}


// CDOTA_Ability_AbyssalUnderlord_AtrophyAura::~CDOTA_Ability_AbyssalUnderlord_AtrophyAura  (line 658, @0x0000000002c97bb0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_AbyssalUnderlord_AtrophyAura::~CDOTA_Ability_AbyssalUnderlord_AtrophyAura(
        CDOTA_Ability_AbyssalUnderlord_AtrophyAura *const this)
{
  this->_vptr_IHandleEntity = &off_4581BB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_AbyssalUnderlord_AtrophyAura::~CDOTA_Ability_AbyssalUnderlord_AtrophyAura  (line 658, @0x0000000002c97bd0, libserver.so)  // inlines: ~CDOTA_Ability_AbyssalUnderlord_AtrophyAura
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_AbyssalUnderlord_AtrophyAura::~CDOTA_Ability_AbyssalUnderlord_AtrophyAura(
        CDOTA_Ability_AbyssalUnderlord_AtrophyAura *const this)
{
  this->_vptr_IHandleEntity = &off_4581BB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_AbyssalUnderlord_AtrophyAura::Schema_DynamicBinding  (line 660, @0x0000000002c86960, libserver.so)
// globals: CDOTA_Ability_AbyssalUnderlord_AtrophyAura::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_AbyssalUnderlord_AtrophyAura::Schema_DynamicBinding(
        const CDOTA_Ability_AbyssalUnderlord_AtrophyAura *const this)
{
  return CDOTA_Ability_AbyssalUnderlord_AtrophyAura::s_pSchemaBinding;
}


// CDOTA_Ability_AbyssalUnderlord_AtrophyAura::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 660, @0x0000000002c86970, libserver.so)
// globals: CDOTA_Ability_AbyssalUnderlord_AtrophyAura::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_AbyssalUnderlord_AtrophyAura::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_AbyssalUnderlord_AtrophyAura::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_AbyssalUnderlord_AtrophyAura::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_AbyssalUnderlord_AtrophyAura::CEntityInstanceEntityClass::DestructInstance  (line 660, @0x0000000002c86980, libserver.so)  // inlines: Destruct<CDOTA_Ability_AbyssalUnderlord_AtrophyAura>
void __fastcall CDOTA_Ability_AbyssalUnderlord_AtrophyAura::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_AbyssalUnderlord_AtrophyAura::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_AbyssalUnderlord_AtrophyAura::CEntityInstanceEntityClass::FreeInstance  (line 660, @0x0000000002c869a0, libserver.so)
void __fastcall CDOTA_Ability_AbyssalUnderlord_AtrophyAura::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_AbyssalUnderlord_AtrophyAura::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_AbyssalUnderlord_AtrophyAura::CEntityInstanceEntityClass::CanAllocate  (line 660, @0x0000000002c869c0, libserver.so)
bool __fastcall CDOTA_Ability_AbyssalUnderlord_AtrophyAura::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_AbyssalUnderlord_AtrophyAura::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_AbyssalUnderlord_AtrophyAura::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 660, @0x0000000002c869d0, libserver.so)
// globals: CDOTA_Ability_AbyssalUnderlord_AtrophyAura::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_AbyssalUnderlord_AtrophyAura::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_AbyssalUnderlord_AtrophyAura::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_AbyssalUnderlord_AtrophyAura::s_pSchemaBinding;
}


// CDOTA_Ability_AbyssalUnderlord_AtrophyAura::CEntityInstanceEntityClass::AllocateInstance  (line 660, @0x0000000002c8f060, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_AbyssalUnderlord_AtrophyAura::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_AbyssalUnderlord_AtrophyAura::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_AbyssalUnderlord_AtrophyAura::CEntityInstanceEntityClass::ConstructInstance  (line 660, @0x0000000002c944e0, libserver.so)  // inlines: CDOTA_Ability_AbyssalUnderlord_AtrophyAura, Construct<CDOTA_Ability_AbyssalUnderlord_AtrophyAura>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_AbyssalUnderlord_AtrophyAura::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_AbyssalUnderlord_AtrophyAura::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4581BB0;
  }
  return p;
}


// CDOTA_Ability_AbyssalUnderlord_AtrophyAura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 660, @0x0000000002ca1620, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_AbyssalUnderlord_AtrophyAura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_AbyssalUnderlord_AtrophyAura::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_AbyssalUnderlord_AtrophyAura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 660, @0x0000000002ca1640, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_AbyssalUnderlord_AtrophyAura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_AbyssalUnderlord_AtrophyAura::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_AbyssalUnderlord_AtrophyAura::GetEntityClassInternal  (line 660, @0x0000000002cb8430, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "abyssal_underlord_atrophy_aura", "CDOTA_Ability_AbyssalUnderlord_AtrophyAura"
// globals: `guard variable for'CDOTA_Ability_AbyssalUnderlord_AtrophyAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_AtrophyAuraClass, CDOTA_Ability_AbyssalUnderlord_AtrophyAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_AtrophyAuraClass, __dso_handle, CDOTA_Ability_AbyssalUnderlord_AtrophyAura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_AbyssalUnderlord_AtrophyAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_AtrophyAuraClassInfo, CDOTA_Ability_AbyssalUnderlord_AtrophyAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_AtrophyAuraClassInfo
CEntityClass *__cdecl CDOTA_Ability_AbyssalUnderlord_AtrophyAura::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_AbyssalUnderlord_AtrophyAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_AtrophyAuraClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_AbyssalUnderlord_AtrophyAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_AtrophyAuraClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_AbyssalUnderlord_AtrophyAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_AtrophyAuraClass);
    CDOTA_Ability_AbyssalUnderlord_AtrophyAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_AtrophyAuraClass._vptr_CEntityClass = off_4581B30;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_AbyssalUnderlord_AtrophyAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_AtrophyAuraClass);
    __cxa_atexit(
      CDOTA_Ability_AbyssalUnderlord_AtrophyAura::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_AbyssalUnderlord_AtrophyAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_AtrophyAuraClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_AbyssalUnderlord_AtrophyAuraClass != 0 )
    return &CDOTA_Ability_AbyssalUnderlord_AtrophyAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_AtrophyAuraClass;
  if ( `guard variable for'CDOTA_Ability_AbyssalUnderlord_AtrophyAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_AtrophyAuraClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_AbyssalUnderlord_AtrophyAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_AtrophyAuraClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_AbyssalUnderlord_AtrophyAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_AtrophyAuraClassInfo,
      "CDOTA_Ability_AbyssalUnderlord_AtrophyAura",
      "abyssal_underlord_atrophy_aura",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_AbyssalUnderlord_AtrophyAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_AtrophyAuraClassInfo);
  }
  CDOTA_Ability_AbyssalUnderlord_AtrophyAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_AtrophyAuraClass.m_pClassInfo = &CDOTA_Ability_AbyssalUnderlord_AtrophyAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_AtrophyAuraClassInfo;
  CDOTA_Ability_AbyssalUnderlord_AtrophyAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_AtrophyAuraClass.m_pBaseClassInfo = CDOTA_Ability_AbyssalUnderlord_AtrophyAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_AtrophyAuraClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_AbyssalUnderlord_AtrophyAuraClass = &CDOTA_Ability_AbyssalUnderlord_AtrophyAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_AtrophyAuraClass;
  CDOTA_Ability_AbyssalUnderlord_AtrophyAura::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_AtrophyAuraClassInfo.m_pClass = &CDOTA_Ability_AbyssalUnderlord_AtrophyAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_AtrophyAuraClass;
  CDOTA_Ability_AbyssalUnderlord_AtrophyAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_AtrophyAuraClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_AbyssalUnderlord_AtrophyAuraClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_AbyssalUnderlord_AtrophyAura::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_AtrophyAuraClass;
}


// CDOTA_Ability_AbyssalUnderlord_AtrophyAura::GetIntrinsicModifierName  (line 663, @0x0000000002c869e0, libserver.so)
// strings: "modifier_abyssal_underlord_atrophy_aura"
const char *__fastcall CDOTA_Ability_AbyssalUnderlord_AtrophyAura::GetIntrinsicModifierName(
        CDOTA_Ability_AbyssalUnderlord_AtrophyAura *const this)
{
  return "modifier_abyssal_underlord_atrophy_aura";
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura::~CDOTA_Modifier_AbyssalUnderlord_AtrophyAura  (line 672, @0x0000000002c93730, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura::~CDOTA_Modifier_AbyssalUnderlord_AtrophyAura(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4582670;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura::~CDOTA_Modifier_AbyssalUnderlord_AtrophyAura  (line 672, @0x0000000002c93750, libserver.so)  // inlines: ~CDOTA_Modifier_AbyssalUnderlord_AtrophyAura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura::~CDOTA_Modifier_AbyssalUnderlord_AtrophyAura(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4582670;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura::IsAura  (line 681, @0x0000000002c869f0, libserver.so)
bool __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura::IsAura(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura *const this)
{
  return 1;
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura::GetModifierAura  (line 682, @0x0000000002c86a00, libserver.so)
// strings: "modifier_abyssal_underlord_atrophy_aura_effect"
const char *__fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura::GetModifierAura(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura *const this)
{
  return "modifier_abyssal_underlord_atrophy_aura_effect";
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura::GetAuraSearchTeam  (line 684, @0x0000000002c86a10, libserver.so)
int __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura::GetAuraSearchTeam(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura *const this)
{
  return 2;
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura::GetAuraSearchType  (line 685, @0x0000000002c86a20, libserver.so)
int __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura::GetAuraSearchType(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura *const this)
{
  return 3;
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura::GetAuraSearchFlags  (line 686, @0x0000000002c86a30, libserver.so)
int __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura::GetAuraSearchFlags(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura *const this)
{
  return 80;
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura::GetAuraRadius  (line 687, @0x0000000002c86a40, libserver.so)
int __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura::GetAuraRadius(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura *const this)
{
  return this->radius;
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura::IsHidden  (line 689, @0x0000000002c86a50, libserver.so)
bool __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura::IsHidden(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura *const this)
{
  return 1;
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura::OnCreated  (line 701, @0x0000000002c74e00, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>, Vector
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CDOTA_Buff::CreateBuffParticleEffect, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::StartIntervalThink
// strings: "particles/units/heroes/heroes_underlord/underlord_atrophy_weapon.vpcf", "attach_head", "attach_weapon"
void __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura::OnCreated(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v7; // rax
  int m_nFXIndex; // r13d
  const CBaseAnimating *v9; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v11; // rax
  const Vector *v12; // r12
  CDOTA_BaseNPC *v13; // rax
  int v14; // r13d
  const CBaseAnimating *v15; // r14
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  float v18; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
  Parent = CDOTA_Buff::GetParent(this);
  this->m_nFXIndex = CDOTA_Buff::CreateBuffParticleEffect(
                       this,
                       "particles/units/heroes/heroes_underlord/underlord_atrophy_weapon.vpcf",
                       2,
                       Parent,
                       0);
  v5 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTA_Buff::GetParent(this);
  m_nFXIndex = this->m_nFXIndex;
  v9 = v7;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, m_nFXIndex, 0, v9, 5, "attach_head", *AbsOrigin, 1);
  v11 = CDOTA_Buff::GetParent(this);
  v12 = CBaseEntity::GetAbsOrigin(v11);
  v13 = CDOTA_Buff::GetParent(this);
  v14 = this->m_nFXIndex;
  v15 = v13;
  v16 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v16, v14, 1, v15, 5, "attach_weapon", *v12, 1);
  LODWORD(v12) = this->m_nFXIndex;
  v17 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v17, v12, 2, 0.0, 0.0);
  CDOTA_Buff::StartIntervalThink(this, 1.0, v18);
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura::OnRefresh  (line 717, @0x0000000002c704d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura::OnRefresh(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura::OnIntervalThink  (line 722, @0x0000000002c1f660, libserver.so)  // inlines: Vector
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName, GetParticleManager, CDOTA_ParticleManager::SetParticleControl
// strings: "modifier_abyssal_underlord_atrophy_aura_dmg_buff_counter"
void __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura::OnIntervalThink(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax
  float v4; // xmm0_4
  int m_nFXIndex; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  double v7; // [rsp+0h] [rbp-20h]

  Caster = CDOTA_Buff::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(
                     Caster,
                     "modifier_abyssal_underlord_atrophy_aura_dmg_buff_counter",
                     0);
  v4 = 0.0;
  if ( ModifierByName != 0 )
    v4 = (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName, 0.0);
  m_nFXIndex = this->m_nFXIndex;
  *&v7 = LODWORD(v4);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, m_nFXIndex, 2, v7, 0.0);
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect::~CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect  (line 742, @0x0000000002c936e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect::~CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect *const this)
{
  this->_vptr_CDOTA_Buff = &off_4582990;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect::~CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect  (line 742, @0x0000000002c93700, libserver.so)  // inlines: ~CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect::~CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect *const this)
{
  this->_vptr_CDOTA_Buff = &off_4582990;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect::OnCreated  (line 781, @0x0000000002c727f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "bonus_damage_duration", "bonus_damage_from_creep", "bonus_damage_from_hero"
void __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect::OnCreated(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  int LevelSpecialValue; // eax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage_reduction_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_reduction_pct", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->damage_reduction_pct = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_damage_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "bonus_damage_duration", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->bonus_damage_from_creep = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->bonus_damage_duration = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->bonus_damage_from_creep = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_damage_from_creep", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bonus_damage_from_hero", -1, 0);
    this->m_bWasHidden = 0;
    this->bonus_damage_from_hero = LevelSpecialValue;
    return;
  }
LABEL_9:
  this->bonus_damage_from_hero = 0;
  this->m_bWasHidden = 0;
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect::OnRefresh  (line 792, @0x0000000002c72340, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "bonus_damage_duration", "bonus_damage_from_creep", "bonus_damage_from_hero"
void __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect::OnRefresh(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage_reduction_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_reduction_pct", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->damage_reduction_pct = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_damage_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "bonus_damage_duration", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->bonus_damage_from_creep = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->bonus_damage_duration = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->bonus_damage_from_creep = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_damage_from_creep", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->bonus_damage_from_hero = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bonus_damage_from_hero", -1, 0);
    return;
  }
LABEL_9:
  this->bonus_damage_from_hero = 0;
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect::DeclareFunctions  (line 802, @0x0000000002c1b5d0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect::GetModifierBaseDamageOutgoing_Percentage(CModifierParams const&), CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect::DeclareFunctions(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect *const this)
{
  this->m_Functions[34].__pfn = CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect::GetModifierBaseDamageOutgoing_Percentage;
  this->m_Functions[34].__delta = 0;
  this->m_Functions[138].__delta = 0;
  this->m_Functions[138].__pfn = CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect::OnDeath;
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect::GetModifierBaseDamageOutgoing_Percentage  (line 810, @0x0000000002c265d0, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CBaseModelEntity::CanBeSeenByTeam
ModifierVariant_t __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect::GetModifierBaseDamageOutgoing_Percentage(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect *const this,
        const CModifierParams *const params)
{
  int m_Value; // r12d
  CDOTA_BaseNPC *Caster; // rax
  __m128i v6; // xmm0
  ModifierVariant_t result; // 0:rax.16

  m_Value = CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value;
  Caster = CDOTA_Buff::GetCaster(this);
  if ( !CBaseModelEntity::CanBeSeenByTeam(Caster, m_Value)
    || (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x10000000) != 0 )
  {
    return 1uLL;
  }
  result.m_szVal = 0;
  *v6.m128i_i32 = -this->damage_reduction_pct;
  *&result.m_eType = (_mm_cvtsi128_si32(v6) << 32) | 1;
  return result;
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect::OnDeath  (line 830, @0x0000000002c32430, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsRealHero, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::GetParent, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_abyssal_underlord_atrophy_aura", "modifier_abyssal_underlord_atrophy_aura_buff", "modifier_abyssal_underlord_atrophy_aura_hero_buff", "modifier_abyssal_underlord_atrophy_aura_dmg_buff_counter", "modifier_abyssal_underlord_atrophy_aura_creep_buff"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect::OnDeath(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_Effect *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v8; // rbx
  int v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *v12; // r14
  uint32 m_iUnitType; // eax
  float v15; // xmm1_4
  CDOTABaseAbility *v16; // rax
  unsigned int bonus_damage_from_creep; // r15d
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v19; // r13
  int v20; // eax
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v22; // rax
  CDOTA_Buff *v23; // rax
  CDOTA_Buff *v24; // rbx
  _DWORD v25[4]; // [rsp+0h] [rbp-80h] BYREF
  KeyValues kv; // [rsp+10h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-38h]

  v28 = __readfsqword(0x28u);
  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->hunit.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  Caster = CDOTA_Buff::GetCaster(this);
  v8 = Caster;
  if ( Caster != 0 )
  {
    if ( Caster->m_bIsIllusion.m_Value )
    {
      v9 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
      CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(v25, g_pDOTAPlayerResource, v9);
      if ( (v25[0] + 2) > 1 )
      {
        v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v25[0]) >> 9) & 0x3F];
        if ( v10 != 0 )
        {
          v11 = &v10[v25[0] & 0x1FF];
          if ( v11 != 0 && v25[0] == v11->m_EHandle.m_Index )
          {
            v12 = v11->m_pInstance;
            if ( v11->m_pInstance != 0
              && v12->m_bIsDOTANPC
              && CDOTA_BaseNPC::FindModifierByName(v12, "modifier_abyssal_underlord_atrophy_aura", 0) != 0 )
            {
              v8 = v12;
            }
          }
        }
      }
    }
    if ( (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x10000000) == 0
      && m_pInstance != 0
      && m_pInstance == CDOTA_Buff::GetParent(this)
      && (*(m_pInstance->_vptr_IHandleEntity + 436))(m_pInstance) == 0 )
    {
      m_iUnitType = m_pInstance->m_iUnitType;
      if ( (m_iUnitType & 0x10) == 0
        && (m_iUnitType & 0x193) != 0
        && (*(m_pInstance->_vptr_IHandleEntity + 405))(m_pInstance) == 0 )
      {
        KeyValues::KeyValues(&kv, "modifier_abyssal_underlord_atrophy_aura_buff");
        KeyValues::SetFloat(&kv, "duration", v15);
        if ( (m_pInstance->m_iUnitType & 1) == 0 || m_pInstance->m_bIsIllusion.m_Value )
        {
          Ability = CDOTA_Buff::GetAbility(this);
          CDOTA_BaseNPC::AddNewModifier(v8, v8, Ability, "modifier_abyssal_underlord_atrophy_aura_creep_buff", &kv, 0);
          bonus_damage_from_creep = this->bonus_damage_from_creep;
        }
        else
        {
          v16 = CDOTA_Buff::GetAbility(this);
          CDOTA_BaseNPC::AddNewModifier(v8, v8, v16, "modifier_abyssal_underlord_atrophy_aura_hero_buff", &kv, 0);
          bonus_damage_from_creep = this->bonus_damage_from_hero;
        }
        ModifierByName = CDOTA_BaseNPC::FindModifierByName(
                           v8,
                           "modifier_abyssal_underlord_atrophy_aura_dmg_buff_counter",
                           0);
        v19 = ModifierByName;
        if ( ModifierByName != 0 )
        {
          v20 = (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName);
          (*(v19->_vptr_CDOTA_Buff + 28))(v19, bonus_damage_from_creep + v20);
          (*(v19->_vptr_CDOTA_Buff + 63))(v19, 1, this->bonus_damage_duration);
        }
        else
        {
          KeyValues::KeyValues(&kv2, "modifier_abyssal_underlord_atrophy_aura_dmg_buff_counter");
          v22 = CDOTA_Buff::GetAbility(this);
          v23 = CDOTA_BaseNPC::AddNewModifier(
                  v8,
                  v8,
                  v22,
                  "modifier_abyssal_underlord_atrophy_aura_dmg_buff_counter",
                  &kv2,
                  0);
          v24 = v23;
          if ( v23 != 0 )
          {
            (*(v23->_vptr_CDOTA_Buff + 28))(v23, bonus_damage_from_creep);
            (*(v24->_vptr_CDOTA_Buff + 63))(v24, 1, this->bonus_damage_duration);
          }
          KeyValues::~KeyValues(&kv2);
        }
        KeyValues::~KeyValues(&kv);
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff::~CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff  (line 899, @0x0000000002c93690, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff::~CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4582CB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff::~CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff  (line 899, @0x0000000002c936b0, libserver.so)  // inlines: ~CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff::~CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4582CB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff::IsHidden  (line 905, @0x0000000002c86a60, libserver.so)
bool __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff::IsHidden(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff *const this)
{
  return 1;
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff::GetAttributes  (line 909, @0x0000000002c86a70, libserver.so)
int __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff::GetAttributes(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff *const this)
{
  return 2;
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff::IsPurgable  (line 910, @0x0000000002c86a80, libserver.so)
bool __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff::IsPurgable(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff *const this)
{
  return 0;
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff::OnCreated  (line 920, @0x0000000002c706b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_damage_from_hero"
void __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff::OnCreated(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_damage_from_hero = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                     Ability,
                                     "bonus_damage_from_hero",
                                     -1,
                                     0);
  else
    this->bonus_damage_from_hero = 0;
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff::DeclareFunctions  (line 927, @0x0000000002c1b610, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff::DeclareFunctions(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff::GetModifierPreAttack_BonusDamage  (line 934, @0x0000000002c1b630, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage_from_hero;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff::OnDurationExpired  (line 939, @0x0000000002c1f380, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_abyssal_underlord_atrophy_aura_dmg_buff_counter"
void __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff::OnDurationExpired(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_HeroDmgBuff *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v4; // rbx
  void (__fastcall *v5)(CDOTA_Buff *, _QWORD); // r13
  int v6; // eax

  Caster = CDOTA_Buff::GetCaster(this);
  if ( Caster != 0 )
  {
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(
                       Caster,
                       "modifier_abyssal_underlord_atrophy_aura_dmg_buff_counter",
                       0);
    v4 = ModifierByName;
    if ( ModifierByName != 0 && (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName) > 0 )
    {
      v5 = *(v4->_vptr_CDOTA_Buff + 28);
      v6 = (*(v4->_vptr_CDOTA_Buff + 27))(v4);
      v5(v4, (v6 - this->bonus_damage_from_hero));
    }
  }
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff::~CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff  (line 959, @0x0000000002c93640, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff::~CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4582FD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff::~CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff  (line 959, @0x0000000002c93660, libserver.so)  // inlines: ~CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff::~CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4582FD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff::IsHidden  (line 965, @0x0000000002c86a90, libserver.so)
bool __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff::IsHidden(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff *const this)
{
  return 1;
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff::GetAttributes  (line 969, @0x0000000002c86aa0, libserver.so)
int __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff::GetAttributes(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff *const this)
{
  return 2;
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff::IsPurgable  (line 970, @0x0000000002c86ab0, libserver.so)
bool __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff::IsPurgable(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff *const this)
{
  return 0;
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff::OnCreated  (line 981, @0x0000000002c70470, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_damage_from_creep"
void __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff::OnCreated(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_damage_from_creep = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                      Ability,
                                      "bonus_damage_from_creep",
                                      -1,
                                      0);
  else
    this->bonus_damage_from_creep = 0;
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff::DeclareFunctions  (line 988, @0x0000000002c1b650, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff::DeclareFunctions(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff::GetModifierPreAttack_BonusDamage  (line 995, @0x0000000002c1b670, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage_from_creep;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff::OnDurationExpired  (line 1000, @0x0000000002c1f410, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_abyssal_underlord_atrophy_aura_dmg_buff_counter"
void __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff::OnDurationExpired(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_CreepDmgBuff *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v4; // rbx
  void (__fastcall *v5)(CDOTA_Buff *, _QWORD); // r13
  int v6; // eax

  Caster = CDOTA_Buff::GetCaster(this);
  if ( Caster != 0 )
  {
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(
                       Caster,
                       "modifier_abyssal_underlord_atrophy_aura_dmg_buff_counter",
                       0);
    v4 = ModifierByName;
    if ( ModifierByName != 0 && (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName) > 0 )
    {
      v5 = *(v4->_vptr_CDOTA_Buff + 28);
      v6 = (*(v4->_vptr_CDOTA_Buff + 27))(v4);
      v5(v4, (v6 - this->bonus_damage_from_creep));
    }
  }
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter::~CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter  (line 1019, @0x0000000002c935f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter::~CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter *const this)
{
  this->_vptr_CDOTA_Buff = &off_45832F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter::~CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter  (line 1019, @0x0000000002c93610, libserver.so)  // inlines: ~CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter::~CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter *const this)
{
  this->_vptr_CDOTA_Buff = &off_45832F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter::IsPurgable  (line 1024, @0x0000000002c86ac0, libserver.so)
bool __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter::IsPurgable(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter *const this)
{
  return 0;
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter::IsHidden  (line 1025, @0x0000000002c957a0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_abyssal_underlord_atrophy_aura_hero_buff", "modifier_abyssal_underlord_atrophy_aura_creep_buff"
bool __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter::IsHidden(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v4; // rax

  if ( (*(this->_vptr_CDOTA_Buff + 27))(this) > 0 )
    return 0;
  Parent = CDOTA_Buff::GetParent(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_abyssal_underlord_atrophy_aura_hero_buff", 0) != 0 )
    return 0;
  v4 = CDOTA_Buff::GetParent(this);
  return CDOTA_BaseNPC::FindModifierByName(v4, "modifier_abyssal_underlord_atrophy_aura_creep_buff", 0) == 0;
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter::DeclareFunctions  (line 1050, @0x0000000002c1b690, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter::OnTooltip(CModifierParams const&)
void __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter::DeclareFunctions(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter *const this)
{
  this->m_Functions[151].__pfn = CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter::OnTooltip;
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter::OnTooltip  (line 1056, @0x0000000002c1b6b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter::OnTooltip(
        CDOTA_Modifier_AbyssalUnderlord_AtrophyAura_DmgBuffCounter *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  int v3; // eax
  ModifierVariant_t result; // 0:rax.16

  v2 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v2.m128i_i32 = v3;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_AbyssalUnderlord_DarkRift::~CDOTA_Ability_AbyssalUnderlord_DarkRift  (line 1065, @0x0000000002c97c00, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_AbyssalUnderlord_DarkRift::~CDOTA_Ability_AbyssalUnderlord_DarkRift(
        CDOTA_Ability_AbyssalUnderlord_DarkRift *const this)
{
  this->_vptr_IHandleEntity = &off_4583650;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_AbyssalUnderlord_DarkRift::~CDOTA_Ability_AbyssalUnderlord_DarkRift  (line 1065, @0x0000000002c97c20, libserver.so)  // inlines: ~CDOTA_Ability_AbyssalUnderlord_DarkRift
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_AbyssalUnderlord_DarkRift::~CDOTA_Ability_AbyssalUnderlord_DarkRift(
        CDOTA_Ability_AbyssalUnderlord_DarkRift *const this)
{
  this->_vptr_IHandleEntity = &off_4583650;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_AbyssalUnderlord_DarkRift::Schema_DynamicBinding  (line 1067, @0x0000000002c86ad0, libserver.so)
// globals: CDOTA_Ability_AbyssalUnderlord_DarkRift::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_AbyssalUnderlord_DarkRift::Schema_DynamicBinding(
        const CDOTA_Ability_AbyssalUnderlord_DarkRift *const this)
{
  return CDOTA_Ability_AbyssalUnderlord_DarkRift::s_pSchemaBinding;
}


// CDOTA_Ability_AbyssalUnderlord_DarkRift::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1067, @0x0000000002c86ae0, libserver.so)
// globals: CDOTA_Ability_AbyssalUnderlord_DarkRift::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_AbyssalUnderlord_DarkRift::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_AbyssalUnderlord_DarkRift::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_AbyssalUnderlord_DarkRift::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_AbyssalUnderlord_DarkRift::CEntityInstanceEntityClass::DestructInstance  (line 1067, @0x0000000002c86af0, libserver.so)  // inlines: Destruct<CDOTA_Ability_AbyssalUnderlord_DarkRift>
void __fastcall CDOTA_Ability_AbyssalUnderlord_DarkRift::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_AbyssalUnderlord_DarkRift::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_AbyssalUnderlord_DarkRift::CEntityInstanceEntityClass::FreeInstance  (line 1067, @0x0000000002c86b10, libserver.so)
void __fastcall CDOTA_Ability_AbyssalUnderlord_DarkRift::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_AbyssalUnderlord_DarkRift::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_AbyssalUnderlord_DarkRift::CEntityInstanceEntityClass::CanAllocate  (line 1067, @0x0000000002c86b30, libserver.so)
bool __fastcall CDOTA_Ability_AbyssalUnderlord_DarkRift::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_AbyssalUnderlord_DarkRift::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_AbyssalUnderlord_DarkRift::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1067, @0x0000000002c86b40, libserver.so)
// globals: CDOTA_Ability_AbyssalUnderlord_DarkRift::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_AbyssalUnderlord_DarkRift::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_AbyssalUnderlord_DarkRift::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_AbyssalUnderlord_DarkRift::s_pSchemaBinding;
}


// CDOTA_Ability_AbyssalUnderlord_DarkRift::CEntityInstanceEntityClass::AllocateInstance  (line 1067, @0x0000000002c8f0a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_AbyssalUnderlord_DarkRift::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_AbyssalUnderlord_DarkRift::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_AbyssalUnderlord_DarkRift::CEntityInstanceEntityClass::ConstructInstance  (line 1067, @0x0000000002c94510, libserver.so)  // inlines: CDOTA_Ability_AbyssalUnderlord_DarkRift, CEntityHandle, CHandle, Construct<CDOTA_Ability_AbyssalUnderlord_DarkRift>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_AbyssalUnderlord_DarkRift::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_AbyssalUnderlord_DarkRift::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 229) = -1;
    *p = &off_4583650;
  }
  return p;
}


// CDOTA_Ability_AbyssalUnderlord_DarkRift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1067, @0x0000000002ca1670, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_AbyssalUnderlord_DarkRift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_AbyssalUnderlord_DarkRift::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_AbyssalUnderlord_DarkRift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1067, @0x0000000002ca1690, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_AbyssalUnderlord_DarkRift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_AbyssalUnderlord_DarkRift::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_AbyssalUnderlord_DarkRift::GetEntityClassInternal  (line 1067, @0x0000000002cb8580, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "abyssal_underlord_dark_rift", "CDOTA_Ability_AbyssalUnderlord_DarkRift"
// globals: `guard variable for'CDOTA_Ability_AbyssalUnderlord_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_DarkRiftClass, CDOTA_Ability_AbyssalUnderlord_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_DarkRiftClass, __dso_handle, CDOTA_Ability_AbyssalUnderlord_DarkRift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_AbyssalUnderlord_DarkRift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_DarkRiftClassInfo, CDOTA_Ability_AbyssalUnderlord_DarkRift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_DarkRiftClassInfo
CEntityClass *__cdecl CDOTA_Ability_AbyssalUnderlord_DarkRift::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_AbyssalUnderlord_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_DarkRiftClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_AbyssalUnderlord_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_DarkRiftClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_AbyssalUnderlord_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_DarkRiftClass);
    CDOTA_Ability_AbyssalUnderlord_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_DarkRiftClass._vptr_CEntityClass = off_45835D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_AbyssalUnderlord_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_DarkRiftClass);
    __cxa_atexit(
      CDOTA_Ability_AbyssalUnderlord_DarkRift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_AbyssalUnderlord_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_DarkRiftClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_AbyssalUnderlord_DarkRiftClass != 0 )
    return &CDOTA_Ability_AbyssalUnderlord_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_DarkRiftClass;
  if ( `guard variable for'CDOTA_Ability_AbyssalUnderlord_DarkRift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_DarkRiftClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_AbyssalUnderlord_DarkRift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_DarkRiftClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_AbyssalUnderlord_DarkRift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_DarkRiftClassInfo,
      "CDOTA_Ability_AbyssalUnderlord_DarkRift",
      "abyssal_underlord_dark_rift",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_AbyssalUnderlord_DarkRift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_DarkRiftClassInfo);
  }
  CDOTA_Ability_AbyssalUnderlord_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_DarkRiftClass.m_pClassInfo = &CDOTA_Ability_AbyssalUnderlord_DarkRift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_DarkRiftClassInfo;
  CDOTA_Ability_AbyssalUnderlord_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_DarkRiftClass.m_pBaseClassInfo = CDOTA_Ability_AbyssalUnderlord_DarkRift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_DarkRiftClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_AbyssalUnderlord_DarkRiftClass = &CDOTA_Ability_AbyssalUnderlord_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_DarkRiftClass;
  CDOTA_Ability_AbyssalUnderlord_DarkRift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_DarkRiftClassInfo.m_pClass = &CDOTA_Ability_AbyssalUnderlord_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_DarkRiftClass;
  CDOTA_Ability_AbyssalUnderlord_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_DarkRiftClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_AbyssalUnderlord_DarkRiftClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_AbyssalUnderlord_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_DarkRiftClass;
}


// CDOTA_Ability_AbyssalUnderlord_DarkRift::GetAssociatedSecondaryAbilities  (line 1073, @0x0000000002c86b50, libserver.so)
// strings: "abyssal_underlord_cancel_dark_rift"
const char *__fastcall CDOTA_Ability_AbyssalUnderlord_DarkRift::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_AbyssalUnderlord_DarkRift *const this)
{
  return "abyssal_underlord_cancel_dark_rift";
}


// CDOTA_Ability_AbyssalUnderlord_DarkRift::YouForgotToImplementOrDeclareServerClass  (line 1091, @0x0000000002c1b6e0, libserver.so)
int __fastcall CDOTA_Ability_AbyssalUnderlord_DarkRift::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_AbyssalUnderlord_DarkRift *const this)
{
  return 0;
}


// CDOTA_Ability_AbyssalUnderlord_DarkRift::GetServerClass  (line 1091, @0x0000000002c351f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_AbyssalUnderlord_DarkRift::GetServerClass(
        CDOTA_Ability_AbyssalUnderlord_DarkRift *const this)
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


// CDOTA_Ability_AbyssalUnderlord_DarkRift::OnSpellStart  (line 1101, @0x0000000002c57f80, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCursorPosition, CDOTABaseAbility::GetCaster, FindUnitsInRadius, SortEHANDLEVectorByLocation, DOTA_EmitSound, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::SwapAbilities, CBaseEntity::GetAbsOrigin, MinimapEvent (18 total)
// strings: "Hero_AbyssalUnderlord.DarkRift.Cast", "modifier_abyssal_underlord_dark_rift", "abyssal_underlord_cancel_dark_rift", "abyssal_underlord_dark_rift"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_AbyssalUnderlord_DarkRift::OnSpellStart(
        CDOTA_Ability_AbyssalUnderlord_DarkRift *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  __int64 v4; // r14
  CConcreteEntityList *v5; // rcx
  CHandle<CBaseEntity> *v6; // rdx
  uint32 m_Index; // eax
  __int16 v8; // si
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *m_pInstance; // rdx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CDOTA_BaseNPC *v14; // r12
  float v15; // xmm1_4
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  int teleport_delay; // r15d
  int x; // r12d
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC *pEventEntity; // [rsp+20h] [rbp-90h]
  int iY; // [rsp+2Ch] [rbp-84h]
  Vector vTargetLocation; // [rsp+30h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+78h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  this->teleport_delay = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "teleport_delay", -1, 0);
  entities.m_Size = 0;
  vTargetLocation = CDOTABaseAbility::GetCursorPosition(this);
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(Caster->m_iTeamNum.m_Value, &vTargetLocation, 0, -1.0, &entities, 1, 7, 80, 0, 0);
  SortEHANDLEVectorByLocation(&entities, &vTargetLocation, 0);
  v3 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(8, "Hero_AbyssalUnderlord.DarkRift.Cast", v3);
  v4 = 0;
  if ( entities.m_Size > 0 )
  {
    while ( 1 )
    {
      v5 = CEntityHandle::gm_pEntityList;
      v6 = &entities.m_Memory.m_pMemory[v4];
      m_Index = v6->m_Index;
      if ( v6->m_Index + 2 > 1 )
      {
        v8 = v6->m_Index;
        v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v6->m_Index) >> 9) & 0x3F];
        if ( v9 != 0 )
        {
          v10 = &v9[v8 & 0x1FF];
          if ( v10 != 0 && m_Index == v10->m_EHandle.m_Index )
          {
            m_pInstance = v10->m_pInstance;
            if ( m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
            {
              this->m_hTeleportTarget.m_Index = m_Index;
              v12 = v5->m_pIdentityChunks[(m_Index >> 9) & 0x3F];
              if ( v12 != 0 )
              {
                v13 = &v12[m_Index & 0x1FF];
                if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
                {
                  v14 = v13->m_pInstance;
                  if ( v13->m_pInstance != 0 && v14->m_bIsDOTANPC && CDOTABaseAbility::GetCaster(this) != v14 )
                    break;
                }
              }
            }
          }
        }
      }
      if ( ++v4 >= entities.m_Size )
        goto LABEL_19;
    }
    KeyValues::KeyValues(&kv, "modifier_abyssal_underlord_dark_rift");
    KeyValues::SetFloat(&kv, "duration", v15);
    v16 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v14, v16, this, "modifier_abyssal_underlord_dark_rift", &kv, 0);
    v17 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::SwapAbilities(v17, "abyssal_underlord_dark_rift", "abyssal_underlord_cancel_dark_rift", 0, 1);
    teleport_delay = this->teleport_delay;
    iY = CBaseEntity::GetAbsOrigin(v14)->y;
    x = CBaseEntity::GetAbsOrigin(v14)->x;
    pEventEntity = CDOTABaseAbility::GetCaster(this);
    v20 = CDOTABaseAbility::GetCaster(this);
    MinimapEvent(v20->m_iTeamNum.m_Value, pEventEntity, x, iY, 32, teleport_delay);
    KeyValues::~KeyValues(&kv);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
  else
  {
LABEL_19:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
      if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    }
  }
}


// CDOTA_Ability_AbyssalUnderlord_DarkRift::OnUpgrade  (line 1142, @0x0000000002c21800, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "abyssal_underlord_cancel_dark_rift"
void __fastcall CDOTA_Ability_AbyssalUnderlord_DarkRift::OnUpgrade(CDOTA_Ability_AbyssalUnderlord_DarkRift *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "abyssal_underlord_cancel_dark_rift", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value != 1 )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_AbyssalUnderlord_DarkRift::CastFilterResult  (line 1156, @0x0000000002c26340, libserver.so)  // inlines: IsHero
// calls: CDOTABaseAbility::GetCaster, UnitFilter
int __fastcall CDOTA_Ability_AbyssalUnderlord_DarkRift::CastFilterResult(
        CDOTA_Ability_AbyssalUnderlord_DarkRift *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  int result; // eax

  Caster = CDOTABaseAbility::GetCaster(this);
  result = UnitFilter(pTarget, 1, 7, 80, Caster->m_iTeamNum.m_Value);
  if ( result == 0 )
    return -(pTarget->m_iUnitType & 1) & 3;
  return result;
}


// CDOTA_Modifier_AbyssalUnderlord_DarkRift::~CDOTA_Modifier_AbyssalUnderlord_DarkRift  (line 1250, @0x0000000002c935a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_AbyssalUnderlord_DarkRift::~CDOTA_Modifier_AbyssalUnderlord_DarkRift(
        CDOTA_Modifier_AbyssalUnderlord_DarkRift *const this)
{
  this->_vptr_CDOTA_Buff = &off_4584110;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_AbyssalUnderlord_DarkRift::~CDOTA_Modifier_AbyssalUnderlord_DarkRift  (line 1250, @0x0000000002c935c0, libserver.so)  // inlines: ~CDOTA_Modifier_AbyssalUnderlord_DarkRift
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_AbyssalUnderlord_DarkRift::~CDOTA_Modifier_AbyssalUnderlord_DarkRift(
        CDOTA_Modifier_AbyssalUnderlord_DarkRift *const this)
{
  this->_vptr_CDOTA_Buff = &off_4584110;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_AbyssalUnderlord_DarkRift::IsPurgable  (line 1263, @0x0000000002c86b60, libserver.so)
bool __fastcall CDOTA_Modifier_AbyssalUnderlord_DarkRift::IsPurgable(
        CDOTA_Modifier_AbyssalUnderlord_DarkRift *const this)
{
  return 0;
}


// CDOTA_Modifier_AbyssalUnderlord_DarkRift::OnCreated  (line 1279, @0x0000000002c5ae70, libserver.so)  // inlines: SetAttributes, Vector
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::AddParticle, CDOTA_Buff::CreateBuffParticleEffect, CDOTA_BaseNPC::UnitEmitSound
// strings: "particles/units/heroes/heroes_underlord/abyssal_underlord_darkrift_target.vpcf", "attach_hitloc", "particles/units/heroes/heroes_underlord/abbysal_underlord_darkrift_ambient.vpcf", "Hero_AbyssalUnderlord.DarkRift.Target"
void __fastcall CDOTA_Modifier_AbyssalUnderlord_DarkRift::OnCreated(
        CDOTA_Modifier_AbyssalUnderlord_DarkRift *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v9; // rax
  int m_nfxTargetTp; // r13d
  const CBaseAnimating *v11; // r14
  CDOTA_ParticleManager *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  int v14; // r13d
  const CBaseAnimating *v15; // r14
  CDOTA_ParticleManager *v16; // rax
  __int64 v17; // r12
  int v18; // r13d
  float v19; // xmm0_4
  CDOTA_ParticleManager *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  const Vector *v23; // r13
  CDOTA_BaseNPC *v24; // rax
  const CBaseAnimating *v25; // r15
  CDOTA_ParticleManager *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  const CBaseAnimating *v28; // r14
  CDOTA_ParticleManager *v29; // rax
  CDOTA_ParticleManager *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-44h]
  double v33; // [rsp+10h] [rbp-40h]
  float v34; // [rsp+18h] [rbp-38h]
  Vector v35; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->radius, "radius");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->duration, "duration");
  this->m_iAttributes |= 2u;
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  this->m_nfxTargetTp = CDOTA_ParticleManager::CreateParticle(
                          ParticleManager,
                          "particles/units/heroes/heroes_underlord/abyssal_underlord_darkrift_target.vpcf",
                          7,
                          Parent,
                          0,
                          0);
  Caster = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  v9 = CDOTA_Buff::GetCaster(this);
  m_nfxTargetTp = this->m_nfxTargetTp;
  v11 = v9;
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v12, m_nfxTargetTp, 1, v11, 5, "attach_hitloc", *AbsOrigin, 1);
  v13 = CDOTA_Buff::GetParent(this);
  v14 = this->m_nfxTargetTp;
  v15 = v13;
  v16 = GetParticleManager();
  v17 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(v16, v14, 6, v15, 1, 0, vec3_invalid, 1);
  v18 = this->m_nfxTargetTp;
  v19 = this->duration * 0.9;
  *&v33 = v19;
  *(&v33 + 1) = v19;
  v34 = v19;
  v20 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v20, v18, 10, v33, v34);
  CDOTA_Buff::AddParticle(this, this->m_nfxTargetTp, 0, 0, -1, 0, 0);
  v21 = CDOTA_Buff::GetCaster(this);
  this->m_nfxAmbientFx = CDOTA_Buff::CreateBuffParticleEffect(
                           this,
                           "particles/units/heroes/heroes_underlord/abbysal_underlord_darkrift_ambient.vpcf",
                           2,
                           v21,
                           0);
  v22 = CDOTA_Buff::GetCaster(this);
  v23 = CBaseEntity::GetAbsOrigin(v22);
  v24 = CDOTA_Buff::GetCaster(this);
  LODWORD(v15) = this->m_nfxAmbientFx;
  v25 = v24;
  v26 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v26, v15, 0, v25, 5, "attach_hitloc", *v23, 1);
  v27 = CDOTA_Buff::GetCaster(this);
  LODWORD(v23) = this->m_nfxAmbientFx;
  v28 = v27;
  v29 = GetParticleManager();
  *&v35.x = v17;
  v35.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v29, v23, 2, v28, 1, 0, v35, 1);
  LODWORD(v17) = this->m_nfxAmbientFx;
  *(&v33 + 1) = this->duration;
  *&v33 = this->radius;
  v30 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v30, v17, 1, v33, *(&v33 + 1));
  v31 = CDOTA_Buff::GetParent(this);
  this->m_nRiftTargetSound = CDOTA_BaseNPC::UnitEmitSound(v31, "Hero_AbyssalUnderlord.DarkRift.Target", 0.0, 0, 0);
}


// CDOTA_Modifier_AbyssalUnderlord_DarkRift::OnDestroy  (line 1303, @0x0000000002c393f0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::DestroyParticleEffect, DOTA_EmitSound, CBaseEntity::StopSound, CSoundOpGameSystem::StopSoundEvent, CDOTA_BaseNPC::SwapAbilities
// strings: "Hero_AbyssalUnderlord.DarkRift.Cancel", "Hero_AbyssalUnderlord.DarkRift.Cast", "abyssal_underlord_cancel_dark_rift", "abyssal_underlord_dark_rift"
void __fastcall CDOTA_Modifier_AbyssalUnderlord_DarkRift::OnDestroy(
        CDOTA_Modifier_AbyssalUnderlord_DarkRift *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  int m_nfxAmbientFx; // r13d
  const Vector *v5; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax

  if ( this->m_nfxAmbientFx != -1 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
    m_nfxAmbientFx = this->m_nfxAmbientFx;
    v5 = AbsOrigin;
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(ParticleManager, m_nfxAmbientFx, 5, *&v5->x, v5->z);
    LODWORD(v5) = this->m_nfxAmbientFx;
    v7 = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(v7, v5, 1);
    this->m_nfxAmbientFx = -1;
  }
  v8 = CDOTA_Buff::GetCaster(this);
  DOTA_EmitSound(10, "Hero_AbyssalUnderlord.DarkRift.Cancel", v8);
  v9 = CDOTA_Buff::GetCaster(this);
  CBaseEntity::StopSound(v9, "Hero_AbyssalUnderlord.DarkRift.Cast");
  CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, &this->m_nRiftTargetSound);
  v10 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::SwapAbilities(v10, "abyssal_underlord_dark_rift", "abyssal_underlord_cancel_dark_rift", 1, 0);
}


// CDOTA_Modifier_AbyssalUnderlord_DarkRift::OnDurationExpired  (line 1327, @0x0000000002c4ea10, libserver.so)  // inlines: CBroadcastRecipientFilter, CEntityHandle, CHandle, CReliableBroadcastRecipientFilter, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, InValidate, IndexToIdentity, IsValid, LookupEntity, Set, StopSoundEvent, ToDOTABaseNPC, VectorAdd, operator CBaseEntity*, operator CEntityInstance*, operator+, operator[], ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter, ~CUtlVector
// calls: CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy, DOTA_EmitSoundLocation, FindUnitsInRadius, RandomFloat, CDOTA_Buff::GetParent, FindClearSpaceForUnit (22 total)
// strings: "modifier_life_stealer_assimilate", "Hero_AbyssalUnderlord.DarkRift.Aftershock", "modifier_life_stealer_infest", "Hero_AbyssalUnderlord.DarkRift.Complete"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_AbyssalUnderlord_DarkRift::OnDurationExpired(
        CDOTA_Modifier_AbyssalUnderlord_DarkRift *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  int m_nfxAmbientFx; // r12d
  const Vector *v5; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  const Vector *v10; // rax
  __m128i v11; // xmm3
  float v12; // r12d
  CDOTA_BaseNPC *v13; // rax
  const Vector *v14; // rbx
  CDOTA_BaseNPC *v15; // rax
  __int64 v16; // rbx
  int v17; // r12d
  CHandle<CBaseEntity> *v18; // rdx
  uint32 m_Index; // eax
  __int16 v20; // cx
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_BaseNPC *Parent; // rax
  const Vector *v25; // rax
  vec_t v26; // xmm2_4
  CEntityIdentity *m_pEntity; // rax
  int v28; // edx
  __int16 v29; // cx
  CDOTA_BaseNPC *v30; // rax
  CSoundOpGameSystem *v31; // r12
  float v32; // [rsp+28h] [rbp-1B8h]
  float v33; // [rsp+2Ch] [rbp-1B4h]
  EHANDLE hTarget; // [rsp+30h] [rbp-1B0h] BYREF
  Vector vPos; // [rsp+40h] [rbp-1A0h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+50h] [rbp-190h] BYREF
  CRecipientFilter v37; // [rsp+70h] [rbp-170h] BYREF
  unsigned __int64 v38; // [rsp+1A8h] [rbp-38h]
  Vector v39; // 0:xmm0_8.8,8:xmm1_4.4

  v38 = __readfsqword(0x28u);
  if ( this->m_nfxAmbientFx != -1 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
    m_nfxAmbientFx = this->m_nfxAmbientFx;
    v5 = AbsOrigin;
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(ParticleManager, m_nfxAmbientFx, 5, *&v5->x, v5->z);
    LODWORD(v5) = this->m_nfxAmbientFx;
    v7 = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(v7, v5, 0);
    this->m_nfxAmbientFx = -1;
  }
  v8 = CDOTA_Buff::GetCaster(this);
  if ( CDOTA_BaseNPC::FindModifierByName(v8, "modifier_life_stealer_assimilate", 0) != 0 )
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
  else
  {
    v9 = CDOTA_Buff::GetCaster(this);
    v10 = CBaseEntity::GetAbsOrigin(v9);
    DOTA_EmitSoundLocation(v10, "Hero_AbyssalUnderlord.DarkRift.Aftershock", 1);
    *v11.m128i_i32 = this->radius;
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    v12 = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
    v13 = CDOTA_Buff::GetCaster(this);
    v14 = CBaseEntity::GetAbsOrigin(v13);
    v15 = CDOTA_Buff::GetCaster(this);
    FindUnitsInRadius(v15->m_iTeamNum.m_Value, v14, 0, v12, &entities, 1, 1, 262208, 0, 0);
    if ( entities.m_Size > 0 )
    {
      v16 = 0;
      v17 = 0;
      do
      {
        v18 = &entities.m_Memory.m_pMemory[v16];
        m_Index = entities.m_Memory.m_pMemory[v16].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v20 = v18->m_Index;
          v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v18->m_Index) >> 9) & 0x3F];
          if ( v21 != 0 )
          {
            v22 = &v21[v20 & 0x1FF];
            if ( v22 != 0 && m_Index == v22->m_EHandle.m_Index )
            {
              m_pInstance = v22->m_pInstance;
              if ( v22->m_pInstance != 0
                && m_pInstance->m_bIsDOTANPC
                && (*(m_pInstance->_vptr_IHandleEntity + 408))(v22->m_pInstance) != 0
                && CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_life_stealer_infest", 0) == 0 )
              {
                v32 = RandomFloat(-200.0, 200.0);
                v33 = RandomFloat(-200.0, 200.0);
                Parent = CDOTA_Buff::GetParent(this);
                v25 = CBaseEntity::GetAbsOrigin(Parent);
                v26 = v33 + v25->x;
                v39.z = v25->z + 0.0;
                vPos.y = v32 + v25->y;
                vPos.x = v26;
                *&v39.x = *&vPos.x;
                vPos.z = v39.z;
                FindClearSpaceForUnit(m_pInstance, v39, 1);
                hTarget.m_Index = -1;
                m_pEntity = m_pInstance->m_pEntity;
                if ( m_pEntity != 0 )
                {
                  v28 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                  v29 = 0x7FFF;
                  if ( m_pEntity->m_EHandle.m_Index != -1 )
                    v29 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(hTarget.m_Index) = v29 | hTarget.m_Index & 0x8000;
                  hTarget.m_Index = (v28 << 15) | hTarget.m_Index & 0x7FFF;
                }
                CDOTA_ProjectileManager::ProjectileDodge(&g_DOTAProjectileManager, &hTarget, 0);
              }
            }
          }
        }
        ++v17;
        ++v16;
      }
      while ( entities.m_Size > v17 );
    }
    v30 = CDOTA_Buff::GetCaster(this);
    DOTA_EmitSound(8, "Hero_AbyssalUnderlord.DarkRift.Complete", v30);
    v31 = g_pSoundOpGameSystem;
    if ( this->m_nRiftTargetSound.m_nGuid.m_Data != 0 )
    {
      CRecipientFilter::CRecipientFilter(&v37);
      v37._vptr_IRecipientFilter = &off_3FB63F0;
      CRecipientFilter::AddAllPlayers(&v37);
      v37._vptr_IRecipientFilter = &off_3FCB130;
      CRecipientFilter::MakeReliable(&v37);
      CSoundOpGameSystem::StopSoundEvent(v31, &v37, this->m_nRiftTargetSound);
      v37._vptr_IRecipientFilter = &off_3FB63F0;
      CRecipientFilter::~CRecipientFilter(&v37);
      this->m_nRiftTargetSound.m_nGuid.m_Data = 0;
      this->m_nRiftTargetSound.m_hStackHash = -1;
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
}


// CDOTA_Modifier_AbyssalUnderlord_DarkRift::DeclareFunctions  (line 1368, @0x0000000002c1b6f0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_AbyssalUnderlord_DarkRift::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_AbyssalUnderlord_DarkRift::DeclareFunctions(
        CDOTA_Modifier_AbyssalUnderlord_DarkRift *const this)
{
  this->m_Functions[138].__pfn = CDOTA_Modifier_AbyssalUnderlord_DarkRift::OnDeath;
  this->m_Functions[138].__delta = 0;
}


// CDOTA_Modifier_AbyssalUnderlord_DarkRift::OnDeath  (line 1375, @0x0000000002c2da70, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_AbyssalUnderlord_DarkRift::OnDeath(
        CDOTA_Modifier_AbyssalUnderlord_DarkRift *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    return 1uLL;
  v5 = &v4[params->hunit.m_Index & 0x1FF];
  if ( v5 == 0 )
    return 1uLL;
  if ( m_Index != v5->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0
    || !m_pInstance->m_bIsDOTANPC
    || CDOTA_Buff::GetParent(this) != m_pInstance && CDOTA_Buff::GetCaster(this) != m_pInstance )
  {
    return 1uLL;
  }
  CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


// CDOTA_Modifier_AbyssalUnderlord_DarkRift::CheckState  (line 1390, @0x0000000002c1b710, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_AbyssalUnderlord_DarkRift::CheckState(
        CDOTA_Modifier_AbyssalUnderlord_DarkRift *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x400000uLL;
  buffState->m_nDisabledStateMask &= ~0x400000uLL;
}


// CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::~CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift  (line 1402, @0x0000000002c97c50, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::~CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift(
        CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift *const this)
{
  this->_vptr_IHandleEntity = &off_4584470;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::~CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift  (line 1402, @0x0000000002c97c70, libserver.so)  // inlines: ~CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::~CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift(
        CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift *const this)
{
  this->_vptr_IHandleEntity = &off_4584470;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::Schema_DynamicBinding  (line 1404, @0x0000000002c86b70, libserver.so)
// globals: CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::Schema_DynamicBinding(
        const CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift *const this)
{
  return CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::s_pSchemaBinding;
}


// CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1404, @0x0000000002c86b80, libserver.so)
// globals: CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::CEntityInstanceEntityClass::DestructInstance  (line 1404, @0x0000000002c86b90, libserver.so)  // inlines: Destruct<CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift>
void __fastcall CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::CEntityInstanceEntityClass::FreeInstance  (line 1404, @0x0000000002c86bb0, libserver.so)
void __fastcall CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::CEntityInstanceEntityClass::CanAllocate  (line 1404, @0x0000000002c86bd0, libserver.so)
bool __fastcall CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1404, @0x0000000002c86be0, libserver.so)
// globals: CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::s_pSchemaBinding;
}


// CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::CEntityInstanceEntityClass::AllocateInstance  (line 1404, @0x0000000002c8f0e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::CEntityInstanceEntityClass::ConstructInstance  (line 1404, @0x0000000002c94550, libserver.so)  // inlines: CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift, Construct<CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4584470;
  }
  return p;
}


// CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1404, @0x0000000002ca16c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1404, @0x0000000002ca16e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal  (line 1404, @0x0000000002cc6a80, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "abyssal_underlord_cancel_dark_rift", "CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift"
// globals: `guard variable for'CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass, CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClassInfo, CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClassInfo
CEntityClass *__cdecl CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass) != 0 )
  {
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_pClassInfo = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_flags = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_pInputs = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_nInputCount = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_pOutputs = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_nOutputCount = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_pGameClass = 0;
    CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass._vptr_CEntityClass = off_45843F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass);
    __cxa_atexit(
      CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass != 0 )
    return &CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass;
  if ( `guard variable for'CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClassInfo,
      "CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift",
      "abyssal_underlord_cancel_dark_rift",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClassInfo);
  }
  CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_pClassInfo = &CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClassInfo;
  CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_pBaseClassInfo = CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass = &CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass;
  CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClassInfo.m_pClass = &CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass;
  CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AbyssalUnderlord_Cancel_DarkRiftClass;
}


// CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::ProcsMagicStick  (line 1408, @0x0000000002c86bf0, libserver.so)
bool __fastcall CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::ProcsMagicStick(
        CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift *const this)
{
  return 0;
}


// CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetAssociatedPrimaryAbilities  (line 1411, @0x0000000002c86c00, libserver.so)
// strings: "abyssal_underlord_dark_rift"
const char *__fastcall CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetAssociatedPrimaryAbilities(
        CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift *const this)
{
  return "abyssal_underlord_dark_rift";
}


// CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::IsHiddenWhenStolen  (line 1412, @0x0000000002c86c10, libserver.so)
bool __fastcall CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::IsHiddenWhenStolen(
        CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift *const this)
{
  return 1;
}


// CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetAbilityTextureName  (line 1414, @0x0000000002c86c20, libserver.so)
// strings: "abyssal_underlord_dark_rift"
const char *__fastcall CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::GetAbilityTextureName(
        CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift *const this,
        bool bAllowEconOverride)
{
  return "abyssal_underlord_dark_rift";
}


// CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::OnSpellStart  (line 1421, @0x0000000002c2ea40, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeleportUnit, IndexToIdentity, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, __dynamic_cast, CDOTA_BaseNPC::StartGesture, DOTA_EmitSound, CBaseEntity::StopSound, CDOTA_BaseNPC::RemoveModifierByName
// strings: "abyssal_underlord_dark_rift", "Hero_AbyssalUnderlord.DarkRift.Cancel", "Hero_AbyssalUnderlord.DarkRift.Cast", "modifier_abyssal_underlord_dark_rift"
// globals: `typeinfo for'CDOTA_Ability_AbyssalUnderlord_DarkRift, CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift::OnSpellStart(
        CDOTA_Ability_AbyssalUnderlord_Cancel_DarkRift *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  _DWORD *v4; // rax
  int v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *m_pInstance; // r12

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "abyssal_underlord_dark_rift", 0);
  if ( AbilityByName != 0 )
  {
    v4 = __dynamic_cast(
           AbilityByName,
           &`typeinfo for'CDOTABaseAbility,
           &`typeinfo for'CDOTA_Ability_AbyssalUnderlord_DarkRift,
           0);
    if ( v4 != 0 )
    {
      v5 = v4[229];
      if ( (v5 + 2) > 1 )
      {
        v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F];
        if ( v6 != 0 )
        {
          v7 = &v6[v5 & 0x1FF];
          if ( v7 != 0 && v5 == v7->m_EHandle.m_Index )
          {
            m_pInstance = v7->m_pInstance;
            if ( v7->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
            {
              CDOTA_BaseNPC::RemoveModifierByName(v7->m_pInstance, "modifier_abyssal_underlord_dark_rift");
              DOTA_EmitSound(10, "Hero_AbyssalUnderlord.DarkRift.Cancel", m_pInstance);
            }
          }
        }
      }
    }
  }
  v8 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v8, 1519, 0.1, 0.1, 9, 0, 1.0);
  v9 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(8, "Hero_AbyssalUnderlord.DarkRift.Cancel", v9);
  v10 = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::StopSound(v10, "Hero_AbyssalUnderlord.DarkRift.Cast");
}


