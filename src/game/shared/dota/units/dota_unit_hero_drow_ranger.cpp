// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_drow_ranger.cpp:33
class CDOTA_Unit_Hero_DrowRanger : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_DrowRanger(CDOTA_Unit_Hero_DrowRanger &);
	CDOTA_Unit_Hero_DrowRanger(CDOTA_Unit_Hero_DrowRanger &);
	CDOTA_Unit_Hero_DrowRanger();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDOTA_Unit_Hero_DrowRanger();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_drow_ranger.cpp:40
class C_CDOTA_Unit_Hero_DrowRanger_MapInstall {
	C_CDOTA_Unit_Hero_DrowRanger_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_drow_ranger.cpp:51
class CDOTA_OrbDrowRanger_FrostArrow : public CDOTA_Orb {
public:

private:

	float duration;  // +0x18
	CDOTA_OrbDrowRanger_FrostArrow(CDOTA_OrbDrowRanger_FrostArrow &);
	CDOTA_OrbDrowRanger_FrostArrow(const CDOTA_OrbDrowRanger_FrostArrow &);
	CDOTA_OrbDrowRanger_FrostArrow(CDOTA_AttackRecord *, KeyValues *, CDOTA_BaseNPC *, CDOTABaseAbility *);
	virtual const char * GetProjectileName();
	virtual void OnOrbFire(const CModifierParams &);
	virtual void OnOrbImpact(const CModifierParams &);
	virtual ~CDOTA_OrbDrowRanger_FrostArrow();

	// vtable[3] GetProjectileName
	// vtable[6] OnOrbFire
	// vtable[8] OnOrbImpact
	// sizeof = 32
};

// src/game/shared/dota/units/dota_unit_hero_drow_ranger.cpp:112
class CDOTA_Modifier_DrowRanger_FrostArrows : public CDOTA_Buff {
public:

private:

	float frost_arrows_creep_duration;  // +0xba8
	CDOTA_Modifier_DrowRanger_FrostArrows();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual int GetOrbPriority(CDOTA_AttackRecord *);
	virtual CDOTA_Orb * GetCustomOrb(CDOTA_AttackRecord *);
	virtual bool IsCastAttack();
	virtual ~CDOTA_Modifier_DrowRanger_FrostArrows();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[50] GetOrbPriority
	// vtable[49] GetCustomOrb
	// vtable[82] IsCastAttack
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_drow_ranger.cpp:196
class CDOTA_Ability_DrowRanger_FrostArrows : public CDOTABaseAbility {
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
	CDOTA_Ability_DrowRanger_FrostArrows(CDOTA_Ability_DrowRanger_FrostArrows &);
	CDOTA_Ability_DrowRanger_FrostArrows(CDOTA_Ability_DrowRanger_FrostArrows &);
	CDOTA_Ability_DrowRanger_FrostArrows();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual bool ProcsMagicStick();
	virtual bool IsStealable();
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_DrowRanger_FrostArrows();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[239] ProcsMagicStick
	// vtable[305] IsStealable
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_drow_ranger.cpp:221
class CDOTA_Modifier_DrowRanger_FrostArrows_Slow : public CDOTA_Buff {
public:

private:

