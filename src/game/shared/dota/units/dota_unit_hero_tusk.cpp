// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_tusk.cpp:33
class CDOTA_Unit_Hero_Tusk : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Tusk(CDOTA_Unit_Hero_Tusk &);
	CDOTA_Unit_Hero_Tusk(CDOTA_Unit_Hero_Tusk &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void OnItemEquipped(CDOTA_Item *);
	void ShowAmbientFX(bool);
	CDOTA_Unit_Hero_Tusk();
	virtual ~CDOTA_Unit_Hero_Tusk();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[6] Precache
	// vtable[479] OnItemEquipped
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_tusk.cpp:101
class C_CDOTA_Unit_Hero_Tusk_MapInstall {
	C_CDOTA_Unit_Hero_Tusk_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_tusk.cpp:146
class CDOTA_Ability_Tusk_IceShards_Stop : public CDOTABaseAbility {
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
	CDOTA_Ability_Tusk_IceShards_Stop(CDOTA_Ability_Tusk_IceShards_Stop &);
	CDOTA_Ability_Tusk_IceShards_Stop(CDOTA_Ability_Tusk_IceShards_Stop &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CDOTA_Ability_Tusk_IceShards_Stop();
	virtual bool ProcsMagicStick();
	virtual void OnSpellStart();
	virtual int GetConceptRecipientType();
	virtual const char * GetAssociatedPrimaryAbilities();
	virtual bool IsHiddenWhenStolen();
	virtual ~CDOTA_Ability_Tusk_IceShards_Stop();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[239] ProcsMagicStick
	// vtable[266] OnSpellStart
	// vtable[299] GetConceptRecipientType
	// vtable[303] GetAssociatedPrimaryAbilities
	// vtable[306] IsHiddenWhenStolen
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_tusk.cpp:170
class CDOTA_Ability_Tusk_IceShards : public CDOTABaseAbility {
public:

private:

	int m_iProjectile;  // +0x390
	int shard_width;  // +0x394
	int shard_damage;  // +0x398
	int shard_count;  // +0x39c
	float shard_speed;  // +0x3a0
	float shard_duration;  // +0x3a4
	float shard_angle_step;  // +0x3a8
	int shard_distance;  // +0x3ac
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
	CDOTA_Ability_Tusk_IceShards(CDOTA_Ability_Tusk_IceShards &);
	CDOTA_Ability_Tusk_IceShards(CDOTA_Ability_Tusk_IceShards &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CDOTA_Ability_Tusk_IceShards();
	virtual void OnUpgrade();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	void CreateShards(Vector);
	virtual void OnProjectileThink(const Vector &);
	Vector GetOrbLocation();
	void DestroyOrb();
	bool IsOrbValid();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Tusk_IceShards();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[268] OnUpgrade
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[291] OnProjectileThink
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 992
};

// src/game/shared/dota/units/dota_unit_hero_tusk.cpp:497
class CDOTA_Modifier_Tusk_IceShard : public CDOTA_Buff {
public:

	CDOTA_Modifier_Tusk_IceShard();
	virtual void OnDestroy();
	virtual bool ShouldSendToClients();
	virtual bool IsHidden();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Tusk_IceShard();

	// vtable[60] OnDestroy
	// vtable[8] ShouldSendToClients
	// vtable[11] IsHidden
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_tusk.cpp:559
class CDOTA_Ability_Tusk_Snowball : public CDOTABaseAbility, public CHorizontalMotionController {
public:

private:

	int snowball_windup_radius;  // +0x39c
	int snowball_radius;  // +0x3a0
	int snowball_grow_rate;  // +0x3a4
	int snowball_damage;  // +0x3a8
	int snowball_damage_bonus;  // +0x3ac
	float stun_duration;  // +0x3b0
	int bonus_damage;  // +0x3b4
	float bonus_stun;  // +0x3b8
	int snowball_speed;  // +0x3bc
	float snowball_duration;  // +0x3c0
	int m_nFXIndex;  // +0x3e8

	bool m_bSpeakAlly;  // +0x408
	bool m_bIsExpired;  // +0x409
	bool m_bInWindup;  // +0x40a

	EHANDLE m_hPrimaryTarget;  // +0x40c
	int m_nContainedValidUnits;  // +0x410
	bool m_bEndingSnowball;  // +0x414

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
	CDOTA_Ability_Tusk_Snowball(CDOTA_Ability_Tusk_Snowball &);
	CDOTA_Ability_Tusk_Snowball(CDOTA_Ability_Tusk_Snowball &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CDOTA_Ability_Tusk_Snowball();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual void OnProjectileThink(const Vector &);
	virtual void OnUpgrade();
	virtual void OnUnStolen();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual const char * GetAssociatedSecondaryAbilities();
	void LoadUnit(CDOTA_BaseNPC *);
	bool IsInWindup();
	void LaunchSnowball();
	virtual void Think();
	void EndSnowball(bool);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Tusk_Snowball();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[291] OnProjectileThink
	// vtable[268] OnUpgrade
	// vtable[308] OnUnStolen
	// vtable[333] UpdateHorizontalMotion
	// vtable[334] OnHorizontalMotionInterrupted
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[117] Think
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// sizeof = 1144
};

// src/game/shared/dota/units/dota_unit_hero_tusk.cpp:1103
class CDOTA_Ability_Tusk_Launch_Snowball : public CDOTABaseAbility {
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
	CDOTA_Ability_Tusk_Launch_Snowball(CDOTA_Ability_Tusk_Launch_Snowball &);
	CDOTA_Ability_Tusk_Launch_Snowball(CDOTA_Ability_Tusk_Launch_Snowball &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CDOTA_Ability_Tusk_Launch_Snowball();
	virtual void OnSpellStart();
	virtual bool ProcsMagicStick();
	virtual const char * GetAssociatedPrimaryAbilities();
	virtual bool IsHiddenWhenStolen();
	virtual ~CDOTA_Ability_Tusk_Launch_Snowball();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[239] ProcsMagicStick
	// vtable[303] GetAssociatedPrimaryAbilities
	// vtable[306] IsHiddenWhenStolen
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_tusk.cpp:1138
class CDOTA_Modifier_Tusk_Snowball_Visible : public CDOTA_Buff {
public:

	CDOTA_Modifier_Tusk_Snowball_Visible();
	virtual bool IsDebuff();
	virtual bool IsHidden();
	virtual int GetPriority();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierProvidesFOWVision(const CModifierParams &);
	virtual ~CDOTA_Modifier_Tusk_Snowball_Visible();

	// vtable[12] IsDebuff
	// vtable[11] IsHidden
	// vtable[6] GetPriority
	// vtable[65] DeclareFunctions
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_tusk.cpp:1174
class CDOTA_Modifier_Tusk_Snowball_Movement : public CDOTA_Buff {
public:

	CDOTA_Modifier_Tusk_Snowball_Movement();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	ModifierVariant_t OnOrder(const CModifierParams &);
	ModifierVariant_t OnTeleported(const CModifierParams &);
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsHidden();
	virtual bool IsPurgable();
	bool IsInWindup();
	virtual ~CDOTA_Modifier_Tusk_Snowball_Movement();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[5] CheckState
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_tusk.cpp:1342
class CDOTA_Modifier_Tusk_Snowball_Movement_Friendly : public CDOTA_Buff, public CHorizontalMotionController {
public:

	CDOTA_Modifier_Tusk_Snowball_Movement_Friendly();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual int StatusEffectPriority();
	virtual bool IsMotionController();
	virtual void DeclareFunctions();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	ModifierVariant_t OnTeleported(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Tusk_Snowball_Movement_Friendly();

	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] OnHorizontalMotionInterrupted
	// vtable[91] IsHorizontalMotionValidToApply
	// vtable[71] StatusEffectPriority
	// vtable[21] IsMotionController
	// vtable[65] DeclareFunctions
	// vtable[5] CheckState
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_tusk.cpp:1477
class CDOTA_BaseNPC_Tusk_Sigil : public CDOTA_BaseNPC_Additive {
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
	CDOTA_BaseNPC_Tusk_Sigil(CDOTA_BaseNPC_Tusk_Sigil &);
	CDOTA_BaseNPC_Tusk_Sigil(CDOTA_BaseNPC_Tusk_Sigil &);
	CDOTA_BaseNPC_Tusk_Sigil();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual float GetBonusFlyHeight();
	virtual ~CDOTA_BaseNPC_Tusk_Sigil();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[490] GetBonusFlyHeight
	// sizeof = 4504
};

// src/game/shared/dota/units/dota_unit_hero_tusk.cpp:1496
class C_CDOTA_BaseNPC_Tusk_Sigil_MapInstall {
	C_CDOTA_BaseNPC_Tusk_Sigil_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_tusk.cpp:1536
class CDOTA_Ability_Tusk_FrozenSigil : public CDOTABaseAbility {
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
	CDOTA_Ability_Tusk_FrozenSigil(CDOTA_Ability_Tusk_FrozenSigil &);
	CDOTA_Ability_Tusk_FrozenSigil(CDOTA_Ability_Tusk_FrozenSigil &);
	CDOTA_Ability_Tusk_FrozenSigil();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual float GetAOERadius();
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Tusk_FrozenSigil();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[333] GetAOERadius
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_tusk.cpp:1549
class C_CDOTA_Ability_Tusk_FrozenSigil_MapInstall {
	C_CDOTA_Ability_Tusk_FrozenSigil_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_tusk.cpp:1609
class CDOTA_Modifier_Tusk_FrozenSigil_Aura : public CDOTA_Buff {
public:

private:

	int sigil_radius;  // +0xba8
	int m_iIndex;  // +0xbac
	CDOTA_Modifier_Tusk_FrozenSigil_Aura();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraRadius();
	virtual bool IsHidden();
	virtual void CheckState(CDOTABuffState &);
	ModifierVariant_t GetAbsoluteNoDamagePhysical(const CModifierParams &);
	ModifierVariant_t GetAbsoluteNoDamageMagical(const CModifierParams &);
	ModifierVariant_t GetAbsoluteNoDamagePure(const CModifierParams &);
	ModifierVariant_t OnAttacked(const CModifierParams &);
	virtual ~CDOTA_Modifier_Tusk_FrozenSigil_Aura();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[41] GetAuraRadius
	// vtable[11] IsHidden
	// vtable[5] CheckState
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_tusk.cpp:1758
class CDOTA_Modifier_Tusk_FrozenSigil : public CDOTA_Buff {
public:

private:

	int move_slow;  // +0xba8
	int attack_slow;  // +0xbac
	CDOTA_Modifier_Tusk_FrozenSigil();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Tusk_FrozenSigil();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_tusk.cpp:1823
class CDOTA_Ability_Tusk_WalrusPunch : public CDOTABaseAbility {
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
	CDOTA_Ability_Tusk_WalrusPunch(CDOTA_Ability_Tusk_WalrusPunch &);
	CDOTA_Ability_Tusk_WalrusPunch(CDOTA_Ability_Tusk_WalrusPunch &);
	CDOTA_Ability_Tusk_WalrusPunch();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual bool IsStealable();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Tusk_WalrusPunch();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[226] GetCastRange
	// vtable[305] IsStealable
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_tusk.cpp:1840
class C_CDOTA_Ability_Tusk_WalrusPunch_MapInstall {
	C_CDOTA_Ability_Tusk_WalrusPunch_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_tusk.cpp:1868
class CDOTA_Modifier_Tusk_WalrusPunch : public CDOTA_Buff {
public:

private:

	int crit_multiplier;  // +0xba8
	float air_time;  // +0xbac
	float slow_duration;  // +0xbb0

	string_t m_iszRangedAttackEffect;  // +0xbb8
	EHANDLE m_hTarget;  // +0xbc0
	bool m_bWalrusPunch;  // +0xbc4
	CDOTA_Modifier_Tusk_WalrusPunch();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsPurgable();
	virtual bool IsHidden();
	void CleanupPunch();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPreAttack_CriticalStrike(const CModifierParams &);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	ModifierVariant_t OnAttackStart(const CModifierParams &);
	ModifierVariant_t OnAttack(const CModifierParams &);
	ModifierVariant_t OnAttackFail(const CModifierParams &);
	ModifierVariant_t OnProjectileDodge(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	ModifierVariant_t GetModifierProcAttack_BonusDamage_Physical(const CModifierParams &);
	ModifierVariant_t OnAttackRecord(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Tusk_WalrusPunch();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// vtable[5] CheckState
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_tusk.cpp:2233
class CDOTA_Modifier_Tusk_WalrusPunch_Slow : public CDOTA_Buff {
public:

private:

	int move_slow;  // +0xba8
	CDOTA_Modifier_Tusk_WalrusPunch_Slow();
	virtual void OnCreated(KeyValues *);
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Tusk_WalrusPunch_Slow();

	// vtable[57] OnCreated
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_tusk.cpp:2284
class CDOTA_Modifier_Tusk_WalrusPunch_AirTime : public CDOTA_Buff, public CVerticalMotionController {
public:

private:

	int hp_threshold;  // +0xbb4
	float m_flStartZ;  // +0xbb8
	float m_flCurTime;  // +0xbbc
	float m_flOldPitch;  // +0xbc0
	int m_nRotations;  // +0xbd0
	float m_flEndTime;  // +0xbe0
	CDOTA_Modifier_Tusk_WalrusPunch_AirTime();
	virtual void CheckState(CDOTABuffState &);
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	virtual bool IsStunDebuff();
	virtual bool IsPermanent();
	virtual bool IsPurgable();
	virtual void UpdateVerticalMotion(CDOTA_BaseNPC *, float);
	virtual void OnVerticalMotionInterrupted();
	virtual bool IsVerticalMotionValidToApply();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual int GetPriority();
	virtual ~CDOTA_Modifier_Tusk_WalrusPunch_AirTime();

	// vtable[5] CheckState
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[16] IsStunDebuff
	// vtable[23] IsPermanent
	// vtable[14] IsPurgable
	// vtable[89] UpdateVerticalMotion
	// vtable[90] OnVerticalMotionInterrupted
	// vtable[91] IsVerticalMotionValidToApply
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[6] GetPriority
	// sizeof = 3048
};

// src/game/shared/dota/units/dota_unit_hero_tusk.cpp:2491
class CDOTA_Ability_Tusk_WalrusKick : public CDOTABaseAbility {
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
	CDOTA_Ability_Tusk_WalrusKick(CDOTA_Ability_Tusk_WalrusKick &);
	CDOTA_Ability_Tusk_WalrusKick(CDOTA_Ability_Tusk_WalrusKick &);
	CDOTA_Ability_Tusk_WalrusKick();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual float GetCooldown(int);
	virtual bool IsStealable();
	virtual void OnSpellStart();
	virtual void Spawn(const CEntityKeyValues *);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Tusk_WalrusKick();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[226] GetCastRange
	// vtable[242] GetCooldown
	// vtable[305] IsStealable
	// vtable[266] OnSpellStart
	// vtable[8] Spawn
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_tusk.cpp:2514
class C_CDOTA_Ability_Tusk_WalrusKick_MapInstall {
	C_CDOTA_Ability_Tusk_WalrusKick_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_tusk.cpp:2564
class CDOTA_Modifier_Tusk_WalrusKick_Slow : public CDOTA_Buff {
public:

private:

	int move_slow;  // +0xba8
	CDOTA_Modifier_Tusk_WalrusKick_Slow();
	virtual void OnCreated(KeyValues *);
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Tusk_WalrusKick_Slow();

	// vtable[57] OnCreated
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_tusk.cpp:2615
class CDOTA_Modifier_Tusk_WalrusKick_AirTime : public CDOTA_Buff, public CHorizontalMotionController, public CVerticalMotionController {
public:

private:

	int hp_threshold;  // +0xbc4
	float m_flStartZ;  // +0xbc8
	float m_flCurTime;  // +0xbcc
	float m_flOldPitch;  // +0xbd0
	int m_nRotations;  // +0xbe0
	float m_flEndTime;  // +0xbf0
	int push_length;  // +0xbf4
	CDOTA_Modifier_Tusk_WalrusKick_AirTime();
	virtual void CheckState(CDOTABuffState &);
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	virtual bool IsStunDebuff();
	virtual bool IsPermanent();
	virtual bool IsPurgable();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void UpdateVerticalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual void OnVerticalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsVerticalMotionValidToApply();
	virtual bool IsMotionController();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual int GetPriority();
	virtual ~CDOTA_Modifier_Tusk_WalrusKick_AirTime();

	// vtable[5] CheckState
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[16] IsStunDebuff
	// vtable[23] IsPermanent
	// vtable[14] IsPurgable
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] UpdateVerticalMotion
	// vtable[91] OnHorizontalMotionInterrupted
	// vtable[92] OnVerticalMotionInterrupted
	// vtable[93] IsHorizontalMotionValidToApply
	// vtable[94] IsVerticalMotionValidToApply
	// vtable[21] IsMotionController
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[6] GetPriority
	// sizeof = 3064
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Tusk::~CDOTA_Unit_Hero_Tusk  (line 33, @0x0000000002d2d380, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Tusk::~CDOTA_Unit_Hero_Tusk(CDOTA_Unit_Hero_Tusk *const this)
{
  this->_vptr_IHandleEntity = &off_46506D0;
  this->_vptr_INextBotEventResponder = &off_46516B0;
  this->_vptr_CObstructionObject = &off_46519E0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Tusk::~CDOTA_Unit_Hero_Tusk  (line 33, @0x0000000002d2d3c0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Tusk
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Tusk::~CDOTA_Unit_Hero_Tusk(CDOTA_Unit_Hero_Tusk *const this)
{
  this->_vptr_IHandleEntity = &off_46506D0;
  this->_vptr_INextBotEventResponder = &off_46516B0;
  this->_vptr_CObstructionObject = &off_46519E0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Tusk::Schema_DynamicBinding  (line 35, @0x0000000002d1fb70, libserver.so)
// globals: CDOTA_Unit_Hero_Tusk::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Tusk::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Tusk *const this)
{
  return CDOTA_Unit_Hero_Tusk::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Tusk::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 35, @0x0000000002d1fba0, libserver.so)
// globals: CDOTA_Unit_Hero_Tusk::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Tusk::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Tusk::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Tusk::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Tusk::CEntityInstanceEntityClass::DestructInstance  (line 35, @0x0000000002d1fbb0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Tusk>
void __fastcall CDOTA_Unit_Hero_Tusk::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Tusk::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Tusk::CEntityInstanceEntityClass::FreeInstance  (line 35, @0x0000000002d1fbd0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Tusk::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Tusk::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Tusk::CEntityInstanceEntityClass::CanAllocate  (line 35, @0x0000000002d1fbf0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Tusk::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Tusk::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Tusk::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 35, @0x0000000002d1fc00, libserver.so)
// globals: CDOTA_Unit_Hero_Tusk::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Tusk::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Tusk::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Tusk::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Tusk::CEntityInstanceEntityClass::AllocateInstance  (line 35, @0x0000000002d250d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Tusk::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Tusk::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Tusk::CEntityInstanceEntityClass::ConstructInstance  (line 35, @0x0000000002d28970, libserver.so)  // inlines: CDOTA_Unit_Hero_Tusk, Construct<CDOTA_Unit_Hero_Tusk>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Tusk::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Tusk::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_46506D0;
    *(p + 236) = &off_46516B0;
    *(p + 257) = &off_46519E0;
  }
  return p;
}


// CDOTA_Unit_Hero_Tusk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 35, @0x0000000002d35430, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Tusk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Tusk::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Tusk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 35, @0x0000000002d35930, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Tusk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Tusk::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Tusk::GetEntityClassInternal  (line 35, @0x0000000002d4db40, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "npc_dota_hero_tusk", "CDOTA_Unit_Hero_Tusk"
// globals: `guard variable for'CDOTA_Unit_Hero_Tusk::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TuskClass, CDOTA_Unit_Hero_Tusk::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TuskClass, __dso_handle, CDOTA_Unit_Hero_Tusk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Tusk::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TuskClassInfo, CDOTA_Unit_Hero_Tusk::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TuskClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Tusk::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Tusk::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TuskClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Tusk::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TuskClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Tusk::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TuskClass);
    CDOTA_Unit_Hero_Tusk::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TuskClass._vptr_CEntityClass = off_4650650;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Tusk::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TuskClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Tusk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Tusk::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TuskClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_TuskClass != 0 )
    return &CDOTA_Unit_Hero_Tusk::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TuskClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Tusk::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TuskClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Tusk::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TuskClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Tusk::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TuskClassInfo,
      "CDOTA_Unit_Hero_Tusk",
      "npc_dota_hero_tusk",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Tusk::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TuskClassInfo);
  }
  CDOTA_Unit_Hero_Tusk::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TuskClass.m_pClassInfo = &CDOTA_Unit_Hero_Tusk::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TuskClassInfo;
  CDOTA_Unit_Hero_Tusk::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TuskClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Tusk::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TuskClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_TuskClass = &CDOTA_Unit_Hero_Tusk::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TuskClass;
  CDOTA_Unit_Hero_Tusk::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TuskClassInfo.m_pClass = &CDOTA_Unit_Hero_Tusk::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TuskClass;
  CDOTA_Unit_Hero_Tusk::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TuskClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_TuskClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Tusk::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TuskClass;
}


// CDOTA_Unit_Hero_Tusk::OnItemEquipped  (line 60, @0x0000000002cd69a0, libserver.so)  // inlines: FStrEq, GetAbilityName, GetPlayerOwnerID, NetworkStateChanged, Set, SetDroppable, SetSellable, _V_strcmp, operator=<bool>
// calls: CDOTA_BaseNPC::OnItemEquipped, CDOTA_Item::ExpireSellback, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::SetHidden, CDOTABaseAbility::UpgradeAbility
// strings: "item_ultimate_scepter", "tusk_walrus_kick"
void __fastcall CDOTA_Unit_Hero_Tusk::OnItemEquipped(CDOTA_Unit_Hero_Tusk *const this, CDOTA_Item *pItem)
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
          AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "tusk_walrus_kick", 0);
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


// CDOTA_Unit_Hero_Tusk::YouForgotToImplementOrDeclareServerClass  (line 101, @0x0000000002cca0f0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Tusk::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Tusk *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Tusk::GetServerClass  (line 101, @0x0000000002cde5b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Tusk::GetServerClass(CDOTA_Unit_Hero_Tusk *const this)
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


// CDOTA_Unit_Hero_Tusk::Precache  (line 109, @0x0000000002cd08e0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Precache, DOTA_PrecacheUnitByNameSync
// strings: "npc_dota_tusk_frozen_sigil1", "npc_dota_tusk_frozen_sigil2", "npc_dota_tusk_frozen_sigil3", "npc_dota_tusk_frozen_sigil4"
void __fastcall CDOTA_Unit_Hero_Tusk::Precache(
        CDOTA_Unit_Hero_Tusk *const this,
        const CEntityPrecacheContext *pContext)
{
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
  DOTA_PrecacheUnitByNameSync("npc_dota_tusk_frozen_sigil1", pContext->m_pManifest, -1);
  DOTA_PrecacheUnitByNameSync("npc_dota_tusk_frozen_sigil2", pContext->m_pManifest, -1);
  DOTA_PrecacheUnitByNameSync("npc_dota_tusk_frozen_sigil3", pContext->m_pManifest, -1);
  DOTA_PrecacheUnitByNameSync("npc_dota_tusk_frozen_sigil4", pContext->m_pManifest, -1);
}


// CDOTA_Unit_Hero_Tusk::ShowAmbientFX  (line 124, @0x0000000002ce8890, libserver.so)
void __fastcall CDOTA_Unit_Hero_Tusk::ShowAmbientFX(CDOTA_Unit_Hero_Tusk *const this, bool bShouldDraw)
{
  ;
}


// CDOTA_Ability_Tusk_IceShards_Stop::~CDOTA_Ability_Tusk_IceShards_Stop  (line 146, @0x0000000002d2c400, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Tusk_IceShards_Stop::~CDOTA_Ability_Tusk_IceShards_Stop(
        CDOTA_Ability_Tusk_IceShards_Stop *const this)
{
  this->_vptr_IHandleEntity = &off_46528D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Tusk_IceShards_Stop::~CDOTA_Ability_Tusk_IceShards_Stop  (line 146, @0x0000000002d2c420, libserver.so)  // inlines: ~CDOTA_Ability_Tusk_IceShards_Stop
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Tusk_IceShards_Stop::~CDOTA_Ability_Tusk_IceShards_Stop(
        CDOTA_Ability_Tusk_IceShards_Stop *const this)
{
  this->_vptr_IHandleEntity = &off_46528D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Tusk_IceShards_Stop::Schema_DynamicBinding  (line 148, @0x0000000002d1fc10, libserver.so)
// globals: CDOTA_Ability_Tusk_IceShards_Stop::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tusk_IceShards_Stop::Schema_DynamicBinding(
        const CDOTA_Ability_Tusk_IceShards_Stop *const this)
{
  return CDOTA_Ability_Tusk_IceShards_Stop::s_pSchemaBinding;
}


// CDOTA_Ability_Tusk_IceShards_Stop::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 148, @0x0000000002d1fc20, libserver.so)
// globals: CDOTA_Ability_Tusk_IceShards_Stop::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tusk_IceShards_Stop::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Tusk_IceShards_Stop::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tusk_IceShards_Stop::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Tusk_IceShards_Stop::CEntityInstanceEntityClass::DestructInstance  (line 148, @0x0000000002d1fc30, libserver.so)  // inlines: Destruct<CDOTA_Ability_Tusk_IceShards_Stop>
void __fastcall CDOTA_Ability_Tusk_IceShards_Stop::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Tusk_IceShards_Stop::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Tusk_IceShards_Stop::CEntityInstanceEntityClass::FreeInstance  (line 148, @0x0000000002d1fc50, libserver.so)
void __fastcall CDOTA_Ability_Tusk_IceShards_Stop::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Tusk_IceShards_Stop::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Tusk_IceShards_Stop::CEntityInstanceEntityClass::CanAllocate  (line 148, @0x0000000002d1fc70, libserver.so)
bool __fastcall CDOTA_Ability_Tusk_IceShards_Stop::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Tusk_IceShards_Stop::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Tusk_IceShards_Stop::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 148, @0x0000000002d1fc80, libserver.so)
// globals: CDOTA_Ability_Tusk_IceShards_Stop::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Tusk_IceShards_Stop::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Tusk_IceShards_Stop::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tusk_IceShards_Stop::s_pSchemaBinding;
}


// CDOTA_Ability_Tusk_IceShards_Stop::CEntityInstanceEntityClass::AllocateInstance  (line 148, @0x0000000002d25110, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Tusk_IceShards_Stop::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Tusk_IceShards_Stop::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Tusk_IceShards_Stop::CEntityInstanceEntityClass::ConstructInstance  (line 148, @0x0000000002d32690, libserver.so)  // inlines: CDOTA_Ability_Tusk_IceShards_Stop, Construct<CDOTA_Ability_Tusk_IceShards_Stop>
// calls: CDOTABaseAbility::CDOTABaseAbility, CDOTABaseAbility::SetActivated, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Ability_Tusk_IceShards_Stop::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Tusk_IceShards_Stop::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_46528D0;
    CDOTABaseAbility::SetActivated(p, 0);
  }
  return p;
}


// CDOTA_Ability_Tusk_IceShards_Stop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 148, @0x0000000002d349a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Tusk_IceShards_Stop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tusk_IceShards_Stop::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Tusk_IceShards_Stop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 148, @0x0000000002d349c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Tusk_IceShards_Stop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tusk_IceShards_Stop::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Tusk_IceShards_Stop::GetEntityClassInternal  (line 148, @0x0000000002d4a6c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "tusk_ice_shards_stop", "CDOTA_Ability_Tusk_IceShards_Stop"
// globals: `guard variable for'CDOTA_Ability_Tusk_IceShards_Stop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_IceShards_StopClass, CDOTA_Ability_Tusk_IceShards_Stop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_IceShards_StopClass, __dso_handle, CDOTA_Ability_Tusk_IceShards_Stop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Tusk_IceShards_Stop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_IceShards_StopClassInfo, CDOTA_Ability_Tusk_IceShards_Stop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_IceShards_StopClassInfo
CEntityClass *__cdecl CDOTA_Ability_Tusk_IceShards_Stop::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Tusk_IceShards_Stop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_IceShards_StopClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tusk_IceShards_Stop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_IceShards_StopClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Tusk_IceShards_Stop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_IceShards_StopClass);
    CDOTA_Ability_Tusk_IceShards_Stop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_IceShards_StopClass._vptr_CEntityClass = off_4651A30;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tusk_IceShards_Stop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_IceShards_StopClass);
    __cxa_atexit(
      CDOTA_Ability_Tusk_IceShards_Stop::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Tusk_IceShards_Stop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_IceShards_StopClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Tusk_IceShards_StopClass != 0 )
    return &CDOTA_Ability_Tusk_IceShards_Stop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_IceShards_StopClass;
  if ( `guard variable for'CDOTA_Ability_Tusk_IceShards_Stop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_IceShards_StopClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tusk_IceShards_Stop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_IceShards_StopClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Tusk_IceShards_Stop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_IceShards_StopClassInfo,
      "CDOTA_Ability_Tusk_IceShards_Stop",
      "tusk_ice_shards_stop",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tusk_IceShards_Stop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_IceShards_StopClassInfo);
  }
  CDOTA_Ability_Tusk_IceShards_Stop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_IceShards_StopClass.m_pClassInfo = &CDOTA_Ability_Tusk_IceShards_Stop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_IceShards_StopClassInfo;
  CDOTA_Ability_Tusk_IceShards_Stop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_IceShards_StopClass.m_pBaseClassInfo = CDOTA_Ability_Tusk_IceShards_Stop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_IceShards_StopClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Tusk_IceShards_StopClass = &CDOTA_Ability_Tusk_IceShards_Stop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_IceShards_StopClass;
  CDOTA_Ability_Tusk_IceShards_Stop::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_IceShards_StopClassInfo.m_pClass = &CDOTA_Ability_Tusk_IceShards_Stop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_IceShards_StopClass;
  CDOTA_Ability_Tusk_IceShards_Stop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_IceShards_StopClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Tusk_IceShards_StopClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Tusk_IceShards_Stop::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_IceShards_StopClass;
}


// CDOTA_Ability_Tusk_IceShards_Stop::ProcsMagicStick  (line 154, @0x0000000002d1fc90, libserver.so)
bool __fastcall CDOTA_Ability_Tusk_IceShards_Stop::ProcsMagicStick(CDOTA_Ability_Tusk_IceShards_Stop *const this)
{
  return 0;
}


// CDOTA_Ability_Tusk_IceShards_Stop::GetConceptRecipientType  (line 156, @0x0000000002d1fca0, libserver.so)
int __fastcall CDOTA_Ability_Tusk_IceShards_Stop::GetConceptRecipientType(
        CDOTA_Ability_Tusk_IceShards_Stop *const this)
{
  return 4;
}


// CDOTA_Ability_Tusk_IceShards_Stop::GetAssociatedPrimaryAbilities  (line 158, @0x0000000002d1fcb0, libserver.so)
// strings: "tusk_ice_shards"
const char *__fastcall CDOTA_Ability_Tusk_IceShards_Stop::GetAssociatedPrimaryAbilities(
        CDOTA_Ability_Tusk_IceShards_Stop *const this)
{
  return "tusk_ice_shards";
}


// CDOTA_Ability_Tusk_IceShards_Stop::IsHiddenWhenStolen  (line 159, @0x0000000002d1fcc0, libserver.so)
bool __fastcall CDOTA_Ability_Tusk_IceShards_Stop::IsHiddenWhenStolen(CDOTA_Ability_Tusk_IceShards_Stop *const this)
{
  return 1;
}


// CDOTA_Ability_Tusk_IceShards::~CDOTA_Ability_Tusk_IceShards  (line 170, @0x0000000002d2c450, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Tusk_IceShards::~CDOTA_Ability_Tusk_IceShards(CDOTA_Ability_Tusk_IceShards *const this)
{
  this->_vptr_IHandleEntity = &off_4651B30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Tusk_IceShards::~CDOTA_Ability_Tusk_IceShards  (line 170, @0x0000000002d2c470, libserver.so)  // inlines: ~CDOTA_Ability_Tusk_IceShards
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Tusk_IceShards::~CDOTA_Ability_Tusk_IceShards(CDOTA_Ability_Tusk_IceShards *const this)
{
  this->_vptr_IHandleEntity = &off_4651B30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Tusk_IceShards::Schema_DynamicBinding  (line 172, @0x0000000002d1fcd0, libserver.so)
// globals: CDOTA_Ability_Tusk_IceShards::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tusk_IceShards::Schema_DynamicBinding(
        const CDOTA_Ability_Tusk_IceShards *const this)
{
  return CDOTA_Ability_Tusk_IceShards::s_pSchemaBinding;
}


// CDOTA_Ability_Tusk_IceShards::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 172, @0x0000000002d1fce0, libserver.so)
// globals: CDOTA_Ability_Tusk_IceShards::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tusk_IceShards::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Tusk_IceShards::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tusk_IceShards::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Tusk_IceShards::CEntityInstanceEntityClass::DestructInstance  (line 172, @0x0000000002d1fcf0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Tusk_IceShards>
void __fastcall CDOTA_Ability_Tusk_IceShards::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Tusk_IceShards::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Tusk_IceShards::CEntityInstanceEntityClass::FreeInstance  (line 172, @0x0000000002d1fd10, libserver.so)
void __fastcall CDOTA_Ability_Tusk_IceShards::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Tusk_IceShards::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Tusk_IceShards::CEntityInstanceEntityClass::CanAllocate  (line 172, @0x0000000002d1fd30, libserver.so)
bool __fastcall CDOTA_Ability_Tusk_IceShards::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Tusk_IceShards::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Tusk_IceShards::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 172, @0x0000000002d1fd40, libserver.so)
// globals: CDOTA_Ability_Tusk_IceShards::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Tusk_IceShards::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Tusk_IceShards::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tusk_IceShards::s_pSchemaBinding;
}


// CDOTA_Ability_Tusk_IceShards::CEntityInstanceEntityClass::AllocateInstance  (line 172, @0x0000000002d25150, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Tusk_IceShards::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Tusk_IceShards::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 992);
  memset(v1, 0, 0x3E0u);
  return v1;
}


// CDOTA_Ability_Tusk_IceShards::CEntityInstanceEntityClass::ConstructInstance  (line 172, @0x0000000002d29550, libserver.so)  // inlines: CDOTA_Ability_Tusk_IceShards, Construct<CDOTA_Ability_Tusk_IceShards>, InValidate, SndOpEventGuid_t, SoundEventGuid_t
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Tusk_IceShards::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Tusk_IceShards::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 246) = 0;
    *p = &off_4651B30;
    *(p + 247) = -1;
    *(p + 122) = 0;
  }
  return p;
}


// CDOTA_Ability_Tusk_IceShards::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 172, @0x0000000002d349f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Tusk_IceShards::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tusk_IceShards::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Tusk_IceShards::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 172, @0x0000000002d34a10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Tusk_IceShards::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tusk_IceShards::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Tusk_IceShards::GetEntityClassInternal  (line 172, @0x0000000002d4a810, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "tusk_ice_shards", "CDOTA_Ability_Tusk_IceShards"
// globals: `guard variable for'CDOTA_Ability_Tusk_IceShards::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_IceShardsClass, CDOTA_Ability_Tusk_IceShards::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_IceShardsClass, __dso_handle, CDOTA_Ability_Tusk_IceShards::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Tusk_IceShards::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_IceShardsClassInfo, CDOTA_Ability_Tusk_IceShards::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_IceShardsClassInfo
CEntityClass *__cdecl CDOTA_Ability_Tusk_IceShards::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Tusk_IceShards::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_IceShardsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tusk_IceShards::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_IceShardsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Tusk_IceShards::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_IceShardsClass);
    CDOTA_Ability_Tusk_IceShards::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_IceShardsClass._vptr_CEntityClass = off_4651AB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tusk_IceShards::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_IceShardsClass);
    __cxa_atexit(
      CDOTA_Ability_Tusk_IceShards::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Tusk_IceShards::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_IceShardsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Tusk_IceShardsClass != 0 )
    return &CDOTA_Ability_Tusk_IceShards::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_IceShardsClass;
  if ( `guard variable for'CDOTA_Ability_Tusk_IceShards::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_IceShardsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tusk_IceShards::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_IceShardsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Tusk_IceShards::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_IceShardsClassInfo,
      "CDOTA_Ability_Tusk_IceShards",
      "tusk_ice_shards",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tusk_IceShards::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_IceShardsClassInfo);
  }
  CDOTA_Ability_Tusk_IceShards::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_IceShardsClass.m_pClassInfo = &CDOTA_Ability_Tusk_IceShards::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_IceShardsClassInfo;
  CDOTA_Ability_Tusk_IceShards::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_IceShardsClass.m_pBaseClassInfo = CDOTA_Ability_Tusk_IceShards::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_IceShardsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Tusk_IceShardsClass = &CDOTA_Ability_Tusk_IceShards::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_IceShardsClass;
  CDOTA_Ability_Tusk_IceShards::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_IceShardsClassInfo.m_pClass = &CDOTA_Ability_Tusk_IceShards::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_IceShardsClass;
  CDOTA_Ability_Tusk_IceShards::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_IceShardsClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Tusk_IceShardsClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Tusk_IceShards::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_IceShardsClass;
}


// CDOTA_Ability_Tusk_IceShards::OnUpgrade  (line 226, @0x0000000002ccbc40, libserver.so)
// calls: CDOTABaseAbility::OnUpgrade
void __fastcall CDOTA_Ability_Tusk_IceShards::OnUpgrade(CDOTA_Ability_Tusk_IceShards *const this)
{
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Tusk_IceShards::GetOrbLocation  (line 247, @0x0000000002ce88a0, libserver.so)
// calls: CDOTA_ProjectileManager::GetLinearProjectileLocation
// callers: CDOTA_Ability_Tusk_IceShards::DestroyOrb
Vector __fastcall CDOTA_Ability_Tusk_IceShards::GetOrbLocation(CDOTA_Ability_Tusk_IceShards *const this)
{
  int m_iProjectile; // esi
  Vector vRet; // [rsp+10h] [rbp-20h] BYREF
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_iProjectile = this->m_iProjectile;
  if ( m_iProjectile == -1 )
  {
    *&result.x = *&vec3_origin.x;
    result.z = vec3_origin.z;
  }
  else
  {
    CDOTA_ProjectileManager::GetLinearProjectileLocation(&g_DOTAProjectileManager, m_iProjectile, &vRet);
    *&result.x = *&vRet.x;
    result.z = vRet.z;
  }
  return result;
}


// CDOTA_Ability_Tusk_IceShards::DestroyOrb  (line 263, @0x0000000002ce8910, libserver.so)  // inlines: CEntityHandle, CHandle
// calls: CDOTA_ProjectileManager::DestroyLinearProjectile, CDOTA_Ability_Tusk_IceShards::GetOrbLocation
// callers: CDOTA_Ability_Tusk_IceShards_Stop::OnSpellStart
void __fastcall CDOTA_Ability_Tusk_IceShards::DestroyOrb(CDOTA_Ability_Tusk_IceShards *const this)
{
  int m_iProjectile; // esi
  void (__fastcall *v3)(CDOTA_Ability_Tusk_IceShards *const, int *, Vector *); // r12
  int v4[4]; // [rsp+0h] [rbp-30h] BYREF
  Vector v5; // [rsp+10h] [rbp-20h] BYREF
  Vector OrbLocation; // 0:kr00_12.12

  m_iProjectile = this->m_iProjectile;
  if ( m_iProjectile != -1 )
  {
    CDOTA_ProjectileManager::DestroyLinearProjectile(&g_DOTAProjectileManager, m_iProjectile);
    v3 = *(this->_vptr_IHandleEntity + 289);
    OrbLocation = CDOTA_Ability_Tusk_IceShards::GetOrbLocation(this);
    v4[0] = -1;
    v5 = OrbLocation;
    v3(this, v4, &v5);
  }
}


// CDOTA_Ability_Tusk_IceShards::OnSpellStart  (line 276, @0x0000000002d02340, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, Set, VectorMultiply, VectorNormalize2D, VectorSubtract, operator*, operator-, operator=, sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorPosition, VectorNormalize, GetParticleManager, CDOTA_ParticleManager::GetParticleReplacement, CDOTA_ProjectileManager::CreateLinearProjectile, DOTA_EmitSound, CBaseEntity::GetAbsAngles, AngleVectors (13 total)
// strings: "shard_width", "shard_damage", "shard_count", "shard_speed", "shard_duration", "shard_angle_step" (11 total)
void __fastcall CDOTA_Ability_Tusk_IceShards::OnSpellStart(CDOTA_Ability_Tusk_IceShards *const this)
{
  CDOTA_BaseNPC *v2; // rax
  const Vector *AbsOrigin; // r12
  vec_t v4; // xmm0_4
  vec_t v5; // xmm1_4
  float v6; // xmm0_4
  vec_t y; // xmm2_4
  vec_t z; // xmm1_4
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  const Vector *v11; // rax
  float v12; // xmm3_4
  float v13; // xmm2_4
  vec_t v14; // xmm1_4
  float shard_width; // xmm0_4
  float shard_speed; // xmm1_4
  vec_t v17; // xmm3_4
  vec_t v18; // xmm2_4
  vec_t v19; // xmm1_4
  CDOTA_BaseNPC *v20; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v22; // cx
  CDOTA_BaseNPC *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  const QAngle *AbsAngles; // rax
  CDOTA_BaseNPC *Caster; // rax
  float fLengtha; // [rsp+Ch] [rbp-94h]
  float fLength; // [rsp+Ch] [rbp-94h]
  sLinearProjectileCreateInfo info; // [rsp+10h] [rbp-90h] BYREF

  if ( this->m_pIceShardsStop == 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    this->m_pIceShardsStop = CDOTA_BaseNPC::FindAbilityByName(Caster, "tusk_ice_shards_stop", 0);
  }
  this->shard_width = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "shard_width", -1, 0);
  this->shard_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "shard_damage", -1, 0);
  this->shard_count = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "shard_count", -1, 0);
  this->shard_speed = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "shard_speed", -1, 0);
  this->shard_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "shard_duration", -1, 0);
  this->shard_angle_step = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "shard_angle_step", -1, 0);
  this->shard_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "shard_distance", -1, 0);
  v2 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v2);
  *&info.pszEffectName = CDOTABaseAbility::GetCursorPosition(this);
  v4 = *(&info.pszEffectName + 1) - AbsOrigin->y;
  v5 = *&info.pszEffectName - AbsOrigin->x;
  this->m_vDirection.z = 0.0;
  this->m_vDirection.y = v4;
  this->m_vDirection.x = v5;
  v6 = VectorNormalize(&this->m_vDirection);
  if ( v6 < 0.0099999998 )
  {
    fLength = v6;
    v26 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v26);
    AngleVectors(AbsAngles, &this->m_vDirection, 0, 0);
    v6 = fLength;
  }
  fLengtha = v6;
  info.hSource.m_Index = -1;
  info.pszEffectName = 0;
  info.pAbility = 0;
  info.fDistance = 0.0;
  y = vec3_origin.y;
  info.fStartRadius = 0.0;
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
  GetParticleManager();
  v9 = CDOTABaseAbility::GetCaster(this);
  info.bStickyFoWReveal = 1;
  info.pszEffectName = CDOTA_ParticleManager::GetParticleReplacement(
                         "particles/units/heroes/hero_tusk/tusk_ice_shards_projectile.vpcf",
                         v9);
  info.pAbility = this;
  v10 = CDOTABaseAbility::GetCaster(this);
  v11 = CBaseEntity::GetAbsOrigin(v10);
  v12 = this->m_vDirection.y;
  info.vSpawnOrigin.x = v11->x;
  v13 = this->m_vDirection.z;
  info.vSpawnOrigin.y = v11->y;
  v14 = v11->z;
  info.fDistance = fLengtha;
  shard_width = this->shard_width;
  info.vSpawnOrigin.z = v14;
  shard_speed = this->shard_speed;
  v17 = v12 * shard_speed;
  v18 = v13 * shard_speed;
  info.fStartRadius = shard_width;
  v19 = shard_speed * this->m_vDirection.x;
  info.fEndRadius = shard_width;
  info.vVelocity.y = v17;
  info.vVelocity.z = v18;
  info.vVelocity.x = v19;
  v20 = CDOTABaseAbility::GetCaster(this);
  if ( v20 != 0 && (m_pEntity = v20->m_pEntity) != 0 )
  {
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v22 = 0x7FFF;
    else
      v22 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v22 & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  info.iUnitTargetTeam = 2;
  info.iUnitTargetType = 3;
  info.iUnitTargetFlags = 16;
  info.bProvidesVision = 1;
  info.iVisionTeamNumber = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  info.iVisionRadius = this->shard_width;
  v23 = CDOTABaseAbility::GetCaster(this);
  this->m_vSpawnOrigin = *CBaseEntity::GetAbsOrigin(v23);
  this->m_iProjectile = CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  v24 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Tusk.IceShards.Cast", v24);
  v25 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Tusk.IceShards.Projectile", v25);
}


// CDOTA_Ability_Tusk_IceShards::OnProjectileThink  (line 342, @0x0000000002cdd760, libserver.so)  // inlines: AllocateData, CBroadcastRecipientFilter, CSosFieldData, CSosFieldDataFloat3, ClearData, GetDataPtr, Init, SetValue, ~CBroadcastRecipientFilter, ~CSosFieldData, ~CSosFieldDataFloat3
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CRecipientFilter::~CRecipientFilter, operator new [], __stack_chk_fail, CSosFieldData::ClearData, _Unwind_Resume
void __fastcall CDOTA_Ability_Tusk_IceShards::OnProjectileThink(
        CDOTA_Ability_Tusk_IceShards *const this,
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


// CDOTA_Ability_Tusk_IceShards::OnProjectileHit  (line 365, @0x0000000002d15f20, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Ability_Tusk_IceShards::CreateShards, CGameSceneNode::GetOwnerEntity, CBaseEntity::StopSound, CDOTABaseAbility::GetCaster, ApplyDamage
// strings: "Hero_Tusk.IceShards.Projectile"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Tusk_IceShards::OnProjectileHit(
        CDOTA_Ability_Tusk_IceShards *const this,
        unsigned __int16 *hTarget,
        const Vector *const vLocation)
{
  int v4; // eax
  unsigned __int64 v5; // rsi
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx
  CGameSceneNode *m_pParent; // rdi
  CEntityInstance *m_pInstance; // r12
  char m_CScriptComponent_high; // r13
  CDOTA_BaseNPC *Caster; // rax
  float flDamage; // [rsp+Ch] [rbp-24h]

  v4 = *hTarget;
  if ( (*hTarget + 2) <= 1
    || (v5 = *hTarget, (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F]) == 0)
    || (v7 = &v6[v5 & 0x1FF]) == 0
    || v4 != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    CDOTA_Ability_Tusk_IceShards::CreateShards(this, *&vLocation->x, vLocation->z);
    m_pParent = this->m_pGameSceneNode->m_pParent;
    if ( m_pParent != 0 )
      m_pParent = CGameSceneNode::GetOwnerEntity(m_pParent);
    CBaseEntity::StopSound(m_pParent, "Hero_Tusk.IceShards.Projectile");
    this->m_iProjectile = -1;
  }
  else if ( LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0 && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 1) == 0 )
  {
    m_CScriptComponent_high = HIBYTE(m_pInstance[7].m_CScriptComponent);
    if ( m_CScriptComponent_high != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value
      && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) == 0 )
    {
      flDamage = this->shard_damage;
      Caster = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(Caster, m_pInstance, this, flDamage, 2, 0);
      return 0;
    }
  }
  return 0;
}


// CDOTA_Ability_Tusk_IceShards::CreateShards  (line 403, @0x0000000002d155a0, libserver.so)  // inlines: AddObstructionProperty, AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CDOTA_BaseNPC*>, DEG2RAD, Element, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetPaddedCollisionRadius, GetTeamNumber, GrowMemory, IndexToIdentity, IsValid, Length, LookupEntity, Normalized, Purge, RemoveAll, SetHullRadius, SinCos, ToDOTABaseNPC, Vector, VectorAdd, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator-, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: VectorAngles, CDOTABaseAbility::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, sincosf, GetGroundHeight, KeyValues::KeyValues, KeyValues::SetFloat, Thinker_Create, C2DGridObstructionManager::UpdateObjectObstruction, KeyValues::~KeyValues (27 total)
// callers: CDOTA_Ability_Tusk_IceShards::OnProjectileHit
// strings: "particles/units/heroes/hero_tusk/tusk_ice_shards.vpcf", "modifier_tusk_ice_shard", "Hero_Tusk.IceShards"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Tusk_IceShards::CreateShards(
        CDOTA_Ability_Tusk_IceShards *const this,
        double a2,
        vec_t a3)
{
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r15d
  CDOTA_ParticleManager *v7; // rax
  int shard_count; // eax
  int v9; // r12d
  float v10; // xmm1_4
  float v11; // xmm0_4
  float shard_distance; // xmm4_4
  CDOTA_BaseNPC *v13; // rax
  float v14; // xmm1_4
  int m_Value; // ebx
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // rbx
  ObstructionRecord_t *m_pObstructionRecord; // rax
  int m_nObstructionProperties; // ecx
  ObstructionRecord_t *v21; // rdx
  int v22; // eax
  __int64 m_Size; // r14
  int v24; // eax
  CDOTA_BaseNPC **v25; // rax
  CDOTA_ParticleManager *v26; // rax
  int v27; // ebx
  CDOTA_ParticleManager *v28; // rax
  CDOTA_ParticleManager *v29; // rax
  __int64 v30; // r14
  CDOTA_BaseNPC *v31; // rax
  __m128i v32; // xmm4
  float v33; // ebx
  CDOTA_BaseNPC *v34; // r12
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v36; // rax
  __int64 v37; // r12
  int v38; // ebx
  CHandle<CBaseEntity> *v39; // rdx
  uint32 m_Index; // eax
  __int16 v41; // cx
  CEntityIdentity *v42; // rdx
  CEntityIdentity *v43; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  const Vector *v45; // rax
  vec_t v46; // xmm2_4
  vec_t v47; // xmm0_4
  const Vector *v48; // rax
  const Vector *v49; // rax
  const Vector *v50; // rax
  vec_t v51; // xmm2_4
  __int64 v52; // r12
  int v53; // r13d
  CDOTA_BaseNPC *v54; // rdi
  __m128i v55; // xmm4
  float v56; // ebx
  const Vector *v57; // rax
  float v58; // xmm3_4
  CDOTA_BaseNPC *v59; // rax
  float v60; // xmm2_4
  CDOTA_BaseNPC *v61; // rax
  const Vector *v62; // rax
  vec_t v63; // xmm2_4
  float z; // xmm1_4
  int v66; // [rsp+30h] [rbp-110h]
  float v67; // [rsp+38h] [rbp-108h]
  float pos; // [rsp+40h] [rbp-100h]
  float fSin; // [rsp+48h] [rbp-F8h]
  float fCos; // [rsp+50h] [rbp-F0h]
  float v71; // [rsp+58h] [rbp-E8h] BYREF
  float v72; // [rsp+5Ch] [rbp-E4h] BYREF
  Vector vSpawnLocationa; // [rsp+60h] [rbp-E0h] BYREF
  QAngle angles; // [rsp+70h] [rbp-D0h] BYREF
  Vector vPos; // [rsp+80h] [rbp-C0h]
  Vector v76; // [rsp+90h] [rbp-B0h]
  Vector vec; // [rsp+A0h] [rbp-A0h] BYREF
  CUtlVector<CDOTA_BaseNPC*,CUtlMemory<CDOTA_BaseNPC*,int> > vShards; // [rsp+B0h] [rbp-90h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+D0h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+F0h] [rbp-50h] BYREF
  unsigned __int64 v81; // [rsp+108h] [rbp-38h]
  Vector v83; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v84; // 0:xmm0_8.8,8:xmm1_4.4

  vSpawnLocationa.z = a3;
  v81 = __readfsqword(0x28u);
  *&vSpawnLocationa.x = a2;
  vShards.m_Size = 0;
  vShards.m_Memory.m_pMemory = 0;
  vShards.m_Memory.m_nAllocationCount = 0;
  vShards.m_Memory.m_nGrowSize = 0;
  VectorAngles(&this->m_vDirection, &angles);
  Caster = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_tusk/tusk_ice_shards.vpcf",
               8,
               0,
               0,
               Caster);
  entities.m_Size = LODWORD(this->shard_duration);
  *(&entities.m_Size + 1) = entities.m_Size;
  LODWORD(entities.m_Memory.m_pMemory) = entities.m_Size;
  v7 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v7, Particle, 0, *&entities.m_Size, *&entities.m_Memory.m_pMemory);
  shard_count = this->shard_count;
  if ( shard_count > 0 )
  {
    v9 = 1;
    v10 = 1.0;
    v11 = 0.0 * this->shard_angle_step;
    while ( 1 )
    {
      sincosf(((v11 * v10) + angles.y) * 0.017453292, &v72, &v71);
      shard_distance = this->shard_distance;
      *&entities.m_Memory.m_pMemory = ((0.0 * v71) + vSpawnLocationa.z) + (0.0 * v72);
      *(&entities.m_Size + 1) = (v72 * shard_distance) + (vSpawnLocationa.y + (0.0 * v71));
      *&entities.m_Size = ((v71 * shard_distance) + vSpawnLocationa.x) + (0.0 * v72);
      v13 = CDOTABaseAbility::GetCaster(this);
      LODWORD(entities.m_Memory.m_pMemory) = GetGroundHeight(&entities, v13);
      KeyValues::KeyValues(&kv, "modifier_tusk_ice_shard");
      KeyValues::SetFloat(&kv, "duration", v14);
      m_Value = this->m_iTeamNum.m_Value;
      v16 = CDOTABaseAbility::GetCaster(this);
      v17 = Thinker_Create(v16, this, "modifier_tusk_ice_shard", &kv, *&entities.m_Size, m_Value, 1, 0, 0);
      v17->m_flHullRadius = 61.0;
      v18 = v17;
      m_pObstructionRecord = v17->m_pObstructionRecord;
      m_nObstructionProperties = v18->m_nObstructionProperties;
      v18->m_nObstructionProperties = m_nObstructionProperties | 8;
      if ( m_pObstructionRecord != 0 )
      {
        m_pObstructionRecord->m_ObjectProperties = m_nObstructionProperties | 8;
        v22 = v18->m_nObstructionProperties;
        v21 = v18->m_pObstructionRecord;
        BYTE1(v22) |= 8u;
        v18->m_nObstructionProperties = v22;
        if ( v21 != 0 )
          v21->m_ObjectProperties = v22;
      }
      else
      {
        v18->m_nObstructionProperties = m_nObstructionProperties | 0x808;
      }
      C2DGridObstructionManager::UpdateObjectObstruction(&g_GridNav.m_ObstructionManager, &v18->CObstructionObject);
      m_Size = vShards.m_Size;
      v24 = vShards.m_Size;
      if ( vShards.m_Size == vShards.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CDOTA_BaseNPC *,int>::Grow(&vShards.m_Memory, 1);
        v24 = vShards.m_Size;
      }
      vShards.m_Size = v24 + 1;
      v25 = &vShards.m_Memory.m_pMemory[m_Size];
      if ( v25 != 0 )
        *v25 = v18;
      v26 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v26, Particle, v9, *&entities.m_Size, *&entities.m_Memory.m_pMemory);
      KeyValues::~KeyValues(&kv);
      shard_count = this->shard_count;
      if ( shard_count <= v9 )
        break;
      ++v9;
      v10 = -1.0;
      v11 = (v9 / 2) * this->shard_angle_step;
      if ( (v9 & 1) != 0 )
        v10 = 1.0;
    }
  }
  v27 = shard_count + 1;
  v28 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v28, Particle, v27, *&vSpawnLocationa.x, vSpawnLocationa.z);
  v29 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v29, Particle);
  if ( vShards.m_Size > 0 )
  {
    v30 = 0;
    v66 = 0;
    while ( 1 )
    {
      entities.m_Size = 0;
      entities.m_Memory.m_pMemory = 0;
      entities.m_Memory.m_nAllocationCount = 0;
      entities.m_Memory.m_nGrowSize = 0;
      v31 = vShards.m_Memory.m_pMemory[v30];
      v32 = _mm_cvtsi32_si128(LODWORD(v31->m_flHullRadius));
      *v32.m128i_i32 = *v32.m128i_i32 + v31->m_flCollisionPadding;
      v33 = COERCE_FLOAT(_mm_cvtsi128_si32(v32));
      v34 = CDOTABaseAbility::GetCaster(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(vShards.m_Memory.m_pMemory[v30]);
      v36 = CDOTABaseAbility::GetCaster(this);
      FindUnitsInRadius(v36->m_iTeamNum.m_Value, AbsOrigin, v34, v33, &entities, 3, 19, 80, 0, 0);
      if ( entities.m_Size > 0 )
        break;
LABEL_28:
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
      if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
        if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
      }
      ++v66;
      ++v30;
      if ( vShards.m_Size <= v66 )
      {
        if ( vShards.m_Size > 0 )
        {
          v52 = 0;
          v53 = 0;
          do
          {
            v54 = vShards.m_Memory.m_pMemory[v52];
            v55 = _mm_cvtsi32_si128(LODWORD(v54->m_flHullRadius));
            *v55.m128i_i32 = (*v55.m128i_i32 + v54->m_flCollisionPadding) + 50.0;
            v56 = COERCE_FLOAT(_mm_cvtsi128_si32(v55));
            v57 = CBaseEntity::GetAbsOrigin(v54);
            CGridNav::ResolveNPCPositions(&g_GridNav, 0, *&v57->x, COERCE_DOUBLE(LODWORD(v57->z)), v56, v58);
            v59 = CDOTABaseAbility::GetCaster(this);
            CDOTAFogOfWarSystem::AddTempViewer(
              &g_DOTAFogOfWarSystem,
              vShards.m_Memory.m_pMemory[v52],
              v59->m_iTeamNum.m_Value,
              200.0,
              2.0,
              v60);
            ++v53;
            ++v52;
          }
          while ( vShards.m_Size > v53 );
        }
        goto LABEL_33;
      }
    }
    v37 = 0;
    v38 = 0;
    while ( 1 )
    {
      v39 = &entities.m_Memory.m_pMemory[v37];
      m_Index = entities.m_Memory.m_pMemory[v37].m_Index;
      if ( m_Index + 2 <= 1 )
        goto LABEL_18;
      v41 = v39->m_Index;
      v42 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v39->m_Index) >> 9) & 0x3F];
      if ( v42 == 0 )
        goto LABEL_18;
      v43 = &v42[v41 & 0x1FF];
      if ( v43 == 0 )
        goto LABEL_18;
      if ( m_Index != v43->m_EHandle.m_Index )
        goto LABEL_18;
      m_pInstance = v43->m_pInstance;
      if ( v43->m_pInstance == 0
        || !m_pInstance->m_bIsDOTANPC
        || (*(m_pInstance->_vptr_IHandleEntity + 403))(v43->m_pInstance) != 0 )
      {
        goto LABEL_18;
      }
      v45 = CBaseEntity::GetAbsOrigin(m_pInstance);
      v46 = vSpawnLocationa.x - v45->x;
      v47 = vSpawnLocationa.z - v45->z;
      vec.y = vSpawnLocationa.y - v45->y;
      vec.x = v46;
      vec.z = v47;
      VectorNormalize(&vec);
      fCos = 150.0 * vec.x;
      fSin = 150.0 * vec.y;
      pos = 150.0 * vec.z;
      v48 = CBaseEntity::GetAbsOrigin(m_pInstance);
      v67 = fsqrt(
              (((v48->x - vSpawnLocationa.x) * (v48->x - vSpawnLocationa.x))
             + ((v48->y - vSpawnLocationa.y) * (v48->y - vSpawnLocationa.y)))
            + ((v48->z - vSpawnLocationa.z) * (v48->z - vSpawnLocationa.z)));
      v49 = CBaseEntity::GetAbsOrigin(vShards.m_Memory.m_pMemory[v30]);
      if ( v67 <= fsqrt(
                    (((v49->x - vSpawnLocationa.x) * (v49->x - vSpawnLocationa.x))
                   + ((v49->y - vSpawnLocationa.y) * (v49->y - vSpawnLocationa.y)))
                  + ((v49->z - vSpawnLocationa.z) * (v49->z - vSpawnLocationa.z))) )
      {
        v62 = CBaseEntity::GetAbsOrigin(m_pInstance);
        v63 = v62->x - fCos;
        z = v62->z;
        v76.y = v62->y - fSin;
        v84.z = z - pos;
        v76.x = v63;
        *&v84.x = *&v76.x;
        v76.z = v84.z;
        FindClearSpaceForUnit(m_pInstance, v84, 0);
LABEL_18:
        ++v38;
        ++v37;
        if ( entities.m_Size <= v38 )
          goto LABEL_28;
      }
      else
      {
        v50 = CBaseEntity::GetAbsOrigin(m_pInstance);
        v51 = fCos + v50->x;
        vPos.y = fSin + v50->y;
        v83.z = pos + v50->z;
        vPos.x = v51;
        *&v83.x = *&vPos.x;
        vPos.z = v83.z;
        FindClearSpaceForUnit(m_pInstance, v83, 0);
        ++v38;
        ++v37;
        if ( entities.m_Size <= v38 )
          goto LABEL_28;
      }
    }
  }
LABEL_33:
  v61 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSoundLocationWithCaster(&vSpawnLocationa, "Hero_Tusk.IceShards", v61);
  vShards.m_Size = 0;
  if ( (vShards.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&vShards.m_Memory);
    if ( (vShards.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&vShards.m_Memory);
  }
}


// CDOTA_Ability_Tusk_IceShards::GetAbilityDamageToTargetOverInterval  (line 486, @0x0000000002cf6780, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "shard_damage"
__int64 __fastcall CDOTA_Ability_Tusk_IceShards::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Tusk_IceShards *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  float LevelSpecialValue; // [rsp-1Ch] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "shard_damage", -1, 0);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * LevelSpecialValue);
  }
  return result;
}


// CDOTA_Modifier_Tusk_IceShard::~CDOTA_Modifier_Tusk_IceShard  (line 497, @0x0000000002d27070, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tusk_IceShard::~CDOTA_Modifier_Tusk_IceShard(CDOTA_Modifier_Tusk_IceShard *const this)
{
  this->_vptr_CDOTA_Buff = &off_46525F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tusk_IceShard::~CDOTA_Modifier_Tusk_IceShard  (line 497, @0x0000000002d27090, libserver.so)  // inlines: ~CDOTA_Modifier_Tusk_IceShard
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tusk_IceShard::~CDOTA_Modifier_Tusk_IceShard(CDOTA_Modifier_Tusk_IceShard *const this)
{
  this->_vptr_CDOTA_Buff = &off_46525F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tusk_IceShard::ShouldSendToClients  (line 503, @0x0000000002d1fd50, libserver.so)
bool __fastcall CDOTA_Modifier_Tusk_IceShard::ShouldSendToClients(CDOTA_Modifier_Tusk_IceShard *const this)
{
  return 0;
}


// CDOTA_Modifier_Tusk_IceShard::IsHidden  (line 505, @0x0000000002d1fd60, libserver.so)
bool __fastcall CDOTA_Modifier_Tusk_IceShard::IsHidden(CDOTA_Modifier_Tusk_IceShard *const this)
{
  return 1;
}


// CDOTA_Modifier_Tusk_IceShard::OnDestroy  (line 515, @0x0000000002ccc6a0, libserver.so)
// calls: CDOTA_Buff::GetParent, UTIL_Remove
void __fastcall CDOTA_Modifier_Tusk_IceShard::OnDestroy(CDOTA_Modifier_Tusk_IceShard *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  UTIL_Remove(Parent);
}


// CDOTA_Modifier_Tusk_IceShard::CheckState  (line 524, @0x0000000002cca100, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Tusk_IceShard::CheckState(
        CDOTA_Modifier_Tusk_IceShard *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x800307uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFF7FFCF8LL;
}


// CDOTA_Ability_Tusk_IceShards_Stop::OnSpellStart  (line 540, @0x0000000002ce8970, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_Tusk_IceShards::DestroyOrb, CDOTABaseAbility::SetActivated
// strings: "tusk_ice_shards"
void __fastcall CDOTA_Ability_Tusk_IceShards_Stop::OnSpellStart(CDOTA_Ability_Tusk_IceShards_Stop *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Ability_Tusk_IceShards *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "tusk_ice_shards", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iProjectile != -1 )
  {
    CDOTA_Ability_Tusk_IceShards::DestroyOrb(AbilityByName);
    CDOTABaseAbility::SetActivated(this, 0);
  }
}


// CDOTA_Ability_Tusk_Snowball::~CDOTA_Ability_Tusk_Snowball  (line 559, @0x0000000002d46720, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Tusk_Snowball::~CDOTA_Ability_Tusk_Snowball(CDOTA_Ability_Tusk_Snowball *const this)
{
  this->_vptr_IHandleEntity = &off_46533D0;
  this->_vptr_CHorizontalMotionController = &off_4653E58;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hSnowballedUnits);
  if ( (this->m_hSnowballedUnits.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hSnowballedUnits.m_Memory),
        (this->m_hSnowballedUnits.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hSnowballedUnits.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_Tusk_Snowball::~CDOTA_Ability_Tusk_Snowball  (line 559, @0x0000000002d46b20, libserver.so)  // inlines: Purge, ~CDOTA_Ability_Tusk_Snowball, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Tusk_Snowball::~CDOTA_Ability_Tusk_Snowball(CDOTA_Ability_Tusk_Snowball *const this)
{
  this->_vptr_IHandleEntity = &off_46533D0;
  this->_vptr_CHorizontalMotionController = &off_4653E58;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hSnowballedUnits);
  if ( (this->m_hSnowballedUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hSnowballedUnits.m_Memory);
    if ( (this->m_hSnowballedUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hSnowballedUnits.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Tusk_Snowball::Schema_DynamicBinding  (line 561, @0x0000000002d1fd70, libserver.so)
// globals: CDOTA_Ability_Tusk_Snowball::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tusk_Snowball::Schema_DynamicBinding(
        const CDOTA_Ability_Tusk_Snowball *const this)
{
  return CDOTA_Ability_Tusk_Snowball::s_pSchemaBinding;
}


// CDOTA_Ability_Tusk_Snowball::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 561, @0x0000000002d1fd90, libserver.so)
// globals: CDOTA_Ability_Tusk_Snowball::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tusk_Snowball::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Tusk_Snowball::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tusk_Snowball::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Tusk_Snowball::CEntityInstanceEntityClass::DestructInstance  (line 561, @0x0000000002d1fda0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Tusk_Snowball>
void __fastcall CDOTA_Ability_Tusk_Snowball::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Tusk_Snowball::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Tusk_Snowball::CEntityInstanceEntityClass::FreeInstance  (line 561, @0x0000000002d1fdc0, libserver.so)
void __fastcall CDOTA_Ability_Tusk_Snowball::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Tusk_Snowball::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Tusk_Snowball::CEntityInstanceEntityClass::CanAllocate  (line 561, @0x0000000002d1fde0, libserver.so)
bool __fastcall CDOTA_Ability_Tusk_Snowball::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Tusk_Snowball::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Tusk_Snowball::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 561, @0x0000000002d1fdf0, libserver.so)
// globals: CDOTA_Ability_Tusk_Snowball::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Tusk_Snowball::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Tusk_Snowball::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tusk_Snowball::s_pSchemaBinding;
}


// CDOTA_Ability_Tusk_Snowball::CEntityInstanceEntityClass::AllocateInstance  (line 561, @0x0000000002d25190, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Tusk_Snowball::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Tusk_Snowball::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1144);
  memset(v1, 0, 0x478u);
  return v1;
}


// CDOTA_Ability_Tusk_Snowball::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 561, @0x0000000002d34a40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Tusk_Snowball::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tusk_Snowball::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Tusk_Snowball::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 561, @0x0000000002d34a60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Tusk_Snowball::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tusk_Snowball::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Tusk_Snowball::CEntityInstanceEntityClass::ConstructInstance  (line 561, @0x0000000002d460a0, libserver.so)  // inlines: CDOTA_Ability_Tusk_Snowball, CEntityHandle, CHandle, CHorizontalMotionController, CUtlMemory, CUtlVector, CUtlVectorBase, Color, Construct<CDOTA_Ability_Tusk_Snowball>, operator=, sTrackingProjectileCreateInfo, ~CUtlVector
// calls: CDOTABaseAbility::CDOTABaseAbility, CountdownTimer::CountdownTimer, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Ability_Tusk_Snowball::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Tusk_Snowball::CEntityInstanceEntityClass *const this,
        void *p)
{
  vec_t x; // xmm0_4
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4

  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 230) = 2;
    *p = &off_46533D0;
    *(p + 114) = &off_4653E58;
    *(p + 244) = 0;
    *(p + 123) = 0;
    *(p + 248) = 0;
    *(p + 249) = 0;
    CountdownTimer::CountdownTimer(p + 42);
    *(p + 259) = -1;
    *(p + 269) = -1;
    *(p + 270) = -1;
    *(p + 1118) = 0;
    x = vec3_origin.x;
    *(p + 131) = 0;
    *(p + 132) = 0;
    *(p + 271) = x;
    y = vec3_origin.y;
    *(p + 133) = 0;
    *(p + 272) = y;
    z = vec3_origin.z;
    *(p + 268) = 0;
    *(p + 273) = z;
    *(p + 274) = 1;
    *(p + 1100) = 0;
    *(p + 276) = -1;
    *(p + 277) = 0;
    *(p + 1112) = 0;
    *(p + 1113) = 1;
    *(p + 1114) = 0;
    *(p + 1115) = 1;
    *(p + 142) = 0;
    *(p + 1116) = 0;
    *(p + 281) = 0;
    *(p + 282) = 0;
    *(p + 1117) = 0;
  }
  return p;
}


// CDOTA_Ability_Tusk_Snowball::GetEntityClassInternal  (line 561, @0x0000000002d4a960, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "tusk_snowball", "CDOTA_Ability_Tusk_Snowball"
// globals: `guard variable for'CDOTA_Ability_Tusk_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_SnowballClass, CDOTA_Ability_Tusk_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_SnowballClass, __dso_handle, CDOTA_Ability_Tusk_Snowball::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Tusk_Snowball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_SnowballClassInfo, CDOTA_Ability_Tusk_Snowball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_SnowballClassInfo
CEntityClass *__cdecl CDOTA_Ability_Tusk_Snowball::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Tusk_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_SnowballClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tusk_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_SnowballClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Tusk_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_SnowballClass);
    CDOTA_Ability_Tusk_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_SnowballClass._vptr_CEntityClass = off_4653350;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tusk_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_SnowballClass);
    __cxa_atexit(
      CDOTA_Ability_Tusk_Snowball::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Tusk_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_SnowballClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Tusk_SnowballClass != 0 )
    return &CDOTA_Ability_Tusk_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_SnowballClass;
  if ( `guard variable for'CDOTA_Ability_Tusk_Snowball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_SnowballClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tusk_Snowball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_SnowballClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Tusk_Snowball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_SnowballClassInfo,
      "CDOTA_Ability_Tusk_Snowball",
      "tusk_snowball",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tusk_Snowball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_SnowballClassInfo);
  }
  CDOTA_Ability_Tusk_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_SnowballClass.m_pClassInfo = &CDOTA_Ability_Tusk_Snowball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_SnowballClassInfo;
  CDOTA_Ability_Tusk_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_SnowballClass.m_pBaseClassInfo = CDOTA_Ability_Tusk_Snowball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_SnowballClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Tusk_SnowballClass = &CDOTA_Ability_Tusk_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_SnowballClass;
  CDOTA_Ability_Tusk_Snowball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_SnowballClassInfo.m_pClass = &CDOTA_Ability_Tusk_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_SnowballClass;
  CDOTA_Ability_Tusk_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_SnowballClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Tusk_SnowballClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Tusk_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_SnowballClass;
}


// CDOTA_Ability_Tusk_Snowball::GetAssociatedSecondaryAbilities  (line 577, @0x0000000002d1fe00, libserver.so)
// strings: "tusk_launch_snowball"
const char *__fastcall CDOTA_Ability_Tusk_Snowball::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Tusk_Snowball *const this)
{
  return "tusk_launch_snowball";
}


// CDOTA_Ability_Tusk_Snowball::OnUpgrade  (line 626, @0x0000000002ccbf20, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::OnUpgrade
// strings: "tusk_launch_snowball"
void __fastcall CDOTA_Ability_Tusk_Snowball::OnUpgrade(CDOTA_Ability_Tusk_Snowball *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "tusk_launch_snowball", 0);
  if ( AbilityByName != 0 )
    (*(AbilityByName->_vptr_IHandleEntity + 212))(AbilityByName, this->m_iLevel.m_Value);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Tusk_Snowball::OnUnStolen  (line 640, @0x0000000002cef0f0, libserver.so)  // inlines: LaunchSnowball
// calls: CDOTA_Ability_Tusk_Snowball::LaunchSnowball, CDOTABaseAbility::OnUnStolen
void __fastcall CDOTA_Ability_Tusk_Snowball::OnUnStolen(CDOTA_Ability_Tusk_Snowball *const this)
{
  if ( this->m_bInWindup )
    CDOTA_Ability_Tusk_Snowball::LaunchSnowball(this);
  CDOTABaseAbility::OnUnStolen(this);
}


// CDOTA_Ability_Tusk_Snowball::UpdateHorizontalMotion  (line 650, @0x0000000002ccf9e0, libserver.so)  // inlines: FastSqrt, Length2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CBaseEntity::GetAbsOrigin, CBaseEntity::SetAbsOrigin
void __fastcall CDOTA_Ability_Tusk_Snowball::UpdateHorizontalMotion(
        CDOTA_Ability_Tusk_Snowball *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  const Vector *AbsOrigin; // rax
  float v7; // xmm1_4

  if ( !this->m_bIsExpired )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(me);
    v7 = AbsOrigin->y - this->m_vProjectileLocation.y;
    if ( fsqrt(((AbsOrigin->x - this->m_vProjectileLocation.x) * (AbsOrigin->x - this->m_vProjectileLocation.x)) + (v7 * v7)) < 200.0 )
      CBaseEntity::SetAbsOrigin(me, &this->m_vProjectileLocation);
  }
}


// CDOTA_Ability_Tusk_Snowball::OnHorizontalMotionInterrupted  (line 658, @0x0000000002cce8f0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName, CDOTALocomotor::RemoveHorizontalMotionController, CDOTA_BaseNPC::Interrupt, CBaseEntity::StopSound
// strings: "modifier_tusk_snowball_movement", "Hero_Tusk.Snowball.Cast", "Hero_Tusk.Snowball.Loop"
void __fastcall CDOTA_Ability_Tusk_Snowball::OnHorizontalMotionInterrupted(CDOTA_Ability_Tusk_Snowball *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTALocomotor *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_tusk_snowball_movement");
  v3 = CDOTABaseAbility::GetCaster(this);
  v4 = (*(v3->_vptr_IHandleEntity + 376))(v3);
  CDOTALocomotor::RemoveHorizontalMotionController(v4, &this->CHorizontalMotionController);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::Interrupt(v5);
  v6 = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::StopSound(v6, "Hero_Tusk.Snowball.Cast");
  v7 = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::StopSound(v7, "Hero_Tusk.Snowball.Loop");
}


// CDOTA_Ability_Tusk_Snowball::LoadUnit  (line 671, @0x0000000002d0f340, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, GetEHandle, GetEntryIndex, GetRemainingTime, GetSerialNumber, GetTeamNumber, GrowMemory, HasElement, Set, SpeakConcept, operator[]
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, KeyValues::KeyValues, CountdownTimer::Now, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::Stop, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_Speech::SpeakConcept, CResponseCriteriaSet::~CResponseCriteriaSet (17 total)
// callers: CDOTA_Modifier_Tusk_Snowball_Movement::OnOrder
// strings: "modifier_faceless_void_chronosphere_freeze", "modifier_enigma_black_hole_pull", "modifier_tusk_snowball_movement_friendly", "snowball_start_ally"
void __fastcall CDOTA_Ability_Tusk_Snowball::LoadUnit(CDOTA_Ability_Tusk_Snowball *const this, CDOTA_BaseNPC *pTarget)
{
  CEntityIdentity *m_pEntity; // rdx
  __int16 v5; // si
  unsigned __int8 m_Value; // r14
  __int64 v7; // r14
  CDOTA_BaseNPC *Caster; // rax
  float v9; // r15d
  float v10; // xmm0_4
  CDOTA_BaseNPC *v11; // rax
  CEntityIdentity *v12; // rax
  int v13; // edx
  __int16 v14; // cx
  __int64 m_Size; // r15
  int v16; // eax
  CHandle<CBaseEntity> *v17; // rax
  CDOTA_Speech *m_pSpeech; // rdi
  unsigned __int8 v19; // r14
  CDOTA_BaseNPC *v20; // rax
  CResponseCriteriaSet criteria; // [rsp+20h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v23; // [rsp+78h] [rbp-38h]

  LODWORD(criteria._vptr_CResponseCriteriaSet) = -1;
  v23 = __readfsqword(0x28u);
  if ( pTarget != 0 )
  {
    m_pEntity = pTarget->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v5 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v5 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LODWORD(criteria._vptr_CResponseCriteriaSet) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                                   | v5 & 0x7FFF;
    }
  }
  if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
         &this->m_hSnowballedUnits,
         &criteria) < 0 )
  {
    if ( (pTarget->m_iUnitType & 1) == 0
      || (v19 = pTarget->m_iTeamNum.m_Value) != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value
      || (v20 = CDOTABaseAbility::GetCaster(this),
          !CDOTA_PlayerResource::IsDisableHelpSetForPlayerID(
             g_pDOTAPlayerResource,
             pTarget->m_nControllingPlayerID,
             v20->m_nControllingPlayerID)) )
    {
      if ( pTarget != CDOTABaseAbility::GetCaster(this) )
      {
        m_Value = pTarget->m_iTeamNum.m_Value;
        if ( m_Value == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value
          && CDOTA_BaseNPC::FindModifierByName(pTarget, "modifier_faceless_void_chronosphere_freeze", 0) == 0
          && CDOTA_BaseNPC::FindModifierByName(pTarget, "modifier_enigma_black_hole_pull", 0) == 0 )
        {
          v7 = (*(pTarget->_vptr_IHandleEntity + 413))(pTarget);
          Caster = CDOTABaseAbility::GetCaster(this);
          if ( v7 == (*(Caster->_vptr_IHandleEntity + 413))(Caster)
            || (*(pTarget->_vptr_IHandleEntity + 414))(pTarget) != -1 && !pTarget->m_bIsIllusion.m_Value )
          {
            KeyValues::KeyValues(&kv, "modifier_tusk_snowball_movement_friendly");
            v9 = this->ctSnowball.m_timestamp.m_Value;
            v10 = CountdownTimer::Now(&this->ctSnowball);
            KeyValues::SetFloat(&kv, "duration", v9 - v10);
            v11 = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(pTarget, v11, this, "modifier_tusk_snowball_movement_friendly", &kv, 0);
            LODWORD(criteria._vptr_CResponseCriteriaSet) = -1;
            v12 = pTarget->m_pEntity;
            if ( v12 != 0 )
            {
              v13 = (v12->m_EHandle.m_Index >> 15) - (v12->m_flags & 1);
              v14 = 0x7FFF;
              if ( v12->m_EHandle.m_Index != -1 )
                v14 = v12->m_EHandle.m_Index & 0x7FFF;
              LOWORD(criteria._vptr_CResponseCriteriaSet) = v14 | criteria._vptr_CResponseCriteriaSet & 0x8000;
              LODWORD(criteria._vptr_CResponseCriteriaSet) = (v13 << 15) | criteria._vptr_CResponseCriteriaSet & 0x7FFF;
            }
            m_Size = this->m_hSnowballedUnits.m_Size;
            v16 = this->m_hSnowballedUnits.m_Size;
            if ( m_Size == this->m_hSnowballedUnits.m_Memory.m_nAllocationCount )
            {
              CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hSnowballedUnits.m_Memory, 1);
              v16 = this->m_hSnowballedUnits.m_Size;
            }
            this->m_hSnowballedUnits.m_Size = v16 + 1;
            v17 = &this->m_hSnowballedUnits.m_Memory.m_pMemory[m_Size];
            if ( v17 != 0 )
              v17->m_Index = criteria._vptr_CResponseCriteriaSet;
            CDOTA_BaseNPC::Stop(pTarget);
            if ( !this->m_bSpeakAlly )
            {
              CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
              CResponseCriteriaSet::AppendCriteria(&criteria, "snowball_start_ally", "yes", 1.0);
              m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
              if ( m_pSpeech != 0 )
                CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 4, 0, 0, 0, 0);
              this->m_bSpeakAlly = 1;
              CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
            }
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
  }
}


// CDOTA_Ability_Tusk_Snowball::OnSpellStart  (line 717, @0x0000000002d027e0, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, Invalidate, NetworkStateChanged, Set, Start, ToDOTABaseNPC, Vector, VectorNormalize2D, VectorSubtract, operator-, operator=, operator=<float>
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTALocomotor::ApplyHorizontalMotionController, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_BaseNPC::SwapAbilities, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCursorPosition (30 total)
// strings: "modifier_wisp_tether_haste", "modifier_wisp_tether", "modifier_wisp_overcharge", "wisp_tether_break", "modifier_chen_test_of_faith_teleport", "snowball_windup" (20 total)
void __fastcall CDOTA_Ability_Tusk_Snowball::OnSpellStart(CDOTA_Ability_Tusk_Snowball *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTALocomotor *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // r13
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  const Vector *AbsOrigin; // r13
  vec_t v16; // xmm0_4
  vec_t v17; // xmm1_4
  CDOTA_BaseNPC *v18; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v20; // eax
  __int16 v21; // cx
  CBaseEntity *v22; // rax
  CEntityIdentity *v23; // rdx
  int v24; // eax
  __int16 v25; // cx
  float v26; // xmm1_4
  CDOTA_BaseNPC *v27; // r15
  CDOTA_BaseNPC *v28; // rax
  CDOTA_BaseNPC *v29; // rax
  CDOTA_BaseNPC *v30; // rax
  const Vector *v31; // r15
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *v33; // r15
  CDOTA_ParticleManager *v34; // rax
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *v36; // rax
  vec_t snowball_radius; // xmm0_4
  vec_t snowball_grow_rate; // xmm1_4
  int v39; // r12d
  CDOTA_ParticleManager *v40; // rax
  CDOTA_BaseNPC *v41; // rax
  CDOTA_BaseNPC *v42; // r12
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v44; // rax
  CDOTA_BaseNPC *v45; // rax
  __m128i v46; // xmm0
  double v47; // xmm1_8
  double v48; // xmm3_8
  __m128i v49; // xmm2
  float v50; // r12d
  CDOTA_BaseNPC *v51; // rax
  const QAngle *AbsAngles; // rax
  CDOTA_BaseNPC *pEnt; // [rsp+10h] [rbp-80h]
  int iIndex; // [rsp+18h] [rbp-78h]
  float snowball_windup; // [rsp+1Ch] [rbp-74h]
  Vector vDir; // [rsp+20h] [rbp-70h] BYREF
  Vector CursorPosition; // [rsp+30h] [rbp-60h]
  KeyValues kv; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v59; // [rsp+58h] [rbp-38h]

  v59 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    this->m_vProjectileLocation = *CBaseEntity::GetAbsOrigin(Caster);
    v5 = CDOTABaseAbility::GetCaster(this);
    v6 = (*(v5->_vptr_IHandleEntity + 376))(v5);
    if ( CDOTALocomotor::ApplyHorizontalMotionController(v6, &this->CHorizontalMotionController, 0) )
    {
      v7 = CDOTABaseAbility::GetCaster(this);
      ModifierByName = CDOTA_BaseNPC::FindModifierByName(v7, "modifier_wisp_tether_haste", 0);
      if ( ModifierByName != 0 )
      {
        v9 = CDOTA_Buff::GetCaster(ModifierByName);
        v10 = v9;
        if ( v9 != 0 )
        {
          CDOTA_BaseNPC::RemoveModifierByName(v9, "modifier_wisp_tether");
          v11 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::RemoveModifierByName(v11, "modifier_wisp_tether_haste");
          v12 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::RemoveModifierByName(v12, "modifier_wisp_overcharge");
          CDOTA_BaseNPC::SwapAbilities(v10, "wisp_tether_break", "wisp_tether", 0, 1);
        }
      }
      v13 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::RemoveModifierByName(v13, "modifier_chen_test_of_faith_teleport");
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hSnowballedUnits);
      if ( this->ctSnowball.m_timestamp.m_Value != -1.0 )
      {
        (*(this->ctSnowball._vptr_CountdownTimer + 2))(&this->ctSnowball, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL, -1.0);
        this->ctSnowball.m_timestamp.m_Value = -1.0;
      }
      this->m_bSpeakAlly = 0;
      this->m_bIsExpired = 0;
      this->m_bEndingSnowball = 0;
      snowball_windup = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "snowball_windup", -1, 0);
      this->snowball_windup_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                       this,
                                       "snowball_windup_radius",
                                       -1,
                                       0);
      this->snowball_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "snowball_radius", -1, 0);
      this->snowball_grow_rate = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "snowball_grow_rate", -1, 0);
      this->snowball_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "snowball_damage", -1, 0);
      this->snowball_damage_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "snowball_damage_bonus", -1, 0);
      this->stun_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 0);
      this->snowball_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "snowball_speed", -1, 0);
      this->snowball_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "snowball_duration", -1, 0);
      v14 = CDOTABaseAbility::GetCaster(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v14);
      CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
      v16 = CursorPosition.y - AbsOrigin->y;
      v17 = CursorPosition.x - AbsOrigin->x;
      vDir.z = 0.0;
      vDir.y = v16;
      vDir.x = v17;
      if ( VectorNormalize(&vDir) < 0.0099999998 )
      {
        v51 = CDOTABaseAbility::GetCaster(this);
        AbsAngles = CBaseEntity::GetAbsAngles(v51);
        AngleVectors(AbsAngles, &vDir, 0, 0);
      }
      this->m_projectileInfo.pAbility = this;
      v18 = CDOTABaseAbility::GetCaster(this);
      if ( v18 != 0 && (m_pEntity = v18->m_pEntity) != 0 )
      {
        v20 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v21 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_projectileInfo.hSource.m_Index) = v21 | this->m_projectileInfo.hSource.m_Index & 0x8000;
        this->m_projectileInfo.hSource.m_Index = (v20 << 15) | this->m_projectileInfo.hSource.m_Index & 0x7FFF;
      }
      else
      {
        this->m_projectileInfo.hSource.m_Index = -1;
      }
      v22 = CDOTABaseAbility::GetCursorTarget(this);
      if ( v22 != 0 && (v23 = v22->m_pEntity) != 0 )
      {
        v24 = (v23->m_EHandle.m_Index >> 15) - (v23->m_flags & 1);
        v25 = 0x7FFF;
        if ( v23->m_EHandle.m_Index != -1 )
          v25 = v23->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_projectileInfo.hTarget.m_Index) = v25 | this->m_projectileInfo.hTarget.m_Index & 0x8000;
        this->m_projectileInfo.hTarget.m_Index = (v24 << 15) | this->m_projectileInfo.hTarget.m_Index & 0x7FFF;
      }
      else
      {
        this->m_projectileInfo.hTarget.m_Index = -1;
      }
      this->m_projectileInfo.bDodgeable = 0;
      this->m_projectileInfo.iSourceAttachment = 3;
      KeyValues::KeyValues(&kv, "modifier_tusk_snowball_movement");
      KeyValues::SetFloat(&kv, "duration", v26);
      v27 = CDOTABaseAbility::GetCaster(this);
      v28 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v28, v27, this, "modifier_tusk_snowball_movement", &kv, 0);
      this->m_hPrimaryTarget.m_Index = this->m_projectileInfo.hTarget.m_Index;
      v29 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, v29, this, "modifier_tusk_snowball_visible", &kv, 0);
      this->m_nFXIndex = CDOTABaseAbility::CreateAbilityParticleEffect(
                           this,
                           "particles/units/heroes/hero_tusk/tusk_snowball_start.vpcf",
                           2,
                           0,
                           0);
      v30 = CDOTABaseAbility::GetCaster(this);
      v31 = CBaseEntity::GetAbsOrigin(v30);
      pEnt = CDOTABaseAbility::GetCaster(this);
      iIndex = this->m_nFXIndex;
      ParticleManager = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, iIndex, 0, pEnt, 1, 0, *v31, 1);
      v33 = CBaseEntity::GetAbsOrigin(v3);
      LODWORD(pEnt) = this->m_nFXIndex;
      v34 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v34, pEnt, 1, v3, 1, 0, *v33, 1);
      CursorPosition.x = 0.0099999998;
      CursorPosition.z = 0.0099999998;
      m_nFXIndex = this->m_nFXIndex;
      CursorPosition.y = snowball_windup;
      v36 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v36, m_nFXIndex, 2, *&CursorPosition.x, CursorPosition.z);
      snowball_radius = this->snowball_radius;
      CursorPosition.x = 0.0;
      snowball_grow_rate = this->snowball_grow_rate;
      v39 = this->m_nFXIndex;
      CursorPosition.z = snowball_radius;
      CursorPosition.y = snowball_grow_rate;
      v40 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v40, v39, 3, *&CursorPosition.x, CursorPosition.z);
      v41 = CDOTABaseAbility::GetCaster(this);
      v42 = v41;
      if ( v41 != 0 )
      {
        AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v41, "tusk_launch_snowball", 0);
        if ( AbilityByName != 0 )
        {
          CDOTABaseAbility::SetActivated(AbilityByName, 1);
          CDOTA_BaseNPC::SwapAbilities(v42, "tusk_launch_snowball", "tusk_snowball", 1, 0);
        }
      }
      v44 = CDOTABaseAbility::GetCaster(this);
      DOTA_EmitSound(10, "Hero_Tusk.Snowball.Cast", v44);
      v45 = CDOTABaseAbility::GetCaster(this);
      DOTA_EmitSound(8, "Hero_Tusk.Snowball.Loop", v45);
      *v46.m128i_i32 = CountdownTimer::Now(&this->ctSnowball);
      v49 = v46;
      *v49.m128i_i32 = *v46.m128i_i32 + snowball_windup;
      v50 = COERCE_FLOAT(_mm_cvtsi128_si32(v49));
      if ( (*v46.m128i_i32 + snowball_windup) != this->ctSnowball.m_timestamp.m_Value )
      {
        (*(this->ctSnowball._vptr_CountdownTimer + 2))(&this->ctSnowball, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->ctSnowball.m_timestamp.m_Value = v50;
      }
      if ( snowball_windup != this->ctSnowball.m_duration.m_Value )
      {
        (*(this->ctSnowball._vptr_CountdownTimer + 2))(
          &this->ctSnowball,
          8,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL,
          *v46.m128i_i64,
          v47,
          *v49.m128i_i64,
          v48,
          snowball_windup);
        this->ctSnowball.m_duration.m_Value = snowball_windup;
      }
      CBaseEntity::SetNextThink(this, COERCE_DOUBLE(LODWORD(snowball_windup)), v47, 0);
      this->m_bInWindup = 1;
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Ability_Tusk_Snowball::Think  (line 814, @0x0000000002cef160, libserver.so)  // inlines: EndSnowball, GetRemainingTime, LaunchSnowball, SpeakConcept
// calls: CDOTABaseAbility::Think, CDOTABaseAbility::GetCaster, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_Speech::SpeakConcept, CResponseCriteriaSet::~CResponseCriteriaSet, CountdownTimer::Now, CDOTA_Ability_Tusk_Snowball::LaunchSnowball, CDOTA_Ability_Tusk_Snowball::EndSnowball, CBaseEntity::SetNextThink, _Unwind_Resume
// strings: "snowball_start_ally"
void __fastcall CDOTA_Ability_Tusk_Snowball::Think(CDOTA_Ability_Tusk_Snowball *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Speech *m_pSpeech; // rdi
  float m_Value; // [rsp+1Ch] [rbp-54h]
  CResponseCriteriaSet criteria; // [rsp+20h] [rbp-50h] BYREF

  CDOTABaseAbility::Think(this);
  if ( this->m_bInWindup )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    if ( (*(Caster->_vptr_IHandleEntity + 408))(Caster) != 0 )
    {
      if ( this->m_hSnowballedUnits.m_Size != 0 )
      {
        CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
        CResponseCriteriaSet::AppendCriteria(&criteria, "snowball_start_ally", "yes", 1.0);
        m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
        if ( m_pSpeech != 0 )
          CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 4, 0, 0, 0, 0);
        CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
      }
      m_Value = this->ctSnowball.m_timestamp.m_Value;
      if ( (m_Value - CountdownTimer::Now(&this->ctSnowball)) >= 0.1 )
      {
        CBaseEntity::SetNextThink(this, COERCE_DOUBLE(1036831949), COERCE_DOUBLE(LODWORD(m_Value)), 0);
      }
      else if ( this->m_bInWindup )
      {
        CDOTA_Ability_Tusk_Snowball::LaunchSnowball(this);
      }
    }
    else if ( !this->m_bEndingSnowball )
    {
      CDOTA_Ability_Tusk_Snowball::EndSnowball(this, 0);
    }
  }
}


// CDOTA_Ability_Tusk_Snowball::LaunchSnowball  (line 842, @0x0000000002ceecb0, libserver.so)  // inlines: EndSnowball, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, Invalidate, IsRealHero, IsValid, LookupEntity, NetworkStateChanged, Set, Start, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator->, operator=<float>, operator==
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::SetActivated, CDOTA_BaseNPC::SwapAbilities, CEntityHandle::operator CEntityInstance*, CountdownTimer::Now, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTABaseAbility::CreateAbilityParticleEffect, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl (14 total)
// callers: CDOTA_Ability_Tusk_Snowball::LaunchSnowball, CDOTA_Ability_Tusk_Snowball::OnUnStolen, CDOTA_Ability_Tusk_Launch_Snowball::OnSpellStart, CDOTA_Ability_Tusk_Snowball::Think
// strings: "tusk_launch_snowball", "tusk_snowball", "particles/units/heroes/hero_tusk/tusk_snowball.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Tusk_Snowball::LaunchSnowball(CDOTA_Ability_Tusk_Snowball *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // r12
  CDOTABaseAbility *AbilityByName; // rax
  double v5; // xmm0_8
  double v6; // xmm1_8
  double v7; // xmm2_8
  double v8; // xmm3_8
  int m_Size; // ecx
  CHandle<CBaseEntity> *m_pMemory; // rdx
  CConcreteEntityList *v11; // r8
  CHandle<CBaseEntity> *v12; // rax
  __int64 v13; // rdi
  uint32 m_Index; // ecx
  __int16 v15; // si
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  CEntityInstance *m_pInstance; // rdx
  int m_nFXIndex; // r13d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v21; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v23; // rax
  int v24; // r14d
  const CBaseAnimating *v25; // r15
  CDOTA_ParticleManager *v26; // rax
  const CBaseEntity *v27; // rax
  const Vector *v28; // r13
  CEntityInstance *v29; // rax
  int v30; // r12d
  const CBaseAnimating *v31; // r14
  CDOTA_ParticleManager *v32; // rax
  int v33; // r12d
  CDOTA_ParticleManager *v34; // rax
  int v35; // r12d
  CDOTA_ParticleManager *v36; // rax
  float v37; // [rsp+8h] [rbp-48h]
  float flSpeed; // [rsp+Ch] [rbp-44h]
  float flSpeeda; // [rsp+Ch] [rbp-44h]
  double v40; // [rsp+10h] [rbp-40h]

  this->m_bInWindup = 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = Caster;
  if ( Caster != 0 )
  {
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "tusk_launch_snowball", 0);
    if ( AbilityByName != 0 )
    {
      CDOTABaseAbility::SetActivated(AbilityByName, 0);
      CDOTA_BaseNPC::SwapAbilities(v3, "tusk_launch_snowball", "tusk_snowball", 0, 1);
    }
  }
  if ( CEntityHandle::operator CEntityInstance *(&this->m_projectileInfo.hTarget) != 0 )
  {
    if ( this->ctSnowball.m_timestamp.m_Value != -1.0 )
    {
      (*(this->ctSnowball._vptr_CountdownTimer + 2))(&this->ctSnowball, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->ctSnowball.m_timestamp.m_Value = -1.0;
    }
    flSpeed = this->snowball_duration;
    *&v5 = CountdownTimer::Now(&this->ctSnowball) + flSpeed;
    if ( *&v5 != this->ctSnowball.m_timestamp.m_Value )
    {
      v37 = *&v5;
      (*(this->ctSnowball._vptr_CountdownTimer + 2))(&this->ctSnowball, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      *&v5 = LODWORD(v37);
      this->ctSnowball.m_timestamp.m_Value = v37;
    }
    if ( flSpeed != this->ctSnowball.m_duration.m_Value )
    {
      (*(this->ctSnowball._vptr_CountdownTimer + 2))(
        &this->ctSnowball,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL,
        v5,
        v6,
        v7,
        v8,
        flSpeed);
      this->ctSnowball.m_duration.m_Value = flSpeed;
    }
    this->m_nContainedValidUnits = 0;
    m_Size = this->m_hSnowballedUnits.m_Size;
    if ( m_Size > 0 )
    {
      m_pMemory = this->m_hSnowballedUnits.m_Memory.m_pMemory;
      v11 = CEntityHandle::gm_pEntityList;
      v12 = m_pMemory + 1;
      v13 = &m_pMemory[m_Size - 1 + 1];
      while ( 1 )
      {
        m_Index = m_pMemory->m_Index;
        if ( m_pMemory->m_Index + 2 > 1
          && (v15 = m_pMemory->m_Index, (v16 = v11->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F]) != 0)
          && (v17 = &v16[v15 & 0x1FF]) != 0
          && m_Index == v17->m_EHandle.m_Index
          && (m_pInstance = v17->m_pInstance) != 0
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
          && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
        {
          ++this->m_nContainedValidUnits;
          m_pMemory = v12;
          if ( v12 == v13 )
            break;
        }
        else
        {
          m_pMemory = v12;
          if ( v12 == v13 )
            break;
        }
        ++v12;
      }
    }
    m_nFXIndex = this->m_nFXIndex;
    flSpeeda = this->snowball_speed;
    this->m_projectileInfo.iMoveSpeed = flSpeeda;
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 1);
    this->m_nFXIndex = CDOTABaseAbility::CreateAbilityParticleEffect(
                         this,
                         "particles/units/heroes/hero_tusk/tusk_snowball.vpcf",
                         2,
                         0,
                         0);
    v21 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v21);
    v23 = CDOTABaseAbility::GetCaster(this);
    v24 = this->m_nFXIndex;
    v25 = v23;
    v26 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v26, v24, 0, v25, 1, 0, *AbsOrigin, 1);
    v27 = CEntityHandle::operator CEntityInstance *(&this->m_projectileInfo.hTarget);
    v28 = CBaseEntity::GetAbsOrigin(v27);
    v29 = CEntityHandle::operator CEntityInstance *(&this->m_projectileInfo.hTarget);
    v30 = this->m_nFXIndex;
    v31 = v29;
    v32 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v32, v30, 1, v31, 1, 0, *v28, 1);
    v33 = this->m_nFXIndex;
    *&v40 = flSpeeda;
    HIDWORD(v40) = LODWORD(this->snowball_duration);
    v34 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v34, v33, 2, v40, flSpeeda);
    v35 = this->m_nFXIndex;
    *&v40 = this->snowball_radius;
    *(&v40 + 1) = this->snowball_grow_rate;
    v36 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v36, v35, 3, v40, *&v40);
    CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &this->m_projectileInfo);
  }
  else if ( !this->m_bEndingSnowball )
  {
    CDOTA_Ability_Tusk_Snowball::EndSnowball(this, 0);
  }
}


// CDOTA_Ability_Tusk_Snowball::LaunchSnowball  (line 842, @0x0000000002cef0d0, libserver.so)
// calls: CDOTA_Ability_Tusk_Snowball::LaunchSnowball
void __fastcall CDOTA_Ability_Tusk_Snowball::LaunchSnowball(CDOTA_Ability_Tusk_Snowball *const this)
{
  if ( this->m_bInWindup )
    CDOTA_Ability_Tusk_Snowball::LaunchSnowball(this);
}


// CDOTA_Ability_Tusk_Snowball::EndSnowball  (line 892, @0x0000000002cee890, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[]
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::RemoveModifierByName, CDOTALocomotor::RemoveHorizontalMotionController, CBaseEntity::StopSound, CBaseEntity::GetAbsOrigin, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::TriggerSpellReflect
// callers: CDOTA_Ability_Tusk_Snowball::EndSnowball, CDOTA_Ability_Tusk_Snowball::OnProjectileHit, CDOTA_Modifier_Tusk_Snowball_Movement::OnDestroy, CDOTA_Ability_Tusk_Snowball::LaunchSnowball, CDOTA_Ability_Tusk_Snowball::Think, CDOTA_Ability_Tusk_Snowball::OnProjectileThink
// strings: "modifier_tusk_snowball_movement", "modifier_tusk_snowball_movement_friendly", "Hero_Tusk.Snowball.Loop", "modifier_tusk_snowball_visible"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Tusk_Snowball::EndSnowball(CDOTA_Ability_Tusk_Snowball *const this, bool bHitTarget)
{
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Caster; // rax
  bool v7; // r14
  __int64 v8; // r12
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTALocomotor *v11; // rax
  CHandle<CBaseEntity> *v12; // rdx
  uint32 m_Index; // eax
  __int16 v14; // cx
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityInstance *m_pInstance; // rax
  char m_CScriptComponent_high; // r15
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  CEntityInstance *v22; // rax
  CDOTA_BaseNPC *v23; // r12

  this->m_bEndingSnowball = 1;
  m_nFXIndex = this->m_nFXIndex;
  if ( m_nFXIndex != -1 )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 0);
    this->m_nFXIndex = -1;
  }
  if ( CDOTABaseAbility::GetCaster(this) != 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    v7 = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_tusk_snowball_movement", 0) != 0;
    v8 = 0;
    v9 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveModifierByName(v9, "modifier_tusk_snowball_movement");
    v10 = CDOTABaseAbility::GetCaster(this);
    v11 = (*(v10->_vptr_IHandleEntity + 376))(v10);
    CDOTALocomotor::RemoveHorizontalMotionController(v11, &this->CHorizontalMotionController);
    if ( this->m_hSnowballedUnits.m_Size > 0 )
    {
      do
      {
        v12 = &this->m_hSnowballedUnits.m_Memory.m_pMemory[v8];
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
              {
                m_CScriptComponent_high = HIBYTE(m_pInstance[7].m_CScriptComponent);
                if ( m_CScriptComponent_high == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
                {
                  v19 = CDOTABaseAbility::GetCaster(this);
                  CDOTA_BaseNPC::RemoveModifierByName(v19, "modifier_tusk_snowball_movement_friendly");
                }
              }
            }
          }
        }
        ++v8;
      }
      while ( this->m_hSnowballedUnits.m_Size > v8 );
    }
    v20 = CDOTABaseAbility::GetCaster(this);
    CBaseEntity::StopSound(v20, "Hero_Tusk.Snowball.Loop");
    v21 = CDOTABaseAbility::GetCaster(this);
    this->m_vProjectileLocation = *CBaseEntity::GetAbsOrigin(v21);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hSnowballedUnits);
    if ( v7 && bHitTarget )
    {
      v22 = CEntityHandle::operator CEntityInstance *(&this->m_hPrimaryTarget);
      v23 = v22;
      if ( v22 != 0 && BYTE3(v22[7]._vptr_IHandleEntity) != 0 && (*(v22->_vptr_IHandleEntity + 408))(v22) != 0 )
      {
        CDOTA_BaseNPC::TriggerSpellReflect(v23, this);
        CDOTA_BaseNPC::RemoveModifierByName(v23, "modifier_tusk_snowball_visible");
      }
    }
  }
  else
  {
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hSnowballedUnits);
  }
  this->m_bEndingSnowball = 0;
}


// CDOTA_Ability_Tusk_Snowball::EndSnowball  (line 892, @0x0000000002ceeaf0, libserver.so)
// calls: CDOTA_Ability_Tusk_Snowball::EndSnowball
void __fastcall CDOTA_Ability_Tusk_Snowball::EndSnowball(CDOTA_Ability_Tusk_Snowball *const this, bool bHitTarget)
{
  if ( !this->m_bEndingSnowball )
    CDOTA_Ability_Tusk_Snowball::EndSnowball(this, bHitTarget);
}


// CDOTA_Ability_Tusk_Snowball::OnProjectileHit  (line 943, @0x0000000002ceeb20, libserver.so)  // inlines: EndSnowball, GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsValid, LookupEntity, SpeakConcept, operator bool, operator=
// calls: CResponseCriteriaSet::CResponseCriteriaSet, CDOTA_Ability_Tusk_Snowball::EndSnowball, CResponseCriteriaSet::~CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTABaseAbility::GetCaster, CDOTA_Speech::SpeakConcept, _Unwind_Resume
// strings: "snowball_hit", "snowball_hit_ally"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Tusk_Snowball::OnProjectileHit(
        CDOTA_Ability_Tusk_Snowball *const this,
        _WORD *hTarget,
        const Vector *const vLocation)
{
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_Speech *m_pSpeech; // rdi
  CResponseCriteriaSet criteria; // [rsp+10h] [rbp-60h] BYREF

  CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
  if ( (*hTarget + 2) > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[*hTarget & 0x1FF];
      if ( v7 != 0 && *hTarget == v7->m_EHandle.m_Index )
      {
        if ( this->m_bSpeakAlly )
          CResponseCriteriaSet::AppendCriteria(&criteria, "snowball_hit", "yes", 1.0);
        else
          CResponseCriteriaSet::AppendCriteria(&criteria, "snowball_hit_ally", "yes", 1.0);
        m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
        if ( m_pSpeech != 0 )
          CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 4, 0, 0, 0, 0);
      }
    }
  }
  if ( !this->m_bIsExpired )
  {
    this->m_vProjectileLocation.x = vLocation->x;
    this->m_vProjectileLocation.y = vLocation->y;
    this->m_vProjectileLocation.z = vLocation->z;
  }
  if ( !this->m_bEndingSnowball )
    CDOTA_Ability_Tusk_Snowball::EndSnowball(this, 1);
  CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  return 0;
}


// CDOTA_Ability_Tusk_Snowball::OnProjectileThink  (line 978, @0x0000000002d188d0, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CEntityHandle, CHandle, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, CopyConstruct<CHandle<CBaseEntity> >, Element, EndSnowball, Get, GetEHandle, GetElapsedTime, GetEntityIdentity, GetEntryIndex, GetInstance, GetRemainingTime, GetSerialNumber, GetTeamNumber, GrowMemory, HasElement, IndexToIdentity, IsRealHero, IsValid, LookupEntity, Purge, Reset, Set, SpeakConcept, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, Vector, entindex, operator CBaseEntity*, operator CEntityInstance*, operator=, operator==<CBaseEntity>, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CResponseCriteriaSet::CResponseCriteriaSet, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CountdownTimer::Now, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, DOTA_EmitSound, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier (32 total)
// strings: "modifier_tusk_snowball_movement", "Hero_Tusk.Snowball.ProjectileHit", "modifier_stunned", "Hero_Tusk.Snowball.Stun", "snowball_fail", "Hero_Tusk.Snowball.Stun.Small"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Tusk_Snowball::OnProjectileThink(
        CDOTA_Ability_Tusk_Snowball *const this,
        const Vector *const vLocation)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // r12
  float m_Value; // r14d
  float v7; // xmm0_4
  int v8; // xmm2_4
  float v9; // xmm0_4
  int m_nFXIndex; // r13d
  __m128i v11; // xmm7
  float v12; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v14; // rax
  __int64 v15; // r13
  int v16; // r14d
  CHandle<CBaseEntity> *v17; // rdx
  uint32 m_Index; // eax
  __int16 v19; // cx
  CEntityIdentity *v20; // rdx
  CEntityIdentity *v21; // rdx
  CEntityInstance *m_pInstance; // r12
  char m_CScriptComponent_high; // r15
  CEntityIdentity *m_pEntity; // rax
  int v25; // edx
  __int16 v26; // cx
  CEntityInstance *v27; // rsi
  CHandle<CBaseEntity> *v28; // rdx
  uint32 v29; // eax
  __int16 v30; // di
  CEntityIdentity *v31; // rdx
  CEntityIdentity *v32; // rdx
  uint32 v33; // eax
  CEntityInstance *v34; // rdi
  CEntityIdentity *v35; // rdx
  CEntityIdentity *v36; // rdx
  CDOTA_BaseNPC *v37; // rax
  float v38; // xmm1_4
  CDOTA_BaseNPC *v39; // rax
  CDOTA_BaseNPC_Hero *v40; // r15
  CDOTA_BaseNPC *v41; // rax
  CDOTA_BaseNPC_Hero *v42; // rdi
  CDOTA_BaseNPC *v43; // rax
  CEntityIdentity *v44; // rax
  int v45; // edx
  __int16 v46; // cx
  __int64 v47; // r15
  int v48; // eax
  CHandle<CBaseEntity> *v49; // rax
  CDOTA_BaseNPC *v50; // rax
  unsigned int v51; // eax
  float v52; // xmm3_4
  CDOTA_BaseNPC *v53; // rax
  CDOTALocomotor *v54; // rax
  CDOTA_Speech *m_pSpeech; // rdi
  bool v56; // zf
  float bonus_damage; // xmm0_4
  CDOTA_BaseNPC *v58; // rax
  CEntityIndex v59; // eax
  __int64 m_Size; // r15
  int v61; // eax
  CEntityIndex *v62; // rax
  char bHitPrimaryTarget; // [rsp+34h] [rbp-11Ch]
  int32 bHitPrimaryTargeta; // [rsp+34h] [rbp-11Ch]
  float flStunDuration; // [rsp+58h] [rbp-F8h]
  float flDamagea; // [rsp+5Ch] [rbp-F4h]
  float flDamage; // [rsp+5Ch] [rbp-F4h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+60h] [rbp-F0h] BYREF
  CResponseCriteriaSet criteria; // [rsp+80h] [rbp-D0h] BYREF
  CUnitOrders attackOrder; // [rsp+C0h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+100h] [rbp-50h] BYREF
  unsigned __int64 v73; // [rsp+118h] [rbp-38h]

  v73 = __readfsqword(0x28u);
  CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
  this->m_vProjectileLocation = *vLocation;
  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_tusk_snowball_movement", 0);
  if ( ModifierByName == 0 )
    goto LABEL_54;
  m_Value = this->ctSnowball.m_timestamp.m_Value;
  if ( (m_Value - CountdownTimer::Now(&this->ctSnowball)) >= 0.1 )
    goto LABEL_3;
  CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
  v53 = CDOTABaseAbility::GetCaster(this);
  v54 = (*(v53->_vptr_IHandleEntity + 376))(v53);
  CDOTALocomotor::RemoveHorizontalMotionController(v54, &this->CHorizontalMotionController);
  CResponseCriteriaSet::AppendCriteria(&criteria, "snowball_fail", "yes", 1.0);
  m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
  if ( m_pSpeech != 0 )
    CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 4, 0, 0, 0, 0);
  v56 = !this->m_bEndingSnowball;
  this->m_bIsExpired = 1;
  if ( v56 )
  {
    CDOTA_Ability_Tusk_Snowball::EndSnowball(this, 0);
LABEL_3:
    if ( !this->m_bIsExpired )
    {
      flDamagea = this->snowball_radius;
      flStunDuration = this->snowball_grow_rate;
      v7 = CountdownTimer::Now(&this->ctSnowball);
      *&v8 = this->snowball_grow_rate;
      v9 = (v7 - this->ctSnowball.m_timestamp.m_Value) + this->ctSnowball.m_duration.m_Value;
      m_nFXIndex = this->m_nFXIndex;
      *&attackOrder.m_nUnits.m_Size = this->snowball_radius;
      attackOrder.m_nOrderSequenceNumber = v8;
      *v11.m128i_i32 = ((v9 * flStunDuration) + flDamagea);
      v12 = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
      attackOrder.m_nIssuerPlayerIndex = v11.m128i_i32[0];
      ParticleManager = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(
        ParticleManager,
        m_nFXIndex,
        3,
        *&attackOrder.m_nIssuerPlayerIndex,
        *&attackOrder.m_nUnits.m_Size);
      entities.m_Size = 0;
      entities.m_Memory.m_pMemory = 0;
      entities.m_Memory.m_nAllocationCount = 0;
      entities.m_Memory.m_nGrowSize = 0;
      v14 = CDOTABaseAbility::GetCaster(this);
      FindUnitsInRadius(v14->m_iTeamNum.m_Value, vLocation, 0, v12, &entities, 2, 19, 0, 0, 0);
      if ( entities.m_Size <= 0 )
      {
        bHitPrimaryTarget = 0;
      }
      else
      {
        v15 = 0;
        v16 = 0;
        bHitPrimaryTarget = 0;
        do
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
                if ( v21->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                {
                  m_CScriptComponent_high = HIBYTE(m_pInstance[7].m_CScriptComponent);
                  if ( m_CScriptComponent_high != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
                  {
                    attackOrder.m_nIssuerPlayerIndex = -1;
                    m_pEntity = m_pInstance->m_pEntity;
                    if ( m_pEntity != 0 )
                    {
                      v25 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                      v26 = 0x7FFF;
                      if ( m_pEntity->m_EHandle.m_Index != -1 )
                        v26 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                      LOWORD(attackOrder.m_nIssuerPlayerIndex) = v26 | attackOrder.m_nIssuerPlayerIndex & 0x8000;
                      attackOrder.m_nIssuerPlayerIndex = (v25 << 15) | attackOrder.m_nIssuerPlayerIndex & 0x7FFF;
                    }
                    if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                           &this->m_hSnowballedUnits,
                           &attackOrder) < 0 )
                    {
                      v27 = 0;
                      v28 = &entities.m_Memory.m_pMemory[v15];
                      v29 = entities.m_Memory.m_pMemory[v15].m_Index;
                      flDamage = (this->snowball_damage + this->m_nContainedValidUnits * this->snowball_damage_bonus);
                      if ( v29 + 2 > 1 )
                      {
                        v30 = v28->m_Index;
                        v31 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v28->m_Index) >> 9) & 0x3F];
                        if ( v31 != 0 )
                        {
                          v32 = &v31[v30 & 0x1FF];
                          if ( v32 != 0 && v29 == v32->m_EHandle.m_Index )
                            v27 = v32->m_pInstance;
                        }
                      }
                      v33 = this->m_hPrimaryTarget.m_Index;
                      v34 = 0;
                      if ( v33 + 2 > 1 )
                      {
                        v35 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hPrimaryTarget.m_Index) >> 9)
                                                                             & 0x3F];
                        if ( v35 != 0 )
                        {
                          v36 = &v35[this->m_hPrimaryTarget.m_Index & 0x1FF];
                          if ( v36 != 0 && v33 == v36->m_EHandle.m_Index )
                            v34 = v36->m_pInstance;
                        }
                      }
                      if ( v27 == v34 )
                      {
                        bonus_damage = this->bonus_damage;
                        attackOrder.m_bQueue = 0;
                        attackOrder.m_nUnits.m_Size = 0;
                        memset(&attackOrder.m_nUnits.m_Memory, 0, 28);
                        attackOrder.m_nOrderSequenceNumber = 0;
                        attackOrder.m_nIssuerPlayerIndex = -1;
                        flDamage = bonus_damage + flDamage;
                        attackOrder.m_vPosition = vec3_origin;
                        v58 = CDOTABaseAbility::GetCaster(this);
                        v59.m_Data = CEntityInstance::GetEntityIndex(v58).m_Data;
                        m_Size = attackOrder.m_nUnits.m_Size;
                        bHitPrimaryTargeta = v59.m_Data;
                        v61 = attackOrder.m_nUnits.m_Size;
                        if ( attackOrder.m_nUnits.m_Size == attackOrder.m_nUnits.m_Memory.m_nAllocationCount )
                        {
                          CUtlMemory<CEntityIndex,int>::Grow(&attackOrder.m_nUnits.m_Memory, 1);
                          v61 = attackOrder.m_nUnits.m_Size;
                        }
                        attackOrder.m_nUnits.m_Size = v61 + 1;
                        v62 = &attackOrder.m_nUnits.m_Memory.m_pMemory[m_Size];
                        if ( v62 != 0 )
                          v62->m_Data = bHitPrimaryTargeta;
                        attackOrder.m_nOrderType = 4;
                        attackOrder.m_nTargetIndex = CEntityInstance::GetEntityIndex(m_pInstance);
                        DOTA_ExecuteOrders(&attackOrder, 0, 0, 0);
                        CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::RemoveAll(&attackOrder.m_nUnits);
                        if ( (attackOrder.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                        {
                          CUtlMemory<CEntityIndex,int>::Purge(&attackOrder.m_nUnits.m_Memory);
                          if ( (attackOrder.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                            CUtlMemory<CEntityIndex,int>::Purge(&attackOrder.m_nUnits.m_Memory);
                        }
                        bHitPrimaryTarget = 1;
                      }
                      v37 = CDOTABaseAbility::GetCaster(this);
                      DOTA_EmitSound(10, "Hero_Tusk.Snowball.ProjectileHit", v37);
                      KeyValues::KeyValues(&kv, "modifier_stunned");
                      KeyValues::SetFloat(&kv, "duration", v38);
                      v39 = CDOTABaseAbility::GetCaster(this);
                      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v39, this, "modifier_stunned", &kv, 0);
                      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                        && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
                      {
                        v40 = 0;
                        if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                          v40 = m_pInstance;
                        v41 = CDOTABaseAbility::GetCaster(this);
                        if ( v41 != 0 && (v41->m_iUnitType & 1) != 0 )
                          v42 = v41;
                        else
                          v42 = 0;
                        EconEntity_OnOwnerKillEaterEvent(
                          v42,
                          v40,
                          kill_eater_event_t::kKillEaterEventType_Tusk_SnowballStuns,
                          1,
                          INVALID_ITEM_DEF_INDEX);
                      }
                      v43 = CDOTABaseAbility::GetCaster(this);
                      ApplyDamage(v43, m_pInstance, this, flDamage, 2, 0);
                      attackOrder.m_nIssuerPlayerIndex = -1;
                      v44 = m_pInstance->m_pEntity;
                      if ( v44 != 0 )
                      {
                        v45 = (v44->m_EHandle.m_Index >> 15) - (v44->m_flags & 1);
                        v46 = 0x7FFF;
                        if ( v44->m_EHandle.m_Index != -1 )
                          v46 = v44->m_EHandle.m_Index & 0x7FFF;
                        LOWORD(attackOrder.m_nIssuerPlayerIndex) = v46 | attackOrder.m_nIssuerPlayerIndex & 0x8000;
                        attackOrder.m_nIssuerPlayerIndex = (v45 << 15) | attackOrder.m_nIssuerPlayerIndex & 0x7FFF;
                      }
                      v47 = this->m_hSnowballedUnits.m_Size;
                      v48 = this->m_hSnowballedUnits.m_Size;
                      if ( v47 == this->m_hSnowballedUnits.m_Memory.m_nAllocationCount )
                      {
                        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hSnowballedUnits.m_Memory, 1);
                        v48 = this->m_hSnowballedUnits.m_Size;
                      }
                      this->m_hSnowballedUnits.m_Size = v48 + 1;
                      v49 = &this->m_hSnowballedUnits.m_Memory.m_pMemory[v47];
                      if ( v49 != 0 )
                        v49->m_Index = attackOrder.m_nIssuerPlayerIndex;
                      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                        DOTA_EmitSound(10, "Hero_Tusk.Snowball.Stun", m_pInstance);
                      else
                        DOTA_EmitSound(10, "Hero_Tusk.Snowball.Stun.Small", m_pInstance);
                      KeyValues::~KeyValues(&kv);
                    }
                  }
                }
              }
            }
          }
          ++v16;
          ++v15;
        }
        while ( entities.m_Size > v16 );
      }
      v50 = CDOTABaseAbility::GetCaster(this);
      v51 = (*(v50->_vptr_IHandleEntity + 414))(v50);
      CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v51, *vLocation, this->snowball_radius, v52);
      if ( bHitPrimaryTarget != 0 && !this->m_bEndingSnowball )
        CDOTA_Ability_Tusk_Snowball::EndSnowball(this, 1);
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
    }
  }
LABEL_54:
  CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
}


// CDOTA_Ability_Tusk_Snowball::GetAbilityDamageToTargetOverInterval  (line 1083, @0x0000000002cf67e0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "snowball_damage"
__int64 __fastcall CDOTA_Ability_Tusk_Snowball::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Tusk_Snowball *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  float LevelSpecialValue; // [rsp-1Ch] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "snowball_damage", -1, 0);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * LevelSpecialValue);
  }
  return result;
}


// CDOTA_Ability_Tusk_Snowball::GetStunDuration  (line 1093, @0x0000000002cf6840, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Tusk_Snowball::GetStunDuration(CDOTA_Ability_Tusk_Snowball *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 0);
}


// CDOTA_Ability_Tusk_Launch_Snowball::~CDOTA_Ability_Tusk_Launch_Snowball  (line 1103, @0x0000000002d2c4a0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Tusk_Launch_Snowball::~CDOTA_Ability_Tusk_Launch_Snowball(
        CDOTA_Ability_Tusk_Launch_Snowball *const this)
{
  this->_vptr_IHandleEntity = &off_4653F30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Tusk_Launch_Snowball::~CDOTA_Ability_Tusk_Launch_Snowball  (line 1103, @0x0000000002d2c4c0, libserver.so)  // inlines: ~CDOTA_Ability_Tusk_Launch_Snowball
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Tusk_Launch_Snowball::~CDOTA_Ability_Tusk_Launch_Snowball(
        CDOTA_Ability_Tusk_Launch_Snowball *const this)
{
  this->_vptr_IHandleEntity = &off_4653F30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Tusk_Launch_Snowball::Schema_DynamicBinding  (line 1105, @0x0000000002d1fe10, libserver.so)
// globals: CDOTA_Ability_Tusk_Launch_Snowball::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tusk_Launch_Snowball::Schema_DynamicBinding(
        const CDOTA_Ability_Tusk_Launch_Snowball *const this)
{
  return CDOTA_Ability_Tusk_Launch_Snowball::s_pSchemaBinding;
}


// CDOTA_Ability_Tusk_Launch_Snowball::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1105, @0x0000000002d1fe20, libserver.so)
// globals: CDOTA_Ability_Tusk_Launch_Snowball::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tusk_Launch_Snowball::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Tusk_Launch_Snowball::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tusk_Launch_Snowball::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Tusk_Launch_Snowball::CEntityInstanceEntityClass::DestructInstance  (line 1105, @0x0000000002d1fe30, libserver.so)  // inlines: Destruct<CDOTA_Ability_Tusk_Launch_Snowball>
void __fastcall CDOTA_Ability_Tusk_Launch_Snowball::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Tusk_Launch_Snowball::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Tusk_Launch_Snowball::CEntityInstanceEntityClass::FreeInstance  (line 1105, @0x0000000002d1fe50, libserver.so)
void __fastcall CDOTA_Ability_Tusk_Launch_Snowball::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Tusk_Launch_Snowball::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Tusk_Launch_Snowball::CEntityInstanceEntityClass::CanAllocate  (line 1105, @0x0000000002d1fe70, libserver.so)
bool __fastcall CDOTA_Ability_Tusk_Launch_Snowball::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Tusk_Launch_Snowball::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Tusk_Launch_Snowball::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1105, @0x0000000002d1fe80, libserver.so)
// globals: CDOTA_Ability_Tusk_Launch_Snowball::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Tusk_Launch_Snowball::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Tusk_Launch_Snowball::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tusk_Launch_Snowball::s_pSchemaBinding;
}


// CDOTA_Ability_Tusk_Launch_Snowball::CEntityInstanceEntityClass::AllocateInstance  (line 1105, @0x0000000002d251d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Tusk_Launch_Snowball::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Tusk_Launch_Snowball::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Tusk_Launch_Snowball::CEntityInstanceEntityClass::ConstructInstance  (line 1105, @0x0000000002d326e0, libserver.so)  // inlines: CDOTA_Ability_Tusk_Launch_Snowball, Construct<CDOTA_Ability_Tusk_Launch_Snowball>
// calls: CDOTABaseAbility::CDOTABaseAbility, CDOTABaseAbility::SetActivated, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Ability_Tusk_Launch_Snowball::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Tusk_Launch_Snowball::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4653F30;
    CDOTABaseAbility::SetActivated(p, 0);
  }
  return p;
}


// CDOTA_Ability_Tusk_Launch_Snowball::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1105, @0x0000000002d34a90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Tusk_Launch_Snowball::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tusk_Launch_Snowball::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Tusk_Launch_Snowball::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1105, @0x0000000002d34ab0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Tusk_Launch_Snowball::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tusk_Launch_Snowball::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Tusk_Launch_Snowball::GetEntityClassInternal  (line 1105, @0x0000000002d4aab0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "tusk_launch_snowball", "CDOTA_Ability_Tusk_Launch_Snowball"
// globals: `guard variable for'CDOTA_Ability_Tusk_Launch_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_Launch_SnowballClass, CDOTA_Ability_Tusk_Launch_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_Launch_SnowballClass, __dso_handle, CDOTA_Ability_Tusk_Launch_Snowball::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Tusk_Launch_Snowball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_Launch_SnowballClassInfo, CDOTA_Ability_Tusk_Launch_Snowball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_Launch_SnowballClassInfo
CEntityClass *__cdecl CDOTA_Ability_Tusk_Launch_Snowball::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Tusk_Launch_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_Launch_SnowballClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tusk_Launch_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_Launch_SnowballClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Tusk_Launch_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_Launch_SnowballClass);
    CDOTA_Ability_Tusk_Launch_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_Launch_SnowballClass._vptr_CEntityClass = off_4653EB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tusk_Launch_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_Launch_SnowballClass);
    __cxa_atexit(
      CDOTA_Ability_Tusk_Launch_Snowball::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Tusk_Launch_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_Launch_SnowballClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Tusk_Launch_SnowballClass != 0 )
    return &CDOTA_Ability_Tusk_Launch_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_Launch_SnowballClass;
  if ( `guard variable for'CDOTA_Ability_Tusk_Launch_Snowball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_Launch_SnowballClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tusk_Launch_Snowball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_Launch_SnowballClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Tusk_Launch_Snowball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_Launch_SnowballClassInfo,
      "CDOTA_Ability_Tusk_Launch_Snowball",
      "tusk_launch_snowball",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tusk_Launch_Snowball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_Launch_SnowballClassInfo);
  }
  CDOTA_Ability_Tusk_Launch_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_Launch_SnowballClass.m_pClassInfo = &CDOTA_Ability_Tusk_Launch_Snowball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_Launch_SnowballClassInfo;
  CDOTA_Ability_Tusk_Launch_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_Launch_SnowballClass.m_pBaseClassInfo = CDOTA_Ability_Tusk_Launch_Snowball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_Launch_SnowballClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Tusk_Launch_SnowballClass = &CDOTA_Ability_Tusk_Launch_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_Launch_SnowballClass;
  CDOTA_Ability_Tusk_Launch_Snowball::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_Launch_SnowballClassInfo.m_pClass = &CDOTA_Ability_Tusk_Launch_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_Launch_SnowballClass;
  CDOTA_Ability_Tusk_Launch_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_Launch_SnowballClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Tusk_Launch_SnowballClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Tusk_Launch_Snowball::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_Launch_SnowballClass;
}


// CDOTA_Ability_Tusk_Launch_Snowball::ProcsMagicStick  (line 1110, @0x0000000002d1fe90, libserver.so)
bool __fastcall CDOTA_Ability_Tusk_Launch_Snowball::ProcsMagicStick(CDOTA_Ability_Tusk_Launch_Snowball *const this)
{
  return 0;
}


// CDOTA_Ability_Tusk_Launch_Snowball::GetAssociatedPrimaryAbilities  (line 1112, @0x0000000002d1fea0, libserver.so)
// strings: "tusk_snowball"
const char *__fastcall CDOTA_Ability_Tusk_Launch_Snowball::GetAssociatedPrimaryAbilities(
        CDOTA_Ability_Tusk_Launch_Snowball *const this)
{
  return "tusk_snowball";
}


// CDOTA_Ability_Tusk_Launch_Snowball::IsHiddenWhenStolen  (line 1113, @0x0000000002d1feb0, libserver.so)
bool __fastcall CDOTA_Ability_Tusk_Launch_Snowball::IsHiddenWhenStolen(CDOTA_Ability_Tusk_Launch_Snowball *const this)
{
  return 1;
}


// CDOTA_Ability_Tusk_Launch_Snowball::OnSpellStart  (line 1119, @0x0000000002cef120, libserver.so)  // inlines: LaunchSnowball
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_Tusk_Snowball::LaunchSnowball
// strings: "tusk_snowball"
void __fastcall CDOTA_Ability_Tusk_Launch_Snowball::OnSpellStart(CDOTA_Ability_Tusk_Launch_Snowball *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Ability_Tusk_Snowball *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( Caster != 0 )
  {
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "tusk_snowball", 0);
    if ( AbilityByName != 0 && AbilityByName->m_bInWindup )
      CDOTA_Ability_Tusk_Snowball::LaunchSnowball(AbilityByName);
  }
}


// CDOTA_Modifier_Tusk_Snowball_Visible::~CDOTA_Modifier_Tusk_Snowball_Visible  (line 1138, @0x0000000002d27020, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tusk_Snowball_Visible::~CDOTA_Modifier_Tusk_Snowball_Visible(
        CDOTA_Modifier_Tusk_Snowball_Visible *const this)
{
  this->_vptr_CDOTA_Buff = &off_46549F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tusk_Snowball_Visible::~CDOTA_Modifier_Tusk_Snowball_Visible  (line 1138, @0x0000000002d27040, libserver.so)  // inlines: ~CDOTA_Modifier_Tusk_Snowball_Visible
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tusk_Snowball_Visible::~CDOTA_Modifier_Tusk_Snowball_Visible(
        CDOTA_Modifier_Tusk_Snowball_Visible *const this)
{
  this->_vptr_CDOTA_Buff = &off_46549F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tusk_Snowball_Visible::IsDebuff  (line 1143, @0x0000000002d1fec0, libserver.so)
bool __fastcall CDOTA_Modifier_Tusk_Snowball_Visible::IsDebuff(CDOTA_Modifier_Tusk_Snowball_Visible *const this)
{
  return 1;
}


// CDOTA_Modifier_Tusk_Snowball_Visible::IsHidden  (line 1144, @0x0000000002d1fed0, libserver.so)
bool __fastcall CDOTA_Modifier_Tusk_Snowball_Visible::IsHidden(CDOTA_Modifier_Tusk_Snowball_Visible *const this)
{
  return 1;
}


// CDOTA_Modifier_Tusk_Snowball_Visible::GetPriority  (line 1145, @0x0000000002d1fee0, libserver.so)
int __fastcall CDOTA_Modifier_Tusk_Snowball_Visible::GetPriority(CDOTA_Modifier_Tusk_Snowball_Visible *const this)
{
  return 2;
}


// CDOTA_Modifier_Tusk_Snowball_Visible::DeclareFunctions  (line 1155, @0x0000000002cca120, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Tusk_Snowball_Visible::GetModifierProvidesFOWVision(CModifierParams const&)
void __fastcall CDOTA_Modifier_Tusk_Snowball_Visible::DeclareFunctions(
        CDOTA_Modifier_Tusk_Snowball_Visible *const this)
{
  this->m_Functions[158].__pfn = CDOTA_Modifier_Tusk_Snowball_Visible::GetModifierProvidesFOWVision;
  this->m_Functions[158].__delta = 0;
}


// CDOTA_Modifier_Tusk_Snowball_Visible::GetModifierProvidesFOWVision  (line 1162, @0x0000000002cd8620, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Tusk_Snowball_Visible::GetModifierProvidesFOWVision(
        CDOTA_Modifier_Tusk_Snowball_Visible *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1 )
    return 0x3F80000000000001uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 0x3F80000000000001uLL;
  v4 = &v3[params->htarget.m_Index & 0x1FF];
  if ( v4 == 0 )
    return 0x3F80000000000001uLL;
  if ( m_Index != v4->m_EHandle.m_Index )
    return 0x3F80000000000001uLL;
  result.m_szVal = v4->m_pInstance;
  if ( result.m_szVal == 0 )
    return 0x3F80000000000001uLL;
  if ( *(result.m_szVal + 339) == 0 )
    return 0x3F80000000000001uLL;
  *&result.m_eType = 1;
  if ( (result.m_szVal[2788] & 4) == 0 )
    return 0x3F80000000000001uLL;
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Tusk_Snowball_Movement::~CDOTA_Modifier_Tusk_Snowball_Movement  (line 1174, @0x0000000002d26fd0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tusk_Snowball_Movement::~CDOTA_Modifier_Tusk_Snowball_Movement(
        CDOTA_Modifier_Tusk_Snowball_Movement *const this)
{
  this->_vptr_CDOTA_Buff = &off_4654D10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tusk_Snowball_Movement::~CDOTA_Modifier_Tusk_Snowball_Movement  (line 1174, @0x0000000002d26ff0, libserver.so)  // inlines: ~CDOTA_Modifier_Tusk_Snowball_Movement
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tusk_Snowball_Movement::~CDOTA_Modifier_Tusk_Snowball_Movement(
        CDOTA_Modifier_Tusk_Snowball_Movement *const this)
{
  this->_vptr_CDOTA_Buff = &off_4654D10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tusk_Snowball_Movement::IsHidden  (line 1188, @0x0000000002d1fef0, libserver.so)
bool __fastcall CDOTA_Modifier_Tusk_Snowball_Movement::IsHidden(CDOTA_Modifier_Tusk_Snowball_Movement *const this)
{
  return 1;
}


// CDOTA_Modifier_Tusk_Snowball_Movement::IsPurgable  (line 1189, @0x0000000002d1ff00, libserver.so)
bool __fastcall CDOTA_Modifier_Tusk_Snowball_Movement::IsPurgable(CDOTA_Modifier_Tusk_Snowball_Movement *const this)
{
  return 0;
}


// CDOTA_Modifier_Tusk_Snowball_Movement::IsInWindup  (line 1200, @0x0000000002ce89d0, libserver.so)
// calls: CDOTA_Buff::GetAbility
// callers: CDOTA_Modifier_Tusk_Snowball_Movement::OnOrder
bool __fastcall CDOTA_Modifier_Tusk_Snowball_Movement::IsInWindup(CDOTA_Modifier_Tusk_Snowball_Movement *const this)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    return Ability[1].m_NetworkTransmitComponent.m_PVSInfo.m_pClustersInline[3];
  else
    return 0;
}


// CDOTA_Modifier_Tusk_Snowball_Movement::OnCreated  (line 1215, @0x0000000002cca140, libserver.so)
void __fastcall CDOTA_Modifier_Tusk_Snowball_Movement::OnCreated(
        CDOTA_Modifier_Tusk_Snowball_Movement *const this,
        KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_Tusk_Snowball_Movement::OnDestroy  (line 1231, @0x0000000002ceec80, libserver.so)  // inlines: EndSnowball
// calls: CDOTA_Buff::GetAbility, CDOTA_Ability_Tusk_Snowball::EndSnowball
void __fastcall CDOTA_Modifier_Tusk_Snowball_Movement::OnDestroy(CDOTA_Modifier_Tusk_Snowball_Movement *const this)
{
  CDOTA_Ability_Tusk_Snowball *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 && !Ability->m_bEndingSnowball )
    CDOTA_Ability_Tusk_Snowball::EndSnowball(Ability, 0);
}


// CDOTA_Modifier_Tusk_Snowball_Movement::DeclareFunctions  (line 1256, @0x0000000002cca150, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Tusk_Snowball_Movement::OnTeleported(CModifierParams const&), CDOTA_Modifier_Tusk_Snowball_Movement::OnOrder(CModifierParams const&)
void __fastcall CDOTA_Modifier_Tusk_Snowball_Movement::DeclareFunctions(
        CDOTA_Modifier_Tusk_Snowball_Movement *const this)
{
  this->m_Functions[142].__pfn = CDOTA_Modifier_Tusk_Snowball_Movement::OnTeleported;
  this->m_Functions[142].__delta = 0;
  this->m_Functions[125].__delta = 0;
  this->m_Functions[125].__pfn = CDOTA_Modifier_Tusk_Snowball_Movement::OnOrder;
}


// CDOTA_Modifier_Tusk_Snowball_Movement::OnOrder  (line 1264, @0x0000000002d0f710, libserver.so)  // inlines: DotaRetrieveAbilityValue<int>, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsUnitMyParent, IsValid, Length2D, LookupEntity, Target, ToDOTABaseNPC, UnitNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Modifier_Tusk_Snowball_Movement::IsInWindup, CDOTA_Ability_Tusk_Snowball::LoadUnit
// strings: "snowball_grab_radius"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Tusk_Snowball_Movement::OnOrder(
        CDOTA_Modifier_Tusk_Snowball_Movement *const this,
        const CModifierParams *const params)
{
  int LevelSpecialValue; // r13d
  CDOTABaseAbility *Ability; // rax
  uint32 m_Index; // edx
  CEntityIdentity *v7; // rax
  CEntityIdentity *v8; // rax
  int nOrdertype; // eax
  EHANDLE *p_hunit; // r14
  CEntityInstance *v12; // rax
  char m_CScriptComponent_high; // r15
  CEntityInstance *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  const Vector *v16; // r15
  CEntityInstance *v17; // rax
  const CBaseEntity *v18; // rdi
  const Vector *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  const Vector *v21; // rax
  CDOTA_Ability_Tusk_Snowball *v22; // rbx
  CEntityInstance *v23; // rax
  CDOTA_BaseNPC *v24; // rsi
  CDOTA_BaseNPC *v25; // r14
  uint32 v26; // ecx
  CEntityIdentity *v27; // rax
  CEntityIdentity *v28; // rax
  CDOTA_BaseNPC *m_pInstance; // rbx
  unsigned __int8 m_Value; // r14
  int v31; // r14d
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v33; // rax
  const Vector *AbsOrigin; // r14
  const Vector *v35; // rax
  CDOTA_Ability_Tusk_Snowball *v36; // rax
  float vLocation; // [rsp+8h] [rbp-38h]
  float vLocation_4; // [rsp+Ch] [rbp-34h]

  LevelSpecialValue = 0;
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "snowball_grab_radius", -1, 0);
  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1
    && (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F]) != 0
    && (v8 = &v7[params->hunit.m_Index & 0x1FF]) != 0
    && m_Index == v8->m_EHandle.m_Index
    && (v25 = v8->m_pInstance, v8->m_pInstance != 0)
    && v25->m_bIsDOTANPC
    && CDOTA_Buff::GetParent(this) == v25 )
  {
    nOrdertype = params->nOrdertype;
    if ( nOrdertype == 4 || nOrdertype == 2 )
    {
      v26 = params->htarget.m_Index;
      if ( v26 + 2 > 1 )
      {
        v27 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
        if ( v27 != 0 )
        {
          v28 = &v27[params->htarget.m_Index & 0x1FF];
          if ( v28 != 0 && v26 == v28->m_EHandle.m_Index )
          {
            m_pInstance = v28->m_pInstance;
            if ( v28->m_pInstance != 0
              && m_pInstance->m_bIsDOTANPC
              && (*(m_pInstance->_vptr_IHandleEntity + 414))(m_pInstance) != -1 )
            {
              m_Value = m_pInstance->m_iTeamNum.m_Value;
              if ( m_Value == CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value )
              {
                v31 = (*(m_pInstance->_vptr_IHandleEntity + 414))(m_pInstance);
                Parent = CDOTA_Buff::GetParent(this);
                if ( v31 == (*(Parent->_vptr_IHandleEntity + 414))(Parent) || (m_pInstance->m_iUnitType & 0x193) != 0 )
                {
                  v33 = CDOTA_Buff::GetParent(this);
                  AbsOrigin = CBaseEntity::GetAbsOrigin(v33);
                  v35 = CBaseEntity::GetAbsOrigin(m_pInstance);
                  if ( LevelSpecialValue > fsqrt(
                                             ((v35->x - AbsOrigin->x) * (v35->x - AbsOrigin->x))
                                           + ((v35->y - AbsOrigin->y) * (v35->y - AbsOrigin->y))) )
                  {
                    v36 = CDOTA_Buff::GetAbility(this);
                    if ( v36 != 0 )
                      CDOTA_Ability_Tusk_Snowball::LoadUnit(v36, m_pInstance);
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
  else
  {
    nOrdertype = params->nOrdertype;
  }
  if ( nOrdertype == 1 )
  {
    p_hunit = &params->hunit;
    v12 = CEntityHandle::operator CEntityInstance *(&params->hunit);
    if ( v12 == 0 || BYTE3(v12[7]._vptr_IHandleEntity) == 0 )
      v12 = 0;
    m_CScriptComponent_high = HIBYTE(v12[7].m_CScriptComponent);
    if ( m_CScriptComponent_high == CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value )
    {
      v14 = CEntityHandle::operator CEntityInstance *(&params->hunit);
      if ( v14 == 0 || BYTE3(v14[7]._vptr_IHandleEntity) == 0 )
        v14 = 0;
      if ( (v14[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
      {
        v15 = CDOTA_Buff::GetParent(this);
        v16 = CBaseEntity::GetAbsOrigin(v15);
        v17 = CEntityHandle::operator CEntityInstance *(&params->hunit);
        if ( v17 == 0 || (v18 = v17, BYTE3(v17[7]._vptr_IHandleEntity) == 0) )
          v18 = 0;
        v19 = CBaseEntity::GetAbsOrigin(v18);
        if ( LevelSpecialValue > fsqrt(((v19->x - v16->x) * (v19->x - v16->x)) + ((v19->y - v16->y) * (v19->y - v16->y))) )
        {
          vLocation = params->vNewLoc.x;
          vLocation_4 = params->vNewLoc.y;
          v20 = CDOTA_Buff::GetParent(this);
          v21 = CBaseEntity::GetAbsOrigin(v20);
          if ( fsqrt(((vLocation - v21->x) * (vLocation - v21->x)) + ((vLocation_4 - v21->y) * (vLocation_4 - v21->y))) < 75.0 )
          {
            v22 = CDOTA_Buff::GetAbility(this);
            if ( CDOTA_Modifier_Tusk_Snowball_Movement::IsInWindup(this) )
            {
              v23 = CEntityHandle::operator CEntityInstance *(p_hunit);
              if ( v23 != 0 && BYTE3(v23[7]._vptr_IHandleEntity) != 0 )
                v24 = v23;
              else
                v24 = 0;
              CDOTA_Ability_Tusk_Snowball::LoadUnit(v22, v24);
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Tusk_Snowball_Movement::OnTeleported  (line 1312, @0x0000000002cd84c0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Unit, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Tusk_Snowball_Movement::OnTeleported(
        CDOTA_Modifier_Tusk_Snowball_Movement *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx

  m_pInstance = 0;
  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[params->hunit.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetCaster(this) == m_pInstance )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


// CDOTA_Modifier_Tusk_Snowball_Movement::CheckState  (line 1326, @0x0000000002cca190, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Tusk_Snowball_Movement::CheckState(
        CDOTA_Modifier_Tusk_Snowball_Movement *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x80000312uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFF7FFFFCEDLL;
}


// CDOTA_Modifier_Tusk_Snowball_Movement_Friendly::~CDOTA_Modifier_Tusk_Snowball_Movement_Friendly  (line 1342, @0x0000000002d26f60, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tusk_Snowball_Movement_Friendly::~CDOTA_Modifier_Tusk_Snowball_Movement_Friendly(
        CDOTA_Modifier_Tusk_Snowball_Movement_Friendly *const this)
{
  this->_vptr_CDOTA_Buff = &off_4655030;
  this->_vptr_CHorizontalMotionController = &off_4655320;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tusk_Snowball_Movement_Friendly::~CDOTA_Modifier_Tusk_Snowball_Movement_Friendly  (line 1342, @0x0000000002d26f90, libserver.so)  // inlines: ~CDOTA_Modifier_Tusk_Snowball_Movement_Friendly
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tusk_Snowball_Movement_Friendly::~CDOTA_Modifier_Tusk_Snowball_Movement_Friendly(
        CDOTA_Modifier_Tusk_Snowball_Movement_Friendly *const this)
{
  this->_vptr_CDOTA_Buff = &off_4655030;
  this->_vptr_CHorizontalMotionController = &off_4655320;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tusk_Snowball_Movement_Friendly::IsPurgable  (line 1351, @0x0000000002d1ff10, libserver.so)
bool __fastcall CDOTA_Modifier_Tusk_Snowball_Movement_Friendly::IsPurgable(
        CDOTA_Modifier_Tusk_Snowball_Movement_Friendly *const this)
{
  return 0;
}


// CDOTA_Modifier_Tusk_Snowball_Movement_Friendly::IsHorizontalMotionValidToApply  (line 1357, @0x0000000002d1ff20, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Tusk_Snowball_Movement_Friendly::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_Tusk_Snowball_Movement_Friendly *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Tusk_Snowball_Movement_Friendly::StatusEffectPriority  (line 1358, @0x0000000002d1ff50, libserver.so)
int __fastcall CDOTA_Modifier_Tusk_Snowball_Movement_Friendly::StatusEffectPriority(
        CDOTA_Modifier_Tusk_Snowball_Movement_Friendly *const this)
{
  return 10;
}


// CDOTA_Modifier_Tusk_Snowball_Movement_Friendly::IsMotionController  (line 1360, @0x0000000002d1ff60, libserver.so)
bool __fastcall CDOTA_Modifier_Tusk_Snowball_Movement_Friendly::IsMotionController(
        CDOTA_Modifier_Tusk_Snowball_Movement_Friendly *const this)
{
  return 1;
}


// CDOTA_Modifier_Tusk_Snowball_Movement_Friendly::OnCreated  (line 1376, @0x0000000002ccfb60, libserver.so)
// calls: CDOTA_Buff::CreateBuffParticleEffect, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::GetCaster, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound, CBaseEntity::AddEffects, CDOTALocomotor::ApplyHorizontalMotionController, CDOTA_Buff::Destroy
// strings: "particles/units/heroes/hero_tusk/tusk_snowball_load.vpcf", "attach_hitloc", "Hero_Tusk.Snowball.Ally"
void __fastcall CDOTA_Modifier_Tusk_Snowball_Movement_Friendly::OnCreated(
        CDOTA_Modifier_Tusk_Snowball_Movement_Friendly *const this,
        KeyValues *pKV)
{
  int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v7; // rax
  const Vector *v8; // r13
  CDOTA_BaseNPC *v9; // r14
  CDOTA_ParticleManager *v10; // rax
  CDOTA_BaseNPC *Caster; // rax
  const Vector *v12; // r13
  CDOTA_ParticleManager *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  const Vector *v15; // r13
  CDOTA_BaseNPC *v16; // r14
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  CDOTALocomotor *v22; // rax

  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_tusk/tusk_snowball_load.vpcf",
                         2,
                         0,
                         0);
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, BuffParticleEffect, 0, *&AbsOrigin->x, AbsOrigin->z);
  v7 = CDOTA_Buff::GetParent(this);
  v8 = CBaseEntity::GetAbsOrigin(v7);
  v9 = CDOTA_Buff::GetParent(this);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v10, BuffParticleEffect, 1, v9, 4, "attach_hitloc", *v8, 1);
  Caster = CDOTA_Buff::GetCaster(this);
  v12 = CBaseEntity::GetAbsOrigin(Caster);
  v13 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v13, BuffParticleEffect, 2, *&v12->x, v12->z);
  v14 = CDOTA_Buff::GetCaster(this);
  v15 = CBaseEntity::GetAbsOrigin(v14);
  v16 = CDOTA_Buff::GetCaster(this);
  v17 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v17, BuffParticleEffect, 3, v16, 4, "attach_hitloc", *v15, 1);
  v18 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v18, BuffParticleEffect);
  v19 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v19, "Hero_Tusk.Snowball.Ally", 0.0, 0, 0);
  v20 = CDOTA_Buff::GetParent(this);
  CBaseEntity::AddEffects(v20, 32);
  v21 = CDOTA_Buff::GetParent(this);
  v22 = (*(v21->_vptr_IHandleEntity + 376))(v21);
  if ( !CDOTALocomotor::ApplyHorizontalMotionController(v22, &this->CHorizontalMotionController, 0) )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Tusk_Snowball_Movement_Friendly::DeclareFunctions  (line 1400, @0x0000000002cca1c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Tusk_Snowball_Movement_Friendly::OnTeleported(CModifierParams const&)
void __fastcall CDOTA_Modifier_Tusk_Snowball_Movement_Friendly::DeclareFunctions(
        CDOTA_Modifier_Tusk_Snowball_Movement_Friendly *const this)
{
  this->m_Functions[142].__pfn = CDOTA_Modifier_Tusk_Snowball_Movement_Friendly::OnTeleported;
  this->m_Functions[142].__delta = 0;
}


// CDOTA_Modifier_Tusk_Snowball_Movement_Friendly::OnDestroy  (line 1408, @0x0000000002cd7330, libserver.so)  // inlines: MarkPVSInformationDirty, RemoveEffects
// calls: CDOTA_Buff::GetParent, CBaseEntity::DispatchUpdateTransmitState, CDOTALocomotor::RemoveHorizontalMotionController
void __fastcall CDOTA_Modifier_Tusk_Snowball_Movement_Friendly::OnDestroy(
        CDOTA_Modifier_Tusk_Snowball_Movement_Friendly *const this)
{
  CDOTA_BaseNPC *Parent; // rbx
  CDOTA_BaseNPC *v3; // rax
  CDOTALocomotor *v4; // rax

  Parent = CDOTA_Buff::GetParent(this);
  (*(Parent->_vptr_IHandleEntity + 188))(Parent, Parent->m_fEffects.m_Value & 0xFFFFFFDF);
  Parent->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(Parent);
  v3 = CDOTA_Buff::GetParent(this);
  v4 = (*(v3->_vptr_IHandleEntity + 376))(v3);
  CDOTALocomotor::RemoveHorizontalMotionController(v4, &this->CHorizontalMotionController);
}


// CDOTA_Modifier_Tusk_Snowball_Movement_Friendly::UpdateHorizontalMotion  (line 1418, @0x0000000002ccd0a0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetParent, CBaseEntity::SetAbsOrigin, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy
// strings: "modifier_tusk_snowball_movement"
void __fastcall CDOTA_Modifier_Tusk_Snowball_Movement_Friendly::UpdateHorizontalMotion(
        CDOTA_Modifier_Tusk_Snowball_Movement_Friendly *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v8; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::SetAbsOrigin(Parent, AbsOrigin);
  v8 = CDOTA_Buff::GetCaster(this);
  if ( CDOTA_BaseNPC::FindModifierByName(v8, "modifier_tusk_snowball_movement", 0) == 0 )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Tusk_Snowball_Movement_Friendly::OnHorizontalMotionInterrupted  (line 1433, @0x0000000002ccc3e0, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Tusk_Snowball_Movement_Friendly::OnHorizontalMotionInterrupted(
        CDOTA_Modifier_Tusk_Snowball_Movement_Friendly *const this)
{
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Tusk_Snowball_Movement_Friendly::OnTeleported  (line 1449, @0x0000000002cd9d20, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Unit, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Tusk_Snowball_Movement_Friendly::OnTeleported(
        CDOTA_Modifier_Tusk_Snowball_Movement_Friendly *const this,
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


// CDOTA_Modifier_Tusk_Snowball_Movement_Friendly::CheckState  (line 1463, @0x0000000002cca1e0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Tusk_Snowball_Movement_Friendly::CheckState(
        CDOTA_Modifier_Tusk_Snowball_Movement_Friendly *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x80000320uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFF7FFFFCDFLL;
}


// CDOTA_BaseNPC_Tusk_Sigil::~CDOTA_BaseNPC_Tusk_Sigil  (line 1477, @0x0000000002d26020, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC_Tusk_Sigil::~CDOTA_BaseNPC_Tusk_Sigil(CDOTA_BaseNPC_Tusk_Sigil *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_BaseNPC_Tusk_Sigil::~CDOTA_BaseNPC_Tusk_Sigil  (line 1477, @0x0000000002d26070, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Tusk_Sigil
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_BaseNPC_Tusk_Sigil::~CDOTA_BaseNPC_Tusk_Sigil(CDOTA_BaseNPC_Tusk_Sigil *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BaseNPC_Tusk_Sigil::Schema_DynamicBinding  (line 1479, @0x0000000002d1ff70, libserver.so)
// globals: CDOTA_BaseNPC_Tusk_Sigil::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Tusk_Sigil::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Tusk_Sigil *const this)
{
  return CDOTA_BaseNPC_Tusk_Sigil::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Tusk_Sigil::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1479, @0x0000000002d1ffa0, libserver.so)
// globals: CDOTA_BaseNPC_Tusk_Sigil::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Tusk_Sigil::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Tusk_Sigil::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Tusk_Sigil::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Tusk_Sigil::CEntityInstanceEntityClass::DestructInstance  (line 1479, @0x0000000002d1ffb0, libserver.so)  // inlines: Destruct<CDOTA_BaseNPC_Tusk_Sigil>
void __fastcall CDOTA_BaseNPC_Tusk_Sigil::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BaseNPC_Tusk_Sigil::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BaseNPC_Tusk_Sigil::CEntityInstanceEntityClass::FreeInstance  (line 1479, @0x0000000002d1ffd0, libserver.so)
void __fastcall CDOTA_BaseNPC_Tusk_Sigil::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BaseNPC_Tusk_Sigil::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BaseNPC_Tusk_Sigil::CEntityInstanceEntityClass::CanAllocate  (line 1479, @0x0000000002d1fff0, libserver.so)
bool __fastcall CDOTA_BaseNPC_Tusk_Sigil::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BaseNPC_Tusk_Sigil::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BaseNPC_Tusk_Sigil::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1479, @0x0000000002d20000, libserver.so)
// globals: CDOTA_BaseNPC_Tusk_Sigil::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_BaseNPC_Tusk_Sigil::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BaseNPC_Tusk_Sigil::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Tusk_Sigil::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Tusk_Sigil::CEntityInstanceEntityClass::AllocateInstance  (line 1479, @0x0000000002d25210, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BaseNPC_Tusk_Sigil::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BaseNPC_Tusk_Sigil::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4504);
  memset(v1, 0, 0x1198u);
  return v1;
}


// CDOTA_BaseNPC_Tusk_Sigil::CEntityInstanceEntityClass::ConstructInstance  (line 1479, @0x0000000002d25bc0, libserver.so)  // inlines: CDOTA_BaseNPC_Additive, CDOTA_BaseNPC_Tusk_Sigil, Construct<CDOTA_BaseNPC_Tusk_Sigil>
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_BaseNPC_Tusk_Sigil::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BaseNPC_Tusk_Sigil::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *p = &off_46553F0;
    *(p + 236) = &off_4656358;
    *(p + 257) = &off_4656688;
  }
  return p;
}


// CDOTA_BaseNPC_Tusk_Sigil::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1479, @0x0000000002d353b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BaseNPC_Tusk_Sigil::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Tusk_Sigil::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BaseNPC_Tusk_Sigil::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1479, @0x0000000002d35600, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BaseNPC_Tusk_Sigil::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Tusk_Sigil::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal  (line 1479, @0x0000000002d4e330, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CDOTA_BaseNPC_Additive::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "npc_dota_tusk_frozen_sigil", "CDOTA_BaseNPC_Tusk_Sigil"
// globals: `guard variable for'CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass, CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_BaseNPC_Tusk_Sigil::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClassInfo, CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClassInfo
CEntityClass *__cdecl CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass) != 0 )
  {
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_designerName.u.m_Id = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass._vptr_CEntityClass = off_3F79390;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_AllHelpers.m_Size = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_classInputs.m_Size = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_classOutputs.m_Size = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_requiredEHandle.m_Index = -1;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_hNetworkSerializer = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_pBaseClassInfo = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_pClassInfo = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_flags = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_nAllHelpersFlags = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_pScriptClassDesc = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_pInputs = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_nInputCount = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_pOutputs = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_nOutputCount = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_pGameClass = 0;
    CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass._vptr_CEntityClass = off_4655370;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass);
    __cxa_atexit(
      CDOTA_BaseNPC_Tusk_Sigil::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BaseNPC_Tusk_SigilClass != 0 )
    return &CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass;
  if ( `guard variable for'CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Additive::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClassInfo,
      "CDOTA_BaseNPC_Tusk_Sigil",
      "npc_dota_tusk_frozen_sigil",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClassInfo);
  }
  CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_pClassInfo = &CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClassInfo;
  CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_pBaseClassInfo = CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BaseNPC_Tusk_SigilClass = &CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass;
  CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClassInfo.m_pClass = &CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass;
  CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_BaseNPC_Tusk_SigilClass->m_pComponentOverrides = 0;
  return &CDOTA_BaseNPC_Tusk_Sigil::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Tusk_SigilClass;
}


// CDOTA_BaseNPC_Tusk_Sigil::GetBonusFlyHeight  (line 1483, @0x0000000002d20010, libserver.so)
float __fastcall CDOTA_BaseNPC_Tusk_Sigil::GetBonusFlyHeight(CDOTA_BaseNPC_Tusk_Sigil *const this)
{
  return 350.0;
}


// CDOTA_BaseNPC_Tusk_Sigil::YouForgotToImplementOrDeclareServerClass  (line 1496, @0x0000000002cca210, libserver.so)
int __fastcall CDOTA_BaseNPC_Tusk_Sigil::YouForgotToImplementOrDeclareServerClass(CDOTA_BaseNPC_Tusk_Sigil *const this)
{
  return 0;
}


// CDOTA_BaseNPC_Tusk_Sigil::GetServerClass  (line 1496, @0x0000000002cdde70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_BaseNPC_Tusk_Sigil::GetServerClass(CDOTA_BaseNPC_Tusk_Sigil *const this)
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


// CDOTA_Ability_Tusk_FrozenSigil::~CDOTA_Ability_Tusk_FrozenSigil  (line 1536, @0x0000000002d2c4f0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Tusk_FrozenSigil::~CDOTA_Ability_Tusk_FrozenSigil(
        CDOTA_Ability_Tusk_FrozenSigil *const this)
{
  this->_vptr_IHandleEntity = &off_4656770;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Tusk_FrozenSigil::~CDOTA_Ability_Tusk_FrozenSigil  (line 1536, @0x0000000002d2c510, libserver.so)  // inlines: ~CDOTA_Ability_Tusk_FrozenSigil
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Tusk_FrozenSigil::~CDOTA_Ability_Tusk_FrozenSigil(
        CDOTA_Ability_Tusk_FrozenSigil *const this)
{
  this->_vptr_IHandleEntity = &off_4656770;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Tusk_FrozenSigil::Schema_DynamicBinding  (line 1538, @0x0000000002d20020, libserver.so)
// globals: CDOTA_Ability_Tusk_FrozenSigil::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tusk_FrozenSigil::Schema_DynamicBinding(
        const CDOTA_Ability_Tusk_FrozenSigil *const this)
{
  return CDOTA_Ability_Tusk_FrozenSigil::s_pSchemaBinding;
}


// CDOTA_Ability_Tusk_FrozenSigil::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1538, @0x0000000002d20030, libserver.so)
// globals: CDOTA_Ability_Tusk_FrozenSigil::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tusk_FrozenSigil::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Tusk_FrozenSigil::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tusk_FrozenSigil::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Tusk_FrozenSigil::CEntityInstanceEntityClass::DestructInstance  (line 1538, @0x0000000002d20040, libserver.so)  // inlines: Destruct<CDOTA_Ability_Tusk_FrozenSigil>
void __fastcall CDOTA_Ability_Tusk_FrozenSigil::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Tusk_FrozenSigil::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Tusk_FrozenSigil::CEntityInstanceEntityClass::FreeInstance  (line 1538, @0x0000000002d20060, libserver.so)
void __fastcall CDOTA_Ability_Tusk_FrozenSigil::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Tusk_FrozenSigil::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Tusk_FrozenSigil::CEntityInstanceEntityClass::CanAllocate  (line 1538, @0x0000000002d20080, libserver.so)
bool __fastcall CDOTA_Ability_Tusk_FrozenSigil::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Tusk_FrozenSigil::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Tusk_FrozenSigil::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1538, @0x0000000002d20090, libserver.so)
// globals: CDOTA_Ability_Tusk_FrozenSigil::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Tusk_FrozenSigil::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Tusk_FrozenSigil::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tusk_FrozenSigil::s_pSchemaBinding;
}


// CDOTA_Ability_Tusk_FrozenSigil::CEntityInstanceEntityClass::AllocateInstance  (line 1538, @0x0000000002d25250, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Tusk_FrozenSigil::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Tusk_FrozenSigil::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Tusk_FrozenSigil::CEntityInstanceEntityClass::ConstructInstance  (line 1538, @0x0000000002d295a0, libserver.so)  // inlines: CDOTA_Ability_Tusk_FrozenSigil, Construct<CDOTA_Ability_Tusk_FrozenSigil>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Tusk_FrozenSigil::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Tusk_FrozenSigil::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4656770;
  }
  return p;
}


// CDOTA_Ability_Tusk_FrozenSigil::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1538, @0x0000000002d34ae0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Tusk_FrozenSigil::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tusk_FrozenSigil::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Tusk_FrozenSigil::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1538, @0x0000000002d34b00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Tusk_FrozenSigil::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tusk_FrozenSigil::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Tusk_FrozenSigil::GetEntityClassInternal  (line 1538, @0x0000000002d4ac00, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "CDOTA_Ability_Tusk_FrozenSigil"
// globals: `guard variable for'CDOTA_Ability_Tusk_FrozenSigil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_FrozenSigilClass, CDOTA_Ability_Tusk_FrozenSigil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_FrozenSigilClass, __dso_handle, CDOTA_Ability_Tusk_FrozenSigil::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Tusk_FrozenSigil::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_FrozenSigilClassInfo, CDOTA_Ability_Tusk_FrozenSigil::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_FrozenSigilClassInfo
CEntityClass *__cdecl CDOTA_Ability_Tusk_FrozenSigil::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Tusk_FrozenSigil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_FrozenSigilClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tusk_FrozenSigil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_FrozenSigilClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Tusk_FrozenSigil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_FrozenSigilClass);
    CDOTA_Ability_Tusk_FrozenSigil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_FrozenSigilClass._vptr_CEntityClass = off_46566F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tusk_FrozenSigil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_FrozenSigilClass);
    __cxa_atexit(
      CDOTA_Ability_Tusk_FrozenSigil::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Tusk_FrozenSigil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_FrozenSigilClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Tusk_FrozenSigilClass != 0 )
    return &CDOTA_Ability_Tusk_FrozenSigil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_FrozenSigilClass;
  if ( `guard variable for'CDOTA_Ability_Tusk_FrozenSigil::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_FrozenSigilClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tusk_FrozenSigil::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_FrozenSigilClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Tusk_FrozenSigil::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_FrozenSigilClassInfo,
      "CDOTA_Ability_Tusk_FrozenSigil",
      "tusk_frozen_sigil",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tusk_FrozenSigil::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_FrozenSigilClassInfo);
  }
  CDOTA_Ability_Tusk_FrozenSigil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_FrozenSigilClass.m_pClassInfo = &CDOTA_Ability_Tusk_FrozenSigil::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_FrozenSigilClassInfo;
  CDOTA_Ability_Tusk_FrozenSigil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_FrozenSigilClass.m_pBaseClassInfo = CDOTA_Ability_Tusk_FrozenSigil::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_FrozenSigilClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Tusk_FrozenSigilClass = &CDOTA_Ability_Tusk_FrozenSigil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_FrozenSigilClass;
  CDOTA_Ability_Tusk_FrozenSigil::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_FrozenSigilClassInfo.m_pClass = &CDOTA_Ability_Tusk_FrozenSigil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_FrozenSigilClass;
  CDOTA_Ability_Tusk_FrozenSigil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_FrozenSigilClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Tusk_FrozenSigilClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Tusk_FrozenSigil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_FrozenSigilClass;
}


// CDOTA_Ability_Tusk_FrozenSigil::GetAOERadius  (line 1544, @0x0000000002d47170, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "sigil_radius"
float __fastcall CDOTA_Ability_Tusk_FrozenSigil::GetAOERadius(CDOTA_Ability_Tusk_FrozenSigil *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "sigil_radius", -1, 0);
}


// CDOTA_Ability_Tusk_FrozenSigil::YouForgotToImplementOrDeclareServerClass  (line 1549, @0x0000000002cca220, libserver.so)
int __fastcall CDOTA_Ability_Tusk_FrozenSigil::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Tusk_FrozenSigil *const this)
{
  return 0;
}


// CDOTA_Ability_Tusk_FrozenSigil::GetServerClass  (line 1549, @0x0000000002cde270, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Tusk_FrozenSigil::GetServerClass(CDOTA_Ability_Tusk_FrozenSigil *const this)
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


// CDOTA_Ability_Tusk_FrozenSigil::OnSpellStart  (line 1558, @0x0000000002d17340, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, GetLevelSpecialValueFor<float>, GetTeamNumber, GrowMemory, Purge, Reset, entindex, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, V_snprintf, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, DOTA_CreateUnitByName, CDOTA_BaseNPC::SetControllableByPlayer, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CEntityInstance::GetEntityIndex, DOTA_ExecuteOrders, CDOTA_BaseNPC::SetPseudoQueuedOrder (20 total)
// strings: "sigil_duration", "npc_dota_tusk_frozen_sigil%d", "modifier_tusk_frozen_sigil_aura", "modifier_kill", "Hero_Tusk.FrozenSigil", "Hero_Tusk.FrozenSigil.Cast"
void __fastcall CDOTA_Ability_Tusk_FrozenSigil::OnSpellStart(CDOTA_Ability_Tusk_FrozenSigil *const this)
{
  int m_Value; // ecx
  int v3; // r13d
  CDOTA_BaseNPC *Caster; // r15
  CDOTA_BaseNPC *v5; // r14
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *UnitByName; // r12
  CDOTA_BaseNPC *v9; // rax
  int v10; // eax
  float v11; // xmm1_4
  CDOTA_BaseNPC *v12; // rax
  float v13; // xmm1_4
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  CEntityIndex v17; // [rsp+8h] [rbp-1C8h]
  CUnitOrders newOrders; // [rsp+10h] [rbp-1C0h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-180h] BYREF
  KeyValues kv2; // [rsp+70h] [rbp-160h] BYREF
  char szUnitName[264]; // [rsp+90h] [rbp-140h] BYREF
  unsigned __int64 v22; // [rsp+198h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "sigil_duration", -1, 0);
  m_Value = this->m_iLevel.m_Value;
  memset(szUnitName, 0, 260);
  V_snprintf(szUnitName, 260, "npc_dota_tusk_frozen_sigil%d", m_Value);
  v3 = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTABaseAbility::GetCaster(this);
  v6 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
  UnitByName = DOTA_CreateUnitByName(szUnitName, AbsOrigin, 1, v5, Caster, v3);
  if ( UnitByName != 0 )
  {
    v9 = CDOTABaseAbility::GetCaster(this);
    v10 = (*(v9->_vptr_IHandleEntity + 414))(v9);
    CDOTA_BaseNPC::SetControllableByPlayer(UnitByName, v10, 0);
    KeyValues::KeyValues(&kv, "modifier_tusk_frozen_sigil_aura");
    KeyValues::SetFloat(&kv, "duration", v11);
    v12 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(UnitByName, v12, this, "modifier_tusk_frozen_sigil_aura", &kv, 0);
    KeyValues::KeyValues(&kv2, "modifier_kill");
    KeyValues::SetFloat(&kv2, "duration", v13);
    v14 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(UnitByName, v14, this, "modifier_kill", &kv2, 0);
    newOrders.m_nUnits.m_Size = 0;
    memset(&newOrders.m_nUnits.m_Memory, 0, 28);
    newOrders.m_nOrderSequenceNumber = 0;
    newOrders.m_nIssuerPlayerIndex = -1;
    newOrders.m_vPosition = vec3_origin;
    newOrders.m_bQueue = 0;
    v17.m_Data = CEntityInstance::GetEntityIndex(UnitByName).m_Data;
    CUtlMemory<CEntityIndex,int>::Grow(&newOrders.m_nUnits.m_Memory, 1);
    ++newOrders.m_nUnits.m_Size;
    if ( newOrders.m_nUnits.m_Memory.m_pMemory != 0 )
      newOrders.m_nUnits.m_Memory.m_pMemory->m_Data = v17.m_Data;
    newOrders.m_nOrderType = 2;
    v15 = CDOTABaseAbility::GetCaster(this);
    newOrders.m_nTargetIndex = CEntityInstance::GetEntityIndex(v15);
    DOTA_ExecuteOrders(&newOrders, 0, 0, 0);
    CDOTA_BaseNPC::SetPseudoQueuedOrder(UnitByName, &newOrders);
    DOTA_EmitSound(8, "Hero_Tusk.FrozenSigil", UnitByName);
    CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::RemoveAll(&newOrders.m_nUnits);
    if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
      if ( (newOrders.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CEntityIndex,int>::Purge(&newOrders.m_nUnits.m_Memory);
    }
    KeyValues::~KeyValues(&kv2);
    KeyValues::~KeyValues(&kv);
  }
  v16 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Tusk.FrozenSigil.Cast", v16);
}


// CDOTA_Ability_Tusk_FrozenSigil::GetSlowDuration  (line 1600, @0x0000000002cf6860, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "sigil_duration"
float __fastcall CDOTA_Ability_Tusk_FrozenSigil::GetSlowDuration(CDOTA_Ability_Tusk_FrozenSigil *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "sigil_duration", -1, 0);
}


// CDOTA_Modifier_Tusk_FrozenSigil_Aura::~CDOTA_Modifier_Tusk_FrozenSigil_Aura  (line 1609, @0x0000000002d26f10, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tusk_FrozenSigil_Aura::~CDOTA_Modifier_Tusk_FrozenSigil_Aura(
        CDOTA_Modifier_Tusk_FrozenSigil_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4657230;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tusk_FrozenSigil_Aura::~CDOTA_Modifier_Tusk_FrozenSigil_Aura  (line 1609, @0x0000000002d26f30, libserver.so)  // inlines: ~CDOTA_Modifier_Tusk_FrozenSigil_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tusk_FrozenSigil_Aura::~CDOTA_Modifier_Tusk_FrozenSigil_Aura(
        CDOTA_Modifier_Tusk_FrozenSigil_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_4657230;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tusk_FrozenSigil_Aura::IsAura  (line 1620, @0x0000000002d200a0, libserver.so)
bool __fastcall CDOTA_Modifier_Tusk_FrozenSigil_Aura::IsAura(CDOTA_Modifier_Tusk_FrozenSigil_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Tusk_FrozenSigil_Aura::GetModifierAura  (line 1621, @0x0000000002d200b0, libserver.so)
// strings: "modifier_tusk_frozen_sigil"
const char *__fastcall CDOTA_Modifier_Tusk_FrozenSigil_Aura::GetModifierAura(
        CDOTA_Modifier_Tusk_FrozenSigil_Aura *const this)
{
  return "modifier_tusk_frozen_sigil";
}


// CDOTA_Modifier_Tusk_FrozenSigil_Aura::GetAuraSearchTeam  (line 1623, @0x0000000002d200c0, libserver.so)
int __fastcall CDOTA_Modifier_Tusk_FrozenSigil_Aura::GetAuraSearchTeam(
        CDOTA_Modifier_Tusk_FrozenSigil_Aura *const this)
{
  return 2;
}


// CDOTA_Modifier_Tusk_FrozenSigil_Aura::GetAuraSearchType  (line 1624, @0x0000000002d200d0, libserver.so)
int __fastcall CDOTA_Modifier_Tusk_FrozenSigil_Aura::GetAuraSearchType(
        CDOTA_Modifier_Tusk_FrozenSigil_Aura *const this)
{
  return 19;
}


// CDOTA_Modifier_Tusk_FrozenSigil_Aura::GetAuraRadius  (line 1625, @0x0000000002d200e0, libserver.so)
int __fastcall CDOTA_Modifier_Tusk_FrozenSigil_Aura::GetAuraRadius(CDOTA_Modifier_Tusk_FrozenSigil_Aura *const this)
{
  return this->sigil_radius;
}


// CDOTA_Modifier_Tusk_FrozenSigil_Aura::IsHidden  (line 1627, @0x0000000002d200f0, libserver.so)
bool __fastcall CDOTA_Modifier_Tusk_FrozenSigil_Aura::IsHidden(CDOTA_Modifier_Tusk_FrozenSigil_Aura *const this)
{
  return 0;
}


// CDOTA_Modifier_Tusk_FrozenSigil_Aura::OnCreated  (line 1646, @0x0000000002d09460, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "sigil_radius"
void __fastcall CDOTA_Modifier_Tusk_FrozenSigil_Aura::OnCreated(
        CDOTA_Modifier_Tusk_FrozenSigil_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->sigil_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "sigil_radius", -1, 0);
  else
    this->sigil_radius = 0;
}


// CDOTA_Modifier_Tusk_FrozenSigil_Aura::DeclareFunctions  (line 1665, @0x0000000002cca230, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Tusk_FrozenSigil_Aura::OnDeath(CModifierParams const&), CDOTA_Modifier_Tusk_FrozenSigil_Aura::GetAbsoluteNoDamagePhysical(CModifierParams const&), CDOTA_Modifier_Tusk_FrozenSigil_Aura::GetAbsoluteNoDamageMagical(CModifierParams const&), CDOTA_Modifier_Tusk_FrozenSigil_Aura::GetAbsoluteNoDamagePure(CModifierParams const&), CDOTA_Modifier_Tusk_FrozenSigil_Aura::OnAttacked(CModifierParams const&)
void __fastcall CDOTA_Modifier_Tusk_FrozenSigil_Aura::DeclareFunctions(
        CDOTA_Modifier_Tusk_FrozenSigil_Aura *const this)
{
  this->m_Functions[138].__pfn = CDOTA_Modifier_Tusk_FrozenSigil_Aura::OnDeath;
  this->m_Functions[138].__delta = 0;
  this->m_Functions[103].__delta = 0;
  this->m_Functions[103].__pfn = CDOTA_Modifier_Tusk_FrozenSigil_Aura::GetAbsoluteNoDamagePhysical;
  this->m_Functions[104].__pfn = CDOTA_Modifier_Tusk_FrozenSigil_Aura::GetAbsoluteNoDamageMagical;
  this->m_Functions[105].__pfn = CDOTA_Modifier_Tusk_FrozenSigil_Aura::GetAbsoluteNoDamagePure;
  this->m_Functions[104].__delta = 0;
  this->m_Functions[105].__delta = 0;
  this->m_Functions[137].__pfn = CDOTA_Modifier_Tusk_FrozenSigil_Aura::OnAttacked;
  this->m_Functions[137].__delta = 0;
}


// CDOTA_Modifier_Tusk_FrozenSigil_Aura::GetAbsoluteNoDamagePhysical  (line 1676, @0x0000000002cca2c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Tusk_FrozenSigil_Aura::GetAbsoluteNoDamagePhysical(
        CDOTA_Modifier_Tusk_FrozenSigil_Aura *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Tusk_FrozenSigil_Aura::GetAbsoluteNoDamageMagical  (line 1683, @0x0000000002cca2e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Tusk_FrozenSigil_Aura::GetAbsoluteNoDamageMagical(
        CDOTA_Modifier_Tusk_FrozenSigil_Aura *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Tusk_FrozenSigil_Aura::GetAbsoluteNoDamagePure  (line 1690, @0x0000000002cca300, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Tusk_FrozenSigil_Aura::GetAbsoluteNoDamagePure(
        CDOTA_Modifier_Tusk_FrozenSigil_Aura *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Tusk_FrozenSigil_Aura::OnAttacked  (line 1697, @0x0000000002cdb6f0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsHero, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_BaseNPC::ModifyHealth, CDOTA_BaseNPC::Kill, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Tusk_FrozenSigil_Aura::OnAttacked(
        CDOTA_Modifier_Tusk_FrozenSigil_Aura *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CDOTA_BaseNPC *v12; // r13
  int v13; // ebx
  CDOTA_BaseNPC *Parent; // rax
  unsigned int v15; // ebx
  CDOTA_BaseNPC *v16; // rax
  int Health; // r13d
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rax

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
                if ( v11->m_pInstance != 0 && v12->m_bIsDOTANPC )
                {
                  v13 = -((v12->m_iUnitType & 1) == 0);
                  Parent = CDOTA_Buff::GetParent(this);
                  v15 = (v13 & 0xFFFFFFFD) + 4;
                  if ( (CBaseEntity::GetHealth(Parent) - v15) <= 0 )
                  {
                    v19 = CDOTA_Buff::GetParent(this);
                    CDOTA_BaseNPC::Kill(v19, 0, v12, 0.0, 0);
                    CDOTA_Buff::Destroy(this, 0, 0, 0);
                  }
                  else
                  {
                    v16 = CDOTA_Buff::GetParent(this);
                    Health = CBaseEntity::GetHealth(v16);
                    v18 = CDOTA_Buff::GetParent(this);
                    CDOTA_BaseNPC::ModifyHealth(v18, Health - v15, 0, 1, 0);
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


// CDOTA_Modifier_Tusk_FrozenSigil_Aura::OnDeath  (line 1728, @0x0000000002cd9030, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CBaseEntity::StopSound, CBaseEntity::AddEffects, CDOTA_Buff::Destroy
// strings: "Hero_Tusk.FrozenSigil"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Tusk_FrozenSigil_Aura::OnDeath(
        CDOTA_Modifier_Tusk_FrozenSigil_Aura *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v9; // rax

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
  if ( v5->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC || CDOTA_Buff::GetParent(this) != m_pInstance )
    return 1uLL;
  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(Parent, "Hero_Tusk.FrozenSigil");
  v9 = CDOTA_Buff::GetParent(this);
  CBaseEntity::AddEffects(v9, 32);
  CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


// CDOTA_Modifier_Tusk_FrozenSigil_Aura::CheckState  (line 1746, @0x0000000002cca320, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Tusk_FrozenSigil_Aura::CheckState(
        CDOTA_Modifier_Tusk_FrozenSigil_Aura *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x200uLL;
  buffState->m_nDisabledStateMask &= ~0x200uLL;
}


// CDOTA_Modifier_Tusk_FrozenSigil::~CDOTA_Modifier_Tusk_FrozenSigil  (line 1758, @0x0000000002d26ec0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tusk_FrozenSigil::~CDOTA_Modifier_Tusk_FrozenSigil(
        CDOTA_Modifier_Tusk_FrozenSigil *const this)
{
  this->_vptr_CDOTA_Buff = &off_4657550;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tusk_FrozenSigil::~CDOTA_Modifier_Tusk_FrozenSigil  (line 1758, @0x0000000002d26ee0, libserver.so)  // inlines: ~CDOTA_Modifier_Tusk_FrozenSigil
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tusk_FrozenSigil::~CDOTA_Modifier_Tusk_FrozenSigil(
        CDOTA_Modifier_Tusk_FrozenSigil *const this)
{
  this->_vptr_CDOTA_Buff = &off_4657550;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tusk_FrozenSigil::DeclareFunctions  (line 1779, @0x0000000002cca340, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Tusk_FrozenSigil::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Tusk_FrozenSigil::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Tusk_FrozenSigil::DeclareFunctions(CDOTA_Modifier_Tusk_FrozenSigil *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_Tusk_FrozenSigil::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[13].__pfn = CDOTA_Modifier_Tusk_FrozenSigil::GetModifierMoveSpeedBonus_Percentage;
}


// CDOTA_Modifier_Tusk_FrozenSigil::OnCreated  (line 1787, @0x0000000002d0b0a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CDOTA_Buff::CreateBuffParticleEffect, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle
// strings: "particles/units/heroes/hero_tusk/tusk_frozen_sigil_status.vpcf", "attach_hitloc"
void __fastcall CDOTA_Modifier_Tusk_FrozenSigil::OnCreated(CDOTA_Modifier_Tusk_FrozenSigil *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Parent; // rax
  int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *v7; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v9; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v11; // r13
  CDOTA_ParticleManager *v12; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->move_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "move_slow", -1, 0);
  else
    this->move_slow = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    this->attack_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "attack_slow", -1, 0);
  else
    this->attack_slow = 0;
  if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 1) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                           this,
                           "particles/units/heroes/hero_tusk/tusk_frozen_sigil_status.vpcf",
                           2,
                           Parent,
                           0);
    v7 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
    v9 = CDOTA_Buff::GetParent(this);
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(
      ParticleManager,
      BuffParticleEffect,
      0,
      v9,
      5,
      "attach_hitloc",
      *AbsOrigin,
      1);
    v11 = CDOTA_Buff::GetParent(this);
    v12 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v12, BuffParticleEffect, 1, v11, 1, 0, vec3_invalid, 1);
    CDOTA_Buff::AddParticle(this, BuffParticleEffect, 0, 0, -1, 0, 0);
  }
}


// CDOTA_Modifier_Tusk_FrozenSigil::GetModifierAttackSpeedBonus_Constant  (line 1804, @0x0000000002cca380, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Tusk_FrozenSigil::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Tusk_FrozenSigil *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->attack_slow;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Tusk_FrozenSigil::GetModifierMoveSpeedBonus_Percentage  (line 1811, @0x0000000002cca3a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Tusk_FrozenSigil::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Tusk_FrozenSigil *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->move_slow;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Tusk_WalrusPunch::~CDOTA_Ability_Tusk_WalrusPunch  (line 1823, @0x0000000002d2c540, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Tusk_WalrusPunch::~CDOTA_Ability_Tusk_WalrusPunch(
        CDOTA_Ability_Tusk_WalrusPunch *const this)
{
  this->_vptr_IHandleEntity = &off_46578B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Tusk_WalrusPunch::~CDOTA_Ability_Tusk_WalrusPunch  (line 1823, @0x0000000002d2c560, libserver.so)  // inlines: ~CDOTA_Ability_Tusk_WalrusPunch
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Tusk_WalrusPunch::~CDOTA_Ability_Tusk_WalrusPunch(
        CDOTA_Ability_Tusk_WalrusPunch *const this)
{
  this->_vptr_IHandleEntity = &off_46578B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Tusk_WalrusPunch::Schema_DynamicBinding  (line 1825, @0x0000000002d20100, libserver.so)
// globals: CDOTA_Ability_Tusk_WalrusPunch::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tusk_WalrusPunch::Schema_DynamicBinding(
        const CDOTA_Ability_Tusk_WalrusPunch *const this)
{
  return CDOTA_Ability_Tusk_WalrusPunch::s_pSchemaBinding;
}


// CDOTA_Ability_Tusk_WalrusPunch::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1825, @0x0000000002d20110, libserver.so)
// globals: CDOTA_Ability_Tusk_WalrusPunch::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tusk_WalrusPunch::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Tusk_WalrusPunch::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tusk_WalrusPunch::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Tusk_WalrusPunch::CEntityInstanceEntityClass::DestructInstance  (line 1825, @0x0000000002d20120, libserver.so)  // inlines: Destruct<CDOTA_Ability_Tusk_WalrusPunch>
void __fastcall CDOTA_Ability_Tusk_WalrusPunch::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Tusk_WalrusPunch::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Tusk_WalrusPunch::CEntityInstanceEntityClass::FreeInstance  (line 1825, @0x0000000002d20140, libserver.so)
void __fastcall CDOTA_Ability_Tusk_WalrusPunch::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Tusk_WalrusPunch::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Tusk_WalrusPunch::CEntityInstanceEntityClass::CanAllocate  (line 1825, @0x0000000002d20160, libserver.so)
bool __fastcall CDOTA_Ability_Tusk_WalrusPunch::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Tusk_WalrusPunch::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Tusk_WalrusPunch::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1825, @0x0000000002d20170, libserver.so)
// globals: CDOTA_Ability_Tusk_WalrusPunch::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Tusk_WalrusPunch::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Tusk_WalrusPunch::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tusk_WalrusPunch::s_pSchemaBinding;
}


// CDOTA_Ability_Tusk_WalrusPunch::CEntityInstanceEntityClass::AllocateInstance  (line 1825, @0x0000000002d25290, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Tusk_WalrusPunch::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Tusk_WalrusPunch::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Tusk_WalrusPunch::CEntityInstanceEntityClass::ConstructInstance  (line 1825, @0x0000000002d295d0, libserver.so)  // inlines: CDOTA_Ability_Tusk_WalrusPunch, Construct<CDOTA_Ability_Tusk_WalrusPunch>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Tusk_WalrusPunch::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Tusk_WalrusPunch::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_46578B0;
  }
  return p;
}


// CDOTA_Ability_Tusk_WalrusPunch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1825, @0x0000000002d34b30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Tusk_WalrusPunch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tusk_WalrusPunch::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Tusk_WalrusPunch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1825, @0x0000000002d34b50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Tusk_WalrusPunch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tusk_WalrusPunch::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Tusk_WalrusPunch::GetEntityClassInternal  (line 1825, @0x0000000002d4ad50, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "CDOTA_Ability_Tusk_WalrusPunch"
// globals: `guard variable for'CDOTA_Ability_Tusk_WalrusPunch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_WalrusPunchClass, CDOTA_Ability_Tusk_WalrusPunch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_WalrusPunchClass, __dso_handle, CDOTA_Ability_Tusk_WalrusPunch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Tusk_WalrusPunch::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_WalrusPunchClassInfo, CDOTA_Ability_Tusk_WalrusPunch::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_WalrusPunchClassInfo
CEntityClass *__cdecl CDOTA_Ability_Tusk_WalrusPunch::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Tusk_WalrusPunch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_WalrusPunchClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tusk_WalrusPunch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_WalrusPunchClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Tusk_WalrusPunch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_WalrusPunchClass);
    CDOTA_Ability_Tusk_WalrusPunch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_WalrusPunchClass._vptr_CEntityClass = off_4657830;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tusk_WalrusPunch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_WalrusPunchClass);
    __cxa_atexit(
      CDOTA_Ability_Tusk_WalrusPunch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Tusk_WalrusPunch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_WalrusPunchClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Tusk_WalrusPunchClass != 0 )
    return &CDOTA_Ability_Tusk_WalrusPunch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_WalrusPunchClass;
  if ( `guard variable for'CDOTA_Ability_Tusk_WalrusPunch::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_WalrusPunchClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tusk_WalrusPunch::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_WalrusPunchClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Tusk_WalrusPunch::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_WalrusPunchClassInfo,
      "CDOTA_Ability_Tusk_WalrusPunch",
      "tusk_walrus_punch",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tusk_WalrusPunch::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_WalrusPunchClassInfo);
  }
  CDOTA_Ability_Tusk_WalrusPunch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_WalrusPunchClass.m_pClassInfo = &CDOTA_Ability_Tusk_WalrusPunch::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_WalrusPunchClassInfo;
  CDOTA_Ability_Tusk_WalrusPunch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_WalrusPunchClass.m_pBaseClassInfo = CDOTA_Ability_Tusk_WalrusPunch::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_WalrusPunchClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Tusk_WalrusPunchClass = &CDOTA_Ability_Tusk_WalrusPunch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_WalrusPunchClass;
  CDOTA_Ability_Tusk_WalrusPunch::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_WalrusPunchClassInfo.m_pClass = &CDOTA_Ability_Tusk_WalrusPunch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_WalrusPunchClass;
  CDOTA_Ability_Tusk_WalrusPunch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_WalrusPunchClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Tusk_WalrusPunchClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Tusk_WalrusPunch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_WalrusPunchClass;
}


// CDOTA_Ability_Tusk_WalrusPunch::GetIntrinsicModifierName  (line 1829, @0x0000000002d20180, libserver.so)
// strings: "modifier_tusk_walrus_punch"
const char *__fastcall CDOTA_Ability_Tusk_WalrusPunch::GetIntrinsicModifierName(
        CDOTA_Ability_Tusk_WalrusPunch *const this)
{
  return "modifier_tusk_walrus_punch";
}


// CDOTA_Ability_Tusk_WalrusPunch::GetCastRange  (line 1830, @0x0000000002d32fc0, libserver.so)  // inlines: GetAttackRange, GetModifier_Constant_Additive, GetModifier_Constant_Highest, IsListeningToEvent
// calls: CDOTABaseAbility::GetCaster, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal
int __fastcall CDOTA_Ability_Tusk_WalrusPunch::GetCastRange(
        CDOTA_Ability_Tusk_WalrusPunch *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  float Modifier_Constant_Highest_Internal; // xmm2_4
  CDOTA_ModifierManager *p_m_ModifierManager; // r12
  CDOTA_BaseNPC *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  float m_iAttackRange; // xmm3_4
  __int64 v11; // rax
  float v12; // xmm3_4
  float v13; // xmm0_4
  __int64 v14; // rax
  float v15; // xmm0_4
  float v16; // xmm1_4
  __int64 v17; // rax
  float v18; // xmm1_4
  float v19; // xmm0_4
  int result; // eax
  __int64 v21; // rdx
  float v22; // [rsp+8h] [rbp-18h]
  float v23; // [rsp+8h] [rbp-18h]
  float v24; // [rsp+Ch] [rbp-14h]
  float v25; // [rsp+Ch] [rbp-14h]
  float v26; // [rsp+Ch] [rbp-14h]
  float v27; // [rsp+Ch] [rbp-14h]

  Caster = CDOTABaseAbility::GetCaster(this);
  Modifier_Constant_Highest_Internal = 0.0;
  p_m_ModifierManager = &Caster->m_ModifierManager;
  v6 = Caster;
  v7 = Caster->m_ModifierManager.m_buffsForModifiers[71];
  if ( v7 != 0xFF && v6->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v7].m_Size > 0 )
    Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                           p_m_ModifierManager,
                                           modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                                           &CModifierParams::s_Default);
  v8 = v6->m_ModifierManager.m_buffsForModifiers[69];
  Modifier_Constant_Additive_Internal = 0.0;
  m_iAttackRange = v6->m_iAttackRange;
  if ( v8 != 0xFF && v6->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v8].m_Size > 0 )
  {
    v22 = Modifier_Constant_Highest_Internal;
    v24 = v6->m_iAttackRange;
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            p_m_ModifierManager,
                                            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                                            &CModifierParams::s_Default);
    Modifier_Constant_Highest_Internal = v22;
    m_iAttackRange = v24;
  }
  v11 = v6->m_ModifierManager.m_buffsForModifiers[70];
  v12 = m_iAttackRange + Modifier_Constant_Additive_Internal;
  v13 = 0.0;
  if ( v11 != 0xFF && v6->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v11].m_Size > 0 )
  {
    v23 = Modifier_Constant_Highest_Internal;
    v25 = v12;
    v13 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
            p_m_ModifierManager,
            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
            &CModifierParams::s_Default);
    Modifier_Constant_Highest_Internal = v23;
    v12 = v25;
  }
  if ( Modifier_Constant_Highest_Internal > (v12 + v13) )
  {
    v21 = v6->m_ModifierManager.m_buffsForModifiers[71];
    result = 0;
    if ( v21 != 0xFF && v6->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v21].m_Size > 0 )
      return CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
               p_m_ModifierManager,
               modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
               &CModifierParams::s_Default);
  }
  else
  {
    v14 = v6->m_ModifierManager.m_buffsForModifiers[69];
    v15 = 0.0;
    v16 = v6->m_iAttackRange;
    if ( v14 != 0xFF && v6->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v14].m_Size > 0 )
    {
      v26 = v6->m_iAttackRange;
      v15 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              p_m_ModifierManager,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
              &CModifierParams::s_Default);
      v16 = v26;
    }
    v17 = v6->m_ModifierManager.m_buffsForModifiers[70];
    v18 = v16 + v15;
    v19 = 0.0;
    if ( v17 != 0xFF && v6->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v17].m_Size > 0 )
    {
      v27 = v18;
      v19 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
              p_m_ModifierManager,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
              &CModifierParams::s_Default);
      v18 = v27;
    }
    return (v19 + v18);
  }
  return result;
}


// CDOTA_Ability_Tusk_WalrusPunch::IsStealable  (line 1832, @0x0000000002d20190, libserver.so)
bool __fastcall CDOTA_Ability_Tusk_WalrusPunch::IsStealable(CDOTA_Ability_Tusk_WalrusPunch *const this)
{
  return 0;
}


// CDOTA_Ability_Tusk_WalrusPunch::YouForgotToImplementOrDeclareServerClass  (line 1840, @0x0000000002cca3c0, libserver.so)
int __fastcall CDOTA_Ability_Tusk_WalrusPunch::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Tusk_WalrusPunch *const this)
{
  return 0;
}


// CDOTA_Ability_Tusk_WalrusPunch::GetServerClass  (line 1840, @0x0000000002cde070, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Tusk_WalrusPunch::GetServerClass(CDOTA_Ability_Tusk_WalrusPunch *const this)
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


// CDOTA_Ability_Tusk_WalrusPunch::GetAbilityDamageToTargetOverInterval  (line 1848, @0x0000000002cff220, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAverageTrueAttackDamage, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Tusk_WalrusPunch::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Tusk_WalrusPunch *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r13d
  CDOTA_BaseNPC *Caster; // rax
  float v9; // [rsp-2Ch] [rbp-2Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "crit_multiplier", -1, 0);
    Caster = CDOTABaseAbility::GetCaster(this);
    v9 = (LevelSpecialValue / 100.0) * CDOTA_BaseNPC::GetAverageTrueAttackDamage(Caster, pTarget);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)) * v9);
  }
  return result;
}


// CDOTA_Ability_Tusk_WalrusPunch::GetSlowDuration  (line 1860, @0x0000000002cf6880, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Tusk_WalrusPunch::GetSlowDuration(CDOTA_Ability_Tusk_WalrusPunch *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "slow_duration", -1, 0);
}


// CDOTA_Modifier_Tusk_WalrusPunch::~CDOTA_Modifier_Tusk_WalrusPunch  (line 1868, @0x0000000002d26e70, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tusk_WalrusPunch::~CDOTA_Modifier_Tusk_WalrusPunch(
        CDOTA_Modifier_Tusk_WalrusPunch *const this)
{
  this->_vptr_CDOTA_Buff = &off_4658370;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tusk_WalrusPunch::~CDOTA_Modifier_Tusk_WalrusPunch  (line 1868, @0x0000000002d26e90, libserver.so)  // inlines: ~CDOTA_Modifier_Tusk_WalrusPunch
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tusk_WalrusPunch::~CDOTA_Modifier_Tusk_WalrusPunch(
        CDOTA_Modifier_Tusk_WalrusPunch *const this)
{
  this->_vptr_CDOTA_Buff = &off_4658370;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tusk_WalrusPunch::IsPurgable  (line 1875, @0x0000000002d201a0, libserver.so)
bool __fastcall CDOTA_Modifier_Tusk_WalrusPunch::IsPurgable(CDOTA_Modifier_Tusk_WalrusPunch *const this)
{
  return 0;
}


// CDOTA_Modifier_Tusk_WalrusPunch::IsHidden  (line 1876, @0x0000000002d201b0, libserver.so)
bool __fastcall CDOTA_Modifier_Tusk_WalrusPunch::IsHidden(CDOTA_Modifier_Tusk_WalrusPunch *const this)
{
  return 1;
}


// CDOTA_Modifier_Tusk_WalrusPunch::OnCreated  (line 1907, @0x0000000002d0a350, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "air_time"
void __fastcall CDOTA_Modifier_Tusk_WalrusPunch::OnCreated(CDOTA_Modifier_Tusk_WalrusPunch *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->crit_multiplier = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "crit_multiplier", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_7:
    this->air_time = 0.0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
LABEL_8:
    this->slow_duration = 0.0;
    goto LABEL_5;
  }
  this->crit_multiplier = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_7;
LABEL_3:
  this->air_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "air_time", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->slow_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "slow_duration", -1, 0);
LABEL_5:
  this->m_iszRangedAttackEffect.u.m_Id = 0;
  this->m_bWalrusPunch = 0;
}


// CDOTA_Modifier_Tusk_WalrusPunch::OnAttackRecord  (line 1918, @0x0000000002cdd280, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::GetCurrentActiveAbility, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, DOTA_EmitSound, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::StartGesture
// strings: "Hero_Tusk.WalrusPunch.Cast"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Tusk_WalrusPunch::OnAttackRecord(
        CDOTA_Modifier_Tusk_WalrusPunch *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CEntityInstance *v12; // r13
  uint32 v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CEntityInstance *v16; // r15
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v18; // r14
  float v19; // xmm0_4
  int m_Id; // eax
  __int64 iRecord; // rbx
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *Caster; // rax
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->hattacker.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC
    || CDOTA_Buff::GetParent(this) != m_pInstance )
  {
LABEL_5:
    *&result.m_eType = 0x3F80000000000001LL;
    goto LABEL_6;
  }
  this->m_bWalrusPunch = 0;
  v9 = params->htarget.m_Index;
  if ( v9 + 2 <= 1
    || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v11 = &v10[params->htarget.m_Index & 0x1FF]) == 0
    || v9 != v11->m_EHandle.m_Index
    || (v12 = v11->m_pInstance, v11->m_pInstance == 0)
    || BYTE3(v12[7]._vptr_IHandleEntity) == 0 )
  {
    v12 = 0;
  }
  v13 = params->hattacker.m_Index;
  if ( v13 + 2 <= 1
    || (v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v15 = &v14[params->hattacker.m_Index & 0x1FF]) == 0
    || v13 != v15->m_EHandle.m_Index
    || (v16 = v15->m_pInstance, v15->m_pInstance == 0)
    || BYTE3(v16[7]._vptr_IHandleEntity) == 0 )
  {
    CDOTA_Buff::GetAbility(this);
    goto LABEL_20;
  }
  Ability = CDOTA_Buff::GetAbility(this);
  v18 = Ability;
  if ( v12 == 0
    || Ability == 0
    || (v16[58]._vptr_IHandleEntity & 8) != 0
    || LOBYTE(v12[71]._vptr_IHandleEntity) != 0
    || (BYTE1(v12[58]._vptr_IHandleEntity) & 1) != 0
    || Ability != CDOTA_BaseNPC::GetCurrentActiveAbility(v16) && !v18->m_bAutoCastState.m_Value )
  {
    goto LABEL_20;
  }
  LODWORD(result.m_szVal) = (*(v18->_vptr_IHandleEntity + 256))(v18, v12);
  *&result.m_eType = 1;
  if ( LODWORD(result.m_szVal) == 0 )
  {
    v19 = (*(v18->_vptr_IHandleEntity + 274))(v18, 0xFFFFFFFFLL);
    *&result.m_eType = 1;
    if ( v19 <= *&v16[44].m_iszPrivateVScripts.u.m_Id )
    {
      if ( (*(v18->_vptr_IHandleEntity + 245))(v18) != 0 )
      {
        if ( LOBYTE(v12[71]._vptr_IHandleEntity) == 0 && (BYTE1(v12[58]._vptr_IHandleEntity) & 1) == 0 )
        {
          m_Id = v12[43].m_iszPrivateVScripts.u.m_Id;
          if ( (m_Id & 0x10) == 0
            && (m_Id & 0x193) != 0
            && HIBYTE(v12[7].m_CScriptComponent) != HIBYTE(v16[7].m_CScriptComponent)
            && LOBYTE(v16[71].m_pEntity) == 0 )
          {
            iRecord = params->iRecord;
            AttackRecordsManager = GetAttackRecordsManager();
            RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
            if ( RecordByIndex != 0 )
              RecordByIndex->m_bNeverMiss = 1;
            this->m_bWalrusPunch = 1;
            Parent = CDOTA_Buff::GetParent(this);
            DOTA_EmitSound(10, "Hero_Tusk.WalrusPunch.Cast", Parent);
            Caster = CDOTA_Buff::GetCaster(this);
            CDOTA_BaseNPC::StartGesture(Caster, 1513, 0.0, 0.0, 0, 0, 1.0);
          }
        }
        goto LABEL_5;
      }
LABEL_20:
      *&result.m_eType = 1;
    }
  }
LABEL_6:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Tusk_WalrusPunch::OnRefresh  (line 1964, @0x0000000002d0a280, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "air_time"
void __fastcall CDOTA_Modifier_Tusk_WalrusPunch::OnRefresh(CDOTA_Modifier_Tusk_WalrusPunch *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->crit_multiplier = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "crit_multiplier", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->air_time = 0.0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->crit_multiplier = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->air_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "air_time", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->slow_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "slow_duration", -1, 0);
    return;
  }
LABEL_7:
  this->slow_duration = 0.0;
}


// CDOTA_Modifier_Tusk_WalrusPunch::DeclareFunctions  (line 1973, @0x0000000002cca3d0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Tusk_WalrusPunch::GetModifierPreAttack_CriticalStrike(CModifierParams const&), CDOTA_Modifier_Tusk_WalrusPunch::OnAttackLanded(CModifierParams const&), CDOTA_Modifier_Tusk_WalrusPunch::OnAttackStart(CModifierParams const&), CDOTA_Modifier_Tusk_WalrusPunch::OnAttack(CModifierParams const&), CDOTA_Modifier_Tusk_WalrusPunch::OnAttackFail(CModifierParams const&), CDOTA_Modifier_Tusk_WalrusPunch::OnProjectileDodge(CModifierParams const&), CDOTA_Modifier_Tusk_WalrusPunch::GetModifierProcAttack_BonusDamage_Physical(CModifierParams const&), CDOTA_Modifier_Tusk_WalrusPunch::OnAttackRecord(CModifierParams const&)
void __fastcall CDOTA_Modifier_Tusk_WalrusPunch::DeclareFunctions(CDOTA_Modifier_Tusk_WalrusPunch *const this)
{
  this->m_Functions[83].__pfn = CDOTA_Modifier_Tusk_WalrusPunch::GetModifierPreAttack_CriticalStrike;
  this->m_Functions[83].__delta = 0;
  this->m_Functions[121].__delta = 0;
  this->m_Functions[121].__pfn = CDOTA_Modifier_Tusk_WalrusPunch::OnAttackLanded;
  this->m_Functions[119].__pfn = CDOTA_Modifier_Tusk_WalrusPunch::OnAttackStart;
  this->m_Functions[120].__pfn = CDOTA_Modifier_Tusk_WalrusPunch::OnAttack;
  this->m_Functions[122].__pfn = CDOTA_Modifier_Tusk_WalrusPunch::OnAttackFail;
  this->m_Functions[124].__pfn = CDOTA_Modifier_Tusk_WalrusPunch::OnProjectileDodge;
  this->m_Functions[4].__pfn = CDOTA_Modifier_Tusk_WalrusPunch::GetModifierProcAttack_BonusDamage_Physical;
  this->m_Functions[119].__delta = 0;
  this->m_Functions[120].__delta = 0;
  this->m_Functions[122].__delta = 0;
  this->m_Functions[124].__delta = 0;
  this->m_Functions[4].__delta = 0;
  this->m_Functions[118].__pfn = CDOTA_Modifier_Tusk_WalrusPunch::OnAttackRecord;
  this->m_Functions[118].__delta = 0;
}


// CDOTA_Modifier_Tusk_WalrusPunch::OnAttackStart  (line 1988, @0x0000000002cdac80, libserver.so)  // inlines: AttackerNPC, CUtlSymbolLarge, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetRangedProjectileName, InState, IndexToIdentity, IsInvulnerable, IsUnitMyParent, IsValid, LookupEntity, SetRangedProjectileName, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, MakeEntitySystemString
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Tusk_WalrusPunch::OnAttackStart(
        CDOTA_Modifier_Tusk_WalrusPunch *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 v8; // ecx
  unsigned __int64 v9; // rax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rax
  CEntityInstance *v12; // rax
  uint32 v13; // edx
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v15; // rcx
  CEntityIdentity *v16; // rcx
  CEntityInstance *v17; // rdx
  int m_Id; // ecx
  CDOTA_BaseNPC *Caster; // rbx
  UtlSymLargeId_t v21; // [rsp+10h] [rbp-20h]

  if ( this->m_bWalrusPunch )
  {
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
          if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
          {
            v8 = params->htarget.m_Index;
            if ( v8 + 2 <= 1
              || (v9 = params->htarget.m_Index & 0x7FFF,
                  (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v9 >> 9)]) == 0)
              || (v11 = &v10[v9 & 0x1FF]) == 0
              || v8 != v11->m_EHandle.m_Index
              || (v12 = v11->m_pInstance) == 0
              || BYTE3(v12[7]._vptr_IHandleEntity) == 0 )
            {
              v12 = 0;
            }
            v13 = params->hattacker.m_Index;
            if ( v13 + 2 > 1 )
            {
              m_Index_low = LOWORD(params->hattacker.m_Index);
              v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
              if ( v15 != 0 )
              {
                v16 = &v15[m_Index_low & 0x1FF];
                if ( v16 != 0 && v13 == v16->m_EHandle.m_Index )
                {
                  v17 = v16->m_pInstance;
                  if ( v16->m_pInstance != 0
                    && BYTE3(v17[7]._vptr_IHandleEntity) != 0
                    && v12 != 0
                    && LOBYTE(v12[71]._vptr_IHandleEntity) == 0
                    && (BYTE1(v12[58]._vptr_IHandleEntity) & 1) == 0 )
                  {
                    m_Id = v12[43].m_iszPrivateVScripts.u.m_Id;
                    if ( (m_Id & 0x10) == 0
                      && (m_Id & 0x193) != 0
                      && HIBYTE(v12[7].m_CScriptComponent) != HIBYTE(v17[7].m_CScriptComponent)
                      && LOBYTE(v17[71].m_pEntity) == 0
                      && CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value
                      && CDOTA_Buff::GetCaster(this)->m_iszAutoAttackRangedParticle.u.m_Id != 0 )
                    {
                      this->m_iszRangedAttackEffect.u.m_Id = CDOTA_Buff::GetCaster(this)->m_iszAutoAttackRangedParticle.u.m_Id;
                      Caster = CDOTA_Buff::GetCaster(this);
                      MakeEntitySystemString(0);
                      Caster->m_iszAutoAttackRangedParticle.u.m_Id = v21;
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
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Tusk_WalrusPunch::OnAttack  (line 2010, @0x0000000002d19290, libserver.so)  // inlines: AddToTail, AttackerNPC, CUtlMemory, CUtlSymbol, CUtlVector, CUtlVectorBase, CopyConstruct<CUtlSymbol>, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetModifier_Constant_Additive, GetProjectileSpeed, GetSerialNumber, GrowMemory, InState, IndexToIdentity, IsInvulnerable, IsListeningToEvent, IsUnitMyParent, IsValid, LookupEntity, Purge, RemoveAll, Set, TargetNPC, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, LookupActivityModifier, CDOTA_Buff::GetCaster, CBaseAnimating::SelectWeightedSequenceFromModifiers, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::AddParticle, CUtlMemory<CUtlSymbol, int>::Purge (14 total)
// strings: "particles/units/heroes/hero_tusk/tusk_rubickpunch_start.vpcf", "attach_hitloc"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Tusk_WalrusPunch::OnAttack(
        CDOTA_Modifier_Tusk_WalrusPunch *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 v8; // ecx
  unsigned __int64 v9; // rax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rax
  CEntityInstance *v12; // r12
  uint32 v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CEntityInstance *v16; // r13
  int m_Id; // eax
  CEntityIdentity *m_pEntity; // rdx
  int v19; // eax
  __int16 v20; // cx
  CUtlSymbol *m_pMemory; // r15
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v23; // rax
  __int64 v24; // rdx
  float Modifier_Constant_Additive_Internal; // xmm0_4
  int BuffParticleEffect; // r14d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v28; // rax
  CDOTA_ParticleManager *v29; // rax
  CDOTA_ParticleManager *v30; // rax
  float m_iProjectileMoveSpeed; // [rsp+14h] [rbp-6Ch]
  int v32; // [rsp+14h] [rbp-6Ch]
  HSequence paramsb; // [rsp+18h] [rbp-68h]
  UtlSymId_t v35; // [rsp+20h] [rbp-60h]
  double v36; // [rsp+20h] [rbp-60h]
  CUtlVector<CUtlSymbol,CUtlMemory<CUtlSymbol,int> > modifier_sym; // [rsp+30h] [rbp-50h] BYREF

  if ( this->m_bWalrusPunch )
  {
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
          if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
          {
            v8 = params->htarget.m_Index;
            if ( v8 + 2 <= 1
              || (v9 = params->htarget.m_Index & 0x7FFF,
                  (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v9 >> 9)]) == 0)
              || (v11 = &v10[v9 & 0x1FF]) == 0
              || v8 != v11->m_EHandle.m_Index
              || (v12 = v11->m_pInstance, v11->m_pInstance == 0)
              || BYTE3(v12[7]._vptr_IHandleEntity) == 0 )
            {
              v12 = 0;
            }
            v13 = params->hattacker.m_Index;
            if ( v13 + 2 > 1 )
            {
              v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
              if ( v14 != 0 )
              {
                v15 = &v14[params->hattacker.m_Index & 0x1FF];
                if ( v15 != 0 && v13 == v15->m_EHandle.m_Index )
                {
                  v16 = v15->m_pInstance;
                  if ( v15->m_pInstance != 0
                    && BYTE3(v16[7]._vptr_IHandleEntity) != 0
                    && v12 != 0
                    && LOBYTE(v12[71]._vptr_IHandleEntity) == 0
                    && (BYTE1(v12[58]._vptr_IHandleEntity) & 1) == 0 )
                  {
                    m_Id = v12[43].m_iszPrivateVScripts.u.m_Id;
                    if ( (m_Id & 0x10) == 0
                      && (m_Id & 0x193) != 0
                      && HIBYTE(v12[7].m_CScriptComponent) != HIBYTE(v16[7].m_CScriptComponent)
                      && LOBYTE(v16[71].m_pEntity) == 0 )
                    {
                      if ( CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value )
                      {
                        modifier_sym.m_Memory.m_pMemory = 0;
                        modifier_sym.m_Memory.m_nAllocationCount = 0;
                        modifier_sym.m_Memory.m_nGrowSize = 0;
                        LookupActivityModifier("ball_lightning");
                        CUtlMemory<CUtlSymbol,int>::Grow(&modifier_sym.m_Memory, 1);
                        m_pMemory = modifier_sym.m_Memory.m_pMemory;
                        if ( modifier_sym.m_Memory.m_pMemory != 0 )
                        {
                          modifier_sym.m_Memory.m_pMemory->m_Id = v35;
                          m_pMemory = modifier_sym.m_Memory.m_pMemory;
                        }
                        Caster = CDOTA_Buff::GetCaster(this);
                        paramsb.m_Data = CBaseAnimating::SelectWeightedSequenceFromModifiers(Caster, 1519, m_pMemory, 1).m_Data;
                        v23 = CDOTA_Buff::GetCaster(this);
                        v24 = v23->m_ModifierManager.m_buffsForModifiers[72];
                        m_iProjectileMoveSpeed = v23->m_iProjectileMoveSpeed;
                        if ( v24 == 0xFF || v23->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v24].m_Size <= 0 )
                          Modifier_Constant_Additive_Internal = 0.0;
                        else
                          Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                                                  &v23->m_ModifierManager,
                                                                  modifierfunction::MODIFIER_PROPERTY_PROJECTILE_SPEED_BONUS,
                                                                  &CModifierParams::s_Default);
                        v32 = (Modifier_Constant_Additive_Internal + m_iProjectileMoveSpeed);
                        BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                                               this,
                                               "particles/units/heroes/hero_tusk/tusk_rubickpunch_start.vpcf",
                                               2,
                                               0,
                                               0);
                        ParticleManager = GetParticleManager();
                        CDOTA_ParticleManager::SetParticleControlEnt(
                          ParticleManager,
                          BuffParticleEffect,
                          0,
                          v16,
                          1,
                          0,
                          vec3_invalid,
                          1);
                        v28 = GetParticleManager();
                        CDOTA_ParticleManager::SetParticleControlEnt(
                          v28,
                          BuffParticleEffect,
                          1,
                          v12,
                          5,
                          "attach_hitloc",
                          vec3_invalid,
                          1);
                        *&v36 = v32;
                        *(&v36 + 1) = v32;
                        v29 = GetParticleManager();
                        CDOTA_ParticleManager::SetParticleControl(v29, BuffParticleEffect, 2, v36, v32);
                        *&v36 = paramsb.m_Data;
                        *(&v36 + 1) = paramsb.m_Data;
                        v30 = GetParticleManager();
                        CDOTA_ParticleManager::SetParticleControl(v30, BuffParticleEffect, 3, v36, paramsb.m_Data);
                        CDOTA_Buff::AddParticle(this, BuffParticleEffect, 0, 0, -1, 0, 0);
                        if ( (modifier_sym.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                        {
                          CUtlMemory<CUtlSymbol,int>::Purge(&modifier_sym.m_Memory);
                          if ( (modifier_sym.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                            CUtlMemory<CUtlSymbol,int>::Purge(&modifier_sym.m_Memory);
                        }
                      }
                      m_pEntity = v12->m_pEntity;
                      if ( m_pEntity != 0 )
                      {
                        v19 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                        if ( m_pEntity->m_EHandle.m_Index == -1 )
                          v20 = 0x7FFF;
                        else
                          v20 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                        LOWORD(this->m_hTarget.m_Index) = v20 | this->m_hTarget.m_Index & 0x8000;
                        this->m_hTarget.m_Index = (v19 << 15) | this->m_hTarget.m_Index & 0x7FFF;
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
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Tusk_WalrusPunch::OnAttackLanded  (line 2047, @0x0000000002ce8a60, libserver.so)  // inlines: AttackerNPC, Get, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsConsideredHero, IsInvulnerable, IsRealHero, IsUnitMyParent, IsValid, LookupEntity, SpeakConcept, TargetNPC, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTABaseAbility::CastAbility, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, CBaseEntity::StopSound, DOTA_EmitSound, CResponseCriteriaSet::CResponseCriteriaSet (25 total)
// strings: "particles/units/heroes/hero_tusk/tusk_walruspunch_start.vpcf", "attach_hitloc", "particles/units/heroes/hero_tusk/tusk_walruspunch_hand.vpcf", "attach_attack2", "Hero_Tusk.WalrusPunch.Cast", "Hero_Tusk.WalrusPunch.Target" (9 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
ModifierVariant_t __fastcall CDOTA_Modifier_Tusk_WalrusPunch::OnAttackLanded(
        CDOTA_Modifier_Tusk_WalrusPunch *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 v8; // ecx
  unsigned __int64 v9; // rax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rax
  CEntityInstance *v12; // r12
  uint32 v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CEntityInstance *v16; // r13
  int m_Id; // eax
  CDOTABaseAbility *Ability; // rax
  int BuffParticleEffect; // r15d
  CDOTA_ParticleManager *ParticleManager; // rax
  __int64 v21; // r14
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  int v25; // r15d
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  CDOTA_ParticleManager *v28; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Speech *m_pSpeech; // rdi
  float v31; // xmm1_4
  CDOTABaseAbility *v32; // r15
  CDOTA_BaseNPC *v33; // rax
  CDOTA_BaseNPC_Hero *v34; // r15
  CDOTA_BaseNPC *v35; // rax
  CDOTA_BaseNPC_Hero *v36; // rdi
  CDOTABaseAbility *v37; // rax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  CDOTABaseAbility *v39; // r12
  int m_iAbilityID; // r15d
  CDOTA_BaseNPC *v41; // rax
  const Vector *v42; // r12
  CDOTA_BaseNPC *v43; // rax
  float v44; // xmm3_4
  const Vector *AbsOrigin; // [rsp+10h] [rbp-A0h]
  vec_t paramsb; // [rsp+18h] [rbp-98h]
  CResponseCriteriaSet criteria; // [rsp+20h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v50; // [rsp+78h] [rbp-38h]
  Vector v52; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v53; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v54; // 0:xmm0_8.8,8:xmm1_4.4

  v50 = __readfsqword(0x28u);
  if ( this->m_bWalrusPunch )
  {
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
          if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
          {
            v8 = params->htarget.m_Index;
            if ( v8 + 2 <= 1
              || (v9 = params->htarget.m_Index & 0x7FFF,
                  (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v9 >> 9)]) == 0)
              || (v11 = &v10[v9 & 0x1FF]) == 0
              || v8 != v11->m_EHandle.m_Index
              || (v12 = v11->m_pInstance, v11->m_pInstance == 0)
              || BYTE3(v12[7]._vptr_IHandleEntity) == 0 )
            {
              v12 = 0;
            }
            v13 = params->hattacker.m_Index;
            if ( v13 + 2 > 1 )
            {
              v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
              if ( v14 != 0 )
              {
                v15 = &v14[params->hattacker.m_Index & 0x1FF];
                if ( v15 != 0 && v13 == v15->m_EHandle.m_Index )
                {
                  v16 = v15->m_pInstance;
                  if ( v15->m_pInstance != 0
                    && BYTE3(v16[7]._vptr_IHandleEntity) != 0
                    && v12 != 0
                    && LOBYTE(v12[71]._vptr_IHandleEntity) == 0
                    && (BYTE1(v12[58]._vptr_IHandleEntity) & 1) == 0 )
                  {
                    m_Id = v12[43].m_iszPrivateVScripts.u.m_Id;
                    if ( (m_Id & 0x10) == 0
                      && (m_Id & 0x193) != 0
                      && HIBYTE(v12[7].m_CScriptComponent) != HIBYTE(v16[7].m_CScriptComponent)
                      && LOBYTE(v16[71].m_pEntity) == 0 )
                    {
                      Ability = CDOTA_Buff::GetAbility(this);
                      CDOTABaseAbility::CastAbility(Ability);
                      BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                                             this,
                                             "particles/units/heroes/hero_tusk/tusk_walruspunch_start.vpcf",
                                             2,
                                             v16,
                                             0);
                      ParticleManager = GetParticleManager();
                      v21 = *&vec3_invalid.x;
                      paramsb = vec3_invalid.z;
                      CDOTA_ParticleManager::SetParticleControlEnt(
                        ParticleManager,
                        BuffParticleEffect,
                        0,
                        v12,
                        1,
                        0,
                        vec3_invalid,
                        1);
                      v22 = GetParticleManager();
                      v52.z = paramsb;
                      *&v52.x = v21;
                      CDOTA_ParticleManager::SetParticleControlEnt(
                        v22,
                        BuffParticleEffect,
                        1,
                        v12,
                        5,
                        "attach_hitloc",
                        v52,
                        1);
                      v23 = GetParticleManager();
                      v53.z = paramsb;
                      *&v53.x = v21;
                      CDOTA_ParticleManager::SetParticleControlEnt(v23, BuffParticleEffect, 2, v16, 1, 0, v53, 1);
                      v24 = GetParticleManager();
                      CDOTA_ParticleManager::ReleaseParticleIndex(v24, BuffParticleEffect);
                      v25 = CDOTA_Buff::CreateBuffParticleEffect(
                              this,
                              "particles/units/heroes/hero_tusk/tusk_walruspunch_hand.vpcf",
                              2,
                              v16,
                              0);
                      AbsOrigin = CBaseEntity::GetAbsOrigin(v16);
                      v26 = GetParticleManager();
                      CDOTA_ParticleManager::SetParticleControlEnt(v26, v25, 0, v16, 5, "attach_attack2", *AbsOrigin, 1);
                      v27 = GetParticleManager();
                      v54.z = paramsb;
                      *&v54.x = v21;
                      CDOTA_ParticleManager::SetParticleControlEnt(v27, v25, 1, v16, 5, "attach_hitloc", v54, 1);
                      v28 = GetParticleManager();
                      CDOTA_ParticleManager::ReleaseParticleIndex(v28, v25);
                      Caster = CDOTA_Buff::GetCaster(this);
                      CBaseEntity::StopSound(Caster, "Hero_Tusk.WalrusPunch.Cast");
                      DOTA_EmitSound(10, "Hero_Tusk.WalrusPunch.Target", v12);
                      CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
                      if ( (v12[43].m_iszPrivateVScripts.u.m_Id & 3) != 0 )
                        CResponseCriteriaSet::AppendCriteria(&criteria, "punch_hero", "yes", 1.0);
                      else
                        CResponseCriteriaSet::AppendCriteria(&criteria, "punch_fail", "yes", 1.0);
                      m_pSpeech = CDOTA_Buff::GetCaster(this)->m_Speech.m_pSpeech;
                      if ( m_pSpeech != 0 )
                        CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 4, 0, 0, 0, 0);
                      KeyValues::KeyValues(&kv, "modifier_tusk_walrus_punch_slow");
                      KeyValues::SetFloat(&kv, "duration", v31);
                      v32 = CDOTA_Buff::GetAbility(this);
                      v33 = CDOTA_Buff::GetCaster(this);
                      CDOTA_BaseNPC::AddNewModifier(v12, v33, v32, "modifier_tusk_walrus_punch_slow", &kv, 0);
                      if ( (v12[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 && LOBYTE(v12[71].m_pEntity) == 0 )
                      {
                        v34 = 0;
                        if ( BYTE3(v12[7]._vptr_IHandleEntity) != 0 )
                          v34 = v12;
                        v35 = CDOTA_Buff::GetCaster(this);
                        if ( v35 != 0 && (v35->m_iUnitType & 1) != 0 )
                          v36 = v35;
                        else
                          v36 = 0;
                        EconEntity_OnOwnerKillEaterEvent(
                          v36,
                          v34,
                          kill_eater_event_t::kKillEaterEventType_Tusk_WalrusPunches,
                          1,
                          INVALID_ITEM_DEF_INDEX);
                      }
                      CDOTA_Modifier_Tusk_WalrusPunch::CleanupPunch(this);
                      v37 = CDOTA_Buff::GetAbility(this);
                      m_pAbilityData = v37->m_pAbilityData;
                      v39 = v37;
                      if ( m_pAbilityData == 0 )
                      {
                        CDOTABaseAbility::LoadAbilityData(v37, 0);
                        m_pAbilityData = v39->m_pAbilityData;
                      }
                      m_iAbilityID = m_pAbilityData->m_iAbilityID;
                      v41 = CDOTA_Buff::GetCaster(this);
                      v42 = CBaseEntity::GetAbsOrigin(v41);
                      v43 = CDOTA_Buff::GetCaster(this);
                      CDOTAGamerules::SendProjectionAbilityMessage(
                        g_pGameRules,
                        v43,
                        1,
                        m_iAbilityID,
                        0,
                        0,
                        *&v42->x,
                        v42->z,
                        -1.0,
                        v44);
                      KeyValues::~KeyValues(&kv);
                      CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
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


// CDOTA_Modifier_Tusk_WalrusPunch::OnAttackFail  (line 2112, @0x0000000002ce9080, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Modifier_Tusk_WalrusPunch::CleanupPunch
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Tusk_WalrusPunch::OnAttackFail(
        CDOTA_Modifier_Tusk_WalrusPunch *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  CDOTA_BaseNPC *v6; // r12
  CEntityIdentity *v7; // rdx
  uint32 v8; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *v12; // r14

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1
    && (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) != 0 )
  {
    m_pInstance = 0;
    v6 = 0;
    v7 = &v4[params->hattacker.m_Index & 0x1FF];
    if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
    {
      m_pInstance = v7->m_pInstance;
      if ( v7->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        v6 = v7->m_pInstance;
    }
  }
  else
  {
    m_pInstance = 0;
    v6 = 0;
  }
  v8 = params->htarget.m_Index;
  if ( v8 + 2 <= 1
    || (m_Index_low = LOWORD(params->htarget.m_Index),
        (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v11 = &v10[m_Index_low & 0x1FF]) == 0
    || v8 != v11->m_EHandle.m_Index
    || (v12 = v11->m_pInstance, v11->m_pInstance == 0)
    || !v12->m_bIsDOTANPC )
  {
    v12 = 0;
  }
  if ( !this->m_bWalrusPunch
    || v6 == 0
    || v12 == 0
    || m_pInstance == 0
    || !m_pInstance->m_bIsDOTANPC
    || CDOTA_Buff::GetParent(this) != m_pInstance
    || v6 == v12 )
  {
    return 1uLL;
  }
  CDOTA_Modifier_Tusk_WalrusPunch::CleanupPunch(this);
  return 1uLL;
}


// CDOTA_Modifier_Tusk_WalrusPunch::OnProjectileDodge  (line 2130, @0x0000000002ce91f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator bool
// calls: CDOTA_Modifier_Tusk_WalrusPunch::CleanupPunch
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Tusk_WalrusPunch::OnProjectileDodge(
        CDOTA_Modifier_Tusk_WalrusPunch *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // edx
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rax
  uint32 v6; // r9d
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityInstance *m_pInstance; // rdx
  CEntityInstance *v10; // rax

  if ( !this->m_bWalrusPunch )
    return 1uLL;
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[this->m_hTarget.m_Index & 0x1FF];
  if ( v4 == 0 || m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  v6 = params->htarget.m_Index;
  if ( v6 + 2 <= 1
    || (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v8 = &v7[params->htarget.m_Index & 0x1FF]) == 0
    || v6 != v8->m_EHandle.m_Index
    || (m_pInstance = v8->m_pInstance) == 0
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v10 = v4->m_pInstance;
  if ( v10 == 0 || BYTE3(v10[7]._vptr_IHandleEntity) == 0 || m_pInstance == 0 || m_pInstance != v10 )
    return 1uLL;
  CDOTA_Modifier_Tusk_WalrusPunch::CleanupPunch(this);
  return 1uLL;
}


// CDOTA_Modifier_Tusk_WalrusPunch::GetModifierPreAttack_CriticalStrike  (line 2148, @0x0000000002cff2c0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_tusk"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Tusk_WalrusPunch::GetModifierPreAttack_CriticalStrike(
        CDOTA_Modifier_Tusk_WalrusPunch *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax
  uint32 v6; // edx
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v8; // rcx
  CEntityIdentity *v9; // rcx
  CEntityInstance *v10; // rdx
  int crit_multiplier; // ebx
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  __m128i v14; // xmm0
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[params->htarget.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v6 = params->hattacker.m_Index;
  if ( v6 + 2 <= 1
    || (m_Index_low = LOWORD(params->hattacker.m_Index),
        (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v9 = &v8[m_Index_low & 0x1FF]) == 0
    || v6 != v9->m_EHandle.m_Index
    || (v10 = v9->m_pInstance, v9->m_pInstance == 0)
    || BYTE3(v10[7]._vptr_IHandleEntity) == 0 )
  {
    v10 = 0;
  }
  if ( m_pInstance == 0 || !this->m_bWalrusPunch || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x193) == 0 )
    return 1uLL;
  if ( HIBYTE(m_pInstance[7].m_CScriptComponent) == HIBYTE(v10[7].m_CScriptComponent) || LOBYTE(v10[71].m_pEntity) != 0 )
    return 1uLL;
  crit_multiplier = this->crit_multiplier;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_tusk", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    crit_multiplier += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  *v14.m128i_i32 = crit_multiplier;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v14) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Tusk_WalrusPunch::GetModifierProcAttack_BonusDamage_Physical  (line 2171, @0x0000000002cdb460, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_tusk_walrus_punch_air_time"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Tusk_WalrusPunch::GetModifierProcAttack_BonusDamage_Physical(
        CDOTA_Modifier_Tusk_WalrusPunch *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  uint32 v8; // ecx
  unsigned __int64 v9; // rax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rax
  CEntityInstance *v12; // rbx
  uint32 v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CEntityInstance *v16; // rax
  int m_Id; // edx
  float v18; // xmm1_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-28h]

  v23 = __readfsqword(0x28u);
  if ( this->m_bWalrusPunch )
  {
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
          if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
          {
            v8 = params->htarget.m_Index;
            if ( v8 + 2 <= 1
              || (v9 = params->htarget.m_Index & 0x7FFF,
                  (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v9 >> 9)]) == 0)
              || (v11 = &v10[v9 & 0x1FF]) == 0
              || v8 != v11->m_EHandle.m_Index
              || (v12 = v11->m_pInstance, v11->m_pInstance == 0)
              || BYTE3(v12[7]._vptr_IHandleEntity) == 0 )
            {
              v12 = 0;
            }
            v13 = params->hattacker.m_Index;
            if ( v13 + 2 <= 1
              || (v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
              || (v15 = &v14[params->hattacker.m_Index & 0x1FF]) == 0
              || v13 != v15->m_EHandle.m_Index
              || (v16 = v15->m_pInstance, v15->m_pInstance == 0)
              || BYTE3(v16[7]._vptr_IHandleEntity) == 0 )
            {
              v16 = 0;
            }
            if ( v12 != 0 && LOBYTE(v12[71]._vptr_IHandleEntity) == 0 && (BYTE1(v12[58]._vptr_IHandleEntity) & 1) == 0 )
            {
              m_Id = v12[43].m_iszPrivateVScripts.u.m_Id;
              if ( (m_Id & 0x10) == 0
                && (m_Id & 0x193) != 0
                && HIBYTE(v12[7].m_CScriptComponent) != HIBYTE(v16[7].m_CScriptComponent)
                && LOBYTE(v16[71].m_pEntity) == 0 )
              {
                KeyValues::KeyValues(&kv, "modifier_tusk_walrus_punch_air_time");
                KeyValues::SetFloat(&kv, "duration", v18);
                Ability = CDOTA_Buff::GetAbility(this);
                Caster = CDOTA_Buff::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(v12, Caster, Ability, "modifier_tusk_walrus_punch_air_time", &kv, 0);
                KeyValues::~KeyValues(&kv);
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Tusk_WalrusPunch::CheckState  (line 2203, @0x0000000002cd24c0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Tusk_WalrusPunch::CheckState(
        CDOTA_Modifier_Tusk_WalrusPunch *const this,
        CDOTABuffState *const buffState)
{
  if ( this->m_bWalrusPunch )
  {
    buffState->m_nEnabledStateMask |= 0x10000uLL;
    buffState->m_nDisabledStateMask &= ~0x10000uLL;
  }
}


// CDOTA_Modifier_Tusk_WalrusPunch::CleanupPunch  (line 2217, @0x0000000002ce8a00, libserver.so)  // inlines: SetRangedProjectileName, String, ToCStr, operator=
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, MakeEntitySystemString
// callers: CDOTA_Modifier_Tusk_WalrusPunch::OnAttackLanded, CDOTA_Modifier_Tusk_WalrusPunch::OnAttackFail, CDOTA_Modifier_Tusk_WalrusPunch::OnProjectileDodge
void __fastcall CDOTA_Modifier_Tusk_WalrusPunch::CleanupPunch(CDOTA_Modifier_Tusk_WalrusPunch *const this)
{
  const char *m_pAsString; // r12
  CDOTA_BaseNPC *Caster; // rbx
  UtlSymLargeId_t v4; // [rsp+0h] [rbp-20h]

  this->m_bWalrusPunch = 0;
  if ( CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value && this->m_iszRangedAttackEffect.u.m_Id != 0 )
  {
    m_pAsString = this->m_iszRangedAttackEffect.u.m_pAsString;
    Caster = CDOTA_Buff::GetCaster(this);
    MakeEntitySystemString(m_pAsString);
    Caster->m_iszAutoAttackRangedParticle.u.m_Id = v4;
  }
}


// CDOTA_Modifier_Tusk_WalrusPunch_Slow::~CDOTA_Modifier_Tusk_WalrusPunch_Slow  (line 2233, @0x0000000002d26e20, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tusk_WalrusPunch_Slow::~CDOTA_Modifier_Tusk_WalrusPunch_Slow(
        CDOTA_Modifier_Tusk_WalrusPunch_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_4658690;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tusk_WalrusPunch_Slow::~CDOTA_Modifier_Tusk_WalrusPunch_Slow  (line 2233, @0x0000000002d26e40, libserver.so)  // inlines: ~CDOTA_Modifier_Tusk_WalrusPunch_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tusk_WalrusPunch_Slow::~CDOTA_Modifier_Tusk_WalrusPunch_Slow(
        CDOTA_Modifier_Tusk_WalrusPunch_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_4658690;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tusk_WalrusPunch_Slow::GetStatusEffectName  (line 2240, @0x0000000002d201c0, libserver.so)
// strings: "particles/status_fx/status_effect_iceblast_half.vpcf"
const char *__fastcall CDOTA_Modifier_Tusk_WalrusPunch_Slow::GetStatusEffectName(
        CDOTA_Modifier_Tusk_WalrusPunch_Slow *const this)
{
  return "particles/status_fx/status_effect_iceblast_half.vpcf";
}


// CDOTA_Modifier_Tusk_WalrusPunch_Slow::StatusEffectPriority  (line 2241, @0x0000000002d201d0, libserver.so)
int __fastcall CDOTA_Modifier_Tusk_WalrusPunch_Slow::StatusEffectPriority(
        CDOTA_Modifier_Tusk_WalrusPunch_Slow *const this)
{
  return 51;
}


// CDOTA_Modifier_Tusk_WalrusPunch_Slow::DeclareFunctions  (line 2255, @0x0000000002cca4a0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Tusk_WalrusPunch_Slow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Tusk_WalrusPunch_Slow::DeclareFunctions(
        CDOTA_Modifier_Tusk_WalrusPunch_Slow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Tusk_WalrusPunch_Slow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Tusk_WalrusPunch_Slow::OnCreated  (line 2262, @0x0000000002d0ca60, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CBaseEntity::GetAbsOrigin, CDOTA_Buff::AddParticle
// strings: "particles/units/heroes/hero_tusk/tusk_walruspunch_tgt_status.vpcf", "attach_hitloc"
void __fastcall CDOTA_Modifier_Tusk_WalrusPunch_Slow::OnCreated(
        CDOTA_Modifier_Tusk_WalrusPunch_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // rax
  int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *v6; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v10; // r14
  CDOTA_ParticleManager *v11; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->move_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "move_slow", -1, 0);
  else
    this->move_slow = 0;
  Parent = CDOTA_Buff::GetParent(this);
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_tusk/tusk_walruspunch_tgt_status.vpcf",
                         2,
                         Parent,
                         0);
  v6 = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, BuffParticleEffect, 0, v6, 1, 0, vec3_invalid, 1);
  v8 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
  v10 = CDOTA_Buff::GetParent(this);
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v11, BuffParticleEffect, 1, v10, 5, "attach_hitloc", *AbsOrigin, 1);
  CDOTA_Buff::AddParticle(this, BuffParticleEffect, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_Tusk_WalrusPunch_Slow::GetModifierMoveSpeedBonus_Percentage  (line 2274, @0x0000000002cca4c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Tusk_WalrusPunch_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Tusk_WalrusPunch_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->move_slow;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Tusk_WalrusPunch_AirTime::~CDOTA_Modifier_Tusk_WalrusPunch_AirTime  (line 2284, @0x0000000002d26db0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tusk_WalrusPunch_AirTime::~CDOTA_Modifier_Tusk_WalrusPunch_AirTime(
        CDOTA_Modifier_Tusk_WalrusPunch_AirTime *const this)
{
  this->_vptr_CDOTA_Buff = &off_46589B0;
  this->_vptr_CVerticalMotionController = &off_4658CA0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tusk_WalrusPunch_AirTime::~CDOTA_Modifier_Tusk_WalrusPunch_AirTime  (line 2284, @0x0000000002d26de0, libserver.so)  // inlines: ~CDOTA_Modifier_Tusk_WalrusPunch_AirTime
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tusk_WalrusPunch_AirTime::~CDOTA_Modifier_Tusk_WalrusPunch_AirTime(
        CDOTA_Modifier_Tusk_WalrusPunch_AirTime *const this)
{
  this->_vptr_CDOTA_Buff = &off_46589B0;
  this->_vptr_CVerticalMotionController = &off_4658CA0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tusk_WalrusPunch_AirTime::IsStunDebuff  (line 2298, @0x0000000002d201e0, libserver.so)
bool __fastcall CDOTA_Modifier_Tusk_WalrusPunch_AirTime::IsStunDebuff(
        CDOTA_Modifier_Tusk_WalrusPunch_AirTime *const this)
{
  return 1;
}


// CDOTA_Modifier_Tusk_WalrusPunch_AirTime::IsPermanent  (line 2299, @0x0000000002d201f0, libserver.so)
bool __fastcall CDOTA_Modifier_Tusk_WalrusPunch_AirTime::IsPermanent(
        CDOTA_Modifier_Tusk_WalrusPunch_AirTime *const this)
{
  return 1;
}


// CDOTA_Modifier_Tusk_WalrusPunch_AirTime::IsPurgable  (line 2300, @0x0000000002d20200, libserver.so)
bool __fastcall CDOTA_Modifier_Tusk_WalrusPunch_AirTime::IsPurgable(
        CDOTA_Modifier_Tusk_WalrusPunch_AirTime *const this)
{
  return 0;
}


// CDOTA_Modifier_Tusk_WalrusPunch_AirTime::IsVerticalMotionValidToApply  (line 2304, @0x0000000002d20210, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Tusk_WalrusPunch_AirTime::IsVerticalMotionValidToApply(
        CDOTA_Modifier_Tusk_WalrusPunch_AirTime *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Tusk_WalrusPunch_AirTime::GetEffectName  (line 2309, @0x0000000002d2b270, libserver.so)
// calls: CDOTA_Buff::GetParent
// strings: "particles/generic_gameplay/generic_stunned.vpcf"
const char *__fastcall CDOTA_Modifier_Tusk_WalrusPunch_AirTime::GetEffectName(
        CDOTA_Modifier_Tusk_WalrusPunch_AirTime *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  char v2; // al
  const char *v3; // rdx

  Parent = CDOTA_Buff::GetParent(this);
  v2 = (*(Parent->_vptr_IHandleEntity + 408))(Parent);
  v3 = 0;
  if ( v2 != 0 )
    return "particles/generic_gameplay/generic_stunned.vpcf";
  return v3;
}


// CDOTA_Modifier_Tusk_WalrusPunch_AirTime::GetEffectAttachType  (line 2310, @0x0000000002d20240, libserver.so)
int __fastcall CDOTA_Modifier_Tusk_WalrusPunch_AirTime::GetEffectAttachType(
        CDOTA_Modifier_Tusk_WalrusPunch_AirTime *const this)
{
  return 7;
}


// CDOTA_Modifier_Tusk_WalrusPunch_AirTime::GetPriority  (line 2312, @0x0000000002d20250, libserver.so)
int __fastcall CDOTA_Modifier_Tusk_WalrusPunch_AirTime::GetPriority(
        CDOTA_Modifier_Tusk_WalrusPunch_AirTime *const this)
{
  return 10000;
}


// CDOTA_Modifier_Tusk_WalrusPunch_AirTime::DeclareFunctions  (line 2337, @0x0000000002cca4e0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Tusk_WalrusPunch_AirTime::GetOverrideAnimation(CModifierParams const&)
void __fastcall CDOTA_Modifier_Tusk_WalrusPunch_AirTime::DeclareFunctions(
        CDOTA_Modifier_Tusk_WalrusPunch_AirTime *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_Tusk_WalrusPunch_AirTime::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
}


// CDOTA_Modifier_Tusk_WalrusPunch_AirTime::GetOverrideAnimation  (line 2344, @0x0000000002cca500, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Tusk_WalrusPunch_AirTime::GetOverrideAnimation(
        CDOTA_Modifier_Tusk_WalrusPunch_AirTime *const this,
        const CModifierParams *const params)
{
  return 0x44BCA00000000001uLL;
}


// CDOTA_Modifier_Tusk_WalrusPunch_AirTime::CheckState  (line 2351, @0x0000000002cca520, libserver.so)  // inlines: Disable, Enable
void __fastcall CDOTA_Modifier_Tusk_WalrusPunch_AirTime::CheckState(
        CDOTA_Modifier_Tusk_WalrusPunch_AirTime *const this,
        CDOTABuffState *const buffState)
{
  uint64 v2; // rdx

  v2 = buffState->m_nDisabledStateMask & 0xFFFFFFFFFFFBFFDFLL | 0x40000;
  buffState->m_nEnabledStateMask = buffState->m_nEnabledStateMask & 0xFFFFFFFFFFFBFFDFLL | 0x20;
  buffState->m_nDisabledStateMask = v2;
}


// CDOTA_Modifier_Tusk_WalrusPunch_AirTime::OnCreated  (line 2362, @0x0000000002ccfd40, libserver.so)  // inlines: ToDOTABaseNPC, Vector, VectorSubtract, operator-, operator=
// calls: CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetParent, GetGroundHeight, CDOTALocomotor::ApplyVerticalMotionController, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle, CBaseEntity::GetAbsAngles, CDOTA_Buff::GetAbility, CDOTA_ParticleManager::SetParticleControl (14 total)
// strings: "particles/units/heroes/hero_tusk/tusk_walruspunch_tgt.vpcf", "attach_hitloc", "particles/units/heroes/hero_tusk/tusk_walruspunch_txt_ult.vpcf", "particles/units/heroes/hero_tusk/tusk_rubickpunch_txt.vpcf"
void __fastcall CDOTA_Modifier_Tusk_WalrusPunch_AirTime::OnCreated(
        CDOTA_Modifier_Tusk_WalrusPunch_AirTime *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *Parent; // rax
  const Vector *v6; // rax
  vec_t v7; // xmm0_4
  vec_t v8; // xmm1_4
  vec_t v9; // xmm2_4
  int (**vptr_CDOTA_Buff)(...); // rax
  CDOTA_BaseNPC *v11; // r12
  CDOTA_BaseNPC *v12; // rax
  const Vector *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  CDOTALocomotor *v15; // rax
  int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *v17; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  __int64 v19; // r13
  vec_t v20; // r15d
  CDOTA_BaseNPC *v21; // r14
  CDOTA_ParticleManager *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  const QAngle *AbsAngles; // rax
  float x; // xmm0_4
  vec_t z; // xmm1_4
  int v27; // r12d
  CDOTA_BaseNPC *v28; // r14
  CDOTA_ParticleManager *v29; // rax
  CDOTA_BaseNPC *v30; // r14
  CDOTA_ParticleManager *v31; // rax
  CDOTA_BaseNPC *v32; // r14
  CDOTA_ParticleManager *v33; // rax
  CDOTA_BaseNPC *v34; // r14
  CDOTA_ParticleManager *v35; // rax
  CDOTA_BaseNPC *v36; // r14
  CDOTA_ParticleManager *v37; // rax
  CDOTA_BaseNPC *v38; // r14
  CDOTA_ParticleManager *v39; // rax
  CDOTA_ParticleManager *v40; // rax
  CDOTA_BaseNPC *v41; // rax
  CDOTA_ParticleManager *v42; // rax
  CDOTA_ParticleManager *v43; // rax
  CDOTA_BaseNPC *v44; // rax
  double v45; // [rsp+10h] [rbp-40h]
  float v46; // [rsp+18h] [rbp-38h]
  Vector v47; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v48; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v49; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v50; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v51; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v52; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v53; // 0:xmm0_8.8,8:xmm1_4.4

  Caster = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  Parent = CDOTA_Buff::GetParent(this);
  v6 = CBaseEntity::GetAbsOrigin(Parent);
  v7 = v6->z - AbsOrigin->z;
  v8 = v6->y - AbsOrigin->y;
  v9 = v6->x - AbsOrigin->x;
  this->m_flEndTime = 1.0;
  vptr_CDOTA_Buff = this->_vptr_CDOTA_Buff;
  this->m_vDirection.z = v7;
  this->m_vDirection.y = v8;
  this->m_vDirection.x = v9;
  vptr_CDOTA_Buff[63](this, 1, 1.0);
  this->m_flCurTime = 0.0;
  v11 = CDOTA_Buff::GetParent(this);
  v12 = CDOTA_Buff::GetParent(this);
  v13 = CBaseEntity::GetAbsOrigin(v12);
  this->m_flStartZ = GetGroundHeight(v13, v11);
  v14 = CDOTA_Buff::GetParent(this);
  v15 = (*(v14->_vptr_IHandleEntity + 376))(v14);
  if ( CDOTALocomotor::ApplyVerticalMotionController(v15, &this->CVerticalMotionController, 0) )
  {
    v44 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::StartGesture(v44, 1508, 0.2, 0.2, 0, 0, 1.0);
  }
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_tusk/tusk_walruspunch_tgt.vpcf",
                         2,
                         0,
                         0);
  v17 = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  v19 = *&vec3_invalid.x;
  v20 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(vec3_invalid.z)));
  CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, BuffParticleEffect, 0, v17, 1, 0, vec3_invalid, 1);
  v21 = CDOTA_Buff::GetParent(this);
  v22 = GetParticleManager();
  *&v47.x = v19;
  v47.z = v20;
  CDOTA_ParticleManager::SetParticleControlEnt(v22, BuffParticleEffect, 1, v21, 5, "attach_hitloc", v47, 1);
  CDOTA_Buff::AddParticle(this, BuffParticleEffect, 0, 0, -1, 0, 0);
  v23 = CDOTA_Buff::GetParent(this);
  AbsAngles = CBaseEntity::GetAbsAngles(v23);
  x = AbsAngles->x;
  this->m_qRotation.x = AbsAngles->x;
  this->m_qRotation.y = AbsAngles->y;
  z = AbsAngles->z;
  this->m_flOldPitch = x;
  this->m_qRotation.z = z;
  if ( CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value )
  {
    v27 = CDOTA_Buff::CreateBuffParticleEffect(
            this,
            "particles/units/heroes/hero_tusk/tusk_rubickpunch_txt.vpcf",
            2,
            0,
            0);
    v34 = CDOTA_Buff::GetParent(this);
    v35 = GetParticleManager();
    *&v51.x = v19;
    v51.z = v20;
    CDOTA_ParticleManager::SetParticleControlEnt(v35, v27, 0, v34, 1, 0, v51, 1);
    v36 = CDOTA_Buff::GetParent(this);
    v37 = GetParticleManager();
    *&v52.x = v19;
    v52.z = v20;
    CDOTA_ParticleManager::SetParticleControlEnt(v37, v27, 1, v36, 5, "attach_hitloc", v52, 1);
    v38 = CDOTA_Buff::GetCaster(this);
    v39 = GetParticleManager();
    *&v53.x = v19;
    v53.z = v20;
    CDOTA_ParticleManager::SetParticleControlEnt(v39, v27, 2, v38, 1, 0, v53, 1);
    v40 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v40, v27, 3, 2.0, 1.0);
    v41 = CDOTA_Buff::GetParent(this);
    if ( v41 != 0 && v41->m_bIsDOTANPC )
    {
      v45 = 32.00000765919685;
LABEL_9:
      v46 = 1.0;
      goto LABEL_10;
    }
    if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 1) != 0 )
      goto LABEL_11;
    LODWORD(v45) = 0;
LABEL_14:
    HIDWORD(v45) = 0;
    goto LABEL_9;
  }
  v27 = CDOTA_Buff::CreateBuffParticleEffect(
          this,
          "particles/units/heroes/hero_tusk/tusk_walruspunch_txt_ult.vpcf",
          2,
          0,
          0);
  v28 = CDOTA_Buff::GetParent(this);
  v29 = GetParticleManager();
  *&v48.x = v19;
  v48.z = v20;
  CDOTA_ParticleManager::SetParticleControlEnt(v29, v27, 0, v28, 1, 0, v48, 1);
  v30 = CDOTA_Buff::GetParent(this);
  v31 = GetParticleManager();
  *&v49.x = v19;
  v49.z = v20;
  CDOTA_ParticleManager::SetParticleControlEnt(v31, v27, 1, v30, 5, "attach_hitloc", v49, 1);
  v32 = CDOTA_Buff::GetCaster(this);
  v33 = GetParticleManager();
  *&v50.x = v19;
  v50.z = v20;
  CDOTA_ParticleManager::SetParticleControlEnt(v33, v27, 2, v32, 1, 0, v50, 1);
  LODWORD(v45) = 1077936128;
  if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 1) == 0 )
    goto LABEL_14;
  HIDWORD(v45) = 1077936128;
  v46 = 3.0;
LABEL_10:
  v42 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v42, v27, 3, v45, v46);
LABEL_11:
  v43 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v43, v27);
}


// CDOTA_Modifier_Tusk_WalrusPunch_AirTime::UpdateVerticalMotion  (line 2432, @0x0000000002cd6d60, libserver.so)  // inlines: RemapValClamped, clamp<float, float>
// calls: CDOTA_Buff::GetParent, CBaseEntity::SetAbsAngles, CVerticalMotionController::UpdateSimpleAirTime, CDOTA_BaseNPC::RemoveGesture, DOTA_EmitSound
// strings: "Hero_Tusk.WalrusPunch.Damage"
void __fastcall CDOTA_Modifier_Tusk_WalrusPunch_AirTime::UpdateVerticalMotion(
        CDOTA_Modifier_Tusk_WalrusPunch_AirTime *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  CDOTA_BaseNPC *Parent; // rax
  char v7; // al
  int v8; // xmm3_4
  float v9; // xmm0_4
  int (**vptr_CDOTA_Buff)(...); // rax
  float v11; // xmm0_4
  float v12; // xmm0_4
  CDOTA_BaseNPC *v13; // rax
  float v14; // xmm4_4
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  float v18; // xmm2_4
  float flVerticalDista; // [rsp+Ch] [rbp-24h]

  Parent = CDOTA_Buff::GetParent(this);
  v7 = (*(Parent->_vptr_IHandleEntity + 408))(Parent);
  v8 = 1150681088;
  if ( v7 != 0 )
    v8 = 1143111680;
  v9 = a3 + this->m_flCurTime;
  flVerticalDista = *&v8;
  vptr_CDOTA_Buff = this->_vptr_CDOTA_Buff;
  this->m_flCurTime = v9;
  v11 = (vptr_CDOTA_Buff[31])(this);
  if ( v11 == 0.0 )
  {
    v12 = 0.0;
  }
  else
  {
    v18 = this->m_flCurTime / v11;
    v12 = 0.0;
    if ( v18 >= 0.0 )
    {
      v12 = -360.0;
      if ( v18 > 1.0 || (v12 = (-360.0 * v18) + 0.0) < -180.0 )
        v12 = v12 + 360.0;
    }
  }
  this->m_qRotation.x = v12;
  v13 = CDOTA_Buff::GetParent(this);
  CBaseEntity::SetAbsAngles(v13, &this->m_qRotation);
  if ( CVerticalMotionController::UpdateSimpleAirTime(
         &this->CVerticalMotionController,
         me,
         this->m_flStartZ,
         this->m_flCurTime,
         1.0,
         flVerticalDista,
         v14) != 0 )
  {
    this->m_qRotation.x = this->m_flOldPitch;
    v15 = CDOTA_Buff::GetParent(this);
    CBaseEntity::SetAbsAngles(v15, &this->m_qRotation);
    v16 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::RemoveGesture(v16, 1508);
    v17 = CDOTA_Buff::GetParent(this);
    DOTA_EmitSound(10, "Hero_Tusk.WalrusPunch.Damage", v17);
  }
}


// CDOTA_Modifier_Tusk_WalrusPunch_AirTime::OnVerticalMotionInterrupted  (line 2467, @0x0000000002cd19b0, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::SetAbsAngles, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Modifier_Tusk_WalrusPunch_AirTime::OnVerticalMotionInterrupted(
        CDOTA_Modifier_Tusk_WalrusPunch_AirTime *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax

  this->m_qRotation.x = this->m_flOldPitch;
  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::SetAbsAngles(Parent, &this->m_qRotation);
  v3 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveGesture(v3, 1508);
}


// CDOTA_Modifier_Tusk_WalrusPunch_AirTime::OnDestroy  (line 2478, @0x0000000002cd1a10, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::SetAbsAngles, CDOTALocomotor::RemoveVerticalMotionController, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Modifier_Tusk_WalrusPunch_AirTime::OnDestroy(CDOTA_Modifier_Tusk_WalrusPunch_AirTime *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTALocomotor *v4; // rax
  CDOTA_BaseNPC *v5; // rax

  this->m_qRotation.x = this->m_flOldPitch;
  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::SetAbsAngles(Parent, &this->m_qRotation);
  v3 = CDOTA_Buff::GetParent(this);
  v4 = (*(v3->_vptr_IHandleEntity + 376))(v3);
  CDOTALocomotor::RemoveVerticalMotionController(v4, &this->CVerticalMotionController);
  v5 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveGesture(v5, 1508);
}


// CDOTA_Ability_Tusk_WalrusKick::~CDOTA_Ability_Tusk_WalrusKick  (line 2491, @0x0000000002d2c590, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Tusk_WalrusKick::~CDOTA_Ability_Tusk_WalrusKick(
        CDOTA_Ability_Tusk_WalrusKick *const this)
{
  this->_vptr_IHandleEntity = &off_4658D70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Tusk_WalrusKick::~CDOTA_Ability_Tusk_WalrusKick  (line 2491, @0x0000000002d2c5b0, libserver.so)  // inlines: ~CDOTA_Ability_Tusk_WalrusKick
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Tusk_WalrusKick::~CDOTA_Ability_Tusk_WalrusKick(
        CDOTA_Ability_Tusk_WalrusKick *const this)
{
  this->_vptr_IHandleEntity = &off_4658D70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Tusk_WalrusKick::Schema_DynamicBinding  (line 2493, @0x0000000002d20260, libserver.so)
// globals: CDOTA_Ability_Tusk_WalrusKick::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tusk_WalrusKick::Schema_DynamicBinding(
        const CDOTA_Ability_Tusk_WalrusKick *const this)
{
  return CDOTA_Ability_Tusk_WalrusKick::s_pSchemaBinding;
}


// CDOTA_Ability_Tusk_WalrusKick::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2493, @0x0000000002d20270, libserver.so)
// globals: CDOTA_Ability_Tusk_WalrusKick::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Tusk_WalrusKick::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Tusk_WalrusKick::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tusk_WalrusKick::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Tusk_WalrusKick::CEntityInstanceEntityClass::DestructInstance  (line 2493, @0x0000000002d20280, libserver.so)  // inlines: Destruct<CDOTA_Ability_Tusk_WalrusKick>
void __fastcall CDOTA_Ability_Tusk_WalrusKick::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Tusk_WalrusKick::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Tusk_WalrusKick::CEntityInstanceEntityClass::FreeInstance  (line 2493, @0x0000000002d202a0, libserver.so)
void __fastcall CDOTA_Ability_Tusk_WalrusKick::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Tusk_WalrusKick::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Tusk_WalrusKick::CEntityInstanceEntityClass::CanAllocate  (line 2493, @0x0000000002d202c0, libserver.so)
bool __fastcall CDOTA_Ability_Tusk_WalrusKick::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Tusk_WalrusKick::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Tusk_WalrusKick::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2493, @0x0000000002d202d0, libserver.so)
// globals: CDOTA_Ability_Tusk_WalrusKick::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Tusk_WalrusKick::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Tusk_WalrusKick::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Tusk_WalrusKick::s_pSchemaBinding;
}


// CDOTA_Ability_Tusk_WalrusKick::CEntityInstanceEntityClass::AllocateInstance  (line 2493, @0x0000000002d252d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Tusk_WalrusKick::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Tusk_WalrusKick::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Tusk_WalrusKick::CEntityInstanceEntityClass::ConstructInstance  (line 2493, @0x0000000002d29600, libserver.so)  // inlines: CDOTA_Ability_Tusk_WalrusKick, Construct<CDOTA_Ability_Tusk_WalrusKick>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Tusk_WalrusKick::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Tusk_WalrusKick::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4658D70;
  }
  return p;
}


// CDOTA_Ability_Tusk_WalrusKick::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2493, @0x0000000002d34b80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Tusk_WalrusKick::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tusk_WalrusKick::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Tusk_WalrusKick::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2493, @0x0000000002d34ba0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Tusk_WalrusKick::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Tusk_WalrusKick::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Tusk_WalrusKick::GetEntityClassInternal  (line 2493, @0x0000000002d4aea0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "tusk_walrus_kick", "CDOTA_Ability_Tusk_WalrusKick"
// globals: `guard variable for'CDOTA_Ability_Tusk_WalrusKick::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_WalrusKickClass, CDOTA_Ability_Tusk_WalrusKick::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_WalrusKickClass, __dso_handle, CDOTA_Ability_Tusk_WalrusKick::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Tusk_WalrusKick::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_WalrusKickClassInfo, CDOTA_Ability_Tusk_WalrusKick::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_WalrusKickClassInfo
CEntityClass *__cdecl CDOTA_Ability_Tusk_WalrusKick::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Tusk_WalrusKick::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_WalrusKickClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tusk_WalrusKick::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_WalrusKickClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Tusk_WalrusKick::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_WalrusKickClass);
    CDOTA_Ability_Tusk_WalrusKick::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_WalrusKickClass._vptr_CEntityClass = off_4658CF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tusk_WalrusKick::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_WalrusKickClass);
    __cxa_atexit(
      CDOTA_Ability_Tusk_WalrusKick::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Tusk_WalrusKick::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_WalrusKickClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Tusk_WalrusKickClass != 0 )
    return &CDOTA_Ability_Tusk_WalrusKick::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_WalrusKickClass;
  if ( `guard variable for'CDOTA_Ability_Tusk_WalrusKick::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_WalrusKickClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Tusk_WalrusKick::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_WalrusKickClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Tusk_WalrusKick::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_WalrusKickClassInfo,
      "CDOTA_Ability_Tusk_WalrusKick",
      "tusk_walrus_kick",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Tusk_WalrusKick::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_WalrusKickClassInfo);
  }
  CDOTA_Ability_Tusk_WalrusKick::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_WalrusKickClass.m_pClassInfo = &CDOTA_Ability_Tusk_WalrusKick::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_WalrusKickClassInfo;
  CDOTA_Ability_Tusk_WalrusKick::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_WalrusKickClass.m_pBaseClassInfo = CDOTA_Ability_Tusk_WalrusKick::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_WalrusKickClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Tusk_WalrusKickClass = &CDOTA_Ability_Tusk_WalrusKick::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_WalrusKickClass;
  CDOTA_Ability_Tusk_WalrusKick::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Tusk_WalrusKickClassInfo.m_pClass = &CDOTA_Ability_Tusk_WalrusKick::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_WalrusKickClass;
  CDOTA_Ability_Tusk_WalrusKick::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_WalrusKickClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Tusk_WalrusKickClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Tusk_WalrusKick::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Tusk_WalrusKickClass;
}


// CDOTA_Ability_Tusk_WalrusKick::GetCastRange  (line 2497, @0x0000000002d33650, libserver.so)  // inlines: GetAttackRange, GetModifier_Constant_Additive, GetModifier_Constant_Highest, IsListeningToEvent
// calls: CDOTABaseAbility::GetCaster, CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal, CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal
int __fastcall CDOTA_Ability_Tusk_WalrusKick::GetCastRange(
        CDOTA_Ability_Tusk_WalrusKick *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  float Modifier_Constant_Highest_Internal; // xmm2_4
  CDOTA_ModifierManager *p_m_ModifierManager; // r12
  CDOTA_BaseNPC *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  float Modifier_Constant_Additive_Internal; // xmm0_4
  float m_iAttackRange; // xmm3_4
  __int64 v11; // rax
  float v12; // xmm3_4
  float v13; // xmm0_4
  __int64 v14; // rax
  float v15; // xmm0_4
  float v16; // xmm1_4
  __int64 v17; // rax
  float v18; // xmm1_4
  float v19; // xmm0_4
  int result; // eax
  __int64 v21; // rdx
  float v22; // [rsp+8h] [rbp-18h]
  float v23; // [rsp+8h] [rbp-18h]
  float v24; // [rsp+Ch] [rbp-14h]
  float v25; // [rsp+Ch] [rbp-14h]
  float v26; // [rsp+Ch] [rbp-14h]
  float v27; // [rsp+Ch] [rbp-14h]

  Caster = CDOTABaseAbility::GetCaster(this);
  Modifier_Constant_Highest_Internal = 0.0;
  p_m_ModifierManager = &Caster->m_ModifierManager;
  v6 = Caster;
  v7 = Caster->m_ModifierManager.m_buffsForModifiers[71];
  if ( v7 != 0xFF && v6->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v7].m_Size > 0 )
    Modifier_Constant_Highest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
                                           p_m_ModifierManager,
                                           modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
                                           &CModifierParams::s_Default);
  v8 = v6->m_ModifierManager.m_buffsForModifiers[69];
  Modifier_Constant_Additive_Internal = 0.0;
  m_iAttackRange = v6->m_iAttackRange;
  if ( v8 != 0xFF && v6->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v8].m_Size > 0 )
  {
    v22 = Modifier_Constant_Highest_Internal;
    v24 = v6->m_iAttackRange;
    Modifier_Constant_Additive_Internal = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
                                            p_m_ModifierManager,
                                            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
                                            &CModifierParams::s_Default);
    Modifier_Constant_Highest_Internal = v22;
    m_iAttackRange = v24;
  }
  v11 = v6->m_ModifierManager.m_buffsForModifiers[70];
  v12 = m_iAttackRange + Modifier_Constant_Additive_Internal;
  v13 = 0.0;
  if ( v11 != 0xFF && v6->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v11].m_Size > 0 )
  {
    v23 = Modifier_Constant_Highest_Internal;
    v25 = v12;
    v13 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
            p_m_ModifierManager,
            modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
            &CModifierParams::s_Default);
    Modifier_Constant_Highest_Internal = v23;
    v12 = v25;
  }
  if ( Modifier_Constant_Highest_Internal > (v12 + v13) )
  {
    v21 = v6->m_ModifierManager.m_buffsForModifiers[71];
    result = 0;
    if ( v21 != 0xFF && v6->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v21].m_Size > 0 )
      return CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
               p_m_ModifierManager,
               modifierfunction::MODIFIER_PROPERTY_MAX_ATTACK_RANGE,
               &CModifierParams::s_Default);
  }
  else
  {
    v14 = v6->m_ModifierManager.m_buffsForModifiers[69];
    v15 = 0.0;
    v16 = v6->m_iAttackRange;
    if ( v14 != 0xFF && v6->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v14].m_Size > 0 )
    {
      v26 = v6->m_iAttackRange;
      v15 = CDOTA_ModifierManager::GetModifier_Constant_Additive_Internal(
              p_m_ModifierManager,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS,
              &CModifierParams::s_Default);
      v16 = v26;
    }
    v17 = v6->m_ModifierManager.m_buffsForModifiers[70];
    v18 = v16 + v15;
    v19 = 0.0;
    if ( v17 != 0xFF && v6->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v17].m_Size > 0 )
    {
      v27 = v18;
      v19 = CDOTA_ModifierManager::GetModifier_Constant_Highest_Internal(
              p_m_ModifierManager,
              modifierfunction::MODIFIER_PROPERTY_ATTACK_RANGE_BONUS_UNIQUE,
              &CModifierParams::s_Default);
      v18 = v27;
    }
    return (v19 + v18);
  }
  return result;
}


// CDOTA_Ability_Tusk_WalrusKick::GetCooldown  (line 2498, @0x0000000002d47190, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_Tusk_WalrusKick::GetCooldown(CDOTA_Ability_Tusk_WalrusKick *const this, int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "cooldown_scepter", -1, 0);
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_Tusk_WalrusKick::IsStealable  (line 2500, @0x0000000002d202e0, libserver.so)
bool __fastcall CDOTA_Ability_Tusk_WalrusKick::IsStealable(CDOTA_Ability_Tusk_WalrusKick *const this)
{
  return 0;
}


// CDOTA_Ability_Tusk_WalrusKick::Spawn  (line 2505, @0x0000000002d2cd10, libserver.so)
// calls: CDOTABaseAbility::Spawn, CDOTABaseAbility::SetHidden
void __fastcall CDOTA_Ability_Tusk_WalrusKick::Spawn(
        CDOTA_Ability_Tusk_WalrusKick *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTABaseAbility::Spawn(this, pKeyValues);
  CDOTABaseAbility::SetHidden(this, 1);
}


// CDOTA_Ability_Tusk_WalrusKick::YouForgotToImplementOrDeclareServerClass  (line 2514, @0x0000000002cca550, libserver.so)
int __fastcall CDOTA_Ability_Tusk_WalrusKick::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Tusk_WalrusKick *const this)
{
  return 0;
}


// CDOTA_Ability_Tusk_WalrusKick::GetServerClass  (line 2514, @0x0000000002cde470, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Tusk_WalrusKick::GetServerClass(CDOTA_Ability_Tusk_WalrusKick *const this)
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


// CDOTA_Ability_Tusk_WalrusKick::GetSlowDuration  (line 2522, @0x0000000002cf68a0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Tusk_WalrusKick::GetSlowDuration(CDOTA_Ability_Tusk_WalrusKick *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "slow_duration", -1, 0);
}


// CDOTA_Ability_Tusk_WalrusKick::OnSpellStart  (line 2529, @0x0000000002d02fa0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, InState, IsInvulnerable, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, CDOTABaseAbility::GetLevelSpecialValueFor<int>, ApplyDamage, KeyValues::~KeyValues, __stack_chk_fail (13 total)
// strings: "air_time", "modifier_tusk_walrus_kick_slow", "modifier_tusk_walrus_kick_air_time", "Hero_Tusk.WalrusKick.Target"
void __fastcall CDOTA_Ability_Tusk_WalrusKick::OnSpellStart(CDOTA_Ability_Tusk_WalrusKick *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  float v6; // xmm1_4
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  float air_time; // [rsp+Ch] [rbp-64h]
  KeyValues kv; // [rsp+10h] [rbp-60h] BYREF
  KeyValues kv2; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-28h]

  v12 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0
    && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 1) == 0
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "slow_duration", -1, 0);
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "air_time", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_tusk_walrus_kick_slow");
    KeyValues::SetFloat(&kv, "duration", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_tusk_walrus_kick_slow", &kv, 0);
    KeyValues::KeyValues(&kv2, "modifier_tusk_walrus_kick_air_time");
    KeyValues::SetFloat(&kv2, "duration", v6);
    v7 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, v7, this, "modifier_tusk_walrus_kick_air_time", &kv2, 0);
    DOTA_EmitSound(10, "Hero_Tusk.WalrusKick.Target", v3);
    air_time = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
    v8 = CDOTABaseAbility::GetCaster(this);
    ApplyDamage(v8, v3, this, air_time, 2, 0);
    KeyValues::~KeyValues(&kv2);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_Tusk_WalrusKick_Slow::~CDOTA_Modifier_Tusk_WalrusKick_Slow  (line 2564, @0x0000000002d26d60, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tusk_WalrusKick_Slow::~CDOTA_Modifier_Tusk_WalrusKick_Slow(
        CDOTA_Modifier_Tusk_WalrusKick_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_4659830;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tusk_WalrusKick_Slow::~CDOTA_Modifier_Tusk_WalrusKick_Slow  (line 2564, @0x0000000002d26d80, libserver.so)  // inlines: ~CDOTA_Modifier_Tusk_WalrusKick_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tusk_WalrusKick_Slow::~CDOTA_Modifier_Tusk_WalrusKick_Slow(
        CDOTA_Modifier_Tusk_WalrusKick_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_4659830;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tusk_WalrusKick_Slow::GetStatusEffectName  (line 2571, @0x0000000002d202f0, libserver.so)
// strings: "particles/status_fx/status_effect_iceblast_half.vpcf"
const char *__fastcall CDOTA_Modifier_Tusk_WalrusKick_Slow::GetStatusEffectName(
        CDOTA_Modifier_Tusk_WalrusKick_Slow *const this)
{
  return "particles/status_fx/status_effect_iceblast_half.vpcf";
}


// CDOTA_Modifier_Tusk_WalrusKick_Slow::StatusEffectPriority  (line 2572, @0x0000000002d20300, libserver.so)
int __fastcall CDOTA_Modifier_Tusk_WalrusKick_Slow::StatusEffectPriority(
        CDOTA_Modifier_Tusk_WalrusKick_Slow *const this)
{
  return 51;
}


// CDOTA_Modifier_Tusk_WalrusKick_Slow::DeclareFunctions  (line 2586, @0x0000000002cca560, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Tusk_WalrusKick_Slow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Tusk_WalrusKick_Slow::DeclareFunctions(CDOTA_Modifier_Tusk_WalrusKick_Slow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Tusk_WalrusKick_Slow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Tusk_WalrusKick_Slow::OnCreated  (line 2593, @0x0000000002d0cba0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CBaseEntity::GetAbsOrigin, CDOTA_Buff::AddParticle
// strings: "particles/units/heroes/hero_tusk/tusk_walruskick_tgt_status.vpcf", "attach_hitloc"
void __fastcall CDOTA_Modifier_Tusk_WalrusKick_Slow::OnCreated(
        CDOTA_Modifier_Tusk_WalrusKick_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // rax
  int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *v6; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v10; // r14
  CDOTA_ParticleManager *v11; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->move_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "move_slow", -1, 0);
  else
    this->move_slow = 0;
  Parent = CDOTA_Buff::GetParent(this);
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_tusk/tusk_walruskick_tgt_status.vpcf",
                         2,
                         Parent,
                         0);
  v6 = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, BuffParticleEffect, 0, v6, 1, 0, vec3_invalid, 1);
  v8 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
  v10 = CDOTA_Buff::GetParent(this);
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v11, BuffParticleEffect, 1, v10, 5, "attach_hitloc", *AbsOrigin, 1);
  CDOTA_Buff::AddParticle(this, BuffParticleEffect, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_Tusk_WalrusKick_Slow::GetModifierMoveSpeedBonus_Percentage  (line 2605, @0x0000000002cca580, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Tusk_WalrusKick_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Tusk_WalrusKick_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->move_slow;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Tusk_WalrusKick_AirTime::~CDOTA_Modifier_Tusk_WalrusKick_AirTime  (line 2615, @0x0000000002d26ce0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Tusk_WalrusKick_AirTime::~CDOTA_Modifier_Tusk_WalrusKick_AirTime(
        CDOTA_Modifier_Tusk_WalrusKick_AirTime *const this)
{
  this->_vptr_CDOTA_Buff = &off_4659B50;
  this->_vptr_CHorizontalMotionController = &off_4659E58;
  this->_vptr_CVerticalMotionController = &off_4659E98;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Tusk_WalrusKick_AirTime::~CDOTA_Modifier_Tusk_WalrusKick_AirTime  (line 2615, @0x0000000002d26d10, libserver.so)  // inlines: ~CDOTA_Modifier_Tusk_WalrusKick_AirTime
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Tusk_WalrusKick_AirTime::~CDOTA_Modifier_Tusk_WalrusKick_AirTime(
        CDOTA_Modifier_Tusk_WalrusKick_AirTime *const this)
{
  this->_vptr_CDOTA_Buff = &off_4659B50;
  this->_vptr_CHorizontalMotionController = &off_4659E58;
  this->_vptr_CVerticalMotionController = &off_4659E98;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Tusk_WalrusKick_AirTime::IsStunDebuff  (line 2630, @0x0000000002d20310, libserver.so)
bool __fastcall CDOTA_Modifier_Tusk_WalrusKick_AirTime::IsStunDebuff(
        CDOTA_Modifier_Tusk_WalrusKick_AirTime *const this)
{
  return 1;
}


// CDOTA_Modifier_Tusk_WalrusKick_AirTime::IsPermanent  (line 2631, @0x0000000002d20320, libserver.so)
bool __fastcall CDOTA_Modifier_Tusk_WalrusKick_AirTime::IsPermanent(CDOTA_Modifier_Tusk_WalrusKick_AirTime *const this)
{
  return 1;
}


// CDOTA_Modifier_Tusk_WalrusKick_AirTime::IsPurgable  (line 2632, @0x0000000002d20330, libserver.so)
bool __fastcall CDOTA_Modifier_Tusk_WalrusKick_AirTime::IsPurgable(CDOTA_Modifier_Tusk_WalrusKick_AirTime *const this)
{
  return 0;
}


// CDOTA_Modifier_Tusk_WalrusKick_AirTime::IsHorizontalMotionValidToApply  (line 2638, @0x0000000002d20340, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Tusk_WalrusKick_AirTime::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_Tusk_WalrusKick_AirTime *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Tusk_WalrusKick_AirTime::IsVerticalMotionValidToApply  (line 2639, @0x0000000002d20370, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Tusk_WalrusKick_AirTime::IsVerticalMotionValidToApply(
        CDOTA_Modifier_Tusk_WalrusKick_AirTime *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Tusk_WalrusKick_AirTime::IsMotionController  (line 2641, @0x0000000002d203a0, libserver.so)
bool __fastcall CDOTA_Modifier_Tusk_WalrusKick_AirTime::IsMotionController(
        CDOTA_Modifier_Tusk_WalrusKick_AirTime *const this)
{
  return 1;
}


// CDOTA_Modifier_Tusk_WalrusKick_AirTime::GetEffectName  (line 2646, @0x0000000002d2b2a0, libserver.so)
// calls: CDOTA_Buff::GetParent
// strings: "particles/generic_gameplay/generic_stunned.vpcf"
const char *__fastcall CDOTA_Modifier_Tusk_WalrusKick_AirTime::GetEffectName(
        CDOTA_Modifier_Tusk_WalrusKick_AirTime *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  char v2; // al
  const char *v3; // rdx

  Parent = CDOTA_Buff::GetParent(this);
  v2 = (*(Parent->_vptr_IHandleEntity + 408))(Parent);
  v3 = 0;
  if ( v2 != 0 )
    return "particles/generic_gameplay/generic_stunned.vpcf";
  return v3;
}


// CDOTA_Modifier_Tusk_WalrusKick_AirTime::GetEffectAttachType  (line 2647, @0x0000000002d203b0, libserver.so)
int __fastcall CDOTA_Modifier_Tusk_WalrusKick_AirTime::GetEffectAttachType(
        CDOTA_Modifier_Tusk_WalrusKick_AirTime *const this)
{
  return 7;
}


// CDOTA_Modifier_Tusk_WalrusKick_AirTime::GetPriority  (line 2649, @0x0000000002d203c0, libserver.so)
int __fastcall CDOTA_Modifier_Tusk_WalrusKick_AirTime::GetPriority(CDOTA_Modifier_Tusk_WalrusKick_AirTime *const this)
{
  return 10000;
}


// CDOTA_Modifier_Tusk_WalrusKick_AirTime::DeclareFunctions  (line 2676, @0x0000000002cca5a0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Tusk_WalrusKick_AirTime::GetOverrideAnimation(CModifierParams const&)
void __fastcall CDOTA_Modifier_Tusk_WalrusKick_AirTime::DeclareFunctions(
        CDOTA_Modifier_Tusk_WalrusKick_AirTime *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_Tusk_WalrusKick_AirTime::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
}


// CDOTA_Modifier_Tusk_WalrusKick_AirTime::GetOverrideAnimation  (line 2683, @0x0000000002cca5c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Tusk_WalrusKick_AirTime::GetOverrideAnimation(
        CDOTA_Modifier_Tusk_WalrusKick_AirTime *const this,
        const CModifierParams *const params)
{
  return 0x44BCA00000000001uLL;
}


// CDOTA_Modifier_Tusk_WalrusKick_AirTime::CheckState  (line 2690, @0x0000000002cca5e0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Tusk_WalrusKick_AirTime::CheckState(
        CDOTA_Modifier_Tusk_WalrusKick_AirTime *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x40020uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFBFFDFLL;
}


// CDOTA_Modifier_Tusk_WalrusKick_AirTime::OnCreated  (line 2700, @0x0000000002cf92b0, libserver.so)  // inlines: ToDOTABaseNPC, Vector, VectorSubtract, operator-, operator=
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetParent, GetGroundHeight, CDOTALocomotor::ApplyVerticalMotionController, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle, CBaseEntity::GetAbsAngles (16 total)
// strings: "push_length", "particles/units/heroes/hero_tusk/tusk_walruskick_tgt.vpcf", "attach_hitloc", "particles/units/heroes/hero_tusk/tusk_walruskick_txt_ult.vpcf", "particles/units/heroes/hero_tusk/tusk_rubickkick_txt.vpcf"
void __fastcall CDOTA_Modifier_Tusk_WalrusKick_AirTime::OnCreated(
        CDOTA_Modifier_Tusk_WalrusKick_AirTime *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *Parent; // rax
  const Vector *v7; // rax
  vec_t v8; // xmm0_4
  vec_t v9; // xmm1_4
  int (**vptr_CDOTA_Buff)(...); // rax
  CDOTA_BaseNPC *v11; // r12
  CDOTA_BaseNPC *v12; // rax
  const Vector *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  CDOTALocomotor *v15; // rax
  int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *v17; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  __int64 v19; // r13
  vec_t v20; // r15d
  CDOTA_BaseNPC *v21; // r14
  CDOTA_ParticleManager *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  const QAngle *AbsAngles; // rax
  float x; // xmm0_4
  vec_t z; // xmm1_4
  int v27; // r12d
  CDOTA_BaseNPC *v28; // r14
  CDOTA_ParticleManager *v29; // rax
  CDOTA_BaseNPC *v30; // r14
  CDOTA_ParticleManager *v31; // rax
  CDOTA_BaseNPC *v32; // r14
  CDOTA_ParticleManager *v33; // rax
  CDOTA_BaseNPC *v34; // r14
  CDOTA_ParticleManager *v35; // rax
  CDOTA_BaseNPC *v36; // r14
  CDOTA_ParticleManager *v37; // rax
  CDOTA_BaseNPC *v38; // r14
  CDOTA_ParticleManager *v39; // rax
  CDOTA_ParticleManager *v40; // rax
  CDOTA_BaseNPC *v41; // rax
  CDOTA_ParticleManager *v42; // rax
  CDOTA_ParticleManager *v43; // rax
  CDOTA_BaseNPC *v44; // rax
  CDOTALocomotor *v45; // rax
  CDOTA_BaseNPC *v46; // rax
  double v47; // [rsp+10h] [rbp-40h]
  float v48; // [rsp+18h] [rbp-38h]
  Vector v49; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v50; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v51; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v52; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v53; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v54; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v55; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->push_length, "push_length");
  Caster = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  Parent = CDOTA_Buff::GetParent(this);
  v7 = CBaseEntity::GetAbsOrigin(Parent);
  v8 = v7->y - AbsOrigin->y;
  v9 = v7->x - AbsOrigin->x;
  this->m_flEndTime = 1.0;
  this->m_vDirection.z = 0.0;
  vptr_CDOTA_Buff = this->_vptr_CDOTA_Buff;
  this->m_vDirection.y = v8;
  this->m_vDirection.x = v9;
  vptr_CDOTA_Buff[63](this, 1, 1.0);
  this->m_flCurTime = 0.0;
  v11 = CDOTA_Buff::GetParent(this);
  v12 = CDOTA_Buff::GetParent(this);
  v13 = CBaseEntity::GetAbsOrigin(v12);
  this->m_flStartZ = GetGroundHeight(v13, v11);
  v14 = CDOTA_Buff::GetParent(this);
  v15 = (*(v14->_vptr_IHandleEntity + 376))(v14);
  if ( CDOTALocomotor::ApplyVerticalMotionController(v15, &this->CVerticalMotionController, 0) )
  {
    v44 = CDOTA_Buff::GetParent(this);
    v45 = (*(v44->_vptr_IHandleEntity + 376))(v44);
    if ( CDOTALocomotor::ApplyHorizontalMotionController(v45, &this->CHorizontalMotionController, 0) )
    {
      v46 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::StartGesture(v46, 1508, 0.2, 0.2, 0, 0, 1.0);
    }
  }
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_tusk/tusk_walruskick_tgt.vpcf",
                         2,
                         0,
                         0);
  v17 = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  v19 = *&vec3_invalid.x;
  v20 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(vec3_invalid.z)));
  CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, BuffParticleEffect, 0, v17, 1, 0, vec3_invalid, 1);
  v21 = CDOTA_Buff::GetParent(this);
  v22 = GetParticleManager();
  *&v49.x = v19;
  v49.z = v20;
  CDOTA_ParticleManager::SetParticleControlEnt(v22, BuffParticleEffect, 1, v21, 5, "attach_hitloc", v49, 1);
  CDOTA_Buff::AddParticle(this, BuffParticleEffect, 0, 0, -1, 0, 0);
  v23 = CDOTA_Buff::GetParent(this);
  AbsAngles = CBaseEntity::GetAbsAngles(v23);
  x = AbsAngles->x;
  this->m_qRotation.x = AbsAngles->x;
  this->m_qRotation.y = AbsAngles->y;
  z = AbsAngles->z;
  this->m_flOldPitch = x;
  this->m_qRotation.z = z;
  if ( CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value )
  {
    v27 = CDOTA_Buff::CreateBuffParticleEffect(
            this,
            "particles/units/heroes/hero_tusk/tusk_rubickkick_txt.vpcf",
            2,
            0,
            0);
    v34 = CDOTA_Buff::GetParent(this);
    v35 = GetParticleManager();
    *&v53.x = v19;
    v53.z = v20;
    CDOTA_ParticleManager::SetParticleControlEnt(v35, v27, 0, v34, 1, 0, v53, 1);
    v36 = CDOTA_Buff::GetParent(this);
    v37 = GetParticleManager();
    *&v54.x = v19;
    v54.z = v20;
    CDOTA_ParticleManager::SetParticleControlEnt(v37, v27, 1, v36, 5, "attach_hitloc", v54, 1);
    v38 = CDOTA_Buff::GetCaster(this);
    v39 = GetParticleManager();
    *&v55.x = v19;
    v55.z = v20;
    CDOTA_ParticleManager::SetParticleControlEnt(v39, v27, 2, v38, 1, 0, v55, 1);
    v40 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v40, v27, 3, 2.0, 1.0);
    v41 = CDOTA_Buff::GetParent(this);
    if ( v41 != 0 && v41->m_bIsDOTANPC )
    {
      v47 = 32.00000765919685;
LABEL_8:
      v48 = 1.0;
      goto LABEL_9;
    }
    if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 1) != 0 )
      goto LABEL_10;
    LODWORD(v47) = 0;
LABEL_13:
    HIDWORD(v47) = 0;
    goto LABEL_8;
  }
  v27 = CDOTA_Buff::CreateBuffParticleEffect(
          this,
          "particles/units/heroes/hero_tusk/tusk_walruskick_txt_ult.vpcf",
          2,
          0,
          0);
  v28 = CDOTA_Buff::GetParent(this);
  v29 = GetParticleManager();
  *&v50.x = v19;
  v50.z = v20;
  CDOTA_ParticleManager::SetParticleControlEnt(v29, v27, 0, v28, 1, 0, v50, 1);
  v30 = CDOTA_Buff::GetParent(this);
  v31 = GetParticleManager();
  *&v51.x = v19;
  v51.z = v20;
  CDOTA_ParticleManager::SetParticleControlEnt(v31, v27, 1, v30, 5, "attach_hitloc", v51, 1);
  v32 = CDOTA_Buff::GetCaster(this);
  v33 = GetParticleManager();
  *&v52.x = v19;
  v52.z = v20;
  CDOTA_ParticleManager::SetParticleControlEnt(v33, v27, 2, v32, 1, 0, v52, 1);
  LODWORD(v47) = 1077936128;
  if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 1) == 0 )
    goto LABEL_13;
  HIDWORD(v47) = 1077936128;
  v48 = 3.0;
LABEL_9:
  v42 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v42, v27, 3, v47, v48);
LABEL_10:
  v43 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v43, v27);
}


// CDOTA_Modifier_Tusk_WalrusKick_AirTime::UpdateVerticalMotion  (line 2773, @0x0000000002cd6bf0, libserver.so)  // inlines: RemapValClamped, clamp<float, float>
// calls: CDOTA_Buff::GetParent, CBaseEntity::SetAbsAngles, CVerticalMotionController::UpdateSimpleAirTime, CDOTA_BaseNPC::RemoveGesture, DOTA_EmitSound
// strings: "Hero_Tusk.WalrusKick.Damage"
void __fastcall CDOTA_Modifier_Tusk_WalrusKick_AirTime::UpdateVerticalMotion(
        CDOTA_Modifier_Tusk_WalrusKick_AirTime *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  CDOTA_BaseNPC *Parent; // rax
  char v7; // al
  int v8; // xmm3_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  CDOTA_BaseNPC *v12; // rax
  float v13; // xmm4_4
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  float flVerticalDista; // [rsp+Ch] [rbp-24h]

  Parent = CDOTA_Buff::GetParent(this);
  v7 = (*(Parent->_vptr_IHandleEntity + 408))(Parent);
  v8 = 1141473280;
  if ( v7 != 0 )
    v8 = 1135869952;
  v9 = a3 + this->m_flCurTime;
  v10 = 0.0;
  this->m_flCurTime = v9;
  v11 = v9 / 1.75;
  if ( v11 >= 0.0 && v11 <= 1.0 )
  {
    v10 = (v11 * -360.0) + 0.0;
    if ( v10 < -180.0 )
      v10 = v10 + 360.0;
  }
  flVerticalDista = *&v8;
  this->m_qRotation.x = v10;
  v12 = CDOTA_Buff::GetParent(this);
  CBaseEntity::SetAbsAngles(v12, &this->m_qRotation);
  if ( CVerticalMotionController::UpdateSimpleAirTime(
         &this->CVerticalMotionController,
         me,
         this->m_flStartZ,
         this->m_flCurTime,
         2.0,
         flVerticalDista,
         v13) != 0 )
  {
    this->m_qRotation.x = this->m_flOldPitch;
    v14 = CDOTA_Buff::GetParent(this);
    CBaseEntity::SetAbsAngles(v14, &this->m_qRotation);
    v15 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::RemoveGesture(v15, 1508);
    v16 = CDOTA_Buff::GetParent(this);
    DOTA_EmitSound(10, "Hero_Tusk.WalrusKick.Damage", v16);
  }
}


// CDOTA_Modifier_Tusk_WalrusKick_AirTime::UpdateHorizontalMotion  (line 2807, @0x0000000002ccd480, libserver.so)  // inlines: NormalizeInPlace, VectorAdd, VectorMultiply, operator*, operator+
// calls: VectorNormalize, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CBaseEntity::SetAbsOrigin, CDOTA_Buff::GetCaster, CGridNav::DestroyTreesAroundPoint
void __fastcall CDOTA_Modifier_Tusk_WalrusKick_AirTime::UpdateHorizontalMotion(
        CDOTA_Modifier_Tusk_WalrusKick_AirTime *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  float v5; // xmm0_4
  vec_t z; // eax
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  float v9; // xmm1_4
  vec_t v10; // xmm0_4
  vec_t v11; // xmm2_4
  vec_t v12; // xmm1_4
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v15; // r12d
  CDOTA_BaseNPC *v16; // rax
  float v17; // xmm3_4
  float dtb; // [rsp+Ch] [rbp-34h]
  Vector vDir; // [rsp+10h] [rbp-30h] BYREF
  Vector vNewLocation; // [rsp+20h] [rbp-20h] BYREF
  Vector v22; // 0:xmm0_8.8,8:xmm1_4.4

  v5 = a3 + this->m_flCurTime;
  *&vDir.x = *&this->m_vDirection.x;
  z = this->m_vDirection.z;
  this->m_flCurTime = v5;
  vDir.z = z;
  VectorNormalize(&vDir);
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v9 = this->push_length * (a3 / this->m_flEndTime);
  v10 = (vDir.z * v9) + 0.0;
  v11 = (vDir.y * v9) + AbsOrigin->y;
  v12 = (v9 * vDir.x) + AbsOrigin->x;
  vNewLocation.z = v10;
  vNewLocation.y = v11;
  vNewLocation.x = v12;
  v13 = CDOTA_Buff::GetParent(this);
  CBaseEntity::SetAbsOrigin(v13, &vNewLocation);
  Caster = CDOTA_Buff::GetCaster(this);
  v15 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
  dtb = CDOTA_Buff::GetParent(this)->m_flHullRadius;
  v16 = CDOTA_Buff::GetParent(this);
  v22 = *CBaseEntity::GetAbsOrigin(v16);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 1, v15, v22, dtb, v17);
}


// CDOTA_Modifier_Tusk_WalrusKick_AirTime::OnVerticalMotionInterrupted  (line 2828, @0x0000000002cd1a80, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::SetAbsAngles, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Modifier_Tusk_WalrusKick_AirTime::OnVerticalMotionInterrupted(
        CDOTA_Modifier_Tusk_WalrusKick_AirTime *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax

  this->m_qRotation.x = this->m_flOldPitch;
  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::SetAbsAngles(Parent, &this->m_qRotation);
  v3 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveGesture(v3, 1508);
}


// CDOTA_Modifier_Tusk_WalrusKick_AirTime::OnHorizontalMotionInterrupted  (line 2839, @0x0000000002cd1ae0, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::SetAbsAngles, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Modifier_Tusk_WalrusKick_AirTime::OnHorizontalMotionInterrupted(
        CDOTA_Modifier_Tusk_WalrusKick_AirTime *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax

  this->m_qRotation.x = this->m_flOldPitch;
  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::SetAbsAngles(Parent, &this->m_qRotation);
  v3 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveGesture(v3, 1508);
}


// CDOTA_Modifier_Tusk_WalrusKick_AirTime::OnDestroy  (line 2850, @0x0000000002cd1b40, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::SetAbsAngles, CDOTALocomotor::RemoveVerticalMotionController, CDOTALocomotor::RemoveHorizontalMotionController, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Modifier_Tusk_WalrusKick_AirTime::OnDestroy(CDOTA_Modifier_Tusk_WalrusKick_AirTime *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTALocomotor *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTALocomotor *v6; // rax
  CDOTA_BaseNPC *v7; // rax

  this->m_qRotation.x = this->m_flOldPitch;
  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::SetAbsAngles(Parent, &this->m_qRotation);
  v3 = CDOTA_Buff::GetParent(this);
  v4 = (*(v3->_vptr_IHandleEntity + 376))(v3);
  CDOTALocomotor::RemoveVerticalMotionController(v4, &this->CVerticalMotionController);
  v5 = CDOTA_Buff::GetParent(this);
  v6 = (*(v5->_vptr_IHandleEntity + 376))(v5);
  CDOTALocomotor::RemoveHorizontalMotionController(v6, &this->CHorizontalMotionController);
  v7 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveGesture(v7, 1508);
}


