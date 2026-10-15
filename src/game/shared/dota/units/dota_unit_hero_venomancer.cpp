// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_venomancer.cpp:33
class CDOTA_BaseNPC_Venomancer_PlagueWard : public CDOTA_BaseNPC_Additive {
public:

private:

	int m_iPoseParameterAim;  // +0x11a4
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
	CDOTA_BaseNPC_Venomancer_PlagueWard(CDOTA_BaseNPC_Venomancer_PlagueWard &);
	CDOTA_BaseNPC_Venomancer_PlagueWard(CDOTA_BaseNPC_Venomancer_PlagueWard &);
	CDOTA_BaseNPC_Venomancer_PlagueWard();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnAlive();
	virtual bool AlwaysAutoAttack();
	virtual ~CDOTA_BaseNPC_Venomancer_PlagueWard();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[471] OnAlive
	// vtable[448] AlwaysAutoAttack
	// sizeof = 4520
};

// src/game/shared/dota/units/dota_unit_hero_venomancer.cpp:57
class C_CDOTA_BaseNPC_Venomancer_PlagueWard_MapInstall {
	C_CDOTA_BaseNPC_Venomancer_PlagueWard_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_venomancer.cpp:109
class CDOTA_Unit_Hero_Venomancer : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Venomancer(CDOTA_Unit_Hero_Venomancer &);
	CDOTA_Unit_Hero_Venomancer(CDOTA_Unit_Hero_Venomancer &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual const char * GetDeathEffectName();
	CDOTA_Unit_Hero_Venomancer();
	virtual ~CDOTA_Unit_Hero_Venomancer();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[502] GetDeathEffectName
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_venomancer.cpp:124
class C_CDOTA_Unit_Hero_Venomancer_MapInstall {
	C_CDOTA_Unit_Hero_Venomancer_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_venomancer.cpp:144
class CDOTA_Ability_Venomancer_VenomousGale : public CDOTABaseAbility {
public:

private:

	float duration;  // +0x390
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
	CDOTA_Ability_Venomancer_VenomousGale(CDOTA_Ability_Venomancer_VenomousGale &);
	CDOTA_Ability_Venomancer_VenomousGale(CDOTA_Ability_Venomancer_VenomousGale &);
	CDOTA_Ability_Venomancer_VenomousGale();
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
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual const char * GetStolenActivityModifier();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Venomancer_VenomousGale();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[268] OnUpgrade
	// vtable[289] OnProjectileHit
	// vtable[310] GetStolenActivityModifier
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_venomancer.cpp:165
class C_CDOTA_Ability_Venomancer_VenomousGale_MapInstall {
	C_CDOTA_Ability_Venomancer_VenomousGale_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_venomancer.cpp:308
class CDOTA_Modifier_Venomancer_VenomousGale : public CDOTA_Buff {
public:

private:

	int movement_slow;  // +0xba8
	int tick_damage;  // +0xbac
	float tick_interval;  // +0xbb0
	float duration;  // +0xbb4
	CDOTA_Modifier_Venomancer_VenomousGale();
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual bool IsPurgeException();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual const char * GetEffectName();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ModifierVariant_t Tooltip(const CModifierParams &);
	virtual ~CDOTA_Modifier_Venomancer_VenomousGale();

	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[15] IsPurgeException
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[67] GetEffectName
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeedBonus_Percentage
	// vtable[90] Tooltip
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_venomancer.cpp:408
class CDOTA_Ability_Venomancer_PoisonSting : public CDOTABaseAbility {
public:

private:

	int radius;  // +0x390
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
	CDOTA_Ability_Venomancer_PoisonSting(CDOTA_Ability_Venomancer_PoisonSting &);
	CDOTA_Ability_Venomancer_PoisonSting(CDOTA_Ability_Venomancer_PoisonSting &);
	CDOTA_Ability_Venomancer_PoisonSting();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual bool IsHiddenWhenStolen();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Venomancer_PoisonSting();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[306] IsHiddenWhenStolen
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_venomancer.cpp:450
class CDOTA_Modifier_Venomancer_PoisonSting_Applier : public CDOTA_Buff {
public:

private:

	float duration;  // +0xba8
	int damage;  // +0xbac
	CDOTA_Modifier_Venomancer_PoisonSting_Applier();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnAttacked(const CModifierParams &);
	virtual ~CDOTA_Modifier_Venomancer_PoisonSting_Applier();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[89] OnAttacked
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_venomancer.cpp:530
class CDOTA_Modifier_Venomancer_PoisonStingBase : public CDOTA_Buff {
public:

private:

	int m_iDamage;  // +0xba8
	int movement_speed;  // +0xbac
	int m_nTicksRemaining;  // +0xbb0
	float m_flAttackDamage;  // +0xbb4
	CDOTA_Modifier_Venomancer_PoisonStingBase(CDOTA_Modifier_Venomancer_PoisonStingBase &);
	CDOTA_Modifier_Venomancer_PoisonStingBase(const CDOTA_Modifier_Venomancer_PoisonStingBase &);
	CDOTA_Modifier_Venomancer_PoisonStingBase();
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual const char * GetEffectName();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ModifierVariant_t Tooltip(const CModifierParams &);
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual ~CDOTA_Modifier_Venomancer_PoisonStingBase();

	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[67] GetEffectName
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeedBonus_Percentage
	// vtable[90] Tooltip
	// vtable[10] AddCustomTransmiterData
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_venomancer.cpp:560
class CDOTA_Modifier_Venomancer_PoisonSting : public CDOTA_Modifier_Venomancer_PoisonStingBase {
public:

	CDOTA_Modifier_Venomancer_PoisonSting(CDOTA_Modifier_Venomancer_PoisonSting &);
	CDOTA_Modifier_Venomancer_PoisonSting(const CDOTA_Modifier_Venomancer_PoisonSting &);
	CDOTA_Modifier_Venomancer_PoisonSting();
	virtual ~CDOTA_Modifier_Venomancer_PoisonSting();

	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_venomancer.cpp:660
class CDOTA_Modifier_Venomancer_PoisonStingWard : public CDOTA_Buff {
public:

private:

	int m_iDamage;  // +0xba8
	int movement_speed;  // +0xbac
	int m_nTicksRemaining;  // +0xbb0
	float m_flAttackDamage;  // +0xbb4
	CDOTA_Modifier_Venomancer_PoisonStingWard();
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual const char * GetEffectName();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ModifierVariant_t Tooltip(const CModifierParams &);
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual ~CDOTA_Modifier_Venomancer_PoisonStingWard();

	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[67] GetEffectName
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeedBonus_Percentage
	// vtable[90] Tooltip
	// vtable[10] AddCustomTransmiterData
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_venomancer.cpp:803
class CDOTA_Ability_Venomancer_PlagueWard : public CDOTABaseAbility {
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
	CDOTA_Ability_Venomancer_PlagueWard(CDOTA_Ability_Venomancer_PlagueWard &);
	CDOTA_Ability_Venomancer_PlagueWard(CDOTA_Ability_Venomancer_PlagueWard &);
	CDOTA_Ability_Venomancer_PlagueWard();
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
	void CreateWard(const Vector &, bool);
	virtual const char * GetStolenActivityModifier();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual ~CDOTA_Ability_Venomancer_PlagueWard();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[268] OnUpgrade
	// vtable[310] GetStolenActivityModifier
	// vtable[304] GetAssociatedSecondaryAbilities
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_venomancer.cpp:817
class C_CDOTA_Ability_Venomancer_PlagueWard_MapInstall {
	C_CDOTA_Ability_Venomancer_PlagueWard_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_venomancer.cpp:918
class CDOTA_Modifier_Plague_Wards_Bonus : public CDOTA_Buff {
public:

private:

	int ward_hp;  // +0xba8
	int ward_damage;  // +0xbac
	CDOTA_Modifier_Plague_Wards_Bonus();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual bool IsPurgable();
	ModifierVariant_t GetModifierBaseAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierExtraHealthBonus(const CModifierParams &);
	ModifierVariant_t ModelScale(const CModifierParams &);
	virtual ~CDOTA_Modifier_Plague_Wards_Bonus();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_venomancer.cpp:988
class CDOTA_Ability_Venomancer_PoisonNova : public CDOTABaseAbility {
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
	CDOTA_Ability_Venomancer_PoisonNova(CDOTA_Ability_Venomancer_PoisonNova &);
	CDOTA_Ability_Venomancer_PoisonNova(CDOTA_Ability_Venomancer_PoisonNova &);
	CDOTA_Ability_Venomancer_PoisonNova();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual float GetCooldown(int);
	virtual const char * GetStolenActivityModifier();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Venomancer_PoisonNova();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[242] GetCooldown
	// vtable[310] GetStolenActivityModifier
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_venomancer.cpp:1013
class C_CDOTA_Ability_Venomancer_PoisonNova_MapInstall {
	C_CDOTA_Ability_Venomancer_PoisonNova_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_venomancer.cpp:1065
class CDOTA_Modifier_PoisonNova_Thinker : public CDOTA_Buff {
public:

private:

	float m_fCurRadius;  // +0xba8
	float m_fLastThink;  // +0xbac
	int speed;  // +0xbc8
	int radius;  // +0xbcc
	int start_radius;  // +0xbd0
	float duration;  // +0xbd4
	float duration_scepter;  // +0xbd8
	CDOTA_Modifier_PoisonNova_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_PoisonNova_Thinker();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[11] IsHidden
	// sizeof = 3040
};

// src/game/shared/dota/units/dota_unit_hero_venomancer.cpp:1160
class CDOTA_Modifier_Venomancer_PoisonNova : public CDOTA_Buff {
public:

private:

	int damage_scepter;  // +0xba8
	int damage;  // +0xbac
	int m_iDamage;  // +0xbb0
	CDOTA_Modifier_Venomancer_PoisonNova();
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t Tooltip(const CModifierParams &);
	virtual ~CDOTA_Modifier_Venomancer_PoisonNova();

	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[65] DeclareFunctions
	// vtable[89] Tooltip
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_venomancer.cpp:1234
class CDOTA_Ability_Holdout_ScourgeWard : public CDOTABaseAbility {
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
	CDOTA_Ability_Holdout_ScourgeWard(CDOTA_Ability_Holdout_ScourgeWard &);
	CDOTA_Ability_Holdout_ScourgeWard(CDOTA_Ability_Holdout_ScourgeWard &);
	CDOTA_Ability_Holdout_ScourgeWard();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual void OnUpgrade();
	virtual ~CDOTA_Ability_Holdout_ScourgeWard();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[268] OnUpgrade
	// sizeof = 912
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_BaseNPC_Venomancer_PlagueWard::~CDOTA_BaseNPC_Venomancer_PlagueWard  (line 33, @0x0000000002b19ac0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC_Venomancer_PlagueWard::~CDOTA_BaseNPC_Venomancer_PlagueWard(
        CDOTA_BaseNPC_Venomancer_PlagueWard *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_BaseNPC_Venomancer_PlagueWard::~CDOTA_BaseNPC_Venomancer_PlagueWard  (line 33, @0x0000000002b19b10, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Venomancer_PlagueWard
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_BaseNPC_Venomancer_PlagueWard::~CDOTA_BaseNPC_Venomancer_PlagueWard(
        CDOTA_BaseNPC_Venomancer_PlagueWard *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BaseNPC_Venomancer_PlagueWard::Schema_DynamicBinding  (line 35, @0x0000000002b14450, libserver.so)
// globals: CDOTA_BaseNPC_Venomancer_PlagueWard::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Venomancer_PlagueWard::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Venomancer_PlagueWard *const this)
{
  return CDOTA_BaseNPC_Venomancer_PlagueWard::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Venomancer_PlagueWard::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 35, @0x0000000002b14480, libserver.so)
// globals: CDOTA_BaseNPC_Venomancer_PlagueWard::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Venomancer_PlagueWard::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Venomancer_PlagueWard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Venomancer_PlagueWard::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Venomancer_PlagueWard::CEntityInstanceEntityClass::DestructInstance  (line 35, @0x0000000002b14490, libserver.so)  // inlines: Destruct<CDOTA_BaseNPC_Venomancer_PlagueWard>
void __fastcall CDOTA_BaseNPC_Venomancer_PlagueWard::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BaseNPC_Venomancer_PlagueWard::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BaseNPC_Venomancer_PlagueWard::CEntityInstanceEntityClass::FreeInstance  (line 35, @0x0000000002b144b0, libserver.so)
void __fastcall CDOTA_BaseNPC_Venomancer_PlagueWard::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BaseNPC_Venomancer_PlagueWard::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BaseNPC_Venomancer_PlagueWard::CEntityInstanceEntityClass::CanAllocate  (line 35, @0x0000000002b144d0, libserver.so)
bool __fastcall CDOTA_BaseNPC_Venomancer_PlagueWard::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BaseNPC_Venomancer_PlagueWard::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BaseNPC_Venomancer_PlagueWard::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 35, @0x0000000002b144e0, libserver.so)
// globals: CDOTA_BaseNPC_Venomancer_PlagueWard::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_BaseNPC_Venomancer_PlagueWard::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BaseNPC_Venomancer_PlagueWard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Venomancer_PlagueWard::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Venomancer_PlagueWard::CEntityInstanceEntityClass::AllocateInstance  (line 35, @0x0000000002b18970, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BaseNPC_Venomancer_PlagueWard::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BaseNPC_Venomancer_PlagueWard::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4520);
  memset(v1, 0, 0x11A8u);
  return v1;
}


// CDOTA_BaseNPC_Venomancer_PlagueWard::CEntityInstanceEntityClass::ConstructInstance  (line 35, @0x0000000002b198b0, libserver.so)  // inlines: CDOTA_BaseNPC_Additive, CDOTA_BaseNPC_Venomancer_PlagueWard, Construct<CDOTA_BaseNPC_Venomancer_PlagueWard>
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_BaseNPC_Venomancer_PlagueWard::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BaseNPC_Venomancer_PlagueWard::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *p = &off_44405F0;
    *(p + 236) = &off_4441550;
    *(p + 257) = &off_4441880;
  }
  return p;
}


// CDOTA_BaseNPC_Venomancer_PlagueWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 35, @0x0000000002b22720, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BaseNPC_Venomancer_PlagueWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Venomancer_PlagueWard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BaseNPC_Venomancer_PlagueWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 35, @0x0000000002b228a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BaseNPC_Venomancer_PlagueWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Venomancer_PlagueWard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BaseNPC_Venomancer_PlagueWard::GetEntityClassInternal  (line 35, @0x0000000002b276e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CDOTA_BaseNPC_Additive::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "npc_dota_venomancer_plagueward", "CDOTA_BaseNPC_Venomancer_PlagueWard"
// globals: `guard variable for'CDOTA_BaseNPC_Venomancer_PlagueWard::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Venomancer_PlagueWardClass, CDOTA_BaseNPC_Venomancer_PlagueWard::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Venomancer_PlagueWardClass, __dso_handle, CDOTA_BaseNPC_Venomancer_PlagueWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BaseNPC_Venomancer_PlagueWard::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Venomancer_PlagueWardClassInfo, CDOTA_BaseNPC_Venomancer_PlagueWard::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Venomancer_PlagueWardClassInfo
CEntityClass *__cdecl CDOTA_BaseNPC_Venomancer_PlagueWard::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_Venomancer_PlagueWard::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Venomancer_PlagueWardClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Venomancer_PlagueWard::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Venomancer_PlagueWardClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_BaseNPC_Venomancer_PlagueWard::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Venomancer_PlagueWardClass);
    CDOTA_BaseNPC_Venomancer_PlagueWard::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Venomancer_PlagueWardClass._vptr_CEntityClass = off_4440570;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Venomancer_PlagueWard::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Venomancer_PlagueWardClass);
    __cxa_atexit(
      CDOTA_BaseNPC_Venomancer_PlagueWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BaseNPC_Venomancer_PlagueWard::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Venomancer_PlagueWardClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BaseNPC_Venomancer_PlagueWardClass != 0 )
    return &CDOTA_BaseNPC_Venomancer_PlagueWard::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Venomancer_PlagueWardClass;
  if ( `guard variable for'CDOTA_BaseNPC_Venomancer_PlagueWard::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Venomancer_PlagueWardClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Venomancer_PlagueWard::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Venomancer_PlagueWardClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Additive::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_Venomancer_PlagueWard::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Venomancer_PlagueWardClassInfo,
      "CDOTA_BaseNPC_Venomancer_PlagueWard",
      "npc_dota_venomancer_plagueward",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Venomancer_PlagueWard::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Venomancer_PlagueWardClassInfo);
  }
  CDOTA_BaseNPC_Venomancer_PlagueWard::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Venomancer_PlagueWardClass.m_pClassInfo = &CDOTA_BaseNPC_Venomancer_PlagueWard::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Venomancer_PlagueWardClassInfo;
  CDOTA_BaseNPC_Venomancer_PlagueWard::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Venomancer_PlagueWardClass.m_pBaseClassInfo = CDOTA_BaseNPC_Venomancer_PlagueWard::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Venomancer_PlagueWardClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BaseNPC_Venomancer_PlagueWardClass = &CDOTA_BaseNPC_Venomancer_PlagueWard::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Venomancer_PlagueWardClass;
  CDOTA_BaseNPC_Venomancer_PlagueWard::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Venomancer_PlagueWardClassInfo.m_pClass = &CDOTA_BaseNPC_Venomancer_PlagueWard::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Venomancer_PlagueWardClass;
  CDOTA_BaseNPC_Venomancer_PlagueWard::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Venomancer_PlagueWardClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_BaseNPC_Venomancer_PlagueWardClass->m_pComponentOverrides = 0;
  return &CDOTA_BaseNPC_Venomancer_PlagueWard::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Venomancer_PlagueWardClass;
}


// CDOTA_BaseNPC_Venomancer_PlagueWard::AlwaysAutoAttack  (line 41, @0x0000000002b144f0, libserver.so)
bool __fastcall CDOTA_BaseNPC_Venomancer_PlagueWard::AlwaysAutoAttack(CDOTA_BaseNPC_Venomancer_PlagueWard *const this)
{
  return 1;
}


// CDOTA_BaseNPC_Venomancer_PlagueWard::YouForgotToImplementOrDeclareServerClass  (line 57, @0x0000000002ae71f0, libserver.so)
int __fastcall CDOTA_BaseNPC_Venomancer_PlagueWard::YouForgotToImplementOrDeclareServerClass(
        CDOTA_BaseNPC_Venomancer_PlagueWard *const this)
{
  return 0;
}


// CDOTA_BaseNPC_Venomancer_PlagueWard::GetServerClass  (line 57, @0x0000000002af2f30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_BaseNPC_Venomancer_PlagueWard::GetServerClass(
        CDOTA_BaseNPC_Venomancer_PlagueWard *const this)
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


// CDOTA_BaseNPC_Venomancer_PlagueWard::OnAlive  (line 64, @0x0000000002ae8780, libserver.so)  // inlines: operator=
// calls: CBaseEntity::GetAbsAngles, CBaseAnimating::LookupPoseParameter, CBaseAnimating::SetPoseParameter
void __fastcall CDOTA_BaseNPC_Venomancer_PlagueWard::OnAlive(CDOTA_BaseNPC_Venomancer_PlagueWard *const this)
{
  int v2; // eax
  float v3; // xmm1_4

  this->m_angle = *CBaseEntity::GetAbsAngles(this);
  v2 = CBaseAnimating::LookupPoseParameter(this, "aim");
  this->m_iPoseParameterAim = v2;
  CBaseAnimating::SetPoseParameter(this, v2, 0.0, v3);
}


// CDOTA_Unit_Hero_Venomancer::~CDOTA_Unit_Hero_Venomancer  (line 109, @0x0000000002b1d950, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Venomancer::~CDOTA_Unit_Hero_Venomancer(CDOTA_Unit_Hero_Venomancer *const this)
{
  this->_vptr_IHandleEntity = &off_4441950;
  this->_vptr_INextBotEventResponder = &off_4442930;
  this->_vptr_CObstructionObject = &off_4442C60;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Venomancer::~CDOTA_Unit_Hero_Venomancer  (line 109, @0x0000000002b1d990, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Venomancer
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Venomancer::~CDOTA_Unit_Hero_Venomancer(CDOTA_Unit_Hero_Venomancer *const this)
{
  this->_vptr_IHandleEntity = &off_4441950;
  this->_vptr_INextBotEventResponder = &off_4442930;
  this->_vptr_CObstructionObject = &off_4442C60;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Venomancer::Schema_DynamicBinding  (line 111, @0x0000000002b14500, libserver.so)
// globals: CDOTA_Unit_Hero_Venomancer::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Venomancer::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Venomancer *const this)
{
  return CDOTA_Unit_Hero_Venomancer::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Venomancer::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 111, @0x0000000002b14530, libserver.so)
// globals: CDOTA_Unit_Hero_Venomancer::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Venomancer::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Venomancer::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Venomancer::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Venomancer::CEntityInstanceEntityClass::DestructInstance  (line 111, @0x0000000002b14540, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Venomancer>
void __fastcall CDOTA_Unit_Hero_Venomancer::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Venomancer::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Venomancer::CEntityInstanceEntityClass::FreeInstance  (line 111, @0x0000000002b14560, libserver.so)
void __fastcall CDOTA_Unit_Hero_Venomancer::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Venomancer::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Venomancer::CEntityInstanceEntityClass::CanAllocate  (line 111, @0x0000000002b14580, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Venomancer::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Venomancer::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Venomancer::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 111, @0x0000000002b14590, libserver.so)
// globals: CDOTA_Unit_Hero_Venomancer::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Venomancer::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Venomancer::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Venomancer::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Venomancer::CEntityInstanceEntityClass::AllocateInstance  (line 111, @0x0000000002b189b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Venomancer::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Venomancer::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Venomancer::CEntityInstanceEntityClass::ConstructInstance  (line 111, @0x0000000002b1b240, libserver.so)  // inlines: CDOTA_Unit_Hero_Venomancer, Construct<CDOTA_Unit_Hero_Venomancer>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Venomancer::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Venomancer::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_4441950;
    *(p + 236) = &off_4442930;
    *(p + 257) = &off_4442C60;
  }
  return p;
}


// CDOTA_Unit_Hero_Venomancer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 111, @0x0000000002b22840, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Venomancer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Venomancer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Venomancer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 111, @0x0000000002b22a50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Venomancer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Venomancer::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Venomancer::GetEntityClassInternal  (line 111, @0x0000000002b27830, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "npc_dota_hero_venomancer", "CDOTA_Unit_Hero_Venomancer"
// globals: `guard variable for'CDOTA_Unit_Hero_Venomancer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VenomancerClass, CDOTA_Unit_Hero_Venomancer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VenomancerClass, __dso_handle, CDOTA_Unit_Hero_Venomancer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Venomancer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_VenomancerClassInfo, CDOTA_Unit_Hero_Venomancer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_VenomancerClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Venomancer::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Venomancer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VenomancerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Venomancer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VenomancerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Venomancer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VenomancerClass);
    CDOTA_Unit_Hero_Venomancer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VenomancerClass._vptr_CEntityClass = off_44418D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Venomancer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VenomancerClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Venomancer::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Venomancer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VenomancerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_VenomancerClass != 0 )
    return &CDOTA_Unit_Hero_Venomancer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VenomancerClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Venomancer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_VenomancerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Venomancer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_VenomancerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Venomancer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_VenomancerClassInfo,
      "CDOTA_Unit_Hero_Venomancer",
      "npc_dota_hero_venomancer",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Venomancer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_VenomancerClassInfo);
  }
  CDOTA_Unit_Hero_Venomancer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VenomancerClass.m_pClassInfo = &CDOTA_Unit_Hero_Venomancer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_VenomancerClassInfo;
  CDOTA_Unit_Hero_Venomancer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VenomancerClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Venomancer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_VenomancerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_VenomancerClass = &CDOTA_Unit_Hero_Venomancer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VenomancerClass;
  CDOTA_Unit_Hero_Venomancer::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_VenomancerClassInfo.m_pClass = &CDOTA_Unit_Hero_Venomancer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VenomancerClass;
  CDOTA_Unit_Hero_Venomancer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VenomancerClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_VenomancerClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Venomancer::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VenomancerClass;
}


// CDOTA_Unit_Hero_Venomancer::GetDeathEffectName  (line 116, @0x0000000002b145a0, libserver.so)
// strings: "particles/units/heroes/hero_venomancer/venomancer_bloodpool.vpcf"
const char *__fastcall CDOTA_Unit_Hero_Venomancer::GetDeathEffectName(CDOTA_Unit_Hero_Venomancer *const this)
{
  return "particles/units/heroes/hero_venomancer/venomancer_bloodpool.vpcf";
}


// CDOTA_Unit_Hero_Venomancer::YouForgotToImplementOrDeclareServerClass  (line 124, @0x0000000002ae7200, libserver.so)
int __fastcall CDOTA_Unit_Hero_Venomancer::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Venomancer *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Venomancer::GetServerClass  (line 124, @0x0000000002af26f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Venomancer::GetServerClass(CDOTA_Unit_Hero_Venomancer *const this)
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


// CDOTA_Unit_Hero_Venomancer::Spawn  (line 133, @0x0000000002ae87e0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Spawn
void __fastcall CDOTA_Unit_Hero_Venomancer::Spawn(
        CDOTA_Unit_Hero_Venomancer *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
}


// CDOTA_Ability_Venomancer_VenomousGale::~CDOTA_Ability_Venomancer_VenomousGale  (line 144, @0x0000000002b1bce0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Venomancer_VenomousGale::~CDOTA_Ability_Venomancer_VenomousGale(
        CDOTA_Ability_Venomancer_VenomousGale *const this)
{
  this->_vptr_IHandleEntity = &off_4442D30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Venomancer_VenomousGale::~CDOTA_Ability_Venomancer_VenomousGale  (line 144, @0x0000000002b1bd00, libserver.so)  // inlines: ~CDOTA_Ability_Venomancer_VenomousGale
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Venomancer_VenomousGale::~CDOTA_Ability_Venomancer_VenomousGale(
        CDOTA_Ability_Venomancer_VenomousGale *const this)
{
  this->_vptr_IHandleEntity = &off_4442D30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Venomancer_VenomousGale::Schema_DynamicBinding  (line 146, @0x0000000002b145b0, libserver.so)
// globals: CDOTA_Ability_Venomancer_VenomousGale::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Venomancer_VenomousGale::Schema_DynamicBinding(
        const CDOTA_Ability_Venomancer_VenomousGale *const this)
{
  return CDOTA_Ability_Venomancer_VenomousGale::s_pSchemaBinding;
}


// CDOTA_Ability_Venomancer_VenomousGale::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 146, @0x0000000002b145c0, libserver.so)
// globals: CDOTA_Ability_Venomancer_VenomousGale::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Venomancer_VenomousGale::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Venomancer_VenomousGale::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Venomancer_VenomousGale::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Venomancer_VenomousGale::CEntityInstanceEntityClass::DestructInstance  (line 146, @0x0000000002b145d0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Venomancer_VenomousGale>
void __fastcall CDOTA_Ability_Venomancer_VenomousGale::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Venomancer_VenomousGale::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Venomancer_VenomousGale::CEntityInstanceEntityClass::FreeInstance  (line 146, @0x0000000002b145f0, libserver.so)
void __fastcall CDOTA_Ability_Venomancer_VenomousGale::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Venomancer_VenomousGale::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Venomancer_VenomousGale::CEntityInstanceEntityClass::CanAllocate  (line 146, @0x0000000002b14610, libserver.so)
bool __fastcall CDOTA_Ability_Venomancer_VenomousGale::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Venomancer_VenomousGale::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Venomancer_VenomousGale::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 146, @0x0000000002b14620, libserver.so)
// globals: CDOTA_Ability_Venomancer_VenomousGale::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Venomancer_VenomousGale::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Venomancer_VenomousGale::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Venomancer_VenomousGale::s_pSchemaBinding;
}


// CDOTA_Ability_Venomancer_VenomousGale::CEntityInstanceEntityClass::AllocateInstance  (line 146, @0x0000000002b189f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Venomancer_VenomousGale::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Venomancer_VenomousGale::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Venomancer_VenomousGale::CEntityInstanceEntityClass::ConstructInstance  (line 146, @0x0000000002b1b400, libserver.so)  // inlines: CDOTA_Ability_Venomancer_VenomousGale, Construct<CDOTA_Ability_Venomancer_VenomousGale>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Venomancer_VenomousGale::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Venomancer_VenomousGale::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4442D30;
  }
  return p;
}


// CDOTA_Ability_Venomancer_VenomousGale::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 146, @0x0000000002b21a50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Venomancer_VenomousGale::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Venomancer_VenomousGale::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Venomancer_VenomousGale::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 146, @0x0000000002b21a70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Venomancer_VenomousGale::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Venomancer_VenomousGale::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Venomancer_VenomousGale::GetEntityClassInternal  (line 146, @0x0000000002b27980, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "venomancer_venomous_gale", "CDOTA_Ability_Venomancer_VenomousGale"
// globals: `guard variable for'CDOTA_Ability_Venomancer_VenomousGale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_VenomousGaleClass, CDOTA_Ability_Venomancer_VenomousGale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_VenomousGaleClass, __dso_handle, CDOTA_Ability_Venomancer_VenomousGale::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Venomancer_VenomousGale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_VenomousGaleClassInfo, CDOTA_Ability_Venomancer_VenomousGale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_VenomousGaleClassInfo
CEntityClass *__cdecl CDOTA_Ability_Venomancer_VenomousGale::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Venomancer_VenomousGale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_VenomousGaleClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Venomancer_VenomousGale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_VenomousGaleClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Venomancer_VenomousGale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_VenomousGaleClass);
    CDOTA_Ability_Venomancer_VenomousGale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_VenomousGaleClass._vptr_CEntityClass = off_4442CB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Venomancer_VenomousGale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_VenomousGaleClass);
    __cxa_atexit(
      CDOTA_Ability_Venomancer_VenomousGale::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Venomancer_VenomousGale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_VenomousGaleClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Venomancer_VenomousGaleClass != 0 )
    return &CDOTA_Ability_Venomancer_VenomousGale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_VenomousGaleClass;
  if ( `guard variable for'CDOTA_Ability_Venomancer_VenomousGale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_VenomousGaleClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Venomancer_VenomousGale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_VenomousGaleClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Venomancer_VenomousGale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_VenomousGaleClassInfo,
      "CDOTA_Ability_Venomancer_VenomousGale",
      "venomancer_venomous_gale",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Venomancer_VenomousGale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_VenomousGaleClassInfo);
  }
  CDOTA_Ability_Venomancer_VenomousGale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_VenomousGaleClass.m_pClassInfo = &CDOTA_Ability_Venomancer_VenomousGale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_VenomousGaleClassInfo;
  CDOTA_Ability_Venomancer_VenomousGale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_VenomousGaleClass.m_pBaseClassInfo = CDOTA_Ability_Venomancer_VenomousGale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_VenomousGaleClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Venomancer_VenomousGaleClass = &CDOTA_Ability_Venomancer_VenomousGale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_VenomousGaleClass;
  CDOTA_Ability_Venomancer_VenomousGale::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_VenomousGaleClassInfo.m_pClass = &CDOTA_Ability_Venomancer_VenomousGale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_VenomousGaleClass;
  CDOTA_Ability_Venomancer_VenomousGale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_VenomousGaleClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Venomancer_VenomousGaleClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Venomancer_VenomousGale::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_VenomousGaleClass;
}


// CDOTA_Ability_Venomancer_VenomousGale::GetStolenActivityModifier  (line 154, @0x0000000002b14630, libserver.so)
const char *__fastcall CDOTA_Ability_Venomancer_VenomousGale::GetStolenActivityModifier(
        CDOTA_Ability_Venomancer_VenomousGale *const this)
{
  return "gale";
}


// CDOTA_Ability_Venomancer_VenomousGale::YouForgotToImplementOrDeclareServerClass  (line 165, @0x0000000002ae7210, libserver.so)
int __fastcall CDOTA_Ability_Venomancer_VenomousGale::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Venomancer_VenomousGale *const this)
{
  return 0;
}


// CDOTA_Ability_Venomancer_VenomousGale::GetServerClass  (line 165, @0x0000000002af2730, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Venomancer_VenomousGale::GetServerClass(
        CDOTA_Ability_Venomancer_VenomousGale *const this)
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


// CDOTA_Ability_Venomancer_VenomousGale::OnSpellStart  (line 174, @0x0000000002b04970, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, NormalizeInPlace, Set, VectorMultiply, VectorSubtract, operator*, operator-, operator=, sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorPosition, VectorNormalize, CBaseAnimating::GetAttachment, CDOTA_BaseNPC::StartGesture, CDOTA_ProjectileManager::CreateLinearProjectile, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt (16 total)
// strings: "attach_mouth", "particles/units/heroes/hero_venomancer/venomancer_venomous_gale.vpcf", "particles/units/heroes/hero_venomancer/venomancer_venomous_gale_mouth.vpcf", "Hero_Venomancer.VenomousGale"
void __fastcall CDOTA_Ability_Venomancer_VenomousGale::OnSpellStart(CDOTA_Ability_Venomancer_VenomousGale *const this)
{
  int LevelSpecialValue; // r13d
  int v3; // r14d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r12
  vec_t v6; // xmm0_4
  vec_t v7; // xmm1_4
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  vec_t z; // xmm0_4
  vec_t y; // xmm1_4
  int (**vptr_IHandleEntity)(...); // rax
  CDOTA_BaseNPC *v13; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v15; // eax
  __int16 v16; // cx
  int m_Value; // eax
  CDOTA_BaseNPC *v18; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v20; // r14
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  const QAngle *AbsAngles; // rax
  Vector vDirection; // [rsp+10h] [rbp-C0h] BYREF
  Vector vecStartPos; // [rsp+20h] [rbp-B0h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+30h] [rbp-A0h] BYREF

  this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
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
    v24 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v24);
    AngleVectors(AbsAngles, &vDirection, 0, 0);
  }
  vecStartPos = vec3_invalid;
  v8 = CDOTABaseAbility::GetCaster(this);
  CBaseAnimating::GetAttachment(v8, "attach_mouth", &vecStartPos);
  v9 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v9, 1510, 0.1, 0.1, 9, 0, 1.0);
  info.bHasFrontalCone = 1;
  info.hSource.m_Index = -1;
  info.pszEffectName = "particles/units/heroes/hero_venomancer/venomancer_venomous_gale.vpcf";
  info.fDistance = 0.0;
  z = vec3_origin.z;
  info.fStartRadius = 0.0;
  y = vec3_origin.y;
  info.fEndRadius = 0.0;
  info.vAcceleration.z = z;
  info.vAcceleration.y = y;
  info.vSpawnOrigin = vecStartPos;
  info.vAcceleration.x = vec3_origin.x;
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
  info.bStickyFoWReveal = 1;
  info.pAbility = this;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  info.vVelocity.y = vDirection.y * v3;
  info.vVelocity.z = vDirection.z * v3;
  info.vVelocity.x = v3 * vDirection.x;
  info.fDistance = vptr_IHandleEntity[229](this, &vec3_origin, 0);
  info.fStartRadius = LevelSpecialValue;
  info.fEndRadius = LevelSpecialValue;
  v13 = CDOTABaseAbility::GetCaster(this);
  if ( v13 != 0 && (m_pEntity = v13->m_pEntity) != 0 )
  {
    v15 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v16 = 0x7FFF;
    else
      v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(info.hSource.m_Index) = v16 | info.hSource.m_Index & 0x8000;
    info.hSource.m_Index = (v15 << 15) | info.hSource.m_Index & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  info.iUnitTargetTeam = 2;
  info.iUnitTargetType = 19;
  info.bProvidesVision = 1;
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  info.iVisionRadius = 400;
  info.iVisionTeamNumber = m_Value;
  CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  v18 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v18) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_venomancer/venomancer_venomous_gale_mouth.vpcf",
                   2,
                   v18,
                   0,
                   0);
  v20 = CDOTABaseAbility::GetCaster(this);
  v21 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v21, v18, 0, v20, 5, "attach_mouth", vec3_invalid, 1);
  v22 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v22, v18);
  v23 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v23, "Hero_Venomancer.VenomousGale", 0.0, 0, 0);
}


// CDOTA_Ability_Venomancer_VenomousGale::OnUpgrade  (line 227, @0x0000000002afc7c0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetGameMode, GetInstance, GetTeamNumber, IndexToIdentity, IsAddOnGame, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::OnUpgrade, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::SetActivated, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "holdout_scourge_venomous_gale"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Venomancer_VenomousGale::OnUpgrade(CDOTA_Ability_Venomancer_VenomousGale *const this)
{
  int v2; // eax
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v6; // rax
  __int64 v7; // r12
  int i; // ebx
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi
  CDOTABaseAbility *AbilityByName; // r15
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hScourgeWards; // [rsp+20h] [rbp-50h] BYREF

  CDOTABaseAbility::OnUpgrade(this);
  v2 = *&g_pGameRules[6].m_szQuestName[68];
  if ( v2 == 15 || v2 == 19 )
  {
    hScourgeWards.m_Size = 0;
    hScourgeWards.m_Memory.m_pMemory = 0;
    hScourgeWards.m_Memory.m_nAllocationCount = 0;
    hScourgeWards.m_Memory.m_nGrowSize = 0;
    Caster = CDOTABaseAbility::GetCaster(this);
    v4 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
    v6 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v6->m_iTeamNum.m_Value, AbsOrigin, Caster, -1.0, &hScourgeWards, 1, 32, 0, 0, 0);
    v7 = 0;
    for ( i = 0; hScourgeWards.m_Size > i; ++v7 )
    {
      while ( 1 )
      {
        v9 = &hScourgeWards.m_Memory.m_pMemory[v7];
        m_Index = hScourgeWards.m_Memory.m_pMemory[v7].m_Index;
        if ( m_Index + 2 > 1 )
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
                AbilityByName = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "holdout_scourge_venomous_gale", 0);
                if ( AbilityByName != 0 )
                {
                  (*(AbilityByName->_vptr_IHandleEntity + 212))(AbilityByName, this->m_iLevel.m_Value);
                  if ( this->m_iLevel.m_Value > 1 )
                    break;
                }
              }
            }
          }
        }
        ++i;
        ++v7;
        if ( hScourgeWards.m_Size <= i )
          goto LABEL_15;
      }
      CDOTABaseAbility::SetActivated(AbilityByName, 1);
      ++i;
    }
LABEL_15:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hScourgeWards);
  }
}


// CDOTA_Ability_Venomancer_VenomousGale::OnProjectileHit  (line 259, @0x0000000002b008a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_venomancer_venomous_gale", "Hero_Venomancer.VenomousGaleImpact", "particles/units/heroes/hero_venomancer/venomancer_venomous_gale_impact.vpcf"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Venomancer_VenomousGale::OnProjectileHit(
        CDOTA_Ability_Venomancer_VenomousGale *const this,
        _WORD *hTarget,
        const Vector *const vLocation)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  float v8; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v12; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  if ( (*hTarget + 2) > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[*hTarget & 0x1FF];
      if ( v5 != 0 && *hTarget == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
          KeyValues::KeyValues(&kv, "modifier_venomancer_venomous_gale");
          KeyValues::SetFloat(&kv, "duration", v8);
          Caster = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, this, "modifier_venomancer_venomous_gale", &kv, 0);
          CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Venomancer.VenomousGaleImpact", 0.0, 0, 0);
          ParticleManager = GetParticleManager();
          Particle = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_venomancer/venomancer_venomous_gale_impact.vpcf",
                       1,
                       m_pInstance,
                       0,
                       0);
          v12 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v12, Particle);
          KeyValues::~KeyValues(&kv);
        }
      }
    }
  }
  return 0;
}


// CDOTA_Ability_Venomancer_VenomousGale::GetAbilityDamageToTargetOverInterval  (line 286, @0x0000000002b078e0, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "strike_damage", "tick_damage"
__int64 __fastcall CDOTA_Ability_Venomancer_VenomousGale::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Venomancer_VenomousGale *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r13d
  float fIntervala; // [rsp+0h] [rbp-2Ch]
  float fIntervalb; // [rsp+0h] [rbp-2Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    fIntervala = fminf(fInterval, CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0));
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "strike_damage", -1, 0);
    fIntervalb = LevelSpecialValue
               + (CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "tick_damage", -1, 0) * fIntervala);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalb);
  }
  return result;
}


// CDOTA_Ability_Venomancer_VenomousGale::GetSlowDuration  (line 299, @0x0000000002b03b70, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Venomancer_VenomousGale::GetSlowDuration(
        CDOTA_Ability_Venomancer_VenomousGale *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
}


// CDOTA_Modifier_Venomancer_VenomousGale::~CDOTA_Modifier_Venomancer_VenomousGale  (line 308, @0x0000000002b1b140, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Venomancer_VenomousGale::~CDOTA_Modifier_Venomancer_VenomousGale(
        CDOTA_Modifier_Venomancer_VenomousGale *const this)
{
  this->_vptr_CDOTA_Buff = &off_44437F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Venomancer_VenomousGale::~CDOTA_Modifier_Venomancer_VenomousGale  (line 308, @0x0000000002b1b160, libserver.so)  // inlines: ~CDOTA_Modifier_Venomancer_VenomousGale
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Venomancer_VenomousGale::~CDOTA_Modifier_Venomancer_VenomousGale(
        CDOTA_Modifier_Venomancer_VenomousGale *const this)
{
  this->_vptr_CDOTA_Buff = &off_44437F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Venomancer_VenomousGale::IsDebuff  (line 313, @0x0000000002b14640, libserver.so)
bool __fastcall CDOTA_Modifier_Venomancer_VenomousGale::IsDebuff(CDOTA_Modifier_Venomancer_VenomousGale *const this)
{
  return 1;
}


// CDOTA_Modifier_Venomancer_VenomousGale::IsPurgable  (line 314, @0x0000000002b14650, libserver.so)
bool __fastcall CDOTA_Modifier_Venomancer_VenomousGale::IsPurgable(CDOTA_Modifier_Venomancer_VenomousGale *const this)
{
  return 0;
}


// CDOTA_Modifier_Venomancer_VenomousGale::IsPurgeException  (line 315, @0x0000000002b14660, libserver.so)
bool __fastcall CDOTA_Modifier_Venomancer_VenomousGale::IsPurgeException(
        CDOTA_Modifier_Venomancer_VenomousGale *const this)
{
  return 1;
}


// CDOTA_Modifier_Venomancer_VenomousGale::GetEffectName  (line 320, @0x0000000002b14670, libserver.so)
// strings: "particles/units/heroes/hero_venomancer/venomancer_gale_poison_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Venomancer_VenomousGale::GetEffectName(
        CDOTA_Modifier_Venomancer_VenomousGale *const this)
{
  return "particles/units/heroes/hero_venomancer/venomancer_gale_poison_debuff.vpcf";
}


// CDOTA_Modifier_Venomancer_VenomousGale::OnCreated  (line 340, @0x0000000002b0be60, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage, CDOTA_Buff::StartIntervalThink
// strings: "tick_damage", "strike_damage"
void __fastcall CDOTA_Modifier_Venomancer_VenomousGale::OnCreated(
        CDOTA_Modifier_Venomancer_VenomousGale *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  float LevelSpecialValue; // xmm0_4
  CDOTABaseAbility *v9; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  float v12; // xmm1_4
  float flDamage; // [rsp+Ch] [rbp-24h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->movement_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movement_slow", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->movement_slow = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->tick_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "tick_damage", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_11:
      this->tick_interval = 0.0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_12;
    }
  }
  this->tick_damage = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_11;
LABEL_4:
  this->tick_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "tick_interval", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "duration", -1, 0);
    goto LABEL_6;
  }
LABEL_12:
  this->duration = 0.0;
LABEL_6:
  v7 = CDOTA_Buff::GetAbility(this);
  LevelSpecialValue = 0.0;
  if ( v7 != 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "strike_damage", -1, 0);
  flDamage = LevelSpecialValue;
  v9 = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, v9, flDamage, 2, 0);
  CDOTA_Buff::StartIntervalThink(this, this->tick_interval, v12);
}


// CDOTA_Modifier_Venomancer_VenomousGale::OnIntervalThink  (line 358, @0x0000000002ae90a0, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage, SendOverheadEventMessage
void __fastcall CDOTA_Modifier_Venomancer_VenomousGale::OnIntervalThink(
        CDOTA_Modifier_Venomancer_VenomousGale *const this)
{
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // rax
  float flDamage; // [rsp+Ch] [rbp-24h]

  flDamage = this->tick_damage;
  Ability = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, Ability, flDamage, 2, 0);
  LODWORD(Parent) = this->tick_damage;
  v5 = CDOTA_Buff::GetParent(this);
  SendOverheadEventMessage(0, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BONUS_SPELL_DAMAGE, v5, Parent, 0);
}


// CDOTA_Modifier_Venomancer_VenomousGale::CheckState  (line 368, @0x0000000002aefae0, libserver.so)  // inlines: Enable, GetHealthPercent
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth
void __fastcall CDOTA_Modifier_Venomancer_VenomousGale::CheckState(
        CDOTA_Modifier_Venomancer_VenomousGale *const this,
        CDOTABuffState *const buffState)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v4; // rbx
  __int64 v5; // r13
  int v6; // eax
  __int64 v7; // rcx

  Parent = CDOTA_Buff::GetParent(this);
  v4 = Parent;
  if ( (Parent->m_iUnitType & 1) != 0 && !Parent->m_bIsIllusion.m_Value )
  {
    v5 = 100LL * CBaseEntity::GetHealth(Parent);
    v6 = (*(v4->_vptr_IHandleEntity + 156))(v4);
    v7 = 1;
    if ( v6 > 0 )
      v7 = v6;
    if ( (v5 / v7) <= 24 )
    {
      buffState->m_nEnabledStateMask |= 0x20000uLL;
      buffState->m_nDisabledStateMask &= ~0x20000uLL;
    }
  }
}


// CDOTA_Modifier_Venomancer_VenomousGale::DeclareFunctions  (line 381, @0x0000000002ae7220, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Venomancer_VenomousGale::DeclareFunctions(
        CDOTA_Modifier_Venomancer_VenomousGale *const this)
{
  this->m_Functions[13].__pfn = (&stru_10 + 697);
  this->m_Functions[13].__delta = 0;
  this->m_Functions[151].__pfn = (&stru_10 + 705);
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_Venomancer_VenomousGale::GetModifierMoveSpeedBonus_Percentage  (line 389, @0x0000000002ae7260, libserver.so)  // inlines: DOTAGameRules, GetGameTime
ModifierVariant_t __fastcall CDOTA_Modifier_Venomancer_VenomousGale::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Venomancer_VenomousGale *const this,
        const CModifierParams *const params)
{
  float v3; // xmm0_4
  __m128i v4; // xmm3
  float v5; // xmm2_4
  ModifierVariant_t result; // 0:rax.16

  (*(this->_vptr_CDOTA_Buff + 30))(this, params);
  v5 = 0.0;
  if ( g_pGameRules != 0 )
    v5 = *&g_pGameRules[18].m_szQuestName[20];
  result.m_szVal = 0;
  *v4.m128i_i32 = (this->movement_slow * ((v3 - v5) / this->duration));
  *&result.m_eType = (_mm_cvtsi128_si32(v4) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Venomancer_VenomousGale::Tooltip  (line 397, @0x0000000002ae72d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Venomancer_VenomousGale::Tooltip(
        CDOTA_Modifier_Venomancer_VenomousGale *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->tick_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Venomancer_PoisonSting::~CDOTA_Ability_Venomancer_PoisonSting  (line 408, @0x0000000002b1bd30, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Venomancer_PoisonSting::~CDOTA_Ability_Venomancer_PoisonSting(
        CDOTA_Ability_Venomancer_PoisonSting *const this)
{
  this->_vptr_IHandleEntity = &off_4443B70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Venomancer_PoisonSting::~CDOTA_Ability_Venomancer_PoisonSting  (line 408, @0x0000000002b1bd50, libserver.so)  // inlines: ~CDOTA_Ability_Venomancer_PoisonSting
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Venomancer_PoisonSting::~CDOTA_Ability_Venomancer_PoisonSting(
        CDOTA_Ability_Venomancer_PoisonSting *const this)
{
  this->_vptr_IHandleEntity = &off_4443B70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Venomancer_PoisonSting::Schema_DynamicBinding  (line 410, @0x0000000002b14680, libserver.so)
// globals: CDOTA_Ability_Venomancer_PoisonSting::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Venomancer_PoisonSting::Schema_DynamicBinding(
        const CDOTA_Ability_Venomancer_PoisonSting *const this)
{
  return CDOTA_Ability_Venomancer_PoisonSting::s_pSchemaBinding;
}


// CDOTA_Ability_Venomancer_PoisonSting::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 410, @0x0000000002b14690, libserver.so)
// globals: CDOTA_Ability_Venomancer_PoisonSting::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Venomancer_PoisonSting::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Venomancer_PoisonSting::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Venomancer_PoisonSting::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Venomancer_PoisonSting::CEntityInstanceEntityClass::DestructInstance  (line 410, @0x0000000002b146a0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Venomancer_PoisonSting>
void __fastcall CDOTA_Ability_Venomancer_PoisonSting::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Venomancer_PoisonSting::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Venomancer_PoisonSting::CEntityInstanceEntityClass::FreeInstance  (line 410, @0x0000000002b146c0, libserver.so)
void __fastcall CDOTA_Ability_Venomancer_PoisonSting::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Venomancer_PoisonSting::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Venomancer_PoisonSting::CEntityInstanceEntityClass::CanAllocate  (line 410, @0x0000000002b146e0, libserver.so)
bool __fastcall CDOTA_Ability_Venomancer_PoisonSting::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Venomancer_PoisonSting::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Venomancer_PoisonSting::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 410, @0x0000000002b146f0, libserver.so)
// globals: CDOTA_Ability_Venomancer_PoisonSting::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Venomancer_PoisonSting::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Venomancer_PoisonSting::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Venomancer_PoisonSting::s_pSchemaBinding;
}


// CDOTA_Ability_Venomancer_PoisonSting::CEntityInstanceEntityClass::AllocateInstance  (line 410, @0x0000000002b18a30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Venomancer_PoisonSting::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Venomancer_PoisonSting::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Venomancer_PoisonSting::CEntityInstanceEntityClass::ConstructInstance  (line 410, @0x0000000002b1b430, libserver.so)  // inlines: CDOTA_Ability_Venomancer_PoisonSting, Construct<CDOTA_Ability_Venomancer_PoisonSting>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Venomancer_PoisonSting::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Venomancer_PoisonSting::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4443B70;
  }
  return p;
}


// CDOTA_Ability_Venomancer_PoisonSting::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 410, @0x0000000002b21aa0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Venomancer_PoisonSting::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Venomancer_PoisonSting::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Venomancer_PoisonSting::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 410, @0x0000000002b21ac0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Venomancer_PoisonSting::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Venomancer_PoisonSting::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Venomancer_PoisonSting::GetEntityClassInternal  (line 410, @0x0000000002b27ad0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "venomancer_poison_sting", "CDOTA_Ability_Venomancer_PoisonSting"
// globals: `guard variable for'CDOTA_Ability_Venomancer_PoisonSting::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PoisonStingClass, CDOTA_Ability_Venomancer_PoisonSting::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PoisonStingClass, __dso_handle, CDOTA_Ability_Venomancer_PoisonSting::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Venomancer_PoisonSting::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_PoisonStingClassInfo, CDOTA_Ability_Venomancer_PoisonSting::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_PoisonStingClassInfo
CEntityClass *__cdecl CDOTA_Ability_Venomancer_PoisonSting::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Venomancer_PoisonSting::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PoisonStingClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Venomancer_PoisonSting::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PoisonStingClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Venomancer_PoisonSting::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PoisonStingClass);
    CDOTA_Ability_Venomancer_PoisonSting::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PoisonStingClass._vptr_CEntityClass = off_4443AF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Venomancer_PoisonSting::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PoisonStingClass);
    __cxa_atexit(
      CDOTA_Ability_Venomancer_PoisonSting::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Venomancer_PoisonSting::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PoisonStingClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Venomancer_PoisonStingClass != 0 )
    return &CDOTA_Ability_Venomancer_PoisonSting::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PoisonStingClass;
  if ( `guard variable for'CDOTA_Ability_Venomancer_PoisonSting::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_PoisonStingClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Venomancer_PoisonSting::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_PoisonStingClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Venomancer_PoisonSting::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_PoisonStingClassInfo,
      "CDOTA_Ability_Venomancer_PoisonSting",
      "venomancer_poison_sting",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Venomancer_PoisonSting::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_PoisonStingClassInfo);
  }
  CDOTA_Ability_Venomancer_PoisonSting::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PoisonStingClass.m_pClassInfo = &CDOTA_Ability_Venomancer_PoisonSting::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_PoisonStingClassInfo;
  CDOTA_Ability_Venomancer_PoisonSting::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PoisonStingClass.m_pBaseClassInfo = CDOTA_Ability_Venomancer_PoisonSting::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_PoisonStingClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Venomancer_PoisonStingClass = &CDOTA_Ability_Venomancer_PoisonSting::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PoisonStingClass;
  CDOTA_Ability_Venomancer_PoisonSting::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_PoisonStingClassInfo.m_pClass = &CDOTA_Ability_Venomancer_PoisonSting::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PoisonStingClass;
  CDOTA_Ability_Venomancer_PoisonSting::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PoisonStingClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Venomancer_PoisonStingClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Venomancer_PoisonSting::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PoisonStingClass;
}


// CDOTA_Ability_Venomancer_PoisonSting::GetIntrinsicModifierName  (line 413, @0x0000000002b14700, libserver.so)
// strings: "modifier_venomancer_poison_sting_applier"
const char *__fastcall CDOTA_Ability_Venomancer_PoisonSting::GetIntrinsicModifierName(
        CDOTA_Ability_Venomancer_PoisonSting *const this)
{
  return "modifier_venomancer_poison_sting_applier";
}


// CDOTA_Ability_Venomancer_PoisonSting::IsHiddenWhenStolen  (line 414, @0x0000000002b14710, libserver.so)
bool __fastcall CDOTA_Ability_Venomancer_PoisonSting::IsHiddenWhenStolen(
        CDOTA_Ability_Venomancer_PoisonSting *const this)
{
  return 1;
}


// CDOTA_Ability_Venomancer_PoisonSting::GetAbilityDamageToTargetOverInterval  (line 428, @0x0000000002b079a0, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Venomancer_PoisonSting::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Venomancer_PoisonSting *const this,
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
    fIntervalb = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0) * fIntervala;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalb);
  }
  return result;
}


// CDOTA_Ability_Venomancer_PoisonSting::GetSlowDuration  (line 441, @0x0000000002b03b90, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Venomancer_PoisonSting::GetSlowDuration(
        CDOTA_Ability_Venomancer_PoisonSting *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
}


// CDOTA_Modifier_Venomancer_PoisonSting_Applier::~CDOTA_Modifier_Venomancer_PoisonSting_Applier  (line 450, @0x0000000002b1b0f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Venomancer_PoisonSting_Applier::~CDOTA_Modifier_Venomancer_PoisonSting_Applier(
        CDOTA_Modifier_Venomancer_PoisonSting_Applier *const this)
{
  this->_vptr_CDOTA_Buff = &off_4444630;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Venomancer_PoisonSting_Applier::~CDOTA_Modifier_Venomancer_PoisonSting_Applier  (line 450, @0x0000000002b1b110, libserver.so)  // inlines: ~CDOTA_Modifier_Venomancer_PoisonSting_Applier
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Venomancer_PoisonSting_Applier::~CDOTA_Modifier_Venomancer_PoisonSting_Applier(
        CDOTA_Modifier_Venomancer_PoisonSting_Applier *const this)
{
  this->_vptr_CDOTA_Buff = &off_4444630;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Venomancer_PoisonSting_Applier::IsHidden  (line 455, @0x0000000002b14720, libserver.so)
bool __fastcall CDOTA_Modifier_Venomancer_PoisonSting_Applier::IsHidden(
        CDOTA_Modifier_Venomancer_PoisonSting_Applier *const this)
{
  return 1;
}


// CDOTA_Modifier_Venomancer_PoisonSting_Applier::OnCreated  (line 473, @0x0000000002b0a1a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Venomancer_PoisonSting_Applier::OnCreated(
        CDOTA_Modifier_Venomancer_PoisonSting_Applier *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "duration", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "damage", -1, 0);
      return;
    }
  }
  else
  {
    this->duration = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->damage = 0;
}


// CDOTA_Modifier_Venomancer_PoisonSting_Applier::OnRefresh  (line 481, @0x0000000002b0a110, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Venomancer_PoisonSting_Applier::OnRefresh(
        CDOTA_Modifier_Venomancer_PoisonSting_Applier *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "duration", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "damage", -1, 0);
      return;
    }
  }
  else
  {
    this->duration = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->damage = 0;
}


// CDOTA_Modifier_Venomancer_PoisonSting_Applier::DeclareFunctions  (line 489, @0x0000000002ae72f0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Venomancer_PoisonSting_Applier::DeclareFunctions(
        CDOTA_Modifier_Venomancer_PoisonSting_Applier *const this)
{
  this->m_Functions[137].__pfn = (&stru_10 + 697);
  this->m_Functions[137].__delta = 0;
}


// CDOTA_Modifier_Venomancer_PoisonSting_Applier::OnAttacked  (line 496, @0x0000000002af2f80, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetCaster, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_venomancer_poison_sting", "damage_done", "modifier_venomancer_poison_sting_ward"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Venomancer_PoisonSting_Applier::OnAttacked(
        CDOTA_Modifier_Venomancer_PoisonSting_Applier *const this,
        const CModifierParams *const params)
{
  EHANDLE *p_hattacker; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *Parent; // rax
  __int64 v9; // rax
  uint32 v10; // edx
  __int64 v11; // r14
  CEntityIdentity *v12; // rax
  CEntityIdentity *v13; // rax
  CEntityInstance *v14; // rdi
  CEntityInstance *v16; // rax
  CEntityInstance *v17; // rax
  CEntityInstance *v18; // r14
  CEntityInstance *v19; // rax
  int m_Id; // edx
  float v21; // xmm1_4
  CEntityInstance *v22; // rax
  float v23; // xmm1_4
  float v24; // xmm1_4
  CEntityInstance *v25; // rax
  CDOTABaseAbility *v26; // rbx
  CDOTA_BaseNPC *v27; // rax
  CDOTABaseAbility *Ability; // rbx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *m_pInstance; // r14
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v32; // [rsp+28h] [rbp-38h]

  p_hattacker = &params->hattacker;
  v32 = __readfsqword(0x28u);
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[params->hattacker.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
      {
        m_pInstance = v7->m_pInstance;
        if ( v7->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
          goto LABEL_28;
      }
    }
  }
  Parent = CDOTA_Buff::GetParent(this);
  v9 = (*(Parent->_vptr_IHandleEntity + 413))(Parent);
  v10 = params->hattacker.m_Index;
  v11 = v9;
  if ( v10 + 2 <= 1
    || (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v13 = &v12[params->hattacker.m_Index & 0x1FF]) == 0
    || v10 != v13->m_EHandle.m_Index
    || (v14 = v13->m_pInstance, v13->m_pInstance == 0)
    || BYTE3(v14[7]._vptr_IHandleEntity) == 0 )
  {
    v14 = 0;
  }
  if ( v11 == (*(v14->_vptr_IHandleEntity + 413))(v14) )
  {
    v16 = CEntityHandle::operator CEntityInstance *(p_hattacker);
    if ( v16 == 0 || BYTE3(v16[7]._vptr_IHandleEntity) == 0 )
      v16 = 0;
    if ( (v16[43].m_iszPrivateVScripts.u.m_Id & 0x193) == 0 )
    {
LABEL_28:
      if ( (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
      {
        v17 = CEntityHandle::operator CEntityInstance *(&params->htarget);
        if ( v17 != 0 && BYTE3(v17[7]._vptr_IHandleEntity) != 0 )
          v18 = v17;
        else
          v18 = 0;
        v19 = CEntityHandle::operator CEntityInstance *(p_hattacker);
        if ( v19 != 0
          && BYTE3(v19[7]._vptr_IHandleEntity) != 0
          && v18 != 0
          && LOBYTE(v18[71]._vptr_IHandleEntity) == 0
          && (BYTE1(v18[58]._vptr_IHandleEntity) & 1) == 0 )
        {
          m_Id = v18[43].m_iszPrivateVScripts.u.m_Id;
          if ( (m_Id & 0x10) == 0
            && HIBYTE(v18[7].m_CScriptComponent) != HIBYTE(v19[7].m_CScriptComponent)
            && (m_Id & 0x193) != 0 )
          {
            KeyValues::KeyValues(&kv, "modifier_venomancer_poison_sting");
            KeyValues::SetFloat(&kv, "duration", v21);
            v22 = CEntityHandle::operator CEntityInstance *(p_hattacker);
            if ( v22 != 0 && BYTE3(v22[7]._vptr_IHandleEntity) != 0 )
              CDOTA_Buff::GetParent(this);
            KeyValues::SetFloat(&kv, "damage", v23);
            KeyValues::SetFloat(&kv, "damage_done", v24);
            v25 = CEntityHandle::operator CEntityInstance *(p_hattacker);
            if ( v25 == 0 || BYTE3(v25[7]._vptr_IHandleEntity) == 0 )
              v25 = 0;
            if ( (v25[43].m_iszPrivateVScripts.u.m_Id & 0x193) != 0 )
            {
              Ability = CDOTA_Buff::GetAbility(this);
              Caster = CDOTA_Buff::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(v18, Caster, Ability, "modifier_venomancer_poison_sting", &kv, 0);
            }
            else
            {
              v26 = CDOTA_Buff::GetAbility(this);
              v27 = CDOTA_Buff::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(v18, v27, v26, "modifier_venomancer_poison_sting_ward", &kv, 0);
            }
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Venomancer_PoisonStingBase::~CDOTA_Modifier_Venomancer_PoisonStingBase  (line 530, @0x0000000002b1b050, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Venomancer_PoisonStingBase::~CDOTA_Modifier_Venomancer_PoisonStingBase(
        CDOTA_Modifier_Venomancer_PoisonStingBase *const this)
{
  this->_vptr_CDOTA_Buff = &off_4444C50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Venomancer_PoisonStingBase::~CDOTA_Modifier_Venomancer_PoisonStingBase  (line 530, @0x0000000002b1b070, libserver.so)  // inlines: ~CDOTA_Modifier_Venomancer_PoisonStingBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Venomancer_PoisonStingBase::~CDOTA_Modifier_Venomancer_PoisonStingBase(
        CDOTA_Modifier_Venomancer_PoisonStingBase *const this)
{
  this->_vptr_CDOTA_Buff = &off_4444C50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Venomancer_PoisonStingBase::IsDebuff  (line 535, @0x0000000002b14730, libserver.so)
bool __fastcall CDOTA_Modifier_Venomancer_PoisonStingBase::IsDebuff(
        CDOTA_Modifier_Venomancer_PoisonStingBase *const this)
{
  return 1;
}


// CDOTA_Modifier_Venomancer_PoisonStingBase::IsPurgable  (line 536, @0x0000000002b14740, libserver.so)
bool __fastcall CDOTA_Modifier_Venomancer_PoisonStingBase::IsPurgable(
        CDOTA_Modifier_Venomancer_PoisonStingBase *const this)
{
  return 0;
}


// CDOTA_Modifier_Venomancer_PoisonStingBase::GetEffectName  (line 541, @0x0000000002b14750, libserver.so)
// strings: "particles/units/heroes/hero_venomancer/venomancer_poison_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Venomancer_PoisonStingBase::GetEffectName(
        CDOTA_Modifier_Venomancer_PoisonStingBase *const this)
{
  return "particles/units/heroes/hero_venomancer/venomancer_poison_debuff.vpcf";
}


// CDOTA_Modifier_Venomancer_PoisonSting::~CDOTA_Modifier_Venomancer_PoisonSting  (line 560, @0x0000000002b1b0a0, libserver.so)  // inlines: ~CDOTA_Modifier_Venomancer_PoisonStingBase
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Venomancer_PoisonSting::~CDOTA_Modifier_Venomancer_PoisonSting(
        CDOTA_Modifier_Venomancer_PoisonSting *const this)
{
  this->_vptr_CDOTA_Buff = &off_4444C50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Venomancer_PoisonSting::~CDOTA_Modifier_Venomancer_PoisonSting  (line 560, @0x0000000002b1b0c0, libserver.so)  // inlines: ~CDOTA_Modifier_Venomancer_PoisonSting, ~CDOTA_Modifier_Venomancer_PoisonStingBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Venomancer_PoisonSting::~CDOTA_Modifier_Venomancer_PoisonSting(
        CDOTA_Modifier_Venomancer_PoisonSting *const this)
{
  this->_vptr_CDOTA_Buff = &off_4444C50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Venomancer_PoisonStingBase::OnCreated  (line 570, @0x0000000002b0b090, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::GetFloat, CDOTA_Buff::StartIntervalThink
// strings: "damage_done"
void __fastcall CDOTA_Modifier_Venomancer_PoisonStingBase::OnCreated(
        CDOTA_Modifier_Venomancer_PoisonStingBase *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movement_speed", -1, 0);
  else
    this->movement_speed = 0;
  this->m_flAttackDamage = KeyValues::GetFloat(pKV, "damage_done", v5);
  this->m_iDamage = KeyValues::GetFloat(pKV, "damage", v6);
  this->m_nTicksRemaining = (*(this->_vptr_CDOTA_Buff + 31))(this);
  CDOTA_Buff::StartIntervalThink(this, 1.0, v7);
  (*(this->_vptr_CDOTA_Buff + 56))(this);
}


// CDOTA_Modifier_Venomancer_PoisonStingBase::OnRefresh  (line 585, @0x0000000002b0a400, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: KeyValues::GetFloat, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "damage_done"
void __fastcall CDOTA_Modifier_Venomancer_PoisonStingBase::OnRefresh(
        CDOTA_Modifier_Venomancer_PoisonStingBase *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4
  float v5; // xmm1_4
  CDOTABaseAbility *Ability; // rax

  this->m_flAttackDamage = KeyValues::GetFloat(pKV, "damage_done", v2);
  this->m_iDamage = KeyValues::GetFloat(pKV, "damage", v5);
  this->m_nTicksRemaining = (*(this->_vptr_CDOTA_Buff + 31))(this);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movement_speed", -1, 0);
  else
    this->movement_speed = 0;
}


// CDOTA_Modifier_Venomancer_PoisonStingBase::OnIntervalThink  (line 597, @0x0000000002aec2e0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, ApplyDamage, CBaseEntity::GetHealth, SendOverheadEventMessage
void __fastcall CDOTA_Modifier_Venomancer_PoisonStingBase::OnIntervalThink(
        CDOTA_Modifier_Venomancer_PoisonStingBase *const this)
{
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // rax
  int m_iDamage; // r12d
  CDOTA_BaseNPC *v7; // rax
  float flDamage; // [rsp+Ch] [rbp-24h]
  float flDamagea; // [rsp+Ch] [rbp-24h]

  if ( this->m_nTicksRemaining > 0 )
  {
    if ( CDOTA_Buff::GetCaster(this) != 0 )
    {
      flDamage = this->m_iDamage;
      Ability = CDOTA_Buff::GetAbility(this);
      Parent = CDOTA_Buff::GetParent(this);
      Caster = CDOTA_Buff::GetCaster(this);
      ApplyDamage(Caster, Parent, Ability, flDamage, 2, 32);
    }
    flDamagea = this->m_flAttackDamage;
    v5 = CDOTA_Buff::GetParent(this);
    if ( CBaseEntity::GetHealth(v5) > flDamagea )
    {
      m_iDamage = this->m_iDamage;
      this->m_flAttackDamage = 0.0;
      v7 = CDOTA_Buff::GetParent(this);
      SendOverheadEventMessage(0, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BONUS_SPELL_DAMAGE, v7, m_iDamage, 0);
    }
    --this->m_nTicksRemaining;
  }
}


// CDOTA_Modifier_Venomancer_PoisonStingBase::DeclareFunctions  (line 619, @0x0000000002ae7310, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Venomancer_PoisonStingBase::DeclareFunctions(
        CDOTA_Modifier_Venomancer_PoisonStingBase *const this)
{
  this->m_Functions[13].__pfn = (&stru_10 + 697);
  this->m_Functions[13].__delta = 0;
  this->m_Functions[151].__pfn = (&stru_10 + 705);
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_Venomancer_PoisonStingBase::GetModifierMoveSpeedBonus_Percentage  (line 627, @0x0000000002ae7350, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Venomancer_PoisonStingBase::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Venomancer_PoisonStingBase *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Venomancer_PoisonStingBase::Tooltip  (line 634, @0x0000000002ae7370, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Venomancer_PoisonStingBase::Tooltip(
        CDOTA_Modifier_Venomancer_PoisonStingBase *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->m_iDamage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Venomancer_PoisonStingBase::AddCustomTransmiterData  (line 642, @0x0000000002ae9400, libserver.so)  // inlines: set_damage, set_has_damage
// calls: CDOTA_Buff::AddCustomTransmiterData
void __fastcall CDOTA_Modifier_Venomancer_PoisonStingBase::AddCustomTransmiterData(
        CDOTA_Modifier_Venomancer_PoisonStingBase *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  int m_iDamage; // eax

  m_iDamage = this->m_iDamage;
  *(entry + 4) |= 0x1000000u;
  *(entry + 35) = m_iDamage;
  CDOTA_Buff::AddCustomTransmiterData(this, entry);
}


// CDOTA_Modifier_Venomancer_PoisonStingWard::~CDOTA_Modifier_Venomancer_PoisonStingWard  (line 660, @0x0000000002b1b000, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Venomancer_PoisonStingWard::~CDOTA_Modifier_Venomancer_PoisonStingWard(
        CDOTA_Modifier_Venomancer_PoisonStingWard *const this)
{
  this->_vptr_CDOTA_Buff = &off_4444F90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Venomancer_PoisonStingWard::~CDOTA_Modifier_Venomancer_PoisonStingWard  (line 660, @0x0000000002b1b020, libserver.so)  // inlines: ~CDOTA_Modifier_Venomancer_PoisonStingWard
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Venomancer_PoisonStingWard::~CDOTA_Modifier_Venomancer_PoisonStingWard(
        CDOTA_Modifier_Venomancer_PoisonStingWard *const this)
{
  this->_vptr_CDOTA_Buff = &off_4444F90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Venomancer_PoisonStingWard::IsDebuff  (line 664, @0x0000000002b14760, libserver.so)
bool __fastcall CDOTA_Modifier_Venomancer_PoisonStingWard::IsDebuff(
        CDOTA_Modifier_Venomancer_PoisonStingWard *const this)
{
  return 1;
}


// CDOTA_Modifier_Venomancer_PoisonStingWard::IsPurgable  (line 665, @0x0000000002b14770, libserver.so)
bool __fastcall CDOTA_Modifier_Venomancer_PoisonStingWard::IsPurgable(
        CDOTA_Modifier_Venomancer_PoisonStingWard *const this)
{
  return 0;
}


// CDOTA_Modifier_Venomancer_PoisonStingWard::GetEffectName  (line 670, @0x0000000002b14780, libserver.so)
// strings: "particles/units/heroes/hero_venomancer/venomancer_poison_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Venomancer_PoisonStingWard::GetEffectName(
        CDOTA_Modifier_Venomancer_PoisonStingWard *const this)
{
  return "particles/units/heroes/hero_venomancer/venomancer_poison_debuff.vpcf";
}


// CDOTA_Modifier_Venomancer_PoisonStingWard::OnCreated  (line 695, @0x0000000002b0afd0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::GetFloat, CDOTA_Buff::StartIntervalThink
// strings: "damage_done"
void __fastcall CDOTA_Modifier_Venomancer_PoisonStingWard::OnCreated(
        CDOTA_Modifier_Venomancer_PoisonStingWard *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movement_speed", -1, 0);
  else
    this->movement_speed = 0;
  this->m_flAttackDamage = KeyValues::GetFloat(pKV, "damage_done", v5);
  this->m_iDamage = KeyValues::GetFloat(pKV, "damage", v6);
  this->m_nTicksRemaining = (*(this->_vptr_CDOTA_Buff + 31))(this);
  CDOTA_Buff::StartIntervalThink(this, 1.0, v7);
  (*(this->_vptr_CDOTA_Buff + 56))(this);
}


// CDOTA_Modifier_Venomancer_PoisonStingWard::OnRefresh  (line 710, @0x0000000002b0a4a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: KeyValues::GetFloat, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "damage_done"
void __fastcall CDOTA_Modifier_Venomancer_PoisonStingWard::OnRefresh(
        CDOTA_Modifier_Venomancer_PoisonStingWard *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4
  float v5; // xmm1_4
  CDOTABaseAbility *Ability; // rax

  this->m_flAttackDamage = KeyValues::GetFloat(pKV, "damage_done", v2);
  this->m_iDamage = KeyValues::GetFloat(pKV, "damage", v5);
  this->m_nTicksRemaining = (*(this->_vptr_CDOTA_Buff + 31))(this);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movement_speed", -1, 0);
  else
    this->movement_speed = 0;
}


// CDOTA_Modifier_Venomancer_PoisonStingWard::OnIntervalThink  (line 722, @0x0000000002ae9460, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::GetCaster, CBaseEntity::GetHealth, CDOTA_Buff::GetAbility, ApplyDamage, SendOverheadEventMessage
// strings: "modifier_venomancer_poison_sting"
void __fastcall CDOTA_Modifier_Venomancer_PoisonStingWard::OnIntervalThink(
        CDOTA_Modifier_Venomancer_PoisonStingWard *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *v5; // r12
  CDOTA_BaseNPC *Caster; // rax
  int m_iDamage; // r12d
  CDOTA_BaseNPC *v8; // rax
  float flDamagea; // [rsp+Ch] [rbp-24h]
  float flDamage; // [rsp+Ch] [rbp-24h]

  Parent = CDOTA_Buff::GetParent(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_venomancer_poison_sting", 0) == 0
    && this->m_nTicksRemaining > 0 )
  {
    if ( CDOTA_Buff::GetCaster(this) != 0 && !CDOTA_Buff::GetCaster(this)->m_bIsIllusion.m_Value )
    {
      flDamage = this->m_iDamage;
      Ability = CDOTA_Buff::GetAbility(this);
      v5 = CDOTA_Buff::GetParent(this);
      Caster = CDOTA_Buff::GetCaster(this);
      ApplyDamage(Caster, v5, Ability, flDamage, 2, 32);
    }
    flDamagea = this->m_flAttackDamage;
    v3 = CDOTA_Buff::GetParent(this);
    if ( CBaseEntity::GetHealth(v3) > flDamagea )
    {
      m_iDamage = this->m_iDamage;
      this->m_flAttackDamage = 0.0;
      v8 = CDOTA_Buff::GetParent(this);
      SendOverheadEventMessage(0, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BONUS_SPELL_DAMAGE, v8, m_iDamage, 0);
    }
    --this->m_nTicksRemaining;
  }
}


// CDOTA_Modifier_Venomancer_PoisonStingWard::DeclareFunctions  (line 747, @0x0000000002ae7390, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Venomancer_PoisonStingWard::DeclareFunctions(
        CDOTA_Modifier_Venomancer_PoisonStingWard *const this)
{
  this->m_Functions[13].__pfn = (&stru_10 + 697);
  this->m_Functions[13].__delta = 0;
  this->m_Functions[151].__pfn = (&stru_10 + 705);
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_Venomancer_PoisonStingWard::GetModifierMoveSpeedBonus_Percentage  (line 755, @0x0000000002aec7f0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_venomancer_poison_sting"
ModifierVariant_t __fastcall CDOTA_Modifier_Venomancer_PoisonStingWard::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Venomancer_PoisonStingWard *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Caster; // rax
  unsigned __int64 v4; // rdx
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_Buff *ModifierByName; // rax
  __m128i v8; // xmm0

  if ( CDOTA_Buff::GetCaster(this) == 0
    || (Caster = CDOTA_Buff::GetCaster(this), v4 = 1, !Caster->m_bIsIllusion.m_Value) )
  {
    Parent = CDOTA_Buff::GetParent(this);
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_venomancer_poison_sting", 0);
    v4 = 1;
    if ( ModifierByName == 0 )
    {
      *v8.m128i_i32 = this->movement_speed;
      return ((_mm_cvtsi128_si32(v8) << 32) | 1);
    }
  }
  return v4;
}


// CDOTA_Modifier_Venomancer_PoisonStingWard::Tooltip  (line 772, @0x0000000002ae73d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Venomancer_PoisonStingWard::Tooltip(
        CDOTA_Modifier_Venomancer_PoisonStingWard *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->m_iDamage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Venomancer_PoisonStingWard::AddCustomTransmiterData  (line 781, @0x0000000002ae9420, libserver.so)  // inlines: set_damage, set_has_damage
// calls: CDOTA_Buff::AddCustomTransmiterData
void __fastcall CDOTA_Modifier_Venomancer_PoisonStingWard::AddCustomTransmiterData(
        CDOTA_Modifier_Venomancer_PoisonStingWard *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  int m_iDamage; // eax

  m_iDamage = this->m_iDamage;
  *(entry + 4) |= 0x1000000u;
  *(entry + 35) = m_iDamage;
  CDOTA_Buff::AddCustomTransmiterData(this, entry);
}


// CDOTA_Ability_Venomancer_PlagueWard::~CDOTA_Ability_Venomancer_PlagueWard  (line 803, @0x0000000002b1bd80, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Venomancer_PlagueWard::~CDOTA_Ability_Venomancer_PlagueWard(
        CDOTA_Ability_Venomancer_PlagueWard *const this)
{
  this->_vptr_IHandleEntity = &off_4445310;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Venomancer_PlagueWard::~CDOTA_Ability_Venomancer_PlagueWard  (line 803, @0x0000000002b1bda0, libserver.so)  // inlines: ~CDOTA_Ability_Venomancer_PlagueWard
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Venomancer_PlagueWard::~CDOTA_Ability_Venomancer_PlagueWard(
        CDOTA_Ability_Venomancer_PlagueWard *const this)
{
  this->_vptr_IHandleEntity = &off_4445310;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Venomancer_PlagueWard::Schema_DynamicBinding  (line 805, @0x0000000002b14790, libserver.so)
// globals: CDOTA_Ability_Venomancer_PlagueWard::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Venomancer_PlagueWard::Schema_DynamicBinding(
        const CDOTA_Ability_Venomancer_PlagueWard *const this)
{
  return CDOTA_Ability_Venomancer_PlagueWard::s_pSchemaBinding;
}


// CDOTA_Ability_Venomancer_PlagueWard::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 805, @0x0000000002b147a0, libserver.so)
// globals: CDOTA_Ability_Venomancer_PlagueWard::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Venomancer_PlagueWard::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Venomancer_PlagueWard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Venomancer_PlagueWard::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Venomancer_PlagueWard::CEntityInstanceEntityClass::DestructInstance  (line 805, @0x0000000002b147b0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Venomancer_PlagueWard>
void __fastcall CDOTA_Ability_Venomancer_PlagueWard::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Venomancer_PlagueWard::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Venomancer_PlagueWard::CEntityInstanceEntityClass::FreeInstance  (line 805, @0x0000000002b147d0, libserver.so)
void __fastcall CDOTA_Ability_Venomancer_PlagueWard::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Venomancer_PlagueWard::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Venomancer_PlagueWard::CEntityInstanceEntityClass::CanAllocate  (line 805, @0x0000000002b147f0, libserver.so)
bool __fastcall CDOTA_Ability_Venomancer_PlagueWard::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Venomancer_PlagueWard::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Venomancer_PlagueWard::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 805, @0x0000000002b14800, libserver.so)
// globals: CDOTA_Ability_Venomancer_PlagueWard::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Venomancer_PlagueWard::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Venomancer_PlagueWard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Venomancer_PlagueWard::s_pSchemaBinding;
}


// CDOTA_Ability_Venomancer_PlagueWard::CEntityInstanceEntityClass::AllocateInstance  (line 805, @0x0000000002b18a70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Venomancer_PlagueWard::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Venomancer_PlagueWard::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Venomancer_PlagueWard::CEntityInstanceEntityClass::ConstructInstance  (line 805, @0x0000000002b1b460, libserver.so)  // inlines: CDOTA_Ability_Venomancer_PlagueWard, Construct<CDOTA_Ability_Venomancer_PlagueWard>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Venomancer_PlagueWard::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Venomancer_PlagueWard::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4445310;
  }
  return p;
}


// CDOTA_Ability_Venomancer_PlagueWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 805, @0x0000000002b21af0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Venomancer_PlagueWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Venomancer_PlagueWard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Venomancer_PlagueWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 805, @0x0000000002b21b10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Venomancer_PlagueWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Venomancer_PlagueWard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Venomancer_PlagueWard::GetEntityClassInternal  (line 805, @0x0000000002b27c20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "venomancer_plague_ward", "CDOTA_Ability_Venomancer_PlagueWard"
// globals: `guard variable for'CDOTA_Ability_Venomancer_PlagueWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PlagueWardClass, CDOTA_Ability_Venomancer_PlagueWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PlagueWardClass, __dso_handle, CDOTA_Ability_Venomancer_PlagueWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Venomancer_PlagueWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_PlagueWardClassInfo, CDOTA_Ability_Venomancer_PlagueWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_PlagueWardClassInfo
CEntityClass *__cdecl CDOTA_Ability_Venomancer_PlagueWard::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Venomancer_PlagueWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PlagueWardClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Venomancer_PlagueWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PlagueWardClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Venomancer_PlagueWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PlagueWardClass);
    CDOTA_Ability_Venomancer_PlagueWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PlagueWardClass._vptr_CEntityClass = off_4445290;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Venomancer_PlagueWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PlagueWardClass);
    __cxa_atexit(
      CDOTA_Ability_Venomancer_PlagueWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Venomancer_PlagueWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PlagueWardClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Venomancer_PlagueWardClass != 0 )
    return &CDOTA_Ability_Venomancer_PlagueWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PlagueWardClass;
  if ( `guard variable for'CDOTA_Ability_Venomancer_PlagueWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_PlagueWardClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Venomancer_PlagueWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_PlagueWardClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Venomancer_PlagueWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_PlagueWardClassInfo,
      "CDOTA_Ability_Venomancer_PlagueWard",
      "venomancer_plague_ward",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Venomancer_PlagueWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_PlagueWardClassInfo);
  }
  CDOTA_Ability_Venomancer_PlagueWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PlagueWardClass.m_pClassInfo = &CDOTA_Ability_Venomancer_PlagueWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_PlagueWardClassInfo;
  CDOTA_Ability_Venomancer_PlagueWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PlagueWardClass.m_pBaseClassInfo = CDOTA_Ability_Venomancer_PlagueWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_PlagueWardClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Venomancer_PlagueWardClass = &CDOTA_Ability_Venomancer_PlagueWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PlagueWardClass;
  CDOTA_Ability_Venomancer_PlagueWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_PlagueWardClassInfo.m_pClass = &CDOTA_Ability_Venomancer_PlagueWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PlagueWardClass;
  CDOTA_Ability_Venomancer_PlagueWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PlagueWardClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Venomancer_PlagueWardClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Venomancer_PlagueWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PlagueWardClass;
}


// CDOTA_Ability_Venomancer_PlagueWard::GetStolenActivityModifier  (line 813, @0x0000000002b14810, libserver.so)
const char *__fastcall CDOTA_Ability_Venomancer_PlagueWard::GetStolenActivityModifier(
        CDOTA_Ability_Venomancer_PlagueWard *const this)
{
  return "plague_ward";
}


// CDOTA_Ability_Venomancer_PlagueWard::GetAssociatedSecondaryAbilities  (line 814, @0x0000000002b14820, libserver.so)
// strings: "venomancer_poison_sting"
const char *__fastcall CDOTA_Ability_Venomancer_PlagueWard::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Venomancer_PlagueWard *const this)
{
  return "venomancer_poison_sting";
}


// CDOTA_Ability_Venomancer_PlagueWard::YouForgotToImplementOrDeclareServerClass  (line 817, @0x0000000002ae73f0, libserver.so)
int __fastcall CDOTA_Ability_Venomancer_PlagueWard::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Venomancer_PlagueWard *const this)
{
  return 0;
}


// CDOTA_Ability_Venomancer_PlagueWard::GetServerClass  (line 817, @0x0000000002af2930, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Venomancer_PlagueWard::GetServerClass(
        CDOTA_Ability_Venomancer_PlagueWard *const this)
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


// CDOTA_Ability_Venomancer_PlagueWard::CreateWard  (line 826, @0x0000000002b02150, libserver.so)  // inlines: Element, GetItemInLoadoutForHeroBySlotTypeAndPlayerID, GetLevelSpecialValueFor<float>, GetStyle, GetTeamNumber, IsValidIndex, VectorNormalize2D, VectorSubtract, operator-, operator[]
// calls: CDOTABaseAbility::GetCaster, CFmtStrN<256, false>::CFmtStrN, DOTA_CreateUnitByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::FindAbilityByName, DOTAGameManager, CDOTAGameManager::GetHeroIDByName, DOTAInventoryManager, CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType (29 total)
// callers: CDOTA_Ability_Venomancer_PlagueWard::OnSpellStart
// strings: "npc_dota_venomancer_plague_ward_%d", "modifier_venomancer_plague_ward", "modifier_kill", "modifier_magic_immune", "special_bonus_unique_venomancer", "modifier_plague_wards_bonus" (11 total)
void __fastcall CDOTA_Ability_Venomancer_PlagueWard::CreateWard(
        CDOTA_Ability_Venomancer_PlagueWard *const this,
        const Vector *const vLocation,
        bool bPlaySound)
{
  int m_Value; // r15d
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *UnitByName; // r12
  float v8; // xmm1_4
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  int v15; // r15d
  CDOTAGameManager *v16; // rax
  CDOTAInventoryManager *v17; // rax
  CEconItemView *ItemInLoadoutForHeroBySlotType; // rax
  const CEconItemView *v19; // r15
  CUtlVector<CEconStyleInfo*,CUtlMemory<CEconStyleInfo*,int> > *m_pStyles; // rax
  CDOTA_BaseNPC *v21; // rax
  const Vector *AbsOrigin; // rax
  vec_t v23; // xmm0_4
  vec_t v24; // xmm1_4
  CDOTA_BaseNPC *v25; // rax
  int v26; // eax
  CDOTA_BaseNPC *v27; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r15d
  CDOTA_ParticleManager *v30; // rax
  CDOTA_BaseNPC *v31; // rbx
  CDOTA_ParticleManager *v32; // rax
  CDOTA_ParticleManager *v33; // rax
  CEconStyleInfo *v34; // rax
  CDOTA_BaseNPC *durationa; // [rsp+18h] [rbp-188h]
  int durationb; // [rsp+18h] [rbp-188h]
  unsigned __int8 duration; // [rsp+18h] [rbp-188h]
  CDOTA_BaseNPC *durationc; // [rsp+18h] [rbp-188h]
  int pPlayerID; // [rsp+2Ch] [rbp-174h] BYREF
  Vector vDirection; // [rsp+30h] [rbp-170h] BYREF
  QAngle vAngles; // [rsp+40h] [rbp-160h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-150h] BYREF
  unsigned __int64 v44; // [rsp+168h] [rbp-38h]

  v44 = __readfsqword(0x28u);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  Caster = CDOTABaseAbility::GetCaster(this);
  durationa = CDOTABaseAbility::GetCaster(this);
  CFmtStrN<256,false>::CFmtStrN(&kv, "npc_dota_venomancer_plague_ward_%d", this->m_iLevel.m_Value);
  UnitByName = DOTA_CreateUnitByName(&kv.CKeyValues_Data + 9, vLocation, 1, durationa, Caster, m_Value);
  if ( UnitByName != 0 )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_venomancer_plague_ward");
    KeyValues::SetFloat(&kv, "duration", v8);
    v9 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(UnitByName, v9, this, "modifier_kill", &kv, 0);
    v10 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(UnitByName, v10, this, "modifier_magic_immune", &kv, 0);
    v11 = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v11, "special_bonus_unique_venomancer", 0);
    if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    {
      v13 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(UnitByName, v13, this, "modifier_plague_wards_bonus", &kv, 0);
    }
    v14 = CDOTABaseAbility::GetCaster(this);
    v15 = (*(v14->_vptr_IHandleEntity + 414))(v14);
    v16 = DOTAGameManager();
    durationb = CDOTAGameManager::GetHeroIDByName(v16, "npc_dota_hero_venomancer");
    v17 = DOTAInventoryManager();
    pPlayerID = v15;
    ItemInLoadoutForHeroBySlotType = CDOTAInventoryManager::GetItemInLoadoutForHeroBySlotType(
                                       v17,
                                       durationb,
                                       24,
                                       &pPlayerID);
    v19 = ItemInLoadoutForHeroBySlotType;
    if ( ItemInLoadoutForHeroBySlotType != 0 && CEconItemView::GetAssetInfo(ItemInLoadoutForHeroBySlotType) != 0 )
    {
      duration = (*(v19->_vptr_IEconItemInterface + 16))(v19);
      m_pStyles = CEconItemView::GetAssetInfo(v19)->m_pStyles;
      if ( m_pStyles != 0 && duration < m_pStyles->m_Size )
      {
        v34 = m_pStyles->m_Memory.m_pMemory[duration];
        if ( v34 != 0 )
          CBaseAnimating::SetSkin(UnitByName, v34->m_iSkin);
      }
    }
    v21 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v21);
    v23 = vLocation->y - AbsOrigin->y;
    v24 = vLocation->x - AbsOrigin->x;
    vDirection.z = 0.0;
    vDirection.y = v23;
    vDirection.x = v24;
    VectorNormalize(&vDirection);
    VectorAngles(&vDirection, &vAngles);
    CBaseEntity::SetAbsAngles(UnitByName, &vAngles);
    v25 = CDOTABaseAbility::GetCaster(this);
    v26 = (*(v25->_vptr_IHandleEntity + 414))(v25);
    CDOTA_BaseNPC::SetControllableByPlayer(UnitByName, v26, 0);
    if ( bPlaySound )
      CDOTA_BaseNPC::UnitEmitSound(UnitByName, "Hero_Venomancer.Plague_Ward", 0.0, 0, 0);
    FindClearSpaceForUnit(UnitByName, *vLocation, 1);
    v27 = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_venomancer/venomancer_ward_cast.vpcf",
                 2,
                 v27,
                 0,
                 0);
    durationc = CDOTABaseAbility::GetCaster(this);
    v30 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v30, Particle, 0, durationc, 5, "attach_attack1", vec3_invalid, 1);
    v31 = CDOTABaseAbility::GetCaster(this);
    v32 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v32, Particle, 1, v31, 5, "attach_attack2", vec3_invalid, 1);
    v33 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v33, Particle);
    CBaseEntity::PhysicsTouchTriggers(UnitByName, 0);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Venomancer_PlagueWard::OnSpellStart  (line 883, @0x0000000002b02590, libserver.so)
// calls: CDOTABaseAbility::GetCursorPosition, CDOTA_Ability_Venomancer_PlagueWard::CreateWard
void __fastcall CDOTA_Ability_Venomancer_PlagueWard::OnSpellStart(CDOTA_Ability_Venomancer_PlagueWard *const this)
{
  Vector vLocation; // [rsp+0h] [rbp-20h] BYREF

  vLocation = CDOTABaseAbility::GetCursorPosition(this);
  CDOTA_Ability_Venomancer_PlagueWard::CreateWard(this, &vLocation, 1);
}


// CDOTA_Ability_Venomancer_PlagueWard::OnUpgrade  (line 892, @0x0000000002ae8b60, libserver.so)  // inlines: GetGameMode, IsAddOnGame
// calls: CDOTABaseAbility::OnUpgrade, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::SetActivated
// strings: "holdout_scourge_ward"
void __fastcall CDOTA_Ability_Venomancer_PlagueWard::OnUpgrade(CDOTA_Ability_Venomancer_PlagueWard *const this)
{
  int v2; // eax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // r12

  CDOTABaseAbility::OnUpgrade(this);
  v2 = *&g_pGameRules[6].m_szQuestName[68];
  if ( v2 == 15 || v2 == 19 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "holdout_scourge_ward", 0);
    if ( AbilityByName != 0 )
    {
      (*(AbilityByName->_vptr_IHandleEntity + 212))(AbilityByName, this->m_iLevel.m_Value);
      if ( this->m_iLevel.m_Value > 1 )
        CDOTABaseAbility::SetActivated(AbilityByName, 1);
    }
  }
}


// CDOTA_Modifier_Plague_Wards_Bonus::~CDOTA_Modifier_Plague_Wards_Bonus  (line 918, @0x0000000002b1afb0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Plague_Wards_Bonus::~CDOTA_Modifier_Plague_Wards_Bonus(
        CDOTA_Modifier_Plague_Wards_Bonus *const this)
{
  this->_vptr_CDOTA_Buff = &off_4445DD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Plague_Wards_Bonus::~CDOTA_Modifier_Plague_Wards_Bonus  (line 918, @0x0000000002b1afd0, libserver.so)  // inlines: ~CDOTA_Modifier_Plague_Wards_Bonus
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Plague_Wards_Bonus::~CDOTA_Modifier_Plague_Wards_Bonus(
        CDOTA_Modifier_Plague_Wards_Bonus *const this)
{
  this->_vptr_CDOTA_Buff = &off_4445DD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Plague_Wards_Bonus::IsPurgable  (line 925, @0x0000000002b14830, libserver.so)
bool __fastcall CDOTA_Modifier_Plague_Wards_Bonus::IsPurgable(CDOTA_Modifier_Plague_Wards_Bonus *const this)
{
  return 0;
}


// CDOTA_Modifier_Plague_Wards_Bonus::OnCreated  (line 939, @0x0000000002b0b840, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CBaseEntity::SetMaxHealth, CDOTA_BaseNPC::Heal
// strings: "ward_hp"
void __fastcall CDOTA_Modifier_Plague_Wards_Bonus::OnCreated(
        CDOTA_Modifier_Plague_Wards_Bonus *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Parent; // rax
  int v6; // r12d
  CDOTA_BaseNPC *v7; // rax
  CDOTABaseAbility *v8; // r12
  CDOTA_BaseNPC *v9; // rax
  float ward_hp; // [rsp+Ch] [rbp-14h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->ward_hp = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->ward_damage = 0;
    goto LABEL_4;
  }
  this->ward_hp = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "ward_hp", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->ward_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "ward_damage", -1, 0);
LABEL_4:
  Parent = CDOTA_Buff::GetParent(this);
  v6 = (*(Parent->_vptr_IHandleEntity + 156))(Parent) + this->ward_hp;
  v7 = CDOTA_Buff::GetParent(this);
  CBaseEntity::SetMaxHealth(v7, v6);
  v8 = CDOTA_Buff::GetAbility(this);
  ward_hp = this->ward_hp;
  v9 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::Heal(v9, ward_hp, v8, 0, 1);
}


// CDOTA_Modifier_Plague_Wards_Bonus::DeclareFunctions  (line 952, @0x0000000002ae7400, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Plague_Wards_Bonus::GetModifierBaseAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Plague_Wards_Bonus::GetModifierExtraHealthBonus(CModifierParams const&), CDOTA_Modifier_Plague_Wards_Bonus::ModelScale(CModifierParams const&)
void __fastcall CDOTA_Modifier_Plague_Wards_Bonus::DeclareFunctions(CDOTA_Modifier_Plague_Wards_Bonus *const this)
{
  this->m_Functions[3].__pfn = CDOTA_Modifier_Plague_Wards_Bonus::GetModifierBaseAttack_BonusDamage;
  this->m_Functions[3].__delta = 0;
  this->m_Functions[61].__delta = 0;
  this->m_Functions[61].__pfn = CDOTA_Modifier_Plague_Wards_Bonus::GetModifierExtraHealthBonus;
  this->m_Functions[153].__pfn = CDOTA_Modifier_Plague_Wards_Bonus::ModelScale;
  this->m_Functions[153].__delta = 0;
}


// CDOTA_Modifier_Plague_Wards_Bonus::GetModifierBaseAttack_BonusDamage  (line 961, @0x0000000002ae7460, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Plague_Wards_Bonus::GetModifierBaseAttack_BonusDamage(
        CDOTA_Modifier_Plague_Wards_Bonus *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->ward_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Plague_Wards_Bonus::GetModifierExtraHealthBonus  (line 968, @0x0000000002ae7480, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Plague_Wards_Bonus::GetModifierExtraHealthBonus(
        CDOTA_Modifier_Plague_Wards_Bonus *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->ward_hp;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Plague_Wards_Bonus::ModelScale  (line 975, @0x0000000002ae74a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Plague_Wards_Bonus::ModelScale(
        CDOTA_Modifier_Plague_Wards_Bonus *const this,
        const CModifierParams *const params)
{
  return 0x4000000000000001uLL;
}


// CDOTA_Ability_Venomancer_PoisonNova::~CDOTA_Ability_Venomancer_PoisonNova  (line 988, @0x0000000002b1bdd0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Venomancer_PoisonNova::~CDOTA_Ability_Venomancer_PoisonNova(
        CDOTA_Ability_Venomancer_PoisonNova *const this)
{
  this->_vptr_IHandleEntity = &off_4446130;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Venomancer_PoisonNova::~CDOTA_Ability_Venomancer_PoisonNova  (line 988, @0x0000000002b1bdf0, libserver.so)  // inlines: ~CDOTA_Ability_Venomancer_PoisonNova
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Venomancer_PoisonNova::~CDOTA_Ability_Venomancer_PoisonNova(
        CDOTA_Ability_Venomancer_PoisonNova *const this)
{
  this->_vptr_IHandleEntity = &off_4446130;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Venomancer_PoisonNova::Schema_DynamicBinding  (line 990, @0x0000000002b14840, libserver.so)
// globals: CDOTA_Ability_Venomancer_PoisonNova::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Venomancer_PoisonNova::Schema_DynamicBinding(
        const CDOTA_Ability_Venomancer_PoisonNova *const this)
{
  return CDOTA_Ability_Venomancer_PoisonNova::s_pSchemaBinding;
}


// CDOTA_Ability_Venomancer_PoisonNova::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 990, @0x0000000002b14850, libserver.so)
// globals: CDOTA_Ability_Venomancer_PoisonNova::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Venomancer_PoisonNova::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Venomancer_PoisonNova::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Venomancer_PoisonNova::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Venomancer_PoisonNova::CEntityInstanceEntityClass::DestructInstance  (line 990, @0x0000000002b14860, libserver.so)  // inlines: Destruct<CDOTA_Ability_Venomancer_PoisonNova>
void __fastcall CDOTA_Ability_Venomancer_PoisonNova::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Venomancer_PoisonNova::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Venomancer_PoisonNova::CEntityInstanceEntityClass::FreeInstance  (line 990, @0x0000000002b14880, libserver.so)
void __fastcall CDOTA_Ability_Venomancer_PoisonNova::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Venomancer_PoisonNova::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Venomancer_PoisonNova::CEntityInstanceEntityClass::CanAllocate  (line 990, @0x0000000002b148a0, libserver.so)
bool __fastcall CDOTA_Ability_Venomancer_PoisonNova::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Venomancer_PoisonNova::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Venomancer_PoisonNova::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 990, @0x0000000002b148b0, libserver.so)
// globals: CDOTA_Ability_Venomancer_PoisonNova::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Venomancer_PoisonNova::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Venomancer_PoisonNova::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Venomancer_PoisonNova::s_pSchemaBinding;
}


// CDOTA_Ability_Venomancer_PoisonNova::CEntityInstanceEntityClass::AllocateInstance  (line 990, @0x0000000002b18ab0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Venomancer_PoisonNova::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Venomancer_PoisonNova::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Venomancer_PoisonNova::CEntityInstanceEntityClass::ConstructInstance  (line 990, @0x0000000002b1b490, libserver.so)  // inlines: CDOTA_Ability_Venomancer_PoisonNova, Construct<CDOTA_Ability_Venomancer_PoisonNova>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Venomancer_PoisonNova::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Venomancer_PoisonNova::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4446130;
  }
  return p;
}


// CDOTA_Ability_Venomancer_PoisonNova::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 990, @0x0000000002b21b40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Venomancer_PoisonNova::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Venomancer_PoisonNova::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Venomancer_PoisonNova::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 990, @0x0000000002b21b60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Venomancer_PoisonNova::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Venomancer_PoisonNova::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Venomancer_PoisonNova::GetEntityClassInternal  (line 990, @0x0000000002b27d70, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "venomancer_poison_nova", "CDOTA_Ability_Venomancer_PoisonNova"
// globals: `guard variable for'CDOTA_Ability_Venomancer_PoisonNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PoisonNovaClass, CDOTA_Ability_Venomancer_PoisonNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PoisonNovaClass, __dso_handle, CDOTA_Ability_Venomancer_PoisonNova::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Venomancer_PoisonNova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_PoisonNovaClassInfo, CDOTA_Ability_Venomancer_PoisonNova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_PoisonNovaClassInfo
CEntityClass *__cdecl CDOTA_Ability_Venomancer_PoisonNova::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Venomancer_PoisonNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PoisonNovaClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Venomancer_PoisonNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PoisonNovaClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Venomancer_PoisonNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PoisonNovaClass);
    CDOTA_Ability_Venomancer_PoisonNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PoisonNovaClass._vptr_CEntityClass = off_44460B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Venomancer_PoisonNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PoisonNovaClass);
    __cxa_atexit(
      CDOTA_Ability_Venomancer_PoisonNova::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Venomancer_PoisonNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PoisonNovaClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Venomancer_PoisonNovaClass != 0 )
    return &CDOTA_Ability_Venomancer_PoisonNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PoisonNovaClass;
  if ( `guard variable for'CDOTA_Ability_Venomancer_PoisonNova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_PoisonNovaClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Venomancer_PoisonNova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_PoisonNovaClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Venomancer_PoisonNova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_PoisonNovaClassInfo,
      "CDOTA_Ability_Venomancer_PoisonNova",
      "venomancer_poison_nova",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Venomancer_PoisonNova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_PoisonNovaClassInfo);
  }
  CDOTA_Ability_Venomancer_PoisonNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PoisonNovaClass.m_pClassInfo = &CDOTA_Ability_Venomancer_PoisonNova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_PoisonNovaClassInfo;
  CDOTA_Ability_Venomancer_PoisonNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PoisonNovaClass.m_pBaseClassInfo = CDOTA_Ability_Venomancer_PoisonNova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_PoisonNovaClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Venomancer_PoisonNovaClass = &CDOTA_Ability_Venomancer_PoisonNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PoisonNovaClass;
  CDOTA_Ability_Venomancer_PoisonNova::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Venomancer_PoisonNovaClassInfo.m_pClass = &CDOTA_Ability_Venomancer_PoisonNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PoisonNovaClass;
  CDOTA_Ability_Venomancer_PoisonNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PoisonNovaClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Venomancer_PoisonNovaClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Venomancer_PoisonNova::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Venomancer_PoisonNovaClass;
}


// CDOTA_Ability_Venomancer_PoisonNova::GetStolenActivityModifier  (line 1007, @0x0000000002b148c0, libserver.so)
const char *__fastcall CDOTA_Ability_Venomancer_PoisonNova::GetStolenActivityModifier(
        CDOTA_Ability_Venomancer_PoisonNova *const this)
{
  return "poison_nova";
}


// CDOTA_Ability_Venomancer_PoisonNova::YouForgotToImplementOrDeclareServerClass  (line 1013, @0x0000000002ae74c0, libserver.so)
int __fastcall CDOTA_Ability_Venomancer_PoisonNova::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Venomancer_PoisonNova *const this)
{
  return 0;
}


// CDOTA_Ability_Venomancer_PoisonNova::GetServerClass  (line 1013, @0x0000000002af2830, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Venomancer_PoisonNova::GetServerClass(
        CDOTA_Ability_Venomancer_PoisonNova *const this)
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


// CDOTA_Ability_Venomancer_PoisonNova::OnSpellStart  (line 1022, @0x0000000002ae9740, libserver.so)  // inlines: GetAbilityData, GetTeamNumber, entindex
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, Thinker_Create, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound, CEntityInstance::GetEntityIndex, CreateUnitEvent, CDOTAGamerules::SendProjectionAbilityMessage, KeyValues::~KeyValues (15 total)
// strings: "modifier_venomancer_poison_nova_thinker", "particles/units/heroes/hero_venomancer/venomancer_poison_nova_cast.vpcf", "Hero_Venomancer.PoisonNova"
void __fastcall CDOTA_Ability_Venomancer_PoisonNova::OnSpellStart(CDOTA_Ability_Venomancer_PoisonNova *const this)
{
  int m_Value; // r14d
  CDOTA_BaseNPC *Caster; // rax
  Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CEntityIndex v11; // eax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r14d
  CDOTA_BaseNPC *v14; // rax
  const Vector *v15; // r13
  CDOTA_BaseNPC *v16; // rax
  float v17; // xmm3_4
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-28h]

  v19 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_venomancer_poison_nova_thinker");
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  v5 = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(v5, this, "modifier_venomancer_poison_nova_thinker", &kv, *AbsOrigin, m_Value, 0, 0, 0);
  v6 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v6) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_venomancer/venomancer_poison_nova_cast.vpcf",
                  0,
                  v6,
                  0,
                  0);
  v8 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v8, v6);
  v9 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v9, "Hero_Venomancer.PoisonNova", 0.0, 0, 0);
  v10 = CDOTABaseAbility::GetCaster(this);
  v11.m_Data = CEntityInstance::GetEntityIndex(v10).m_Data;
  CreateUnitEvent(v11, 0, 25, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_IMPORTANT_ABILITY);
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  v14 = CDOTABaseAbility::GetCaster(this);
  v15 = CBaseEntity::GetAbsOrigin(v14);
  v16 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(g_pGameRules, v16, 0, m_iAbilityID, 0, 0, *&v15->x, v15->z, -1.0, v17);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Venomancer_PoisonNova::GetCooldown  (line 1040, @0x0000000002b03bb0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Venomancer_PoisonNova::GetCooldown(
        CDOTA_Ability_Venomancer_PoisonNova *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "cooldown_scepter", iLevel, 0);
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_Venomancer_PoisonNova::GetAbilityDamageToTargetOverInterval  (line 1050, @0x0000000002b07a40, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Venomancer_PoisonNova::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Venomancer_PoisonNova *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  bool HasScepter; // al
  const char *v9; // rsi
  float fIntervala; // [rsp+0h] [rbp-1Ch]
  float fIntervalb; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    fIntervala = fminf(fInterval, CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0));
    Caster = CDOTABaseAbility::GetCaster(this);
    HasScepter = CDOTA_BaseNPC::HasScepter(Caster);
    v9 = "damage_scepter";
    if ( !HasScepter )
      v9 = "damage";
    fIntervalb = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, v9, -1, 0) * fIntervala;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalb);
  }
  return result;
}


// CDOTA_Modifier_PoisonNova_Thinker::~CDOTA_Modifier_PoisonNova_Thinker  (line 1065, @0x0000000002b30220, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_PoisonNova_Thinker::~CDOTA_Modifier_PoisonNova_Thinker(
        CDOTA_Modifier_PoisonNova_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4446BF0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_entitiesHit);
  if ( (this->m_entitiesHit.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_entitiesHit.m_Memory),
        (this->m_entitiesHit.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_entitiesHit.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_PoisonNova_Thinker::~CDOTA_Modifier_PoisonNova_Thinker  (line 1065, @0x0000000002b308b0, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_PoisonNova_Thinker, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_PoisonNova_Thinker::~CDOTA_Modifier_PoisonNova_Thinker(
        CDOTA_Modifier_PoisonNova_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4446BF0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_entitiesHit);
  if ( (this->m_entitiesHit.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_entitiesHit.m_Memory);
    if ( (this->m_entitiesHit.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_entitiesHit.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_PoisonNova_Thinker::IsHidden  (line 1073, @0x0000000002b148d0, libserver.so)
bool __fastcall CDOTA_Modifier_PoisonNova_Thinker::IsHidden(CDOTA_Modifier_PoisonNova_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_PoisonNova_Thinker::OnCreated  (line 1094, @0x0000000002b04d90, libserver.so)  // inlines: AssignTo, DOTAGameRules, DotaRetrieveAbilityValue<float>, GetGameTime, GetLevelSpecialValueFor<float>, Vector
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "start_radius", "particles/units/heroes/hero_venomancer/venomancer_poison_nova.vpcf"
void __fastcall CDOTA_Modifier_PoisonNova_Thinker::OnCreated(
        CDOTA_Modifier_PoisonNova_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  float v8; // xmm1_4
  float v9; // xmm1_4
  float start_radius; // xmm0_4
  CGameRules *v11; // rax
  float radius; // xmm2_4
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  CDOTA_ParticleManager *v19; // rax
  float flLifespan; // [rsp+Ch] [rbp-34h]
  double v21; // [rsp+10h] [rbp-30h]
  float speed; // [rsp+18h] [rbp-28h]

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->speed, "speed");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->radius, "radius");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->start_radius, "start_radius");
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
    this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "duration", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
    {
LABEL_3:
      this->duration_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "duration_scepter", -1, 0);
      goto LABEL_4;
    }
  }
  else
  {
    this->duration = 0.0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_3;
  }
  this->duration_scepter = 0.0;
LABEL_4:
  CDOTA_Buff::StartIntervalThink(this, 0.0, v8);
  v9 = 0.0;
  start_radius = this->start_radius;
  v11 = g_pGameRules;
  this->m_fCurRadius = start_radius;
  if ( v11 != 0 )
    v9 = *&v11[18].m_szQuestName[20];
  radius = this->radius;
  this->m_fLastThink = v9;
  flLifespan = (radius - start_radius) / this->speed;
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_venomancer/venomancer_poison_nova.vpcf",
               2,
               0,
               0,
               0);
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v17 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v17, Particle, 0, *&AbsOrigin->x, AbsOrigin->z);
  speed = this->speed;
  *(&v21 + 1) = flLifespan;
  *&v21 = this->radius;
  v18 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v18, Particle, 1, v21, speed);
  v19 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v19, Particle);
}


// CDOTA_Modifier_PoisonNova_Thinker::OnIntervalThink  (line 1117, @0x0000000002b0cf40, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, DOTAGameRules, Element, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetTeamNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetParent, UTIL_Remove, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CUtlMemory<CHandle<CBaseEntity>, int>::Grow, __stack_chk_fail, _Unwind_Resume, KeyValues::KeyValues, CDOTA_BaseNPC::HasScepter (17 total)
// strings: "modifier_venomancer_poison_nova", "Hero_Venomancer.PoisonNovaImpact"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_PoisonNova_Thinker::OnIntervalThink(CDOTA_Modifier_PoisonNova_Thinker *const this)
{
  float speed; // xmm1_4
  CGameRules *v3; // rax
  float v4; // xmm0_4
  float v5; // xmm1_4
  CDOTA_BaseNPC *v6; // rax
  float m_fCurRadius; // ebx
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v9; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *Caster; // rax
  __int64 v12; // rbx
  int v13; // r12d
  CHandle<CBaseEntity> *v14; // r15
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  int m_Size; // eax
  CHandle<CBaseEntity> *v18; // rax
  float v19; // xmm0_4
  CDOTA_BaseNPC *v20; // rax
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v22; // rax
  int v23; // [rsp+30h] [rbp-80h]
  CDOTA_BaseNPC *m_pInstance; // [rsp+30h] [rbp-80h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  speed = this->speed;
  v3 = g_pGameRules;
  if ( g_pGameRules != 0 )
  {
    v4 = ((*&g_pGameRules[18].m_szQuestName[20] - this->m_fLastThink) * speed) + this->m_fCurRadius;
    this->m_fCurRadius = v4;
    v5 = *&v3[18].m_szQuestName[20];
  }
  else
  {
    v19 = (0.0 - this->m_fLastThink) * speed;
    v5 = 0.0;
    v4 = v19 + this->m_fCurRadius;
    this->m_fCurRadius = v4;
  }
  this->m_fLastThink = v5;
  if ( v4 <= this->radius )
  {
    if ( CDOTA_Buff::GetParent(this) != 0 && CDOTA_Buff::GetCaster(this) != 0 )
    {
      entities.m_Size = 0;
      entities.m_Memory.m_pMemory = 0;
      m_fCurRadius = this->m_fCurRadius;
      entities.m_Memory.m_nAllocationCount = 0;
      entities.m_Memory.m_nGrowSize = 0;
      Parent = CDOTA_Buff::GetParent(this);
      v9 = CDOTA_Buff::GetParent(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
      Caster = CDOTA_Buff::GetCaster(this);
      FindUnitsInRadius(Caster->m_iTeamNum.m_Value, AbsOrigin, Parent, m_fCurRadius, &entities, 2, 19, 16, 0, 0);
      if ( entities.m_Size > 0 )
      {
        v12 = 0;
        v13 = 0;
        do
        {
          while ( 1 )
          {
            v14 = &entities.m_Memory.m_pMemory[v12];
            if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                   &this->m_entitiesHit,
                   &entities.m_Memory.m_pMemory[v12]) == -1 )
            {
              if ( v14->m_Index + 2 > 1 )
              {
                v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v14->m_Index) >> 9) & 0x3F];
                if ( v15 != 0 )
                {
                  v16 = &v15[v14->m_Index & 0x1FF];
                  if ( v16 != 0 && v14->m_Index == v16->m_EHandle.m_Index )
                  {
                    m_pInstance = v16->m_pInstance;
                    if ( v16->m_pInstance != 0 && BYTE3(v16->m_pInstance[7]._vptr_IHandleEntity) != 0 )
                    {
                      KeyValues::KeyValues(&kv, "modifier_venomancer_poison_nova");
                      v20 = CDOTA_Buff::GetCaster(this);
                      CDOTA_BaseNPC::HasScepter(v20);
                      KeyValues::SetFloat(&kv, "duration", this->duration_scepter);
                      Ability = CDOTA_Buff::GetAbility(this);
                      v22 = CDOTA_Buff::GetCaster(this);
                      CDOTA_BaseNPC::AddNewModifier(
                        m_pInstance,
                        v22,
                        Ability,
                        "modifier_venomancer_poison_nova",
                        &kv,
                        0);
                      CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Venomancer.PoisonNovaImpact", 0.0, 0, 0);
                      KeyValues::~KeyValues(&kv);
                      v14 = &entities.m_Memory.m_pMemory[v12];
                    }
                  }
                }
              }
              m_Size = this->m_entitiesHit.m_Size;
              v23 = m_Size;
              if ( m_Size == this->m_entitiesHit.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_entitiesHit.m_Memory, 1);
                m_Size = this->m_entitiesHit.m_Size;
              }
              this->m_entitiesHit.m_Size = m_Size + 1;
              v18 = &this->m_entitiesHit.m_Memory.m_pMemory[v23];
              if ( v18 != 0 )
                break;
            }
            ++v13;
            ++v12;
            if ( entities.m_Size <= v13 )
              goto LABEL_20;
          }
          ++v13;
          ++v12;
          v18->m_Index = v14->m_Index;
        }
        while ( entities.m_Size > v13 );
      }
LABEL_20:
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
    }
  }
  else
  {
    v6 = CDOTA_Buff::GetParent(this);
    UTIL_Remove(v6);
  }
}


// CDOTA_Modifier_Venomancer_PoisonNova::~CDOTA_Modifier_Venomancer_PoisonNova  (line 1160, @0x0000000002b1af60, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Venomancer_PoisonNova::~CDOTA_Modifier_Venomancer_PoisonNova(
        CDOTA_Modifier_Venomancer_PoisonNova *const this)
{
  this->_vptr_CDOTA_Buff = &off_4446F10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Venomancer_PoisonNova::~CDOTA_Modifier_Venomancer_PoisonNova  (line 1160, @0x0000000002b1af80, libserver.so)  // inlines: ~CDOTA_Modifier_Venomancer_PoisonNova
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Venomancer_PoisonNova::~CDOTA_Modifier_Venomancer_PoisonNova(
        CDOTA_Modifier_Venomancer_PoisonNova *const this)
{
  this->_vptr_CDOTA_Buff = &off_4446F10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Venomancer_PoisonNova::IsDebuff  (line 1165, @0x0000000002b148e0, libserver.so)
bool __fastcall CDOTA_Modifier_Venomancer_PoisonNova::IsDebuff(CDOTA_Modifier_Venomancer_PoisonNova *const this)
{
  return 1;
}


// CDOTA_Modifier_Venomancer_PoisonNova::IsPurgable  (line 1166, @0x0000000002b148f0, libserver.so)
bool __fastcall CDOTA_Modifier_Venomancer_PoisonNova::IsPurgable(CDOTA_Modifier_Venomancer_PoisonNova *const this)
{
  return 0;
}


// CDOTA_Modifier_Venomancer_PoisonNova::GetEffectName  (line 1170, @0x0000000002b14900, libserver.so)
// strings: "particles/units/heroes/hero_venomancer/venomancer_poison_debuff_nova.vpcf"
const char *__fastcall CDOTA_Modifier_Venomancer_PoisonNova::GetEffectName(
        CDOTA_Modifier_Venomancer_PoisonNova *const this)
{
  return "particles/units/heroes/hero_venomancer/venomancer_poison_debuff_nova.vpcf";
}


// CDOTA_Modifier_Venomancer_PoisonNova::GetStatusEffectName  (line 1171, @0x0000000002b14910, libserver.so)
// strings: "particles/status_fx/status_effect_poison_venomancer.vpcf"
const char *__fastcall CDOTA_Modifier_Venomancer_PoisonNova::GetStatusEffectName(
        CDOTA_Modifier_Venomancer_PoisonNova *const this)
{
  return "particles/status_fx/status_effect_poison_venomancer.vpcf";
}


// CDOTA_Modifier_Venomancer_PoisonNova::StatusEffectPriority  (line 1172, @0x0000000002b14920, libserver.so)
int __fastcall CDOTA_Modifier_Venomancer_PoisonNova::StatusEffectPriority(
        CDOTA_Modifier_Venomancer_PoisonNova *const this)
{
  return 50;
}


// CDOTA_Modifier_Venomancer_PoisonNova::OnCreated  (line 1188, @0x0000000002b0b380, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Venomancer_PoisonNova::OnCreated(
        CDOTA_Modifier_Venomancer_PoisonNova *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Caster; // rax
  bool HasScepter; // al
  float v7; // xmm1_4
  int damage; // edx

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_scepter", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "damage", -1, 0);
      goto LABEL_4;
    }
  }
  else
  {
    this->damage_scepter = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->damage = 0;
LABEL_4:
  Caster = CDOTA_Buff::GetCaster(this);
  HasScepter = CDOTA_BaseNPC::HasScepter(Caster);
  damage = this->damage;
  if ( HasScepter )
    damage = this->damage_scepter;
  this->m_iDamage = damage;
  CDOTA_Buff::StartIntervalThink(this, 1.0, v7);
  (*(this->_vptr_CDOTA_Buff + 56))(this);
}


// CDOTA_Modifier_Venomancer_PoisonNova::OnIntervalThink  (line 1202, @0x0000000002ae92e0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, ApplyDamage, CBaseEntity::GetHealth, SendOverheadEventMessage
void __fastcall CDOTA_Modifier_Venomancer_PoisonNova::OnIntervalThink(CDOTA_Modifier_Venomancer_PoisonNova *const this)
{
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // rax
  int Health; // eax
  int m_iDamage; // edx
  bool v8; // cl
  CDOTA_BaseNPC *v9; // rax
  int v10; // eax
  int v11; // r12d
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  float flDamage; // [rsp+Ch] [rbp-24h]

  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x200) == 0 )
  {
    flDamage = this->m_iDamage;
    Ability = CDOTA_Buff::GetAbility(this);
    Parent = CDOTA_Buff::GetParent(this);
    Caster = CDOTA_Buff::GetCaster(this);
    ApplyDamage(Caster, Parent, Ability, flDamage, 2, 128);
    v5 = CDOTA_Buff::GetParent(this);
    Health = CBaseEntity::GetHealth(v5);
    m_iDamage = this->m_iDamage;
    v8 = m_iDamage > 0;
    if ( Health <= m_iDamage )
    {
      v13 = CDOTA_Buff::GetParent(this);
      v8 = CBaseEntity::GetHealth(v13) > 1;
    }
    if ( v8 )
    {
      v9 = CDOTA_Buff::GetParent(this);
      v10 = CBaseEntity::GetHealth(v9);
      v11 = this->m_iDamage;
      if ( v10 <= v11 )
      {
        v14 = CDOTA_Buff::GetParent(this);
        v11 = CBaseEntity::GetHealth(v14) - 1;
      }
      v12 = CDOTA_Buff::GetParent(this);
      SendOverheadEventMessage(0, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BONUS_SPELL_DAMAGE, v12, v11, 0);
    }
  }
}


// CDOTA_Modifier_Venomancer_PoisonNova::DeclareFunctions  (line 1216, @0x0000000002ae74d0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Venomancer_PoisonNova::DeclareFunctions(
        CDOTA_Modifier_Venomancer_PoisonNova *const this)
{
  this->m_Functions[151].__pfn = (&stru_10 + 697);
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_Venomancer_PoisonNova::Tooltip  (line 1223, @0x0000000002ae74f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Venomancer_PoisonNova::Tooltip(
        CDOTA_Modifier_Venomancer_PoisonNova *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->m_iDamage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Holdout_ScourgeWard::~CDOTA_Ability_Holdout_ScourgeWard  (line 1234, @0x0000000002b1be20, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Holdout_ScourgeWard::~CDOTA_Ability_Holdout_ScourgeWard(
        CDOTA_Ability_Holdout_ScourgeWard *const this)
{
  this->_vptr_IHandleEntity = &off_4447270;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Holdout_ScourgeWard::~CDOTA_Ability_Holdout_ScourgeWard  (line 1234, @0x0000000002b1be40, libserver.so)  // inlines: ~CDOTA_Ability_Holdout_ScourgeWard
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Holdout_ScourgeWard::~CDOTA_Ability_Holdout_ScourgeWard(
        CDOTA_Ability_Holdout_ScourgeWard *const this)
{
  this->_vptr_IHandleEntity = &off_4447270;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Holdout_ScourgeWard::Schema_DynamicBinding  (line 1236, @0x0000000002b14930, libserver.so)
// globals: CDOTA_Ability_Holdout_ScourgeWard::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Holdout_ScourgeWard::Schema_DynamicBinding(
        const CDOTA_Ability_Holdout_ScourgeWard *const this)
{
  return CDOTA_Ability_Holdout_ScourgeWard::s_pSchemaBinding;
}


// CDOTA_Ability_Holdout_ScourgeWard::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1236, @0x0000000002b14940, libserver.so)
// globals: CDOTA_Ability_Holdout_ScourgeWard::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Holdout_ScourgeWard::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Holdout_ScourgeWard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Holdout_ScourgeWard::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Holdout_ScourgeWard::CEntityInstanceEntityClass::DestructInstance  (line 1236, @0x0000000002b14950, libserver.so)  // inlines: Destruct<CDOTA_Ability_Holdout_ScourgeWard>
void __fastcall CDOTA_Ability_Holdout_ScourgeWard::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Holdout_ScourgeWard::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Holdout_ScourgeWard::CEntityInstanceEntityClass::FreeInstance  (line 1236, @0x0000000002b14970, libserver.so)
void __fastcall CDOTA_Ability_Holdout_ScourgeWard::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Holdout_ScourgeWard::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Holdout_ScourgeWard::CEntityInstanceEntityClass::CanAllocate  (line 1236, @0x0000000002b14990, libserver.so)
bool __fastcall CDOTA_Ability_Holdout_ScourgeWard::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Holdout_ScourgeWard::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Holdout_ScourgeWard::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1236, @0x0000000002b149a0, libserver.so)
// globals: CDOTA_Ability_Holdout_ScourgeWard::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Holdout_ScourgeWard::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Holdout_ScourgeWard::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Holdout_ScourgeWard::s_pSchemaBinding;
}


// CDOTA_Ability_Holdout_ScourgeWard::CEntityInstanceEntityClass::AllocateInstance  (line 1236, @0x0000000002b18af0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Holdout_ScourgeWard::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Holdout_ScourgeWard::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Holdout_ScourgeWard::CEntityInstanceEntityClass::ConstructInstance  (line 1236, @0x0000000002b1b4c0, libserver.so)  // inlines: CDOTA_Ability_Holdout_ScourgeWard, Construct<CDOTA_Ability_Holdout_ScourgeWard>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Holdout_ScourgeWard::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Holdout_ScourgeWard::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4447270;
  }
  return p;
}


// CDOTA_Ability_Holdout_ScourgeWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1236, @0x0000000002b21b90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Holdout_ScourgeWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Holdout_ScourgeWard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Holdout_ScourgeWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1236, @0x0000000002b21bb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Holdout_ScourgeWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Holdout_ScourgeWard::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Holdout_ScourgeWard::GetEntityClassInternal  (line 1236, @0x0000000002b27ec0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "holdout_scourge_ward", "CDOTA_Ability_Holdout_ScourgeWard"
// globals: `guard variable for'CDOTA_Ability_Holdout_ScourgeWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_ScourgeWardClass, CDOTA_Ability_Holdout_ScourgeWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_ScourgeWardClass, __dso_handle, CDOTA_Ability_Holdout_ScourgeWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Holdout_ScourgeWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_ScourgeWardClassInfo, CDOTA_Ability_Holdout_ScourgeWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_ScourgeWardClassInfo
CEntityClass *__cdecl CDOTA_Ability_Holdout_ScourgeWard::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Holdout_ScourgeWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_ScourgeWardClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Holdout_ScourgeWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_ScourgeWardClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Holdout_ScourgeWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_ScourgeWardClass);
    CDOTA_Ability_Holdout_ScourgeWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_ScourgeWardClass._vptr_CEntityClass = off_44471F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Holdout_ScourgeWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_ScourgeWardClass);
    __cxa_atexit(
      CDOTA_Ability_Holdout_ScourgeWard::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Holdout_ScourgeWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_ScourgeWardClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Holdout_ScourgeWardClass != 0 )
    return &CDOTA_Ability_Holdout_ScourgeWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_ScourgeWardClass;
  if ( `guard variable for'CDOTA_Ability_Holdout_ScourgeWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_ScourgeWardClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Holdout_ScourgeWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_ScourgeWardClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Holdout_ScourgeWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_ScourgeWardClassInfo,
      "CDOTA_Ability_Holdout_ScourgeWard",
      "holdout_scourge_ward",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Holdout_ScourgeWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_ScourgeWardClassInfo);
  }
  CDOTA_Ability_Holdout_ScourgeWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_ScourgeWardClass.m_pClassInfo = &CDOTA_Ability_Holdout_ScourgeWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_ScourgeWardClassInfo;
  CDOTA_Ability_Holdout_ScourgeWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_ScourgeWardClass.m_pBaseClassInfo = CDOTA_Ability_Holdout_ScourgeWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_ScourgeWardClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Holdout_ScourgeWardClass = &CDOTA_Ability_Holdout_ScourgeWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_ScourgeWardClass;
  CDOTA_Ability_Holdout_ScourgeWard::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_ScourgeWardClassInfo.m_pClass = &CDOTA_Ability_Holdout_ScourgeWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_ScourgeWardClass;
  CDOTA_Ability_Holdout_ScourgeWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_ScourgeWardClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Holdout_ScourgeWardClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Holdout_ScourgeWard::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_ScourgeWardClass;
}


// CDOTA_Ability_Holdout_ScourgeWard::OnSpellStart  (line 1248, @0x0000000002b025d0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetTeamNumber, IsTrained, VectorNormalize2D, VectorSubtract, operator-
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, CFmtStrN<256, false>::CFmtStrN, DOTA_CreateUnitByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetEffectiveLevel, CBaseEntity::GetAbsOrigin, VectorNormalize (25 total)
// strings: "npc_dota_venomancer_scourge_ward_%d", "modifier_venomancer_plague_ward", "modifier_kill", "modifier_magic_immune", "venomancer_venomous_gale", "holdout_scourge_venomous_gale" (11 total)
void __fastcall CDOTA_Ability_Holdout_ScourgeWard::OnSpellStart(CDOTA_Ability_Holdout_ScourgeWard *const this)
{
  int m_Value; // r15d
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_BaseNPC *v4; // r12
  int v5; // edx
  CDOTA_BaseNPC *v6; // r12
  float v7; // xmm1_4
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v12; // r14
  CDOTABaseAbility *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  const Vector *AbsOrigin; // r14
  vec_t v16; // xmm0_4
  vec_t v17; // xmm1_4
  CDOTA_BaseNPC *v18; // rax
  int v19; // eax
  CDOTA_BaseNPC *v20; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r15d
  CDOTA_ParticleManager *v23; // rax
  CDOTA_BaseNPC *v24; // rbx
  CDOTA_ParticleManager *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  CDOTA_BaseNPC *duration; // [rsp+8h] [rbp-198h]
  Vector vDirection; // [rsp+10h] [rbp-190h] BYREF
  Vector v29; // [rsp+20h] [rbp-180h]
  QAngle vAngles; // [rsp+30h] [rbp-170h] BYREF
  Vector vLocation; // [rsp+40h] [rbp-160h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-150h] BYREF
  unsigned __int64 v33; // [rsp+168h] [rbp-38h]
  Vector CursorPosition; // 0:kr00_12.12

  v33 = __readfsqword(0x28u);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  v5 = this->m_iLevel.m_Value;
  vLocation = CursorPosition;
  CFmtStrN<256,false>::CFmtStrN(&kv, "npc_dota_venomancer_scourge_ward_%d", v5);
  v6 = DOTA_CreateUnitByName(&kv.CKeyValues_Data + 9, &vLocation, 1, v4, Caster, m_Value);
  if ( v6 != 0 )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_venomancer_plague_ward");
    KeyValues::SetFloat(&kv, "duration", v7);
    v8 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v6, v8, this, "modifier_kill", &kv, 0);
    v9 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v6, v9, this, "modifier_magic_immune", &kv, 0);
    v10 = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v10, "venomancer_venomous_gale", 0);
    v12 = AbilityByName;
    if ( AbilityByName != 0 && CDOTABaseAbility::GetEffectiveLevel(AbilityByName) >= 0 )
    {
      v13 = CDOTA_BaseNPC::FindAbilityByName(v6, "holdout_scourge_venomous_gale", 0);
      if ( v13 != 0 )
        (*(v13->_vptr_IHandleEntity + 212))(v13, v12->m_iLevel.m_Value);
    }
    v14 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v14);
    v29 = CDOTABaseAbility::GetCursorPosition(this);
    v16 = v29.y - AbsOrigin->y;
    v17 = v29.x - AbsOrigin->x;
    vDirection.z = 0.0;
    vDirection.y = v16;
    vDirection.x = v17;
    VectorNormalize(&vDirection);
    VectorAngles(&vDirection, &vAngles);
    CBaseEntity::SetAbsAngles(v6, &vAngles);
    CDOTA_BaseNPC::UnitEmitSound(v6, "Hero_Venomancer.Plague_Ward", 0.0, 0, 0);
    v18 = CDOTABaseAbility::GetCaster(this);
    v19 = (*(v18->_vptr_IHandleEntity + 414))(v18);
    CDOTA_BaseNPC::SetControllableByPlayer(v6, v19, 0);
    vLocation = CDOTABaseAbility::GetCursorPosition(this);
    FindClearSpaceForUnit(v6, vLocation, 1);
    v20 = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_venomancer/venomancer_ward_cast.vpcf",
                 2,
                 v20,
                 0,
                 0);
    duration = CDOTABaseAbility::GetCaster(this);
    v23 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v23, Particle, 0, duration, 5, "attach_attack1", vec3_invalid, 1);
    v24 = CDOTABaseAbility::GetCaster(this);
    v25 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v25, Particle, 1, v24, 5, "attach_attack2", vec3_invalid, 1);
    v26 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v26, Particle);
    CDOTA_BaseNPC::UnitEmitSound(v6, "Hero_Venomancer.PlagueWard", 0.0, 0, 0);
    CBaseEntity::PhysicsTouchTriggers(v6, 0);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Holdout_ScourgeWard::OnUpgrade  (line 1296, @0x0000000002ae8be0, libserver.so)
// calls: CDOTABaseAbility::OnUpgrade, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::SetActivated
// strings: "venomancer_plague_ward"
void __fastcall CDOTA_Ability_Holdout_ScourgeWard::OnUpgrade(CDOTA_Ability_Holdout_ScourgeWard *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v4; // r12

  CDOTABaseAbility::OnUpgrade(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "venomancer_plague_ward", 0);
  v4 = AbilityByName;
  if ( AbilityByName != 0 )
  {
    (*(AbilityByName->_vptr_IHandleEntity + 212))(AbilityByName, this->m_iLevel.m_Value);
    if ( this->m_iLevel.m_Value > 1 )
      CDOTABaseAbility::SetActivated(v4, 1);
  }
}


