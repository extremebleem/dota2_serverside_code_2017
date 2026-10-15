// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_earth_spirit.cpp:45
class CDOTA_Unit_Earth_Spirit_Stone : public CDOTA_BaseNPC {
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
	CDOTA_Unit_Earth_Spirit_Stone(CDOTA_Unit_Earth_Spirit_Stone &);
	CDOTA_Unit_Earth_Spirit_Stone(CDOTA_Unit_Earth_Spirit_Stone &);
	CDOTA_Unit_Earth_Spirit_Stone();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDOTA_Unit_Earth_Spirit_Stone();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 4504
};

// src/game/shared/dota/units/dota_unit_hero_earth_spirit.cpp:73
class C_CDOTA_Unit_Earth_Spirit_Stone_MapInstall {
	C_CDOTA_Unit_Earth_Spirit_Stone_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_earth_spirit.cpp:85
class CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter : public CDOTA_Buff {
public:

private:

	int max_charges;  // +0xbc0
	float charge_restore_time;  // +0xbc4
	bool m_bIsThinking;  // +0xbc8
	CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual bool IsPermanent();
	virtual bool DestroyOnExpire();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	void AddActiveStone(EHANDLE);
	void RemoveActiveStone(EHANDLE);
	void SetThinking(bool);
	bool IsThinking();
	virtual ~CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[23] IsPermanent
	// vtable[61] DestroyOnExpire
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// sizeof = 3024
};

// src/game/shared/dota/units/dota_unit_hero_earth_spirit.cpp:197
class CDOTA_Ability_EarthSpirit_StoneCaller : public CDOTABaseAbility {
public:

private:

	int max_charges;  // +0x390
	float charge_restore_time;  // +0x394
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
	CDOTA_Ability_EarthSpirit_StoneCaller(CDOTA_Ability_EarthSpirit_StoneCaller &);
	CDOTA_Ability_EarthSpirit_StoneCaller(CDOTA_Ability_EarthSpirit_StoneCaller &);
	CDOTA_Ability_EarthSpirit_StoneCaller();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual const char * GetIntrinsicModifierName();
	virtual int CastFilterResult(const Vector &);
	virtual const char * GetCustomCastError(const Vector &);
	virtual bool IsRefreshable();
	virtual void RefreshCharges();
	virtual Activity GetGestureBasedActivity();
	virtual bool IsStealable();
	virtual bool ProcsMagicStick();
	virtual bool ShouldSpeakAbilityConcept(int);
	virtual ~CDOTA_Ability_EarthSpirit_StoneCaller();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[280] GetIntrinsicModifierName
	// vtable[258] CastFilterResult
	// vtable[259] GetCustomCastError
	// vtable[217] IsRefreshable
	// vtable[318] RefreshCharges
	// vtable[211] GetGestureBasedActivity
	// vtable[305] IsStealable
	// vtable[239] ProcsMagicStick
	// vtable[298] ShouldSpeakAbilityConcept
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_earth_spirit.cpp:230
class C_CDOTA_Ability_EarthSpirit_StoneCaller_MapInstall {
	C_CDOTA_Ability_EarthSpirit_StoneCaller_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_earth_spirit.cpp:365
class CDOTA_Modifier_EarthSpirit_StoneThinker : public CDOTA_Buff {
public:

private:

	bool m_bHasBeenMagnetized;  // +0xba8

	int m_nFXIndex;  // +0xbac
	CDOTA_Modifier_EarthSpirit_StoneThinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsHidden();
	bool HasBeenMagnetized();
	void SetMagnetized(bool);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierProvidesFOWVision(const CModifierParams &);
	virtual ~CDOTA_Modifier_EarthSpirit_StoneThinker();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_earth_spirit.cpp:459
class CDOTA_Ability_EarthSpirit_BoulderSmash : public CDOTABaseAbility {
public:

private:

	int speed;  // +0x390
	int rock_damage;  // +0x394
	int radius;  // +0x398
	int rock_search_aoe;  // +0x39c
	float unit_distance;  // +0x3a0
	float rock_distance;  // +0x3a4
	float stun_duration;  // +0x3a8
	int m_nProjectileID;  // +0x3ac
	EHANDLE m_hCursorTarget;  // +0x3b0
	bool m_bUsedStone;  // +0x3b4

	EHANDLE m_hTarget;  // +0x3b8
	bool m_bTargetStone;  // +0x3bc
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
	CDOTA_Ability_EarthSpirit_BoulderSmash(CDOTA_Ability_EarthSpirit_BoulderSmash &);
	CDOTA_Ability_EarthSpirit_BoulderSmash(CDOTA_Ability_EarthSpirit_BoulderSmash &);
	CDOTA_Ability_EarthSpirit_BoulderSmash();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool OnAbilityPhaseStart();
	virtual void OnAbilityPhaseInterrupted();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_EarthSpirit_BoulderSmash();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[226] GetCastRange
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// sizeof = 960
};

// src/game/shared/dota/units/dota_unit_hero_earth_spirit.cpp:494
class C_CDOTA_Ability_EarthSpirit_BoulderSmash_MapInstall {
	C_CDOTA_Ability_EarthSpirit_BoulderSmash_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_earth_spirit.cpp:829
class CDOTA_Modifier_EarthSpirit_BoulderSmash : public CDOTA_Buff, public CHorizontalMotionController {
public:

private:

	bool m_bInterrupted;  // +0xbb4

	int m_nProjectileID;  // +0xbb8
	CDOTA_Modifier_EarthSpirit_BoulderSmash();
	virtual bool IsPurgable();
	virtual bool RemoveOnDeath();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual int StatusEffectPriority();
	virtual int GetAttributes();
	virtual bool IsMotionController();
	virtual void DeclareFunctions();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	ModifierVariant_t OnTeleported(const CModifierParams &);
	virtual ~CDOTA_Modifier_EarthSpirit_BoulderSmash();

	// vtable[14] IsPurgable
	// vtable[54] RemoveOnDeath
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] OnHorizontalMotionInterrupted
	// vtable[91] IsHorizontalMotionValidToApply
	// vtable[71] StatusEffectPriority
	// vtable[7] GetAttributes
	// vtable[21] IsMotionController
	// vtable[65] DeclareFunctions
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_earth_spirit.cpp:968
class CDOTA_Ability_EarthSpirit_RollingBoulder : public CDOTABaseAbility, public CHorizontalMotionController {
public:

private:

	int radius;  // +0x39c
	int speed;  // +0x3a0
	int rock_speed;  // +0x3a4
	int damage;  // +0x3a8
	float distance;  // +0x3ac
	float rock_distance;  // +0x3b0
	float slow_duration;  // +0x3b4
	int m_nFXIndex;  // +0x3b8
	bool m_boulderSetposBool;  // +0x3bc

	int m_nProjectileID;  // +0x3c0
	bool m_bUsedStone;  // +0x3f4
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
	CDOTA_Ability_EarthSpirit_RollingBoulder(CDOTA_Ability_EarthSpirit_RollingBoulder &);
	CDOTA_Ability_EarthSpirit_RollingBoulder(CDOTA_Ability_EarthSpirit_RollingBoulder &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Ability_EarthSpirit_RollingBoulder();
	virtual void OnSpellStart();
	void CreateBoulder();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual void OnProjectileThink(const Vector &);
	virtual int CastFilterResult(const Vector &);
	virtual const char * GetCustomCastError(const Vector &);
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	void DestroyBoulderEffects();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_EarthSpirit_RollingBoulder();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[291] OnProjectileThink
	// vtable[258] CastFilterResult
	// vtable[259] GetCustomCastError
	// vtable[333] UpdateHorizontalMotion
	// vtable[334] OnHorizontalMotionInterrupted
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// sizeof = 1016
};

// src/game/shared/dota/units/dota_unit_hero_earth_spirit.cpp:1015
class C_CDOTA_Ability_EarthSpirit_RollingBoulder_MapInstall {
	C_CDOTA_Ability_EarthSpirit_RollingBoulder_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_earth_spirit.cpp:1320
class CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster : public CDOTA_Buff {
public:

	CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnDeath(const CModifierParams &);
	virtual bool IsHidden();
	ModifierVariant_t OnStateChanged(const CModifierParams &);
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[89] OnDeath
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_earth_spirit.cpp:1453
class CDOTA_Modifier_EarthSpirit_RollingBoulder_Slow : public CDOTA_Buff {
public:

private:

	int move_slow;  // +0xba8
	CDOTA_Modifier_EarthSpirit_RollingBoulder_Slow();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_EarthSpirit_RollingBoulder_Slow();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeedBonus_Percentage
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_earth_spirit.cpp:1498
class CDOTA_Modifier_EarthSpirit_GeomagneticGrip_Debuff : public CDOTA_Modifier_Silence {
public:

	CDOTA_Modifier_EarthSpirit_GeomagneticGrip_Debuff();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_EarthSpirit_GeomagneticGrip_Debuff();

	// vtable[57] OnCreated
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_earth_spirit.cpp:1527
class CDOTA_Ability_EarthSpirit_GeomagneticGrip : public CDOTABaseAbility {
public:

private:

	EHANDLE m_hTarget;  // +0x390
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
	CDOTA_Ability_EarthSpirit_GeomagneticGrip(CDOTA_Ability_EarthSpirit_GeomagneticGrip &);
	CDOTA_Ability_EarthSpirit_GeomagneticGrip(CDOTA_Ability_EarthSpirit_GeomagneticGrip &);
	CDOTA_Ability_EarthSpirit_GeomagneticGrip();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool OnAbilityPhaseStart();
	virtual void OnSpellStart();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual bool HasSilence();
	virtual ~CDOTA_Ability_EarthSpirit_GeomagneticGrip();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[264] OnAbilityPhaseStart
	// vtable[266] OnSpellStart
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[325] HasSilence
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_earth_spirit.cpp:1550
class C_CDOTA_Ability_EarthSpirit_GeomagneticGrip_MapInstall {
	C_CDOTA_Ability_EarthSpirit_GeomagneticGrip_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_earth_spirit.cpp:1670
class CDOTA_Modifier_EarthSpirit_GeomagneticGrip : public CDOTA_Buff, public CHorizontalMotionController {
public:

private:

	int radius;  // +0xbb4
	int rock_damage;  // +0xbb8
	float pull_units_per_second;  // +0xbbc
	float pull_units_per_second_heroes;  // +0xbc0
	float total_pull_distance;  // +0xbc4
	float miss_duration;  // +0xbc8
	bool m_bUsedStone;  // +0xbcc

	CDOTA_Modifier_EarthSpirit_GeomagneticGrip();
	virtual bool IsStunDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual bool IsHorizontalMotionValidToApply();
	virtual void OnHorizontalMotionInterrupted();
	virtual int GetAttributes();
	virtual bool IsMotionController();
	virtual void DeclareFunctions();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	virtual ~CDOTA_Modifier_EarthSpirit_GeomagneticGrip();

	// vtable[16] IsStunDebuff
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] IsHorizontalMotionValidToApply
	// vtable[91] OnHorizontalMotionInterrupted
	// vtable[7] GetAttributes
	// vtable[21] IsMotionController
	// vtable[65] DeclareFunctions
	// sizeof = 3072
};

// src/game/shared/dota/units/dota_unit_hero_earth_spirit.cpp:1894
class CDOTA_Modifier_EarthSpirit_Petrify : public CDOTA_Buff {
public:

private:

	int m_nFXIndex;  // +0xba8
	bool m_bHasBeenMagnetized;  // +0xbac
	CDOTA_Modifier_EarthSpirit_Petrify();
	virtual bool IsDebuff();
	virtual bool IsStunDebuff();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	virtual void CheckState(CDOTABuffState &);
	bool HasBeenMagnetized();
	void SetMagnetized(bool);
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual bool ProvidesTruesightForTeam(int);
	ModifierVariant_t GetOverrideAnimationRate(const CModifierParams &);
	virtual ~CDOTA_Modifier_EarthSpirit_Petrify();

	// vtable[12] IsDebuff
	// vtable[16] IsStunDebuff
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[5] CheckState
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[84] ProvidesTruesightForTeam
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_earth_spirit.cpp:2031
class CDOTA_Ability_EarthSpirit_Magnetize : public CDOTABaseAbility {
public:

private:

	int cast_radius;  // +0x390
	int rock_explosion_radius;  // +0x394
	float damage_duration;  // +0x398
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
	CDOTA_Ability_EarthSpirit_Magnetize(CDOTA_Ability_EarthSpirit_Magnetize &);
	CDOTA_Ability_EarthSpirit_Magnetize(CDOTA_Ability_EarthSpirit_Magnetize &);
	CDOTA_Ability_EarthSpirit_Magnetize();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	void DoMagnetize(Vector, bool);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_EarthSpirit_Magnetize();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_earth_spirit.cpp:2140
class CDOTA_Modifier_EarthSpirit_Magnetize : public CDOTA_Buff {
public:

private:

	int rock_search_radius;  // +0xba8
	int damage_per_second;  // +0xbac
	float damage_interval;  // +0xbb0
	float rock_explosion_delay;  // +0xbb4
	float damage_duration;  // +0xbb8
	int cast_radius;  // +0xbbc
	int rock_explosion_radius;  // +0xbc0

	float duration;  // +0xbe0
	bool m_bShowOverhead;  // +0xbe4
	CDOTA_Modifier_EarthSpirit_Magnetize();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual int GetAttributes();
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_EarthSpirit_Magnetize();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[7] GetAttributes
	// vtable[56] OnIntervalThink
	// sizeof = 3048
};

// src/game/shared/dota/units/dota_unit_hero_earth_spirit.cpp:2308
class CDOTA_Ability_EarthSpirit_Petrify : public CDOTABaseAbility {
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
	CDOTA_Ability_EarthSpirit_Petrify(CDOTA_Ability_EarthSpirit_Petrify &);
	CDOTA_Ability_EarthSpirit_Petrify(CDOTA_Ability_EarthSpirit_Petrify &);
	CDOTA_Ability_EarthSpirit_Petrify();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void OnSpellStart();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual ~CDOTA_Ability_EarthSpirit_Petrify();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[266] OnSpellStart
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_earth_spirit.cpp:2327
class C_CDOTA_Ability_EarthSpirit_Petrify_MapInstall {
	C_CDOTA_Ability_EarthSpirit_Petrify_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_earth_spirit.cpp:2383
class CDOTA_Unit_Hero_EarthSpirit : public CDOTA_BaseNPC_Hero {
public:

private:

