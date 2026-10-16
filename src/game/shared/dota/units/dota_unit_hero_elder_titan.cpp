// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_elder_titan.cpp:44
class CDOTA_Ability_Elder_Titan_AncestralSpirit : public CDOTABaseAbility {
public:

private:

	int speed;  // +0x390
	int radius;  // +0x394
	float buff_duration;  // +0x398
	float spirit_duration;  // +0x39c
	int m_nCreepsHit;  // +0x3a0
	int m_nHeroesHit;  // +0x3a4
	bool m_bIsReturning;  // +0x3a8

	EHANDLE m_hAncestralSpirit;  // +0x3ac
	int m_nReturnFXIndex;  // +0x3b0
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
	CDOTA_Ability_Elder_Titan_AncestralSpirit(CDOTA_Ability_Elder_Titan_AncestralSpirit &);
	CDOTA_Ability_Elder_Titan_AncestralSpirit(CDOTA_Ability_Elder_Titan_AncestralSpirit &);
	CDOTA_Ability_Elder_Titan_AncestralSpirit();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual void OnSpellStart();
	virtual void OnUpgrade();
	virtual void OnUnStolen();
	void DestroySpirit();
	virtual const char * GetAssociatedSecondaryAbilities();
	void SetHitEntityCount(int, int);
	void ReturnSpirit();
	virtual void OnProjectileThink(const Vector &);
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	bool IsReturning();
	void PauseReturn();
	void UnpauseReturn();
	CDOTA_BaseNPC * GetAncestralSpirit();
	virtual void UpdateOnRemove();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual Activity GetGestureBasedActivity();
	virtual ~CDOTA_Ability_Elder_Titan_AncestralSpirit();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[6] Precache
	// vtable[8] Spawn
	// vtable[266] OnSpellStart
	// vtable[268] OnUpgrade
	// vtable[308] OnUnStolen
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[291] OnProjectileThink
	// vtable[289] OnProjectileHit
	// vtable[11] UpdateOnRemove
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[211] GetGestureBasedActivity
	// sizeof = 952
};

// src/game/shared/dota/units/dota_unit_hero_elder_titan.cpp:105
class CDOTA_Unit_Elder_Titan_AncestralSpirit : public CDOTA_BaseNPC_Additive {
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
	CDOTA_Unit_Elder_Titan_AncestralSpirit(CDOTA_Unit_Elder_Titan_AncestralSpirit &);
	CDOTA_Unit_Elder_Titan_AncestralSpirit(CDOTA_Unit_Elder_Titan_AncestralSpirit &);
	CDOTA_Unit_Elder_Titan_AncestralSpirit();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual bool HasFlyingVision();
	virtual float GetBonusFlyHeight();
	virtual bool CanBeSelected();
	virtual ~CDOTA_Unit_Elder_Titan_AncestralSpirit();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[445] HasFlyingVision
	// vtable[490] GetBonusFlyHeight
	// vtable[491] CanBeSelected
	// sizeof = 4504
};

// src/game/shared/dota/units/dota_unit_hero_elder_titan.cpp:129
class C_CDOTA_Unit_Elder_Titan_AncestralSpirit_MapInstall {
	C_CDOTA_Unit_Elder_Titan_AncestralSpirit_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_elder_titan.cpp:149
class CDOTA_Unit_Hero_Elder_Titan : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Elder_Titan(CDOTA_Unit_Hero_Elder_Titan &);
	CDOTA_Unit_Hero_Elder_Titan(CDOTA_Unit_Hero_Elder_Titan &);
	CDOTA_Unit_Hero_Elder_Titan();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void GetAdditionalOwnedUnits(CUtlVector<CDOTA_BaseNPC*, CUtlMemory<CDOTA_BaseNPC*, int> > *);
	virtual void Event_Killed(const CTakeDamageInfo &);
	virtual bool OnLoadState(KeyValues *);
	virtual ~CDOTA_Unit_Hero_Elder_Titan();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[499] GetAdditionalOwnedUnits
	// vtable[92] Event_Killed
	// vtable[467] OnLoadState
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_elder_titan.cpp:165
class C_CDOTA_Unit_Hero_Elder_Titan_MapInstall {
	C_CDOTA_Unit_Hero_Elder_Titan_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_elder_titan.cpp:216
class CDOTA_Modifier_Elder_Titan_AncestralSpirit : public CDOTA_Buff {
public:

private:

	int pass_damage;  // +0xba8
	int radius;  // +0xbac
	int m_nCreepsHit;  // +0xbb0
	int m_nHeroesHit;  // +0xbb4
	float m_flSpeed;  // +0xbb8

	int32 m_nBonusMoveSpeed;  // +0xbd8
	CDOTA_Modifier_Elder_Titan_AncestralSpirit();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool DestroyOnExpire();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Constant(const CModifierParams &);
	virtual ModifierVariant_t OnDeath(const CModifierParams &);
	virtual ModifierVariant_t GetBonusDayVision(const CModifierParams &);
	virtual ModifierVariant_t GetBonusNightVision(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual void OnIntervalThink();
	void DoReturn();
	void AddDamagedUnit(CDOTA_BaseNPC *);
	int GetCreepCount();
	int GetHeroesHit();
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual ~CDOTA_Modifier_Elder_Titan_AncestralSpirit();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[61] DestroyOnExpire
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeedBonus_Constant
	// vtable[90] OnDeath
	// vtable[91] GetBonusDayVision
	// vtable[92] GetBonusNightVision
	// vtable[5] CheckState
	// vtable[56] OnIntervalThink
	// vtable[10] AddCustomTransmiterData
	// sizeof = 3040
};

// src/game/shared/dota/units/dota_unit_hero_elder_titan.cpp:881
class CDOTA_Ability_Elder_Titan_ReturnSpirit : public CDOTABaseAbility {
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
	CDOTA_Ability_Elder_Titan_ReturnSpirit(CDOTA_Ability_Elder_Titan_ReturnSpirit &);
	CDOTA_Ability_Elder_Titan_ReturnSpirit(CDOTA_Ability_Elder_Titan_ReturnSpirit &);
	CDOTA_Ability_Elder_Titan_ReturnSpirit();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool ProcsMagicStick();
	virtual const char * GetAssociatedPrimaryAbilities();
	virtual bool IsHiddenWhenStolen();
	virtual ~CDOTA_Ability_Elder_Titan_ReturnSpirit();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[239] ProcsMagicStick
	// vtable[303] GetAssociatedPrimaryAbilities
	// vtable[306] IsHiddenWhenStolen
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_elder_titan.cpp:932
class CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff : public CDOTA_Buff {
public:

private:

	int move_pct_creeps;  // +0xba8
	int move_pct_heroes;  // +0xbac
	int damage_creeps;  // +0xbb0
	int damage_heroes;  // +0xbb4
	int move_pct_cap;  // +0xbb8
	int m_nCreepsHit;  // +0xbbc
	int m_nHeroesHit;  // +0xbc0
	int32 m_nSpeedPct;  // +0xbc4
	int32 m_nDamage;  // +0xbc8
	CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual ~CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff();

	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeedBonus_Percentage
	// vtable[90] GetModifierPreAttack_BonusDamage
	// vtable[10] AddCustomTransmiterData
	// sizeof = 3024
};

// src/game/shared/dota/units/dota_unit_hero_elder_titan.cpp:1060
class CDOTA_Modifier_Elder_Titan_AncestralSpirit_Hidden : public CDOTA_Buff {
public:

	CDOTA_Modifier_Elder_Titan_AncestralSpirit_Hidden();
	virtual bool IsPermanent();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Elder_Titan_AncestralSpirit_Hidden();

	// vtable[23] IsPermanent
	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_elder_titan.cpp:1133
class CDOTA_Ability_Elder_Titan_EchoStomp : public CDOTABaseAbility {
public:

private:

	int m_nFXIndexTitan;  // +0x390
	int m_nFXIndexSpirit;  // +0x394
	int radius;  // +0x398
	int stomp_damage;  // +0x39c
	float sleep_duration;  // +0x3a0
	float cast_time;  // +0x3a4
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
	CDOTA_Ability_Elder_Titan_EchoStomp(CDOTA_Ability_Elder_Titan_EchoStomp &);
	CDOTA_Ability_Elder_Titan_EchoStomp(CDOTA_Ability_Elder_Titan_EchoStomp &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual bool OnAbilityPhaseStart();
	virtual void OnAbilityPhaseInterrupted();
	virtual void OnSpellStart();
	virtual void OnChannelFinish(bool);
	virtual bool WantsToChannelCancel();
	void DoEchoStomp(CDOTA_BaseNPC *, int);
	CDOTA_Ability_Elder_Titan_EchoStomp();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Elder_Titan_EchoStomp();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[266] OnSpellStart
	// vtable[267] OnChannelFinish
	// vtable[331] WantsToChannelCancel
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// sizeof = 960
};

// src/game/shared/dota/units/dota_unit_hero_elder_titan.cpp:1421
class CDOTA_Ability_Elder_Titan_EchoStomp_Spirit : public CDOTABaseAbility {
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
	CDOTA_Ability_Elder_Titan_EchoStomp_Spirit(CDOTA_Ability_Elder_Titan_EchoStomp_Spirit &);
	CDOTA_Ability_Elder_Titan_EchoStomp_Spirit(CDOTA_Ability_Elder_Titan_EchoStomp_Spirit &);
	CDOTA_Ability_Elder_Titan_EchoStomp_Spirit();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual int CastFilterResult();
	virtual const char * GetCustomCastError();
	virtual bool OnAbilityPhaseStart();
	virtual void OnAbilityPhaseInterrupted();
	virtual bool ProcsMagicStick();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Elder_Titan_EchoStomp_Spirit();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[260] CastFilterResult
	// vtable[261] GetCustomCastError
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[239] ProcsMagicStick
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_elder_titan.cpp:1572
class CDOTA_Modifier_Elder_Titan_AncestralSpirit_CastTime : public CDOTA_Buff {
public:

	CDOTA_Modifier_Elder_Titan_AncestralSpirit_CastTime();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Elder_Titan_AncestralSpirit_CastTime();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_elder_titan.cpp:1600
class CDOTA_Modifier_Elder_Titan_EchoStomp : public CDOTA_Buff {
public:

private:

	float animation_rate;  // +0xba8
	float initial_stun_duration;  // +0xbac
	CDOTA_Modifier_Elder_Titan_EchoStomp();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	ModifierVariant_t GetOverrideAnimationRate(const CModifierParams &);
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual bool CanParentBeAutoAttacked();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsDebuff();
	virtual bool IsStunDebuff();
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual ~CDOTA_Modifier_Elder_Titan_EchoStomp();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[13] CanParentBeAutoAttacked
	// vtable[5] CheckState
	// vtable[12] IsDebuff
	// vtable[16] IsStunDebuff
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_elder_titan.cpp:1707
class CDOTA_Ability_Elder_Titan_NaturalOrder : public CDOTABaseAbility {
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
	CDOTA_Ability_Elder_Titan_NaturalOrder(CDOTA_Ability_Elder_Titan_NaturalOrder &);
	CDOTA_Ability_Elder_Titan_NaturalOrder(CDOTA_Ability_Elder_Titan_NaturalOrder &);
	CDOTA_Ability_Elder_Titan_NaturalOrder();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual void OnUpgrade();
	virtual ~CDOTA_Ability_Elder_Titan_NaturalOrder();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[268] OnUpgrade
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_elder_titan.cpp:1721
class C_CDOTA_Ability_Elder_Titan_NaturalOrder_MapInstall {
	C_CDOTA_Ability_Elder_Titan_NaturalOrder_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_elder_titan.cpp:1752
class CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit : public CDOTABaseAbility {
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
	CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit(CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit &);
	CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit(CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit &);
	CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual const char * GetTexture();
	virtual ~CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[333] GetTexture
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_elder_titan.cpp:1766
class C_CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit_MapInstall {
	C_CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_elder_titan.cpp:1777
class CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsHidden();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual float GetAuraDuration();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual ~CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[11] IsHidden
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[83] GetAuraDuration
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_elder_titan.cpp:1821
class CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsHidden();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual float GetAuraDuration();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual ~CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[11] IsHidden
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[83] GetAuraDuration
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_elder_titan.cpp:1866
class CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor : public CDOTA_Buff {
public:

private:

	int armor_reduction_pct;  // +0xba8
	float m_flArmorReduction;  // +0xbac
	CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	void CalculateArmorReduction();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual ModifierVariant_t OnTooltip(const CModifierParams &);
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual ~CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierPhysicalArmorBonus
	// vtable[90] OnTooltip
	// vtable[10] AddCustomTransmiterData
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_elder_titan.cpp:2001
class CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance : public CDOTA_Buff {
public:

private:

	int magic_resistance_pct;  // +0xba8
	float m_flMagicReduction;  // +0xbac
	CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	virtual const char * GetTexture();
	virtual ModifierVariant_t GetModifierMagicalResistanceDirectModification(const CModifierParams &);
	virtual ModifierVariant_t OnTooltip(const CModifierParams &);
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual ~CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[32] GetTexture
	// vtable[89] GetModifierMagicalResistanceDirectModification
	// vtable[90] OnTooltip
	// vtable[10] AddCustomTransmiterData
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_elder_titan.cpp:2094
class CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster : public CDOTA_Buff {
public:

private:

	int vision_width;  // +0xbc0
	float vision_interval;  // +0xbc4
	float vision_duration;  // +0xbc8
	int vision_step;  // +0xbcc
	int total_steps;  // +0xbd0
	int m_nCompletedSteps;  // +0xbd4
	CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster();
	virtual void OnCreated(KeyValues *);
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual int GetAttributes();
	virtual void OnIntervalThink();
	void SetEndPoints(Vector, Vector);
	Vector GetStart();
	Vector GetEnd();
	virtual ~CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster();

	// vtable[57] OnCreated
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[7] GetAttributes
	// vtable[56] OnIntervalThink
	// sizeof = 3080
};

// src/game/shared/dota/units/dota_unit_hero_elder_titan.cpp:2187
class CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker : public CDOTA_Buff {
public:

private:

	int crack_width;  // +0xba8
	int damage_pct;  // +0xbac
	float slow_duration;  // +0xbb0
	float slow_duration_scepter;  // +0xbb4
	CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool ShouldSendToClients();
	virtual bool IsHidden();
	virtual void CheckState(CDOTABuffState &);
	void SetParentModifier(CDOTA_Buff *);
	CDOTA_Buff * GetParentModifier();
	virtual ~CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[8] ShouldSendToClients
	// vtable[11] IsHidden
	// vtable[5] CheckState
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_elder_titan.cpp:2316
class CDOTA_Modifier_Elder_Titan_EarthSplitter : public CDOTA_Buff {
public:

private:

	int slow_pct;  // +0xba8
	CDOTA_Modifier_Elder_Titan_EarthSplitter(CDOTA_Modifier_Elder_Titan_EarthSplitter &);
	CDOTA_Modifier_Elder_Titan_EarthSplitter(const CDOTA_Modifier_Elder_Titan_EarthSplitter &);
	CDOTA_Modifier_Elder_Titan_EarthSplitter();
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual bool ShouldUseOverheadOffset();
	virtual void CheckState(CDOTABuffState &);
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Elder_Titan_EarthSplitter();

	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[69] ShouldUseOverheadOffset
	// vtable[5] CheckState
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_elder_titan.cpp:2343
class CDOTA_Modifier_Elder_Titan_EarthSplitterScepter : public CDOTA_Modifier_Elder_Titan_EarthSplitter {
public:

	CDOTA_Modifier_Elder_Titan_EarthSplitterScepter(CDOTA_Modifier_Elder_Titan_EarthSplitterScepter &);
	CDOTA_Modifier_Elder_Titan_EarthSplitterScepter(const CDOTA_Modifier_Elder_Titan_EarthSplitterScepter &);
	CDOTA_Modifier_Elder_Titan_EarthSplitterScepter();
	virtual ~CDOTA_Modifier_Elder_Titan_EarthSplitterScepter();

	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_elder_titan.cpp:2393
class CDOTA_Ability_Elder_Titan_EarthSplitter : public CDOTABaseAbility {
public:

private:

