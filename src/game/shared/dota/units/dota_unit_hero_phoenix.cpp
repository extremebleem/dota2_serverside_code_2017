// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_phoenix.cpp:63
class CDOTA_Unit_Hero_Phoenix : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Phoenix(CDOTA_Unit_Hero_Phoenix &);
	CDOTA_Unit_Hero_Phoenix(CDOTA_Unit_Hero_Phoenix &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Unit_Hero_Phoenix();
	virtual void OnAlive();
	virtual void OnDeath();
	virtual void OnDying();
	virtual bool OnLoadState(KeyValues *);
	virtual ~CDOTA_Unit_Hero_Phoenix();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[471] OnAlive
	// vtable[470] OnDeath
	// vtable[469] OnDying
	// vtable[467] OnLoadState
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_phoenix.cpp:87
class C_CDOTA_Unit_Hero_Phoenix_MapInstall {
	C_CDOTA_Unit_Hero_Phoenix_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_phoenix.cpp:195
class CDOTA_Ability_Phoenix_SunRay : public CDOTABaseAbility {
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
	CDOTA_Ability_Phoenix_SunRay(CDOTA_Ability_Phoenix_SunRay &);
	CDOTA_Ability_Phoenix_SunRay(CDOTA_Ability_Phoenix_SunRay &);
	CDOTA_Ability_Phoenix_SunRay();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual void OnUpgrade();
	virtual void OnUnStolen();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Phoenix_SunRay();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[268] OnUpgrade
	// vtable[308] OnUnStolen
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_phoenix.cpp:271
class CDOTA_Ability_Phoenix_SunRayStop : public CDOTABaseAbility {
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
	CDOTA_Ability_Phoenix_SunRayStop(CDOTA_Ability_Phoenix_SunRayStop &);
	CDOTA_Ability_Phoenix_SunRayStop(CDOTA_Ability_Phoenix_SunRayStop &);
	CDOTA_Ability_Phoenix_SunRayStop();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual void OnUpgrade();
	virtual const char * GetAssociatedPrimaryAbilities();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual bool IsHiddenWhenStolen();
	virtual bool ProcsMagicStick();
	virtual ~CDOTA_Ability_Phoenix_SunRayStop();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[268] OnUpgrade
	// vtable[303] GetAssociatedPrimaryAbilities
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[306] IsHiddenWhenStolen
	// vtable[239] ProcsMagicStick
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_phoenix.cpp:322
class CDOTA_Modifier_Phoenix_SunRayVision : public CDOTA_Buff {
public:

	CDOTA_Modifier_Phoenix_SunRayVision();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_Phoenix_SunRayVision();

	// vtable[5] CheckState
	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_phoenix.cpp:372
class CDOTA_Modifier_Phoenix_SunRay : public CDOTA_Buff, public CHorizontalMotionController {
public:

private:

	int hp_cost_perc_per_second;  // +0xbb4
	int beam_range;  // +0xbb8
	int base_damage;  // +0xbbc
	int base_heal;  // +0xbc0
	float tick_interval;  // +0xbc4
	float forward_move_speed;  // +0xbc8
	float turn_rate_initial;  // +0xbcc
	float turn_rate;  // +0xbd0
	int radius;  // +0xbd4
	float m_flCurrentTime;  // +0xbd8
	float m_flAccumulatedSelfDamage;  // +0xbdc
	bool m_bMovingForward;  // +0xbe0
	bool m_bTurningFast;  // +0xbe1

	float m_flFacingTarget;  // +0xbe4
	float hp_perc_damage;  // +0xbe8
	float hp_perc_heal;  // +0xbec
	int m_nBeamFXIndex;  // +0xbf0
	EHANDLE m_hBeamEnd;  // +0xc14
	bool m_bCreatedVisionThinkers;  // +0xc18

	EHANDLE m_hBeamEndSound;  // +0xc1c
	CDOTA_Modifier_Phoenix_SunRay();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	virtual void CheckState(CDOTABuffState &);
	virtual void OnIntervalThink();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsMotionController();
	ModifierVariant_t OnOrder(const CModifierParams &);
	ModifierVariant_t GetModifierDisableTurning(const CModifierParams &);
	ModifierVariant_t GetModifierIgnoreCastAngle(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeed_Limit(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	void ToggleMovement();
	void UpdateBeamEffect(float);
	void DoBeamDamageAndVision();
	void SetFacingTarget(const Vector &);
	virtual ~CDOTA_Modifier_Phoenix_SunRay();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[5] CheckState
	// vtable[56] OnIntervalThink
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] OnHorizontalMotionInterrupted
	// vtable[91] IsHorizontalMotionValidToApply
	// vtable[21] IsMotionController
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// sizeof = 3104
};

// src/game/shared/dota/units/dota_unit_hero_phoenix.cpp:933
class CDOTA_Ability_Phoenix_SunRayToggleMove : public CDOTABaseAbility {
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
	CDOTA_Ability_Phoenix_SunRayToggleMove(CDOTA_Ability_Phoenix_SunRayToggleMove &);
	CDOTA_Ability_Phoenix_SunRayToggleMove(CDOTA_Ability_Phoenix_SunRayToggleMove &);
	CDOTA_Ability_Phoenix_SunRayToggleMove();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool IsHiddenWhenStolen();
	virtual bool ProcsMagicStick();
	virtual const char * GetAssociatedPrimaryAbilities();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual ~CDOTA_Ability_Phoenix_SunRayToggleMove();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[306] IsHiddenWhenStolen
	// vtable[239] ProcsMagicStick
	// vtable[303] GetAssociatedPrimaryAbilities
	// vtable[304] GetAssociatedSecondaryAbilities
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_phoenix.cpp:968
class CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty : public CDOTABaseAbility {
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
	CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty(CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty &);
	CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty(CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty &);
	CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_phoenix.cpp:983
class CDOTA_Ability_Phoenix_IcarusDive : public CDOTABaseAbility {
public:

private:

	int hp_cost_perc;  // +0x390
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
	CDOTA_Ability_Phoenix_IcarusDive(CDOTA_Ability_Phoenix_IcarusDive &);
	CDOTA_Ability_Phoenix_IcarusDive(CDOTA_Ability_Phoenix_IcarusDive &);
	CDOTA_Ability_Phoenix_IcarusDive();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual void OnUpgrade();
	virtual void OnUnStolen();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Phoenix_IcarusDive();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[268] OnUpgrade
	// vtable[308] OnUnStolen
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_phoenix.cpp:1075
class CDOTA_Ability_Phoenix_IcarusDiveStop : public CDOTABaseAbility {
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
	CDOTA_Ability_Phoenix_IcarusDiveStop(CDOTA_Ability_Phoenix_IcarusDiveStop &);
	CDOTA_Ability_Phoenix_IcarusDiveStop(CDOTA_Ability_Phoenix_IcarusDiveStop &);
	CDOTA_Ability_Phoenix_IcarusDiveStop();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual void OnUpgrade();
	virtual bool IsHiddenWhenStolen();
	virtual bool ProcsMagicStick();
	virtual const char * GetAssociatedPrimaryAbilities();
	virtual ~CDOTA_Ability_Phoenix_IcarusDiveStop();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[268] OnUpgrade
	// vtable[306] IsHiddenWhenStolen
	// vtable[239] ProcsMagicStick
	// vtable[303] GetAssociatedPrimaryAbilities
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_phoenix.cpp:1125
class CDOTA_Modifier_Phoenix_IcarusDive : public CDOTA_Buff, public CHorizontalMotionController {
public:

private:

	float m_flCurrentTime;  // +0xbe4
	int dash_length;  // +0xbe8
	int dash_width;  // +0xbec
	int hit_radius;  // +0xbf0
	float burn_duration;  // +0xbf4
	CDOTA_Modifier_Phoenix_IcarusDive();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsMotionController();
	ModifierVariant_t GetModifierIgnoreCastAngle(const CModifierParams &);
	virtual ~CDOTA_Modifier_Phoenix_IcarusDive();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] OnHorizontalMotionInterrupted
	// vtable[91] IsHorizontalMotionValidToApply
	// vtable[21] IsMotionController
	// sizeof = 3088
};

// src/game/shared/dota/units/dota_unit_hero_phoenix.cpp:1331
class CDOTA_Modifier_Phoenix_IcarusDiveBurn : public CDOTA_Buff {
public:

private:

	float burn_tick_interval;  // +0xba8
	int damage_per_second;  // +0xbac
	int slow_movement_speed_pct;  // +0xbb0
	CDOTA_Modifier_Phoenix_IcarusDiveBurn();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	ModifierVariant_t OnTooltip(const CModifierParams &);
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Phoenix_IcarusDiveBurn();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[89] GetModifierMoveSpeedBonus_Percentage
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_phoenix.cpp:1414
class CDOTA_Ability_Phoenix_FireSpirits : public CDOTABaseAbility {
public:

private:

	int hp_cost_perc;  // +0x390
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
	CDOTA_Ability_Phoenix_FireSpirits(CDOTA_Ability_Phoenix_FireSpirits &);
	CDOTA_Ability_Phoenix_FireSpirits(CDOTA_Ability_Phoenix_FireSpirits &);
	CDOTA_Ability_Phoenix_FireSpirits();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual void OnUpgrade();
	virtual void OnUnStolen();
	virtual bool ProcsMagicStick();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Phoenix_FireSpirits();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[268] OnUpgrade
	// vtable[308] OnUnStolen
	// vtable[239] ProcsMagicStick
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_phoenix.cpp:1504
class CDOTA_Modifier_Phoenix_FireSpiritCount : public CDOTA_Buff {
public:

private:

	int spirit_count;  // +0xba8
	int m_nFXIndex;  // +0xbac
	CDOTA_Modifier_Phoenix_FireSpiritCount();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual void OnStackCountChanged(int);
	virtual ~CDOTA_Modifier_Phoenix_FireSpiritCount();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// vtable[29] OnStackCountChanged
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_phoenix.cpp:1591
class CDOTA_Ability_Phoenix_LaunchFireSpirit : public CDOTABaseAbility {
public:

private:

	int spirit_speed;  // +0x390
	float duration;  // +0x394
	int radius;  // +0x398
	int hp_cost_perc;  // +0x39c
	int m_nFXIndex;  // +0x3a0
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
	CDOTA_Ability_Phoenix_LaunchFireSpirit(CDOTA_Ability_Phoenix_LaunchFireSpirit &);
	CDOTA_Ability_Phoenix_LaunchFireSpirit(CDOTA_Ability_Phoenix_LaunchFireSpirit &);
	CDOTA_Ability_Phoenix_LaunchFireSpirit();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit_ExtraData(EHANDLE, const Vector &, KeyValues *);
	virtual void OnUpgrade();
	virtual bool IsHiddenWhenStolen();
	virtual bool ProcsMagicStick();
	virtual const char * GetAssociatedPrimaryAbilities();
	virtual ~CDOTA_Ability_Phoenix_LaunchFireSpirit();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[290] OnProjectileHit_ExtraData
	// vtable[268] OnUpgrade
	// vtable[306] IsHiddenWhenStolen
	// vtable[239] ProcsMagicStick
	// vtable[303] GetAssociatedPrimaryAbilities
	// sizeof = 936
};

// src/game/shared/dota/units/dota_unit_hero_phoenix.cpp:1618
class C_CDOTA_Ability_Phoenix_LaunchFireSpirit_MapInstall {
	C_CDOTA_Ability_Phoenix_LaunchFireSpirit_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_phoenix.cpp:1752
class CDOTA_Modifier_Phoenix_FireSpiritBurn : public CDOTA_Buff {
public:

private:

	float tick_interval;  // +0xba8
	int attackspeed_slow;  // +0xbac
	int damage_per_second;  // +0xbb0
	CDOTA_Modifier_Phoenix_FireSpiritBurn();
	virtual void OnCreated(KeyValues *);
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t OnTooltip(const CModifierParams &);
	virtual ~CDOTA_Modifier_Phoenix_FireSpiritBurn();

	// vtable[57] OnCreated
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_phoenix.cpp:1843
class CDOTA_Ability_Phoenix_Supernova : public CDOTABaseAbility {
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
	CDOTA_Ability_Phoenix_Supernova(CDOTA_Ability_Phoenix_Supernova &);
	CDOTA_Ability_Phoenix_Supernova(CDOTA_Ability_Phoenix_Supernova &);
	CDOTA_Ability_Phoenix_Supernova();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual int GetBehavior();
	virtual ~CDOTA_Ability_Phoenix_Supernova();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[6] Precache
	// vtable[251] GetBehavior
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_phoenix.cpp:1858
class C_CDOTA_Ability_Phoenix_Supernova_MapInstall {
	C_CDOTA_Ability_Phoenix_Supernova_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_phoenix.cpp:1982
class CDOTA_Modifier_Phoenix_SupernovaHiding : public CDOTA_Buff {
public:

	CDOTA_Modifier_Phoenix_SupernovaHiding();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Phoenix_SupernovaHiding();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_phoenix.cpp:2052
class CDOTA_Modifier_Phoenix_Sun : public CDOTA_Buff {
public:

private:

	int aura_radius;  // +0xba8
	float stun_duration;  // +0xbac
	int max_hero_attacks;  // +0xbb0
	int max_hero_attacks_scepter;  // +0xbb4
	int max_hero_attacks_required;  // +0xbb8
	EHANDLE m_hSecondaryTarget;  // +0xbbc
	int m_iAttackCount;  // +0xbc0
	int creep_attacks_count;  // +0xbc4
	CDOTA_Modifier_Phoenix_Sun();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraRadius();
	virtual bool IsPurgable();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	ModifierVariant_t GetAbsoluteNoDamagePhysical(const CModifierParams &);
	ModifierVariant_t GetAbsoluteNoDamageMagical(const CModifierParams &);
	ModifierVariant_t GetAbsoluteNoDamagePure(const CModifierParams &);
	ModifierVariant_t OnAttacked(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual int GetNumAvoidLocations();
	virtual Vector GetAvoidLocation(int);
	virtual bool AvoidFilter(CDOTA_BaseNPC *);
	virtual float AvoidStrength(CDOTA_Bot *);
	virtual float GetAvoidRadius(int);
	virtual bool IsAvoidMagical();
	virtual bool IsPersistentAvoidance();
	virtual ~CDOTA_Modifier_Phoenix_Sun();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[41] GetAuraRadius
	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[74] GetNumAvoidLocations
	// vtable[75] GetAvoidLocation
	// vtable[76] AvoidFilter
	// vtable[77] AvoidStrength
	// vtable[78] GetAvoidRadius
	// vtable[79] IsAvoidMagical
	// vtable[81] IsPersistentAvoidance
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_phoenix.cpp:2411
class CDOTA_Modifier_Phoenix_Sun_Debuff : public CDOTA_Buff {
public:

private:

	int damage_per_sec;  // +0xba8
	CDOTA_Modifier_Phoenix_Sun_Debuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	ModifierVariant_t OnTooltip(const CModifierParams &);
	virtual ~CDOTA_Modifier_Phoenix_Sun_Debuff();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// RemoveHealthPercent  (line 36, @0x0000000002ccd5b0, libserver.so)
// calls: CBaseEntity::GetHealth, CDOTA_BaseNPC::ModifyHealth
// callers: CDOTA_Ability_Phoenix_IcarusDive::OnSpellStart, CDOTA_Ability_Phoenix_FireSpirits::OnSpellStart
void __fastcall RemoveHealthPercent(CDOTA_BaseNPC *pNPC, int nHealthPerc)
{
  float Health; // xmm0_4
  int v5; // eax
  int v6; // ebx
  int v7; // eax

  if ( pNPC != 0 )
  {
    Health = CBaseEntity::GetHealth(pNPC);
    v5 = 100;
    if ( nHealthPerc <= 100 )
      v5 = nHealthPerc;
    if ( v5 < 0 )
      v5 = 0;
    v6 = (Health * (v5 / 100.0)) - ((Health * (v5 / 100.0)) > CBaseEntity::GetHealth(pNPC));
    if ( v6 > 0 )
    {
      v7 = CBaseEntity::GetHealth(pNPC);
      CDOTA_BaseNPC::ModifyHealth(pNPC, v7 - v6, 0, 0, 0);
    }
  }
}


// CDOTA_Unit_Hero_Phoenix::~CDOTA_Unit_Hero_Phoenix  (line 63, @0x0000000002d2ce80, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Phoenix::~CDOTA_Unit_Hero_Phoenix(CDOTA_Unit_Hero_Phoenix *const this)
{
  this->_vptr_IHandleEntity = &off_46083F0;
  this->_vptr_INextBotEventResponder = &off_46093D0;
  this->_vptr_CObstructionObject = &off_4609700;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Phoenix::~CDOTA_Unit_Hero_Phoenix  (line 63, @0x0000000002d2cec0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Phoenix
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Phoenix::~CDOTA_Unit_Hero_Phoenix(CDOTA_Unit_Hero_Phoenix *const this)
{
  this->_vptr_IHandleEntity = &off_46083F0;
  this->_vptr_INextBotEventResponder = &off_46093D0;
  this->_vptr_CObstructionObject = &off_4609700;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Phoenix::Schema_DynamicBinding  (line 65, @0x0000000002d1c720, libserver.so)
// globals: CDOTA_Unit_Hero_Phoenix::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Phoenix::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Phoenix *const this)
{
  return CDOTA_Unit_Hero_Phoenix::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Phoenix::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 65, @0x0000000002d1c750, libserver.so)
// globals: CDOTA_Unit_Hero_Phoenix::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Phoenix::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Phoenix::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Phoenix::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Phoenix::CEntityInstanceEntityClass::DestructInstance  (line 65, @0x0000000002d1c760, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Phoenix>
void __fastcall CDOTA_Unit_Hero_Phoenix::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Phoenix::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Phoenix::CEntityInstanceEntityClass::FreeInstance  (line 65, @0x0000000002d1c780, libserver.so)
void __fastcall CDOTA_Unit_Hero_Phoenix::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Phoenix::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Phoenix::CEntityInstanceEntityClass::CanAllocate  (line 65, @0x0000000002d1c7a0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Phoenix::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Phoenix::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Phoenix::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 65, @0x0000000002d1c7b0, libserver.so)
// globals: CDOTA_Unit_Hero_Phoenix::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Phoenix::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Phoenix::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Phoenix::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Phoenix::CEntityInstanceEntityClass::AllocateInstance  (line 65, @0x0000000002d24010, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Phoenix::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Phoenix::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Phoenix::CEntityInstanceEntityClass::ConstructInstance  (line 65, @0x0000000002d286f0, libserver.so)  // inlines: CDOTA_Unit_Hero_Phoenix, Construct<CDOTA_Unit_Hero_Phoenix>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Phoenix::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Phoenix::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_46083F0;
    *(p + 236) = &off_46093D0;
    *(p + 257) = &off_4609700;
  }
  return p;
}


// CDOTA_Unit_Hero_Phoenix::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 65, @0x0000000002d35510, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Phoenix::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Phoenix::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Phoenix::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 65, @0x0000000002d356f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Phoenix::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Phoenix::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Phoenix::GetEntityClassInternal  (line 65, @0x0000000002d4ccd0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "npc_dota_hero_phoenix", "CDOTA_Unit_Hero_Phoenix"
// globals: `guard variable for'CDOTA_Unit_Hero_Phoenix::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhoenixClass, CDOTA_Unit_Hero_Phoenix::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhoenixClass, __dso_handle, CDOTA_Unit_Hero_Phoenix::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Phoenix::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PhoenixClassInfo, CDOTA_Unit_Hero_Phoenix::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PhoenixClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Phoenix::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Phoenix::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhoenixClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Phoenix::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhoenixClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Phoenix::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhoenixClass);
    CDOTA_Unit_Hero_Phoenix::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhoenixClass._vptr_CEntityClass = off_4608370;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Phoenix::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhoenixClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Phoenix::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Phoenix::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhoenixClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_PhoenixClass != 0 )
    return &CDOTA_Unit_Hero_Phoenix::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhoenixClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Phoenix::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PhoenixClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Phoenix::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PhoenixClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Phoenix::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PhoenixClassInfo,
      "CDOTA_Unit_Hero_Phoenix",
      "npc_dota_hero_phoenix",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Phoenix::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PhoenixClassInfo);
  }
  CDOTA_Unit_Hero_Phoenix::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhoenixClass.m_pClassInfo = &CDOTA_Unit_Hero_Phoenix::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PhoenixClassInfo;
  CDOTA_Unit_Hero_Phoenix::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhoenixClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Phoenix::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PhoenixClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_PhoenixClass = &CDOTA_Unit_Hero_Phoenix::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhoenixClass;
  CDOTA_Unit_Hero_Phoenix::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_PhoenixClassInfo.m_pClass = &CDOTA_Unit_Hero_Phoenix::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhoenixClass;
  CDOTA_Unit_Hero_Phoenix::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhoenixClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_PhoenixClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Phoenix::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_PhoenixClass;
}


// CDOTA_Unit_Hero_Phoenix::YouForgotToImplementOrDeclareServerClass  (line 87, @0x0000000002cc88e0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Phoenix::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Phoenix *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Phoenix::GetServerClass  (line 87, @0x0000000002cde670, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Phoenix::GetServerClass(CDOTA_Unit_Hero_Phoenix *const this)
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


// CDOTA_Unit_Hero_Phoenix::OnAlive  (line 95, @0x0000000002cc88f0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Phoenix::OnAlive(CDOTA_Unit_Hero_Phoenix *const this)
{
  ;
}


// CDOTA_Unit_Hero_Phoenix::OnDying  (line 113, @0x0000000002cd27e0, libserver.so)
// calls: CBaseEntity::AddEffects, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "particles/units/heroes/hero_phoenix/phoenix_death.vpcf", "attach_hitloc"
void __fastcall CDOTA_Unit_Hero_Phoenix::OnDying(CDOTA_Unit_Hero_Phoenix *const this)
{
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  const Vector *AbsOrigin; // r13
  CDOTA_ParticleManager *v5; // rax
  CDOTA_ParticleManager *v6; // rax
  CDOTA_ParticleManager *v7; // rax

  if ( (this->m_fEffects.m_Value & 0x20) != 0
    || (*(this->_vptr_IHandleEntity + 438))(this) != 0
    || this->m_bCustomKillEffect.m_Value )
  {
    CBaseEntity::AddEffects(this, 32);
  }
  else
  {
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_phoenix/phoenix_death.vpcf",
                 2,
                 this,
                 0,
                 0);
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    v5 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v5, Particle, 0, this, 5, "attach_hitloc", *AbsOrigin, 1);
    v6 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v6, Particle, 1, this, 1, 0, vec3_invalid, 1);
    v7 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v7, Particle);
  }
}


// CDOTA_Unit_Hero_Phoenix::OnDeath  (line 142, @0x0000000002ccb7c0, libserver.so)
// calls: CBaseEntity::AddEffects
void __fastcall CDOTA_Unit_Hero_Phoenix::OnDeath(CDOTA_Unit_Hero_Phoenix *const this)
{
  if ( !this->m_bCustomKillEffect.m_Value )
    CBaseEntity::AddEffects(this, 32);
}


// CDOTA_Unit_Hero_Phoenix::OnLoadState  (line 161, @0x0000000002ccb800, libserver.so)
// calls: CDOTA_BaseNPC_Hero::OnLoadState, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::SwapAbilities
// strings: "phoenix_fire_spirits", "phoenix_launch_fire_spirit", "phoenix_icarus_dive_stop", "phoenix_sun_ray_stop", "phoenix_sun_ray_toggle_move", "phoenix_sun_ray_toggle_move_empty"
bool __fastcall CDOTA_Unit_Hero_Phoenix::OnLoadState(CDOTA_Unit_Hero_Phoenix *const this, KeyValues *pKV)
{
  CDOTA_BaseNPC_Hero::OnLoadState(this, pKV);
  if ( CDOTA_BaseNPC::FindAbilityByName(this, "phoenix_sun_ray", 0)->m_bHidden.m_Value )
  {
    CDOTA_BaseNPC::SwapAbilities(this, "phoenix_sun_ray", "phoenix_sun_ray_stop", 1, 0);
    CDOTA_BaseNPC::SwapAbilities(this, "phoenix_sun_ray_toggle_move_empty", "phoenix_sun_ray_toggle_move", 1, 0);
  }
  if ( CDOTA_BaseNPC::FindAbilityByName(this, "phoenix_icarus_dive", 0)->m_bHidden.m_Value )
    CDOTA_BaseNPC::SwapAbilities(this, "phoenix_icarus_dive", "phoenix_icarus_dive_stop", 1, 0);
  if ( CDOTA_BaseNPC::FindAbilityByName(this, "phoenix_fire_spirits", 0)->m_bHidden.m_Value )
    CDOTA_BaseNPC::SwapAbilities(this, "phoenix_fire_spirits", "phoenix_launch_fire_spirit", 1, 0);
  return 1;
}


// CDOTA_Ability_Phoenix_SunRay::~CDOTA_Ability_Phoenix_SunRay  (line 195, @0x0000000002d2b460, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Phoenix_SunRay::~CDOTA_Ability_Phoenix_SunRay(CDOTA_Ability_Phoenix_SunRay *const this)
{
  this->_vptr_IHandleEntity = &off_46097D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Phoenix_SunRay::~CDOTA_Ability_Phoenix_SunRay  (line 195, @0x0000000002d2b480, libserver.so)  // inlines: ~CDOTA_Ability_Phoenix_SunRay
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Phoenix_SunRay::~CDOTA_Ability_Phoenix_SunRay(CDOTA_Ability_Phoenix_SunRay *const this)
{
  this->_vptr_IHandleEntity = &off_46097D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Phoenix_SunRay::Schema_DynamicBinding  (line 197, @0x0000000002d1c7c0, libserver.so)
// globals: CDOTA_Ability_Phoenix_SunRay::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Phoenix_SunRay::Schema_DynamicBinding(
        const CDOTA_Ability_Phoenix_SunRay *const this)
{
  return CDOTA_Ability_Phoenix_SunRay::s_pSchemaBinding;
}


// CDOTA_Ability_Phoenix_SunRay::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 197, @0x0000000002d1c7d0, libserver.so)
// globals: CDOTA_Ability_Phoenix_SunRay::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Phoenix_SunRay::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Phoenix_SunRay::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Phoenix_SunRay::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Phoenix_SunRay::CEntityInstanceEntityClass::DestructInstance  (line 197, @0x0000000002d1c7e0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Phoenix_SunRay>
void __fastcall CDOTA_Ability_Phoenix_SunRay::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Phoenix_SunRay::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Phoenix_SunRay::CEntityInstanceEntityClass::FreeInstance  (line 197, @0x0000000002d1c800, libserver.so)
void __fastcall CDOTA_Ability_Phoenix_SunRay::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Phoenix_SunRay::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Phoenix_SunRay::CEntityInstanceEntityClass::CanAllocate  (line 197, @0x0000000002d1c820, libserver.so)
bool __fastcall CDOTA_Ability_Phoenix_SunRay::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Phoenix_SunRay::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Phoenix_SunRay::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 197, @0x0000000002d1c830, libserver.so)
// globals: CDOTA_Ability_Phoenix_SunRay::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Phoenix_SunRay::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Phoenix_SunRay::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Phoenix_SunRay::s_pSchemaBinding;
}


// CDOTA_Ability_Phoenix_SunRay::CEntityInstanceEntityClass::AllocateInstance  (line 197, @0x0000000002d24050, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Phoenix_SunRay::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Phoenix_SunRay::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Phoenix_SunRay::CEntityInstanceEntityClass::ConstructInstance  (line 197, @0x0000000002d28bd0, libserver.so)  // inlines: CDOTA_Ability_Phoenix_SunRay, Construct<CDOTA_Ability_Phoenix_SunRay>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Phoenix_SunRay::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Phoenix_SunRay::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_46097D0;
  }
  return p;
}


// CDOTA_Ability_Phoenix_SunRay::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 197, @0x0000000002d33870, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Phoenix_SunRay::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Phoenix_SunRay::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Phoenix_SunRay::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 197, @0x0000000002d33890, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Phoenix_SunRay::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Phoenix_SunRay::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal  (line 197, @0x0000000002d514e0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "CDOTA_Ability_Phoenix_SunRay"
// globals: `guard variable for'CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass, CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Phoenix_SunRay::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Phoenix_SunRay::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClassInfo, CDOTA_Ability_Phoenix_SunRay::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClassInfo
CEntityClass *__cdecl CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass) != 0 )
  {
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_pClassInfo = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_flags = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_pInputs = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_nInputCount = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_pOutputs = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_nOutputCount = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_pGameClass = 0;
    CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass._vptr_CEntityClass = off_4609750;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass);
    __cxa_atexit(
      CDOTA_Ability_Phoenix_SunRay::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Phoenix_SunRayClass != 0 )
    return &CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass;
  if ( `guard variable for'CDOTA_Ability_Phoenix_SunRay::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Phoenix_SunRay::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Phoenix_SunRay::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClassInfo,
      "CDOTA_Ability_Phoenix_SunRay",
      "phoenix_sun_ray",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Phoenix_SunRay::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClassInfo);
  }
  CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_pClassInfo = &CDOTA_Ability_Phoenix_SunRay::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClassInfo;
  CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_pBaseClassInfo = CDOTA_Ability_Phoenix_SunRay::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Phoenix_SunRayClass = &CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass;
  CDOTA_Ability_Phoenix_SunRay::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClassInfo.m_pClass = &CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass;
  CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Phoenix_SunRayClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Phoenix_SunRay::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayClass;
}


// CDOTA_Ability_Phoenix_SunRay::GetAssociatedSecondaryAbilities  (line 202, @0x0000000002d1c840, libserver.so)
// strings: "phoenix_sun_ray_stop;phoenix_sun_ray_toggle_move;phoenix_sun_ray_toggle_move_empty"
const char *__fastcall CDOTA_Ability_Phoenix_SunRay::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Phoenix_SunRay *const this)
{
  return "phoenix_sun_ray_stop;phoenix_sun_ray_toggle_move;phoenix_sun_ray_toggle_move_empty";
}


// CDOTA_Ability_Phoenix_SunRay::OnSpellStart  (line 211, @0x0000000002ccbb80, libserver.so)
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_phoenix_sun_ray"
void __fastcall CDOTA_Ability_Phoenix_SunRay::OnSpellStart(CDOTA_Ability_Phoenix_SunRay *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_phoenix_sun_ray");
  CDOTABaseAbility::GetDuration(this);
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_phoenix_sun_ray", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Phoenix_SunRay::OnUpgrade  (line 222, @0x0000000002ccbc50, libserver.so)
// calls: CDOTABaseAbility::OnUpgrade, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName
// strings: "phoenix_sun_ray_stop", "phoenix_sun_ray_toggle_move"
void __fastcall CDOTA_Ability_Phoenix_SunRay::OnUpgrade(CDOTA_Ability_Phoenix_SunRay *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTABaseAbility *v5; // rax

  CDOTABaseAbility::OnUpgrade(this);
  if ( CDOTABaseAbility::GetCaster(this) != 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "phoenix_sun_ray_stop", 0);
    if ( AbilityByName != 0 )
      (*(AbilityByName->_vptr_IHandleEntity + 212))(AbilityByName, this->m_iLevel.m_Value);
    v4 = CDOTABaseAbility::GetCaster(this);
    v5 = CDOTA_BaseNPC::FindAbilityByName(v4, "phoenix_sun_ray_toggle_move", 0);
    if ( v5 != 0 )
      (*(v5->_vptr_IHandleEntity + 212))(v5, this->m_iLevel.m_Value);
  }
}


// CDOTA_Ability_Phoenix_SunRay::OnUnStolen  (line 243, @0x0000000002ccbf70, libserver.so)
// calls: CDOTABaseAbility::OnUnStolen, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_phoenix_sun_ray"
void __fastcall CDOTA_Ability_Phoenix_SunRay::OnUnStolen(CDOTA_Ability_Phoenix_SunRay *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  CDOTABaseAbility::OnUnStolen(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_phoenix_sun_ray");
}


// CDOTA_Ability_Phoenix_SunRay::GetAbilityDamageToTargetOverInterval  (line 254, @0x0000000002d00140, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetDuration, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "hp_perc_damage"
__int64 __fastcall CDOTA_Ability_Phoenix_SunRay::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Phoenix_SunRay *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r13d
  float v8; // [rsp-4h] [rbp-30h]
  float fIntervala; // [rsp+0h] [rbp-2Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PURE )
  {
    fIntervala = fminf(fInterval, CDOTABaseAbility::GetDuration(this));
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "base_damage", -1, 0);
    v8 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "hp_perc_damage", -1, 0);
    return ((LevelSpecialValue + ((*(pTarget->_vptr_IHandleEntity + 156))(pTarget) * v8)) * fIntervala);
  }
  return result;
}


// CDOTA_Ability_Phoenix_SunRayStop::~CDOTA_Ability_Phoenix_SunRayStop  (line 271, @0x0000000002d2b4b0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Phoenix_SunRayStop::~CDOTA_Ability_Phoenix_SunRayStop(
        CDOTA_Ability_Phoenix_SunRayStop *const this)
{
  this->_vptr_IHandleEntity = &off_460A2D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Phoenix_SunRayStop::~CDOTA_Ability_Phoenix_SunRayStop  (line 271, @0x0000000002d2b4d0, libserver.so)  // inlines: ~CDOTA_Ability_Phoenix_SunRayStop
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Phoenix_SunRayStop::~CDOTA_Ability_Phoenix_SunRayStop(
        CDOTA_Ability_Phoenix_SunRayStop *const this)
{
  this->_vptr_IHandleEntity = &off_460A2D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Phoenix_SunRayStop::Schema_DynamicBinding  (line 273, @0x0000000002d1c850, libserver.so)
// globals: CDOTA_Ability_Phoenix_SunRayStop::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Phoenix_SunRayStop::Schema_DynamicBinding(
        const CDOTA_Ability_Phoenix_SunRayStop *const this)
{
  return CDOTA_Ability_Phoenix_SunRayStop::s_pSchemaBinding;
}


// CDOTA_Ability_Phoenix_SunRayStop::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 273, @0x0000000002d1c860, libserver.so)
// globals: CDOTA_Ability_Phoenix_SunRayStop::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Phoenix_SunRayStop::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Phoenix_SunRayStop::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Phoenix_SunRayStop::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Phoenix_SunRayStop::CEntityInstanceEntityClass::DestructInstance  (line 273, @0x0000000002d1c870, libserver.so)  // inlines: Destruct<CDOTA_Ability_Phoenix_SunRayStop>
void __fastcall CDOTA_Ability_Phoenix_SunRayStop::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Phoenix_SunRayStop::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Phoenix_SunRayStop::CEntityInstanceEntityClass::FreeInstance  (line 273, @0x0000000002d1c890, libserver.so)
void __fastcall CDOTA_Ability_Phoenix_SunRayStop::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Phoenix_SunRayStop::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Phoenix_SunRayStop::CEntityInstanceEntityClass::CanAllocate  (line 273, @0x0000000002d1c8b0, libserver.so)
bool __fastcall CDOTA_Ability_Phoenix_SunRayStop::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Phoenix_SunRayStop::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Phoenix_SunRayStop::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 273, @0x0000000002d1c8c0, libserver.so)
// globals: CDOTA_Ability_Phoenix_SunRayStop::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Phoenix_SunRayStop::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Phoenix_SunRayStop::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Phoenix_SunRayStop::s_pSchemaBinding;
}


// CDOTA_Ability_Phoenix_SunRayStop::CEntityInstanceEntityClass::AllocateInstance  (line 273, @0x0000000002d24090, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Phoenix_SunRayStop::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Phoenix_SunRayStop::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Phoenix_SunRayStop::CEntityInstanceEntityClass::ConstructInstance  (line 273, @0x0000000002d28c00, libserver.so)  // inlines: CDOTA_Ability_Phoenix_SunRayStop, Construct<CDOTA_Ability_Phoenix_SunRayStop>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Phoenix_SunRayStop::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Phoenix_SunRayStop::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_460A2D0;
  }
  return p;
}


// CDOTA_Ability_Phoenix_SunRayStop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 273, @0x0000000002d338c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Phoenix_SunRayStop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Phoenix_SunRayStop::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Phoenix_SunRayStop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 273, @0x0000000002d338e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Phoenix_SunRayStop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Phoenix_SunRayStop::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal  (line 273, @0x0000000002d4f3c0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "phoenix_sun_ray_stop", "CDOTA_Ability_Phoenix_SunRayStop"
// globals: `guard variable for'CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass, CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Phoenix_SunRayStop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClassInfo, CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClassInfo
CEntityClass *__cdecl CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass) != 0 )
  {
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_pClassInfo = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_flags = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_pInputs = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_nInputCount = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_pOutputs = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_nOutputCount = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_pGameClass = 0;
    CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass._vptr_CEntityClass = off_460A250;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass);
    __cxa_atexit(
      CDOTA_Ability_Phoenix_SunRayStop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Phoenix_SunRayStopClass != 0 )
    return &CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass;
  if ( `guard variable for'CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClassInfo,
      "CDOTA_Ability_Phoenix_SunRayStop",
      "phoenix_sun_ray_stop",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClassInfo);
  }
  CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_pClassInfo = &CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClassInfo;
  CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_pBaseClassInfo = CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Phoenix_SunRayStopClass = &CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass;
  CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClassInfo.m_pClass = &CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass;
  CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Phoenix_SunRayStopClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Phoenix_SunRayStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayStopClass;
}


// CDOTA_Ability_Phoenix_SunRayStop::GetAssociatedPrimaryAbilities  (line 277, @0x0000000002d1c8d0, libserver.so)
const char *__fastcall CDOTA_Ability_Phoenix_SunRayStop::GetAssociatedPrimaryAbilities(
        CDOTA_Ability_Phoenix_SunRayStop *const this)
{
  return "phoenix_sun_ray";
}


// CDOTA_Ability_Phoenix_SunRayStop::GetAssociatedSecondaryAbilities  (line 278, @0x0000000002d1c8e0, libserver.so)
// strings: "phoenix_sun_ray_toggle_move;phoenix_sun_ray_toggle_move_empty"
const char *__fastcall CDOTA_Ability_Phoenix_SunRayStop::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Phoenix_SunRayStop *const this)
{
  return "phoenix_sun_ray_toggle_move;phoenix_sun_ray_toggle_move_empty";
}


// CDOTA_Ability_Phoenix_SunRayStop::IsHiddenWhenStolen  (line 280, @0x0000000002d1c8f0, libserver.so)
bool __fastcall CDOTA_Ability_Phoenix_SunRayStop::IsHiddenWhenStolen(CDOTA_Ability_Phoenix_SunRayStop *const this)
{
  return 1;
}


// CDOTA_Ability_Phoenix_SunRayStop::ProcsMagicStick  (line 281, @0x0000000002d1c900, libserver.so)
bool __fastcall CDOTA_Ability_Phoenix_SunRayStop::ProcsMagicStick(CDOTA_Ability_Phoenix_SunRayStop *const this)
{
  return 0;
}


// CDOTA_Ability_Phoenix_SunRayStop::OnSpellStart  (line 289, @0x0000000002ccc2c0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy
// strings: "modifier_phoenix_sun_ray"
void __fastcall CDOTA_Ability_Phoenix_SunRayStop::OnSpellStart(CDOTA_Ability_Phoenix_SunRayStop *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_phoenix_sun_ray", 0);
  if ( ModifierByName != 0 )
    CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
}


// CDOTA_Ability_Phoenix_SunRayStop::OnUpgrade  (line 302, @0x0000000002ccbcf0, libserver.so)
// calls: CDOTABaseAbility::OnUpgrade, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName
void __fastcall CDOTA_Ability_Phoenix_SunRayStop::OnUpgrade(CDOTA_Ability_Phoenix_SunRayStop *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  CDOTABaseAbility::OnUpgrade(this);
  if ( CDOTABaseAbility::GetCaster(this) != 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "phoenix_sun_ray", 0);
    if ( AbilityByName != 0 )
      (*(AbilityByName->_vptr_IHandleEntity + 212))(AbilityByName, this->m_iLevel.m_Value);
  }
}


// CDOTA_Modifier_Phoenix_SunRayVision::~CDOTA_Modifier_Phoenix_SunRayVision  (line 322, @0x0000000002d285c0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Phoenix_SunRayVision::~CDOTA_Modifier_Phoenix_SunRayVision(
        CDOTA_Modifier_Phoenix_SunRayVision *const this)
{
  this->_vptr_CDOTA_Buff = &off_460AD90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Phoenix_SunRayVision::~CDOTA_Modifier_Phoenix_SunRayVision  (line 322, @0x0000000002d285e0, libserver.so)  // inlines: ~CDOTA_Modifier_Phoenix_SunRayVision
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Phoenix_SunRayVision::~CDOTA_Modifier_Phoenix_SunRayVision(
        CDOTA_Modifier_Phoenix_SunRayVision *const this)
{
  this->_vptr_CDOTA_Buff = &off_460AD90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Phoenix_SunRayVision::IsHidden  (line 328, @0x0000000002d1c910, libserver.so)
bool __fastcall CDOTA_Modifier_Phoenix_SunRayVision::IsHidden(CDOTA_Modifier_Phoenix_SunRayVision *const this)
{
  return 1;
}


// CDOTA_Modifier_Phoenix_SunRayVision::OnCreated  (line 340, @0x0000000002cc8900, libserver.so)
void __fastcall CDOTA_Modifier_Phoenix_SunRayVision::OnCreated(
        CDOTA_Modifier_Phoenix_SunRayVision *const this,
        KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_Phoenix_SunRayVision::OnDestroy  (line 348, @0x0000000002ccc680, libserver.so)
// calls: CDOTA_Buff::GetParent, UTIL_Remove
void __fastcall CDOTA_Modifier_Phoenix_SunRayVision::OnDestroy(CDOTA_Modifier_Phoenix_SunRayVision *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  UTIL_Remove(Parent);
}


// CDOTA_Modifier_Phoenix_SunRayVision::CheckState  (line 357, @0x0000000002cc8910, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Phoenix_SunRayVision::CheckState(
        CDOTA_Modifier_Phoenix_SunRayVision *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x2804180uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFD7FBE7FLL;
}


// CDOTA_Modifier_Phoenix_SunRay::~CDOTA_Modifier_Phoenix_SunRay  (line 372, @0x0000000002d28550, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Phoenix_SunRay::~CDOTA_Modifier_Phoenix_SunRay(
        CDOTA_Modifier_Phoenix_SunRay *const this)
{
  this->_vptr_CDOTA_Buff = &off_460B0B0;
  this->_vptr_CHorizontalMotionController = &off_460B3A0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Phoenix_SunRay::~CDOTA_Modifier_Phoenix_SunRay  (line 372, @0x0000000002d28580, libserver.so)  // inlines: ~CDOTA_Modifier_Phoenix_SunRay
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Phoenix_SunRay::~CDOTA_Modifier_Phoenix_SunRay(
        CDOTA_Modifier_Phoenix_SunRay *const this)
{
  this->_vptr_CDOTA_Buff = &off_460B0B0;
  this->_vptr_CHorizontalMotionController = &off_460B3A0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Phoenix_SunRay::IsPurgable  (line 383, @0x0000000002d1c920, libserver.so)
bool __fastcall CDOTA_Modifier_Phoenix_SunRay::IsPurgable(CDOTA_Modifier_Phoenix_SunRay *const this)
{
  return 0;
}


// CDOTA_Modifier_Phoenix_SunRay::IsHorizontalMotionValidToApply  (line 390, @0x0000000002d1c930, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Phoenix_SunRay::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_Phoenix_SunRay *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Phoenix_SunRay::IsMotionController  (line 392, @0x0000000002d1c960, libserver.so)
bool __fastcall CDOTA_Modifier_Phoenix_SunRay::IsMotionController(CDOTA_Modifier_Phoenix_SunRay *const this)
{
  return 1;
}


// CDOTA_Modifier_Phoenix_SunRay::GetEffectName  (line 399, @0x0000000002d1c970, libserver.so)
// strings: "particles/units/heroes/hero_phoenix/phoenix_sunray_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Phoenix_SunRay::GetEffectName(CDOTA_Modifier_Phoenix_SunRay *const this)
{
  return "particles/units/heroes/hero_phoenix/phoenix_sunray_debuff.vpcf";
}


// CDOTA_Modifier_Phoenix_SunRay::GetStatusEffectName  (line 400, @0x0000000002d1c980, libserver.so)
// strings: "particles/status_fx/status_effect_burn.vpcf"
const char *__fastcall CDOTA_Modifier_Phoenix_SunRay::GetStatusEffectName(CDOTA_Modifier_Phoenix_SunRay *const this)
{
  return "particles/status_fx/status_effect_burn.vpcf";
}


// CDOTA_Modifier_Phoenix_SunRay::OnCreated  (line 442, @0x0000000002cfa470, libserver.so)  // inlines: Get, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, Set, SetBlockCreepSpawn, VectorAdd, VectorMultiply, operator CBaseEntity*, operator*, operator+, operator=
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::SwapAbilities, CDOTA_Buff::GetParent, CDOTALocomotor::ApplyHorizontalMotionController, CBaseEntity::GetAbsOrigin, CEntityHandle::operator CEntityInstance*, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt (29 total)
// strings: "hp_perc_damage", "hp_perc_heal", "hp_cost_perc_per_second", "base_heal", "forward_move_speed", "turn_rate_initial" (19 total)
void __fastcall CDOTA_Modifier_Phoenix_SunRay::OnCreated(CDOTA_Modifier_Phoenix_SunRay *const this, KeyValues *pKV)
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
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  __m128i x_low; // xmm3
  float beam_range; // xmm0_4
  __m128i y_low; // xmm4
  float v22; // r12d
  float v23; // r13d
  CDOTA_BaseNPC *v24; // rax
  const Vector *AbsOrigin; // rax
  vec_t v26; // xmm1_4
  vec_t v27; // xmm0_4
  CDOTA_BaseNPC *v28; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v30; // rax
  const Vector *v31; // r13
  CDOTA_BaseNPC *v32; // rax
  int m_nBeamFXIndex; // r14d
  const CBaseAnimating *v34; // r15
  CDOTA_ParticleManager *v35; // rax
  CEntityInstance *v36; // rax
  const CBaseAnimating *v37; // r14
  CDOTA_ParticleManager *v38; // rax
  __int64 v39; // r12
  CDOTA_BaseNPC *v40; // rax
  const CBaseAnimating *v41; // r14
  CDOTA_ParticleManager *v42; // rax
  CDOTA_BaseNPC *v43; // rax
  const Vector *v44; // r12
  CDOTA_BaseNPC *v45; // rax
  int v46; // r13d
  const CBaseAnimating *v47; // r14
  CDOTA_ParticleManager *v48; // rax
  CDOTA_BaseNPC *v49; // rax
  float v50; // xmm1_4
  float v51; // xmm1_4
  CDOTA_BaseNPC *v52; // rax
  CDOTA_BaseNPC *v53; // rax
  CDOTA_BaseNPC *v54; // rax
  CDOTA_BaseNPC *v55; // rax
  const Vector *v56; // r12
  CDOTA_BaseNPC *v57; // rax
  int v58; // r13d
  const CBaseAnimating *v59; // r14
  CDOTA_ParticleManager *v60; // rax
  float v61; // xmm1_4
  int m_Value; // r15d
  CDOTA_BaseNPC *v63; // r14
  CDOTA_BaseNPC *v64; // rax
  const Vector *v65; // rax
  CDOTA_BaseNPC *UnitByName; // r14
  CDOTABaseAbility *v67; // r15
  CDOTA_BaseNPC *v68; // rax
  CEntityIdentity *m_pEntity; // rax
  int v70; // edx
  __int16 v71; // cx
  float vecFallbackPosition; // [rsp+8h] [rbp-88h]
  vec_t vecFallbackPositiona; // [rsp+8h] [rbp-88h]
  CDOTA_BaseNPC *vecFallbackPositionb; // [rsp+8h] [rbp-88h]
  Vector vDirection; // [rsp+10h] [rbp-80h] BYREF
  Vector vBeamEnd; // [rsp+20h] [rbp-70h] BYREF
  Vector vecPos; // [rsp+30h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v79; // [rsp+58h] [rbp-38h]
  Vector v80; // 0:xmm0_8.8,8:xmm1_4.4

  v79 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(Ability, &this->hp_perc_damage, "hp_perc_damage");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v4, &this->hp_perc_heal, "hp_perc_heal");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->hp_cost_perc_per_second, "hp_cost_perc_per_second");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->base_damage, "base_damage");
  v7 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v7, &this->base_heal, "base_heal");
  v8 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v8, &this->tick_interval, "tick_interval");
  v9 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v9, &this->forward_move_speed, "forward_move_speed");
  v10 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v10, &this->turn_rate_initial, "turn_rate_initial");
  v11 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v11, &this->turn_rate, "turn_rate");
  v12 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v12, &this->radius, "radius");
  v13 = CDOTA_Buff::GetAbility(this);
  this->beam_range = (*(v13->_vptr_IHandleEntity + 229))(v13, &vec3_origin, 0);
  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::SwapAbilities(Caster, "phoenix_sun_ray", "phoenix_sun_ray_stop", 0, 1);
  v15 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::SwapAbilities(v15, "phoenix_sun_ray_toggle_move_empty", "phoenix_sun_ray_toggle_move", 0, 1);
  Parent = CDOTA_Buff::GetParent(this);
  v17 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v17, &this->CHorizontalMotionController, 0) )
  {
    this->m_flCurrentTime = 0.0;
    this->m_flAccumulatedSelfDamage = 0.0;
    this->m_bMovingForward = 0;
    this->m_bTurningFast = 1;
    this->m_nBeamFXIndex = -1;
    this->m_bCreatedVisionThinkers = 0;
    v18 = CDOTA_Buff::GetParent(this);
    (*(v18->_vptr_IHandleEntity + 61))(v18, &vDirection, 0, 0);
    x_low = LODWORD(vDirection.x);
    beam_range = this->beam_range;
    y_low = LODWORD(vDirection.y);
    *x_low.m128i_i32 = vDirection.x * beam_range;
    *y_low.m128i_i32 = vDirection.y * beam_range;
    v22 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
    v23 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
    vecFallbackPosition = beam_range * vDirection.z;
    v24 = CDOTA_Buff::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v24);
    v26 = v23 + AbsOrigin->y;
    v27 = vecFallbackPosition + AbsOrigin->z;
    vBeamEnd.x = v22 + AbsOrigin->x;
    vBeamEnd.y = v26;
    vBeamEnd.z = v27;
    if ( CEntityHandle::operator CEntityInstance *(&this->m_hBeamEnd) == 0 )
    {
      KeyValues::KeyValues(&kv, "modifier_phoenix_sun_ray_vision");
      (*(this->_vptr_CDOTA_Buff + 31))(this);
      KeyValues::SetFloat(&kv, "duration", v61);
      m_Value = CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value;
      v63 = CDOTA_Buff::GetCaster(this);
      vecFallbackPositionb = CDOTA_Buff::GetCaster(this);
      v64 = CDOTA_Buff::GetCaster(this);
      v65 = CBaseEntity::GetAbsOrigin(v64);
      UnitByName = DOTA_CreateUnitByName("npc_dota_invisible_vision_source", v65, 0, vecFallbackPositionb, v63, m_Value);
      if ( UnitByName != 0 )
      {
        v67 = CDOTA_Buff::GetAbility(this);
        v68 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(UnitByName, v68, v67, "modifier_phoenix_sun_ray_vision", &kv, 0);
        m_pEntity = UnitByName->m_pEntity;
        UnitByName->m_bBlocksCreepSpawn = 0;
        if ( m_pEntity != 0 )
        {
          v70 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v71 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v71 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(this->m_hBeamEnd.m_Index) = v71 | this->m_hBeamEnd.m_Index & 0x8000;
          this->m_hBeamEnd.m_Index = (v70 << 15) | this->m_hBeamEnd.m_Index & 0x7FFF;
        }
        else
        {
          this->m_hBeamEnd.m_Index = -1;
        }
      }
      KeyValues::~KeyValues(&kv);
    }
    v28 = CDOTA_Buff::GetCaster(this);
    ParticleManager = GetParticleManager();
    this->m_nBeamFXIndex = CDOTA_ParticleManager::CreateParticle(
                             ParticleManager,
                             "particles/units/heroes/hero_phoenix/phoenix_sunray.vpcf",
                             2,
                             0,
                             0,
                             v28);
    v30 = CDOTA_Buff::GetCaster(this);
    v31 = CBaseEntity::GetAbsOrigin(v30);
    v32 = CDOTA_Buff::GetCaster(this);
    m_nBeamFXIndex = this->m_nBeamFXIndex;
    v34 = v32;
    v35 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v35, m_nBeamFXIndex, 0, v34, 5, "attach_hitloc", *v31, 1);
    v36 = CEntityHandle::operator CEntityInstance *(&this->m_hBeamEnd);
    LODWORD(v31) = this->m_nBeamFXIndex;
    v37 = v36;
    v38 = GetParticleManager();
    v39 = *&vec3_invalid.x;
    vecFallbackPositiona = vec3_invalid.z;
    CDOTA_ParticleManager::SetParticleControlEnt(v38, v31, 1, v37, 1, 0, vec3_invalid, 1);
    v40 = CDOTA_Buff::GetCaster(this);
    LODWORD(v31) = this->m_nBeamFXIndex;
    v41 = v40;
    v42 = GetParticleManager();
    *&v80.x = v39;
    v80.z = vecFallbackPositiona;
    CDOTA_ParticleManager::SetParticleControlEnt(v42, v31, 2, v41, 1, 0, v80, 1);
    if ( CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value )
    {
      v43 = CDOTA_Buff::GetCaster(this);
      v44 = CBaseEntity::GetAbsOrigin(v43);
      v45 = CDOTA_Buff::GetCaster(this);
      v46 = this->m_nBeamFXIndex;
      v47 = v45;
      v48 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v48, v46, 9, v47, 5, "attach_attack3", *v44, 1);
    }
    else
    {
      v55 = CDOTA_Buff::GetCaster(this);
      v56 = CBaseEntity::GetAbsOrigin(v55);
      v57 = CDOTA_Buff::GetCaster(this);
      v58 = this->m_nBeamFXIndex;
      v59 = v57;
      v60 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v60, v58, 9, v59, 5, "attach_head", *v56, 1);
    }
    CDOTA_Buff::AddParticle(this, this->m_nBeamFXIndex, 0, 0, -1, 0, 0);
    v49 = CDOTA_Buff::GetCaster(this);
    vecPos = CDOTA_BaseNPC::GetCursorPosition(v49);
    CDOTA_Modifier_Phoenix_SunRay::SetFacingTarget(this, &vecPos);
    CDOTA_Modifier_Phoenix_SunRay::UpdateBeamEffect(this, 0.0, v50);
    CDOTA_Buff::StartIntervalThink(this, this->tick_interval, v51);
    v52 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v52, "Hero_Phoenix.SunRay.Cast", 0.0, 0, 0);
    v53 = CDOTA_Buff::GetCaster(this);
    DOTA_EmitSound(2, "Hero_Phoenix.SunRay.Loop", v53);
    DOTA_EmitSoundLocation(&vBeamEnd, "Hero_Phoenix.SunRay.Beam", 1);
    v54 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::StartGesture(v54, 1518, 0.2, 0.2, 3, 0, 1.0);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Phoenix_SunRay::OnDestroy  (line 528, @0x0000000002cdec70, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CDOTA_BaseNPC::FadeGesture, CDOTALocomotor::RemoveHorizontalMotionController, CBaseEntity::StopSound, CDOTA_BaseNPC::UnitEmitSound, CDOTA_BaseNPC::SwapAbilities, UTIL_Remove, CEntityHandle::operator CEntityInstance*
// strings: "Hero_Phoenix.SunRay.Cast", "Hero_Phoenix.SunRay.Loop", "Hero_Phoenix.SunRay.Stop", "phoenix_sun_ray_stop", "phoenix_sun_ray_toggle_move", "phoenix_sun_ray_toggle_move_empty"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Phoenix_SunRay::OnDestroy(CDOTA_Modifier_Phoenix_SunRay *const this)
{
  CHandle<CBaseEntity> *m_hVisionThinkers; // rbx
  int v3; // r12d
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTALocomotor *v6; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  uint32 m_Index; // eax
  CEntityInstance *m_pInstance; // rdi
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  uint32 v18; // eax
  CEntityInstance *v19; // rdi
  CEntityIdentity *v20; // rdx
  CEntityIdentity *v21; // rdx

  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    m_hVisionThinkers = this->m_hVisionThinkers;
    v3 = 8;
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::FadeGesture(Parent, 1518);
    v5 = CDOTA_Buff::GetParent(this);
    v6 = (*(v5->_vptr_IHandleEntity + 376))(v5);
    CDOTALocomotor::RemoveHorizontalMotionController(v6, &this->CHorizontalMotionController);
    Caster = CDOTA_Buff::GetCaster(this);
    CBaseEntity::StopSound(Caster, "Hero_Phoenix.SunRay.Cast");
    v8 = CDOTA_Buff::GetCaster(this);
    CBaseEntity::StopSound(v8, "Hero_Phoenix.SunRay.Loop");
    v9 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v9, "Hero_Phoenix.SunRay.Stop", 0.0, 0, 0);
    v10 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::SwapAbilities(v10, "phoenix_sun_ray", "phoenix_sun_ray_stop", 1, 0);
    v11 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::SwapAbilities(v11, "phoenix_sun_ray_toggle_move_empty", "phoenix_sun_ray_toggle_move", 1, 0);
    do
    {
      while ( 1 )
      {
        if ( m_hVisionThinkers->m_Index + 2 > 1 )
        {
          v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_hVisionThinkers->m_Index) >> 9) & 0x3F];
          if ( v12 != 0 )
          {
            v13 = &v12[m_hVisionThinkers->m_Index & 0x1FF];
            if ( v13 != 0 && m_hVisionThinkers->m_Index == v13->m_EHandle.m_Index && v13->m_pInstance != 0 )
              break;
          }
        }
        ++m_hVisionThinkers;
        if ( --v3 == 0 )
          goto LABEL_10;
      }
      UTIL_Remove(v13->m_pInstance);
      ++m_hVisionThinkers;
      --v3;
    }
    while ( v3 != 0 );
LABEL_10:
    if ( CEntityHandle::operator CEntityInstance *(&this->m_hBeamEndSound) != 0 )
    {
      m_Index = this->m_hBeamEndSound.m_Index;
      m_pInstance = 0;
      if ( m_Index + 2 > 1 )
      {
        v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBeamEndSound.m_Index) >> 9) & 0x3F];
        if ( v16 != 0 )
        {
          v17 = &v16[this->m_hBeamEndSound.m_Index & 0x1FF];
          if ( v17 != 0 && m_Index == v17->m_EHandle.m_Index )
            m_pInstance = v17->m_pInstance;
        }
      }
      UTIL_Remove(m_pInstance);
    }
    if ( CEntityHandle::operator CEntityInstance *(&this->m_hBeamEnd) != 0 )
    {
      v18 = this->m_hBeamEnd.m_Index;
      v19 = 0;
      if ( v18 + 2 > 1 )
      {
        v20 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBeamEnd.m_Index) >> 9) & 0x3F];
        if ( v20 != 0 )
        {
          v21 = &v20[this->m_hBeamEnd.m_Index & 0x1FF];
          if ( v21 != 0 && v18 == v21->m_EHandle.m_Index )
            v19 = v21->m_pInstance;
        }
      }
      UTIL_Remove(v19);
    }
  }
}


// CDOTA_Modifier_Phoenix_SunRay::DeclareFunctions  (line 565, @0x0000000002cc8930, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Phoenix_SunRay::OnOrder(CModifierParams const&), CDOTA_Modifier_Phoenix_SunRay::GetModifierDisableTurning(CModifierParams const&), CDOTA_Modifier_Phoenix_SunRay::GetModifierIgnoreCastAngle(CModifierParams const&), CDOTA_Modifier_Phoenix_SunRay::GetModifierMoveSpeed_Limit(CModifierParams const&)
void __fastcall CDOTA_Modifier_Phoenix_SunRay::DeclareFunctions(CDOTA_Modifier_Phoenix_SunRay *const this)
{
  this->m_Functions[125].__pfn = CDOTA_Modifier_Phoenix_SunRay::OnOrder;
  this->m_Functions[125].__delta = 0;
  this->m_Functions[161].__delta = 0;
  this->m_Functions[161].__pfn = CDOTA_Modifier_Phoenix_SunRay::GetModifierDisableTurning;
  this->m_Functions[162].__pfn = CDOTA_Modifier_Phoenix_SunRay::GetModifierIgnoreCastAngle;
  this->m_Functions[162].__delta = 0;
  this->m_Functions[20].__pfn = CDOTA_Modifier_Phoenix_SunRay::GetModifierMoveSpeed_Limit;
  this->m_Functions[20].__delta = 0;
}


// CDOTA_Modifier_Phoenix_SunRay::CheckState  (line 575, @0x0000000002cc89a0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Phoenix_SunRay::CheckState(
        CDOTA_Modifier_Phoenix_SunRay *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 2uLL;
  buffState->m_nDisabledStateMask &= ~2uLL;
}


// CDOTA_Modifier_Phoenix_SunRay::OnOrder  (line 584, @0x0000000002cdfe10, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, Target, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Modifier_Phoenix_SunRay::SetFacingTarget, CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Phoenix_SunRay::OnOrder(
        CDOTA_Modifier_Phoenix_SunRay *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  unsigned int v9; // ecx
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  const Vector *AbsOrigin; // rax

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->hunit.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
        {
          v9 = params->nOrdertype - 1;
          if ( v9 <= 0x1B && ((1LL << v9) & 0x800000F) != 0 )
          {
            v10 = params->htarget.m_Index;
            if ( v10 + 2 > 1
              && (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) != 0
              && (v12 = &v11[params->htarget.m_Index & 0x1FF]) != 0
              && v10 == v12->m_EHandle.m_Index
              && v12->m_pInstance != 0 )
            {
              AbsOrigin = CBaseEntity::GetAbsOrigin(v12->m_pInstance);
              CDOTA_Modifier_Phoenix_SunRay::SetFacingTarget(this, AbsOrigin);
            }
            else
            {
              CDOTA_Modifier_Phoenix_SunRay::SetFacingTarget(this, &params->vNewLoc);
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Phoenix_SunRay::SetFacingTarget  (line 618, @0x0000000002cdfd90, libserver.so)  // inlines: NormalizeInPlace, VectorSubtract, operator-
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, VectorNormalize, VectorAngles
// callers: CDOTA_Modifier_Phoenix_SunRay::OnOrder, CDOTA_Modifier_Phoenix_SunRay::OnCreated
void __fastcall CDOTA_Modifier_Phoenix_SunRay::SetFacingTarget(
        CDOTA_Modifier_Phoenix_SunRay *const this,
        const Vector *const vecPos)
{
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  vec_t v6; // xmm0_4
  vec_t v7; // xmm1_4
  Vector vecDir; // [rsp+0h] [rbp-30h] BYREF
  QAngle angFacing; // [rsp+10h] [rbp-20h] BYREF

  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v6 = vecPos->y - AbsOrigin->y;
  v7 = vecPos->x - AbsOrigin->x;
  vecDir.z = 0.0;
  vecDir.y = v6;
  vecDir.x = v7;
  VectorNormalize(&vecDir);
  VectorAngles(&vecDir, &angFacing);
  this->m_flFacingTarget = angFacing.y;
}


// CDOTA_Modifier_Phoenix_SunRay::GetModifierDisableTurning  (line 633, @0x0000000002cc89b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Phoenix_SunRay::GetModifierDisableTurning(
        CDOTA_Modifier_Phoenix_SunRay *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Phoenix_SunRay::GetModifierIgnoreCastAngle  (line 640, @0x0000000002cc89d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Phoenix_SunRay::GetModifierIgnoreCastAngle(
        CDOTA_Modifier_Phoenix_SunRay *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Phoenix_SunRay::GetModifierMoveSpeed_Limit  (line 645, @0x0000000002cc89f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Phoenix_SunRay::GetModifierMoveSpeed_Limit(
        CDOTA_Modifier_Phoenix_SunRay *const this,
        const CModifierParams *const params)
{
  return 0x3A83126F00000001uLL;
}


// CDOTA_Modifier_Phoenix_SunRay::UpdateHorizontalMotion  (line 652, @0x0000000002ce0230, libserver.so)  // inlines: InState, IsHexed, IsSilenced, IsStunned, Min<float>, UTIL_AngleDiff, VectorAdd, VectorMultiply, operator*, operator+
// calls: CBaseEntity::GetAbsAngles, AngleDiff, CBaseEntity::SetAbsAngles, CBaseEntity::GetAbsOrigin, CDOTALocomotor::IsLeashedMovementPrevented, CDOTA_Modifier_Phoenix_SunRay::UpdateBeamEffect, CDOTA_Buff::Destroy, CBaseEntity::SetAbsOrigin, CDOTA_Buff::GetCaster, CGridNav::DestroyTreesAroundPoint
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_Modifier_Phoenix_SunRay::UpdateHorizontalMotion(
        CDOTA_Modifier_Phoenix_SunRay *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  double v4; // xmm3_8
  const QAngle *AbsAngles; // rax
  float v8; // xmm2_4
  float v9; // xmm0_4
  float v10; // xmm3_4
  float turn_rate_initial; // xmm1_4
  float v12; // xmm3_4
  float forward_move_speed; // xmm0_4
  const Vector *AbsOrigin; // rax
  unsigned int v15; // xmm4_4
  unsigned int v16; // xmm1_4
  vec_t v17; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  CDOTALocomotor *v19; // rax
  bool IsLeashedMovementPrevented; // al
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v22; // r13d
  float v23; // xmm3_4
  float v24; // [rsp-18h] [rbp-68h]
  float v25; // [rsp-14h] [rbp-64h]
  float v26; // [rsp-10h] [rbp-60h]
  float v27; // [rsp-10h] [rbp-60h]
  float v29; // [rsp-Ch] [rbp-5Ch]
  float v30; // [rsp-Ch] [rbp-5Ch]
  float v31; // [rsp-Ch] [rbp-5Ch]
  float m_flHullRadius; // [rsp-Ch] [rbp-5Ch]
  __int64 v33; // [rsp-8h] [rbp-58h] BYREF
  QAngle angFacing; // [rsp+0h] [rbp-50h] BYREF
  float v35; // [rsp+Ch] [rbp-44h]
  __int128 vDirection; // [rsp+10h] [rbp-40h] OVERLAPPED BYREF
  Vector vNewLocation; // [rsp+20h] [rbp-30h]
  Vector v38; // 0:xmm0_8.8,8:xmm1_4.4

  v4 = 0.0;
  if ( (me->m_nUnitState64.m_Value & 0x20) != 0 || (me->m_nUnitState64.m_Value & 0x40) != 0 )
    goto LABEL_10;
  AbsAngles = CBaseEntity::GetAbsAngles(me);
  v33 = *&AbsAngles->x;
  angFacing.x = AbsAngles->z;
  v9 = AngleDiff(*(&v33 + 1), v8);
  if ( this->m_bTurningFast )
  {
    v10 = fabs(v9);
    if ( v10 >= 7.0 )
    {
      turn_rate_initial = this->turn_rate_initial;
      goto LABEL_6;
    }
    this->m_bTurningFast = 0;
  }
  else
  {
    v10 = fabs(v9);
  }
  turn_rate_initial = this->turn_rate;
LABEL_6:
  v12 = fminf(turn_rate_initial * a3, v10);
  if ( v9 <= 0.0 )
  {
    if ( v9 < 0.0 )
      v12 = -v12;
    else
      v12 = 0.0;
  }
  v26 = a3;
  v29 = v12;
  *(&v33 + 1) = v12 + *(&v33 + 1);
  CBaseEntity::SetAbsAngles(me, &v33);
  *&v4 = LODWORD(v29);
  if ( this->m_bMovingForward )
  {
    v24 = v29;
    v30 = v26;
    (*(me->_vptr_IHandleEntity + 61))(me, &angFacing.z, 0, 0);
    forward_move_speed = this->forward_move_speed;
    v25 = (angFacing.z * forward_move_speed) * v26;
    v27 = (v35 * forward_move_speed) * v26;
    v31 = (forward_move_speed * *&vDirection) * v30;
    AbsOrigin = CBaseEntity::GetAbsOrigin(me);
    *&v15 = v27 + AbsOrigin->y;
    *&v16 = v25 + AbsOrigin->x;
    v17 = v31 + AbsOrigin->z;
    vptr_IHandleEntity = me->_vptr_IHandleEntity;
    *(&vDirection + 1) = __PAIR64__(v15, v16);
    vNewLocation.x = v17;
    v19 = (vptr_IHandleEntity[376])(me);
    IsLeashedMovementPrevented = CDOTALocomotor::IsLeashedMovementPrevented(v19, *(&vDirection + 1));
    *&v4 = LODWORD(v24);
    if ( !IsLeashedMovementPrevented )
    {
      CBaseEntity::SetAbsOrigin(me, (&vDirection + 8));
      Caster = CDOTA_Buff::GetCaster(this);
      v22 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
      m_flHullRadius = me->m_flHullRadius;
      v38 = *CBaseEntity::GetAbsOrigin(me);
      CGridNav::DestroyTreesAroundPoint(&g_GridNav, 1, v22, v38, m_flHullRadius, v23);
      *&v4 = LODWORD(v24);
    }
  }
LABEL_10:
  CDOTA_Modifier_Phoenix_SunRay::UpdateBeamEffect(this, v4, dt);
  if ( (me->m_nUnitState64.m_Value & 0x20) != 0 || (me->m_nUnitState64.m_Value & 8) != 0 )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Phoenix_SunRay::OnHorizontalMotionInterrupted  (line 719, @0x0000000002cc8a10, libserver.so)
void __fastcall CDOTA_Modifier_Phoenix_SunRay::OnHorizontalMotionInterrupted(CDOTA_Modifier_Phoenix_SunRay *const this)
{
  ;
}


// CDOTA_Modifier_Phoenix_SunRay::OnIntervalThink  (line 726, @0x0000000002d13550, libserver.so)  // inlines: IsCurrentlyMotionControlled
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CDOTA_Buff::Destroy, CBaseEntity::GetHealth, floorf, CDOTA_BaseNPC::ModifyHealth, CDOTA_Modifier_Phoenix_SunRay::DoBeamDamageAndVision, CDOTALocomotor::ApplyHorizontalMotionController
void __fastcall CDOTA_Modifier_Phoenix_SunRay::OnIntervalThink(CDOTA_Modifier_Phoenix_SunRay *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  __int64 v3; // rax
  bool v4; // zf
  float v5; // xmm0_4
  CDOTA_BaseNPC *v6; // rax
  float v7; // xmm0_4
  int v8; // r12d
  CDOTA_BaseNPC *v9; // rax
  int Health; // r13d
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v13; // rax

  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    v3 = (*(Caster->_vptr_IHandleEntity + 376))(Caster);
    if ( (*(v3 + 216) != 0
       || *(v3 + 224) != 0
       || (Parent = CDOTA_Buff::GetParent(this),
           v13 = (*(Parent->_vptr_IHandleEntity + 376))(Parent),
           CDOTALocomotor::ApplyHorizontalMotionController(v13, &this->CHorizontalMotionController, 0)))
      && (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x20) == 0
      && (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 8) == 0 )
    {
      v4 = !this->m_bTurningFast;
      v5 = this->m_flCurrentTime + this->tick_interval;
      this->m_flCurrentTime = v5;
      if ( !v4 && v5 >= 0.69999999 )
        this->m_bTurningFast = 0;
      v6 = CDOTA_Buff::GetCaster(this);
      v7 = ((CBaseEntity::GetHealth(v6) * (this->hp_cost_perc_per_second / 100.0)) * this->tick_interval)
         + this->m_flAccumulatedSelfDamage;
      this->m_flAccumulatedSelfDamage = v7;
      v8 = floorf(v7);
      if ( v8 > 0 )
      {
        v9 = CDOTA_Buff::GetCaster(this);
        Health = CBaseEntity::GetHealth(v9);
        v11 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::ModifyHealth(v11, Health - v8, 0, 0, 0);
        this->m_flAccumulatedSelfDamage = this->m_flAccumulatedSelfDamage - v8;
      }
      CDOTA_Modifier_Phoenix_SunRay::DoBeamDamageAndVision(this);
    }
    else
    {
      CDOTA_Buff::Destroy(this, 0, 0, 0);
    }
  }
}


// CDOTA_Modifier_Phoenix_SunRay::DoBeamDamageAndVision  (line 771, @0x0000000002d12930, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GrowMemory, HasElement, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, Purge, Set, SetBlockCreepSpawn, ToDOTABaseNPC, VectorAdd, VectorMultiply, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetCaster, KeyValues::KeyValues, KeyValues::SetFloat, CBaseEntity::GetAbsOrigin, DOTA_CreateUnitByName, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, CBaseEntity::SetAbsOrigin, CDOTAFogOfWarSystem::AddFOWEntity, KeyValues::~KeyValues, CDOTA_Buff::GetParent, FindUnitsInRadius (29 total)
// callers: CDOTA_Modifier_Phoenix_SunRay::OnIntervalThink
// strings: "modifier_phoenix_sun_ray_vision", "npc_dota_invisible_vision_source", "particles/units/heroes/hero_phoenix/phoenix_sunray_beam_friend.vpcf", "attach_hitloc", "particles/units/heroes/hero_phoenix/phoenix_sunray_beam_enemy.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Phoenix_SunRay::DoBeamDamageAndVision(CDOTA_Modifier_Phoenix_SunRay *const this)
{
  CDOTA_Modifier_Phoenix_SunRay *m_hVisionThinkers; // r12
  float v3; // xmm1_4
  int m_Value; // r15d
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *UnitByName; // r14
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  const Vector *v12; // rax
  CEntityIdentity *m_pEntity; // rax
  int v14; // edx
  __int16 v15; // cx
  CDOTA_BaseNPC *v16; // rax
  float beam_range; // xmm1_4
  __m128i v18; // xmm4
  __m128i x_low; // xmm3
  float v20; // r14d
  float v21; // r12d
  __m128i z_low; // xmm4
  float v23; // r13d
  CDOTA_BaseNPC *v24; // rax
  const Vector *v25; // rax
  __m128i v26; // xmm6
  vec_t v27; // xmm2_4
  vec_t v28; // xmm1_4
  vec_t v29; // xmm0_4
  float v30; // r12d
  CDOTA_BaseNPC *Parent; // rax
  __int64 v32; // r13
  int v33; // r12d
  CHandle<CBaseEntity> *v34; // rdx
  uint32 m_Index; // eax
  __int16 v36; // cx
  CEntityIdentity *v37; // rdx
  CEntityIdentity *v38; // rdx
  CEntityInstance *m_pInstance; // r14
  char m_CScriptComponent_high; // r15
  CEntityIdentity *v41; // r14
  __int16 v42; // cx
  int v43; // eax
  __int16 v44; // cx
  int v45; // eax
  __int64 v46; // r14
  int v47; // eax
  CHandle<CBaseEntity> *v48; // rax
  CBaseEntity *v49; // rax
  bool v50; // cc
  float m_flCurrentTime; // r12d
  CDOTABaseAbility *v52; // rax
  float Duration; // xmm0_4
  __int64 v54; // r13
  CEntityInstance *v55; // rax
  CEntityInstance *v56; // r12
  __m128i v57; // xmm7
  __m128i v58; // xmm6
  float v59; // r15d
  CDOTABaseAbility *v60; // rax
  CDOTA_BaseNPC *v61; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v63; // rax
  CDOTA_ParticleManager *v64; // rax
  int Health; // r14d
  __int64 v66; // r12
  CEntityInstance *v67; // rax
  CDOTA_BaseNPC *v68; // r13
  __m128i v69; // xmm7
  __m128i v70; // xmm6
  __m128i v71; // xmm7
  __m128i v72; // xmm6
  float v73; // r14d
  CDOTABaseAbility *v74; // r15
  CDOTA_BaseNPC *v75; // rax
  CDOTA_BaseNPC *v76; // r14
  CDOTA_ParticleManager *v77; // rax
  CDOTA_ParticleManager *v78; // rax
  CDOTA_ParticleManager *v79; // rax
  CEntityIdentity *v80; // r14
  __int16 v81; // cx
  int v82; // eax
  __int16 v83; // cx
  int v84; // eax
  __int64 m_Size; // r14
  int v86; // eax
  int nThinkerIndex; // [rsp+34h] [rbp-10Ch]
  float flPercentageDamage; // [rsp+38h] [rbp-108h]
  float flPercentageDamagea; // [rsp+38h] [rbp-108h]
  int flBaseDamage; // [rsp+3Ch] [rbp-104h]
  float flBaseDamagea; // [rsp+3Ch] [rbp-104h]
  float flPercentageHeal; // [rsp+40h] [rbp-100h]
  CDOTA_BaseNPC *flBaseHeala; // [rsp+58h] [rbp-E8h]
  float flBaseHeal; // [rsp+58h] [rbp-E8h]
  CHandle<CBaseEntity> v95[4]; // [rsp+60h] [rbp-E0h] BYREF
  Vector vDirection; // [rsp+70h] [rbp-D0h] BYREF
  Vector vPos; // [rsp+80h] [rbp-C0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > vecHitEnemies; // [rsp+90h] [rbp-B0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > vecHitAllies; // [rsp+B0h] [rbp-90h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > vecEntities; // [rsp+D0h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+F0h] [rbp-50h] BYREF
  unsigned __int64 v102; // [rsp+108h] [rbp-38h]

  v102 = __readfsqword(0x28u);
  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    if ( !this->m_bCreatedVisionThinkers )
    {
      m_hVisionThinkers = this->m_hVisionThinkers;
      while ( 1 )
      {
        KeyValues::KeyValues(&kv, "modifier_phoenix_sun_ray_vision");
        (*(this->_vptr_CDOTA_Buff + 31))(this);
        KeyValues::SetFloat(&kv, "duration", v3);
        m_Value = CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value;
        Caster = CDOTA_Buff::GetCaster(this);
        flBaseHeala = CDOTA_Buff::GetCaster(this);
        v6 = CDOTA_Buff::GetCaster(this);
        AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
        UnitByName = DOTA_CreateUnitByName(
                       "npc_dota_invisible_vision_source",
                       AbsOrigin,
                       0,
                       flBaseHeala,
                       Caster,
                       m_Value);
        if ( UnitByName == 0 )
          break;
        Ability = CDOTA_Buff::GetAbility(this);
        v10 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(UnitByName, v10, Ability, "modifier_phoenix_sun_ray_vision", &kv, 0);
        UnitByName->m_bBlocksCreepSpawn = 0;
        v11 = CDOTA_Buff::GetCaster(this);
        v12 = CBaseEntity::GetAbsOrigin(v11);
        CBaseEntity::SetAbsOrigin(UnitByName, v12);
        CDOTAFogOfWarSystem::AddFOWEntity(&g_DOTAFogOfWarSystem, UnitByName);
        m_pEntity = UnitByName->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v14 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v15 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(m_hVisionThinkers->_vptr_CDOTA_Buff) = v15 | m_hVisionThinkers->_vptr_CDOTA_Buff & 0x8000;
          LODWORD(m_hVisionThinkers->_vptr_CDOTA_Buff) = (v14 << 15) | m_hVisionThinkers->_vptr_CDOTA_Buff & 0x7FFF;
        }
        else
        {
          LODWORD(m_hVisionThinkers->_vptr_CDOTA_Buff) = -1;
        }
        m_hVisionThinkers = (m_hVisionThinkers + 4);
        KeyValues::~KeyValues(&kv);
        if ( m_hVisionThinkers == &this->m_hBeamEnd )
          goto LABEL_10;
      }
      KeyValues::~KeyValues(&kv);
LABEL_10:
      this->m_bCreatedVisionThinkers = 1;
    }
    v16 = CDOTA_Buff::GetCaster(this);
    (*(v16->_vptr_IHandleEntity + 61))(v16, &vDirection, 0, 0);
    beam_range = this->beam_range;
    vecHitEnemies.m_Size = 0;
    vecHitEnemies.m_Memory.m_pMemory = 0;
    vecHitEnemies.m_Memory.m_nAllocationCount = 0;
    vecHitEnemies.m_Memory.m_nGrowSize = 0;
    vecHitAllies.m_Size = 0;
    vecHitAllies.m_Memory.m_pMemory = 0;
    vecHitAllies.m_Memory.m_nAllocationCount = 0;
    vecHitAllies.m_Memory.m_nGrowSize = 0;
    if ( beam_range > 0.0 )
    {
      flPercentageDamage = 0.0;
      flBaseDamage = 0;
      nThinkerIndex = 0;
      while ( 1 )
      {
        v18 = LODWORD(flPercentageDamage);
        x_low = LODWORD(vDirection.x);
        *x_low.m128i_i32 = vDirection.x * flPercentageDamage;
        v20 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
        *v18.m128i_i32 = flPercentageDamage * vDirection.y;
        v21 = COERCE_FLOAT(_mm_cvtsi128_si32(v18));
        z_low = LODWORD(vDirection.z);
        *z_low.m128i_i32 = vDirection.z * flPercentageDamage;
        v23 = COERCE_FLOAT(_mm_cvtsi128_si32(z_low));
        v24 = CDOTA_Buff::GetCaster(this);
        v25 = CBaseEntity::GetAbsOrigin(v24);
        *v26.m128i_i32 = this->radius;
        v27 = v20 + v25->x;
        vecEntities.m_Size = 0;
        v28 = v21 + v25->y;
        v29 = v23 + v25->z;
        vecEntities.m_Memory.m_nAllocationCount = 0;
        vPos.x = v27;
        v30 = COERCE_FLOAT(_mm_cvtsi128_si32(v26));
        vPos.y = v28;
        vPos.z = v29;
        vecEntities.m_Memory.m_pMemory = 0;
        vecEntities.m_Memory.m_nGrowSize = 0;
        Parent = CDOTA_Buff::GetParent(this);
        FindUnitsInRadius(Parent->m_iTeamNum.m_Value, &vPos, 0, v30, &vecEntities, 3, 3, 0, 0, 0);
        if ( vecEntities.m_Size > 0 )
          break;
LABEL_39:
        if ( flBaseDamage == 3 * (flBaseDamage / 3) && nThinkerIndex <= 7 )
        {
          v49 = CEntityHandle::operator CEntityInstance *(&this->m_hVisionThinkers[nThinkerIndex]);
          if ( v49 != 0 )
          {
            CBaseEntity::SetAbsOrigin(v49, &vPos);
            ++nThinkerIndex;
          }
        }
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&vecEntities);
        if ( (vecEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&vecEntities.m_Memory);
          if ( (vecEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&vecEntities.m_Memory);
        }
        ++flBaseDamage;
        v50 = this->beam_range <= (flPercentageDamage + 50.0);
        flPercentageDamage = flPercentageDamage + 50.0;
        if ( v50 )
          goto LABEL_45;
      }
      v32 = 0;
      v33 = 0;
      while ( 1 )
      {
        v34 = &vecEntities.m_Memory.m_pMemory[v32];
        m_Index = vecEntities.m_Memory.m_pMemory[v32].m_Index;
        if ( m_Index + 2 <= 1 )
          goto LABEL_15;
        v36 = v34->m_Index;
        v37 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v34->m_Index) >> 9) & 0x3F];
        if ( v37 == 0 )
          goto LABEL_15;
        v38 = &v37[v36 & 0x1FF];
        if ( v38 == 0 )
          goto LABEL_15;
        if ( m_Index != v38->m_EHandle.m_Index )
          goto LABEL_15;
        m_pInstance = v38->m_pInstance;
        if ( v38->m_pInstance == 0
          || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
          || CDOTA_Buff::GetCaster(this) == m_pInstance )
        {
          goto LABEL_15;
        }
        m_CScriptComponent_high = HIBYTE(m_pInstance[7].m_CScriptComponent);
        if ( m_CScriptComponent_high == CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value )
        {
          v95[0].m_Index = -1;
          v80 = m_pInstance->m_pEntity;
          if ( v80 != 0 )
          {
            v81 = 0x7FFF;
            v82 = (v80->m_EHandle.m_Index >> 15) - (v80->m_flags & 1);
            if ( v80->m_EHandle.m_Index != -1 )
              v81 = v80->m_EHandle.m_Index & 0x7FFF;
            LOWORD(v95[0].m_Index) = v81 | v95[0].m_Index & 0x8000;
            v95[0].m_Index = (v82 << 15) | v95[0].m_Index & 0x7FFF;
          }
          if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(&vecHitAllies, v95) < 0 )
          {
            v95[0].m_Index = -1;
            if ( v80 != 0 )
            {
              v83 = 0x7FFF;
              v84 = (v80->m_EHandle.m_Index >> 15) - (v80->m_flags & 1);
              if ( v80->m_EHandle.m_Index != -1 )
                v83 = v80->m_EHandle.m_Index & 0x7FFF;
              LOWORD(v95[0].m_Index) = v83 | v95[0].m_Index & 0x8000;
              v95[0].m_Index = (v84 << 15) | v95[0].m_Index & 0x7FFF;
            }
            m_Size = vecHitAllies.m_Size;
            v86 = vecHitAllies.m_Size;
            if ( vecHitAllies.m_Size == vecHitAllies.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&vecHitAllies.m_Memory, 1);
              v86 = vecHitAllies.m_Size;
            }
            vecHitAllies.m_Size = v86 + 1;
            v48 = &vecHitAllies.m_Memory.m_pMemory[m_Size];
            if ( v48 != 0 )
              goto LABEL_38;
          }
LABEL_15:
          ++v33;
          ++v32;
          if ( vecEntities.m_Size <= v33 )
            goto LABEL_39;
        }
        else
        {
          if ( LOBYTE(m_pInstance[71]._vptr_IHandleEntity) != 0 || (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 1) != 0 )
            goto LABEL_15;
          v95[0].m_Index = -1;
          v41 = m_pInstance->m_pEntity;
          if ( v41 != 0 )
          {
            v42 = 0x7FFF;
            v43 = (v41->m_EHandle.m_Index >> 15) - (v41->m_flags & 1);
            if ( v41->m_EHandle.m_Index != -1 )
              v42 = v41->m_EHandle.m_Index & 0x7FFF;
            LOWORD(v95[0].m_Index) = v42 | v95[0].m_Index & 0x8000;
            v95[0].m_Index = (v43 << 15) | v95[0].m_Index & 0x7FFF;
          }
          if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(&vecHitEnemies, v95) >= 0 )
            goto LABEL_15;
          v95[0].m_Index = -1;
          if ( v41 != 0 )
          {
            v44 = 0x7FFF;
            v45 = (v41->m_EHandle.m_Index >> 15) - (v41->m_flags & 1);
            if ( v41->m_EHandle.m_Index != -1 )
              v44 = v41->m_EHandle.m_Index & 0x7FFF;
            LOWORD(v95[0].m_Index) = v44 | v95[0].m_Index & 0x8000;
            v95[0].m_Index = (v45 << 15) | v95[0].m_Index & 0x7FFF;
          }
          v46 = vecHitEnemies.m_Size;
          v47 = vecHitEnemies.m_Size;
          if ( vecHitEnemies.m_Size == vecHitEnemies.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&vecHitEnemies.m_Memory, 1);
            v47 = vecHitEnemies.m_Size;
          }
          vecHitEnemies.m_Size = v47 + 1;
          v48 = &vecHitEnemies.m_Memory.m_pMemory[v46];
          if ( v48 == 0 )
            goto LABEL_15;
LABEL_38:
          ++v33;
          ++v32;
          v48->m_Index = v95[0];
          if ( vecEntities.m_Size <= v33 )
            goto LABEL_39;
        }
      }
    }
LABEL_45:
    m_flCurrentTime = this->m_flCurrentTime;
    v52 = CDOTA_Buff::GetAbility(this);
    Duration = CDOTABaseAbility::GetDuration(v52);
    flBaseDamagea = this->base_damage + (this->base_damage * (m_flCurrentTime / Duration));
    flPercentageDamagea = (this->hp_perc_damage + (this->hp_perc_damage * (m_flCurrentTime / Duration))) / 100.0;
    flBaseHeal = this->base_heal + (this->base_heal * (m_flCurrentTime / Duration));
    flPercentageHeal = (this->hp_perc_heal + ((m_flCurrentTime / Duration) * this->hp_perc_heal)) / 100.0;
    if ( vecHitAllies.m_Size > 0 )
    {
      v54 = 0;
      do
      {
        while ( 1 )
        {
          v55 = CEntityHandle::operator CEntityInstance *(&vecHitAllies.m_Memory.m_pMemory[v54]);
          v56 = v55;
          if ( v55 != 0 && BYTE3(v55[7]._vptr_IHandleEntity) != 0 )
          {
            *v57.m128i_i32 = ((*(v55->_vptr_IHandleEntity + 156))(v55) * flPercentageHeal) + flBaseHeal;
            v58 = v57;
            *v58.m128i_i32 = *v57.m128i_i32 * this->tick_interval;
            v59 = COERCE_FLOAT(_mm_cvtsi128_si32(v58));
            v60 = CDOTA_Buff::GetAbility(this);
            CDOTA_BaseNPC::Heal(v56, v59, v60, 0, 1);
            v61 = CDOTA_Buff::GetCaster(this);
            ParticleManager = GetParticleManager();
            LODWORD(v61) = CDOTA_ParticleManager::CreateParticle(
                             ParticleManager,
                             "particles/units/heroes/hero_phoenix/phoenix_sunray_beam_friend.vpcf",
                             1,
                             v56,
                             0,
                             v61);
            v63 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControlEnt(v63, v61, 1, v56, 5, "attach_hitloc", vec3_invalid, 1);
            v64 = GetParticleManager();
            CDOTA_ParticleManager::ReleaseParticleIndex(v64, v61);
            if ( (v56[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
            {
              Health = CBaseEntity::GetHealth(v56);
              if ( Health < (*(v56->_vptr_IHandleEntity + 156))(v56) )
                break;
            }
          }
          if ( vecHitAllies.m_Size <= ++v54 )
            goto LABEL_53;
        }
        SendOverheadEventMessage(0, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, v56, v59, 0);
        ++v54;
      }
      while ( vecHitAllies.m_Size > v54 );
    }
LABEL_53:
    if ( vecHitEnemies.m_Size > 0 )
    {
      v66 = 0;
      do
      {
        v67 = CEntityHandle::operator CEntityInstance *(&vecHitEnemies.m_Memory.m_pMemory[v66]);
        v68 = v67;
        if ( v67 != 0
          && BYTE3(v67[7]._vptr_IHandleEntity) != 0
          && BYTE5(v67[45]._vptr_IHandleEntity) == 0
          && (BYTE1(v67[58]._vptr_IHandleEntity) & 2) == 0 )
        {
          *v69.m128i_i32 = (*(v67->_vptr_IHandleEntity + 156))(v67);
          v70 = v69;
          *v70.m128i_i32 = *v69.m128i_i32 * flPercentageDamagea;
          v71 = v70;
          *v71.m128i_i32 = *v70.m128i_i32 + flBaseDamagea;
          v72 = v71;
          *v72.m128i_i32 = *v71.m128i_i32 * this->tick_interval;
          v73 = COERCE_FLOAT(_mm_cvtsi128_si32(v72));
          v74 = CDOTA_Buff::GetAbility(this);
          v75 = CDOTA_Buff::GetCaster(this);
          ApplyDamage(v75, v68, v74, v73, 2, 0);
          v76 = CDOTA_Buff::GetCaster(this);
          v77 = GetParticleManager();
          LODWORD(v76) = CDOTA_ParticleManager::CreateParticle(
                           v77,
                           "particles/units/heroes/hero_phoenix/phoenix_sunray_beam_enemy.vpcf",
                           1,
                           v68,
                           0,
                           v76);
          v78 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v78, v76, 1, v68, 5, "attach_hitloc", vec3_invalid, 1);
          v79 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v79, v76);
        }
        ++v66;
      }
      while ( vecHitEnemies.m_Size > v66 );
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&vecHitAllies);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&vecHitEnemies);
  }
}


// CDOTA_Modifier_Phoenix_SunRay::UpdateBeamEffect  (line 896, @0x0000000002cdff40, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Set, VectorAdd, VectorMultiply, operator CEntityInstance*, operator*, operator+, operator->, operator=
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, GetGroundHeight, CBaseEntity::SetAbsOrigin, Create_Looping_Sound_Unit, GetParticleManager, CDOTA_ParticleManager::SetParticleControlFallback
// callers: CDOTA_Modifier_Phoenix_SunRay::UpdateHorizontalMotion, CDOTA_Modifier_Phoenix_IcarusDive::UpdateHorizontalMotion, CDOTA_Modifier_Phoenix_SunRay::OnCreated
// strings: "Hero_Phoenix.SunRay.Loop"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Phoenix_SunRay::UpdateBeamEffect(
        CDOTA_Modifier_Phoenix_SunRay *const this,
        double a2,
        float flTurnAmount)
{
  CDOTA_BaseNPC *Parent; // rax
  __m128i x_low; // xmm3
  float beam_range; // xmm0_4
  __m128i y_low; // xmm4
  float v8; // r12d
  float v9; // r13d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  vec_t v12; // xmm1_4
  vec_t v13; // xmm0_4
  CDOTA_BaseNPC *v14; // rax
  float GroundHeight; // xmm0_4
  uint32 m_Index; // eax
  CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  uint32 v20; // eax
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  int m_Value; // r12d
  CDOTA_BaseNPC *v24; // rax
  CDOTA_Unit_LoopingSound *Looping_Sound_Unit; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v27; // eax
  __int16 v28; // cx
  CDOTA_BaseNPC *v29; // rax
  const Vector *v30; // rax
  int m_nBeamFXIndex; // r13d
  const Vector *v32; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v34; // rax
  CDOTA_BaseNPC *v35; // rax
  const Vector *v36; // rax
  int v37; // ebx
  const Vector *v38; // r12
  CDOTA_ParticleManager *v39; // rax
  float v40; // [rsp+Ch] [rbp-44h]
  Vector vDirection; // [rsp+10h] [rbp-40h] BYREF
  Vector vBeamEnd; // [rsp+20h] [rbp-30h] BYREF

  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    (*(Parent->_vptr_IHandleEntity + 61))(Parent, &vDirection, 0, 0);
    x_low = LODWORD(vDirection.x);
    beam_range = this->beam_range;
    y_low = LODWORD(vDirection.y);
    *x_low.m128i_i32 = vDirection.x * beam_range;
    *y_low.m128i_i32 = vDirection.y * beam_range;
    v8 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
    v9 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
    v40 = beam_range * vDirection.z;
    Caster = CDOTA_Buff::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
    v12 = v9 + AbsOrigin->y;
    v13 = v40 + AbsOrigin->z;
    vBeamEnd.x = v8 + AbsOrigin->x;
    vBeamEnd.y = v12;
    vBeamEnd.z = v13;
    v14 = CDOTA_Buff::GetCaster(this);
    GroundHeight = GetGroundHeight(&vBeamEnd, v14);
    m_Index = this->m_hBeamEnd.m_Index;
    m_pInstance = 0;
    vBeamEnd.z = GroundHeight + 92.0;
    if ( m_Index + 2 > 1 )
    {
      v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBeamEnd.m_Index) >> 9) & 0x3F];
      if ( v18 != 0 )
      {
        v19 = &v18[this->m_hBeamEnd.m_Index & 0x1FF];
        if ( v19 != 0 && m_Index == v19->m_EHandle.m_Index )
          m_pInstance = v19->m_pInstance;
      }
    }
    CBaseEntity::SetAbsOrigin(m_pInstance, &vBeamEnd);
    v20 = this->m_hBeamEndSound.m_Index;
    if ( v20 + 2 > 1
      && (v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hBeamEndSound.m_Index) >> 9) & 0x3F]) != 0
      && (v22 = &v21[this->m_hBeamEndSound.m_Index & 0x1FF]) != 0
      && v20 == v22->m_EHandle.m_Index
      && v22->m_pInstance != 0 )
    {
      CBaseEntity::SetAbsOrigin(v22->m_pInstance, &vBeamEnd);
    }
    else
    {
      m_Value = CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value;
      v24 = CDOTA_Buff::GetCaster(this);
      Looping_Sound_Unit = Create_Looping_Sound_Unit(v24, m_Value, "Hero_Phoenix.SunRay.Loop", vBeamEnd);
      if ( Looping_Sound_Unit != 0 && (m_pEntity = Looping_Sound_Unit->m_pEntity) != 0 )
      {
        v27 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v28 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v28 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hBeamEndSound.m_Index) = v28 | this->m_hBeamEndSound.m_Index & 0x8000;
        this->m_hBeamEndSound.m_Index = (v27 << 15) | this->m_hBeamEndSound.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hBeamEndSound.m_Index = -1;
      }
    }
    v29 = CDOTA_Buff::GetCaster(this);
    v30 = CBaseEntity::GetAbsOrigin(v29);
    m_nBeamFXIndex = this->m_nBeamFXIndex;
    v32 = v30;
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlFallback(ParticleManager, m_nBeamFXIndex, 0, *&v32->x, v32->z);
    LODWORD(v32) = this->m_nBeamFXIndex;
    v34 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlFallback(v34, v32, 1, *&vBeamEnd.x, vBeamEnd.z);
    v35 = CDOTA_Buff::GetCaster(this);
    v36 = CBaseEntity::GetAbsOrigin(v35);
    v37 = this->m_nBeamFXIndex;
    v38 = v36;
    v39 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlFallback(v39, v37, 9, *&v38->x, v38->z);
  }
}


// CDOTA_Ability_Phoenix_SunRayToggleMove::~CDOTA_Ability_Phoenix_SunRayToggleMove  (line 933, @0x0000000002d2b500, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Phoenix_SunRayToggleMove::~CDOTA_Ability_Phoenix_SunRayToggleMove(
        CDOTA_Ability_Phoenix_SunRayToggleMove *const this)
{
  this->_vptr_IHandleEntity = &off_460B470;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Phoenix_SunRayToggleMove::~CDOTA_Ability_Phoenix_SunRayToggleMove  (line 933, @0x0000000002d2b520, libserver.so)  // inlines: ~CDOTA_Ability_Phoenix_SunRayToggleMove
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Phoenix_SunRayToggleMove::~CDOTA_Ability_Phoenix_SunRayToggleMove(
        CDOTA_Ability_Phoenix_SunRayToggleMove *const this)
{
  this->_vptr_IHandleEntity = &off_460B470;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Phoenix_SunRayToggleMove::Schema_DynamicBinding  (line 935, @0x0000000002d1c990, libserver.so)
// globals: CDOTA_Ability_Phoenix_SunRayToggleMove::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Phoenix_SunRayToggleMove::Schema_DynamicBinding(
        const CDOTA_Ability_Phoenix_SunRayToggleMove *const this)
{
  return CDOTA_Ability_Phoenix_SunRayToggleMove::s_pSchemaBinding;
}


// CDOTA_Ability_Phoenix_SunRayToggleMove::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 935, @0x0000000002d1c9a0, libserver.so)
// globals: CDOTA_Ability_Phoenix_SunRayToggleMove::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Phoenix_SunRayToggleMove::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Phoenix_SunRayToggleMove::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Phoenix_SunRayToggleMove::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Phoenix_SunRayToggleMove::CEntityInstanceEntityClass::DestructInstance  (line 935, @0x0000000002d1c9b0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Phoenix_SunRayToggleMove>
void __fastcall CDOTA_Ability_Phoenix_SunRayToggleMove::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Phoenix_SunRayToggleMove::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Phoenix_SunRayToggleMove::CEntityInstanceEntityClass::FreeInstance  (line 935, @0x0000000002d1c9d0, libserver.so)
void __fastcall CDOTA_Ability_Phoenix_SunRayToggleMove::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Phoenix_SunRayToggleMove::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Phoenix_SunRayToggleMove::CEntityInstanceEntityClass::CanAllocate  (line 935, @0x0000000002d1c9f0, libserver.so)
bool __fastcall CDOTA_Ability_Phoenix_SunRayToggleMove::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Phoenix_SunRayToggleMove::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Phoenix_SunRayToggleMove::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 935, @0x0000000002d1ca00, libserver.so)
// globals: CDOTA_Ability_Phoenix_SunRayToggleMove::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Phoenix_SunRayToggleMove::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Phoenix_SunRayToggleMove::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Phoenix_SunRayToggleMove::s_pSchemaBinding;
}


// CDOTA_Ability_Phoenix_SunRayToggleMove::CEntityInstanceEntityClass::AllocateInstance  (line 935, @0x0000000002d240d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Phoenix_SunRayToggleMove::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Phoenix_SunRayToggleMove::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Phoenix_SunRayToggleMove::CEntityInstanceEntityClass::ConstructInstance  (line 935, @0x0000000002d28c30, libserver.so)  // inlines: CDOTA_Ability_Phoenix_SunRayToggleMove, Construct<CDOTA_Ability_Phoenix_SunRayToggleMove>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Phoenix_SunRayToggleMove::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Phoenix_SunRayToggleMove::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_460B470;
  }
  return p;
}


// CDOTA_Ability_Phoenix_SunRayToggleMove::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 935, @0x0000000002d33910, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Phoenix_SunRayToggleMove::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Phoenix_SunRayToggleMove::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Phoenix_SunRayToggleMove::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 935, @0x0000000002d33930, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Phoenix_SunRayToggleMove::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Phoenix_SunRayToggleMove::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Phoenix_SunRayToggleMove::GetEntityClassInternal  (line 935, @0x0000000002d47240, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "phoenix_sun_ray_toggle_move", "CDOTA_Ability_Phoenix_SunRayToggleMove"
// globals: `guard variable for'CDOTA_Ability_Phoenix_SunRayToggleMove::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveClass, CDOTA_Ability_Phoenix_SunRayToggleMove::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveClass, __dso_handle, CDOTA_Ability_Phoenix_SunRayToggleMove::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Phoenix_SunRayToggleMove::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveClassInfo, CDOTA_Ability_Phoenix_SunRayToggleMove::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveClassInfo
CEntityClass *__cdecl CDOTA_Ability_Phoenix_SunRayToggleMove::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Phoenix_SunRayToggleMove::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Phoenix_SunRayToggleMove::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Phoenix_SunRayToggleMove::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveClass);
    CDOTA_Ability_Phoenix_SunRayToggleMove::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveClass._vptr_CEntityClass = off_460B3F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Phoenix_SunRayToggleMove::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveClass);
    __cxa_atexit(
      CDOTA_Ability_Phoenix_SunRayToggleMove::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Phoenix_SunRayToggleMove::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Phoenix_SunRayToggleMoveClass != 0 )
    return &CDOTA_Ability_Phoenix_SunRayToggleMove::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveClass;
  if ( `guard variable for'CDOTA_Ability_Phoenix_SunRayToggleMove::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Phoenix_SunRayToggleMove::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Phoenix_SunRayToggleMove::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveClassInfo,
      "CDOTA_Ability_Phoenix_SunRayToggleMove",
      "phoenix_sun_ray_toggle_move",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Phoenix_SunRayToggleMove::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveClassInfo);
  }
  CDOTA_Ability_Phoenix_SunRayToggleMove::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveClass.m_pClassInfo = &CDOTA_Ability_Phoenix_SunRayToggleMove::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveClassInfo;
  CDOTA_Ability_Phoenix_SunRayToggleMove::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveClass.m_pBaseClassInfo = CDOTA_Ability_Phoenix_SunRayToggleMove::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Phoenix_SunRayToggleMoveClass = &CDOTA_Ability_Phoenix_SunRayToggleMove::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveClass;
  CDOTA_Ability_Phoenix_SunRayToggleMove::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveClassInfo.m_pClass = &CDOTA_Ability_Phoenix_SunRayToggleMove::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveClass;
  CDOTA_Ability_Phoenix_SunRayToggleMove::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Phoenix_SunRayToggleMoveClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Phoenix_SunRayToggleMove::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveClass;
}


// CDOTA_Ability_Phoenix_SunRayToggleMove::IsHiddenWhenStolen  (line 939, @0x0000000002d1ca10, libserver.so)
bool __fastcall CDOTA_Ability_Phoenix_SunRayToggleMove::IsHiddenWhenStolen(
        CDOTA_Ability_Phoenix_SunRayToggleMove *const this)
{
  return 1;
}


// CDOTA_Ability_Phoenix_SunRayToggleMove::ProcsMagicStick  (line 940, @0x0000000002d1ca20, libserver.so)
bool __fastcall CDOTA_Ability_Phoenix_SunRayToggleMove::ProcsMagicStick(
        CDOTA_Ability_Phoenix_SunRayToggleMove *const this)
{
  return 0;
}


// CDOTA_Ability_Phoenix_SunRayToggleMove::GetAssociatedPrimaryAbilities  (line 942, @0x0000000002d1ca30, libserver.so)
const char *__fastcall CDOTA_Ability_Phoenix_SunRayToggleMove::GetAssociatedPrimaryAbilities(
        CDOTA_Ability_Phoenix_SunRayToggleMove *const this)
{
  return "phoenix_sun_ray";
}


// CDOTA_Ability_Phoenix_SunRayToggleMove::GetAssociatedSecondaryAbilities  (line 943, @0x0000000002d1ca40, libserver.so)
// strings: "phoenix_sun_ray_stop;phoenix_sun_ray_toggle_move_empty"
const char *__fastcall CDOTA_Ability_Phoenix_SunRayToggleMove::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Phoenix_SunRayToggleMove *const this)
{
  return "phoenix_sun_ray_stop;phoenix_sun_ray_toggle_move_empty";
}


// CDOTA_Ability_Phoenix_SunRayToggleMove::OnSpellStart  (line 950, @0x0000000002ccc210, libserver.so)  // inlines: ToggleMovement
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_phoenix_sun_ray"
void __fastcall CDOTA_Ability_Phoenix_SunRayToggleMove::OnSpellStart(
        CDOTA_Ability_Phoenix_SunRayToggleMove *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_phoenix_sun_ray", 0);
  if ( ModifierByName != 0 )
    LOBYTE(ModifierByName[1].m_pCachedModifierAuraFactory) ^= 1u;
}


// CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::~CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty  (line 968, @0x0000000002d2b550, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::~CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty(
        CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty *const this)
{
  this->_vptr_IHandleEntity = &off_460BF70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::~CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty  (line 968, @0x0000000002d2b570, libserver.so)  // inlines: ~CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::~CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty(
        CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty *const this)
{
  this->_vptr_IHandleEntity = &off_460BF70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::Schema_DynamicBinding  (line 970, @0x0000000002d1ca50, libserver.so)
// globals: CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::Schema_DynamicBinding(
        const CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty *const this)
{
  return CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::s_pSchemaBinding;
}


// CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 970, @0x0000000002d1ca60, libserver.so)
// globals: CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::CEntityInstanceEntityClass::DestructInstance  (line 970, @0x0000000002d1ca70, libserver.so)  // inlines: Destruct<CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty>
void __fastcall CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::CEntityInstanceEntityClass::FreeInstance  (line 970, @0x0000000002d1ca90, libserver.so)
void __fastcall CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::CEntityInstanceEntityClass::CanAllocate  (line 970, @0x0000000002d1cab0, libserver.so)
bool __fastcall CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 970, @0x0000000002d1cac0, libserver.so)
// globals: CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::s_pSchemaBinding;
}


// CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::CEntityInstanceEntityClass::AllocateInstance  (line 970, @0x0000000002d24110, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::CEntityInstanceEntityClass::ConstructInstance  (line 970, @0x0000000002d28c60, libserver.so)  // inlines: CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty, Construct<CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_460BF70;
  }
  return p;
}


// CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 970, @0x0000000002d33960, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 970, @0x0000000002d33980, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal  (line 970, @0x0000000002d51190, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "phoenix_sun_ray_toggle_move_empty", "CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty"
// globals: `guard variable for'CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass, CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClassInfo, CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClassInfo
CEntityClass *__cdecl CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass) != 0 )
  {
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_pClassInfo = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_flags = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_pInputs = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_nInputCount = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_pOutputs = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_nOutputCount = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_pGameClass = 0;
    CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass._vptr_CEntityClass = off_460BEF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass);
    __cxa_atexit(
      CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass != 0 )
    return &CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass;
  if ( `guard variable for'CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClassInfo,
      "CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty",
      "phoenix_sun_ray_toggle_move_empty",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClassInfo);
  }
  CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_pClassInfo = &CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClassInfo;
  CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_pBaseClassInfo = CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass = &CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass;
  CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClassInfo.m_pClass = &CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass;
  CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Phoenix_SunRayToggleMoveEmpty::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SunRayToggleMoveEmptyClass;
}


// CDOTA_Ability_Phoenix_IcarusDive::~CDOTA_Ability_Phoenix_IcarusDive  (line 983, @0x0000000002d2b5a0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Phoenix_IcarusDive::~CDOTA_Ability_Phoenix_IcarusDive(
        CDOTA_Ability_Phoenix_IcarusDive *const this)
{
  this->_vptr_IHandleEntity = &off_460CA70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Phoenix_IcarusDive::~CDOTA_Ability_Phoenix_IcarusDive  (line 983, @0x0000000002d2b5c0, libserver.so)  // inlines: ~CDOTA_Ability_Phoenix_IcarusDive
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Phoenix_IcarusDive::~CDOTA_Ability_Phoenix_IcarusDive(
        CDOTA_Ability_Phoenix_IcarusDive *const this)
{
  this->_vptr_IHandleEntity = &off_460CA70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Phoenix_IcarusDive::Schema_DynamicBinding  (line 985, @0x0000000002d1cad0, libserver.so)
// globals: CDOTA_Ability_Phoenix_IcarusDive::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Phoenix_IcarusDive::Schema_DynamicBinding(
        const CDOTA_Ability_Phoenix_IcarusDive *const this)
{
  return CDOTA_Ability_Phoenix_IcarusDive::s_pSchemaBinding;
}


// CDOTA_Ability_Phoenix_IcarusDive::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 985, @0x0000000002d1cae0, libserver.so)
// globals: CDOTA_Ability_Phoenix_IcarusDive::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Phoenix_IcarusDive::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Phoenix_IcarusDive::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Phoenix_IcarusDive::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Phoenix_IcarusDive::CEntityInstanceEntityClass::DestructInstance  (line 985, @0x0000000002d1caf0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Phoenix_IcarusDive>
void __fastcall CDOTA_Ability_Phoenix_IcarusDive::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Phoenix_IcarusDive::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Phoenix_IcarusDive::CEntityInstanceEntityClass::FreeInstance  (line 985, @0x0000000002d1cb10, libserver.so)
void __fastcall CDOTA_Ability_Phoenix_IcarusDive::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Phoenix_IcarusDive::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Phoenix_IcarusDive::CEntityInstanceEntityClass::CanAllocate  (line 985, @0x0000000002d1cb30, libserver.so)
bool __fastcall CDOTA_Ability_Phoenix_IcarusDive::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Phoenix_IcarusDive::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Phoenix_IcarusDive::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 985, @0x0000000002d1cb40, libserver.so)
// globals: CDOTA_Ability_Phoenix_IcarusDive::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Phoenix_IcarusDive::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Phoenix_IcarusDive::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Phoenix_IcarusDive::s_pSchemaBinding;
}


// CDOTA_Ability_Phoenix_IcarusDive::CEntityInstanceEntityClass::AllocateInstance  (line 985, @0x0000000002d24150, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Phoenix_IcarusDive::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Phoenix_IcarusDive::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Phoenix_IcarusDive::CEntityInstanceEntityClass::ConstructInstance  (line 985, @0x0000000002d28c90, libserver.so)  // inlines: CDOTA_Ability_Phoenix_IcarusDive, Construct<CDOTA_Ability_Phoenix_IcarusDive>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Phoenix_IcarusDive::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Phoenix_IcarusDive::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_460CA70;
  }
  return p;
}


// CDOTA_Ability_Phoenix_IcarusDive::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 985, @0x0000000002d339b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Phoenix_IcarusDive::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Phoenix_IcarusDive::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Phoenix_IcarusDive::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 985, @0x0000000002d339d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Phoenix_IcarusDive::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Phoenix_IcarusDive::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Phoenix_IcarusDive::GetEntityClassInternal  (line 985, @0x0000000002d47390, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "CDOTA_Ability_Phoenix_IcarusDive"
// globals: `guard variable for'CDOTA_Ability_Phoenix_IcarusDive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveClass, CDOTA_Ability_Phoenix_IcarusDive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveClass, __dso_handle, CDOTA_Ability_Phoenix_IcarusDive::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Phoenix_IcarusDive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveClassInfo, CDOTA_Ability_Phoenix_IcarusDive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveClassInfo
CEntityClass *__cdecl CDOTA_Ability_Phoenix_IcarusDive::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Phoenix_IcarusDive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Phoenix_IcarusDive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Phoenix_IcarusDive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveClass);
    CDOTA_Ability_Phoenix_IcarusDive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveClass._vptr_CEntityClass = off_460C9F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Phoenix_IcarusDive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveClass);
    __cxa_atexit(
      CDOTA_Ability_Phoenix_IcarusDive::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Phoenix_IcarusDive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Phoenix_IcarusDiveClass != 0 )
    return &CDOTA_Ability_Phoenix_IcarusDive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveClass;
  if ( `guard variable for'CDOTA_Ability_Phoenix_IcarusDive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Phoenix_IcarusDive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Phoenix_IcarusDive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveClassInfo,
      "CDOTA_Ability_Phoenix_IcarusDive",
      "phoenix_icarus_dive",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Phoenix_IcarusDive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveClassInfo);
  }
  CDOTA_Ability_Phoenix_IcarusDive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveClass.m_pClassInfo = &CDOTA_Ability_Phoenix_IcarusDive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveClassInfo;
  CDOTA_Ability_Phoenix_IcarusDive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveClass.m_pBaseClassInfo = CDOTA_Ability_Phoenix_IcarusDive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Phoenix_IcarusDiveClass = &CDOTA_Ability_Phoenix_IcarusDive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveClass;
  CDOTA_Ability_Phoenix_IcarusDive::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveClassInfo.m_pClass = &CDOTA_Ability_Phoenix_IcarusDive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveClass;
  CDOTA_Ability_Phoenix_IcarusDive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Phoenix_IcarusDiveClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Phoenix_IcarusDive::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveClass;
}


// CDOTA_Ability_Phoenix_IcarusDive::GetAssociatedSecondaryAbilities  (line 991, @0x0000000002d1cb50, libserver.so)
// strings: "phoenix_icarus_dive_stop"
const char *__fastcall CDOTA_Ability_Phoenix_IcarusDive::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Phoenix_IcarusDive *const this)
{
  return "phoenix_icarus_dive_stop";
}


// CDOTA_Ability_Phoenix_IcarusDive::OnSpellStart  (line 1004, @0x0000000002cfca10, libserver.so)  // inlines: GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, RemoveHealthPercent, KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::SwapAbilities, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "hp_cost_perc", "modifier_phoenix_icarus_dive", "phoenix_icarus_dive_stop", "Hero_Phoenix.IcarusDive.Cast"
void __fastcall CDOTA_Ability_Phoenix_IcarusDive::OnSpellStart(CDOTA_Ability_Phoenix_IcarusDive *const this)
{
  int LevelSpecialValue; // eax
  int v3; // r12d
  CDOTA_BaseNPC *Caster; // rax
  float v5; // xmm1_4
  CDOTA_BaseNPC *v6; // r13
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "hp_cost_perc", -1, 0);
  this->hp_cost_perc = LevelSpecialValue;
  v3 = LevelSpecialValue;
  Caster = CDOTABaseAbility::GetCaster(this);
  RemoveHealthPercent(Caster, v3);
  KeyValues::KeyValues(&kv, "modifier_phoenix_icarus_dive");
  CDOTABaseAbility::GetDuration(this);
  KeyValues::SetFloat(&kv, "duration", v5);
  v6 = CDOTABaseAbility::GetCaster(this);
  v7 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v7, v6, this, "modifier_phoenix_icarus_dive", &kv, 0);
  v8 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::SwapAbilities(v8, "phoenix_icarus_dive", "phoenix_icarus_dive_stop", 0, 1);
  v9 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(2, "Hero_Phoenix.IcarusDive.Cast", v9);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Phoenix_IcarusDive::OnUpgrade  (line 1022, @0x0000000002ccbd60, libserver.so)
// calls: CDOTABaseAbility::OnUpgrade, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName
// strings: "phoenix_icarus_dive_stop"
void __fastcall CDOTA_Ability_Phoenix_IcarusDive::OnUpgrade(CDOTA_Ability_Phoenix_IcarusDive *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  CDOTABaseAbility::OnUpgrade(this);
  if ( CDOTABaseAbility::GetCaster(this) != 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "phoenix_icarus_dive_stop", 0);
    if ( AbilityByName != 0 )
      (*(AbilityByName->_vptr_IHandleEntity + 212))(AbilityByName, this->m_iLevel.m_Value);
  }
}


// CDOTA_Ability_Phoenix_IcarusDive::OnUnStolen  (line 1040, @0x0000000002ccbfa0, libserver.so)
// calls: CDOTABaseAbility::OnUnStolen, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_phoenix_icarus_dive"
void __fastcall CDOTA_Ability_Phoenix_IcarusDive::OnUnStolen(CDOTA_Ability_Phoenix_IcarusDive *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  CDOTABaseAbility::OnUnStolen(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_phoenix_icarus_dive");
}


// CDOTA_Ability_Phoenix_IcarusDive::GetAbilityDamageToTargetOverInterval  (line 1051, @0x0000000002d034c0, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "burn_duration"
__int64 __fastcall CDOTA_Ability_Phoenix_IcarusDive::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Phoenix_IcarusDive *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  float fIntervala; // [rsp+0h] [rbp-1Ch]
  float fIntervalb; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    fIntervala = fminf(fInterval, CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "burn_duration", -1, 0));
    fIntervalb = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_per_second", -1, 0) * fIntervala;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalb);
  }
  return result;
}


// CDOTA_Ability_Phoenix_IcarusDive::GetSlowDuration  (line 1064, @0x0000000002cf6300, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "burn_duration"
float __fastcall CDOTA_Ability_Phoenix_IcarusDive::GetSlowDuration(CDOTA_Ability_Phoenix_IcarusDive *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "burn_duration", -1, 0);
}


// CDOTA_Ability_Phoenix_IcarusDiveStop::~CDOTA_Ability_Phoenix_IcarusDiveStop  (line 1075, @0x0000000002d2b5f0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Phoenix_IcarusDiveStop::~CDOTA_Ability_Phoenix_IcarusDiveStop(
        CDOTA_Ability_Phoenix_IcarusDiveStop *const this)
{
  this->_vptr_IHandleEntity = &off_460D570;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Phoenix_IcarusDiveStop::~CDOTA_Ability_Phoenix_IcarusDiveStop  (line 1075, @0x0000000002d2b610, libserver.so)  // inlines: ~CDOTA_Ability_Phoenix_IcarusDiveStop
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Phoenix_IcarusDiveStop::~CDOTA_Ability_Phoenix_IcarusDiveStop(
        CDOTA_Ability_Phoenix_IcarusDiveStop *const this)
{
  this->_vptr_IHandleEntity = &off_460D570;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Phoenix_IcarusDiveStop::Schema_DynamicBinding  (line 1077, @0x0000000002d1cb60, libserver.so)
// globals: CDOTA_Ability_Phoenix_IcarusDiveStop::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Phoenix_IcarusDiveStop::Schema_DynamicBinding(
        const CDOTA_Ability_Phoenix_IcarusDiveStop *const this)
{
  return CDOTA_Ability_Phoenix_IcarusDiveStop::s_pSchemaBinding;
}


// CDOTA_Ability_Phoenix_IcarusDiveStop::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1077, @0x0000000002d1cb70, libserver.so)
// globals: CDOTA_Ability_Phoenix_IcarusDiveStop::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Phoenix_IcarusDiveStop::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Phoenix_IcarusDiveStop::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Phoenix_IcarusDiveStop::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Phoenix_IcarusDiveStop::CEntityInstanceEntityClass::DestructInstance  (line 1077, @0x0000000002d1cb80, libserver.so)  // inlines: Destruct<CDOTA_Ability_Phoenix_IcarusDiveStop>
void __fastcall CDOTA_Ability_Phoenix_IcarusDiveStop::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Phoenix_IcarusDiveStop::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Phoenix_IcarusDiveStop::CEntityInstanceEntityClass::FreeInstance  (line 1077, @0x0000000002d1cba0, libserver.so)
void __fastcall CDOTA_Ability_Phoenix_IcarusDiveStop::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Phoenix_IcarusDiveStop::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Phoenix_IcarusDiveStop::CEntityInstanceEntityClass::CanAllocate  (line 1077, @0x0000000002d1cbc0, libserver.so)
bool __fastcall CDOTA_Ability_Phoenix_IcarusDiveStop::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Phoenix_IcarusDiveStop::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Phoenix_IcarusDiveStop::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1077, @0x0000000002d1cbd0, libserver.so)
// globals: CDOTA_Ability_Phoenix_IcarusDiveStop::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Phoenix_IcarusDiveStop::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Phoenix_IcarusDiveStop::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Phoenix_IcarusDiveStop::s_pSchemaBinding;
}


// CDOTA_Ability_Phoenix_IcarusDiveStop::CEntityInstanceEntityClass::AllocateInstance  (line 1077, @0x0000000002d24190, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Phoenix_IcarusDiveStop::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Phoenix_IcarusDiveStop::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Phoenix_IcarusDiveStop::CEntityInstanceEntityClass::ConstructInstance  (line 1077, @0x0000000002d28cc0, libserver.so)  // inlines: CDOTA_Ability_Phoenix_IcarusDiveStop, Construct<CDOTA_Ability_Phoenix_IcarusDiveStop>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Phoenix_IcarusDiveStop::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Phoenix_IcarusDiveStop::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_460D570;
  }
  return p;
}


// CDOTA_Ability_Phoenix_IcarusDiveStop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1077, @0x0000000002d33a00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Phoenix_IcarusDiveStop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Phoenix_IcarusDiveStop::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Phoenix_IcarusDiveStop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1077, @0x0000000002d33a20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Phoenix_IcarusDiveStop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Phoenix_IcarusDiveStop::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Phoenix_IcarusDiveStop::GetEntityClassInternal  (line 1077, @0x0000000002d474e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "phoenix_icarus_dive_stop", "CDOTA_Ability_Phoenix_IcarusDiveStop"
// globals: `guard variable for'CDOTA_Ability_Phoenix_IcarusDiveStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveStopClass, CDOTA_Ability_Phoenix_IcarusDiveStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveStopClass, __dso_handle, CDOTA_Ability_Phoenix_IcarusDiveStop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Phoenix_IcarusDiveStop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveStopClassInfo, CDOTA_Ability_Phoenix_IcarusDiveStop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveStopClassInfo
CEntityClass *__cdecl CDOTA_Ability_Phoenix_IcarusDiveStop::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Phoenix_IcarusDiveStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveStopClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Phoenix_IcarusDiveStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveStopClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Phoenix_IcarusDiveStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveStopClass);
    CDOTA_Ability_Phoenix_IcarusDiveStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveStopClass._vptr_CEntityClass = off_460D4F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Phoenix_IcarusDiveStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveStopClass);
    __cxa_atexit(
      CDOTA_Ability_Phoenix_IcarusDiveStop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Phoenix_IcarusDiveStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveStopClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Phoenix_IcarusDiveStopClass != 0 )
    return &CDOTA_Ability_Phoenix_IcarusDiveStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveStopClass;
  if ( `guard variable for'CDOTA_Ability_Phoenix_IcarusDiveStop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveStopClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Phoenix_IcarusDiveStop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveStopClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Phoenix_IcarusDiveStop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveStopClassInfo,
      "CDOTA_Ability_Phoenix_IcarusDiveStop",
      "phoenix_icarus_dive_stop",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Phoenix_IcarusDiveStop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveStopClassInfo);
  }
  CDOTA_Ability_Phoenix_IcarusDiveStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveStopClass.m_pClassInfo = &CDOTA_Ability_Phoenix_IcarusDiveStop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveStopClassInfo;
  CDOTA_Ability_Phoenix_IcarusDiveStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveStopClass.m_pBaseClassInfo = CDOTA_Ability_Phoenix_IcarusDiveStop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveStopClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Phoenix_IcarusDiveStopClass = &CDOTA_Ability_Phoenix_IcarusDiveStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveStopClass;
  CDOTA_Ability_Phoenix_IcarusDiveStop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveStopClassInfo.m_pClass = &CDOTA_Ability_Phoenix_IcarusDiveStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveStopClass;
  CDOTA_Ability_Phoenix_IcarusDiveStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveStopClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Phoenix_IcarusDiveStopClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Phoenix_IcarusDiveStop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_IcarusDiveStopClass;
}


// CDOTA_Ability_Phoenix_IcarusDiveStop::IsHiddenWhenStolen  (line 1082, @0x0000000002d1cbe0, libserver.so)
bool __fastcall CDOTA_Ability_Phoenix_IcarusDiveStop::IsHiddenWhenStolen(
        CDOTA_Ability_Phoenix_IcarusDiveStop *const this)
{
  return 1;
}


// CDOTA_Ability_Phoenix_IcarusDiveStop::ProcsMagicStick  (line 1083, @0x0000000002d1cbf0, libserver.so)
bool __fastcall CDOTA_Ability_Phoenix_IcarusDiveStop::ProcsMagicStick(CDOTA_Ability_Phoenix_IcarusDiveStop *const this)
{
  return 0;
}


// CDOTA_Ability_Phoenix_IcarusDiveStop::GetAssociatedPrimaryAbilities  (line 1085, @0x0000000002d1cc00, libserver.so)
const char *__fastcall CDOTA_Ability_Phoenix_IcarusDiveStop::GetAssociatedPrimaryAbilities(
        CDOTA_Ability_Phoenix_IcarusDiveStop *const this)
{
  return "phoenix_icarus_dive";
}


// CDOTA_Ability_Phoenix_IcarusDiveStop::OnSpellStart  (line 1092, @0x0000000002ccc300, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy
// strings: "modifier_phoenix_icarus_dive"
void __fastcall CDOTA_Ability_Phoenix_IcarusDiveStop::OnSpellStart(CDOTA_Ability_Phoenix_IcarusDiveStop *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_phoenix_icarus_dive", 0);
  if ( ModifierByName != 0 )
    CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
}


// CDOTA_Ability_Phoenix_IcarusDiveStop::OnUpgrade  (line 1105, @0x0000000002ccbdd0, libserver.so)
// calls: CDOTABaseAbility::OnUpgrade, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName
void __fastcall CDOTA_Ability_Phoenix_IcarusDiveStop::OnUpgrade(CDOTA_Ability_Phoenix_IcarusDiveStop *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  CDOTABaseAbility::OnUpgrade(this);
  if ( CDOTABaseAbility::GetCaster(this) != 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "phoenix_icarus_dive", 0);
    if ( AbilityByName != 0 )
      (*(AbilityByName->_vptr_IHandleEntity + 212))(AbilityByName, this->m_iLevel.m_Value);
  }
}


// CDOTA_Modifier_Phoenix_IcarusDive::~CDOTA_Modifier_Phoenix_IcarusDive  (line 1125, @0x0000000002d465b0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Phoenix_IcarusDive::~CDOTA_Modifier_Phoenix_IcarusDive(
        CDOTA_Modifier_Phoenix_IcarusDive *const this)
{
  this->_vptr_CDOTA_Buff = &off_460E030;
  this->_vptr_CHorizontalMotionController = &off_460E320;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vecHitEntities);
  if ( (this->m_vecHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vecHitEntities.m_Memory),
        (this->m_vecHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vecHitEntities.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Phoenix_IcarusDive::~CDOTA_Modifier_Phoenix_IcarusDive  (line 1125, @0x0000000002d46c90, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_Phoenix_IcarusDive, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Phoenix_IcarusDive::~CDOTA_Modifier_Phoenix_IcarusDive(
        CDOTA_Modifier_Phoenix_IcarusDive *const this)
{
  this->_vptr_CDOTA_Buff = &off_460E030;
  this->_vptr_CHorizontalMotionController = &off_460E320;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vecHitEntities);
  if ( (this->m_vecHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vecHitEntities.m_Memory);
    if ( (this->m_vecHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vecHitEntities.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Phoenix_IcarusDive::IsPurgable  (line 1136, @0x0000000002d1cc10, libserver.so)
bool __fastcall CDOTA_Modifier_Phoenix_IcarusDive::IsPurgable(CDOTA_Modifier_Phoenix_IcarusDive *const this)
{
  return 0;
}


// CDOTA_Modifier_Phoenix_IcarusDive::IsHidden  (line 1137, @0x0000000002d1cc20, libserver.so)
bool __fastcall CDOTA_Modifier_Phoenix_IcarusDive::IsHidden(CDOTA_Modifier_Phoenix_IcarusDive *const this)
{
  return 1;
}


// CDOTA_Modifier_Phoenix_IcarusDive::IsHorizontalMotionValidToApply  (line 1143, @0x0000000002d1cc30, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Phoenix_IcarusDive::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_Phoenix_IcarusDive *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Phoenix_IcarusDive::IsMotionController  (line 1145, @0x0000000002d1cc60, libserver.so)
bool __fastcall CDOTA_Modifier_Phoenix_IcarusDive::IsMotionController(CDOTA_Modifier_Phoenix_IcarusDive *const this)
{
  return 1;
}


// CDOTA_Modifier_Phoenix_IcarusDive::DeclareFunctions  (line 1170, @0x0000000002cc8a30, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Phoenix_IcarusDive::GetModifierIgnoreCastAngle(CModifierParams const&)
void __fastcall CDOTA_Modifier_Phoenix_IcarusDive::DeclareFunctions(CDOTA_Modifier_Phoenix_IcarusDive *const this)
{
  this->m_Functions[162].__pfn = CDOTA_Modifier_Phoenix_IcarusDive::GetModifierIgnoreCastAngle;
  this->m_Functions[162].__delta = 0;
}


// CDOTA_Modifier_Phoenix_IcarusDive::OnCreated  (line 1177, @0x0000000002cfab80, libserver.so)  // inlines: AssignTo, DEG2RAD, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, NormalizeInPlace, VectorSubtract, operator-, operator=
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorPosition, VectorNormalize, VectorAngles, sincos, CDOTA_Buff::GetParent, CDOTALocomotor::ApplyHorizontalMotionController, CDOTA_BaseNPC::SetAbilityActive (19 total)
// strings: "dash_length", "dash_width", "burn_duration", "particles/units/heroes/hero_phoenix/phoenix_icarus_dive.vpcf", "attach_hitloc", "attach_tailbase" (8 total)
void __fastcall CDOTA_Modifier_Phoenix_IcarusDive::OnCreated(
        CDOTA_Modifier_Phoenix_IcarusDive *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *v8; // rax
  vec_t v9; // xmm1_4
  CDOTABaseAbility *v10; // rax
  double dash_length; // xmm1_8
  __m128d v12; // xmm0
  vec_t v13; // xmm4_4
  __m128d v14; // xmm0
  double v15; // xmm5_8
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  float v19; // xmm1_4
  CDOTA_BaseNPC *v20; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_BaseNPC *v23; // r13
  CDOTA_ParticleManager *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v27; // r14
  CDOTA_ParticleManager *v28; // rax
  CDOTA_BaseNPC *v29; // rax
  const Vector *v30; // r13
  CDOTA_BaseNPC *v31; // r14
  CDOTA_ParticleManager *v32; // rax
  CDOTA_BaseNPC *v33; // rax
  const Vector *v34; // r13
  CDOTA_BaseNPC *v35; // r14
  CDOTA_ParticleManager *v36; // rax
  CDOTA_BaseNPC *v37; // rax
  const Vector *v38; // r13
  CDOTA_BaseNPC *v39; // r14
  CDOTA_ParticleManager *v40; // rax
  __int64 v41; // xmm0_8
  double v42; // [rsp+8h] [rbp-48h]
  double cosx; // [rsp+10h] [rbp-40h] BYREF
  double sinx; // [rsp+18h] [rbp-38h] BYREF
  __int64 v45; // [rsp+20h] [rbp-30h]
  vec_t z; // [rsp+28h] [rbp-28h]
  Vector CursorPosition; // 0:kr14_12.12

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->dash_length, "dash_length");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->dash_width, "dash_width");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->hit_radius, "hit_radius");
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
    this->burn_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "burn_duration", -1, 0);
  else
    this->burn_duration = 0.0;
  this->m_flCurrentTime = 0.0;
  Caster = CDOTA_Buff::GetCaster(this);
  this->m_vSource = *CBaseEntity::GetAbsOrigin(Caster);
  v8 = CDOTA_Buff::GetAbility(this);
  v41 = *&CDOTABaseAbility::GetCursorPosition(v8).x;
  this->m_vDirection.z = 0.0;
  v45 = v41;
  v9 = *&v41 - this->m_vSource.x;
  this->m_vDirection.y = *(&v41 + 1) - this->m_vSource.y;
  this->m_vDirection.x = v9;
  VectorNormalize(&this->m_vDirection);
  VectorAngles(&this->m_vDirection, &this->m_angDirection);
  v10 = CDOTA_Buff::GetAbility(this);
  CursorPosition = CDOTABaseAbility::GetCursorPosition(v10);
  z = CursorPosition.z;
  dash_length = this->dash_length;
  v45 = *&CursorPosition.x;
  v42 = dash_length * 0.5;
  sincos((0.017453292 * this->m_angDirection.y), &sinx, &cosx);
  v12 = _mm_cvtps_pd(LODWORD(this->m_vSource.x));
  v12.m128d_f64[0] = v12.m128d_f64[0] + cosx * v42;
  v13 = _mm_movedup_pd(v12).m128d_f64[0];
  v14 = _mm_cvtps_pd(LODWORD(this->m_vSource.y));
  v14.m128d_f64[0] = v14.m128d_f64[0] + sinx * v42;
  this->m_vTarget.x = v13;
  v15 = _mm_movedup_pd(v14).m128d_f64[0];
  *v14.m128d_f64 = this->m_vSource.z;
  *&v15 = v15;
  this->m_vTarget.y = *&v15;
  this->m_vTarget.z = *v14.m128d_f64;
  Parent = CDOTA_Buff::GetParent(this);
  v17 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v17, &this->CHorizontalMotionController, 0) )
  {
    v18 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::SetAbilityActive(v18, "phoenix_sun_ray", 0);
    CDOTA_Buff::StartIntervalThink(this, 0.02, v19);
    v20 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::StartGesture(v20, 1516, 0.2, 0.2, 3, 0, 1.0);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_phoenix/phoenix_icarus_dive.vpcf",
                 2,
                 0,
                 0,
                 0);
    v23 = CDOTA_Buff::GetCaster(this);
    v24 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v24, Particle, 0, v23, 1, 0, vec3_invalid, 1);
    v25 = CDOTA_Buff::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v25);
    v27 = CDOTA_Buff::GetCaster(this);
    v28 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v28, Particle, 1, v27, 5, "attach_hitloc", *AbsOrigin, 1);
    v29 = CDOTA_Buff::GetCaster(this);
    v30 = CBaseEntity::GetAbsOrigin(v29);
    v31 = CDOTA_Buff::GetCaster(this);
    v32 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v32, Particle, 4, v31, 5, "attach_tailbase", *v30, 1);
    v33 = CDOTA_Buff::GetCaster(this);
    v34 = CBaseEntity::GetAbsOrigin(v33);
    v35 = CDOTA_Buff::GetCaster(this);
    v36 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v36, Particle, 5, v35, 5, "attach_wingtipR", *v34, 1);
    v37 = CDOTA_Buff::GetCaster(this);
    v38 = CBaseEntity::GetAbsOrigin(v37);
    v39 = CDOTA_Buff::GetCaster(this);
    v40 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v40, Particle, 6, v39, 5, "attach_wingtipL", *v38, 1);
    CDOTA_Buff::AddParticle(this, Particle, 0, 0, -1, 0, 0);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Phoenix_IcarusDive::OnDestroy  (line 1222, @0x0000000002cce200, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::SwapAbilities, CBaseEntity::StopSound, DOTA_EmitSound, CDOTA_BaseNPC::FindModifierByName, CDOTALocomotor::ApplyHorizontalMotionController, CDOTA_BaseNPC::SetAbilityActive, CDOTA_BaseNPC::FadeGesture
// strings: "phoenix_icarus_dive_stop", "Hero_Phoenix.IcarusDive.Cast", "Hero_Phoenix.IcarusDive.Stop", "modifier_phoenix_sun_ray"
void __fastcall CDOTA_Modifier_Phoenix_IcarusDive::OnDestroy(CDOTA_Modifier_Phoenix_IcarusDive *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_Buff *ModifierByName; // r12
  CDOTA_BaseNPC *v9; // rax
  CDOTALocomotor *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveHorizontalMotionController(v3, &this->CHorizontalMotionController);
  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::SwapAbilities(Caster, "phoenix_icarus_dive", "phoenix_icarus_dive_stop", 1, 0);
    v5 = CDOTA_Buff::GetCaster(this);
    CBaseEntity::StopSound(v5, "Hero_Phoenix.IcarusDive.Cast");
    v6 = CDOTA_Buff::GetCaster(this);
    DOTA_EmitSound(10, "Hero_Phoenix.IcarusDive.Stop", v6);
  }
  v7 = CDOTA_Buff::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(v7, "modifier_phoenix_sun_ray", 0);
  if ( ModifierByName != 0 )
  {
    v9 = CDOTA_Buff::GetParent(this);
    v10 = (*(v9->_vptr_IHandleEntity + 376))(v9);
    CDOTALocomotor::ApplyHorizontalMotionController(v10, &ModifierByName[1], 0);
  }
  v11 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::SetAbilityActive(v11, "phoenix_sun_ray", 1);
  v12 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::FadeGesture(v12, 1516);
}


// CDOTA_Modifier_Phoenix_IcarusDive::UpdateHorizontalMotion  (line 1247, @0x0000000002ce0500, libserver.so)  // inlines: DEG2RAD, InState, IsHexed, IsStunned, RAD2DEG
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetDuration, sincos, CBaseEntity::GetAbsAngles, CBaseEntity::SetAbsOrigin, CBaseEntity::SetAbsAngles, CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CGridNav::DestroyTreesAroundPoint, CDOTA_BaseNPC::FindModifierByName, CDOTA_Modifier_Phoenix_SunRay::UpdateBeamEffect (13 total)
// strings: "modifier_phoenix_sun_ray"
void __fastcall CDOTA_Modifier_Phoenix_IcarusDive::UpdateHorizontalMotion(
        CDOTA_Modifier_Phoenix_IcarusDive *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  CDOTABaseAbility *Ability; // rax
  float Duration; // xmm3_4
  float m_flCurrentTime; // xmm0_4
  __m128d v9; // xmm0
  float v10; // xmm2_4
  double v11; // xmm1_8
  __m128d v12; // xmm1
  float v13; // xmm4_4
  float v14; // xmm5_4
  __m128d v15; // xmm1
  vec_t v16; // xmm3_4
  __m128d v17; // xmm1
  vec_t v18; // xmm6_4
  QAngle *AbsAngles; // rax
  float v20; // xmm0_4
  float v21; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v23; // r13d
  CDOTA_BaseNPC *Parent; // rax
  float v25; // xmm3_4
  CDOTA_BaseNPC *v26; // rax
  CDOTA_Modifier_Phoenix_SunRay *ModifierByName; // rax
  float v28; // xmm1_4
  float v29; // xmm3_4
  float flTotalTime; // [rsp+Ch] [rbp-64h]
  double v31; // [rsp+10h] [rbp-60h]
  float v32; // [rsp+18h] [rbp-58h]
  float flEllipseY; // [rsp+1Ch] [rbp-54h]
  float flEllipseYa; // [rsp+1Ch] [rbp-54h]
  double cosx; // [rsp+20h] [rbp-50h] BYREF
  double sinx; // [rsp+28h] [rbp-48h] BYREF
  Vector vNewLocation; // [rsp+30h] [rbp-40h] BYREF
  QAngle newFacing; // [rsp+40h] [rbp-30h] BYREF
  Vector v39; // 0:xmm0_8.8,8:xmm1_4.4

  this->m_flCurrentTime = a3 + this->m_flCurrentTime;
  Ability = CDOTA_Buff::GetAbility(this);
  Duration = CDOTABaseAbility::GetDuration(Ability);
  m_flCurrentTime = this->m_flCurrentTime;
  if ( m_flCurrentTime > Duration )
  {
    this->m_flCurrentTime = Duration;
    m_flCurrentTime = Duration;
  }
  flTotalTime = Duration;
  v9.m128d_f64[1] = (1.0 - (m_flCurrentTime / (Duration * 0.5)));
  v9.m128d_f64[0] = v9.m128d_f64[1] * 3.141592653589793;
  v10 = _mm_movedup_pd(v9).m128d_f64[0];
  v32 = v10;
  sincos(v10, &sinx, &cosx);
  v11 = this->dash_length * 0.5;
  vNewLocation = this->m_vSource;
  v12.m128d_f64[0] = v11 * cosx;
  v13 = _mm_movedup_pd(v12).m128d_f64[0];
  v31 = v13;
  v12.m128d_f64[0] = this->dash_width * 0.5 * sinx;
  v14 = _mm_movedup_pd(v12).m128d_f64[0];
  flEllipseY = v14;
  sincos((0.017453292 * this->m_angDirection.y), &sinx, &cosx);
  v15 = _mm_cvtps_pd(LODWORD(this->m_vTarget.x));
  v15.m128d_f64[0] = v15.m128d_f64[0] + v31 * cosx - flEllipseY * sinx;
  v16 = _mm_movedup_pd(v15).m128d_f64[0];
  v17 = _mm_cvtps_pd(LODWORD(this->m_vTarget.y));
  vNewLocation.x = v16;
  v17.m128d_f64[0] = v17.m128d_f64[0] + v31 * sinx + flEllipseY * cosx;
  v18 = _mm_movedup_pd(v17).m128d_f64[0];
  vNewLocation.y = v18;
  AbsAngles = CBaseEntity::GetAbsAngles(me);
  v20 = (0.017453292 * this->m_angDirection.y) + v32;
  newFacing = *AbsAngles;
  v21 = v20 - 1.570796326794897;
  newFacing.y = v21 * 57.295776;
  CBaseEntity::SetAbsOrigin(me, &vNewLocation);
  CBaseEntity::SetAbsAngles(me, &newFacing);
  Caster = CDOTA_Buff::GetCaster(this);
  v23 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
  flEllipseYa = CDOTA_Buff::GetParent(this)->m_flHullRadius;
  Parent = CDOTA_Buff::GetParent(this);
  v39 = *CBaseEntity::GetAbsOrigin(Parent);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 1, v23, v39, flEllipseYa, v25);
  v26 = CDOTA_Buff::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(v26, "modifier_phoenix_sun_ray", 0);
  v29 = flTotalTime;
  if ( ModifierByName != 0 )
  {
    CDOTA_Modifier_Phoenix_SunRay::UpdateBeamEffect(ModifierByName, 0.0, v28);
    v29 = flTotalTime;
  }
  if ( this->m_flCurrentTime >= v29
    || (me->m_nUnitState64.m_Value & 0x20) != 0
    || (me->m_nUnitState64.m_Value & 0x40) != 0 )
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Phoenix_IcarusDive::OnHorizontalMotionInterrupted  (line 1289, @0x0000000002ccc340, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Phoenix_IcarusDive::OnHorizontalMotionInterrupted(
        CDOTA_Modifier_Phoenix_IcarusDive *const this)
{
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Phoenix_IcarusDive::GetModifierIgnoreCastAngle  (line 1296, @0x0000000002cc8a50, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Phoenix_IcarusDive::GetModifierIgnoreCastAngle(
        CDOTA_Modifier_Phoenix_IcarusDive *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Phoenix_IcarusDive::OnIntervalThink  (line 1303, @0x0000000002d10420, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GrowMemory, HasElement, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CUtlMemory<CHandle<CBaseEntity>, int>::Grow, _Unwind_Resume (13 total)
// strings: "modifier_phoenix_icarus_dive_burn"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Phoenix_IcarusDive::OnIntervalThink(CDOTA_Modifier_Phoenix_IcarusDive *const this)
{
  __m128i v2; // xmm1
  float v3; // r14d
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v7; // rax
  __int64 v8; // rbx
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CEntityIdentity *m_pEntity; // rdx
  int v16; // eax
  __int16 v17; // cx
  unsigned __int64 m_Value; // rax
  float v19; // xmm1_4
  CDOTA_BaseNPC *v20; // rax
  CEntityIdentity *v21; // rax
  int v22; // edx
  __int16 v23; // cx
  __int64 m_Size; // r13
  int v25; // eax
  CHandle<CBaseEntity> *v26; // rax
  CDOTABaseAbility *pAbility; // [rsp+30h] [rbp-90h]
  CHandle<CBaseEntity> v28; // [rsp+40h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+50h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v31; // [rsp+88h] [rbp-38h]

  v31 = __readfsqword(0x28u);
  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    entities.m_Size = 0;
    *v2.m128i_i32 = this->hit_radius;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
    Caster = CDOTA_Buff::GetCaster(this);
    v5 = CDOTA_Buff::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
    v7 = CDOTA_Buff::GetCaster(this);
    FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, Caster, v3, &entities, 2, 19, 0, 0, 0);
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
                if ( v13->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                {
                  v28.m_Index = -1;
                  m_pEntity = m_pInstance->m_pEntity;
                  if ( m_pEntity != 0 )
                  {
                    v16 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                    v17 = 0x7FFF;
                    if ( m_pEntity->m_EHandle.m_Index != -1 )
                      v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                    LOWORD(v28.m_Index) = v17 | v28.m_Index & 0x8000;
                    v28.m_Index = (v16 << 15) | v28.m_Index & 0x7FFF;
                  }
                  if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                         &this->m_vecHitEntities,
                         &v28) < 0 )
                  {
                    m_Value = m_pInstance->m_nUnitState64.m_Value;
                    if ( (m_Value & 0x200) == 0 && !m_pInstance->m_bIsWaitingToSpawn.m_Value && (m_Value & 0x100) == 0 )
                      break;
                  }
                }
              }
            }
          }
          if ( entities.m_Size <= ++v8 )
            goto LABEL_28;
        }
        KeyValues::KeyValues(&kv, "modifier_phoenix_icarus_dive_burn");
        KeyValues::SetFloat(&kv, "duration", v19);
        pAbility = CDOTA_Buff::GetAbility(this);
        v20 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(m_pInstance, v20, pAbility, "modifier_phoenix_icarus_dive_burn", &kv, 0);
        v28.m_Index = -1;
        v21 = m_pInstance->m_pEntity;
        if ( v21 != 0 )
        {
          v22 = (v21->m_EHandle.m_Index >> 15) - (v21->m_flags & 1);
          v23 = 0x7FFF;
          if ( v21->m_EHandle.m_Index != -1 )
            v23 = v21->m_EHandle.m_Index & 0x7FFF;
          LOWORD(v28.m_Index) = v23 | v28.m_Index & 0x8000;
          v28.m_Index = (v22 << 15) | v28.m_Index & 0x7FFF;
        }
        m_Size = this->m_vecHitEntities.m_Size;
        v25 = this->m_vecHitEntities.m_Size;
        if ( m_Size == this->m_vecHitEntities.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_vecHitEntities.m_Memory, 1);
          v25 = this->m_vecHitEntities.m_Size;
        }
        this->m_vecHitEntities.m_Size = v25 + 1;
        v26 = &this->m_vecHitEntities.m_Memory.m_pMemory[m_Size];
        if ( v26 != 0 )
          v26->m_Index = v28.m_Index;
        KeyValues::~KeyValues(&kv);
        ++v8;
      }
      while ( entities.m_Size > v8 );
    }
LABEL_28:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
}


// CDOTA_Modifier_Phoenix_IcarusDiveBurn::~CDOTA_Modifier_Phoenix_IcarusDiveBurn  (line 1331, @0x0000000002d28500, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Phoenix_IcarusDiveBurn::~CDOTA_Modifier_Phoenix_IcarusDiveBurn(
        CDOTA_Modifier_Phoenix_IcarusDiveBurn *const this)
{
  this->_vptr_CDOTA_Buff = &off_460E3B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Phoenix_IcarusDiveBurn::~CDOTA_Modifier_Phoenix_IcarusDiveBurn  (line 1331, @0x0000000002d28520, libserver.so)  // inlines: ~CDOTA_Modifier_Phoenix_IcarusDiveBurn
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Phoenix_IcarusDiveBurn::~CDOTA_Modifier_Phoenix_IcarusDiveBurn(
        CDOTA_Modifier_Phoenix_IcarusDiveBurn *const this)
{
  this->_vptr_CDOTA_Buff = &off_460E3B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Phoenix_IcarusDiveBurn::GetEffectName  (line 1341, @0x0000000002d1cc70, libserver.so)
// strings: "particles/units/heroes/hero_phoenix/phoenix_icarus_dive_burn_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Phoenix_IcarusDiveBurn::GetEffectName(
        CDOTA_Modifier_Phoenix_IcarusDiveBurn *const this)
{
  return "particles/units/heroes/hero_phoenix/phoenix_icarus_dive_burn_debuff.vpcf";
}


// CDOTA_Modifier_Phoenix_IcarusDiveBurn::GetStatusEffectName  (line 1342, @0x0000000002d1cc80, libserver.so)
// strings: "particles/status_fx/status_effect_burn.vpcf"
const char *__fastcall CDOTA_Modifier_Phoenix_IcarusDiveBurn::GetStatusEffectName(
        CDOTA_Modifier_Phoenix_IcarusDiveBurn *const this)
{
  return "particles/status_fx/status_effect_burn.vpcf";
}


// CDOTA_Modifier_Phoenix_IcarusDiveBurn::OnCreated  (line 1358, @0x0000000002d0a520, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
// strings: "burn_tick_interval", "slow_movement_speed_pct"
void __fastcall CDOTA_Modifier_Phoenix_IcarusDiveBurn::OnCreated(
        CDOTA_Modifier_Phoenix_IcarusDiveBurn *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->burn_tick_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "burn_tick_interval", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_7:
    this->damage_per_second = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
LABEL_8:
    this->slow_movement_speed_pct = 0;
    goto LABEL_5;
  }
  this->burn_tick_interval = 0.0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_7;
LABEL_3:
  this->damage_per_second = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "damage_per_second", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->slow_movement_speed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "slow_movement_speed_pct", -1, 0);
LABEL_5:
  CDOTA_Buff::StartIntervalThink(this, this->burn_tick_interval, v6);
}


// CDOTA_Modifier_Phoenix_IcarusDiveBurn::OnRefresh  (line 1371, @0x0000000002d09ac0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "slow_movement_speed_pct"
void __fastcall CDOTA_Modifier_Phoenix_IcarusDiveBurn::OnRefresh(
        CDOTA_Modifier_Phoenix_IcarusDiveBurn *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage_per_second = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_per_second", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->slow_movement_speed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                        v4,
                                        "slow_movement_speed_pct",
                                        -1,
                                        0);
      return;
    }
  }
  else
  {
    this->damage_per_second = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->slow_movement_speed_pct = 0;
}


// CDOTA_Modifier_Phoenix_IcarusDiveBurn::OnIntervalThink  (line 1379, @0x0000000002ccd640, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage
void __fastcall CDOTA_Modifier_Phoenix_IcarusDiveBurn::OnIntervalThink(
        CDOTA_Modifier_Phoenix_IcarusDiveBurn *const this)
{
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  float v5; // [rsp+Ch] [rbp-24h]

  v5 = this->damage_per_second * this->burn_tick_interval;
  Ability = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, Ability, v5, 2, 0);
}


// CDOTA_Modifier_Phoenix_IcarusDiveBurn::DeclareFunctions  (line 1388, @0x0000000002cc8a70, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Phoenix_IcarusDiveBurn::OnTooltip(CModifierParams const&)
void __fastcall CDOTA_Modifier_Phoenix_IcarusDiveBurn::DeclareFunctions(
        CDOTA_Modifier_Phoenix_IcarusDiveBurn *const this)
{
  this->m_Functions[151].__pfn = CDOTA_Modifier_Phoenix_IcarusDiveBurn::OnTooltip;
  this->m_Functions[151].__delta = 0;
  this->m_Functions[13].__pfn = (&stru_10 + 697);
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Phoenix_IcarusDiveBurn::OnTooltip  (line 1396, @0x0000000002cc8ab0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Phoenix_IcarusDiveBurn::OnTooltip(
        CDOTA_Modifier_Phoenix_IcarusDiveBurn *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->damage_per_second;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Phoenix_IcarusDiveBurn::GetModifierMoveSpeedBonus_Percentage  (line 1403, @0x0000000002cc8ad0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Phoenix_IcarusDiveBurn::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Phoenix_IcarusDiveBurn *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->slow_movement_speed_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Phoenix_FireSpirits::~CDOTA_Ability_Phoenix_FireSpirits  (line 1414, @0x0000000002d2b640, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Phoenix_FireSpirits::~CDOTA_Ability_Phoenix_FireSpirits(
        CDOTA_Ability_Phoenix_FireSpirits *const this)
{
  this->_vptr_IHandleEntity = &off_460E710;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Phoenix_FireSpirits::~CDOTA_Ability_Phoenix_FireSpirits  (line 1414, @0x0000000002d2b660, libserver.so)  // inlines: ~CDOTA_Ability_Phoenix_FireSpirits
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Phoenix_FireSpirits::~CDOTA_Ability_Phoenix_FireSpirits(
        CDOTA_Ability_Phoenix_FireSpirits *const this)
{
  this->_vptr_IHandleEntity = &off_460E710;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Phoenix_FireSpirits::Schema_DynamicBinding  (line 1416, @0x0000000002d1cc90, libserver.so)
// globals: CDOTA_Ability_Phoenix_FireSpirits::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Phoenix_FireSpirits::Schema_DynamicBinding(
        const CDOTA_Ability_Phoenix_FireSpirits *const this)
{
  return CDOTA_Ability_Phoenix_FireSpirits::s_pSchemaBinding;
}


// CDOTA_Ability_Phoenix_FireSpirits::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1416, @0x0000000002d1cca0, libserver.so)
// globals: CDOTA_Ability_Phoenix_FireSpirits::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Phoenix_FireSpirits::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Phoenix_FireSpirits::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Phoenix_FireSpirits::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Phoenix_FireSpirits::CEntityInstanceEntityClass::DestructInstance  (line 1416, @0x0000000002d1ccb0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Phoenix_FireSpirits>
void __fastcall CDOTA_Ability_Phoenix_FireSpirits::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Phoenix_FireSpirits::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Phoenix_FireSpirits::CEntityInstanceEntityClass::FreeInstance  (line 1416, @0x0000000002d1ccd0, libserver.so)
void __fastcall CDOTA_Ability_Phoenix_FireSpirits::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Phoenix_FireSpirits::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Phoenix_FireSpirits::CEntityInstanceEntityClass::CanAllocate  (line 1416, @0x0000000002d1ccf0, libserver.so)
bool __fastcall CDOTA_Ability_Phoenix_FireSpirits::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Phoenix_FireSpirits::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Phoenix_FireSpirits::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1416, @0x0000000002d1cd00, libserver.so)
// globals: CDOTA_Ability_Phoenix_FireSpirits::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Phoenix_FireSpirits::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Phoenix_FireSpirits::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Phoenix_FireSpirits::s_pSchemaBinding;
}


// CDOTA_Ability_Phoenix_FireSpirits::CEntityInstanceEntityClass::AllocateInstance  (line 1416, @0x0000000002d241d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Phoenix_FireSpirits::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Phoenix_FireSpirits::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Phoenix_FireSpirits::CEntityInstanceEntityClass::ConstructInstance  (line 1416, @0x0000000002d28cf0, libserver.so)  // inlines: CDOTA_Ability_Phoenix_FireSpirits, Construct<CDOTA_Ability_Phoenix_FireSpirits>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Phoenix_FireSpirits::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Phoenix_FireSpirits::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_460E710;
  }
  return p;
}


// CDOTA_Ability_Phoenix_FireSpirits::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1416, @0x0000000002d33a50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Phoenix_FireSpirits::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Phoenix_FireSpirits::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Phoenix_FireSpirits::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1416, @0x0000000002d33a70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Phoenix_FireSpirits::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Phoenix_FireSpirits::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal  (line 1416, @0x0000000002d50450, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "phoenix_fire_spirits", "CDOTA_Ability_Phoenix_FireSpirits"
// globals: `guard variable for'CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass, CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Phoenix_FireSpirits::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClassInfo, CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClassInfo
CEntityClass *__cdecl CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass) != 0 )
  {
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_pClassInfo = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_flags = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_pInputs = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_nInputCount = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_pOutputs = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_nOutputCount = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_pGameClass = 0;
    CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass._vptr_CEntityClass = off_460E690;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass);
    __cxa_atexit(
      CDOTA_Ability_Phoenix_FireSpirits::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Phoenix_FireSpiritsClass != 0 )
    return &CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass;
  if ( `guard variable for'CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClassInfo,
      "CDOTA_Ability_Phoenix_FireSpirits",
      "phoenix_fire_spirits",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClassInfo);
  }
  CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_pClassInfo = &CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClassInfo;
  CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_pBaseClassInfo = CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Phoenix_FireSpiritsClass = &CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass;
  CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClassInfo.m_pClass = &CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass;
  CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Phoenix_FireSpiritsClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Phoenix_FireSpirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_FireSpiritsClass;
}


// CDOTA_Ability_Phoenix_FireSpirits::ProcsMagicStick  (line 1422, @0x0000000002d1cd10, libserver.so)
bool __fastcall CDOTA_Ability_Phoenix_FireSpirits::ProcsMagicStick(CDOTA_Ability_Phoenix_FireSpirits *const this)
{
  return 1;
}


// CDOTA_Ability_Phoenix_FireSpirits::GetAssociatedSecondaryAbilities  (line 1423, @0x0000000002d1cd20, libserver.so)
// strings: "phoenix_launch_fire_spirit"
const char *__fastcall CDOTA_Ability_Phoenix_FireSpirits::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Phoenix_FireSpirits *const this)
{
  return "phoenix_launch_fire_spirit";
}


// CDOTA_Ability_Phoenix_FireSpirits::OnSpellStart  (line 1435, @0x0000000002d00a50, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, RemoveHealthPercent, CDOTA_BaseNPC::SwapAbilities, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, DOTA_EmitSound, CDOTA_BaseNPC::StartGesture, KeyValues::~KeyValues (14 total)
// strings: "hp_cost_perc", "phoenix_launch_fire_spirit", "phoenix_fire_spirits", "spirit_duration", "modifier_phoenix_fire_spirit_count", "Hero_Phoenix.FireSpirits.Cast" (7 total)
void __fastcall CDOTA_Ability_Phoenix_FireSpirits::OnSpellStart(CDOTA_Ability_Phoenix_FireSpirits *const this)
{
  int LevelSpecialValue; // eax
  int v3; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // rax
  float v6; // xmm1_4
  CDOTA_BaseNPC *v7; // r13
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-28h]

  v13 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "hp_cost_perc", -1, 0);
  this->hp_cost_perc = LevelSpecialValue;
  v3 = LevelSpecialValue;
  Caster = CDOTABaseAbility::GetCaster(this);
  RemoveHealthPercent(Caster, v3);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::SwapAbilities(v5, "phoenix_fire_spirits", "phoenix_launch_fire_spirit", 0, 1);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "spirit_duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_phoenix_fire_spirit_count");
  KeyValues::SetFloat(&kv, "duration", v6);
  v7 = CDOTABaseAbility::GetCaster(this);
  v8 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v8, v7, this, "modifier_phoenix_fire_spirit_count", &kv, 0);
  v9 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v9, "Hero_Phoenix.FireSpirits.Cast", 0.0, 0, 0);
  v10 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(2, "Hero_Phoenix.FireSpirits.Loop", v10);
  v11 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v11, 1511, 0.1, 0.1, 9, 0, 1.0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Phoenix_FireSpirits::OnUpgrade  (line 1460, @0x0000000002ccbe40, libserver.so)
// calls: CDOTABaseAbility::OnUpgrade, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName
// strings: "phoenix_launch_fire_spirit"
void __fastcall CDOTA_Ability_Phoenix_FireSpirits::OnUpgrade(CDOTA_Ability_Phoenix_FireSpirits *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  CDOTABaseAbility::OnUpgrade(this);
  if ( CDOTABaseAbility::GetCaster(this) != 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "phoenix_launch_fire_spirit", 0);
    if ( AbilityByName != 0 )
      (*(AbilityByName->_vptr_IHandleEntity + 212))(AbilityByName, this->m_iLevel.m_Value);
  }
}


// CDOTA_Ability_Phoenix_FireSpirits::OnUnStolen  (line 1478, @0x0000000002ccbfd0, libserver.so)
// calls: CDOTABaseAbility::OnUnStolen, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_phoenix_fire_spirit_count"
void __fastcall CDOTA_Ability_Phoenix_FireSpirits::OnUnStolen(CDOTA_Ability_Phoenix_FireSpirits *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  CDOTABaseAbility::OnUnStolen(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_phoenix_fire_spirit_count");
}


// CDOTA_Ability_Phoenix_FireSpirits::GetAbilityDamageToTargetOverInterval  (line 1489, @0x0000000002d03560, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Phoenix_FireSpirits::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Phoenix_FireSpirits *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  float fIntervala; // [rsp+0h] [rbp-1Ch]
  float fIntervalb; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    fIntervala = fminf(fInterval, CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0));
    fIntervalb = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_per_second", -1, 0) * fIntervala;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalb);
  }
  return result;
}


// CDOTA_Modifier_Phoenix_FireSpiritCount::~CDOTA_Modifier_Phoenix_FireSpiritCount  (line 1504, @0x0000000002d284b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Phoenix_FireSpiritCount::~CDOTA_Modifier_Phoenix_FireSpiritCount(
        CDOTA_Modifier_Phoenix_FireSpiritCount *const this)
{
  this->_vptr_CDOTA_Buff = &off_460F1D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Phoenix_FireSpiritCount::~CDOTA_Modifier_Phoenix_FireSpiritCount  (line 1504, @0x0000000002d284d0, libserver.so)  // inlines: ~CDOTA_Modifier_Phoenix_FireSpiritCount
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Phoenix_FireSpiritCount::~CDOTA_Modifier_Phoenix_FireSpiritCount(
        CDOTA_Modifier_Phoenix_FireSpiritCount *const this)
{
  this->_vptr_CDOTA_Buff = &off_460F1D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Phoenix_FireSpiritCount::IsPurgable  (line 1512, @0x0000000002d1cd30, libserver.so)
bool __fastcall CDOTA_Modifier_Phoenix_FireSpiritCount::IsPurgable(CDOTA_Modifier_Phoenix_FireSpiritCount *const this)
{
  return 0;
}


// CDOTA_Modifier_Phoenix_FireSpiritCount::IsHidden  (line 1513, @0x0000000002d1cd40, libserver.so)
bool __fastcall CDOTA_Modifier_Phoenix_FireSpiritCount::IsHidden(CDOTA_Modifier_Phoenix_FireSpiritCount *const this)
{
  return (*(this->_vptr_CDOTA_Buff + 27))(this) == 0;
}


// CDOTA_Modifier_Phoenix_FireSpiritCount::OnCreated  (line 1531, @0x0000000002cf8d10, libserver.so)  // inlines: Vector
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::AddParticle
// strings: "spirit_count", "particles/units/heroes/hero_phoenix/phoenix_fire_spirits.vpcf"
void __fastcall CDOTA_Modifier_Phoenix_FireSpiritCount::OnCreated(
        CDOTA_Modifier_Phoenix_FireSpiritCount *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  int v6; // eax
  CDOTA_ParticleManager *v7; // rax
  CDOTA_ParticleManager *v8; // rax
  CDOTA_ParticleManager *v9; // rax
  CDOTA_ParticleManager *v10; // rax
  CDOTA_ParticleManager *v11; // rax
  unsigned int v12; // [rsp+10h] [rbp-20h]

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->spirit_count, "spirit_count");
  (*(this->_vptr_CDOTA_Buff + 28))(this, this->spirit_count);
  Caster = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_phoenix/phoenix_fire_spirits.vpcf",
                       1,
                       Caster,
                       0,
                       0);
  v6 = (*(this->_vptr_CDOTA_Buff + 27))(this);
  LODWORD(Caster) = this->m_nFXIndex;
  *&v12 = v6;
  v7 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v7, Caster, 1, COERCE_DOUBLE(v12), 0.0);
  LODWORD(Caster) = this->m_nFXIndex;
  v8 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v8, Caster, 9, COERCE_DOUBLE(1065353216), 0.0);
  LODWORD(Caster) = this->m_nFXIndex;
  v9 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v9, Caster, 10, COERCE_DOUBLE(1065353216), 0.0);
  LODWORD(Caster) = this->m_nFXIndex;
  v10 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v10, Caster, 11, COERCE_DOUBLE(1065353216), 0.0);
  LODWORD(Caster) = this->m_nFXIndex;
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v11, Caster, 12, COERCE_DOUBLE(1065353216), 0.0);
  CDOTA_Buff::AddParticle(this, this->m_nFXIndex, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_Phoenix_FireSpiritCount::OnRefresh  (line 1549, @0x0000000002cc8af0, libserver.so)
void __fastcall CDOTA_Modifier_Phoenix_FireSpiritCount::OnRefresh(
        CDOTA_Modifier_Phoenix_FireSpiritCount *const this,
        KeyValues *pKV)
{
  (*(this->_vptr_CDOTA_Buff + 57))(this, pKV);
}


// CDOTA_Modifier_Phoenix_FireSpiritCount::OnDestroy  (line 1556, @0x0000000002cce440, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::SwapAbilities, CBaseEntity::StopSound, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect
// strings: "phoenix_launch_fire_spirit", "phoenix_fire_spirits", "Hero_Phoenix.FireSpirits.Loop"
void __fastcall CDOTA_Modifier_Phoenix_FireSpiritCount::OnDestroy(CDOTA_Modifier_Phoenix_FireSpiritCount *const this)
{
  CDOTA_Modifier_Phoenix_FireSpiritCount *v1; // rbx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_ParticleManager *ParticleManager; // rax

  v1 = this;
  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::SwapAbilities(Caster, "phoenix_fire_spirits", "phoenix_launch_fire_spirit", 1, 0);
  v3 = CDOTA_Buff::GetCaster(v1);
  CBaseEntity::StopSound(v3, "Hero_Phoenix.FireSpirits.Loop");
  LODWORD(v1) = v1->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, v1, 1);
}


// CDOTA_Modifier_Phoenix_FireSpiritCount::OnStackCountChanged  (line 1567, @0x0000000002cce5a0, libserver.so)  // inlines: Vector
// calls: CDOTA_Buff::OnStackCountChanged, GetParticleManager, CDOTA_ParticleManager::SetParticleControl
void __fastcall CDOTA_Modifier_Phoenix_FireSpiritCount::OnStackCountChanged(
        CDOTA_Modifier_Phoenix_FireSpiritCount *const this,
        int iOldCount)
{
  int v3; // eax
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  int v6; // esi
  int v7; // r12d
  int v8; // eax
  int v9; // r13d
  unsigned int v10; // xmm0_4
  CDOTA_ParticleManager *v11; // rax
  unsigned int v12; // [rsp+0h] [rbp-30h]
  double v13; // [rsp+0h] [rbp-30h]

  CDOTA_Buff::OnStackCountChanged(this, iOldCount);
  v3 = (*(this->_vptr_CDOTA_Buff + 27))(this);
  m_nFXIndex = this->m_nFXIndex;
  *&v12 = v3;
  ParticleManager = GetParticleManager();
  v6 = m_nFXIndex;
  v7 = 0;
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, v6, 1, COERCE_DOUBLE(v12), 0.0);
  if ( this->spirit_count > 0 )
  {
    do
    {
      v8 = (*(this->_vptr_CDOTA_Buff + 27))(this);
      v9 = this->m_nFXIndex;
      if ( v9 != -1 )
      {
        v10 = 0;
        if ( v8 > v7 )
          v10 = 1065353216;
        *&v13 = v10;
        v11 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControl(v11, v9, v7 + 9, v13, 0.0);
      }
      ++v7;
    }
    while ( this->spirit_count > v7 );
  }
}


// CDOTA_Ability_Phoenix_LaunchFireSpirit::~CDOTA_Ability_Phoenix_LaunchFireSpirit  (line 1591, @0x0000000002d2b690, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Phoenix_LaunchFireSpirit::~CDOTA_Ability_Phoenix_LaunchFireSpirit(
        CDOTA_Ability_Phoenix_LaunchFireSpirit *const this)
{
  this->_vptr_IHandleEntity = &off_460F530;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Phoenix_LaunchFireSpirit::~CDOTA_Ability_Phoenix_LaunchFireSpirit  (line 1591, @0x0000000002d2b6b0, libserver.so)  // inlines: ~CDOTA_Ability_Phoenix_LaunchFireSpirit
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Phoenix_LaunchFireSpirit::~CDOTA_Ability_Phoenix_LaunchFireSpirit(
        CDOTA_Ability_Phoenix_LaunchFireSpirit *const this)
{
  this->_vptr_IHandleEntity = &off_460F530;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Phoenix_LaunchFireSpirit::Schema_DynamicBinding  (line 1593, @0x0000000002d1cd60, libserver.so)
// globals: CDOTA_Ability_Phoenix_LaunchFireSpirit::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Phoenix_LaunchFireSpirit::Schema_DynamicBinding(
        const CDOTA_Ability_Phoenix_LaunchFireSpirit *const this)
{
  return CDOTA_Ability_Phoenix_LaunchFireSpirit::s_pSchemaBinding;
}


// CDOTA_Ability_Phoenix_LaunchFireSpirit::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1593, @0x0000000002d1cd70, libserver.so)
// globals: CDOTA_Ability_Phoenix_LaunchFireSpirit::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Phoenix_LaunchFireSpirit::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Phoenix_LaunchFireSpirit::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Phoenix_LaunchFireSpirit::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Phoenix_LaunchFireSpirit::CEntityInstanceEntityClass::DestructInstance  (line 1593, @0x0000000002d1cd80, libserver.so)  // inlines: Destruct<CDOTA_Ability_Phoenix_LaunchFireSpirit>
void __fastcall CDOTA_Ability_Phoenix_LaunchFireSpirit::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Phoenix_LaunchFireSpirit::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Phoenix_LaunchFireSpirit::CEntityInstanceEntityClass::FreeInstance  (line 1593, @0x0000000002d1cda0, libserver.so)
void __fastcall CDOTA_Ability_Phoenix_LaunchFireSpirit::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Phoenix_LaunchFireSpirit::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Phoenix_LaunchFireSpirit::CEntityInstanceEntityClass::CanAllocate  (line 1593, @0x0000000002d1cdc0, libserver.so)
bool __fastcall CDOTA_Ability_Phoenix_LaunchFireSpirit::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Phoenix_LaunchFireSpirit::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Phoenix_LaunchFireSpirit::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1593, @0x0000000002d1cdd0, libserver.so)
// globals: CDOTA_Ability_Phoenix_LaunchFireSpirit::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Phoenix_LaunchFireSpirit::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Phoenix_LaunchFireSpirit::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Phoenix_LaunchFireSpirit::s_pSchemaBinding;
}


// CDOTA_Ability_Phoenix_LaunchFireSpirit::CEntityInstanceEntityClass::AllocateInstance  (line 1593, @0x0000000002d24210, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Phoenix_LaunchFireSpirit::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Phoenix_LaunchFireSpirit::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 936);
  memset(v1, 0, 0x3A8u);
  return v1;
}


// CDOTA_Ability_Phoenix_LaunchFireSpirit::CEntityInstanceEntityClass::ConstructInstance  (line 1593, @0x0000000002d28d20, libserver.so)  // inlines: CDOTA_Ability_Phoenix_LaunchFireSpirit, Construct<CDOTA_Ability_Phoenix_LaunchFireSpirit>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Phoenix_LaunchFireSpirit::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Phoenix_LaunchFireSpirit::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_460F530;
  }
  return p;
}


// CDOTA_Ability_Phoenix_LaunchFireSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1593, @0x0000000002d33aa0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Phoenix_LaunchFireSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Phoenix_LaunchFireSpirit::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Phoenix_LaunchFireSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1593, @0x0000000002d33ac0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Phoenix_LaunchFireSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Phoenix_LaunchFireSpirit::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Phoenix_LaunchFireSpirit::GetEntityClassInternal  (line 1593, @0x0000000002d47630, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "phoenix_launch_fire_spirit", "CDOTA_Ability_Phoenix_LaunchFireSpirit"
// globals: `guard variable for'CDOTA_Ability_Phoenix_LaunchFireSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_LaunchFireSpiritClass, CDOTA_Ability_Phoenix_LaunchFireSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_LaunchFireSpiritClass, __dso_handle, CDOTA_Ability_Phoenix_LaunchFireSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Phoenix_LaunchFireSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_LaunchFireSpiritClassInfo, CDOTA_Ability_Phoenix_LaunchFireSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_LaunchFireSpiritClassInfo
CEntityClass *__cdecl CDOTA_Ability_Phoenix_LaunchFireSpirit::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Phoenix_LaunchFireSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_LaunchFireSpiritClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Phoenix_LaunchFireSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_LaunchFireSpiritClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Phoenix_LaunchFireSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_LaunchFireSpiritClass);
    CDOTA_Ability_Phoenix_LaunchFireSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_LaunchFireSpiritClass._vptr_CEntityClass = off_460F4B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Phoenix_LaunchFireSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_LaunchFireSpiritClass);
    __cxa_atexit(
      CDOTA_Ability_Phoenix_LaunchFireSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Phoenix_LaunchFireSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_LaunchFireSpiritClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Phoenix_LaunchFireSpiritClass != 0 )
    return &CDOTA_Ability_Phoenix_LaunchFireSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_LaunchFireSpiritClass;
  if ( `guard variable for'CDOTA_Ability_Phoenix_LaunchFireSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_LaunchFireSpiritClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Phoenix_LaunchFireSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_LaunchFireSpiritClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Phoenix_LaunchFireSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_LaunchFireSpiritClassInfo,
      "CDOTA_Ability_Phoenix_LaunchFireSpirit",
      "phoenix_launch_fire_spirit",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Phoenix_LaunchFireSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_LaunchFireSpiritClassInfo);
  }
  CDOTA_Ability_Phoenix_LaunchFireSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_LaunchFireSpiritClass.m_pClassInfo = &CDOTA_Ability_Phoenix_LaunchFireSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_LaunchFireSpiritClassInfo;
  CDOTA_Ability_Phoenix_LaunchFireSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_LaunchFireSpiritClass.m_pBaseClassInfo = CDOTA_Ability_Phoenix_LaunchFireSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_LaunchFireSpiritClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Phoenix_LaunchFireSpiritClass = &CDOTA_Ability_Phoenix_LaunchFireSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_LaunchFireSpiritClass;
  CDOTA_Ability_Phoenix_LaunchFireSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_LaunchFireSpiritClassInfo.m_pClass = &CDOTA_Ability_Phoenix_LaunchFireSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_LaunchFireSpiritClass;
  CDOTA_Ability_Phoenix_LaunchFireSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_LaunchFireSpiritClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Phoenix_LaunchFireSpiritClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Phoenix_LaunchFireSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_LaunchFireSpiritClass;
}


// CDOTA_Ability_Phoenix_LaunchFireSpirit::IsHiddenWhenStolen  (line 1604, @0x0000000002d1cde0, libserver.so)
bool __fastcall CDOTA_Ability_Phoenix_LaunchFireSpirit::IsHiddenWhenStolen(
        CDOTA_Ability_Phoenix_LaunchFireSpirit *const this)
{
  return 1;
}


// CDOTA_Ability_Phoenix_LaunchFireSpirit::ProcsMagicStick  (line 1605, @0x0000000002d1cdf0, libserver.so)
bool __fastcall CDOTA_Ability_Phoenix_LaunchFireSpirit::ProcsMagicStick(
        CDOTA_Ability_Phoenix_LaunchFireSpirit *const this)
{
  return 0;
}


// CDOTA_Ability_Phoenix_LaunchFireSpirit::GetAssociatedPrimaryAbilities  (line 1607, @0x0000000002d1ce00, libserver.so)
// strings: "phoenix_fire_spirits"
const char *__fastcall CDOTA_Ability_Phoenix_LaunchFireSpirit::GetAssociatedPrimaryAbilities(
        CDOTA_Ability_Phoenix_LaunchFireSpirit *const this)
{
  return "phoenix_fire_spirits";
}


// CDOTA_Ability_Phoenix_LaunchFireSpirit::YouForgotToImplementOrDeclareServerClass  (line 1618, @0x0000000002cc8b10, libserver.so)
int __fastcall CDOTA_Ability_Phoenix_LaunchFireSpirit::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Phoenix_LaunchFireSpirit *const this)
{
  return 0;
}


// CDOTA_Ability_Phoenix_LaunchFireSpirit::GetServerClass  (line 1618, @0x0000000002cde630, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Phoenix_LaunchFireSpirit::GetServerClass(
        CDOTA_Ability_Phoenix_LaunchFireSpirit *const this)
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


// CDOTA_Ability_Phoenix_LaunchFireSpirit::OnSpellStart  (line 1627, @0x0000000002d00be0, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, NormalizeInPlace, Set, Vector, VectorMultiply, VectorNormalize2D, VectorSubtract, operator*, operator-, operator=, sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::GetCursorPosition, CBaseAnimating::GetAttachment, VectorNormalize, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, KeyValues::KeyValues, KeyValues::SetInt (21 total)
// strings: "spirit_speed", "hp_cost_perc", "modifier_phoenix_fire_spirit_count", "attach_hitloc", "particles/units/heroes/hero_phoenix/phoenix_fire_spirit_launch.vpcf", "phoenix_launch_fire_spirit" (8 total)
void __fastcall CDOTA_Ability_Phoenix_LaunchFireSpirit::OnSpellStart(
        CDOTA_Ability_Phoenix_LaunchFireSpirit *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v4; // r12
  vec_t z; // eax
  CDOTA_BaseNPC *v6; // rax
  float spirit_speed; // xmm0_4
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax
  int v10; // r13d
  CDOTA_ParticleManager *v11; // rax
  int m_nFXIndex; // r13d
  CDOTA_ParticleManager *v13; // rax
  int v14; // r13d
  CDOTA_ParticleManager *v15; // rax
  int v16; // r13d
  CDOTA_ParticleManager *v17; // rax
  vec_t v18; // xmm0_4
  vec_t y; // xmm1_4
  float v20; // xmm0_4
  CDOTA_BaseNPC *v21; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v23; // eax
  __int16 v24; // cx
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  const QAngle *AbsAngles; // rax
  float fLength; // [rsp+Ch] [rbp-114h]
  Vector vStartPos; // [rsp+20h] [rbp-100h] BYREF
  Vector vDirection; // [rsp+30h] [rbp-F0h] BYREF
  Vector vNewDirection; // [rsp+40h] [rbp-E0h] BYREF
  Vector vVelocity; // [rsp+50h] [rbp-D0h]
  sLinearProjectileCreateInfo info; // [rsp+60h] [rbp-C0h] BYREF
  KeyValues kv; // [rsp+E0h] [rbp-40h] BYREF
  unsigned __int64 v36; // [rsp+F8h] [rbp-28h]
  Vector CursorPosition; // 0:kr00_12.12

  v36 = __readfsqword(0x28u);
  this->spirit_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "spirit_speed", -1, 0);
  this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  this->hp_cost_perc = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "hp_cost_perc", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_phoenix_fire_spirit_count", 0);
  v4 = ModifierByName;
  if ( ModifierByName != 0 )
  {
    if ( (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName) <= 0 )
    {
      CDOTA_Buff::Destroy(v4, 0, 0, 0);
    }
    else
    {
      CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
      z = vec3_invalid.z;
      *&vStartPos.x = *&vec3_invalid.x;
      vStartPos.z = z;
      v6 = CDOTABaseAbility::GetCaster(this);
      CBaseAnimating::GetAttachment(v6, "attach_hitloc", &vStartPos);
      vDirection.y = CursorPosition.y - vStartPos.y;
      vDirection.x = CursorPosition.x - vStartPos.x;
      vDirection.z = CursorPosition.z - vStartPos.z;
      *&vNewDirection.x = *&vDirection.x;
      vNewDirection.z = CursorPosition.z - vStartPos.z;
      VectorNormalize(&vNewDirection);
      spirit_speed = this->spirit_speed;
      vDirection.z = 0.0;
      vVelocity.y = vNewDirection.y * spirit_speed;
      vVelocity.z = vNewDirection.z * spirit_speed;
      vVelocity.x = spirit_speed * vNewDirection.x;
      fLength = VectorNormalize(&vDirection);
      if ( fLength < 0.0099999998 )
      {
        v27 = CDOTABaseAbility::GetCaster(this);
        AbsAngles = CBaseEntity::GetAbsAngles(v27);
        AngleVectors(AbsAngles, &vDirection, 0, 0);
      }
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_phoenix/phoenix_fire_spirit_launch.vpcf",
                   2,
                   0,
                   0,
                   0);
      this->m_nFXIndex = Particle;
      v10 = Particle;
      v11 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v11, v10, 0, *&vStartPos.x, vStartPos.z);
      m_nFXIndex = this->m_nFXIndex;
      v13 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v13, m_nFXIndex, 1, *&vVelocity.x, vVelocity.z);
      v14 = this->m_nFXIndex;
      v15 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v15, v14, 2, *&CursorPosition.x, CursorPosition.z);
      v16 = this->m_nFXIndex;
      *&info.pszEffectName = this->spirit_speed;
      HIDWORD(info.pszEffectName) = info.pszEffectName;
      LODWORD(info.pAbility) = info.pszEffectName;
      v17 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v17, v16, 3, *&info.pszEffectName, *&info.pAbility);
      KeyValues::KeyValues(&kv, "phoenix_launch_fire_spirit");
      KeyValues::SetInt(&kv, "fxIndex", this->m_nFXIndex);
      info.bHasFrontalCone = 1;
      info.hSource.m_Index = -1;
      info.pszEffectName = 0;
      info.fStartRadius = 0.0;
      v18 = vec3_origin.z;
      info.bCheckStartPosition = 0;
      y = vec3_origin.y;
      info.bProvidesVision = 0;
      info.vAcceleration.z = v18;
      info.bDrawsOnMinimap = 0;
      info.vAcceleration.x = vec3_origin.x;
      info.vSpawnOrigin = vStartPos;
      info.vAcceleration.y = y;
      info.fEndRadius = 0.0;
      v20 = this->spirit_speed;
      info.iUnitTargetTeam = 0;
      info.iUnitTargetType = 0;
      info.iUnitTargetFlags = 0;
      info.iVisionTeamNumber = -1;
      info.iVisionRadius = -1;
      info.bVisibleToEnemies = 1;
      info.bIgnoreSource = 0;
      info.bStickyFoWReveal = 0;
      info.pKVExtraData = 0;
      info.fExpireTime = 0.0;
      info.fMaxSpeed = 0.0;
      info.pAbility = this;
      info.vVelocity.x = v20 * vDirection.x;
      info.vVelocity.y = vDirection.y * v20;
      info.vVelocity.z = vDirection.z * v20;
      info.fDistance = fLength;
      v21 = CDOTABaseAbility::GetCaster(this);
      if ( v21 != 0 && (m_pEntity = v21->m_pEntity) != 0 )
      {
        v23 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v24 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v24 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(info.hSource.m_Index) = v24 | info.hSource.m_Index & 0x8000;
        info.hSource.m_Index = (v23 << 15) | info.hSource.m_Index & 0x7FFF;
      }
      else
      {
        info.hSource.m_Index = -1;
      }
      info.pKVExtraData = &kv;
      CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
      (*(v4->_vptr_CDOTA_Buff + 26))(v4);
      if ( (*(v4->_vptr_CDOTA_Buff + 27))(v4) <= 0 )
        CDOTA_Buff::Destroy(v4, 0, 0, 0);
      v25 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::StartGesture(v25, 1517, 0.1, 0.1, 9, 0, 1.0);
      v26 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::UnitEmitSound(v26, "Hero_Phoenix.FireSpirits.Launch", 0.0, 0, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Ability_Phoenix_LaunchFireSpirit::OnProjectileHit_ExtraData  (line 1697, @0x0000000002cef2b0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: KeyValues::GetInt, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTABaseAbility::GetCaster, CDOTAFogOfWarSystem::AddTempViewer, FindUnitsInRadius, DOTA_EmitSoundLocationWithCaster, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues (18 total)
// strings: "fxIndex", "Hero_Phoenix.FireSpirits.Target", "modifier_phoenix_fire_spirit_burn", "Hero_Phoenix.FireSpirits.ProjectileHit", "particles/units/heroes/hero_phoenix/phoenix_fire_spirit_ground.vpcf"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Phoenix_LaunchFireSpirit::OnProjectileHit_ExtraData(
        CDOTA_Ability_Phoenix_LaunchFireSpirit *const this,
        EHANDLE hTarget,
        const CFieldPath *vLocation,
        KeyValues *pExtraData)
{
  int Int; // eax
  int v7; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Caster; // rax
  __m128i v10; // xmm2
  float v11; // ebx
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  __int64 v14; // rbx
  CHandle<CBaseEntity> *v15; // rdx
  uint32 m_Index; // eax
  __int16 v17; // cx
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  unsigned __int64 m_Value; // rax
  float v22; // xmm1_4
  CDOTA_BaseNPC *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  CDOTA_ParticleManager *v28; // rax
  float flRadius; // [rsp+18h] [rbp-88h]
  double v31; // [rsp+20h] [rbp-80h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > vecEntities; // [rsp+30h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+68h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  Int = KeyValues::GetInt(pExtraData, "fxIndex", 0);
  this->m_nFXIndex = Int;
  v7 = Int;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, v7, 0);
  flRadius = this->radius;
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_FIRESPIRITS,
    Caster->m_iTeamNum.m_Value,
    vLocation,
    flRadius,
    1.0,
    1);
  *v10.m128i_i32 = this->radius;
  vecEntities.m_Size = 0;
  vecEntities.m_Memory.m_pMemory = 0;
  vecEntities.m_Memory.m_nAllocationCount = 0;
  vecEntities.m_Memory.m_nGrowSize = 0;
  v11 = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
  v12 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v12->m_iTeamNum.m_Value, vLocation, 0, v11, &vecEntities, 2, 3, 0, 0, 0);
  v13 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSoundLocationWithCaster(vLocation, "Hero_Phoenix.FireSpirits.Target", v13);
  if ( vecEntities.m_Size > 0 )
  {
    v14 = 0;
    do
    {
      while ( 1 )
      {
        v15 = &vecEntities.m_Memory.m_pMemory[v14];
        m_Index = v15->m_Index;
        if ( v15->m_Index + 2 > 1 )
        {
          v17 = v15->m_Index;
          v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v15->m_Index) >> 9) & 0x3F];
          if ( v18 != 0 )
          {
            v19 = &v18[v17 & 0x1FF];
            if ( v19 != 0 && m_Index == v19->m_EHandle.m_Index )
            {
              m_pInstance = v19->m_pInstance;
              if ( v19->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              {
                m_Value = m_pInstance->m_nUnitState64.m_Value;
                if ( (m_Value & 0x200) == 0 && !m_pInstance->m_bIsWaitingToSpawn.m_Value && (m_Value & 0x100) == 0 )
                  break;
              }
            }
          }
        }
        if ( vecEntities.m_Size <= ++v14 )
          goto LABEL_14;
      }
      KeyValues::KeyValues(&kv, "modifier_phoenix_fire_spirit_burn");
      KeyValues::SetFloat(&kv, "duration", v22);
      v23 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v23, this, "modifier_phoenix_fire_spirit_burn", &kv, 0);
      CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Phoenix.FireSpirits.ProjectileHit", 0.0, 0, 0);
      KeyValues::~KeyValues(&kv);
      ++v14;
    }
    while ( vecEntities.m_Size > v14 );
  }
LABEL_14:
  v24 = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               v24,
               "particles/units/heroes/hero_phoenix/phoenix_fire_spirit_ground.vpcf",
               8,
               0,
               0,
               0);
  v26 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(
    v26,
    Particle,
    0,
    *&vLocation->u.m_pPaths,
    *&vLocation->u.m_FixedPaths[4].m_nValue);
  *&v31 = this->radius;
  *(&v31 + 1) = *&v31;
  v27 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v27, Particle, 1, v31, *&v31);
  v28 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v28, Particle);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&vecEntities);
  return 0;
}


// CDOTA_Ability_Phoenix_LaunchFireSpirit::OnUpgrade  (line 1732, @0x0000000002ccbeb0, libserver.so)
// calls: CDOTABaseAbility::OnUpgrade, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName
// strings: "phoenix_fire_spirits"
void __fastcall CDOTA_Ability_Phoenix_LaunchFireSpirit::OnUpgrade(CDOTA_Ability_Phoenix_LaunchFireSpirit *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  CDOTABaseAbility::OnUpgrade(this);
  if ( CDOTABaseAbility::GetCaster(this) != 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "phoenix_fire_spirits", 0);
    if ( AbilityByName != 0 )
      (*(AbilityByName->_vptr_IHandleEntity + 212))(AbilityByName, this->m_iLevel.m_Value);
  }
}


// CDOTA_Modifier_Phoenix_FireSpiritBurn::~CDOTA_Modifier_Phoenix_FireSpiritBurn  (line 1752, @0x0000000002d28460, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Phoenix_FireSpiritBurn::~CDOTA_Modifier_Phoenix_FireSpiritBurn(
        CDOTA_Modifier_Phoenix_FireSpiritBurn *const this)
{
  this->_vptr_CDOTA_Buff = &off_460FFF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Phoenix_FireSpiritBurn::~CDOTA_Modifier_Phoenix_FireSpiritBurn  (line 1752, @0x0000000002d28480, libserver.so)  // inlines: ~CDOTA_Modifier_Phoenix_FireSpiritBurn
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Phoenix_FireSpiritBurn::~CDOTA_Modifier_Phoenix_FireSpiritBurn(
        CDOTA_Modifier_Phoenix_FireSpiritBurn *const this)
{
  this->_vptr_CDOTA_Buff = &off_460FFF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Phoenix_FireSpiritBurn::GetStatusEffectName  (line 1759, @0x0000000002d1ce10, libserver.so)
// strings: "particles/status_fx/status_effect_phoenix_burning.vpcf"
const char *__fastcall CDOTA_Modifier_Phoenix_FireSpiritBurn::GetStatusEffectName(
        CDOTA_Modifier_Phoenix_FireSpiritBurn *const this)
{
  return "particles/status_fx/status_effect_phoenix_burning.vpcf";
}


// CDOTA_Modifier_Phoenix_FireSpiritBurn::StatusEffectPriority  (line 1760, @0x0000000002d1ce20, libserver.so)
int __fastcall CDOTA_Modifier_Phoenix_FireSpiritBurn::StatusEffectPriority(
        CDOTA_Modifier_Phoenix_FireSpiritBurn *const this)
{
  return 300;
}


// CDOTA_Modifier_Phoenix_FireSpiritBurn::OnCreated  (line 1777, @0x0000000002cfb020, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, DotaRetrieveAbilityValue<int>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CBaseEntity::GetAbsOrigin, CDOTA_Buff::AddParticle
// strings: "attackspeed_slow", "particles/units/heroes/hero_phoenix/phoenix_fire_spirit_burn_creep.vpcf", "attach_hitloc", "attach_attack1", "particles/units/heroes/hero_phoenix/phoenix_fire_spirit_burn.vpcf"
void __fastcall CDOTA_Modifier_Phoenix_FireSpiritBurn::OnCreated(
        CDOTA_Modifier_Phoenix_FireSpiritBurn *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm1_4
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  const char *v9; // rsi
  int Particle; // r12d
  CDOTA_BaseNPC *v11; // r13
  CDOTA_ParticleManager *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v15; // r14
  CDOTA_ParticleManager *v16; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->tick_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "tick_interval", -1, 0);
  else
    this->tick_interval = 0.0;
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->attackspeed_slow, "attackspeed_slow");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->damage_per_second, "damage_per_second");
  CDOTA_Buff::StartIntervalThink(this, this->tick_interval, v6);
  if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 1) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    ParticleManager = GetParticleManager();
    v9 = "particles/units/heroes/hero_phoenix/phoenix_fire_spirit_burn.vpcf";
  }
  else
  {
    Parent = CDOTA_Buff::GetParent(this);
    ParticleManager = GetParticleManager();
    v9 = "particles/units/heroes/hero_phoenix/phoenix_fire_spirit_burn_creep.vpcf";
  }
  Particle = CDOTA_ParticleManager::CreateParticle(ParticleManager, v9, 1, Parent, 0, 0);
  v11 = CDOTA_Buff::GetParent(this);
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v12, Particle, 1, v11, 5, "attach_hitloc", vec3_invalid, 1);
  v13 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v13);
  v15 = CDOTA_Buff::GetParent(this);
  v16 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v16, Particle, 2, v15, 5, "attach_attack1", *AbsOrigin, 1);
  CDOTA_Buff::AddParticle(this, Particle, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_Phoenix_FireSpiritBurn::OnIntervalThink  (line 1807, @0x0000000002ccd6b0, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage
void __fastcall CDOTA_Modifier_Phoenix_FireSpiritBurn::OnIntervalThink(
        CDOTA_Modifier_Phoenix_FireSpiritBurn *const this)
{
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  float v5; // [rsp+Ch] [rbp-24h]

  v5 = this->damage_per_second * this->tick_interval;
  Ability = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, Ability, v5, 2, 0);
}


// CDOTA_Modifier_Phoenix_FireSpiritBurn::DeclareFunctions  (line 1816, @0x0000000002cc8b20, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Phoenix_FireSpiritBurn::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Phoenix_FireSpiritBurn::OnTooltip(CModifierParams const&)
void __fastcall CDOTA_Modifier_Phoenix_FireSpiritBurn::DeclareFunctions(
        CDOTA_Modifier_Phoenix_FireSpiritBurn *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_Phoenix_FireSpiritBurn::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[151].__delta = 0;
  this->m_Functions[151].__pfn = CDOTA_Modifier_Phoenix_FireSpiritBurn::OnTooltip;
}


// CDOTA_Modifier_Phoenix_FireSpiritBurn::GetModifierAttackSpeedBonus_Constant  (line 1825, @0x0000000002cc8b60, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Phoenix_FireSpiritBurn::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Phoenix_FireSpiritBurn *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->attackspeed_slow;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Phoenix_FireSpiritBurn::OnTooltip  (line 1832, @0x0000000002cc8b80, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Phoenix_FireSpiritBurn::OnTooltip(
        CDOTA_Modifier_Phoenix_FireSpiritBurn *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->damage_per_second;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Phoenix_Supernova::~CDOTA_Ability_Phoenix_Supernova  (line 1843, @0x0000000002d2b6e0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Phoenix_Supernova::~CDOTA_Ability_Phoenix_Supernova(
        CDOTA_Ability_Phoenix_Supernova *const this)
{
  this->_vptr_IHandleEntity = &off_4610350;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Phoenix_Supernova::~CDOTA_Ability_Phoenix_Supernova  (line 1843, @0x0000000002d2b700, libserver.so)  // inlines: ~CDOTA_Ability_Phoenix_Supernova
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Phoenix_Supernova::~CDOTA_Ability_Phoenix_Supernova(
        CDOTA_Ability_Phoenix_Supernova *const this)
{
  this->_vptr_IHandleEntity = &off_4610350;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Phoenix_Supernova::Schema_DynamicBinding  (line 1845, @0x0000000002d1ce30, libserver.so)
// globals: CDOTA_Ability_Phoenix_Supernova::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Phoenix_Supernova::Schema_DynamicBinding(
        const CDOTA_Ability_Phoenix_Supernova *const this)
{
  return CDOTA_Ability_Phoenix_Supernova::s_pSchemaBinding;
}


// CDOTA_Ability_Phoenix_Supernova::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1845, @0x0000000002d1ce40, libserver.so)
// globals: CDOTA_Ability_Phoenix_Supernova::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Phoenix_Supernova::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Phoenix_Supernova::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Phoenix_Supernova::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Phoenix_Supernova::CEntityInstanceEntityClass::DestructInstance  (line 1845, @0x0000000002d1ce50, libserver.so)  // inlines: Destruct<CDOTA_Ability_Phoenix_Supernova>
void __fastcall CDOTA_Ability_Phoenix_Supernova::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Phoenix_Supernova::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Phoenix_Supernova::CEntityInstanceEntityClass::FreeInstance  (line 1845, @0x0000000002d1ce70, libserver.so)
void __fastcall CDOTA_Ability_Phoenix_Supernova::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Phoenix_Supernova::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Phoenix_Supernova::CEntityInstanceEntityClass::CanAllocate  (line 1845, @0x0000000002d1ce90, libserver.so)
bool __fastcall CDOTA_Ability_Phoenix_Supernova::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Phoenix_Supernova::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Phoenix_Supernova::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1845, @0x0000000002d1cea0, libserver.so)
// globals: CDOTA_Ability_Phoenix_Supernova::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Phoenix_Supernova::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Phoenix_Supernova::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Phoenix_Supernova::s_pSchemaBinding;
}


// CDOTA_Ability_Phoenix_Supernova::CEntityInstanceEntityClass::AllocateInstance  (line 1845, @0x0000000002d24250, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Phoenix_Supernova::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Phoenix_Supernova::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Phoenix_Supernova::CEntityInstanceEntityClass::ConstructInstance  (line 1845, @0x0000000002d28d50, libserver.so)  // inlines: CDOTA_Ability_Phoenix_Supernova, Construct<CDOTA_Ability_Phoenix_Supernova>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Phoenix_Supernova::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Phoenix_Supernova::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4610350;
  }
  return p;
}


// CDOTA_Ability_Phoenix_Supernova::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1845, @0x0000000002d33af0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Phoenix_Supernova::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Phoenix_Supernova::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Phoenix_Supernova::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1845, @0x0000000002d33b10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Phoenix_Supernova::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Phoenix_Supernova::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Phoenix_Supernova::GetEntityClassInternal  (line 1845, @0x0000000002d47780, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "phoenix_supernova", "CDOTA_Ability_Phoenix_Supernova"
// globals: `guard variable for'CDOTA_Ability_Phoenix_Supernova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SupernovaClass, CDOTA_Ability_Phoenix_Supernova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SupernovaClass, __dso_handle, CDOTA_Ability_Phoenix_Supernova::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Phoenix_Supernova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SupernovaClassInfo, CDOTA_Ability_Phoenix_Supernova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SupernovaClassInfo
CEntityClass *__cdecl CDOTA_Ability_Phoenix_Supernova::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Phoenix_Supernova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SupernovaClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Phoenix_Supernova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SupernovaClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Phoenix_Supernova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SupernovaClass);
    CDOTA_Ability_Phoenix_Supernova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SupernovaClass._vptr_CEntityClass = off_46102D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Phoenix_Supernova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SupernovaClass);
    __cxa_atexit(
      CDOTA_Ability_Phoenix_Supernova::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Phoenix_Supernova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SupernovaClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Phoenix_SupernovaClass != 0 )
    return &CDOTA_Ability_Phoenix_Supernova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SupernovaClass;
  if ( `guard variable for'CDOTA_Ability_Phoenix_Supernova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SupernovaClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Phoenix_Supernova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SupernovaClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Phoenix_Supernova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SupernovaClassInfo,
      "CDOTA_Ability_Phoenix_Supernova",
      "phoenix_supernova",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Phoenix_Supernova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SupernovaClassInfo);
  }
  CDOTA_Ability_Phoenix_Supernova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SupernovaClass.m_pClassInfo = &CDOTA_Ability_Phoenix_Supernova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SupernovaClassInfo;
  CDOTA_Ability_Phoenix_Supernova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SupernovaClass.m_pBaseClassInfo = CDOTA_Ability_Phoenix_Supernova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SupernovaClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Phoenix_SupernovaClass = &CDOTA_Ability_Phoenix_Supernova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SupernovaClass;
  CDOTA_Ability_Phoenix_Supernova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Phoenix_SupernovaClassInfo.m_pClass = &CDOTA_Ability_Phoenix_Supernova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SupernovaClass;
  CDOTA_Ability_Phoenix_Supernova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SupernovaClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Phoenix_SupernovaClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Phoenix_Supernova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Phoenix_SupernovaClass;
}


// CDOTA_Ability_Phoenix_Supernova::YouForgotToImplementOrDeclareServerClass  (line 1858, @0x0000000002cc8ba0, libserver.so)
int __fastcall CDOTA_Ability_Phoenix_Supernova::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Phoenix_Supernova *const this)
{
  return 0;
}


// CDOTA_Ability_Phoenix_Supernova::GetServerClass  (line 1858, @0x0000000002cde870, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Phoenix_Supernova::GetServerClass(CDOTA_Ability_Phoenix_Supernova *const this)
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


// CDOTA_Ability_Phoenix_Supernova::Precache  (line 1866, @0x0000000002cce690, libserver.so)
// calls: CDOTABaseAbility::Precache, DOTA_PrecacheUnitByNameSync
// strings: "npc_dota_phoenix_sun"
void __fastcall CDOTA_Ability_Phoenix_Supernova::Precache(
        CDOTA_Ability_Phoenix_Supernova *const this,
        const CEntityPrecacheContext *pContext)
{
  CDOTABaseAbility::Precache(this, pContext);
  DOTA_PrecacheUnitByNameSync("npc_dota_phoenix_sun", pContext->m_pManifest, -1);
}


// CDOTA_Ability_Phoenix_Supernova::GetBehavior  (line 1874, @0x0000000002cce6c0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter
int __fastcall CDOTA_Ability_Phoenix_Supernova::GetBehavior(CDOTA_Ability_Phoenix_Supernova *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  return !CDOTA_BaseNPC::HasScepter(Caster) ? 33554436 : 8;
}


// CDOTA_Ability_Phoenix_Supernova::OnSpellStart  (line 1887, @0x0000000002ccea80, libserver.so)  // inlines: GetTeamNumber, ToDOTABaseNPC, VectorAdd, operator+
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_ParticleManager::SetParticleControl, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier (27 total)
// strings: "particles/units/heroes/hero_phoenix/phoenix_supernova_start.vpcf", "attach_hitloc", "particles/units/heroes/hero_phoenix/phoenix_supernova_scepter.vpcf", "modifier_phoenix_icarus_dive", "modifier_phoenix_sun_ray", "modifier_phoenix_fire_spirit_count" (12 total)
void __fastcall CDOTA_Ability_Phoenix_Supernova::OnSpellStart(CDOTA_Ability_Phoenix_Supernova *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rbx
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r14d
  const Vector *AbsOrigin; // r15
  CDOTA_ParticleManager *v9; // rax
  CDOTA_ParticleManager *v10; // rax
  CDOTA_ParticleManager *v11; // rax
  int v12; // r14d
  const Vector *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  __int64 v16; // r15
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v20; // rax
  CDOTA_Buff *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  int m_Value; // r15d
  const Vector *v24; // rax
  CDOTA_BaseNPC *UnitByName; // r15
  CDOTA_BaseNPC *v26; // rax
  float v27; // xmm3_4
  float v28; // xmm1_4
  CDOTABody *v29; // rax
  const Vector *v30; // rbx
  CDOTA_BaseNPC *v31; // rax
  float v32; // xmm3_4
  CBaseEntity *CursorTarget; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-64h]
  unsigned int vecFallbackPositiona; // [rsp+Ch] [rbp-64h]
  float vecFallbackPositionb; // [rsp+Ch] [rbp-64h]
  double v37; // [rsp+10h] [rbp-60h]
  float v38; // [rsp+18h] [rbp-58h]
  KeyValues kv; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v40; // [rsp+38h] [rbp-38h]
  Vector v41; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v42; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v43; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v44; // 0:xmm0_8.8,8:xmm1_4.4

  v40 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = Caster;
  if ( Caster == 0 || !Caster->m_bIsDOTANPC )
    v3 = 0;
  v4 = CDOTABaseAbility::GetCaster(this);
  if ( !CDOTA_BaseNPC::HasScepter(v4)
    || (CursorTarget = CDOTABaseAbility::GetCursorTarget(this), v5 = CursorTarget, CursorTarget == 0)
    || !CursorTarget->m_bIsDOTANPC )
  {
    v5 = 0;
  }
  if ( v3 != 0 )
  {
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_phoenix/phoenix_supernova_start.vpcf",
                 1,
                 v3,
                 0,
                 0);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
    v9 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v9, Particle, 1, v3, 5, "attach_hitloc", *AbsOrigin, 1);
    v10 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v10, Particle);
    if ( v5 != 0 )
    {
      v11 = GetParticleManager();
      v12 = CDOTA_ParticleManager::CreateParticle(
              v11,
              "particles/units/heroes/hero_phoenix/phoenix_supernova_scepter.vpcf",
              2,
              v5,
              0,
              0);
      v13 = CBaseEntity::GetAbsOrigin(v5);
      v38 = v13->z + 64.0;
      *(&v37 + 1) = v13->y + 0.0;
      *&v37 = v13->x + 0.0;
      v14 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v14, v12, 0, v37, v38);
      v15 = GetParticleManager();
      v16 = *&vec3_invalid.x;
      vecFallbackPosition = vec3_invalid.z;
      CDOTA_ParticleManager::SetParticleControlEnt(v15, v12, 1, v3, 5, "attach_hitloc", vec3_invalid, 1);
      v17 = GetParticleManager();
      *&v41.x = v16;
      v41.z = vecFallbackPosition;
      CDOTA_ParticleManager::SetParticleControlEnt(v17, v12, 2, v5, 1, 0, v41, 1);
      v18 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v18, v12);
    }
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(v3, "modifier_phoenix_icarus_dive", 0);
    if ( ModifierByName != 0 )
      CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
    v20 = CDOTA_BaseNPC::FindModifierByName(v3, "modifier_phoenix_sun_ray", 0);
    if ( v20 != 0 )
      CDOTA_Buff::Destroy(v20, 0, 0, 0);
    v21 = CDOTA_BaseNPC::FindModifierByName(v3, "modifier_phoenix_fire_spirit_count", 0);
    if ( v21 != 0 )
      CDOTA_Buff::Destroy(v21, 0, 0, 0);
    KeyValues::KeyValues(&kv, "modifier_phoenix_supernova_hiding");
    CDOTA_BaseNPC::AddNewModifier(v3, v3, this, "modifier_phoenix_supernova_hiding", &kv, 0);
    KeyValues::~KeyValues(&kv);
    Purge(v3, this, 28);
    CDOTA_ModifierManager::RemoveModifierByName(&v3->m_ModifierManager, "modifier_dazzle_shallow_grave");
    if ( v5 != 0 )
    {
      KeyValues::KeyValues(&kv, "modifier_phoenix_supernova_hiding");
      CDOTA_BaseNPC::AddNewModifier(v5, v5, this, "modifier_phoenix_supernova_hiding", &kv, 0);
      KeyValues::~KeyValues(&kv);
      Purge(v5, this, 28);
      CDOTA_ModifierManager::RemoveModifierByName(&v5->m_ModifierManager, "modifier_dazzle_shallow_grave");
      CDOTA_ModifierManager::RemoveModifierByName(&v5->m_ModifierManager, "modifier_legion_commander_duel");
      v22 = CDOTABaseAbility::GetCaster(this);
      v42 = *CBaseEntity::GetAbsOrigin(v22);
      FindClearSpaceForUnit(v5, v42, 0);
      CDOTA_BaseNPC::Interrupt(v5);
    }
    m_Value = v3->m_iTeamNum.m_Value;
    v24 = CBaseEntity::GetAbsOrigin(v3);
    UnitByName = DOTA_CreateUnitByName("npc_dota_phoenix_sun", v24, 1, v3, v3, m_Value);
    if ( UnitByName != 0 )
    {
      v26 = CDOTABaseAbility::GetCaster(this);
      vecFallbackPositiona = (*(v26->_vptr_IHandleEntity + 414))(v26);
      v43 = *CBaseEntity::GetAbsOrigin(v3);
      CGridNav::DestroyTreesAroundPoint(&g_GridNav, 1, vecFallbackPositiona, v43, 400.0, v27);
      KeyValues::KeyValues(&kv, "modifier_phoenix_sun");
      CDOTABaseAbility::GetDuration(this);
      KeyValues::SetFloat(&kv, "duration", v28);
      KeyValues::SetPtr(&kv, "secondarytarget", v5);
      CDOTA_BaseNPC::AddNewModifier(UnitByName, v3, this, "modifier_phoenix_sun", &kv, 0);
      KeyValues::~KeyValues(&kv);
      v44 = *CBaseEntity::GetAbsOrigin(v3);
      FindClearSpaceForUnit(UnitByName, v44, 1);
      v29 = (*(UnitByName->_vptr_IHandleEntity + 377))(UnitByName);
      CDOTABody::StartAnimation(v29, 0x5DCu, 0, 1.0);
      vecFallbackPositionb = CDOTABaseAbility::GetDuration(this);
      v30 = CBaseEntity::GetAbsOrigin(v3);
      v31 = CDOTABaseAbility::GetCaster(this);
      CDOTAGamerules::SendProjectionAbilityMessage(
        g_pGameRules,
        v31,
        0,
        5626,
        0,
        0,
        *&v30->x,
        v30->z,
        vecFallbackPositionb + 2.0,
        v32);
    }
  }
}


// CDOTA_Modifier_Phoenix_SupernovaHiding::~CDOTA_Modifier_Phoenix_SupernovaHiding  (line 1982, @0x0000000002d28410, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Phoenix_SupernovaHiding::~CDOTA_Modifier_Phoenix_SupernovaHiding(
        CDOTA_Modifier_Phoenix_SupernovaHiding *const this)
{
  this->_vptr_CDOTA_Buff = &off_4610E10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Phoenix_SupernovaHiding::~CDOTA_Modifier_Phoenix_SupernovaHiding  (line 1982, @0x0000000002d28430, libserver.so)  // inlines: ~CDOTA_Modifier_Phoenix_SupernovaHiding
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Phoenix_SupernovaHiding::~CDOTA_Modifier_Phoenix_SupernovaHiding(
        CDOTA_Modifier_Phoenix_SupernovaHiding *const this)
{
  this->_vptr_CDOTA_Buff = &off_4610E10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Phoenix_SupernovaHiding::OnCreated  (line 1996, @0x0000000002ccc6c0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CBaseEntity::AddEffects
void __fastcall CDOTA_Modifier_Phoenix_SupernovaHiding::OnCreated(
        CDOTA_Modifier_Phoenix_SupernovaHiding *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  CBaseEntity::AddEffects(Caster, 32);
}


// CDOTA_Modifier_Phoenix_SupernovaHiding::OnDestroy  (line 2015, @0x0000000002cd72f0, libserver.so)  // inlines: MarkPVSInformationDirty, RemoveEffects
// calls: CDOTA_Buff::GetCaster, CBaseEntity::DispatchUpdateTransmitState
void __fastcall CDOTA_Modifier_Phoenix_SupernovaHiding::OnDestroy(CDOTA_Modifier_Phoenix_SupernovaHiding *const this)
{
  CDOTA_BaseNPC *Caster; // rbx

  Caster = CDOTA_Buff::GetCaster(this);
  (*(Caster->_vptr_IHandleEntity + 188))(Caster, Caster->m_fEffects.m_Value & 0xFFFFFFDF);
  Caster->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(Caster);
}


// CDOTA_Modifier_Phoenix_SupernovaHiding::CheckState  (line 2034, @0x0000000002cc8bb0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Phoenix_SupernovaHiding::CheckState(
        CDOTA_Modifier_Phoenix_SupernovaHiding *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x82884387uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFF7D77BC78LL;
}


// CDOTA_Modifier_Phoenix_Sun::~CDOTA_Modifier_Phoenix_Sun  (line 2052, @0x0000000002d283c0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Phoenix_Sun::~CDOTA_Modifier_Phoenix_Sun(CDOTA_Modifier_Phoenix_Sun *const this)
{
  this->_vptr_CDOTA_Buff = &off_4611130;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Phoenix_Sun::~CDOTA_Modifier_Phoenix_Sun  (line 2052, @0x0000000002d283e0, libserver.so)  // inlines: ~CDOTA_Modifier_Phoenix_Sun
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Phoenix_Sun::~CDOTA_Modifier_Phoenix_Sun(CDOTA_Modifier_Phoenix_Sun *const this)
{
  this->_vptr_CDOTA_Buff = &off_4611130;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Phoenix_Sun::IsAura  (line 2060, @0x0000000002d1ceb0, libserver.so)
bool __fastcall CDOTA_Modifier_Phoenix_Sun::IsAura(CDOTA_Modifier_Phoenix_Sun *const this)
{
  return 1;
}


// CDOTA_Modifier_Phoenix_Sun::GetModifierAura  (line 2061, @0x0000000002d1cec0, libserver.so)
// strings: "modifier_phoenix_sun_debuff"
const char *__fastcall CDOTA_Modifier_Phoenix_Sun::GetModifierAura(CDOTA_Modifier_Phoenix_Sun *const this)
{
  return "modifier_phoenix_sun_debuff";
}


// CDOTA_Modifier_Phoenix_Sun::GetAuraSearchTeam  (line 2063, @0x0000000002d1ced0, libserver.so)
int __fastcall CDOTA_Modifier_Phoenix_Sun::GetAuraSearchTeam(CDOTA_Modifier_Phoenix_Sun *const this)
{
  return 2;
}


// CDOTA_Modifier_Phoenix_Sun::GetAuraSearchType  (line 2064, @0x0000000002d1cee0, libserver.so)
int __fastcall CDOTA_Modifier_Phoenix_Sun::GetAuraSearchType(CDOTA_Modifier_Phoenix_Sun *const this)
{
  return 3;
}


// CDOTA_Modifier_Phoenix_Sun::GetAuraRadius  (line 2065, @0x0000000002d1cef0, libserver.so)
int __fastcall CDOTA_Modifier_Phoenix_Sun::GetAuraRadius(CDOTA_Modifier_Phoenix_Sun *const this)
{
  return this->aura_radius;
}


// CDOTA_Modifier_Phoenix_Sun::IsPurgable  (line 2067, @0x0000000002d1cf00, libserver.so)
bool __fastcall CDOTA_Modifier_Phoenix_Sun::IsPurgable(CDOTA_Modifier_Phoenix_Sun *const this)
{
  return 0;
}


// CDOTA_Modifier_Phoenix_Sun::GetNumAvoidLocations  (line 2078, @0x0000000002d1cf10, libserver.so)
int __fastcall CDOTA_Modifier_Phoenix_Sun::GetNumAvoidLocations(CDOTA_Modifier_Phoenix_Sun *const this)
{
  return 1;
}


// CDOTA_Modifier_Phoenix_Sun::GetAvoidLocation  (line 2079, @0x0000000002d2b160, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin
Vector __fastcall CDOTA_Modifier_Phoenix_Sun::GetAvoidLocation(CDOTA_Modifier_Phoenix_Sun *const this, int iAvoid)
{
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  *&result.x = *&AbsOrigin->x;
  result.z = AbsOrigin->z;
  return result;
}


// CDOTA_Modifier_Phoenix_Sun::AvoidFilter  (line 2080, @0x0000000002d2b190, libserver.so)
// calls: CDOTA_Buff::GetParent
bool __fastcall CDOTA_Modifier_Phoenix_Sun::AvoidFilter(CDOTA_Modifier_Phoenix_Sun *const this, CDOTA_BaseNPC *pEntity)
{
  return CDOTA_Buff::GetParent(this) != pEntity;
}


// CDOTA_Modifier_Phoenix_Sun::AvoidStrength  (line 2081, @0x0000000002d35a30, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, RemapValClamped, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Modifier_Phoenix_Sun::AvoidStrength(CDOTA_Modifier_Phoenix_Sun *const this, CDOTA_Bot *pBot)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  const CBaseEntity *m_pInstance; // rdi
  float v6; // xmm1_4
  float result; // xmm0_4

  m_Index = pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pBot->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[pBot->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v6 = (CBaseEntity::GetHealth(m_pInstance) - 100.0) / 700.0;
  if ( v6 < 0.0 )
    return 1.0;
  result = 0.5;
  if ( v6 <= 1.0 )
    return (v6 * -0.5) + 1.0;
  return result;
}


// CDOTA_Modifier_Phoenix_Sun::GetAvoidRadius  (line 2082, @0x0000000002d1cf20, libserver.so)
float __fastcall CDOTA_Modifier_Phoenix_Sun::GetAvoidRadius(CDOTA_Modifier_Phoenix_Sun *const this, int iAvoid)
{
  return this->aura_radius + 100.0;
}


// CDOTA_Modifier_Phoenix_Sun::IsAvoidMagical  (line 2083, @0x0000000002d1cf40, libserver.so)
bool __fastcall CDOTA_Modifier_Phoenix_Sun::IsAvoidMagical(CDOTA_Modifier_Phoenix_Sun *const this)
{
  return 1;
}


// CDOTA_Modifier_Phoenix_Sun::IsPersistentAvoidance  (line 2084, @0x0000000002d1cf50, libserver.so)
bool __fastcall CDOTA_Modifier_Phoenix_Sun::IsPersistentAvoidance(CDOTA_Modifier_Phoenix_Sun *const this)
{
  return 1;
}


// CDOTA_Modifier_Phoenix_Sun::OnCreated  (line 2106, @0x0000000002d001f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetSerialNumber, Set, operator=
// calls: KeyValues::GetPtr, CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::HasScepter, CDOTA_Buff::StartIntervalThink
// strings: "secondarytarget", "max_hero_attacks", "max_hero_attacks_scepter", "creep_attacks_count", "special_bonus_unique_phoenix_2", "special_bonus_unique_phoenix_1"
void __fastcall CDOTA_Modifier_Phoenix_Sun::OnCreated(CDOTA_Modifier_Phoenix_Sun *const this, KeyValues *pKV)
{
  _QWORD *Ptr; // rax
  __int64 v4; // rdx
  int v5; // eax
  __int16 v6; // cx
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  CDOTABaseAbility *v10; // rax
  CDOTABaseAbility *v11; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v14; // rax
  int max_hero_attacks_scepter; // eax
  CDOTA_BaseNPC *v16; // rax
  CDOTABaseAbility *v17; // rax
  float v18; // xmm1_4

  Ptr = KeyValues::GetPtr(pKV, "secondarytarget", 0);
  if ( Ptr != 0 && (v4 = Ptr[1]) != 0 )
  {
    v5 = (*(v4 + 16) >> 15) - (*(v4 + 48) & 1);
    v6 = 0x7FFF;
    if ( *(v4 + 16) != -1 )
      v6 = *(v4 + 16) & 0x7FFF;
    LOWORD(this->m_hSecondaryTarget.m_Index) = v6 | this->m_hSecondaryTarget.m_Index & 0x8000;
    this->m_hSecondaryTarget.m_Index = (v5 << 15) | this->m_hSecondaryTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hSecondaryTarget.m_Index = -1;
  }
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->aura_radius, "aura_radius");
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 != 0 )
    this->stun_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8, "stun_duration", -1, 0);
  else
    this->stun_duration = 0.0;
  v9 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v9, &this->max_hero_attacks, "max_hero_attacks");
  v10 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v10, &this->max_hero_attacks_scepter, "max_hero_attacks_scepter");
  v11 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v11, &this->creep_attacks_count, "creep_attacks_count");
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_phoenix_2", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->stun_duration = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1)
                        + this->stun_duration;
  v14 = CDOTA_Buff::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(v14) )
    max_hero_attacks_scepter = this->max_hero_attacks_scepter;
  else
    max_hero_attacks_scepter = this->max_hero_attacks;
  this->max_hero_attacks_required = max_hero_attacks_scepter;
  v16 = CDOTA_Buff::GetCaster(this);
  v17 = CDOTA_BaseNPC::FindAbilityByName(v16, "special_bonus_unique_phoenix_1", 0);
  if ( v17 != 0 && v17->m_iLevel.m_Value > 0 )
    this->max_hero_attacks_required += CDOTABaseAbility::GetLevelSpecialValueFor<int>(v17, "value", 1, 1);
  this->m_iAttackCount = 0;
  CDOTA_Buff::StartIntervalThink(this, 0.0, v18);
}


// CDOTA_Modifier_Phoenix_Sun::OnDestroy  (line 2161, @0x0000000002cef5f0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, DOTAGameRules, Get, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetInstance, GetMaxMana, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy, CDOTAGamerules::SendProjectionAbilityEndChannelMessage, CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CBaseEntity::GetAbsOrigin, CDOTAGamerules::SendProjectionAbilityMessage, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl (32 total)
// strings: "modifier_phoenix_supernova_hiding", "particles/units/heroes/hero_phoenix/phoenix_supernova_reborn.vpcf", "phoenix_sun_stun", "modifier_stunned", "Hero_Phoenix.SuperNova.Explode", "Hero_Phoenix.SuperNova.Cast"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Phoenix_Sun::OnDestroy(CDOTA_Modifier_Phoenix_Sun *const this)
{
  CEntityInstance *v2; // rax
  CDOTA_BaseNPC *v3; // r15
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTABaseAbility *Ability; // rax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  int m_iAbilityID; // r14d
  CDOTA_BaseNPC *v13; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v15; // rax
  float v16; // xmm3_4
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_BaseNPC *v19; // rax
  const Vector *v20; // r13
  CDOTA_ParticleManager *v21; // rax
  unsigned int v22; // xmm0_4
  CDOTA_ParticleManager *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  CDOTA_ParticleManager *v25; // rax
  __m128i v26; // xmm4
  CDOTA_BaseNPC *v27; // rax
  const Vector *v28; // rbx
  CDOTA_BaseNPC *v29; // rax
  __int64 v30; // rbx
  CHandle<CBaseEntity> *v31; // rdx
  uint32 m_Index; // eax
  __int16 v33; // cx
  CEntityIdentity *v34; // rdx
  CEntityIdentity *v35; // rdx
  CEntityInstance *m_pInstance; // r13
  float v37; // xmm1_4
  CDOTA_BaseNPC *v38; // rax
  int i; // r13d
  CDOTA_BaseNPC *v40; // rax
  CDOTABaseAbility *AbilityByIndex; // rbx
  CDOTA_BaseNPC *v42; // rax
  int v43; // ebx
  CDOTA_BaseNPC *v44; // rax
  float m_Value; // ebx
  CDOTA_BaseNPC *v46; // rax
  __m128i v47; // xmm3
  float v48; // ebx
  CDOTA_BaseNPC *v49; // rax
  CDOTA_BaseNPC *v50; // rax
  CDOTA_BaseNPC *v51; // rax
  CDOTA_BaseNPC *v52; // rax
  CDOTABaseAbility *v53; // rbx
  int v54; // eax
  CDOTA_BaseNPC *v55; // rax
  CDOTA_BaseNPC *v56; // rax
  CDOTA_BaseNPC *v57; // rax
  float flFoWRadiusa; // [rsp+28h] [rbp-78h]
  CDOTABaseAbility *flFoWRadiusb; // [rsp+28h] [rbp-78h]
  CDOTABaseAbility *flFoWRadius; // [rsp+28h] [rbp-78h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > vecEntities; // [rsp+30h] [rbp-70h] BYREF
  KeyValues kv_stun; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v63; // [rsp+68h] [rbp-38h]

  v63 = __readfsqword(0x28u);
  v2 = CEntityHandle::operator CEntityInstance *(&this->m_hSecondaryTarget);
  if ( v2 != 0 && BYTE3(v2[7]._vptr_IHandleEntity) != 0 )
    v3 = v2;
  else
    v3 = 0;
  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_phoenix_supernova_hiding", 0);
    if ( ModifierByName != 0 )
      CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
  }
  if ( v3 != 0 )
  {
    v6 = CDOTA_BaseNPC::FindModifierByName(v3, "modifier_phoenix_supernova_hiding", 0);
    if ( v6 != 0 )
      CDOTA_Buff::Destroy(v6, 0, 0, 0);
  }
  v7 = CDOTA_Buff::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityEndChannelMessage(g_pGameRules, v7, 5626);
  if ( CDOTA_Buff::GetParent(this) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    if ( (*(Parent->_vptr_IHandleEntity + 408))(Parent) != 0 && CDOTA_Buff::GetCaster(this) != 0 )
    {
      v9 = CDOTA_Buff::GetCaster(this);
      if ( (*(v9->_vptr_IHandleEntity + 438))(v9) == 0 )
      {
        if ( CDOTA_Buff::GetAbility(this) != 0 )
        {
          Ability = CDOTA_Buff::GetAbility(this);
          m_pAbilityData = Ability->m_pAbilityData;
          if ( m_pAbilityData == 0 )
          {
            flFoWRadius = Ability;
            CDOTABaseAbility::LoadAbilityData(Ability, 0);
            m_pAbilityData = flFoWRadius->m_pAbilityData;
          }
          m_iAbilityID = m_pAbilityData->m_iAbilityID;
          v13 = CDOTA_Buff::GetCaster(this);
          AbsOrigin = CBaseEntity::GetAbsOrigin(v13);
          v15 = CDOTA_Buff::GetCaster(this);
          CDOTAGamerules::SendProjectionAbilityMessage(
            g_pGameRules,
            v15,
            0,
            m_iAbilityID,
            0,
            0,
            *&AbsOrigin->x,
            AbsOrigin->z,
            -1.0,
            v16);
        }
        ParticleManager = GetParticleManager();
        Particle = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/units/heroes/hero_phoenix/phoenix_supernova_reborn.vpcf",
                     8,
                     0,
                     0,
                     0);
        v19 = CDOTA_Buff::GetParent(this);
        v20 = CBaseEntity::GetAbsOrigin(v19);
        v21 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControl(v21, Particle, 0, *&v20->x, v20->z);
        *&v22 = this->aura_radius;
        LODWORD(vecEntities.m_Memory.m_pMemory) = 1065353216;
        *&vecEntities.m_Size = v22 | 0x3F80000000000000LL;
        v23 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControl(v23, Particle, 1, *&vecEntities.m_Size, 1.0);
        flFoWRadiusa = this->aura_radius;
        v24 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleFoWProperties(v24, Particle, 0, -1, flFoWRadiusa);
        v25 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v25, Particle);
        *v26.m128i_i32 = this->aura_radius;
        vecEntities.m_Size = 0;
        vecEntities.m_Memory.m_pMemory = 0;
        vecEntities.m_Memory.m_nAllocationCount = 0;
        vecEntities.m_Memory.m_nGrowSize = 0;
        LODWORD(v20) = _mm_cvtsi128_si32(v26);
        v27 = CDOTA_Buff::GetParent(this);
        v28 = CBaseEntity::GetAbsOrigin(v27);
        v29 = CDOTA_Buff::GetParent(this);
        FindUnitsInRadius(v29->m_iTeamNum.m_Value, v28, 0, *&v20, &vecEntities, 2, 3, 16, 0, 0);
        if ( CDOTA_Buff::GetCaster(this) != 0 )
        {
          if ( vecEntities.m_Size > 0 )
          {
            v30 = 0;
            do
            {
              while ( 1 )
              {
                v31 = &vecEntities.m_Memory.m_pMemory[v30];
                m_Index = v31->m_Index;
                if ( v31->m_Index + 2 > 1 )
                {
                  v33 = v31->m_Index;
                  v34 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v31->m_Index) >> 9) & 0x3F];
                  if ( v34 != 0 )
                  {
                    v35 = &v34[v33 & 0x1FF];
                    if ( v35 != 0 && m_Index == v35->m_EHandle.m_Index )
                    {
                      m_pInstance = v35->m_pInstance;
                      if ( v35->m_pInstance != 0
                        && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                        && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0
                        && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 1) == 0 )
                      {
                        break;
                      }
                    }
                  }
                }
                if ( vecEntities.m_Size <= ++v30 )
                  goto LABEL_33;
              }
              KeyValues::KeyValues(&kv_stun, "phoenix_sun_stun");
              KeyValues::SetFloat(&kv_stun, "duration", v37);
              flFoWRadiusb = CDOTA_Buff::GetAbility(this);
              v38 = CDOTA_Buff::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(m_pInstance, v38, flFoWRadiusb, "modifier_stunned", &kv_stun, 0);
              KeyValues::~KeyValues(&kv_stun);
              ++v30;
            }
            while ( vecEntities.m_Size > v30 );
          }
LABEL_33:
          for ( i = 0; i != 24; ++i )
          {
            v40 = CDOTA_Buff::GetCaster(this);
            AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v40, i);
            if ( AbilityByIndex != 0
              && AbilityByIndex != CDOTA_Buff::GetAbility(this)
              && (*(AbilityByIndex->_vptr_IHandleEntity + 214))(AbilityByIndex) != 1
              && (*(AbilityByIndex->_vptr_IHandleEntity + 217))(AbilityByIndex) != 0 )
            {
              CDOTABaseAbility::EndCooldown(AbilityByIndex);
            }
          }
          v42 = CDOTA_Buff::GetCaster(this);
          v43 = (*(v42->_vptr_IHandleEntity + 156))(v42);
          v44 = CDOTA_Buff::GetCaster(this);
          CDOTA_BaseNPC::ModifyHealth(v44, v43, 0, 0, 0);
          m_Value = CDOTA_Buff::GetCaster(this)->m_flMaxMana.m_Value;
          v46 = CDOTA_Buff::GetCaster(this);
          v47 = _mm_cvtsi32_si128(LODWORD(m_Value));
          *v47.m128i_i32 = *v47.m128i_i32 - v46->m_flMana.m_Value;
          v48 = COERCE_FLOAT(_mm_cvtsi128_si32(v47));
          v49 = CDOTA_Buff::GetCaster(this);
          CDOTA_BaseNPC::GiveMana(v49, v48, 0, 1);
          v50 = CDOTA_Buff::GetCaster(this);
          DOTA_EmitSound(0, "Hero_Phoenix.SuperNova.Explode", v50);
          v51 = CDOTA_Buff::GetCaster(this);
          CBaseEntity::StopSound(v51, "Hero_Phoenix.SuperNova.Cast");
          v52 = CDOTA_Buff::GetCaster(this);
          CDOTA_BaseNPC::StartGesture(v52, 1623, 0.1, 0.1, 9, 0, 1.0);
          if ( v3 != 0 )
          {
            LOBYTE(i) = 0;
            do
            {
              v53 = CDOTA_BaseNPC::GetAbilityByIndex(v3, i);
              if ( v53 != 0
                && v53 != CDOTA_Buff::GetAbility(this)
                && (*(v53->_vptr_IHandleEntity + 214))(v53) != 1
                && (*(v53->_vptr_IHandleEntity + 217))(v53) != 0 )
              {
                CDOTABaseAbility::EndCooldown(v53);
              }
              ++i;
            }
            while ( i != 24 );
            v54 = (*(v3->_vptr_IHandleEntity + 156))(v3);
            CDOTA_BaseNPC::ModifyHealth(v3, v54, 0, 0, 0);
            CDOTA_BaseNPC::GiveMana(v3, v3->m_flMaxMana.m_Value - v3->m_flMana.m_Value, 0, 1);
            CDOTA_BaseNPC::StartGesture(v3, 1623, 0.1, 0.1, 9, 0, 1.0);
          }
        }
        v55 = CDOTA_Buff::GetCaster(this);
        CBaseEntity::StopSound(v55, "Hero_Phoenix.SuperNova.Cast");
        v56 = CDOTA_Buff::GetParent(this);
        CDOTA_BaseNPC::ForceKill(v56, 0);
        v57 = CDOTA_Buff::GetParent(this);
        UTIL_Remove(v57);
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&vecEntities);
      }
    }
  }
}


// CDOTA_Modifier_Phoenix_Sun::CheckState  (line 2261, @0x0000000002cc8be0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Phoenix_Sun::CheckState(
        CDOTA_Modifier_Phoenix_Sun *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0xE100200uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFF1EFFDFFLL;
}


// CDOTA_Modifier_Phoenix_Sun::DeclareFunctions  (line 2275, @0x0000000002cc8c00, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Phoenix_Sun::GetAbsoluteNoDamagePhysical(CModifierParams const&), CDOTA_Modifier_Phoenix_Sun::GetAbsoluteNoDamageMagical(CModifierParams const&), CDOTA_Modifier_Phoenix_Sun::GetAbsoluteNoDamagePure(CModifierParams const&), CDOTA_Modifier_Phoenix_Sun::OnAttacked(CModifierParams const&), CDOTA_Modifier_Phoenix_Sun::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_Phoenix_Sun::DeclareFunctions(CDOTA_Modifier_Phoenix_Sun *const this)
{
  this->m_Functions[103].__pfn = CDOTA_Modifier_Phoenix_Sun::GetAbsoluteNoDamagePhysical;
  this->m_Functions[103].__delta = 0;
  this->m_Functions[104].__delta = 0;
  this->m_Functions[104].__pfn = CDOTA_Modifier_Phoenix_Sun::GetAbsoluteNoDamageMagical;
  this->m_Functions[105].__pfn = CDOTA_Modifier_Phoenix_Sun::GetAbsoluteNoDamagePure;
  this->m_Functions[137].__pfn = CDOTA_Modifier_Phoenix_Sun::OnAttacked;
  this->m_Functions[105].__delta = 0;
  this->m_Functions[137].__delta = 0;
  this->m_Functions[138].__pfn = CDOTA_Modifier_Phoenix_Sun::OnDeath;
  this->m_Functions[138].__delta = 0;
}


// CDOTA_Modifier_Phoenix_Sun::GetAbsoluteNoDamagePhysical  (line 2286, @0x0000000002cc8c90, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Phoenix_Sun::GetAbsoluteNoDamagePhysical(
        CDOTA_Modifier_Phoenix_Sun *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Phoenix_Sun::GetAbsoluteNoDamageMagical  (line 2293, @0x0000000002cc8cb0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Phoenix_Sun::GetAbsoluteNoDamageMagical(
        CDOTA_Modifier_Phoenix_Sun *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Phoenix_Sun::GetAbsoluteNoDamagePure  (line 2300, @0x0000000002cc8cd0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Phoenix_Sun::GetAbsoluteNoDamagePure(
        CDOTA_Modifier_Phoenix_Sun *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Phoenix_Sun::OnAttacked  (line 2307, @0x0000000002cdf0a0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, RemapValClamped, TargetNPC, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::ModifyHealth, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy, CBaseEntity::AddEffects, CBaseEntity::GetHealth, CTakeDamageInfo::CTakeDamageInfo (23 total)
// callers: CDOTA_Modifier_Phoenix_Sun::OnDeath
// strings: "particles/units/heroes/hero_phoenix/phoenix_supernova_hit.vpcf", "attach_hitloc", "modifier_phoenix_supernova_hiding", "particles/units/heroes/hero_phoenix/phoenix_supernova_death.vpcf", "Hero_Phoenix.SuperNova.Death", "Hero_Phoenix.SuperNova.Cast"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Phoenix_Sun::OnAttacked(
        CDOTA_Modifier_Phoenix_Sun *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CEntityInstance *v12; // r12
  float max_hero_attacks_required; // xmm0_4
  int v14; // eax
  float v15; // xmm2_4
  int v16; // r13d
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v18; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r14d
  CDOTA_BaseNPC *v21; // r15
  CDOTA_ParticleManager *v22; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  int Health; // eax
  CDOTA_BaseNPC *v29; // rax
  CDOTA_BaseNPC *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  float v32; // xmm2_4
  CDOTA_BaseNPC *v33; // r14
  CDOTA_ParticleManager *v34; // rax
  CDOTA_BaseNPC *v35; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_ParticleManager *v37; // rax
  CDOTA_BaseNPC *v38; // r15
  CDOTA_ParticleManager *v39; // rax
  CDOTA_ParticleManager *v40; // rax
  CDOTA_BaseNPC *v41; // rax
  CDOTA_BaseNPC *v42; // rax
  CDOTA_BaseNPC *v43; // rax
  CDOTA_BaseNPC *v44; // rax
  CBaseEntity *v45; // rax
  CDOTA_BaseNPC *v46; // r13
  CTakeDamageInfo info; // [rsp+10h] [rbp-C0h] BYREF

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[params->htarget.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
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
                  && BYTE3(v12[7]._vptr_IHandleEntity) != 0
                  && (this->creep_attacks_count != 0 || (v12[43].m_iszPrivateVScripts.u.m_Id & 1) != 0)
                  && LOBYTE(v12[71].m_pEntity) == 0 )
                {
                  max_hero_attacks_required = this->max_hero_attacks_required;
                  v14 = this->m_iAttackCount + 1;
                  this->m_iAttackCount = v14;
                  v15 = v14;
                  if ( max_hero_attacks_required == 0.0 )
                  {
                    v16 = (v15 - max_hero_attacks_required) < 0.0 ? 0x64 : 0;
                  }
                  else
                  {
                    v32 = v15 / max_hero_attacks_required;
                    v16 = 100;
                    if ( v32 >= 0.0 )
                    {
                      LOBYTE(v16) = 0;
                      if ( v32 <= 1.0 )
                        v16 = ((v32 * -100.0) + 100.0);
                    }
                  }
                  Parent = CDOTA_Buff::GetParent(this);
                  CDOTA_BaseNPC::ModifyHealth(Parent, v16, 0, 0, 0);
                  v18 = CDOTA_Buff::GetParent(this);
                  ParticleManager = GetParticleManager();
                  Particle = CDOTA_ParticleManager::CreateParticle(
                               ParticleManager,
                               "particles/units/heroes/hero_phoenix/phoenix_supernova_hit.vpcf",
                               1,
                               v18,
                               0,
                               0);
                  v21 = CDOTA_Buff::GetParent(this);
                  v22 = GetParticleManager();
                  CDOTA_ParticleManager::SetParticleControlEnt(
                    v22,
                    Particle,
                    1,
                    v21,
                    5,
                    "attach_hitloc",
                    vec3_invalid,
                    1);
                  CDOTA_Buff::AddParticle(this, Particle, 0, 0, -1, 0, 0);
                  if ( this->m_iAttackCount >= this->max_hero_attacks_required )
                  {
                    if ( CDOTA_Buff::GetCaster(this) == 0 )
                      goto LABEL_32;
                    Caster = CDOTA_Buff::GetCaster(this);
                    ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_phoenix_supernova_hiding", 0);
                    if ( ModifierByName != 0 )
                      CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
                    v25 = CDOTA_Buff::GetCaster(this);
                    CBaseEntity::AddEffects(v25, 32);
                    v26 = CDOTA_Buff::GetCaster(this);
                    if ( (*(v26->_vptr_IHandleEntity + 408))(v26) != 0 )
                    {
                      v27 = CDOTA_Buff::GetCaster(this);
                      Health = CBaseEntity::GetHealth(v27);
                      CTakeDamageInfo::CTakeDamageInfo(&info, 0, v12, Health, 16, 0);
                      v29 = CDOTA_Buff::GetCaster(this);
                      CBaseEntity::TakeDamage(v29, &info);
                      CTakeDamageInfo::~CTakeDamageInfo(&info);
                    }
                    v30 = CDOTA_Buff::GetCaster(this);
                    if ( (*(v30->_vptr_IHandleEntity + 438))(v30) != 0 )
                    {
                      v31 = CDOTA_Buff::GetParent(this);
                      UTIL_Remove(v31);
                    }
                    else
                    {
LABEL_32:
                      v33 = CDOTA_Buff::GetParent(this);
                      v34 = GetParticleManager();
                      LODWORD(v33) = CDOTA_ParticleManager::CreateParticle(
                                       v34,
                                       "particles/units/heroes/hero_phoenix/phoenix_supernova_death.vpcf",
                                       2,
                                       0,
                                       0,
                                       v33);
                      v35 = CDOTA_Buff::GetParent(this);
                      AbsOrigin = CBaseEntity::GetAbsOrigin(v35);
                      v37 = GetParticleManager();
                      CDOTA_ParticleManager::SetParticleControl(v37, v33, 0, *&AbsOrigin->x, AbsOrigin->z);
                      v38 = CDOTA_Buff::GetParent(this);
                      v39 = GetParticleManager();
                      CDOTA_ParticleManager::SetParticleControlEnt(
                        v39,
                        v33,
                        1,
                        v38,
                        5,
                        "attach_hitloc",
                        vec3_invalid,
                        1);
                      v40 = GetParticleManager();
                      CDOTA_ParticleManager::ReleaseParticleIndex(v40, v33);
                      v41 = CDOTA_Buff::GetParent(this);
                      CBaseEntity::AddEffects(v41, 32);
                      v42 = CDOTA_Buff::GetParent(this);
                      CDOTA_BaseNPC::Kill(v42, 0, v12, 0.0, 0);
                      v43 = CDOTA_Buff::GetCaster(this);
                      CDOTA_BaseNPC::UnitEmitSound(v43, "Hero_Phoenix.SuperNova.Death", 0.0, 0, 0);
                      v44 = CDOTA_Buff::GetCaster(this);
                      CBaseEntity::StopSound(v44, "Hero_Phoenix.SuperNova.Cast");
                      v45 = CEntityHandle::operator CEntityInstance *(&this->m_hSecondaryTarget);
                      v46 = v45;
                      if ( v45 != 0 && v45->m_bIsDOTANPC )
                      {
                        CBaseEntity::AddEffects(v45, 32);
                        CDOTA_BaseNPC::Kill(v46, 0, v12, 0.0, 0);
                      }
                    }
                    CDOTA_Buff::Destroy(this, 0, 0, 0);
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


// CDOTA_Modifier_Phoenix_Sun::OnDeath  (line 2384, @0x0000000002cdf5a0, libserver.so)  // inlines: AttackerNPC, CEntityHandle, CHandle, CModifierParams, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, SetAttacker, SetTarget, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CDOTA_Modifier_Phoenix_Sun::OnAttacked
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Phoenix_Sun::OnDeath(
        CDOTA_Modifier_Phoenix_Sun *const this,
        const CModifierParams *const paramsArgument)
{
  CDOTA_BaseNPC *Caster; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx
  CDOTA_BaseNPC *m_pInstance; // rdx
  int max_hero_attacks_required; // eax
  CDOTA_BaseNPC *Parent; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v13; // cx
  uint32 v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CDOTA_BaseNPC *v17; // rax
  CEntityIdentity *v18; // rdx
  __int16 v19; // cx
  CModifierParams paramsLocal; // [rsp+0h] [rbp-A0h] BYREF

  Caster = CDOTA_Buff::GetCaster(this);
  m_Index = paramsArgument->hunit.m_Index;
  if ( m_Index + 2 <= 1
    || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(paramsArgument->hunit.m_Index) >> 9) & 0x3F]) == 0
    || (v7 = &v6[paramsArgument->hunit.m_Index & 0x1FF]) == 0
    || m_Index != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  if ( Caster == m_pInstance )
  {
    max_hero_attacks_required = this->max_hero_attacks_required;
    paramsLocal.bCraniumBasherTested = 0;
    paramsLocal.ability.m_Index = -1;
    paramsLocal.fDamage = 0.0;
    paramsLocal.fOriginalDamage = 0.0;
    this->m_iAttackCount = max_hero_attacks_required;
    paramsLocal.nActivity = -1;
    paramsLocal.bTooltip = 0;
    paramsLocal.nTooltipParam = 0;
    paramsLocal.bIgnoreInvis = 0;
    paramsLocal.bNoCooldown = 0;
    paramsLocal.bReincarnate = 0;
    paramsLocal.bDoNotConsume = 0;
    paramsLocal.fDistance = 0.0;
    paramsLocal.inflictor.m_Index = -1;
    paramsLocal.nDamageflags = 0;
    paramsLocal.nDamageCategory = 0;
    memset(&paramsLocal.pOrb, 0, 24);
    paramsLocal.bHeartRegenApplied = 0;
    paramsLocal.bDiffusalApplied = 0;
    paramsLocal.bChainLightningConsidered = 0;
    paramsLocal.bSuppressDamage = 0;
    paramsLocal.bRangedAttack = 0;
    paramsLocal.nPlayerids_stick = 0;
    paramsLocal.hattacker.m_Index = -1;
    paramsLocal.htarget.m_Index = -1;
    paramsLocal.hunit.m_Index = -1;
    Parent = CDOTA_Buff::GetParent(this);
    if ( Parent != 0 && (m_pEntity = Parent->m_pEntity) != 0 )
    {
      v13 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      paramsLocal.htarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                  | v13 & 0x7FFF;
    }
    else
    {
      paramsLocal.htarget.m_Index = -1;
    }
    v14 = paramsArgument->hattacker.m_Index;
    if ( (v14 + 2 > 1
       && (v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(paramsArgument->hattacker.m_Index) >> 9)
                                                                & 0x3F]) != 0
       && (v16 = &v15[paramsArgument->hattacker.m_Index & 0x1FF]) != 0
       && v14 == v16->m_EHandle.m_Index
       && (v17 = v16->m_pInstance, v16->m_pInstance != 0)
       && v17->m_bIsDOTANPC
       && (v17->m_iUnitType & 1) != 0
       && !v17->m_bIsIllusion.m_Value
       || (v17 = CDOTA_Buff::GetCaster(this)) != 0)
      && (v18 = v17->m_pEntity) != 0 )
    {
      v19 = 0x7FFF;
      if ( v18->m_EHandle.m_Index != -1 )
        v19 = v18->m_EHandle.m_Index & 0x7FFF;
      paramsLocal.hattacker.m_Index = (((v18->m_EHandle.m_Index >> 15) - (v18->m_flags & 1)) << 15) | v19 & 0x7FFF;
    }
    else
    {
      paramsLocal.hattacker.m_Index = -1;
    }
    CDOTA_Modifier_Phoenix_Sun::OnAttacked(this, &paramsLocal);
  }
  return 1uLL;
}


// CDOTA_Modifier_Phoenix_Sun_Debuff::~CDOTA_Modifier_Phoenix_Sun_Debuff  (line 2411, @0x0000000002d28370, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Phoenix_Sun_Debuff::~CDOTA_Modifier_Phoenix_Sun_Debuff(
        CDOTA_Modifier_Phoenix_Sun_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4611450;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Phoenix_Sun_Debuff::~CDOTA_Modifier_Phoenix_Sun_Debuff  (line 2411, @0x0000000002d28390, libserver.so)  // inlines: ~CDOTA_Modifier_Phoenix_Sun_Debuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Phoenix_Sun_Debuff::~CDOTA_Modifier_Phoenix_Sun_Debuff(
        CDOTA_Modifier_Phoenix_Sun_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4611450;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Phoenix_Sun_Debuff::OnCreated  (line 2430, @0x0000000002d0c900, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::GetCaster, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle, DOTA_EmitSound
// strings: "damage_per_sec", "particles/units/heroes/hero_phoenix/phoenix_supernova_radiance_creep.vpcf", "DOTA_Item.Radiance.Target.Loop", "particles/units/heroes/hero_phoenix/phoenix_supernova_radiance.vpcf"
void __fastcall CDOTA_Modifier_Phoenix_Sun_Debuff::OnCreated(
        CDOTA_Modifier_Phoenix_Sun_Debuff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  const char *v7; // rsi
  int Particle; // r12d
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_ParticleManager *v10; // rax
  CDOTA_BaseNPC *v11; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->damage_per_sec = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_per_sec", -1, 0);
  else
    this->damage_per_sec = 0;
  CDOTA_Buff::StartIntervalThink(this, 1.0, v4);
  if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 1) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    ParticleManager = GetParticleManager();
    v7 = "particles/units/heroes/hero_phoenix/phoenix_supernova_radiance.vpcf";
  }
  else
  {
    Parent = CDOTA_Buff::GetParent(this);
    ParticleManager = GetParticleManager();
    v7 = "particles/units/heroes/hero_phoenix/phoenix_supernova_radiance_creep.vpcf";
  }
  Particle = CDOTA_ParticleManager::CreateParticle(ParticleManager, v7, 1, Parent, 0, 0);
  Caster = CDOTA_Buff::GetCaster(this);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v10, Particle, 1, Caster, 1, 0, vec3_invalid, 1);
  CDOTA_Buff::AddParticle(this, Particle, 0, 0, -1, 0, 0);
  v11 = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(1, "DOTA_Item.Radiance.Target.Loop", v11);
}


// CDOTA_Modifier_Phoenix_Sun_Debuff::OnIntervalThink  (line 2456, @0x0000000002ccd720, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, ApplyDamage, CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Phoenix_Sun_Debuff::OnIntervalThink(CDOTA_Modifier_Phoenix_Sun_Debuff *const this)
{
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  float damage_per_sec; // [rsp+Ch] [rbp-24h]

  if ( CDOTA_Buff::GetCaster(this) == 0 )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  damage_per_sec = this->damage_per_sec;
  Ability = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, Ability, damage_per_sec, 2, 0);
}


// CDOTA_Modifier_Phoenix_Sun_Debuff::OnDestroy  (line 2471, @0x0000000002cccf80, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::StopSound
// strings: "DOTA_Item.Radiance.Target.Loop"
void __fastcall CDOTA_Modifier_Phoenix_Sun_Debuff::OnDestroy(CDOTA_Modifier_Phoenix_Sun_Debuff *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(Parent, "DOTA_Item.Radiance.Target.Loop");
}


// CDOTA_Modifier_Phoenix_Sun_Debuff::DeclareFunctions  (line 2480, @0x0000000002cc8cf0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Phoenix_Sun_Debuff::OnTooltip(CModifierParams const&)
void __fastcall CDOTA_Modifier_Phoenix_Sun_Debuff::DeclareFunctions(CDOTA_Modifier_Phoenix_Sun_Debuff *const this)
{
  this->m_Functions[151].__pfn = CDOTA_Modifier_Phoenix_Sun_Debuff::OnTooltip;
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_Phoenix_Sun_Debuff::OnTooltip  (line 2487, @0x0000000002cc8d10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Phoenix_Sun_Debuff::OnTooltip(
        CDOTA_Modifier_Phoenix_Sun_Debuff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->damage_per_sec;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