	bool m_bHadScepter;  // +0x16ec
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
	CDOTA_Unit_Hero_EarthSpirit(CDOTA_Unit_Hero_EarthSpirit &);
	CDOTA_Unit_Hero_EarthSpirit(CDOTA_Unit_Hero_EarthSpirit &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual bool HasFlyingVision();
	virtual bool ShouldDoFlyHeightVisual();
	virtual void OnItemEquipped(CDOTA_Item *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Event_Killed(const CTakeDamageInfo &);
	CDOTA_Unit_Hero_EarthSpirit();
	virtual ~CDOTA_Unit_Hero_EarthSpirit();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[6] Precache
	// vtable[445] HasFlyingVision
	// vtable[488] ShouldDoFlyHeightVisual
	// vtable[479] OnItemEquipped
	// vtable[8] Spawn
	// vtable[92] Event_Killed
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_earth_spirit.cpp:2435
class C_CDOTA_Unit_Hero_EarthSpirit_MapInstall {
	C_CDOTA_Unit_Hero_EarthSpirit_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Earth_Spirit_Stone::~CDOTA_Unit_Earth_Spirit_Stone  (line 45, @0x0000000002c90eb0, libserver.so)
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_Unit_Earth_Spirit_Stone::~CDOTA_Unit_Earth_Spirit_Stone(
        CDOTA_Unit_Earth_Spirit_Stone *const this)
{
  this->_vptr_IHandleEntity = &off_45A0A30;
  this->_vptr_INextBotEventResponder = &off_45A1990;
  this->_vptr_CObstructionObject = &off_45A1CC0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_Unit_Earth_Spirit_Stone::~CDOTA_Unit_Earth_Spirit_Stone  (line 45, @0x0000000002c90ef0, libserver.so)  // inlines: ~CDOTA_Unit_Earth_Spirit_Stone
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Earth_Spirit_Stone::~CDOTA_Unit_Earth_Spirit_Stone(
        CDOTA_Unit_Earth_Spirit_Stone *const this)
{
  this->_vptr_IHandleEntity = &off_45A0A30;
  this->_vptr_INextBotEventResponder = &off_45A1990;
  this->_vptr_CObstructionObject = &off_45A1CC0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Earth_Spirit_Stone::Schema_DynamicBinding  (line 47, @0x0000000002c87f00, libserver.so)
// globals: CDOTA_Unit_Earth_Spirit_Stone::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Earth_Spirit_Stone::Schema_DynamicBinding(
        const CDOTA_Unit_Earth_Spirit_Stone *const this)
{
  return CDOTA_Unit_Earth_Spirit_Stone::s_pSchemaBinding;
}


// CDOTA_Unit_Earth_Spirit_Stone::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 47, @0x0000000002c87f30, libserver.so)
// globals: CDOTA_Unit_Earth_Spirit_Stone::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Earth_Spirit_Stone::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Earth_Spirit_Stone::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Earth_Spirit_Stone::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Earth_Spirit_Stone::CEntityInstanceEntityClass::DestructInstance  (line 47, @0x0000000002c87f40, libserver.so)  // inlines: Destruct<CDOTA_Unit_Earth_Spirit_Stone>
void __fastcall CDOTA_Unit_Earth_Spirit_Stone::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Earth_Spirit_Stone::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Earth_Spirit_Stone::CEntityInstanceEntityClass::FreeInstance  (line 47, @0x0000000002c87f60, libserver.so)
void __fastcall CDOTA_Unit_Earth_Spirit_Stone::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Earth_Spirit_Stone::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Earth_Spirit_Stone::CEntityInstanceEntityClass::CanAllocate  (line 47, @0x0000000002c87f80, libserver.so)
bool __fastcall CDOTA_Unit_Earth_Spirit_Stone::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Earth_Spirit_Stone::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Earth_Spirit_Stone::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 47, @0x0000000002c87f90, libserver.so)
// globals: CDOTA_Unit_Earth_Spirit_Stone::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Earth_Spirit_Stone::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Earth_Spirit_Stone::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Earth_Spirit_Stone::s_pSchemaBinding;
}


// CDOTA_Unit_Earth_Spirit_Stone::CEntityInstanceEntityClass::AllocateInstance  (line 47, @0x0000000002c8f760, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Earth_Spirit_Stone::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Earth_Spirit_Stone::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4504);
  memset(v1, 0, 0x1198u);
  return v1;
}


// CDOTA_Unit_Earth_Spirit_Stone::CEntityInstanceEntityClass::ConstructInstance  (line 47, @0x0000000002c90d60, libserver.so)  // inlines: CDOTA_Unit_Earth_Spirit_Stone, Construct<CDOTA_Unit_Earth_Spirit_Stone>
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_Unit_Earth_Spirit_Stone::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Earth_Spirit_Stone::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *p = &off_45A0A30;
    *(p + 236) = &off_45A1990;
    *(p + 257) = &off_45A1CC0;
  }
  return p;
}


// CDOTA_Unit_Earth_Spirit_Stone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 47, @0x0000000002ca1420, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Earth_Spirit_Stone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Earth_Spirit_Stone::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Earth_Spirit_Stone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 47, @0x0000000002ca3420, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Earth_Spirit_Stone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Earth_Spirit_Stone::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal  (line 47, @0x0000000002cc6dd0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CDOTA_BaseNPC::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "npc_dota_earth_spirit_stone", "CDOTA_Unit_Earth_Spirit_Stone"
// globals: `guard variable for'CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass, CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Unit_Earth_Spirit_Stone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClassInfo, CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClassInfo
CEntityClass *__cdecl CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass) != 0 )
  {
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_designerName.u.m_Id = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_AllHelpers.m_Size = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_classInputs.m_Size = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_classOutputs.m_Size = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_hNetworkSerializer = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_pBaseClassInfo = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_pClassInfo = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_flags = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_nAllHelpersFlags = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_pScriptClassDesc = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_pInputs = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_nInputCount = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_pOutputs = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_nOutputCount = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_pGameClass = 0;
    CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass._vptr_CEntityClass = off_45A09B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass);
    __cxa_atexit(
      CDOTA_Unit_Earth_Spirit_Stone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Earth_Spirit_StoneClass != 0 )
    return &CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass;
  if ( `guard variable for'CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClassInfo,
      "CDOTA_Unit_Earth_Spirit_Stone",
      "npc_dota_earth_spirit_stone",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClassInfo);
  }
  CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_pClassInfo = &CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClassInfo;
  CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_pBaseClassInfo = CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Earth_Spirit_StoneClass = &CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass;
  CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClassInfo.m_pClass = &CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass;
  CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_Unit_Earth_Spirit_StoneClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Earth_Spirit_Stone::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Earth_Spirit_StoneClass;
}


// CDOTA_Unit_Earth_Spirit_Stone::YouForgotToImplementOrDeclareServerClass  (line 73, @0x0000000002c1bf40, libserver.so)
int __fastcall CDOTA_Unit_Earth_Spirit_Stone::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Earth_Spirit_Stone *const this)
{
  return 0;
}


// CDOTA_Unit_Earth_Spirit_Stone::GetServerClass  (line 73, @0x0000000002c35a70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Earth_Spirit_Stone::GetServerClass(CDOTA_Unit_Earth_Spirit_Stone *const this)
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


// CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter::~CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter  (line 85, @0x0000000002cb6720, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter::~CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter(
        CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter *const this)
{
  this->_vptr_CDOTA_Buff = &off_45A1D50;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vActiveStones);
  if ( (this->m_vActiveStones.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vActiveStones.m_Memory),
        (this->m_vActiveStones.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vActiveStones.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter::~CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter  (line 85, @0x0000000002cb7220, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter::~CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter(
        CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter *const this)
{
  this->_vptr_CDOTA_Buff = &off_45A1D50;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vActiveStones);
  if ( (this->m_vActiveStones.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vActiveStones.m_Memory);
    if ( (this->m_vActiveStones.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vActiveStones.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter::IsHidden  (line 90, @0x0000000002c87fa0, libserver.so)
bool __fastcall CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter::IsHidden(
        CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter *const this)
{
  return (*(this->_vptr_CDOTA_Buff + 27))(this) == 0;
}


// CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter::IsPurgable  (line 91, @0x0000000002c87fc0, libserver.so)
bool __fastcall CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter::IsPurgable(
        CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter *const this)
{
  return 0;
}


// CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter::IsPermanent  (line 92, @0x0000000002c87fd0, libserver.so)
bool __fastcall CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter::IsPermanent(
        CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter *const this)
{
  return 1;
}


// CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter::DestroyOnExpire  (line 93, @0x0000000002c87fe0, libserver.so)
bool __fastcall CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter::DestroyOnExpire(
        CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter *const this)
{
  return 0;
}


// CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter::OnCreated  (line 122, @0x0000000002c71b20, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "max_charges", "charge_restore_time"
void __fastcall CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter::OnCreated(
        CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->max_charges = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->charge_restore_time = 0.0;
    goto LABEL_4;
  }
  this->max_charges = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "max_charges", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->charge_restore_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "charge_restore_time", -1, 0);
LABEL_4:
  (*(this->_vptr_CDOTA_Buff + 28))(this, this->max_charges);
  this->m_bIsThinking = 0;
}


// CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter::OnRefresh  (line 134, @0x0000000002c70c50, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "max_charges"
void __fastcall CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter::OnRefresh(
        CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->max_charges = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "max_charges", -1, 0);
  else
    this->max_charges = 0;
}


// CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter::OnIntervalThink  (line 141, @0x0000000002c1ec30, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter::OnIntervalThink(
        CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter *const this)
{
  float v2; // xmm1_4
  void (__fastcall *v3)(CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter *const, __int64, float); // r12
  CDOTABaseAbility *Ability; // rax
  float v5; // xmm0_4
  CDOTABaseAbility *v6; // rax
  float v7; // xmm0_4
  float v8; // xmm1_4
  float charge_restore_time; // [rsp+Ch] [rbp-14h]
  float v10; // [rsp+Ch] [rbp-14h]

  if ( (*(this->_vptr_CDOTA_Buff + 27))(this) >= this->max_charges
    || ((*(this->_vptr_CDOTA_Buff + 25))(this), (*(this->_vptr_CDOTA_Buff + 27))(this) == this->max_charges) )
  {
    CDOTA_Buff::StartIntervalThink(this, -1.0, v2);
    this->m_bIsThinking = 0;
  }
  else
  {
    charge_restore_time = this->charge_restore_time;
    v3 = *(this->_vptr_CDOTA_Buff + 63);
    Ability = CDOTA_Buff::GetAbility(this);
    v5 = (*(Ability->_vptr_IHandleEntity + 243))(Ability, 0xFFFFFFFFLL);
    v3(this, 1, v5 * charge_restore_time);
    v10 = this->charge_restore_time;
    v6 = CDOTA_Buff::GetAbility(this);
    v7 = (*(v6->_vptr_IHandleEntity + 243))(v6, 0xFFFFFFFFLL);
    CDOTA_Buff::StartIntervalThink(this, v7 * v10, v8);
  }
}


// CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter::AddActiveStone  (line 168, @0x0000000002c7a3c0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, GrowMemory, operator[]
// calls: CUtlMemory<CHandle<CBaseEntity>, int>::Grow
void __fastcall CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter::AddActiveStone(
        CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter *const this,
        uint32 *hStone)
{
  __int64 m_Size; // r13
  int v5; // eax
  CHandle<CBaseEntity> *v6; // rax

  if ( *hStone != -1 )
  {
    m_Size = this->m_vActiveStones.m_Size;
    v5 = this->m_vActiveStones.m_Size;
    if ( m_Size == this->m_vActiveStones.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_vActiveStones.m_Memory, 1);
      v5 = this->m_vActiveStones.m_Size;
    }
    this->m_vActiveStones.m_Size = v5 + 1;
    v6 = &this->m_vActiveStones.m_Memory.m_pMemory[m_Size];
    if ( v6 != 0 )
      v6->m_Index = *hStone;
  }
}


// CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter::RemoveActiveStone  (line 180, @0x0000000002c768e0, libserver.so)  // inlines: HasElement
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::FindAndRemove
// callers: CDOTA_Modifier_EarthSpirit_StoneThinker::OnDestroy
void __fastcall CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter::RemoveActiveStone(
        CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter *const this,
        const CHandle<CBaseEntity> *hStone)
{
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *p_m_vActiveStones; // r12

  if ( hStone->m_Index != -1 )
  {
    p_m_vActiveStones = &this->m_vActiveStones;
    if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(&this->m_vActiveStones, hStone) >= 0 )
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FindAndRemove(
        p_m_vActiveStones,
        hStone);
  }
}


// CDOTA_Ability_EarthSpirit_StoneCaller::~CDOTA_Ability_EarthSpirit_StoneCaller  (line 197, @0x0000000002c981a0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_EarthSpirit_StoneCaller::~CDOTA_Ability_EarthSpirit_StoneCaller(
        CDOTA_Ability_EarthSpirit_StoneCaller *const this)
{
  this->_vptr_IHandleEntity = &off_45A20B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_EarthSpirit_StoneCaller::~CDOTA_Ability_EarthSpirit_StoneCaller  (line 197, @0x0000000002c981c0, libserver.so)  // inlines: ~CDOTA_Ability_EarthSpirit_StoneCaller
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_EarthSpirit_StoneCaller::~CDOTA_Ability_EarthSpirit_StoneCaller(
        CDOTA_Ability_EarthSpirit_StoneCaller *const this)
{
  this->_vptr_IHandleEntity = &off_45A20B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_EarthSpirit_StoneCaller::Schema_DynamicBinding  (line 199, @0x0000000002c87ff0, libserver.so)
// globals: CDOTA_Ability_EarthSpirit_StoneCaller::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_EarthSpirit_StoneCaller::Schema_DynamicBinding(
        const CDOTA_Ability_EarthSpirit_StoneCaller *const this)
{
  return CDOTA_Ability_EarthSpirit_StoneCaller::s_pSchemaBinding;
}


// CDOTA_Ability_EarthSpirit_StoneCaller::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 199, @0x0000000002c88000, libserver.so)
// globals: CDOTA_Ability_EarthSpirit_StoneCaller::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_EarthSpirit_StoneCaller::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_EarthSpirit_StoneCaller::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_EarthSpirit_StoneCaller::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_EarthSpirit_StoneCaller::CEntityInstanceEntityClass::DestructInstance  (line 199, @0x0000000002c88010, libserver.so)  // inlines: Destruct<CDOTA_Ability_EarthSpirit_StoneCaller>
void __fastcall CDOTA_Ability_EarthSpirit_StoneCaller::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_EarthSpirit_StoneCaller::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_EarthSpirit_StoneCaller::CEntityInstanceEntityClass::FreeInstance  (line 199, @0x0000000002c88030, libserver.so)
void __fastcall CDOTA_Ability_EarthSpirit_StoneCaller::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_EarthSpirit_StoneCaller::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_EarthSpirit_StoneCaller::CEntityInstanceEntityClass::CanAllocate  (line 199, @0x0000000002c88050, libserver.so)
bool __fastcall CDOTA_Ability_EarthSpirit_StoneCaller::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_EarthSpirit_StoneCaller::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_EarthSpirit_StoneCaller::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 199, @0x0000000002c88060, libserver.so)
// globals: CDOTA_Ability_EarthSpirit_StoneCaller::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_EarthSpirit_StoneCaller::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_EarthSpirit_StoneCaller::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_EarthSpirit_StoneCaller::s_pSchemaBinding;
}


// CDOTA_Ability_EarthSpirit_StoneCaller::CEntityInstanceEntityClass::AllocateInstance  (line 199, @0x0000000002c8f7a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_EarthSpirit_StoneCaller::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_EarthSpirit_StoneCaller::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_EarthSpirit_StoneCaller::CEntityInstanceEntityClass::ConstructInstance  (line 199, @0x0000000002c948a0, libserver.so)  // inlines: CDOTA_Ability_EarthSpirit_StoneCaller, Construct<CDOTA_Ability_EarthSpirit_StoneCaller>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_EarthSpirit_StoneCaller::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_EarthSpirit_StoneCaller::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45A20B0;
  }
  return p;
}


// CDOTA_Ability_EarthSpirit_StoneCaller::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 199, @0x0000000002ca1d50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_EarthSpirit_StoneCaller::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_EarthSpirit_StoneCaller::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_EarthSpirit_StoneCaller::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 199, @0x0000000002ca1d70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_EarthSpirit_StoneCaller::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_EarthSpirit_StoneCaller::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_EarthSpirit_StoneCaller::GetEntityClassInternal  (line 199, @0x0000000002cb9a80, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "earth_spirit_stone_caller", "CDOTA_Ability_EarthSpirit_StoneCaller"
// globals: `guard variable for'CDOTA_Ability_EarthSpirit_StoneCaller::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_StoneCallerClass, CDOTA_Ability_EarthSpirit_StoneCaller::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_StoneCallerClass, __dso_handle, CDOTA_Ability_EarthSpirit_StoneCaller::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_EarthSpirit_StoneCaller::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_StoneCallerClassInfo, CDOTA_Ability_EarthSpirit_StoneCaller::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_StoneCallerClassInfo
CEntityClass *__cdecl CDOTA_Ability_EarthSpirit_StoneCaller::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_EarthSpirit_StoneCaller::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_StoneCallerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_EarthSpirit_StoneCaller::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_StoneCallerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_EarthSpirit_StoneCaller::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_StoneCallerClass);
    CDOTA_Ability_EarthSpirit_StoneCaller::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_StoneCallerClass._vptr_CEntityClass = off_45A2030;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_EarthSpirit_StoneCaller::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_StoneCallerClass);
    __cxa_atexit(
      CDOTA_Ability_EarthSpirit_StoneCaller::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_EarthSpirit_StoneCaller::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_StoneCallerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_EarthSpirit_StoneCallerClass != 0 )
    return &CDOTA_Ability_EarthSpirit_StoneCaller::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_StoneCallerClass;
  if ( `guard variable for'CDOTA_Ability_EarthSpirit_StoneCaller::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_StoneCallerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_EarthSpirit_StoneCaller::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_StoneCallerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_EarthSpirit_StoneCaller::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_StoneCallerClassInfo,
      "CDOTA_Ability_EarthSpirit_StoneCaller",
      "earth_spirit_stone_caller",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_EarthSpirit_StoneCaller::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_StoneCallerClassInfo);
  }
  CDOTA_Ability_EarthSpirit_StoneCaller::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_StoneCallerClass.m_pClassInfo = &CDOTA_Ability_EarthSpirit_StoneCaller::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_StoneCallerClassInfo;
  CDOTA_Ability_EarthSpirit_StoneCaller::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_StoneCallerClass.m_pBaseClassInfo = CDOTA_Ability_EarthSpirit_StoneCaller::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_StoneCallerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_EarthSpirit_StoneCallerClass = &CDOTA_Ability_EarthSpirit_StoneCaller::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_StoneCallerClass;
  CDOTA_Ability_EarthSpirit_StoneCaller::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_StoneCallerClassInfo.m_pClass = &CDOTA_Ability_EarthSpirit_StoneCaller::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_StoneCallerClass;
  CDOTA_Ability_EarthSpirit_StoneCaller::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_StoneCallerClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_EarthSpirit_StoneCallerClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_EarthSpirit_StoneCaller::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_StoneCallerClass;
}


// CDOTA_Ability_EarthSpirit_StoneCaller::GetIntrinsicModifierName  (line 204, @0x0000000002c88070, libserver.so)
// strings: "modifier_earth_spirit_stone_caller_charge_counter"
const char *__fastcall CDOTA_Ability_EarthSpirit_StoneCaller::GetIntrinsicModifierName(
        CDOTA_Ability_EarthSpirit_StoneCaller *const this)
{
  return "modifier_earth_spirit_stone_caller_charge_counter";
}


// CDOTA_Ability_EarthSpirit_StoneCaller::IsRefreshable  (line 209, @0x0000000002c88080, libserver.so)
bool __fastcall CDOTA_Ability_EarthSpirit_StoneCaller::IsRefreshable(CDOTA_Ability_EarthSpirit_StoneCaller *const this)
{
  return 0;
}


// CDOTA_Ability_EarthSpirit_StoneCaller::GetGestureBasedActivity  (line 212, @0x0000000002c88090, libserver.so)
Activity __fastcall CDOTA_Ability_EarthSpirit_StoneCaller::GetGestureBasedActivity(
        CDOTA_Ability_EarthSpirit_StoneCaller *const this)
{
  return 1714;
}


// CDOTA_Ability_EarthSpirit_StoneCaller::IsStealable  (line 219, @0x0000000002c880a0, libserver.so)
bool __fastcall CDOTA_Ability_EarthSpirit_StoneCaller::IsStealable(CDOTA_Ability_EarthSpirit_StoneCaller *const this)
{
  return 0;
}


// CDOTA_Ability_EarthSpirit_StoneCaller::ProcsMagicStick  (line 220, @0x0000000002c880b0, libserver.so)
bool __fastcall CDOTA_Ability_EarthSpirit_StoneCaller::ProcsMagicStick(
        CDOTA_Ability_EarthSpirit_StoneCaller *const this)
{
  return 0;
}


// CDOTA_Ability_EarthSpirit_StoneCaller::ShouldSpeakAbilityConcept  (line 222, @0x0000000002c880c0, libserver.so)
bool __fastcall CDOTA_Ability_EarthSpirit_StoneCaller::ShouldSpeakAbilityConcept(
        CDOTA_Ability_EarthSpirit_StoneCaller *const this,
        int iConcept)
{
  return 0;
}


// CDOTA_Ability_EarthSpirit_StoneCaller::YouForgotToImplementOrDeclareServerClass  (line 230, @0x0000000002c1bf50, libserver.so)
int __fastcall CDOTA_Ability_EarthSpirit_StoneCaller::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_EarthSpirit_StoneCaller *const this)
{
  return 0;
}


// CDOTA_Ability_EarthSpirit_StoneCaller::GetServerClass  (line 230, @0x0000000002c35070, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_EarthSpirit_StoneCaller::GetServerClass(
        CDOTA_Ability_EarthSpirit_StoneCaller *const this)
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


// CDOTA_Ability_EarthSpirit_StoneCaller::CastFilterResult  (line 255, @0x0000000002c1f540, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_earth_spirit_stone_caller_charge_counter"
int __fastcall CDOTA_Ability_EarthSpirit_StoneCaller::CastFilterResult(
        CDOTA_Ability_EarthSpirit_StoneCaller *const this,
        const Vector *const vLocation)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rdi
  int result; // eax

  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_earth_spirit_stone_caller_charge_counter", 0);
  result = 0;
  if ( ModifierByName != 0 )
    return (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName) == 0 ? 0x17 : 0;
  return result;
}


// CDOTA_Ability_EarthSpirit_StoneCaller::GetCustomCastError  (line 272, @0x0000000002c1bf60, libserver.so)
// strings: "dota_hud_error_earth_spirit_no_charges"
const char *__fastcall CDOTA_Ability_EarthSpirit_StoneCaller::GetCustomCastError(
        CDOTA_Ability_EarthSpirit_StoneCaller *const this,
        const Vector *const vLocation)
{
  return "dota_hud_error_earth_spirit_no_charges";
}


// CDOTA_Ability_EarthSpirit_StoneCaller::RefreshCharges  (line 280, @0x0000000002c5f470, libserver.so)  // inlines: GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName
// strings: "max_charges", "modifier_earth_spirit_stone_caller_charge_counter"
void __fastcall CDOTA_Ability_EarthSpirit_StoneCaller::RefreshCharges(
        CDOTA_Ability_EarthSpirit_StoneCaller *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax

  this->max_charges = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_charges", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_earth_spirit_stone_caller_charge_counter", 0);
  if ( ModifierByName != 0 )
    (*(ModifierByName->_vptr_CDOTA_Buff + 28))(ModifierByName, this->max_charges);
  (*(this->_vptr_IHandleEntity + 297))(this);
}


// CDOTA_Ability_EarthSpirit_StoneCaller::OnSpellStart  (line 295, @0x0000000002c7fef0, libserver.so)  // inlines: AddActiveStone, AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, GetBool, GetEHandle, GetEntryIndex, GetInt, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetParent, GetSerialNumber, GetTeamNumber, GrowMemory, IsValid, Set, SetBlockCreepSpawn, SetThinking, SpeakConcept, operator[]
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::GetCursorTarget, CBaseEntity::GetAbsOrigin, DOTA_CreateUnitByName, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_Speech::SpeakConcept, CDOTAFogOfWarSystem::AddFOWEntity, CGameSceneNode::GetOwnerEntity (26 total)
// strings: "max_charges", "charge_restore_time", "modifier_earth_spirit_stone_caller_charge_counter", "npc_dota_earth_spirit_stone", "stoneremnantcast", "modifier_earth_spirit_stone_thinker" (7 total)
void __fastcall CDOTA_Ability_EarthSpirit_StoneCaller::OnSpellStart(CDOTA_Ability_EarthSpirit_StoneCaller *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CUtlMemory<CHandle<CBaseEntity>,int> *ModifierByName; // r12
  CBaseEntity *CursorTarget; // rax
  int m_Value; // r14d
  CDOTA_BaseNPC *v6; // r13
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // r13
  CDOTA_Speech *m_pSpeech; // rdi
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rdi
  const QAngle *AbsAngles; // rax
  float v13; // xmm1_4
  CDOTA_BaseNPC *v14; // rax
  CGameSceneNode *v15; // rdi
  CBaseEntity *v16; // rdi
  const QAngle *v17; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v19; // cx
  __int64 m_nAllocationCount; // r13
  int v21; // eax
  CHandle<CBaseEntity> *v22; // rax
  float v23; // xmm0_4
  float v24; // xmm1_4
  CHandle<CBaseEntity> *m_pMemory; // rax
  void (__fastcall *v26)(CUtlMemory<CHandle<CBaseEntity>,int> *, __int64, float); // r13
  float v27; // xmm0_4
  void (__fastcall *v28)(CDOTA_Ability_EarthSpirit_StoneCaller *const); // r13
  float vOrigin; // [rsp+18h] [rbp-B8h]
  float vOrigina; // [rsp+18h] [rbp-B8h]
  int v31; // [rsp+20h] [rbp-B0h]
  Vector vPos; // [rsp+30h] [rbp-A0h] BYREF
  CResponseCriteriaSet criteria; // [rsp+40h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+80h] [rbp-50h] BYREF
  unsigned __int64 v35; // [rsp+98h] [rbp-38h]

  v35 = __readfsqword(0x28u);
  this->max_charges = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_charges", -1, 0);
  this->charge_restore_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "charge_restore_time", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_earth_spirit_stone_caller_charge_counter", 0);
  if ( ModifierByName != 0 )
  {
    if ( CDOTABaseAbility::GetCursorTarget(this) != 0 )
    {
      CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
      vPos = *CBaseEntity::GetAbsOrigin(CursorTarget);
    }
    else
    {
      vPos = CDOTABaseAbility::GetCursorPosition(this);
    }
    m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
    v6 = CDOTABaseAbility::GetCaster(this);
    v7 = CDOTABaseAbility::GetCaster(this);
    v8 = DOTA_CreateUnitByName("npc_dota_earth_spirit_stone", &vPos, 1, v7, v6, m_Value);
    if ( v8 != 0 )
    {
      CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
      CResponseCriteriaSet::AppendCriteria(&criteria, "stoneremnantcast", "yes", 1.0);
      m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
      if ( m_pSpeech != 0 )
        CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 4, 0, 0, 0, 0);
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
      v8->m_bBlocksCreepSpawn = 0;
      CDOTAFogOfWarSystem::AddFOWEntity(&g_DOTAFogOfWarSystem, v8);
      m_pParent = this->m_pGameSceneNode->m_pParent;
      if ( m_pParent != 0 )
        OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
      else
        OwnerEntity = 0;
      AbsAngles = CBaseEntity::GetAbsAngles(OwnerEntity);
      CBaseEntity::SetAbsAngles(v8, AbsAngles);
      KeyValues::KeyValues(&kv, "modifier_earth_spirit_stone_thinker");
      KeyValues::SetFloat(&kv, "duration", v13);
      v14 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v8, v14, this, "modifier_earth_spirit_stone_thinker", &kv, 0);
      v15 = this->m_pGameSceneNode->m_pParent;
      if ( v15 != 0 )
        v16 = CGameSceneNode::GetOwnerEntity(v15);
      else
        v16 = 0;
      v17 = CBaseEntity::GetAbsAngles(v16);
      CBaseEntity::SetAbsAngles(v8, v17);
      FindClearSpaceForUnit(v8, vPos, 0);
      DOTA_EmitSoundLocation(&vPos, "Hero_EarthSpirit.StoneRemnant.Impact", 1);
      if ( dota_ability_debug.m_pParent->m_Value.m_nValue == 0 )
      {
        v31 = -1;
        m_pEntity = v8->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v19 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v19 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          v31 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v19 & 0x7FFF;
        }
        if ( v31 != -1 )
        {
          m_nAllocationCount = ModifierByName[186].m_nAllocationCount;
          v21 = ModifierByName[186].m_nAllocationCount;
          if ( m_nAllocationCount == ModifierByName[187].m_nAllocationCount )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::Grow(ModifierByName + 187, 1);
            v21 = ModifierByName[186].m_nAllocationCount;
          }
          ModifierByName[186].m_nAllocationCount = v21 + 1;
          v22 = &ModifierByName[187].m_pMemory[m_nAllocationCount];
          if ( v22 != 0 )
            v22->m_Index = v31;
        }
        (*&ModifierByName->m_pMemory[52].m_Index)(ModifierByName);
        if ( (*&ModifierByName->m_pMemory[54].m_Index)(ModifierByName) == 0 )
        {
          v28 = *(this->_vptr_IHandleEntity + 241);
          (*&ModifierByName->m_pMemory[66].m_Index)(ModifierByName);
          v28(this);
        }
        if ( LOBYTE(ModifierByName[188].m_nAllocationCount) == 0 )
        {
          vOrigin = this->charge_restore_time;
          v23 = (*(this->_vptr_IHandleEntity + 243))(this, 0xFFFFFFFFLL);
          CDOTA_Buff::StartIntervalThink(ModifierByName, v23 * vOrigin, v24);
          m_pMemory = ModifierByName->m_pMemory;
          LOBYTE(ModifierByName[188].m_nAllocationCount) = 1;
          v26 = *&m_pMemory[126].m_Index;
          vOrigina = this->charge_restore_time;
          v27 = (*(this->_vptr_IHandleEntity + 243))(this, 0xFFFFFFFFLL);
          v26(ModifierByName, 1, v27 * vOrigina);
        }
      }
      KeyValues::~KeyValues(&kv);
      CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
    }
  }
}


// CDOTA_Modifier_EarthSpirit_StoneThinker::~CDOTA_Modifier_EarthSpirit_StoneThinker  (line 365, @0x0000000002c92dd0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_EarthSpirit_StoneThinker::~CDOTA_Modifier_EarthSpirit_StoneThinker(
        CDOTA_Modifier_EarthSpirit_StoneThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_45A2B70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_EarthSpirit_StoneThinker::~CDOTA_Modifier_EarthSpirit_StoneThinker  (line 365, @0x0000000002c92df0, libserver.so)  // inlines: ~CDOTA_Modifier_EarthSpirit_StoneThinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_EarthSpirit_StoneThinker::~CDOTA_Modifier_EarthSpirit_StoneThinker(
        CDOTA_Modifier_EarthSpirit_StoneThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_45A2B70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_EarthSpirit_StoneThinker::IsHidden  (line 374, @0x0000000002c880d0, libserver.so)
bool __fastcall CDOTA_Modifier_EarthSpirit_StoneThinker::IsHidden(CDOTA_Modifier_EarthSpirit_StoneThinker *const this)
{
  return 1;
}


// CDOTA_Modifier_EarthSpirit_StoneThinker::OnCreated  (line 393, @0x0000000002c2b1c0, libserver.so)  // inlines: GetSequence, SetMagnetized, Vector
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::GetCaster, CBaseAnimating::GetModelScale, CBaseAnimating::GetBaseAnimatingController, CDOTA_ParticleManager::SetParticleControl
// strings: "particles/units/heroes/hero_earth_spirit/espirit_stoneremnant.vpcf"
void __fastcall CDOTA_Modifier_EarthSpirit_StoneThinker::OnCreated(
        CDOTA_Modifier_EarthSpirit_StoneThinker *const this,
        KeyValues *pKV)
{
  CDOTA_Modifier_EarthSpirit_StoneThinker *v2; // rbx
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v4; // rax
  int m_nFXIndex; // r13d
  const CBaseAnimating *v6; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  __int64 v8; // r12
  CDOTA_BaseNPC *v9; // rax
  int v10; // r13d
  const CBaseAnimating *v11; // r14
  CDOTA_ParticleManager *v12; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v14; // rax
  const CBaseAnimatingController *BaseAnimatingController; // rax
  int v16; // eax
  CDOTA_ParticleManager *v17; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-34h]
  float vecFallbackPositiona; // [rsp+Ch] [rbp-34h]
  double v20; // [rsp+10h] [rbp-30h]
  Vector v21; // 0:xmm0_8.8,8:xmm1_4.4

  v2 = this;
  this->m_bHasBeenMagnetized = 0;
  Parent = CDOTA_Buff::GetParent(this);
  v2->m_nFXIndex = CDOTA_Buff::CreateBuffParticleEffect(
                     v2,
                     "particles/units/heroes/hero_earth_spirit/espirit_stoneremnant.vpcf",
                     1,
                     Parent,
                     0);
  v4 = CDOTA_Buff::GetParent(v2);
  m_nFXIndex = v2->m_nFXIndex;
  v6 = v4;
  ParticleManager = GetParticleManager();
  v8 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, m_nFXIndex, 0, v6, 1, 0, vec3_invalid, 1);
  v9 = CDOTA_Buff::GetParent(v2);
  v10 = v2->m_nFXIndex;
  v11 = v9;
  v12 = GetParticleManager();
  v21.z = vecFallbackPosition;
  *&v21.x = v8;
  CDOTA_ParticleManager::SetParticleControlEnt(v12, v10, 1, v11, 1, 0, v21, 1);
  Caster = CDOTA_Buff::GetCaster(v2);
  vecFallbackPositiona = CBaseAnimating::GetModelScale(Caster);
  v14 = CDOTA_Buff::GetCaster(v2);
  BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(v14);
  v16 = (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 24))(BaseAnimatingController);
  LODWORD(v2) = v2->m_nFXIndex;
  *(&v20 + 1) = vecFallbackPositiona;
  *&v20 = v16;
  v17 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v17, v2, 2, v20, 0.0);
}


// CDOTA_Modifier_EarthSpirit_StoneThinker::DeclareFunctions  (line 408, @0x0000000002c1bf70, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_EarthSpirit_StoneThinker::GetModifierProvidesFOWVision(CModifierParams const&)
void __fastcall CDOTA_Modifier_EarthSpirit_StoneThinker::DeclareFunctions(
        CDOTA_Modifier_EarthSpirit_StoneThinker *const this)
{
  this->m_Functions[158].__pfn = CDOTA_Modifier_EarthSpirit_StoneThinker::GetModifierProvidesFOWVision;
  this->m_Functions[158].__delta = 0;
}


// CDOTA_Modifier_EarthSpirit_StoneThinker::GetModifierProvidesFOWVision  (line 415, @0x0000000002c1bf90, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_EarthSpirit_StoneThinker::GetModifierProvidesFOWVision(
        CDOTA_Modifier_EarthSpirit_StoneThinker *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_EarthSpirit_StoneThinker::OnDestroy  (line 422, @0x0000000002c76920, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::GetParent, CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter::RemoveActiveStone, CDOTA_BaseNPC::ForceKill, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_BaseNPC::UnitEmitSound
// strings: "modifier_earth_spirit_stone_caller_charge_counter", "Hero_EarthSpirit.StoneRemnant.Destroy"
void __fastcall CDOTA_Modifier_EarthSpirit_StoneThinker::OnDestroy(CDOTA_Modifier_EarthSpirit_StoneThinker *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter *ModifierByName; // r12
  CDOTA_BaseNPC *Parent; // rax
  CEntityIdentity *m_pEntity; // rcx
  __int16 v6; // ax
  CDOTA_BaseNPC *v7; // rax
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v10; // rax
  EHANDLE hStone; // [rsp+0h] [rbp-20h] BYREF

  Caster = CDOTA_Buff::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_earth_spirit_stone_caller_charge_counter", 0);
  if ( ModifierByName != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    hStone.m_Index = -1;
    if ( Parent != 0 )
    {
      m_pEntity = Parent->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v6 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        hStone.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
      }
    }
    CDOTA_Modifier_EarthSpirit_StoneCaller_ChargeCounter::RemoveActiveStone(ModifierByName, &hStone);
    v7 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::ForceKill(v7, 0);
    m_nFXIndex = this->m_nFXIndex;
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 0);
  }
  v10 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v10, "Hero_EarthSpirit.StoneRemnant.Destroy", 0.0, 0, 0);
}


// CDOTA_Modifier_EarthSpirit_StoneThinker::CheckState  (line 442, @0x0000000002c1bfb0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_EarthSpirit_StoneThinker::CheckState(
        CDOTA_Modifier_EarthSpirit_StoneThinker *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x2A00404uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFD5FFBFBLL;
}


// CDOTA_Ability_EarthSpirit_BoulderSmash::~CDOTA_Ability_EarthSpirit_BoulderSmash  (line 459, @0x0000000002c981f0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_EarthSpirit_BoulderSmash::~CDOTA_Ability_EarthSpirit_BoulderSmash(
        CDOTA_Ability_EarthSpirit_BoulderSmash *const this)
{
  this->_vptr_IHandleEntity = &off_45A2ED0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_EarthSpirit_BoulderSmash::~CDOTA_Ability_EarthSpirit_BoulderSmash  (line 459, @0x0000000002c98210, libserver.so)  // inlines: ~CDOTA_Ability_EarthSpirit_BoulderSmash
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_EarthSpirit_BoulderSmash::~CDOTA_Ability_EarthSpirit_BoulderSmash(
        CDOTA_Ability_EarthSpirit_BoulderSmash *const this)
{
  this->_vptr_IHandleEntity = &off_45A2ED0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_EarthSpirit_BoulderSmash::Schema_DynamicBinding  (line 461, @0x0000000002c880e0, libserver.so)
// globals: CDOTA_Ability_EarthSpirit_BoulderSmash::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_EarthSpirit_BoulderSmash::Schema_DynamicBinding(
        const CDOTA_Ability_EarthSpirit_BoulderSmash *const this)
{
  return CDOTA_Ability_EarthSpirit_BoulderSmash::s_pSchemaBinding;
}


// CDOTA_Ability_EarthSpirit_BoulderSmash::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 461, @0x0000000002c880f0, libserver.so)
// globals: CDOTA_Ability_EarthSpirit_BoulderSmash::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_EarthSpirit_BoulderSmash::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_EarthSpirit_BoulderSmash::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_EarthSpirit_BoulderSmash::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_EarthSpirit_BoulderSmash::CEntityInstanceEntityClass::DestructInstance  (line 461, @0x0000000002c88100, libserver.so)  // inlines: Destruct<CDOTA_Ability_EarthSpirit_BoulderSmash>
void __fastcall CDOTA_Ability_EarthSpirit_BoulderSmash::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_EarthSpirit_BoulderSmash::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_EarthSpirit_BoulderSmash::CEntityInstanceEntityClass::FreeInstance  (line 461, @0x0000000002c88120, libserver.so)
void __fastcall CDOTA_Ability_EarthSpirit_BoulderSmash::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_EarthSpirit_BoulderSmash::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_EarthSpirit_BoulderSmash::CEntityInstanceEntityClass::CanAllocate  (line 461, @0x0000000002c88140, libserver.so)
bool __fastcall CDOTA_Ability_EarthSpirit_BoulderSmash::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_EarthSpirit_BoulderSmash::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_EarthSpirit_BoulderSmash::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 461, @0x0000000002c88150, libserver.so)
// globals: CDOTA_Ability_EarthSpirit_BoulderSmash::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_EarthSpirit_BoulderSmash::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_EarthSpirit_BoulderSmash::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_EarthSpirit_BoulderSmash::s_pSchemaBinding;
}


// CDOTA_Ability_EarthSpirit_BoulderSmash::CEntityInstanceEntityClass::AllocateInstance  (line 461, @0x0000000002c8f7e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_EarthSpirit_BoulderSmash::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_EarthSpirit_BoulderSmash::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 960);
  memset(v1, 0, 0x3C0u);
  return v1;
}


// CDOTA_Ability_EarthSpirit_BoulderSmash::CEntityInstanceEntityClass::ConstructInstance  (line 461, @0x0000000002c948d0, libserver.so)  // inlines: CDOTA_Ability_EarthSpirit_BoulderSmash, CEntityHandle, CHandle, Construct<CDOTA_Ability_EarthSpirit_BoulderSmash>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_EarthSpirit_BoulderSmash::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_EarthSpirit_BoulderSmash::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 236) = -1;
    *p = &off_45A2ED0;
    *(p + 238) = -1;
  }
  return p;
}


// CDOTA_Ability_EarthSpirit_BoulderSmash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 461, @0x0000000002ca1da0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_EarthSpirit_BoulderSmash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_EarthSpirit_BoulderSmash::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_EarthSpirit_BoulderSmash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 461, @0x0000000002ca1dc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_EarthSpirit_BoulderSmash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_EarthSpirit_BoulderSmash::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_EarthSpirit_BoulderSmash::GetEntityClassInternal  (line 461, @0x0000000002cb9bd0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "earth_spirit_boulder_smash", "CDOTA_Ability_EarthSpirit_BoulderSmash"
// globals: `guard variable for'CDOTA_Ability_EarthSpirit_BoulderSmash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_BoulderSmashClass, CDOTA_Ability_EarthSpirit_BoulderSmash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_BoulderSmashClass, __dso_handle, CDOTA_Ability_EarthSpirit_BoulderSmash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_EarthSpirit_BoulderSmash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_BoulderSmashClassInfo, CDOTA_Ability_EarthSpirit_BoulderSmash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_BoulderSmashClassInfo
CEntityClass *__cdecl CDOTA_Ability_EarthSpirit_BoulderSmash::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_EarthSpirit_BoulderSmash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_BoulderSmashClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_EarthSpirit_BoulderSmash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_BoulderSmashClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_EarthSpirit_BoulderSmash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_BoulderSmashClass);
    CDOTA_Ability_EarthSpirit_BoulderSmash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_BoulderSmashClass._vptr_CEntityClass = off_45A2E50;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_EarthSpirit_BoulderSmash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_BoulderSmashClass);
    __cxa_atexit(
      CDOTA_Ability_EarthSpirit_BoulderSmash::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_EarthSpirit_BoulderSmash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_BoulderSmashClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_EarthSpirit_BoulderSmashClass != 0 )
    return &CDOTA_Ability_EarthSpirit_BoulderSmash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_BoulderSmashClass;
  if ( `guard variable for'CDOTA_Ability_EarthSpirit_BoulderSmash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_BoulderSmashClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_EarthSpirit_BoulderSmash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_BoulderSmashClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_EarthSpirit_BoulderSmash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_BoulderSmashClassInfo,
      "CDOTA_Ability_EarthSpirit_BoulderSmash",
      "earth_spirit_boulder_smash",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_EarthSpirit_BoulderSmash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_BoulderSmashClassInfo);
  }
  CDOTA_Ability_EarthSpirit_BoulderSmash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_BoulderSmashClass.m_pClassInfo = &CDOTA_Ability_EarthSpirit_BoulderSmash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_BoulderSmashClassInfo;
  CDOTA_Ability_EarthSpirit_BoulderSmash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_BoulderSmashClass.m_pBaseClassInfo = CDOTA_Ability_EarthSpirit_BoulderSmash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_BoulderSmashClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_EarthSpirit_BoulderSmashClass = &CDOTA_Ability_EarthSpirit_BoulderSmash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_BoulderSmashClass;
  CDOTA_Ability_EarthSpirit_BoulderSmash::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_BoulderSmashClassInfo.m_pClass = &CDOTA_Ability_EarthSpirit_BoulderSmash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_BoulderSmashClass;
  CDOTA_Ability_EarthSpirit_BoulderSmash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_BoulderSmashClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_EarthSpirit_BoulderSmashClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_EarthSpirit_BoulderSmash::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_BoulderSmashClass;
}


// CDOTA_Ability_EarthSpirit_BoulderSmash::YouForgotToImplementOrDeclareServerClass  (line 494, @0x0000000002c1bfd0, libserver.so)
int __fastcall CDOTA_Ability_EarthSpirit_BoulderSmash::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_EarthSpirit_BoulderSmash *const this)
{
  return 0;
}


// CDOTA_Ability_EarthSpirit_BoulderSmash::GetServerClass  (line 494, @0x0000000002c35870, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_EarthSpirit_BoulderSmash::GetServerClass(
        CDOTA_Ability_EarthSpirit_BoulderSmash *const this)
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


// CDOTA_Ability_EarthSpirit_BoulderSmash::CastFilterResult  (line 504, @0x0000000002c26430, libserver.so)  // inlines: FStrEq, GetTeamNumber, GetUnitName, InState, IsInvulnerable, String, ToCStr, _V_strcmp
// calls: CDOTABaseAbility::GetCaster, strcmp, CDOTA_PlayerResource::IsDisableHelpSetForPlayerID
// strings: "npc_dota_earth_spirit_stone"
int __fastcall CDOTA_Ability_EarthSpirit_BoulderSmash::CastFilterResult(
        CDOTA_Ability_EarthSpirit_BoulderSmash *const this,
        CDOTA_BaseNPC *pTarget)
{
  int v4; // ebx
  uint32 m_iUnitType; // eax
  const char *m_pAsString; // rsi
  const char *v8; // rdi
  unsigned __int8 m_Value; // bl
  unsigned __int8 v10; // bl
  CDOTA_BaseNPC *Caster; // rax

  if ( pTarget != 0 )
  {
    v4 = 23;
    if ( pTarget == CDOTABaseAbility::GetCaster(this) )
      return v4;
    m_iUnitType = pTarget->m_iUnitType;
    LOBYTE(v4) = 8;
    if ( (m_iUnitType & 0x20000) != 0 )
      return v4;
    m_pAsString = pTarget->m_iszUnitName.m_Value.u.m_pAsString;
    if ( m_pAsString != 0
      && (m_pAsString == "npc_dota_earth_spirit_stone" || strcmp(m_pAsString, "npc_dota_earth_spirit_stone") == 0) )
    {
      return v4;
    }
    v4 = 9;
    if ( pTarget->m_bIsAncient.m_Value )
      return v4;
    if ( (pTarget->m_nUnitState64.m_Value & 0x200) != 0 )
    {
      m_Value = pTarget->m_iTeamNum.m_Value;
      return (m_Value != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value) + 16;
    }
    else
    {
      if ( (m_iUnitType & 1) != 0 )
      {
        v10 = pTarget->m_iTeamNum.m_Value;
        if ( v10 == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
        {
          v4 = 25;
          Caster = CDOTABaseAbility::GetCaster(this);
          if ( CDOTA_PlayerResource::IsDisableHelpSetForPlayerID(
                 g_pDOTAPlayerResource,
                 pTarget->m_nControllingPlayerID,
                 Caster->m_nControllingPlayerID) )
          {
            return v4;
          }
        }
        m_iUnitType = pTarget->m_iUnitType;
      }
      v4 = 6;
      if ( (m_iUnitType & 0x10) == 0 )
      {
        if ( !pTarget->m_bIsWaitingToSpawn.m_Value && (pTarget->m_nUnitState64.m_Value & 0x100) == 0 )
          return 0;
        v8 = pTarget->m_iszUnitName.m_Value.u.m_pAsString;
        v4 = 18;
        if ( v8 != 0 && (v8 == "npc_dota_earth_spirit_stone" || strcmp(v8, "npc_dota_earth_spirit_stone") == 0) )
          return 0;
      }
    }
    return v4;
  }
  return 0;
}


// CDOTA_Ability_EarthSpirit_BoulderSmash::GetCustomCastError  (line 553, @0x0000000002c1bfe0, libserver.so)
// strings: "#dota_hud_error_cant_cast_on_self"
const char *__fastcall CDOTA_Ability_EarthSpirit_BoulderSmash::GetCustomCastError(
        CDOTA_Ability_EarthSpirit_BoulderSmash *const this,
        CDOTA_BaseNPC *pTarget)
{
  return "#dota_hud_error_cant_cast_on_self";
}


// CDOTA_Ability_EarthSpirit_BoulderSmash::GetCastRange  (line 560, @0x0000000002c6cd30, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FStrEq, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, GetUnitName, IndexToIdentity, IsValid, LookupEntity, Purge, String, ToCStr, ToDOTABaseNPC, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::GetCastRange, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "rock_search_aoe", "npc_dota_earth_spirit_stone", "modifier_earthspirit_petrify"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Ability_EarthSpirit_BoulderSmash::GetCastRange(
        CDOTA_Ability_EarthSpirit_BoulderSmash *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  int LevelSpecialValue; // eax
  __m128i v7; // xmm1
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  vec_t z; // xmm0_4
  float v11; // r13d
  CDOTA_BaseNPC *v12; // rbx
  CDOTA_BaseNPC *v13; // rax
  __int64 v14; // rbx
  char v15; // r13
  CHandle<CBaseEntity> *v16; // rdx
  uint32 m_Index; // eax
  __int16 v18; // cx
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CDOTA_BaseNPC *m_pInstance; // rax
  const char *m_pAsString; // rsi
  int CastRange; // ebx
  Vector vSamplePoint; // [rsp+20h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-50h] BYREF

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "rock_search_aoe", -1, 0);
  this->rock_search_aoe = LevelSpecialValue;
  vSamplePoint = *vLocation;
  if ( pTarget != 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
    vSamplePoint.x = AbsOrigin->x;
    vSamplePoint.y = AbsOrigin->y;
    z = AbsOrigin->z;
    LevelSpecialValue = this->rock_search_aoe;
    vSamplePoint.z = z;
  }
  *v7.m128i_i32 = LevelSpecialValue;
  entities.m_Size = 0;
  this->m_bTargetStone = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v11 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
  v12 = CDOTABaseAbility::GetCaster(this);
  v13 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v13->m_iTeamNum.m_Value, &vSamplePoint, v12, v11, &entities, 3, 35, 262208, 0, 0);
  if ( entities.m_Size <= 0 )
  {
    v15 = 0;
  }
  else
  {
    v14 = 0;
    v15 = 0;
    do
    {
      while ( 1 )
      {
        v16 = &entities.m_Memory.m_pMemory[v14];
        m_Index = v16->m_Index;
        if ( v16->m_Index + 2 > 1 )
        {
          v18 = v16->m_Index;
          v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v16->m_Index) >> 9) & 0x3F];
          if ( v19 != 0 )
          {
            v20 = &v19[v18 & 0x1FF];
            if ( v20 != 0 && m_Index == v20->m_EHandle.m_Index )
            {
              m_pInstance = v20->m_pInstance;
              if ( v20->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              {
                m_pAsString = m_pInstance->m_iszUnitName.m_Value.u.m_pAsString;
                if ( m_pAsString != 0
                  && (m_pAsString == "npc_dota_earth_spirit_stone"
                   || strcmp(m_pAsString, "npc_dota_earth_spirit_stone") == 0) )
                {
                  this->m_bTargetStone = 1;
                  v15 = 1;
                }
                if ( CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_earthspirit_petrify", 0) != 0 )
                  break;
              }
            }
          }
        }
        if ( entities.m_Size <= ++v14 )
          goto LABEL_18;
      }
      ++v14;
      v15 = 1;
      this->m_bTargetStone = 1;
    }
    while ( entities.m_Size > v14 );
  }
LABEL_18:
  if ( pTarget != 0 )
  {
    if ( (pTarget->m_iUnitType & 0x193) != 0 && v15 == 0 )
      goto LABEL_21;
LABEL_23:
    CastRange = 2000;
    goto LABEL_24;
  }
  if ( v15 == 0 )
    goto LABEL_23;
LABEL_21:
  CastRange = CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
LABEL_24:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
  if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
  }
  return CastRange;
}


// CDOTA_Ability_EarthSpirit_BoulderSmash::OnAbilityPhaseStart  (line 608, @0x0000000002c6cfd0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FStrEq, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, GetUnitName, IndexToIdentity, IsValid, LookupEntity, Purge, Set, String, ToCStr, ToDOTABaseNPC, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*, operator=, operator==<CBaseEntity>, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_BaseNPC::FindModifierByName, CEntityHandle::operator CEntityInstance*, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, _Unwind_Resume
// strings: "rock_search_aoe", "npc_dota_earth_spirit_stone", "modifier_earthspirit_petrify"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Ability_EarthSpirit_BoulderSmash::OnAbilityPhaseStart(
        CDOTA_Ability_EarthSpirit_BoulderSmash *const this)
{
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v3; // rdx
  bool result; // al
  int LevelSpecialValue; // eax
  int v6; // r12d
  int (**vptr_IHandleEntity)(...); // rax
  __m128i v8; // xmm1
  float v9; // r12d
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_BaseNPC *v11; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v13; // rax
  __int64 v14; // r13
  int v15; // r12d
  CHandle<CBaseEntity> *v16; // rdx
  uint32 m_Index; // eax
  __int16 v18; // cx
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  const char *m_pAsString; // rsi
  CEntityIdentity *v23; // rdx
  int v24; // eax
  __int16 v25; // cx
  CEntityIdentity *v26; // rdx
  int v27; // eax
  __int16 v28; // cx
  bool v29; // cc
  CEntityIdentity *m_pEntity; // rcx
  int v31; // edx
  __int16 v32; // si
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+20h] [rbp-50h] BYREF

  this->m_hTarget.m_Index = -1;
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 )
  {
    result = CursorTarget->m_bIsDOTANPC;
    if ( result && !this->m_bTargetStone )
    {
      m_pEntity = v3->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v31 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        if ( m_pEntity->m_EHandle.m_Index == -1 )
          v32 = 0x7FFF;
        else
          v32 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hTarget.m_Index) = v32 | this->m_hTarget.m_Index & 0x8000;
        this->m_hTarget.m_Index = (v31 << 15) | this->m_hTarget.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hTarget.m_Index = -1;
      }
      return result;
    }
  }
  this->m_bTargetStone = 0;
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "rock_search_aoe", -1, 0);
  entities.m_Size = 0;
  v6 = LevelSpecialValue;
  this->rock_search_aoe = LevelSpecialValue;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  *v8.m128i_i32 = ((vptr_IHandleEntity[228])(this) + v6);
  v9 = COERCE_FLOAT(_mm_cvtsi128_si32(v8));
  Caster = CDOTABaseAbility::GetCaster(this);
  v11 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
  v13 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v13->m_iTeamNum.m_Value, AbsOrigin, Caster, v9, &entities, 3, 35, 262208, 0, 0);
  v14 = 0;
  v15 = 0;
  if ( entities.m_Size > 0 )
  {
    while ( 1 )
    {
      v16 = &entities.m_Memory.m_pMemory[v14];
      m_Index = entities.m_Memory.m_pMemory[v14].m_Index;
      if ( m_Index + 2 <= 1 )
        goto LABEL_5;
      v18 = v16->m_Index;
      v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v16->m_Index) >> 9) & 0x3F];
      if ( v19 == 0 )
        goto LABEL_5;
      v20 = &v19[v18 & 0x1FF];
      if ( v20 == 0 )
        goto LABEL_5;
      if ( m_Index != v20->m_EHandle.m_Index )
        goto LABEL_5;
      m_pInstance = v20->m_pInstance;
      if ( v20->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC )
        goto LABEL_5;
      m_pAsString = m_pInstance->m_iszUnitName.m_Value.u.m_pAsString;
      if ( m_pAsString != 0
        && (m_pAsString == "npc_dota_earth_spirit_stone" || strcmp(m_pAsString, "npc_dota_earth_spirit_stone") == 0) )
      {
        v23 = m_pInstance->m_pEntity;
        if ( v23 != 0 )
        {
          v24 = (v23->m_EHandle.m_Index >> 15) - (v23->m_flags & 1);
          v25 = 0x7FFF;
          if ( v23->m_EHandle.m_Index != -1 )
            v25 = v23->m_EHandle.m_Index & 0x7FFF;
          LOWORD(this->m_hTarget.m_Index) = v25 | this->m_hTarget.m_Index & 0x8000;
          this->m_hTarget.m_Index = (v24 << 15) | this->m_hTarget.m_Index & 0x7FFF;
        }
        else
        {
          this->m_hTarget.m_Index = -1;
        }
      }
      if ( CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_earthspirit_petrify", 0) == 0 )
        goto LABEL_5;
      v26 = m_pInstance->m_pEntity;
      if ( v26 != 0 )
      {
        v27 = (v26->m_EHandle.m_Index >> 15) - (v26->m_flags & 1);
        v28 = 0x7FFF;
        if ( v26->m_EHandle.m_Index != -1 )
          v28 = v26->m_EHandle.m_Index & 0x7FFF;
        ++v15;
        ++v14;
        LOWORD(this->m_hTarget.m_Index) = v28 | this->m_hTarget.m_Index & 0x8000;
        v29 = entities.m_Size <= v15;
        this->m_hTarget.m_Index = (v27 << 15) | this->m_hTarget.m_Index & 0x7FFF;
        if ( v29 )
          break;
      }
      else
      {
        this->m_hTarget.m_Index = -1;
LABEL_5:
        ++v15;
        ++v14;
        if ( entities.m_Size <= v15 )
          break;
      }
    }
  }
  if ( CEntityHandle::operator CEntityInstance *(&this->m_hTarget) != 0 )
  {
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
      if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    }
    return 1;
  }
  else
  {
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
    return 0;
  }
}


// CDOTA_Ability_EarthSpirit_BoulderSmash::OnAbilityPhaseInterrupted  (line 648, @0x0000000002c1bff0, libserver.so)  // inlines: Set, operator=
void __fastcall CDOTA_Ability_EarthSpirit_BoulderSmash::OnAbilityPhaseInterrupted(
        CDOTA_Ability_EarthSpirit_BoulderSmash *const this)
{
  this->m_hTarget.m_Index = -1;
}


// CDOTA_Ability_EarthSpirit_BoulderSmash::OnSpellStart  (line 657, @0x0000000002c66ba0, libserver.so)  // inlines: CEntityHandle, CHandle, FStrEq, FastRSqrt, FastRSqrtFast, Get, GetEHandle, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, GetUnitName, Set, String, ToCStr, ToDOTABaseNPC, Vector, VectorMultiply, VectorNormalize2D, VectorNormalizeFast, VectorSubtract, _V_strcmp, _mm_load_ss, _mm_rsqrt_ss, _mm_set_ss, operator CBaseEntity*, operator*, operator-, operator=, sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::StartGesture, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCursorTarget, CBaseEntity::GetAbsOrigin, VectorNormalize, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTA_BaseNPC::FindModifierByName, VectorVectors, CDOTA_ProjectileManager::CreateLinearProjectile (30 total)
// strings: "rock_damage", "unit_distance", "rock_distance", "modifier_earthspirit_petrify", "modifier_earth_spirit_geomagnetic_grip", "modifier_earth_spirit_boulder_smash" (12 total)
void __fastcall CDOTA_Ability_EarthSpirit_BoulderSmash::OnSpellStart(
        CDOTA_Ability_EarthSpirit_BoulderSmash *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CBaseEntity *CursorTarget; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *v5; // rax
  const Vector *v6; // rax
  vec_t v7; // xmm2_4
  vec_t v8; // xmm0_4
  vec_t v9; // xmm4_4
  int speed; // r13d
  float v11; // r14d
  float v12; // r15d
  CEntityInstance *v13; // rax
  CDOTA_BaseNPC *v14; // r12
  CEntityIdentity *m_pEntity; // rdx
  int v16; // eax
  __int16 v17; // cx
  const char *m_pAsString; // rsi
  float rock_distance; // xmm5_4
  vec_t v20; // xmm2_4
  vec_t v21; // xmm1_4
  const Vector *v22; // rax
  vec_t v23; // xmm1_4
  int (**vptr_IHandleEntity)(...); // rax
  CDOTA_BaseNPC *v25; // rax
  CEntityIdentity *v26; // rdx
  int v27; // eax
  __int16 v28; // cx
  float v29; // xmm2_4
  float v30; // xmm1_4
  int v31; // eax
  float v32; // xmm0_4
  float fDistance; // xmm6_4
  float v34; // xmm1_4
  CDOTA_BaseNPC *v35; // rax
  int AbilityParticleEffect; // r14d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v38; // rax
  CDOTA_ParticleManager *v39; // rax
  CDOTA_ParticleManager *v40; // rax
  CDOTA_ParticleManager *v41; // rax
  int v42; // r13d
  CDOTA_ParticleManager *v43; // rax
  CDOTA_ParticleManager *v44; // rax
  CDOTA_ParticleManager *v45; // rax
  CDOTA_ParticleManager *v46; // rax
  CDOTA_BaseNPC *v47; // rax
  const QAngle *AbsAngles; // rax
  float flRange; // [rsp+14h] [rbp-14Ch]
  CDOTA_BaseNPC *pEnt; // [rsp+18h] [rbp-148h]
  CDOTA_BaseNPC *pEnta; // [rsp+18h] [rbp-148h]
  float flDuration; // [rsp+20h] [rbp-140h]
  float flDurationa; // [rsp+20h] [rbp-140h]
  float flDurationb; // [rsp+20h] [rbp-140h]
  float z; // [rsp+24h] [rbp-13Ch]
  float y; // [rsp+28h] [rbp-138h]
  float x; // [rsp+2Ch] [rbp-134h]
  Vector vDir; // [rsp+40h] [rbp-120h] BYREF
  Vector vecOrientFwd; // [rsp+50h] [rbp-110h] BYREF
  Vector vecOrientRight; // [rsp+60h] [rbp-100h] BYREF
  Vector vecOrientUp; // [rsp+70h] [rbp-F0h] BYREF
  double v62; // [rsp+80h] [rbp-E0h]
  float v63; // [rsp+88h] [rbp-D8h]
  sLinearProjectileCreateInfo info; // [rsp+90h] [rbp-D0h] BYREF
  KeyValues kv; // [rsp+110h] [rbp-50h] BYREF
  unsigned __int64 v66; // [rsp+128h] [rbp-38h]
  Vector CursorPosition; // 0:kr00_12.12

  v66 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(Caster, 1510, 0.1, 0.1, 9, 0, 1.0);
  this->speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
  this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  this->rock_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "rock_damage", -1, 0);
  this->unit_distance = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "unit_distance", -1, 0);
  this->rock_distance = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "rock_distance", -1, 0);
  this->stun_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 0);
  if ( CDOTABaseAbility::GetCursorTarget(this) != 0 )
  {
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(CursorTarget);
    x = AbsOrigin->x;
    y = AbsOrigin->y;
    z = AbsOrigin->z;
  }
  else
  {
    CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
    z = CursorPosition.z;
    x = CursorPosition.x;
    y = CursorPosition.y;
  }
  v5 = CDOTABaseAbility::GetCaster(this);
  v6 = CBaseEntity::GetAbsOrigin(v5);
  v7 = x - v6->x;
  vDir.y = y - v6->y;
  vDir.x = v7;
  v8 = z - v6->z;
  *&vecOrientFwd.x = *&vDir.x;
  vDir.z = 0.0;
  vecOrientFwd.z = v8;
  if ( VectorNormalize(&vDir) < 0.0099999998 )
  {
    v47 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v47);
    AngleVectors(AbsAngles, &vDir, 0, 0);
  }
  v9 = vDir.z;
  this->m_bUsedStone = 0;
  this->m_bTargetStone = 0;
  speed = this->speed;
  flDuration = v9;
  v11 = vDir.x;
  this->m_hCursorTarget.m_Index = -1;
  v12 = vDir.y;
  v13 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
  v14 = v13;
  if ( v13 != 0
    && BYTE3(v13[7]._vptr_IHandleEntity) != 0
    && (BYTE1(v13[58]._vptr_IHandleEntity) & 2) == 0
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(v13, this, 1) )
  {
    m_pEntity = v14->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v16 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v17 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hCursorTarget.m_Index) = v17 | this->m_hCursorTarget.m_Index & 0x8000;
      this->m_hCursorTarget.m_Index = (v16 << 15) | this->m_hCursorTarget.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hCursorTarget.m_Index = -1;
    }
    m_pAsString = v14->m_iszUnitName.m_Value.u.m_pAsString;
    if ( m_pAsString != 0
      && (m_pAsString == "npc_dota_earth_spirit_stone" || strcmp(m_pAsString, "npc_dota_earth_spirit_stone") == 0)
      || CDOTA_BaseNPC::FindModifierByName(v14, "modifier_earthspirit_petrify", 0) != 0 )
    {
      rock_distance = this->rock_distance;
      this->m_bUsedStone = 1;
      flRange = rock_distance;
    }
    else
    {
      flRange = this->unit_distance;
    }
    info.hSource.m_Index = -1;
    info.pszEffectName = 0;
    info.fDistance = 0.0;
    v20 = vec3_origin.y;
    info.bProvidesVision = 0;
    v21 = vec3_origin.z;
    info.vSpawnOrigin.x = vec3_origin.x;
    info.vSpawnOrigin.y = v20;
    info.vVelocity.x = vec3_origin.x;
    info.vVelocity.y = v20;
    info.vAcceleration.x = vec3_origin.x;
    info.vAcceleration.y = v20;
    info.vSpawnOrigin.z = v21;
    info.vVelocity.z = v21;
    info.vAcceleration.z = v21;
    info.fStartRadius = 0.0;
    info.fEndRadius = 0.0;
    info.bHasFrontalCone = 1;
    info.bCheckStartPosition = 0;
    info.iUnitTargetTeam = 0;
    info.iUnitTargetType = 0;
    info.iUnitTargetFlags = 0;
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
    v22 = CBaseEntity::GetAbsOrigin(v14);
    info.vSpawnOrigin.x = v22->x;
    info.vSpawnOrigin.y = v22->y;
    v23 = v22->z;
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    info.vSpawnOrigin.z = v23;
    info.vVelocity.x = v11 * speed;
    info.vVelocity.y = v12 * speed;
    info.vVelocity.z = speed * flDuration;
    info.fDistance = vptr_IHandleEntity[228](this) + flRange;
    info.fStartRadius = this->radius;
    info.fEndRadius = info.fStartRadius;
    v25 = CDOTABaseAbility::GetCaster(this);
    if ( v25 != 0 && (v26 = v25->m_pEntity) != 0 )
    {
      v27 = (v26->m_EHandle.m_Index >> 15) - (v26->m_flags & 1);
      v28 = 0x7FFF;
      if ( v26->m_EHandle.m_Index != -1 )
        v28 = v26->m_EHandle.m_Index & 0x7FFF;
      LOWORD(info.hSource.m_Index) = v28 | info.hSource.m_Index & 0x8000;
      info.hSource.m_Index = (v27 << 15) | info.hSource.m_Index & 0x7FFF;
    }
    else
    {
      info.hSource.m_Index = -1;
    }
    info.iUnitTargetTeam = 2;
    info.iUnitTargetType = 3;
    info.bHasFrontalCone = 0;
    flDurationa = (((vecOrientFwd.x * vecOrientFwd.x) + 0.00000011920929) + (vecOrientFwd.y * vecOrientFwd.y))
                + (vecOrientFwd.z * vecOrientFwd.z);
    v29 = 1.0 / fsqrt(flDurationa);
    v30 = (0.5 * v29) * (3.0 - ((flDurationa * v29) * v29));
    vecOrientFwd.x = vecOrientFwd.x * v30;
    vecOrientFwd.y = vecOrientFwd.y * v30;
    vecOrientFwd.z = v30 * vecOrientFwd.z;
    VectorVectors(&vecOrientFwd, &vecOrientRight, &vecOrientUp);
    v31 = CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
    v32 = this->speed;
    fDistance = info.fDistance;
    this->m_nProjectileID = v31;
    flDurationb = fDistance / v32;
    CDOTA_BaseNPC::RemoveModifierByName(v14, "modifier_earth_spirit_geomagnetic_grip");
    KeyValues::KeyValues(&kv, "modifier_earth_spirit_boulder_smash");
    KeyValues::SetFloat(&kv, "duration", v34);
    KeyValues::SetInt(&kv, "projectileID", this->m_nProjectileID);
    v35 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v14, v35, this, "modifier_earth_spirit_boulder_smash", &kv, 0);
    AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                              this,
                              "particles/units/heroes/hero_earth_spirit/espirit_bouldersmash_caster.vpcf",
                              2,
                              0,
                              0);
    pEnt = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, AbilityParticleEffect, 0, pEnt, 1, 0, vec3_invalid, 1);
    v38 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(
      v38,
      AbilityParticleEffect,
      1,
      v14,
      5,
      "attach_hitloc",
      vec3_invalid,
      1);
    v39 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v39, AbilityParticleEffect, 2, v14, 1, 0, vec3_invalid, 1);
    pEnta = CDOTABaseAbility::GetCaster(this);
    v40 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v40, AbilityParticleEffect, 3, pEnta, 0, 0, vec3_invalid, 1);
    v41 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v41, AbilityParticleEffect);
    v42 = CDOTABaseAbility::CreateAbilityParticleEffect(
            this,
            "particles/units/heroes/hero_earth_spirit/espirit_bouldersmash_target.vpcf",
            1,
            v14,
            0);
    v43 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v43, v42, 1, COERCE_DOUBLE(__PAIR64__(LODWORD(y), LODWORD(x))), z);
    v44 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlOrientation(
      v44,
      v42,
      1,
      *&vecOrientFwd.x,
      vecOrientFwd.z,
      *&vecOrientRight.x,
      vecOrientRight.z,
      *&vecOrientUp.x,
      vecOrientUp.z);
    *&v62 = flDurationb;
    *(&v62 + 1) = flDurationb;
    v63 = flDurationb;
    v45 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v45, v42, 2, v62, v63);
    v46 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v46, v42);
    CDOTA_BaseNPC::UnitEmitSound(v14, "Hero_EarthSpirit.BoulderSmash.Target", 0.0, 0, 0);
    this->m_hTarget.m_Index = -1;
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_EarthSpirit_BoulderSmash::OnProjectileHit  (line 757, @0x0000000002c2f9a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsRealHero, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, ApplyDamage, CDOTABaseAbility::CreateAbilityParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound, CDOTA_BaseNPC::FindModifierByName, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues (16 total)
// strings: "particles/units/heroes/hero_earth_spirit/espirit_bouldersmash_hit.vpcf", "Hero_EarthSpirit.BoulderSmash.Damage", "modifier_earthspirit_petrify", "modifier_stunned", "Hero_EarthSpirit.GeomagneticGrip.Stun", "modifier_earth_spirit_boulder_smash"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_EarthSpirit_BoulderSmash::OnProjectileHit(
        CDOTA_Ability_EarthSpirit_BoulderSmash *const this,
        unsigned __int16 *hTarget,
        const Vector *const vLocation)
{
  int v4; // eax
  unsigned __int64 v5; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *v12; // r14
  CDOTA_BaseNPC *Caster; // rax
  int AbilityParticleEffect; // r13d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v16; // rax
  float v17; // xmm1_4
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC_Hero *v20; // r14
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC_Hero *v22; // rdi
  CDOTA_BaseNPC *v23; // rdi
  float flDamage; // [rsp+Ch] [rbp-44h]
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-28h]

  v26 = __readfsqword(0x28u);
  v4 = *hTarget;
  if ( (*hTarget + 2) <= 1
    || (v5 = *hTarget, (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F]) == 0)
    || (v7 = &v6[v5 & 0x1FF]) == 0
    || v4 != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  m_Index = this->m_hCursorTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hCursorTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v11 = &v10[this->m_hCursorTarget.m_Index & 0x1FF]) != 0
    && m_Index == v11->m_EHandle.m_Index
    && (v23 = v11->m_pInstance, v11->m_pInstance != 0)
    && v23->m_bIsDOTANPC )
  {
    if ( m_pInstance == 0 )
    {
      CDOTA_BaseNPC::RemoveModifierByName(v23, "modifier_earth_spirit_boulder_smash");
      return 0;
    }
    v12 = v11->m_pInstance;
  }
  else
  {
    if ( m_pInstance == 0 )
      return 0;
    v12 = 0;
  }
  if ( (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) == 0 )
  {
    flDamage = this->rock_damage;
    Caster = CDOTABaseAbility::GetCaster(this);
    ApplyDamage(Caster, m_pInstance, this, flDamage, 2, 0);
    AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                              this,
                              "particles/units/heroes/hero_earth_spirit/espirit_bouldersmash_hit.vpcf",
                              2,
                              0,
                              0);
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(
      ParticleManager,
      AbilityParticleEffect,
      0,
      m_pInstance,
      1,
      0,
      vec3_invalid,
      1);
    v16 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v16, AbilityParticleEffect);
    CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_EarthSpirit.BoulderSmash.Damage", 0.0, 0, 0);
    if ( this->m_bUsedStone
      && (v12 == 0
       || (v12->m_iUnitType & 1) == 0
       || CDOTA_BaseNPC::FindModifierByName(v12, "modifier_earthspirit_petrify", 0) != 0) )
    {
      KeyValues::KeyValues(&kv, "modifier_stunned");
      KeyValues::SetFloat(&kv, "duration", v17);
      v18 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v18, this, "modifier_stunned", &kv, 0);
      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
      {
        CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_EarthSpirit.GeomagneticGrip.Stun", 0.0, 0, 0);
        if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
        {
          v20 = 0;
          if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
            v20 = m_pInstance;
          v21 = CDOTABaseAbility::GetCaster(this);
          if ( v21 != 0 && (v21->m_iUnitType & 1) != 0 )
            v22 = v21;
          else
            v22 = 0;
          EconEntity_OnOwnerKillEaterEvent(
            v22,
            v20,
            kill_eater_event_t::kKillEaterEvent_EarthSpirit_SmashStuns,
            1,
            INVALID_ITEM_DEF_INDEX);
        }
      }
      KeyValues::~KeyValues(&kv);
    }
  }
  return 0;
}


// CDOTA_Ability_EarthSpirit_BoulderSmash::GetAbilityDamageToTargetOverInterval  (line 810, @0x0000000002c62140, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "rock_damage"
__int64 __fastcall CDOTA_Ability_EarthSpirit_BoulderSmash::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_EarthSpirit_BoulderSmash *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "rock_damage", -1, 0);
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Ability_EarthSpirit_BoulderSmash::GetStunDuration  (line 820, @0x0000000002c55ff0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_EarthSpirit_BoulderSmash::GetStunDuration(
        CDOTA_Ability_EarthSpirit_BoulderSmash *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 1);
}


// CDOTA_Modifier_EarthSpirit_BoulderSmash::~CDOTA_Modifier_EarthSpirit_BoulderSmash  (line 829, @0x0000000002c92d60, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_EarthSpirit_BoulderSmash::~CDOTA_Modifier_EarthSpirit_BoulderSmash(
        CDOTA_Modifier_EarthSpirit_BoulderSmash *const this)
{
  this->_vptr_CDOTA_Buff = &off_45A3990;
  this->_vptr_CHorizontalMotionController = &off_45A3C80;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_EarthSpirit_BoulderSmash::~CDOTA_Modifier_EarthSpirit_BoulderSmash  (line 829, @0x0000000002c92d90, libserver.so)  // inlines: ~CDOTA_Modifier_EarthSpirit_BoulderSmash
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_EarthSpirit_BoulderSmash::~CDOTA_Modifier_EarthSpirit_BoulderSmash(
        CDOTA_Modifier_EarthSpirit_BoulderSmash *const this)
{
  this->_vptr_CDOTA_Buff = &off_45A3990;
  this->_vptr_CHorizontalMotionController = &off_45A3C80;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_EarthSpirit_BoulderSmash::IsPurgable  (line 838, @0x0000000002c88160, libserver.so)
bool __fastcall CDOTA_Modifier_EarthSpirit_BoulderSmash::IsPurgable(
        CDOTA_Modifier_EarthSpirit_BoulderSmash *const this)
{
  return 0;
}


// CDOTA_Modifier_EarthSpirit_BoulderSmash::RemoveOnDeath  (line 839, @0x0000000002c88170, libserver.so)
bool __fastcall CDOTA_Modifier_EarthSpirit_BoulderSmash::RemoveOnDeath(
        CDOTA_Modifier_EarthSpirit_BoulderSmash *const this)
{
  return 0;
}


// CDOTA_Modifier_EarthSpirit_BoulderSmash::IsHorizontalMotionValidToApply  (line 845, @0x0000000002c88180, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_EarthSpirit_BoulderSmash::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_EarthSpirit_BoulderSmash *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_EarthSpirit_BoulderSmash::StatusEffectPriority  (line 846, @0x0000000002c881b0, libserver.so)
int __fastcall CDOTA_Modifier_EarthSpirit_BoulderSmash::StatusEffectPriority(
        CDOTA_Modifier_EarthSpirit_BoulderSmash *const this)
{
  return 10;
}


// CDOTA_Modifier_EarthSpirit_BoulderSmash::GetAttributes  (line 847, @0x0000000002c881c0, libserver.so)
int __fastcall CDOTA_Modifier_EarthSpirit_BoulderSmash::GetAttributes(
        CDOTA_Modifier_EarthSpirit_BoulderSmash *const this)
{
  return 4;
}


// CDOTA_Modifier_EarthSpirit_BoulderSmash::IsMotionController  (line 849, @0x0000000002c881d0, libserver.so)
bool __fastcall CDOTA_Modifier_EarthSpirit_BoulderSmash::IsMotionController(
        CDOTA_Modifier_EarthSpirit_BoulderSmash *const this)
{
  return 1;
}


// CDOTA_Modifier_EarthSpirit_BoulderSmash::OnCreated  (line 867, @0x0000000002c22e50, libserver.so)
// calls: KeyValues::GetInt, CDOTA_Buff::GetParent, CDOTALocomotor::ApplyHorizontalMotionController, CDOTA_Buff::Destroy
// strings: "projectileID"
void __fastcall CDOTA_Modifier_EarthSpirit_BoulderSmash::OnCreated(
        CDOTA_Modifier_EarthSpirit_BoulderSmash *const this,
        KeyValues *pKV)
{
  int Int; // eax
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v5; // rax

  Int = KeyValues::GetInt(pKV, "projectileID", 0);
  this->m_bInterrupted = 0;
  this->m_nProjectileID = Int;
  Parent = CDOTA_Buff::GetParent(this);
  v5 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  if ( !CDOTALocomotor::ApplyHorizontalMotionController(v5, &this->CHorizontalMotionController, 0) )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_EarthSpirit_BoulderSmash::DeclareFunctions  (line 882, @0x0000000002c1c000, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_EarthSpirit_BoulderSmash::GetOverrideAnimation(CModifierParams const&), CDOTA_Modifier_EarthSpirit_BoulderSmash::OnTeleported(CModifierParams const&)
void __fastcall CDOTA_Modifier_EarthSpirit_BoulderSmash::DeclareFunctions(
        CDOTA_Modifier_EarthSpirit_BoulderSmash *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_EarthSpirit_BoulderSmash::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
  this->m_Functions[142].__delta = 0;
  this->m_Functions[142].__pfn = CDOTA_Modifier_EarthSpirit_BoulderSmash::OnTeleported;
}


// CDOTA_Modifier_EarthSpirit_BoulderSmash::OnDestroy  (line 890, @0x0000000002c2c9c0, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTAAbility, operator CBaseEntity*
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CGridNav::DestroyTreesAroundPoint, CBaseEntity::StopSound, CDOTA_ProjectileManager::GetLinearProjectileByHandle, __dynamic_cast, CDOTA_Buff::GetAbility, CDOTA_ProjectileManager::DestroyLinearProjectile
// strings: "Hero_EarthSpirit.BoulderSmash.Target"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_EarthSpirit_BoulderSmash::OnDestroy(CDOTA_Modifier_EarthSpirit_BoulderSmash *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v5; // r12d
  CDOTA_BaseNPC *v6; // rax
  float v7; // xmm3_4
  CDOTA_BaseNPC *v8; // rax
  CDOTA_LinearProjectileInfo *LinearProjectileByHandle; // rax
  uint32 m_Index; // edx
  unsigned __int16 v11; // cx
  CEntityIdentity *v12; // rax
  CEntityIdentity *v13; // rax
  CDOTABaseAbility *v14; // r12
  float m_flHullRadius; // [rsp+Ch] [rbp-14h]
  Vector v16; // 0:xmm0_8.8,8:xmm1_4.4

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveHorizontalMotionController(v3, &this->CHorizontalMotionController);
  if ( this->m_bInterrupted )
  {
    LinearProjectileByHandle = CDOTA_ProjectileManager::GetLinearProjectileByHandle(
                                 &g_DOTAProjectileManager,
                                 this->m_nProjectileID);
    if ( LinearProjectileByHandle != 0 )
    {
      m_Index = LinearProjectileByHandle->m_hAbility.m_Index;
      if ( m_Index + 2 > 1 )
      {
        v11 = LinearProjectileByHandle->m_hAbility.m_Index;
        v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v11 >> 9) & 0x3F];
        if ( v12 != 0 )
        {
          v13 = &v12[v11 & 0x1FF];
          if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index && v13->m_pInstance != 0 )
          {
            v14 = __dynamic_cast(v13->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
            if ( v14 != 0 && CDOTA_Buff::GetAbility(this) == v14 )
              CDOTA_ProjectileManager::DestroyLinearProjectile(&g_DOTAProjectileManager, this->m_nProjectileID);
          }
        }
      }
    }
  }
  Caster = CDOTA_Buff::GetCaster(this);
  v5 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
  m_flHullRadius = CDOTA_Buff::GetParent(this)->m_flHullRadius;
  v6 = CDOTA_Buff::GetParent(this);
  v16 = *CBaseEntity::GetAbsOrigin(v6);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 1, v5, v16, m_flHullRadius, v7);
  v8 = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(v8, "Hero_EarthSpirit.BoulderSmash.Target");
}


// CDOTA_Modifier_EarthSpirit_BoulderSmash::UpdateHorizontalMotion  (line 916, @0x0000000002c25f40, libserver.so)
// calls: CDOTA_ProjectileManager::IsValidProjectile, CDOTA_ProjectileManager::GetLinearProjectileLocation, CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CGridNav::DestroyTreesAroundPoint, CBaseEntity::SetAbsOrigin
void __fastcall CDOTA_Modifier_EarthSpirit_BoulderSmash::UpdateHorizontalMotion(
        CDOTA_Modifier_EarthSpirit_BoulderSmash *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v6; // r12d
  CDOTA_BaseNPC *Parent; // rax
  float v8; // xmm3_4
  CDOTA_BaseNPC *v9; // rax
  float m_flHullRadius; // [rsp+Ch] [rbp-34h]
  Vector vNewLocation; // [rsp+10h] [rbp-30h] BYREF
  Vector v12; // 0:xmm0_8.8,8:xmm1_4.4

  if ( CDOTA_ProjectileManager::IsValidProjectile(&g_DOTAProjectileManager, this->m_nProjectileID) )
  {
    CDOTA_ProjectileManager::GetLinearProjectileLocation(&g_DOTAProjectileManager, this->m_nProjectileID, &vNewLocation);
    Caster = CDOTA_Buff::GetCaster(this);
    v6 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
    m_flHullRadius = CDOTA_Buff::GetParent(this)->m_flHullRadius;
    Parent = CDOTA_Buff::GetParent(this);
    v12 = *CBaseEntity::GetAbsOrigin(Parent);
    CGridNav::DestroyTreesAroundPoint(&g_GridNav, 1, v6, v12, m_flHullRadius, v8);
    v9 = CDOTA_Buff::GetParent(this);
    CBaseEntity::SetAbsOrigin(v9, &vNewLocation);
  }
}


// CDOTA_Modifier_EarthSpirit_BoulderSmash::OnHorizontalMotionInterrupted  (line 932, @0x0000000002c1f850, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::StopSound, CDOTA_Buff::Destroy
// strings: "Hero_EarthSpirit.BoulderSmash.Target"
void __fastcall CDOTA_Modifier_EarthSpirit_BoulderSmash::OnHorizontalMotionInterrupted(
        CDOTA_Modifier_EarthSpirit_BoulderSmash *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  this->m_bInterrupted = 1;
  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(Parent, "Hero_EarthSpirit.BoulderSmash.Target");
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_EarthSpirit_BoulderSmash::GetOverrideAnimation  (line 943, @0x0000000002c1c040, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_EarthSpirit_BoulderSmash::GetOverrideAnimation(
        CDOTA_Modifier_EarthSpirit_BoulderSmash *const this,
        const CModifierParams *const params)
{
  return 0x44BC800000000001uLL;
}


// CDOTA_Modifier_EarthSpirit_BoulderSmash::OnTeleported  (line 950, @0x0000000002c2ec90, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Unit, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_EarthSpirit_BoulderSmash::OnTeleported(
        CDOTA_Modifier_EarthSpirit_BoulderSmash *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  uint32 v8; // eax
  CDOTA_BaseNPC *v9; // r13
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx

  m_pInstance = 0;
  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[params->hunit.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetCaster(this) == m_pInstance )
    goto LABEL_14;
  v8 = params->hunit.m_Index;
  v9 = 0;
  if ( v8 + 2 > 1 )
  {
    v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v10 != 0 )
    {
      v11 = &v10[params->hunit.m_Index & 0x1FF];
      if ( v11 != 0 && v8 == v11->m_EHandle.m_Index )
        v9 = v11->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) == v9 )
LABEL_14:
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


// CDOTA_Ability_EarthSpirit_RollingBoulder::~CDOTA_Ability_EarthSpirit_RollingBoulder  (line 968, @0x0000000002c98240, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_EarthSpirit_RollingBoulder::~CDOTA_Ability_EarthSpirit_RollingBoulder(
        CDOTA_Ability_EarthSpirit_RollingBoulder *const this)
{
  this->_vptr_IHandleEntity = &off_45A3D50;
  this->_vptr_CHorizontalMotionController = &off_45A47D8;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_EarthSpirit_RollingBoulder::~CDOTA_Ability_EarthSpirit_RollingBoulder  (line 968, @0x0000000002c98270, libserver.so)  // inlines: ~CDOTA_Ability_EarthSpirit_RollingBoulder
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_EarthSpirit_RollingBoulder::~CDOTA_Ability_EarthSpirit_RollingBoulder(
        CDOTA_Ability_EarthSpirit_RollingBoulder *const this)
{
  this->_vptr_IHandleEntity = &off_45A3D50;
  this->_vptr_CHorizontalMotionController = &off_45A47D8;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_EarthSpirit_RollingBoulder::Schema_DynamicBinding  (line 970, @0x0000000002c881e0, libserver.so)
// globals: CDOTA_Ability_EarthSpirit_RollingBoulder::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_EarthSpirit_RollingBoulder::Schema_DynamicBinding(
        const CDOTA_Ability_EarthSpirit_RollingBoulder *const this)
{
  return CDOTA_Ability_EarthSpirit_RollingBoulder::s_pSchemaBinding;
}


// CDOTA_Ability_EarthSpirit_RollingBoulder::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 970, @0x0000000002c88200, libserver.so)
// globals: CDOTA_Ability_EarthSpirit_RollingBoulder::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_EarthSpirit_RollingBoulder::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_EarthSpirit_RollingBoulder::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_EarthSpirit_RollingBoulder::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_EarthSpirit_RollingBoulder::CEntityInstanceEntityClass::DestructInstance  (line 970, @0x0000000002c88210, libserver.so)  // inlines: Destruct<CDOTA_Ability_EarthSpirit_RollingBoulder>
void __fastcall CDOTA_Ability_EarthSpirit_RollingBoulder::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_EarthSpirit_RollingBoulder::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_EarthSpirit_RollingBoulder::CEntityInstanceEntityClass::FreeInstance  (line 970, @0x0000000002c88230, libserver.so)
void __fastcall CDOTA_Ability_EarthSpirit_RollingBoulder::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_EarthSpirit_RollingBoulder::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_EarthSpirit_RollingBoulder::CEntityInstanceEntityClass::CanAllocate  (line 970, @0x0000000002c88250, libserver.so)
bool __fastcall CDOTA_Ability_EarthSpirit_RollingBoulder::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_EarthSpirit_RollingBoulder::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_EarthSpirit_RollingBoulder::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 970, @0x0000000002c88260, libserver.so)
// globals: CDOTA_Ability_EarthSpirit_RollingBoulder::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_EarthSpirit_RollingBoulder::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_EarthSpirit_RollingBoulder::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_EarthSpirit_RollingBoulder::s_pSchemaBinding;
}


// CDOTA_Ability_EarthSpirit_RollingBoulder::CEntityInstanceEntityClass::AllocateInstance  (line 970, @0x0000000002c8f820, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_EarthSpirit_RollingBoulder::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_EarthSpirit_RollingBoulder::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1016);
  memset(v1, 0, 0x3F8u);
  return v1;
}


// CDOTA_Ability_EarthSpirit_RollingBoulder::CEntityInstanceEntityClass::ConstructInstance  (line 970, @0x0000000002c94920, libserver.so)  // inlines: CDOTA_Ability_EarthSpirit_RollingBoulder, CHorizontalMotionController, Construct<CDOTA_Ability_EarthSpirit_RollingBoulder>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_EarthSpirit_RollingBoulder::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_EarthSpirit_RollingBoulder::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 230) = 2;
    *p = &off_45A3D50;
    *(p + 114) = &off_45A47D8;
  }
  return p;
}


// CDOTA_Ability_EarthSpirit_RollingBoulder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 970, @0x0000000002ca1df0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_EarthSpirit_RollingBoulder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_EarthSpirit_RollingBoulder::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_EarthSpirit_RollingBoulder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 970, @0x0000000002ca1e10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_EarthSpirit_RollingBoulder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_EarthSpirit_RollingBoulder::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_EarthSpirit_RollingBoulder::GetEntityClassInternal  (line 970, @0x0000000002cb9d20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "earth_spirit_rolling_boulder", "CDOTA_Ability_EarthSpirit_RollingBoulder"
// globals: `guard variable for'CDOTA_Ability_EarthSpirit_RollingBoulder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_RollingBoulderClass, CDOTA_Ability_EarthSpirit_RollingBoulder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_RollingBoulderClass, __dso_handle, CDOTA_Ability_EarthSpirit_RollingBoulder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_EarthSpirit_RollingBoulder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_RollingBoulderClassInfo, CDOTA_Ability_EarthSpirit_RollingBoulder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_RollingBoulderClassInfo
CEntityClass *__cdecl CDOTA_Ability_EarthSpirit_RollingBoulder::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_EarthSpirit_RollingBoulder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_RollingBoulderClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_EarthSpirit_RollingBoulder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_RollingBoulderClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_EarthSpirit_RollingBoulder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_RollingBoulderClass);
    CDOTA_Ability_EarthSpirit_RollingBoulder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_RollingBoulderClass._vptr_CEntityClass = off_45A3CD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_EarthSpirit_RollingBoulder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_RollingBoulderClass);
    __cxa_atexit(
      CDOTA_Ability_EarthSpirit_RollingBoulder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_EarthSpirit_RollingBoulder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_RollingBoulderClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_EarthSpirit_RollingBoulderClass != 0 )
    return &CDOTA_Ability_EarthSpirit_RollingBoulder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_RollingBoulderClass;
  if ( `guard variable for'CDOTA_Ability_EarthSpirit_RollingBoulder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_RollingBoulderClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_EarthSpirit_RollingBoulder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_RollingBoulderClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_EarthSpirit_RollingBoulder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_RollingBoulderClassInfo,
      "CDOTA_Ability_EarthSpirit_RollingBoulder",
      "earth_spirit_rolling_boulder",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_EarthSpirit_RollingBoulder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_RollingBoulderClassInfo);
  }
  CDOTA_Ability_EarthSpirit_RollingBoulder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_RollingBoulderClass.m_pClassInfo = &CDOTA_Ability_EarthSpirit_RollingBoulder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_RollingBoulderClassInfo;
  CDOTA_Ability_EarthSpirit_RollingBoulder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_RollingBoulderClass.m_pBaseClassInfo = CDOTA_Ability_EarthSpirit_RollingBoulder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_RollingBoulderClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_EarthSpirit_RollingBoulderClass = &CDOTA_Ability_EarthSpirit_RollingBoulder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_RollingBoulderClass;
  CDOTA_Ability_EarthSpirit_RollingBoulder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_RollingBoulderClassInfo.m_pClass = &CDOTA_Ability_EarthSpirit_RollingBoulder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_RollingBoulderClass;
  CDOTA_Ability_EarthSpirit_RollingBoulder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_RollingBoulderClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_EarthSpirit_RollingBoulderClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_EarthSpirit_RollingBoulder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_RollingBoulderClass;
}


// CDOTA_Ability_EarthSpirit_RollingBoulder::YouForgotToImplementOrDeclareServerClass  (line 1015, @0x0000000002c1c060, libserver.so)
int __fastcall CDOTA_Ability_EarthSpirit_RollingBoulder::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_EarthSpirit_RollingBoulder *const this)
{
  return 0;
}


// CDOTA_Ability_EarthSpirit_RollingBoulder::GetServerClass  (line 1015, @0x0000000002c35470, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_EarthSpirit_RollingBoulder::GetServerClass(
        CDOTA_Ability_EarthSpirit_RollingBoulder *const this)
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


// CDOTA_Ability_EarthSpirit_RollingBoulder::CastFilterResult  (line 1024, @0x0000000002c1f580, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_earth_spirit_rolling_boulder_caster"
int __fastcall CDOTA_Ability_EarthSpirit_RollingBoulder::CastFilterResult(
        CDOTA_Ability_EarthSpirit_RollingBoulder *const this,
        const Vector *const vLocation)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  return CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_earth_spirit_rolling_boulder_caster", 0) != 0 ? 0x17 : 0;
}


// CDOTA_Ability_EarthSpirit_RollingBoulder::GetCustomCastError  (line 1037, @0x0000000002c1c070, libserver.so)
// strings: "dota_hud_error_earth_spirit_already_bouldering"
const char *__fastcall CDOTA_Ability_EarthSpirit_RollingBoulder::GetCustomCastError(
        CDOTA_Ability_EarthSpirit_RollingBoulder *const this,
        const Vector *const vLocation)
{
  return "dota_hud_error_earth_spirit_already_bouldering";
}


// CDOTA_Ability_EarthSpirit_RollingBoulder::UpdateHorizontalMotion  (line 1044, @0x0000000002c3d550, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CBaseEntity::GetAbsOrigin, CGridNav::DestroyTreesAroundPoint, CBaseEntity::SetAbsOrigin, CDOTA_Ability_EarthSpirit_RollingBoulder::DestroyBoulderEffects
// strings: "modifier_earth_spirit_rolling_boulder_caster"
void __fastcall CDOTA_Ability_EarthSpirit_RollingBoulder::UpdateHorizontalMotion(
        CDOTA_Ability_EarthSpirit_RollingBoulder *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v7; // rax
  unsigned int v8; // r13d
  CDOTA_BaseNPC *v9; // rax
  float v10; // xmm3_4
  float m_flHullRadius; // [rsp+Ch] [rbp-24h]
  Vector v12; // 0:xmm0_8.8,8:xmm1_4.4

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_earth_spirit_rolling_boulder_caster", 0) != 0 )
  {
    v7 = CDOTABaseAbility::GetCaster(this);
    v8 = (*(v7->_vptr_IHandleEntity + 414))(v7);
    m_flHullRadius = CDOTABaseAbility::GetCaster(this)->m_flHullRadius;
    v9 = CDOTABaseAbility::GetCaster(this);
    v12 = *CBaseEntity::GetAbsOrigin(v9);
    CGridNav::DestroyTreesAroundPoint(&g_GridNav, 1, v8, v12, m_flHullRadius, v10);
    CBaseEntity::SetAbsOrigin(me, &this->m_vProjectileLocation);
  }
  if ( (CDOTABaseAbility::GetCaster(this)->m_nUnitState64.m_Value & 0x20) != 0
    || (CDOTABaseAbility::GetCaster(this)->m_nUnitState64.m_Value & 0x40) != 0 )
  {
    CDOTA_Ability_EarthSpirit_RollingBoulder::DestroyBoulderEffects(this);
  }
}


// CDOTA_Ability_EarthSpirit_RollingBoulder::OnHorizontalMotionInterrupted  (line 1064, @0x0000000002c3d390, libserver.so)
// calls: CDOTA_Ability_EarthSpirit_RollingBoulder::DestroyBoulderEffects
void __fastcall CDOTA_Ability_EarthSpirit_RollingBoulder::OnHorizontalMotionInterrupted(
        CDOTA_Ability_EarthSpirit_RollingBoulder *const this)
{
  CDOTA_Ability_EarthSpirit_RollingBoulder::DestroyBoulderEffects(this);
}


// CDOTA_Ability_EarthSpirit_RollingBoulder::OnSpellStart  (line 1074, @0x0000000002c675a0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, Vector, VectorMultiply, VectorNormalize2D, VectorSubtract, operator*, operator-, operator=
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorPosition, VectorNormalize, VectorAngles, CBaseEntity::SetAbsAngles, CDOTA_BaseNPC::StartGesture, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, CDOTABaseAbility::CreateAbilityParticleEffect (22 total)
// strings: "rock_speed", "rock_distance", "modifier_earth_spirit_rolling_boulder_caster", "particles/units/heroes/hero_earth_spirit/espirit_rollingboulder.vpcf", "Hero_EarthSpirit.RollingBoulder.Cast", "Hero_EarthSpirit.RollingBoulder.Loop"
void __fastcall CDOTA_Ability_EarthSpirit_RollingBoulder::OnSpellStart(
        CDOTA_Ability_EarthSpirit_RollingBoulder *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // r12
  vec_t v6; // xmm0_4
  vec_t v7; // xmm1_4
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  float speed; // xmm0_4
  vec_t v11; // xmm2_4
  vec_t v12; // xmm1_4
  vec_t v13; // xmm0_4
  CDOTA_BaseNPC *v14; // r13
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  const Vector *v18; // r13
  CDOTA_BaseNPC *v19; // r15
  int m_nFXIndex; // r14d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v22; // rax
  float rock_speed; // xmm1_4
  float v24; // xmm2_4
  CDOTA_ParticleManager *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  const QAngle *AbsAngles; // rax
  QAngle faceAngle; // [rsp+10h] [rbp-80h] BYREF
  double v31; // [rsp+20h] [rbp-70h]
  float v32; // [rsp+28h] [rbp-68h]
  Vector CursorPosition; // [rsp+30h] [rbp-60h]
  KeyValues kv; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v35; // [rsp+58h] [rbp-38h]
  Vector v36; // 0:kr14_12.12

  this->m_bUsedStone = 0;
  this->m_nFXIndex = -1;
  v35 = __readfsqword(0x28u);
  this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  this->speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
  this->rock_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "rock_speed", -1, 0);
  this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
  this->distance = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "distance", -1, 0);
  this->rock_distance = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "rock_distance", -1, 0);
  this->slow_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "slow_duration", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  this->m_vProjectileLocation = *CBaseEntity::GetAbsOrigin(Caster);
  v3 = CDOTABaseAbility::GetCaster(this);
  this->m_vStartingLocation = *CBaseEntity::GetAbsOrigin(v3);
  v4 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  v6 = CursorPosition.y - AbsOrigin->y;
  v7 = CursorPosition.x - AbsOrigin->x;
  this->m_vDir.z = 0.0;
  this->m_vDir.y = v6;
  this->m_vDir.x = v7;
  if ( VectorNormalize(&this->m_vDir) < 0.0099999998 )
  {
    v28 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v28);
    AngleVectors(AbsAngles, &this->m_vDir, 0, 0);
  }
  VectorAngles(&this->m_vDir, &faceAngle);
  v8 = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::SetAbsAngles(v8, &faceAngle);
  v9 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v9, 1652, 0.0, 0.0, 0, 0, 1.0);
  speed = this->speed;
  v11 = this->m_vDir.y * speed;
  v12 = this->m_vDir.z * speed;
  v13 = speed * this->m_vDir.x;
  this->m_vVel.y = v11;
  this->m_vVel.z = v12;
  this->m_vVel.x = v13;
  KeyValues::KeyValues(&kv, "modifier_earth_spirit_rolling_boulder_caster");
  v14 = CDOTABaseAbility::GetCaster(this);
  v15 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v15, v14, this, "modifier_earth_spirit_rolling_boulder_caster", &kv, 0);
  this->m_boulderSetposBool = 0;
  v16 = CDOTABaseAbility::GetCaster(this);
  this->m_nFXIndex = CDOTABaseAbility::CreateAbilityParticleEffect(
                       this,
                       "particles/units/heroes/hero_earth_spirit/espirit_rollingboulder.vpcf",
                       2,
                       v16,
                       0);
  v17 = CDOTABaseAbility::GetCaster(this);
  v18 = CBaseEntity::GetAbsOrigin(v17);
  v19 = CDOTABaseAbility::GetCaster(this);
  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, m_nFXIndex, 0, v19, 1, 0, *v18, 1);
  v36 = CDOTABaseAbility::GetCursorPosition(this);
  *&CursorPosition.x = *&v36.x;
  LODWORD(v18) = this->m_nFXIndex;
  CursorPosition.z = v36.z;
  v22 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v22, v18, 1, *&CursorPosition.x, CursorPosition.z);
  rock_speed = this->rock_speed;
  v24 = this->speed;
  LODWORD(v18) = this->m_nFXIndex;
  HIDWORD(v31) = LODWORD(this->distance);
  *&v31 = v24;
  v32 = rock_speed;
  v25 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v25, v18, 2, v31, v32);
  v26 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_EarthSpirit.RollingBoulder.Cast", v26);
  v27 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v27, "Hero_EarthSpirit.RollingBoulder.Loop", 0.0, 0, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_EarthSpirit_RollingBoulder::CreateBoulder  (line 1125, @0x0000000002c3cfa0, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=, sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetCaster, CDOTALocomotor::ApplyHorizontalMotionController, CDOTA_BaseNPC::RemoveGesture, CDOTA_BaseNPC::StartGesture, CBaseEntity::GetAbsOrigin, CDOTA_ProjectileManager::CreateLinearProjectile
// callers: CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster::OnIntervalThink
void __fastcall CDOTA_Ability_EarthSpirit_RollingBoulder::CreateBoulder(
        CDOTA_Ability_EarthSpirit_RollingBoulder *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTALocomotor *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // rax
  vec_t v10; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  CDOTA_BaseNPC *v12; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v14; // cx
  float distance; // [rsp+Ch] [rbp-94h]
  sLinearProjectileCreateInfo info; // [rsp+10h] [rbp-90h] BYREF

  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = (*(Caster->_vptr_IHandleEntity + 376))(Caster);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v3, &this->CHorizontalMotionController, 0) )
  {
    v4 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveGesture(v4, 1652);
    v5 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::StartGesture(v5, 1653, 0.1, 0.1, 9, 0, 1.0);
    info.hSource.m_Index = -1;
    info.pszEffectName = 0;
    info.fDistance = 0.0;
    info.fStartRadius = 0.0;
    y = vec3_origin.y;
    info.fEndRadius = 0.0;
    z = vec3_origin.z;
    info.vSpawnOrigin.x = vec3_origin.x;
    info.vSpawnOrigin.y = y;
    info.vVelocity.x = vec3_origin.x;
    info.vVelocity.y = y;
    info.vAcceleration.x = vec3_origin.x;
    info.vAcceleration.y = y;
    info.vSpawnOrigin.z = z;
    info.vVelocity.z = z;
    info.vAcceleration.z = z;
    info.bHasFrontalCone = 1;
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
    v8 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
    distance = this->distance;
    info.vSpawnOrigin.x = AbsOrigin->x;
    info.vSpawnOrigin.y = AbsOrigin->y;
    v10 = AbsOrigin->z;
    vptr_IHandleEntity = this->_vptr_IHandleEntity;
    info.vSpawnOrigin.z = v10;
    info.vVelocity = this->m_vVel;
    info.fDistance = vptr_IHandleEntity[228](this) + distance;
    info.fStartRadius = this->radius;
    info.fEndRadius = info.fStartRadius;
    v12 = CDOTABaseAbility::GetCaster(this);
    if ( v12 != 0 && (m_pEntity = v12->m_pEntity) != 0 )
    {
      v14 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v14 & 0x7FFF;
    }
    else
    {
      info.hSource.m_Index = -1;
    }
    info.iUnitTargetTeam = 3;
    info.iUnitTargetType = 35;
    info.iUnitTargetFlags = &stru_40050;
    info.bHasFrontalCone = 1;
    this->m_nProjectileID = CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  }
}


// CDOTA_Ability_EarthSpirit_RollingBoulder::OnProjectileHit  (line 1153, @0x0000000002c621a0, libserver.so)  // inlines: FStrEq, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetHero, GetInstance, GetTeamNumber, GetUnitName, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsRealHero, IsValid, Length2D, LookupEntity, NormalizeInPlace, String, ToCStr, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorMultiply, VectorSubtract, _V_strcmp, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator*, operator-, operator[]
// calls: CDOTA_Ability_EarthSpirit_RollingBoulder::DestroyBoulderEffects, __stack_chk_fail, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, ApplyDamage, CDOTA_BaseNPC::UnitEmitSound, CBaseEntity::GetAbsOrigin, VectorNormalize, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, FindClearSpaceForUnit (27 total)
// strings: "special_bonus_unique_earth_spirit", "Hero_EarthSpirit.RollingBoulder.Damage", "Hero_EarthSpirit.RollingBoulder.Target", "modifier_earthspirit_petrify", "particles/units/heroes/hero_earth_spirit/espirit_rollingboulder_stone.vpcf", "Hero_EarthSpirit.RollingBoulder.Stone" (9 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
_BOOL8 __fastcall CDOTA_Ability_EarthSpirit_RollingBoulder::OnProjectileHit(
        CDOTA_Ability_EarthSpirit_RollingBoulder *const this,
        _DWORD *hTarget,
        const Vector *const vLocation)
{
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx
  _BOOL4 m_bUsedStone; // r12d
  CEntityInstance *m_pInstance; // r15
  char m_CScriptComponent_high; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  const Vector *AbsOrigin; // rax
  float x; // r13d
  float y; // r12d
  const Vector *v18; // rax
  int m_nFXIndex; // r14d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  const char *ReplacementSound; // rax
  float v24; // xmm0_4
  float v25; // xmm1_4
  int AbilityParticleEffect; // r13d
  CDOTA_BaseNPC *v27; // r14
  CDOTA_ParticleManager *v28; // rax
  CDOTA_ParticleManager *v29; // rax
  float v30; // xmm1_4
  int v31; // eax
  float rock_speed; // xmm0_4
  int m_nProjectileID; // esi
  vec_t v34; // xmm2_4
  vec_t v35; // xmm1_4
  vec_t v36; // xmm0_4
  CDOTA_BaseNPC *v37; // rax
  CDOTA_BaseNPC *v38; // rax
  CDOTA_BaseNPC_Hero *v39; // rdi
  float v40; // xmm1_4
  CDOTA_BaseNPC *v41; // rax
  __int64 v42; // r13
  int v43; // r12d
  CHandle<CDOTA_BaseNPC_Hero> *v44; // rdx
  uint32 m_Index; // eax
  __int16 v46; // cx
  CEntityIdentity *v47; // rdx
  CEntityIdentity *v48; // rdx
  CEntityInstance *v49; // r14
  int (**vptr_IHandleEntity)(...); // rax
  CDOTA_BaseNPC *v51; // rax
  const char *m_pAsString; // rsi
  float z; // [rsp+8h] [rbp-98h]
  float v54; // [rsp+Ch] [rbp-94h]
  float flDistance; // [rsp+10h] [rbp-90h]
  float flDistanceb; // [rsp+10h] [rbp-90h]
  float flDistancea; // [rsp+10h] [rbp-90h]
  float v58; // [rsp+18h] [rbp-88h]
  char v59; // [rsp+18h] [rbp-88h]
  unsigned __int8 v60; // [rsp+1Ch] [rbp-84h]
  float rock_distance; // [rsp+1Ch] [rbp-84h]
  Vector vDir; // [rsp+30h] [rbp-70h] BYREF
  Vector vPos; // [rsp+40h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v65; // [rsp+68h] [rbp-38h]

  v65 = __readfsqword(0x28u);
  if ( (*hTarget + 2) <= 1
    || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F]) == 0
    || (v6 = &v5[*hTarget & 0x1FF]) == 0
    || *hTarget != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
    || (v60 = BYTE3(m_pInstance[7]._vptr_IHandleEntity)) == 0 )
  {
    CDOTA_Ability_EarthSpirit_RollingBoulder::DestroyBoulderEffects(this);
    return 0;
  }
  if ( SBYTE3(m_pInstance[58]._vptr_IHandleEntity) >= 0 )
  {
    m_bUsedStone = this->m_bUsedStone;
    if ( m_bUsedStone )
      goto LABEL_12;
    goto LABEL_24;
  }
  if ( CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_earthspirit_petrify", 0) == 0 )
    return 0;
  m_bUsedStone = this->m_bUsedStone;
  if ( m_bUsedStone )
  {
LABEL_12:
    m_CScriptComponent_high = HIBYTE(m_pInstance[7].m_CScriptComponent);
    if ( m_CScriptComponent_high != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value
      && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0
      && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 1) == 0 )
    {
      flDistance = this->damage;
      Caster = CDOTABaseAbility::GetCaster(this);
      AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_earth_spirit", 0);
      if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
        flDistance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1) + flDistance;
      v13 = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(v13, m_pInstance, this, flDistance, 2, 0);
      CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_EarthSpirit.RollingBoulder.Damage", 0.0, 0, 0);
      if ( this->m_bUsedStone )
      {
        KeyValues::KeyValues(&kv, "modifier_earth_spirit_rolling_boulder_slow");
        KeyValues::SetFloat(&kv, "duration", v40);
        v41 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(m_pInstance, v41, this, "modifier_earth_spirit_rolling_boulder_slow", &kv, 0);
        if ( CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_earth_spirit_magnetize", 0) != 0
          && g_HeroList.m_hHeroList.m_Size > 0 )
        {
          v42 = 0;
          v43 = 0;
          do
          {
            v44 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v42];
            m_Index = v44->m_Index;
            if ( v44->m_Index + 2 > 1 )
            {
              v46 = v44->m_Index;
              v47 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v44->m_Index) >> 9) & 0x3F];
              if ( v47 != 0 )
              {
                v48 = &v47[v46 & 0x1FF];
                if ( v48 != 0 && m_Index == v48->m_EHandle.m_Index )
                {
                  v49 = v48->m_pInstance;
                  if ( v48->m_pInstance != 0 && (v49[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                  {
                    vptr_IHandleEntity = v49[58]._vptr_IHandleEntity;
                    if ( (BYTE1(vptr_IHandleEntity) & 2) == 0
                      && LOBYTE(v49[71]._vptr_IHandleEntity) == 0
                      && (BYTE1(vptr_IHandleEntity) & 1) == 0
                      && LOBYTE(v49[71].m_pEntity) == 0 )
                    {
                      v59 = HIBYTE(v49[7].m_CScriptComponent);
                      if ( v59 != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value
                        && (*(v49->_vptr_IHandleEntity + 408))(v49) != 0
                        && (*(v49->_vptr_IHandleEntity + 390))(v49) == 0
                        && CDOTA_BaseNPC::FindModifierByName(v49, "modifier_earth_spirit_magnetize", 0) != 0 )
                      {
                        v51 = CDOTABaseAbility::GetCaster(this);
                        CDOTA_BaseNPC::AddNewModifier(
                          v49,
                          v51,
                          this,
                          "modifier_earth_spirit_rolling_boulder_slow",
                          &kv,
                          0);
                      }
                    }
                  }
                }
              }
            }
            ++v43;
            ++v42;
          }
          while ( v43 < g_HeroList.m_hHeroList.m_Size );
        }
        KeyValues::~KeyValues(&kv);
      }
      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
      {
        v14 = CDOTABaseAbility::GetCaster(this);
        AbsOrigin = CBaseEntity::GetAbsOrigin(v14);
        x = AbsOrigin->x;
        y = AbsOrigin->y;
        z = AbsOrigin->z;
        v18 = CBaseEntity::GetAbsOrigin(m_pInstance);
        v58 = v18->x;
        flDistanceb = v18->y;
        v54 = v18->z;
        vDir.x = x - v18->x;
        vDir.z = 0.0;
        vDir.y = y - flDistanceb;
        VectorNormalize(&vDir);
        m_nFXIndex = this->m_nFXIndex;
        this->m_boulderSetposBool = 1;
        ParticleManager = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControl(
          ParticleManager,
          m_nFXIndex,
          3,
          COERCE_DOUBLE(__PAIR64__(LODWORD(y), LODWORD(x))),
          z);
        vPos.y = flDistanceb - (vDir.y * 80.0);
        vPos.z = v54 - (vDir.z * 80.0);
        vPos.x = v58 - (80.0 * vDir.x);
        v21 = CDOTABaseAbility::GetCaster(this);
        FindClearSpaceForUnit(v21, vPos, 1);
        v22 = CDOTABaseAbility::GetCaster(this);
        ReplacementSound = CDOTA_BaseNPC::FindReplacementSound(v22, "Hero_EarthSpirit.RollingBoulder.Target");
        CDOTA_BaseNPC::UnitEmitSound(m_pInstance, ReplacementSound, 0.0, 0, 0);
        CDOTA_Ability_EarthSpirit_RollingBoulder::DestroyBoulderEffects(this);
        return v60;
      }
    }
    return 0;
  }
LABEL_24:
  if ( CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_earthspirit_petrify", 0) == 0 )
  {
    if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x193) != 0 )
      goto LABEL_12;
    m_pAsString = m_pInstance[70].m_iszPrivateVScripts.u.m_pAsString;
    if ( m_pAsString == 0
      || m_pAsString != "npc_dota_earth_spirit_stone" && strcmp(m_pAsString, "npc_dota_earth_spirit_stone") != 0 )
    {
      goto LABEL_12;
    }
  }
  v24 = this->m_vStartingLocation.x - vLocation->x;
  v25 = this->m_vStartingLocation.y - vLocation->y;
  this->m_bUsedStone = 1;
  flDistancea = fsqrt((v24 * v24) + (v25 * v25));
  if ( CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_earthspirit_petrify", 0) != 0 )
    CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, "modifier_earthspirit_petrify");
  else
    CDOTA_BaseNPC::ForceKill(m_pInstance, 0);
  AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                            this,
                            "particles/units/heroes/hero_earth_spirit/espirit_rollingboulder_stone.vpcf",
                            2,
                            0,
                            0);
  v27 = CDOTABaseAbility::GetCaster(this);
  v28 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v28, AbilityParticleEffect, 0, v27, 1, 0, vec3_invalid, 1);
  v29 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v29, AbilityParticleEffect);
  CDOTA_ProjectileManager::UpdateLinearProjectileSpeed(&g_DOTAProjectileManager, this->m_nProjectileID, 2.0, v30);
  rock_distance = this->rock_distance;
  v31 = (*(this->_vptr_IHandleEntity + 228))(this);
  rock_speed = this->rock_speed;
  m_nProjectileID = this->m_nProjectileID;
  v34 = this->m_vDir.y * rock_speed;
  v35 = this->m_vDir.z * rock_speed;
  v36 = rock_speed * this->m_vDir.x;
  vPos.y = v34;
  vPos.z = v35;
  vPos.x = v36;
  CDOTA_ProjectileManager::UpdateLinearProjectileDirection(
    &g_DOTAProjectileManager,
    m_nProjectileID,
    &vPos,
    (v31 + rock_distance) - flDistancea);
  v37 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v37, "Hero_EarthSpirit.RollingBoulder.Stone", 0.0, 0, 0);
  v38 = CDOTABaseAbility::GetCaster(this);
  if ( v38 != 0 && (v38->m_iUnitType & 1) != 0 )
    v39 = v38;
  else
    v39 = 0;
  EconEntity_OnOwnerKillEaterEvent(
    v39,
    0,
    kill_eater_event_t::kKillEaterEvent_EarthSpirit_SpeedingBoulders,
    1,
    INVALID_ITEM_DEF_INDEX);
  return m_bUsedStone;
}


// CDOTA_Ability_EarthSpirit_RollingBoulder::OnProjectileThink  (line 1266, @0x0000000002c1c080, libserver.so)  // inlines: operator=
void __fastcall CDOTA_Ability_EarthSpirit_RollingBoulder::OnProjectileThink(
        CDOTA_Ability_EarthSpirit_RollingBoulder *const this,
        const Vector *const vLocation)
{
  this->m_vProjectileLocation = *vLocation;
}


// CDOTA_Ability_EarthSpirit_RollingBoulder::DestroyBoulderEffects  (line 1275, @0x0000000002c3d230, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveGesture, CDOTA_BaseNPC::StartGesture, CDOTALocomotor::RemoveHorizontalMotionController, CDOTA_BaseNPC::RemoveModifierByName, CBaseEntity::StopSound, CDOTA_BaseNPC::UnitEmitSound, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_ParticleManager::SetParticleControlEnt
// callers: CDOTA_Ability_EarthSpirit_RollingBoulder::OnHorizontalMotionInterrupted, CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster::OnDestroy, CDOTA_Unit_Hero_EarthSpirit::Event_Killed, CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster::OnDeath, CDOTA_Ability_EarthSpirit_RollingBoulder::UpdateHorizontalMotion, CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster::OnStateChanged, CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster::OnIntervalThink, CDOTA_Ability_EarthSpirit_RollingBoulder::OnProjectileHit
// strings: "modifier_earth_spirit_rolling_boulder_caster", "Hero_EarthSpirit.RollingBoulder.Loop", "Hero_EarthSpirit.RollingBoulder.Destroy"
void __fastcall CDOTA_Ability_EarthSpirit_RollingBoulder::DestroyBoulderEffects(
        CDOTA_Ability_EarthSpirit_RollingBoulder *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTALocomotor *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  int v12; // r12d
  const CBaseAnimating *v13; // r13
  CDOTA_ParticleManager *ParticleManager; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveGesture(Caster, 1653);
  v3 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v3, 1654, 0.2, 0.0, 0, 0, 1.0);
  v4 = CDOTABaseAbility::GetCaster(this);
  v5 = (*(v4->_vptr_IHandleEntity + 376))(v4);
  CDOTALocomotor::RemoveHorizontalMotionController(v5, &this->CHorizontalMotionController);
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v6, "modifier_earth_spirit_rolling_boulder_caster");
  v7 = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::StopSound(v7, "Hero_EarthSpirit.RollingBoulder.Loop");
  v8 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v8, "Hero_EarthSpirit.RollingBoulder.Destroy", 0.0, 0, 0);
  m_nFXIndex = this->m_nFXIndex;
  if ( m_nFXIndex != -1 )
  {
    if ( !this->m_boulderSetposBool )
    {
      v11 = CDOTABaseAbility::GetCaster(this);
      v12 = this->m_nFXIndex;
      v13 = v11;
      ParticleManager = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, v12, 3, v13, 1, 0, vec3_invalid, 1);
      m_nFXIndex = this->m_nFXIndex;
    }
    v10 = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(v10, m_nFXIndex, 0);
    this->m_nFXIndex = -1;
  }
}


// CDOTA_Ability_EarthSpirit_RollingBoulder::GetAbilityDamageToTargetOverInterval  (line 1301, @0x0000000002c62980, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_EarthSpirit_RollingBoulder::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_EarthSpirit_RollingBoulder *const this,
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


// CDOTA_Ability_EarthSpirit_RollingBoulder::GetSlowDuration  (line 1311, @0x0000000002c56010, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_EarthSpirit_RollingBoulder::GetSlowDuration(
        CDOTA_Ability_EarthSpirit_RollingBoulder *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "slow_duration", -1, 1);
}


// CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster::~CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster  (line 1320, @0x0000000002c92d10, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster::~CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster(
        CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster *const this)
{
  this->_vptr_CDOTA_Buff = &off_45A4870;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster::~CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster  (line 1320, @0x0000000002c92d30, libserver.so)  // inlines: ~CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster::~CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster(
        CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster *const this)
{
  this->_vptr_CDOTA_Buff = &off_45A4870;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster::IsHidden  (line 1334, @0x0000000002c88270, libserver.so)
bool __fastcall CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster::IsHidden(
        CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster *const this)
{
  return 1;
}


// CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster::IsPurgable  (line 1336, @0x0000000002c88280, libserver.so)
bool __fastcall CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster::IsPurgable(
        CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster *const this)
{
  return 0;
}


// CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster::OnCreated  (line 1343, @0x0000000002c596c0, libserver.so)  // inlines: DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster::OnCreated(
        CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4
  float LevelSpecialValue; // xmm0_4

  Ability = CDOTA_Buff::GetAbility(this);
  LevelSpecialValue = 0.0;
  if ( Ability != 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "delay", -1, 0);
  CDOTA_Buff::StartIntervalThink(this, LevelSpecialValue, v4);
}


// CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster::OnIntervalThink  (line 1352, @0x0000000002c3d750, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, CDOTA_Ability_EarthSpirit_RollingBoulder::DestroyBoulderEffects, CDOTA_Ability_EarthSpirit_RollingBoulder::CreateBoulder, CDOTA_Buff::StartIntervalThink
// strings: "modifier_batrider_flaming_lasso"
void __fastcall CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster::OnIntervalThink(
        CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster *const this)
{
  CDOTA_Ability_EarthSpirit_RollingBoulder *Ability; // r12
  float v3; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    if ( CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_batrider_flaming_lasso", 0) != 0 )
    {
      CDOTA_Ability_EarthSpirit_RollingBoulder::DestroyBoulderEffects(Ability);
      return;
    }
    CDOTA_Ability_EarthSpirit_RollingBoulder::CreateBoulder(Ability);
  }
  CDOTA_Buff::StartIntervalThink(this, -1.0, v3);
}


// CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster::OnStateChanged  (line 1376, @0x0000000002c3d640, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindAbilityByName, __dynamic_cast, CDOTA_Ability_EarthSpirit_RollingBoulder::DestroyBoulderEffects, CDOTA_Buff::Destroy
// strings: "earth_spirit_rolling_boulder"
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CDOTA_Ability_EarthSpirit_RollingBoulder
ModifierVariant_t __fastcall CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster::OnStateChanged(
        CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *AbilityByName; // rdi
  CDOTA_Ability_EarthSpirit_RollingBoulder *v10; // rax

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
    || CDOTA_Buff::GetParent(this) != m_pInstance
    || (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x20) == 0
    && (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x40) == 0 )
  {
    return 1uLL;
  }
  Parent = CDOTA_Buff::GetParent(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Parent, "earth_spirit_rolling_boulder", 0);
  if ( AbilityByName != 0 )
  {
    v10 = __dynamic_cast(
            AbilityByName,
            &`typeinfo for'CDOTABaseAbility,
            &`typeinfo for'CDOTA_Ability_EarthSpirit_RollingBoulder,
            0);
    if ( v10 != 0 )
      CDOTA_Ability_EarthSpirit_RollingBoulder::DestroyBoulderEffects(v10);
  }
  CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


// CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster::CheckState  (line 1395, @0x0000000002c1c0b0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster::CheckState(
        CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x202000003uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFDFDFFFFFCLL;
}


// CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster::DeclareFunctions  (line 1407, @0x0000000002c1c0e0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster::OnStateChanged(CModifierParams const&)
void __fastcall CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster::DeclareFunctions(
        CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster *const this)
{
  this->m_Functions[138].__pfn = (&stru_10 + 697);
  this->m_Functions[138].__delta = 0;
  this->m_Functions[135].__pfn = CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster::OnStateChanged;
  this->m_Functions[135].__delta = 0;
}


// CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster::OnDeath  (line 1415, @0x0000000002c3d470, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindAbilityByName, __dynamic_cast, CDOTA_Ability_EarthSpirit_RollingBoulder::DestroyBoulderEffects
// strings: "earth_spirit_rolling_boulder"
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CDOTA_Ability_EarthSpirit_RollingBoulder
ModifierVariant_t __fastcall CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster::OnDeath(
        CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *AbilityByName; // rdi
  CDOTA_Ability_EarthSpirit_RollingBoulder *v9; // rax

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[params->hunit.m_Index & 0x1FF];
  if ( v4 == 0 || m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 )
    return 1uLL;
  if ( !m_pInstance->m_bIsDOTANPC )
    return 1uLL;
  Parent = CDOTA_Buff::GetParent(this);
  if ( Parent != m_pInstance )
    return 1uLL;
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Parent, "earth_spirit_rolling_boulder", 0);
  if ( AbilityByName == 0 )
    return 1uLL;
  v9 = __dynamic_cast(
         AbilityByName,
         &`typeinfo for'CDOTABaseAbility,
         &`typeinfo for'CDOTA_Ability_EarthSpirit_RollingBoulder,
         0);
  if ( v9 == 0 )
    return 1uLL;
  CDOTA_Ability_EarthSpirit_RollingBoulder::DestroyBoulderEffects(v9);
  return 1uLL;
}


// CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster::OnDestroy  (line 1434, @0x0000000002c3d3b0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindAbilityByName, __dynamic_cast, CDOTA_Ability_EarthSpirit_RollingBoulder::DestroyBoulderEffects
// strings: "earth_spirit_rolling_boulder"
// globals: `typeinfo for'CDOTA_Ability_EarthSpirit_RollingBoulder
void __fastcall CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster::OnDestroy(
        CDOTA_Modifier_EarthSpirit_RollingBoulder_Caster *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_Ability_EarthSpirit_RollingBoulder *v3; // rax

  Parent = CDOTA_Buff::GetParent(this);
  if ( Parent != 0 )
  {
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Parent, "earth_spirit_rolling_boulder", 0);
    if ( AbilityByName != 0 )
    {
      v3 = __dynamic_cast(
             AbilityByName,
             &`typeinfo for'CDOTABaseAbility,
             &`typeinfo for'CDOTA_Ability_EarthSpirit_RollingBoulder,
             0);
      if ( v3 != 0 )
        CDOTA_Ability_EarthSpirit_RollingBoulder::DestroyBoulderEffects(v3);
    }
  }
}


// CDOTA_Modifier_EarthSpirit_RollingBoulder_Slow::~CDOTA_Modifier_EarthSpirit_RollingBoulder_Slow  (line 1453, @0x0000000002c92cc0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_EarthSpirit_RollingBoulder_Slow::~CDOTA_Modifier_EarthSpirit_RollingBoulder_Slow(
        CDOTA_Modifier_EarthSpirit_RollingBoulder_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_45A4B90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_EarthSpirit_RollingBoulder_Slow::~CDOTA_Modifier_EarthSpirit_RollingBoulder_Slow  (line 1453, @0x0000000002c92ce0, libserver.so)  // inlines: ~CDOTA_Modifier_EarthSpirit_RollingBoulder_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_EarthSpirit_RollingBoulder_Slow::~CDOTA_Modifier_EarthSpirit_RollingBoulder_Slow(
        CDOTA_Modifier_EarthSpirit_RollingBoulder_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_45A4B90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_EarthSpirit_RollingBoulder_Slow::IsDebuff  (line 1458, @0x0000000002c88290, libserver.so)
bool __fastcall CDOTA_Modifier_EarthSpirit_RollingBoulder_Slow::IsDebuff(
        CDOTA_Modifier_EarthSpirit_RollingBoulder_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_EarthSpirit_RollingBoulder_Slow::GetStatusEffectName  (line 1463, @0x0000000002c882a0, libserver.so)
// strings: "particles/status_fx/status_effect_earth_spirit_boulderslow.vpcf"
const char *__fastcall CDOTA_Modifier_EarthSpirit_RollingBoulder_Slow::GetStatusEffectName(
        CDOTA_Modifier_EarthSpirit_RollingBoulder_Slow *const this)
{
  return "particles/status_fx/status_effect_earth_spirit_boulderslow.vpcf";
}


// CDOTA_Modifier_EarthSpirit_RollingBoulder_Slow::StatusEffectPriority  (line 1464, @0x0000000002c882b0, libserver.so)
int __fastcall CDOTA_Modifier_EarthSpirit_RollingBoulder_Slow::StatusEffectPriority(
        CDOTA_Modifier_EarthSpirit_RollingBoulder_Slow *const this)
{
  return 210;
}


// CDOTA_Modifier_EarthSpirit_RollingBoulder_Slow::OnCreated  (line 1476, @0x0000000002c70f50, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_EarthSpirit_RollingBoulder_Slow::OnCreated(
        CDOTA_Modifier_EarthSpirit_RollingBoulder_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->move_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "move_slow", -1, 0);
  else
    this->move_slow = 0;
}


// CDOTA_Modifier_EarthSpirit_RollingBoulder_Slow::DeclareFunctions  (line 1483, @0x0000000002c1c120, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_EarthSpirit_RollingBoulder_Slow::DeclareFunctions(
        CDOTA_Modifier_EarthSpirit_RollingBoulder_Slow *const this)
{
  this->m_Functions[13].__pfn = (&stru_10 + 697);
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_EarthSpirit_RollingBoulder_Slow::GetModifierMoveSpeedBonus_Percentage  (line 1489, @0x0000000002c1c140, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_EarthSpirit_RollingBoulder_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_EarthSpirit_RollingBoulder_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->move_slow;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_EarthSpirit_GeomagneticGrip_Debuff::~CDOTA_Modifier_EarthSpirit_GeomagneticGrip_Debuff  (line 1498, @0x0000000002c92c70, libserver.so)  // inlines: ~CDOTA_Modifier_Silence
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_EarthSpirit_GeomagneticGrip_Debuff::~CDOTA_Modifier_EarthSpirit_GeomagneticGrip_Debuff(
        CDOTA_Modifier_EarthSpirit_GeomagneticGrip_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_411E070;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_EarthSpirit_GeomagneticGrip_Debuff::~CDOTA_Modifier_EarthSpirit_GeomagneticGrip_Debuff  (line 1498, @0x0000000002c92c90, libserver.so)  // inlines: ~CDOTA_Modifier_EarthSpirit_GeomagneticGrip_Debuff, ~CDOTA_Modifier_Silence
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_EarthSpirit_GeomagneticGrip_Debuff::~CDOTA_Modifier_EarthSpirit_GeomagneticGrip_Debuff(
        CDOTA_Modifier_EarthSpirit_GeomagneticGrip_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_411E070;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_EarthSpirit_GeomagneticGrip_Debuff::OnCreated  (line 1506, @0x0000000002c208a0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::CreateBuffParticleEffect, CDOTA_Buff::AddParticle
// strings: "particles/units/heroes/hero_earth_spirit/espirit_bouldersmash_silence.vpcf"
void __fastcall CDOTA_Modifier_EarthSpirit_GeomagneticGrip_Debuff::OnCreated(
        CDOTA_Modifier_EarthSpirit_GeomagneticGrip_Debuff *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax
  int BuffParticleEffect; // eax

  if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 1) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                           this,
                           "particles/units/heroes/hero_earth_spirit/espirit_bouldersmash_silence.vpcf",
                           1,
                           Parent,
                           0);
    CDOTA_Buff::AddParticle(this, BuffParticleEffect, 0, 0, -1, 0, 0);
  }
}


// CDOTA_Ability_EarthSpirit_GeomagneticGrip::~CDOTA_Ability_EarthSpirit_GeomagneticGrip  (line 1527, @0x0000000002c982b0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_EarthSpirit_GeomagneticGrip::~CDOTA_Ability_EarthSpirit_GeomagneticGrip(
        CDOTA_Ability_EarthSpirit_GeomagneticGrip *const this)
{
  this->_vptr_IHandleEntity = &off_45A5210;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_EarthSpirit_GeomagneticGrip::~CDOTA_Ability_EarthSpirit_GeomagneticGrip  (line 1527, @0x0000000002c982d0, libserver.so)  // inlines: ~CDOTA_Ability_EarthSpirit_GeomagneticGrip
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_EarthSpirit_GeomagneticGrip::~CDOTA_Ability_EarthSpirit_GeomagneticGrip(
        CDOTA_Ability_EarthSpirit_GeomagneticGrip *const this)
{
  this->_vptr_IHandleEntity = &off_45A5210;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_EarthSpirit_GeomagneticGrip::Schema_DynamicBinding  (line 1529, @0x0000000002c882c0, libserver.so)
// globals: CDOTA_Ability_EarthSpirit_GeomagneticGrip::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_EarthSpirit_GeomagneticGrip::Schema_DynamicBinding(
        const CDOTA_Ability_EarthSpirit_GeomagneticGrip *const this)
{
  return CDOTA_Ability_EarthSpirit_GeomagneticGrip::s_pSchemaBinding;
}


// CDOTA_Ability_EarthSpirit_GeomagneticGrip::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1529, @0x0000000002c882d0, libserver.so)
// globals: CDOTA_Ability_EarthSpirit_GeomagneticGrip::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_EarthSpirit_GeomagneticGrip::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_EarthSpirit_GeomagneticGrip::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_EarthSpirit_GeomagneticGrip::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_EarthSpirit_GeomagneticGrip::CEntityInstanceEntityClass::DestructInstance  (line 1529, @0x0000000002c882e0, libserver.so)  // inlines: Destruct<CDOTA_Ability_EarthSpirit_GeomagneticGrip>
void __fastcall CDOTA_Ability_EarthSpirit_GeomagneticGrip::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_EarthSpirit_GeomagneticGrip::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_EarthSpirit_GeomagneticGrip::CEntityInstanceEntityClass::FreeInstance  (line 1529, @0x0000000002c88300, libserver.so)
void __fastcall CDOTA_Ability_EarthSpirit_GeomagneticGrip::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_EarthSpirit_GeomagneticGrip::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_EarthSpirit_GeomagneticGrip::CEntityInstanceEntityClass::CanAllocate  (line 1529, @0x0000000002c88320, libserver.so)
bool __fastcall CDOTA_Ability_EarthSpirit_GeomagneticGrip::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_EarthSpirit_GeomagneticGrip::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_EarthSpirit_GeomagneticGrip::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1529, @0x0000000002c88330, libserver.so)
// globals: CDOTA_Ability_EarthSpirit_GeomagneticGrip::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_EarthSpirit_GeomagneticGrip::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_EarthSpirit_GeomagneticGrip::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_EarthSpirit_GeomagneticGrip::s_pSchemaBinding;
}


// CDOTA_Ability_EarthSpirit_GeomagneticGrip::CEntityInstanceEntityClass::AllocateInstance  (line 1529, @0x0000000002c8f860, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_EarthSpirit_GeomagneticGrip::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_EarthSpirit_GeomagneticGrip::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_EarthSpirit_GeomagneticGrip::CEntityInstanceEntityClass::ConstructInstance  (line 1529, @0x0000000002c94970, libserver.so)  // inlines: CDOTA_Ability_EarthSpirit_GeomagneticGrip, CEntityHandle, CHandle, Construct<CDOTA_Ability_EarthSpirit_GeomagneticGrip>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_EarthSpirit_GeomagneticGrip::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_EarthSpirit_GeomagneticGrip::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = -1;
    *p = &off_45A5210;
  }
  return p;
}


// CDOTA_Ability_EarthSpirit_GeomagneticGrip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1529, @0x0000000002ca1e40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_EarthSpirit_GeomagneticGrip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_EarthSpirit_GeomagneticGrip::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_EarthSpirit_GeomagneticGrip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1529, @0x0000000002ca1e60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_EarthSpirit_GeomagneticGrip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_EarthSpirit_GeomagneticGrip::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_EarthSpirit_GeomagneticGrip::GetEntityClassInternal  (line 1529, @0x0000000002cb9e70, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "earth_spirit_geomagnetic_grip", "CDOTA_Ability_EarthSpirit_GeomagneticGrip"
// globals: `guard variable for'CDOTA_Ability_EarthSpirit_GeomagneticGrip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_GeomagneticGripClass, CDOTA_Ability_EarthSpirit_GeomagneticGrip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_GeomagneticGripClass, __dso_handle, CDOTA_Ability_EarthSpirit_GeomagneticGrip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_EarthSpirit_GeomagneticGrip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_GeomagneticGripClassInfo, CDOTA_Ability_EarthSpirit_GeomagneticGrip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_GeomagneticGripClassInfo
CEntityClass *__cdecl CDOTA_Ability_EarthSpirit_GeomagneticGrip::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_EarthSpirit_GeomagneticGrip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_GeomagneticGripClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_EarthSpirit_GeomagneticGrip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_GeomagneticGripClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_EarthSpirit_GeomagneticGrip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_GeomagneticGripClass);
    CDOTA_Ability_EarthSpirit_GeomagneticGrip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_GeomagneticGripClass._vptr_CEntityClass = off_45A5190;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_EarthSpirit_GeomagneticGrip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_GeomagneticGripClass);
    __cxa_atexit(
      CDOTA_Ability_EarthSpirit_GeomagneticGrip::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_EarthSpirit_GeomagneticGrip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_GeomagneticGripClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_EarthSpirit_GeomagneticGripClass != 0 )
    return &CDOTA_Ability_EarthSpirit_GeomagneticGrip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_GeomagneticGripClass;
  if ( `guard variable for'CDOTA_Ability_EarthSpirit_GeomagneticGrip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_GeomagneticGripClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_EarthSpirit_GeomagneticGrip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_GeomagneticGripClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_EarthSpirit_GeomagneticGrip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_GeomagneticGripClassInfo,
      "CDOTA_Ability_EarthSpirit_GeomagneticGrip",
      "earth_spirit_geomagnetic_grip",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_EarthSpirit_GeomagneticGrip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_GeomagneticGripClassInfo);
  }
  CDOTA_Ability_EarthSpirit_GeomagneticGrip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_GeomagneticGripClass.m_pClassInfo = &CDOTA_Ability_EarthSpirit_GeomagneticGrip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_GeomagneticGripClassInfo;
  CDOTA_Ability_EarthSpirit_GeomagneticGrip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_GeomagneticGripClass.m_pBaseClassInfo = CDOTA_Ability_EarthSpirit_GeomagneticGrip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_GeomagneticGripClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_EarthSpirit_GeomagneticGripClass = &CDOTA_Ability_EarthSpirit_GeomagneticGrip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_GeomagneticGripClass;
  CDOTA_Ability_EarthSpirit_GeomagneticGrip::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_GeomagneticGripClassInfo.m_pClass = &CDOTA_Ability_EarthSpirit_GeomagneticGrip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_GeomagneticGripClass;
  CDOTA_Ability_EarthSpirit_GeomagneticGrip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_GeomagneticGripClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_EarthSpirit_GeomagneticGripClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_EarthSpirit_GeomagneticGrip::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_GeomagneticGripClass;
}


// CDOTA_Ability_EarthSpirit_GeomagneticGrip::HasSilence  (line 1542, @0x0000000002c88340, libserver.so)
bool __fastcall CDOTA_Ability_EarthSpirit_GeomagneticGrip::HasSilence(
        CDOTA_Ability_EarthSpirit_GeomagneticGrip *const this)
{
  return 1;
}


// CDOTA_Ability_EarthSpirit_GeomagneticGrip::YouForgotToImplementOrDeclareServerClass  (line 1550, @0x0000000002c1c160, libserver.so)
int __fastcall CDOTA_Ability_EarthSpirit_GeomagneticGrip::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_EarthSpirit_GeomagneticGrip *const this)
{
  return 0;
}


// CDOTA_Ability_EarthSpirit_GeomagneticGrip::GetServerClass  (line 1550, @0x0000000002c35c70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_EarthSpirit_GeomagneticGrip::GetServerClass(
        CDOTA_Ability_EarthSpirit_GeomagneticGrip *const this)
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


// CDOTA_Ability_EarthSpirit_GeomagneticGrip::CastFilterResult  (line 1559, @0x0000000002c342c0, libserver.so)  // inlines: FStrEq, GetTeamNumber, GetUnitName, InState, IsConsideredHero, IsHero, IsInvulnerable, String, ToCStr, _V_strcmp
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter
// strings: "npc_dota_earth_spirit_stone"
int __fastcall CDOTA_Ability_EarthSpirit_GeomagneticGrip::CastFilterResult(
        CDOTA_Ability_EarthSpirit_GeomagneticGrip *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  __int64 v5; // rsi
  int v6; // edx
  char v7; // al
  unsigned __int8 m_Value; // r13
  CDOTA_BaseNPC *v10; // rax
  unsigned __int64 v11; // rax
  uint32 m_iUnitType; // eax
  const char *m_pAsString; // rsi
  CDOTA_BaseNPC *v14; // rax
  bool HasScepter; // al

  if ( pTarget == 0 )
    return 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  v6 = 23;
  if ( pTarget == Caster )
    return v6;
  v7 = (*(pTarget->_vptr_IHandleEntity + 408))(pTarget, v5, 23);
  v6 = 15;
  if ( v7 == 0 )
    return v6;
  m_Value = pTarget->m_iTeamNum.m_Value;
  v10 = CDOTABaseAbility::GetCaster(this);
  v6 = 2;
  if ( m_Value != v10->m_iTeamNum.m_Value )
    return v6;
  if ( pTarget->m_bIsWaitingToSpawn.m_Value || ((v11 = pTarget->m_nUnitState64.m_Value) & 0x100) != 0 )
  {
    m_pAsString = pTarget->m_iszUnitName.m_Value.u.m_pAsString;
    v6 = 18;
    if ( m_pAsString == 0
      || m_pAsString != "npc_dota_earth_spirit_stone" && strcmp(m_pAsString, "npc_dota_earth_spirit_stone") != 0 )
    {
      return v6;
    }
    v11 = pTarget->m_nUnitState64.m_Value;
  }
  v6 = 16;
  if ( (v11 & 0x200) != 0 )
    return v6;
  m_iUnitType = pTarget->m_iUnitType;
  if ( (m_iUnitType & 1) != 0 )
  {
    v14 = CDOTABaseAbility::GetCaster(this);
    HasScepter = CDOTA_BaseNPC::HasScepter(v14);
    v6 = 3;
    if ( HasScepter )
    {
      m_iUnitType = pTarget->m_iUnitType;
      goto LABEL_10;
    }
    return v6;
  }
LABEL_10:
  if ( (m_iUnitType & 0x80u) == 0 )
  {
    v6 = 8;
    if ( (m_iUnitType & 3) == 0 )
      return v6;
  }
  return 0;
}


// CDOTA_Ability_EarthSpirit_GeomagneticGrip::GetCustomCastError  (line 1591, @0x0000000002c1c170, libserver.so)
// strings: "#dota_hud_error_cant_cast_on_self"
const char *__fastcall CDOTA_Ability_EarthSpirit_GeomagneticGrip::GetCustomCastError(
        CDOTA_Ability_EarthSpirit_GeomagneticGrip *const this,
        CDOTA_BaseNPC *pTarget)
{
  return "#dota_hud_error_cant_cast_on_self";
}


// CDOTA_Ability_EarthSpirit_GeomagneticGrip::OnAbilityPhaseStart  (line 1598, @0x0000000002c513f0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FStrEq, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GetUnitName, IndexToIdentity, IsValid, LookupEntity, Purge, Set, String, ToCStr, ToDOTABaseNPC, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*, operator=, operator==<CBaseEntity>, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, FindUnitsInRadius, CEntityHandle::operator CEntityInstance*, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_BaseNPC::FindModifierByName, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "npc_dota_earth_spirit_stone", "modifier_earthspirit_petrify"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Ability_EarthSpirit_GeomagneticGrip::OnAbilityPhaseStart(
        CDOTA_Ability_EarthSpirit_GeomagneticGrip *const this)
{
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v3; // rdx
  bool result; // al
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v6; // rax
  __int64 v7; // r13
  int i; // r12d
  CDOTA_BaseNPC *m_pInstance; // r14
  const char *m_pAsString; // rsi
  CEntityIdentity *v11; // rdx
  int v12; // eax
  __int16 v13; // cx
  CEntityIdentity *v14; // rdx
  int v15; // eax
  __int16 v16; // cx
  CHandle<CBaseEntity> *v17; // rdx
  uint32 m_Index; // eax
  __int16 v19; // cx
  CEntityIdentity *v20; // rdx
  CEntityIdentity *v21; // rdx
  CEntityIdentity *m_pEntity; // rcx
  int v23; // edx
  __int16 v24; // si
  Vector vPosition; // [rsp+20h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-50h] BYREF

  this->m_hTarget.m_Index = -1;
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && (result = CursorTarget->m_bIsDOTANPC) )
  {
    m_pEntity = v3->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v23 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v24 = 0x7FFF;
      else
        v24 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hTarget.m_Index) = v24 | this->m_hTarget.m_Index & 0x8000;
      this->m_hTarget.m_Index = (v23 << 15) | this->m_hTarget.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hTarget.m_Index = -1;
    }
  }
  else
  {
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    Caster = CDOTABaseAbility::GetCaster(this);
    vPosition = CDOTABaseAbility::GetCursorPosition(this);
    v6 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v6->m_iTeamNum.m_Value, &vPosition, Caster, 180.0, &entities, 3, 35, 262208, 0, 0);
    v7 = 0;
    for ( i = 0; entities.m_Size > i; ++v7 )
    {
      v17 = &entities.m_Memory.m_pMemory[v7];
      m_Index = entities.m_Memory.m_pMemory[v7].m_Index;
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
            if ( v21->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
            {
              m_pAsString = m_pInstance->m_iszUnitName.m_Value.u.m_pAsString;
              if ( m_pAsString != 0
                && (m_pAsString == "npc_dota_earth_spirit_stone"
                 || strcmp(m_pAsString, "npc_dota_earth_spirit_stone") == 0) )
              {
                v11 = m_pInstance->m_pEntity;
                if ( v11 != 0 )
                {
                  v12 = (v11->m_EHandle.m_Index >> 15) - (v11->m_flags & 1);
                  v13 = 0x7FFF;
                  if ( v11->m_EHandle.m_Index != -1 )
                    v13 = v11->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(this->m_hTarget.m_Index) = v13 | this->m_hTarget.m_Index & 0x8000;
                  this->m_hTarget.m_Index = (v12 << 15) | this->m_hTarget.m_Index & 0x7FFF;
                }
                else
                {
                  this->m_hTarget.m_Index = -1;
                }
              }
              if ( CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_earthspirit_petrify", 0) != 0 )
              {
                v14 = m_pInstance->m_pEntity;
                if ( v14 != 0 )
                {
                  v15 = (v14->m_EHandle.m_Index >> 15) - (v14->m_flags & 1);
                  v16 = 0x7FFF;
                  if ( v14->m_EHandle.m_Index != -1 )
                    v16 = v14->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(this->m_hTarget.m_Index) = v16 | this->m_hTarget.m_Index & 0x8000;
                  this->m_hTarget.m_Index = (v15 << 15) | this->m_hTarget.m_Index & 0x7FFF;
                }
                else
                {
                  this->m_hTarget.m_Index = -1;
                }
              }
            }
          }
        }
      }
      ++i;
    }
    if ( CEntityHandle::operator CEntityInstance *(&this->m_hTarget) != 0 )
    {
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
      if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
        if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
      }
      return 1;
    }
    else
    {
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
      return 0;
    }
  }
  return result;
}


// CDOTA_Ability_EarthSpirit_GeomagneticGrip::OnSpellStart  (line 1637, @0x0000000002c343e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::UnitEmitSound, CDOTA_BaseNPC::StartGesture, __stack_chk_fail, CDOTA_BaseNPC::FindModifierByName, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, CDOTABaseAbility::CreateAbilityParticleEffect, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleControlEnt (16 total)
// strings: "Hero_EarthSpirit.GeomagneticGrip.Cast", "modifier_earthspirit_petrify", "modifier_faceless_void_chronosphere_freeze", "modifier_enigma_black_hole_pull", "modifier_legion_commander_duel", "modifier_earth_spirit_geomagnetic_grip" (9 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_EarthSpirit_GeomagneticGrip::OnSpellStart(
        CDOTA_Ability_EarthSpirit_GeomagneticGrip *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *v8; // rax
  int AbilityParticleEffect; // r13d
  CDOTA_BaseNPC *v10; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v13; // rax
  CDOTA_BaseNPC *v14; // r12
  CDOTA_ParticleManager *v15; // rax
  CDOTA_ParticleManager *v16; // rax
  unsigned __int64 m_Value; // rax
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(Caster, "Hero_EarthSpirit.GeomagneticGrip.Cast", 0.0, 0, 0);
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hTarget.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0
          && m_pInstance->m_bIsDOTANPC
          && (CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_earthspirit_petrify", 0) != 0
           || !m_pInstance->m_bIsWaitingToSpawn.m_Value
           && ((m_Value = m_pInstance->m_nUnitState64.m_Value) & 0x100) == 0
           && (m_Value & 0x200) == 0
           && !CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, this, 1))
          && CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_faceless_void_chronosphere_freeze", 0) == 0
          && CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_enigma_black_hole_pull", 0) == 0
          && CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_legion_commander_duel", 0) == 0 )
        {
          KeyValues::KeyValues(&kv, "modifier_earth_spirit_geomagnetic_grip");
          v8 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(m_pInstance, v8, this, "modifier_earth_spirit_geomagnetic_grip", &kv, 0);
          CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_EarthSpirit.GeomagneticGrip.Target", 0.0, 0, 0);
          AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                                    this,
                                    "particles/units/heroes/hero_earth_spirit/espirit_geomagentic_grip_caster.vpcf",
                                    2,
                                    0,
                                    0);
          v10 = CDOTABaseAbility::GetCaster(this);
          AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
          ParticleManager = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(
            ParticleManager,
            AbilityParticleEffect,
            0,
            *&AbsOrigin->x,
            AbsOrigin->z);
          v13 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(
            v13,
            AbilityParticleEffect,
            1,
            m_pInstance,
            5,
            "attach_hitloc",
            vec3_invalid,
            1);
          v14 = CDOTABaseAbility::GetCaster(this);
          v15 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v15, AbilityParticleEffect, 10, v14, 1, 0, vec3_invalid, 1);
          v16 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v16, AbilityParticleEffect);
          KeyValues::~KeyValues(&kv);
        }
      }
    }
  }
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v6, 1512, 0.1, 0.1, 9, 0, 1.0);
}


// CDOTA_Modifier_EarthSpirit_GeomagneticGrip::~CDOTA_Modifier_EarthSpirit_GeomagneticGrip  (line 1670, @0x0000000002cb6e20, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_EarthSpirit_GeomagneticGrip::~CDOTA_Modifier_EarthSpirit_GeomagneticGrip(
        CDOTA_Modifier_EarthSpirit_GeomagneticGrip *const this)
{
  this->_vptr_CDOTA_Buff = &off_45A5CD0;
  this->_vptr_CHorizontalMotionController = &off_45A5FC0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory),
        (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_EarthSpirit_GeomagneticGrip::~CDOTA_Modifier_EarthSpirit_GeomagneticGrip  (line 1670, @0x0000000002cb7610, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_EarthSpirit_GeomagneticGrip, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_EarthSpirit_GeomagneticGrip::~CDOTA_Modifier_EarthSpirit_GeomagneticGrip(
        CDOTA_Modifier_EarthSpirit_GeomagneticGrip *const this)
{
  this->_vptr_CDOTA_Buff = &off_45A5CD0;
  this->_vptr_CHorizontalMotionController = &off_45A5FC0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
    if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_EarthSpirit_GeomagneticGrip::IsStunDebuff  (line 1679, @0x0000000002c88350, libserver.so)
bool __fastcall CDOTA_Modifier_EarthSpirit_GeomagneticGrip::IsStunDebuff(
        CDOTA_Modifier_EarthSpirit_GeomagneticGrip *const this)
{
  return 1;
}


// CDOTA_Modifier_EarthSpirit_GeomagneticGrip::IsHorizontalMotionValidToApply  (line 1685, @0x0000000002c88360, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_EarthSpirit_GeomagneticGrip::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_EarthSpirit_GeomagneticGrip *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_EarthSpirit_GeomagneticGrip::GetAttributes  (line 1687, @0x0000000002c88390, libserver.so)
int __fastcall CDOTA_Modifier_EarthSpirit_GeomagneticGrip::GetAttributes(
        CDOTA_Modifier_EarthSpirit_GeomagneticGrip *const this)
{
  return 4;
}


// CDOTA_Modifier_EarthSpirit_GeomagneticGrip::IsMotionController  (line 1689, @0x0000000002c883a0, libserver.so)
bool __fastcall CDOTA_Modifier_EarthSpirit_GeomagneticGrip::IsMotionController(
        CDOTA_Modifier_EarthSpirit_GeomagneticGrip *const this)
{
  return 1;
}


// CDOTA_Modifier_EarthSpirit_GeomagneticGrip::OnCreated  (line 1714, @0x0000000002c803d0, libserver.so)  // inlines: AddToTail, AssignTo, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, DotaRetrieveAbilityValue<float>, Element, FStrEq, FastRSqrt, FastRSqrtFast, FastSqrt, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetSerialNumber, GetUnitName, GrowMemory, Length2D, Set, String, ToCStr, Vector, VectorNormalizeFast, VectorSubtract, _V_strcmp, _mm_load_ss, _mm_rsqrt_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator=, operator[]
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CDOTALocomotor::ApplyHorizontalMotionController, VectorVectors, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt (16 total)
// strings: "rock_damage", "pull_units_per_second", "pull_units_per_second_heroes", "total_pull_distance", "miss_duration", "modifier_earthspirit_petrify" (8 total)
void __fastcall CDOTA_Modifier_EarthSpirit_GeomagneticGrip::OnCreated(
        CDOTA_Modifier_EarthSpirit_GeomagneticGrip *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  const char *m_pAsString; // rsi
  CDOTA_BaseNPC *Parent; // rax
  char v11; // al
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  CDOTALocomotor *v15; // rax
  __m128i y_low; // xmm5
  float v17; // xmm6_4
  int v18; // r15d
  float v19; // xmm4_4
  float v20; // xmm3_4
  float v21; // xmm2_4
  float pull_units_per_second_heroes; // xmm1_4
  float v23; // xmm0_4
  int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *v25; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  __int64 v27; // r13
  CDOTA_BaseNPC *v28; // r14
  CDOTA_ParticleManager *v29; // rax
  CDOTA_ParticleManager *v30; // rax
  CDOTA_ParticleManager *v31; // rax
  CDOTA_ParticleManager *v32; // rax
  CDOTA_ParticleManager *v33; // rax
  CDOTA_BaseNPC *v34; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v36; // eax
  __int16 v37; // cx
  __int64 m_Size; // r12
  int v39; // eax
  CHandle<CBaseEntity> *v40; // rax
  float v41; // [rsp+10h] [rbp-90h]
  float flDuration; // [rsp+14h] [rbp-8Ch]
  float flDurationa; // [rsp+14h] [rbp-8Ch]
  vec_t vecFallbackPosition; // [rsp+18h] [rbp-88h]
  vec_t x; // [rsp+1Ch] [rbp-84h]
  Vector vecOrientFwd; // [rsp+30h] [rbp-70h] BYREF
  Vector vecOrientRight; // [rsp+40h] [rbp-60h] BYREF
  Vector vecOrientUp; // [rsp+50h] [rbp-50h] BYREF
  double v49; // [rsp+60h] [rbp-40h]
  float v50; // [rsp+68h] [rbp-38h]
  Vector v51; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->radius, "radius");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->rock_damage, "rock_damage");
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
    this->pull_units_per_second = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "pull_units_per_second", -1, 0);
  else
    this->pull_units_per_second = 0.0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
    this->pull_units_per_second_heroes = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                           v6,
                                           "pull_units_per_second_heroes",
                                           -1,
                                           0);
  else
    this->pull_units_per_second_heroes = 0.0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
    this->total_pull_distance = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "total_pull_distance", -1, 0);
  else
    this->total_pull_distance = 0.0;
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 != 0 )
    this->miss_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8, "miss_duration", -1, 0);
  else
    this->miss_duration = 0.0;
  m_pAsString = CDOTA_Buff::GetParent(this)->m_iszUnitName.m_Value.u.m_pAsString;
  if ( m_pAsString == 0
    || (v11 = 1, m_pAsString != "npc_dota_earth_spirit_stone")
    && strcmp(m_pAsString, "npc_dota_earth_spirit_stone") != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    v11 = CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_earthspirit_petrify", 0) != 0;
  }
  this->m_bUsedStone = v11;
  Caster = CDOTA_Buff::GetCaster(this);
  this->m_vDestination = *CBaseEntity::GetAbsOrigin(Caster);
  v13 = CDOTA_Buff::GetParent(this);
  this->m_vLocation = *CBaseEntity::GetAbsOrigin(v13);
  v14 = CDOTA_Buff::GetParent(this);
  v15 = (*(v14->_vptr_IHandleEntity + 376))(v14);
  CDOTALocomotor::ApplyHorizontalMotionController(v15, &this->CHorizontalMotionController, 0);
  y_low = LODWORD(this->m_vDestination.y);
  v17 = this->m_vDestination.x - this->m_vLocation.x;
  v18 = _mm_cvtsi128_si32(y_low);
  x = this->m_vDestination.x;
  *y_low.m128i_i32 = *y_low.m128i_i32 - this->m_vLocation.y;
  flDuration = this->m_vDestination.z;
  v19 = flDuration - this->m_vLocation.z;
  v20 = 1.0 / fsqrt((((v17 * v17) + 0.00000011920929) + (*y_low.m128i_i32 * *y_low.m128i_i32)) + (v19 * v19));
  v21 = (0.5 * v20)
      * (3.0 - ((((((v17 * v17) + 0.00000011920929) + (*y_low.m128i_i32 * *y_low.m128i_i32)) + (v19 * v19)) * v20) * v20));
  vecOrientFwd.x = v17 * v21;
  vecOrientFwd.y = *y_low.m128i_i32 * v21;
  vecOrientFwd.z = v21 * v19;
  VectorVectors(&vecOrientFwd, &vecOrientRight, &vecOrientUp);
  pull_units_per_second_heroes = this->pull_units_per_second_heroes;
  if ( this->m_bUsedStone )
    pull_units_per_second_heroes = this->pull_units_per_second;
  v23 = this->m_vDestination.x - this->m_vLocation.x;
  v41 = flDuration;
  flDurationa = fsqrt(
                  (v23 * v23)
                + ((this->m_vDestination.y - this->m_vLocation.y) * (this->m_vDestination.y - this->m_vLocation.y)))
              / pull_units_per_second_heroes;
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_earth_spirit/espirit_geomagentic_grip_target.vpcf",
                         2,
                         0,
                         0);
  v25 = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  v27 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, BuffParticleEffect, 0, v25, 1, 0, vec3_invalid, 1);
  v28 = CDOTA_Buff::GetCaster(this);
  v29 = GetParticleManager();
  *&v51.x = v27;
  v51.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v29, BuffParticleEffect, 1, v28, 1, 0, v51, 1);
  *&v49 = flDurationa;
  *(&v49 + 1) = flDurationa;
  v50 = flDurationa;
  v30 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v30, BuffParticleEffect, 2, v49, v50);
  v31 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v31, BuffParticleEffect, 3, COERCE_DOUBLE(__PAIR64__(v18, LODWORD(x))), v41);
  v32 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlOrientation(
    v32,
    BuffParticleEffect,
    3,
    *&vecOrientFwd.x,
    vecOrientFwd.z,
    *&vecOrientRight.x,
    vecOrientRight.z,
    *&vecOrientUp.x,
    vecOrientUp.z);
  v33 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v33, BuffParticleEffect);
  if ( this->m_bUsedStone )
  {
    v34 = CDOTA_Buff::GetParent(this);
    LODWORD(v49) = -1;
    if ( v34 != 0 )
    {
      m_pEntity = v34->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v36 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v37 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v37 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(v49) = v37 | LOWORD(v49) & 0x8000;
        LODWORD(v49) = (v36 << 15) | LOWORD(v49) & 0x7FFF;
      }
    }
    m_Size = this->m_hHitEntities.m_Size;
    v39 = this->m_hHitEntities.m_Size;
    if ( m_Size == this->m_hHitEntities.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hHitEntities.m_Memory, 1);
      v39 = this->m_hHitEntities.m_Size;
    }
    this->m_hHitEntities.m_Size = v39 + 1;
    v40 = &this->m_hHitEntities.m_Memory.m_pMemory[m_Size];
    if ( v40 != 0 )
      v40->m_Index = LODWORD(v49);
  }
}


// CDOTA_Modifier_EarthSpirit_GeomagneticGrip::OnDestroy  (line 1761, @0x0000000002c22ed0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController, CBaseEntity::StopSound
// strings: "Hero_EarthSpirit.GeomagneticGrip.Target"
void __fastcall CDOTA_Modifier_EarthSpirit_GeomagneticGrip::OnDestroy(
        CDOTA_Modifier_EarthSpirit_GeomagneticGrip *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax
  CDOTA_BaseNPC *v4; // rax

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveHorizontalMotionController(v3, &this->CHorizontalMotionController);
  v4 = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(v4, "Hero_EarthSpirit.GeomagneticGrip.Target");
}


// CDOTA_Modifier_EarthSpirit_GeomagneticGrip::UpdateHorizontalMotion  (line 1771, @0x0000000002c7f0e0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, FastSqrt, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHero, GetInstance, GetSerialNumber, GetTeamNumber, GrowMemory, HasElement, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsRealHero, IsValid, Length2D, LookupEntity, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, VectorAdd, VectorMultiply, VectorNormalize2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator-, operator[], ~CUtlVector
// calls: CBaseEntity::GetAbsOrigin, VectorNormalize, CDOTA_Buff::Destroy, CBaseEntity::SetAbsOrigin, CDOTA_Buff::GetCaster, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, EconEntity_OnOwnerKillEaterEvent (23 total)
// strings: "modifier_earth_spirit_geomagnetic_grip_debuff", "modifier_earth_spirit_magnetize", "modifier_earthspirit_petrify", "Hero_EarthSpirit.GeomagneticGrip.Damage"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_EarthSpirit_GeomagneticGrip::UpdateHorizontalMotion(
        CDOTA_Modifier_EarthSpirit_GeomagneticGrip *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  const Vector *AbsOrigin; // rax
  vec_t v7; // xmm0_4
  vec_t v8; // xmm1_4
  const Vector *v9; // rax
  float v10; // xmm1_4
  float v11; // xmm0_4
  __m128i total_pull_distance_low; // xmm1
  float v13; // xmm0_4
  float pull_units_per_second_heroes; // xmm0_4
  __m128i x_low; // xmm5
  __m128i y_low; // xmm6
  __m128i v17; // xmm7
  float v18; // r12d
  float v19; // r14d
  float v20; // r13d
  const Vector *v21; // rax
  float v22; // xmm2_4
  int v23; // xmm3_4
  __m128i v24; // xmm6
  float v25; // r13d
  CDOTA_BaseNPC *v26; // r12
  const Vector *v27; // rbx
  CDOTA_BaseNPC *v28; // rax
  int v29; // eax
  CHandle<CBaseEntity> *v30; // rdx
  uint32 m_Index; // eax
  __int16 v32; // cx
  CEntityIdentity *v33; // rdx
  CEntityIdentity *v34; // rdx
  CEntityIdentity *m_pEntity; // rdx
  int v36; // eax
  __int16 v37; // cx
  float v38; // xmm1_4
  CDOTABaseAbility *Ability; // rbx
  CDOTA_BaseNPC *v40; // rax
  CDOTA_BaseNPC_Hero *v41; // rbx
  CDOTA_BaseNPC *v42; // rax
  CDOTA_BaseNPC_Hero *v43; // rdi
  __int64 v44; // r12
  int v45; // ebx
  CHandle<CDOTA_BaseNPC_Hero> *v46; // rdx
  uint32 v47; // eax
  __int16 v48; // cx
  CEntityIdentity *v49; // rdx
  CEntityIdentity *v50; // rdx
  CEntityInstance *m_pInstance; // r13
  int (**vptr_IHandleEntity)(...); // rax
  CDOTA_BaseNPC *v53; // rax
  CEntityIdentity *v54; // rax
  int v55; // edx
  __int16 v56; // cx
  __int64 m_Size; // rbx
  int v58; // eax
  CHandle<CBaseEntity> *v59; // rax
  CEntityIdentity *v60; // rdx
  int v61; // eax
  __int16 v62; // cx
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v64; // r12d
  float v65; // xmm3_4
  __m128i v66; // xmm4
  CDOTA_BaseNPC *Parent; // rax
  float v68; // r12d
  CDOTABaseAbility *v69; // rbx
  CDOTA_BaseNPC *v70; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *p_m_hHitEntities; // [rsp+38h] [rbp-B8h]
  CDOTA_BaseNPC *pTarget; // [rsp+40h] [rbp-B0h]
  __int64 nEntityIter; // [rsp+48h] [rbp-A8h]
  float flMoveDista; // [rsp+58h] [rbp-98h]
  char flMoveDistb; // [rsp+58h] [rbp-98h]
  CDOTABaseAbility *flMoveDistc; // [rsp+58h] [rbp-98h]
  CHandle<CBaseEntity> v78[4]; // [rsp+60h] [rbp-90h] BYREF
  Vector vPullDirection; // [rsp+70h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+80h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+A0h] [rbp-50h] BYREF
  unsigned __int64 v82; // [rsp+B8h] [rbp-38h]
  Vector v83; // 0:xmm0_8.8,8:xmm1_4.4

  v82 = __readfsqword(0x28u);
  AbsOrigin = CBaseEntity::GetAbsOrigin(me);
  v7 = this->m_vDestination.y - AbsOrigin->y;
  v8 = this->m_vDestination.x - AbsOrigin->x;
  vPullDirection.z = 0.0;
  vPullDirection.y = v7;
  vPullDirection.x = v8;
  VectorNormalize(&vPullDirection);
  v9 = CBaseEntity::GetAbsOrigin(me);
  v10 = this->m_vDestination.y - v9->y;
  v11 = ((this->m_vDestination.x - v9->x) * (this->m_vDestination.x - v9->x)) + (v10 * v10);
  total_pull_distance_low = LODWORD(this->total_pull_distance);
  v13 = fsqrt(v11);
  if ( *total_pull_distance_low.m128i_i32 <= 0.0 || this->radius > v13 )
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
    total_pull_distance_low = LODWORD(this->total_pull_distance);
  }
  pull_units_per_second_heroes = this->pull_units_per_second_heroes;
  if ( this->m_bUsedStone )
    pull_units_per_second_heroes = this->pull_units_per_second;
  x_low = LODWORD(vPullDirection.x);
  y_low = LODWORD(vPullDirection.y);
  *total_pull_distance_low.m128i_i32 = fminf(*total_pull_distance_low.m128i_i32, pull_units_per_second_heroes * a3);
  *x_low.m128i_i32 = vPullDirection.x * *total_pull_distance_low.m128i_i32;
  v17 = total_pull_distance_low;
  flMoveDista = *total_pull_distance_low.m128i_i32;
  *y_low.m128i_i32 = vPullDirection.y * *total_pull_distance_low.m128i_i32;
  *v17.m128i_i32 = *total_pull_distance_low.m128i_i32 * vPullDirection.z;
  v18 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
  v19 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
  v20 = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
  v21 = CBaseEntity::GetAbsOrigin(me);
  v22 = v19 + v21->y;
  *&v23 = v18 + v21->x;
  *&entities.m_Memory.m_pMemory = v20 + v21->z;
  *(&entities.m_Size + 1) = v22;
  entities.m_Size = v23;
  CBaseEntity::SetAbsOrigin(me, &entities);
  this->total_pull_distance = this->total_pull_distance - flMoveDista;
  if ( (me->m_iUnitType & 1) != 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    v64 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
    v83 = *CBaseEntity::GetAbsOrigin(me);
    CGridNav::DestroyTreesAroundPoint(&g_GridNav, 1, v64, v83, 75.0, v65);
  }
  *v24.m128i_i32 = this->radius;
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v25 = COERCE_FLOAT(_mm_cvtsi128_si32(v24));
  v26 = CDOTA_Buff::GetCaster(this);
  v27 = CBaseEntity::GetAbsOrigin(me);
  v28 = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(v28->m_iTeamNum.m_Value, v27, v26, v25, &entities, 2, 3, 0, 0, 0);
  if ( entities.m_Size > 0 )
  {
    nEntityIter = 0;
    p_m_hHitEntities = &this->m_hHitEntities;
    do
    {
      v30 = &entities.m_Memory.m_pMemory[nEntityIter];
      m_Index = v30->m_Index;
      if ( v30->m_Index + 2 > 1 )
      {
        v32 = v30->m_Index;
        v33 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v30->m_Index) >> 9) & 0x3F];
        if ( v33 != 0 )
        {
          v34 = &v33[v32 & 0x1FF];
          if ( v34 != 0 && m_Index == v34->m_EHandle.m_Index )
          {
            pTarget = v34->m_pInstance;
            if ( v34->m_pInstance != 0 && BYTE3(v34->m_pInstance[7]._vptr_IHandleEntity) != 0 )
            {
              v78[0].m_Index = -1;
              m_pEntity = pTarget->m_pEntity;
              if ( m_pEntity != 0 )
              {
                v36 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                v37 = 0x7FFF;
                if ( m_pEntity->m_EHandle.m_Index != -1 )
                  v37 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                LOWORD(v78[0].m_Index) = v37 | v78[0].m_Index & 0x8000;
                v78[0].m_Index = (v36 << 15) | v78[0].m_Index & 0x7FFF;
              }
              if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                     p_m_hHitEntities,
                     v78) < 0 )
              {
                KeyValues::KeyValues(&kv, "modifier_earth_spirit_geomagnetic_grip_debuff");
                KeyValues::SetFloat(&kv, "duration", v38);
                Ability = CDOTA_Buff::GetAbility(this);
                v40 = CDOTA_Buff::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(
                  pTarget,
                  v40,
                  Ability,
                  "modifier_earth_spirit_geomagnetic_grip_debuff",
                  &kv,
                  0);
                if ( (pTarget->m_iUnitType & 1) != 0 && !pTarget->m_bIsIllusion.m_Value )
                {
                  v41 = 0;
                  if ( pTarget->m_bIsDOTANPC )
                    v41 = pTarget;
                  v42 = CDOTA_Buff::GetCaster(this);
                  if ( v42 != 0 && (v42->m_iUnitType & 1) != 0 )
                    v43 = v42;
                  else
                    v43 = 0;
                  EconEntity_OnOwnerKillEaterEvent(
                    v43,
                    v41,
                    kill_eater_event_t::kKillEaterEvent_EarthSpirit_GripSilences,
                    1,
                    INVALID_ITEM_DEF_INDEX);
                }
                if ( CDOTA_BaseNPC::FindModifierByName(pTarget, "modifier_earth_spirit_magnetize", 0) != 0
                  && g_HeroList.m_hHeroList.m_Size > 0 )
                {
                  v44 = 0;
                  v45 = 0;
                  do
                  {
                    while ( 1 )
                    {
                      v46 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v44];
                      v47 = v46->m_Index;
                      if ( v46->m_Index + 2 > 1 )
                      {
                        v48 = v46->m_Index;
                        v49 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v46->m_Index) >> 9) & 0x3F];
                        if ( v49 != 0 )
                        {
                          v50 = &v49[v48 & 0x1FF];
                          if ( v50 != 0 && v47 == v50->m_EHandle.m_Index )
                          {
                            m_pInstance = v50->m_pInstance;
                            if ( v50->m_pInstance != 0 && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                            {
                              vptr_IHandleEntity = m_pInstance[58]._vptr_IHandleEntity;
                              if ( (BYTE1(vptr_IHandleEntity) & 2) == 0
                                && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0
                                && (BYTE1(vptr_IHandleEntity) & 1) == 0
                                && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
                              {
                                flMoveDistb = HIBYTE(m_pInstance[7].m_CScriptComponent);
                                if ( flMoveDistb != CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value
                                  && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) != 0
                                  && (*(m_pInstance->_vptr_IHandleEntity + 390))(m_pInstance) == 0
                                  && CDOTA_BaseNPC::FindModifierByName(
                                       m_pInstance,
                                       "modifier_earth_spirit_magnetize",
                                       0) != 0 )
                                {
                                  break;
                                }
                              }
                            }
                          }
                        }
                      }
                      ++v45;
                      ++v44;
                      if ( v45 >= g_HeroList.m_hHeroList.m_Size )
                        goto LABEL_49;
                    }
                    flMoveDistc = CDOTA_Buff::GetAbility(this);
                    v53 = CDOTA_Buff::GetCaster(this);
                    CDOTA_BaseNPC::AddNewModifier(
                      m_pInstance,
                      v53,
                      flMoveDistc,
                      "modifier_earth_spirit_geomagnetic_grip_debuff",
                      &kv,
                      0);
                    ++v45;
                    ++v44;
                  }
                  while ( v45 < g_HeroList.m_hHeroList.m_Size );
                }
LABEL_49:
                if ( this->m_bUsedStone )
                {
                  if ( CDOTA_Buff::GetParent(this) != 0 && (CDOTA_Buff::GetParent(this)->m_iUnitType & 1) != 0 )
                  {
                    Parent = CDOTA_Buff::GetParent(this);
                    if ( CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_earthspirit_petrify", 0) == 0 )
                    {
                      v78[0].m_Index = -1;
                      v60 = pTarget->m_pEntity;
                      if ( v60 != 0 )
                      {
                        v61 = (v60->m_EHandle.m_Index >> 15) - (v60->m_flags & 1);
                        v62 = 0x7FFF;
                        if ( v60->m_EHandle.m_Index != -1 )
                          v62 = v60->m_EHandle.m_Index & 0x7FFF;
                        LOWORD(v78[0].m_Index) = v62 | v78[0].m_Index & 0x8000;
                        v78[0].m_Index = (v61 << 15) | v78[0].m_Index & 0x7FFF;
                      }
                      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::AddToTail(
                        p_m_hHitEntities,
                        v78);
                      KeyValues::~KeyValues(&kv);
                      break;
                    }
                  }
                  *v66.m128i_i32 = this->rock_damage;
                  v68 = COERCE_FLOAT(_mm_cvtsi128_si32(v66));
                  v69 = CDOTA_Buff::GetAbility(this);
                  v70 = CDOTA_Buff::GetCaster(this);
                  ApplyDamage(v70, pTarget, v69, v68, 2, 0);
                  if ( (pTarget->m_iUnitType & 1) == 0 )
                    CDOTA_BaseNPC::UnitEmitSound(pTarget, "Hero_EarthSpirit.GeomagneticGrip.Damage", 0.0, 0, 0);
                }
                v78[0].m_Index = -1;
                v54 = pTarget->m_pEntity;
                if ( v54 != 0 )
                {
                  v55 = (v54->m_EHandle.m_Index >> 15) - (v54->m_flags & 1);
                  v56 = 0x7FFF;
                  if ( v54->m_EHandle.m_Index != -1 )
                    v56 = v54->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(v78[0].m_Index) = v56 | v78[0].m_Index & 0x8000;
                  v78[0].m_Index = (v55 << 15) | v78[0].m_Index & 0x7FFF;
                }
                m_Size = this->m_hHitEntities.m_Size;
                v58 = this->m_hHitEntities.m_Size;
                if ( m_Size == this->m_hHitEntities.m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hHitEntities.m_Memory, 1);
                  v58 = this->m_hHitEntities.m_Size;
                }
                this->m_hHitEntities.m_Size = v58 + 1;
                v59 = &this->m_hHitEntities.m_Memory.m_pMemory[m_Size];
                if ( v59 != 0 )
                  v59->m_Index = v78[0];
                KeyValues::~KeyValues(&kv);
              }
            }
          }
        }
      }
      v29 = nEntityIter++;
    }
    while ( entities.m_Size > v29 + 1 );
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Modifier_EarthSpirit_GeomagneticGrip::DeclareFunctions  (line 1869, @0x0000000002c1c180, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_EarthSpirit_GeomagneticGrip::GetOverrideAnimation(CModifierParams const&)
void __fastcall CDOTA_Modifier_EarthSpirit_GeomagneticGrip::DeclareFunctions(
        CDOTA_Modifier_EarthSpirit_GeomagneticGrip *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_EarthSpirit_GeomagneticGrip::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
}


// CDOTA_Modifier_EarthSpirit_GeomagneticGrip::GetOverrideAnimation  (line 1876, @0x0000000002c1c1a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_EarthSpirit_GeomagneticGrip::GetOverrideAnimation(
        CDOTA_Modifier_EarthSpirit_GeomagneticGrip *const this,
        const CModifierParams *const params)
{
  return 0x44BC800000000001uLL;
}


// CDOTA_Modifier_EarthSpirit_GeomagneticGrip::OnHorizontalMotionInterrupted  (line 1882, @0x0000000002c1f6e0, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_EarthSpirit_GeomagneticGrip::OnHorizontalMotionInterrupted(
        CDOTA_Modifier_EarthSpirit_GeomagneticGrip *const this)
{
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_EarthSpirit_Petrify::~CDOTA_Modifier_EarthSpirit_Petrify  (line 1894, @0x0000000002c92c20, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_EarthSpirit_Petrify::~CDOTA_Modifier_EarthSpirit_Petrify(
        CDOTA_Modifier_EarthSpirit_Petrify *const this)
{
  this->_vptr_CDOTA_Buff = &off_45A6050;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_EarthSpirit_Petrify::~CDOTA_Modifier_EarthSpirit_Petrify  (line 1894, @0x0000000002c92c40, libserver.so)  // inlines: ~CDOTA_Modifier_EarthSpirit_Petrify
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_EarthSpirit_Petrify::~CDOTA_Modifier_EarthSpirit_Petrify(
        CDOTA_Modifier_EarthSpirit_Petrify *const this)
{
  this->_vptr_CDOTA_Buff = &off_45A6050;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_EarthSpirit_Petrify::IsDebuff  (line 1899, @0x0000000002c883b0, libserver.so)
bool __fastcall CDOTA_Modifier_EarthSpirit_Petrify::IsDebuff(CDOTA_Modifier_EarthSpirit_Petrify *const this)
{
  return 1;
}


// CDOTA_Modifier_EarthSpirit_Petrify::IsStunDebuff  (line 1900, @0x0000000002c883c0, libserver.so)
bool __fastcall CDOTA_Modifier_EarthSpirit_Petrify::IsStunDebuff(CDOTA_Modifier_EarthSpirit_Petrify *const this)
{
  return 1;
}


// CDOTA_Modifier_EarthSpirit_Petrify::IsPurgable  (line 1901, @0x0000000002c883d0, libserver.so)
bool __fastcall CDOTA_Modifier_EarthSpirit_Petrify::IsPurgable(CDOTA_Modifier_EarthSpirit_Petrify *const this)
{
  return 0;
}


// CDOTA_Modifier_EarthSpirit_Petrify::GetStatusEffectName  (line 1912, @0x0000000002c883e0, libserver.so)
// strings: "particles/status_fx/status_effect_earth_spirit_petrify.vpcf"
const char *__fastcall CDOTA_Modifier_EarthSpirit_Petrify::GetStatusEffectName(
        CDOTA_Modifier_EarthSpirit_Petrify *const this)
{
  return "particles/status_fx/status_effect_earth_spirit_petrify.vpcf";
}


// CDOTA_Modifier_EarthSpirit_Petrify::StatusEffectPriority  (line 1913, @0x0000000002c883f0, libserver.so)
int __fastcall CDOTA_Modifier_EarthSpirit_Petrify::StatusEffectPriority(CDOTA_Modifier_EarthSpirit_Petrify *const this)
{
  return 420;
}


// CDOTA_Modifier_EarthSpirit_Petrify::ProvidesTruesightForTeam  (line 1915, @0x0000000002c88400, libserver.so)
bool __fastcall CDOTA_Modifier_EarthSpirit_Petrify::ProvidesTruesightForTeam(
        CDOTA_Modifier_EarthSpirit_Petrify *const this,
        int nTeamNumber)
{
  return this->m_iTeam == nTeamNumber;
}


// CDOTA_Modifier_EarthSpirit_Petrify::OnCreated  (line 1926, @0x0000000002c2b420, libserver.so)  // inlines: FStrEq, GetSequence, GetUnitName, String, ToCStr, Vector, _V_strcmp
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle, CDOTA_Buff::GetCaster, CBaseAnimating::GetModelScale, CBaseAnimating::GetBaseAnimatingController, CDOTA_ParticleManager::SetParticleControl
// strings: "particles/units/heroes/hero_earth_spirit/earthspirit_petrify_debuff_stoned.vpcf", "particles/units/heroes/hero_earth_spirit/espirit_stoneremnant_base.vpcf", "npc_dota_hero_wisp", "particles/units/heroes/hero_earth_spirit/earthspirit_petrify_wisp.vpcf", "attach_hitloc"
void __fastcall CDOTA_Modifier_EarthSpirit_Petrify::OnCreated(
        CDOTA_Modifier_EarthSpirit_Petrify *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax
  int BuffParticleEffect; // r13d
  CDOTA_BaseNPC *v5; // r15
  CDOTA_ParticleManager *ParticleManager; // rax
  __int64 v7; // r12
  CDOTA_BaseNPC *v8; // r15
  CDOTA_ParticleManager *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  int m_nFXIndex; // r13d
  const CBaseAnimating *v13; // r15
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  int v16; // r13d
  const CBaseAnimating *v17; // r15
  CDOTA_ParticleManager *v18; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v20; // rax
  const CBaseAnimatingController *BaseAnimatingController; // rax
  int v22; // eax
  CDOTA_ParticleManager *v23; // rax
  const char *m_pAsString; // rsi
  CDOTA_BaseNPC *v25; // rax
  int v26; // r12d
  CDOTA_BaseNPC *v27; // r13
  CDOTA_ParticleManager *v28; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-44h]
  float vecFallbackPositiona; // [rsp+Ch] [rbp-44h]
  double v31; // [rsp+10h] [rbp-40h]
  Vector v32; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v33; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v34; // 0:xmm0_8.8,8:xmm1_4.4

  this->m_bHasBeenMagnetized = 0;
  Parent = CDOTA_Buff::GetParent(this);
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_earth_spirit/earthspirit_petrify_debuff_stoned.vpcf",
                         3,
                         Parent,
                         0);
  v5 = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  v7 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, BuffParticleEffect, 0, v5, 1, 0, vec3_invalid, 1);
  v8 = CDOTA_Buff::GetParent(this);
  v9 = GetParticleManager();
  v32.z = vecFallbackPosition;
  *&v32.x = v7;
  CDOTA_ParticleManager::SetParticleControlEnt(v9, BuffParticleEffect, 1, v8, 1, 0, v32, 1);
  CDOTA_Buff::AddParticle(this, BuffParticleEffect, 0, 0, -1, 0, 0);
  v10 = CDOTA_Buff::GetParent(this);
  this->m_nFXIndex = CDOTA_Buff::CreateBuffParticleEffect(
                       this,
                       "particles/units/heroes/hero_earth_spirit/espirit_stoneremnant_base.vpcf",
                       1,
                       v10,
                       0);
  v11 = CDOTA_Buff::GetParent(this);
  m_nFXIndex = this->m_nFXIndex;
  v13 = v11;
  v14 = GetParticleManager();
  v33.z = vecFallbackPosition;
  *&v33.x = v7;
  CDOTA_ParticleManager::SetParticleControlEnt(v14, m_nFXIndex, 0, v13, 0, 0, v33, 1);
  v15 = CDOTA_Buff::GetParent(this);
  v16 = this->m_nFXIndex;
  v17 = v15;
  v18 = GetParticleManager();
  v34.z = vecFallbackPosition;
  *&v34.x = v7;
  CDOTA_ParticleManager::SetParticleControlEnt(v18, v16, 1, v17, 1, 0, v34, 1);
  Caster = CDOTA_Buff::GetCaster(this);
  vecFallbackPositiona = CBaseAnimating::GetModelScale(Caster);
  v20 = CDOTA_Buff::GetCaster(this);
  BaseAnimatingController = CBaseAnimating::GetBaseAnimatingController(v20);
  v22 = (*(BaseAnimatingController->_vptr_CSkeletonAnimationController + 24))(BaseAnimatingController);
  LODWORD(v7) = this->m_nFXIndex;
  *(&v31 + 1) = vecFallbackPositiona;
  *&v31 = v22;
  v23 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v23, v7, 2, v31, 0.0);
  m_pAsString = CDOTA_Buff::GetParent(this)->m_iszUnitName.m_Value.u.m_pAsString;
  if ( m_pAsString != 0 && (m_pAsString == "npc_dota_hero_wisp" || strcmp(m_pAsString, "npc_dota_hero_wisp") == 0) )
  {
    v25 = CDOTA_Buff::GetParent(this);
    v26 = CDOTA_Buff::CreateBuffParticleEffect(
            this,
            "particles/units/heroes/hero_earth_spirit/earthspirit_petrify_wisp.vpcf",
            3,
            v25,
            0);
    v27 = CDOTA_Buff::GetParent(this);
    v28 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v28, v26, 0, v27, 5, "attach_hitloc", vec3_invalid, 1);
    CDOTA_Buff::AddParticle(this, v26, 0, 0, -1, 0, 0);
  }
}


// CDOTA_Modifier_EarthSpirit_Petrify::OnDestroy  (line 1954, @0x0000000002c531d0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsCurrentlyMotionControlled, IsValid, LookupEntity, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<float>, CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_BaseNPC::UnitEmitSound, ApplyDamage, CDOTA_Buff::CreateBuffParticleEffect, CDOTA_ParticleManager::SetParticleControlEnt (17 total)
// strings: "Hero_EarthSpirit.StoneRemnant.Destroy", "particles/units/heroes/hero_earth_spirit/earthspirit_petrify_shockwave.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_EarthSpirit_Petrify::OnDestroy(CDOTA_Modifier_EarthSpirit_Petrify *const this)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v3; // rax
  float v4; // r13d
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v8; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v10; // rax
  __int64 v11; // r12
  int i; // ebx
  CHandle<CBaseEntity> *v13; // rdx
  uint32 m_Index; // eax
  __int16 v15; // cx
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTABaseAbility *v19; // r15
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  __int64 v23; // rax
  CDOTA_BaseNPC *v24; // rax
  int BuffParticleEffect; // ebx
  CDOTA_BaseNPC *v26; // rax
  const Vector *v27; // r12
  CDOTA_BaseNPC *v28; // r13
  CDOTA_ParticleManager *v29; // rax
  CDOTA_ParticleManager *v30; // rax
  CDOTA_ParticleManager *v31; // rax
  CDOTA_BaseNPC *v32; // rax
  Vector *v33; // rbx
  CDOTA_BaseNPC *v34; // rax
  float flDamage; // [rsp+2Ch] [rbp-74h]
  float damage; // [rsp+38h] [rbp-68h] BYREF
  float aoe; // [rsp+3Ch] [rbp-64h] BYREF
  double v38; // [rsp+40h] [rbp-60h]
  float v39; // [rsp+48h] [rbp-58h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+50h] [rbp-50h] BYREF

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(Ability, &damage, "damage");
  v3 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v3, &aoe, "aoe");
  hEntities.m_Size = 0;
  v4 = aoe;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  Caster = CDOTA_Buff::GetCaster(this);
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v8 = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(v8->m_iTeamNum.m_Value, AbsOrigin, Caster, v4, &hEntities, 2, 3, 0, 0, 0);
  LODWORD(AbsOrigin) = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, AbsOrigin, 0);
  v10 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v10, "Hero_EarthSpirit.StoneRemnant.Destroy", 0.0, 0, 0);
  v11 = 0;
  for ( i = 0; hEntities.m_Size > i; ++v11 )
  {
    while ( 1 )
    {
      v13 = &hEntities.m_Memory.m_pMemory[v11];
      m_Index = hEntities.m_Memory.m_pMemory[v11].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v15 = v13->m_Index;
        v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v13->m_Index) >> 9) & 0x3F];
        if ( v16 != 0 )
        {
          v17 = &v16[v15 & 0x1FF];
          if ( v17 != 0 && m_Index == v17->m_EHandle.m_Index )
          {
            m_pInstance = v17->m_pInstance;
            if ( v17->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              break;
          }
        }
      }
      ++i;
      ++v11;
      if ( hEntities.m_Size <= i )
        goto LABEL_11;
    }
    flDamage = damage;
    v19 = CDOTA_Buff::GetAbility(this);
    v20 = CDOTA_Buff::GetCaster(this);
    ApplyDamage(v20, m_pInstance, v19, flDamage, 2, 0);
    ++i;
  }
LABEL_11:
  v21 = CDOTA_Buff::GetParent(this);
  if ( (*(v21->_vptr_IHandleEntity + 376))(v21) != 0 )
  {
    v22 = CDOTA_Buff::GetParent(this);
    v23 = (*(v22->_vptr_IHandleEntity + 376))(v22);
    if ( *(v23 + 216) == 0 && *(v23 + 224) == 0 )
    {
      v32 = CDOTA_Buff::GetParent(this);
      v33 = CBaseEntity::GetAbsOrigin(v32);
      v34 = CDOTA_Buff::GetParent(this);
      FindClearSpaceForUnit(v34, *v33, 0);
    }
  }
  v24 = CDOTA_Buff::GetParent(this);
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_earth_spirit/earthspirit_petrify_shockwave.vpcf",
                         1,
                         v24,
                         0);
  v26 = CDOTA_Buff::GetParent(this);
  v27 = CBaseEntity::GetAbsOrigin(v26);
  v28 = CDOTA_Buff::GetParent(this);
  v29 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v29, BuffParticleEffect, 0, v28, 0, 0, *v27, 1);
  *&v38 = aoe;
  *(&v38 + 1) = aoe;
  v39 = aoe;
  v30 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v30, BuffParticleEffect, 3, v38, v39);
  v31 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v31, BuffParticleEffect);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
}


// CDOTA_Modifier_EarthSpirit_Petrify::DeclareFunctions  (line 1996, @0x0000000002c1c1c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_EarthSpirit_Petrify::GetOverrideAnimationRate(CModifierParams const&)
void __fastcall CDOTA_Modifier_EarthSpirit_Petrify::DeclareFunctions(CDOTA_Modifier_EarthSpirit_Petrify *const this)
{
  this->m_Functions[92].__pfn = CDOTA_Modifier_EarthSpirit_Petrify::GetOverrideAnimationRate;
  this->m_Functions[92].__delta = 0;
}


// CDOTA_Modifier_EarthSpirit_Petrify::GetOverrideAnimationRate  (line 2002, @0x0000000002c1c1e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_EarthSpirit_Petrify::GetOverrideAnimationRate(
        CDOTA_Modifier_EarthSpirit_Petrify *const this,
        const CModifierParams *const params)
{
  return 1uLL;
}


// CDOTA_Modifier_EarthSpirit_Petrify::CheckState  (line 2009, @0x0000000002c1c1f0, libserver.so)  // inlines: Disable, Enable
void __fastcall CDOTA_Modifier_EarthSpirit_Petrify::CheckState(
        CDOTA_Modifier_EarthSpirit_Petrify *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nEnabledStateMask; // rax
  uint64 v3; // rdx

  m_nEnabledStateMask = buffState->m_nEnabledStateMask;
  v3 = buffState->m_nDisabledStateMask & 0xFFFFFFFF7F7BFEDBLL;
  LOBYTE(m_nEnabledStateMask) = buffState->m_nEnabledStateMask & 0x7F;
  LOBYTE(v3) = buffState->m_nDisabledStateMask & 0x5B | 0x80;
  buffState->m_nDisabledStateMask = v3;
  buffState->m_nEnabledStateMask = m_nEnabledStateMask | 0x80840124;
}


// CDOTA_Ability_EarthSpirit_Magnetize::~CDOTA_Ability_EarthSpirit_Magnetize  (line 2031, @0x0000000002c98300, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_EarthSpirit_Magnetize::~CDOTA_Ability_EarthSpirit_Magnetize(
        CDOTA_Ability_EarthSpirit_Magnetize *const this)
{
  this->_vptr_IHandleEntity = &off_45A63B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_EarthSpirit_Magnetize::~CDOTA_Ability_EarthSpirit_Magnetize  (line 2031, @0x0000000002c98320, libserver.so)  // inlines: ~CDOTA_Ability_EarthSpirit_Magnetize
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_EarthSpirit_Magnetize::~CDOTA_Ability_EarthSpirit_Magnetize(
        CDOTA_Ability_EarthSpirit_Magnetize *const this)
{
  this->_vptr_IHandleEntity = &off_45A63B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_EarthSpirit_Magnetize::Schema_DynamicBinding  (line 2033, @0x0000000002c88410, libserver.so)
// globals: CDOTA_Ability_EarthSpirit_Magnetize::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_EarthSpirit_Magnetize::Schema_DynamicBinding(
        const CDOTA_Ability_EarthSpirit_Magnetize *const this)
{
  return CDOTA_Ability_EarthSpirit_Magnetize::s_pSchemaBinding;
}


// CDOTA_Ability_EarthSpirit_Magnetize::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2033, @0x0000000002c88420, libserver.so)
// globals: CDOTA_Ability_EarthSpirit_Magnetize::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_EarthSpirit_Magnetize::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_EarthSpirit_Magnetize::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_EarthSpirit_Magnetize::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_EarthSpirit_Magnetize::CEntityInstanceEntityClass::DestructInstance  (line 2033, @0x0000000002c88430, libserver.so)  // inlines: Destruct<CDOTA_Ability_EarthSpirit_Magnetize>
void __fastcall CDOTA_Ability_EarthSpirit_Magnetize::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_EarthSpirit_Magnetize::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_EarthSpirit_Magnetize::CEntityInstanceEntityClass::FreeInstance  (line 2033, @0x0000000002c88450, libserver.so)
void __fastcall CDOTA_Ability_EarthSpirit_Magnetize::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_EarthSpirit_Magnetize::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_EarthSpirit_Magnetize::CEntityInstanceEntityClass::CanAllocate  (line 2033, @0x0000000002c88470, libserver.so)
bool __fastcall CDOTA_Ability_EarthSpirit_Magnetize::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_EarthSpirit_Magnetize::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_EarthSpirit_Magnetize::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2033, @0x0000000002c88480, libserver.so)
// globals: CDOTA_Ability_EarthSpirit_Magnetize::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_EarthSpirit_Magnetize::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_EarthSpirit_Magnetize::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_EarthSpirit_Magnetize::s_pSchemaBinding;
}


// CDOTA_Ability_EarthSpirit_Magnetize::CEntityInstanceEntityClass::AllocateInstance  (line 2033, @0x0000000002c8f8a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_EarthSpirit_Magnetize::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_EarthSpirit_Magnetize::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_EarthSpirit_Magnetize::CEntityInstanceEntityClass::ConstructInstance  (line 2033, @0x0000000002c949b0, libserver.so)  // inlines: CDOTA_Ability_EarthSpirit_Magnetize, Construct<CDOTA_Ability_EarthSpirit_Magnetize>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_EarthSpirit_Magnetize::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_EarthSpirit_Magnetize::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45A63B0;
  }
  return p;
}


// CDOTA_Ability_EarthSpirit_Magnetize::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2033, @0x0000000002ca1e90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_EarthSpirit_Magnetize::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_EarthSpirit_Magnetize::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_EarthSpirit_Magnetize::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2033, @0x0000000002ca1eb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_EarthSpirit_Magnetize::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_EarthSpirit_Magnetize::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal  (line 2033, @0x0000000002cbf690, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "earth_spirit_magnetize", "CDOTA_Ability_EarthSpirit_Magnetize"
// globals: `guard variable for'CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass, CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_EarthSpirit_Magnetize::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClassInfo, CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClassInfo
CEntityClass *__cdecl CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass) != 0 )
  {
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_pClassInfo = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_flags = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_pInputs = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_nInputCount = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_pOutputs = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_nOutputCount = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_pGameClass = 0;
    CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass._vptr_CEntityClass = off_45A6330;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass);
    __cxa_atexit(
      CDOTA_Ability_EarthSpirit_Magnetize::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_EarthSpirit_MagnetizeClass != 0 )
    return &CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass;
  if ( `guard variable for'CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClassInfo,
      "CDOTA_Ability_EarthSpirit_Magnetize",
      "earth_spirit_magnetize",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClassInfo);
  }
  CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_pClassInfo = &CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClassInfo;
  CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_pBaseClassInfo = CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_EarthSpirit_MagnetizeClass = &CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass;
  CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClassInfo.m_pClass = &CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass;
  CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_EarthSpirit_MagnetizeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_EarthSpirit_Magnetize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_MagnetizeClass;
}


// CDOTA_Ability_EarthSpirit_Magnetize::OnSpellStart  (line 2052, @0x0000000002c6d3e0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::StartGesture, CBaseEntity::GetAbsOrigin, CDOTA_Ability_EarthSpirit_Magnetize::DoMagnetize, CDOTA_BaseNPC::UnitEmitSound
// strings: "cast_radius", "rock_explosion_radius", "Hero_EarthSpirit.Magnetize.Cast"
void __fastcall CDOTA_Ability_EarthSpirit_Magnetize::OnSpellStart(CDOTA_Ability_EarthSpirit_Magnetize *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  const Vector *AbsOrigin; // rax
  double v5; // xmm2_8
  __m128i v6; // xmm3
  CDOTA_BaseNPC *v7; // rax

  this->cast_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "cast_radius", -1, 0);
  this->rock_explosion_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "rock_explosion_radius", -1, 0);
  this->damage_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage_duration", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(Caster, 1515, 0.1, 0.1, 9, 0, 1.0);
  v3 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
  CDOTA_Ability_EarthSpirit_Magnetize::DoMagnetize(this, 0, *&AbsOrigin->x, AbsOrigin->z, v5, v6);
  v7 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v7, "Hero_EarthSpirit.Magnetize.Cast", 0.0, 0, 0);
}


// CDOTA_Ability_EarthSpirit_Magnetize::DoMagnetize  (line 2069, @0x0000000002c4f5d0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, Vector, VectorAdd, operator CBaseEntity*, operator CEntityInstance*, operator+, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetCaster, FindUnitsInRadius, CDOTABaseAbility::CreateAbilityParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::FindModifierByName, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_BaseNPC::UnitEmitSound (18 total)
// callers: CDOTA_Ability_EarthSpirit_Magnetize::OnSpellStart, CDOTA_Modifier_EarthSpirit_Magnetize::OnIntervalThink
// strings: "particles/units/heroes/hero_earth_spirit/espirit_stone_explosion.vpcf", "modifier_earthspirit_petrify", "modifier_earth_spirit_magnetize", "particles/units/heroes/hero_earth_spirit/espirit_stone_explosion_bolt.vpcf", "Hero_EarthSpirit.Magnetize.StoneBolt"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_EarthSpirit_Magnetize::DoMagnetize(
        CDOTA_Ability_EarthSpirit_Magnetize *const this,
        bool bStone,
        double a3,
        vec_t a4,
        double a5,
        __m128i a6)
{
  int rock_explosion_radius; // ebx
  float v8; // ebx
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v10; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  __int64 v14; // r12
  int v15; // ebx
  CHandle<CBaseEntity> *v16; // rdx
  uint32 m_Index; // eax
  __int16 v18; // cx
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CEntityInstance *m_pInstance; // r13
  CDOTA_Buff *ModifierByName; // rax
  float v23; // xmm1_4
  CDOTA_BaseNPC *v24; // rax
  char v25; // di
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  CDOTA_ParticleManager *v28; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  float damage_duration; // r12d
  int m_iAbilityID; // ebx
  CDOTA_BaseNPC *v32; // rax
  float v33; // xmm3_4
  int iIndex; // [rsp+28h] [rbp-98h]
  bool bAnyHeroesAffected; // [rsp+2Fh] [rbp-91h]
  Vector vLocationa; // [rsp+30h] [rbp-90h] BYREF
  double v38; // [rsp+40h] [rbp-80h]
  float v39; // [rsp+48h] [rbp-78h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+50h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v42; // [rsp+88h] [rbp-38h]

  vLocationa.z = a4;
  v42 = __readfsqword(0x28u);
  rock_explosion_radius = this->rock_explosion_radius;
  *&vLocationa.x = a3;
  entities.m_Size = 0;
  if ( !bStone )
    rock_explosion_radius = this->cast_radius;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  *a6.m128i_i32 = rock_explosion_radius;
  entities.m_Memory.m_nGrowSize = 0;
  v8 = COERCE_FLOAT(_mm_cvtsi128_si32(a6));
  Caster = CDOTABaseAbility::GetCaster(this);
  v10 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v10->m_iTeamNum.m_Value, &vLocationa, Caster, v8, &entities, 2, 3, &stru_40050, 0, 0);
  LODWORD(Caster) = CDOTABaseAbility::CreateAbilityParticleEffect(
                      this,
                      "particles/units/heroes/hero_earth_spirit/espirit_stone_explosion.vpcf",
                      2,
                      0,
                      0);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, Caster, 0, *&vLocationa.x, vLocationa.z);
  *&v38 = v8;
  *(&v38 + 1) = v8;
  v39 = v8;
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v12, Caster, 2, v38, v39);
  v13 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v13, Caster);
  if ( entities.m_Size <= 0 )
    goto LABEL_22;
  v14 = 0;
  v15 = 0;
  bAnyHeroesAffected = 0;
  do
  {
    while ( 1 )
    {
      v16 = &entities.m_Memory.m_pMemory[v14];
      m_Index = entities.m_Memory.m_pMemory[v14].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v18 = v16->m_Index;
        v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v16->m_Index) >> 9) & 0x3F];
        if ( v19 != 0 )
        {
          v20 = &v19[v18 & 0x1FF];
          if ( v20 != 0 && m_Index == v20->m_EHandle.m_Index )
          {
            m_pInstance = v20->m_pInstance;
            if ( v20->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
            {
              ModifierByName = CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_earthspirit_petrify", 0);
              if ( SBYTE3(m_pInstance[58]._vptr_IHandleEntity) >= 0 || ModifierByName != 0 )
                break;
            }
          }
        }
      }
      ++v15;
      ++v14;
      if ( entities.m_Size <= v15 )
        goto LABEL_19;
    }
    KeyValues::KeyValues(&kv, "modifier_earth_spirit_magnetize");
    KeyValues::SetFloat(&kv, "duration", v23);
    v24 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(m_pInstance, v24, this, "modifier_earth_spirit_magnetize", &kv, 0);
    v25 = bAnyHeroesAffected;
    if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
      v25 = 1;
    bAnyHeroesAffected = v25;
    if ( bStone )
    {
      iIndex = CDOTABaseAbility::CreateAbilityParticleEffect(
                 this,
                 "particles/units/heroes/hero_earth_spirit/espirit_stone_explosion_bolt.vpcf",
                 2,
                 0,
                 0);
      v26 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v26, iIndex, 1, m_pInstance, 1, 0, vec3_invalid, 1);
      *(&v38 + 1) = vLocationa.y + 0.0;
      v39 = vLocationa.z + 80.0;
      *&v38 = vLocationa.x + 0.0;
      v27 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v27, iIndex, 0, v38, v39);
      v28 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v28, iIndex);
      CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_EarthSpirit.Magnetize.StoneBolt", 0.0, 0, 0);
    }
    ++v15;
    ++v14;
    KeyValues::~KeyValues(&kv);
  }
  while ( entities.m_Size > v15 );
LABEL_19:
  if ( !bAnyHeroesAffected )
  {
LABEL_22:
    m_pAbilityData = this->m_pAbilityData;
    damage_duration = 0.75;
    if ( m_pAbilityData != 0 )
      goto LABEL_21;
LABEL_23:
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
    goto LABEL_21;
  }
  m_pAbilityData = this->m_pAbilityData;
  damage_duration = this->damage_duration;
  if ( m_pAbilityData == 0 )
    goto LABEL_23;
LABEL_21:
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  v32 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(
    g_pGameRules,
    v32,
    0,
    m_iAbilityID,
    0,
    0,
    *&vLocationa.x,
    vLocationa.z,
    damage_duration,
    v33);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Ability_EarthSpirit_Magnetize::GetAbilityDamageToTargetOverInterval  (line 2125, @0x0000000002c6b290, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_EarthSpirit_Magnetize::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_EarthSpirit_Magnetize *const this,
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
    fIntervala = fminf(fInterval, CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage_duration", -1, 0));
    fIntervalb = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_per_second", -1, 0) * fIntervala;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalb);
  }
  return result;
}


// CDOTA_Modifier_EarthSpirit_Magnetize::~CDOTA_Modifier_EarthSpirit_Magnetize  (line 2140, @0x0000000002cb6870, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_EarthSpirit_Magnetize::~CDOTA_Modifier_EarthSpirit_Magnetize(
        CDOTA_Modifier_EarthSpirit_Magnetize *const this)
{
  this->_vptr_CDOTA_Buff = &off_45A6E70;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hExplodedRocks);
  if ( (this->m_hExplodedRocks.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hExplodedRocks.m_Memory),
        (this->m_hExplodedRocks.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hExplodedRocks.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_EarthSpirit_Magnetize::~CDOTA_Modifier_EarthSpirit_Magnetize  (line 2140, @0x0000000002cb75a0, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_EarthSpirit_Magnetize, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_EarthSpirit_Magnetize::~CDOTA_Modifier_EarthSpirit_Magnetize(
        CDOTA_Modifier_EarthSpirit_Magnetize *const this)
{
  this->_vptr_CDOTA_Buff = &off_45A6E70;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hExplodedRocks);
  if ( (this->m_hExplodedRocks.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hExplodedRocks.m_Memory);
    if ( (this->m_hExplodedRocks.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hExplodedRocks.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_EarthSpirit_Magnetize::IsDebuff  (line 2145, @0x0000000002c88490, libserver.so)
bool __fastcall CDOTA_Modifier_EarthSpirit_Magnetize::IsDebuff(CDOTA_Modifier_EarthSpirit_Magnetize *const this)
{
  return 1;
}


// CDOTA_Modifier_EarthSpirit_Magnetize::GetAttributes  (line 2148, @0x0000000002c884a0, libserver.so)
int __fastcall CDOTA_Modifier_EarthSpirit_Magnetize::GetAttributes(CDOTA_Modifier_EarthSpirit_Magnetize *const this)
{
  return 4;
}


// CDOTA_Modifier_EarthSpirit_Magnetize::OnCreated  (line 2172, @0x0000000002c5c620, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, Vector
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::GetFloat, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::AddParticle
// strings: "rock_search_radius", "rock_explosion_delay", "cast_radius", "rock_explosion_radius", "particles/units/heroes/hero_earth_spirit/espirit_magnetic_aura.vpcf"
void __fastcall CDOTA_Modifier_EarthSpirit_Magnetize::OnCreated(
        CDOTA_Modifier_EarthSpirit_Magnetize *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  CDOTABaseAbility *v10; // rax
  float v11; // xmm1_4
  float v12; // xmm1_4
  int cast_radius; // r14d
  float v14; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax
  int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *v17; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v19; // rax
  CDOTA_ParticleManager *v20; // rax
  double v21; // [rsp+10h] [rbp-30h]

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->rock_search_radius, "rock_search_radius");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->damage_per_second, "damage_per_second");
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
    this->damage_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "damage_interval", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_3;
LABEL_7:
    this->rock_explosion_delay = 0.0;
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_4;
LABEL_8:
    this->damage_duration = 0.0;
    goto LABEL_5;
  }
  this->damage_interval = 0.0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
    goto LABEL_7;
LABEL_3:
  this->rock_explosion_delay = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "rock_explosion_delay", -1, 0);
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 == 0 )
    goto LABEL_8;
LABEL_4:
  this->damage_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8, "damage_duration", -1, 0);
LABEL_5:
  v9 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v9, &this->cast_radius, "cast_radius");
  v10 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v10, &this->rock_explosion_radius, "rock_explosion_radius");
  this->duration = KeyValues::GetFloat(pKV, "duration", v11);
  CDOTA_Buff::StartIntervalThink(this, 1.0, v12);
  this->m_bShowOverhead = 1;
  cast_radius = this->cast_radius;
  CDOTA_Buff::StartIntervalThink(this, 0.5 * this->damage_interval, v14);
  Parent = CDOTA_Buff::GetParent(this);
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_earth_spirit/espirit_magnetic_aura.vpcf",
                         1,
                         Parent,
                         0);
  v17 = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, BuffParticleEffect, 0, v17, 1, 0, vec3_invalid, 1);
  *&v21 = this->damage_duration;
  HIDWORD(v21) = LODWORD(v21);
  v19 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v19, BuffParticleEffect, 2, v21, *&v21);
  *&v21 = cast_radius;
  *(&v21 + 1) = cast_radius;
  v20 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v20, BuffParticleEffect, 3, v21, cast_radius);
  CDOTA_Buff::AddParticle(this, BuffParticleEffect, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_EarthSpirit_Magnetize::OnIntervalThink  (line 2201, @0x0000000002c7e620, libserver.so)  // inlines: AddToTail, CBroadcastRecipientFilter, CEntityHandle, CHandle, CReliableBroadcastRecipientFilter, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, FStrEq, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GetUnitName, GrowMemory, HasElement, IndexToIdentity, IsValid, LookupEntity, Set, SetMagnetized, String, ToCStr, ToDOTABaseNPC, Vector, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter, ~CUtlVector
// calls: CDOTA_Buff::GetCaster, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTA_BaseNPC::GetOpposingTeamNumber, GetGlobalTeam, CRecipientFilter::RemoveRecipientsByTeam, CRecipientFilter::AddRecipient, CRecipientFilter::AddRecipientsByTeam, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle (32 total)
// strings: "particles/units/heroes/hero_morphling/morphling_replicate_overhead_timer.vpcf", "Hero_EarthSpirit.Magnetize.Debris", "particles/units/heroes/hero_earth_spirit/espirit_magnetic_ring.vpcf", "attach_hitloc", "modifier_earthspirit_petrify", "modifier_earth_spirit_stone_thinker" (10 total)
// globals: CEntityHandle::gm_pEntityList, `typeinfo for'CDOTA_Ability_EarthSpirit_Magnetize, `typeinfo for'CDOTA_Modifier_EarthSpirit_StoneThinker, `typeinfo for'CDOTA_Modifier_EarthSpirit_Petrify
void __fastcall CDOTA_Modifier_EarthSpirit_Magnetize::OnIntervalThink(CDOTA_Modifier_EarthSpirit_Magnetize *const this)
{
  bool m_bShowOverhead; // al
  CDOTA_BaseNPC *Caster; // rax
  int OpposingTeamNumber; // eax
  CTeam *GlobalTeam; // rax
  CDOTA_BaseNPC *v6; // rax
  CTeam *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  const CEntityInstance *v9; // rax
  CTeam *v10; // rax
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  float v13; // xmm0_4
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  CDOTA_ParticleManager *v16; // rax
  CDOTABaseAbility *Ability; // r12
  CDOTA_BaseNPC *v18; // rbx
  CDOTA_BaseNPC *v19; // rax
  __m128i v20; // xmm2
  float v21; // r14d
  CDOTA_BaseNPC *v22; // r12
  CDOTA_BaseNPC *v23; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  int BuffParticleEffect; // eax
  int v29; // r12d
  CDOTA_BaseNPC *v30; // r14
  CDOTA_ParticleManager *v31; // rax
  CDOTA_BaseNPC *v32; // r14
  CDOTA_ParticleManager *v33; // rax
  CDOTA_ParticleManager *v34; // rax
  __int64 v35; // rbx
  CHandle<CBaseEntity> *v36; // rdx
  uint32 m_Index; // eax
  __int16 v38; // cx
  CEntityIdentity *v39; // rdx
  CEntityIdentity *v40; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  const char *m_pAsString; // rsi
  CDOTABaseAbility *v43; // rax
  CDOTA_Ability_EarthSpirit_Magnetize *v44; // r15
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v46; // rax
  _BYTE *v47; // r14
  CEntityIdentity *m_pEntity; // rdx
  __int16 v49; // si
  int v50; // eax
  CDOTA_ParticleManager *v51; // rax
  CDOTA_ParticleManager *v52; // rax
  const Vector *v53; // rax
  double v54; // xmm2_8
  __m128i v55; // xmm3
  CDOTA_BaseNPC *v56; // rax
  CDOTA_BaseNPC *v57; // rax
  int v58; // eax
  __int16 v59; // cx
  __int64 m_Size; // r14
  int v61; // eax
  CHandle<CBaseEntity> *v62; // rax
  int v63; // r14d
  CDOTA_ParticleManager *v64; // rax
  CDOTA_ParticleManager *v65; // rax
  const Vector *v66; // rax
  double v67; // xmm2_8
  __m128i v68; // xmm3
  CDOTA_Buff *v69; // rax
  CEntityIdentity *v70; // [rsp+40h] [rbp-1B0h]
  float pStoneBuffa; // [rsp+48h] [rbp-1A8h]
  CDOTA_Modifier_EarthSpirit_StoneThinker *pStoneBuff; // [rsp+48h] [rbp-1A8h]
  int pStoneBuffb; // [rsp+48h] [rbp-1A8h]
  double v74; // [rsp+50h] [rbp-1A0h] BYREF
  float v75; // [rsp+58h] [rbp-198h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+60h] [rbp-190h] BYREF
  CReliableBroadcastRecipientFilter filter; // [rsp+80h] [rbp-170h] BYREF
  unsigned __int64 v78; // [rsp+1B8h] [rbp-38h]

  v78 = __readfsqword(0x28u);
  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    m_bShowOverhead = this->m_bShowOverhead;
    if ( m_bShowOverhead )
    {
      CRecipientFilter::CRecipientFilter(&filter);
      filter._vptr_IRecipientFilter = &off_3FB63F0;
      CRecipientFilter::AddAllPlayers(&filter);
      filter._vptr_IRecipientFilter = &off_3FCB130;
      CRecipientFilter::MakeReliable(&filter);
      Caster = CDOTA_Buff::GetCaster(this);
      OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(Caster);
      GlobalTeam = GetGlobalTeam(OpposingTeamNumber);
      CRecipientFilter::RemoveRecipientsByTeam(&filter, GlobalTeam);
      v6 = CDOTA_Buff::GetCaster(this);
      v7 = GetGlobalTeam(v6->m_iTeamNum.m_Value);
      CRecipientFilter::RemoveRecipientsByTeam(&filter, v7);
      v8 = CDOTA_Buff::GetCaster(this);
      v9 = (*(v8->_vptr_IHandleEntity + 413))(v8);
      CRecipientFilter::AddRecipient(&filter, v9);
      v10 = GetGlobalTeam(1);
      CRecipientFilter::AddRecipientsByTeam(&filter, v10);
      Parent = CDOTA_Buff::GetParent(this);
      ParticleManager = GetParticleManager();
      LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                          ParticleManager,
                          "particles/units/heroes/hero_morphling/morphling_replicate_overhead_timer.vpcf",
                          7,
                          Parent,
                          &filter,
                          0);
      v13 = (*(this->_vptr_CDOTA_Buff + 33))(this);
      entities.m_Size = 0;
      *(&entities.m_Size + 1) = floorf(v13);
      v14 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v14, Parent, 1, *&entities.m_Size, 0.0);
      *&entities.m_Size = 0x40000000;
      LODWORD(entities.m_Memory.m_pMemory) = 0;
      v15 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v15, Parent, 2, COERCE_DOUBLE(0x40000000), 0.0);
      v16 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v16, Parent);
      filter._vptr_IRecipientFilter = &off_3FB63F0;
      CRecipientFilter::~CRecipientFilter(&filter);
      m_bShowOverhead = this->m_bShowOverhead;
    }
    this->m_bShowOverhead = !m_bShowOverhead;
    pStoneBuffa = (this->damage_per_second / 2);
    Ability = CDOTA_Buff::GetAbility(this);
    v18 = CDOTA_Buff::GetParent(this);
    v19 = CDOTA_Buff::GetCaster(this);
    ApplyDamage(v19, v18, Ability, pStoneBuffa, 2, 0);
    *v20.m128i_i32 = this->rock_search_radius;
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    v21 = COERCE_FLOAT(_mm_cvtsi128_si32(v20));
    v22 = CDOTA_Buff::GetCaster(this);
    v23 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v23);
    v25 = CDOTA_Buff::GetCaster(this);
    FindUnitsInRadius(v25->m_iTeamNum.m_Value, AbsOrigin, v22, v21, &entities, 3, 35, 262208, 0, 0);
    if ( CDOTA_Buff::GetParent(this) != 0 )
    {
      if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 1) != 0 )
      {
        v56 = CDOTA_Buff::GetParent(this);
        CDOTA_BaseNPC::UnitEmitSound(v56, "Hero_EarthSpirit.Magnetize.Target.Tick", 0.0, 0, 0);
        v57 = CDOTA_Buff::GetParent(this);
        BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                               this,
                               "particles/units/heroes/hero_earth_spirit/espirit_magnetize_target.vpcf",
                               1,
                               v57,
                               0);
      }
      else
      {
        v26 = CDOTA_Buff::GetParent(this);
        CDOTA_BaseNPC::UnitEmitSound(v26, "Hero_EarthSpirit.Magnetize.Debris", 0.0, 0, 0);
        v27 = CDOTA_Buff::GetParent(this);
        BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                               this,
                               "particles/units/heroes/hero_earth_spirit/espirit_magnetic_ring.vpcf",
                               1,
                               v27,
                               0);
      }
      v29 = BuffParticleEffect;
      v30 = CDOTA_Buff::GetParent(this);
      v31 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v31, v29, 0, v30, 1, 0, vec3_invalid, 1);
      v32 = CDOTA_Buff::GetParent(this);
      v33 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v33, v29, 1, v32, 5, "attach_hitloc", vec3_invalid, 1);
      *&v74 = this->rock_search_radius;
      HIDWORD(v74) = LODWORD(v74);
      v75 = *&v74;
      v34 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v34, v29, 2, v74, *&v74);
      CDOTA_Buff::AddParticle(this, v29, 0, 0, -1, 0, 0);
    }
    if ( entities.m_Size > 0 )
    {
      v35 = 0;
      while ( 1 )
      {
        v36 = &entities.m_Memory.m_pMemory[v35];
        m_Index = v36->m_Index;
        if ( v36->m_Index + 2 <= 1 )
          goto LABEL_10;
        v38 = v36->m_Index;
        v39 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v36->m_Index) >> 9) & 0x3F];
        if ( v39 == 0 )
          goto LABEL_10;
        v40 = &v39[v38 & 0x1FF];
        if ( v40 == 0 )
          goto LABEL_10;
        if ( m_Index != v40->m_EHandle.m_Index )
          goto LABEL_10;
        m_pInstance = v40->m_pInstance;
        if ( v40->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC )
          goto LABEL_10;
        m_pAsString = m_pInstance->m_iszUnitName.m_Value.u.m_pAsString;
        if ( (m_pAsString == 0
           || m_pAsString != "npc_dota_earth_spirit_stone" && strcmp(m_pAsString, "npc_dota_earth_spirit_stone") != 0)
          && CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_earthspirit_petrify", 0) == 0 )
        {
          goto LABEL_10;
        }
        v43 = CDOTA_Buff::GetAbility(this);
        v44 = v43 != 0
            ? __dynamic_cast(
                v43,
                &`typeinfo for'CDOTABaseAbility,
                &`typeinfo for'CDOTA_Ability_EarthSpirit_Magnetize,
                0)
            : 0LL;
        ModifierByName = CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_earth_spirit_stone_thinker", 0);
        pStoneBuff = ModifierByName != 0
                   ? __dynamic_cast(
                       ModifierByName,
                       &`typeinfo for'CDOTA_Buff,
                       &`typeinfo for'CDOTA_Modifier_EarthSpirit_StoneThinker,
                       0)
                   : 0LL;
        v46 = CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_earthspirit_petrify", 0);
        v47 = v46 != 0
            ? __dynamic_cast(v46, &`typeinfo for'CDOTA_Buff, &`typeinfo for'CDOTA_Modifier_EarthSpirit_Petrify, 0)
            : 0LL;
        if ( v44 == 0 )
          goto LABEL_10;
        LODWORD(v74) = -1;
        m_pEntity = m_pInstance->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v49 = 0x7FFF;
          v50 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v49 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(v74) = v49 | LOWORD(v74) & 0x8000;
          LODWORD(v74) = (v50 << 15) | LOWORD(v74) & 0x7FFF;
        }
        v70 = m_pEntity;
        if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
               &this->m_hExplodedRocks,
               &v74) < 0
          && pStoneBuff != 0
          && !pStoneBuff->m_bHasBeenMagnetized )
        {
          LODWORD(v74) = -1;
          if ( v70 != 0 )
          {
            v58 = (v70->m_EHandle.m_Index >> 15) - (v70->m_flags & 1);
            v59 = 0x7FFF;
            if ( v70->m_EHandle.m_Index != -1 )
              v59 = v70->m_EHandle.m_Index & 0x7FFF;
            LOWORD(v74) = v59 | LOWORD(v74) & 0x8000;
            LODWORD(v74) = (v58 << 15) | LOWORD(v74) & 0x7FFF;
          }
          m_Size = this->m_hExplodedRocks.m_Size;
          v61 = this->m_hExplodedRocks.m_Size;
          if ( m_Size == this->m_hExplodedRocks.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hExplodedRocks.m_Memory, 1);
            v61 = this->m_hExplodedRocks.m_Size;
          }
          this->m_hExplodedRocks.m_Size = v61 + 1;
          v62 = &this->m_hExplodedRocks.m_Memory.m_pMemory[m_Size];
          if ( v62 != 0 )
            v62->m_Index = LODWORD(v74);
          v63 = CDOTA_Buff::CreateBuffParticleEffect(
                  this,
                  "particles/units/heroes/hero_earth_spirit/espirit_stoneismagnetized_xpld.vpcf",
                  1,
                  m_pInstance,
                  0);
          v64 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v64, v63, 0, m_pInstance, 1, 0, vec3_invalid, 1);
          *&v74 = this->rock_explosion_delay;
          HIDWORD(v74) = LODWORD(v74);
          v75 = *&v74;
          v65 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(v65, v63, 2, v74, v75);
          CDOTA_Buff::AddParticle(this, v63, 0, 0, -1, 0, 0);
          v66 = CBaseEntity::GetAbsOrigin(m_pInstance);
          CDOTA_Ability_EarthSpirit_Magnetize::DoMagnetize(v44, 1, *&v66->x, v66->z, v67, v68);
          pStoneBuff->m_bHasBeenMagnetized = 1;
          v69 = CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_earth_spirit_stone_thinker", 0);
          if ( v69 != 0 )
            (*(v69->_vptr_CDOTA_Buff + 63))(v69, 1, this->rock_explosion_delay);
          goto LABEL_10;
        }
        if ( v47 != 0 && v47[2988] == 0 )
        {
          pStoneBuffb = CDOTA_Buff::CreateBuffParticleEffect(
                          this,
                          "particles/units/heroes/hero_earth_spirit/espirit_stoneismagnetized_xpld.vpcf",
                          1,
                          m_pInstance,
                          0);
          v51 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v51, pStoneBuffb, 0, m_pInstance, 1, 0, vec3_invalid, 1);
          *&v74 = this->rock_explosion_delay;
          HIDWORD(v74) = LODWORD(v74);
          v75 = *&v74;
          v52 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(v52, pStoneBuffb, 2, v74, v75);
          CDOTA_Buff::AddParticle(this, pStoneBuffb, 0, 0, -1, 0, 0);
          v53 = CBaseEntity::GetAbsOrigin(m_pInstance);
          CDOTA_Ability_EarthSpirit_Magnetize::DoMagnetize(v44, 1, *&v53->x, v53->z, v54, v55);
          v47[2988] = 1;
          if ( entities.m_Size <= ++v35 )
            break;
        }
        else
        {
LABEL_10:
          if ( entities.m_Size <= ++v35 )
            break;
        }
      }
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
}