	int crack_width;  // +0x390
	int crack_distance;  // +0x394
	int speed;  // +0x398
	int vision_width;  // +0x39c
	float crack_time;  // +0x3a0
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
	CDOTA_Ability_Elder_Titan_EarthSplitter(CDOTA_Ability_Elder_Titan_EarthSplitter &);
	CDOTA_Ability_Elder_Titan_EarthSplitter(CDOTA_Ability_Elder_Titan_EarthSplitter &);
	CDOTA_Ability_Elder_Titan_EarthSplitter();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual void OnProjectileThink(const Vector &);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Elder_Titan_EarthSplitter();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[291] OnProjectileThink
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// sizeof = 944
};

// src/game/shared/dota/units/dota_unit_hero_elder_titan.cpp:2417
class C_CDOTA_Ability_Elder_Titan_EarthSplitter_MapInstall {
	C_CDOTA_Ability_Elder_Titan_EarthSplitter_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Ability_Elder_Titan_AncestralSpirit::~CDOTA_Ability_Elder_Titan_AncestralSpirit  (line 44, @0x0000000002c983a0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Elder_Titan_AncestralSpirit::~CDOTA_Ability_Elder_Titan_AncestralSpirit(
        CDOTA_Ability_Elder_Titan_AncestralSpirit *const this)
{
  this->_vptr_IHandleEntity = &off_45AC550;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Elder_Titan_AncestralSpirit::~CDOTA_Ability_Elder_Titan_AncestralSpirit  (line 44, @0x0000000002c983c0, libserver.so)  // inlines: ~CDOTA_Ability_Elder_Titan_AncestralSpirit
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Elder_Titan_AncestralSpirit::~CDOTA_Ability_Elder_Titan_AncestralSpirit(
        CDOTA_Ability_Elder_Titan_AncestralSpirit *const this)
{
  this->_vptr_IHandleEntity = &off_45AC550;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Elder_Titan_AncestralSpirit::Schema_DynamicBinding  (line 46, @0x0000000002c885f0, libserver.so)
// globals: CDOTA_Ability_Elder_Titan_AncestralSpirit::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Elder_Titan_AncestralSpirit::Schema_DynamicBinding(
        const CDOTA_Ability_Elder_Titan_AncestralSpirit *const this)
{
  return CDOTA_Ability_Elder_Titan_AncestralSpirit::s_pSchemaBinding;
}


// CDOTA_Ability_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 46, @0x0000000002c88600, libserver.so)
// globals: CDOTA_Ability_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::DestructInstance  (line 46, @0x0000000002c88610, libserver.so)  // inlines: Destruct<CDOTA_Ability_Elder_Titan_AncestralSpirit>
void __fastcall CDOTA_Ability_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::FreeInstance  (line 46, @0x0000000002c88630, libserver.so)
void __fastcall CDOTA_Ability_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::CanAllocate  (line 46, @0x0000000002c88650, libserver.so)
bool __fastcall CDOTA_Ability_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 46, @0x0000000002c88660, libserver.so)
// globals: CDOTA_Ability_Elder_Titan_AncestralSpirit::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Elder_Titan_AncestralSpirit::s_pSchemaBinding;
}


// CDOTA_Ability_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::AllocateInstance  (line 46, @0x0000000002c8f960, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 952);
  memset(v1, 0, 0x3B8u);
  return v1;
}


// CDOTA_Ability_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::ConstructInstance  (line 46, @0x0000000002c94a10, libserver.so)  // inlines: CDOTA_Ability_Elder_Titan_AncestralSpirit, CEntityHandle, CHandle, Construct<CDOTA_Ability_Elder_Titan_AncestralSpirit>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 235) = -1;
    *p = &off_45AC550;
  }
  return p;
}


// CDOTA_Ability_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 46, @0x0000000002ca1f30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 46, @0x0000000002ca1f50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Elder_Titan_AncestralSpirit::GetEntityClassInternal  (line 46, @0x0000000002cba110, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "elder_titan_ancestral_spirit", "CDOTA_Ability_Elder_Titan_AncestralSpirit"
// globals: `guard variable for'CDOTA_Ability_Elder_Titan_AncestralSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_AncestralSpiritClass, CDOTA_Ability_Elder_Titan_AncestralSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_AncestralSpiritClass, __dso_handle, CDOTA_Ability_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Elder_Titan_AncestralSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_AncestralSpiritClassInfo, CDOTA_Ability_Elder_Titan_AncestralSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_AncestralSpiritClassInfo
CEntityClass *__cdecl CDOTA_Ability_Elder_Titan_AncestralSpirit::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Elder_Titan_AncestralSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_AncestralSpiritClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Elder_Titan_AncestralSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_AncestralSpiritClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Elder_Titan_AncestralSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_AncestralSpiritClass);
    CDOTA_Ability_Elder_Titan_AncestralSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_AncestralSpiritClass._vptr_CEntityClass = off_45A9A30;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Elder_Titan_AncestralSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_AncestralSpiritClass);
    __cxa_atexit(
      CDOTA_Ability_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Elder_Titan_AncestralSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_AncestralSpiritClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Elder_Titan_AncestralSpiritClass != 0 )
    return &CDOTA_Ability_Elder_Titan_AncestralSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_AncestralSpiritClass;
  if ( `guard variable for'CDOTA_Ability_Elder_Titan_AncestralSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_AncestralSpiritClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Elder_Titan_AncestralSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_AncestralSpiritClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Elder_Titan_AncestralSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_AncestralSpiritClassInfo,
      "CDOTA_Ability_Elder_Titan_AncestralSpirit",
      "elder_titan_ancestral_spirit",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Elder_Titan_AncestralSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_AncestralSpiritClassInfo);
  }
  CDOTA_Ability_Elder_Titan_AncestralSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_AncestralSpiritClass.m_pClassInfo = &CDOTA_Ability_Elder_Titan_AncestralSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_AncestralSpiritClassInfo;
  CDOTA_Ability_Elder_Titan_AncestralSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_AncestralSpiritClass.m_pBaseClassInfo = CDOTA_Ability_Elder_Titan_AncestralSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_AncestralSpiritClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Elder_Titan_AncestralSpiritClass = &CDOTA_Ability_Elder_Titan_AncestralSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_AncestralSpiritClass;
  CDOTA_Ability_Elder_Titan_AncestralSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_AncestralSpiritClassInfo.m_pClass = &CDOTA_Ability_Elder_Titan_AncestralSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_AncestralSpiritClass;
  CDOTA_Ability_Elder_Titan_AncestralSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_AncestralSpiritClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Elder_Titan_AncestralSpiritClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Elder_Titan_AncestralSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_AncestralSpiritClass;
}


// CDOTA_Ability_Elder_Titan_AncestralSpirit::GetAssociatedSecondaryAbilities  (line 57, @0x0000000002c88670, libserver.so)
// strings: "elder_titan_return_spirit"
const char *__fastcall CDOTA_Ability_Elder_Titan_AncestralSpirit::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Elder_Titan_AncestralSpirit *const this)
{
  return "elder_titan_return_spirit";
}


// CDOTA_Ability_Elder_Titan_AncestralSpirit::GetGestureBasedActivity  (line 94, @0x0000000002c88680, libserver.so)
Activity __fastcall CDOTA_Ability_Elder_Titan_AncestralSpirit::GetGestureBasedActivity(
        CDOTA_Ability_Elder_Titan_AncestralSpirit *const this)
{
  return 1677;
}


// CDOTA_Unit_Elder_Titan_AncestralSpirit::~CDOTA_Unit_Elder_Titan_AncestralSpirit  (line 105, @0x0000000002c90e00, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_Unit_Elder_Titan_AncestralSpirit::~CDOTA_Unit_Elder_Titan_AncestralSpirit(
        CDOTA_Unit_Elder_Titan_AncestralSpirit *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_Unit_Elder_Titan_AncestralSpirit::~CDOTA_Unit_Elder_Titan_AncestralSpirit  (line 105, @0x0000000002c90e50, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_Unit_Elder_Titan_AncestralSpirit
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Elder_Titan_AncestralSpirit::~CDOTA_Unit_Elder_Titan_AncestralSpirit(
        CDOTA_Unit_Elder_Titan_AncestralSpirit *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Elder_Titan_AncestralSpirit::Schema_DynamicBinding  (line 107, @0x0000000002c88690, libserver.so)
// globals: CDOTA_Unit_Elder_Titan_AncestralSpirit::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Elder_Titan_AncestralSpirit::Schema_DynamicBinding(
        const CDOTA_Unit_Elder_Titan_AncestralSpirit *const this)
{
  return CDOTA_Unit_Elder_Titan_AncestralSpirit::s_pSchemaBinding;
}


// CDOTA_Unit_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 107, @0x0000000002c886c0, libserver.so)
// globals: CDOTA_Unit_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::DestructInstance  (line 107, @0x0000000002c886d0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Elder_Titan_AncestralSpirit>
void __fastcall CDOTA_Unit_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::FreeInstance  (line 107, @0x0000000002c886f0, libserver.so)
void __fastcall CDOTA_Unit_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::CanAllocate  (line 107, @0x0000000002c88710, libserver.so)
bool __fastcall CDOTA_Unit_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 107, @0x0000000002c88720, libserver.so)
// globals: CDOTA_Unit_Elder_Titan_AncestralSpirit::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Elder_Titan_AncestralSpirit::s_pSchemaBinding;
}


// CDOTA_Unit_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::AllocateInstance  (line 107, @0x0000000002c8f9a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4504);
  memset(v1, 0, 0x1198u);
  return v1;
}


// CDOTA_Unit_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::ConstructInstance  (line 107, @0x0000000002c90db0, libserver.so)  // inlines: CDOTA_BaseNPC_Additive, CDOTA_Unit_Elder_Titan_AncestralSpirit, Construct<CDOTA_Unit_Elder_Titan_AncestralSpirit>
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_Unit_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *p = &off_45A9B30;
    *(p + 236) = &off_45AAAA0;
    *(p + 257) = &off_45AADD0;
  }
  return p;
}


// CDOTA_Unit_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 107, @0x0000000002ca3450, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 107, @0x0000000002ca36f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Elder_Titan_AncestralSpirit::GetEntityClassInternal  (line 107, @0x0000000002cbcc60, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CDOTA_BaseNPC_Additive::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "npc_dota_elder_titan_ancestral_spirit", "CDOTA_Unit_Elder_Titan_AncestralSpirit"
// globals: `guard variable for'CDOTA_Unit_Elder_Titan_AncestralSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Elder_Titan_AncestralSpiritClass, CDOTA_Unit_Elder_Titan_AncestralSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Elder_Titan_AncestralSpiritClass, __dso_handle, CDOTA_Unit_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Elder_Titan_AncestralSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Elder_Titan_AncestralSpiritClassInfo, CDOTA_Unit_Elder_Titan_AncestralSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Elder_Titan_AncestralSpiritClassInfo
CEntityClass *__cdecl CDOTA_Unit_Elder_Titan_AncestralSpirit::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Elder_Titan_AncestralSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Elder_Titan_AncestralSpiritClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Elder_Titan_AncestralSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Elder_Titan_AncestralSpiritClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Elder_Titan_AncestralSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Elder_Titan_AncestralSpiritClass);
    CDOTA_Unit_Elder_Titan_AncestralSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Elder_Titan_AncestralSpiritClass._vptr_CEntityClass = off_45A9AB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Elder_Titan_AncestralSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Elder_Titan_AncestralSpiritClass);
    __cxa_atexit(
      CDOTA_Unit_Elder_Titan_AncestralSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Elder_Titan_AncestralSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Elder_Titan_AncestralSpiritClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Elder_Titan_AncestralSpiritClass != 0 )
    return &CDOTA_Unit_Elder_Titan_AncestralSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Elder_Titan_AncestralSpiritClass;
  if ( `guard variable for'CDOTA_Unit_Elder_Titan_AncestralSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Elder_Titan_AncestralSpiritClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Elder_Titan_AncestralSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Elder_Titan_AncestralSpiritClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Additive::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Elder_Titan_AncestralSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Elder_Titan_AncestralSpiritClassInfo,
      "CDOTA_Unit_Elder_Titan_AncestralSpirit",
      "npc_dota_elder_titan_ancestral_spirit",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Elder_Titan_AncestralSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Elder_Titan_AncestralSpiritClassInfo);
  }
  CDOTA_Unit_Elder_Titan_AncestralSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Elder_Titan_AncestralSpiritClass.m_pClassInfo = &CDOTA_Unit_Elder_Titan_AncestralSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Elder_Titan_AncestralSpiritClassInfo;
  CDOTA_Unit_Elder_Titan_AncestralSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Elder_Titan_AncestralSpiritClass.m_pBaseClassInfo = CDOTA_Unit_Elder_Titan_AncestralSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Elder_Titan_AncestralSpiritClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Elder_Titan_AncestralSpiritClass = &CDOTA_Unit_Elder_Titan_AncestralSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Elder_Titan_AncestralSpiritClass;
  CDOTA_Unit_Elder_Titan_AncestralSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Elder_Titan_AncestralSpiritClassInfo.m_pClass = &CDOTA_Unit_Elder_Titan_AncestralSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Elder_Titan_AncestralSpiritClass;
  CDOTA_Unit_Elder_Titan_AncestralSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Elder_Titan_AncestralSpiritClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_Unit_Elder_Titan_AncestralSpiritClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Elder_Titan_AncestralSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Elder_Titan_AncestralSpiritClass;
}


// CDOTA_Unit_Elder_Titan_AncestralSpirit::HasFlyingVision  (line 112, @0x0000000002c88730, libserver.so)
bool __fastcall CDOTA_Unit_Elder_Titan_AncestralSpirit::HasFlyingVision(
        CDOTA_Unit_Elder_Titan_AncestralSpirit *const this)
{
  return 0;
}


// CDOTA_Unit_Elder_Titan_AncestralSpirit::GetBonusFlyHeight  (line 113, @0x0000000002c88740, libserver.so)
float __fastcall CDOTA_Unit_Elder_Titan_AncestralSpirit::GetBonusFlyHeight(
        CDOTA_Unit_Elder_Titan_AncestralSpirit *const this)
{
  return 0.0;
}


// CDOTA_Unit_Elder_Titan_AncestralSpirit::CanBeSelected  (line 115, @0x0000000002c88750, libserver.so)  // inlines: InState, IsUnselectable
bool __fastcall CDOTA_Unit_Elder_Titan_AncestralSpirit::CanBeSelected(
        CDOTA_Unit_Elder_Titan_AncestralSpirit *const this)
{
  bool result; // al

  result = 0;
  if ( !this->m_bIsWaitingToSpawn.m_Value )
    return (this->m_nUnitState64.m_Value & 0x4000) == 0;
  return result;
}


// CDOTA_Unit_Elder_Titan_AncestralSpirit::YouForgotToImplementOrDeclareServerClass  (line 129, @0x0000000002c1c240, libserver.so)
int __fastcall CDOTA_Unit_Elder_Titan_AncestralSpirit::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Elder_Titan_AncestralSpirit *const this)
{
  return 0;
}


// CDOTA_Unit_Elder_Titan_AncestralSpirit::GetServerClass  (line 129, @0x0000000002c35370, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Elder_Titan_AncestralSpirit::GetServerClass(
        CDOTA_Unit_Elder_Titan_AncestralSpirit *const this)
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


// CDOTA_Unit_Elder_Titan_AncestralSpirit::Spawn  (line 138, @0x0000000002c23240, libserver.so)
// calls: CDOTA_BaseNPC::Spawn
void __fastcall CDOTA_Unit_Elder_Titan_AncestralSpirit::Spawn(
        CDOTA_Unit_Elder_Titan_AncestralSpirit *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC::Spawn(this, pKeyValues);
}


// CDOTA_Unit_Hero_Elder_Titan::~CDOTA_Unit_Hero_Elder_Titan  (line 149, @0x0000000002c99eb0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Elder_Titan::~CDOTA_Unit_Hero_Elder_Titan(CDOTA_Unit_Hero_Elder_Titan *const this)
{
  this->_vptr_IHandleEntity = &off_45AAEB0;
  this->_vptr_INextBotEventResponder = &off_45ABE90;
  this->_vptr_CObstructionObject = &off_45AC1C0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Elder_Titan::~CDOTA_Unit_Hero_Elder_Titan  (line 149, @0x0000000002c99ef0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Elder_Titan
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Elder_Titan::~CDOTA_Unit_Hero_Elder_Titan(CDOTA_Unit_Hero_Elder_Titan *const this)
{
  this->_vptr_IHandleEntity = &off_45AAEB0;
  this->_vptr_INextBotEventResponder = &off_45ABE90;
  this->_vptr_CObstructionObject = &off_45AC1C0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Elder_Titan::Schema_DynamicBinding  (line 151, @0x0000000002c88780, libserver.so)
// globals: CDOTA_Unit_Hero_Elder_Titan::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Elder_Titan::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Elder_Titan *const this)
{
  return CDOTA_Unit_Hero_Elder_Titan::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Elder_Titan::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 151, @0x0000000002c887b0, libserver.so)
// globals: CDOTA_Unit_Hero_Elder_Titan::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Elder_Titan::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Elder_Titan::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Elder_Titan::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Elder_Titan::CEntityInstanceEntityClass::DestructInstance  (line 151, @0x0000000002c887c0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Elder_Titan>
void __fastcall CDOTA_Unit_Hero_Elder_Titan::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Elder_Titan::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Elder_Titan::CEntityInstanceEntityClass::FreeInstance  (line 151, @0x0000000002c887e0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Elder_Titan::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Elder_Titan::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Elder_Titan::CEntityInstanceEntityClass::CanAllocate  (line 151, @0x0000000002c88800, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Elder_Titan::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Elder_Titan::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Elder_Titan::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 151, @0x0000000002c88810, libserver.so)
// globals: CDOTA_Unit_Hero_Elder_Titan::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Elder_Titan::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Elder_Titan::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Elder_Titan::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Elder_Titan::CEntityInstanceEntityClass::AllocateInstance  (line 151, @0x0000000002c8f9e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Elder_Titan::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Elder_Titan::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Elder_Titan::CEntityInstanceEntityClass::ConstructInstance  (line 151, @0x0000000002c93fa0, libserver.so)  // inlines: CDOTA_Unit_Hero_Elder_Titan, Construct<CDOTA_Unit_Hero_Elder_Titan>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Elder_Titan::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Elder_Titan::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_45AAEB0;
    *(p + 236) = &off_45ABE90;
    *(p + 257) = &off_45AC1C0;
  }
  return p;
}


// CDOTA_Unit_Hero_Elder_Titan::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 151, @0x0000000002ca35b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Elder_Titan::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Elder_Titan::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Elder_Titan::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 151, @0x0000000002ca3930, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Elder_Titan::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Elder_Titan::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Elder_Titan::GetEntityClassInternal  (line 151, @0x0000000002cbcdb0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "npc_dota_hero_elder_titan", "CDOTA_Unit_Hero_Elder_Titan"
// globals: `guard variable for'CDOTA_Unit_Hero_Elder_Titan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Elder_TitanClass, CDOTA_Unit_Hero_Elder_Titan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Elder_TitanClass, __dso_handle, CDOTA_Unit_Hero_Elder_Titan::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Elder_Titan::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Elder_TitanClassInfo, CDOTA_Unit_Hero_Elder_Titan::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Elder_TitanClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Elder_Titan::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Elder_Titan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Elder_TitanClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Elder_Titan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Elder_TitanClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Elder_Titan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Elder_TitanClass);
    CDOTA_Unit_Hero_Elder_Titan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Elder_TitanClass._vptr_CEntityClass = off_45AAE30;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Elder_Titan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Elder_TitanClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Elder_Titan::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Elder_Titan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Elder_TitanClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_Elder_TitanClass != 0 )
    return &CDOTA_Unit_Hero_Elder_Titan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Elder_TitanClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Elder_Titan::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Elder_TitanClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Elder_Titan::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Elder_TitanClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Elder_Titan::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Elder_TitanClassInfo,
      "CDOTA_Unit_Hero_Elder_Titan",
      "npc_dota_hero_elder_titan",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Elder_Titan::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Elder_TitanClassInfo);
  }
  CDOTA_Unit_Hero_Elder_Titan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Elder_TitanClass.m_pClassInfo = &CDOTA_Unit_Hero_Elder_Titan::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Elder_TitanClassInfo;
  CDOTA_Unit_Hero_Elder_Titan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Elder_TitanClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Elder_Titan::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Elder_TitanClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_Elder_TitanClass = &CDOTA_Unit_Hero_Elder_Titan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Elder_TitanClass;
  CDOTA_Unit_Hero_Elder_Titan::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_Elder_TitanClassInfo.m_pClass = &CDOTA_Unit_Hero_Elder_Titan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Elder_TitanClass;
  CDOTA_Unit_Hero_Elder_Titan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Elder_TitanClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_Elder_TitanClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Elder_Titan::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_Elder_TitanClass;
}


// CDOTA_Unit_Hero_Elder_Titan::YouForgotToImplementOrDeclareServerClass  (line 165, @0x0000000002c1c250, libserver.so)
int __fastcall CDOTA_Unit_Hero_Elder_Titan::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Elder_Titan *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Elder_Titan::GetServerClass  (line 165, @0x0000000002c35b70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Elder_Titan::GetServerClass(CDOTA_Unit_Hero_Elder_Titan *const this)
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


// CDOTA_Unit_Hero_Elder_Titan::Spawn  (line 174, @0x0000000002c1e7c0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Spawn
void __fastcall CDOTA_Unit_Hero_Elder_Titan::Spawn(
        CDOTA_Unit_Hero_Elder_Titan *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
}


// CDOTA_Unit_Hero_Elder_Titan::GetAdditionalOwnedUnits  (line 180, @0x0000000002c80e80, libserver.so)  // inlines: AddToTail, CopyConstruct<CDOTA_BaseNPC*>, Element, Get, GetAncestralSpirit, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_BaseNPC::FindAbilityByName, CUtlMemory<CDOTA_BaseNPC*, int>::Grow
// strings: "elder_titan_ancestral_spirit"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Unit_Hero_Elder_Titan::GetAdditionalOwnedUnits(
        CDOTA_Unit_Hero_Elder_Titan *const this,
        CUtlVector<CDOTA_BaseNPC*,CUtlMemory<CDOTA_BaseNPC*,int> > *pVecOwnedUnits)
{
  CDOTABaseAbility *AbilityByName; // rax
  int m_pAsString_high; // edx
  unsigned __int16 v5; // cx
  CEntityIdentity *v6; // rax
  CEntityIdentity *v7; // rax
  CDOTA_BaseNPC *m_pInstance; // r13
  __int64 m_Size; // r12
  CDOTA_BaseNPC **v10; // rax

  if ( pVecOwnedUnits != 0 )
  {
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "elder_titan_ancestral_spirit", 0);
    if ( AbilityByName != 0 )
    {
      m_pAsString_high = HIDWORD(AbilityByName[1].m_iszPrivateVScripts.u.m_pAsString);
      if ( (m_pAsString_high + 2) > 1 )
      {
        v5 = WORD2(AbilityByName[1].m_iszPrivateVScripts.u.m_pAsString);
        v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F];
        if ( v6 != 0 )
        {
          v7 = &v6[v5 & 0x1FF];
          if ( v7 != 0 && m_pAsString_high == v7->m_EHandle.m_Index )
          {
            m_pInstance = v7->m_pInstance;
            if ( v7->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
            {
              m_Size = pVecOwnedUnits->m_Size;
              if ( m_Size == pVecOwnedUnits->m_Memory.m_nAllocationCount )
                CUtlMemory<CDOTA_BaseNPC *,int>::Grow(&pVecOwnedUnits->m_Memory, 1);
              ++pVecOwnedUnits->m_Size;
              v10 = &pVecOwnedUnits->m_Memory.m_pMemory[m_Size];
              if ( v10 != 0 )
                *v10 = m_pInstance;
            }
          }
        }
      }
    }
  }
}


// CDOTA_Unit_Hero_Elder_Titan::OnLoadState  (line 198, @0x0000000002c1fc50, libserver.so)
// calls: CDOTA_BaseNPC_Hero::OnLoadState, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::SwapAbilities
// strings: "elder_titan_ancestral_spirit", "elder_titan_return_spirit"
bool __fastcall CDOTA_Unit_Hero_Elder_Titan::OnLoadState(CDOTA_Unit_Hero_Elder_Titan *const this, KeyValues *pKV)
{
  CDOTA_BaseNPC_Hero::OnLoadState(this, pKV);
  if ( CDOTA_BaseNPC::FindAbilityByName(this, "elder_titan_ancestral_spirit", 0)->m_bHidden.m_Value )
    CDOTA_BaseNPC::SwapAbilities(this, "elder_titan_ancestral_spirit", "elder_titan_return_spirit", 1, 0);
  return 1;
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit::~CDOTA_Modifier_Elder_Titan_AncestralSpirit  (line 216, @0x0000000002cb6b10, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit::~CDOTA_Modifier_Elder_Titan_AncestralSpirit(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit *const this)
{
  this->_vptr_CDOTA_Buff = &off_45AC250;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitUnits);
  if ( (this->m_hHitUnits.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitUnits.m_Memory),
        (this->m_hHitUnits.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitUnits.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit::~CDOTA_Modifier_Elder_Titan_AncestralSpirit  (line 216, @0x0000000002cb6f80, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_Elder_Titan_AncestralSpirit, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit::~CDOTA_Modifier_Elder_Titan_AncestralSpirit(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit *const this)
{
  this->_vptr_CDOTA_Buff = &off_45AC250;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitUnits);
  if ( (this->m_hHitUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitUnits.m_Memory);
    if ( (this->m_hHitUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitUnits.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit::DestroyOnExpire  (line 224, @0x0000000002c88820, libserver.so)
bool __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit::DestroyOnExpire(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit *const this)
{
  return 0;
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit::OnCreated  (line 268, @0x0000000002c75680, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>, Vector
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::GetFloat, CDOTA_Buff::GetCaster, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::AddParticle
// strings: "pass_damage", "particles/units/heroes/hero_elder_titan/elder_titan_ancestral_spirit_ambient.vpcf"
void __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit::OnCreated(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm1_4
  float Float; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  float v9; // xmm0_4
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v12; // r13
  CDOTA_ParticleManager *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  float v15; // [rsp+Ch] [rbp-34h]
  double v16; // [rsp+10h] [rbp-30h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->pass_damage = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_3;
LABEL_6:
    this->radius = 0;
    goto LABEL_4;
  }
  this->pass_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "pass_damage", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_6;
LABEL_3:
  this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "radius", -1, 0);
LABEL_4:
  Float = KeyValues::GetFloat(pKV, "speed", v6);
  this->m_flSpeed = Float;
  v15 = Float;
  Caster = CDOTA_Buff::GetCaster(this);
  v9 = (*(Caster->_vptr_IHandleEntity + 433))(Caster);
  this->m_nBonusMoveSpeed = (v15 - v9);
  CDOTA_Buff::StartIntervalThink(this, 0.1, v15 - v9);
  this->m_nCreepsHit = 0;
  this->m_nHeroesHit = 0;
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_elder_titan/elder_titan_ancestral_spirit_ambient.vpcf",
                      1,
                      Parent,
                      0,
                      0);
  v12 = CDOTA_Buff::GetCaster(this);
  v13 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v13, Parent, 1, v12, 1, 0, vec3_invalid, 1);
  *&v16 = this->radius;
  *(&v16 + 1) = *&v16;
  v14 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v14, Parent, 2, v16, *&v16);
  CDOTA_Buff::AddParticle(this, Parent, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit::OnRefresh  (line 290, @0x0000000002c71600, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "pass_damage"
void __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit::OnRefresh(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->pass_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "pass_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "radius", -1, 0);
      return;
    }
  }
  else
  {
    this->pass_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->radius = 0;
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit::DoReturn  (line 298, @0x0000000002c3efa0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_Elder_Titan_AncestralSpirit::ReturnSpirit
// callers: CDOTA_Modifier_Elder_Titan_AncestralSpirit::OnIntervalThink
// strings: "elder_titan_ancestral_spirit"
void __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit::DoReturn(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Ability_Elder_Titan_AncestralSpirit *AbilityByName; // rax

  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "elder_titan_ancestral_spirit", 0);
    if ( AbilityByName != 0 )
      CDOTA_Ability_Elder_Titan_AncestralSpirit::ReturnSpirit(AbilityByName);
  }
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit::DeclareFunctions  (line 315, @0x0000000002c1c260, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit::DeclareFunctions(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit *const this)
{
  this->m_Functions[11].__pfn = (&stru_10 + 697);
  this->m_Functions[11].__delta = 0;
  this->m_Functions[138].__pfn = (&stru_10 + 705);
  this->m_Functions[138].__delta = 0;
  this->m_Functions[96].__pfn = (&stru_10 + 713);
  this->m_Functions[96].__delta = 0;
  this->m_Functions[97].__pfn = (&stru_10 + 721);
  this->m_Functions[97].__delta = 0;
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit::CheckState  (line 326, @0x0000000002c1c2c0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit::CheckState(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x3800306uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFC7FFCF9LL;
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit::OnIntervalThink  (line 341, @0x0000000002c7bb50, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, DOTAGameRules, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, Length2D, LookupEntity, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CEntityInstance*, operator-, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Modifier_Elder_Titan_AncestralSpirit::AddDamagedUnit, CDOTA_BaseNPC::IsChanneling, CDOTA_Modifier_Elder_Titan_AncestralSpirit::DoReturn, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTA_BaseNPC::GetCurrentActiveAbility, _Unwind_Resume
// strings: "modifier_elder_titan_natural_order_armor", "elder_titan_natural_order", "elder_titan_echo_stomp", "modifier_elder_titan_natural_order_magic_resistance"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit::OnIntervalThink(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit *const this)
{
  __m128i v1; // xmm2
  float v3; // r15d
  CDOTA_BaseNPC *Parent; // r14
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v7; // rax
  __int64 v8; // rbx
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  unsigned __int8 m_Value; // r15
  CDOTA_Buff *ModifierByName; // r15
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v19; // rax
  CDOTABaseAbility *v20; // rbx
  CDOTA_BaseNPC *v21; // rax
  float v22; // xmm0_4
  float v23; // xmm1_4
  CDOTA_BaseNPC *v24; // rax
  const Vector *v25; // r14
  CDOTA_BaseNPC *v26; // rax
  const Vector *v27; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+20h] [rbp-50h] BYREF

  entities.m_Size = 0;
  *v1.m128i_i32 = this->radius;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  Parent = CDOTA_Buff::GetParent(this);
  v5 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, Parent, v3, &entities, 3, 19, 16, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = &entities.m_Memory.m_pMemory[v8];
      m_Index = v9->m_Index;
      if ( v9->m_Index + 2 <= 1 )
        goto LABEL_3;
      v11 = v9->m_Index;
      v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F];
      if ( v12 == 0 )
        goto LABEL_3;
      v13 = &v12[v11 & 0x1FF];
      if ( v13 == 0 )
        goto LABEL_3;
      if ( m_Index != v13->m_EHandle.m_Index )
        goto LABEL_3;
      m_pInstance = v13->m_pInstance;
      if ( v13->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC )
        goto LABEL_3;
      m_Value = m_pInstance->m_iTeamNum.m_Value;
      if ( m_Value == CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value )
      {
        if ( CDOTA_Buff::GetCaster(this) == m_pInstance )
        {
          v25 = CBaseEntity::GetAbsOrigin(m_pInstance);
          v26 = CDOTA_Buff::GetParent(this);
          v27 = CBaseEntity::GetAbsOrigin(v26);
          if ( fsqrt(((v27->x - v25->x) * (v27->x - v25->x)) + ((v27->y - v25->y) * (v27->y - v25->y))) < 100.0 )
            goto LABEL_22;
        }
LABEL_3:
        if ( entities.m_Size <= ++v8 )
          break;
      }
      else
      {
        ModifierByName = CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_elder_titan_natural_order_armor", 0);
        if ( ModifierByName == 0 )
          ModifierByName = CDOTA_BaseNPC::FindModifierByName(
                             m_pInstance,
                             "modifier_elder_titan_natural_order_magic_resistance",
                             0);
        Caster = CDOTA_Buff::GetCaster(this);
        AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "elder_titan_natural_order", 0);
        if ( AbilityByName != 0
          && AbilityByName->m_iLevel.m_Value > 0
          && ModifierByName == 0
          && !m_pInstance->m_bIsAncient.m_Value )
        {
          goto LABEL_3;
        }
        CDOTA_Modifier_Elder_Titan_AncestralSpirit::AddDamagedUnit(this, m_pInstance);
        if ( entities.m_Size <= ++v8 )
          break;
      }
    }
  }
  v19 = CDOTA_Buff::GetCaster(this);
  v20 = CDOTA_BaseNPC::FindAbilityByName(v19, "elder_titan_echo_stomp", 0);
  v21 = CDOTA_Buff::GetCaster(this);
  if ( !CDOTA_BaseNPC::IsChanneling(v21)
    || (v24 = CDOTA_Buff::GetCaster(this), v20 != CDOTA_BaseNPC::GetCurrentActiveAbility(v24)) )
  {
    if ( (*(this->_vptr_CDOTA_Buff + 30))(this) > 0.0 )
    {
      (*(this->_vptr_CDOTA_Buff + 30))(this);
      v23 = 0.0;
      if ( g_pGameRules != 0 )
        v23 = *&g_pGameRules[18].m_szQuestName[20];
      if ( v23 >= v22 )
LABEL_22:
        CDOTA_Modifier_Elder_Titan_AncestralSpirit::DoReturn(this);
    }
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit::AddDamagedUnit  (line 402, @0x0000000002c7b7e0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, HasElement, InState, IsConsideredHero, IsHero, IsInvulnerable, IsMagicImmune, IsRealHero, Set, ToDOTABaseNPCHero, operator[]
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, ApplyDamage, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound, EconEntity_OnOwnerKillEaterEvent, CUtlMemory<CHandle<CBaseEntity>, int>::Grow
// callers: CDOTA_Modifier_Elder_Titan_AncestralSpirit::OnIntervalThink, CDOTA_Ability_Elder_Titan_AncestralSpirit::OnProjectileThink
// strings: "particles/units/heroes/hero_elder_titan/elder_titan_ancestral_spirit_touch.vpcf", "attach_hitloc", "Hero_ElderTitan.AncestralSpirit.Damage"
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit::AddDamagedUnit(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit *const this,
        CDOTA_BaseNPC *pUnit)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v5; // cx
  unsigned __int64 m_Value; // rax
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v11; // r15
  CDOTA_ParticleManager *v12; // rax
  __int64 v13; // r14
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  uint32 m_iUnitType; // edx
  uint32 v18; // eax
  CEntityIdentity *v19; // rax
  int v20; // edx
  __int16 v21; // cx
  __int64 m_Size; // rbx
  int v23; // eax
  CHandle<CBaseEntity> *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC_Hero *v26; // rdi
  float flDamage; // [rsp+Ch] [rbp-44h]
  vec_t flDamagea; // [rsp+Ch] [rbp-44h]
  CHandle<CBaseEntity> src; // [rsp+10h] [rbp-40h] BYREF
  Vector v30; // 0:xmm0_8.8,8:xmm1_4.4

  src.m_Index = -1;
  if ( pUnit != 0 )
  {
    m_pEntity = pUnit->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v5 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v5 & 0x7FFF;
    }
    if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(&this->m_hHitUnits, &src) < 0 )
    {
      m_Value = pUnit->m_nUnitState64.m_Value;
      if ( (m_Value & 0x200) == 0 && !pUnit->m_bIsWaitingToSpawn.m_Value && (m_Value & 0x100) == 0 )
      {
        flDamage = this->pass_damage;
        Ability = CDOTA_Buff::GetAbility(this);
        Caster = CDOTA_Buff::GetCaster(this);
        ApplyDamage(Caster, pUnit, Ability, flDamage, 2, 0);
      }
      Parent = CDOTA_Buff::GetParent(this);
      ParticleManager = GetParticleManager();
      LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                          ParticleManager,
                          "particles/units/heroes/hero_elder_titan/elder_titan_ancestral_spirit_touch.vpcf",
                          1,
                          Parent,
                          0,
                          0);
      v11 = CDOTA_Buff::GetParent(this);
      v12 = GetParticleManager();
      v13 = *&vec3_invalid.x;
      flDamagea = vec3_invalid.z;
      CDOTA_ParticleManager::SetParticleControlEnt(v12, Parent, 0, v11, 5, "attach_hitloc", vec3_invalid, 1);
      v14 = GetParticleManager();
      *&v30.x = v13;
      v30.z = flDamagea;
      CDOTA_ParticleManager::SetParticleControlEnt(v14, Parent, 1, pUnit, 5, "attach_hitloc", v30, 1);
      v15 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v15, Parent);
      v16 = CDOTA_Buff::GetParent(this);
      DOTA_EmitSound(10, "Hero_ElderTitan.AncestralSpirit.Damage", v16);
      m_iUnitType = pUnit->m_iUnitType;
      if ( (m_iUnitType & 0x80u) == 0 )
      {
        v18 = pUnit->m_iUnitType & 1;
        if ( (m_iUnitType & 3) == 0 )
          goto LABEL_29;
        if ( (m_iUnitType & 1) != 0 )
          goto LABEL_15;
      }
      ++this->m_nCreepsHit;
      v18 = pUnit->m_iUnitType & 1;
LABEL_29:
      if ( v18 == 0 )
      {
LABEL_20:
        v19 = pUnit->m_pEntity;
        src.m_Index = -1;
        if ( v19 != 0 )
        {
          v20 = (v19->m_EHandle.m_Index >> 15) - (v19->m_flags & 1);
          v21 = 0x7FFF;
          if ( v19->m_EHandle.m_Index != -1 )
            v21 = v19->m_EHandle.m_Index & 0x7FFF;
          LOWORD(src.m_Index) = v21 | src.m_Index & 0x8000;
          src.m_Index = (v20 << 15) | src.m_Index & 0x7FFF;
        }
        m_Size = this->m_hHitUnits.m_Size;
        v23 = this->m_hHitUnits.m_Size;
        if ( m_Size == this->m_hHitUnits.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hHitUnits.m_Memory, 1);
          v23 = this->m_hHitUnits.m_Size;
        }
        this->m_hHitUnits.m_Size = v23 + 1;
        v24 = &this->m_hHitUnits.m_Memory.m_pMemory[m_Size];
        if ( v24 != 0 )
          v24->m_Index = src.m_Index;
        return;
      }
LABEL_15:
      if ( !pUnit->m_bIsIllusion.m_Value )
        ++this->m_nHeroesHit;
      if ( (pUnit->m_iUnitType & 1) != 0
        && !pUnit->m_bIsIllusion.m_Value
        && (*(pUnit->_vptr_IHandleEntity + 408))(pUnit) == 0 )
      {
        v25 = CDOTA_Buff::GetCaster(this);
        if ( v25 == 0 || (v26 = v25, (v25->m_iUnitType & 1) == 0) )
          v26 = 0;
        EconEntity_OnOwnerKillEaterEvent(
          v26,
          0,
          kill_eater_event_t::kKillEaterEvent_ElderTitan_SpiritKills,
          1,
          INVALID_ITEM_DEF_INDEX);
      }
      goto LABEL_20;
    }
  }
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit::GetModifierMoveSpeedBonus_Constant  (line 447, @0x0000000002c1c2e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit::GetModifierMoveSpeedBonus_Constant(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->m_nBonusMoveSpeed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit::OnDeath  (line 454, @0x0000000002c2fcd0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CBaseEntity::StopSound, CBaseEntity::AddEffects, KeyValues::KeyValues, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::RemoveGesture, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::SwapAbilities, CDOTA_Buff::Destroy (14 total)
// strings: "Hero_ElderTitan.AncestralSpirit.Return", "Hero_ElderTitan.AncestralSpirit.Loop", "modifier_elder_titan_ancestral_spirit_hidden", "elder_titan_ancestral_spirit", "elder_titan_return_spirit"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit::OnDeath(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v17; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-28h]

  v19 = __readfsqword(0x28u);
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
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetCaster(this) == m_pInstance )
        {
          Parent = CDOTA_Buff::GetParent(this);
          CBaseEntity::StopSound(Parent, "Hero_ElderTitan.AncestralSpirit.Return");
          v9 = CDOTA_Buff::GetParent(this);
          CBaseEntity::StopSound(v9, "Hero_ElderTitan.AncestralSpirit.Loop");
          v10 = CDOTA_Buff::GetParent(this);
          CBaseEntity::AddEffects(v10, 32);
          KeyValues::KeyValues(&kv, "modifier_elder_titan_ancestral_spirit_hidden");
          Ability = CDOTA_Buff::GetAbility(this);
          Caster = CDOTA_Buff::GetCaster(this);
          v13 = CDOTA_Buff::GetParent(this);
          CDOTA_BaseNPC::AddNewModifier(v13, Caster, Ability, "modifier_elder_titan_ancestral_spirit_hidden", &kv, 0);
          v14 = CDOTA_Buff::GetParent(this);
          CDOTA_BaseNPC::RemoveGesture(v14, 1508);
          v15 = CDOTA_Buff::GetCaster(this);
          AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v15, "elder_titan_ancestral_spirit", 0);
          if ( AbilityByName->m_bHidden.m_Value && !AbilityByName->m_bStolen.m_Value )
          {
            v17 = CDOTA_Buff::GetCaster(this);
            CDOTA_BaseNPC::SwapAbilities(v17, "elder_titan_ancestral_spirit", "elder_titan_return_spirit", 1, 0);
          }
          CDOTA_Buff::Destroy(this, 0, 0, 0);
          KeyValues::~KeyValues(&kv);
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit::GetBonusDayVision  (line 484, @0x0000000002c1c300, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit::GetBonusDayVision(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit *const this,
        const CModifierParams *const params)
{
  return 0x43C8000000000001uLL;
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit::GetBonusNightVision  (line 490, @0x0000000002c1c320, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit::GetBonusNightVision(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit *const this,
        const CModifierParams *const params)
{
  return 0x43C8000000000001uLL;
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit::AddCustomTransmiterData  (line 499, @0x0000000002c21e30, libserver.so)  // inlines: set_has_movement_speed, set_movement_speed
// calls: CDOTA_Buff::AddCustomTransmiterData
void __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit::AddCustomTransmiterData(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  int32 m_nBonusMoveSpeed; // eax

  m_nBonusMoveSpeed = this->m_nBonusMoveSpeed;
  *(entry + 4) |= 0x200000u;
  *(entry + 32) = m_nBonusMoveSpeed;
  CDOTA_Buff::AddCustomTransmiterData(this, entry);
}


// CDOTA_Ability_Elder_Titan_AncestralSpirit::Precache  (line 514, @0x0000000002c23250, libserver.so)
// calls: CDOTABaseAbility::Precache, DOTA_PrecacheUnitByNameSync
// strings: "npc_dota_elder_titan_ancestral_spirit"
void __fastcall CDOTA_Ability_Elder_Titan_AncestralSpirit::Precache(
        CDOTA_Ability_Elder_Titan_AncestralSpirit *const this,
        const CEntityPrecacheContext *pContext)
{
  CDOTABaseAbility::Precache(this, pContext);
  DOTA_PrecacheUnitByNameSync("npc_dota_elder_titan_ancestral_spirit", pContext, -1);
}


// CDOTA_Ability_Elder_Titan_AncestralSpirit::Spawn  (line 525, @0x0000000002c234c0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetParent, GetSerialNumber, GetTeamNumber, Set, SetBlockCreepSpawn, ToDOTABaseNPC, ToDOTABaseNPCHero, operator=
// calls: CDOTABaseAbility::Spawn, CGameSceneNode::GetOwnerEntity, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, DOTA_CreateUnitByName, CBaseEntity::AddEffects, CDOTA_BaseNPC::SetControllableByPlayer, CBaseAnimating::GetSkin, CBaseAnimating::SetSkin, CBaseAnimating::GetModelScale, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility (19 total)
// strings: "npc_dota_elder_titan_ancestral_spirit", "elder_titan_return_spirit", "elder_titan_natural_order_spirit", "elder_titan_natural_order", "modifier_elder_titan_ancestral_spirit_hidden"
void __fastcall CDOTA_Ability_Elder_Titan_AncestralSpirit::Spawn(
        CDOTA_Ability_Elder_Titan_AncestralSpirit *const this,
        const CEntityKeyValues *pKeyValues)
{
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  int m_Value; // r14d
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v7; // r12
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *UnitByName; // rax
  CDOTA_BaseNPC *v11; // r13
  CDOTA_BaseNPC *v12; // rax
  int v13; // eax
  CDOTA_BaseNPC *v14; // rax
  CUtlStringToken v15; // eax
  CDOTA_BaseNPC *v16; // rax
  void (__fastcall *v17)(CDOTA_BaseNPC *, float); // r12
  float ModelScale; // xmm0_4
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v20; // r12
  CDOTABaseAbility *v21; // r12
  CDOTABaseAbility *v22; // rax
  CDOTABaseAbility *v23; // r14
  CDOTA_BaseNPC *v24; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v26; // eax
  __int16 v27; // cx
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v29; // [rsp+18h] [rbp-28h]

  v29 = __readfsqword(0x28u);
  CDOTABaseAbility::Spawn(this, pKeyValues);
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
  {
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    if ( OwnerEntity != 0 && OwnerEntity->m_bIsDOTANPC )
    {
      m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
      Caster = CDOTABaseAbility::GetCaster(this);
      v7 = CDOTABaseAbility::GetCaster(this);
      v8 = CDOTABaseAbility::GetCaster(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
      UnitByName = DOTA_CreateUnitByName("npc_dota_elder_titan_ancestral_spirit", AbsOrigin, 1, v7, Caster, m_Value);
      v11 = UnitByName;
      if ( UnitByName != 0 )
      {
        CBaseEntity::AddEffects(UnitByName, 32);
        v11->m_bBlocksCreepSpawn = 0;
        v12 = CDOTABaseAbility::GetCaster(this);
        v13 = (*(v12->_vptr_IHandleEntity + 414))(v12);
        CDOTA_BaseNPC::SetControllableByPlayer(v11, v13, 0);
        v14 = CDOTABaseAbility::GetCaster(this);
        v15.m_nHashCode = CBaseAnimating::GetSkin(v14).m_nHashCode;
        CBaseAnimating::SetSkin(v11, v15);
        this->m_nReturnFXIndex = -1;
        v16 = CDOTABaseAbility::GetCaster(this);
        if ( v16 != 0 && (v16->m_iUnitType & 1) != 0 )
        {
          v17 = *(v11->_vptr_IHandleEntity + 222);
          ModelScale = CBaseAnimating::GetModelScale(v16);
          v17(v11, ModelScale);
        }
        AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v11, "elder_titan_return_spirit", 0);
        v20 = AbilityByName;
        if ( AbilityByName != 0 )
        {
          CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
          CDOTABaseAbility::SetActivated(v20, 1);
          CDOTABaseAbility::SetHidden(v20, 0);
        }
        v21 = CDOTA_BaseNPC::FindAbilityByName(v11, "elder_titan_natural_order_spirit", 0);
        v22 = CDOTA_BaseNPC::FindAbilityByName(v11, "elder_titan_natural_order", 0);
        v23 = v22;
        if ( v21 != 0 && v22 != 0 && v21->m_iLevel.m_Value < v22->m_iLevel.m_Value )
        {
          do
            CDOTABaseAbility::UpgradeAbility(v21, 0);
          while ( v21->m_iLevel.m_Value < v23->m_iLevel.m_Value );
        }
        KeyValues::KeyValues(&kv, "modifier_elder_titan_ancestral_spirit_hidden");
        v24 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v11, v24, this, "modifier_elder_titan_ancestral_spirit_hidden", &kv, 0);
        m_pEntity = v11->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v26 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v27 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v27 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(this->m_hAncestralSpirit.m_Index) = v27 | this->m_hAncestralSpirit.m_Index & 0x8000;
          this->m_hAncestralSpirit.m_Index = (v26 << 15) | this->m_hAncestralSpirit.m_Index & 0x7FFF;
        }
        else
        {
          this->m_hAncestralSpirit.m_Index = -1;
        }
        KeyValues::~KeyValues(&kv);
      }
    }
  }
}


// CDOTA_Ability_Elder_Titan_AncestralSpirit::UpdateOnRemove  (line 578, @0x0000000002c3e920, libserver.so)
// calls: CDOTA_Ability_Elder_Titan_AncestralSpirit::DestroySpirit, CDOTABaseAbility::UpdateOnRemove
void __fastcall CDOTA_Ability_Elder_Titan_AncestralSpirit::UpdateOnRemove(
        CDOTA_Ability_Elder_Titan_AncestralSpirit *const this)
{
  CDOTA_Ability_Elder_Titan_AncestralSpirit::DestroySpirit(this);
  CDOTABaseAbility::UpdateOnRemove(this);
}


// CDOTA_Ability_Elder_Titan_AncestralSpirit::OnUnStolen  (line 589, @0x0000000002c3e940, libserver.so)
// calls: CDOTABaseAbility::OnUnStolen, CDOTA_Ability_Elder_Titan_AncestralSpirit::DestroySpirit
void __fastcall CDOTA_Ability_Elder_Titan_AncestralSpirit::OnUnStolen(
        CDOTA_Ability_Elder_Titan_AncestralSpirit *const this)
{
  CDOTABaseAbility::OnUnStolen(this);
  CDOTA_Ability_Elder_Titan_AncestralSpirit::DestroySpirit(this);
}


// CDOTA_Ability_Elder_Titan_AncestralSpirit::DestroySpirit  (line 600, @0x0000000002c3e8b0, libserver.so)  // inlines: Get, GetAncestralSpirit, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::ForceKill
// callers: CDOTA_Ability_Elder_Titan_AncestralSpirit::UpdateOnRemove, CDOTA_Ability_Elder_Titan_AncestralSpirit::OnUnStolen, CDOTA_Unit_Hero_Elder_Titan::Event_Killed
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Elder_Titan_AncestralSpirit::DestroySpirit(
        CDOTA_Ability_Elder_Titan_AncestralSpirit *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v2; // rdx
  CEntityIdentity *v3; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi

  m_Index = this->m_hAncestralSpirit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v2 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAncestralSpirit.m_Index) >> 9) & 0x3F];
    if ( v2 != 0 )
    {
      v3 = &v2[this->m_hAncestralSpirit.m_Index & 0x1FF];
      if ( v3 != 0 && m_Index == v3->m_EHandle.m_Index )
      {
        m_pInstance = v3->m_pInstance;
        if ( v3->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
          CDOTA_BaseNPC::ForceKill(m_pInstance, 0);
      }
    }
  }
}


// CDOTA_Ability_Elder_Titan_AncestralSpirit::OnSpellStart  (line 612, @0x0000000002c67a00, libserver.so)  // inlines: Get, GetAncestralSpirit, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetParent, MarkPVSInformationDirty, RemoveEffects, ToDOTABaseNPC, Vector, VectorSubtract, operator CBaseEntity*, operator-
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CEntityHandle::operator CEntityInstance*, DOTA_EmitSound, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, CBaseEntity::SetAbsOrigin, CDOTA_BaseNPC::Interrupt, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_BaseNPC::SetControllableByPlayer, CDOTA_BaseNPC::SwapAbilities, KeyValues::KeyValues (30 total)
// strings: "spirit_duration", "Hero_ElderTitan.AncestralSpirit.Spawn", "Hero_ElderTitan.AncestralSpirit.Loop", "Hero_ElderTitan.AncestralSpirit.Cast", "modifier_elder_titan_ancestral_spirit_hidden", "elder_titan_return_spirit" (13 total)
void __fastcall CDOTA_Ability_Elder_Titan_AncestralSpirit::OnSpellStart(
        CDOTA_Ability_Elder_Titan_AncestralSpirit *const this)
{
  EHANDLE *p_m_hAncestralSpirit; // r12
  int LevelSpecialValue; // eax
  CDOTA_BaseNPC *v4; // rax
  CEntityInstance *v5; // rax
  CDOTA_BaseNPC *v6; // rdx
  CDOTA_BaseNPC *Caster; // rax
  CEntityInstance *v8; // rax
  CBaseEntity *v9; // rdi
  CEntityInstance *v10; // rax
  CDOTA_BaseNPC *v11; // rdi
  CEntityInstance *v12; // rax
  CDOTA_BaseNPC *v13; // rdi
  CDOTA_BaseNPC *v14; // rax
  int v15; // r13d
  CEntityInstance *v16; // rax
  CDOTA_BaseNPC *v17; // rdi
  CDOTA_BaseNPC *v18; // rax
  float v19; // xmm1_4
  CDOTA_BaseNPC *v20; // rax
  float v21; // xmm1_4
  CDOTA_BaseNPC *v22; // r14
  CEntityInstance *v23; // rax
  CDOTA_BaseNPC *v24; // rdi
  CEntityInstance *v25; // rax
  CBaseEntity *v26; // r14
  CEntityInstance *v27; // rax
  const CBaseEntity *v28; // rdi
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v30; // rax
  const Vector *v31; // rax
  vec_t v32; // xmm2_4
  vec_t v33; // xmm1_4
  vec_t v34; // xmm0_4
  CEntityInstance *v35; // rax
  CBaseEntity *v36; // rdi
  CEntityInstance *v37; // rax
  CDOTA_BaseNPC *v38; // rdi
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r14d
  CEntityInstance *v43; // rax
  const CBaseAnimating *v44; // r12
  CDOTA_ParticleManager *v45; // rax
  CDOTA_ParticleManager *v46; // rax
  CDOTA_ParticleManager *v47; // rax
  CDOTA_BaseNPC *v48; // rax
  CDOTABaseAbility *AbilityByName; // r14
  CEntityInstance *v50; // rax
  CDOTA_BaseNPC *v51; // rdi
  CDOTABaseAbility *v52; // rax
  CDOTABaseAbility *v53; // r13
  CDOTA_BaseNPC *v54; // rax
  CDOTABaseAbility *v55; // r14
  CEntityInstance *v56; // rax
  CDOTA_BaseNPC *v57; // rdi
  CDOTABaseAbility *v58; // rax
  CDOTABaseAbility *v59; // r13
  void (__fastcall *v60)(CDOTABaseAbility *, float); // r15
  float CooldownTimeRemaining; // xmm0_4
  Vector vecDir; // [rsp+10h] [rbp-80h] BYREF
  QAngle faceAngles; // [rsp+20h] [rbp-70h] BYREF
  Vector vOrigin; // [rsp+30h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v66; // [rsp+58h] [rbp-38h]

  p_m_hAncestralSpirit = &this->m_hAncestralSpirit;
  v66 = __readfsqword(0x28u);
  this->spirit_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "spirit_duration", -1, 0);
  this->buff_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "buff_duration", -1, 0);
  this->speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  this->m_bIsReturning = 0;
  this->radius = LevelSpecialValue;
  this->m_nCreepsHit = 0;
  this->m_nHeroesHit = 0;
  v4 = CEntityHandle::operator CEntityInstance *(p_m_hAncestralSpirit);
  if ( v4 != 0 && v4->m_bIsDOTANPC )
  {
    DOTA_EmitSound(10, "Hero_ElderTitan.AncestralSpirit.Spawn", v4);
    v5 = CEntityHandle::operator CEntityInstance *(p_m_hAncestralSpirit);
    if ( v5 != 0 && BYTE3(v5[7]._vptr_IHandleEntity) != 0 )
      v6 = v5;
    else
      v6 = 0;
    DOTA_EmitSound(10, "Hero_ElderTitan.AncestralSpirit.Loop", v6);
    Caster = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "Hero_ElderTitan.AncestralSpirit.Cast", Caster);
    if ( !this->m_bStolen.m_Value )
    {
      v48 = CDOTABaseAbility::GetCaster(this);
      AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v48, "elder_titan_echo_stomp", 0);
      v50 = CEntityHandle::operator CEntityInstance *(p_m_hAncestralSpirit);
      if ( v50 != 0 && BYTE3(v50[7]._vptr_IHandleEntity) != 0 )
        v51 = v50;
      else
        v51 = 0;
      v52 = CDOTA_BaseNPC::FindAbilityByName(v51, "elder_titan_echo_stomp_spirit", 0);
      v53 = v52;
      if ( v52 != 0 && AbilityByName != 0 )
      {
        (*(v52->_vptr_IHandleEntity + 212))(v52, AbilityByName->m_iLevel.m_Value);
        if ( (*(AbilityByName->_vptr_IHandleEntity + 245))(AbilityByName) == 0 )
        {
          v60 = *(v53->_vptr_IHandleEntity + 241);
          CooldownTimeRemaining = CDOTABaseAbility::GetCooldownTimeRemaining(AbilityByName);
          v60(v53, CooldownTimeRemaining);
        }
      }
      v54 = CDOTABaseAbility::GetCaster(this);
      v55 = CDOTA_BaseNPC::FindAbilityByName(v54, "elder_titan_natural_order", 0);
      v56 = CEntityHandle::operator CEntityInstance *(p_m_hAncestralSpirit);
      if ( v56 != 0 && BYTE3(v56[7]._vptr_IHandleEntity) != 0 )
        v57 = v56;
      else
        v57 = 0;
      v58 = CDOTA_BaseNPC::FindAbilityByName(v57, "elder_titan_natural_order_spirit", 0);
      v59 = v58;
      if ( v58 != 0 && v55 != 0 )
      {
        (*(v58->_vptr_IHandleEntity + 212))(v58, v55->m_iLevel.m_Value);
        (*(v59->_vptr_IHandleEntity + 262))(v59);
      }
    }
    vOrigin = CDOTABaseAbility::GetCursorPosition(this);
    v8 = CEntityHandle::operator CEntityInstance *(p_m_hAncestralSpirit);
    if ( v8 != 0 && BYTE3(v8[7]._vptr_IHandleEntity) != 0 )
      v9 = v8;
    else
      v9 = 0;
    CBaseEntity::SetAbsOrigin(v9, &vOrigin);
    v10 = CEntityHandle::operator CEntityInstance *(p_m_hAncestralSpirit);
    if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
      v11 = v10;
    else
      v11 = 0;
    CDOTA_BaseNPC::Interrupt(v11);
    v12 = CEntityHandle::operator CEntityInstance *(p_m_hAncestralSpirit);
    if ( v12 != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 )
      v13 = v12;
    else
      v13 = 0;
    CDOTA_BaseNPC::RemoveModifierByName(v13, "modifier_elder_titan_ancestral_spirit_hidden");
    v14 = CDOTABaseAbility::GetCaster(this);
    v15 = (*(v14->_vptr_IHandleEntity + 414))(v14);
    v16 = CEntityHandle::operator CEntityInstance *(p_m_hAncestralSpirit);
    if ( v16 != 0 && BYTE3(v16[7]._vptr_IHandleEntity) != 0 )
      v17 = v16;
    else
      v17 = 0;
    CDOTA_BaseNPC::SetControllableByPlayer(v17, v15, 0);
    v18 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::SwapAbilities(v18, "elder_titan_ancestral_spirit", "elder_titan_return_spirit", 0, 1);
    KeyValues::KeyValues(&kv, "modifier_elder_titan_ancestral_spirit");
    KeyValues::SetFloat(&kv, "duration", v19);
    v20 = CDOTABaseAbility::GetCaster(this);
    (*(v20->_vptr_IHandleEntity + 386))(v20);
    KeyValues::SetFloat(&kv, "speed", v21);
    v22 = CDOTABaseAbility::GetCaster(this);
    v23 = CEntityHandle::operator CEntityInstance *(p_m_hAncestralSpirit);
    if ( v23 != 0 && BYTE3(v23[7]._vptr_IHandleEntity) != 0 )
      v24 = v23;
    else
      v24 = 0;
    CDOTA_BaseNPC::AddNewModifier(v24, v22, this, "modifier_elder_titan_ancestral_spirit", &kv, 0);
    v25 = CEntityHandle::operator CEntityInstance *(p_m_hAncestralSpirit);
    if ( v25 != 0 && BYTE3(v25[7]._vptr_IHandleEntity) != 0 )
      v26 = v25;
    else
      v26 = 0;
    (*(v26->_vptr_IHandleEntity + 188))(v26, v26->m_fEffects.m_Value & 0xFFFFFFDF);
    v26->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
    CBaseEntity::DispatchUpdateTransmitState(v26);
    v27 = CEntityHandle::operator CEntityInstance *(p_m_hAncestralSpirit);
    if ( v27 != 0 && BYTE3(v27[7]._vptr_IHandleEntity) != 0 )
      v28 = v27;
    else
      v28 = 0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v28);
    v30 = CDOTABaseAbility::GetCaster(this);
    v31 = CBaseEntity::GetAbsOrigin(v30);
    v32 = v31->x - AbsOrigin->x;
    v33 = v31->y - AbsOrigin->y;
    v34 = v31->z - AbsOrigin->z;
    vOrigin.x = 0.0;
    vecDir.x = v32;
    vecDir.y = v33;
    vecDir.z = v34;
    vOrigin.y = 0.0;
    vOrigin.z = 1.0;
    VectorAngles(&vecDir, &vOrigin, &faceAngles);
    v35 = CEntityHandle::operator CEntityInstance *(p_m_hAncestralSpirit);
    if ( v35 != 0 && BYTE3(v35[7]._vptr_IHandleEntity) != 0 )
      v36 = v35;
    else
      v36 = 0;
    CBaseEntity::SetAbsAngles(v36, &faceAngles);
    v37 = CEntityHandle::operator CEntityInstance *(p_m_hAncestralSpirit);
    if ( v37 != 0 && BYTE3(v37[7]._vptr_IHandleEntity) != 0 )
      v38 = v37;
    else
      v38 = 0;
    CDOTA_BaseNPC::StartGesture(v38, 1534, 0.1, 0.1, 9, 0, 1.0);
    m_pParent = this->m_pGameSceneNode->m_pParent;
    if ( m_pParent != 0 )
      OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    else
      OwnerEntity = 0;
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_elder_titan/elder_titan_ancestral_spirit_cast.vpcf",
                 1,
                 OwnerEntity,
                 0,
                 0);
    v43 = CEntityHandle::operator CEntityInstance *(p_m_hAncestralSpirit);
    if ( v43 != 0 && BYTE3(v43[7]._vptr_IHandleEntity) != 0 )
      v44 = v43;
    else
      v44 = 0;
    v45 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v45, Particle, 1, v44, 1, 0, vec3_invalid, 1);
    vOrigin = CDOTABaseAbility::GetCursorPosition(this);
    v46 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v46, Particle, 2, *&vOrigin.x, vOrigin.z);
    v47 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v47, Particle);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Elder_Titan_AncestralSpirit::ReturnSpirit  (line 685, @0x0000000002c3e9c0, libserver.so)  // inlines: CEntityHandle, CHandle, Color, Get, GetAncestralSpirit, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, Vector, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=, sTrackingProjectileCreateInfo
// calls: DOTA_EmitSound, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_ProjectileManager::CreateTrackingProjectile, CDOTABody::StartAnimation, VectorAngles, CBaseEntity::SetAbsAngles, CDOTA_BaseNPC::StartGesture, CEntityHandle::operator CEntityInstance*, GetParticleManager, CDOTA_ParticleManager::CreateParticle, __stack_chk_fail
// callers: CDOTA_Modifier_Elder_Titan_AncestralSpirit::DoReturn, CDOTA_Ability_Elder_Titan_ReturnSpirit::OnSpellStart
// strings: "Hero_ElderTitan.AncestralSpirit.Return", "particles/units/heroes/hero_elder_titan/elder_titan_ancestral_spirit_return_ambient.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Elder_Titan_AncestralSpirit::ReturnSpirit(
        CDOTA_Ability_Elder_Titan_AncestralSpirit *const this)
{
  uint32 m_Index; // eax
  char *v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 *v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  CDOTA_BaseNPC *v10; // rdx
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  int speed; // eax
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v16; // cx
  uint32 v17; // eax
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  const CBaseEntity *m_pInstance; // rdi
  const Vector *AbsOrigin; // rax
  vec_t v22; // xmm0_4
  uint32 v23; // eax
  CConcreteEntityList *v24; // rsi
  CEntityIdentity *v25; // rdx
  __int64 v26; // rcx
  CEntityIdentity *v27; // rdx
  CEntityInstance *v28; // rdi
  CDOTABody *v29; // rax
  uint32 v30; // eax
  CEntityIdentity *v31; // rdx
  CEntityIdentity *v32; // rdx
  const CBaseEntity *v33; // rdi
  const Vector *v34; // r12
  CDOTA_BaseNPC *v35; // rax
  const Vector *v36; // rax
  float v37; // xmm1_4
  float v38; // xmm0_4
  vec_t v39; // xmm2_4
  vec_t v40; // xmm1_4
  vec_t v41; // xmm0_4
  uint32 v42; // eax
  CEntityIdentity *v43; // rdx
  CEntityIdentity *v44; // rdx
  CBaseEntity *v45; // rdi
  uint32 v46; // eax
  CEntityIdentity *v47; // rdx
  CEntityIdentity *v48; // rdx
  CDOTA_BaseNPC *v49; // rdi
  CEntityInstance *v50; // rax
  CBaseEntity *v51; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  Vector vecDir; // [rsp+0h] [rbp-B0h] BYREF
  QAngle angle; // [rsp+10h] [rbp-A0h] BYREF
  Vector vPseudoUp; // [rsp+20h] [rbp-90h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+30h] [rbp-80h] BYREF
  unsigned __int64 v57; // [rsp+98h] [rbp-18h]

  v57 = __readfsqword(0x28u);
  if ( !this->m_bIsReturning )
  {
    m_Index = this->m_hAncestralSpirit.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v3 = &CEntityHandle::gm_pEntityList->m_Lock.gap0 + ((LOWORD(this->m_hAncestralSpirit.m_Index) >> 6) & 0x1F8);
      v4 = *(v3 + 1);
      if ( v4 != 0 )
      {
        v5 = 120LL * (this->m_hAncestralSpirit.m_Index & 0x1FF);
        v6 = (v5 + v4);
        if ( v6 != 0 && m_Index == *(v6 + 4) )
        {
          v7 = *v6;
          if ( v7 != 0 && *(v7 + 339) != 0 )
          {
            this->m_bIsReturning = 1;
            v8 = *(v3 + 1);
            if ( v8 == 0 || (v9 = v8 + v5) == 0 || m_Index != *(v9 + 16) || (v10 = *v9, *v9 == 0) || !v10->m_bIsDOTANPC )
              v10 = 0;
            DOTA_EmitSound(10, "Hero_ElderTitan.AncestralSpirit.Return", v10);
            info.hSource.m_Index = -1;
            info.hTarget.m_Index = -1;
            info.colorGemColor = 0;
            info.pszEffectName = 0;
            info.pAttackRecord = 0;
            info.vSourceLoc.x = vec3_origin.x;
            y = vec3_origin.y;
            info.iSourceAttachment = 1;
            info.vSourceLoc.y = y;
            z = vec3_origin.z;
            speed = this->speed;
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
            info.pAbility = this;
            info.iMoveSpeed = speed;
            Caster = CDOTABaseAbility::GetCaster(this);
            if ( Caster != 0 && (m_pEntity = Caster->m_pEntity) != 0 )
            {
              v16 = 0x7FFF;
              if ( m_pEntity->m_EHandle.m_Index != -1 )
                v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
              info.hTarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                   | v16 & 0x7FFF;
            }
            else
            {
              info.hTarget.m_Index = -1;
            }
            v17 = this->m_hAncestralSpirit.m_Index;
            if ( v17 + 2 <= 1
              || (v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAncestralSpirit.m_Index) >> 9)
                                                                       & 0x3F]) == 0
              || (v19 = &v18[this->m_hAncestralSpirit.m_Index & 0x1FF]) == 0
              || v17 != v19->m_EHandle.m_Index
              || (m_pInstance = v19->m_pInstance, v19->m_pInstance == 0)
              || !m_pInstance->m_bIsDOTANPC )
            {
              m_pInstance = 0;
            }
            AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
            info.vSourceLoc.x = AbsOrigin->x;
            info.vSourceLoc.y = AbsOrigin->y;
            v22 = AbsOrigin->z;
            info.bDodgeable = 0;
            info.vSourceLoc.z = v22;
            CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
            v23 = this->m_hAncestralSpirit.m_Index;
            v24 = CEntityHandle::gm_pEntityList;
            if ( v23 + 2 <= 1
              || (v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAncestralSpirit.m_Index) >> 9)
                                                                       & 0x3F]) == 0
              || (v26 = this->m_hAncestralSpirit.m_Index & 0x1FF, v24 = (8 * v26), (v27 = &v25[v26]) == 0)
              || v23 != v27->m_EHandle.m_Index
              || (v28 = v27->m_pInstance, v27->m_pInstance == 0)
              || BYTE3(v28[7]._vptr_IHandleEntity) == 0 )
            {
              v28 = 0;
            }
            v29 = (*(v28->_vptr_IHandleEntity + 377))(v28, v24);
            CDOTABody::StartAnimation(v29, 0x5E4u, 0, 1.0);
            v30 = this->m_hAncestralSpirit.m_Index;
            if ( v30 + 2 <= 1
              || (v31 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAncestralSpirit.m_Index) >> 9)
                                                                       & 0x3F]) == 0
              || (v32 = &v31[this->m_hAncestralSpirit.m_Index & 0x1FF]) == 0
              || v30 != v32->m_EHandle.m_Index
              || (v33 = v32->m_pInstance, v32->m_pInstance == 0)
              || !v33->m_bIsDOTANPC )
            {
              v33 = 0;
            }
            v34 = CBaseEntity::GetAbsOrigin(v33);
            v35 = CDOTABaseAbility::GetCaster(this);
            v36 = CBaseEntity::GetAbsOrigin(v35);
            v37 = v36->y;
            v38 = v36->z;
            v39 = v36->x - v34->x;
            vPseudoUp.x = 0.0;
            v40 = v37 - v34->y;
            vPseudoUp.y = 0.0;
            v41 = v38 - v34->z;
            vPseudoUp.z = 1.0;
            vecDir.x = v39;
            vecDir.y = v40;
            vecDir.z = v41;
            VectorAngles(&vecDir, &vPseudoUp, &angle);
            v42 = this->m_hAncestralSpirit.m_Index;
            if ( v42 + 2 <= 1
              || (v43 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAncestralSpirit.m_Index) >> 9)
                                                                       & 0x3F]) == 0
              || (v44 = &v43[this->m_hAncestralSpirit.m_Index & 0x1FF]) == 0
              || v42 != v44->m_EHandle.m_Index
              || (v45 = v44->m_pInstance, v44->m_pInstance == 0)
              || !v45->m_bIsDOTANPC )
            {
              v45 = 0;
            }
            CBaseEntity::SetAbsAngles(v45, &angle);
            v46 = this->m_hAncestralSpirit.m_Index;
            if ( v46 + 2 <= 1
              || (v47 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAncestralSpirit.m_Index) >> 9)
                                                                       & 0x3F]) == 0
              || (v48 = &v47[this->m_hAncestralSpirit.m_Index & 0x1FF]) == 0
              || v46 != v48->m_EHandle.m_Index
              || (v49 = v48->m_pInstance, v48->m_pInstance == 0)
              || !v49->m_bIsDOTANPC )
            {
              v49 = 0;
            }
            CDOTA_BaseNPC::StartGesture(v49, 1508, 0.1, 0.1, 9, 0, 1.0);
            if ( this->m_nReturnFXIndex == -1 )
            {
              v50 = CEntityHandle::operator CEntityInstance *(&this->m_hAncestralSpirit);
              if ( v50 != 0 && BYTE3(v50[7]._vptr_IHandleEntity) != 0 )
                v51 = v50;
              else
                v51 = 0;
              ParticleManager = GetParticleManager();
              this->m_nReturnFXIndex = CDOTA_ParticleManager::CreateParticle(
                                         ParticleManager,
                                         "particles/units/heroes/hero_elder_titan/elder_titan_ancestral_spirit_return_ambient.vpcf",
                                         1,
                                         v51,
                                         0,
                                         0);
            }
          }
        }
      }
    }
  }
}