	int frost_arrows_movement_speed;  // +0xba8
	CDOTA_Modifier_DrowRanger_FrostArrows_Slow();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t OnHeroKilled(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_DrowRanger_FrostArrows_Slow();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_drow_ranger.cpp:293
class CDOTA_Ability_DrowRanger_Silence : public CDOTABaseAbility {
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
	CDOTA_Ability_DrowRanger_Silence(CDOTA_Ability_DrowRanger_Silence &);
	CDOTA_Ability_DrowRanger_Silence(CDOTA_Ability_DrowRanger_Silence &);
	CDOTA_Ability_DrowRanger_Silence();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_DrowRanger_Silence();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_drow_ranger.cpp:313
class C_CDOTA_Ability_DrowRanger_Silence_MapInstall {
	C_CDOTA_Ability_DrowRanger_Silence_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_drow_ranger.cpp:377
class CDOTA_Ability_DrowRanger_WaveOfSilence : public CDOTABaseAbility {
public:

private:

	int wave_width;  // +0x390
	float wave_speed;  // +0x394
	int m_iProjectile;  // +0x398
	float silence_duration;  // +0x39c
	float knockback_distance_max;  // +0x3a0
	int m_nHeroesHit;  // +0x3a4
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
	CDOTA_Ability_DrowRanger_WaveOfSilence(CDOTA_Ability_DrowRanger_WaveOfSilence &);
	CDOTA_Ability_DrowRanger_WaveOfSilence(CDOTA_Ability_DrowRanger_WaveOfSilence &);
	CDOTA_Ability_DrowRanger_WaveOfSilence();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnUpgrade();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual int GetConceptRecipientType();
	virtual bool HasSilence();
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual ~CDOTA_Ability_DrowRanger_WaveOfSilence();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[268] OnUpgrade
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[299] GetConceptRecipientType
	// vtable[325] HasSilence
	// vtable[226] GetCastRange
	// sizeof = 936
};

// src/game/shared/dota/units/dota_unit_hero_drow_ranger.cpp:415
class C_CDOTA_Ability_DrowRanger_WaveOfSilence_MapInstall {
	C_CDOTA_Ability_DrowRanger_WaveOfSilence_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_drow_ranger.cpp:536
class CDOTA_Modifier_DrowRanger_WaveOfSilence_Knockback : public CDOTA_Modifier_Knockback {
public:

	CDOTA_Modifier_DrowRanger_WaveOfSilence_Knockback();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsHidden();
	virtual bool IsStunDebuff();
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_DrowRanger_WaveOfSilence_Knockback();

	// vtable[5] CheckState
	// vtable[11] IsHidden
	// vtable[16] IsStunDebuff
	// vtable[60] OnDestroy
	// sizeof = 3072
};

// src/game/shared/dota/units/dota_unit_hero_drow_ranger.cpp:577
class CDOTA_Ability_DrowRanger_Trueshot : public CDOTABaseAbility {
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
	CDOTA_Ability_DrowRanger_Trueshot(CDOTA_Ability_DrowRanger_Trueshot &);
	CDOTA_Ability_DrowRanger_Trueshot(CDOTA_Ability_DrowRanger_Trueshot &);
	CDOTA_Ability_DrowRanger_Trueshot();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_DrowRanger_Trueshot();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_drow_ranger.cpp:601
class CDOTA_Modifier_DrowRanger_Trueshot : public CDOTA_Buff {
public:

	CDOTA_Modifier_DrowRanger_Trueshot();
	virtual bool IsHidden();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual bool GetAuraEntityReject(CDOTA_BaseNPC *);
	virtual ~CDOTA_Modifier_DrowRanger_Trueshot();

	// vtable[11] IsHidden
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[42] GetAuraEntityReject
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_drow_ranger.cpp:635
class CDOTA_Modifier_DrowRanger_Trueshot_Global : public CDOTA_Buff {
public:

	CDOTA_Modifier_DrowRanger_Trueshot_Global(CDOTA_Modifier_DrowRanger_Trueshot_Global &);
	CDOTA_Modifier_DrowRanger_Trueshot_Global(const CDOTA_Modifier_DrowRanger_Trueshot_Global &);
	CDOTA_Modifier_DrowRanger_Trueshot_Global();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual bool RemoveOnDeath();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual ~CDOTA_Modifier_DrowRanger_Trueshot_Global();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[54] RemoveOnDeath
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_drow_ranger.cpp:661
class CDOTA_Modifier_DrowRanger_TrueshotAura : public CDOTA_Buff {
public:

private:

	float trueshot_ranged_damage;  // +0xba8
	CDOTA_Modifier_DrowRanger_TrueshotAura();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual ~CDOTA_Modifier_DrowRanger_TrueshotAura();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierPreAttack_BonusDamage
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_drow_ranger.cpp:729
class CDOTA_Ability_DrowRanger_Marksmanship : public CDOTABaseAbility {
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
	CDOTA_Ability_DrowRanger_Marksmanship(CDOTA_Ability_DrowRanger_Marksmanship &);
	CDOTA_Ability_DrowRanger_Marksmanship(CDOTA_Ability_DrowRanger_Marksmanship &);
	CDOTA_Ability_DrowRanger_Marksmanship();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual bool OnProjectileHit_ExtraData(EHANDLE, const Vector &, KeyValues *);
	virtual ~CDOTA_Ability_DrowRanger_Marksmanship();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[290] OnProjectileHit_ExtraData
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_drow_ranger.cpp:773
class CDOTA_Modifier_DrowRanger_Marksmanship : public CDOTA_Buff {
public:

private:

	int marksmanship_agility_bonus;  // +0xba8
	int bonus_factor;  // +0xbac
	int radius;  // +0xbb0
	int m_nFxIndex;  // +0xbb4
	CDOTA_Modifier_DrowRanger_Marksmanship();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnAttack(const CModifierParams &);
	virtual ModifierVariant_t OnAttackLanded(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	virtual ~CDOTA_Modifier_DrowRanger_Marksmanship();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[89] OnAttack
	// vtable[90] OnAttackLanded
	// sizeof = 3024
};

// src/game/shared/dota/units/dota_unit_hero_drow_ranger.cpp:993
class CDOTA_Modifier_DrowRanger_Marksmanship_Reduction : public CDOTA_Buff {
public:

private:

	int damage_reduction_scepter;  // +0xba8

	CDOTA_Modifier_DrowRanger_Marksmanship_Reduction();
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierIncomingDamage_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_DrowRanger_Marksmanship_Reduction();

	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierIncomingDamage_Percentage
	// sizeof = 3104
};

// src/game/shared/dota/units/dota_unit_hero_drow_ranger.cpp:1066
class CDOTA_Ability_Holdout_Multishot : public CDOTABaseAbility {
public:

private:

	int m_iArrowProjectile;  // +0x39c
	int m_nFXIndex;  // +0x3a0
	int arrow_width;  // +0x3a4
	float arrow_speed;  // +0x3a8
	float arrow_range;  // +0x3ac
	int arrow_spread;  // +0x3b0
	int arrow_count;  // +0x3b4
	bool m_bShouldReduceDamage;  // +0x3b8
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
	CDOTA_Ability_Holdout_Multishot(CDOTA_Ability_Holdout_Multishot &);
	CDOTA_Ability_Holdout_Multishot(CDOTA_Ability_Holdout_Multishot &);
	CDOTA_Ability_Holdout_Multishot();
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
	void DoMultishot(EHANDLE, Vector);
	virtual bool OnProjectileHit_ExtraData(EHANDLE, const Vector &, KeyValues *);
	virtual float GetCastPoint();
	virtual const char * GetIntrinsicModifierName();
	virtual bool ProcsMagicStick();
	virtual bool IsStealable();
	bool ShouldReduceDamage();
	void SetShouldReduceDamage(bool);
	virtual ~CDOTA_Ability_Holdout_Multishot();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[264] OnAbilityPhaseStart
	// vtable[266] OnSpellStart
	// vtable[290] OnProjectileHit_ExtraData
	// vtable[231] GetCastPoint
	// vtable[280] GetIntrinsicModifierName
	// vtable[239] ProcsMagicStick
	// vtable[305] IsStealable
	// sizeof = 960
};

// src/game/shared/dota/units/dota_unit_hero_drow_ranger.cpp:1103
class C_CDOTA_Ability_Holdout_Multishot_MapInstall {
	C_CDOTA_Ability_Holdout_Multishot_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_drow_ranger.cpp:1298
class CDOTA_OrbHoldout_Multishot : public CDOTA_Orb {
public:

	CDOTA_OrbHoldout_Multishot(CDOTA_OrbHoldout_Multishot &);
	CDOTA_OrbHoldout_Multishot(const CDOTA_OrbHoldout_Multishot &);
	CDOTA_OrbHoldout_Multishot(CDOTA_AttackRecord *, KeyValues *, CDOTA_BaseNPC *, CDOTABaseAbility *);
	virtual void OnOrbFire(const CModifierParams &);
	virtual ~CDOTA_OrbHoldout_Multishot();

	// vtable[6] OnOrbFire
	// sizeof = 24
};

// src/game/shared/dota/units/dota_unit_hero_drow_ranger.cpp:1340
class CDOTA_Modifier_Holdout_Multishot : public CDOTA_Buff {
public:

private:

	int damage_reduction_pct;  // +0xba8

	CDOTA_Modifier_Holdout_Multishot();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierDamageOutgoing_Percentage(const CModifierParams &);
	virtual int GetOrbPriority(CDOTA_AttackRecord *);
	virtual CDOTA_Orb * GetCustomOrb(CDOTA_AttackRecord *);
	virtual bool IsCastAttack();
	virtual ~CDOTA_Modifier_Holdout_Multishot();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[50] GetOrbPriority
	// vtable[49] GetCustomOrb
	// vtable[82] IsCastAttack
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_DrowRanger::~CDOTA_Unit_Hero_DrowRanger  (line 33, @0x0000000002a186b0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_DrowRanger::~CDOTA_Unit_Hero_DrowRanger(CDOTA_Unit_Hero_DrowRanger *const this)
{
  this->_vptr_IHandleEntity = &off_4330250;
  this->_vptr_INextBotEventResponder = &off_4331230;
  this->_vptr_CObstructionObject = &off_4331560;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_DrowRanger::~CDOTA_Unit_Hero_DrowRanger  (line 33, @0x0000000002a186f0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_DrowRanger
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_DrowRanger::~CDOTA_Unit_Hero_DrowRanger(CDOTA_Unit_Hero_DrowRanger *const this)
{
  this->_vptr_IHandleEntity = &off_4330250;
  this->_vptr_INextBotEventResponder = &off_4331230;
  this->_vptr_CObstructionObject = &off_4331560;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_DrowRanger::Schema_DynamicBinding  (line 35, @0x0000000002a084f0, libserver.so)
// globals: CDOTA_Unit_Hero_DrowRanger::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_DrowRanger::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_DrowRanger *const this)
{
  return CDOTA_Unit_Hero_DrowRanger::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 35, @0x0000000002a08520, libserver.so)
// globals: CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass::DestructInstance  (line 35, @0x0000000002a08530, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_DrowRanger>
void __fastcall CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass::FreeInstance  (line 35, @0x0000000002a08550, libserver.so)
void __fastcall CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass::CanAllocate  (line 35, @0x0000000002a08570, libserver.so)
bool __fastcall CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 35, @0x0000000002a08580, libserver.so)
// globals: CDOTA_Unit_Hero_DrowRanger::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_DrowRanger::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass::AllocateInstance  (line 35, @0x0000000002a0f340, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass::ConstructInstance  (line 35, @0x0000000002a133f0, libserver.so)  // inlines: CDOTA_Unit_Hero_DrowRanger, Construct<CDOTA_Unit_Hero_DrowRanger>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_4330250;
    *(p + 236) = &off_4331230;
    *(p + 257) = &off_4331560;
  }
  return p;
}


// CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 35, @0x0000000002a20690, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 35, @0x0000000002a20850, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_DrowRanger::GetEntityClassInternal  (line 35, @0x0000000002a3ba50, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "npc_dota_hero_drow_ranger", "CDOTA_Unit_Hero_DrowRanger"
// globals: `guard variable for'CDOTA_Unit_Hero_DrowRanger::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DrowRangerClass, CDOTA_Unit_Hero_DrowRanger::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DrowRangerClass, __dso_handle, CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_DrowRanger::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DrowRangerClassInfo, CDOTA_Unit_Hero_DrowRanger::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DrowRangerClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_DrowRanger::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_DrowRanger::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DrowRangerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_DrowRanger::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DrowRangerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_DrowRanger::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DrowRangerClass);
    CDOTA_Unit_Hero_DrowRanger::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DrowRangerClass._vptr_CEntityClass = off_43301D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_DrowRanger::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DrowRangerClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_DrowRanger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_DrowRanger::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DrowRangerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_DrowRangerClass != 0 )
    return &CDOTA_Unit_Hero_DrowRanger::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DrowRangerClass;
  if ( `guard variable for'CDOTA_Unit_Hero_DrowRanger::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DrowRangerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_DrowRanger::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DrowRangerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_DrowRanger::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DrowRangerClassInfo,
      "CDOTA_Unit_Hero_DrowRanger",
      "npc_dota_hero_drow_ranger",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_DrowRanger::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DrowRangerClassInfo);
  }
  CDOTA_Unit_Hero_DrowRanger::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DrowRangerClass.m_pClassInfo = &CDOTA_Unit_Hero_DrowRanger::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DrowRangerClassInfo;
  CDOTA_Unit_Hero_DrowRanger::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DrowRangerClass.m_pBaseClassInfo = CDOTA_Unit_Hero_DrowRanger::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DrowRangerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_DrowRangerClass = &CDOTA_Unit_Hero_DrowRanger::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DrowRangerClass;
  CDOTA_Unit_Hero_DrowRanger::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DrowRangerClassInfo.m_pClass = &CDOTA_Unit_Hero_DrowRanger::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DrowRangerClass;
  CDOTA_Unit_Hero_DrowRanger::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DrowRangerClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_DrowRangerClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_DrowRanger::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DrowRangerClass;
}


// CDOTA_Unit_Hero_DrowRanger::YouForgotToImplementOrDeclareServerClass  (line 40, @0x00000000029b4830, libserver.so)
int __fastcall CDOTA_Unit_Hero_DrowRanger::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_DrowRanger *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_DrowRanger::GetServerClass  (line 40, @0x00000000029c9c70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_DrowRanger::GetServerClass(CDOTA_Unit_Hero_DrowRanger *const this)
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


// CDOTA_OrbDrowRanger_FrostArrow::~CDOTA_OrbDrowRanger_FrostArrow  (line 51, @0x0000000002a0c620, libserver.so)  // inlines: ~CDOTA_Orb
void __fastcall CDOTA_OrbDrowRanger_FrostArrow::~CDOTA_OrbDrowRanger_FrostArrow(
        CDOTA_OrbDrowRanger_FrostArrow *const this)
{
  this->_vptr_CDOTA_Orb = &off_4115E90;
}


// CDOTA_OrbDrowRanger_FrostArrow::~CDOTA_OrbDrowRanger_FrostArrow  (line 51, @0x0000000002a0eac0, libserver.so)  // inlines: ~CDOTA_Orb, ~CDOTA_OrbDrowRanger_FrostArrow
// calls: operator delete
void __fastcall CDOTA_OrbDrowRanger_FrostArrow::~CDOTA_OrbDrowRanger_FrostArrow(
        CDOTA_OrbDrowRanger_FrostArrow *const this)
{
  this->_vptr_CDOTA_Orb = &off_4115E90;
  operator delete(this);
}


// CDOTA_OrbDrowRanger_FrostArrow::GetProjectileName  (line 61, @0x0000000002a08590, libserver.so)
// strings: "particles/units/heroes/hero_drow/drow_frost_arrow.vpcf"
const char *__fastcall CDOTA_OrbDrowRanger_FrostArrow::GetProjectileName(CDOTA_OrbDrowRanger_FrostArrow *const this)
{
  return "particles/units/heroes/hero_drow/drow_frost_arrow.vpcf";
}


// CDOTA_OrbDrowRanger_FrostArrow::OnOrbFire  (line 63, @0x0000000002a21480, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::UnitEmitSound, CDOTA_Orb::GetAbility, CDOTA_BaseNPC::SpendMana, CDOTA_AttackRecord::DeleteOrb
// strings: "Hero_DrowRanger.FrostArrows"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_OrbDrowRanger_FrostArrow::OnOrbFire(
        CDOTA_OrbDrowRanger_FrostArrow *const this,
        const CModifierParams *const params)
{
  __int64 v2; // rcx
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // eax
  CEntityInstance *v10; // r12
  CEntityIdentity *v11; // rdx
  uint32 v12; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTABaseAbility *Ability; // rbx
  int v16; // eax
  CEntityInstance *v17; // rax

  v2 = CEntityHandle::gm_pEntityList;
  m_Index = this->m_hCaster.m_Index;
  if ( m_Index + 2 <= 1
    || (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hCaster.m_Index) >> 9) & 0x3F]) == 0
    || (v7 = &v6[this->m_hCaster.m_Index & 0x1FF]) == 0
    || m_Index != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v9 = this->m_hAbility.m_Index;
  v10 = 0;
  v11 = (v9 + 2);
  if ( v11 > 1 )
  {
    v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAbility.m_Index) >> 9) & 0x3F];
    if ( v11 != 0 )
    {
      v2 = 120LL * (this->m_hAbility.m_Index & 0x1FF);
      v11 = (v11 + v2);
      if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
        v10 = v11->m_pInstance;
    }
  }
  if ( (*(v10->_vptr_IHandleEntity + 274))(v10, 0xFFFFFFFFLL, v11, v2) > m_pInstance->m_flMana.m_Value
    || (v12 = params->htarget.m_Index) + 2 > 1
    && (v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) != 0
    && (v14 = &v13[params->htarget.m_Index & 0x1FF]) != 0
    && v12 == v14->m_EHandle.m_Index
    && (v17 = v14->m_pInstance, v14->m_pInstance != 0)
    && BYTE3(v17[7]._vptr_IHandleEntity) != 0
    && (BYTE1(v17[58]._vptr_IHandleEntity) & 2) != 0 )
  {
    CDOTA_AttackRecord::DeleteOrb(this->m_pRecord);
  }
  else
  {
    CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_DrowRanger.FrostArrows", 0.0, 0, 0);
    Ability = CDOTA_Orb::GetAbility(this);
    v16 = (*(v10->_vptr_IHandleEntity + 274))(v10, 0xFFFFFFFFLL);
    CDOTA_BaseNPC::SpendMana(m_pInstance, v16, Ability, 0);
  }
}


// CDOTA_OrbDrowRanger_FrostArrow::OnOrbImpact  (line 89, @0x0000000002a21640, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, TargetNPC, ToDOTAAbility, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, _Unwind_Resume, __dynamic_cast
// strings: "modifier_drow_ranger_frost_arrows_slow"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_OrbDrowRanger_FrostArrow::OnOrbImpact(
        CDOTA_OrbDrowRanger_FrostArrow *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  unsigned __int64 m_Value; // rax
  float v8; // xmm1_4
  uint32 v9; // eax
  CDOTABaseAbility *v10; // rdx
  CConcreteEntityList *v11; // r14
  CEntityIdentity *v12; // rcx
  CEntityIdentity *v13; // rcx
  uint32 v14; // eax
  CBaseEntity *v15; // rsi
  CEntityIdentity *v16; // rcx
  CEntityIdentity *v17; // rcx
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-28h]

  v19 = __readfsqword(0x28u);
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
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          m_Value = m_pInstance->m_nUnitState64.m_Value;
          if ( (m_Value & 0x200) == 0 && !m_pInstance->m_bIsWaitingToSpawn.m_Value && (m_Value & 0x100) == 0 )
          {
            KeyValues::KeyValues(&kv, "modifier_drow_ranger_frost_arrows_slow");
            KeyValues::SetFloat(&kv, "duration", v8);
            v9 = this->m_hAbility.m_Index;
            v10 = 0;
            v11 = CEntityHandle::gm_pEntityList;
            if ( v9 + 2 > 1 )
            {
              v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAbility.m_Index) >> 9) & 0x3F];
              if ( v12 != 0 )
              {
                v13 = &v12[this->m_hAbility.m_Index & 0x1FF];
                if ( v13 != 0 && v9 == v13->m_EHandle.m_Index && v13->m_pInstance != 0 )
                  v10 = __dynamic_cast(v13->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
              }
            }
            v14 = this->m_hCaster.m_Index;
            v15 = 0;
            if ( v14 + 2 > 1 )
            {
              v16 = v11->m_pIdentityChunks[(LOWORD(this->m_hCaster.m_Index) >> 9) & 0x3F];
              if ( v16 != 0 )
              {
                v17 = &v16[this->m_hCaster.m_Index & 0x1FF];
                if ( v17 != 0 && v14 == v17->m_EHandle.m_Index )
                  v15 = v17->m_pInstance;
              }
            }
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, v15, v10, "modifier_drow_ranger_frost_arrows_slow", &kv, 0);
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
  }
}


// CDOTA_Modifier_DrowRanger_FrostArrows::~CDOTA_Modifier_DrowRanger_FrostArrows  (line 112, @0x0000000002a12560, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_DrowRanger_FrostArrows::~CDOTA_Modifier_DrowRanger_FrostArrows(
        CDOTA_Modifier_DrowRanger_FrostArrows *const this)
{
  this->_vptr_CDOTA_Buff = &off_4331650;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_DrowRanger_FrostArrows::~CDOTA_Modifier_DrowRanger_FrostArrows  (line 112, @0x0000000002a12580, libserver.so)  // inlines: ~CDOTA_Modifier_DrowRanger_FrostArrows
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_DrowRanger_FrostArrows::~CDOTA_Modifier_DrowRanger_FrostArrows(
        CDOTA_Modifier_DrowRanger_FrostArrows *const this)
{
  this->_vptr_CDOTA_Buff = &off_4331650;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DrowRanger_FrostArrows::IsHidden  (line 117, @0x0000000002a085a0, libserver.so)
bool __fastcall CDOTA_Modifier_DrowRanger_FrostArrows::IsHidden(CDOTA_Modifier_DrowRanger_FrostArrows *const this)
{
  return 1;
}


// CDOTA_Modifier_DrowRanger_FrostArrows::GetOrbPriority  (line 120, @0x0000000002a20e50, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Modifier_DrowRanger_FrostArrows::GetOrbPriority(
        CDOTA_Modifier_DrowRanger_FrostArrows *const this,
        CDOTA_AttackRecord *pRecord)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r12
  CDOTABaseAbility *Ability; // rax
  int v9; // r13d
  CDOTABaseAbility *v10; // rax
  char m_CScriptComponent_high; // r12

  m_Index = pRecord->m_hTarget.m_Index;
  if ( m_Index + 2 > 1
    && (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pRecord->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v5 = &v4[pRecord->m_hTarget.m_Index & 0x1FF]) != 0
    && m_Index == v5->m_EHandle.m_Index
    && (m_pInstance = v5->m_pInstance, v5->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
    && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) == 0
    && (pRecord->m_bUseCastAttackOrb || CDOTA_Buff::GetAbility(this)->m_bAutoCastState.m_Value)
    && (Ability = CDOTA_Buff::GetAbility(this),
        (v9 = (*(Ability->_vptr_IHandleEntity + 274))(Ability, 0xFFFFFFFFLL)) <= CDOTA_Buff::GetParent(this)->m_flMana.m_Value)
    && (v10 = CDOTA_Buff::GetAbility(this), (*(v10->_vptr_IHandleEntity + 256))(v10, m_pInstance) == 0)
    && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0
    && (m_CScriptComponent_high = HIBYTE(m_pInstance[7].m_CScriptComponent)) != CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value
    && (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 8) == 0 )
  {
    return 3;
  }
  else
  {
    return 0;
  }
}


// CDOTA_Modifier_DrowRanger_FrostArrows::IsCastAttack  (line 151, @0x0000000002a085b0, libserver.so)
bool __fastcall CDOTA_Modifier_DrowRanger_FrostArrows::IsCastAttack(CDOTA_Modifier_DrowRanger_FrostArrows *const this)
{
  return 1;
}


// CDOTA_Modifier_DrowRanger_FrostArrows::GetCustomOrb  (line 161, @0x00000000029c6240, libserver.so)  // inlines: CDOTA_OrbDrowRanger_FrostArrow, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsConsideredHero, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, ~CDOTA_Orb
// calls: __stack_chk_fail, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetDuration, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetCaster, operator new, CDOTA_Orb::CDOTA_Orb, KeyValues::GetFloat, KeyValues::~KeyValues, _Unwind_Resume, operator delete
// strings: "CDOTA_OrbDrowRanger_FrostArrow"
// globals: CEntityHandle::gm_pEntityList
CDOTA_Orb *__fastcall CDOTA_Modifier_DrowRanger_FrostArrows::GetCustomOrb(
        CDOTA_Modifier_DrowRanger_FrostArrows *const this,
        CDOTA_AttackRecord *pRecord)
{
  uint32 m_Index; // edx
  CEntityIdentity *v4; // rax
  __int64 v5; // rcx
  bool v6; // zf
  CEntityIdentity *v7; // rcx
  CDOTA_Orb *result; // rax
  CDOTABaseAbility *Ability; // rax
  float v11; // xmm1_4
  CDOTA_BaseNPC *Caster; // r15
  CDOTABaseAbility *v13; // r14
  CDOTA_Orb *v14; // r12
  float v15; // xmm1_4
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  m_Index = pRecord->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1 )
    return 0;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pRecord->m_hTarget.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    return 0;
  v5 = pRecord->m_hTarget.m_Index & 0x1FF;
  v6 = &v4[v5] == 0;
  v7 = &v4[v5];
  result = 0;
  if ( !v6
    && m_Index == v7->m_EHandle.m_Index
    && v7->m_pInstance != 0
    && BYTE3(v7->m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    CDOTABaseAbility::GetDuration(Ability);
    KeyValues::KeyValues(&kv, "CDOTA_OrbDrowRanger_FrostArrow");
    KeyValues::SetFloat(&kv, "duration", v11);
    Caster = CDOTA_Buff::GetCaster(this);
    v13 = CDOTA_Buff::GetAbility(this);
    v14 = operator new(0x20u);
    CDOTA_Orb::CDOTA_Orb(v14, pRecord, &kv, Caster, v13);
    v14->_vptr_CDOTA_Orb = &off_43315B0;
    *&v14[1]._vptr_CDOTA_Orb = KeyValues::GetFloat(&kv, "duration", v15);
    KeyValues::~KeyValues(&kv);
    return v14;
  }
  return result;
}


// CDOTA_Modifier_DrowRanger_FrostArrows::OnCreated  (line 188, @0x00000000029e0100, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "frost_arrows_creep_duration"
void __fastcall CDOTA_Modifier_DrowRanger_FrostArrows::OnCreated(
        CDOTA_Modifier_DrowRanger_FrostArrows *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->frost_arrows_creep_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                          Ability,
                                          "frost_arrows_creep_duration",
                                          -1,
                                          0);
  else
    this->frost_arrows_creep_duration = 0.0;
}


// CDOTA_Ability_DrowRanger_FrostArrows::~CDOTA_Ability_DrowRanger_FrostArrows  (line 196, @0x0000000002a16ca0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_DrowRanger_FrostArrows::~CDOTA_Ability_DrowRanger_FrostArrows(
        CDOTA_Ability_DrowRanger_FrostArrows *const this)
{
  this->_vptr_IHandleEntity = &off_43319B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_DrowRanger_FrostArrows::~CDOTA_Ability_DrowRanger_FrostArrows  (line 196, @0x0000000002a16cc0, libserver.so)  // inlines: ~CDOTA_Ability_DrowRanger_FrostArrows
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_DrowRanger_FrostArrows::~CDOTA_Ability_DrowRanger_FrostArrows(
        CDOTA_Ability_DrowRanger_FrostArrows *const this)
{
  this->_vptr_IHandleEntity = &off_43319B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_DrowRanger_FrostArrows::Schema_DynamicBinding  (line 198, @0x0000000002a085c0, libserver.so)
// globals: CDOTA_Ability_DrowRanger_FrostArrows::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DrowRanger_FrostArrows::Schema_DynamicBinding(
        const CDOTA_Ability_DrowRanger_FrostArrows *const this)
{
  return CDOTA_Ability_DrowRanger_FrostArrows::s_pSchemaBinding;
}


// CDOTA_Ability_DrowRanger_FrostArrows::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 198, @0x0000000002a085d0, libserver.so)
// globals: CDOTA_Ability_DrowRanger_FrostArrows::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DrowRanger_FrostArrows::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_DrowRanger_FrostArrows::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DrowRanger_FrostArrows::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_DrowRanger_FrostArrows::CEntityInstanceEntityClass::DestructInstance  (line 198, @0x0000000002a085e0, libserver.so)  // inlines: Destruct<CDOTA_Ability_DrowRanger_FrostArrows>
void __fastcall CDOTA_Ability_DrowRanger_FrostArrows::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_DrowRanger_FrostArrows::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_DrowRanger_FrostArrows::CEntityInstanceEntityClass::FreeInstance  (line 198, @0x0000000002a08600, libserver.so)
void __fastcall CDOTA_Ability_DrowRanger_FrostArrows::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_DrowRanger_FrostArrows::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_DrowRanger_FrostArrows::CEntityInstanceEntityClass::CanAllocate  (line 198, @0x0000000002a08620, libserver.so)
bool __fastcall CDOTA_Ability_DrowRanger_FrostArrows::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_DrowRanger_FrostArrows::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_DrowRanger_FrostArrows::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 198, @0x0000000002a08630, libserver.so)
// globals: CDOTA_Ability_DrowRanger_FrostArrows::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_DrowRanger_FrostArrows::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_DrowRanger_FrostArrows::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DrowRanger_FrostArrows::s_pSchemaBinding;
}


// CDOTA_Ability_DrowRanger_FrostArrows::CEntityInstanceEntityClass::AllocateInstance  (line 198, @0x0000000002a0f380, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_DrowRanger_FrostArrows::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_DrowRanger_FrostArrows::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_DrowRanger_FrostArrows::CEntityInstanceEntityClass::ConstructInstance  (line 198, @0x0000000002a13de0, libserver.so)  // inlines: CDOTA_Ability_DrowRanger_FrostArrows, Construct<CDOTA_Ability_DrowRanger_FrostArrows>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_DrowRanger_FrostArrows::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_DrowRanger_FrostArrows::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43319B0;
  }
  return p;
}


// CDOTA_Ability_DrowRanger_FrostArrows::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 198, @0x0000000002a1f040, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_DrowRanger_FrostArrows::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DrowRanger_FrostArrows::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_DrowRanger_FrostArrows::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 198, @0x0000000002a1f060, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_DrowRanger_FrostArrows::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DrowRanger_FrostArrows::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal  (line 198, @0x0000000002a3dd40, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "drow_ranger_frost_arrows", "CDOTA_Ability_DrowRanger_FrostArrows"
// globals: `guard variable for'CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass, CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_DrowRanger_FrostArrows::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClassInfo, CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClassInfo
CEntityClass *__cdecl CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass) != 0 )
  {
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_pClassInfo = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_flags = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_pInputs = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_nInputCount = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_pOutputs = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_nOutputCount = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_pGameClass = 0;
    CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass._vptr_CEntityClass = off_4331930;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass);
    __cxa_atexit(
      CDOTA_Ability_DrowRanger_FrostArrows::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_DrowRanger_FrostArrowsClass != 0 )
    return &CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass;
  if ( `guard variable for'CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClassInfo,
      "CDOTA_Ability_DrowRanger_FrostArrows",
      "drow_ranger_frost_arrows",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClassInfo);
  }
  CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_pClassInfo = &CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClassInfo;
  CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_pBaseClassInfo = CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_DrowRanger_FrostArrowsClass = &CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass;
  CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClassInfo.m_pClass = &CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass;
  CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_DrowRanger_FrostArrowsClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_DrowRanger_FrostArrows::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_FrostArrowsClass;
}


// CDOTA_Ability_DrowRanger_FrostArrows::GetIntrinsicModifierName  (line 201, @0x0000000002a08640, libserver.so)
// strings: "modifier_drow_ranger_frost_arrows"
const char *__fastcall CDOTA_Ability_DrowRanger_FrostArrows::GetIntrinsicModifierName(
        CDOTA_Ability_DrowRanger_FrostArrows *const this)
{
  return "modifier_drow_ranger_frost_arrows";
}


// CDOTA_Ability_DrowRanger_FrostArrows::ProcsMagicStick  (line 203, @0x0000000002a08650, libserver.so)
bool __fastcall CDOTA_Ability_DrowRanger_FrostArrows::ProcsMagicStick(CDOTA_Ability_DrowRanger_FrostArrows *const this)
{
  return 0;
}


// CDOTA_Ability_DrowRanger_FrostArrows::IsStealable  (line 204, @0x0000000002a08660, libserver.so)
bool __fastcall CDOTA_Ability_DrowRanger_FrostArrows::IsStealable(CDOTA_Ability_DrowRanger_FrostArrows *const this)
{
  return 0;
}


// CDOTA_Ability_DrowRanger_FrostArrows::GetSlowDuration  (line 213, @0x00000000029b7030, libserver.so)
// calls: CDOTABaseAbility::GetDuration
float __fastcall CDOTA_Ability_DrowRanger_FrostArrows::GetSlowDuration(
        CDOTA_Ability_DrowRanger_FrostArrows *const this)
{
  return CDOTABaseAbility::GetDuration(this);
}


// CDOTA_Modifier_DrowRanger_FrostArrows_Slow::~CDOTA_Modifier_DrowRanger_FrostArrows_Slow  (line 221, @0x0000000002a12510, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_DrowRanger_FrostArrows_Slow::~CDOTA_Modifier_DrowRanger_FrostArrows_Slow(
        CDOTA_Modifier_DrowRanger_FrostArrows_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_4332470;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_DrowRanger_FrostArrows_Slow::~CDOTA_Modifier_DrowRanger_FrostArrows_Slow  (line 221, @0x0000000002a12530, libserver.so)  // inlines: ~CDOTA_Modifier_DrowRanger_FrostArrows_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_DrowRanger_FrostArrows_Slow::~CDOTA_Modifier_DrowRanger_FrostArrows_Slow(
        CDOTA_Modifier_DrowRanger_FrostArrows_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_4332470;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DrowRanger_FrostArrows_Slow::IsDebuff  (line 226, @0x0000000002a08670, libserver.so)
bool __fastcall CDOTA_Modifier_DrowRanger_FrostArrows_Slow::IsDebuff(
        CDOTA_Modifier_DrowRanger_FrostArrows_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_DrowRanger_FrostArrows_Slow::GetEffectName  (line 237, @0x0000000002a08680, libserver.so)
// strings: "particles/generic_gameplay/generic_slowed_cold.vpcf"
const char *__fastcall CDOTA_Modifier_DrowRanger_FrostArrows_Slow::GetEffectName(
        CDOTA_Modifier_DrowRanger_FrostArrows_Slow *const this)
{
  return "particles/generic_gameplay/generic_slowed_cold.vpcf";
}


// CDOTA_Modifier_DrowRanger_FrostArrows_Slow::GetStatusEffectName  (line 238, @0x0000000002a08690, libserver.so)
// strings: "particles/status_fx/status_effect_frost.vpcf"
const char *__fastcall CDOTA_Modifier_DrowRanger_FrostArrows_Slow::GetStatusEffectName(
        CDOTA_Modifier_DrowRanger_FrostArrows_Slow *const this)
{
  return "particles/status_fx/status_effect_frost.vpcf";
}


// CDOTA_Modifier_DrowRanger_FrostArrows_Slow::StatusEffectPriority  (line 239, @0x0000000002a086a0, libserver.so)
int __fastcall CDOTA_Modifier_DrowRanger_FrostArrows_Slow::StatusEffectPriority(
        CDOTA_Modifier_DrowRanger_FrostArrows_Slow *const this)
{
  return 10;
}


// CDOTA_Modifier_DrowRanger_FrostArrows_Slow::OnCreated  (line 251, @0x00000000029f7100, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "frost_arrows_movement_speed"
void __fastcall CDOTA_Modifier_DrowRanger_FrostArrows_Slow::OnCreated(
        CDOTA_Modifier_DrowRanger_FrostArrows_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->frost_arrows_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                          Ability,
                                          "frost_arrows_movement_speed",
                                          -1,
                                          0);
  else
    this->frost_arrows_movement_speed = 0;
}


// CDOTA_Modifier_DrowRanger_FrostArrows_Slow::DeclareFunctions  (line 258, @0x00000000029b4840, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_DrowRanger_FrostArrows_Slow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_DrowRanger_FrostArrows_Slow::OnHeroKilled(CModifierParams const&)
void __fastcall CDOTA_Modifier_DrowRanger_FrostArrows_Slow::DeclareFunctions(
        CDOTA_Modifier_DrowRanger_FrostArrows_Slow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_DrowRanger_FrostArrows_Slow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[147].__delta = 0;
  this->m_Functions[147].__pfn = CDOTA_Modifier_DrowRanger_FrostArrows_Slow::OnHeroKilled;
}


// CDOTA_Modifier_DrowRanger_FrostArrows_Slow::GetModifierMoveSpeedBonus_Percentage  (line 269, @0x00000000029b4880, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DrowRanger_FrostArrows_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_DrowRanger_FrostArrows_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->frost_arrows_movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_DrowRanger_FrostArrows_Slow::OnHeroKilled  (line 277, @0x00000000029ca200, libserver.so)  // inlines: Attacker, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Target, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetCaster, EconEntity_OnOwnerKillEaterEvent
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
ModifierVariant_t __fastcall CDOTA_Modifier_DrowRanger_FrostArrows_Slow::OnHeroKilled(
        CDOTA_Modifier_DrowRanger_FrostArrows_Slow *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *v9; // r13
  uint32 v10; // ecx
  CEntityIdentity *v11; // rax
  CEntityIdentity *v12; // rax
  CEntityInstance *v13; // rsi
  uint32 v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityInstance *v17; // rdi

  m_pInstance = 0;
  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[params->htarget.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance )
  {
    v9 = CEntityHandle::operator CEntityInstance *(&params->hattacker);
    if ( CDOTA_Buff::GetCaster(this) == v9 )
    {
      v10 = params->htarget.m_Index;
      if ( v10 + 2 <= 1
        || (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
        || (v12 = &v11[params->htarget.m_Index & 0x1FF]) == 0
        || v10 != v12->m_EHandle.m_Index
        || (v13 = v12->m_pInstance, v12->m_pInstance == 0)
        || BYTE3(v13[7]._vptr_IHandleEntity) == 0
        || (v13[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
      {
        v13 = 0;
      }
      v14 = params->hattacker.m_Index;
      if ( v14 + 2 <= 1
        || (v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
        || (v16 = &v15[params->hattacker.m_Index & 0x1FF]) == 0
        || v14 != v16->m_EHandle.m_Index
        || (v17 = v16->m_pInstance, v16->m_pInstance == 0)
        || BYTE3(v17[7]._vptr_IHandleEntity) == 0
        || (v17[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
      {
        v17 = 0;
      }
      EconEntity_OnOwnerKillEaterEvent(
        v17,
        v13,
        kill_eater_event_t::kKillEaterEventType_DrowRanger_FrostArrowKills,
        1,
        INVALID_ITEM_DEF_INDEX);
    }
  }
  return 1uLL;
}


// CDOTA_Ability_DrowRanger_Silence::~CDOTA_Ability_DrowRanger_Silence  (line 293, @0x0000000002a16cf0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_DrowRanger_Silence::~CDOTA_Ability_DrowRanger_Silence(
        CDOTA_Ability_DrowRanger_Silence *const this)
{
  this->_vptr_IHandleEntity = &off_43327D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_DrowRanger_Silence::~CDOTA_Ability_DrowRanger_Silence  (line 293, @0x0000000002a16d10, libserver.so)  // inlines: ~CDOTA_Ability_DrowRanger_Silence
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_DrowRanger_Silence::~CDOTA_Ability_DrowRanger_Silence(
        CDOTA_Ability_DrowRanger_Silence *const this)
{
  this->_vptr_IHandleEntity = &off_43327D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_DrowRanger_Silence::Schema_DynamicBinding  (line 295, @0x0000000002a086b0, libserver.so)
// globals: CDOTA_Ability_DrowRanger_Silence::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DrowRanger_Silence::Schema_DynamicBinding(
        const CDOTA_Ability_DrowRanger_Silence *const this)
{
  return CDOTA_Ability_DrowRanger_Silence::s_pSchemaBinding;
}


// CDOTA_Ability_DrowRanger_Silence::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 295, @0x0000000002a086c0, libserver.so)
// globals: CDOTA_Ability_DrowRanger_Silence::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DrowRanger_Silence::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_DrowRanger_Silence::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DrowRanger_Silence::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_DrowRanger_Silence::CEntityInstanceEntityClass::DestructInstance  (line 295, @0x0000000002a086d0, libserver.so)  // inlines: Destruct<CDOTA_Ability_DrowRanger_Silence>
void __fastcall CDOTA_Ability_DrowRanger_Silence::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_DrowRanger_Silence::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_DrowRanger_Silence::CEntityInstanceEntityClass::FreeInstance  (line 295, @0x0000000002a086f0, libserver.so)
void __fastcall CDOTA_Ability_DrowRanger_Silence::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_DrowRanger_Silence::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_DrowRanger_Silence::CEntityInstanceEntityClass::CanAllocate  (line 295, @0x0000000002a08710, libserver.so)
bool __fastcall CDOTA_Ability_DrowRanger_Silence::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_DrowRanger_Silence::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_DrowRanger_Silence::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 295, @0x0000000002a08720, libserver.so)
// globals: CDOTA_Ability_DrowRanger_Silence::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_DrowRanger_Silence::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_DrowRanger_Silence::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DrowRanger_Silence::s_pSchemaBinding;
}


// CDOTA_Ability_DrowRanger_Silence::CEntityInstanceEntityClass::AllocateInstance  (line 295, @0x0000000002a0f3c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_DrowRanger_Silence::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_DrowRanger_Silence::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_DrowRanger_Silence::CEntityInstanceEntityClass::ConstructInstance  (line 295, @0x0000000002a13e10, libserver.so)  // inlines: CDOTA_Ability_DrowRanger_Silence, Construct<CDOTA_Ability_DrowRanger_Silence>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_DrowRanger_Silence::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_DrowRanger_Silence::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43327D0;
  }
  return p;
}


// CDOTA_Ability_DrowRanger_Silence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 295, @0x0000000002a1f090, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_DrowRanger_Silence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DrowRanger_Silence::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_DrowRanger_Silence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 295, @0x0000000002a1f0b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_DrowRanger_Silence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DrowRanger_Silence::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_DrowRanger_Silence::GetEntityClassInternal  (line 295, @0x0000000002a35bd0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "drow_ranger_silence", "CDOTA_Ability_DrowRanger_Silence"
// globals: `guard variable for'CDOTA_Ability_DrowRanger_Silence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_SilenceClass, CDOTA_Ability_DrowRanger_Silence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_SilenceClass, __dso_handle, CDOTA_Ability_DrowRanger_Silence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_DrowRanger_Silence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_SilenceClassInfo, CDOTA_Ability_DrowRanger_Silence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_SilenceClassInfo
CEntityClass *__cdecl CDOTA_Ability_DrowRanger_Silence::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_DrowRanger_Silence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_SilenceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DrowRanger_Silence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_SilenceClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_DrowRanger_Silence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_SilenceClass);
    CDOTA_Ability_DrowRanger_Silence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_SilenceClass._vptr_CEntityClass = off_4332750;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DrowRanger_Silence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_SilenceClass);
    __cxa_atexit(
      CDOTA_Ability_DrowRanger_Silence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_DrowRanger_Silence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_SilenceClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_DrowRanger_SilenceClass != 0 )
    return &CDOTA_Ability_DrowRanger_Silence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_SilenceClass;
  if ( `guard variable for'CDOTA_Ability_DrowRanger_Silence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_SilenceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DrowRanger_Silence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_SilenceClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_DrowRanger_Silence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_SilenceClassInfo,
      "CDOTA_Ability_DrowRanger_Silence",
      "drow_ranger_silence",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DrowRanger_Silence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_SilenceClassInfo);
  }
  CDOTA_Ability_DrowRanger_Silence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_SilenceClass.m_pClassInfo = &CDOTA_Ability_DrowRanger_Silence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_SilenceClassInfo;
  CDOTA_Ability_DrowRanger_Silence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_SilenceClass.m_pBaseClassInfo = CDOTA_Ability_DrowRanger_Silence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_SilenceClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_DrowRanger_SilenceClass = &CDOTA_Ability_DrowRanger_Silence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_SilenceClass;
  CDOTA_Ability_DrowRanger_Silence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_SilenceClassInfo.m_pClass = &CDOTA_Ability_DrowRanger_Silence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_SilenceClass;
  CDOTA_Ability_DrowRanger_Silence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_SilenceClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_DrowRanger_SilenceClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_DrowRanger_Silence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_SilenceClass;
}


// CDOTA_Ability_DrowRanger_Silence::YouForgotToImplementOrDeclareServerClass  (line 313, @0x00000000029b48a0, libserver.so)
int __fastcall CDOTA_Ability_DrowRanger_Silence::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_DrowRanger_Silence *const this)
{
  return 0;
}


// CDOTA_Ability_DrowRanger_Silence::GetServerClass  (line 313, @0x00000000029c97b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_DrowRanger_Silence::GetServerClass(CDOTA_Ability_DrowRanger_Silence *const this)
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


// CDOTA_Ability_DrowRanger_Silence::OnSpellStart  (line 320, @0x00000000029f0e60, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsRealHero, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, FindUnitsInRadius, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier (18 total)
// strings: "silence_radius", "particles/units/heroes/hero_drow/drow_silence.vpcf", "modifier_silence", "Hero_DrowRanger.Silence"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_DrowRanger_Silence::OnSpellStart(CDOTA_Ability_DrowRanger_Silence *const this)
{
  __m128i v2; // xmm2
  float v3; // r12d
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_BaseNPC *v5; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v7; // rax
  CDOTA_ParticleManager *v8; // rax
  CDOTA_ParticleManager *v9; // rax
  __int64 v10; // rbx
  int v11; // r15d
  CHandle<CBaseEntity> *v12; // rdx
  uint32 m_Index; // eax
  __int16 v14; // cx
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityInstance *m_pInstance; // r12
  float v18; // xmm1_4
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC_Hero *v21; // rdi
  CDOTA_BaseNPC *v22; // rax
  Vector vPosition; // [rsp+30h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+78h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  entities.m_Size = 0;
  *v2.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "silence_radius", -1, 0);
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  Caster = CDOTABaseAbility::GetCaster(this);
  vPosition = CDOTABaseAbility::GetCursorPosition(this);
  v5 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v5->m_iTeamNum.m_Value, &vPosition, Caster, v3, &entities, 2, 3, 0, 0, 0);
  ParticleManager = GetParticleManager();
  LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_drow/drow_silence.vpcf",
                      8,
                      0,
                      0,
                      0);
  vPosition = CDOTABaseAbility::GetCursorPosition(this);
  v7 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v7, Caster, 0, *&vPosition.x, vPosition.z);
  v8 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v8, Caster, 1, COERCE_DOUBLE(LODWORD(v3)), 0.0);
  v9 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v9, Caster);
  if ( entities.m_Size > 0 )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      while ( 1 )
      {
        v12 = &entities.m_Memory.m_pMemory[v10];
        m_Index = v12->m_Index;
        if ( v12->m_Index + 2 > 1 )
        {
          v14 = v12->m_Index;
          v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v12->m_Index) >> 9) & 0x3F];
          if ( v15 != 0 )
          {
            v16 = &v15[v14 & 0x1FF];
            if ( v16 != 0 && m_Index == v16->m_EHandle.m_Index )
            {
              m_pInstance = v16->m_pInstance;
              if ( v16->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                break;
            }
          }
        }
        if ( entities.m_Size <= ++v10 )
          goto LABEL_13;
      }
      KeyValues::KeyValues(&kv, "modifier_silence");
      CDOTABaseAbility::GetDuration(this);
      KeyValues::SetFloat(&kv, "duration", v18);
      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        v11 += LOBYTE(m_pInstance[71].m_pEntity) == 0;
      v19 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v19, this, "modifier_silence", &kv, 0);
      KeyValues::~KeyValues(&kv);
      ++v10;
    }
    while ( entities.m_Size > v10 );
LABEL_13:
    if ( v11 > 1 )
    {
      v20 = CDOTABaseAbility::GetCaster(this);
      if ( v20 != 0 && (v20->m_iUnitType & 1) != 0 )
        v21 = v20;
      else
        v21 = 0;
      EconEntity_OnOwnerKillEaterEvent(
        v21,
        0,
        kill_eater_event_t::kKillEaterEventType_DrowRanger_MultiHeroSilences,
        1,
        INVALID_ITEM_DEF_INDEX);
    }
  }
  v22 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v22, "Hero_DrowRanger.Silence", 0.0, 0, 0);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Ability_DrowRanger_WaveOfSilence::~CDOTA_Ability_DrowRanger_WaveOfSilence  (line 377, @0x0000000002a16d40, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_DrowRanger_WaveOfSilence::~CDOTA_Ability_DrowRanger_WaveOfSilence(
        CDOTA_Ability_DrowRanger_WaveOfSilence *const this)
{
  this->_vptr_IHandleEntity = &off_43332D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_DrowRanger_WaveOfSilence::~CDOTA_Ability_DrowRanger_WaveOfSilence  (line 377, @0x0000000002a16d60, libserver.so)  // inlines: ~CDOTA_Ability_DrowRanger_WaveOfSilence
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_DrowRanger_WaveOfSilence::~CDOTA_Ability_DrowRanger_WaveOfSilence(
        CDOTA_Ability_DrowRanger_WaveOfSilence *const this)
{
  this->_vptr_IHandleEntity = &off_43332D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_DrowRanger_WaveOfSilence::Schema_DynamicBinding  (line 379, @0x0000000002a08730, libserver.so)
// globals: CDOTA_Ability_DrowRanger_WaveOfSilence::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DrowRanger_WaveOfSilence::Schema_DynamicBinding(
        const CDOTA_Ability_DrowRanger_WaveOfSilence *const this)
{
  return CDOTA_Ability_DrowRanger_WaveOfSilence::s_pSchemaBinding;
}


// CDOTA_Ability_DrowRanger_WaveOfSilence::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 379, @0x0000000002a08740, libserver.so)
// globals: CDOTA_Ability_DrowRanger_WaveOfSilence::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DrowRanger_WaveOfSilence::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_DrowRanger_WaveOfSilence::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DrowRanger_WaveOfSilence::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_DrowRanger_WaveOfSilence::CEntityInstanceEntityClass::DestructInstance  (line 379, @0x0000000002a08750, libserver.so)  // inlines: Destruct<CDOTA_Ability_DrowRanger_WaveOfSilence>
void __fastcall CDOTA_Ability_DrowRanger_WaveOfSilence::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_DrowRanger_WaveOfSilence::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_DrowRanger_WaveOfSilence::CEntityInstanceEntityClass::FreeInstance  (line 379, @0x0000000002a08770, libserver.so)
void __fastcall CDOTA_Ability_DrowRanger_WaveOfSilence::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_DrowRanger_WaveOfSilence::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_DrowRanger_WaveOfSilence::CEntityInstanceEntityClass::CanAllocate  (line 379, @0x0000000002a08790, libserver.so)
bool __fastcall CDOTA_Ability_DrowRanger_WaveOfSilence::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_DrowRanger_WaveOfSilence::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_DrowRanger_WaveOfSilence::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 379, @0x0000000002a087a0, libserver.so)
// globals: CDOTA_Ability_DrowRanger_WaveOfSilence::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_DrowRanger_WaveOfSilence::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_DrowRanger_WaveOfSilence::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DrowRanger_WaveOfSilence::s_pSchemaBinding;
}


// CDOTA_Ability_DrowRanger_WaveOfSilence::CEntityInstanceEntityClass::AllocateInstance  (line 379, @0x0000000002a0f400, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_DrowRanger_WaveOfSilence::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_DrowRanger_WaveOfSilence::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 936);
  memset(v1, 0, 0x3A8u);
  return v1;
}


// CDOTA_Ability_DrowRanger_WaveOfSilence::CEntityInstanceEntityClass::ConstructInstance  (line 379, @0x0000000002a13e40, libserver.so)  // inlines: CDOTA_Ability_DrowRanger_WaveOfSilence, Construct<CDOTA_Ability_DrowRanger_WaveOfSilence>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_DrowRanger_WaveOfSilence::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_DrowRanger_WaveOfSilence::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43332D0;
  }
  return p;
}


// CDOTA_Ability_DrowRanger_WaveOfSilence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 379, @0x0000000002a1f0e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_DrowRanger_WaveOfSilence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DrowRanger_WaveOfSilence::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_DrowRanger_WaveOfSilence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 379, @0x0000000002a1f100, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_DrowRanger_WaveOfSilence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DrowRanger_WaveOfSilence::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_DrowRanger_WaveOfSilence::GetEntityClassInternal  (line 379, @0x0000000002a35d20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "drow_ranger_wave_of_silence", "CDOTA_Ability_DrowRanger_WaveOfSilence"
// globals: `guard variable for'CDOTA_Ability_DrowRanger_WaveOfSilence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_WaveOfSilenceClass, CDOTA_Ability_DrowRanger_WaveOfSilence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_WaveOfSilenceClass, __dso_handle, CDOTA_Ability_DrowRanger_WaveOfSilence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_DrowRanger_WaveOfSilence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_WaveOfSilenceClassInfo, CDOTA_Ability_DrowRanger_WaveOfSilence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_WaveOfSilenceClassInfo
CEntityClass *__cdecl CDOTA_Ability_DrowRanger_WaveOfSilence::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_DrowRanger_WaveOfSilence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_WaveOfSilenceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DrowRanger_WaveOfSilence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_WaveOfSilenceClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_DrowRanger_WaveOfSilence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_WaveOfSilenceClass);
    CDOTA_Ability_DrowRanger_WaveOfSilence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_WaveOfSilenceClass._vptr_CEntityClass = off_4333250;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DrowRanger_WaveOfSilence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_WaveOfSilenceClass);
    __cxa_atexit(
      CDOTA_Ability_DrowRanger_WaveOfSilence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_DrowRanger_WaveOfSilence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_WaveOfSilenceClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_DrowRanger_WaveOfSilenceClass != 0 )
    return &CDOTA_Ability_DrowRanger_WaveOfSilence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_WaveOfSilenceClass;
  if ( `guard variable for'CDOTA_Ability_DrowRanger_WaveOfSilence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_WaveOfSilenceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DrowRanger_WaveOfSilence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_WaveOfSilenceClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_DrowRanger_WaveOfSilence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_WaveOfSilenceClassInfo,
      "CDOTA_Ability_DrowRanger_WaveOfSilence",
      "drow_ranger_wave_of_silence",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DrowRanger_WaveOfSilence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_WaveOfSilenceClassInfo);
  }
  CDOTA_Ability_DrowRanger_WaveOfSilence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_WaveOfSilenceClass.m_pClassInfo = &CDOTA_Ability_DrowRanger_WaveOfSilence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_WaveOfSilenceClassInfo;
  CDOTA_Ability_DrowRanger_WaveOfSilence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_WaveOfSilenceClass.m_pBaseClassInfo = CDOTA_Ability_DrowRanger_WaveOfSilence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_WaveOfSilenceClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_DrowRanger_WaveOfSilenceClass = &CDOTA_Ability_DrowRanger_WaveOfSilence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_WaveOfSilenceClass;
  CDOTA_Ability_DrowRanger_WaveOfSilence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_WaveOfSilenceClassInfo.m_pClass = &CDOTA_Ability_DrowRanger_WaveOfSilence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_WaveOfSilenceClass;
  CDOTA_Ability_DrowRanger_WaveOfSilence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_WaveOfSilenceClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_DrowRanger_WaveOfSilenceClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_DrowRanger_WaveOfSilence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_WaveOfSilenceClass;
}


// CDOTA_Ability_DrowRanger_WaveOfSilence::GetConceptRecipientType  (line 388, @0x0000000002a087b0, libserver.so)
int __fastcall CDOTA_Ability_DrowRanger_WaveOfSilence::GetConceptRecipientType(
        CDOTA_Ability_DrowRanger_WaveOfSilence *const this)
{
  return 4;
}


// CDOTA_Ability_DrowRanger_WaveOfSilence::HasSilence  (line 390, @0x0000000002a087c0, libserver.so)
bool __fastcall CDOTA_Ability_DrowRanger_WaveOfSilence::HasSilence(CDOTA_Ability_DrowRanger_WaveOfSilence *const this)
{
  return 1;
}


// CDOTA_Ability_DrowRanger_WaveOfSilence::GetCastRange  (line 392, @0x0000000002a33990, libserver.so)
// calls: CDOTABaseAbility::GetCastRange, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_drow_ranger_2"
int __fastcall CDOTA_Ability_DrowRanger_WaveOfSilence::GetCastRange(
        CDOTA_Ability_DrowRanger_WaveOfSilence *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float flRange; // [rsp+Ch] [rbp-14h]

  flRange = CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_drow_ranger_2", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    return (CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1) + flRange);
  return flRange;
}


// CDOTA_Ability_DrowRanger_WaveOfSilence::YouForgotToImplementOrDeclareServerClass  (line 415, @0x00000000029b48b0, libserver.so)
int __fastcall CDOTA_Ability_DrowRanger_WaveOfSilence::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_DrowRanger_WaveOfSilence *const this)
{
  return 0;
}


// CDOTA_Ability_DrowRanger_WaveOfSilence::GetServerClass  (line 415, @0x00000000029c9fb0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_DrowRanger_WaveOfSilence::GetServerClass(
        CDOTA_Ability_DrowRanger_WaveOfSilence *const this)
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


// CDOTA_Ability_DrowRanger_WaveOfSilence::OnUpgrade  (line 424, @0x00000000029e87d0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::OnUpgrade
// strings: "wave_width", "wave_speed", "silence_duration", "knockback_distance_max"
void __fastcall CDOTA_Ability_DrowRanger_WaveOfSilence::OnUpgrade(CDOTA_Ability_DrowRanger_WaveOfSilence *const this)
{
  this->wave_width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "wave_width", -1, 0);
  this->wave_speed = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "wave_speed", -1, 0);
  this->silence_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "silence_duration", -1, 0);
  this->knockback_distance_max = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "knockback_distance_max", -1, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_DrowRanger_WaveOfSilence::OnSpellStart  (line 435, @0x00000000029c15c0, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set, VectorMultiply, VectorNormalize2D, VectorSubtract, operator*, operator-, operator=, sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorPosition, VectorNormalize, CDOTA_BaseNPC::UnitEmitSound, CDOTA_ProjectileManager::CreateLinearProjectile, CBaseEntity::GetAbsAngles, AngleVectors
// strings: "Hero_DrowRanger.Silence", "particles/units/heroes/hero_drow/drow_silence_wave.vpcf"
void __fastcall CDOTA_Ability_DrowRanger_WaveOfSilence::OnSpellStart(
        CDOTA_Ability_DrowRanger_WaveOfSilence *const this)
{
  __m128i v2; // xmm3
  float v3; // r14d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r13
  vec_t v6; // xmm0_4
  vec_t v7; // xmm1_4
  CDOTA_BaseNPC *v8; // rax
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v11; // rax
  const Vector *v12; // rax
  vec_t v13; // xmm0_4
  float wave_speed; // xmm0_4
  CDOTA_BaseNPC *v15; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v17; // eax
  __int16 v18; // cx
  int v19; // eax
  CDOTA_BaseNPC *v20; // rax
  const QAngle *AbsAngles; // rax
  Vector vDirection; // [rsp+0h] [rbp-B0h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+10h] [rbp-A0h] BYREF

  *v2.m128i_i32 = (*(this->_vptr_IHandleEntity + 229))(this, &vec3_origin, 0);
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  *&info.pszEffectName = CDOTABaseAbility::GetCursorPosition(this);
  v6 = *(&info.pszEffectName + 1) - AbsOrigin->y;
  v7 = *&info.pszEffectName - AbsOrigin->x;
  vDirection.z = 0.0;
  vDirection.y = v6;
  vDirection.x = v7;
  if ( VectorNormalize(&vDirection) < 0.0099999998 )
  {
    v20 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v20);
    AngleVectors(AbsAngles, &vDirection, 0, 0);
  }
  v8 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v8, "Hero_DrowRanger.Silence", 0.0, 0, 0);
  y = vec3_origin.y;
  info.hSource.m_Index = -1;
  z = vec3_origin.z;
  info.vSpawnOrigin.x = vec3_origin.x;
  info.vSpawnOrigin.y = y;
  info.vSpawnOrigin.z = z;
  info.vVelocity.x = vec3_origin.x;
  info.vVelocity.y = y;
  info.vVelocity.z = z;
  info.vAcceleration.x = vec3_origin.x;
  info.vAcceleration.y = y;
  info.vAcceleration.z = z;
  info.fDistance = 0.0;
  info.fStartRadius = 0.0;
  info.fEndRadius = 0.0;
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
  info.pKVExtraData = 0;
  info.fExpireTime = 0.0;
  info.fMaxSpeed = 0.0;
  info.pszEffectName = "particles/units/heroes/hero_drow/drow_silence_wave.vpcf";
  info.bStickyFoWReveal = 1;
  info.pAbility = this;
  v11 = CDOTABaseAbility::GetCaster(this);
  v12 = CBaseEntity::GetAbsOrigin(v11);
  info.vSpawnOrigin.x = v12->x;
  info.vSpawnOrigin.y = v12->y;
  v13 = v12->z;
  info.fDistance = v3;
  info.vSpawnOrigin.z = v13;
  wave_speed = this->wave_speed;
  info.vVelocity.y = vDirection.y * wave_speed;
  info.vVelocity.z = vDirection.z * wave_speed;
  info.vVelocity.x = wave_speed * vDirection.x;
  info.fStartRadius = this->wave_width;
  info.fEndRadius = info.fStartRadius;
  v15 = CDOTABaseAbility::GetCaster(this);
  if ( v15 != 0 && (m_pEntity = v15->m_pEntity) != 0 )
  {
    v17 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v18 = 0x7FFF;
    else
      v18 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(info.hSource.m_Index) = v18 | info.hSource.m_Index & 0x8000;
    info.hSource.m_Index = (v17 << 15) | info.hSource.m_Index & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  info.iUnitTargetTeam = 2;
  info.iUnitTargetType = 3;
  info.iUnitTargetFlags = 16;
  v19 = CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  this->m_nHeroesHit = 0;
  this->m_iProjectile = v19;
}


// CDOTA_Ability_DrowRanger_WaveOfSilence::OnProjectileHit  (line 473, @0x00000000029e8860, libserver.so)  // inlines: FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, IndexToIdentity, IsRealHero, IsValid, Length2D, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-
// calls: CDOTABaseAbility::GetCaster, EconEntity_OnOwnerKillEaterEvent, __stack_chk_fail, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::CreateParticle (16 total)
// strings: "modifier_silence", "special_bonus_unique_drow_ranger_2", "modifier_drowranger_wave_of_silence_knockback", "center_x", "center_y", "center_z" (8 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_DrowRanger_WaveOfSilence::OnProjectileHit(
        CDOTA_Ability_DrowRanger_WaveOfSilence *const this,
        unsigned __int16 *hTarget,
        const Vector *const vLocation)
{
  int v5; // eax
  CConcreteEntityList *v6; // rdi
  unsigned int v7; // edx
  unsigned __int64 v8; // rsi
  CEntityIdentity *v9; // rcx
  __int64 v10; // r8
  CEntityIdentity *v11; // rsi
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC_Hero *v13; // rdi
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rcx
  CEntityInstance *m_pInstance; // r12
  float v18; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v20; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v22; // rax
  const Vector *AbsOrigin; // r13
  const Vector *v24; // rax
  __m128i v25; // xmm0
  CDOTA_BaseNPC *v26; // rax
  float v27; // xmm1_4
  CDOTA_BaseNPC *v28; // rax
  float v29; // xmm1_4
  CDOTA_BaseNPC *v30; // rax
  float v31; // xmm1_4
  float v32; // xmm1_4
  float v33; // xmm1_4
  CDOTA_BaseNPC *v34; // rax
  CDOTA_BaseNPC *v35; // r15
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *v37; // r15
  CDOTA_ParticleManager *v38; // rax
  CDOTA_ParticleManager *v39; // rax
  CDOTA_BaseNPC *v40; // rax
  CDOTA_BaseNPC_Hero *v41; // rdi
  float nFXIndex; // [rsp+1Ch] [rbp-74h]
  int nFXIndexa; // [rsp+1Ch] [rbp-74h]
  KeyValues kv; // [rsp+20h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v46; // [rsp+58h] [rbp-38h]

  v46 = __readfsqword(0x28u);
  v5 = *hTarget;
  v6 = CEntityHandle::gm_pEntityList;
  v7 = *hTarget + 2;
  if ( v7 > 1 )
  {
    v8 = *hTarget;
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v8 >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = v8 & 0x1FF;
      v11 = &v9[v10];
      if ( v11 != 0 && v5 == v11->m_EHandle.m_Index && v11->m_pInstance != 0 )
      {
        v15 = &v9[v10];
LABEL_13:
        if ( v5 == v15->m_EHandle.m_Index )
        {
          m_pInstance = v15->m_pInstance;
          if ( v15->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) == 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x800) == 0 )
          {
            KeyValues::KeyValues(&kv, "modifier_silence");
            KeyValues::SetFloat(&kv, "duration", v18);
            Caster = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, this, "modifier_silence", &kv, 0);
            CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "knockback_duration", -1, 0);
            v20 = CDOTABaseAbility::GetCaster(this);
            AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v20, "special_bonus_unique_drow_ranger_2", 0);
            if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
              nFXIndex = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
            else
              nFXIndex = 0.0;
            v22 = CDOTABaseAbility::GetCaster(this);
            AbsOrigin = CBaseEntity::GetAbsOrigin(v22);
            v24 = CBaseEntity::GetAbsOrigin(m_pInstance);
            v25 = COERCE_UNSIGNED_INT(
                    ((v24->x - AbsOrigin->x) * (v24->x - AbsOrigin->x))
                  + ((v24->y - AbsOrigin->y) * (v24->y - AbsOrigin->y)));
            *v25.m128i_i32 = fsqrt(*v25.m128i_i32);
            if ( ((nFXIndex + this->knockback_distance_max)
                * (1.0
                 - (COERCE_FLOAT(_mm_cvtsi128_si32(v25)) / (*(this->_vptr_IHandleEntity + 229))(this, &vec3_origin, 0)))) >= 1.0 )
              (*(this->_vptr_IHandleEntity + 229))(this, &vec3_origin, 0);
            KeyValues::KeyValues(&kv2, "modifier_drowranger_wave_of_silence_knockback");
            v26 = CDOTABaseAbility::GetCaster(this);
            CBaseEntity::GetAbsOrigin(v26);
            KeyValues::SetFloat(&kv2, "center_x", v27);
            v28 = CDOTABaseAbility::GetCaster(this);
            CBaseEntity::GetAbsOrigin(v28);
            KeyValues::SetFloat(&kv2, "center_y", v29);
            v30 = CDOTABaseAbility::GetCaster(this);
            CBaseEntity::GetAbsOrigin(v30);
            KeyValues::SetFloat(&kv2, "center_z", v31);
            KeyValues::SetFloat(&kv2, "duration", v32);
            KeyValues::SetFloat(&kv2, "knockback_distance", v33);
            v34 = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(
              m_pInstance,
              v34,
              this,
              "modifier_drowranger_wave_of_silence_knockback",
              &kv2,
              0);
            v35 = CDOTABaseAbility::GetCaster(this);
            ParticleManager = GetParticleManager();
            nFXIndexa = CDOTA_ParticleManager::CreateParticle(
                          ParticleManager,
                          "particles/units/heroes/hero_drow/drow_hero_silence.vpcf",
                          1,
                          m_pInstance,
                          0,
                          v35);
            v37 = CBaseEntity::GetAbsOrigin(m_pInstance);
            v38 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControlEnt(v38, nFXIndexa, 1, m_pInstance, 5, "attach_hitloc", *v37, 1);
            v39 = GetParticleManager();
            CDOTA_ParticleManager::ReleaseParticleIndex(v39, nFXIndexa);
            if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
            {
              v40 = CDOTABaseAbility::GetCaster(this);
              if ( v40 != 0 && (v40->m_iUnitType & 1) != 0 )
                v41 = v40;
              else
                v41 = 0;
              EconEntity_OnOwnerKillEaterEvent(
                v41,
                0,
                kill_eater_event_t::kKillEaterEventType_DrowRanger_EnemiesSilenced,
                1,
                INVALID_ITEM_DEF_INDEX);
              ++this->m_nHeroesHit;
            }
            KeyValues::~KeyValues(&kv2);
            KeyValues::~KeyValues(&kv);
          }
        }
        return 0;
      }
    }
  }
  if ( this->m_nHeroesHit > 1 )
  {
    v12 = CDOTABaseAbility::GetCaster(this);
    if ( v12 != 0 && (v12->m_iUnitType & 1) != 0 )
      v13 = v12;
    else
      v13 = 0;
    EconEntity_OnOwnerKillEaterEvent(
      v13,
      0,
      kill_eater_event_t::kKillEaterEventType_DrowRanger_MultiHeroSilences,
      1,
      INVALID_ITEM_DEF_INDEX);
    v5 = *hTarget;
    v6 = CEntityHandle::gm_pEntityList;
    v7 = *hTarget + 2;
  }
  if ( v7 > 1 )
  {
    v14 = v6->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
    if ( v14 != 0 )
    {
      v15 = &v14[*hTarget & 0x1FF];
      if ( v15 != 0 )
        goto LABEL_13;
    }
  }
  return 0;
}


// CDOTA_Modifier_DrowRanger_WaveOfSilence_Knockback::~CDOTA_Modifier_DrowRanger_WaveOfSilence_Knockback  (line 536, @0x0000000002a11da0, libserver.so)  // inlines: ~CDOTA_Modifier_Knockback
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_DrowRanger_WaveOfSilence_Knockback::~CDOTA_Modifier_DrowRanger_WaveOfSilence_Knockback(
        CDOTA_Modifier_DrowRanger_WaveOfSilence_Knockback *const this)
{
  this->_vptr_CDOTA_Buff = &off_4122C50;
  this->_vptr_CHorizontalMotionController = &off_4122F58;
  this->_vptr_CVerticalMotionController = &off_4122F98;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_DrowRanger_WaveOfSilence_Knockback::~CDOTA_Modifier_DrowRanger_WaveOfSilence_Knockback  (line 536, @0x0000000002a11de0, libserver.so)  // inlines: ~CDOTA_Modifier_DrowRanger_WaveOfSilence_Knockback, ~CDOTA_Modifier_Knockback
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_DrowRanger_WaveOfSilence_Knockback::~CDOTA_Modifier_DrowRanger_WaveOfSilence_Knockback(
        CDOTA_Modifier_DrowRanger_WaveOfSilence_Knockback *const this)
{
  this->_vptr_CDOTA_Buff = &off_4122C50;
  this->_vptr_CHorizontalMotionController = &off_4122F58;
  this->_vptr_CVerticalMotionController = &off_4122F98;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DrowRanger_WaveOfSilence_Knockback::IsHidden  (line 542, @0x0000000002a087d0, libserver.so)
bool __fastcall CDOTA_Modifier_DrowRanger_WaveOfSilence_Knockback::IsHidden(
        CDOTA_Modifier_DrowRanger_WaveOfSilence_Knockback *const this)
{
  return 1;
}


// CDOTA_Modifier_DrowRanger_WaveOfSilence_Knockback::IsStunDebuff  (line 543, @0x0000000002a087e0, libserver.so)
bool __fastcall CDOTA_Modifier_DrowRanger_WaveOfSilence_Knockback::IsStunDebuff(
        CDOTA_Modifier_DrowRanger_WaveOfSilence_Knockback *const this)
{
  return 0;
}


// CDOTA_Modifier_DrowRanger_WaveOfSilence_Knockback::CheckState  (line 551, @0x00000000029b48c0, libserver.so)
void __fastcall CDOTA_Modifier_DrowRanger_WaveOfSilence_Knockback::CheckState(
        CDOTA_Modifier_DrowRanger_WaveOfSilence_Knockback *const this,
        CDOTABuffState *const buffState)
{
  ;
}


// CDOTA_Modifier_DrowRanger_WaveOfSilence_Knockback::OnDestroy  (line 559, @0x00000000029ba200, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CGridNav::DestroyTreesAroundPoint, CDOTA_Modifier_Knockback::OnDestroy
void __fastcall CDOTA_Modifier_DrowRanger_WaveOfSilence_Knockback::OnDestroy(
        CDOTA_Modifier_DrowRanger_WaveOfSilence_Knockback *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v3; // r12d
  CDOTA_BaseNPC *Parent; // rax
  float v5; // xmm3_4
  Vector v6; // 0:xmm0_8.8,8:xmm1_4.4

  Caster = CDOTA_Buff::GetCaster(this);
  v3 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
  Parent = CDOTA_Buff::GetParent(this);
  v6 = *CBaseEntity::GetAbsOrigin(Parent);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v3, v6, 150.0, v5);
  CDOTA_Modifier_Knockback::OnDestroy(this);
}


// CDOTA_Ability_DrowRanger_Trueshot::~CDOTA_Ability_DrowRanger_Trueshot  (line 577, @0x0000000002a16d90, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_DrowRanger_Trueshot::~CDOTA_Ability_DrowRanger_Trueshot(
        CDOTA_Ability_DrowRanger_Trueshot *const this)
{
  this->_vptr_IHandleEntity = &off_4334190;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_DrowRanger_Trueshot::~CDOTA_Ability_DrowRanger_Trueshot  (line 577, @0x0000000002a16db0, libserver.so)  // inlines: ~CDOTA_Ability_DrowRanger_Trueshot
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_DrowRanger_Trueshot::~CDOTA_Ability_DrowRanger_Trueshot(
        CDOTA_Ability_DrowRanger_Trueshot *const this)
{
  this->_vptr_IHandleEntity = &off_4334190;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_DrowRanger_Trueshot::Schema_DynamicBinding  (line 579, @0x0000000002a087f0, libserver.so)
// globals: CDOTA_Ability_DrowRanger_Trueshot::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DrowRanger_Trueshot::Schema_DynamicBinding(
        const CDOTA_Ability_DrowRanger_Trueshot *const this)
{
  return CDOTA_Ability_DrowRanger_Trueshot::s_pSchemaBinding;
}


// CDOTA_Ability_DrowRanger_Trueshot::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 579, @0x0000000002a08800, libserver.so)
// globals: CDOTA_Ability_DrowRanger_Trueshot::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DrowRanger_Trueshot::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_DrowRanger_Trueshot::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DrowRanger_Trueshot::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_DrowRanger_Trueshot::CEntityInstanceEntityClass::DestructInstance  (line 579, @0x0000000002a08810, libserver.so)  // inlines: Destruct<CDOTA_Ability_DrowRanger_Trueshot>
void __fastcall CDOTA_Ability_DrowRanger_Trueshot::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_DrowRanger_Trueshot::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_DrowRanger_Trueshot::CEntityInstanceEntityClass::FreeInstance  (line 579, @0x0000000002a08830, libserver.so)
void __fastcall CDOTA_Ability_DrowRanger_Trueshot::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_DrowRanger_Trueshot::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_DrowRanger_Trueshot::CEntityInstanceEntityClass::CanAllocate  (line 579, @0x0000000002a08850, libserver.so)
bool __fastcall CDOTA_Ability_DrowRanger_Trueshot::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_DrowRanger_Trueshot::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_DrowRanger_Trueshot::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 579, @0x0000000002a08860, libserver.so)
// globals: CDOTA_Ability_DrowRanger_Trueshot::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_DrowRanger_Trueshot::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_DrowRanger_Trueshot::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DrowRanger_Trueshot::s_pSchemaBinding;
}


// CDOTA_Ability_DrowRanger_Trueshot::CEntityInstanceEntityClass::AllocateInstance  (line 579, @0x0000000002a0f440, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_DrowRanger_Trueshot::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_DrowRanger_Trueshot::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_DrowRanger_Trueshot::CEntityInstanceEntityClass::ConstructInstance  (line 579, @0x0000000002a13e70, libserver.so)  // inlines: CDOTA_Ability_DrowRanger_Trueshot, Construct<CDOTA_Ability_DrowRanger_Trueshot>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_DrowRanger_Trueshot::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_DrowRanger_Trueshot::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4334190;
  }
  return p;
}


// CDOTA_Ability_DrowRanger_Trueshot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 579, @0x0000000002a1f130, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_DrowRanger_Trueshot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DrowRanger_Trueshot::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_DrowRanger_Trueshot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 579, @0x0000000002a1f150, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_DrowRanger_Trueshot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DrowRanger_Trueshot::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_DrowRanger_Trueshot::GetEntityClassInternal  (line 579, @0x0000000002a35e70, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_DrowRanger_Trueshot"
// globals: `guard variable for'CDOTA_Ability_DrowRanger_Trueshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_TrueshotClass, CDOTA_Ability_DrowRanger_Trueshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_TrueshotClass, __dso_handle, CDOTA_Ability_DrowRanger_Trueshot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_DrowRanger_Trueshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_TrueshotClassInfo, CDOTA_Ability_DrowRanger_Trueshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_TrueshotClassInfo
CEntityClass *__cdecl CDOTA_Ability_DrowRanger_Trueshot::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_DrowRanger_Trueshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_TrueshotClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DrowRanger_Trueshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_TrueshotClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_DrowRanger_Trueshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_TrueshotClass);
    CDOTA_Ability_DrowRanger_Trueshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_TrueshotClass._vptr_CEntityClass = off_4334110;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DrowRanger_Trueshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_TrueshotClass);
    __cxa_atexit(
      CDOTA_Ability_DrowRanger_Trueshot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_DrowRanger_Trueshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_TrueshotClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_DrowRanger_TrueshotClass != 0 )
    return &CDOTA_Ability_DrowRanger_Trueshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_TrueshotClass;
  if ( `guard variable for'CDOTA_Ability_DrowRanger_Trueshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_TrueshotClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DrowRanger_Trueshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_TrueshotClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_DrowRanger_Trueshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_TrueshotClassInfo,
      "CDOTA_Ability_DrowRanger_Trueshot",
      "drow_ranger_trueshot",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DrowRanger_Trueshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_TrueshotClassInfo);
  }
  CDOTA_Ability_DrowRanger_Trueshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_TrueshotClass.m_pClassInfo = &CDOTA_Ability_DrowRanger_Trueshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_TrueshotClassInfo;
  CDOTA_Ability_DrowRanger_Trueshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_TrueshotClass.m_pBaseClassInfo = CDOTA_Ability_DrowRanger_Trueshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_TrueshotClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_DrowRanger_TrueshotClass = &CDOTA_Ability_DrowRanger_Trueshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_TrueshotClass;
  CDOTA_Ability_DrowRanger_Trueshot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_TrueshotClassInfo.m_pClass = &CDOTA_Ability_DrowRanger_Trueshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_TrueshotClass;
  CDOTA_Ability_DrowRanger_Trueshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_TrueshotClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_DrowRanger_TrueshotClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_DrowRanger_Trueshot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_TrueshotClass;
}


// CDOTA_Ability_DrowRanger_Trueshot::GetIntrinsicModifierName  (line 583, @0x0000000002a08870, libserver.so)
// strings: "modifier_drow_ranger_trueshot"
const char *__fastcall CDOTA_Ability_DrowRanger_Trueshot::GetIntrinsicModifierName(
        CDOTA_Ability_DrowRanger_Trueshot *const this)
{
  return "modifier_drow_ranger_trueshot";
}


// CDOTA_Ability_DrowRanger_Trueshot::OnSpellStart  (line 588, @0x00000000029b7040, libserver.so)
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_drow_ranger_trueshot_aura", "modifier_drow_ranger_trueshot_global"
void __fastcall CDOTA_Ability_DrowRanger_Trueshot::OnSpellStart(CDOTA_Ability_DrowRanger_Trueshot *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_drow_ranger_trueshot_aura");
  CDOTABaseAbility::GetDuration(this);
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_drow_ranger_trueshot_global", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_DrowRanger_Trueshot::~CDOTA_Modifier_DrowRanger_Trueshot  (line 601, @0x0000000002a124c0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_DrowRanger_Trueshot::~CDOTA_Modifier_DrowRanger_Trueshot(
        CDOTA_Modifier_DrowRanger_Trueshot *const this)
{
  this->_vptr_CDOTA_Buff = &off_4334C50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_DrowRanger_Trueshot::~CDOTA_Modifier_DrowRanger_Trueshot  (line 601, @0x0000000002a124e0, libserver.so)  // inlines: ~CDOTA_Modifier_DrowRanger_Trueshot
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_DrowRanger_Trueshot::~CDOTA_Modifier_DrowRanger_Trueshot(
        CDOTA_Modifier_DrowRanger_Trueshot *const this)
{
  this->_vptr_CDOTA_Buff = &off_4334C50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DrowRanger_Trueshot::IsHidden  (line 606, @0x0000000002a08880, libserver.so)
bool __fastcall CDOTA_Modifier_DrowRanger_Trueshot::IsHidden(CDOTA_Modifier_DrowRanger_Trueshot *const this)
{
  return 1;
}


// CDOTA_Modifier_DrowRanger_Trueshot::IsAura  (line 608, @0x0000000002a08890, libserver.so)
bool __fastcall CDOTA_Modifier_DrowRanger_Trueshot::IsAura(CDOTA_Modifier_DrowRanger_Trueshot *const this)
{
  return 1;
}


// CDOTA_Modifier_DrowRanger_Trueshot::GetModifierAura  (line 609, @0x0000000002a088a0, libserver.so)
// strings: "modifier_drow_ranger_trueshot_aura"
const char *__fastcall CDOTA_Modifier_DrowRanger_Trueshot::GetModifierAura(
        CDOTA_Modifier_DrowRanger_Trueshot *const this)
{
  return "modifier_drow_ranger_trueshot_aura";
}


// CDOTA_Modifier_DrowRanger_Trueshot::GetAuraSearchTeam  (line 611, @0x0000000002a088b0, libserver.so)
int __fastcall CDOTA_Modifier_DrowRanger_Trueshot::GetAuraSearchTeam(CDOTA_Modifier_DrowRanger_Trueshot *const this)
{
  return 1;
}


// CDOTA_Modifier_DrowRanger_Trueshot::GetAuraSearchType  (line 612, @0x0000000002a088c0, libserver.so)
int __fastcall CDOTA_Modifier_DrowRanger_Trueshot::GetAuraSearchType(CDOTA_Modifier_DrowRanger_Trueshot *const this)
{
  return 1;
}


// CDOTA_Modifier_DrowRanger_Trueshot::GetAuraSearchFlags  (line 613, @0x0000000002a088d0, libserver.so)
int __fastcall CDOTA_Modifier_DrowRanger_Trueshot::GetAuraSearchFlags(CDOTA_Modifier_DrowRanger_Trueshot *const this)
{
  return 2;
}


// CDOTA_Modifier_DrowRanger_Trueshot::GetAuraRadius  (line 614, @0x0000000002a088e0, libserver.so)
int __fastcall CDOTA_Modifier_DrowRanger_Trueshot::GetAuraRadius(CDOTA_Modifier_DrowRanger_Trueshot *const this)
{
  return -1;
}


// CDOTA_Modifier_DrowRanger_Trueshot::GetAuraEntityReject  (line 621, @0x00000000029b48d0, libserver.so)  // inlines: IsHero
bool __fastcall CDOTA_Modifier_DrowRanger_Trueshot::GetAuraEntityReject(
        CDOTA_Modifier_DrowRanger_Trueshot *const this,
        CDOTA_BaseNPC *pNPC)
{
  return !(pNPC->m_iUnitType & 1);
}


// CDOTA_Modifier_DrowRanger_Trueshot_Global::~CDOTA_Modifier_DrowRanger_Trueshot_Global  (line 635, @0x0000000002a13080, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_DrowRanger_Trueshot_Global::~CDOTA_Modifier_DrowRanger_Trueshot_Global(
        CDOTA_Modifier_DrowRanger_Trueshot_Global *const this)
{
  this->_vptr_CDOTA_Buff = &off_4334F30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_DrowRanger_Trueshot_Global::~CDOTA_Modifier_DrowRanger_Trueshot_Global  (line 635, @0x0000000002a130a0, libserver.so)  // inlines: ~CDOTA_Modifier_DrowRanger_Trueshot_Global
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_DrowRanger_Trueshot_Global::~CDOTA_Modifier_DrowRanger_Trueshot_Global(
        CDOTA_Modifier_DrowRanger_Trueshot_Global *const this)
{
  this->_vptr_CDOTA_Buff = &off_4334F30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DrowRanger_Trueshot_Global::IsHidden  (line 640, @0x0000000002a088f0, libserver.so)
bool __fastcall CDOTA_Modifier_DrowRanger_Trueshot_Global::IsHidden(
        CDOTA_Modifier_DrowRanger_Trueshot_Global *const this)
{
  return 1;
}


// CDOTA_Modifier_DrowRanger_Trueshot_Global::IsPurgable  (line 641, @0x0000000002a08900, libserver.so)
bool __fastcall CDOTA_Modifier_DrowRanger_Trueshot_Global::IsPurgable(
        CDOTA_Modifier_DrowRanger_Trueshot_Global *const this)
{
  return 0;
}


// CDOTA_Modifier_DrowRanger_Trueshot_Global::RemoveOnDeath  (line 642, @0x0000000002a08910, libserver.so)
bool __fastcall CDOTA_Modifier_DrowRanger_Trueshot_Global::RemoveOnDeath(
        CDOTA_Modifier_DrowRanger_Trueshot_Global *const this)
{
  return 0;
}


// CDOTA_Modifier_DrowRanger_Trueshot_Global::IsAura  (line 644, @0x0000000002a08920, libserver.so)
bool __fastcall CDOTA_Modifier_DrowRanger_Trueshot_Global::IsAura(
        CDOTA_Modifier_DrowRanger_Trueshot_Global *const this)
{
  return 1;
}


// CDOTA_Modifier_DrowRanger_Trueshot_Global::GetModifierAura  (line 645, @0x0000000002a08930, libserver.so)
// strings: "modifier_drow_ranger_trueshot_aura"
const char *__fastcall CDOTA_Modifier_DrowRanger_Trueshot_Global::GetModifierAura(
        CDOTA_Modifier_DrowRanger_Trueshot_Global *const this)
{
  return "modifier_drow_ranger_trueshot_aura";
}


// CDOTA_Modifier_DrowRanger_Trueshot_Global::GetAuraSearchTeam  (line 647, @0x0000000002a08940, libserver.so)
int __fastcall CDOTA_Modifier_DrowRanger_Trueshot_Global::GetAuraSearchTeam(
        CDOTA_Modifier_DrowRanger_Trueshot_Global *const this)
{
  return 1;
}


// CDOTA_Modifier_DrowRanger_Trueshot_Global::GetAuraSearchType  (line 648, @0x0000000002a08950, libserver.so)
int __fastcall CDOTA_Modifier_DrowRanger_Trueshot_Global::GetAuraSearchType(
        CDOTA_Modifier_DrowRanger_Trueshot_Global *const this)
{
  return 18;
}


// CDOTA_Modifier_DrowRanger_Trueshot_Global::GetAuraSearchFlags  (line 649, @0x0000000002a08960, libserver.so)
int __fastcall CDOTA_Modifier_DrowRanger_Trueshot_Global::GetAuraSearchFlags(
        CDOTA_Modifier_DrowRanger_Trueshot_Global *const this)
{
  return 2;
}


// CDOTA_Modifier_DrowRanger_Trueshot_Global::GetAuraRadius  (line 650, @0x0000000002a08970, libserver.so)
int __fastcall CDOTA_Modifier_DrowRanger_Trueshot_Global::GetAuraRadius(
        CDOTA_Modifier_DrowRanger_Trueshot_Global *const this)
{
  return -1;
}


// CDOTA_Modifier_DrowRanger_TrueshotAura::~CDOTA_Modifier_DrowRanger_TrueshotAura  (line 661, @0x0000000002a12470, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_DrowRanger_TrueshotAura::~CDOTA_Modifier_DrowRanger_TrueshotAura(
        CDOTA_Modifier_DrowRanger_TrueshotAura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4335290;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_DrowRanger_TrueshotAura::~CDOTA_Modifier_DrowRanger_TrueshotAura  (line 661, @0x0000000002a12490, libserver.so)  // inlines: ~CDOTA_Modifier_DrowRanger_TrueshotAura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_DrowRanger_TrueshotAura::~CDOTA_Modifier_DrowRanger_TrueshotAura(
        CDOTA_Modifier_DrowRanger_TrueshotAura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4335290;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DrowRanger_TrueshotAura::OnCreated  (line 681, @0x00000000029e01c0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "trueshot_ranged_damage"
void __fastcall CDOTA_Modifier_DrowRanger_TrueshotAura::OnCreated(
        CDOTA_Modifier_DrowRanger_TrueshotAura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->trueshot_ranged_damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                     Ability,
                                     "trueshot_ranged_damage",
                                     -1,
                                     0);
  else
    this->trueshot_ranged_damage = 0.0;
}


// CDOTA_Modifier_DrowRanger_TrueshotAura::OnRefresh  (line 688, @0x00000000029e00a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "trueshot_ranged_damage"
void __fastcall CDOTA_Modifier_DrowRanger_TrueshotAura::OnRefresh(
        CDOTA_Modifier_DrowRanger_TrueshotAura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->trueshot_ranged_damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                     Ability,
                                     "trueshot_ranged_damage",
                                     -1,
                                     0);
  else
    this->trueshot_ranged_damage = 0.0;
}


// CDOTA_Modifier_DrowRanger_TrueshotAura::DeclareFunctions  (line 695, @0x00000000029b48f0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_DrowRanger_TrueshotAura::DeclareFunctions(
        CDOTA_Modifier_DrowRanger_TrueshotAura *const this)
{
  this->m_Functions[0].__pfn = (&stru_10 + 697);
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_DrowRanger_TrueshotAura::GetModifierPreAttack_BonusDamage  (line 702, @0x00000000029e5640, libserver.so)  // inlines: ToDOTABaseNPCHero
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_drow_ranger_1"
ModifierVariant_t __fastcall CDOTA_Modifier_DrowRanger_TrueshotAura::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_DrowRanger_TrueshotAura *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // r12
  CDOTA_BaseNPC *v6; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float LevelSpecialValue; // xmm0_4
  double v9; // xmm0_8
  float v10; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    result.m_szVal = CDOTA_Buff::GetCaster(this);
    *&result.m_eType = 1;
    if ( (result.m_szVal[2787] & 0x10) != 0 )
    {
LABEL_9:
      result.m_szVal = 0;
      return result;
    }
  }
  Caster = CDOTA_Buff::GetCaster(this);
  v5 = Caster;
  if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
  {
    v6 = CDOTA_Buff::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v6, "special_bonus_unique_drow_ranger_1", 0);
    if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
    else
      LevelSpecialValue = 0.0;
    v10 = LevelSpecialValue + this->trueshot_ranged_damage;
    v9 = (*(v5->_vptr_IHandleEntity + 497))(v5);
    *&v9 = (*&v9 * v10) / 100.0;
    *&result.m_eType = (*&v9 << 32) | 1LL;
    goto LABEL_9;
  }
  return 1uLL;
}


// CDOTA_Ability_DrowRanger_Marksmanship::~CDOTA_Ability_DrowRanger_Marksmanship  (line 729, @0x0000000002a16de0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_DrowRanger_Marksmanship::~CDOTA_Ability_DrowRanger_Marksmanship(
        CDOTA_Ability_DrowRanger_Marksmanship *const this)
{
  this->_vptr_IHandleEntity = &off_43355F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_DrowRanger_Marksmanship::~CDOTA_Ability_DrowRanger_Marksmanship  (line 729, @0x0000000002a16e00, libserver.so)  // inlines: ~CDOTA_Ability_DrowRanger_Marksmanship
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_DrowRanger_Marksmanship::~CDOTA_Ability_DrowRanger_Marksmanship(
        CDOTA_Ability_DrowRanger_Marksmanship *const this)
{
  this->_vptr_IHandleEntity = &off_43355F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_DrowRanger_Marksmanship::Schema_DynamicBinding  (line 731, @0x0000000002a08980, libserver.so)
// globals: CDOTA_Ability_DrowRanger_Marksmanship::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DrowRanger_Marksmanship::Schema_DynamicBinding(
        const CDOTA_Ability_DrowRanger_Marksmanship *const this)
{
  return CDOTA_Ability_DrowRanger_Marksmanship::s_pSchemaBinding;
}


// CDOTA_Ability_DrowRanger_Marksmanship::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 731, @0x0000000002a08990, libserver.so)
// globals: CDOTA_Ability_DrowRanger_Marksmanship::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DrowRanger_Marksmanship::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_DrowRanger_Marksmanship::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DrowRanger_Marksmanship::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_DrowRanger_Marksmanship::CEntityInstanceEntityClass::DestructInstance  (line 731, @0x0000000002a089a0, libserver.so)  // inlines: Destruct<CDOTA_Ability_DrowRanger_Marksmanship>
void __fastcall CDOTA_Ability_DrowRanger_Marksmanship::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_DrowRanger_Marksmanship::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_DrowRanger_Marksmanship::CEntityInstanceEntityClass::FreeInstance  (line 731, @0x0000000002a089c0, libserver.so)
void __fastcall CDOTA_Ability_DrowRanger_Marksmanship::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_DrowRanger_Marksmanship::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_DrowRanger_Marksmanship::CEntityInstanceEntityClass::CanAllocate  (line 731, @0x0000000002a089e0, libserver.so)
bool __fastcall CDOTA_Ability_DrowRanger_Marksmanship::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_DrowRanger_Marksmanship::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_DrowRanger_Marksmanship::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 731, @0x0000000002a089f0, libserver.so)
// globals: CDOTA_Ability_DrowRanger_Marksmanship::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_DrowRanger_Marksmanship::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_DrowRanger_Marksmanship::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DrowRanger_Marksmanship::s_pSchemaBinding;
}


// CDOTA_Ability_DrowRanger_Marksmanship::CEntityInstanceEntityClass::AllocateInstance  (line 731, @0x0000000002a0f480, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_DrowRanger_Marksmanship::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_DrowRanger_Marksmanship::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_DrowRanger_Marksmanship::CEntityInstanceEntityClass::ConstructInstance  (line 731, @0x0000000002a13ea0, libserver.so)  // inlines: CDOTA_Ability_DrowRanger_Marksmanship, Construct<CDOTA_Ability_DrowRanger_Marksmanship>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_DrowRanger_Marksmanship::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_DrowRanger_Marksmanship::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43355F0;
  }
  return p;
}


// CDOTA_Ability_DrowRanger_Marksmanship::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 731, @0x0000000002a1f180, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_DrowRanger_Marksmanship::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DrowRanger_Marksmanship::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_DrowRanger_Marksmanship::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 731, @0x0000000002a1f1a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_DrowRanger_Marksmanship::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DrowRanger_Marksmanship::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_DrowRanger_Marksmanship::GetEntityClassInternal  (line 731, @0x0000000002a35fc0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "drow_ranger_marksmanship", "CDOTA_Ability_DrowRanger_Marksmanship"
// globals: `guard variable for'CDOTA_Ability_DrowRanger_Marksmanship::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_MarksmanshipClass, CDOTA_Ability_DrowRanger_Marksmanship::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_MarksmanshipClass, __dso_handle, CDOTA_Ability_DrowRanger_Marksmanship::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_DrowRanger_Marksmanship::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_MarksmanshipClassInfo, CDOTA_Ability_DrowRanger_Marksmanship::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_MarksmanshipClassInfo
CEntityClass *__cdecl CDOTA_Ability_DrowRanger_Marksmanship::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_DrowRanger_Marksmanship::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_MarksmanshipClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DrowRanger_Marksmanship::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_MarksmanshipClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_DrowRanger_Marksmanship::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_MarksmanshipClass);
    CDOTA_Ability_DrowRanger_Marksmanship::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_MarksmanshipClass._vptr_CEntityClass = off_4335570;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DrowRanger_Marksmanship::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_MarksmanshipClass);
    __cxa_atexit(
      CDOTA_Ability_DrowRanger_Marksmanship::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_DrowRanger_Marksmanship::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_MarksmanshipClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_DrowRanger_MarksmanshipClass != 0 )
    return &CDOTA_Ability_DrowRanger_Marksmanship::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_MarksmanshipClass;
  if ( `guard variable for'CDOTA_Ability_DrowRanger_Marksmanship::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_MarksmanshipClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DrowRanger_Marksmanship::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_MarksmanshipClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_DrowRanger_Marksmanship::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_MarksmanshipClassInfo,
      "CDOTA_Ability_DrowRanger_Marksmanship",
      "drow_ranger_marksmanship",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DrowRanger_Marksmanship::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_MarksmanshipClassInfo);
  }
  CDOTA_Ability_DrowRanger_Marksmanship::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_MarksmanshipClass.m_pClassInfo = &CDOTA_Ability_DrowRanger_Marksmanship::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_MarksmanshipClassInfo;
  CDOTA_Ability_DrowRanger_Marksmanship::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_MarksmanshipClass.m_pBaseClassInfo = CDOTA_Ability_DrowRanger_Marksmanship::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_MarksmanshipClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_DrowRanger_MarksmanshipClass = &CDOTA_Ability_DrowRanger_Marksmanship::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_MarksmanshipClass;
  CDOTA_Ability_DrowRanger_Marksmanship::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DrowRanger_MarksmanshipClassInfo.m_pClass = &CDOTA_Ability_DrowRanger_Marksmanship::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_MarksmanshipClass;
  CDOTA_Ability_DrowRanger_Marksmanship::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_MarksmanshipClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_DrowRanger_MarksmanshipClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_DrowRanger_Marksmanship::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DrowRanger_MarksmanshipClass;
}


// CDOTA_Ability_DrowRanger_Marksmanship::GetIntrinsicModifierName  (line 734, @0x0000000002a08a00, libserver.so)
// strings: "modifier_drow_ranger_marksmanship"
const char *__fastcall CDOTA_Ability_DrowRanger_Marksmanship::GetIntrinsicModifierName(
        CDOTA_Ability_DrowRanger_Marksmanship *const this)
{
  return "modifier_drow_ranger_marksmanship";
}


// CDOTA_Ability_DrowRanger_Marksmanship::OnProjectileHit_ExtraData  (line 743, @0x00000000029c6780, libserver.so)  // inlines: Get, GetBool, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: KeyValues::GetInt, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::CreateAttackRecord, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::PerformAttack, KeyValues::~KeyValues, CDOTA_BaseNPC::RemoveModifierByName, __stack_chk_fail, _Unwind_Resume
// strings: "UseOrb", "modifier_drow_ranger_marksmanship_reduction", "modifier_bane_nightmare"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_DrowRanger_Marksmanship::OnProjectileHit_ExtraData(
        CDOTA_Ability_DrowRanger_Marksmanship *const this,
        unsigned __int16 *hTarget,
        const Vector *const vLocation,
        KeyValues *pExtraData)
{
  int v5; // eax
  unsigned __int64 v6; // rsi
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityInstance *m_pInstance; // r12
  int Int; // ebx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_AttackRecord *AttackRecord; // r14
  float v13; // xmm1_4
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-28h]

  v18 = __readfsqword(0x28u);
  v5 = *hTarget;
  if ( (*hTarget + 2) <= 1
    || (v6 = *hTarget, (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v6 >> 9) & 0x3F]) == 0)
    || (v8 = &v7[v6 & 0x1FF]) == 0
    || v5 != v8->m_EHandle.m_Index
    || (m_pInstance = v8->m_pInstance, v8->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  Int = KeyValues::GetInt(pExtraData, "UseOrb", 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AttackRecord = CDOTA_BaseNPC::CreateAttackRecord(Caster, m_pInstance, Int != 0, 1, 0, 0, 0);
  if ( AttackRecord != 0 )
  {
    if ( (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 8) != 0 )
      CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, "modifier_bane_nightmare");
    KeyValues::KeyValues(&kv, "modifier_drow_ranger_marksmanship_reduction");
    KeyValues::SetFloat(&kv, "duration", v13);
    KeyValues::SetInt(&kv, "record", AttackRecord->m_iRecord);
    v14 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(m_pInstance, v14, this, "modifier_drow_ranger_marksmanship_reduction", &kv, 0);
    v15 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::PerformAttack(v15, AttackRecord, m_pInstance, 1, 0, 0, 0);
    KeyValues::~KeyValues(&kv);
  }
  return 0;
}


// CDOTA_Modifier_DrowRanger_Marksmanship::~CDOTA_Modifier_DrowRanger_Marksmanship  (line 773, @0x0000000002a1e610, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_DrowRanger_Marksmanship::~CDOTA_Modifier_DrowRanger_Marksmanship(
        CDOTA_Modifier_DrowRanger_Marksmanship *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_43360B0;
  this->m_InFlightAttackRecords.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_InFlightAttackRecords.m_Memory,
        CUtlMemory<short,int>::Purge(&this->m_InFlightAttackRecords.m_Memory),
        (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<short,int>::Purge(p_m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_DrowRanger_Marksmanship::~CDOTA_Modifier_DrowRanger_Marksmanship  (line 773, @0x0000000002a1e6f0, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Modifier_DrowRanger_Marksmanship, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_DrowRanger_Marksmanship::~CDOTA_Modifier_DrowRanger_Marksmanship(
        CDOTA_Modifier_DrowRanger_Marksmanship *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_43360B0;
  this->m_InFlightAttackRecords.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_InFlightAttackRecords.m_Memory;
    CUtlMemory<short,int>::Purge(&this->m_InFlightAttackRecords.m_Memory);
    if ( (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<short,int>::Purge(p_m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DrowRanger_Marksmanship::IsHidden  (line 778, @0x0000000002a08a10, libserver.so)
bool __fastcall CDOTA_Modifier_DrowRanger_Marksmanship::IsHidden(CDOTA_Modifier_DrowRanger_Marksmanship *const this)
{
  return 1;
}


// CDOTA_Modifier_DrowRanger_Marksmanship::CheckState  (line 806, @0x00000000029b4910, libserver.so)
void __fastcall CDOTA_Modifier_DrowRanger_Marksmanship::CheckState(
        CDOTA_Modifier_DrowRanger_Marksmanship *const this,
        CDOTABuffState *const buffState)
{
  ;
}


// CDOTA_Modifier_DrowRanger_Marksmanship::OnIntervalThink  (line 816, @0x00000000029c3b50, libserver.so)  // inlines: FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetHero, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, Length2D, LookupEntity, ToDOTABaseNPCHero, Vector, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CEntityInstance*, operator-, operator[]
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::GetCaster, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "particles/units/heroes/hero_drow/drow_marksmanship_start.vpcf", "attach_hitloc"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_DrowRanger_Marksmanship::OnIntervalThink(
        CDOTA_Modifier_DrowRanger_Marksmanship *const this)
{
  __int64 v2; // rbx
  CHandle<CDOTA_BaseNPC_Hero> *v3; // rdx
  uint32 m_Index; // eax
  __int16 v5; // si
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  const CBaseEntity *m_pInstance; // r15
  unsigned __int8 m_Value; // r13
  CDOTA_BaseNPC *Parent; // rax
  const Vector *v11; // rax
  float x; // xmm0_4
  float y; // xmm1_4
  char v14; // al
  int v15; // xmm0_4
  int m_nFxIndex; // ebx
  CDOTA_ParticleManager *v17; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v19; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v21; // rax
  const Vector *v22; // r13
  CDOTA_BaseNPC *v23; // r14
  CDOTA_ParticleManager *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  const Vector *v26; // r13
  CDOTA_BaseNPC *v27; // r14
  CDOTA_ParticleManager *v28; // rax
  CDOTA_ParticleManager *v29; // rax
  const Vector *AbsOrigin; // [rsp+10h] [rbp-50h]
  bool bFoundHero; // [rsp+1Fh] [rbp-41h]
  double v32; // [rsp+20h] [rbp-40h]
  float v33; // [rsp+28h] [rbp-38h]

  v2 = 0;
  bFoundHero = 0;
  if ( g_HeroList.m_hHeroList.m_Size > 0 )
  {
    do
    {
      while ( 1 )
      {
        v3 = &g_HeroList.m_hHeroList.m_Memory.m_pMemory[v2];
        m_Index = v3->m_Index;
        if ( v3->m_Index + 2 > 1 )
        {
          v5 = v3->m_Index;
          v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v3->m_Index) >> 9) & 0x3F];
          if ( v6 != 0 )
          {
            v7 = &v6[v5 & 0x1FF];
            if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
            {
              m_pInstance = v7->m_pInstance;
              if ( v7->m_pInstance != 0 && (m_pInstance[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 )
              {
                m_Value = m_pInstance->m_iTeamNum.m_Value;
                if ( m_Value != CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value
                  && LOBYTE(m_pInstance[4].m_pfnMoveDone.__delta) == 0
                  && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) != 0 )
                {
                  break;
                }
              }
            }
          }
        }
        if ( g_HeroList.m_hHeroList.m_Size <= ++v2 )
          goto LABEL_16;
      }
      Parent = CDOTA_Buff::GetParent(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
      v11 = CBaseEntity::GetAbsOrigin(m_pInstance);
      x = v11->x;
      y = v11->y;
      v14 = bFoundHero;
      if ( this->radius >= fsqrt(((x - AbsOrigin->x) * (x - AbsOrigin->x)) + ((y - AbsOrigin->y) * (y - AbsOrigin->y))) )
        v14 = 1;
      bFoundHero = v14;
      ++v2;
    }
    while ( g_HeroList.m_hHeroList.m_Size > v2 );
LABEL_16:
    if ( bFoundHero )
      goto LABEL_17;
  }
  Caster = CDOTA_Buff::GetCaster(this);
  if ( (*(Caster->_vptr_IHandleEntity + 408))(Caster) == 0 )
  {
LABEL_17:
    v15 = 1065353216;
    this->bonus_factor = 1;
  }
  else
  {
    if ( this->bonus_factor == 1 )
    {
      v19 = CDOTA_Buff::GetParent(this);
      ParticleManager = GetParticleManager();
      LODWORD(v19) = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_drow/drow_marksmanship_start.vpcf",
                       2,
                       v19,
                       0,
                       0);
      v21 = CDOTA_Buff::GetParent(this);
      v22 = CBaseEntity::GetAbsOrigin(v21);
      v23 = CDOTA_Buff::GetParent(this);
      v24 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v24, v19, 0, v23, 1, 0, *v22, 1);
      v25 = CDOTA_Buff::GetParent(this);
      v26 = CBaseEntity::GetAbsOrigin(v25);
      v27 = CDOTA_Buff::GetParent(this);
      v28 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v28, v19, 1, v27, 5, "attach_hitloc", *v26, 1);
      v29 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v29, v19);
    }
    this->bonus_factor = 2;
    v15 = 0x40000000;
  }
  m_nFxIndex = this->m_nFxIndex;
  LODWORD(v32) = v15;
  HIDWORD(v32) = v15;
  v33 = *&v15;
  v17 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v17, m_nFxIndex, 2, v32, v33);
}


// CDOTA_Modifier_DrowRanger_Marksmanship::OnCreated  (line 854, @0x00000000029e1710, libserver.so)  // inlines: Vector
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::AddParticle
// strings: "marksmanship_agility_bonus", "particles/units/heroes/hero_drow/drow_marksmanship.vpcf", "attach_hitloc", "bow_bot", "bow_mid", "bow_top"
void __fastcall CDOTA_Modifier_DrowRanger_Marksmanship::OnCreated(
        CDOTA_Modifier_DrowRanger_Marksmanship *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v10; // rax
  int m_nFxIndex; // r13d
  const CBaseAnimating *v12; // r14
  CDOTA_ParticleManager *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  const Vector *v15; // r12
  CDOTA_BaseNPC *v16; // rax
  int v17; // r13d
  const CBaseAnimating *v18; // r14
  CDOTA_ParticleManager *v19; // rax
  CDOTA_ParticleManager *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  const Vector *v22; // r12
  CDOTA_BaseNPC *v23; // rax
  int v24; // r13d
  const CBaseAnimating *v25; // r14
  CDOTA_ParticleManager *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  const Vector *v28; // r12
  CDOTA_BaseNPC *v29; // rax
  int v30; // r13d
  const CBaseAnimating *v31; // r14
  CDOTA_ParticleManager *v32; // rax
  CDOTA_BaseNPC *v33; // rax
  const Vector *v34; // r12
  CDOTA_BaseNPC *v35; // rax
  int v36; // r13d
  const CBaseAnimating *v37; // r14
  CDOTA_ParticleManager *v38; // rax
  double v39; // [rsp+10h] [rbp-30h]

  this->bonus_factor = 1;
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->marksmanship_agility_bonus, "marksmanship_agility_bonus");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->radius, "radius");
  CDOTA_Buff::StartIntervalThink(this, 0.2, v5);
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  this->m_nFxIndex = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_drow/drow_marksmanship.vpcf",
                       2,
                       Parent,
                       0,
                       0);
  v8 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
  v10 = CDOTA_Buff::GetParent(this);
  m_nFxIndex = this->m_nFxIndex;
  v12 = v10;
  v13 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v13, m_nFxIndex, 0, v12, 1, 0, *AbsOrigin, 1);
  v14 = CDOTA_Buff::GetParent(this);
  v15 = CBaseEntity::GetAbsOrigin(v14);
  v16 = CDOTA_Buff::GetParent(this);
  v17 = this->m_nFxIndex;
  v18 = v16;
  v19 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v19, v17, 1, v18, 5, "attach_hitloc", *v15, 1);
  LODWORD(v15) = this->m_nFxIndex;
  *&v39 = this->bonus_factor;
  *(&v39 + 1) = *&v39;
  v20 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v20, v15, 2, v39, *&v39);
  v21 = CDOTA_Buff::GetParent(this);
  v22 = CBaseEntity::GetAbsOrigin(v21);
  v23 = CDOTA_Buff::GetParent(this);
  v24 = this->m_nFxIndex;
  v25 = v23;
  v26 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v26, v24, 3, v25, 5, "bow_bot", *v22, 1);
  v27 = CDOTA_Buff::GetParent(this);
  v28 = CBaseEntity::GetAbsOrigin(v27);
  v29 = CDOTA_Buff::GetParent(this);
  v30 = this->m_nFxIndex;
  v31 = v29;
  v32 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v32, v30, 4, v31, 5, "bow_mid", *v28, 1);
  v33 = CDOTA_Buff::GetParent(this);
  v34 = CBaseEntity::GetAbsOrigin(v33);
  v35 = CDOTA_Buff::GetParent(this);
  v36 = this->m_nFxIndex;
  v37 = v35;
  v38 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v38, v36, 5, v37, 5, "bow_top", *v34, 1);
  CDOTA_Buff::AddParticle(this, this->m_nFxIndex, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_DrowRanger_Marksmanship::OnRefresh  (line 875, @0x00000000029f79f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "marksmanship_agility_bonus"
void __fastcall CDOTA_Modifier_DrowRanger_Marksmanship::OnRefresh(
        CDOTA_Modifier_DrowRanger_Marksmanship *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->marksmanship_agility_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                         Ability,
                                         "marksmanship_agility_bonus",
                                         -1,
                                         0);
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
    this->marksmanship_agility_bonus = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->radius = 0;
}


// CDOTA_Modifier_DrowRanger_Marksmanship::DeclareFunctions  (line 883, @0x00000000029b4920, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_DrowRanger_Marksmanship::GetModifierBonusStats_Agility(CModifierParams const&)
void __fastcall CDOTA_Modifier_DrowRanger_Marksmanship::DeclareFunctions(
        CDOTA_Modifier_DrowRanger_Marksmanship *const this)
{
  this->m_Functions[120].__pfn = (&stru_10 + 697);
  this->m_Functions[120].__delta = 0;
  this->m_Functions[121].__pfn = (&stru_10 + 705);
  this->m_Functions[121].__delta = 0;
  this->m_Functions[65].__pfn = CDOTA_Modifier_DrowRanger_Marksmanship::GetModifierBonusStats_Agility;
  this->m_Functions[65].__delta = 0;
}


// CDOTA_Modifier_DrowRanger_Marksmanship::OnAttack  (line 893, @0x0000000002a04660, libserver.so)  // inlines: AddToTail, Attacker, CopyConstruct<short int>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::HasScepter, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, CUtlMemory<short int, int>::Grow
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_DrowRanger_Marksmanship::OnAttack(
        CDOTA_Modifier_DrowRanger_Marksmanship *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // edx
  CDOTA_BaseNPC *m_pInstance; // rsi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  CDOTA_BaseNPC *v10; // rax
  __int64 iRecord; // rbx
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rax
  __int64 m_Size; // rbx
  int v15; // edx
  __int16 *v16; // rdx
  CDOTA_AttackRecord *pAttackRecord; // [rsp+8h] [rbp-18h]

  Parent = CDOTA_Buff::GetParent(this);
  m_Index = params->hattacker.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[params->hattacker.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  if ( Parent == m_pInstance )
  {
    v10 = CDOTA_Buff::GetParent(this);
    if ( CDOTA_BaseNPC::HasScepter(v10) && (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
    {
      iRecord = params->iRecord;
      AttackRecordsManager = GetAttackRecordsManager();
      RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
      if ( RecordByIndex->m_bUseProjectile )
      {
        m_Size = this->m_InFlightAttackRecords.m_Size;
        v15 = this->m_InFlightAttackRecords.m_Size;
        if ( m_Size == this->m_InFlightAttackRecords.m_Memory.m_nAllocationCount )
        {
          pAttackRecord = RecordByIndex;
          CUtlMemory<short,int>::Grow(&this->m_InFlightAttackRecords.m_Memory, 1);
          v15 = this->m_InFlightAttackRecords.m_Size;
          RecordByIndex = pAttackRecord;
        }
        this->m_InFlightAttackRecords.m_Size = v15 + 1;
        v16 = &this->m_InFlightAttackRecords.m_Memory.m_pMemory[m_Size];
        if ( v16 != 0 )
          *v16 = RecordByIndex->m_iRecord;
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_DrowRanger_Marksmanship::OnAttackLanded  (line 918, @0x00000000029e29a0, libserver.so)  // inlines: Attacker, AttackerNPC, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Color, Element, FastRemove, FindAndFastRemove, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetModifier_Constant_Additive, GetProjectileSpeed, GetSerialNumber, GetTeamNumber, IndexToIdentity, IsListeningToEvent, IsValid, LookupEntity, Set, SetBool, TargetNPC, ToDOTABaseNPC, ToDOTABaseNPCHero, memcpy, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], sTrackingProjectileCreateInfo, ~CUtlVector
// calls: CDOTA_Buff::GetParent, CUtlVectorBase<short int, CUtlMemory<short int, int> >::FindAndFastRemove, CEntityHandle::operator CEntityInstance*, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, __stack_chk_fail (19 total)
// strings: "scepter_range", "split_count_scepter", "marksmanship_onprojectilehit", "UseOrb", "particles/units/heroes/hero_drow/drow_base_attack.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_DrowRanger_Marksmanship::OnAttackLanded(
        CDOTA_Modifier_DrowRanger_Marksmanship *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // edx
  CDOTA_BaseNPC *m_pInstance; // rsi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  CEntityInstance *v10; // rax
  CEntityInstance *v11; // rax
  CDOTA_BaseNPC *v12; // r12
  __int64 iRecord; // rbx
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // r14
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v17; // rax
  __m128i v18; // xmm2
  const Vector *AbsOrigin; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v21; // cx
  int v22; // eax
  int m_Size; // edx
  int v24; // ebx
  CHandle<CBaseEntity> *v25; // rax
  uint32 v26; // ecx
  __int16 v27; // dx
  CEntityIdentity *v28; // rax
  CEntityIdentity *v29; // rax
  CEntityInstance *v30; // r15
  CDOTA_Orb *m_pOrb; // rdi
  vec_t y; // xmm0_4
  const char *v33; // rax
  CDOTA_BaseNPC *Caster; // rax
  __int64 v35; // rdx
  float Modifier_Constant_Additive_Internal; // xmm0_4
  CEntityIdentity *v37; // rax
  int v38; // edx
  __int16 v39; // cx
  CDOTA_BaseNPC *pTarget; // [rsp+20h] [rbp-110h]
  __int64 v41; // [rsp+28h] [rbp-108h]
  float m_iProjectileMoveSpeed; // [rsp+3Ch] [rbp-F4h]
  CHandle<CBaseEntity> src; // [rsp+40h] [rbp-F0h] BYREF
  int scepter_range; // [rsp+48h] [rbp-E8h] BYREF
  int split_count_scepter; // [rsp+4Ch] [rbp-E4h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+50h] [rbp-E0h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-C0h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+90h] [rbp-A0h] BYREF
  unsigned __int64 v49; // [rsp+F8h] [rbp-38h]

  v49 = __readfsqword(0x28u);
  Parent = CDOTA_Buff::GetParent(this);
  m_Index = params->hattacker.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[params->hattacker.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  if ( Parent == m_pInstance
    && CUtlVectorBase<short,CUtlMemory<short,int>>::FindAndFastRemove(&this->m_InFlightAttackRecords, &params->iRecord) )
  {
    v10 = CEntityHandle::operator CEntityInstance *(&params->htarget);
    if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
      pTarget = v10;
    else
      pTarget = 0;
    v11 = CEntityHandle::operator CEntityInstance *(&params->hattacker);
    if ( v11 == 0
      || BYTE3(v11[7]._vptr_IHandleEntity) == 0
      || (v12 = v11, (v11[43].m_iszPrivateVScripts.u.m_Id & 1) == 0) )
    {
      v12 = 0;
    }
    iRecord = params->iRecord;
    AttackRecordsManager = GetAttackRecordsManager();
    RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
    Ability = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(Ability, &scepter_range, "scepter_range");
    v17 = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(v17, &split_count_scepter, "split_count_scepter");
    *v18.m128i_i32 = scepter_range;
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    LODWORD(iRecord) = _mm_cvtsi128_si32(v18);
    AbsOrigin = CBaseEntity::GetAbsOrigin(pTarget);
    FindUnitsInRadius(v12->m_iTeamNum.m_Value, AbsOrigin, v12, *&iRecord, &entities, 2, 3, 400, 0, 0);
    src.m_Index = -1;
    if ( pTarget != 0 )
    {
      m_pEntity = pTarget->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v21 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v21 & 0x7FFF;
      }
    }
    v22 = CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(&entities, &src);
    m_Size = entities.m_Size;
    if ( v22 != -1 )
    {
      if ( entities.m_Size <= 0 )
      {
LABEL_35:
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
        return 1uLL;
      }
      m_Size = entities.m_Size - 1;
      if ( v22 != entities.m_Size - 1 )
      {
        entities.m_Memory.m_pMemory[v22].m_Index = entities.m_Memory.m_pMemory[m_Size].m_Index;
        m_Size = entities.m_Size - 1;
      }
      entities.m_Size = m_Size;
    }
    if ( m_Size > 0 && split_count_scepter > 0 )
    {
      v24 = 0;
      v41 = 0;
      do
      {
        v25 = &entities.m_Memory.m_pMemory[v41];
        v26 = entities.m_Memory.m_pMemory[v41].m_Index;
        if ( v26 + 2 > 1 )
        {
          v27 = v25->m_Index;
          v28 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v25->m_Index) >> 9) & 0x3F];
          if ( v28 != 0 )
          {
            v29 = &v28[v27 & 0x1FF];
            if ( v29 != 0 && v26 == v29->m_EHandle.m_Index )
            {
              v30 = v29->m_pInstance;
              if ( v29->m_pInstance != 0 && BYTE3(v30[7]._vptr_IHandleEntity) != 0 )
              {
                KeyValues::KeyValues(&kv, "marksmanship_onprojectilehit");
                KeyValues::SetInt(&kv, "UseOrb", RecordByIndex->m_bUseCastAttackOrb);
                info.bProvidesVision = 0;
                info.pKVExtraData = 0;
                m_pOrb = RecordByIndex->m_pOrb;
                info.hTarget.m_Index = -1;
                info.hSource.m_Index = -1;
                info.bDrawsOnMinimap = 0;
                info.colorGemColor = 0;
                info.vSourceLoc.x = vec3_origin.x;
                y = vec3_origin.y;
                memset(&info, 0, 28);
                info.vSourceLoc.y = y;
                info.vSourceLoc.z = vec3_origin.z;
                info.iSourceAttachment = 1;
                info.iVisionTeamNumber = -1;
                info.iVisionRadius = 0;
                info.bDodgeable = 1;
                info.bIsAttack = 0;
                info.bVisibleToEnemies = 1;
                info.bReplaceExisting = 0;
                info.flExpireTime = 0.0;
                info.flMaxImpactTime = 0.0;
                info.bServerOnly = 0;
                if ( m_pOrb != 0 && (*(m_pOrb->_vptr_CDOTA_Orb + 3))(m_pOrb) != 0 )
                  v33 = (*(RecordByIndex->m_pOrb->_vptr_CDOTA_Orb + 3))(RecordByIndex->m_pOrb);
                else
                  v33 = "particles/units/heroes/hero_drow/drow_base_attack.vpcf";
                info.pszEffectName = v33;
                info.pAbility = CDOTA_Buff::GetAbility(this);
                Caster = CDOTA_Buff::GetCaster(this);
                v35 = Caster->m_ModifierManager.m_buffsForModifiers[72];
                m_iProjectileMoveSpeed = Caster->m_iProjectileMoveSpeed;
                if ( v35 == 0xFF || Caster->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v35].m_Size <= 0 )
                  Modifier_Constant_Additive_Internal = 0.0;
                else
                  Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                                          &Caster->m_ModifierManager,
                                                          modifierfunction::MODIFIER_PROPERTY_PROJECTILE_SPEED_BONUS,
                                                          &CModifierParams::s_Default);
                info.iMoveSpeed = (Modifier_Constant_Additive_Internal + m_iProjectileMoveSpeed);
                info.vSourceLoc = *CBaseEntity::GetAbsOrigin(pTarget);
                v37 = v30->m_pEntity;
                if ( v37 != 0 )
                {
                  v38 = (v37->m_EHandle.m_Index >> 15) - (v37->m_flags & 1);
                  v39 = 0x7FFF;
                  if ( v37->m_EHandle.m_Index != -1 )
                    v39 = v37->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(info.hTarget.m_Index) = v39 | info.hTarget.m_Index & 0x8000;
                  info.hTarget.m_Index = (v38 << 15) | info.hTarget.m_Index & 0x7FFF;
                }
                else
                {
                  info.hTarget.m_Index = -1;
                }
                info.pKVExtraData = &kv;
                CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
                KeyValues::~KeyValues(&kv);
              }
            }
          }
        }
        if ( entities.m_Size <= ++v24 )
          break;
        ++v41;
      }
      while ( split_count_scepter > v24 );
    }
    goto LABEL_35;
  }
  return 1uLL;
}


// CDOTA_Modifier_DrowRanger_Marksmanship::GetModifierBonusStats_Agility  (line 968, @0x00000000029e5740, libserver.so)  // inlines: ModifierVariant_t
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_drow_ranger_3"
ModifierVariant_t __fastcall CDOTA_Modifier_DrowRanger_Marksmanship::GetModifierBonusStats_Agility(
        CDOTA_Modifier_DrowRanger_Marksmanship *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  __m128i v5; // xmm0
  int marksmanship_agility_bonus; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  ModifierVariant_t result; // 0:rax.16

  *&result.m_eType = 1;
  if ( this->bonus_factor != 1 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    v5 = 0;
    if ( (Parent->m_nUnitState64.m_Value & 0x10000000) == 0 )
    {
      marksmanship_agility_bonus = this->marksmanship_agility_bonus;
      Caster = CDOTA_Buff::GetCaster(this);
      AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_drow_ranger_3", 0);
      if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
        marksmanship_agility_bonus += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
      *v5.m128i_i32 = marksmanship_agility_bonus;
    }
    *&result.m_eType = (_mm_cvtsi128_si32(v5) << 32) | 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_DrowRanger_Marksmanship_Reduction::~CDOTA_Modifier_DrowRanger_Marksmanship_Reduction  (line 993, @0x0000000002a3ea00, libserver.so)  // inlines: ConvertToExternalMemory, IsExternallyAllocated, Purge, Purge_FixedGrowable, RemoveAll, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlMemory<float, int>::ConvertToExternalMemory, CUtlMemory<float, int>::Purge, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<int, int>::Purge
void __fastcall CDOTA_Modifier_DrowRanger_Marksmanship_Reduction::~CDOTA_Modifier_DrowRanger_Marksmanship_Reduction(
        CDOTA_Modifier_DrowRanger_Marksmanship_Reduction *const this)
{
  CUtlVectorBase<float,CUtlMemoryFixedGrowable<float,8ul,int> >::CAllocator *p_m_Memory; // r12
  int m_nAllocationCount; // r8d
  uint32 m_nGrowSize; // edx
  int *m_pMemory; // rsi
  uint32 v6; // eax

  p_m_Memory = &this->m_vecRecordTimes.m_Memory;
  this->_vptr_CDOTA_Buff = &off_43363F0;
  this->m_vecRecordTimes.m_Size = 0;
  CUtlMemory<float,int>::ConvertToExternalMemory(
    &this->m_vecRecordTimes.m_Memory,
    this->m_vecRecordTimes.m_Memory.m_FixedMemory.m_Data,
    8,
    0,
    1,
    0x3FFFFFFFu);
  if ( (this->m_vecRecordTimes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<float,int>::Purge(p_m_Memory);
  m_nAllocationCount = this->m_vecRecords.m_Memory.m_nAllocationCount;
  this->m_vecRecords.m_Size = 0;
  if ( m_nAllocationCount < 0 )
  {
    v6 = this->m_vecRecords.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    m_nGrowSize = this->m_vecRecords.m_Memory.m_nGrowSize;
    m_pMemory = this->m_vecRecords.m_Memory.m_pMemory;
    v6 = m_nGrowSize & 0xC0000000;
    if ( &this->m_vecRecords.m_Memory.m_FixedMemory != m_pMemory )
    {
      if ( m_pMemory != 0 && v6 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        m_nGrowSize = this->m_vecRecords.m_Memory.m_nGrowSize;
      }
      this->m_vecRecords.m_Memory.m_pMemory = &this->m_vecRecords.m_Memory.m_FixedMemory;
      this->m_vecRecords.m_Memory.m_nAllocationCount = 8;
      this->m_vecRecords.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
      goto LABEL_9;
    }
  }
  if ( v6 != 0 )
  {
LABEL_9:
    CDOTA_Buff::~CDOTA_Buff(this);
    return;
  }
  CUtlMemory<int,int>::Purge(&this->m_vecRecords.m_Memory);
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_DrowRanger_Marksmanship_Reduction::~CDOTA_Modifier_DrowRanger_Marksmanship_Reduction  (line 993, @0x0000000002a3eb20, libserver.so)  // inlines: ConvertToExternalMemory, IsExternallyAllocated, Purge, Purge_FixedGrowable, RemoveAll, ~CDOTA_Modifier_DrowRanger_Marksmanship_Reduction, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlMemory<float, int>::ConvertToExternalMemory, CUtlMemory<float, int>::Purge, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<int, int>::Purge
void __fastcall CDOTA_Modifier_DrowRanger_Marksmanship_Reduction::~CDOTA_Modifier_DrowRanger_Marksmanship_Reduction(
        CDOTA_Modifier_DrowRanger_Marksmanship_Reduction *const this)
{
  CUtlVectorBase<float,CUtlMemoryFixedGrowable<float,8ul,int> >::CAllocator *p_m_Memory; // r12
  int m_nAllocationCount; // r9d
  uint32 m_nGrowSize; // edx
  int *m_pMemory; // rsi
  uint32 v6; // eax

  p_m_Memory = &this->m_vecRecordTimes.m_Memory;
  this->_vptr_CDOTA_Buff = &off_43363F0;
  this->m_vecRecordTimes.m_Size = 0;
  CUtlMemory<float,int>::ConvertToExternalMemory(
    &this->m_vecRecordTimes.m_Memory,
    this->m_vecRecordTimes.m_Memory.m_FixedMemory.m_Data,
    8,
    0,
    1,
    0x3FFFFFFFu);
  if ( (this->m_vecRecordTimes.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    CUtlMemory<float,int>::Purge(p_m_Memory);
  m_nAllocationCount = this->m_vecRecords.m_Memory.m_nAllocationCount;
  this->m_vecRecords.m_Size = 0;
  if ( m_nAllocationCount < 0 )
  {
    v6 = this->m_vecRecords.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    m_nGrowSize = this->m_vecRecords.m_Memory.m_nGrowSize;
    m_pMemory = this->m_vecRecords.m_Memory.m_pMemory;
    v6 = m_nGrowSize & 0xC0000000;
    if ( &this->m_vecRecords.m_Memory.m_FixedMemory != m_pMemory )
    {
      if ( m_pMemory != 0 && v6 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        m_nGrowSize = this->m_vecRecords.m_Memory.m_nGrowSize;
      }
      this->m_vecRecords.m_Memory.m_pMemory = &this->m_vecRecords.m_Memory.m_FixedMemory;
      this->m_vecRecords.m_Memory.m_nAllocationCount = 8;
      this->m_vecRecords.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
      goto LABEL_9;
    }
  }
  if ( v6 == 0 )
    CUtlMemory<int,int>::Purge(&this->m_vecRecords.m_Memory);
LABEL_9:
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DrowRanger_Marksmanship_Reduction::IsDebuff  (line 998, @0x0000000002a08a20, libserver.so)
bool __fastcall CDOTA_Modifier_DrowRanger_Marksmanship_Reduction::IsDebuff(
        CDOTA_Modifier_DrowRanger_Marksmanship_Reduction *const this)
{
  return 1;
}


// CDOTA_Modifier_DrowRanger_Marksmanship_Reduction::IsPurgable  (line 999, @0x0000000002a08a30, libserver.so)
bool __fastcall CDOTA_Modifier_DrowRanger_Marksmanship_Reduction::IsPurgable(
        CDOTA_Modifier_DrowRanger_Marksmanship_Reduction *const this)
{
  return 0;
}


// CDOTA_Modifier_DrowRanger_Marksmanship_Reduction::IsHidden  (line 1000, @0x0000000002a08a40, libserver.so)
bool __fastcall CDOTA_Modifier_DrowRanger_Marksmanship_Reduction::IsHidden(
        CDOTA_Modifier_DrowRanger_Marksmanship_Reduction *const this)
{
  return 1;
}


// CDOTA_Modifier_DrowRanger_Marksmanship_Reduction::OnCreated  (line 1019, @0x0000000002a049a0, libserver.so)  // inlines: AddToTail, AssignTo, CopyConstruct<float>, CopyConstruct<int>, DOTAGameRules, DotaRetrieveAbilityValue<int>, Element, GetGameTime, GetLevelSpecialValueFor<int>, GrowMemory, operator[]
// calls: KeyValues::GetInt, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CUtlMemory<float, int>::Grow, CUtlMemory<int, int>::Grow
// strings: "damage_reduction_scepter"
void __fastcall CDOTA_Modifier_DrowRanger_Marksmanship_Reduction::OnCreated(
        CDOTA_Modifier_DrowRanger_Marksmanship_Reduction *const this,
        KeyValues *pKV)
{
  int Int; // eax
  __int64 m_Size; // r12
  int v5; // edx
  int *v6; // rdx
  int v7; // xmm0_4
  __int64 v8; // r12
  int v9; // eax
  float *v10; // rax
  CDOTABaseAbility *Ability; // rax
  int v12; // [rsp+Ch] [rbp-14h]
  int v13; // [rsp+Ch] [rbp-14h]

  Int = KeyValues::GetInt(pKV, "record", 0);
  m_Size = this->m_vecRecords.m_Size;
  v5 = this->m_vecRecords.m_Size;
  if ( m_Size == this->m_vecRecords.m_Memory.m_nAllocationCount )
  {
    v13 = Int;
    CUtlMemory<int,int>::Grow(&this->m_vecRecords.m_Memory, 1);
    v5 = this->m_vecRecords.m_Size;
    Int = v13;
  }
  this->m_vecRecords.m_Size = v5 + 1;
  v6 = &this->m_vecRecords.m_Memory.m_pMemory[m_Size];
  if ( v6 != 0 )
    *v6 = Int;
  v7 = 0;
  if ( g_pGameRules != 0 )
    v7 = *&g_pGameRules[18].m_szQuestName[20];
  v8 = this->m_vecRecordTimes.m_Size;
  v9 = this->m_vecRecordTimes.m_Size;
  if ( v8 == this->m_vecRecordTimes.m_Memory.m_nAllocationCount )
  {
    v12 = v7;
    CUtlMemory<float,int>::Grow(&this->m_vecRecordTimes.m_Memory, 1);
    v9 = this->m_vecRecordTimes.m_Size;
    v7 = v12;
  }
  this->m_vecRecordTimes.m_Size = v9 + 1;
  v10 = &this->m_vecRecordTimes.m_Memory.m_pMemory[v8];
  if ( v10 != 0 )
    *v10 = v7;
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->damage_reduction_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                       Ability,
                                       "damage_reduction_scepter",
                                       -1,
                                       0);
  else
    this->damage_reduction_scepter = 0;
}


// CDOTA_Modifier_DrowRanger_Marksmanship_Reduction::OnRefresh  (line 1028, @0x0000000002a04790, libserver.so)  // inlines: AddToTail, CopyConstruct<float>, CopyConstruct<int>, DOTAGameRules, Element, GetGameTime, GrowMemory, RemoveMultipleFromHead, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: KeyValues::GetInt, memmove, CUtlMemory<float, int>::Grow, CUtlMemory<int, int>::Grow
void __fastcall CDOTA_Modifier_DrowRanger_Marksmanship_Reduction::OnRefresh(
        CDOTA_Modifier_DrowRanger_Marksmanship_Reduction *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4
  int v5; // eax
  float *m_pMemory; // r8
  __int64 v7; // rsi
  float *v8; // rdx
  float v9; // xmm0_4
  int Int; // eax
  __int64 v11; // r12
  float v12; // xmm1_4
  int v13; // edx
  int *v14; // rdx
  __int64 v15; // r12
  int v16; // eax
  float *v17; // rax
  int v18; // r13d
  int v19; // ecx
  int m_Size; // edx
  int v21; // edx
  float v22; // [rsp-28h] [rbp-30h]
  float v23; // [rsp-24h] [rbp-2Ch]
  float v24; // [rsp-24h] [rbp-2Ch]
  float v25; // [rsp-24h] [rbp-2Ch]
  float v26; // [rsp-24h] [rbp-2Ch]
  int v27; // [rsp-24h] [rbp-2Ch]

  v2 = 0.0;
  if ( g_pGameRules != 0 )
    v2 = *&g_pGameRules[18].m_szQuestName[20];
  v5 = this->m_vecRecords.m_Size - 1;
  if ( v5 >= 0 )
  {
    m_pMemory = this->m_vecRecordTimes.m_Memory.m_pMemory;
    v7 = v5;
    v8 = &m_pMemory[v7 - 1];
    if ( v2 <= (m_pMemory[v7] + 1.0) )
    {
      while ( --v5 != -1 )
      {
        v9 = *v8--;
        if ( v2 > (v9 + 1.0) )
          goto LABEL_17;
      }
    }
    else
    {
LABEL_17:
      v18 = v5 + 1;
      v19 = this->m_vecRecords.m_Size - (v5 + 1);
      if ( v19 > 0 )
      {
        v24 = v2;
        memmove(this->m_vecRecords.m_Memory.m_pMemory, &this->m_vecRecords.m_Memory.m_pMemory[v18], 4LL * v19);
        v2 = v24;
        v19 = this->m_vecRecords.m_Size - v18;
      }
      m_Size = this->m_vecRecordTimes.m_Size;
      this->m_vecRecords.m_Size = v19;
      v21 = m_Size - v18;
      if ( v21 > 0 )
      {
        v25 = v2;
        memmove(this->m_vecRecordTimes.m_Memory.m_pMemory, &this->m_vecRecordTimes.m_Memory.m_pMemory[v18], 4LL * v21);
        v2 = v25;
        v21 = this->m_vecRecordTimes.m_Size - v18;
      }
      this->m_vecRecordTimes.m_Size = v21;
    }
  }
  v23 = v2;
  Int = KeyValues::GetInt(pKV, "record", 0);
  v11 = this->m_vecRecords.m_Size;
  v12 = v23;
  v13 = this->m_vecRecords.m_Size;
  if ( v11 == this->m_vecRecords.m_Memory.m_nAllocationCount )
  {
    v27 = Int;
    v22 = v12;
    CUtlMemory<int,int>::Grow(&this->m_vecRecords.m_Memory, 1);
    v13 = this->m_vecRecords.m_Size;
    v12 = v22;
    Int = v27;
  }
  this->m_vecRecords.m_Size = v13 + 1;
  v14 = &this->m_vecRecords.m_Memory.m_pMemory[v11];
  if ( v14 != 0 )
    *v14 = Int;
  v15 = this->m_vecRecordTimes.m_Size;
  v16 = this->m_vecRecordTimes.m_Size;
  if ( v15 == this->m_vecRecordTimes.m_Memory.m_nAllocationCount )
  {
    v26 = v12;
    CUtlMemory<float,int>::Grow(&this->m_vecRecordTimes.m_Memory, 1);
    v16 = this->m_vecRecordTimes.m_Size;
    v12 = v26;
  }
  this->m_vecRecordTimes.m_Size = v16 + 1;
  v17 = &this->m_vecRecordTimes.m_Memory.m_pMemory[v15];
  if ( v17 != 0 )
    *v17 = v12;
}


// CDOTA_Modifier_DrowRanger_Marksmanship_Reduction::DeclareFunctions  (line 1046, @0x00000000029b4970, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_DrowRanger_Marksmanship_Reduction::DeclareFunctions(
        CDOTA_Modifier_DrowRanger_Marksmanship_Reduction *const this)
{
  this->m_Functions[36].__pfn = (&stru_10 + 697);
  this->m_Functions[36].__delta = 0;
}


// CDOTA_Modifier_DrowRanger_Marksmanship_Reduction::GetModifierIncomingDamage_Percentage  (line 1053, @0x00000000029bfd90, libserver.so)  // inlines: Find
ModifierVariant_t __fastcall CDOTA_Modifier_DrowRanger_Marksmanship_Reduction::GetModifierIncomingDamage_Percentage(
        CDOTA_Modifier_DrowRanger_Marksmanship_Reduction *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  int m_Size; // ecx
  int iRecord; // esi
  int *m_pMemory; // rdx
  int *v6; // rdx
  int v7; // eax
  ModifierVariant_t result; // 0:rax.16

  m_Size = this->m_vecRecords.m_Size;
  iRecord = params->iRecord;
  if ( m_Size <= 0 )
    return 1uLL;
  m_pMemory = this->m_vecRecords.m_Memory.m_pMemory;
  if ( iRecord != *m_pMemory )
  {
    v6 = m_pMemory + 1;
    v7 = 0;
    while ( ++v7 != m_Size )
    {
      if ( iRecord == *v6++ )
      {
        if ( v7 == -1 )
          return 1uLL;
        goto LABEL_8;
      }
    }
    return 1uLL;
  }
LABEL_8:
  result.m_szVal = 0;
  *v2.m128i_i32 = -this->damage_reduction_scepter;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Holdout_Multishot::~CDOTA_Ability_Holdout_Multishot  (line 1066, @0x0000000002a16e30, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Holdout_Multishot::~CDOTA_Ability_Holdout_Multishot(
        CDOTA_Ability_Holdout_Multishot *const this)
{
  this->_vptr_IHandleEntity = &off_4336750;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Holdout_Multishot::~CDOTA_Ability_Holdout_Multishot  (line 1066, @0x0000000002a16e50, libserver.so)  // inlines: ~CDOTA_Ability_Holdout_Multishot
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Holdout_Multishot::~CDOTA_Ability_Holdout_Multishot(
        CDOTA_Ability_Holdout_Multishot *const this)
{
  this->_vptr_IHandleEntity = &off_4336750;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Holdout_Multishot::Schema_DynamicBinding  (line 1068, @0x0000000002a08a50, libserver.so)
// globals: CDOTA_Ability_Holdout_Multishot::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Holdout_Multishot::Schema_DynamicBinding(
        const CDOTA_Ability_Holdout_Multishot *const this)
{
  return CDOTA_Ability_Holdout_Multishot::s_pSchemaBinding;
}


// CDOTA_Ability_Holdout_Multishot::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1068, @0x0000000002a08a60, libserver.so)
// globals: CDOTA_Ability_Holdout_Multishot::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Holdout_Multishot::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Holdout_Multishot::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Holdout_Multishot::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Holdout_Multishot::CEntityInstanceEntityClass::DestructInstance  (line 1068, @0x0000000002a08a70, libserver.so)  // inlines: Destruct<CDOTA_Ability_Holdout_Multishot>
void __fastcall CDOTA_Ability_Holdout_Multishot::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Holdout_Multishot::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Holdout_Multishot::CEntityInstanceEntityClass::FreeInstance  (line 1068, @0x0000000002a08a90, libserver.so)
void __fastcall CDOTA_Ability_Holdout_Multishot::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Holdout_Multishot::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Holdout_Multishot::CEntityInstanceEntityClass::CanAllocate  (line 1068, @0x0000000002a08ab0, libserver.so)
bool __fastcall CDOTA_Ability_Holdout_Multishot::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Holdout_Multishot::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Holdout_Multishot::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1068, @0x0000000002a08ac0, libserver.so)
// globals: CDOTA_Ability_Holdout_Multishot::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Holdout_Multishot::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Holdout_Multishot::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Holdout_Multishot::s_pSchemaBinding;
}


// CDOTA_Ability_Holdout_Multishot::CEntityInstanceEntityClass::AllocateInstance  (line 1068, @0x0000000002a0f4c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Holdout_Multishot::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Holdout_Multishot::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 960);
  memset(v1, 0, 0x3C0u);
  return v1;
}


// CDOTA_Ability_Holdout_Multishot::CEntityInstanceEntityClass::ConstructInstance  (line 1068, @0x0000000002a13ed0, libserver.so)  // inlines: CDOTA_Ability_Holdout_Multishot, Construct<CDOTA_Ability_Holdout_Multishot>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Holdout_Multishot::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Holdout_Multishot::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4336750;
  }
  return p;
}


// CDOTA_Ability_Holdout_Multishot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1068, @0x0000000002a1f1d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Holdout_Multishot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Holdout_Multishot::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Holdout_Multishot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1068, @0x0000000002a1f1f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Holdout_Multishot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Holdout_Multishot::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Holdout_Multishot::GetEntityClassInternal  (line 1068, @0x0000000002a36110, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_Holdout_Multishot"
// globals: `guard variable for'CDOTA_Ability_Holdout_Multishot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_MultishotClass, CDOTA_Ability_Holdout_Multishot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_MultishotClass, __dso_handle, CDOTA_Ability_Holdout_Multishot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Holdout_Multishot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_MultishotClassInfo, CDOTA_Ability_Holdout_Multishot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_MultishotClassInfo
CEntityClass *__cdecl CDOTA_Ability_Holdout_Multishot::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Holdout_Multishot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_MultishotClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Holdout_Multishot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_MultishotClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Holdout_Multishot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_MultishotClass);
    CDOTA_Ability_Holdout_Multishot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_MultishotClass._vptr_CEntityClass = off_43366D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Holdout_Multishot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_MultishotClass);
    __cxa_atexit(
      CDOTA_Ability_Holdout_Multishot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Holdout_Multishot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_MultishotClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Holdout_MultishotClass != 0 )
    return &CDOTA_Ability_Holdout_Multishot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_MultishotClass;
  if ( `guard variable for'CDOTA_Ability_Holdout_Multishot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_MultishotClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Holdout_Multishot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_MultishotClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Holdout_Multishot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_MultishotClassInfo,
      "CDOTA_Ability_Holdout_Multishot",
      "holdout_multishot",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Holdout_Multishot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_MultishotClassInfo);
  }
  CDOTA_Ability_Holdout_Multishot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_MultishotClass.m_pClassInfo = &CDOTA_Ability_Holdout_Multishot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_MultishotClassInfo;
  CDOTA_Ability_Holdout_Multishot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_MultishotClass.m_pBaseClassInfo = CDOTA_Ability_Holdout_Multishot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_MultishotClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Holdout_MultishotClass = &CDOTA_Ability_Holdout_Multishot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_MultishotClass;
  CDOTA_Ability_Holdout_Multishot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_MultishotClassInfo.m_pClass = &CDOTA_Ability_Holdout_Multishot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_MultishotClass;
  CDOTA_Ability_Holdout_Multishot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_MultishotClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Holdout_MultishotClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Holdout_Multishot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_MultishotClass;
}


// CDOTA_Ability_Holdout_Multishot::GetIntrinsicModifierName  (line 1080, @0x0000000002a08ad0, libserver.so)
// strings: "modifier_holdout_multishot"
const char *__fastcall CDOTA_Ability_Holdout_Multishot::GetIntrinsicModifierName(
        CDOTA_Ability_Holdout_Multishot *const this)
{
  return "modifier_holdout_multishot";
}


// CDOTA_Ability_Holdout_Multishot::ProcsMagicStick  (line 1082, @0x0000000002a08ae0, libserver.so)
bool __fastcall CDOTA_Ability_Holdout_Multishot::ProcsMagicStick(CDOTA_Ability_Holdout_Multishot *const this)
{
  return 0;
}


// CDOTA_Ability_Holdout_Multishot::IsStealable  (line 1083, @0x0000000002a08af0, libserver.so)
bool __fastcall CDOTA_Ability_Holdout_Multishot::IsStealable(CDOTA_Ability_Holdout_Multishot *const this)
{
  return 0;
}


// CDOTA_Ability_Holdout_Multishot::YouForgotToImplementOrDeclareServerClass  (line 1103, @0x00000000029b4990, libserver.so)
int __fastcall CDOTA_Ability_Holdout_Multishot::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Holdout_Multishot *const this)
{
  return 0;
}


// CDOTA_Ability_Holdout_Multishot::GetServerClass  (line 1103, @0x00000000029c93b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Holdout_Multishot::GetServerClass(CDOTA_Ability_Holdout_Multishot *const this)
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


// CDOTA_Ability_Holdout_Multishot::OnAbilityPhaseStart  (line 1111, @0x00000000029b9110, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::StartGesture
bool __fastcall CDOTA_Ability_Holdout_Multishot::OnAbilityPhaseStart(CDOTA_Ability_Holdout_Multishot *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(Caster, 1503, 0.0, 0.0, 2, 0, 1.0);
  return 1;
}


// CDOTA_Ability_Holdout_Multishot::OnSpellStart  (line 1120, @0x00000000029e9700, libserver.so)  // inlines: CEntityHandle, CHandle
// calls: CDOTABaseAbility::GetCursorPosition, CDOTA_Ability_Holdout_Multishot::DoMultishot, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttackAnimationPoint, CDOTA_BaseNPC::GetHasteFactor
void __fastcall CDOTA_Ability_Holdout_Multishot::OnSpellStart(CDOTA_Ability_Holdout_Multishot *const this)
{
  void (__fastcall *v2)(CDOTA_Ability_Holdout_Multishot *const, double); // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v4; // rax
  float HasteFactor; // xmm0_4
  double v6; // xmm2_8
  float AttackAnimationPoint; // [rsp+Ch] [rbp-34h]
  EHANDLE hTarget; // [rsp+10h] [rbp-30h] BYREF
  Vector CursorPosition; // [rsp+20h] [rbp-20h]

  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  hTarget.m_Index = -1;
  CDOTA_Ability_Holdout_Multishot::DoMultishot(this, &hTarget, CursorPosition);
  v2 = *(this->_vptr_IHandleEntity + 241);
  Caster = CDOTABaseAbility::GetCaster(this);
  AttackAnimationPoint = CDOTA_BaseNPC::GetAttackAnimationPoint(Caster);
  v4 = CDOTABaseAbility::GetCaster(this);
  HasteFactor = CDOTA_BaseNPC::GetHasteFactor(v4);
  *&v6 = LODWORD(AttackAnimationPoint);
  *&v6 = AttackAnimationPoint / HasteFactor;
  v2(this, v6);
}


// CDOTA_Ability_Holdout_Multishot::GetCastPoint  (line 1130, @0x00000000029ba2c0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttackAnimationPoint, CDOTA_BaseNPC::GetHasteFactor
float __fastcall CDOTA_Ability_Holdout_Multishot::GetCastPoint(CDOTA_Ability_Holdout_Multishot *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  float AttackAnimationPoint; // [rsp+Ch] [rbp-14h]

  Caster = CDOTABaseAbility::GetCaster(this);
  AttackAnimationPoint = CDOTA_BaseNPC::GetAttackAnimationPoint(Caster);
  v3 = CDOTABaseAbility::GetCaster(this);
  return AttackAnimationPoint / CDOTA_BaseNPC::GetHasteFactor(v3);
}


// CDOTA_Ability_Holdout_Multishot::DoMultishot  (line 1141, @0x00000000029e8d80, libserver.so)  // inlines: CEntityHandle, CHandle, FastSqrt, Get, GetAutoCastState, GetEHandle, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, Length, Normalized, Set, SetBool, ToDOTABaseNPC, Vector, VectorLength, VectorLerp, VectorMultiply, VectorRotate, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator*, operator-, operator=, sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CEntityHandle::operator CEntityInstance*, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, VectorNormalize, MatrixBuildRotationAboutAxis, VectorRotate, CDOTA_BaseNPC::FindAbilityByName, CDOTA_ProjectileManager::CreateLinearProjectile, KeyValues::KeyValues, KeyValues::SetInt (22 total)
// callers: CDOTA_Ability_Holdout_Multishot::OnSpellStart, CDOTA_OrbHoldout_Multishot::OnOrbFire
// strings: "arrow_width", "arrow_speed", "arrow_range", "arrow_spread", "arrow_count", "holdout_glacier_arrows" (12 total)
void __fastcall CDOTA_Ability_Holdout_Multishot::DoMultishot(
        CDOTA_Ability_Holdout_Multishot *const this,
        const CEntityHandle *hTarget,
        Vector vLocation)
{
  const CBaseEntity *v5; // rax
  const Vector *AbsOrigin; // rax
  float x; // r12d
  float y; // r14d
  float z; // r13d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *v11; // rax
  float v12; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm1_4
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int arrow_count; // eax
  int i; // r13d
  vec_t v21; // xmm2_4
  vec_t v22; // xmm3_4
  vec_t v23; // xmm2_4
  vec_t v24; // xmm2_4
  float arrow_range; // xmm0_4
  vec_t v26; // xmm2_4
  CDOTA_BaseNPC *v27; // rax
  CEntityIdentity *v28; // rdx
  int v29; // eax
  __int16 v30; // cx
  int v31; // r15d
  CDOTA_LinearProjectileInfo *v32; // r15
  CDOTA_BaseNPC *v33; // rax
  float v34; // xmm3_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm4_4
  bool IsOwnersManaEnough; // al
  vec_t v39; // xmm2_4
  vec_t v40; // xmm3_4
  vec_t v41; // xmm2_4
  vec_t v42; // xmm2_4
  vec_t v43; // xmm2_4
  float arrow_width; // xmm0_4
  CDOTA_BaseNPC *v45; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v47; // eax
  __int16 v48; // cx
  int v49; // r15d
  CDOTA_LinearProjectileInfo *LinearProjectileByHandle; // r15
  CDOTA_BaseNPC *v51; // rax
  CDOTA_BaseNPC *v52; // rax
  const QAngle *AbsAngles; // rax
  CDOTABaseAbility *pAbilityGlacierArrows; // [rsp+0h] [rbp-170h]
  float v55; // [rsp+8h] [rbp-168h]
  float v56; // [rsp+Ch] [rbp-164h]
  bool bTryToUseGlacierArrow; // [rsp+13h] [rbp-15Dh]
  float vVelocity; // [rsp+14h] [rbp-15Ch]
  float vVelocitya; // [rsp+14h] [rbp-15Ch]
  Vector vLocationa; // [rsp+20h] [rbp-150h] BYREF
  Vector vDirection; // [rsp+30h] [rbp-140h] BYREF
  Vector vecStartRot; // [rsp+40h] [rbp-130h] BYREF
  Vector vecEndRot; // [rsp+50h] [rbp-120h] BYREF
  Vector vecRotAxis; // [rsp+60h] [rbp-110h] BYREF
  matrix3x4_t matRot; // [rsp+70h] [rbp-100h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+A0h] [rbp-D0h] BYREF
  KeyValues projExtraDataKV; // [rsp+120h] [rbp-50h] BYREF
  unsigned __int64 v68; // [rsp+138h] [rbp-38h]

  this->m_bShouldReduceDamage = 1;
  v68 = __readfsqword(0x28u);
  vLocationa = vLocation;
  this->arrow_width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "arrow_width", -1, 0);
  this->arrow_speed = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "arrow_speed", -1, 0);
  this->arrow_range = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "arrow_range", -1, 0);
  this->arrow_spread = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "arrow_spread", -1, 0);
  this->arrow_count = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "arrow_count", -1, 0);
  v5 = CEntityHandle::operator CEntityInstance *(hTarget);
  if ( v5 != 0 && v5->m_bIsDOTANPC )
    AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  else
    AbsOrigin = &vLocationa;
  x = AbsOrigin->x;
  y = AbsOrigin->y;
  z = AbsOrigin->z;
  Caster = CDOTABaseAbility::GetCaster(this);
  v11 = CBaseEntity::GetAbsOrigin(Caster);
  v12 = x - v11->x;
  v13 = z - v11->z;
  *(&info.pszEffectName + 1) = y - v11->y;
  *&info.pszEffectName = v12;
  *&info.pAbility = v13;
  VectorNormalize(&info);
  vDirection = *&info.pszEffectName;
  v14 = 0.0099999998;
  if ( fsqrt(
         ((vDirection.x * vDirection.x) + (*(&info.pszEffectName + 1) * *(&info.pszEffectName + 1)))
       + (*&info.pAbility * *&info.pAbility)) < 0.0099999998 )
  {
    v52 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v52);
    AngleVectors(AbsAngles, &vDirection, 0, 0);
  }
  vDirection.z = 0.0;
  vecRotAxis.x = 0.0;
  vecRotAxis.y = 0.0;
  vecRotAxis.z = 1.0;
  MatrixBuildRotationAboutAxis(&vecRotAxis, v14, &matRot);
  VectorRotate(&vDirection.x, &matRot, &vecStartRot.x);
  MatrixBuildRotationAboutAxis(&vecRotAxis, v15, &matRot);
  VectorRotate(&vDirection.x, &matRot, &vecEndRot.x);
  v16 = CDOTABaseAbility::GetCaster(this);
  this->m_vStartPos = *CBaseEntity::GetAbsOrigin(v16);
  v17 = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v17, "holdout_glacier_arrows", 0);
  pAbilityGlacierArrows = AbilityByName;
  bTryToUseGlacierArrow = AbilityByName != 0 && AbilityByName->m_bAutoCastState.m_Value;
  arrow_count = this->arrow_count;
  if ( arrow_count > 0 )
  {
    for ( i = 0; i < arrow_count; ++i )
    {
      v34 = i / arrow_count;
      vVelocity = this->arrow_speed;
      *(&info.pszEffectName + 1) = ((vecEndRot.y - vecStartRot.y) * v34) + vecStartRot.y;
      *&info.pAbility = ((vecEndRot.z - vecStartRot.z) * v34) + vecStartRot.z;
      *&info.pszEffectName = ((vecEndRot.x - vecStartRot.x) * v34) + vecStartRot.x;
      VectorNormalize(&info);
      v35 = *&info.pszEffectName * vVelocity;
      v36 = *(&info.pszEffectName + 1) * vVelocity;
      v37 = vVelocity * *&info.pAbility;
      if ( bTryToUseGlacierArrow
        && (v55 = vVelocity * *&info.pAbility,
            v56 = *(&info.pszEffectName + 1) * vVelocity,
            vVelocitya = *&info.pszEffectName * vVelocity,
            IsOwnersManaEnough = CDOTABaseAbility::IsOwnersManaEnough(pAbilityGlacierArrows),
            v35 = vVelocitya,
            v36 = v56,
            v37 = v55,
            IsOwnersManaEnough) )
      {
        CDOTABaseAbility::PayManaCost(pAbilityGlacierArrows, 0);
        v39 = vec3_origin.z;
        info.bProvidesVision = 0;
        v40 = vec3_origin.y;
        info.vAcceleration.z = v39;
        v41 = this->m_vStartPos.x;
        info.vAcceleration.y = v40;
        info.vSpawnOrigin.x = v41;
        v42 = this->m_vStartPos.y;
        info.vAcceleration.x = vec3_origin.x;
        info.vSpawnOrigin.y = v42;
        v43 = this->m_vStartPos.z;
        info.pszEffectName = "drow_linear_frost_arrow";
        info.vVelocity.x = vVelocitya;
        info.vSpawnOrigin.z = v43;
        info.hSource.m_Index = -1;
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
        info.vVelocity.y = v56;
        info.fDistance = this->arrow_range;
        arrow_width = this->arrow_width;
        info.vVelocity.z = v55;
        info.fStartRadius = arrow_width;
        info.fEndRadius = arrow_width;
        v45 = CDOTABaseAbility::GetCaster(this);
        if ( v45 != 0 && (m_pEntity = v45->m_pEntity) != 0 )
        {
          v47 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v48 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v48 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(info.hSource.m_Index) = v48 | info.hSource.m_Index & 0x8000;
          info.hSource.m_Index = (v47 << 15) | info.hSource.m_Index & 0x7FFF;
        }
        else
        {
          info.hSource.m_Index = -1;
        }
        info.bProvidesVision = 1;
        info.iUnitTargetTeam = 2;
        info.iUnitTargetType = 19;
        info.iVisionTeamNumber = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
        v49 = CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
        KeyValues::KeyValues(&projExtraDataKV, "proj_handle");
        KeyValues::SetInt(&projExtraDataKV, "proj_handle", v49);
        KeyValues::SetInt(&projExtraDataKV, "use_frost_arrow", 1);
        LinearProjectileByHandle = CDOTA_ProjectileManager::GetLinearProjectileByHandle(&g_DOTAProjectileManager, v49);
        if ( LinearProjectileByHandle != 0 )
          LinearProjectileByHandle->m_pExtraData = KeyValues::MakeCopy(&projExtraDataKV);
        v51 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::UnitEmitSound(v51, "Hero_DrowRanger.FrostArrows", 0.0, 0, 0);
      }
      else
      {
        v21 = vec3_origin.z;
        v22 = vec3_origin.y;
        info.vVelocity.y = v36;
        info.vAcceleration.z = v21;
        v23 = this->m_vStartPos.x;
        info.vAcceleration.y = v22;
        info.vSpawnOrigin.x = v23;
        v24 = this->m_vStartPos.y;
        arrow_range = this->arrow_range;
        info.vAcceleration.x = vec3_origin.x;
        info.vSpawnOrigin.y = v24;
        v26 = this->m_vStartPos.z;
        info.pszEffectName = "drow_linear_arrow";
        info.vSpawnOrigin.z = v26;
        info.vVelocity.x = v35;
        info.vVelocity.z = v37;
        info.hSource.m_Index = -1;
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
        info.fDistance = arrow_range;
        info.fStartRadius = this->arrow_width;
        info.fEndRadius = info.fStartRadius;
        v27 = CDOTABaseAbility::GetCaster(this);
        if ( v27 != 0 && (v28 = v27->m_pEntity) != 0 )
        {
          v29 = (v28->m_EHandle.m_Index >> 15) - (v28->m_flags & 1);
          v30 = 0x7FFF;
          if ( v28->m_EHandle.m_Index != -1 )
            v30 = v28->m_EHandle.m_Index & 0x7FFF;
          LOWORD(info.hSource.m_Index) = v30 | info.hSource.m_Index & 0x8000;
          info.hSource.m_Index = (v29 << 15) | info.hSource.m_Index & 0x7FFF;
        }
        else
        {
          info.hSource.m_Index = -1;
        }
        info.bProvidesVision = 1;
        info.iUnitTargetTeam = 2;
        info.iUnitTargetType = 19;
        info.iVisionTeamNumber = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
        v31 = CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
        KeyValues::KeyValues(&projExtraDataKV, "proj_handle");
        KeyValues::SetInt(&projExtraDataKV, "proj_handle", v31);
        KeyValues::SetInt(&projExtraDataKV, "use_frost_arrow", 0);
        v32 = CDOTA_ProjectileManager::GetLinearProjectileByHandle(&g_DOTAProjectileManager, v31);
        if ( v32 != 0 )
          v32->m_pExtraData = KeyValues::MakeCopy(&projExtraDataKV);
        v33 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::UnitEmitSound(v33, "Hero_DrowRanger.Attack", 0.0, 0, 0);
      }
      KeyValues::~KeyValues(&projExtraDataKV);
      arrow_count = this->arrow_count;
    }
  }
}


// CDOTA_Ability_Holdout_Multishot::OnProjectileHit_ExtraData  (line 1257, @0x00000000029c3110, libserver.so)  // inlines: Get, GetBool, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsConsideredHero, IsInvulnerable, IsValid, LookupEntity, SetShouldReduceDamage, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: KeyValues::GetInt, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::CreateAttackRecord, DamageImpact, CDOTA_ProjectileManager::GetLinearProjectileByHandle, CDOTA_ProjectileManager::DestroyLinearProjectile
// strings: "use_frost_arrow", "proj_handle"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Holdout_Multishot::OnProjectileHit_ExtraData(
        CDOTA_Ability_Holdout_Multishot *const this,
        _WORD *hTarget,
        const Vector *const vLocation,
        KeyValues *pExtraData)
{
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // rbx
  int m_Id; // eax
  int (**vptr_IHandleEntity)(...); // rax
  int Int; // eax
  int v13; // r14d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_AttackRecord *AttackRecord; // rdi
  int v16; // r13d

  if ( (*hTarget + 2) > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[*hTarget & 0x1FF];
      if ( v7 != 0 && *hTarget == v7->m_EHandle.m_Index )
      {
        m_pInstance = v7->m_pInstance;
        if ( v7->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
        {
          m_Id = m_pInstance[43].m_iszPrivateVScripts.u.m_Id;
          if ( ((m_Id & 0x80u) != 0 || (m_Id & 3) != 0) && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0 )
          {
            vptr_IHandleEntity = m_pInstance[58]._vptr_IHandleEntity;
            if ( (BYTE1(vptr_IHandleEntity) & 1) == 0 && (vptr_IHandleEntity & 4) == 0 )
            {
              Int = KeyValues::GetInt(pExtraData, "use_frost_arrow", 0);
              this->m_bShouldReduceDamage = 1;
              v13 = Int;
              Caster = CDOTABaseAbility::GetCaster(this);
              AttackRecord = CDOTA_BaseNPC::CreateAttackRecord(Caster, m_pInstance, v13 != 0, 1, 0, 0, 0);
              if ( AttackRecord != 0 )
              {
                DamageImpact(AttackRecord);
                v16 = KeyValues::GetInt(pExtraData, "proj_handle", 0);
                if ( CDOTA_ProjectileManager::GetLinearProjectileByHandle(&g_DOTAProjectileManager, v16) != 0 )
                  CDOTA_ProjectileManager::DestroyLinearProjectile(&g_DOTAProjectileManager, v16);
                this->m_bShouldReduceDamage = 0;
              }
            }
          }
        }
      }
    }
  }
  return 1;
}


// CDOTA_OrbHoldout_Multishot::~CDOTA_OrbHoldout_Multishot  (line 1298, @0x0000000002a0c610, libserver.so)  // inlines: ~CDOTA_Orb
void __fastcall CDOTA_OrbHoldout_Multishot::~CDOTA_OrbHoldout_Multishot(CDOTA_OrbHoldout_Multishot *const this)
{
  this->_vptr_CDOTA_Orb = &off_4115E90;
}


// CDOTA_OrbHoldout_Multishot::~CDOTA_OrbHoldout_Multishot  (line 1298, @0x0000000002a0eaa0, libserver.so)  // inlines: ~CDOTA_Orb, ~CDOTA_OrbHoldout_Multishot
// calls: operator delete
void __fastcall CDOTA_OrbHoldout_Multishot::~CDOTA_OrbHoldout_Multishot(CDOTA_OrbHoldout_Multishot *const this)
{
  this->_vptr_CDOTA_Orb = &off_4115E90;
  operator delete(this);
}


// CDOTA_OrbHoldout_Multishot::OnOrbFire  (line 1306, @0x0000000002a33d70, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Orb::GetAbility, CDOTA_BaseNPC::SpendMana, CDOTA_Ability_Holdout_Multishot::DoMultishot, CDOTA_AttackRecord::DeleteOrb
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_OrbHoldout_Multishot::OnOrbFire(
        CDOTA_OrbHoldout_Multishot *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_Ability_Holdout_Multishot *v10; // r12
  CDOTABaseAbility *Ability; // r14
  int v12; // eax
  EHANDLE hTarget; // [rsp+0h] [rbp-30h] BYREF

  m_Index = this->m_hCaster.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hCaster.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[this->m_hCaster.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v7 = this->m_hAbility.m_Index;
  if ( v7 + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hAbility.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[this->m_hAbility.m_Index & 0x1FF];
      if ( v9 != 0 && v7 == v9->m_EHandle.m_Index )
      {
        v10 = v9->m_pInstance;
        if ( v9->m_pInstance != 0 )
        {
          if ( (*(v10->_vptr_IHandleEntity + 274))(v9->m_pInstance, 0xFFFFFFFFLL) > m_pInstance->m_flMana.m_Value )
          {
            CDOTA_AttackRecord::DeleteOrb(this->m_pRecord);
          }
          else
          {
            Ability = CDOTA_Orb::GetAbility(this);
            v12 = (*(v10->_vptr_IHandleEntity + 274))(v10, 0xFFFFFFFFLL);
            CDOTA_BaseNPC::SpendMana(m_pInstance, v12, Ability, 0);
            this->m_pRecord->m_flDamagePhysical = 0.0;
            hTarget.m_Index = this->m_pRecord->m_hTarget.m_Index;
            CDOTA_Ability_Holdout_Multishot::DoMultishot(v10, &hTarget, vec3_invalid);
          }
        }
      }
    }
  }
}


// CDOTA_Modifier_Holdout_Multishot::~CDOTA_Modifier_Holdout_Multishot  (line 1340, @0x0000000002a12420, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Holdout_Multishot::~CDOTA_Modifier_Holdout_Multishot(
        CDOTA_Modifier_Holdout_Multishot *const this)
{
  this->_vptr_CDOTA_Buff = &off_4337270;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Holdout_Multishot::~CDOTA_Modifier_Holdout_Multishot  (line 1340, @0x0000000002a12440, libserver.so)  // inlines: ~CDOTA_Modifier_Holdout_Multishot
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Holdout_Multishot::~CDOTA_Modifier_Holdout_Multishot(
        CDOTA_Modifier_Holdout_Multishot *const this)
{
  this->_vptr_CDOTA_Buff = &off_4337270;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Holdout_Multishot::IsHidden  (line 1345, @0x0000000002a08b00, libserver.so)
bool __fastcall CDOTA_Modifier_Holdout_Multishot::IsHidden(CDOTA_Modifier_Holdout_Multishot *const this)
{
  return 1;
}


// CDOTA_Modifier_Holdout_Multishot::IsPurgable  (line 1348, @0x0000000002a08b10, libserver.so)
bool __fastcall CDOTA_Modifier_Holdout_Multishot::IsPurgable(CDOTA_Modifier_Holdout_Multishot *const this)
{
  return 0;
}


// CDOTA_Modifier_Holdout_Multishot::GetOrbPriority  (line 1353, @0x0000000002a20c10, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Buff::GetCaster
// strings: "holdout_glacier_arrows"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Modifier_Holdout_Multishot::GetOrbPriority(
        CDOTA_Modifier_Holdout_Multishot *const this,
        CDOTA_AttackRecord *pRecord)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  int result; // eax
  CEntityInstance *m_pInstance; // r13
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *AbilityByName; // rbx
  CDOTABaseAbility *Ability; // rax
  int v12; // ebx
  CDOTABaseAbility *v13; // rax
  char m_CScriptComponent_high; // bl
  CDOTABaseAbility *v15; // rdx

  m_Index = pRecord->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1 )
    return 0;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pRecord->m_hTarget.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    return 0;
  v5 = &v4[pRecord->m_hTarget.m_Index & 0x1FF];
  if ( v5 == 0 )
    return 0;
  if ( m_Index != v5->m_EHandle.m_Index )
    return 0;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
    || !CDOTA_Buff::GetAbility(this)->m_bAutoCastState.m_Value )
  {
    return 0;
  }
  if ( pRecord->m_bUseCastAttackOrb && CDOTA_Buff::GetAbility(this)->m_bAutoCastState.m_Value )
    return 4;
  Parent = CDOTA_Buff::GetParent(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Parent, "holdout_glacier_arrows", 0);
  if ( AbilityByName != 0 || (v15 = CDOTA_Buff::GetAbility(this), result = 3, !v15->m_bAutoCastState.m_Value) )
  {
    if ( AbilityByName->m_bAutoCastState.m_Value )
    {
      if ( CDOTA_Buff::GetAbility(this)->m_bAutoCastState.m_Value )
        return 4;
      if ( AbilityByName->m_bAutoCastState.m_Value )
      {
        if ( !CDOTA_Buff::GetAbility(this)->m_bAutoCastState.m_Value )
          return 0;
        if ( AbilityByName->m_bAutoCastState.m_Value )
          goto LABEL_15;
      }
    }
    if ( !CDOTA_Buff::GetAbility(this)->m_bAutoCastState.m_Value )
    {
      if ( AbilityByName->m_bAutoCastState.m_Value || CDOTA_Buff::GetAbility(this)->m_bAutoCastState.m_Value )
      {
LABEL_15:
        Ability = CDOTA_Buff::GetAbility(this);
        v12 = (*(Ability->_vptr_IHandleEntity + 274))(Ability, 0xFFFFFFFFLL);
        if ( v12 <= CDOTA_Buff::GetParent(this)->m_flMana.m_Value )
        {
          v13 = CDOTA_Buff::GetAbility(this);
          if ( (*(v13->_vptr_IHandleEntity + 256))(v13, m_pInstance) == 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0 )
          {
            m_CScriptComponent_high = HIBYTE(m_pInstance[7].m_CScriptComponent);
            if ( m_CScriptComponent_high != CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value
              && (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 8) == 0 )
            {
              return 3;
            }
          }
        }
      }
      return 0;
    }
    return 4;
  }
  return result;
}


// CDOTA_Modifier_Holdout_Multishot::IsCastAttack  (line 1404, @0x0000000002a08b20, libserver.so)
bool __fastcall CDOTA_Modifier_Holdout_Multishot::IsCastAttack(CDOTA_Modifier_Holdout_Multishot *const this)
{
  return 0;
}


// CDOTA_Modifier_Holdout_Multishot::OnCreated  (line 1418, @0x00000000029f7ba0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, __dynamic_cast
// globals: `typeinfo for'CDOTA_Ability_Holdout_Multishot
void __fastcall CDOTA_Modifier_Holdout_Multishot::OnCreated(
        CDOTA_Modifier_Holdout_Multishot *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage_reduction_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_reduction_pct", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->m_pMultishotAbility = __dynamic_cast(
                                    v4,
                                    &`typeinfo for'CDOTABaseAbility,
                                    &`typeinfo for'CDOTA_Ability_Holdout_Multishot,
                                    0);
      return;
    }
  }
  else
  {
    this->damage_reduction_pct = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->m_pMultishotAbility = 0;
}


// CDOTA_Modifier_Holdout_Multishot::GetCustomOrb  (line 1425, @0x00000000029c4930, libserver.so)  // inlines: CDOTA_OrbHoldout_Multishot, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, KeyValues::KeyValues, CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, operator new, CDOTA_Orb::CDOTA_Orb, KeyValues::~KeyValues, _Unwind_Resume, operator delete
// strings: "CDOTA_OrbHoldout_Multishot"
// globals: CEntityHandle::gm_pEntityList
CDOTA_Orb *__fastcall CDOTA_Modifier_Holdout_Multishot::GetCustomOrb(
        CDOTA_Modifier_Holdout_Multishot *const this,
        CDOTA_AttackRecord *pRecord)
{
  uint32 m_Index; // edx
  CEntityIdentity *v4; // rax
  __int64 v5; // rcx
  bool v6; // zf
  CEntityIdentity *v7; // rcx
  CDOTA_Orb *result; // rax
  CDOTA_BaseNPC *Caster; // r14
  CDOTABaseAbility *Ability; // r15
  CDOTA_Orb *v12; // rbx
  KeyValues kv; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-38h]

  v14 = __readfsqword(0x28u);
  m_Index = pRecord->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1 )
    return 0;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pRecord->m_hTarget.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    return 0;
  v5 = pRecord->m_hTarget.m_Index & 0x1FF;
  v6 = &v4[v5] == 0;
  v7 = &v4[v5];
  result = 0;
  if ( !v6
    && m_Index == v7->m_EHandle.m_Index
    && v7->m_pInstance != 0
    && BYTE3(v7->m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    KeyValues::KeyValues(&kv, "CDOTA_OrbHoldout_Multishot");
    Caster = CDOTA_Buff::GetCaster(this);
    Ability = CDOTA_Buff::GetAbility(this);
    v12 = operator new(0x18u);
    CDOTA_Orb::CDOTA_Orb(v12, pRecord, &kv, Caster, Ability);
    v12->_vptr_CDOTA_Orb = &off_43371D0;
    KeyValues::~KeyValues(&kv);
    return v12;
  }
  return result;
}


// CDOTA_Modifier_Holdout_Multishot::DeclareFunctions  (line 1443, @0x00000000029b49a0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Holdout_Multishot::GetModifierDamageOutgoing_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Holdout_Multishot::DeclareFunctions(CDOTA_Modifier_Holdout_Multishot *const this)
{
  this->m_Functions[28].__pfn = CDOTA_Modifier_Holdout_Multishot::GetModifierDamageOutgoing_Percentage;
  this->m_Functions[28].__delta = 0;
}


// CDOTA_Modifier_Holdout_Multishot::GetModifierDamageOutgoing_Percentage  (line 1450, @0x00000000029bbb80, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Holdout_Multishot::GetModifierDamageOutgoing_Percentage(
        CDOTA_Modifier_Holdout_Multishot *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  CDOTA_Ability_Holdout_Multishot *m_pMultishotAbility; // rax
  ModifierVariant_t result; // 0:rax.16

  m_pMultishotAbility = this->m_pMultishotAbility;
  if ( m_pMultishotAbility == 0 || !m_pMultishotAbility->m_bShouldReduceDamage )
    return 1uLL;
  result.m_szVal = 0;
  *v2.m128i_i32 = -this->damage_reduction_pct;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