// CDOTA_Modifier_EarthSpirit_Magnetize::OnDestroy  (line 2296, @0x0000000002c20c10, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound
// strings: "Hero_EarthSpirit.Magnetize.End"
void __fastcall CDOTA_Modifier_EarthSpirit_Magnetize::OnDestroy(CDOTA_Modifier_EarthSpirit_Magnetize *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(Parent, "Hero_EarthSpirit.Magnetize.End", 0.0, 0, 0);
}


// CDOTA_Ability_EarthSpirit_Petrify::~CDOTA_Ability_EarthSpirit_Petrify  (line 2308, @0x0000000002c98350, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_EarthSpirit_Petrify::~CDOTA_Ability_EarthSpirit_Petrify(
        CDOTA_Ability_EarthSpirit_Petrify *const this)
{
  this->_vptr_IHandleEntity = &off_45A71D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_EarthSpirit_Petrify::~CDOTA_Ability_EarthSpirit_Petrify  (line 2308, @0x0000000002c98370, libserver.so)  // inlines: ~CDOTA_Ability_EarthSpirit_Petrify
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_EarthSpirit_Petrify::~CDOTA_Ability_EarthSpirit_Petrify(
        CDOTA_Ability_EarthSpirit_Petrify *const this)
{
  this->_vptr_IHandleEntity = &off_45A71D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_EarthSpirit_Petrify::Schema_DynamicBinding  (line 2310, @0x0000000002c884b0, libserver.so)
// globals: CDOTA_Ability_EarthSpirit_Petrify::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_EarthSpirit_Petrify::Schema_DynamicBinding(
        const CDOTA_Ability_EarthSpirit_Petrify *const this)
{
  return CDOTA_Ability_EarthSpirit_Petrify::s_pSchemaBinding;
}


// CDOTA_Ability_EarthSpirit_Petrify::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2310, @0x0000000002c884c0, libserver.so)
// globals: CDOTA_Ability_EarthSpirit_Petrify::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_EarthSpirit_Petrify::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_EarthSpirit_Petrify::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_EarthSpirit_Petrify::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_EarthSpirit_Petrify::CEntityInstanceEntityClass::DestructInstance  (line 2310, @0x0000000002c884d0, libserver.so)  // inlines: Destruct<CDOTA_Ability_EarthSpirit_Petrify>
void __fastcall CDOTA_Ability_EarthSpirit_Petrify::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_EarthSpirit_Petrify::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_EarthSpirit_Petrify::CEntityInstanceEntityClass::FreeInstance  (line 2310, @0x0000000002c884f0, libserver.so)
void __fastcall CDOTA_Ability_EarthSpirit_Petrify::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_EarthSpirit_Petrify::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_EarthSpirit_Petrify::CEntityInstanceEntityClass::CanAllocate  (line 2310, @0x0000000002c88510, libserver.so)
bool __fastcall CDOTA_Ability_EarthSpirit_Petrify::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_EarthSpirit_Petrify::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_EarthSpirit_Petrify::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2310, @0x0000000002c88520, libserver.so)
// globals: CDOTA_Ability_EarthSpirit_Petrify::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_EarthSpirit_Petrify::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_EarthSpirit_Petrify::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_EarthSpirit_Petrify::s_pSchemaBinding;
}