// CDOTA_Ability_Elder_Titan_AncestralSpirit::OnProjectileHit  (line 726, @0x0000000002c36d70, libserver.so)  // inlines: Get, GetAncestralSpirit, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, IndexToIdentity, IsValid, LookupEntity, SetHitEntityCount, SpeakConcept, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTABaseAbility::GetCaster, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy, KeyValues::KeyValues, KeyValues::SetInt, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria (23 total)
// strings: "modifier_elder_titan_ancestral_spirit", "modifier_elder_titan_ancestral_spirit_buff", "spiritreturn", "Hero_ElderTitan.AncestralSpirit.Buff", "Hero_ElderTitan.AncestralSpirit.Return", "Hero_ElderTitan.AncestralSpirit.Loop" (9 total)
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Elder_Titan_AncestralSpirit::OnProjectileHit(
        CDOTA_Ability_Elder_Titan_AncestralSpirit *const this,
        _WORD *hTarget,
        const Vector *const vLocation)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CEntityInstance *v8; // rax
  CDOTA_BaseNPC *v9; // rdi
  CDOTA_Buff *ModifierByName; // rax
  int m_pHead; // ecx
  float v12; // xmm1_4
  CDOTA_BaseNPC *v13; // r13
  CDOTA_BaseNPC *v14; // rax
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_BaseNPC *v16; // rax
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rdi
  CEntityInstance *v19; // rax
  CBaseEntity *v20; // rdi
  uint32 m_Index; // eax
  CEntityIdentity *v22; // rdx
  CEntityIdentity *v23; // rdx
  CDOTA_BaseNPC *Caster; // rax
  CBaseEntity *v25; // rdi
  CDOTA_BaseNPC *v26; // rax
  uint32 v27; // edx
  CEntityIdentity *v28; // rcx
  CEntityIdentity *v29; // rcx
  CDOTA_BaseNPC *v30; // rdi
  int m_nReturnFXIndex; // r14d
  CDOTA_ParticleManager *ParticleManager; // rax
  uint32 v33; // eax
  CEntityIdentity *v34; // rdx
  CEntityIdentity *v35; // rdx
  CDOTA_BaseNPC *v36; // rdi
  CResponseCriteriaSet criteria; // [rsp+10h] [rbp-80h] BYREF
  KeyValues kv2; // [rsp+50h] [rbp-40h] BYREF
  unsigned __int64 v39; // [rsp+68h] [rbp-28h]

  v39 = __readfsqword(0x28u);
  if ( (*hTarget + 2) > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[*hTarget & 0x1FF];
      if ( v5 != 0 && *hTarget == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTABaseAbility::GetCaster(this) == m_pInstance )
        {
          this->m_bIsReturning = 0;
          v8 = CEntityHandle::operator CEntityInstance *(&this->m_hAncestralSpirit);
          if ( v8 == 0 || (v9 = v8, BYTE3(v8[7]._vptr_IHandleEntity) == 0) )
            v9 = 0;
          ModifierByName = CDOTA_BaseNPC::FindModifierByName(v9, "modifier_elder_titan_ancestral_spirit", 0);
          if ( ModifierByName != 0 )
          {
            m_pHead = ModifierByName[1].m_References.m_pHead;
            this->m_nHeroesHit += HIDWORD(ModifierByName[1].m_References.m_pHead);
            this->m_nCreepsHit += m_pHead;
            CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
          }
          if ( this->m_bHidden.m_Value )
          {
            Caster = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::SwapAbilities(Caster, "elder_titan_ancestral_spirit", "elder_titan_return_spirit", 1, 0);
          }
          if ( this->m_nHeroesHit + this->m_nCreepsHit > 0 )
          {
            KeyValues::KeyValues(&kv2, "modifier_elder_titan_ancestral_spirit_buff");
            KeyValues::SetInt(&kv2, "creeps", this->m_nCreepsHit);
            KeyValues::SetInt(&kv2, "heroes", this->m_nHeroesHit);
            KeyValues::SetFloat(&kv2, "duration", v12);
            v13 = CDOTABaseAbility::GetCaster(this);
            v14 = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(v14, v13, this, "modifier_elder_titan_ancestral_spirit_buff", &kv2, 0);
            KeyValues::~KeyValues(&kv2);
          }
          CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
          CResponseCriteriaSet::AppendCriteria(&criteria, "spiritreturn", "yes", 1.0);
          m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
          if ( m_pSpeech != 0 )
            CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 1, 0, 0, 0, 0);
          v16 = CDOTABaseAbility::GetCaster(this);
          DOTA_EmitSound(10, "Hero_ElderTitan.AncestralSpirit.Buff", v16);
          m_pParent = this->m_pGameSceneNode->m_pParent;
          if ( m_pParent != 0 )
            OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
          else
            OwnerEntity = 0;
          CBaseEntity::StopSound(OwnerEntity, "Hero_ElderTitan.AncestralSpirit.Return");
          v19 = CEntityHandle::operator CEntityInstance *(&this->m_hAncestralSpirit);
          if ( v19 != 0 && BYTE3(v19[7]._vptr_IHandleEntity) != 0 )
            v20 = v19;
          else
            v20 = 0;
          CBaseEntity::StopSound(v20, "Hero_ElderTitan.AncestralSpirit.Loop");
          m_Index = this->m_hAncestralSpirit.m_Index;
          if ( m_Index + 2 > 1 )
          {
            v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAncestralSpirit.m_Index) >> 9)
                                                                 & 0x3F];
            if ( v22 != 0 )
            {
              v23 = &v22[this->m_hAncestralSpirit.m_Index & 0x1FF];
              if ( v23 != 0 && m_Index == v23->m_EHandle.m_Index )
              {
                v25 = v23->m_pInstance;
                if ( v23->m_pInstance != 0 && v25->m_bIsDOTANPC )
                {
                  CBaseEntity::AddEffects(v25, 32);
                  KeyValues::KeyValues(&kv2, "modifier_elder_titan_ancestral_spirit_hidden");
                  v26 = CDOTABaseAbility::GetCaster(this);
                  v27 = this->m_hAncestralSpirit.m_Index;
                  if ( v27 + 2 <= 1
                    || (v28 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAncestralSpirit.m_Index) >> 9)
                                                                             & 0x3F]) == 0
                    || (v29 = &v28[this->m_hAncestralSpirit.m_Index & 0x1FF]) == 0
                    || v27 != v29->m_EHandle.m_Index
                    || (v30 = v29->m_pInstance, v29->m_pInstance == 0)
                    || !v30->m_bIsDOTANPC )
                  {
                    v30 = 0;
                  }
                  CDOTA_BaseNPC::AddNewModifier(v30, v26, this, "modifier_elder_titan_ancestral_spirit_hidden", &kv2, 0);
                  m_nReturnFXIndex = this->m_nReturnFXIndex;
                  if ( m_nReturnFXIndex != -1 )
                  {
                    ParticleManager = GetParticleManager();
                    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nReturnFXIndex, 0);
                    this->m_nReturnFXIndex = -1;
                  }
                  v33 = this->m_hAncestralSpirit.m_Index;
                  if ( v33 + 2 <= 1
                    || (v34 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAncestralSpirit.m_Index) >> 9)
                                                                             & 0x3F]) == 0
                    || (v35 = &v34[this->m_hAncestralSpirit.m_Index & 0x1FF]) == 0
                    || v33 != v35->m_EHandle.m_Index
                    || (v36 = v35->m_pInstance, v35->m_pInstance == 0)
                    || !v36->m_bIsDOTANPC )
                  {
                    v36 = 0;
                  }
                  CDOTA_BaseNPC::RemoveGesture(v36, 1508);
                  KeyValues::~KeyValues(&kv2);
                }
              }
            }
          }
          CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
        }
      }
    }
  }
  return 1;
}