// CDOTA_Ability_EarthSpirit_Petrify::CEntityInstanceEntityClass::AllocateInstance  (line 2310, @0x0000000002c8f8e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_EarthSpirit_Petrify::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_EarthSpirit_Petrify::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_EarthSpirit_Petrify::CEntityInstanceEntityClass::ConstructInstance  (line 2310, @0x0000000002c949e0, libserver.so)  // inlines: CDOTA_Ability_EarthSpirit_Petrify, Construct<CDOTA_Ability_EarthSpirit_Petrify>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_EarthSpirit_Petrify::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_EarthSpirit_Petrify::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45A71D0;
  }
  return p;
}


// CDOTA_Ability_EarthSpirit_Petrify::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2310, @0x0000000002ca1ee0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_EarthSpirit_Petrify::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_EarthSpirit_Petrify::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_EarthSpirit_Petrify::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2310, @0x0000000002ca1f00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_EarthSpirit_Petrify::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_EarthSpirit_Petrify::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_EarthSpirit_Petrify::GetEntityClassInternal  (line 2310, @0x0000000002cb9fc0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "earth_spirit_petrify", "CDOTA_Ability_EarthSpirit_Petrify"
// globals: `guard variable for'CDOTA_Ability_EarthSpirit_Petrify::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_PetrifyClass, CDOTA_Ability_EarthSpirit_Petrify::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_PetrifyClass, __dso_handle, CDOTA_Ability_EarthSpirit_Petrify::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_EarthSpirit_Petrify::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_PetrifyClassInfo, CDOTA_Ability_EarthSpirit_Petrify::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_PetrifyClassInfo
CEntityClass *__cdecl CDOTA_Ability_EarthSpirit_Petrify::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_EarthSpirit_Petrify::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_PetrifyClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_EarthSpirit_Petrify::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_PetrifyClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_EarthSpirit_Petrify::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_PetrifyClass);
    CDOTA_Ability_EarthSpirit_Petrify::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_PetrifyClass._vptr_CEntityClass = off_45A7150;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_EarthSpirit_Petrify::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_PetrifyClass);
    __cxa_atexit(
      CDOTA_Ability_EarthSpirit_Petrify::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_EarthSpirit_Petrify::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_PetrifyClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_EarthSpirit_PetrifyClass != 0 )
    return &CDOTA_Ability_EarthSpirit_Petrify::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_PetrifyClass;
  if ( `guard variable for'CDOTA_Ability_EarthSpirit_Petrify::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_PetrifyClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_EarthSpirit_Petrify::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_PetrifyClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_EarthSpirit_Petrify::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_PetrifyClassInfo,
      "CDOTA_Ability_EarthSpirit_Petrify",
      "earth_spirit_petrify",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_EarthSpirit_Petrify::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_PetrifyClassInfo);
  }
  CDOTA_Ability_EarthSpirit_Petrify::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_PetrifyClass.m_pClassInfo = &CDOTA_Ability_EarthSpirit_Petrify::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_PetrifyClassInfo;
  CDOTA_Ability_EarthSpirit_Petrify::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_PetrifyClass.m_pBaseClassInfo = CDOTA_Ability_EarthSpirit_Petrify::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_PetrifyClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_EarthSpirit_PetrifyClass = &CDOTA_Ability_EarthSpirit_Petrify::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_PetrifyClass;
  CDOTA_Ability_EarthSpirit_Petrify::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_EarthSpirit_PetrifyClassInfo.m_pClass = &CDOTA_Ability_EarthSpirit_Petrify::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_PetrifyClass;
  CDOTA_Ability_EarthSpirit_Petrify::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_PetrifyClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_EarthSpirit_PetrifyClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_EarthSpirit_Petrify::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_EarthSpirit_PetrifyClass;
}


// CDOTA_Ability_EarthSpirit_Petrify::Spawn  (line 2314, @0x0000000002c99900, libserver.so)
// calls: CDOTABaseAbility::Spawn, CDOTABaseAbility::SetHidden
void __fastcall CDOTA_Ability_EarthSpirit_Petrify::Spawn(
        CDOTA_Ability_EarthSpirit_Petrify *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTABaseAbility::Spawn(this, pKeyValues);
  CDOTABaseAbility::SetHidden(this, 1);
}


// CDOTA_Ability_EarthSpirit_Petrify::YouForgotToImplementOrDeclareServerClass  (line 2327, @0x0000000002c1c220, libserver.so)
int __fastcall CDOTA_Ability_EarthSpirit_Petrify::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_EarthSpirit_Petrify *const this)
{
  return 0;
}


// CDOTA_Ability_EarthSpirit_Petrify::GetServerClass  (line 2327, @0x0000000002c34f70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_EarthSpirit_Petrify::GetServerClass(
        CDOTA_Ability_EarthSpirit_Petrify *const this)
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


// CDOTA_Ability_EarthSpirit_Petrify::CastFilterResult  (line 2336, @0x0000000002c21b60, libserver.so)
// calls: CDOTABaseAbility::GetCaster, UnitFilter
int __fastcall CDOTA_Ability_EarthSpirit_Petrify::CastFilterResult(
        CDOTA_Ability_EarthSpirit_Petrify *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  int v5; // ebx

  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = UnitFilter(pTarget, 3, 1, 0x20000, Caster->m_iTeamNum.m_Value);
  if ( v5 == 0 && pTarget == CDOTABaseAbility::GetCaster(this) )
    return 23;
  return v5;
}


// CDOTA_Ability_EarthSpirit_Petrify::GetCustomCastError  (line 2350, @0x0000000002c1e910, libserver.so)
// calls: CDOTABaseAbility::GetCaster
// strings: "#dota_hud_error_cant_cast_on_self"
const char *__fastcall CDOTA_Ability_EarthSpirit_Petrify::GetCustomCastError(
        CDOTA_Ability_EarthSpirit_Petrify *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  const char *v4; // rdx

  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = "#dota_hud_error_cant_cast_on_self";
  if ( Caster != pTarget )
    return "";
  return v4;
}


// CDOTA_Ability_EarthSpirit_Petrify::OnSpellStart  (line 2360, @0x0000000002c53eb0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetTeamNumber, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_earthspirit_petrify", "Hero_EarthSpirit.Petrify"
void __fastcall CDOTA_Ability_EarthSpirit_Petrify::OnSpellStart(CDOTA_Ability_EarthSpirit_Petrify *const this)
{
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v3; // r12
  unsigned __int8 m_Value; // r13
  float v5; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
    v3 = CursorTarget;
  else
    v3 = 0;
  m_Value = v3->m_iTeamNum.m_Value;
  if ( m_Value == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value
    || (BYTE1(v3[3].m_vecVelocity.m_Value.x) & 2) == 0 && !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1) )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_earthspirit_petrify");
    KeyValues::SetFloat(&kv, "duration", v5);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_earthspirit_petrify", &kv, 0);
    CDOTA_BaseNPC::UnitEmitSound(v3, "Hero_EarthSpirit.Petrify", 0.0, 0, 0);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Unit_Hero_EarthSpirit::~CDOTA_Unit_Hero_EarthSpirit  (line 2383, @0x0000000002c99e10, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_EarthSpirit::~CDOTA_Unit_Hero_EarthSpirit(CDOTA_Unit_Hero_EarthSpirit *const this)
{
  this->_vptr_IHandleEntity = &off_45A7CD0;
  this->_vptr_INextBotEventResponder = &off_45A8CB0;
  this->_vptr_CObstructionObject = &off_45A8FE0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_EarthSpirit::~CDOTA_Unit_Hero_EarthSpirit  (line 2383, @0x0000000002c99e50, libserver.so)  // inlines: ~CDOTA_Unit_Hero_EarthSpirit
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_EarthSpirit::~CDOTA_Unit_Hero_EarthSpirit(CDOTA_Unit_Hero_EarthSpirit *const this)
{
  this->_vptr_IHandleEntity = &off_45A7CD0;
  this->_vptr_INextBotEventResponder = &off_45A8CB0;
  this->_vptr_CObstructionObject = &off_45A8FE0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_EarthSpirit::Schema_DynamicBinding  (line 2385, @0x0000000002c88530, libserver.so)
// globals: CDOTA_Unit_Hero_EarthSpirit::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_EarthSpirit::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_EarthSpirit *const this)
{
  return CDOTA_Unit_Hero_EarthSpirit::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_EarthSpirit::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2385, @0x0000000002c88560, libserver.so)
// globals: CDOTA_Unit_Hero_EarthSpirit::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_EarthSpirit::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_EarthSpirit::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_EarthSpirit::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_EarthSpirit::CEntityInstanceEntityClass::DestructInstance  (line 2385, @0x0000000002c88570, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_EarthSpirit>
void __fastcall CDOTA_Unit_Hero_EarthSpirit::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_EarthSpirit::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_EarthSpirit::CEntityInstanceEntityClass::FreeInstance  (line 2385, @0x0000000002c88590, libserver.so)
void __fastcall CDOTA_Unit_Hero_EarthSpirit::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_EarthSpirit::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_EarthSpirit::CEntityInstanceEntityClass::CanAllocate  (line 2385, @0x0000000002c885b0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_EarthSpirit::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_EarthSpirit::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_EarthSpirit::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2385, @0x0000000002c885c0, libserver.so)
// globals: CDOTA_Unit_Hero_EarthSpirit::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_EarthSpirit::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_EarthSpirit::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_EarthSpirit::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_EarthSpirit::CEntityInstanceEntityClass::AllocateInstance  (line 2385, @0x0000000002c8f920, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_EarthSpirit::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_EarthSpirit::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_EarthSpirit::CEntityInstanceEntityClass::ConstructInstance  (line 2385, @0x0000000002c93f50, libserver.so)  // inlines: CDOTA_Unit_Hero_EarthSpirit, Construct<CDOTA_Unit_Hero_EarthSpirit>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_EarthSpirit::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_EarthSpirit::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_45A7CD0;
    *(p + 236) = &off_45A8CB0;
    *(p + 257) = &off_45A8FE0;
  }
  return p;
}


// CDOTA_Unit_Hero_EarthSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2385, @0x0000000002ca3630, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_EarthSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_EarthSpirit::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_EarthSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2385, @0x0000000002ca37e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_EarthSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_EarthSpirit::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_EarthSpirit::GetEntityClassInternal  (line 2385, @0x0000000002cbe160, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "npc_dota_hero_earth_spirit", "CDOTA_Unit_Hero_EarthSpirit"
// globals: `guard variable for'CDOTA_Unit_Hero_EarthSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EarthSpiritClass, CDOTA_Unit_Hero_EarthSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EarthSpiritClass, __dso_handle, CDOTA_Unit_Hero_EarthSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_EarthSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EarthSpiritClassInfo, CDOTA_Unit_Hero_EarthSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EarthSpiritClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_EarthSpirit::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_EarthSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EarthSpiritClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_EarthSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EarthSpiritClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_EarthSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EarthSpiritClass);
    CDOTA_Unit_Hero_EarthSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EarthSpiritClass._vptr_CEntityClass = off_45A7C50;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_EarthSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EarthSpiritClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_EarthSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_EarthSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EarthSpiritClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_EarthSpiritClass != 0 )
    return &CDOTA_Unit_Hero_EarthSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EarthSpiritClass;
  if ( `guard variable for'CDOTA_Unit_Hero_EarthSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EarthSpiritClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_EarthSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EarthSpiritClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_EarthSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EarthSpiritClassInfo,
      "CDOTA_Unit_Hero_EarthSpirit",
      "npc_dota_hero_earth_spirit",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_EarthSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EarthSpiritClassInfo);
  }
  CDOTA_Unit_Hero_EarthSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EarthSpiritClass.m_pClassInfo = &CDOTA_Unit_Hero_EarthSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EarthSpiritClassInfo;
  CDOTA_Unit_Hero_EarthSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EarthSpiritClass.m_pBaseClassInfo = CDOTA_Unit_Hero_EarthSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EarthSpiritClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_EarthSpiritClass = &CDOTA_Unit_Hero_EarthSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EarthSpiritClass;
  CDOTA_Unit_Hero_EarthSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EarthSpiritClassInfo.m_pClass = &CDOTA_Unit_Hero_EarthSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EarthSpiritClass;
  CDOTA_Unit_Hero_EarthSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EarthSpiritClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_EarthSpiritClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_EarthSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EarthSpiritClass;
}


// CDOTA_Unit_Hero_EarthSpirit::HasFlyingVision  (line 2389, @0x0000000002c885d0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_EarthSpirit::HasFlyingVision(CDOTA_Unit_Hero_EarthSpirit *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_EarthSpirit::ShouldDoFlyHeightVisual  (line 2390, @0x0000000002c885e0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_EarthSpirit::ShouldDoFlyHeightVisual(CDOTA_Unit_Hero_EarthSpirit *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_EarthSpirit::Spawn  (line 2402, @0x0000000002c997e0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Spawn, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "earth_spirit_stone_caller", "particles/units/heroes/hero_earth_spirit/espirit_spawn.vpcf", "attach_hitloc"
void __fastcall CDOTA_Unit_Hero_EarthSpirit::Spawn(
        CDOTA_Unit_Hero_EarthSpirit *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  const Vector *AbsOrigin; // r13
  CDOTA_ParticleManager *v7; // rax
  CDOTA_ParticleManager *v8; // rax
  CDOTA_ParticleManager *v9; // rax

  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
  this->m_bHadScepter = 0;
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "earth_spirit_stone_caller", 0);
  if ( AbilityByName == 0 || AbilityByName->m_iLevel.m_Value != 0 )
  {
    if ( this->m_bIsIllusion.m_Value )
      return;
LABEL_6:
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_earth_spirit/espirit_spawn.vpcf",
                 2,
                 this,
                 0,
                 0);
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    v7 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v7, Particle, 1, this, 5, "attach_hitloc", *AbsOrigin, 1);
    v8 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v8, Particle, 0, this, 1, 0, vec3_invalid, 1);
    v9 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v9, Particle);
    return;
  }
  CDOTABaseAbility::UpgradeAbility(AbilityByName, 1);
  if ( !this->m_bIsIllusion.m_Value )
    goto LABEL_6;
}


// CDOTA_Unit_Hero_EarthSpirit::YouForgotToImplementOrDeclareServerClass  (line 2435, @0x0000000002c1c230, libserver.so)
int __fastcall CDOTA_Unit_Hero_EarthSpirit::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_EarthSpirit *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_EarthSpirit::GetServerClass  (line 2435, @0x0000000002c35770, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_EarthSpirit::GetServerClass(CDOTA_Unit_Hero_EarthSpirit *const this)
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


// CDOTA_Unit_Hero_EarthSpirit::Precache  (line 2444, @0x0000000002c22580, libserver.so)
// calls: PrecacheParticleSystem, CDOTA_BaseNPC_Hero::Precache
// strings: "particles/units/heroes/hero_morphling/morphling_replicate_overhead_timer.vpcf"
void __fastcall CDOTA_Unit_Hero_EarthSpirit::Precache(
        CDOTA_Unit_Hero_EarthSpirit *const this,
        const CEntityPrecacheContext *pContext)
{
  PrecacheParticleSystem("particles/units/heroes/hero_morphling/morphling_replicate_overhead_timer.vpcf", pContext);
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
}


// CDOTA_Unit_Hero_EarthSpirit::Event_Killed  (line 2452, @0x0000000002c3d410, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Event_Killed, CDOTA_BaseNPC::FindAbilityByName, __dynamic_cast, CDOTA_Ability_EarthSpirit_RollingBoulder::DestroyBoulderEffects, CDOTA_BaseNPC::RemoveAllGestures
// strings: "earth_spirit_rolling_boulder"
// globals: `typeinfo for'CDOTA_Ability_EarthSpirit_RollingBoulder
void __fastcall CDOTA_Unit_Hero_EarthSpirit::Event_Killed(
        CDOTA_Unit_Hero_EarthSpirit *const this,
        const CTakeDamageInfo *const info)
{
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_Ability_EarthSpirit_RollingBoulder *v4; // rax

  CDOTA_BaseNPC_Hero::Event_Killed(this, info);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "earth_spirit_rolling_boulder", 0);
  if ( AbilityByName != 0 )
  {
    v4 = __dynamic_cast(
           AbilityByName,
           &`typeinfo for'CDOTABaseAbility,
           &`typeinfo for'CDOTA_Ability_EarthSpirit_RollingBoulder,
           0);
    if ( v4 != 0 )
      CDOTA_Ability_EarthSpirit_RollingBoulder::DestroyBoulderEffects(v4);
  }
  CDOTA_BaseNPC::RemoveAllGestures(this);
}


// CDOTA_Unit_Hero_EarthSpirit::OnItemEquipped  (line 2470, @0x0000000002c2b8a0, libserver.so)  // inlines: FStrEq, GetAbilityName, GetPlayerOwnerID, NetworkStateChanged, Set, SetDroppable, SetSellable, _V_strcmp, operator=<bool>
// calls: CDOTA_BaseNPC::OnItemEquipped, CDOTA_Item::ExpireSellback, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::SetHidden, CDOTABaseAbility::UpgradeAbility
// strings: "item_ultimate_scepter", "earth_spirit_petrify"
void __fastcall CDOTA_Unit_Hero_EarthSpirit::OnItemEquipped(CDOTA_Unit_Hero_EarthSpirit *const this, CDOTA_Item *pItem)
{
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rsi
  int m_Value; // r13d
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v8; // rbx

  CDOTA_BaseNPC::OnItemEquipped(this, pItem);
  if ( pItem != 0 && !this->m_bHadScepter )
  {
    m_pAbilityData = pItem->m_pAbilityData;
    if ( m_pAbilityData != 0 )
    {
      m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
      if ( m_pAbilityData->m_pszAbilityName != 0
        && (m_pszAbilityName == "item_ultimate_scepter" || strcmp(m_pszAbilityName, "item_ultimate_scepter") == 0) )
      {
        m_Value = pItem->m_iPlayerOwnerID.m_Value;
        if ( (*(this->_vptr_IHandleEntity + 414))(this) == m_Value )
        {
          if ( pItem->m_bDroppable.m_Value )
          {
            (*(pItem->_vptr_IHandleEntity + 22))(pItem, 928, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            pItem->m_bDroppable.m_Value = 0;
          }
          if ( pItem->m_bSellable.m_Value )
          {
            (*(pItem->_vptr_IHandleEntity + 22))(pItem, 930, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            pItem->m_bSellable.m_Value = 0;
          }
          CDOTA_Item::ExpireSellback(pItem);
          AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "earth_spirit_petrify", 0);
          v8 = AbilityByName;
          if ( AbilityByName != 0 )
          {
            CDOTABaseAbility::SetHidden(AbilityByName, 0);
            CDOTABaseAbility::UpgradeAbility(v8, 0);
          }
          this->m_bHadScepter = 1;
        }
      }
    }
  }
}