// CDOTA_Ability_Elder_Titan_AncestralSpirit::OnProjectileThink  (line 792, @0x0000000002c7be70, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetAncestralSpirit, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, ToDOTABaseNPC, Vector, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator-, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::GetCaster, FindUnitsInRadius, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Modifier_Elder_Titan_AncestralSpirit::AddDamagedUnit, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CBaseEntity::SetAbsOrigin, CBaseEntity::GetAbsOrigin, VectorAngles, CBaseEntity::SetAbsAngles, KeyValues::KeyValues (17 total)
// strings: "modifier_elder_titan_ancestral_spirit", "modifier_elder_titan_natural_order_magic_resistance", "elder_titan_natural_order"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Elder_Titan_AncestralSpirit::OnProjectileThink(
        CDOTA_Ability_Elder_Titan_AncestralSpirit *const this,
        const Vector *const vLocation)
{
  CDOTA_BaseNPC *v3; // rax
  __m128i v4; // xmm3
  float v5; // ebx
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v7; // rax
  __int64 v8; // rbx
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  unsigned __int64 m_Value; // rax
  CDOTA_Buff *ModifierByName; // r15
  CDOTA_BaseNPC *v17; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v19; // r13
  CEntityInstance *v20; // rax
  CBaseEntity *v21; // rdi
  CEntityInstance *v22; // rax
  const CBaseEntity *v23; // rdi
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v25; // rax
  const Vector *v26; // rax
  vec_t v27; // xmm2_4
  vec_t v28; // xmm1_4
  vec_t v29; // xmm0_4
  CEntityInstance *v30; // rax
  CBaseEntity *v31; // rdi
  float v32; // xmm1_4
  CDOTA_BaseNPC *v33; // rax
  EHANDLE *p_m_hAncestralSpirit; // [rsp+20h] [rbp-B0h]
  CDOTA_Modifier_Elder_Titan_AncestralSpirit *pSpiritBuff; // [rsp+38h] [rbp-98h]
  Vector vecDir; // [rsp+40h] [rbp-90h] BYREF
  QAngle angle; // [rsp+50h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+60h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+80h] [rbp-50h] BYREF
  unsigned __int64 v41; // [rsp+98h] [rbp-38h]

  v41 = __readfsqword(0x28u);
  p_m_hAncestralSpirit = &this->m_hAncestralSpirit;
  v3 = CEntityHandle::operator CEntityInstance *(&this->m_hAncestralSpirit);
  if ( v3 != 0 && v3->m_bIsDOTANPC )
  {
    pSpiritBuff = CDOTA_BaseNPC::FindModifierByName(v3, "modifier_elder_titan_ancestral_spirit", 0);
    if ( pSpiritBuff != 0 )
    {
      *v4.m128i_i32 = this->radius;
      hEntities.m_Size = 0;
      hEntities.m_Memory.m_pMemory = 0;
      hEntities.m_Memory.m_nAllocationCount = 0;
      hEntities.m_Memory.m_nGrowSize = 0;
      v5 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
      Caster = CDOTABaseAbility::GetCaster(this);
      v7 = CDOTABaseAbility::GetCaster(this);
      FindUnitsInRadius(v7->m_iTeamNum.m_Value, vLocation, Caster, v5, &hEntities, 2, 3, 16, 0, 0);
      if ( hEntities.m_Size > 0 )
      {
        v8 = 0;
        do
        {
          while ( 1 )
          {
            v9 = &hEntities.m_Memory.m_pMemory[v8];
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
                  if ( v13->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && !m_pInstance->m_bIsWaitingToSpawn.m_Value )
                  {
                    m_Value = m_pInstance->m_nUnitState64.m_Value;
                    if ( (m_Value & 0x100) == 0 && (m_Value & 0x200) == 0 )
                      break;
                  }
                }
              }
            }
            if ( hEntities.m_Size <= ++v8 )
              goto LABEL_21;
          }
          ModifierByName = CDOTA_BaseNPC::FindModifierByName(
                             m_pInstance,
                             "modifier_elder_titan_natural_order_magic_resistance",
                             0);
          v17 = CDOTABaseAbility::GetCaster(this);
          AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v17, "elder_titan_natural_order", 0);
          v19 = AbilityByName;
          if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 && ModifierByName == 0 )
          {
            KeyValues::KeyValues(&kv, "modifier_elder_titan_natural_order_magic_resistance");
            KeyValues::SetFloat(&kv, "duration", v32);
            v33 = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(
              m_pInstance,
              v33,
              v19,
              "modifier_elder_titan_natural_order_magic_resistance",
              &kv,
              0);
            KeyValues::~KeyValues(&kv);
          }
          CDOTA_Modifier_Elder_Titan_AncestralSpirit::AddDamagedUnit(pSpiritBuff, m_pInstance);
          ++v8;
        }
        while ( hEntities.m_Size > v8 );
      }
LABEL_21:
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
    }
    v20 = CEntityHandle::operator CEntityInstance *(p_m_hAncestralSpirit);
    if ( v20 != 0 && BYTE3(v20[7]._vptr_IHandleEntity) != 0 )
      v21 = v20;
    else
      v21 = 0;
    CBaseEntity::SetAbsOrigin(v21, vLocation);
    v22 = CEntityHandle::operator CEntityInstance *(p_m_hAncestralSpirit);
    if ( v22 != 0 && BYTE3(v22[7]._vptr_IHandleEntity) != 0 )
      v23 = v22;
    else
      v23 = 0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(v23);
    v25 = CDOTABaseAbility::GetCaster(this);
    v26 = CBaseEntity::GetAbsOrigin(v25);
    v27 = v26->x - AbsOrigin->x;
    v28 = v26->y - AbsOrigin->y;
    v29 = v26->z - AbsOrigin->z;
    hEntities.m_Size = 0;
    vecDir.x = v27;
    vecDir.y = v28;
    vecDir.z = v29;
    *(&hEntities.m_Size + 1) = 0;
    LODWORD(hEntities.m_Memory.m_pMemory) = 1065353216;
    VectorAngles(&vecDir, &hEntities, &angle);
    v30 = CEntityHandle::operator CEntityInstance *(p_m_hAncestralSpirit);
    if ( v30 != 0 && BYTE3(v30[7]._vptr_IHandleEntity) != 0 )
      v31 = v30;
    else
      v31 = 0;
    CBaseEntity::SetAbsAngles(v31, &angle);
  }
}


// CDOTA_Ability_Elder_Titan_AncestralSpirit::OnUpgrade  (line 836, @0x0000000002c21850, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "elder_titan_return_spirit"
void __fastcall CDOTA_Ability_Elder_Titan_AncestralSpirit::OnUpgrade(
        CDOTA_Ability_Elder_Titan_AncestralSpirit *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "elder_titan_return_spirit", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value < this->m_iLevel.m_Value )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Elder_Titan_AncestralSpirit::PauseReturn  (line 850, @0x0000000002c3f240, libserver.so)  // inlines: Get, GetAncestralSpirit, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_ProjectileManager::ChangeTrackingProjectileSpeed, CDOTA_BaseNPC::RemoveGesture
// callers: CDOTA_Ability_Elder_Titan_EchoStomp::OnSpellStart, CDOTA_Ability_Elder_Titan_EchoStomp::OnAbilityPhaseStart, CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::OnAbilityPhaseStart
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Elder_Titan_AncestralSpirit::PauseReturn(
        CDOTA_Ability_Elder_Titan_AncestralSpirit *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi

  CDOTA_ProjectileManager::ChangeTrackingProjectileSpeed(&g_DOTAProjectileManager, this, 0);
  m_Index = this->m_hAncestralSpirit.m_Index;
  if ( m_Index + 2 > 1
    && (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAncestralSpirit.m_Index) >> 9) & 0x3F]) != 0
    && (v4 = &v3[this->m_hAncestralSpirit.m_Index & 0x1FF]) != 0
    && m_Index == v4->m_EHandle.m_Index
    && (m_pInstance = v4->m_pInstance, v4->m_pInstance != 0)
    && m_pInstance->m_bIsDOTANPC )
  {
    CDOTA_BaseNPC::RemoveGesture(m_pInstance, 1508);
  }
  else
  {
    CDOTA_BaseNPC::RemoveGesture(0, 1508);
  }
}


// CDOTA_Ability_Elder_Titan_AncestralSpirit::UnpauseReturn  (line 860, @0x0000000002c3f2e0, libserver.so)  // inlines: Get, GetAncestralSpirit, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_ProjectileManager::ChangeTrackingProjectileSpeed, CDOTA_BaseNPC::StartGesture
// callers: CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::OnAbilityPhaseInterrupted, CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::OnSpellStart, CDOTA_Ability_Elder_Titan_EchoStomp::OnAbilityPhaseInterrupted, CDOTA_Ability_Elder_Titan_EchoStomp::DoEchoStomp, CDOTA_Ability_Elder_Titan_EchoStomp::OnChannelFinish
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Elder_Titan_AncestralSpirit::UnpauseReturn(
        CDOTA_Ability_Elder_Titan_AncestralSpirit *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi

  CDOTA_ProjectileManager::ChangeTrackingProjectileSpeed(&g_DOTAProjectileManager, this, this->speed);
  m_Index = this->m_hAncestralSpirit.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAncestralSpirit.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[this->m_hAncestralSpirit.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  CDOTA_BaseNPC::StartGesture(m_pInstance, 1508, 0.1, 0.1, 9, 0, 1.0);
}


// CDOTA_Ability_Elder_Titan_AncestralSpirit::GetAbilityDamageToTargetOverInterval  (line 870, @0x0000000002c629e0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "pass_damage"
__int64 __fastcall CDOTA_Ability_Elder_Titan_AncestralSpirit::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Elder_Titan_AncestralSpirit *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "pass_damage", -1, 0);
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Ability_Elder_Titan_ReturnSpirit::~CDOTA_Ability_Elder_Titan_ReturnSpirit  (line 881, @0x0000000002c983f0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Elder_Titan_ReturnSpirit::~CDOTA_Ability_Elder_Titan_ReturnSpirit(
        CDOTA_Ability_Elder_Titan_ReturnSpirit *const this)
{
  this->_vptr_IHandleEntity = &off_45AD050;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Elder_Titan_ReturnSpirit::~CDOTA_Ability_Elder_Titan_ReturnSpirit  (line 881, @0x0000000002c98410, libserver.so)  // inlines: ~CDOTA_Ability_Elder_Titan_ReturnSpirit
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Elder_Titan_ReturnSpirit::~CDOTA_Ability_Elder_Titan_ReturnSpirit(
        CDOTA_Ability_Elder_Titan_ReturnSpirit *const this)
{
  this->_vptr_IHandleEntity = &off_45AD050;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Elder_Titan_ReturnSpirit::Schema_DynamicBinding  (line 883, @0x0000000002c88830, libserver.so)
// globals: CDOTA_Ability_Elder_Titan_ReturnSpirit::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Elder_Titan_ReturnSpirit::Schema_DynamicBinding(
        const CDOTA_Ability_Elder_Titan_ReturnSpirit *const this)
{
  return CDOTA_Ability_Elder_Titan_ReturnSpirit::s_pSchemaBinding;
}


// CDOTA_Ability_Elder_Titan_ReturnSpirit::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 883, @0x0000000002c88840, libserver.so)
// globals: CDOTA_Ability_Elder_Titan_ReturnSpirit::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Elder_Titan_ReturnSpirit::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Elder_Titan_ReturnSpirit::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Elder_Titan_ReturnSpirit::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Elder_Titan_ReturnSpirit::CEntityInstanceEntityClass::DestructInstance  (line 883, @0x0000000002c88850, libserver.so)  // inlines: Destruct<CDOTA_Ability_Elder_Titan_ReturnSpirit>
void __fastcall CDOTA_Ability_Elder_Titan_ReturnSpirit::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Elder_Titan_ReturnSpirit::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Elder_Titan_ReturnSpirit::CEntityInstanceEntityClass::FreeInstance  (line 883, @0x0000000002c88870, libserver.so)
void __fastcall CDOTA_Ability_Elder_Titan_ReturnSpirit::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Elder_Titan_ReturnSpirit::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Elder_Titan_ReturnSpirit::CEntityInstanceEntityClass::CanAllocate  (line 883, @0x0000000002c88890, libserver.so)
bool __fastcall CDOTA_Ability_Elder_Titan_ReturnSpirit::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Elder_Titan_ReturnSpirit::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Elder_Titan_ReturnSpirit::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 883, @0x0000000002c888a0, libserver.so)
// globals: CDOTA_Ability_Elder_Titan_ReturnSpirit::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Elder_Titan_ReturnSpirit::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Elder_Titan_ReturnSpirit::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Elder_Titan_ReturnSpirit::s_pSchemaBinding;
}


// CDOTA_Ability_Elder_Titan_ReturnSpirit::CEntityInstanceEntityClass::AllocateInstance  (line 883, @0x0000000002c8fa20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Elder_Titan_ReturnSpirit::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Elder_Titan_ReturnSpirit::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Elder_Titan_ReturnSpirit::CEntityInstanceEntityClass::ConstructInstance  (line 883, @0x0000000002c94a50, libserver.so)  // inlines: CDOTA_Ability_Elder_Titan_ReturnSpirit, Construct<CDOTA_Ability_Elder_Titan_ReturnSpirit>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Elder_Titan_ReturnSpirit::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Elder_Titan_ReturnSpirit::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45AD050;
  }
  return p;
}


// CDOTA_Ability_Elder_Titan_ReturnSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 883, @0x0000000002ca1f80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Elder_Titan_ReturnSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Elder_Titan_ReturnSpirit::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Elder_Titan_ReturnSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 883, @0x0000000002ca1fa0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Elder_Titan_ReturnSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Elder_Titan_ReturnSpirit::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal  (line 883, @0x0000000002cc7b10, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "elder_titan_return_spirit", "CDOTA_Ability_Elder_Titan_ReturnSpirit"
// globals: `guard variable for'CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass, CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Elder_Titan_ReturnSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClassInfo, CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClassInfo
CEntityClass *__cdecl CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass) != 0 )
  {
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_pClassInfo = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_flags = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_pInputs = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_nInputCount = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_pOutputs = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_nOutputCount = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_pGameClass = 0;
    CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass._vptr_CEntityClass = off_45ACFD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass);
    __cxa_atexit(
      CDOTA_Ability_Elder_Titan_ReturnSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass != 0 )
    return &CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass;
  if ( `guard variable for'CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClassInfo,
      "CDOTA_Ability_Elder_Titan_ReturnSpirit",
      "elder_titan_return_spirit",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClassInfo);
  }
  CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_pClassInfo = &CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClassInfo;
  CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_pBaseClassInfo = CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass = &CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass;
  CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClassInfo.m_pClass = &CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass;
  CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Elder_Titan_ReturnSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_ReturnSpiritClass;
}


// CDOTA_Ability_Elder_Titan_ReturnSpirit::ProcsMagicStick  (line 888, @0x0000000002c888b0, libserver.so)
bool __fastcall CDOTA_Ability_Elder_Titan_ReturnSpirit::ProcsMagicStick(
        CDOTA_Ability_Elder_Titan_ReturnSpirit *const this)
{
  return 0;
}


// CDOTA_Ability_Elder_Titan_ReturnSpirit::GetAssociatedPrimaryAbilities  (line 889, @0x0000000002c888c0, libserver.so)
// strings: "elder_titan_ancestral_spirit"
const char *__fastcall CDOTA_Ability_Elder_Titan_ReturnSpirit::GetAssociatedPrimaryAbilities(
        CDOTA_Ability_Elder_Titan_ReturnSpirit *const this)
{
  return "elder_titan_ancestral_spirit";
}


// CDOTA_Ability_Elder_Titan_ReturnSpirit::IsHiddenWhenStolen  (line 890, @0x0000000002c888d0, libserver.so)
bool __fastcall CDOTA_Ability_Elder_Titan_ReturnSpirit::IsHiddenWhenStolen(
        CDOTA_Ability_Elder_Titan_ReturnSpirit *const this)
{
  return 1;
}


// CDOTA_Ability_Elder_Titan_ReturnSpirit::OnSpellStart  (line 897, @0x0000000002c3eff0, libserver.so)  // inlines: CEntityHandle, Get, GetAncestralSpirit, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::FindModifierByName, CDOTA_Ability_Elder_Titan_AncestralSpirit::ReturnSpirit
// strings: "elder_titan_ancestral_spirit", "modifier_elder_titan_ancestral_spirit_cast_time"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Elder_Titan_ReturnSpirit::OnSpellStart(
        CDOTA_Ability_Elder_Titan_ReturnSpirit *const this)
{
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_BaseNPC *v3; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v5; // rdx
  int m_pAsString_high; // eax
  unsigned __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_Ability_Elder_Titan_AncestralSpirit *v10; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v12; // rcx
  CEntityIdentity *v13; // rcx
  CDOTA_BaseNPC *v14; // rax
  unsigned __int16 v15; // dx
  int v16; // esi
  int v17; // eax
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CDOTA_BaseNPC *v20; // rdi
  CEntityInstance *m_pInstance; // rdx

  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v3, "elder_titan_ancestral_spirit", 0);
  v5 = AbilityByName;
  if ( AbilityByName == 0
    || ((m_pAsString_high = HIDWORD(AbilityByName[1].m_iszPrivateVScripts.u.m_pAsString)) + 2) <= 1
    || (v7 = WORD2(v5[1].m_iszPrivateVScripts.u.m_pAsString),
        (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v7 >> 9) & 0x3F]) == 0)
    || (v9 = &v8[v7 & 0x1FF]) == 0
    || m_pAsString_high != v9->m_EHandle.m_Index
    || (v20 = v9->m_pInstance, v9->m_pInstance == 0)
    || !v20->m_bIsDOTANPC
    || CDOTA_BaseNPC::FindModifierByName(v20, "modifier_elder_titan_ancestral_spirit_cast_time", 0) == 0 )
  {
    if ( Caster != 0 )
    {
      if ( (Caster->m_iUnitType & 1) == 0 )
      {
        v14 = CDOTABaseAbility::GetCaster(this);
        if ( v14->m_hOwnerEntity.m_Value.m_Index == -1 )
        {
          v15 = 0x7FFF;
          v16 = 0x7FFF;
        }
        else
        {
          v15 = v14->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
          v16 = v15;
        }
        v17 = (v14->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v15 & 0x7FFF;
        if ( (v17 + 2) > 1
          && (v18 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v16 >> 9]) != 0
          && (v19 = &v18[v16 & 0x1FF]) != 0
          && v17 == v19->m_EHandle.m_Index
          && (Caster = v19->m_pInstance, v19->m_pInstance != 0) )
        {
          if ( !Caster->m_bIsDOTANPC )
            Caster = 0;
        }
        else
        {
          Caster = 0;
        }
      }
      v10 = CDOTA_BaseNPC::FindAbilityByName(Caster, "elder_titan_ancestral_spirit", 0);
      if ( v10 != 0 )
      {
        m_Index = v10->m_hAncestralSpirit.m_Index;
        if ( m_Index + 2 > 1 )
        {
          v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_hAncestralSpirit.m_Index) >> 9) & 0x3F];
          if ( v12 != 0 )
          {
            v13 = &v12[v10->m_hAncestralSpirit.m_Index & 0x1FF];
            if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
            {
              m_pInstance = v13->m_pInstance;
              if ( v13->m_pInstance != 0
                && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                && SBYTE3(m_pInstance[58]._vptr_IHandleEntity) >= 0 )
              {
                CDOTA_Ability_Elder_Titan_AncestralSpirit::ReturnSpirit(v10);
              }
            }
          }
        }
      }
    }
  }
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff::~CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff  (line 932, @0x0000000002c92bd0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff::~CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff *const this)
{
  this->_vptr_CDOTA_Buff = &off_45ADB10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff::~CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff  (line 932, @0x0000000002c92bf0, libserver.so)  // inlines: ~CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff::~CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff *const this)
{
  this->_vptr_CDOTA_Buff = &off_45ADB10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff::IsPurgable  (line 937, @0x0000000002c888e0, libserver.so)
bool __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff::IsPurgable(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff *const this)
{
  return 0;
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff::OnCreated  (line 973, @0x0000000002c76630, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>, Vector
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, KeyValues::GetInt, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::AddParticle
// strings: "move_pct_creeps", "move_pct_heroes", "damage_creeps", "damage_heroes", "move_pct_cap", "special_bonus_unique_elder_titan" (7 total)
void __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff::OnCreated(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int Int; // eax
  int m_nCreepsHit; // edx
  int move_pct_creeps; // esi
  int v14; // esi
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  CDOTA_BaseNPC *v18; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v20; // rax
  double v21; // [rsp+10h] [rbp-20h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->move_pct_creeps = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "move_pct_creeps", -1, 0);
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->move_pct_creeps = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
    {
LABEL_3:
      this->move_pct_heroes = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "move_pct_heroes", -1, 0);
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_4;
      goto LABEL_13;
    }
  }
  this->move_pct_heroes = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_4:
    this->damage_creeps = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "damage_creeps", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_5;
LABEL_14:
    this->damage_heroes = 0;
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_6;
LABEL_15:
    this->move_pct_cap = 0;
    goto LABEL_7;
  }
LABEL_13:
  this->damage_creeps = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
    goto LABEL_14;
LABEL_5:
  this->damage_heroes = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "damage_heroes", -1, 0);
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 == 0 )
    goto LABEL_15;
LABEL_6:
  this->move_pct_cap = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "move_pct_cap", -1, 0);
LABEL_7:
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_elder_titan", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->damage_heroes += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  this->m_nCreepsHit = KeyValues::GetInt(pKV, "creeps", 0);
  Int = KeyValues::GetInt(pKV, "heroes", 0);
  m_nCreepsHit = this->m_nCreepsHit;
  move_pct_creeps = this->move_pct_creeps;
  this->m_nHeroesHit = Int;
  v14 = m_nCreepsHit * move_pct_creeps;
  v15 = Int * this->move_pct_heroes;
  v16 = this->damage_creeps * m_nCreepsHit;
  v17 = this->damage_heroes * Int;
  this->m_nSpeedPct = v14 + v15;
  this->m_nDamage = v16 + v17;
  v18 = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v18) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_elder_titan/elder_titan_ancestral_spirit_buff.vpcf",
                   1,
                   v18,
                   0,
                   0);
  *&v21 = this->m_nDamage;
  *(&v21 + 1) = *&v21;
  v20 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v20, v18, 1, v21, *&v21);
  CDOTA_Buff::AddParticle(this, v18, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff::OnRefresh  (line 1000, @0x0000000002c73840, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName
// strings: "move_pct_creeps", "move_pct_heroes", "damage_creeps", "damage_heroes", "move_pct_cap", "special_bonus_unique_elder_titan"
void __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff::OnRefresh(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->move_pct_creeps = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "move_pct_creeps", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->move_pct_creeps = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->move_pct_heroes = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "move_pct_heroes", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_13;
    }
  }
  this->move_pct_heroes = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->damage_creeps = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "damage_creeps", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
LABEL_14:
    this->damage_heroes = 0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_15;
  }
LABEL_13:
  this->damage_creeps = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_14;
LABEL_5:
  this->damage_heroes = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "damage_heroes", -1, 0);
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->move_pct_cap = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "move_pct_cap", -1, 0);
    goto LABEL_7;
  }
LABEL_15:
  this->move_pct_cap = 0;
LABEL_7:
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_elder_titan", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->damage_heroes += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff::DeclareFunctions  (line 1017, @0x0000000002c1c340, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff::DeclareFunctions(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff *const this)
{
  this->m_Functions[13].__pfn = (&stru_10 + 697);
  this->m_Functions[13].__delta = 0;
  this->m_Functions[0].__pfn = (&stru_10 + 705);
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff::GetModifierMoveSpeedBonus_Percentage  (line 1025, @0x0000000002c1c380, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  __m128i v3; // xmm1
  int32 m_nSpeedPct; // eax
  int move_pct_cap; // edx
  ModifierVariant_t result; // 0:rax.16

  m_nSpeedPct = this->m_nSpeedPct;
  move_pct_cap = this->move_pct_cap;
  if ( m_nSpeedPct > move_pct_cap )
  {
    *v3.m128i_i32 = move_pct_cap;
    result.m_szVal = 0;
    result.m_eType = _mm_cvtsi128_si32(v3);
  }
  else
  {
    *v2.m128i_i32 = m_nSpeedPct;
    result.m_szVal = 0;
    result.m_eType = _mm_cvtsi128_si32(v2);
  }
  *&result.m_eType = (result.m_eType << 32) | 1;
  return result;
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff::GetModifierPreAttack_BonusDamage  (line 1035, @0x0000000002c1c3d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->m_nDamage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff::AddCustomTransmiterData  (line 1041, @0x0000000002c21e90, libserver.so)  // inlines: set_damage, set_has_damage, set_has_movement_speed, set_movement_speed
// calls: CDOTA_Buff::AddCustomTransmiterData
void __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff::AddCustomTransmiterData(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit_Buff *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  int v2; // ecx
  int32 m_nDamage; // edx

  v2 = *(entry + 4);
  *(entry + 32) = this->m_nSpeedPct;
  *(entry + 4) = v2 | 0x200000;
  m_nDamage = this->m_nDamage;
  *(entry + 4) = v2 | 0x1200000;
  *(entry + 35) = m_nDamage;
  CDOTA_Buff::AddCustomTransmiterData(this, entry);
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit_Hidden::~CDOTA_Modifier_Elder_Titan_AncestralSpirit_Hidden  (line 1060, @0x0000000002c92b80, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit_Hidden::~CDOTA_Modifier_Elder_Titan_AncestralSpirit_Hidden(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit_Hidden *const this)
{
  this->_vptr_CDOTA_Buff = &off_45ADE50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit_Hidden::~CDOTA_Modifier_Elder_Titan_AncestralSpirit_Hidden  (line 1060, @0x0000000002c92ba0, libserver.so)  // inlines: ~CDOTA_Modifier_Elder_Titan_AncestralSpirit_Hidden
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit_Hidden::~CDOTA_Modifier_Elder_Titan_AncestralSpirit_Hidden(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit_Hidden *const this)
{
  this->_vptr_CDOTA_Buff = &off_45ADE50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit_Hidden::IsPermanent  (line 1065, @0x0000000002c888f0, libserver.so)
bool __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit_Hidden::IsPermanent(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit_Hidden *const this)
{
  return 1;
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit_Hidden::IsHidden  (line 1066, @0x0000000002c88900, libserver.so)
bool __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit_Hidden::IsHidden(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit_Hidden *const this)
{
  return 1;
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit_Hidden::OnCreated  (line 1080, @0x0000000002c1ed10, libserver.so)
// calls: CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit_Hidden::OnCreated(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit_Hidden *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4

  CDOTA_Buff::StartIntervalThink(this, 0.25, v2);
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit_Hidden::CheckState  (line 1089, @0x0000000002c1c3f0, libserver.so)  // inlines: Disable, Enable
void __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit_Hidden::CheckState(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit_Hidden *const this,
        CDOTABuffState *const buffState)
{
  uint64 v2; // rax

  v2 = buffState->m_nEnabledStateMask & 0xFFFFFFFFFEFFFFFFLL;
  buffState->m_nDisabledStateMask = buffState->m_nDisabledStateMask & 0xFFFFFFFF7C77BCF8LL | 0x1000000;
  buffState->m_nEnabledStateMask = v2 | 0x82884307;
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit_Hidden::OnIntervalThink  (line 1108, @0x0000000002c23790, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTA_Buff::GetCaster, CDOTAGamerules::GetFountain, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetParent, FindClearSpaceForUnit
void __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit_Hidden::OnIntervalThink(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit_Hidden *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *Fountain; // rax
  Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *Parent; // rax

  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    if ( (*(Caster->_vptr_IHandleEntity + 408))(Caster) != 0 )
    {
      Fountain = CDOTA_Buff::GetCaster(this);
    }
    else
    {
      v3 = CDOTA_Buff::GetCaster(this);
      Fountain = CDOTAGamerules::GetFountain(g_pGameRules, v3->m_iTeamNum.m_Value);
      if ( Fountain == 0 )
        return;
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(Fountain);
    Parent = CDOTA_Buff::GetParent(this);
    FindClearSpaceForUnit(Parent, *AbsOrigin, 1);
  }
}


// CDOTA_Ability_Elder_Titan_EchoStomp::~CDOTA_Ability_Elder_Titan_EchoStomp  (line 1133, @0x0000000002cb6d40, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Elder_Titan_EchoStomp::~CDOTA_Ability_Elder_Titan_EchoStomp(
        CDOTA_Ability_Elder_Titan_EchoStomp *const this)
{
  this->_vptr_IHandleEntity = &off_45AE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vecStompedHeroes);
  if ( (this->m_vecStompedHeroes.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vecStompedHeroes.m_Memory),
        (this->m_vecStompedHeroes.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vecStompedHeroes.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_Elder_Titan_EchoStomp::~CDOTA_Ability_Elder_Titan_EchoStomp  (line 1133, @0x0000000002cb7140, libserver.so)  // inlines: Purge, ~CDOTA_Ability_Elder_Titan_EchoStomp, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Elder_Titan_EchoStomp::~CDOTA_Ability_Elder_Titan_EchoStomp(
        CDOTA_Ability_Elder_Titan_EchoStomp *const this)
{
  this->_vptr_IHandleEntity = &off_45AE1B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vecStompedHeroes);
  if ( (this->m_vecStompedHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vecStompedHeroes.m_Memory);
    if ( (this->m_vecStompedHeroes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vecStompedHeroes.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Elder_Titan_EchoStomp::Schema_DynamicBinding  (line 1135, @0x0000000002c88910, libserver.so)
// globals: CDOTA_Ability_Elder_Titan_EchoStomp::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Elder_Titan_EchoStomp::Schema_DynamicBinding(
        const CDOTA_Ability_Elder_Titan_EchoStomp *const this)
{
  return CDOTA_Ability_Elder_Titan_EchoStomp::s_pSchemaBinding;
}


// CDOTA_Ability_Elder_Titan_EchoStomp::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1135, @0x0000000002c88920, libserver.so)
// globals: CDOTA_Ability_Elder_Titan_EchoStomp::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Elder_Titan_EchoStomp::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Elder_Titan_EchoStomp::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Elder_Titan_EchoStomp::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Elder_Titan_EchoStomp::CEntityInstanceEntityClass::DestructInstance  (line 1135, @0x0000000002c88930, libserver.so)  // inlines: Destruct<CDOTA_Ability_Elder_Titan_EchoStomp>
void __fastcall CDOTA_Ability_Elder_Titan_EchoStomp::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Elder_Titan_EchoStomp::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Elder_Titan_EchoStomp::CEntityInstanceEntityClass::FreeInstance  (line 1135, @0x0000000002c88950, libserver.so)
void __fastcall CDOTA_Ability_Elder_Titan_EchoStomp::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Elder_Titan_EchoStomp::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Elder_Titan_EchoStomp::CEntityInstanceEntityClass::CanAllocate  (line 1135, @0x0000000002c88970, libserver.so)
bool __fastcall CDOTA_Ability_Elder_Titan_EchoStomp::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Elder_Titan_EchoStomp::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Elder_Titan_EchoStomp::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1135, @0x0000000002c88980, libserver.so)
// globals: CDOTA_Ability_Elder_Titan_EchoStomp::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Elder_Titan_EchoStomp::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Elder_Titan_EchoStomp::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Elder_Titan_EchoStomp::s_pSchemaBinding;
}


// CDOTA_Ability_Elder_Titan_EchoStomp::CEntityInstanceEntityClass::AllocateInstance  (line 1135, @0x0000000002c8fa60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Elder_Titan_EchoStomp::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Elder_Titan_EchoStomp::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 960);
  memset(v1, 0, 0x3C0u);
  return v1;
}


// CDOTA_Ability_Elder_Titan_EchoStomp::CEntityInstanceEntityClass::ConstructInstance  (line 1135, @0x0000000002ca0160, libserver.so)  // inlines: CDOTA_Ability_Elder_Titan_EchoStomp, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_Elder_Titan_EchoStomp>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Elder_Titan_EchoStomp::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Elder_Titan_EchoStomp::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 234) = 0;
    *p = &off_45AE1B0;
    *(p + 118) = 0;
    *(p + 238) = 0;
    *(p + 239) = 0;
    *(p + 228) = -1;
    *(p + 229) = -1;
  }
  return p;
}


// CDOTA_Ability_Elder_Titan_EchoStomp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1135, @0x0000000002ca1fd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Elder_Titan_EchoStomp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Elder_Titan_EchoStomp::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Elder_Titan_EchoStomp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1135, @0x0000000002ca1ff0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Elder_Titan_EchoStomp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Elder_Titan_EchoStomp::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Elder_Titan_EchoStomp::GetEntityClassInternal  (line 1135, @0x0000000002cba260, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "elder_titan_echo_stomp", "CDOTA_Ability_Elder_Titan_EchoStomp"
// globals: `guard variable for'CDOTA_Ability_Elder_Titan_EchoStomp::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStompClass, CDOTA_Ability_Elder_Titan_EchoStomp::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStompClass, __dso_handle, CDOTA_Ability_Elder_Titan_EchoStomp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Elder_Titan_EchoStomp::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStompClassInfo, CDOTA_Ability_Elder_Titan_EchoStomp::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStompClassInfo
CEntityClass *__cdecl CDOTA_Ability_Elder_Titan_EchoStomp::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Elder_Titan_EchoStomp::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStompClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Elder_Titan_EchoStomp::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStompClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Elder_Titan_EchoStomp::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStompClass);
    CDOTA_Ability_Elder_Titan_EchoStomp::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStompClass._vptr_CEntityClass = off_45AE130;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Elder_Titan_EchoStomp::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStompClass);
    __cxa_atexit(
      CDOTA_Ability_Elder_Titan_EchoStomp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Elder_Titan_EchoStomp::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStompClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Elder_Titan_EchoStompClass != 0 )
    return &CDOTA_Ability_Elder_Titan_EchoStomp::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStompClass;
  if ( `guard variable for'CDOTA_Ability_Elder_Titan_EchoStomp::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStompClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Elder_Titan_EchoStomp::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStompClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Elder_Titan_EchoStomp::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStompClassInfo,
      "CDOTA_Ability_Elder_Titan_EchoStomp",
      "elder_titan_echo_stomp",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Elder_Titan_EchoStomp::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStompClassInfo);
  }
  CDOTA_Ability_Elder_Titan_EchoStomp::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStompClass.m_pClassInfo = &CDOTA_Ability_Elder_Titan_EchoStomp::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStompClassInfo;
  CDOTA_Ability_Elder_Titan_EchoStomp::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStompClass.m_pBaseClassInfo = CDOTA_Ability_Elder_Titan_EchoStomp::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStompClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Elder_Titan_EchoStompClass = &CDOTA_Ability_Elder_Titan_EchoStomp::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStompClass;
  CDOTA_Ability_Elder_Titan_EchoStomp::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStompClassInfo.m_pClass = &CDOTA_Ability_Elder_Titan_EchoStomp::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStompClass;
  CDOTA_Ability_Elder_Titan_EchoStomp::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStompClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Elder_Titan_EchoStompClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Elder_Titan_EchoStomp::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStompClass;
}


// CDOTA_Ability_Elder_Titan_EchoStomp::WantsToChannelCancel  (line 1143, @0x0000000002c88990, libserver.so)
bool __fastcall CDOTA_Ability_Elder_Titan_EchoStomp::WantsToChannelCancel(
        CDOTA_Ability_Elder_Titan_EchoStomp *const this)
{
  return 0;
}


// CDOTA_Ability_Elder_Titan_EchoStomp::OnAbilityPhaseStart  (line 1171, @0x0000000002c53ff0, libserver.so)  // inlines: Get, GetAncestralSpirit, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_Elder_Titan_AncestralSpirit::PauseReturn, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::StartGesture, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "elder_titan_ancestral_spirit", "cast_time", "modifier_elder_titan_ancestral_spirit_cast_time"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Ability_Elder_Titan_EchoStomp::OnAbilityPhaseStart(
        CDOTA_Ability_Elder_Titan_EchoStomp *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v4; // rbx
  int m_pAsString_high; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  float v10; // xmm1_4
  CDOTA_BaseNPC *v11; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-28h]

  v13 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "elder_titan_ancestral_spirit", 0);
  v4 = AbilityByName;
  if ( AbilityByName != 0 )
  {
    m_pAsString_high = HIDWORD(AbilityByName[1].m_iszPrivateVScripts.u.m_pAsString);
    if ( (m_pAsString_high + 2) > 1 )
    {
      v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(WORD2(v4[1].m_iszPrivateVScripts.u.m_pAsString) >> 9)
                                                          & 0x3F];
      if ( v6 != 0 )
      {
        v7 = &v6[WORD2(v4[1].m_iszPrivateVScripts.u.m_pAsString) & 0x1FF];
        if ( v7 != 0 && m_pAsString_high == v7->m_EHandle.m_Index )
        {
          m_pInstance = v7->m_pInstance;
          if ( v7->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
          {
            this->cast_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "cast_time", -1, 0);
            CDOTA_BaseNPC::StartGesture(m_pInstance, 1510, 0.1, 0.1, 9, 0, 1.0);
            KeyValues::KeyValues(&kv, "modifier_elder_titan_ancestral_spirit_cast_time");
            KeyValues::SetFloat(&kv, "duration", v10);
            v11 = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(
              m_pInstance,
              v11,
              this,
              "modifier_elder_titan_ancestral_spirit_cast_time",
              &kv,
              0);
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
    if ( LOBYTE(v4[1].m_iszPrivateVScripts.u.m_Id) != 0 )
      CDOTA_Ability_Elder_Titan_AncestralSpirit::PauseReturn(v4);
  }
  return 1;
}


// CDOTA_Ability_Elder_Titan_EchoStomp::OnAbilityPhaseInterrupted  (line 1200, @0x0000000002c3f650, libserver.so)  // inlines: Get, GetAncestralSpirit, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_Elder_Titan_AncestralSpirit::UnpauseReturn, CDOTA_BaseNPC::RemoveGesture, CDOTA_BaseNPC::RemoveModifierByName
// strings: "elder_titan_ancestral_spirit", "modifier_elder_titan_ancestral_spirit_cast_time"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Elder_Titan_EchoStomp::OnAbilityPhaseInterrupted(
        CDOTA_Ability_Elder_Titan_EchoStomp *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v3; // rbx
  int m_pAsString_high; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "elder_titan_ancestral_spirit", 0);
  v3 = AbilityByName;
  if ( AbilityByName != 0 )
  {
    m_pAsString_high = HIDWORD(AbilityByName[1].m_iszPrivateVScripts.u.m_pAsString);
    if ( (m_pAsString_high + 2) > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(WORD2(v3[1].m_iszPrivateVScripts.u.m_pAsString) >> 9)
                                                          & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[WORD2(v3[1].m_iszPrivateVScripts.u.m_pAsString) & 0x1FF];
        if ( v6 != 0 && m_pAsString_high == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && (m_pInstance->m_fEffects.m_Value & 0x20) == 0 )
          {
            CDOTA_BaseNPC::RemoveGesture(v6->m_pInstance, 1510);
            CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, "modifier_elder_titan_ancestral_spirit_cast_time");
          }
        }
      }
    }
    if ( LOBYTE(v3[1].m_iszPrivateVScripts.u.m_Id) != 0 )
      CDOTA_Ability_Elder_Titan_AncestralSpirit::UnpauseReturn(v3);
  }
}


// CDOTA_Ability_Elder_Titan_EchoStomp::OnSpellStart  (line 1224, @0x0000000002c4dbe0, libserver.so)  // inlines: Get, GetAncestralSpirit, GetBool, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::StartGesture, GetParticleManager, CDOTA_ParticleManager::CreateParticle, DOTA_EmitSound, CDOTA_Ability_Elder_Titan_AncestralSpirit::PauseReturn, CDOTA_BaseNPC::RemoveGesture
// strings: "elder_titan_ancestral_spirit", "particles/units/heroes/hero_elder_titan/elder_titan_echo_stomp_cast_combined.vpcf", "Hero_ElderTitan.EchoStomp.Channel", "particles/units/heroes/hero_elder_titan/elder_titan_echo_stomp_cast_spirit.vpcf", "particles/units/heroes/hero_elder_titan/elder_titan_echo_stomp_cast_titan.vpcf", "elder_titan_echo_stomp_spirit"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Elder_Titan_EchoStomp::OnSpellStart(CDOTA_Ability_Elder_Titan_EchoStomp *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Ability_Elder_Titan_AncestralSpirit *AbilityByName; // rax
  CDOTA_Ability_Elder_Titan_AncestralSpirit *v4; // r12
  CDOTA_BaseNPC *v5; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTA_BaseNPC *v9; // r12
  CDOTA_ParticleManager *v10; // rax
  int Particle; // eax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v15; // r13
  CDOTA_ParticleManager *v16; // rax
  CDOTABaseAbility *v17; // rax

  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vecStompedHeroes);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "elder_titan_ancestral_spirit", 0);
  v4 = AbilityByName;
  if ( AbilityByName != 0 )
  {
    if ( AbilityByName->m_bIsReturning )
      CDOTA_Ability_Elder_Titan_AncestralSpirit::PauseReturn(AbilityByName);
    v5 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::StartGesture(v5, 1510, 0.1, 0.1, 9, 0, 1.0);
    m_Index = v4->m_hAncestralSpirit.m_Index;
    if ( m_Index + 2 > 1
      && (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->m_hAncestralSpirit.m_Index) >> 9) & 0x3F]) != 0
      && (v8 = &v7[v4->m_hAncestralSpirit.m_Index & 0x1FF]) != 0
      && m_Index == v8->m_EHandle.m_Index
      && (m_pInstance = v8->m_pInstance, v8->m_pInstance != 0)
      && m_pInstance->m_bIsDOTANPC
      && (m_pInstance->m_fEffects.m_Value & 0x20) == 0 )
    {
      CDOTA_BaseNPC::RemoveGesture(v8->m_pInstance, 1510);
      CDOTA_BaseNPC::StartGesture(m_pInstance, 1510, 0.1, 0.1, 9, 0, 1.0);
      if ( dota_ability_debug.m_pParent->m_Value.m_nValue == 0 )
      {
        v17 = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "elder_titan_echo_stomp_spirit", 0);
        (*(v17->_vptr_IHandleEntity + 241))(v17, -1.0);
      }
      ParticleManager = GetParticleManager();
      this->m_nFXIndexSpirit = CDOTA_ParticleManager::CreateParticle(
                                 ParticleManager,
                                 "particles/units/heroes/hero_elder_titan/elder_titan_echo_stomp_cast_spirit.vpcf",
                                 1,
                                 m_pInstance,
                                 0,
                                 0);
      v15 = CDOTABaseAbility::GetCaster(this);
      v16 = GetParticleManager();
      this->m_nFXIndexTitan = CDOTA_ParticleManager::CreateParticle(
                                v16,
                                "particles/units/heroes/hero_elder_titan/elder_titan_echo_stomp_cast_titan.vpcf",
                                1,
                                v15,
                                0,
                                0);
      DOTA_EmitSound(10, "Hero_ElderTitan.EchoStomp.Channel", m_pInstance);
    }
    else
    {
      v9 = CDOTABaseAbility::GetCaster(this);
      v10 = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   v10,
                   "particles/units/heroes/hero_elder_titan/elder_titan_echo_stomp_cast_combined.vpcf",
                   1,
                   v9,
                   0,
                   0);
      this->m_nFXIndexSpirit = -1;
      this->m_nFXIndexTitan = Particle;
    }
    v12 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "Hero_ElderTitan.EchoStomp.Channel", v12);
  }
}


// CDOTA_Ability_Elder_Titan_EchoStomp::OnChannelFinish  (line 1267, @0x0000000002c7d100, libserver.so)  // inlines: Get, GetAncestralSpirit, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveGesture, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_Elder_Titan_AncestralSpirit::UnpauseReturn, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Ability_Elder_Titan_EchoStomp::DoEchoStomp, CDOTA_ParticleManager::ReleaseParticleIndex, EconEntity_OnOwnerKillEaterEvent, CDOTA_BaseNPC::RemoveModifierByName
// strings: "elder_titan_ancestral_spirit", "sleep_duration", "stomp_damage", "modifier_elder_titan_ancestral_spirit_cast_time"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Elder_Titan_EchoStomp::OnChannelFinish(
        CDOTA_Ability_Elder_Titan_EchoStomp *const this,
        bool bInterrupted)
{
  int v3; // r12d
  CDOTA_ParticleManager *v4; // rax
  int v5; // r12d
  CDOTA_ParticleManager *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTABaseAbility *v9; // rax
  CDOTABaseAbility *v10; // r12
  int v11; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  int LevelSpecialValue; // eax
  bool v15; // zf
  CDOTA_BaseNPC *v16; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int m_pAsString_high; // edx
  unsigned __int16 v19; // cx
  CEntityIdentity *v20; // rax
  CEntityIdentity *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  int m_nFXIndexSpirit; // r12d
  CDOTA_ParticleManager *v25; // rax
  int m_nFXIndexTitan; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  int m_Size; // r12d
  CDOTA_BaseNPC *v29; // rax
  CDOTA_BaseNPC_Hero *v30; // rdi
  CDOTA_BaseNPC *v31; // rax
  CDOTA_BaseNPC_Hero *v32; // rdi
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v34; // rax
  CDOTA_BaseNPC *v35; // r13
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *v37; // rax

  if ( !bInterrupted )
  {
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
    this->sleep_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "sleep_duration", -1, 0);
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "stomp_damage", -1, 0);
    v15 = !this->m_bStolen.m_Value;
    this->stomp_damage = LevelSpecialValue;
    if ( !v15 )
    {
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_Ability_Elder_Titan_EchoStomp::DoEchoStomp(this, Caster, 1);
      v34 = CDOTABaseAbility::GetCaster(this);
      CDOTA_Ability_Elder_Titan_EchoStomp::DoEchoStomp(this, v34, 2);
    }
    v16 = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v16, "elder_titan_ancestral_spirit", 0);
    if ( AbilityByName != 0 )
    {
      m_pAsString_high = HIDWORD(AbilityByName[1].m_iszPrivateVScripts.u.m_pAsString);
      if ( (m_pAsString_high + 2) > 1 )
      {
        v19 = WORD2(AbilityByName[1].m_iszPrivateVScripts.u.m_pAsString);
        v20 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v19 >> 9) & 0x3F];
        if ( v20 != 0 )
        {
          v21 = &v20[v19 & 0x1FF];
          if ( v21 != 0 && m_pAsString_high == v21->m_EHandle.m_Index )
          {
            m_pInstance = v21->m_pInstance;
            if ( v21->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
            {
              v37 = CDOTABaseAbility::GetCaster(this);
              CDOTA_Ability_Elder_Titan_EchoStomp::DoEchoStomp(this, v37, 1);
              CDOTA_Ability_Elder_Titan_EchoStomp::DoEchoStomp(this, m_pInstance, 2);
              m_nFXIndexSpirit = this->m_nFXIndexSpirit;
              if ( m_nFXIndexSpirit == -1 )
                goto LABEL_24;
              goto LABEL_23;
            }
          }
        }
      }
      v22 = CDOTABaseAbility::GetCaster(this);
      CDOTA_Ability_Elder_Titan_EchoStomp::DoEchoStomp(this, v22, 1);
      v23 = CDOTABaseAbility::GetCaster(this);
      CDOTA_Ability_Elder_Titan_EchoStomp::DoEchoStomp(this, v23, 2);
    }
    m_nFXIndexSpirit = this->m_nFXIndexSpirit;
    if ( m_nFXIndexSpirit == -1 )
    {
LABEL_24:
      m_nFXIndexTitan = this->m_nFXIndexTitan;
      if ( m_nFXIndexTitan != -1 )
      {
        ParticleManager = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(ParticleManager, m_nFXIndexTitan);
      }
      m_Size = this->m_vecStompedHeroes.m_Size;
      if ( m_Size > 0 )
      {
        v29 = CDOTABaseAbility::GetCaster(this);
        if ( v29 != 0 && (v29->m_iUnitType & 1) != 0 )
          v30 = v29;
        else
          v30 = 0;
        EconEntity_OnOwnerKillEaterEvent(
          v30,
          0,
          kill_eater_event_t::kKillEaterEvent_DreamLeague_DreamPoints,
          m_Size,
          INVALID_ITEM_DEF_INDEX);
        if ( this->m_vecStompedHeroes.m_Size > 2 )
        {
          v31 = CDOTABaseAbility::GetCaster(this);
          if ( v31 != 0 && (v31->m_iUnitType & 1) != 0 )
            v32 = v31;
          else
            v32 = 0;
          EconEntity_OnOwnerKillEaterEvent(
            v32,
            0,
            kill_eater_event_t::kKillEaterEvent_ElderTitan_GoodStomps,
            1,
            INVALID_ITEM_DEF_INDEX);
        }
      }
      goto LABEL_12;
    }
LABEL_23:
    v25 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v25, m_nFXIndexSpirit);
    goto LABEL_24;
  }
  v3 = this->m_nFXIndexSpirit;
  if ( v3 != -1 )
  {
    v4 = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(v4, v3, 0);
  }
  v5 = this->m_nFXIndexTitan;
  if ( v5 != -1 )
  {
    v6 = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(v6, v5, 0);
  }
  v7 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveGesture(v7, 1510);
  v8 = CDOTABaseAbility::GetCaster(this);
  v9 = CDOTA_BaseNPC::FindAbilityByName(v8, "elder_titan_ancestral_spirit", 0);
  v10 = v9;
  if ( v9 != 0 )
  {
    v11 = HIDWORD(v9[1].m_iszPrivateVScripts.u.m_pAsString);
    if ( (v11 + 2) > 1 )
    {
      v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(WORD2(v10[1].m_iszPrivateVScripts.u.m_pAsString) >> 9)
                                                           & 0x3F];
      if ( v12 != 0 )
      {
        v13 = &v12[WORD2(v10[1].m_iszPrivateVScripts.u.m_pAsString) & 0x1FF];
        if ( v13 != 0 && v11 == v13->m_EHandle.m_Index )
        {
          v35 = v13->m_pInstance;
          if ( v13->m_pInstance != 0 && v35->m_bIsDOTANPC && (v35->m_fEffects.m_Value & 0x20) == 0 )
          {
            CDOTA_BaseNPC::RemoveGesture(v13->m_pInstance, 1510);
            CDOTA_BaseNPC::RemoveModifierByName(v35, "modifier_elder_titan_ancestral_spirit_cast_time");
            if ( LOBYTE(v10[1].m_iszPrivateVScripts.u.m_Id) == 0 )
              goto LABEL_12;
            goto LABEL_13;
          }
        }
      }
    }
    if ( LOBYTE(v10[1].m_iszPrivateVScripts.u.m_Id) != 0 )
LABEL_13:
      CDOTA_Ability_Elder_Titan_AncestralSpirit::UnpauseReturn(v10);
  }
LABEL_12:
  this->m_nFXIndexSpirit = -1;
  this->m_nFXIndexTitan = -1;
}


// CDOTA_Ability_Elder_Titan_EchoStomp::DoEchoStomp  (line 1345, @0x0000000002c7cae0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, FastRSqrt, FastRSqrtFast, Get, GetAncestralSpirit, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GrowMemory, HasElement, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsRealHero, IsValid, LookupEntity, Set, ToDOTABaseNPC, Vector, VectorNormalizeFast, VectorSubtract, _mm_load_ss, _mm_rsqrt_ss, _mm_set_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator[], ~CUtlVector
// calls: CBaseEntity::GetAbsOrigin, FindUnitsInRadius, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound, CDOTABaseAbility::GetCaster, ApplyDamage, CDOTA_ParticleManager::SetParticleControlForward, KeyValues::KeyValues, KeyValues::SetFloat (22 total)
// callers: CDOTA_Ability_Elder_Titan_EchoStomp::OnChannelFinish
// strings: "particles/units/heroes/hero_elder_titan/elder_titan_echo_stomp_magical.vpcf", "particles/units/heroes/hero_elder_titan/elder_titan_echo_stomp_physical.vpcf", "Hero_ElderTitan.EchoStomp", "particles/units/heroes/hero_elder_titan/elder_titan_echo_stomp_impact_physical.vpcf", "particles/units/heroes/hero_elder_titan/elder_titan_echo_stomp_impact_magical.vpcf", "modifier_elder_titan_echo_stomp" (7 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Elder_Titan_EchoStomp::DoEchoStomp(
        CDOTA_Ability_Elder_Titan_EchoStomp *const this,
        CDOTA_BaseNPC *pCaster,
        int iDamageType)
{
  __m128i v3; // xmm7
  float v7; // ebx
  const Vector *AbsOrigin; // rax
  const char *v9; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  __m128i v14; // xmm6
  __int64 v15; // r15
  CHandle<CBaseEntity> *v16; // rdx
  uint32 m_Index; // eax
  __int16 v18; // cx
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CEntityInstance *m_pInstance; // rbx
  int (**vptr_IHandleEntity)(...); // rax
  float v23; // r13d
  CDOTA_BaseNPC *Caster; // rax
  const char *v25; // r13
  CDOTA_ParticleManager *v26; // rax
  int v27; // r13d
  const Vector *v28; // r14
  const Vector *v29; // rax
  float v30; // xmm3_4
  float v31; // xmm2_4
  float v32; // xmm4_4
  float v33; // xmm1_4
  const Vector *v34; // r14
  CDOTA_ParticleManager *v35; // rax
  CDOTA_ParticleManager *v36; // rax
  CDOTA_ParticleManager *v37; // rax
  float v38; // xmm1_4
  CDOTA_BaseNPC *v39; // rax
  CEntityIdentity *m_pEntity; // rbx
  __int16 v41; // cx
  int v42; // eax
  __int16 v43; // cx
  int v44; // eax
  __int64 m_Size; // rbx
  int v46; // eax
  CHandle<CBaseEntity> *v47; // rax
  CDOTA_BaseNPC *v48; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_Ability_Elder_Titan_AncestralSpirit *v50; // rbx
  CDOTA_BaseNPC *v51; // rax
  float v54; // [rsp+30h] [rbp-A0h]
  unsigned int v55; // [rsp+34h] [rbp-9Ch]
  float v56; // [rsp+38h] [rbp-98h]
  unsigned int v57; // [rsp+38h] [rbp-98h]
  int i; // [rsp+3Ch] [rbp-94h]
  CHandle<CBaseEntity> src; // [rsp+40h] [rbp-90h] BYREF
  double v60; // [rsp+50h] [rbp-80h]
  float v61; // [rsp+58h] [rbp-78h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+60h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+80h] [rbp-50h] BYREF
  unsigned __int64 v64; // [rsp+98h] [rbp-38h]

  v64 = __readfsqword(0x28u);
  if ( pCaster != 0 )
  {
    *v3.m128i_i32 = this->radius;
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
    AbsOrigin = CBaseEntity::GetAbsOrigin(pCaster);
    FindUnitsInRadius(pCaster->m_iTeamNum.m_Value, AbsOrigin, pCaster, v7, &entities, 2, 3, 16, 0, 0);
    v9 = "particles/units/heroes/hero_elder_titan/elder_titan_echo_stomp_magical.vpcf";
    if ( iDamageType != 2 )
      v9 = "particles/units/heroes/hero_elder_titan/elder_titan_echo_stomp_physical.vpcf";
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(ParticleManager, v9, 1, pCaster, 0, 0);
    *&v60 = this->radius;
    HIDWORD(v60) = LODWORD(v60);
    v61 = *&v60;
    v12 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v12, Particle, 1, v60, *&v60);
    v13 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v13, Particle);
    DOTA_EmitSound(10, "Hero_ElderTitan.EchoStomp", pCaster);
    if ( entities.m_Size > 0 )
    {
      i = 0;
      v15 = 0;
      do
      {
        v16 = &entities.m_Memory.m_pMemory[v15];
        m_Index = entities.m_Memory.m_pMemory[v15].m_Index;
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
                vptr_IHandleEntity = m_pInstance[58]._vptr_IHandleEntity;
                if ( (BYTE1(vptr_IHandleEntity) & 2) == 0
                  && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0
                  && (BYTE1(vptr_IHandleEntity) & 1) == 0 )
                {
                  *v14.m128i_i32 = this->stomp_damage;
                  v23 = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
                  Caster = CDOTABaseAbility::GetCaster(this);
                  ApplyDamage(Caster, m_pInstance, this, v23, iDamageType, 8);
                }
                v25 = "particles/units/heroes/hero_elder_titan/elder_titan_echo_stomp_impact_physical.vpcf";
                if ( iDamageType == 2 )
                  v25 = "particles/units/heroes/hero_elder_titan/elder_titan_echo_stomp_impact_magical.vpcf";
                v26 = GetParticleManager();
                v27 = CDOTA_ParticleManager::CreateParticle(v26, v25, 1, m_pInstance, 0, 0);
                v28 = CBaseEntity::GetAbsOrigin(pCaster);
                v29 = CBaseEntity::GetAbsOrigin(m_pInstance);
                v30 = v29->x - v28->x;
                v31 = v29->y - v28->y;
                v56 = (((v30 * v30) + 0.00000011920929) + (v31 * v31)) + 0.0;
                v32 = 1.0 / fsqrt(v56);
                v33 = (0.5 * v32) * (3.0 - ((v56 * v32) * v32));
                *&v57 = v30 * v33;
                *&v55 = v31 * v33;
                v54 = v33 * 0.0;
                v34 = CBaseEntity::GetAbsOrigin(m_pInstance);
                v35 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControl(v35, v27, 1, *&v34->x, v34->z);
                v36 = GetParticleManager();
                v60 = COERCE_DOUBLE(__PAIR64__(v55, v57));
                v61 = v54;
                CDOTA_ParticleManager::SetParticleControlForward(v36, v27, 1, COERCE_DOUBLE(__PAIR64__(v55, v57)), v54);
                v37 = GetParticleManager();
                CDOTA_ParticleManager::ReleaseParticleIndex(v37, v27);
                if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) != 0
                  && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) == 0 )
                {
                  KeyValues::KeyValues(&kv, "modifier_elder_titan_echo_stomp");
                  KeyValues::SetFloat(&kv, "duration", v38);
                  v39 = CDOTABaseAbility::GetCaster(this);
                  CDOTA_BaseNPC::AddNewModifier(m_pInstance, v39, this, "modifier_elder_titan_echo_stomp", &kv, 0);
                  KeyValues::~KeyValues(&kv);
                }
                if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
                {
                  src.m_Index = -1;
                  m_pEntity = m_pInstance->m_pEntity;
                  if ( m_pEntity != 0 )
                  {
                    v41 = 0x7FFF;
                    v42 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                    if ( m_pEntity->m_EHandle.m_Index != -1 )
                      v41 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                    LOWORD(src.m_Index) = v41 | src.m_Index & 0x8000;
                    src.m_Index = (v42 << 15) | src.m_Index & 0x7FFF;
                  }
                  if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                         &this->m_vecStompedHeroes,
                         &src) < 0 )
                  {
                    src.m_Index = -1;
                    if ( m_pEntity != 0 )
                    {
                      v43 = 0x7FFF;
                      v44 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                      if ( m_pEntity->m_EHandle.m_Index != -1 )
                        v43 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                      LOWORD(src.m_Index) = v43 | src.m_Index & 0x8000;
                      src.m_Index = (v44 << 15) | src.m_Index & 0x7FFF;
                    }
                    m_Size = this->m_vecStompedHeroes.m_Size;
                    v46 = this->m_vecStompedHeroes.m_Size;
                    if ( m_Size == this->m_vecStompedHeroes.m_Memory.m_nAllocationCount )
                    {
                      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_vecStompedHeroes.m_Memory, 1);
                      v46 = this->m_vecStompedHeroes.m_Size;
                    }
                    this->m_vecStompedHeroes.m_Size = v46 + 1;
                    v47 = &this->m_vecStompedHeroes.m_Memory.m_pMemory[m_Size];
                    if ( v47 != 0 )
                      v47->m_Index = src.m_Index;
                  }
                }
              }
            }
          }
        }
        ++i;
        ++v15;
      }
      while ( entities.m_Size > i );
    }
    v48 = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v48, "elder_titan_ancestral_spirit", 0);
    v50 = AbilityByName;
    if ( AbilityByName != 0 )
    {
      v51 = CEntityHandle::operator CEntityInstance *(&AbilityByName[1].m_iszPrivateVScripts.u.m_pAsString + 1);
      if ( v51 != 0 && v51->m_bIsDOTANPC && pCaster == v51 && v50->m_bIsReturning )
        CDOTA_Ability_Elder_Titan_AncestralSpirit::UnpauseReturn(v50);
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
}


// CDOTA_Ability_Elder_Titan_EchoStomp::GetAbilityDamageToTargetOverInterval  (line 1403, @0x0000000002c62a40, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "stomp_damage"
__int64 __fastcall CDOTA_Ability_Elder_Titan_EchoStomp::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Elder_Titan_EchoStomp *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "stomp_damage", -1, 0);
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)));
  }
  return result;
}


// CDOTA_Ability_Elder_Titan_EchoStomp::GetStunDuration  (line 1413, @0x0000000002c56030, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "initial_stun_duration", "sleep_duration"
float __fastcall CDOTA_Ability_Elder_Titan_EchoStomp::GetStunDuration(CDOTA_Ability_Elder_Titan_EchoStomp *const this)
{
  float LevelSpecialValue; // [rsp+Ch] [rbp-14h]

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "initial_stun_duration", -1, 1);
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "sleep_duration", -1, 1) + LevelSpecialValue;
}


// CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::~CDOTA_Ability_Elder_Titan_EchoStomp_Spirit  (line 1421, @0x0000000002c98440, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::~CDOTA_Ability_Elder_Titan_EchoStomp_Spirit(
        CDOTA_Ability_Elder_Titan_EchoStomp_Spirit *const this)
{
  this->_vptr_IHandleEntity = &off_45AECB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::~CDOTA_Ability_Elder_Titan_EchoStomp_Spirit  (line 1421, @0x0000000002c98460, libserver.so)  // inlines: ~CDOTA_Ability_Elder_Titan_EchoStomp_Spirit
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::~CDOTA_Ability_Elder_Titan_EchoStomp_Spirit(
        CDOTA_Ability_Elder_Titan_EchoStomp_Spirit *const this)
{
  this->_vptr_IHandleEntity = &off_45AECB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::Schema_DynamicBinding  (line 1423, @0x0000000002c889a0, libserver.so)
// globals: CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::Schema_DynamicBinding(
        const CDOTA_Ability_Elder_Titan_EchoStomp_Spirit *const this)
{
  return CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::s_pSchemaBinding;
}


// CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1423, @0x0000000002c889b0, libserver.so)
// globals: CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CEntityInstanceEntityClass::DestructInstance  (line 1423, @0x0000000002c889c0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Elder_Titan_EchoStomp_Spirit>
void __fastcall CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CEntityInstanceEntityClass::FreeInstance  (line 1423, @0x0000000002c889e0, libserver.so)
void __fastcall CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CEntityInstanceEntityClass::CanAllocate  (line 1423, @0x0000000002c88a00, libserver.so)
bool __fastcall CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1423, @0x0000000002c88a10, libserver.so)
// globals: CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::s_pSchemaBinding;
}


// CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CEntityInstanceEntityClass::AllocateInstance  (line 1423, @0x0000000002c8faa0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CEntityInstanceEntityClass::ConstructInstance  (line 1423, @0x0000000002c94a80, libserver.so)  // inlines: CDOTA_Ability_Elder_Titan_EchoStomp_Spirit, Construct<CDOTA_Ability_Elder_Titan_EchoStomp_Spirit>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45AECB0;
  }
  return p;
}


// CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1423, @0x0000000002ca2020, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1423, @0x0000000002ca2040, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::GetEntityClassInternal  (line 1423, @0x0000000002cba3b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "elder_titan_echo_stomp_spirit", "CDOTA_Ability_Elder_Titan_EchoStomp_Spirit"
// globals: `guard variable for'CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStomp_SpiritClass, CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStomp_SpiritClass, __dso_handle, CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStomp_SpiritClassInfo, CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStomp_SpiritClassInfo
CEntityClass *__cdecl CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStomp_SpiritClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStomp_SpiritClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStomp_SpiritClass);
    CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStomp_SpiritClass._vptr_CEntityClass = off_45AEC30;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStomp_SpiritClass);
    __cxa_atexit(
      CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStomp_SpiritClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Elder_Titan_EchoStomp_SpiritClass != 0 )
    return &CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStomp_SpiritClass;
  if ( `guard variable for'CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStomp_SpiritClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStomp_SpiritClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStomp_SpiritClassInfo,
      "CDOTA_Ability_Elder_Titan_EchoStomp_Spirit",
      "elder_titan_echo_stomp_spirit",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStomp_SpiritClassInfo);
  }
  CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStomp_SpiritClass.m_pClassInfo = &CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStomp_SpiritClassInfo;
  CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStomp_SpiritClass.m_pBaseClassInfo = CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStomp_SpiritClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Elder_Titan_EchoStomp_SpiritClass = &CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStomp_SpiritClass;
  CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStomp_SpiritClassInfo.m_pClass = &CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStomp_SpiritClass;
  CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStomp_SpiritClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Elder_Titan_EchoStomp_SpiritClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EchoStomp_SpiritClass;
}


// CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::ProcsMagicStick  (line 1431, @0x0000000002c88a20, libserver.so)
bool __fastcall CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::ProcsMagicStick(
        CDOTA_Ability_Elder_Titan_EchoStomp_Spirit *const this)
{
  return 0;
}


// CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::OnAbilityPhaseStart  (line 1439, @0x0000000002c54190, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetLevelSpecialValueFor<float>, GetOwnerEntity, GetSerialNumber, InState, IndexToIdentity, Init, IsFullyCastable, IsSilenced, IsStunned, IsTrained, LookupEntity, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CDOTA_BaseNPC::StartGesture, CDOTA_Ability_Elder_Titan_AncestralSpirit::PauseReturn, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues (14 total)
// strings: "elder_titan_ancestral_spirit", "elder_titan_echo_stomp", "cast_time", "modifier_elder_titan_ancestral_spirit_cast_time"
bool __fastcall CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::OnAbilityPhaseStart(
        CDOTA_Ability_Elder_Titan_EchoStomp_Spirit *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // r12
  bool m_bIsDOTANPC; // bl
  uint32 v5; // edx
  unsigned __int16 v6; // ax
  int v7; // esi
  int v8; // ecx
  CEntityIdentity *v9; // rax
  CEntityIdentity *v10; // rax
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v14; // r15
  float v15; // xmm1_4
  CDOTA_BaseNPC *v16; // rax
  CDOTA_Ability_Elder_Titan_AncestralSpirit *cast_time; // [rsp+8h] [rbp-68h]
  KeyValues kv; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = Caster;
  if ( Caster != 0 )
  {
    m_bIsDOTANPC = Caster->m_bIsDOTANPC;
    if ( !m_bIsDOTANPC )
      return m_bIsDOTANPC;
    v5 = Caster->m_hOwnerEntity.m_Value.m_Index >> 15;
    if ( Caster->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v6 = 0x7FFF;
      v7 = 0x7FFF;
    }
    else
    {
      v6 = Caster->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v7 = v6;
    }
    v8 = (v5 << 15) | v6 & 0x7FFF;
    if ( (v8 + 2) > 1 )
    {
      v9 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v7 >> 9];
      if ( v9 != 0 )
      {
        v10 = &v9[v7 & 0x1FF];
        if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
        {
          m_pInstance = v10->m_pInstance;
          if ( v10->m_pInstance != 0 )
          {
            m_bIsDOTANPC = m_pInstance->m_bIsDOTANPC;
            if ( m_bIsDOTANPC )
            {
              cast_time = CDOTA_BaseNPC::FindAbilityByName(v10->m_pInstance, "elder_titan_ancestral_spirit", 0);
              AbilityByName = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "elder_titan_echo_stomp", 0);
              v14 = AbilityByName;
              if ( (AbilityByName == 0
                 || CDOTABaseAbility::GetEffectiveLevel(AbilityByName) >= 0
                 && (*(v14->_vptr_IHandleEntity + 245))(v14) != 0
                 && CDOTABaseAbility::IsOwnersManaEnough(v14)
                 && CDOTABaseAbility::IsOwnersGoldEnough(v14, -1))
                && (m_pInstance->m_nUnitState64.m_Value & 8) == 0
                && (m_pInstance->m_nUnitState64.m_Value & 0x20) == 0 )
              {
                CDOTA_BaseNPC::StartGesture(v3, 1510, 0.1, 0.1, 9, 0, 1.0);
                if ( cast_time->m_bIsReturning )
                  CDOTA_Ability_Elder_Titan_AncestralSpirit::PauseReturn(cast_time);
                CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "cast_time", -1, 0);
                KeyValues::KeyValues(&kv, "modifier_elder_titan_ancestral_spirit_cast_time");
                KeyValues::SetFloat(&kv, "duration", v15);
                v16 = CDOTABaseAbility::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(v3, v16, this, "modifier_elder_titan_ancestral_spirit_cast_time", &kv, 0);
                KeyValues::~KeyValues(&kv);
                return m_bIsDOTANPC;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


// CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::OnAbilityPhaseInterrupted  (line 1479, @0x0000000002c3f390, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_Elder_Titan_AncestralSpirit::UnpauseReturn, CDOTA_BaseNPC::RemoveGesture, CDOTA_BaseNPC::RemoveModifierByName
// strings: "elder_titan_ancestral_spirit", "modifier_elder_titan_ancestral_spirit_cast_time"
void __fastcall CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::OnAbilityPhaseInterrupted(
        CDOTA_Ability_Elder_Titan_EchoStomp_Spirit *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  unsigned __int16 v3; // dx
  int v4; // esi
  int v5; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTA_Ability_Elder_Titan_AncestralSpirit *AbilityByName; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( Caster->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v3 = 0x7FFF;
    v4 = 0x7FFF;
  }
  else
  {
    v3 = Caster->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v4 = v3;
  }
  v5 = (Caster->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v3 & 0x7FFF;
  if ( (v5 + 2) > 1 )
  {
    v6 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v4 >> 9];
    if ( v6 != 0 )
    {
      v7 = &v6[v4 & 0x1FF];
      if ( v7 != 0 && v5 == v7->m_EHandle.m_Index )
      {
        m_pInstance = v7->m_pInstance;
        if ( v7->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          AbilityByName = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "elder_titan_ancestral_spirit", 0);
          if ( AbilityByName != 0 && AbilityByName->m_bIsReturning )
          {
            CDOTA_Ability_Elder_Titan_AncestralSpirit::UnpauseReturn(AbilityByName);
            if ( (CDOTABaseAbility::GetCaster(this)->m_fEffects.m_Value & 0x20) == 0 )
            {
              v10 = CDOTABaseAbility::GetCaster(this);
              CDOTA_BaseNPC::RemoveGesture(v10, 1510);
              v11 = CDOTABaseAbility::GetCaster(this);
              CDOTA_BaseNPC::RemoveModifierByName(v11, "modifier_elder_titan_ancestral_spirit_cast_time");
            }
          }
        }
      }
    }
  }
}


// CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::OnSpellStart  (line 1502, @0x0000000002c3f4c0, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, IsFullyCastable, IsTrained, LookupEntity, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetEffectiveLevel, CDOTA_Ability_Elder_Titan_AncestralSpirit::UnpauseReturn, CDOTABaseAbility::IsOwnersManaEnough, CDOTABaseAbility::IsOwnersGoldEnough, CDOTA_BaseNPC::CastAbilityNoTarget
// strings: "elder_titan_echo_stomp", "elder_titan_ancestral_spirit"
void __fastcall CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::OnSpellStart(
        CDOTA_Ability_Elder_Titan_EchoStomp_Spirit *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  unsigned __int16 v2; // dx
  int v3; // esi
  int v4; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v9; // rbx
  CDOTA_Ability_Elder_Titan_AncestralSpirit *v10; // rax
  int v11; // eax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( Caster != 0 && Caster->m_bIsDOTANPC )
  {
    if ( Caster->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v2 = 0x7FFF;
      v3 = 0x7FFF;
    }
    else
    {
      v2 = Caster->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v3 = v2;
    }
    v4 = (Caster->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
    if ( (v4 + 2) > 1 )
    {
      v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
      if ( v5 != 0 )
      {
        v6 = &v5[v3 & 0x1FF];
        if ( v6 != 0 && v4 == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
          {
            AbilityByName = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "elder_titan_echo_stomp", 0);
            v9 = AbilityByName;
            if ( AbilityByName != 0
              && CDOTABaseAbility::GetEffectiveLevel(AbilityByName) >= 0
              && (*(v9->_vptr_IHandleEntity + 245))(v9) != 0
              && CDOTABaseAbility::IsOwnersManaEnough(v9)
              && CDOTABaseAbility::IsOwnersGoldEnough(v9, -1) )
            {
              v11 = (*(m_pInstance->_vptr_IHandleEntity + 414))(m_pInstance);
              CDOTA_BaseNPC::CastAbilityNoTarget(m_pInstance, v9, v11);
            }
            else
            {
              v10 = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "elder_titan_ancestral_spirit", 0);
              if ( v10 != 0 && v10->m_bIsReturning )
                CDOTA_Ability_Elder_Titan_AncestralSpirit::UnpauseReturn(v10);
            }
          }
        }
      }
    }
  }
}


// CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CastFilterResult  (line 1532, @0x0000000002c2c8c0, libserver.so)  // inlines: CEntityHandle, Get, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, LookupEntity, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::IsOwnersManaEnough
// strings: "elder_titan_echo_stomp"
int __fastcall CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::CastFilterResult(
        CDOTA_Ability_Elder_Titan_EchoStomp_Spirit *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  unsigned __int16 v2; // dx
  int v3; // esi
  int v4; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTABaseAbility *AbilityByName; // rdi

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( Caster == 0 || !Caster->m_bIsDOTANPC )
    return 0;
  if ( Caster->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = Caster->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  v4 = (Caster->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
  if ( (v4 + 2) > 1
    && (v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9]) != 0
    && (v6 = &v5[v3 & 0x1FF]) != 0
    && v4 == v6->m_EHandle.m_Index
    && (m_pInstance = v6->m_pInstance, v6->m_pInstance != 0)
    && m_pInstance->m_bIsDOTANPC
    && (AbilityByName = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "elder_titan_echo_stomp", 0)) != 0
    && !CDOTABaseAbility::IsOwnersManaEnough(AbilityByName) )
  {
    return 23;
  }
  else
  {
    return 0;
  }
}


// CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::GetCustomCastError  (line 1554, @0x0000000002c1c430, libserver.so)
// strings: "#dota_hud_error_not_enough_mana"
const char *__fastcall CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::GetCustomCastError(
        CDOTA_Ability_Elder_Titan_EchoStomp_Spirit *const this)
{
  return "#dota_hud_error_not_enough_mana";
}


// CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::GetAbilityDamageToTargetOverInterval  (line 1561, @0x0000000002c62aa0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "stomp_damage"
__int64 __fastcall CDOTA_Ability_Elder_Titan_EchoStomp_Spirit::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Elder_Titan_EchoStomp_Spirit *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "stomp_damage", -1, 0);
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit_CastTime::~CDOTA_Modifier_Elder_Titan_AncestralSpirit_CastTime  (line 1572, @0x0000000002c92b30, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit_CastTime::~CDOTA_Modifier_Elder_Titan_AncestralSpirit_CastTime(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit_CastTime *const this)
{
  this->_vptr_CDOTA_Buff = &off_45AF770;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit_CastTime::~CDOTA_Modifier_Elder_Titan_AncestralSpirit_CastTime  (line 1572, @0x0000000002c92b50, libserver.so)  // inlines: ~CDOTA_Modifier_Elder_Titan_AncestralSpirit_CastTime
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit_CastTime::~CDOTA_Modifier_Elder_Titan_AncestralSpirit_CastTime(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit_CastTime *const this)
{
  this->_vptr_CDOTA_Buff = &off_45AF770;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit_CastTime::IsHidden  (line 1577, @0x0000000002c88a30, libserver.so)
bool __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit_CastTime::IsHidden(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit_CastTime *const this)
{
  return 1;
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit_CastTime::IsPurgable  (line 1578, @0x0000000002c88a40, libserver.so)
bool __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit_CastTime::IsPurgable(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit_CastTime *const this)
{
  return 0;
}


// CDOTA_Modifier_Elder_Titan_AncestralSpirit_CastTime::CheckState  (line 1587, @0x0000000002c1c440, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Elder_Titan_AncestralSpirit_CastTime::CheckState(
        CDOTA_Modifier_Elder_Titan_AncestralSpirit_CastTime *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x80001uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFF7FFFELL;
}


// CDOTA_Modifier_Elder_Titan_EchoStomp::~CDOTA_Modifier_Elder_Titan_EchoStomp  (line 1600, @0x0000000002c92ae0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Elder_Titan_EchoStomp::~CDOTA_Modifier_Elder_Titan_EchoStomp(
        CDOTA_Modifier_Elder_Titan_EchoStomp *const this)
{
  this->_vptr_CDOTA_Buff = &off_45AFA90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Elder_Titan_EchoStomp::~CDOTA_Modifier_Elder_Titan_EchoStomp  (line 1600, @0x0000000002c92b00, libserver.so)  // inlines: ~CDOTA_Modifier_Elder_Titan_EchoStomp
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Elder_Titan_EchoStomp::~CDOTA_Modifier_Elder_Titan_EchoStomp(
        CDOTA_Modifier_Elder_Titan_EchoStomp *const this)
{
  this->_vptr_CDOTA_Buff = &off_45AFA90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Elder_Titan_EchoStomp::CanParentBeAutoAttacked  (line 1613, @0x0000000002c88a50, libserver.so)
bool __fastcall CDOTA_Modifier_Elder_Titan_EchoStomp::CanParentBeAutoAttacked(
        CDOTA_Modifier_Elder_Titan_EchoStomp *const this)
{
  return 0;
}


// CDOTA_Modifier_Elder_Titan_EchoStomp::IsDebuff  (line 1617, @0x0000000002c88a60, libserver.so)
bool __fastcall CDOTA_Modifier_Elder_Titan_EchoStomp::IsDebuff(CDOTA_Modifier_Elder_Titan_EchoStomp *const this)
{
  return 1;
}


// CDOTA_Modifier_Elder_Titan_EchoStomp::IsStunDebuff  (line 1618, @0x0000000002c88a70, libserver.so)
bool __fastcall CDOTA_Modifier_Elder_Titan_EchoStomp::IsStunDebuff(CDOTA_Modifier_Elder_Titan_EchoStomp *const this)
{
  return 1;
}


// CDOTA_Modifier_Elder_Titan_EchoStomp::GetEffectName  (line 1620, @0x0000000002c88a80, libserver.so)
// strings: "particles/generic_gameplay/generic_sleep.vpcf"
const char *__fastcall CDOTA_Modifier_Elder_Titan_EchoStomp::GetEffectName(
        CDOTA_Modifier_Elder_Titan_EchoStomp *const this)
{
  return "particles/generic_gameplay/generic_sleep.vpcf";
}


// CDOTA_Modifier_Elder_Titan_EchoStomp::GetEffectAttachType  (line 1621, @0x0000000002c88a90, libserver.so)
int __fastcall CDOTA_Modifier_Elder_Titan_EchoStomp::GetEffectAttachType(
        CDOTA_Modifier_Elder_Titan_EchoStomp *const this)
{
  return 7;
}


// CDOTA_Modifier_Elder_Titan_EchoStomp::OnCreated  (line 1637, @0x0000000002c597a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, NetworkStateChanged, Set, Start, operator=<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CountdownTimer::Now
// strings: "animation_rate", "initial_stun_duration"
void __fastcall CDOTA_Modifier_Elder_Titan_EchoStomp::OnCreated(
        CDOTA_Modifier_Elder_Titan_EchoStomp *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float LevelSpecialValue; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // [rsp+8h] [rbp-18h]
  float v10; // [rsp+Ch] [rbp-14h]
  float v11; // [rsp+Ch] [rbp-14h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->animation_rate = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "animation_rate", -1, 0);
  else
    this->animation_rate = 0.0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "initial_stun_duration", -1, 0);
    this->initial_stun_duration = LevelSpecialValue;
  }
  else
  {
    LevelSpecialValue = 0.0;
    this->initial_stun_duration = 0.0;
  }
  v10 = LevelSpecialValue;
  v6 = CountdownTimer::Now(&this->ctStunTimer);
  v7 = v10;
  v8 = v6 + v10;
  if ( v8 != this->ctStunTimer.m_timestamp.m_Value )
  {
    v9 = v8;
    (*(this->ctStunTimer._vptr_CountdownTimer + 2))(&this->ctStunTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v7 = v10;
    this->ctStunTimer.m_timestamp.m_Value = v9;
  }
  if ( v7 != this->ctStunTimer.m_duration.m_Value )
  {
    v11 = v7;
    (*(this->ctStunTimer._vptr_CountdownTimer + 2))(&this->ctStunTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->ctStunTimer.m_duration.m_Value = v11;
  }
}


// CDOTA_Modifier_Elder_Titan_EchoStomp::DeclareFunctions  (line 1647, @0x0000000002c1c460, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Elder_Titan_EchoStomp::GetOverrideAnimation(CModifierParams const&), CDOTA_Modifier_Elder_Titan_EchoStomp::GetOverrideAnimationRate(CModifierParams const&), CDOTA_Modifier_Elder_Titan_EchoStomp::OnTakeDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Elder_Titan_EchoStomp::DeclareFunctions(
        CDOTA_Modifier_Elder_Titan_EchoStomp *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_Elder_Titan_EchoStomp::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
  this->m_Functions[92].__delta = 0;
  this->m_Functions[92].__pfn = CDOTA_Modifier_Elder_Titan_EchoStomp::GetOverrideAnimationRate;
  this->m_Functions[134].__pfn = CDOTA_Modifier_Elder_Titan_EchoStomp::OnTakeDamage;
  this->m_Functions[134].__delta = 0;
}


// CDOTA_Modifier_Elder_Titan_EchoStomp::GetOverrideAnimation  (line 1656, @0x0000000002c1c4c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Elder_Titan_EchoStomp::GetOverrideAnimation(
        CDOTA_Modifier_Elder_Titan_EchoStomp *const this,
        const CModifierParams *const params)
{
  return 0x44BCA00000000001uLL;
}


// CDOTA_Modifier_Elder_Titan_EchoStomp::GetOverrideAnimationRate  (line 1663, @0x0000000002c1c4e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Elder_Titan_EchoStomp::GetOverrideAnimationRate(
        CDOTA_Modifier_Elder_Titan_EchoStomp *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->animation_rate) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Elder_Titan_EchoStomp::OnTakeDamage  (line 1670, @0x0000000002c31d80, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsElapsed, IsOwnedByAnyPlayer, IsValid, LookupEntity, ToDOTAAbility, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CountdownTimer::Now, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Buff::GetParent, CDOTA_Buff::Destroy, __dynamic_cast
// strings: "elder_titan_ancestral_spirit"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Elder_Titan_EchoStomp::OnTakeDamage(
        CDOTA_Modifier_Elder_Titan_EchoStomp *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  uint32 m_Index; // edx
  CDOTABaseAbility *v8; // r14
  CConcreteEntityList *v9; // r13
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  uint32 v12; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  uint32 v16; // eax
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  CEntityInstance *v19; // r12
  CDOTABaseAbility *v20; // rax

  if ( CountdownTimer::Now(&this->ctStunTimer) >= this->ctStunTimer.m_timestamp.m_Value )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "elder_titan_ancestral_spirit", 0);
    m_Index = params->inflictor.m_Index;
    v8 = AbilityByName;
    v9 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 <= 1
      || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->inflictor.m_Index) >> 9) & 0x3F]) == 0
      || (v11 = &v10[params->inflictor.m_Index & 0x1FF]) == 0
      || m_Index != v11->m_EHandle.m_Index
      || v11->m_pInstance == 0
      || (v20 = __dynamic_cast(v11->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0)) == 0
      || v8 == 0
      || v8 != v20 )
    {
      v12 = params->hunit.m_Index;
      if ( v12 + 2 <= 1
        || (v13 = v9->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F]) == 0
        || (v14 = &v13[params->hunit.m_Index & 0x1FF]) == 0
        || v12 != v14->m_EHandle.m_Index
        || (m_pInstance = v14->m_pInstance, v14->m_pInstance == 0)
        || !m_pInstance->m_bIsDOTANPC )
      {
        m_pInstance = 0;
      }
      v16 = params->hattacker.m_Index;
      if ( v16 + 2 > 1
        && (v17 = v9->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) != 0
        && (v18 = &v17[params->hattacker.m_Index & 0x1FF]) != 0
        && v16 == v18->m_EHandle.m_Index
        && (v19 = v18->m_pInstance, v18->m_pInstance != 0)
        && BYTE3(v19[7]._vptr_IHandleEntity) != 0 )
      {
        if ( CDOTA_Buff::GetParent(this) == m_pInstance
          && (v19[61].m_hPrivateScope.m_hScope != 0 || (v19[43].m_iszPrivateVScripts.u.m_Id & 1) != 0) )
        {
          CDOTA_Buff::Destroy(this, 0, 0, 0);
        }
      }
      else
      {
        CDOTA_Buff::GetParent(this);
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Elder_Titan_EchoStomp::CheckState  (line 1695, @0x0000000002c1c500, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Elder_Titan_EchoStomp::CheckState(
        CDOTA_Modifier_Elder_Titan_EchoStomp *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x23uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFFFFDCLL;
}


// CDOTA_Ability_Elder_Titan_NaturalOrder::~CDOTA_Ability_Elder_Titan_NaturalOrder  (line 1707, @0x0000000002c98490, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Elder_Titan_NaturalOrder::~CDOTA_Ability_Elder_Titan_NaturalOrder(
        CDOTA_Ability_Elder_Titan_NaturalOrder *const this)
{
  this->_vptr_IHandleEntity = &off_45AFDF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Elder_Titan_NaturalOrder::~CDOTA_Ability_Elder_Titan_NaturalOrder  (line 1707, @0x0000000002c984b0, libserver.so)  // inlines: ~CDOTA_Ability_Elder_Titan_NaturalOrder
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Elder_Titan_NaturalOrder::~CDOTA_Ability_Elder_Titan_NaturalOrder(
        CDOTA_Ability_Elder_Titan_NaturalOrder *const this)
{
  this->_vptr_IHandleEntity = &off_45AFDF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Elder_Titan_NaturalOrder::Schema_DynamicBinding  (line 1709, @0x0000000002c88aa0, libserver.so)
// globals: CDOTA_Ability_Elder_Titan_NaturalOrder::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Elder_Titan_NaturalOrder::Schema_DynamicBinding(
        const CDOTA_Ability_Elder_Titan_NaturalOrder *const this)
{
  return CDOTA_Ability_Elder_Titan_NaturalOrder::s_pSchemaBinding;
}


// CDOTA_Ability_Elder_Titan_NaturalOrder::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1709, @0x0000000002c88ab0, libserver.so)
// globals: CDOTA_Ability_Elder_Titan_NaturalOrder::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Elder_Titan_NaturalOrder::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Elder_Titan_NaturalOrder::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Elder_Titan_NaturalOrder::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Elder_Titan_NaturalOrder::CEntityInstanceEntityClass::DestructInstance  (line 1709, @0x0000000002c88ac0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Elder_Titan_NaturalOrder>
void __fastcall CDOTA_Ability_Elder_Titan_NaturalOrder::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Elder_Titan_NaturalOrder::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Elder_Titan_NaturalOrder::CEntityInstanceEntityClass::FreeInstance  (line 1709, @0x0000000002c88ae0, libserver.so)
void __fastcall CDOTA_Ability_Elder_Titan_NaturalOrder::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Elder_Titan_NaturalOrder::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Elder_Titan_NaturalOrder::CEntityInstanceEntityClass::CanAllocate  (line 1709, @0x0000000002c88b00, libserver.so)
bool __fastcall CDOTA_Ability_Elder_Titan_NaturalOrder::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Elder_Titan_NaturalOrder::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Elder_Titan_NaturalOrder::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1709, @0x0000000002c88b10, libserver.so)
// globals: CDOTA_Ability_Elder_Titan_NaturalOrder::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Elder_Titan_NaturalOrder::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Elder_Titan_NaturalOrder::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Elder_Titan_NaturalOrder::s_pSchemaBinding;
}


// CDOTA_Ability_Elder_Titan_NaturalOrder::CEntityInstanceEntityClass::AllocateInstance  (line 1709, @0x0000000002c8fae0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Elder_Titan_NaturalOrder::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Elder_Titan_NaturalOrder::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Elder_Titan_NaturalOrder::CEntityInstanceEntityClass::ConstructInstance  (line 1709, @0x0000000002c94ab0, libserver.so)  // inlines: CDOTA_Ability_Elder_Titan_NaturalOrder, Construct<CDOTA_Ability_Elder_Titan_NaturalOrder>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Elder_Titan_NaturalOrder::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Elder_Titan_NaturalOrder::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45AFDF0;
  }
  return p;
}


// CDOTA_Ability_Elder_Titan_NaturalOrder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1709, @0x0000000002ca2070, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Elder_Titan_NaturalOrder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Elder_Titan_NaturalOrder::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Elder_Titan_NaturalOrder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1709, @0x0000000002ca2090, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Elder_Titan_NaturalOrder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Elder_Titan_NaturalOrder::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal  (line 1709, @0x0000000002cc4cb0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "elder_titan_natural_order", "CDOTA_Ability_Elder_Titan_NaturalOrder"
// globals: `guard variable for'CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass, CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Elder_Titan_NaturalOrder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClassInfo, CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClassInfo
CEntityClass *__cdecl CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass) != 0 )
  {
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_pClassInfo = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_flags = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_pInputs = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_nInputCount = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_pOutputs = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_nOutputCount = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_pGameClass = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass._vptr_CEntityClass = off_45AFD70;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass);
    __cxa_atexit(
      CDOTA_Ability_Elder_Titan_NaturalOrder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Elder_Titan_NaturalOrderClass != 0 )
    return &CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass;
  if ( `guard variable for'CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClassInfo,
      "CDOTA_Ability_Elder_Titan_NaturalOrder",
      "elder_titan_natural_order",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClassInfo);
  }
  CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_pClassInfo = &CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClassInfo;
  CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_pBaseClassInfo = CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Elder_Titan_NaturalOrderClass = &CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass;
  CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClassInfo.m_pClass = &CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass;
  CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Elder_Titan_NaturalOrderClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Elder_Titan_NaturalOrder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrderClass;
}


// CDOTA_Ability_Elder_Titan_NaturalOrder::GetIntrinsicModifierName  (line 1713, @0x0000000002c88b20, libserver.so)
// strings: "modifier_elder_titan_natural_order_aura_armor"
const char *__fastcall CDOTA_Ability_Elder_Titan_NaturalOrder::GetIntrinsicModifierName(
        CDOTA_Ability_Elder_Titan_NaturalOrder *const this)
{
  return "modifier_elder_titan_natural_order_aura_armor";
}


// CDOTA_Ability_Elder_Titan_NaturalOrder::YouForgotToImplementOrDeclareServerClass  (line 1721, @0x0000000002c1c520, libserver.so)
int __fastcall CDOTA_Ability_Elder_Titan_NaturalOrder::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Elder_Titan_NaturalOrder *const this)
{
  return 0;
}


// CDOTA_Ability_Elder_Titan_NaturalOrder::GetServerClass  (line 1721, @0x0000000002c35170, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Elder_Titan_NaturalOrder::GetServerClass(
        CDOTA_Ability_Elder_Titan_NaturalOrder *const this)
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


// CDOTA_Ability_Elder_Titan_NaturalOrder::OnUpgrade  (line 1730, @0x0000000002c31f90, libserver.so)  // inlines: Get, GetAncestralSpirit, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::OnUpgrade, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName
// strings: "elder_titan_ancestral_spirit", "elder_titan_natural_order_spirit"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Elder_Titan_NaturalOrder::OnUpgrade(CDOTA_Ability_Elder_Titan_NaturalOrder *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int m_pAsString_high; // edx
  unsigned __int16 v5; // cx
  CEntityIdentity *v6; // rax
  CEntityIdentity *v7; // rax
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTABaseAbility *v9; // rax
  CDOTABaseAbility *v10; // r12

  CDOTABaseAbility::OnUpgrade(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "elder_titan_ancestral_spirit", 0);
  if ( AbilityByName != 0
    && ((m_pAsString_high = HIDWORD(AbilityByName[1].m_iszPrivateVScripts.u.m_pAsString)) + 2) > 1
    && (v5 = WORD2(AbilityByName[1].m_iszPrivateVScripts.u.m_pAsString),
        (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F]) != 0)
    && (v7 = &v6[v5 & 0x1FF]) != 0
    && m_pAsString_high == v7->m_EHandle.m_Index
    && (m_pInstance = v7->m_pInstance, v7->m_pInstance != 0)
    && m_pInstance->m_bIsDOTANPC
    && (v9 = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "elder_titan_natural_order_spirit", 0), v10 = v9, v9 != 0) )
  {
    (*(v9->_vptr_IHandleEntity + 212))(v9, this->m_iLevel.m_Value);
    (*(v10->_vptr_IHandleEntity + 262))(v10);
    CDOTABaseAbility::OnUpgrade(this);
  }
  else
  {
    CDOTABaseAbility::OnUpgrade(this);
  }
}


// CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::~CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit  (line 1752, @0x0000000002c984e0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::~CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit(
        CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit *const this)
{
  this->_vptr_IHandleEntity = &off_45B08F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::~CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit  (line 1752, @0x0000000002c98500, libserver.so)  // inlines: ~CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::~CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit(
        CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit *const this)
{
  this->_vptr_IHandleEntity = &off_45B08F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::Schema_DynamicBinding  (line 1754, @0x0000000002c88b30, libserver.so)
// globals: CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::Schema_DynamicBinding(
        const CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit *const this)
{
  return CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::s_pSchemaBinding;
}


// CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1754, @0x0000000002c88b40, libserver.so)
// globals: CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::CEntityInstanceEntityClass::DestructInstance  (line 1754, @0x0000000002c88b50, libserver.so)  // inlines: Destruct<CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit>
void __fastcall CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::CEntityInstanceEntityClass::FreeInstance  (line 1754, @0x0000000002c88b70, libserver.so)
void __fastcall CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::CEntityInstanceEntityClass::CanAllocate  (line 1754, @0x0000000002c88b90, libserver.so)
bool __fastcall CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1754, @0x0000000002c88ba0, libserver.so)
// globals: CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::s_pSchemaBinding;
}


// CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::CEntityInstanceEntityClass::AllocateInstance  (line 1754, @0x0000000002c8fb20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::CEntityInstanceEntityClass::ConstructInstance  (line 1754, @0x0000000002c94ae0, libserver.so)  // inlines: CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit, Construct<CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45B08F0;
  }
  return p;
}


// CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1754, @0x0000000002ca20c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1754, @0x0000000002ca20e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal  (line 1754, @0x0000000002cc7e60, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "elder_titan_natural_order_spirit", "CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit"
// globals: `guard variable for'CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass, CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClassInfo, CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClassInfo
CEntityClass *__cdecl CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass) != 0 )
  {
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_pClassInfo = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_flags = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_pInputs = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_nInputCount = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_pOutputs = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_nOutputCount = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_pGameClass = 0;
    CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass._vptr_CEntityClass = off_45B0870;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass);
    __cxa_atexit(
      CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass != 0 )
    return &CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass;
  if ( `guard variable for'CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClassInfo,
      "CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit",
      "elder_titan_natural_order_spirit",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClassInfo);
  }
  CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_pClassInfo = &CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClassInfo;
  CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_pBaseClassInfo = CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass = &CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass;
  CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClassInfo.m_pClass = &CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass;
  CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_NaturalOrder_SpiritClass;
}


// CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetIntrinsicModifierName  (line 1758, @0x0000000002c88bb0, libserver.so)
// strings: "modifier_elder_titan_natural_order_aura_magic_resistance"
const char *__fastcall CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetIntrinsicModifierName(
        CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit *const this)
{
  return "modifier_elder_titan_natural_order_aura_magic_resistance";
}


// CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetTexture  (line 1759, @0x0000000002c88bc0, libserver.so)
// strings: "elder_titan_natural_order"
const char *__fastcall CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetTexture(
        CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit *const this)
{
  return "elder_titan_natural_order";
}


// CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::YouForgotToImplementOrDeclareServerClass  (line 1766, @0x0000000002c1c530, libserver.so)
int __fastcall CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit *const this)
{
  return 0;
}


// CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetServerClass  (line 1766, @0x0000000002c35970, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit::GetServerClass(
        CDOTA_Ability_Elder_Titan_NaturalOrder_Spirit *const this)
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


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor::~CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor  (line 1777, @0x0000000002c92a90, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor::~CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor *const this)
{
  this->_vptr_CDOTA_Buff = &off_45B13B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor::~CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor  (line 1777, @0x0000000002c92ab0, libserver.so)  // inlines: ~CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor::~CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor *const this)
{
  this->_vptr_CDOTA_Buff = &off_45B13B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor::IsHidden  (line 1785, @0x0000000002c88bd0, libserver.so)
bool __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor::IsHidden(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor *const this)
{
  return 1;
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor::IsAura  (line 1787, @0x0000000002c88be0, libserver.so)
bool __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor::IsAura(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor *const this)
{
  return 1;
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor::GetModifierAura  (line 1788, @0x0000000002c88bf0, libserver.so)
// strings: "modifier_elder_titan_natural_order_armor"
const char *__fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor::GetModifierAura(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor *const this)
{
  return "modifier_elder_titan_natural_order_armor";
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor::GetAuraDuration  (line 1790, @0x0000000002c88c00, libserver.so)
float __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor::GetAuraDuration(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor *const this)
{
  return 1.0;
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor::GetAuraSearchTeam  (line 1791, @0x0000000002c88c10, libserver.so)
int __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor::GetAuraSearchTeam(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor *const this)
{
  return 2;
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor::GetAuraSearchType  (line 1792, @0x0000000002c88c20, libserver.so)
int __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor::GetAuraSearchType(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor *const this)
{
  return 19;
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor::GetAuraSearchFlags  (line 1793, @0x0000000002c88c30, libserver.so)
int __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor::GetAuraSearchFlags(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor *const this)
{
  return 528;
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor::GetAuraRadius  (line 1794, @0x0000000002c88c40, libserver.so)
int __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor::GetAuraRadius(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor *const this)
{
  return this->radius;
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor::OnCreated  (line 1805, @0x0000000002c70530, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor::OnCreated(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor::OnRefresh  (line 1812, @0x0000000002c71010, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor::OnRefresh(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_Armor *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance::~CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance  (line 1821, @0x0000000002c92a40, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance::~CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance *const this)
{
  this->_vptr_CDOTA_Buff = &off_45B16D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance::~CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance  (line 1821, @0x0000000002c92a60, libserver.so)  // inlines: ~CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance::~CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance *const this)
{
  this->_vptr_CDOTA_Buff = &off_45B16D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance::IsHidden  (line 1829, @0x0000000002c88c50, libserver.so)
bool __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance::IsHidden(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance *const this)
{
  return 1;
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance::IsAura  (line 1831, @0x0000000002c88c60, libserver.so)
bool __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance::IsAura(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance *const this)
{
  return 1;
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance::GetModifierAura  (line 1832, @0x0000000002c88c70, libserver.so)
// strings: "modifier_elder_titan_natural_order_magic_resistance"
const char *__fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance::GetModifierAura(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance *const this)
{
  return "modifier_elder_titan_natural_order_magic_resistance";
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance::GetAuraDuration  (line 1834, @0x0000000002c88c80, libserver.so)
float __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance::GetAuraDuration(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance *const this)
{
  return 1.0;
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance::GetAuraSearchTeam  (line 1835, @0x0000000002c88c90, libserver.so)
int __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance::GetAuraSearchTeam(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance *const this)
{
  return 2;
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance::GetAuraSearchType  (line 1836, @0x0000000002c88ca0, libserver.so)
int __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance::GetAuraSearchType(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance *const this)
{
  return 19;
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance::GetAuraSearchFlags  (line 1837, @0x0000000002c88cb0, libserver.so)
int __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance::GetAuraSearchFlags(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance *const this)
{
  return 528;
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance::GetAuraRadius  (line 1838, @0x0000000002c88cc0, libserver.so)
int __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance::GetAuraRadius(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance *const this)
{
  return this->radius;
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance::OnCreated  (line 1849, @0x0000000002c70e30, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance::OnCreated(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance::OnRefresh  (line 1856, @0x0000000002c70410, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance::OnRefresh(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Aura_MagicResistance *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor::~CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor  (line 1866, @0x0000000002c929f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor::~CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor *const this)
{
  this->_vptr_CDOTA_Buff = &off_45B19F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor::~CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor  (line 1866, @0x0000000002c92a10, libserver.so)  // inlines: ~CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor::~CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor *const this)
{
  this->_vptr_CDOTA_Buff = &off_45B19F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor::CalculateArmorReduction  (line 1899, @0x0000000002c3f720, libserver.so)  // inlines: ToDOTABaseNPCHero
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::SendBuffRefreshToClients
// callers: CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor::OnIntervalThink, CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor::OnRefresh, CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor::OnCreated
void __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor::CalculateArmorReduction(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax
  float v4; // xmm0_4
  float flBaseArmor; // [rsp+Ch] [rbp-14h]

  Parent = CDOTA_Buff::GetParent(this);
  flBaseArmor = (*(Parent->_vptr_IHandleEntity + 424))(Parent);
  v3 = CDOTA_Buff::GetParent(this);
  if ( v3 != 0 && (v3->m_iUnitType & 1) != 0 )
    v4 = (*(v3->_vptr_IHandleEntity + 497))(v3) * 0.14;
  else
    v4 = 0.0;
  this->m_flArmorReduction = (this->armor_reduction_pct * (v4 + flBaseArmor)) / 100.0;
  CDOTA_Buff::SendBuffRefreshToClients(this);
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor::OnCreated  (line 1921, @0x0000000002c711b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor::CalculateArmorReduction, CDOTA_Buff::StartIntervalThink
// strings: "armor_reduction_pct"
void __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor::OnCreated(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->armor_reduction_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "armor_reduction_pct", -1, 0);
  else
    this->armor_reduction_pct = 0;
  CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor::CalculateArmorReduction(this);
  CDOTA_Buff::StartIntervalThink(this, 0.25, v4);
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor::OnRefresh  (line 1937, @0x0000000002c71070, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor::CalculateArmorReduction
// strings: "armor_reduction_pct"
void __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor::OnRefresh(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->armor_reduction_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "armor_reduction_pct", -1, 0);
  else
    this->armor_reduction_pct = 0;
  CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor::CalculateArmorReduction(this);
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor::OnIntervalThink  (line 1948, @0x0000000002c3f7b0, libserver.so)
// calls: CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor::CalculateArmorReduction
void __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor::OnIntervalThink(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor *const this)
{
  CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor::CalculateArmorReduction(this);
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor::DeclareFunctions  (line 1957, @0x0000000002c1c540, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor::DeclareFunctions(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor *const this)
{
  this->m_Functions[45].__pfn = (&stru_10 + 697);
  this->m_Functions[45].__delta = 0;
  this->m_Functions[151].__pfn = (&stru_10 + 705);
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor::GetModifierPhysicalArmorBonus  (line 1965, @0x0000000002c26640, libserver.so)
// calls: CDOTA_Buff::GetCaster
ModifierVariant_t __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetCaster(this) != 0
    && (result.m_szVal = CDOTA_Buff::GetCaster(this), *&result.m_eType = 1, (result.m_szVal[2787] & 0x10) != 0) )
  {
    result.m_szVal = 0;
  }
  else
  {
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(_mm_xor_ps(LODWORD(this->m_flArmorReduction), 0x80000000)) << 32) | 1;
  }
  return result;
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor::OnTooltip  (line 1975, @0x0000000002c1c580, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor::OnTooltip(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->armor_reduction_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor::AddCustomTransmiterData  (line 1982, @0x0000000002c21db0, libserver.so)  // inlines: set_fade_time, set_has_fade_time
// calls: CDOTA_Buff::AddCustomTransmiterData
void __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor::AddCustomTransmiterData(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_Armor *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  float m_flArmorReduction; // xmm0_4

  m_flArmorReduction = this->m_flArmorReduction;
  *(entry + 4) |= 0x1000u;
  *(entry + 18) = m_flArmorReduction;
  CDOTA_Buff::AddCustomTransmiterData(this, entry);
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance::~CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance  (line 2001, @0x0000000002c929a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance::~CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance *const this)
{
  this->_vptr_CDOTA_Buff = &off_45B1D30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance::~CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance  (line 2001, @0x0000000002c929c0, libserver.so)  // inlines: ~CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance::~CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance *const this)
{
  this->_vptr_CDOTA_Buff = &off_45B1D30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance::GetTexture  (line 2010, @0x0000000002c88cd0, libserver.so)
// strings: "elder_titan_natural_order_spirit"
const char *__fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance::GetTexture(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance *const this)
{
  return "elder_titan_natural_order_spirit";
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance::OnCreated  (line 2032, @0x0000000002c71aa0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent
// strings: "magic_resistance_pct"
void __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance::OnCreated(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->magic_resistance_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "magic_resistance_pct", -1, 0);
  else
    this->magic_resistance_pct = 0;
  Parent = CDOTA_Buff::GetParent(this);
  this->m_flMagicReduction = ((*(Parent->_vptr_IHandleEntity + 425))(Parent) * this->magic_resistance_pct) / 100.0;
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance::OnRefresh  (line 2041, @0x0000000002c70cb0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "magic_resistance_pct"
void __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance::OnRefresh(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->magic_resistance_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "magic_resistance_pct", -1, 0);
  else
    this->magic_resistance_pct = 0;
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance::DeclareFunctions  (line 2049, @0x0000000002c1c5a0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance::DeclareFunctions(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance *const this)
{
  this->m_Functions[48].__pfn = (&stru_10 + 697);
  this->m_Functions[48].__delta = 0;
  this->m_Functions[151].__pfn = (&stru_10 + 705);
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance::GetModifierMagicalResistanceDirectModification  (line 2057, @0x0000000002c266b0, libserver.so)
// calls: CDOTA_Buff::GetCaster
ModifierVariant_t __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance::GetModifierMagicalResistanceDirectModification(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetCaster(this) != 0
    && (result.m_szVal = CDOTA_Buff::GetCaster(this), *&result.m_eType = 1, (result.m_szVal[2787] & 0x10) != 0) )
  {
    result.m_szVal = 0;
  }
  else
  {
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(_mm_xor_ps(LODWORD(this->m_flMagicReduction), 0x80000000)) << 32) | 1;
  }
  return result;
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance::OnTooltip  (line 2067, @0x0000000002c1c5e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance::OnTooltip(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->magic_resistance_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance::AddCustomTransmiterData  (line 2074, @0x0000000002c21dd0, libserver.so)  // inlines: set_fade_time, set_has_fade_time
// calls: CDOTA_Buff::AddCustomTransmiterData
void __fastcall CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance::AddCustomTransmiterData(
        CDOTA_Modifier_Elder_Titan_NaturalOrder_MagicResistance *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  float m_flMagicReduction; // xmm0_4

  m_flMagicReduction = this->m_flMagicReduction;
  *(entry + 4) |= 0x1000u;
  *(entry + 18) = m_flMagicReduction;
  CDOTA_Buff::AddCustomTransmiterData(this, entry);
}


// CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster::~CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster  (line 2094, @0x0000000002cb69c0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster::~CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster(
        CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster *const this)
{
  this->_vptr_CDOTA_Buff = &off_45B2070;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitUnits);
  if ( (this->m_hHitUnits.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitUnits.m_Memory),
        (this->m_hHitUnits.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitUnits.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster::~CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster  (line 2094, @0x0000000002cb7290, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster::~CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster(
        CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster *const this)
{
  this->_vptr_CDOTA_Buff = &off_45B2070;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitUnits);
  if ( (this->m_hHitUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitUnits.m_Memory);
    if ( (this->m_hHitUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitUnits.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster::IsHidden  (line 2101, @0x0000000002c88ce0, libserver.so)
bool __fastcall CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster::IsHidden(
        CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster *const this)
{
  return 1;
}


// CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster::IsPurgable  (line 2102, @0x0000000002c88cf0, libserver.so)
bool __fastcall CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster::IsPurgable(
        CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster *const this)
{
  return 0;
}


// CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster::GetAttributes  (line 2104, @0x0000000002c88d00, libserver.so)
int __fastcall CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster::GetAttributes(
        CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster *const this)
{
  return 2;
}


// CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster::OnCreated  (line 2136, @0x0000000002c75860, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, VectorAdd, VectorMultiply, VectorNormalize2D, VectorSubtract, operator*, operator+, operator-, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, VectorNormalize, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsAngles, AngleVectors, CBaseEntity::GetAbsOrigin, CDOTA_Buff::StartIntervalThink
// strings: "vision_width", "total_steps"
void __fastcall CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster::OnCreated(
        CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  float y; // xmm0_4
  float x; // xmm1_4
  vec_t v10; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  const QAngle *AbsAngles; // rax
  float vision_step; // xmm0_4
  __m128i x_low; // xmm3
  float v15; // r12d
  CDOTA_BaseNPC *v16; // rax
  const Vector *AbsOrigin; // rax
  vec_t v18; // xmm1_4
  vec_t v19; // xmm0_4
  vec_t v20; // xmm2_4
  int (**vptr_CDOTA_Buff)(...); // rax
  float v22; // xmm1_4
  float v23; // [rsp+8h] [rbp-18h]
  float v24; // [rsp+Ch] [rbp-14h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->vision_width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "vision_width", -1, 0);
  else
    this->vision_width = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    this->vision_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "vision_interval", -1, 0);
  else
    this->vision_interval = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
    this->vision_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "vision_duration", -1, 0);
  else
    this->vision_duration = 0.0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
    this->vision_step = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "vision_step", -1, 0);
  else
    this->vision_step = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
    this->total_steps = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "total_steps", -1, 0);
  else
    this->total_steps = 0;
  y = this->m_vEnd.y;
  this->m_nCompletedSteps = 0;
  x = this->m_vEnd.x;
  this->m_vCastDirection.z = 0.0;
  v10 = x - this->m_vStart.x;
  this->m_vCastDirection.y = y - this->m_vStart.y;
  this->m_vCastDirection.x = v10;
  if ( VectorNormalize(&this->m_vCastDirection) < 0.0099999998 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(Caster);
    AngleVectors(AbsAngles, &this->m_vCastDirection, 0, 0);
  }
  vision_step = this->vision_step;
  x_low = LODWORD(this->m_vCastDirection.x);
  *x_low.m128i_i32 = *x_low.m128i_i32 * vision_step;
  v15 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
  v23 = this->m_vCastDirection.y * vision_step;
  v24 = vision_step * this->m_vCastDirection.z;
  v16 = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v16);
  v18 = v23 + AbsOrigin->y;
  v19 = v24 + AbsOrigin->z;
  v20 = v15 + AbsOrigin->x;
  vptr_CDOTA_Buff = this->_vptr_CDOTA_Buff;
  this->m_vNextVisionLocation.y = v18;
  this->m_vNextVisionLocation.z = v19;
  this->m_vNextVisionLocation.x = v20;
  vptr_CDOTA_Buff[56](this);
  CDOTA_Buff::StartIntervalThink(this, this->vision_interval, v22);
}


// CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster::OnIntervalThink  (line 2163, @0x0000000002c221a0, libserver.so)  // inlines: GetTeamNumber, VectorMultiply, operator*, operator+=
// calls: CDOTA_Buff::GetCaster, CDOTAFogOfWarSystem::AddTempViewer
void __fastcall CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster::OnIntervalThink(
        CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster *const this)
{
  int m_nCompletedSteps; // eax
  float vision_width; // xmm0_4
  float vision_duration; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  float vision_step; // xmm2_4
  vec_t v7; // xmm1_4
  vec_t v8; // xmm0_4
  vec_t v9; // xmm2_4
  float flDuration; // [rsp+8h] [rbp-18h]
  float flRadius; // [rsp+Ch] [rbp-14h]

  m_nCompletedSteps = this->m_nCompletedSteps;
  if ( m_nCompletedSteps < this->total_steps )
  {
    vision_width = this->vision_width;
    vision_duration = this->vision_duration;
    this->m_nCompletedSteps = m_nCompletedSteps + 1;
    flDuration = vision_duration;
    flRadius = vision_width;
    Caster = CDOTA_Buff::GetCaster(this);
    CDOTAFogOfWarSystem::AddTempViewer(
      &g_DOTAFogOfWarSystem,
      FoWViewerType_t::FOWVIEWERTYPE_POWERSHOT,
      Caster->m_iTeamNum.m_Value,
      &this->m_vNextVisionLocation,
      flRadius,
      flDuration,
      0);
    vision_step = this->vision_step;
    v7 = (this->m_vCastDirection.y * vision_step) + this->m_vNextVisionLocation.y;
    v8 = (this->m_vCastDirection.z * vision_step) + this->m_vNextVisionLocation.z;
    v9 = (vision_step * this->m_vCastDirection.x) + this->m_vNextVisionLocation.x;
    this->m_vNextVisionLocation.y = v7;
    this->m_vNextVisionLocation.z = v8;
    this->m_vNextVisionLocation.x = v9;
  }
}


// CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster::SetEndPoints  (line 2178, @0x0000000002c3f7c0, libserver.so)  // inlines: operator=
void __fastcall CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster::SetEndPoints(
        CDOTA_Modifier_Elder_Titan_EarthSplitter_Caster *const this,
        double a2,
        vec_t a3,
        double a4,
        vec_t a5)
{
  this->m_vStart.z = a3;
  this->m_vEnd.z = a5;
  *&this->m_vStart.x = a2;
  *&this->m_vEnd.x = a4;
}


// CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker::~CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker  (line 2187, @0x0000000002c92950, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker::~CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker(
        CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_45B2390;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker::~CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker  (line 2187, @0x0000000002c92970, libserver.so)  // inlines: ~CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker::~CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker(
        CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_45B2390;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker::ShouldSendToClients  (line 2195, @0x0000000002c88d10, libserver.so)
bool __fastcall CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker::ShouldSendToClients(
        CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker *const this)
{
  return 0;
}


// CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker::IsHidden  (line 2197, @0x0000000002c88d20, libserver.so)
bool __fastcall CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker::IsHidden(
        CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker::OnCreated  (line 2219, @0x0000000002c72470, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "crack_width", "slow_duration_scepter"
void __fastcall CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker::OnCreated(
        CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->crack_width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "crack_width", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->crack_width = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->slow_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "slow_duration", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->slow_duration_scepter = 0.0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->slow_duration = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->slow_duration_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "slow_duration_scepter", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->damage_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "damage_pct", -1, 0);
    return;
  }
LABEL_9:
  this->damage_pct = 0;
}


// CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker::OnDestroy  (line 2229, @0x0000000002c7df20, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEnd, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetStart, GetTeamNumber, GrowMemory, HasElement, IndexToIdentity, IsRealHero, IsValid, LookupEntity, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CGridNav::DestroyTreesAroundPoint, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CalcClosestPointOnLine, FindClearSpaceForUnit (27 total)
// strings: "particles/units/heroes/hero_elder_titan/elder_titan_earth_splitter_move.vpcf", "modifier_elder_titan_earth_splitter", "modifier_elder_titan_earth_splitter_scepter", "Hero_ElderTitan.EarthSplitter.Destroy"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker::OnDestroy(
        CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker *const this)
{
  __m128i v1; // xmm5
  CDOTA_Buff *m_pParentModifier; // r13
  float v4; // r14d
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  int v10; // eax
  __m128i v11; // xmm6
  CDOTA_BaseNPC *v12; // rax
  float v13; // xmm3_4
  __int64 v14; // r12
  int v15; // r14d
  CHandle<CBaseEntity> *v16; // rdx
  uint32 m_Index; // eax
  __int16 v18; // cx
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CEntityInstance *m_pInstance; // rbx
  CEntityIdentity *m_pEntity; // rax
  int v23; // edx
  __int16 v24; // cx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  const Vector *v28; // rax
  vec_t v29; // xmm1_4
  vec_t y; // xmm0_4
  vec_t v31; // xmm2_4
  vec_t v32; // xmm1_4
  vec_t v33; // xmm2_4
  vec_t v34; // xmm0_4
  CDOTA_BaseNPC *v35; // rax
  CDOTA_BaseNPC *v36; // rax
  bool v37; // zf
  const char *v38; // rax
  CDOTA_BaseNPC *v39; // rax
  CDOTA_BaseNPC *v40; // rax
  CDOTA_BaseNPC *v41; // rax
  CEntityIdentity *v42; // rax
  __int16 v43; // cx
  __int64 vptr_CDOTA_Buff_low; // rbx
  int vptr_CDOTA_Buff; // eax
  int *v46; // rax
  CDOTA_BaseNPC *v47; // rax
  CDOTA_BaseNPC *v48; // rax
  CDOTA_BaseNPC_Hero *v49; // rdi
  CDOTA_BaseNPC *v50; // rax
  int iNumHeroesHit; // [rsp+24h] [rbp-FCh]
  CDOTABaseAbility *pAbility; // [rsp+40h] [rbp-E0h]
  CDOTABaseAbility *pAbilitya; // [rsp+40h] [rbp-E0h]
  CDOTABaseAbility *pAbilityb; // [rsp+40h] [rbp-E0h]
  char *pszScriptName; // [rsp+48h] [rbp-D8h]
  char *pszScriptNamea; // [rsp+48h] [rbp-D8h]
  int nFXIndex; // [rsp+50h] [rbp-D0h]
  int v58; // [rsp+60h] [rbp-C0h]
  Vector vTargetLoc; // [rsp+70h] [rbp-B0h] BYREF
  Vector vStart; // [rsp+80h] [rbp-A0h] BYREF
  Vector vEnd; // [rsp+90h] [rbp-90h] BYREF
  Vector vPullLoc; // [rsp+A0h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+B0h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+D0h] [rbp-50h] BYREF
  unsigned __int64 v65; // [rsp+E8h] [rbp-38h]
  Vector v66; // 0:xmm0_8.8,8:xmm1_4.4

  v65 = __readfsqword(0x28u);
  m_pParentModifier = this->m_pParentModifier;
  if ( m_pParentModifier != 0 )
  {
    *v1.m128i_i32 = this->crack_width;
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
    Caster = CDOTA_Buff::GetCaster(this);
    Parent = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
    v8 = CDOTA_Buff::GetCaster(this);
    FindUnitsInRadius(v8->m_iTeamNum.m_Value, AbsOrigin, Caster, v4, &entities, 2, 3, 528, 0, 0);
    v9 = CDOTA_Buff::GetCaster(this);
    v10 = (*(v9->_vptr_IHandleEntity + 414))(v9);
    *v11.m128i_i32 = this->crack_width;
    LODWORD(Caster) = v10;
    LODWORD(AbsOrigin) = _mm_cvtsi128_si32(v11);
    v12 = CDOTA_Buff::GetParent(this);
    v66 = *CBaseEntity::GetAbsOrigin(v12);
    CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, Caster, v66, *&AbsOrigin, v13);
    if ( entities.m_Size <= 0 )
    {
      iNumHeroesHit = 0;
    }
    else
    {
      v14 = 0;
      v15 = 0;
      iNumHeroesHit = 0;
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
                if ( v20->m_pInstance != 0
                  && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                  && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x800) == 0 )
                {
                  vPullLoc.x = NAN;
                  m_pEntity = m_pInstance->m_pEntity;
                  if ( m_pEntity != 0 )
                  {
                    v23 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                    v24 = 0x7FFF;
                    if ( m_pEntity->m_EHandle.m_Index != -1 )
                      v24 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                    LOWORD(vPullLoc.x) = v24 | LOWORD(vPullLoc.x) & 0x8000;
                    LODWORD(vPullLoc.x) = (v23 << 15) | LOWORD(vPullLoc.x) & 0x7FFF;
                  }
                  if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                         &m_pParentModifier[1],
                         &vPullLoc) < 0 )
                    break;
                }
              }
            }
          }
          ++v15;
          ++v14;
          if ( entities.m_Size <= v15 )
            goto LABEL_30;
        }
        ParticleManager = GetParticleManager();
        nFXIndex = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/units/heroes/hero_elder_titan/elder_titan_earth_splitter_move.vpcf",
                     1,
                     m_pInstance,
                     0,
                     0);
        pszScriptName = CBaseEntity::GetAbsOrigin(m_pInstance);
        v26 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControl(v26, nFXIndex, 1, *pszScriptName, *(pszScriptName + 2));
        v27 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v27, nFXIndex);
        v28 = CBaseEntity::GetAbsOrigin(m_pInstance);
        v29 = *(&m_pParentModifier[1].m_szModifierAura.u.m_pAsString + 1);
        vTargetLoc.x = v28->x;
        y = v28->y;
        vStart.y = v29;
        vTargetLoc.y = y;
        v31 = *&m_pParentModifier[1].m_szModifierAura.u.m_Id;
        vTargetLoc.z = v28->z;
        vStart.x = v31;
        v32 = *&m_pParentModifier[1].m_iSerialNumber;
        vStart.z = *&m_pParentModifier[1].m_pCachedModifierAuraFactory;
        v33 = *(&m_pParentModifier[1].m_pCachedModifierAuraFactory + 1);
        v34 = *&m_pParentModifier[1].m_iStringIndex;
        vEnd.y = v32;
        vEnd.x = v33;
        vEnd.z = v34;
        CalcClosestPointOnLine(&vTargetLoc, &vStart, &vEnd, &vPullLoc, 0);
        FindClearSpaceForUnit(m_pInstance, vPullLoc, 0);
        CDOTA_BaseNPC::Interrupt(m_pInstance);
        KeyValues::KeyValues(&kv, "modifier_elder_titan_earth_splitter");
        v35 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::HasScepter(v35);
        KeyValues::SetFloat(&kv, "duration", this->slow_duration_scepter);
        v36 = CDOTA_Buff::GetCaster(this);
        v37 = !CDOTA_BaseNPC::HasScepter(v36);
        v38 = "modifier_elder_titan_earth_splitter";
        if ( !v37 )
          v38 = "modifier_elder_titan_earth_splitter_scepter";
        pszScriptNamea = v38;
        pAbility = CDOTA_Buff::GetAbility(this);
        v39 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(m_pInstance, v39, pAbility, pszScriptNamea, &kv, 0);
        *&pszScriptNamea = 0.5 * (((*(m_pInstance->_vptr_IHandleEntity + 156))(m_pInstance) * this->damage_pct) / 100);
        pAbilitya = CDOTA_Buff::GetAbility(this);
        v40 = CDOTA_Buff::GetCaster(this);
        ApplyDamage(v40, m_pInstance, pAbilitya, *&pszScriptNamea, 2, 0);
        pAbilityb = CDOTA_Buff::GetAbility(this);
        v41 = CDOTA_Buff::GetCaster(this);
        ApplyDamage(v41, m_pInstance, pAbilityb, *&pszScriptNamea, 1, 8);
        if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
          iNumHeroesHit += LOBYTE(m_pInstance[71].m_pEntity) == 0;
        v42 = m_pInstance->m_pEntity;
        v58 = -1;
        if ( v42 != 0 )
        {
          v43 = 0x7FFF;
          if ( v42->m_EHandle.m_Index != -1 )
            v43 = v42->m_EHandle.m_Index & 0x7FFF;
          v58 = (((v42->m_EHandle.m_Index >> 15) - (v42->m_flags & 1)) << 15) | v43 & 0x7FFF;
        }
        vptr_CDOTA_Buff_low = SLODWORD(m_pParentModifier[1]._vptr_CDOTA_Buff);
        vptr_CDOTA_Buff = m_pParentModifier[1]._vptr_CDOTA_Buff;
        if ( vptr_CDOTA_Buff_low == LODWORD(m_pParentModifier[1].m_name.u.m_Id) )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&m_pParentModifier[1].m_References, 1);
          vptr_CDOTA_Buff = m_pParentModifier[1]._vptr_CDOTA_Buff;
        }
        LODWORD(m_pParentModifier[1]._vptr_CDOTA_Buff) = vptr_CDOTA_Buff + 1;
        v46 = m_pParentModifier[1].m_References.m_pHead + vptr_CDOTA_Buff_low;
        if ( v46 != 0 )
          *v46 = v58;
        ++v15;
        ++v14;
        KeyValues::~KeyValues(&kv);
      }
      while ( entities.m_Size > v15 );
    }
LABEL_30:
    v47 = CDOTA_Buff::GetParent(this);
    DOTA_EmitSound(2, "Hero_ElderTitan.EarthSplitter.Destroy", v47);
    if ( iNumHeroesHit > 2 )
    {
      v48 = CDOTA_Buff::GetCaster(this);
      if ( v48 != 0 && (v48->m_iUnitType & 1) != 0 )
        v49 = v48;
      else
        v49 = 0;
      EconEntity_OnOwnerKillEaterEvent(
        v49,
        0,
        kill_eater_event_t::kKillEaterEvent_ElderTitan_GoodSplitters,
        1,
        INVALID_ITEM_DEF_INDEX);
    }
    v50 = CDOTA_Buff::GetParent(this);
    UTIL_Remove(v50);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
}


// CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker::CheckState  (line 2300, @0x0000000002c1c600, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker::CheckState(
        CDOTA_Modifier_Elder_Titan_EarthSplitter_Thinker *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x307uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFFFCF8LL;
}


// CDOTA_Modifier_Elder_Titan_EarthSplitter::~CDOTA_Modifier_Elder_Titan_EarthSplitter  (line 2316, @0x0000000002c928b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Elder_Titan_EarthSplitter::~CDOTA_Modifier_Elder_Titan_EarthSplitter(
        CDOTA_Modifier_Elder_Titan_EarthSplitter *const this)
{
  this->_vptr_CDOTA_Buff = &off_45B29D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Elder_Titan_EarthSplitter::~CDOTA_Modifier_Elder_Titan_EarthSplitter  (line 2316, @0x0000000002c928d0, libserver.so)  // inlines: ~CDOTA_Modifier_Elder_Titan_EarthSplitter
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Elder_Titan_EarthSplitter::~CDOTA_Modifier_Elder_Titan_EarthSplitter(
        CDOTA_Modifier_Elder_Titan_EarthSplitter *const this)
{
  this->_vptr_CDOTA_Buff = &off_45B29D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Elder_Titan_EarthSplitter::GetEffectName  (line 2322, @0x0000000002c97600, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter
// strings: "particles/units/heroes/hero_elder_titan/elder_titan_scepter_disarm.vpcf"
const char *__fastcall CDOTA_Modifier_Elder_Titan_EarthSplitter::GetEffectName(
        CDOTA_Modifier_Elder_Titan_EarthSplitter *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  bool HasScepter; // al
  const char *v3; // rdx

  Caster = CDOTA_Buff::GetCaster(this);
  HasScepter = CDOTA_BaseNPC::HasScepter(Caster);
  v3 = 0;
  if ( HasScepter )
    return "particles/units/heroes/hero_elder_titan/elder_titan_scepter_disarm.vpcf";
  return v3;
}


// CDOTA_Modifier_Elder_Titan_EarthSplitter::GetEffectAttachType  (line 2323, @0x0000000002c88d30, libserver.so)
int __fastcall CDOTA_Modifier_Elder_Titan_EarthSplitter::GetEffectAttachType(
        CDOTA_Modifier_Elder_Titan_EarthSplitter *const this)
{
  return 7;
}


// CDOTA_Modifier_Elder_Titan_EarthSplitter::ShouldUseOverheadOffset  (line 2324, @0x0000000002c97630, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter
bool __fastcall CDOTA_Modifier_Elder_Titan_EarthSplitter::ShouldUseOverheadOffset(
        CDOTA_Modifier_Elder_Titan_EarthSplitter *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  return CDOTA_BaseNPC::HasScepter(Caster);
}


// CDOTA_Modifier_Elder_Titan_EarthSplitterScepter::~CDOTA_Modifier_Elder_Titan_EarthSplitterScepter  (line 2343, @0x0000000002c92900, libserver.so)  // inlines: ~CDOTA_Modifier_Elder_Titan_EarthSplitter
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Elder_Titan_EarthSplitterScepter::~CDOTA_Modifier_Elder_Titan_EarthSplitterScepter(
        CDOTA_Modifier_Elder_Titan_EarthSplitterScepter *const this)
{
  this->_vptr_CDOTA_Buff = &off_45B29D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Elder_Titan_EarthSplitterScepter::~CDOTA_Modifier_Elder_Titan_EarthSplitterScepter  (line 2343, @0x0000000002c92920, libserver.so)  // inlines: ~CDOTA_Modifier_Elder_Titan_EarthSplitter, ~CDOTA_Modifier_Elder_Titan_EarthSplitterScepter
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Elder_Titan_EarthSplitterScepter::~CDOTA_Modifier_Elder_Titan_EarthSplitterScepter(
        CDOTA_Modifier_Elder_Titan_EarthSplitterScepter *const this)
{
  this->_vptr_CDOTA_Buff = &off_45B29D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Elder_Titan_EarthSplitter::OnCreated  (line 2353, @0x0000000002c708f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Elder_Titan_EarthSplitter::OnCreated(
        CDOTA_Modifier_Elder_Titan_EarthSplitter *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->slow_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "slow_pct", -1, 0);
  else
    this->slow_pct = 0;
}


// CDOTA_Modifier_Elder_Titan_EarthSplitter::OnRefresh  (line 2360, @0x0000000002c70710, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Elder_Titan_EarthSplitter::OnRefresh(
        CDOTA_Modifier_Elder_Titan_EarthSplitter *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->slow_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "slow_pct", -1, 0);
  else
    this->slow_pct = 0;
}


// CDOTA_Modifier_Elder_Titan_EarthSplitter::DeclareFunctions  (line 2367, @0x0000000002c1c620, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Elder_Titan_EarthSplitter::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Elder_Titan_EarthSplitter::DeclareFunctions(
        CDOTA_Modifier_Elder_Titan_EarthSplitter *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Elder_Titan_EarthSplitter::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Elder_Titan_EarthSplitter::GetModifierMoveSpeedBonus_Percentage  (line 2374, @0x0000000002c1c640, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Elder_Titan_EarthSplitter::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Elder_Titan_EarthSplitter *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->slow_pct;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Elder_Titan_EarthSplitter::CheckState  (line 2381, @0x0000000002c25f10, libserver.so)  // inlines: Enable
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter
void __fastcall CDOTA_Modifier_Elder_Titan_EarthSplitter::CheckState(
        CDOTA_Modifier_Elder_Titan_EarthSplitter *const this,
        CDOTABuffState *const buffState)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
  {
    buffState->m_nEnabledStateMask |= 2uLL;
    buffState->m_nDisabledStateMask &= ~2uLL;
  }
}


// CDOTA_Ability_Elder_Titan_EarthSplitter::~CDOTA_Ability_Elder_Titan_EarthSplitter  (line 2393, @0x0000000002c98530, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Elder_Titan_EarthSplitter::~CDOTA_Ability_Elder_Titan_EarthSplitter(
        CDOTA_Ability_Elder_Titan_EarthSplitter *const this)
{
  this->_vptr_IHandleEntity = &off_45B2D30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Elder_Titan_EarthSplitter::~CDOTA_Ability_Elder_Titan_EarthSplitter  (line 2393, @0x0000000002c98550, libserver.so)  // inlines: ~CDOTA_Ability_Elder_Titan_EarthSplitter
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Elder_Titan_EarthSplitter::~CDOTA_Ability_Elder_Titan_EarthSplitter(
        CDOTA_Ability_Elder_Titan_EarthSplitter *const this)
{
  this->_vptr_IHandleEntity = &off_45B2D30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Elder_Titan_EarthSplitter::Schema_DynamicBinding  (line 2395, @0x0000000002c88d40, libserver.so)
// globals: CDOTA_Ability_Elder_Titan_EarthSplitter::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Elder_Titan_EarthSplitter::Schema_DynamicBinding(
        const CDOTA_Ability_Elder_Titan_EarthSplitter *const this)
{
  return CDOTA_Ability_Elder_Titan_EarthSplitter::s_pSchemaBinding;
}


// CDOTA_Ability_Elder_Titan_EarthSplitter::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2395, @0x0000000002c88d50, libserver.so)
// globals: CDOTA_Ability_Elder_Titan_EarthSplitter::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Elder_Titan_EarthSplitter::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Elder_Titan_EarthSplitter::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Elder_Titan_EarthSplitter::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Elder_Titan_EarthSplitter::CEntityInstanceEntityClass::DestructInstance  (line 2395, @0x0000000002c88d60, libserver.so)  // inlines: Destruct<CDOTA_Ability_Elder_Titan_EarthSplitter>
void __fastcall CDOTA_Ability_Elder_Titan_EarthSplitter::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Elder_Titan_EarthSplitter::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Elder_Titan_EarthSplitter::CEntityInstanceEntityClass::FreeInstance  (line 2395, @0x0000000002c88d80, libserver.so)
void __fastcall CDOTA_Ability_Elder_Titan_EarthSplitter::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Elder_Titan_EarthSplitter::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Elder_Titan_EarthSplitter::CEntityInstanceEntityClass::CanAllocate  (line 2395, @0x0000000002c88da0, libserver.so)
bool __fastcall CDOTA_Ability_Elder_Titan_EarthSplitter::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Elder_Titan_EarthSplitter::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Elder_Titan_EarthSplitter::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2395, @0x0000000002c88db0, libserver.so)
// globals: CDOTA_Ability_Elder_Titan_EarthSplitter::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Elder_Titan_EarthSplitter::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Elder_Titan_EarthSplitter::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Elder_Titan_EarthSplitter::s_pSchemaBinding;
}


// CDOTA_Ability_Elder_Titan_EarthSplitter::CEntityInstanceEntityClass::AllocateInstance  (line 2395, @0x0000000002c8fb60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Elder_Titan_EarthSplitter::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Elder_Titan_EarthSplitter::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 944);
  memset(v1, 0, 0x3B0u);
  return v1;
}


// CDOTA_Ability_Elder_Titan_EarthSplitter::CEntityInstanceEntityClass::ConstructInstance  (line 2395, @0x0000000002c94b10, libserver.so)  // inlines: CDOTA_Ability_Elder_Titan_EarthSplitter, Construct<CDOTA_Ability_Elder_Titan_EarthSplitter>, InValidate, SndOpEventGuid_t, SoundEventGuid_t
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Elder_Titan_EarthSplitter::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Elder_Titan_EarthSplitter::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 233) = 0;
    *p = &off_45B2D30;
    *(p + 234) = -1;
  }
  return p;
}


// CDOTA_Ability_Elder_Titan_EarthSplitter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2395, @0x0000000002ca2110, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Elder_Titan_EarthSplitter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Elder_Titan_EarthSplitter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Elder_Titan_EarthSplitter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2395, @0x0000000002ca2130, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Elder_Titan_EarthSplitter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Elder_Titan_EarthSplitter::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal  (line 2395, @0x0000000002cc59f0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "elder_titan_earth_splitter", "CDOTA_Ability_Elder_Titan_EarthSplitter"
// globals: `guard variable for'CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass, CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Elder_Titan_EarthSplitter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClassInfo, CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClassInfo
CEntityClass *__cdecl CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass) != 0 )
  {
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_pClassInfo = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_flags = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_pInputs = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_nInputCount = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_pOutputs = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_nOutputCount = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_pGameClass = 0;
    CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass._vptr_CEntityClass = off_45B2CB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass);
    __cxa_atexit(
      CDOTA_Ability_Elder_Titan_EarthSplitter::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Elder_Titan_EarthSplitterClass != 0 )
    return &CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass;
  if ( `guard variable for'CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClassInfo,
      "CDOTA_Ability_Elder_Titan_EarthSplitter",
      "elder_titan_earth_splitter",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClassInfo);
  }
  CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_pClassInfo = &CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClassInfo;
  CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_pBaseClassInfo = CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Elder_Titan_EarthSplitterClass = &CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass;
  CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClassInfo.m_pClass = &CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass;
  CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Elder_Titan_EarthSplitterClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Elder_Titan_EarthSplitter::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Elder_Titan_EarthSplitterClass;
}


// CDOTA_Ability_Elder_Titan_EarthSplitter::YouForgotToImplementOrDeclareServerClass  (line 2417, @0x0000000002c1c660, libserver.so)
int __fastcall CDOTA_Ability_Elder_Titan_EarthSplitter::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Elder_Titan_EarthSplitter *const this)
{
  return 0;
}


// CDOTA_Ability_Elder_Titan_EarthSplitter::GetServerClass  (line 2417, @0x0000000002c35570, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Elder_Titan_EarthSplitter::GetServerClass(
        CDOTA_Ability_Elder_Titan_EarthSplitter *const this)
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


// CDOTA_Ability_Elder_Titan_EarthSplitter::OnSpellStart  (line 2426, @0x0000000002c68120, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, GetAbilityData, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, NormalizeInPlace, Set, SetEndPoints, SetParentModifier, Vector, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator+=, operator-, operator=, sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, Thinker_Create, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::GetCursorPosition, VectorNormalize, CBaseEntity::GetAbsAngles, AngleVectors (26 total)
// strings: "crack_width", "crack_distance", "crack_time", "modifier_elder_titan_earth_splitter_caster", "modifier_elder_titan_earth_splitter_thinker", "particles/units/heroes/hero_elder_titan/elder_titan_earth_splitter.vpcf" (8 total)
void __fastcall CDOTA_Ability_Elder_Titan_EarthSplitter::OnSpellStart(
        CDOTA_Ability_Elder_Titan_EarthSplitter *const this)
{
  float v2; // xmm1_4
  int m_Value; // r13d
  CDOTA_BaseNPC *Caster; // rax
  Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_Buff *ModifierByName; // r15
  CDOTA_BaseNPC *v9; // rax
  const Vector *v10; // rax
  vec_t v11; // xmm0_4
  vec_t v12; // xmm1_4
  int crack_distance; // r13d
  CDOTA_BaseNPC *v14; // rax
  const QAngle *AbsAngles; // rax
  float v16; // xmm3_4
  CDOTA_BaseNPC *v17; // rax
  const Vector *v18; // rax
  int v19; // r13d
  float v20; // xmm1_4
  int v21; // r14d
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  CDOTA_Buff *v24; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  float crack_time; // r13d
  int m_iAbilityID; // r12d
  CDOTA_BaseNPC *v28; // rax
  CDOTA_BaseNPC *v29; // rax
  const Vector *v30; // rax
  vec_t x; // xmm2_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  vec_t v34; // xmm1_4
  vec_t v35; // xmm2_4
  vec_t v36; // xmm0_4
  CDOTA_BaseNPC *v37; // rax
  const Vector *v38; // rax
  vec_t v39; // xmm0_4
  float speed; // xmm0_4
  CDOTA_BaseNPC *v41; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v43; // eax
  __int16 v44; // cx
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_BaseNPC *v47; // rax
  const Vector *v48; // r13
  CDOTA_ParticleManager *v49; // rax
  CDOTA_ParticleManager *v50; // rax
  __m128i x_low; // xmm3
  __m128i y_low; // xmm7
  float v53; // xmm0_4
  __m128i v54; // xmm0
  float v55; // r15d
  float v56; // r14d
  CDOTA_BaseNPC *v57; // rax
  const Vector *v58; // rax
  float v59; // xmm0_4
  float v60; // xmm2_4
  CDOTA_ParticleManager *v61; // rax
  CDOTA_ParticleManager *v62; // rax
  float v63; // xmm1_4
  CDOTA_ParticleManager *v64; // rax
  CDOTA_ParticleManager *v65; // rax
  CDOTA_BaseNPC *v66; // rax
  CDOTA_BaseNPC *v67; // rax
  const Vector *v68; // rax
  float flCrackDistance; // [rsp+30h] [rbp-160h]
  float v70; // [rsp+34h] [rbp-15Ch]
  float v71; // [rsp+38h] [rbp-158h]
  float v72; // [rsp+3Ch] [rbp-154h]
  int nCracks; // [rsp+40h] [rbp-150h]
  float v74; // [rsp+44h] [rbp-14Ch]
  float v75; // [rsp+48h] [rbp-148h]
  float flLengtha; // [rsp+4Ch] [rbp-144h]
  float flLength; // [rsp+4Ch] [rbp-144h]
  Vector vCastDir; // [rsp+60h] [rbp-130h] BYREF
  Vector vOrigin; // [rsp+70h] [rbp-120h]
  double v80; // [rsp+80h] [rbp-110h]
  float v81; // [rsp+88h] [rbp-108h]
  double v82; // [rsp+90h] [rbp-100h]
  float v83; // [rsp+98h] [rbp-F8h]
  sLinearProjectileCreateInfo info; // [rsp+A0h] [rbp-F0h] BYREF
  KeyValues kv; // [rsp+120h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+140h] [rbp-50h] BYREF
  unsigned __int64 v87; // [rsp+158h] [rbp-38h]
  Vector CursorPosition; // 0:kr00_12.12
  Vector v89; // 0:xmm0_8.8,8:xmm1_4.4

  v87 = __readfsqword(0x28u);
  this->crack_width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "crack_width", -1, 0);
  this->crack_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "crack_distance", -1, 0);
  this->speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
  this->crack_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "crack_time", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_elder_titan_earth_splitter_caster");
  KeyValues::SetFloat(&kv, "duration", v2);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  v6 = CDOTABaseAbility::GetCaster(this);
  v7 = Thinker_Create(v6, this, "modifier_elder_titan_earth_splitter_caster", &kv, *AbsOrigin, m_Value, 0, 0, 0);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(v7, "modifier_elder_titan_earth_splitter_caster", 0);
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  v9 = CDOTABaseAbility::GetCaster(this);
  v10 = CBaseEntity::GetAbsOrigin(v9);
  v11 = CursorPosition.y - v10->y;
  v12 = CursorPosition.x - v10->x;
  vCastDir.z = 0.0;
  vCastDir.y = v11;
  vCastDir.x = v12;
  flLengtha = VectorNormalize(&vCastDir);
  crack_distance = this->crack_distance;
  flCrackDistance = ((*(this->_vptr_IHandleEntity + 228))(this) + crack_distance);
  if ( flLengtha < 0.0099999998 )
  {
    v14 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v14);
    AngleVectors(AbsAngles, &vCastDir, 0, 0);
  }
  nCracks = ceilf(flCrackDistance / this->crack_width);
  v16 = flCrackDistance / nCracks;
  v72 = vCastDir.x * v16;
  v70 = v16 * vCastDir.z;
  v71 = vCastDir.y * v16;
  v17 = CDOTABaseAbility::GetCaster(this);
  v18 = CBaseEntity::GetAbsOrigin(v17);
  flLength = v18->x + vCastDir.x;
  v75 = v18->y + vCastDir.y;
  v74 = v18->z + vCastDir.z;
  if ( nCracks > 0 )
  {
    v19 = 0;
    do
    {
      KeyValues::KeyValues(&kv2, "modifier_elder_titan_earth_splitter_thinker");
      KeyValues::SetFloat(&kv2, "duration", v20);
      v21 = this->m_iTeamNum.m_Value;
      v22 = CDOTABaseAbility::GetCaster(this);
      *&vOrigin.x = __PAIR64__(LODWORD(v75), LODWORD(flLength));
      v89.z = v74;
      *&v89.x = __PAIR64__(LODWORD(v75), LODWORD(flLength));
      vOrigin.z = v74;
      v23 = Thinker_Create(v22, this, "modifier_elder_titan_earth_splitter_thinker", &kv2, v89, v21, 0, 0, 0);
      if ( v23 != 0 )
      {
        v24 = CDOTA_BaseNPC::FindModifierByName(v23, "modifier_elder_titan_earth_splitter_thinker", 0);
        if ( v24 != 0 && ModifierByName != 0 )
          v24[1].m_name.u.m_Id = ModifierByName;
      }
      ++v19;
      flLength = flLength + v72;
      v75 = v75 + v71;
      v74 = v74 + v70;
      KeyValues::~KeyValues(&kv2);
    }
    while ( v19 != nCracks );
  }
  m_pAbilityData = this->m_pAbilityData;
  crack_time = this->crack_time;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  v28 = CDOTABaseAbility::GetCaster(this);
  *&vOrigin.x = __PAIR64__(LODWORD(v75), LODWORD(flLength));
  vOrigin.z = v74;
  CDOTAGamerules::SendProjectionAbilityMessage(
    g_pGameRules,
    v28,
    0,
    m_iAbilityID,
    0,
    0,
    COERCE_DOUBLE(__PAIR64__(LODWORD(v75), LODWORD(flLength))),
    v74,
    crack_time,
    flLength);
  v29 = CDOTABaseAbility::GetCaster(this);
  v30 = CBaseEntity::GetAbsOrigin(v29);
  x = v30->x;
  y = v30->y;
  info.pszEffectName = 0;
  z = v30->z;
  info.bHasFrontalCone = 1;
  info.bCheckStartPosition = 0;
  *&ModifierByName[1].m_szModifierAura.u.m_Id = x;
  *(&ModifierByName[1].m_szModifierAura.u.m_pAsString + 1) = y;
  *&ModifierByName[1].m_pCachedModifierAuraFactory = z;
  ModifierByName[1].m_iStringIndex = LODWORD(CursorPosition.z);
  v34 = vec3_origin.y;
  HIDWORD(ModifierByName[1].m_pCachedModifierAuraFactory) = LODWORD(CursorPosition.x);
  v35 = vec3_origin.x;
  v36 = vec3_origin.z;
  ModifierByName[1].m_iSerialNumber = LODWORD(CursorPosition.y);
  info.hSource.m_Index = -1;
  info.vSpawnOrigin.x = v35;
  info.vSpawnOrigin.y = v34;
  info.vSpawnOrigin.z = v36;
  info.vVelocity.x = v35;
  info.vVelocity.y = v34;
  info.vVelocity.z = v36;
  info.vAcceleration.x = v35;
  info.vAcceleration.y = v34;
  info.vAcceleration.z = v36;
  info.fDistance = 0.0;
  info.fStartRadius = 0.0;
  info.fEndRadius = 0.0;
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
  v37 = CDOTABaseAbility::GetCaster(this);
  v38 = CBaseEntity::GetAbsOrigin(v37);
  info.vSpawnOrigin.x = v38->x;
  info.vSpawnOrigin.y = v38->y;
  v39 = v38->z;
  info.fDistance = flCrackDistance;
  info.vSpawnOrigin.z = v39;
  speed = this->speed;
  info.vVelocity.y = vCastDir.y * speed;
  info.vVelocity.z = vCastDir.z * speed;
  info.vVelocity.x = speed * vCastDir.x;
  info.fStartRadius = this->crack_width;
  info.fEndRadius = info.fStartRadius;
  v41 = CDOTABaseAbility::GetCaster(this);
  if ( v41 != 0 && (m_pEntity = v41->m_pEntity) != 0 )
  {
    v43 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v44 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v44 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(info.hSource.m_Index) = v44 | info.hSource.m_Index & 0x8000;
    info.hSource.m_Index = (v43 << 15) | info.hSource.m_Index & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_elder_titan/elder_titan_earth_splitter.vpcf",
               2,
               0,
               0,
               0);
  v47 = CDOTABaseAbility::GetCaster(this);
  v48 = CBaseEntity::GetAbsOrigin(v47);
  v49 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v49, Particle, 0, *&v48->x, v48->z);
  v50 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlForward(v50, Particle, 0, *&vCastDir.x, vCastDir.z);
  x_low = LODWORD(vCastDir.x);
  y_low = LODWORD(vCastDir.y);
  v53 = this->crack_width + flCrackDistance;
  *x_low.m128i_i32 = vCastDir.x * v53;
  *y_low.m128i_i32 = vCastDir.y * v53;
  *v54.m128i_i32 = v53 * vCastDir.z;
  v55 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
  v56 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
  LODWORD(v48) = _mm_cvtsi128_si32(v54);
  v57 = CDOTABaseAbility::GetCaster(this);
  v58 = CBaseEntity::GetAbsOrigin(v57);
  v59 = *&v48 + v58->z;
  v60 = v55 + v58->x;
  *(&v82 + 1) = v56 + v58->y;
  v83 = v59;
  *&v82 = v60;
  v61 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v61, Particle, 1, v82, v83);
  *&v80 = this->crack_width;
  HIDWORD(v80) = LODWORD(v80);
  v81 = *&v80;
  v62 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v62, Particle, 2, v80, v81);
  v63 = this->speed;
  v81 = 1.0;
  HIDWORD(v80) = LODWORD(this->crack_time);
  *&v80 = v63;
  v64 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v64, Particle, 3, v80, v81);
  v65 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v65, Particle);
  v66 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_ElderTitan.EarthSplitter.Cast", v66);
  v67 = CDOTABaseAbility::GetCaster(this);
  v68 = CBaseEntity::GetAbsOrigin(v67);
  this->m_SoundEventGuid = DOTA_EmitSoundLocation(v68, "Hero_ElderTitan.EarthSplitter.Projectile", 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Elder_Titan_EarthSplitter::OnProjectileThink  (line 2512, @0x0000000002c348c0, libserver.so)  // inlines: AllocateData, CBroadcastRecipientFilter, CSosFieldData, CSosFieldDataFloat3, ClearData, GetDataPtr, Init, SetValue, ~CBroadcastRecipientFilter, ~CSosFieldData, ~CSosFieldDataFloat3
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CRecipientFilter::~CRecipientFilter, operator new [], __stack_chk_fail, CSosFieldData::ClearData, _Unwind_Resume
void __fastcall CDOTA_Ability_Elder_Titan_EarthSplitter::OnProjectileThink(
        CDOTA_Ability_Elder_Titan_EarthSplitter *const this,
        const Vector *const vLocation)
{
  __m128i z_low; // xmm0
  __m128i y_low; // xmm1
  int v6; // r14d
  int v7; // r15d
  SosFieldValueMem_t *v8; // rax
  CSosFieldData fieldData; // [rsp+10h] [rbp-190h] BYREF
  CBroadcastRecipientFilter filter; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v11; // [rsp+168h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
  fieldData.m_nAllocSize = 0;
  z_low = LODWORD(vLocation->z);
  fieldData.m_pData = 0;
  y_low = LODWORD(vLocation->y);
  v6 = _mm_cvtsi128_si32(z_low);
  *&vLocation = vLocation->x;
  v7 = _mm_cvtsi128_si32(y_low);
  fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 10);
  fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT_3;
  v8 = operator new[](0xCu);
  fieldData.m_pData = v8;
  fieldData.m_nAllocSize = 12;
  *v8 = vLocation;
  *(v8 + 1) = v7;
  *(v8 + 2) = v6;
  CSoundOpGameSystem::SetSoundEventParam(
    g_pSoundOpGameSystem,
    &filter,
    this->m_SoundEventGuid,
    "position",
    &fieldData,
    0,
    0);
  if ( fieldData.m_nAllocSize > 8 && fieldData.m_pData != 0 )
    operator delete[](fieldData.m_pData);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTA_Ability_Elder_Titan_EarthSplitter::GetAbilityDamageToTargetOverInterval  (line 2523, @0x0000000002c62b00, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Elder_Titan_EarthSplitter::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Elder_Titan_EarthSplitter *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int v7; // r13d
  int v8; // eax
  int v9; // esi
  int v10; // r12d
  int LevelSpecialValue; // eax

  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    v7 = (*(pTarget->_vptr_IHandleEntity + 156))(pTarget, fInterval);
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_pct", -1, 0);
    v9 = 1;
    v10 = LevelSpecialValue;
  }
  else
  {
    result = 0;
    if ( eDamageType != DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
      return result;
    v7 = (*(pTarget->_vptr_IHandleEntity + 156))(pTarget, fInterval);
    v8 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_pct", -1, 0);
    v9 = 2;
    v10 = v8;
  }
  return ((((v10 * v7) / 100.0) * 0.5) * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, v9)));
}


// CDOTA_Ability_Elder_Titan_EarthSplitter::GetSlowDuration  (line 2536, @0x0000000002c56080, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "slow_duration_scepter"
float __fastcall CDOTA_Ability_Elder_Titan_EarthSplitter::GetSlowDuration(
        CDOTA_Ability_Elder_Titan_EarthSplitter *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  bool HasScepter; // al
  const char *v4; // rsi

  Caster = CDOTABaseAbility::GetCaster(this);
  HasScepter = CDOTA_BaseNPC::HasScepter(Caster);
  v4 = "slow_duration_scepter";
  if ( !HasScepter )
    v4 = "slow_duration";
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, v4, -1, 1);
}


// CDOTA_Unit_Hero_Elder_Titan::Event_Killed  (line 2544, @0x0000000002c3e960, libserver.so)  // inlines: GetGameMode
// calls: CDOTA_BaseNPC_Hero::Event_Killed, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_Elder_Titan_AncestralSpirit::DestroySpirit
// strings: "elder_titan_ancestral_spirit"
void __fastcall CDOTA_Unit_Hero_Elder_Titan::Event_Killed(
        CDOTA_Unit_Hero_Elder_Titan *const this,
        const CTakeDamageInfo *const info)
{
  CDOTA_Ability_Elder_Titan_AncestralSpirit *AbilityByName; // rax

  if ( *&g_pGameRules[6].m_szQuestName[68] == 20
    && (AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "elder_titan_ancestral_spirit", 0)) != 0 )
  {
    CDOTA_Ability_Elder_Titan_AncestralSpirit::DestroySpirit(AbilityByName);
    CDOTA_BaseNPC_Hero::Event_Killed(this, info);
  }
  else
  {
    CDOTA_BaseNPC_Hero::Event_Killed(this, info);
  }
}


