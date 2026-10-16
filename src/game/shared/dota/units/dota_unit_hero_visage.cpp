// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_visage.cpp:42
class CDOTA_Unit_Hero_Visage : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Visage(CDOTA_Unit_Hero_Visage &);
	CDOTA_Unit_Hero_Visage(CDOTA_Unit_Hero_Visage &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual bool UsedGestureBasedAttackAnimation();
	virtual void Event_Killed(const CTakeDamageInfo &);
	CDOTA_Unit_Hero_Visage();
	virtual ~CDOTA_Unit_Hero_Visage();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[439] UsedGestureBasedAttackAnimation
	// vtable[92] Event_Killed
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_visage.cpp:61
class C_CDOTA_Unit_Hero_Visage_MapInstall {
	C_CDOTA_Unit_Hero_Visage_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_visage.cpp:102
class CDOTA_Ability_Visage_GraveChill : public CDOTABaseAbility {
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
	CDOTA_Ability_Visage_GraveChill(CDOTA_Ability_Visage_GraveChill &);
	CDOTA_Ability_Visage_GraveChill(CDOTA_Ability_Visage_GraveChill &);
	CDOTA_Ability_Visage_GraveChill();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Visage_GraveChill();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_visage.cpp:150
class CDOTA_Modifier_Visage_GraveChill_Debuff : public CDOTA_Buff {
public:

private:

	int movespeed_bonus;  // +0xba8
	int attackspeed_bonus;  // +0xbac
	CDOTA_Modifier_Visage_GraveChill_Debuff();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual ~CDOTA_Modifier_Visage_GraveChill_Debuff();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeedBonus_Percentage
	// vtable[90] GetModifierAttackSpeedBonus_Constant
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_visage.cpp:229
class CDOTA_Modifier_Visage_GraveChill_Buff : public CDOTA_Buff {
public:

private:

	int movespeed_bonus;  // +0xba8
	int attackspeed_bonus;  // +0xbac
	CDOTA_Modifier_Visage_GraveChill_Buff();
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual ~CDOTA_Modifier_Visage_GraveChill_Buff();

	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeedBonus_Percentage
	// vtable[90] GetModifierAttackSpeedBonus_Constant
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_visage.cpp:299
class CDOTA_Ability_Visage_SoulAssumption : public CDOTABaseAbility {
public:

private:

	float m_fDamage;  // +0x390
	int m_nFXIndex;  // +0x394
	int m_iForcedStacks;  // +0x398
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
	CDOTA_Ability_Visage_SoulAssumption(CDOTA_Ability_Visage_SoulAssumption &);
	CDOTA_Ability_Visage_SoulAssumption(CDOTA_Ability_Visage_SoulAssumption &);
	CDOTA_Ability_Visage_SoulAssumption();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual const char * GetIntrinsicModifierName();
	virtual void CopyAbilityState(CDOTABaseAbility *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Visage_SoulAssumption();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[280] GetIntrinsicModifierName
	// vtable[210] CopyAbilityState
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_visage.cpp:326
class CDOTA_Modifier_Visage_SoulAssumption : public CDOTA_Buff {
	struct sDamageEvent {
		float fExpireTime;  // +0x0
		float fDamage;  // +0x4

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

private:

	int radius;  // +0xba8
	int stack_limit;  // +0xbac
	int damage_limit;  // +0xbb0
	float stack_duration;  // +0xbb4
	float damage_min;  // +0xbb8
	float damage_max;  // +0xbbc
	int m_nFxIndexA;  // +0xbc0
	int m_nFxIndexB;  // +0xbc4
	int iCur_stack;  // +0xbc8

	float m_fTotalDamage;  // +0xbe8
	CDOTA_Modifier_Visage_SoulAssumption();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnStackCountChanged(int);
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnTakeDamage(const CModifierParams &);
	void ClearDamageQueue();
	virtual ~CDOTA_Modifier_Visage_SoulAssumption();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[29] OnStackCountChanged
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[89] OnTakeDamage
	// sizeof = 3056
};

// src/game/shared/dota/units/dota_unit_hero_visage.cpp:689
class CDOTA_Ability_Visage_GravekeepersCloak : public CDOTABaseAbility {
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
	CDOTA_Ability_Visage_GravekeepersCloak(CDOTA_Ability_Visage_GravekeepersCloak &);
	CDOTA_Ability_Visage_GravekeepersCloak(CDOTA_Ability_Visage_GravekeepersCloak &);
	CDOTA_Ability_Visage_GravekeepersCloak();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Visage_GravekeepersCloak();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_visage.cpp:701
class CDOTA_Modifier_Visage_GravekeepersCloak_Stack : public CDOTA_Buff {
public:

private:

	bool m_bIsRecovering;  // +0xba8

	int m_nFXIndex[4];  // +0xbac
	CDOTA_Modifier_Visage_GravekeepersCloak_Stack();
	virtual bool IsHidden();
	virtual bool IsPermanent();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual int GetAttributes();
	void SetRecovering(bool, float);
	bool IsRecovering();
	virtual ~CDOTA_Modifier_Visage_GravekeepersCloak_Stack();

	// vtable[11] IsHidden
	// vtable[23] IsPermanent
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[7] GetAttributes
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_visage.cpp:760
class CDOTA_Modifier_Visage_GravekeepersCloak : public CDOTA_Buff {
public:

private:

	int damage_reduction;  // +0xba8
	int max_layers;  // +0xbac
	float minimum_damage;  // +0xbb0
	int recovery_time;  // +0xbb4
	int radius;  // +0xbb8
	int m_nFXIndex[4];  // +0xbbc

	CDOTA_Modifier_Visage_GravekeepersCloak();
	virtual bool IsHidden();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual bool GetAuraEntityReject(CDOTA_BaseNPC *);
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	virtual void OnStackCountChanged(int);
	ModifierVariant_t GetModifierTotal_ConstantBlock(const CModifierParams &);
	virtual ~CDOTA_Modifier_Visage_GravekeepersCloak();

	// vtable[11] IsHidden
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[42] GetAuraEntityReject
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[29] OnStackCountChanged
	// sizeof = 3048
};

// src/game/shared/dota/units/dota_unit_hero_visage.cpp:969
class CDOTA_Modifier_Visage_GravekeepersCloak_Secondary : public CDOTA_Buff {
public:

private:

	int damage_reduction;  // +0xba8
	CDOTA_Modifier_Visage_GravekeepersCloak_Secondary();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierTotal_ConstantBlock(const CModifierParams &);
	virtual ~CDOTA_Modifier_Visage_GravekeepersCloak_Secondary();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_visage.cpp:1035
class CDOTA_Ability_Visage_SummonFamiliars : public CDOTABaseAbility {
public:

private:

	char szUnitName[260];  // +0x390

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
	CDOTA_Ability_Visage_SummonFamiliars(CDOTA_Ability_Visage_SummonFamiliars &);
	CDOTA_Ability_Visage_SummonFamiliars(CDOTA_Ability_Visage_SummonFamiliars &);
	CDOTA_Ability_Visage_SummonFamiliars();
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
	CUtlVector<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> > * GetExistingFamiliars();
	virtual void OnUnStolen();
	void DestroyFamiliars();
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Visage_SummonFamiliars();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[308] OnUnStolen
	// vtable[322] GetStunDuration
	// sizeof = 1200
};

// src/game/shared/dota/units/dota_unit_hero_visage.cpp:1058
class C_CDOTA_Ability_Visage_SummonFamiliars_MapInstall {
	C_CDOTA_Ability_Visage_SummonFamiliars_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_visage.cpp:1234
class CDOTA_Unit_VisageFamiliar : public CDOTA_BaseNPC_Creep {
public:

private:

	int m_nFXAmbient;  // +0x11b8
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
	CDOTA_Unit_VisageFamiliar(CDOTA_Unit_VisageFamiliar &);
	CDOTA_Unit_VisageFamiliar(CDOTA_Unit_VisageFamiliar &);
	CDOTA_Unit_VisageFamiliar();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool UsedGestureBasedAttackAnimation();
	virtual bool IsFlyingVisually();
	virtual void OnAlive();
	virtual void OnDying();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void OnIdleChanged();
	virtual bool OnSaveState(KeyValues *);
	virtual ~CDOTA_Unit_VisageFamiliar();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[439] UsedGestureBasedAttackAnimation
	// vtable[489] IsFlyingVisually
	// vtable[471] OnAlive
	// vtable[469] OnDying
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[378] OnIdleChanged
	// vtable[466] OnSaveState
	// sizeof = 4544
};

// src/game/shared/dota/units/dota_unit_hero_visage.cpp:1323
class C_CDOTA_Unit_VisageFamiliar_MapInstall {
	C_CDOTA_Unit_VisageFamiliar_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_visage.cpp:1359
class CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge : public CDOTA_Buff {
public:

private:

	int damage_per_charge;  // +0xba8
	int max_damage_charges;  // +0xbac
	int familiar_speed;  // +0xbb0
	float damage_charge_time;  // +0xbb4
	int m_nFXIndex;  // +0xbb8
	int m_nFXIndexB;  // +0xbbc
	CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	virtual bool IsPurgable();
	virtual void OnIntervalThink();
	virtual void CheckState(CDOTABuffState &);
	virtual void OnStackCountChanged(int);
	virtual ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual ModifierVariant_t OnAttack(const CModifierParams &);
	virtual ModifierVariant_t OnUnitMoved(const CModifierParams &);
	virtual ModifierVariant_t GetModifierMoveSpeedOverride(const CModifierParams &);
	ModifierVariant_t OnAttacked(const CModifierParams &);
	virtual int GetPriority();
	void RestoreDamageChargeFX();
	virtual ~CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// vtable[56] OnIntervalThink
	// vtable[5] CheckState
	// vtable[29] OnStackCountChanged
	// vtable[89] GetModifierPreAttack_BonusDamage
	// vtable[90] OnAttack
	// vtable[91] OnUnitMoved
	// vtable[92] GetModifierMoveSpeedOverride
	// vtable[6] GetPriority
	// sizeof = 3032
};

// src/game/shared/dota/units/dota_unit_hero_visage.cpp:1632
class CDOTA_Ability_Visage_SummonFamiliars_StoneForm : public CDOTABaseAbility {
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
	CDOTA_Ability_Visage_SummonFamiliars_StoneForm(CDOTA_Ability_Visage_SummonFamiliars_StoneForm &);
	CDOTA_Ability_Visage_SummonFamiliars_StoneForm(CDOTA_Ability_Visage_SummonFamiliars_StoneForm &);
	CDOTA_Ability_Visage_SummonFamiliars_StoneForm();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Visage_SummonFamiliars_StoneForm();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_visage.cpp:1650
class C_CDOTA_Ability_Visage_SummonFamiliars_StoneForm_MapInstall {
	C_CDOTA_Ability_Visage_SummonFamiliars_StoneForm_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_visage.cpp:1679
class CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker : public CDOTA_Buff {
public:

private:

	int stun_radius;  // +0xba8
	int stun_damage;  // +0xbac
	float stun_delay;  // +0xbb0
	float stun_duration;  // +0xbb4
	float stone_duration;  // +0xbb8
	int m_iIntervalCount;  // +0xbbc
	CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void OnDestroy();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[60] OnDestroy
	// vtable[11] IsHidden
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_visage.cpp:1777
class CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff : public CDOTA_Buff {
public:

private:

	float hp_regen;  // +0xba8
	int stun_radius;  // +0xbac
	CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual bool IsPurgable();
	virtual void OnDestroy();
	virtual ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual int GetPriority();
	virtual ~CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// vtable[60] OnDestroy
	// vtable[89] GetModifierConstantHealthRegen
	// vtable[5] CheckState
	// vtable[6] GetPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_visage.cpp:1860
class CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Timer : public CDOTA_Buff {
public:

private:

	float stone_duration;  // +0xba8
	float m_fStartTime;  // +0xbac
	CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Timer();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Timer();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Visage::~CDOTA_Unit_Hero_Visage  (line 42, @0x0000000002d2d4c0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Visage::~CDOTA_Unit_Hero_Visage(CDOTA_Unit_Hero_Visage *const this)
{
  this->_vptr_IHandleEntity = &off_4664ED0;
  this->_vptr_INextBotEventResponder = &off_4665EB0;
  this->_vptr_CObstructionObject = &off_46661E0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Visage::~CDOTA_Unit_Hero_Visage  (line 42, @0x0000000002d2d500, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Visage
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Visage::~CDOTA_Unit_Hero_Visage(CDOTA_Unit_Hero_Visage *const this)
{
  this->_vptr_IHandleEntity = &off_4664ED0;
  this->_vptr_INextBotEventResponder = &off_4665EB0;
  this->_vptr_CObstructionObject = &off_46661E0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Visage::Schema_DynamicBinding  (line 44, @0x0000000002d20a90, libserver.so)
// globals: CDOTA_Unit_Hero_Visage::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Visage::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Visage *const this)
{
  return CDOTA_Unit_Hero_Visage::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Visage::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 44, @0x0000000002d20ac0, libserver.so)
// globals: CDOTA_Unit_Hero_Visage::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Visage::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Visage::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Visage::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Visage::CEntityInstanceEntityClass::DestructInstance  (line 44, @0x0000000002d20ad0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Visage>
void __fastcall CDOTA_Unit_Hero_Visage::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Visage::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Visage::CEntityInstanceEntityClass::FreeInstance  (line 44, @0x0000000002d20af0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Visage::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Visage::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Visage::CEntityInstanceEntityClass::CanAllocate  (line 44, @0x0000000002d20b10, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Visage::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Visage::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Visage::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 44, @0x0000000002d20b20, libserver.so)
// globals: CDOTA_Unit_Hero_Visage::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Visage::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Visage::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Visage::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Visage::CEntityInstanceEntityClass::AllocateInstance  (line 44, @0x0000000002d25510, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Visage::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Visage::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Visage::CEntityInstanceEntityClass::ConstructInstance  (line 44, @0x0000000002d28a10, libserver.so)  // inlines: CDOTA_Unit_Hero_Visage, Construct<CDOTA_Unit_Hero_Visage>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Visage::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Visage::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_4664ED0;
    *(p + 236) = &off_4665EB0;
    *(p + 257) = &off_46661E0;
  }
  return p;
}


// CDOTA_Unit_Hero_Visage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 44, @0x0000000002d354b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Visage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Visage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Visage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 44, @0x0000000002d35990, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Visage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Visage::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Visage::GetEntityClassInternal  (line 44, @0x0000000002d52f60, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "npc_dota_hero_visage", "CDOTA_Unit_Hero_Visage"
// globals: `guard variable for'CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass, CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Unit_Hero_Visage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Visage::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_VisageClassInfo, CDOTA_Unit_Hero_Visage::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_VisageClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Visage::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass) != 0 )
  {
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_designerName.u.m_Id = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_AllHelpers.m_Size = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_classInputs.m_Size = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_classOutputs.m_Size = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_hNetworkSerializer = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_pBaseClassInfo = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_pClassInfo = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_flags = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_nAllHelpersFlags = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_pScriptClassDesc = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_pInputs = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_nInputCount = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_pOutputs = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_nOutputCount = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_pGameClass = 0;
    CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass._vptr_CEntityClass = off_4664E50;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Visage::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_VisageClass != 0 )
    return &CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Visage::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_VisageClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Visage::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_VisageClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Visage::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_VisageClassInfo,
      "CDOTA_Unit_Hero_Visage",
      "npc_dota_hero_visage",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Visage::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_VisageClassInfo);
  }
  CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_pClassInfo = &CDOTA_Unit_Hero_Visage::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_VisageClassInfo;
  CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Visage::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_VisageClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_VisageClass = &CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass;
  CDOTA_Unit_Hero_Visage::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_VisageClassInfo.m_pClass = &CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass;
  CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_VisageClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Visage::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_VisageClass;
}


// CDOTA_Unit_Hero_Visage::UsedGestureBasedAttackAnimation  (line 52, @0x0000000002d20b30, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Visage::UsedGestureBasedAttackAnimation(CDOTA_Unit_Hero_Visage *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Visage::YouForgotToImplementOrDeclareServerClass  (line 61, @0x0000000002ccacc0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Visage::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Visage *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Visage::GetServerClass  (line 61, @0x0000000002cde0f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Visage::GetServerClass(CDOTA_Unit_Hero_Visage *const this)
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


// CDOTA_Unit_Hero_Visage::Precache  (line 71, @0x0000000002cd1c30, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Precache, V_snprintf, DOTA_PrecacheUnitByNameSync, __stack_chk_fail
// strings: "npc_dota_visage_familiar%d"
void __fastcall CDOTA_Unit_Hero_Visage::Precache(
        CDOTA_Unit_Hero_Visage *const this,
        const CEntityPrecacheContext *pContext)
{
  int v4; // ebx
  char szUnitName[264]; // [rsp+0h] [rbp-130h] BYREF
  unsigned __int64 v6; // [rsp+108h] [rbp-28h]

  v4 = 4;
  v6 = __readfsqword(0x28u);
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
  do
  {
    V_snprintf(szUnitName, 260, "npc_dota_visage_familiar%d", this->m_iCurrentLevel.m_Value);
    DOTA_PrecacheUnitByNameSync(szUnitName, pContext, -1);
    --v4;
  }
  while ( v4 != 0 );
}


// CDOTA_Unit_Hero_Visage::Spawn  (line 87, @0x0000000002cd1cc0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Spawn, CBaseAnimating::SetBodygroup
void __fastcall CDOTA_Unit_Hero_Visage::Spawn(CDOTA_Unit_Hero_Visage *const this, const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
  CBaseAnimating::SetBodygroup(this, 0, 0);
  CBaseAnimating::SetBodygroup(this, 1, 0);
}


// CDOTA_Ability_Visage_GraveChill::~CDOTA_Ability_Visage_GraveChill  (line 102, @0x0000000002d2c720, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Visage_GraveChill::~CDOTA_Ability_Visage_GraveChill(
        CDOTA_Ability_Visage_GraveChill *const this)
{
  this->_vptr_IHandleEntity = &off_46662B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Visage_GraveChill::~CDOTA_Ability_Visage_GraveChill  (line 102, @0x0000000002d2c740, libserver.so)  // inlines: ~CDOTA_Ability_Visage_GraveChill
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Visage_GraveChill::~CDOTA_Ability_Visage_GraveChill(
        CDOTA_Ability_Visage_GraveChill *const this)
{
  this->_vptr_IHandleEntity = &off_46662B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Visage_GraveChill::Schema_DynamicBinding  (line 104, @0x0000000002d20b40, libserver.so)
// globals: CDOTA_Ability_Visage_GraveChill::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Visage_GraveChill::Schema_DynamicBinding(
        const CDOTA_Ability_Visage_GraveChill *const this)
{
  return CDOTA_Ability_Visage_GraveChill::s_pSchemaBinding;
}


// CDOTA_Ability_Visage_GraveChill::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 104, @0x0000000002d20b50, libserver.so)
// globals: CDOTA_Ability_Visage_GraveChill::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Visage_GraveChill::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Visage_GraveChill::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Visage_GraveChill::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Visage_GraveChill::CEntityInstanceEntityClass::DestructInstance  (line 104, @0x0000000002d20b60, libserver.so)  // inlines: Destruct<CDOTA_Ability_Visage_GraveChill>
void __fastcall CDOTA_Ability_Visage_GraveChill::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Visage_GraveChill::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Visage_GraveChill::CEntityInstanceEntityClass::FreeInstance  (line 104, @0x0000000002d20b80, libserver.so)
void __fastcall CDOTA_Ability_Visage_GraveChill::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Visage_GraveChill::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Visage_GraveChill::CEntityInstanceEntityClass::CanAllocate  (line 104, @0x0000000002d20ba0, libserver.so)
bool __fastcall CDOTA_Ability_Visage_GraveChill::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Visage_GraveChill::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Visage_GraveChill::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 104, @0x0000000002d20bb0, libserver.so)
// globals: CDOTA_Ability_Visage_GraveChill::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Visage_GraveChill::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Visage_GraveChill::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Visage_GraveChill::s_pSchemaBinding;
}


// CDOTA_Ability_Visage_GraveChill::CEntityInstanceEntityClass::AllocateInstance  (line 104, @0x0000000002d25550, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Visage_GraveChill::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Visage_GraveChill::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Visage_GraveChill::CEntityInstanceEntityClass::ConstructInstance  (line 104, @0x0000000002d296f0, libserver.so)  // inlines: CDOTA_Ability_Visage_GraveChill, Construct<CDOTA_Ability_Visage_GraveChill>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Visage_GraveChill::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Visage_GraveChill::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_46662B0;
  }
  return p;
}


// CDOTA_Ability_Visage_GraveChill::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 104, @0x0000000002d34d60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Visage_GraveChill::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Visage_GraveChill::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Visage_GraveChill::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 104, @0x0000000002d34d80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Visage_GraveChill::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Visage_GraveChill::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Visage_GraveChill::GetEntityClassInternal  (line 104, @0x0000000002d4b680, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "visage_grave_chill", "CDOTA_Ability_Visage_GraveChill"
// globals: `guard variable for'CDOTA_Ability_Visage_GraveChill::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_GraveChillClass, CDOTA_Ability_Visage_GraveChill::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_GraveChillClass, __dso_handle, CDOTA_Ability_Visage_GraveChill::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Visage_GraveChill::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_GraveChillClassInfo, CDOTA_Ability_Visage_GraveChill::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_GraveChillClassInfo
CEntityClass *__cdecl CDOTA_Ability_Visage_GraveChill::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Visage_GraveChill::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_GraveChillClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Visage_GraveChill::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_GraveChillClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Visage_GraveChill::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_GraveChillClass);
    CDOTA_Ability_Visage_GraveChill::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_GraveChillClass._vptr_CEntityClass = off_4666230;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Visage_GraveChill::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_GraveChillClass);
    __cxa_atexit(
      CDOTA_Ability_Visage_GraveChill::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Visage_GraveChill::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_GraveChillClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Visage_GraveChillClass != 0 )
    return &CDOTA_Ability_Visage_GraveChill::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_GraveChillClass;
  if ( `guard variable for'CDOTA_Ability_Visage_GraveChill::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_GraveChillClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Visage_GraveChill::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_GraveChillClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Visage_GraveChill::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_GraveChillClassInfo,
      "CDOTA_Ability_Visage_GraveChill",
      "visage_grave_chill",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Visage_GraveChill::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_GraveChillClassInfo);
  }
  CDOTA_Ability_Visage_GraveChill::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_GraveChillClass.m_pClassInfo = &CDOTA_Ability_Visage_GraveChill::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_GraveChillClassInfo;
  CDOTA_Ability_Visage_GraveChill::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_GraveChillClass.m_pBaseClassInfo = CDOTA_Ability_Visage_GraveChill::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_GraveChillClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Visage_GraveChillClass = &CDOTA_Ability_Visage_GraveChill::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_GraveChillClass;
  CDOTA_Ability_Visage_GraveChill::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_GraveChillClassInfo.m_pClass = &CDOTA_Ability_Visage_GraveChill::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_GraveChillClass;
  CDOTA_Ability_Visage_GraveChill::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_GraveChillClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Visage_GraveChillClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Visage_GraveChill::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_GraveChillClass;
}


// CDOTA_Ability_Visage_GraveChill::OnSpellStart  (line 116, @0x0000000002cf5390, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "chill_duration", "modifier_visage_grave_chill_debuff", "modifier_visage_grave_chill_buff", "Hero_Visage.GraveChill.Cast", "Hero_Visage.GraveChill.Target"
void __fastcall CDOTA_Ability_Visage_GraveChill::OnSpellStart(CDOTA_Ability_Visage_GraveChill *const this)
{
  CDOTA_BaseNPC *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  float v6; // xmm1_4
  CDOTA_BaseNPC *v7; // r15
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  KeyValues kv; // [rsp+0h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-38h]

  v12 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "chill_duration", -1, 0);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1)
    && (v3->m_nUnitState64.m_Value & 0x200) == 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_visage_grave_chill_debuff");
    KeyValues::SetFloat(&kv, "duration", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_visage_grave_chill_debuff", &kv, 0);
    KeyValues::KeyValues(&kv2, "modifier_visage_grave_chill_buff");
    KeyValues::SetFloat(&kv2, "duration", v6);
    v7 = CDOTABaseAbility::GetCaster(this);
    v8 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v8, v7, this, "modifier_visage_grave_chill_buff", &kv2, 0);
    v9 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "Hero_Visage.GraveChill.Cast", v9);
    DOTA_EmitSound(10, "Hero_Visage.GraveChill.Target", v3);
    KeyValues::~KeyValues(&kv2);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Visage_GraveChill::GetSlowDuration  (line 141, @0x0000000002cf6940, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "chill_duration"
float __fastcall CDOTA_Ability_Visage_GraveChill::GetSlowDuration(CDOTA_Ability_Visage_GraveChill *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "chill_duration", -1, 0);
}


// CDOTA_Modifier_Visage_GraveChill_Debuff::~CDOTA_Modifier_Visage_GraveChill_Debuff  (line 150, @0x0000000002d26880, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Visage_GraveChill_Debuff::~CDOTA_Modifier_Visage_GraveChill_Debuff(
        CDOTA_Modifier_Visage_GraveChill_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4666D70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Visage_GraveChill_Debuff::~CDOTA_Modifier_Visage_GraveChill_Debuff  (line 150, @0x0000000002d268a0, libserver.so)  // inlines: ~CDOTA_Modifier_Visage_GraveChill_Debuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Visage_GraveChill_Debuff::~CDOTA_Modifier_Visage_GraveChill_Debuff(
        CDOTA_Modifier_Visage_GraveChill_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_4666D70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Visage_GraveChill_Debuff::IsDebuff  (line 155, @0x0000000002d20bc0, libserver.so)
bool __fastcall CDOTA_Modifier_Visage_GraveChill_Debuff::IsDebuff(CDOTA_Modifier_Visage_GraveChill_Debuff *const this)
{
  return 1;
}


// CDOTA_Modifier_Visage_GraveChill_Debuff::GetStatusEffectName  (line 159, @0x0000000002d20bd0, libserver.so)
// strings: "particles/units/heroes/hero_visage/status_effect_visage_chill_slow.vpcf"
const char *__fastcall CDOTA_Modifier_Visage_GraveChill_Debuff::GetStatusEffectName(
        CDOTA_Modifier_Visage_GraveChill_Debuff *const this)
{
  return "particles/units/heroes/hero_visage/status_effect_visage_chill_slow.vpcf";
}


// CDOTA_Modifier_Visage_GraveChill_Debuff::StatusEffectPriority  (line 160, @0x0000000002d20be0, libserver.so)
int __fastcall CDOTA_Modifier_Visage_GraveChill_Debuff::StatusEffectPriority(
        CDOTA_Modifier_Visage_GraveChill_Debuff *const this)
{
  return 22;
}


// CDOTA_Modifier_Visage_GraveChill_Debuff::OnCreated  (line 177, @0x0000000002cf97e0, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::GetCaster, CDOTA_Buff::AddParticle, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "movespeed_bonus", "attackspeed_bonus", "particles/units/heroes/hero_visage/visage_grave_chill_tgt.vpcf", "attach_hitloc", "attach_wingtipR", "attach_wingtipL" (8 total)
void __fastcall CDOTA_Modifier_Visage_GraveChill_Debuff::OnCreated(
        CDOTA_Modifier_Visage_GraveChill_Debuff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v7; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v9; // r14
  CDOTA_ParticleManager *v10; // rax
  CDOTA_BaseNPC *Caster; // rax
  const Vector *v12; // r13
  CDOTA_BaseNPC *v13; // r14
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // r14
  CDOTA_ParticleManager *v16; // rax
  __int64 v17; // r13
  CDOTA_BaseNPC *v18; // r14
  CDOTA_ParticleManager *v19; // rax
  CDOTA_BaseNPC *v20; // r14
  CDOTA_ParticleManager *v21; // rax
  CDOTA_BaseNPC *v22; // r14
  CDOTA_ParticleManager *v23; // rax
  CDOTA_BaseNPC *v24; // r14
  CDOTA_ParticleManager *v25; // rax
  CDOTA_BaseNPC *v26; // r12
  CDOTA_ParticleManager *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  const Vector *v29; // r14
  CDOTA_BaseNPC *v30; // r15
  CDOTA_ParticleManager *v31; // rax
  CDOTA_BaseNPC *v32; // rax
  const Vector *v33; // r14
  CDOTA_BaseNPC *v34; // r15
  CDOTA_ParticleManager *v35; // rax
  CDOTA_BaseNPC *v36; // r14
  CDOTA_ParticleManager *v37; // rax
  CDOTA_BaseNPC *v38; // rbx
  CDOTA_ParticleManager *v39; // rax
  CDOTA_ParticleManager *v40; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-34h]
  Vector v42; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v43; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v44; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v45; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v46; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v47; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->movespeed_bonus, "movespeed_bonus");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->attackspeed_bonus, "attackspeed_bonus");
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_visage/visage_grave_chill_tgt.vpcf",
                      2,
                      Parent,
                      0,
                      0);
  v7 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
  v9 = CDOTA_Buff::GetParent(this);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v10, Parent, 0, v9, 5, "attach_hitloc", *AbsOrigin, 1);
  Caster = CDOTA_Buff::GetCaster(this);
  v12 = CBaseEntity::GetAbsOrigin(Caster);
  v13 = CDOTA_Buff::GetCaster(this);
  v14 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v14, Parent, 1, v13, 5, "attach_hitloc", *v12, 1);
  v15 = CDOTA_Buff::GetParent(this);
  v16 = GetParticleManager();
  v17 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(v16, Parent, 2, v15, 1, 0, vec3_invalid, 1);
  v18 = CDOTA_Buff::GetCaster(this);
  v19 = GetParticleManager();
  v42.z = vecFallbackPosition;
  *&v42.x = v17;
  CDOTA_ParticleManager::SetParticleControlEnt(v19, Parent, 3, v18, 1, 0, v42, 1);
  v20 = CDOTA_Buff::GetCaster(this);
  v21 = GetParticleManager();
  v43.z = vecFallbackPosition;
  *&v43.x = v17;
  CDOTA_ParticleManager::SetParticleControlEnt(v21, Parent, 4, v20, 5, "attach_wingtipR", v43, 1);
  v22 = CDOTA_Buff::GetCaster(this);
  v23 = GetParticleManager();
  v44.z = vecFallbackPosition;
  *&v44.x = v17;
  CDOTA_ParticleManager::SetParticleControlEnt(v23, Parent, 5, v22, 5, "attach_wingtipL", v44, 1);
  v24 = CDOTA_Buff::GetCaster(this);
  v25 = GetParticleManager();
  v45.z = vecFallbackPosition;
  *&v45.x = v17;
  CDOTA_ParticleManager::SetParticleControlEnt(v25, Parent, 6, v24, 5, "attach_tail_tip", v45, 1);
  CDOTA_Buff::AddParticle(this, Parent, 0, 0, -1, 0, 0);
  v26 = CDOTA_Buff::GetParent(this);
  v27 = GetParticleManager();
  LODWORD(v26) = CDOTA_ParticleManager::CreateParticle(
                   v27,
                   "particles/units/heroes/hero_visage/visage_grave_chill_cast_beams.vpcf",
                   2,
                   v26,
                   0,
                   0);
  v28 = CDOTA_Buff::GetParent(this);
  v29 = CBaseEntity::GetAbsOrigin(v28);
  v30 = CDOTA_Buff::GetParent(this);
  v31 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v31, v26, 0, v30, 5, "attach_hitloc", *v29, 1);
  v32 = CDOTA_Buff::GetCaster(this);
  v33 = CBaseEntity::GetAbsOrigin(v32);
  v34 = CDOTA_Buff::GetCaster(this);
  v35 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v35, v26, 1, v34, 5, "attach_hitloc", *v33, 1);
  v36 = CDOTA_Buff::GetParent(this);
  v37 = GetParticleManager();
  v46.z = vecFallbackPosition;
  *&v46.x = v17;
  CDOTA_ParticleManager::SetParticleControlEnt(v37, v26, 2, v36, 1, 0, v46, 1);
  v38 = CDOTA_Buff::GetCaster(this);
  v39 = GetParticleManager();
  v47.z = vecFallbackPosition;
  *&v47.x = v17;
  CDOTA_ParticleManager::SetParticleControlEnt(v39, v26, 3, v38, 1, 0, v47, 1);
  v40 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v40, v26);
}


// CDOTA_Modifier_Visage_GraveChill_Debuff::DeclareFunctions  (line 204, @0x0000000002ccacd0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Visage_GraveChill_Debuff::DeclareFunctions(
        CDOTA_Modifier_Visage_GraveChill_Debuff *const this)
{
  this->m_Functions[13].__pfn = (&stru_10 + 697);
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__pfn = (&stru_10 + 705);
  this->m_Functions[24].__delta = 0;
}


// CDOTA_Modifier_Visage_GraveChill_Debuff::GetModifierMoveSpeedBonus_Percentage  (line 213, @0x0000000002ccad10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Visage_GraveChill_Debuff::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Visage_GraveChill_Debuff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->movespeed_bonus;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Visage_GraveChill_Debuff::GetModifierAttackSpeedBonus_Constant  (line 220, @0x0000000002ccad30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Visage_GraveChill_Debuff::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Visage_GraveChill_Debuff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->attackspeed_bonus;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Visage_GraveChill_Buff::~CDOTA_Modifier_Visage_GraveChill_Buff  (line 229, @0x0000000002d26830, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Visage_GraveChill_Buff::~CDOTA_Modifier_Visage_GraveChill_Buff(
        CDOTA_Modifier_Visage_GraveChill_Buff *const this)
{
  this->_vptr_CDOTA_Buff = &off_46670B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Visage_GraveChill_Buff::~CDOTA_Modifier_Visage_GraveChill_Buff  (line 229, @0x0000000002d26850, libserver.so)  // inlines: ~CDOTA_Modifier_Visage_GraveChill_Buff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Visage_GraveChill_Buff::~CDOTA_Modifier_Visage_GraveChill_Buff(
        CDOTA_Modifier_Visage_GraveChill_Buff *const this)
{
  this->_vptr_CDOTA_Buff = &off_46670B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Visage_GraveChill_Buff::IsDebuff  (line 234, @0x0000000002d20bf0, libserver.so)
bool __fastcall CDOTA_Modifier_Visage_GraveChill_Buff::IsDebuff(CDOTA_Modifier_Visage_GraveChill_Buff *const this)
{
  return 0;
}


// CDOTA_Modifier_Visage_GraveChill_Buff::IsPurgable  (line 235, @0x0000000002d20c00, libserver.so)
bool __fastcall CDOTA_Modifier_Visage_GraveChill_Buff::IsPurgable(CDOTA_Modifier_Visage_GraveChill_Buff *const this)
{
  return 1;
}


// CDOTA_Modifier_Visage_GraveChill_Buff::OnCreated  (line 254, @0x0000000002cf9bf0, libserver.so)
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle
// strings: "movespeed_bonus", "attackspeed_bonus", "particles/units/heroes/hero_visage/visage_grave_chill_caster.vpcf", "attach_hitloc", "attach_wingtipR", "attach_wingtipL" (7 total)
void __fastcall CDOTA_Modifier_Visage_GraveChill_Buff::OnCreated(
        CDOTA_Modifier_Visage_GraveChill_Buff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v7; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v9; // r14
  CDOTA_ParticleManager *v10; // rax
  CDOTA_BaseNPC *v11; // r14
  CDOTA_ParticleManager *v12; // rax
  __int64 v13; // r13
  vec_t v14; // r15d
  CDOTA_BaseNPC *v15; // r14
  CDOTA_ParticleManager *v16; // rax
  CDOTA_BaseNPC *v17; // r14
  CDOTA_ParticleManager *v18; // rax
  CDOTA_BaseNPC *v19; // r14
  CDOTA_ParticleManager *v20; // rax
  Vector v21; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v22; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v23; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->movespeed_bonus, "movespeed_bonus");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->attackspeed_bonus, "attackspeed_bonus");
  Caster = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_visage/visage_grave_chill_caster.vpcf",
                      2,
                      Caster,
                      0,
                      0);
  v7 = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
  v9 = CDOTA_Buff::GetCaster(this);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v10, Caster, 0, v9, 5, "attach_hitloc", *AbsOrigin, 1);
  v11 = CDOTA_Buff::GetCaster(this);
  v12 = GetParticleManager();
  v13 = *&vec3_invalid.x;
  v14 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(vec3_invalid.z)));
  CDOTA_ParticleManager::SetParticleControlEnt(v12, Caster, 1, v11, 1, 0, vec3_invalid, 1);
  v15 = CDOTA_Buff::GetCaster(this);
  v16 = GetParticleManager();
  *&v21.x = v13;
  v21.z = v14;
  CDOTA_ParticleManager::SetParticleControlEnt(v16, Caster, 2, v15, 5, "attach_wingtipR", v21, 1);
  v17 = CDOTA_Buff::GetCaster(this);
  v18 = GetParticleManager();
  *&v22.x = v13;
  v22.z = v14;
  CDOTA_ParticleManager::SetParticleControlEnt(v18, Caster, 3, v17, 5, "attach_wingtipL", v22, 1);
  v19 = CDOTA_Buff::GetCaster(this);
  v20 = GetParticleManager();
  *&v23.x = v13;
  v23.z = v14;
  CDOTA_ParticleManager::SetParticleControlEnt(v20, Caster, 4, v19, 5, "attach_tail_tip", v23, 1);
  CDOTA_Buff::AddParticle(this, Caster, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_Visage_GraveChill_Buff::DeclareFunctions  (line 273, @0x0000000002ccad50, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Visage_GraveChill_Buff::DeclareFunctions(
        CDOTA_Modifier_Visage_GraveChill_Buff *const this)
{
  this->m_Functions[13].__pfn = (&stru_10 + 697);
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__pfn = (&stru_10 + 705);
  this->m_Functions[24].__delta = 0;
}


// CDOTA_Modifier_Visage_GraveChill_Buff::GetModifierMoveSpeedBonus_Percentage  (line 281, @0x0000000002ccad90, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Visage_GraveChill_Buff::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Visage_GraveChill_Buff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->movespeed_bonus;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Visage_GraveChill_Buff::GetModifierAttackSpeedBonus_Constant  (line 288, @0x0000000002ccadb0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Visage_GraveChill_Buff::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Visage_GraveChill_Buff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->attackspeed_bonus;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Visage_SoulAssumption::~CDOTA_Ability_Visage_SoulAssumption  (line 299, @0x0000000002d2c770, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Visage_SoulAssumption::~CDOTA_Ability_Visage_SoulAssumption(
        CDOTA_Ability_Visage_SoulAssumption *const this)
{
  this->_vptr_IHandleEntity = &off_4667470;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Visage_SoulAssumption::~CDOTA_Ability_Visage_SoulAssumption  (line 299, @0x0000000002d2c790, libserver.so)  // inlines: ~CDOTA_Ability_Visage_SoulAssumption
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Visage_SoulAssumption::~CDOTA_Ability_Visage_SoulAssumption(
        CDOTA_Ability_Visage_SoulAssumption *const this)
{
  this->_vptr_IHandleEntity = &off_4667470;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Visage_SoulAssumption::Schema_DynamicBinding  (line 301, @0x0000000002d20c10, libserver.so)
// globals: CDOTA_Ability_Visage_SoulAssumption::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Visage_SoulAssumption::Schema_DynamicBinding(
        const CDOTA_Ability_Visage_SoulAssumption *const this)
{
  return CDOTA_Ability_Visage_SoulAssumption::s_pSchemaBinding;
}


// CDOTA_Ability_Visage_SoulAssumption::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 301, @0x0000000002d20c20, libserver.so)
// globals: CDOTA_Ability_Visage_SoulAssumption::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Visage_SoulAssumption::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Visage_SoulAssumption::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Visage_SoulAssumption::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Visage_SoulAssumption::CEntityInstanceEntityClass::DestructInstance  (line 301, @0x0000000002d20c30, libserver.so)  // inlines: Destruct<CDOTA_Ability_Visage_SoulAssumption>
void __fastcall CDOTA_Ability_Visage_SoulAssumption::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Visage_SoulAssumption::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Visage_SoulAssumption::CEntityInstanceEntityClass::FreeInstance  (line 301, @0x0000000002d20c50, libserver.so)
void __fastcall CDOTA_Ability_Visage_SoulAssumption::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Visage_SoulAssumption::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Visage_SoulAssumption::CEntityInstanceEntityClass::CanAllocate  (line 301, @0x0000000002d20c70, libserver.so)
bool __fastcall CDOTA_Ability_Visage_SoulAssumption::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Visage_SoulAssumption::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Visage_SoulAssumption::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 301, @0x0000000002d20c80, libserver.so)
// globals: CDOTA_Ability_Visage_SoulAssumption::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Visage_SoulAssumption::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Visage_SoulAssumption::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Visage_SoulAssumption::s_pSchemaBinding;
}


// CDOTA_Ability_Visage_SoulAssumption::CEntityInstanceEntityClass::AllocateInstance  (line 301, @0x0000000002d25590, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Visage_SoulAssumption::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Visage_SoulAssumption::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_Visage_SoulAssumption::CEntityInstanceEntityClass::ConstructInstance  (line 301, @0x0000000002d29720, libserver.so)  // inlines: CDOTA_Ability_Visage_SoulAssumption, Construct<CDOTA_Ability_Visage_SoulAssumption>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Visage_SoulAssumption::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Visage_SoulAssumption::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4667470;
  }
  return p;
}


// CDOTA_Ability_Visage_SoulAssumption::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 301, @0x0000000002d34db0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Visage_SoulAssumption::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Visage_SoulAssumption::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Visage_SoulAssumption::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 301, @0x0000000002d34dd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Visage_SoulAssumption::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Visage_SoulAssumption::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Visage_SoulAssumption::GetEntityClassInternal  (line 301, @0x0000000002d4b7d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "visage_soul_assumption", "CDOTA_Ability_Visage_SoulAssumption"
// globals: `guard variable for'CDOTA_Ability_Visage_SoulAssumption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SoulAssumptionClass, CDOTA_Ability_Visage_SoulAssumption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SoulAssumptionClass, __dso_handle, CDOTA_Ability_Visage_SoulAssumption::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Visage_SoulAssumption::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_SoulAssumptionClassInfo, CDOTA_Ability_Visage_SoulAssumption::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_SoulAssumptionClassInfo
CEntityClass *__cdecl CDOTA_Ability_Visage_SoulAssumption::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Visage_SoulAssumption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SoulAssumptionClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Visage_SoulAssumption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SoulAssumptionClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Visage_SoulAssumption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SoulAssumptionClass);
    CDOTA_Ability_Visage_SoulAssumption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SoulAssumptionClass._vptr_CEntityClass = off_46673B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Visage_SoulAssumption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SoulAssumptionClass);
    __cxa_atexit(
      CDOTA_Ability_Visage_SoulAssumption::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Visage_SoulAssumption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SoulAssumptionClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Visage_SoulAssumptionClass != 0 )
    return &CDOTA_Ability_Visage_SoulAssumption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SoulAssumptionClass;
  if ( `guard variable for'CDOTA_Ability_Visage_SoulAssumption::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_SoulAssumptionClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Visage_SoulAssumption::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_SoulAssumptionClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Visage_SoulAssumption::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_SoulAssumptionClassInfo,
      "CDOTA_Ability_Visage_SoulAssumption",
      "visage_soul_assumption",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Visage_SoulAssumption::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_SoulAssumptionClassInfo);
  }
  CDOTA_Ability_Visage_SoulAssumption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SoulAssumptionClass.m_pClassInfo = &CDOTA_Ability_Visage_SoulAssumption::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_SoulAssumptionClassInfo;
  CDOTA_Ability_Visage_SoulAssumption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SoulAssumptionClass.m_pBaseClassInfo = CDOTA_Ability_Visage_SoulAssumption::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_SoulAssumptionClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Visage_SoulAssumptionClass = &CDOTA_Ability_Visage_SoulAssumption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SoulAssumptionClass;
  CDOTA_Ability_Visage_SoulAssumption::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_SoulAssumptionClassInfo.m_pClass = &CDOTA_Ability_Visage_SoulAssumption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SoulAssumptionClass;
  CDOTA_Ability_Visage_SoulAssumption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SoulAssumptionClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Visage_SoulAssumptionClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Visage_SoulAssumption::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SoulAssumptionClass;
}


// CDOTA_Ability_Visage_SoulAssumption::GetIntrinsicModifierName  (line 307, @0x0000000002d20c90, libserver.so)
// strings: "modifier_visage_soul_assumption"
const char *__fastcall CDOTA_Ability_Visage_SoulAssumption::GetIntrinsicModifierName(
        CDOTA_Ability_Visage_SoulAssumption *const this)
{
  return "modifier_visage_soul_assumption";
}


// CDOTA_Modifier_Visage_SoulAssumption::~CDOTA_Modifier_Visage_SoulAssumption  (line 326, @0x0000000002d32d50, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CDOTA_Modifier_Visage_SoulAssumption::sDamageEvent, int>::Purge
void __fastcall CDOTA_Modifier_Visage_SoulAssumption::~CDOTA_Modifier_Visage_SoulAssumption(
        CDOTA_Modifier_Visage_SoulAssumption *const this)
{
  bool v2; // zf
  CUtlVectorBase<CDOTA_Modifier_Visage_SoulAssumption::sDamageEvent,CUtlMemory<CDOTA_Modifier_Visage_SoulAssumption::sDamageEvent,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_DamageQueue.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_4667EF0;
  this->m_DamageQueue.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_DamageQueue.m_Memory,
        CUtlMemory<CDOTA_Modifier_Visage_SoulAssumption::sDamageEvent,int>::Purge(&this->m_DamageQueue.m_Memory),
        (this->m_DamageQueue.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CDOTA_Modifier_Visage_SoulAssumption::sDamageEvent,int>::Purge(p_m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Visage_SoulAssumption::~CDOTA_Modifier_Visage_SoulAssumption  (line 326, @0x0000000002d32e30, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Modifier_Visage_SoulAssumption, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CDOTA_Modifier_Visage_SoulAssumption::sDamageEvent, int>::Purge
void __fastcall CDOTA_Modifier_Visage_SoulAssumption::~CDOTA_Modifier_Visage_SoulAssumption(
        CDOTA_Modifier_Visage_SoulAssumption *const this)
{
  bool v2; // zf
  CUtlVectorBase<CDOTA_Modifier_Visage_SoulAssumption::sDamageEvent,CUtlMemory<CDOTA_Modifier_Visage_SoulAssumption::sDamageEvent,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_DamageQueue.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_4667EF0;
  this->m_DamageQueue.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_DamageQueue.m_Memory;
    CUtlMemory<CDOTA_Modifier_Visage_SoulAssumption::sDamageEvent,int>::Purge(&this->m_DamageQueue.m_Memory);
    if ( (this->m_DamageQueue.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Modifier_Visage_SoulAssumption::sDamageEvent,int>::Purge(p_m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Visage_SoulAssumption::IsHidden  (line 337, @0x0000000002d20ca0, libserver.so)
bool __fastcall CDOTA_Modifier_Visage_SoulAssumption::IsHidden(CDOTA_Modifier_Visage_SoulAssumption *const this)
{
  return (*(this->_vptr_CDOTA_Buff + 27))(this) == 0;
}


// CDOTA_Modifier_Visage_SoulAssumption::IsPurgable  (line 338, @0x0000000002d20cc0, libserver.so)
bool __fastcall CDOTA_Modifier_Visage_SoulAssumption::IsPurgable(CDOTA_Modifier_Visage_SoulAssumption *const this)
{
  return 0;
}


// CDOTA_Ability_Visage_SoulAssumption::CopyAbilityState  (line 374, @0x0000000002ccadd0, libserver.so)
void __fastcall CDOTA_Ability_Visage_SoulAssumption::CopyAbilityState(
        CDOTA_Ability_Visage_SoulAssumption *const this,
        CDOTABaseAbility *pAbilityCopy)
{
  if ( pAbilityCopy != 0 )
    LODWORD(pAbilityCopy[1].m_pEntity) = this->m_iForcedStacks;
}


// CDOTA_Ability_Visage_SoulAssumption::OnSpellStart  (line 387, @0x0000000002cff5b0, libserver.so)  // inlines: CEntityHandle, CHandle, ClearDamageQueue, Color, Get, GetEHandle, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetSerialNumber, RemoveAll, Set, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator->, operator=, sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_ProjectileManager::CreateTrackingProjectile, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex (14 total)
// strings: "modifier_visage_soul_assumption", "particles/units/heroes/hero_visage/visage_soul_assumption_bolt5.vpcf", "stack_limit", "particles/units/heroes/hero_visage/visage_soul_assumption_beams.vpcf", "attach_hitloc", "attach_wingL0" (21 total)
// globals: jpt_2CFF656
void __fastcall CDOTA_Ability_Visage_SoulAssumption::OnSpellStart(CDOTA_Ability_Visage_SoulAssumption *const this)
{
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v3; // rbx
  int m_iForcedStacks; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rdi
  const char *v7; // rdx
  vec_t y; // xmm0_4
  CDOTA_BaseNPC *v9; // rax
  CEntityIdentity *m_pEntity; // rcx
  __int16 v11; // ax
  CEntityIdentity *v12; // rax
  __int16 v13; // cx
  int LevelSpecialValue; // r14d
  CDOTA_BaseNPC *v15; // r15
  CDOTA_ParticleManager *ParticleManager; // rax
  const CBaseEntity *v17; // rax
  const Vector *AbsOrigin; // r15
  CEntityInstance *v19; // rax
  int m_nFXIndex; // ebx
  CDOTA_ParticleManager *v21; // rax
  int v22; // ebx
  CDOTA_ParticleManager *v23; // rax
  int v24; // ebx
  CDOTA_ParticleManager *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  const Vector *v27; // rbx
  CDOTA_BaseNPC *v28; // rax
  CDOTA_ParticleManager *v29; // rax
  CDOTA_BaseNPC *v30; // rax
  const Vector *v31; // rbx
  CDOTA_BaseNPC *v32; // rax
  CDOTA_ParticleManager *v33; // rax
  CDOTA_BaseNPC *v34; // rax
  const Vector *v35; // rbx
  CDOTA_BaseNPC *v36; // rax
  CDOTA_ParticleManager *v37; // rax
  CDOTA_BaseNPC *v38; // rax
  const Vector *v39; // rbx
  CDOTA_BaseNPC *v40; // rax
  CDOTA_ParticleManager *v41; // rax
  CDOTA_BaseNPC *v42; // rax
  const Vector *v43; // rbx
  CDOTA_BaseNPC *v44; // rax
  CDOTA_ParticleManager *v45; // rax
  CDOTA_BaseNPC *v46; // rax
  const Vector *v47; // rbx
  CDOTA_BaseNPC *v48; // rax
  CDOTA_ParticleManager *v49; // rax
  int v50; // ebx
  float v51; // xmm2_4
  float v52; // xmm1_4
  float v53; // xmm4_4
  int v54; // r15d
  CDOTA_ParticleManager *v55; // rax
  int v56; // edx
  int v57; // ebx
  CDOTA_ParticleManager *v58; // rax
  int v59; // ebx
  CDOTA_BaseNPC *v60; // rax
  CDOTA_Buff *v61; // rax
  CDOTA_BaseNPC *v62; // rax
  CDOTA_BaseNPC *v63; // rbx
  CDOTA_ParticleManager *v64; // rax
  CDOTA_ParticleManager *v65; // rax
  const CBaseAnimating *pEnt; // [rsp+8h] [rbp-B8h]
  const CBaseAnimating *pEnta; // [rsp+8h] [rbp-B8h]
  const CBaseAnimating *pEntb; // [rsp+8h] [rbp-B8h]
  const CBaseAnimating *pEntc; // [rsp+8h] [rbp-B8h]
  const CBaseAnimating *pEntd; // [rsp+8h] [rbp-B8h]
  const CBaseAnimating *pEnte; // [rsp+8h] [rbp-B8h]
  const CBaseAnimating *pEntf; // [rsp+8h] [rbp-B8h]
  float pEntg; // [rsp+8h] [rbp-B8h]
  unsigned int v74; // [rsp+10h] [rbp-B0h]
  double v75; // [rsp+10h] [rbp-B0h]
  float v76; // [rsp+18h] [rbp-A8h]
  sTrackingProjectileCreateInfo info; // [rsp+20h] [rbp-A0h] BYREF
  unsigned __int64 v78; // [rsp+88h] [rbp-38h]

  v78 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    m_iForcedStacks = 0;
    Caster = CDOTABaseAbility::GetCaster(this);
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_visage_soul_assumption", 0);
    if ( ModifierByName != 0 )
      m_iForcedStacks = (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName);
    if ( this->m_bReflection )
      m_iForcedStacks = this->m_iForcedStacks;
    else
      this->m_iForcedStacks = m_iForcedStacks;
    switch ( m_iForcedStacks )
    {
      case 0:
        v7 = "particles/units/heroes/hero_visage/visage_soul_assumption_bolt.vpcf";
        break;
      case 1:
        v7 = "particles/units/heroes/hero_visage/visage_soul_assumption_bolt1.vpcf";
        break;
      case 2:
        v7 = "particles/units/heroes/hero_visage/visage_soul_assumption_bolt2.vpcf";
        break;
      case 3:
        v7 = "particles/units/heroes/hero_visage/visage_soul_assumption_bolt3.vpcf";
        break;
      case 4:
        v7 = "particles/units/heroes/hero_visage/visage_soul_assumption_bolt4.vpcf";
        break;
      case 5:
        v7 = "particles/units/heroes/hero_visage/visage_soul_assumption_bolt5.vpcf";
        break;
      case 6:
        v7 = "particles/units/heroes/hero_visage/visage_soul_assumption_bolt6.vpcf";
        break;
      default:
        v7 = 0;
        break;
    }
    info.pszEffectName = v7;
    info.hSource.m_Index = -1;
    info.hTarget.m_Index = -1;
    info.bProvidesVision = 0;
    info.colorGemColor = 0;
    info.vSourceLoc.x = vec3_origin.x;
    y = vec3_origin.y;
    info.pAttackRecord = 0;
    info.vSourceLoc.y = y;
    info.vSourceLoc.z = vec3_origin.z;
    info.iSourceAttachment = 1;
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
    info.iMoveSpeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bolt_speed", -1, 0);
    v9 = CDOTABaseAbility::GetCaster(this);
    if ( v9 != 0 && (m_pEntity = v9->m_pEntity) != 0 )
    {
      v11 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v11 & 0x7FFF;
    }
    else
    {
      info.hSource.m_Index = -1;
    }
    v12 = v3->m_pEntity;
    if ( v12 != 0 )
    {
      v13 = 0x7FFF;
      if ( v12->m_EHandle.m_Index != -1 )
        v13 = v12->m_EHandle.m_Index & 0x7FFF;
      info.hTarget.m_Index = (((v12->m_EHandle.m_Index >> 15) - (v12->m_flags & 1)) << 15) | v13 & 0x7FFF;
    }
    else
    {
      info.hTarget.m_Index = -1;
    }
    info.bDodgeable = 1;
    info.iSourceAttachment = 1;
    CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "stack_limit", -1, 0);
    v15 = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                         ParticleManager,
                         "particles/units/heroes/hero_visage/visage_soul_assumption_beams.vpcf",
                         1,
                         v15,
                         0,
                         0);
    v17 = CEntityHandle::operator CEntityInstance *(&info.hTarget);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v17);
    v19 = CEntityHandle::operator CEntityInstance *(&info.hTarget);
    m_nFXIndex = this->m_nFXIndex;
    pEnt = v19;
    v21 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v21, m_nFXIndex, 1, pEnt, 5, "attach_hitloc", *AbsOrigin, 1);
    v22 = this->m_nFXIndex;
    *&v74 = info.iMoveSpeed;
    v23 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v23, v22, 2, COERCE_DOUBLE(v74), 0.0);
    v24 = this->m_nFXIndex;
    v25 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v25, v24, 3, COERCE_DOUBLE(COERCE_UNSIGNED_INT(m_iForcedStacks)), 0.0);
    v26 = CDOTABaseAbility::GetCaster(this);
    v27 = CBaseEntity::GetAbsOrigin(v26);
    v28 = CDOTABaseAbility::GetCaster(this);
    LODWORD(AbsOrigin) = this->m_nFXIndex;
    pEnta = v28;
    v29 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v29, AbsOrigin, 5, pEnta, 5, "attach_wingL0", *v27, 1);
    v30 = CDOTABaseAbility::GetCaster(this);
    v31 = CBaseEntity::GetAbsOrigin(v30);
    v32 = CDOTABaseAbility::GetCaster(this);
    LODWORD(AbsOrigin) = this->m_nFXIndex;
    pEntb = v32;
    v33 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v33, AbsOrigin, 6, pEntb, 5, "attach_wingR0", *v31, 1);
    v34 = CDOTABaseAbility::GetCaster(this);
    v35 = CBaseEntity::GetAbsOrigin(v34);
    v36 = CDOTABaseAbility::GetCaster(this);
    LODWORD(AbsOrigin) = this->m_nFXIndex;
    pEntc = v36;
    v37 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v37, AbsOrigin, 7, pEntc, 5, "attach_wingL1", *v35, 1);
    v38 = CDOTABaseAbility::GetCaster(this);
    v39 = CBaseEntity::GetAbsOrigin(v38);
    v40 = CDOTABaseAbility::GetCaster(this);
    LODWORD(AbsOrigin) = this->m_nFXIndex;
    pEntd = v40;
    v41 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v41, AbsOrigin, 8, pEntd, 5, "attach_wingR1", *v39, 1);
    v42 = CDOTABaseAbility::GetCaster(this);
    v43 = CBaseEntity::GetAbsOrigin(v42);
    v44 = CDOTABaseAbility::GetCaster(this);
    LODWORD(AbsOrigin) = this->m_nFXIndex;
    pEnte = v44;
    v45 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v45, AbsOrigin, 9, pEnte, 5, "attach_wingtipL", *v43, 1);
    v46 = CDOTABaseAbility::GetCaster(this);
    v47 = CBaseEntity::GetAbsOrigin(v46);
    v48 = CDOTABaseAbility::GetCaster(this);
    LODWORD(AbsOrigin) = this->m_nFXIndex;
    pEntf = v48;
    v49 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v49, AbsOrigin, 10, pEntf, 5, "attach_wingtipR", *v47, 1);
    if ( m_iForcedStacks == LevelSpecialValue )
    {
      v63 = CDOTABaseAbility::GetCaster(this);
      v64 = GetParticleManager();
      LODWORD(v63) = CDOTA_ParticleManager::CreateParticle(
                       v64,
                       "particles/units/heroes/hero_visage/visage_soul_assumption_beam_ambient.vpcf",
                       1,
                       v63,
                       0,
                       0);
      v65 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v65, v63);
    }
    v50 = 0;
    v51 = 1.0;
    if ( LevelSpecialValue > 0 )
    {
      do
      {
        v52 = 0.0;
        v53 = v51 - (v50 * 0.1);
        if ( m_iForcedStacks > v50 )
          v52 = v51;
        v54 = this->m_nFXIndex;
        pEntg = v51;
        v75 = COERCE_DOUBLE(__PAIR64__(LODWORD(v53), LODWORD(v52)));
        v76 = v51 - v53;
        v55 = GetParticleManager();
        v56 = v50 + 11;
        ++v50;
        CDOTA_ParticleManager::SetParticleControl(v55, v54, v56, v75, v76);
        v51 = pEntg;
      }
      while ( v50 != LevelSpecialValue );
    }
    v57 = this->m_nFXIndex;
    v58 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v58, v57);
    v59 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "soul_base_damage", -1, 0);
    this->m_fDamage = v59
                    + (CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "soul_charge_damage", -1, 0)
                     * m_iForcedStacks);
    v60 = CDOTABaseAbility::GetCaster(this);
    v61 = CDOTA_BaseNPC::FindModifierByName(v60, "modifier_visage_soul_assumption", 0);
    if ( v61 != 0 )
      LODWORD(v61[1].m_class.u.m_Id) = 0;
    v62 = CDOTABaseAbility::GetCaster(this);
    DOTA_EmitSound(10, "Hero_Visage.SoulAssumption.Cast", v62);
  }
}


// CDOTA_Ability_Visage_SoulAssumption::OnProjectileHit  (line 476, @0x0000000002cd8f30, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetCaster, ApplyDamage, DOTA_EmitSound
// strings: "Hero_Visage.SoulAssumption.Target"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Visage_SoulAssumption::OnProjectileHit(
        CDOTA_Ability_Visage_SoulAssumption *const this,
        _DWORD *hTarget,
        const Vector *const vLocation)
{
  CEntityIdentity *v3; // rcx
  CEntityIdentity *v4; // rcx
  CDOTA_BaseNPC *m_pInstance; // rbx
  unsigned __int64 m_Value; // rax
  CDOTA_BaseNPC *Caster; // rax
  float m_fDamage; // [rsp-1Ch] [rbp-1Ch]

  if ( (*hTarget + 2) <= 1 )
    return 1;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1;
  v4 = &v3[*hTarget & 0x1FF];
  if ( v4 == 0 || *hTarget != v4->m_EHandle.m_Index )
    return 1;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && !m_pInstance->m_bIsWaitingToSpawn.m_Value )
  {
    m_Value = m_pInstance->m_nUnitState64.m_Value;
    if ( (m_Value & 0x100) == 0
      && (m_Value & 0x200) == 0
      && !CDOTA_BaseNPC::TriggerSpellAbsorb(v4->m_pInstance, this, 1) )
    {
      m_fDamage = this->m_fDamage;
      Caster = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(Caster, m_pInstance, this, m_fDamage, 2, 0);
      DOTA_EmitSound(10, "Hero_Visage.SoulAssumption.Target", m_pInstance);
    }
  }
  return 1;
}


// CDOTA_Ability_Visage_SoulAssumption::GetAbilityDamageToTargetOverInterval  (line 492, @0x0000000002cffe10, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "modifier_visage_soul_assumption", "soul_base_damage", "soul_charge_damage"
__int64 __fastcall CDOTA_Ability_Visage_SoulAssumption::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Visage_SoulAssumption *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int v5; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax
  int LevelSpecialValue; // r14d
  int v11; // ebx

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    v5 = 0;
    Caster = CDOTABaseAbility::GetCaster(this);
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_visage_soul_assumption", 0);
    if ( ModifierByName != 0 )
      v5 = (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName);
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "soul_base_damage", -1, 0);
    v11 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "soul_charge_damage", -1, 0);
    return ((v11 * v5 + LevelSpecialValue) * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Modifier_Visage_SoulAssumption::OnCreated  (line 511, @0x0000000002d0cce0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "stack_limit", "damage_limit", "damage_min", "damage_max"
void __fastcall CDOTA_Modifier_Visage_SoulAssumption::OnCreated(
        CDOTA_Modifier_Visage_SoulAssumption *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  float v9; // xmm1_4

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
      this->stack_limit = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "stack_limit", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_11;
    }
  }
  this->stack_limit = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->damage_limit = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "damage_limit", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
    goto LABEL_12;
  }
LABEL_11:
  this->damage_limit = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->stack_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "stack_duration", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
LABEL_13:
    this->damage_min = 0.0;
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_7;
LABEL_14:
    this->damage_max = 0.0;
    goto LABEL_8;
  }
LABEL_12:
  this->stack_duration = 0.0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
    goto LABEL_13;
LABEL_6:
  this->damage_min = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "damage_min", -1, 0);
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 == 0 )
    goto LABEL_14;
LABEL_7:
  this->damage_max = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8, "damage_max", -1, 0);
LABEL_8:
  this->m_fTotalDamage = 0.0;
  CDOTA_Buff::StartIntervalThink(this, 0.1, v9);
}


// CDOTA_Modifier_Visage_SoulAssumption::OnRefresh  (line 568, @0x0000000002d0be20, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "stack_limit", "damage_limit", "damage_min", "damage_max"
void __fastcall CDOTA_Modifier_Visage_SoulAssumption::OnRefresh(
        CDOTA_Modifier_Visage_SoulAssumption *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax

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
      this->stack_limit = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "stack_limit", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  this->stack_limit = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->damage_limit = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "damage_limit", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
    goto LABEL_11;
  }
LABEL_10:
  this->damage_limit = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->stack_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "stack_duration", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
LABEL_12:
    this->damage_min = 0.0;
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_7;
    goto LABEL_13;
  }
LABEL_11:
  this->stack_duration = 0.0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
    goto LABEL_12;
LABEL_6:
  this->damage_min = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "damage_min", -1, 0);
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 != 0 )
  {
LABEL_7:
    this->damage_max = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8, "damage_max", -1, 0);
    return;
  }
LABEL_13:
  this->damage_max = 0.0;
}


// CDOTA_Modifier_Visage_SoulAssumption::DeclareFunctions  (line 578, @0x0000000002ccadf0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Visage_SoulAssumption::DeclareFunctions(
        CDOTA_Modifier_Visage_SoulAssumption *const this)
{
  this->m_Functions[134].__pfn = (&stru_10 + 697);
  this->m_Functions[134].__delta = 0;
}


// CDOTA_Modifier_Visage_SoulAssumption::OnTakeDamage  (line 585, @0x0000000002d197b0, libserver.so)  // inlines: AddToTail, AttackerNPC, CopyConstruct<CDOTA_Modifier_Visage_SoulAssumption::sDamageEvent>, DOTAGameRules, Element, FStrEq, FastSqrt, Get, GetAbilityName, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GrowMemory, IndexToIdentity, IsConsideredHero, IsOwnedByAnyPlayer, IsValid, Length2D, LookupEntity, ToDOTAAbility, ToDOTABaseNPC, UnitNPC, VectorSubtract, _V_strcmp, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator[]
// calls: CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CUtlMemory<CDOTA_Modifier_Visage_SoulAssumption::sDamageEvent, int>::Grow, __dynamic_cast
// strings: "visage_soul_assumption"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Visage_SoulAssumption::OnTakeDamage(
        CDOTA_Modifier_Visage_SoulAssumption *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // r12
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityInstance *v13; // r14
  float fDamage; // xmm0_4
  uint32 v15; // eax
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  int m_Id; // eax
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r14
  const Vector *v21; // rax
  float v22; // xmm0_4
  float v23; // xmm1_4
  __int64 m_Size; // rbx
  float v25; // xmm0_4
  int v26; // eax
  CDOTA_Modifier_Visage_SoulAssumption::sDamageEvent *v27; // rax
  void *v28; // rax
  const char **v29; // rax
  const char *v30; // rsi
  float v31; // [rsp+8h] [rbp-28h]
  float v32; // [rsp+Ch] [rbp-24h]

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1
    || (m_Index_low = LOWORD(params->hunit.m_Index),
        (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v7 = &v6[m_Index_low & 0x1FF]) == 0
    || m_Index != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v9 = params->hattacker.m_Index;
  if ( v9 + 2 > 1 )
  {
    v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v10 != 0 )
    {
      v11 = &v10[params->hattacker.m_Index & 0x1FF];
      if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
      {
        v13 = v11->m_pInstance;
        if ( v11->m_pInstance != 0 && BYTE3(v13[7]._vptr_IHandleEntity) != 0 && m_pInstance != 0 )
        {
          fDamage = params->fDamage;
          if ( fDamage <= this->damage_max && this->damage_min <= fDamage )
          {
            v15 = params->inflictor.m_Index;
            if ( v15 + 2 <= 1
              || (v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->inflictor.m_Index) >> 9) & 0x3F]) == 0
              || (v17 = &v16[params->inflictor.m_Index & 0x1FF]) == 0
              || v15 != v17->m_EHandle.m_Index
              || v17->m_pInstance == 0
              || (v28 = __dynamic_cast(v17->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0)) == 0
              || (v29 = *(v28 + 111)) == 0
              || (v30 = *v29, *v29 == 0)
              || v30 != "visage_soul_assumption" && strcmp(v30, "visage_soul_assumption") != 0 )
            {
              if ( m_pInstance != v13
                && (v13[61].m_hPrivateScope.m_hScope != 0
                 || ((m_Id = v13[43].m_iszPrivateVScripts.u.m_Id) & 1) != 0
                 || (m_Id & 0x800) != 0)
                && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 3) != 0
                && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
              {
                Caster = CDOTA_Buff::GetCaster(this);
                AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
                v21 = CBaseEntity::GetAbsOrigin(m_pInstance);
                if ( this->radius > fsqrt(
                                      ((v21->x - AbsOrigin->x) * (v21->x - AbsOrigin->x))
                                    + ((v21->y - AbsOrigin->y) * (v21->y - AbsOrigin->y))) )
                {
                  v22 = 0.0;
                  if ( g_pGameRules != 0 )
                    v22 = *&g_pGameRules[18].m_szQuestName[20];
                  v23 = params->fDamage;
                  m_Size = this->m_DamageQueue.m_Size;
                  v25 = v22 + this->stack_duration;
                  v26 = this->m_DamageQueue.m_Size;
                  if ( m_Size == this->m_DamageQueue.m_Memory.m_nAllocationCount )
                  {
                    v31 = v23;
                    v32 = v25;
                    CUtlMemory<CDOTA_Modifier_Visage_SoulAssumption::sDamageEvent,int>::Grow(
                      &this->m_DamageQueue.m_Memory,
                      1);
                    v26 = this->m_DamageQueue.m_Size;
                    v23 = v31;
                    v25 = v32;
                  }
                  this->m_DamageQueue.m_Size = v26 + 1;
                  v27 = &this->m_DamageQueue.m_Memory.m_pMemory[m_Size];
                  if ( v27 != 0 )
                  {
                    v27->fExpireTime = v25;
                    v27->fDamage = v23;
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


// CDOTA_Modifier_Visage_SoulAssumption::ClearDamageQueue  (line 626, @0x0000000002ceb780, libserver.so)  // inlines: RemoveAll
void __fastcall CDOTA_Modifier_Visage_SoulAssumption::ClearDamageQueue(
        CDOTA_Modifier_Visage_SoulAssumption *const this)
{
  this->m_DamageQueue.m_Size = 0;
}


// CDOTA_Modifier_Visage_SoulAssumption::OnIntervalThink  (line 635, @0x0000000002cd6730, libserver.so)  // inlines: DOTAGameRules, Element, GetGameTime, Remove, ShiftElementsLeft, V_memmove, memmove, operator[]
// calls: memmove, CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Visage_SoulAssumption::OnIntervalThink(CDOTA_Modifier_Visage_SoulAssumption *const this)
{
  int m_Size; // eax
  int v3; // ebx
  int v4; // eax
  float v5; // xmm0_4
  CDOTA_Modifier_Visage_SoulAssumption::sDamageEvent *m_pMemory; // rsi
  __int64 v7; // rcx
  float *v8; // rdi
  int m_fTotalDamage; // eax
  __int64 stack_limit; // rsi
  int v11; // eax
  __int64 v12; // rdx
  CDOTA_BaseNPC *Parent; // rax

  this->m_fTotalDamage = 0.0;
  m_Size = this->m_DamageQueue.m_Size;
  if ( m_Size <= 0 )
  {
    m_fTotalDamage = 0;
  }
  else
  {
    v3 = 0;
    do
    {
      while ( 1 )
      {
        v5 = 0.0;
        if ( g_pGameRules != 0 )
          v5 = *&g_pGameRules[18].m_szQuestName[20];
        m_pMemory = this->m_DamageQueue.m_Memory.m_pMemory;
        v7 = v3;
        v8 = &m_pMemory[v7];
        if ( v5 > m_pMemory[v7].fExpireTime )
          break;
        ++v3;
        m_Size = this->m_DamageQueue.m_Size;
        this->m_fTotalDamage = this->m_fTotalDamage + v8[1];
        if ( v3 >= m_Size )
          goto LABEL_10;
      }
      v4 = m_Size - v3 - 1;
      if ( v4 > 0 )
        memmove(v8, &m_pMemory[v7 + 1], 8LL * v4);
      m_Size = this->m_DamageQueue.m_Size - 1;
      this->m_DamageQueue.m_Size = m_Size;
    }
    while ( v3 < m_Size );
LABEL_10:
    m_fTotalDamage = this->m_fTotalDamage;
  }
  v12 = (m_fTotalDamage >> 31);
  stack_limit = this->stack_limit;
  LODWORD(v12) = m_fTotalDamage % this->damage_limit;
  v11 = m_fTotalDamage / this->damage_limit;
  if ( v11 <= stack_limit )
    stack_limit = v11;
  (*(this->_vptr_CDOTA_Buff + 28))(this, stack_limit, v12);
  Parent = CDOTA_Buff::GetParent(this);
  if ( (*(Parent->_vptr_IHandleEntity + 408))(Parent) == 0 )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Visage_SoulAssumption::OnStackCountChanged  (line 662, @0x0000000002ccae10, libserver.so)
void __fastcall CDOTA_Modifier_Visage_SoulAssumption::OnStackCountChanged(
        CDOTA_Modifier_Visage_SoulAssumption *const this,
        int iOldCount)
{
  ;
}


// CDOTA_Ability_Visage_GravekeepersCloak::~CDOTA_Ability_Visage_GravekeepersCloak  (line 689, @0x0000000002d2c7c0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Visage_GravekeepersCloak::~CDOTA_Ability_Visage_GravekeepersCloak(
        CDOTA_Ability_Visage_GravekeepersCloak *const this)
{
  this->_vptr_IHandleEntity = &off_4668250;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Visage_GravekeepersCloak::~CDOTA_Ability_Visage_GravekeepersCloak  (line 689, @0x0000000002d2c7e0, libserver.so)  // inlines: ~CDOTA_Ability_Visage_GravekeepersCloak
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Visage_GravekeepersCloak::~CDOTA_Ability_Visage_GravekeepersCloak(
        CDOTA_Ability_Visage_GravekeepersCloak *const this)
{
  this->_vptr_IHandleEntity = &off_4668250;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Visage_GravekeepersCloak::Schema_DynamicBinding  (line 691, @0x0000000002d20cd0, libserver.so)
// globals: CDOTA_Ability_Visage_GravekeepersCloak::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Visage_GravekeepersCloak::Schema_DynamicBinding(
        const CDOTA_Ability_Visage_GravekeepersCloak *const this)
{
  return CDOTA_Ability_Visage_GravekeepersCloak::s_pSchemaBinding;
}


// CDOTA_Ability_Visage_GravekeepersCloak::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 691, @0x0000000002d20ce0, libserver.so)
// globals: CDOTA_Ability_Visage_GravekeepersCloak::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Visage_GravekeepersCloak::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Visage_GravekeepersCloak::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Visage_GravekeepersCloak::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Visage_GravekeepersCloak::CEntityInstanceEntityClass::DestructInstance  (line 691, @0x0000000002d20cf0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Visage_GravekeepersCloak>
void __fastcall CDOTA_Ability_Visage_GravekeepersCloak::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Visage_GravekeepersCloak::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Visage_GravekeepersCloak::CEntityInstanceEntityClass::FreeInstance  (line 691, @0x0000000002d20d10, libserver.so)
void __fastcall CDOTA_Ability_Visage_GravekeepersCloak::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Visage_GravekeepersCloak::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Visage_GravekeepersCloak::CEntityInstanceEntityClass::CanAllocate  (line 691, @0x0000000002d20d30, libserver.so)
bool __fastcall CDOTA_Ability_Visage_GravekeepersCloak::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Visage_GravekeepersCloak::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Visage_GravekeepersCloak::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 691, @0x0000000002d20d40, libserver.so)
// globals: CDOTA_Ability_Visage_GravekeepersCloak::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Visage_GravekeepersCloak::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Visage_GravekeepersCloak::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Visage_GravekeepersCloak::s_pSchemaBinding;
}


// CDOTA_Ability_Visage_GravekeepersCloak::CEntityInstanceEntityClass::AllocateInstance  (line 691, @0x0000000002d255d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Visage_GravekeepersCloak::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Visage_GravekeepersCloak::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Visage_GravekeepersCloak::CEntityInstanceEntityClass::ConstructInstance  (line 691, @0x0000000002d29750, libserver.so)  // inlines: CDOTA_Ability_Visage_GravekeepersCloak, Construct<CDOTA_Ability_Visage_GravekeepersCloak>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Visage_GravekeepersCloak::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Visage_GravekeepersCloak::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4668250;
  }
  return p;
}


// CDOTA_Ability_Visage_GravekeepersCloak::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 691, @0x0000000002d34e00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Visage_GravekeepersCloak::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Visage_GravekeepersCloak::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Visage_GravekeepersCloak::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 691, @0x0000000002d34e20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Visage_GravekeepersCloak::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Visage_GravekeepersCloak::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Visage_GravekeepersCloak::GetEntityClassInternal  (line 691, @0x0000000002d4b920, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "visage_gravekeepers_cloak", "CDOTA_Ability_Visage_GravekeepersCloak"
// globals: `guard variable for'CDOTA_Ability_Visage_GravekeepersCloak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_GravekeepersCloakClass, CDOTA_Ability_Visage_GravekeepersCloak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_GravekeepersCloakClass, __dso_handle, CDOTA_Ability_Visage_GravekeepersCloak::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Visage_GravekeepersCloak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_GravekeepersCloakClassInfo, CDOTA_Ability_Visage_GravekeepersCloak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_GravekeepersCloakClassInfo
CEntityClass *__cdecl CDOTA_Ability_Visage_GravekeepersCloak::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Visage_GravekeepersCloak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_GravekeepersCloakClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Visage_GravekeepersCloak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_GravekeepersCloakClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Visage_GravekeepersCloak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_GravekeepersCloakClass);
    CDOTA_Ability_Visage_GravekeepersCloak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_GravekeepersCloakClass._vptr_CEntityClass = off_46681D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Visage_GravekeepersCloak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_GravekeepersCloakClass);
    __cxa_atexit(
      CDOTA_Ability_Visage_GravekeepersCloak::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Visage_GravekeepersCloak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_GravekeepersCloakClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Visage_GravekeepersCloakClass != 0 )
    return &CDOTA_Ability_Visage_GravekeepersCloak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_GravekeepersCloakClass;
  if ( `guard variable for'CDOTA_Ability_Visage_GravekeepersCloak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_GravekeepersCloakClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Visage_GravekeepersCloak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_GravekeepersCloakClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Visage_GravekeepersCloak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_GravekeepersCloakClassInfo,
      "CDOTA_Ability_Visage_GravekeepersCloak",
      "visage_gravekeepers_cloak",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Visage_GravekeepersCloak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_GravekeepersCloakClassInfo);
  }
  CDOTA_Ability_Visage_GravekeepersCloak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_GravekeepersCloakClass.m_pClassInfo = &CDOTA_Ability_Visage_GravekeepersCloak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_GravekeepersCloakClassInfo;
  CDOTA_Ability_Visage_GravekeepersCloak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_GravekeepersCloakClass.m_pBaseClassInfo = CDOTA_Ability_Visage_GravekeepersCloak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_GravekeepersCloakClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Visage_GravekeepersCloakClass = &CDOTA_Ability_Visage_GravekeepersCloak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_GravekeepersCloakClass;
  CDOTA_Ability_Visage_GravekeepersCloak::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_GravekeepersCloakClassInfo.m_pClass = &CDOTA_Ability_Visage_GravekeepersCloak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_GravekeepersCloakClass;
  CDOTA_Ability_Visage_GravekeepersCloak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_GravekeepersCloakClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Visage_GravekeepersCloakClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Visage_GravekeepersCloak::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_GravekeepersCloakClass;
}


// CDOTA_Ability_Visage_GravekeepersCloak::GetIntrinsicModifierName  (line 694, @0x0000000002d20d50, libserver.so)
// strings: "modifier_visage_gravekeepers_cloak"
const char *__fastcall CDOTA_Ability_Visage_GravekeepersCloak::GetIntrinsicModifierName(
        CDOTA_Ability_Visage_GravekeepersCloak *const this)
{
  return "modifier_visage_gravekeepers_cloak";
}


// CDOTA_Modifier_Visage_GravekeepersCloak_Stack::~CDOTA_Modifier_Visage_GravekeepersCloak_Stack  (line 701, @0x0000000002d267e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Visage_GravekeepersCloak_Stack::~CDOTA_Modifier_Visage_GravekeepersCloak_Stack(
        CDOTA_Modifier_Visage_GravekeepersCloak_Stack *const this)
{
  this->_vptr_CDOTA_Buff = &off_4668D10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Visage_GravekeepersCloak_Stack::~CDOTA_Modifier_Visage_GravekeepersCloak_Stack  (line 701, @0x0000000002d26800, libserver.so)  // inlines: ~CDOTA_Modifier_Visage_GravekeepersCloak_Stack
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Visage_GravekeepersCloak_Stack::~CDOTA_Modifier_Visage_GravekeepersCloak_Stack(
        CDOTA_Modifier_Visage_GravekeepersCloak_Stack *const this)
{
  this->_vptr_CDOTA_Buff = &off_4668D10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Visage_GravekeepersCloak_Stack::IsHidden  (line 706, @0x0000000002d20d60, libserver.so)
bool __fastcall CDOTA_Modifier_Visage_GravekeepersCloak_Stack::IsHidden(
        CDOTA_Modifier_Visage_GravekeepersCloak_Stack *const this)
{
  return 1;
}


// CDOTA_Modifier_Visage_GravekeepersCloak_Stack::IsPermanent  (line 707, @0x0000000002d20d70, libserver.so)
bool __fastcall CDOTA_Modifier_Visage_GravekeepersCloak_Stack::IsPermanent(
        CDOTA_Modifier_Visage_GravekeepersCloak_Stack *const this)
{
  return 1;
}


// CDOTA_Modifier_Visage_GravekeepersCloak_Stack::IsPurgable  (line 708, @0x0000000002d20d80, libserver.so)
bool __fastcall CDOTA_Modifier_Visage_GravekeepersCloak_Stack::IsPurgable(
        CDOTA_Modifier_Visage_GravekeepersCloak_Stack *const this)
{
  return 0;
}


// CDOTA_Modifier_Visage_GravekeepersCloak_Stack::GetAttributes  (line 714, @0x0000000002d20d90, libserver.so)
int __fastcall CDOTA_Modifier_Visage_GravekeepersCloak_Stack::GetAttributes(
        CDOTA_Modifier_Visage_GravekeepersCloak_Stack *const this)
{
  return 2;
}


// CDOTA_Modifier_Visage_GravekeepersCloak_Stack::OnCreated  (line 738, @0x0000000002ccae20, libserver.so)
void __fastcall CDOTA_Modifier_Visage_GravekeepersCloak_Stack::OnCreated(
        CDOTA_Modifier_Visage_GravekeepersCloak_Stack *const this,
        KeyValues *pKV)
{
  this->m_bIsRecovering = 0;
}


// CDOTA_Modifier_Visage_GravekeepersCloak_Stack::OnIntervalThink  (line 745, @0x0000000002ccc810, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::StartIntervalThink
// strings: "modifier_visage_gravekeepers_cloak"
void __fastcall CDOTA_Modifier_Visage_GravekeepersCloak_Stack::OnIntervalThink(
        CDOTA_Modifier_Visage_GravekeepersCloak_Stack *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_Buff *ModifierByName; // rax
  float v4; // xmm1_4

  Parent = CDOTA_Buff::GetParent(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_visage_gravekeepers_cloak", 0);
  if ( ModifierByName != 0 )
    (*(ModifierByName->_vptr_CDOTA_Buff + 25))(ModifierByName);
  this->m_bIsRecovering = 0;
  CDOTA_Buff::StartIntervalThink(this, -1.0, v4);
}


// CDOTA_Modifier_Visage_GravekeepersCloak::~CDOTA_Modifier_Visage_GravekeepersCloak  (line 760, @0x0000000002d32ce0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CDOTA_Modifier_Visage_GravekeepersCloak_Stack*, int>::Purge
void __fastcall CDOTA_Modifier_Visage_GravekeepersCloak::~CDOTA_Modifier_Visage_GravekeepersCloak(
        CDOTA_Modifier_Visage_GravekeepersCloak *const this)
{
  bool v2; // zf
  CUtlVectorBase<CDOTA_Modifier_Visage_GravekeepersCloak_Stack*,CUtlMemory<CDOTA_Modifier_Visage_GravekeepersCloak_Stack*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->vStacks.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_4669030;
  this->vStacks.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->vStacks.m_Memory,
        CUtlMemory<CDOTA_Modifier_Visage_GravekeepersCloak_Stack *,int>::Purge(&this->vStacks.m_Memory),
        (this->vStacks.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CDOTA_Modifier_Visage_GravekeepersCloak_Stack *,int>::Purge(p_m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Visage_GravekeepersCloak::~CDOTA_Modifier_Visage_GravekeepersCloak  (line 760, @0x0000000002d32dc0, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Modifier_Visage_GravekeepersCloak, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CDOTA_Modifier_Visage_GravekeepersCloak_Stack*, int>::Purge
void __fastcall CDOTA_Modifier_Visage_GravekeepersCloak::~CDOTA_Modifier_Visage_GravekeepersCloak(
        CDOTA_Modifier_Visage_GravekeepersCloak *const this)
{
  bool v2; // zf
  CUtlVectorBase<CDOTA_Modifier_Visage_GravekeepersCloak_Stack*,CUtlMemory<CDOTA_Modifier_Visage_GravekeepersCloak_Stack*,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->vStacks.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_4669030;
  this->vStacks.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->vStacks.m_Memory;
    CUtlMemory<CDOTA_Modifier_Visage_GravekeepersCloak_Stack *,int>::Purge(&this->vStacks.m_Memory);
    if ( (this->vStacks.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Modifier_Visage_GravekeepersCloak_Stack *,int>::Purge(p_m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Visage_GravekeepersCloak::IsHidden  (line 765, @0x0000000002d20da0, libserver.so)
bool __fastcall CDOTA_Modifier_Visage_GravekeepersCloak::IsHidden(CDOTA_Modifier_Visage_GravekeepersCloak *const this)
{
  return (*(this->_vptr_CDOTA_Buff + 27))(this) == 0;
}


// CDOTA_Modifier_Visage_GravekeepersCloak::IsAura  (line 773, @0x0000000002d20dc0, libserver.so)
bool __fastcall CDOTA_Modifier_Visage_GravekeepersCloak::IsAura(CDOTA_Modifier_Visage_GravekeepersCloak *const this)
{
  return 1;
}


// CDOTA_Modifier_Visage_GravekeepersCloak::GetModifierAura  (line 774, @0x0000000002d20dd0, libserver.so)
// strings: "modifier_visage_gravekeepers_cloak_secondary"
const char *__fastcall CDOTA_Modifier_Visage_GravekeepersCloak::GetModifierAura(
        CDOTA_Modifier_Visage_GravekeepersCloak *const this)
{
  return "modifier_visage_gravekeepers_cloak_secondary";
}


// CDOTA_Modifier_Visage_GravekeepersCloak::GetAuraSearchTeam  (line 776, @0x0000000002d20de0, libserver.so)
int __fastcall CDOTA_Modifier_Visage_GravekeepersCloak::GetAuraSearchTeam(
        CDOTA_Modifier_Visage_GravekeepersCloak *const this)
{
  return 1;
}


// CDOTA_Modifier_Visage_GravekeepersCloak::GetAuraSearchType  (line 777, @0x0000000002d20df0, libserver.so)
int __fastcall CDOTA_Modifier_Visage_GravekeepersCloak::GetAuraSearchType(
        CDOTA_Modifier_Visage_GravekeepersCloak *const this)
{
  return 19;
}


// CDOTA_Modifier_Visage_GravekeepersCloak::GetAuraSearchFlags  (line 778, @0x0000000002d20e00, libserver.so)
int __fastcall CDOTA_Modifier_Visage_GravekeepersCloak::GetAuraSearchFlags(
        CDOTA_Modifier_Visage_GravekeepersCloak *const this)
{
  return 1088;
}


// CDOTA_Modifier_Visage_GravekeepersCloak::GetAuraRadius  (line 779, @0x0000000002d20e10, libserver.so)
int __fastcall CDOTA_Modifier_Visage_GravekeepersCloak::GetAuraRadius(
        CDOTA_Modifier_Visage_GravekeepersCloak *const this)
{
  return this->radius;
}


// CDOTA_Modifier_Visage_GravekeepersCloak::GetAuraEntityReject  (line 780, @0x0000000002d2fa50, libserver.so)  // inlines: FStrEq, GetUnitName, String, ToCStr, _V_strcmp
// calls: CDOTA_Buff::GetCaster, strcmp
// strings: "npc_dota_visage_familiar1", "npc_dota_visage_familiar2", "npc_dota_visage_familiar3"
bool __fastcall CDOTA_Modifier_Visage_GravekeepersCloak::GetAuraEntityReject(
        CDOTA_Modifier_Visage_GravekeepersCloak *const this,
        CDOTA_BaseNPC *pNPC)
{
  __int64 v4; // r12
  CDOTA_BaseNPC *Caster; // rax
  const char *m_pAsString; // rbx
  bool v8; // r12

  v4 = (*(pNPC->_vptr_IHandleEntity + 413))(pNPC);
  Caster = CDOTA_Buff::GetCaster(this);
  if ( v4 != (*(Caster->_vptr_IHandleEntity + 413))(Caster) )
    return 1;
  m_pAsString = pNPC->m_iszUnitName.m_Value.u.m_pAsString;
  v8 = 1;
  if ( m_pAsString != 0
    && (m_pAsString == "npc_dota_visage_familiar1"
     || strcmp(m_pAsString, "npc_dota_visage_familiar1") == 0
     || m_pAsString == "npc_dota_visage_familiar2"
     || strcmp(m_pAsString, "npc_dota_visage_familiar2") == 0
     || m_pAsString == "npc_dota_visage_familiar3"
     || strcmp(m_pAsString, "npc_dota_visage_familiar3") == 0) )
  {
    return 0;
  }
  return v8;
}


// CDOTA_Modifier_Visage_GravekeepersCloak::OnCreated  (line 814, @0x0000000002d19ab0, libserver.so)  // inlines: AddToTail, CopyConstruct<CDOTA_Modifier_Visage_GravekeepersCloak_Stack*>, Element, GrowMemory, operator[]
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, DotaRetrieveAbilityValue<float>, CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::GetParent, CDOTA_ParticleManager::SetParticleControlEnt, KeyValues::~KeyValues, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, CUtlMemory<CDOTA_Modifier_Visage_GravekeepersCloak_Stack*, int>::Grow (15 total)
// strings: "max_layers", "minimum_damage", "recovery_time", "particles/units/heroes/hero_visage/visage_cloak_lyr1.vpcf", "attach_hitloc", "modifier_visage_gravekeepers_cloak_stack"
void __fastcall CDOTA_Modifier_Visage_GravekeepersCloak::OnCreated(
        CDOTA_Modifier_Visage_GravekeepersCloak *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  int max_layers; // esi
  int v9; // eax
  CDOTA_Modifier_Visage_GravekeepersCloak *v10; // r12
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Parent; // rax
  const CBaseAnimating *v14; // r15
  CDOTA_ParticleManager *v15; // rax
  CDOTA_Modifier_Visage_GravekeepersCloak_Stack **v16; // rax
  CDOTABaseAbility *v17; // r14
  CDOTA_BaseNPC *v18; // r13
  CDOTA_BaseNPC *v19; // rax
  CDOTA_Buff *v20; // r14
  __int64 m_Size; // r13
  int v22; // eax
  CDOTA_BaseNPC *v23; // rax
  CDOTA_Modifier_Visage_GravekeepersCloak *v24; // [rsp+8h] [rbp-58h]
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-38h]

  v26 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->damage_reduction, "damage_reduction");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->max_layers, "max_layers");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(v5, &this->minimum_damage, "minimum_damage");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->recovery_time, "recovery_time");
  v7 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v7, &this->radius, "radius");
  max_layers = this->max_layers;
  v9 = 4;
  this->m_nFXIndex[0] = -1;
  this->m_nFXIndex[1] = -1;
  this->m_nFXIndex[2] = -1;
  this->m_nFXIndex[3] = -1;
  if ( max_layers <= 4 )
    v9 = max_layers;
  if ( v9 > 0 )
  {
    v10 = this;
    v24 = (&this->_vptr_CDOTA_Buff + 4 * (v9 - 1) + 4);
    do
    {
      v10 = (v10 + 4);
      Caster = CDOTA_Buff::GetCaster(this);
      ParticleManager = GetParticleManager();
      v10->radius = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_visage/visage_cloak_lyr1.vpcf",
                      1,
                      Caster,
                      0,
                      0);
      Parent = CDOTA_Buff::GetParent(this);
      LODWORD(Caster) = v10->radius;
      v14 = Parent;
      v15 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v15, Caster, 1, v14, 5, "attach_hitloc", vec3_invalid, 1);
    }
    while ( v10 != v24 );
  }
  (*(this->_vptr_CDOTA_Buff + 28))(this);
  while ( this->vStacks.m_Size < this->max_layers )
  {
    KeyValues::KeyValues(&kv, "modifier_visage_gravekeepers_cloak_stack");
    v17 = CDOTA_Buff::GetAbility(this);
    v18 = CDOTA_Buff::GetCaster(this);
    v19 = CDOTA_Buff::GetParent(this);
    v20 = CDOTA_BaseNPC::AddNewModifier(v19, v18, v17, "modifier_visage_gravekeepers_cloak_stack", &kv, 0);
    if ( v20 != 0 )
    {
      m_Size = this->vStacks.m_Size;
      v22 = this->vStacks.m_Size;
      if ( m_Size == this->vStacks.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CDOTA_Modifier_Visage_GravekeepersCloak_Stack *,int>::Grow(&this->vStacks.m_Memory, 1);
        v22 = this->vStacks.m_Size;
      }
      this->vStacks.m_Size = v22 + 1;
      v16 = &this->vStacks.m_Memory.m_pMemory[m_Size];
      if ( v16 != 0 )
        *v16 = v20;
    }
    KeyValues::~KeyValues(&kv);
  }
  v23 = CDOTA_Buff::GetCaster(this);
  CBaseAnimating::SetBodygroup(v23, 1, 4);
}


// CDOTA_Modifier_Visage_GravekeepersCloak::OnRefresh  (line 859, @0x0000000002d0b960, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetCaster, CBaseAnimating::SetBodygroup
// strings: "max_layers", "minimum_damage", "recovery_time"
void __fastcall CDOTA_Modifier_Visage_GravekeepersCloak::OnRefresh(
        CDOTA_Modifier_Visage_GravekeepersCloak *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  int v7; // r12d
  CDOTA_BaseNPC *Caster; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_reduction", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->damage_reduction = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->max_layers = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "max_layers", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_9:
      this->minimum_damage = 0.0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
LABEL_10:
      this->recovery_time = 0;
      goto LABEL_6;
    }
  }
  this->max_layers = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_9;
LABEL_4:
  this->minimum_damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "minimum_damage", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_10;
LABEL_5:
  this->recovery_time = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "recovery_time", -1, 0);
LABEL_6:
  v7 = (*(this->_vptr_CDOTA_Buff + 27))(this);
  Caster = CDOTA_Buff::GetCaster(this);
  CBaseAnimating::SetBodygroup(Caster, 1, v7);
}


// CDOTA_Modifier_Visage_GravekeepersCloak::DeclareFunctions  (line 873, @0x0000000002ccae30, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Visage_GravekeepersCloak::GetModifierTotal_ConstantBlock(CModifierParams const&)
void __fastcall CDOTA_Modifier_Visage_GravekeepersCloak::DeclareFunctions(
        CDOTA_Modifier_Visage_GravekeepersCloak *const this)
{
  this->m_Functions[89].__pfn = CDOTA_Modifier_Visage_GravekeepersCloak::GetModifierTotal_ConstantBlock;
  this->m_Functions[89].__delta = 0;
}


// CDOTA_Modifier_Visage_GravekeepersCloak::OnStackCountChanged  (line 880, @0x0000000002cd1d00, libserver.so)
// calls: CDOTA_Buff::GetCaster, CBaseAnimating::SetBodygroup, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::GetParent, CDOTA_ParticleManager::SetParticleControlEnt
// strings: "particles/units/heroes/hero_visage/visage_cloak_lyr1.vpcf", "attach_hitloc"
void __fastcall CDOTA_Modifier_Visage_GravekeepersCloak::OnStackCountChanged(
        CDOTA_Modifier_Visage_GravekeepersCloak *const this,
        int iOldCount)
{
  CDOTA_Modifier_Visage_GravekeepersCloak *v3; // r12
  int v4; // ebx
  int v5; // r14d
  int v6; // ebx
  CDOTA_BaseNPC *v7; // rax
  int v8; // r15d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Caster; // r15
  CDOTA_ParticleManager *v11; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_ParticleManager *v13; // rax
  const CBaseAnimating *pEnt; // [rsp+8h] [rbp-38h]

  v3 = this;
  v4 = 0;
  v5 = (*(this->_vptr_CDOTA_Buff + 27))(this, iOldCount);
  do
  {
    if ( v5 <= v4 )
    {
      v8 = v3->m_nFXIndex[0];
      if ( v8 != -1 )
      {
        ParticleManager = GetParticleManager();
        CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, v8, 0);
        v3->m_nFXIndex[0] = -1;
      }
    }
    else if ( v3->m_nFXIndex[0] == -1 )
    {
      Caster = CDOTA_Buff::GetCaster(this);
      v11 = GetParticleManager();
      v3->m_nFXIndex[0] = CDOTA_ParticleManager::CreateParticle(
                            v11,
                            "particles/units/heroes/hero_visage/visage_cloak_lyr1.vpcf",
                            1,
                            Caster,
                            0,
                            0);
      Parent = CDOTA_Buff::GetParent(this);
      LODWORD(Caster) = v3->m_nFXIndex[0];
      pEnt = Parent;
      v13 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v13, Caster, 1, pEnt, 5, "attach_hitloc", vec3_invalid, 1);
    }
    ++v4;
    v3 = (v3 + 4);
  }
  while ( v4 != 4 );
  v6 = (*(this->_vptr_CDOTA_Buff + 27))(this);
  v7 = CDOTA_Buff::GetCaster(this);
  CBaseAnimating::SetBodygroup(v7, 1, v6);
}


// CDOTA_Modifier_Visage_GravekeepersCloak::OnDestroy  (line 902, @0x0000000002cce4f0, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect
void __fastcall CDOTA_Modifier_Visage_GravekeepersCloak::OnDestroy(CDOTA_Modifier_Visage_GravekeepersCloak *const this)
{
  __int64 i; // rbx
  int v3; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax

  for ( i = 0; i != 4; ++i )
  {
    v3 = this->m_nFXIndex[i];
    if ( v3 != -1 )
    {
      ParticleManager = GetParticleManager();
      CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, v3, 0);
      this->m_nFXIndex[i] = -1;
    }
  }
}


// CDOTA_Modifier_Visage_GravekeepersCloak::GetModifierTotal_ConstantBlock  (line 919, @0x0000000002cd91e0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsOwnedByAnyPlayer, IsValid, LookupEntity, SetRecovering, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::IsEntityInRange, CDOTA_Buff::StartIntervalThink, CBaseAnimating::SetBodygroup
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Visage_GravekeepersCloak::GetModifierTotal_ConstantBlock(
        CDOTA_Modifier_Visage_GravekeepersCloak *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r13
  CDOTA_BaseNPC *v9; // r14
  CDOTA_BaseNPC *Parent; // rax
  float v11; // xmm1_4
  int v12; // r12d
  float v13; // xmm1_4
  __m128i v14; // xmm2
  int m_Size; // ecx
  __int64 v16; // rdx
  CDOTA_Modifier_Visage_GravekeepersCloak_Stack *v17; // rdi
  float recovery_time; // xmm0_4
  int v19; // r13d
  CDOTA_BaseNPC *Caster; // rax
  float v21; // [rsp+Ch] [rbp-24h]
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1
    || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v6 = &v5[params->hattacker.m_Index & 0x1FF]) == 0
    || m_Index != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) == 0
    && this->minimum_damage <= params->fDamage
    && (v9 = CDOTA_Buff::GetCaster(this),
        Parent = CDOTA_Buff::GetParent(this),
        CDOTA_BaseNPC::IsEntityInRange(Parent, v9, 1200.0, v11))
    && m_pInstance != 0
    && CDOTA_Buff::GetParent(this) != m_pInstance
    && (m_pInstance[61].m_hPrivateScope.m_hScope != 0 || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0) )
  {
    v21 = this->damage_reduction * params->fDamage;
    v12 = (((*(this->_vptr_CDOTA_Buff + 27))(this) * v21) / 100.0);
    if ( (*(this->_vptr_CDOTA_Buff + 27))(this) > 0 )
    {
      m_Size = this->vStacks.m_Size;
      if ( m_Size > 0 )
      {
        v16 = 0;
        while ( 1 )
        {
          v17 = this->vStacks.m_Memory.m_pMemory[v16];
          if ( v17 != 0 && !v17->m_bIsRecovering )
            break;
          if ( m_Size <= ++v16 )
            goto LABEL_21;
        }
        recovery_time = this->recovery_time;
        v17->m_bIsRecovering = 1;
        CDOTA_Buff::StartIntervalThink(v17, recovery_time, v13);
      }
LABEL_21:
      v19 = (*(this->_vptr_CDOTA_Buff + 27))(this);
      (*(this->_vptr_CDOTA_Buff + 26))(this);
      Caster = CDOTA_Buff::GetCaster(this);
      CBaseAnimating::SetBodygroup(Caster, 1, v19 - 1);
    }
    *v14.m128i_i32 = v12;
    *&result.m_eType = (_mm_cvtsi128_si32(v14) << 32) | 1;
  }
  else
  {
    *&result.m_eType = 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Visage_GravekeepersCloak_Secondary::~CDOTA_Modifier_Visage_GravekeepersCloak_Secondary  (line 969, @0x0000000002d26790, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Visage_GravekeepersCloak_Secondary::~CDOTA_Modifier_Visage_GravekeepersCloak_Secondary(
        CDOTA_Modifier_Visage_GravekeepersCloak_Secondary *const this)
{
  this->_vptr_CDOTA_Buff = &off_4669350;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Visage_GravekeepersCloak_Secondary::~CDOTA_Modifier_Visage_GravekeepersCloak_Secondary  (line 969, @0x0000000002d267b0, libserver.so)  // inlines: ~CDOTA_Modifier_Visage_GravekeepersCloak_Secondary
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Visage_GravekeepersCloak_Secondary::~CDOTA_Modifier_Visage_GravekeepersCloak_Secondary(
        CDOTA_Modifier_Visage_GravekeepersCloak_Secondary *const this)
{
  this->_vptr_CDOTA_Buff = &off_4669350;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Visage_GravekeepersCloak_Secondary::OnCreated  (line 988, @0x0000000002d08d40, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Visage_GravekeepersCloak_Secondary::OnCreated(
        CDOTA_Modifier_Visage_GravekeepersCloak_Secondary *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->damage_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_reduction", -1, 0);
  else
    this->damage_reduction = 0;
}


// CDOTA_Modifier_Visage_GravekeepersCloak_Secondary::DeclareFunctions  (line 995, @0x0000000002ccae50, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Visage_GravekeepersCloak_Secondary::GetModifierTotal_ConstantBlock(CModifierParams const&)
void __fastcall CDOTA_Modifier_Visage_GravekeepersCloak_Secondary::DeclareFunctions(
        CDOTA_Modifier_Visage_GravekeepersCloak_Secondary *const this)
{
  this->m_Functions[89].__pfn = CDOTA_Modifier_Visage_GravekeepersCloak_Secondary::GetModifierTotal_ConstantBlock;
  this->m_Functions[89].__delta = 0;
}


// CDOTA_Modifier_Visage_GravekeepersCloak_Secondary::GetModifierTotal_ConstantBlock  (line 1003, @0x0000000002cdd140, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsOwnedByAnyPlayer, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::GetParent
// strings: "modifier_visage_gravekeepers_cloak"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Visage_GravekeepersCloak_Secondary::GetModifierTotal_ConstantBlock(
        CDOTA_Modifier_Visage_GravekeepersCloak_Secondary *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax
  int v7; // eax
  uint32 m_Index; // edx
  int v9; // r14d
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rcx
  CEntityInstance *m_pInstance; // r13
  __m128i v13; // xmm2
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x10000000) != 0 )
    goto LABEL_2;
  Caster = CDOTA_Buff::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_visage_gravekeepers_cloak", 0);
  if ( ModifierByName == 0 )
    goto LABEL_2;
  v7 = (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName);
  m_Index = params->hattacker.m_Index;
  v9 = v7;
  if ( m_Index + 2 > 1
    && (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) != 0
    && (v11 = &v10[params->hattacker.m_Index & 0x1FF]) != 0
    && m_Index == v11->m_EHandle.m_Index
    && (m_pInstance = v11->m_pInstance, v11->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
    && CDOTA_Buff::GetParent(this) != m_pInstance
    && (m_pInstance[61].m_hPrivateScope.m_hScope != 0 || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0) )
  {
    *v13.m128i_i32 = (((this->damage_reduction * params->fDamage) * v9) / 100.0);
    *&result.m_eType = (_mm_cvtsi128_si32(v13) << 32) | 1;
  }
  else
  {
LABEL_2:
    *&result.m_eType = 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Ability_Visage_SummonFamiliars::~CDOTA_Ability_Visage_SummonFamiliars  (line 1035, @0x0000000002d46380, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Visage_SummonFamiliars::~CDOTA_Ability_Visage_SummonFamiliars(
        CDOTA_Ability_Visage_SummonFamiliars *const this)
{
  this->_vptr_IHandleEntity = &off_46696B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hExistingUnits);
  if ( (this->m_hExistingUnits.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hExistingUnits.m_Memory),
        (this->m_hExistingUnits.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hExistingUnits.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_Visage_SummonFamiliars::~CDOTA_Ability_Visage_SummonFamiliars  (line 1035, @0x0000000002d468f0, libserver.so)  // inlines: Purge, ~CDOTA_Ability_Visage_SummonFamiliars, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Visage_SummonFamiliars::~CDOTA_Ability_Visage_SummonFamiliars(
        CDOTA_Ability_Visage_SummonFamiliars *const this)
{
  this->_vptr_IHandleEntity = &off_46696B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hExistingUnits);
  if ( (this->m_hExistingUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hExistingUnits.m_Memory);
    if ( (this->m_hExistingUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hExistingUnits.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Visage_SummonFamiliars::Schema_DynamicBinding  (line 1037, @0x0000000002d20e20, libserver.so)
// globals: CDOTA_Ability_Visage_SummonFamiliars::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Visage_SummonFamiliars::Schema_DynamicBinding(
        const CDOTA_Ability_Visage_SummonFamiliars *const this)
{
  return CDOTA_Ability_Visage_SummonFamiliars::s_pSchemaBinding;
}


// CDOTA_Ability_Visage_SummonFamiliars::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1037, @0x0000000002d20e30, libserver.so)
// globals: CDOTA_Ability_Visage_SummonFamiliars::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Visage_SummonFamiliars::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Visage_SummonFamiliars::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Visage_SummonFamiliars::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Visage_SummonFamiliars::CEntityInstanceEntityClass::DestructInstance  (line 1037, @0x0000000002d20e40, libserver.so)  // inlines: Destruct<CDOTA_Ability_Visage_SummonFamiliars>
void __fastcall CDOTA_Ability_Visage_SummonFamiliars::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Visage_SummonFamiliars::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Visage_SummonFamiliars::CEntityInstanceEntityClass::FreeInstance  (line 1037, @0x0000000002d20e60, libserver.so)
void __fastcall CDOTA_Ability_Visage_SummonFamiliars::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Visage_SummonFamiliars::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Visage_SummonFamiliars::CEntityInstanceEntityClass::CanAllocate  (line 1037, @0x0000000002d20e80, libserver.so)
bool __fastcall CDOTA_Ability_Visage_SummonFamiliars::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Visage_SummonFamiliars::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Visage_SummonFamiliars::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1037, @0x0000000002d20e90, libserver.so)
// globals: CDOTA_Ability_Visage_SummonFamiliars::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Visage_SummonFamiliars::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Visage_SummonFamiliars::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Visage_SummonFamiliars::s_pSchemaBinding;
}


// CDOTA_Ability_Visage_SummonFamiliars::CEntityInstanceEntityClass::AllocateInstance  (line 1037, @0x0000000002d25610, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Visage_SummonFamiliars::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Visage_SummonFamiliars::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1200);
  memset(v1, 0, 0x4B0u);
  return v1;
}


// CDOTA_Ability_Visage_SummonFamiliars::CEntityInstanceEntityClass::ConstructInstance  (line 1037, @0x0000000002d32240, libserver.so)  // inlines: CDOTA_Ability_Visage_SummonFamiliars, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_Visage_SummonFamiliars>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Visage_SummonFamiliars::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Visage_SummonFamiliars::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 294) = 0;
    *p = &off_46696B0;
    *(p + 148) = 0;
    *(p + 298) = 0;
    *(p + 299) = 0;
  }
  return p;
}


// CDOTA_Ability_Visage_SummonFamiliars::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1037, @0x0000000002d34e50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Visage_SummonFamiliars::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Visage_SummonFamiliars::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Visage_SummonFamiliars::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1037, @0x0000000002d34e70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Visage_SummonFamiliars::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Visage_SummonFamiliars::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Visage_SummonFamiliars::GetEntityClassInternal  (line 1037, @0x0000000002d4ba70, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "visage_summon_familiars", "CDOTA_Ability_Visage_SummonFamiliars"
// globals: `guard variable for'CDOTA_Ability_Visage_SummonFamiliars::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliarsClass, CDOTA_Ability_Visage_SummonFamiliars::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliarsClass, __dso_handle, CDOTA_Ability_Visage_SummonFamiliars::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Visage_SummonFamiliars::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliarsClassInfo, CDOTA_Ability_Visage_SummonFamiliars::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliarsClassInfo
CEntityClass *__cdecl CDOTA_Ability_Visage_SummonFamiliars::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Visage_SummonFamiliars::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliarsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Visage_SummonFamiliars::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliarsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Visage_SummonFamiliars::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliarsClass);
    CDOTA_Ability_Visage_SummonFamiliars::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliarsClass._vptr_CEntityClass = off_4669630;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Visage_SummonFamiliars::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliarsClass);
    __cxa_atexit(
      CDOTA_Ability_Visage_SummonFamiliars::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Visage_SummonFamiliars::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliarsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Visage_SummonFamiliarsClass != 0 )
    return &CDOTA_Ability_Visage_SummonFamiliars::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliarsClass;
  if ( `guard variable for'CDOTA_Ability_Visage_SummonFamiliars::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliarsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Visage_SummonFamiliars::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliarsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Visage_SummonFamiliars::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliarsClassInfo,
      "CDOTA_Ability_Visage_SummonFamiliars",
      "visage_summon_familiars",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Visage_SummonFamiliars::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliarsClassInfo);
  }
  CDOTA_Ability_Visage_SummonFamiliars::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliarsClass.m_pClassInfo = &CDOTA_Ability_Visage_SummonFamiliars::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliarsClassInfo;
  CDOTA_Ability_Visage_SummonFamiliars::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliarsClass.m_pBaseClassInfo = CDOTA_Ability_Visage_SummonFamiliars::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliarsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Visage_SummonFamiliarsClass = &CDOTA_Ability_Visage_SummonFamiliars::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliarsClass;
  CDOTA_Ability_Visage_SummonFamiliars::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliarsClassInfo.m_pClass = &CDOTA_Ability_Visage_SummonFamiliars::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliarsClass;
  CDOTA_Ability_Visage_SummonFamiliars::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliarsClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Visage_SummonFamiliarsClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Visage_SummonFamiliars::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliarsClass;
}


// CDOTA_Ability_Visage_SummonFamiliars::YouForgotToImplementOrDeclareServerClass  (line 1058, @0x0000000002ccae70, libserver.so)
int __fastcall CDOTA_Ability_Visage_SummonFamiliars::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Visage_SummonFamiliars *const this)
{
  return 0;
}


// CDOTA_Ability_Visage_SummonFamiliars::GetServerClass  (line 1058, @0x0000000002cde4f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Visage_SummonFamiliars::GetServerClass(
        CDOTA_Ability_Visage_SummonFamiliars *const this)
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


// CDOTA_Ability_Visage_SummonFamiliars::OnAbilityPhaseStart  (line 1067, @0x0000000002ccae80, libserver.so)
bool __fastcall CDOTA_Ability_Visage_SummonFamiliars::OnAbilityPhaseStart(
        CDOTA_Ability_Visage_SummonFamiliars *const this)
{
  return 1;
}


// CDOTA_Ability_Visage_SummonFamiliars::OnAbilityPhaseInterrupted  (line 1074, @0x0000000002ccae90, libserver.so)
void __fastcall CDOTA_Ability_Visage_SummonFamiliars::OnAbilityPhaseInterrupted(
        CDOTA_Ability_Visage_SummonFamiliars *const this)
{
  ;
}


// CDOTA_Ability_Visage_SummonFamiliars::OnSpellStart  (line 1081, @0x0000000002d13700, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, GetTeamNumber, GrowMemory, IndexToIdentity, Init, LookupEntity, NetworkStateChanged, Set, SetUnitLabelIndex, ToDOTABaseNPC, VectorAdd, VectorMultiply, operator CBaseEntity*, operator*, operator+, operator=<int>, operator[]
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::StartGesture, V_snprintf, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove, CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::ForceKill, CDOTA_BaseNPC::HasScepter, DOTA_EmitSound, CBaseEntity::GetAbsOrigin, DOTA_Character_ScriptSpawn_Synchronous, CDOTA_BaseNPC::SetControllableByPlayer, FindClearSpaceForUnit (27 total)
// strings: "npc_dota_visage_familiar%d", "Hero_Visage.SummonFamiliars.Cast", "modifier_visage_summon_familiars_damage_charge", "particles/units/heroes/hero_visage/visage_summon_familiars.vpcf", "attach_chain_rt", "attach_chain_lf" (8 total)
void __fastcall CDOTA_Ability_Visage_SummonFamiliars::OnSpellStart(CDOTA_Ability_Visage_SummonFamiliars *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  int m_Value; // eax
  char *szUnitName; // rax
  int v5; // ecx
  CEntityInstance *v6; // rax
  CEntityInstance *v7; // rbx
  CDOTA_BaseNPC *v8; // rax
  unsigned __int16 v9; // si
  int v10; // edi
  int v11; // edx
  CDOTA_BaseNPC *m_pInstance; // rcx
  CEntityIdentity *v13; // rsi
  CEntityIdentity *v14; // rsi
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rbx
  int v18; // r13d
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC *v21; // r13
  CEntityIdentity *m_pEntity; // rax
  int v23; // edx
  __int16 v24; // cx
  __int64 m_Size; // rbx
  int v26; // eax
  vec_t *p_m_Index; // rax
  void (__fastcall *v28)(CDOTA_BaseNPC *, _QWORD); // rbx
  CDOTA_BaseNPC *v29; // rax
  void (__fastcall *v30)(CDOTA_BaseNPC *, CDOTA_BaseNPC *); // rbx
  CDOTA_BaseNPC *v31; // rax
  CDOTA_BaseNPC *v32; // rax
  int v33; // eax
  CDOTA_BaseNPC *v34; // rax
  float v35; // xmm1_4
  CDOTA_BaseNPC *v36; // rax
  const Vector *AbsOrigin; // rax
  vec_t v38; // xmm2_4
  float v39; // xmm1_4
  CDOTA_BaseNPC *v40; // rax
  const QAngle *AbsAngles; // rax
  CDOTA_BaseNPC *v42; // rax
  CDOTABaseAbility *AbilityByIndex; // rbx
  CDOTA_BaseNPC *v44; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r15d
  CDOTA_ParticleManager *v47; // rax
  CDOTA_BaseNPC *v48; // r15
  CDOTA_ParticleManager *v49; // rax
  CDOTA_BaseNPC *v50; // r15
  CDOTA_ParticleManager *v51; // rax
  CDOTA_BaseNPC *v52; // r15
  CDOTA_ParticleManager *v53; // rax
  CDOTA_BaseNPC *v54; // r15
  CDOTA_ParticleManager *v55; // rax
  CDOTA_ParticleManager *v56; // rax
  CDOTABaseAbility *v57; // rax
  int iMaxUnits; // [rsp+1Ch] [rbp-B4h]
  const char *pszScriptName; // [rsp+20h] [rbp-B0h]
  float v60; // [rsp+28h] [rbp-A8h]
  float v61; // [rsp+2Ch] [rbp-A4h]
  float v62; // [rsp+30h] [rbp-A0h]
  float v63; // [rsp+34h] [rbp-9Ch]
  float v64; // [rsp+38h] [rbp-98h]
  int v65; // [rsp+40h] [rbp-90h]
  int v66; // [rsp+44h] [rbp-8Ch]
  int i; // [rsp+48h] [rbp-88h]
  float nFXIndex; // [rsp+4Ch] [rbp-84h]
  int nFXIndexa; // [rsp+4Ch] [rbp-84h]
  Vector vFwd; // [rsp+50h] [rbp-80h] BYREF
  Vector vRight; // [rsp+60h] [rbp-70h] BYREF
  Vector vSpawnPoint; // [rsp+70h] [rbp-60h]
  KeyValues kv; // [rsp+80h] [rbp-50h] BYREF
  unsigned __int64 v74; // [rsp+98h] [rbp-38h]
  Vector v75; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v76; // 0:xmm0_8.8,8:xmm1_4.4

  v74 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(Caster, 1513, 0.0, 0.0, 0, 0, 1.0);
  m_Value = this->m_iLevel.m_Value;
  if ( m_Value == 2 )
  {
    szUnitName = this->szUnitName;
    v5 = 2;
    pszScriptName = this->szUnitName;
    goto LABEL_6;
  }
  if ( m_Value <= 2 )
  {
    if ( m_Value == 1 )
    {
      szUnitName = this->szUnitName;
      v5 = 1;
      pszScriptName = this->szUnitName;
      goto LABEL_6;
    }
  }
  else
  {
    if ( m_Value == 3 )
    {
      szUnitName = this->szUnitName;
      v5 = 3;
      pszScriptName = this->szUnitName;
      goto LABEL_6;
    }
    if ( m_Value == 4 )
    {
      szUnitName = this->szUnitName;
      v5 = 4;
      pszScriptName = this->szUnitName;
LABEL_6:
      V_snprintf(szUnitName, 260, "npc_dota_visage_familiar%d", v5);
      goto LABEL_7;
    }
  }
  pszScriptName = this->szUnitName;
LABEL_7:
  while ( this->m_hExistingUnits.m_Size > 0 )
  {
    v6 = CEntityHandle::operator CEntityInstance *(this->m_hExistingUnits.m_Memory.m_pMemory);
    v7 = v6;
    if ( v6 != 0 && BYTE3(v6[7]._vptr_IHandleEntity) != 0 )
    {
      v8 = CDOTABaseAbility::GetCaster(this);
      if ( HIDWORD(v7[11].m_pEntity) == -1 )
      {
        v9 = 0x7FFF;
        v10 = 0x7FFF;
      }
      else
      {
        v9 = WORD2(v7[11].m_pEntity) & 0x7FFF;
        v10 = v9;
      }
      v11 = (HIDWORD(v7[11].m_pEntity) >> 15 << 15) | v9 & 0x7FFF;
      LODWORD(vSpawnPoint.x) = v11;
      m_pInstance = 0;
      if ( (v11 + 2) > 1 )
      {
        v13 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v10 >> 9];
        if ( v13 != 0 )
        {
          v14 = &v13[v10 & 0x1FF];
          if ( v14 != 0 && v11 == v14->m_EHandle.m_Index )
            m_pInstance = v14->m_pInstance;
        }
      }
      if ( v8 == m_pInstance )
        CDOTA_BaseNPC::ForceKill(v7, 0);
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&this->m_hExistingUnits, 0);
  }
  v15 = CDOTABaseAbility::GetCaster(this);
  iMaxUnits = 3 - !CDOTA_BaseNPC::HasScepter(v15);
  v16 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Visage.SummonFamiliars.Cast", v16);
  v65 = 0;
  i = 1;
  do
  {
    v17 = CDOTABaseAbility::GetCaster(this);
    v18 = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
    v19 = CDOTABaseAbility::GetCaster(this);
    v75 = *CBaseEntity::GetAbsOrigin(v19);
    v20 = DOTA_Character_ScriptSpawn_Synchronous(pszScriptName, v18, v17, 0, 0, v75);
    v21 = v20;
    if ( v20 != 0 )
    {
      vSpawnPoint.x = NAN;
      m_pEntity = v20->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v23 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v24 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v24 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(vSpawnPoint.x) = v24 | LOWORD(vSpawnPoint.x) & 0x8000;
        LODWORD(vSpawnPoint.x) = (v23 << 15) | LOWORD(vSpawnPoint.x) & 0x7FFF;
      }
      m_Size = this->m_hExistingUnits.m_Size;
      v26 = this->m_hExistingUnits.m_Size;
      if ( m_Size == this->m_hExistingUnits.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hExistingUnits.m_Memory, 1);
        v26 = this->m_hExistingUnits.m_Size;
      }
      this->m_hExistingUnits.m_Size = v26 + 1;
      p_m_Index = &this->m_hExistingUnits.m_Memory.m_pMemory[m_Size].m_Index;
      if ( p_m_Index != 0 )
        *p_m_Index = vSpawnPoint.x;
      v28 = *(v21->_vptr_IHandleEntity + 70);
      v29 = CDOTABaseAbility::GetCaster(this);
      v28(v21, v29->m_iTeamNum.m_Value);
      v30 = *(v21->_vptr_IHandleEntity + 40);
      v31 = CDOTABaseAbility::GetCaster(this);
      v30(v21, v31);
      v32 = CDOTABaseAbility::GetCaster(this);
      v33 = (*(v32->_vptr_IHandleEntity + 414))(v32);
      CDOTA_BaseNPC::SetControllableByPlayer(v21, v33, 0);
      v66 = i;
      if ( i != v21->m_nUnitLabelIndex.m_Value )
      {
        (*(v21->_vptr_IHandleEntity + 22))(v21, 3417, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v21->m_nUnitLabelIndex.m_Value = i;
      }
      v34 = CDOTABaseAbility::GetCaster(this);
      (*(v34->_vptr_IHandleEntity + 61))(v34, &vFwd, &vRight, 0);
      v35 = v65 - 60.0;
      nFXIndex = 200.0 * vFwd.x;
      v64 = 200.0 * vFwd.y;
      v63 = 200.0 * vFwd.z;
      v60 = vRight.x * v35;
      v61 = vRight.y * v35;
      v62 = v35 * vRight.z;
      v36 = CDOTABaseAbility::GetCaster(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v36);
      v38 = (v60 + AbsOrigin->x) + nFXIndex;
      v39 = v62 + AbsOrigin->z;
      vSpawnPoint.y = (v61 + AbsOrigin->y) + v64;
      vSpawnPoint.x = v38;
      v76.z = v39 + v63;
      *&v76.x = *&vSpawnPoint.x;
      vSpawnPoint.z = v76.z;
      FindClearSpaceForUnit(v21, v76, 1);
      v40 = CDOTABaseAbility::GetCaster(this);
      AbsAngles = CBaseEntity::GetAbsAngles(v40);
      CBaseEntity::SetAbsAngles(v21, AbsAngles);
      KeyValues::KeyValues(&kv, "modifier_visage_summon_familiars_damage_charge");
      v42 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v21, v42, this, "modifier_visage_summon_familiars_damage_charge", &kv, 0);
      AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v21, 0);
      v44 = CDOTABaseAbility::GetCaster(this);
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_visage/visage_summon_familiars.vpcf",
                   2,
                   v44,
                   0,
                   0);
      v47 = GetParticleManager();
      nFXIndexa = Particle;
      CDOTA_ParticleManager::SetParticleControl(v47, Particle, 0, *&vSpawnPoint.x, vSpawnPoint.z);
      v48 = CDOTABaseAbility::GetCaster(this);
      v49 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v49, nFXIndexa, 1, v48, 5, "attach_chain_rt", vec3_invalid, 1);
      v50 = CDOTABaseAbility::GetCaster(this);
      v51 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v51, nFXIndexa, 2, v50, 5, "attach_chain_lf", vec3_invalid, 1);
      v52 = CDOTABaseAbility::GetCaster(this);
      v53 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v53, nFXIndexa, 3, v52, 5, "attach_chain_rt0", vec3_invalid, 1);
      v54 = CDOTABaseAbility::GetCaster(this);
      v55 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v55, nFXIndexa, 4, v54, 5, "attach_chain_lf0", vec3_invalid, 1);
      v56 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v56, nFXIndexa);
      if ( AbilityByIndex != 0 )
      {
        while ( AbilityByIndex->m_iLevel.m_Value < this->m_iLevel.m_Value )
          CDOTABaseAbility::UpgradeAbility(AbilityByIndex, 0);
      }
      v57 = CDOTA_BaseNPC::GetAbilityByIndex(v21, 1);
      if ( v57 != 0 )
        CDOTABaseAbility::UpgradeAbility(v57, 0);
      KeyValues::~KeyValues(&kv);
    }
    else
    {
      v66 = i;
    }
    ++i;
    v65 += 120;
  }
  while ( iMaxUnits > v66 );
}


// CDOTA_Ability_Visage_SummonFamiliars::OnUnStolen  (line 1194, @0x0000000002ceb850, libserver.so)
// calls: CDOTABaseAbility::OnUnStolen, CDOTA_Ability_Visage_SummonFamiliars::DestroyFamiliars
void __fastcall CDOTA_Ability_Visage_SummonFamiliars::OnUnStolen(CDOTA_Ability_Visage_SummonFamiliars *const this)
{
  CDOTABaseAbility::OnUnStolen(this);
  CDOTA_Ability_Visage_SummonFamiliars::DestroyFamiliars(this);
}


// CDOTA_Ability_Visage_SummonFamiliars::DestroyFamiliars  (line 1205, @0x0000000002ceb790, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_BaseNPC::ForceKill
// callers: CDOTA_Ability_Visage_SummonFamiliars::OnUnStolen, CDOTA_Unit_Hero_Visage::Event_Killed
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Visage_SummonFamiliars::DestroyFamiliars(
        CDOTA_Ability_Visage_SummonFamiliars *const this)
{
  __int64 v2; // r12
  int i; // ebx
  CHandle<CBaseEntity> *v4; // rdx
  uint32 m_Index; // eax
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi

  v2 = 0;
  for ( i = 0; this->m_hExistingUnits.m_Size > i; ++i )
  {
    while ( 1 )
    {
      v4 = &this->m_hExistingUnits.m_Memory.m_pMemory[v2];
      m_Index = v4->m_Index;
      if ( v4->m_Index + 2 > 1 )
      {
        v6 = v4->m_Index;
        v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->m_Index) >> 9) & 0x3F];
        if ( v7 != 0 )
        {
          v8 = &v7[v6 & 0x1FF];
          if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
          {
            m_pInstance = v8->m_pInstance;
            if ( v8->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              break;
          }
        }
      }
      ++i;
      ++v2;
      if ( this->m_hExistingUnits.m_Size <= i )
        return;
    }
    ++v2;
    CDOTA_BaseNPC::ForceKill(m_pInstance, 0);
  }
}


// CDOTA_Ability_Visage_SummonFamiliars::GetStunDuration  (line 1221, @0x0000000002cf6960, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "visage_summon_familiars_stone_form"
float __fastcall CDOTA_Ability_Visage_SummonFamiliars::GetStunDuration(
        CDOTA_Ability_Visage_SummonFamiliars *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "visage_summon_familiars_stone_form", 0);
  if ( AbilityByName != 0 )
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(AbilityByName, "stun_duration", -1, 0);
  else
    return 0.0;
}


// CDOTA_Unit_VisageFamiliar::~CDOTA_Unit_VisageFamiliar  (line 1234, @0x0000000002d25d60, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_Unit_VisageFamiliar::~CDOTA_Unit_VisageFamiliar(CDOTA_Unit_VisageFamiliar *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_Unit_VisageFamiliar::~CDOTA_Unit_VisageFamiliar  (line 1234, @0x0000000002d25db0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep, ~CDOTA_Unit_VisageFamiliar
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_VisageFamiliar::~CDOTA_Unit_VisageFamiliar(CDOTA_Unit_VisageFamiliar *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_VisageFamiliar::Schema_DynamicBinding  (line 1236, @0x0000000002d20ea0, libserver.so)
// globals: CDOTA_Unit_VisageFamiliar::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_VisageFamiliar::Schema_DynamicBinding(
        const CDOTA_Unit_VisageFamiliar *const this)
{
  return CDOTA_Unit_VisageFamiliar::s_pSchemaBinding;
}


// CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1236, @0x0000000002d20ed0, libserver.so)
// globals: CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass::DestructInstance  (line 1236, @0x0000000002d20ee0, libserver.so)  // inlines: Destruct<CDOTA_Unit_VisageFamiliar>
void __fastcall CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass::FreeInstance  (line 1236, @0x0000000002d20f00, libserver.so)
void __fastcall CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass::CanAllocate  (line 1236, @0x0000000002d20f20, libserver.so)
bool __fastcall CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1236, @0x0000000002d20f30, libserver.so)
// globals: CDOTA_Unit_VisageFamiliar::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_VisageFamiliar::s_pSchemaBinding;
}


// CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass::AllocateInstance  (line 1236, @0x0000000002d25650, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4544);
  memset(v1, 0, 0x11C0u);
  return v1;
}


// CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass::ConstructInstance  (line 1236, @0x0000000002d329b0, libserver.so)  // inlines: CDOTA_Unit_VisageFamiliar, Construct<CDOTA_Unit_VisageFamiliar>, ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep
// calls: CDOTA_BaseNPC_Creep::CDOTA_BaseNPC_Creep, CountdownTimer::CountdownTimer, CDOTA_BaseNPC::~CDOTA_BaseNPC, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Creep::CDOTA_BaseNPC_Creep(p);
    *p = &off_466A1B0;
    *(p + 236) = &off_466B110;
    *(p + 257) = &off_466B440;
    CountdownTimer::CountdownTimer(p + 188);
  }
  return p;
}


// CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1236, @0x0000000002d35450, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1236, @0x0000000002d35780, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_VisageFamiliar::GetEntityClassInternal  (line 1236, @0x0000000002d51ed0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CDOTA_BaseNPC_Creep::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "npc_dota_visage_familiar", "CDOTA_Unit_VisageFamiliar"
// globals: `guard variable for'CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass, CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_VisageFamiliar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_VisageFamiliarClassInfo, CDOTA_Unit_VisageFamiliar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_VisageFamiliarClassInfo
CEntityClass *__cdecl CDOTA_Unit_VisageFamiliar::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass) != 0 )
  {
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_designerName.u.m_Id = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_AllHelpers.m_Size = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_classInputs.m_Size = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_classOutputs.m_Size = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_hNetworkSerializer = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_pBaseClassInfo = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_pClassInfo = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_flags = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_nAllHelpersFlags = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_pScriptClassDesc = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_pInputs = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_nInputCount = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_pOutputs = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_nOutputCount = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_pGameClass = 0;
    CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass._vptr_CEntityClass = off_466A130;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass);
    __cxa_atexit(
      CDOTA_Unit_VisageFamiliar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_VisageFamiliarClass != 0 )
    return &CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass;
  if ( `guard variable for'CDOTA_Unit_VisageFamiliar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_VisageFamiliarClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_VisageFamiliar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_VisageFamiliarClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Creep::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_VisageFamiliar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_VisageFamiliarClassInfo,
      "CDOTA_Unit_VisageFamiliar",
      "npc_dota_visage_familiar",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_VisageFamiliar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_VisageFamiliarClassInfo);
  }
  CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_pClassInfo = &CDOTA_Unit_VisageFamiliar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_VisageFamiliarClassInfo;
  CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_pBaseClassInfo = CDOTA_Unit_VisageFamiliar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_VisageFamiliarClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_VisageFamiliarClass = &CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass;
  CDOTA_Unit_VisageFamiliar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_VisageFamiliarClassInfo.m_pClass = &CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass;
  CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_Unit_VisageFamiliarClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_VisageFamiliar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_VisageFamiliarClass;
}


// CDOTA_Unit_VisageFamiliar::UsedGestureBasedAttackAnimation  (line 1252, @0x0000000002d20f40, libserver.so)
bool __fastcall CDOTA_Unit_VisageFamiliar::UsedGestureBasedAttackAnimation(CDOTA_Unit_VisageFamiliar *const this)
{
  return 1;
}


// CDOTA_Unit_VisageFamiliar::IsFlyingVisually  (line 1255, @0x0000000002d2fb80, libserver.so)  // inlines: HasFlyMovementCapability, InState
bool __fastcall CDOTA_Unit_VisageFamiliar::IsFlyingVisually(CDOTA_Unit_VisageFamiliar *const this)
{
  bool result; // al

  result = 1;
  if ( (this->m_iMoveCapabilities & 2) == 0 )
    return BYTE3(this->m_nUnitState64.m_Value) & 1 | ((this->m_nUnitState64.m_Value & 0x200000000LL) != 0);
  return result;
}


// CDOTA_Unit_VisageFamiliar::Spawn  (line 1263, @0x0000000002d2d870, libserver.so)  // inlines: SetHasInventory
// calls: CDOTA_BaseNPC_Creep::Spawn
void __fastcall CDOTA_Unit_VisageFamiliar::Spawn(
        CDOTA_Unit_VisageFamiliar *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC_Creep::Spawn(this, pKeyValues);
  this->m_bHasInventory = 0;
}


// CDOTA_Unit_VisageFamiliar::Precache  (line 1273, @0x0000000002d2d890, libserver.so)
// calls: PrecacheParticleSystem, CDOTA_BaseNPC::Precache
// strings: "particles/units/heroes/hero_visage/visage_familiar_ambient.vpcf"
void __fastcall CDOTA_Unit_VisageFamiliar::Precache(
        CDOTA_Unit_VisageFamiliar *const this,
        const CEntityPrecacheContext *pContext)
{
  PrecacheParticleSystem("particles/units/heroes/hero_visage/visage_familiar_ambient.vpcf", pContext);
  CDOTA_BaseNPC::Precache(this, pContext);
}


// CDOTA_Unit_VisageFamiliar::OnIdleChanged  (line 1279, @0x0000000002d35b00, libserver.so)  // inlines: CEntityHandle, Element, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetRemainingRatio, GetRemainingTime, GetSerialNumber, IndexToIdentity, Init, Invalidate, IsElapsed, IsValid, Length2D, LookupEntity, NetworkStateChanged, Set, Start, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=<float>, operator[]
// calls: CDOTA_BaseNPC::FindAbilityByName, CBaseEntity::GetAbsOrigin, CountdownTimer::Now, DoAirCollisionPadding
// strings: "visage_summon_familiars."
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Unit_VisageFamiliar::OnIdleChanged(CDOTA_Unit_VisageFamiliar *const this)
{
  unsigned __int16 v2; // dx
  int v3; // esi
  uint32 v4; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // rdi
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v9; // r12
  __int64 v10; // rbx
  _WORD *v11; // rcx
  CEntityIdentity *v12; // rax
  CEntityIdentity *v13; // rax
  CDOTA_Unit_VisageFamiliar *v14; // r14
  const Vector *AbsOrigin; // r15
  const Vector *v16; // rax
  double v17; // xmm2_8
  double v18; // xmm3_8
  double v19; // xmm5_8
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float m_Value; // xmm2_4
  float v25; // xmm0_4
  float v26; // xmm0_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  float v29; // [rsp+8h] [rbp-48h]
  float v30; // [rsp+8h] [rbp-48h]
  float flDistance; // [rsp+Ch] [rbp-44h]
  float flDistancea; // [rsp+Ch] [rbp-44h]
  float flDistanceb; // [rsp+Ch] [rbp-44h]

  if ( this->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v2 = 0x7FFF;
    v3 = 0x7FFF;
  }
  else
  {
    v2 = this->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v3 = v2;
  }
  v4 = (this->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v2 & 0x7FFF;
  if ( v4 + 2 > 1 )
  {
    v5 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v3 >> 9];
    if ( v5 != 0 )
    {
      v6 = &v5[v3 & 0x1FF];
      if ( v6 != 0 && v4 == v6->m_EHandle.m_Index )
      {
        m_pInstance = v6->m_pInstance;
        if ( v6->m_pInstance != 0
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
        {
          AbilityByName = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "visage_summon_familiars.", 0);
          v9 = AbilityByName;
          if ( AbilityByName != 0 && SLODWORD(AbilityByName[1].m_pfnTouch.__delta) > 0 )
          {
            v10 = 0;
            do
            {
              v11 = (v9[1].m_pfnUse.__pfn + 4 * v10);
              if ( (*v11 + 2) > 1 )
              {
                v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v11 >> 9) & 0x3F];
                if ( v12 != 0 )
                {
                  v13 = &v12[*v11 & 0x1FF];
                  if ( v13 != 0 && *v11 == v13->m_EHandle.m_Index )
                  {
                    v14 = v13->m_pInstance;
                    if ( v13->m_pInstance != 0 && v14->m_bIsDOTANPC && this != v14 && v14->m_bIsIdle )
                    {
                      AbsOrigin = CBaseEntity::GetAbsOrigin(v13->m_pInstance);
                      v16 = CBaseEntity::GetAbsOrigin(this);
                      v20 = (v16->y - AbsOrigin->y) * (v16->y - AbsOrigin->y);
                      v21 = fsqrt(((v16->x - AbsOrigin->x) * (v16->x - AbsOrigin->x)) + v20);
                      if ( v21 >= 55.0 )
                      {
                        if ( this->ctTimer.m_timestamp.m_Value != -1.0 )
                        {
                          (*(this->ctTimer._vptr_CountdownTimer + 2))(
                            &this->ctTimer,
                            12,
                            0xFFFFFFFFLL,
                            0xFFFFFFFFLL,
                            v20,
                            v21,
                            v17,
                            v18,
                            55.0,
                            v19,
                            -1.0);
                          this->ctTimer.m_timestamp.m_Value = -1.0;
                        }
                      }
                      else
                      {
                        flDistance = v21;
                        v22 = CountdownTimer::Now(&this->ctTimer);
                        v23 = flDistance;
                        m_Value = this->ctTimer.m_timestamp.m_Value;
                        if ( v22 >= m_Value )
                        {
                          v27 = CountdownTimer::Now(&this->ctTimer);
                          v23 = flDistance;
                          v28 = v27 + 0.5;
                          if ( v28 != this->ctTimer.m_timestamp.m_Value )
                          {
                            v30 = v28;
                            (*(this->ctTimer._vptr_CountdownTimer + 2))(&this->ctTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                            v23 = flDistance;
                            this->ctTimer.m_timestamp.m_Value = v30;
                          }
                          if ( this->ctTimer.m_duration.m_Value != 0.5 )
                          {
                            flDistanceb = v23;
                            (*(this->ctTimer._vptr_CountdownTimer + 2))(&this->ctTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                            v23 = flDistanceb;
                            this->ctTimer.m_duration.m_Value = 0.5;
                          }
                          m_Value = this->ctTimer.m_timestamp.m_Value;
                        }
                        if ( m_Value <= 0.0
                          || (v29 = m_Value,
                              flDistancea = v23,
                              v25 = CountdownTimer::Now(&this->ctTimer),
                              v23 = flDistancea,
                              (m_Value = (v29 - v25) / this->ctTimer.m_duration.m_Value) < 0.0) )
                        {
                          v26 = 1.0;
                        }
                        else
                        {
                          v26 = 0.0;
                          if ( m_Value <= 1.0 )
                            v26 = 1.0 - m_Value;
                        }
                        DoAirCollisionPadding(this, v14, v26, v23, m_Value);
                      }
                    }
                  }
                }
              }
              ++v10;
            }
            while ( SLODWORD(v9[1].m_pfnTouch.__delta) > v10 );
          }
        }
      }
    }
  }
}


// CDOTA_Unit_VisageFamiliar::OnSaveState  (line 1311, @0x0000000002d20f50, libserver.so)
bool __fastcall CDOTA_Unit_VisageFamiliar::OnSaveState(CDOTA_Unit_VisageFamiliar *const this, KeyValues *pKey)
{
  return 0;
}


// CDOTA_Unit_VisageFamiliar::YouForgotToImplementOrDeclareServerClass  (line 1323, @0x0000000002ccaea0, libserver.so)
int __fastcall CDOTA_Unit_VisageFamiliar::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_VisageFamiliar *const this)
{
  return 0;
}


// CDOTA_Unit_VisageFamiliar::GetServerClass  (line 1323, @0x0000000002cddff0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_VisageFamiliar::GetServerClass(CDOTA_Unit_VisageFamiliar *const this)
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


// CDOTA_Unit_VisageFamiliar::OnAlive  (line 1333, @0x0000000002ccaeb0, libserver.so)
void __fastcall CDOTA_Unit_VisageFamiliar::OnAlive(CDOTA_Unit_VisageFamiliar *const this)
{
  ;
}


// CDOTA_Unit_VisageFamiliar::OnDying  (line 1343, @0x0000000002ccaec0, libserver.so)
void __fastcall CDOTA_Unit_VisageFamiliar::OnDying(CDOTA_Unit_VisageFamiliar *const this)
{
  ;
}


// CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::~CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge  (line 1359, @0x0000000002d26740, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::~CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge(
        CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge *const this)
{
  this->_vptr_CDOTA_Buff = &off_466B4D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::~CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge  (line 1359, @0x0000000002d26760, libserver.so)  // inlines: ~CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::~CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge(
        CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge *const this)
{
  this->_vptr_CDOTA_Buff = &off_466B4D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::IsHidden  (line 1364, @0x0000000002d20f60, libserver.so)
bool __fastcall CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::IsHidden(
        CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge *const this)
{
  return (*(this->_vptr_CDOTA_Buff + 27))(this) == 0;
}


// CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::IsPurgable  (line 1369, @0x0000000002d20f80, libserver.so)
bool __fastcall CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::IsPurgable(
        CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge *const this)
{
  return 0;
}


// CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::GetPriority  (line 1382, @0x0000000002d20f90, libserver.so)
int __fastcall CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::GetPriority(
        CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge *const this)
{
  return 7;
}


// CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::OnCreated  (line 1405, @0x0000000002d0b230, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "damage_per_charge", "max_damage_charges", "damage_charge_time", "familiar_speed"
void __fastcall CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::OnCreated(
        CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage_per_charge = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_per_charge", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_8:
    this->max_damage_charges = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_9;
  }
  this->damage_per_charge = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_8;
LABEL_3:
  this->max_damage_charges = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "max_damage_charges", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->damage_charge_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "damage_charge_time", -1, 0);
    goto LABEL_5;
  }
LABEL_9:
  this->damage_charge_time = 0.0;
LABEL_5:
  (*(this->_vptr_CDOTA_Buff + 28))(this, this->max_damage_charges);
  this->m_nFXIndex = -1;
  this->m_nFXIndexB = -1;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
    this->familiar_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "familiar_speed", -1, 0);
  else
    this->familiar_speed = 0;
}


// CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::OnStackCountChanged  (line 1424, @0x0000000002ccaed0, libserver.so)
void __fastcall CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::OnStackCountChanged(
        CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge *const this,
        int iOldCount)
{
  ;
}


// CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::OnRefresh  (line 1440, @0x0000000002d0a1b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "damage_per_charge", "max_damage_charges", "damage_charge_time"
void __fastcall CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::OnRefresh(
        CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage_per_charge = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_per_charge", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->max_damage_charges = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->damage_per_charge = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->max_damage_charges = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "max_damage_charges", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->damage_charge_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "damage_charge_time", -1, 0);
    return;
  }
LABEL_7:
  this->damage_charge_time = 0.0;
}


// CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::DeclareFunctions  (line 1448, @0x0000000002ccaee0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::OnAttacked(CModifierParams const&)
void __fastcall CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::DeclareFunctions(
        CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge *const this)
{
  this->m_Functions[12].__pfn = (&stru_10 + 721);
  this->m_Functions[12].__delta = 0;
  this->m_Functions[0].__pfn = (&stru_10 + 697);
  this->m_Functions[0].__delta = 0;
  this->m_Functions[120].__pfn = (&stru_10 + 705);
  this->m_Functions[120].__delta = 0;
  this->m_Functions[126].__pfn = (&stru_10 + 713);
  this->m_Functions[126].__delta = 0;
  this->m_Functions[137].__pfn = CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::OnAttacked;
  this->m_Functions[137].__delta = 0;
}


// CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::GetModifierMoveSpeedOverride  (line 1457, @0x0000000002cffed0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_visage_2"
ModifierVariant_t __fastcall CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::GetModifierMoveSpeedOverride(
        CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge *const this,
        const CModifierParams *const params)
{
  int familiar_speed; // ebx
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  __m128i v5; // xmm0
  ModifierVariant_t result; // 0:rax.16

  familiar_speed = this->familiar_speed;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_visage_2", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    familiar_speed += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  *v5.m128i_i32 = familiar_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v5) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::OnAttacked  (line 1473, @0x0000000002cdbbb0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_BaseNPC::ModifyHealth, CDOTA_BaseNPC::Kill, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::OnAttacked(
        CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge *const this,
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
  uint32 m_iUnitType; // eax
  int v14; // ebx
  CDOTA_BaseNPC *Parent; // rax
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
                  m_iUnitType = v12->m_iUnitType;
                  if ( (m_iUnitType & 1) == 0 || (v14 = 4, v12->m_bIsIllusion.m_Value) )
                    v14 = 1;
                  if ( (m_iUnitType & 4) != 0 )
                    v14 = 2;
                  Parent = CDOTA_Buff::GetParent(this);
                  if ( CBaseEntity::GetHealth(Parent) - v14 <= 0 )
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
                    CDOTA_BaseNPC::ModifyHealth(v18, Health - v14, 0, 1, 0);
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


// CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::GetModifierPreAttack_BonusDamage  (line 1507, @0x0000000002cfff40, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_visage_1"
ModifierVariant_t __fastcall CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge *const this,
        const CModifierParams *const params)
{
  int damage_per_charge; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  __m128i v6; // xmm0
  int v7; // eax
  ModifierVariant_t result; // 0:rax.16

  damage_per_charge = this->damage_per_charge;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_visage_1", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    damage_per_charge += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  v6 = (*(this->_vptr_CDOTA_Buff + 27))(this);
  result.m_szVal = 0;
  *v6.m128i_i32 = (v7 * damage_per_charge);
  *&result.m_eType = (_mm_cvtsi128_si32(v6) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::OnAttack  (line 1522, @0x0000000002cd9100, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::StartIntervalThink
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::OnAttack(
        CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  float v8; // xmm1_4

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    return 1uLL;
  v5 = &v4[params->hattacker.m_Index & 0x1FF];
  if ( v5 == 0 )
    return 1uLL;
  if ( m_Index != v5->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0
    || !m_pInstance->m_bIsDOTANPC
    || CDOTA_Buff::GetParent(this) != m_pInstance
    || (*(this->_vptr_CDOTA_Buff + 27))(this) <= 0 )
  {
    return 1uLL;
  }
  if ( (*(this->_vptr_CDOTA_Buff + 27))(this) == this->max_damage_charges )
    CDOTA_Buff::StartIntervalThink(this, this->damage_charge_time, v8);
  (*(this->_vptr_CDOTA_Buff + 26))(this);
  return 1uLL;
}


// CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::OnIntervalThink  (line 1542, @0x0000000002ccc860, libserver.so)
// calls: CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::OnIntervalThink(
        CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge *const this)
{
  float v2; // xmm1_4

  if ( (*(this->_vptr_CDOTA_Buff + 27))(this) < this->max_damage_charges )
  {
    (*(this->_vptr_CDOTA_Buff + 25))(this);
    if ( (*(this->_vptr_CDOTA_Buff + 27))(this) == this->max_damage_charges )
      CDOTA_Buff::StartIntervalThink(this, -1.0, v2);
  }
}


// CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::RestoreDamageChargeFX  (line 1560, @0x0000000002ceb8d0, libserver.so)
void __fastcall CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::RestoreDamageChargeFX(
        CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge *const this)
{
  ;
}


// CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::CheckState  (line 1585, @0x0000000002ccaf60, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::CheckState(
        CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x3000000uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFCFFFFFFLL;
}


// CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::OnUnitMoved  (line 1595, @0x0000000002cdaee0, libserver.so)  // inlines: Element, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetRemainingRatio, GetRemainingTime, IndexToIdentity, Invalidate, IsElapsed, IsValid, Length2D, LookupEntity, NetworkStateChanged, Set, Start, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=<float>, operator[]
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CountdownTimer::Now, DoAirCollisionPadding
// strings: "visage_summon_familiars"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge::OnUnitMoved(
        CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v5; // r14
  __int64 v6; // r12
  int v7; // ebx
  unsigned __int16 *v8; // rdx
  int v9; // eax
  __int16 v10; // cx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  CDOTA_BaseNPC *Parent; // rax
  const Vector *v15; // rax
  double v16; // xmm2_8
  double v17; // xmm3_8
  double v18; // xmm5_8
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  float m_Value; // xmm2_4
  float v24; // xmm0_4
  float v25; // xmm2_4
  float v26; // xmm0_4
  CDOTA_BaseNPC *v27; // rax
  float v28; // xmm2_4
  float v30; // xmm0_4
  float v31; // xmm0_4
  float v32; // [rsp+0h] [rbp-40h]
  float v33; // [rsp+0h] [rbp-40h]
  float flDistance; // [rsp+4h] [rbp-3Ch]
  float flDistancea; // [rsp+4h] [rbp-3Ch]
  float flDistanceb; // [rsp+4h] [rbp-3Ch]
  float flDistancec; // [rsp+4h] [rbp-3Ch]
  const Vector *AbsOrigin; // [rsp+8h] [rbp-38h]
  const CountdownTimer *p_m_ctTimer; // [rsp+8h] [rbp-38h]
  float v40; // [rsp+8h] [rbp-38h]

  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "visage_summon_familiars", 0);
  v5 = AbilityByName;
  if ( AbilityByName != 0 && SLODWORD(AbilityByName[1].m_pfnTouch.__delta) > 0 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      while ( 1 )
      {
        v8 = (v5[1].m_pfnUse.__pfn + v6);
        v9 = *v8;
        if ( (*v8 + 2) > 1 )
        {
          v10 = *v8;
          v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v8 >> 9) & 0x3F];
          if ( v11 != 0 )
          {
            v12 = &v11[v10 & 0x1FF];
            if ( v12 != 0 && v9 == v12->m_EHandle.m_Index )
            {
              m_pInstance = v12->m_pInstance;
              if ( v12->m_pInstance != 0
                && m_pInstance->m_bIsDOTANPC
                && CDOTA_Buff::GetParent(this) != 0
                && CDOTA_Buff::GetParent(this) != m_pInstance )
              {
                break;
              }
            }
          }
        }
LABEL_4:
        ++v7;
        v6 += 4;
        if ( SLODWORD(v5[1].m_pfnTouch.__delta) <= v7 )
          return 1uLL;
      }
      AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
      Parent = CDOTA_Buff::GetParent(this);
      v15 = CBaseEntity::GetAbsOrigin(Parent);
      v19 = (v15->y - AbsOrigin->y) * (v15->y - AbsOrigin->y);
      v20 = fsqrt(((v15->x - AbsOrigin->x) * (v15->x - AbsOrigin->x)) + v19);
      if ( v20 >= 55.0 )
      {
        if ( this->m_ctTimer.m_timestamp.m_Value != -1.0 )
        {
          (*(this->m_ctTimer._vptr_CountdownTimer + 2))(
            &this->m_ctTimer,
            12,
            0xFFFFFFFFLL,
            0xFFFFFFFFLL,
            v19,
            v20,
            v16,
            v17,
            55.0,
            v18,
            -1.0);
          this->m_ctTimer.m_timestamp.m_Value = -1.0;
        }
        goto LABEL_4;
      }
      flDistance = v20;
      p_m_ctTimer = &this->m_ctTimer;
      v21 = CountdownTimer::Now(&this->m_ctTimer);
      v22 = flDistance;
      m_Value = this->m_ctTimer.m_timestamp.m_Value;
      if ( v21 >= m_Value )
      {
        v30 = CountdownTimer::Now(p_m_ctTimer);
        v22 = flDistance;
        v31 = v30 + 0.5;
        if ( v31 != this->m_ctTimer.m_timestamp.m_Value )
        {
          v33 = v31;
          (*(this->m_ctTimer._vptr_CountdownTimer + 2))(p_m_ctTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          v22 = flDistance;
          this->m_ctTimer.m_timestamp.m_Value = v33;
        }
        if ( this->m_ctTimer.m_duration.m_Value != 0.5 )
        {
          flDistancec = v22;
          (*(this->m_ctTimer._vptr_CountdownTimer + 2))(p_m_ctTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          v22 = flDistancec;
          this->m_ctTimer.m_duration.m_Value = 0.5;
        }
        m_Value = this->m_ctTimer.m_timestamp.m_Value;
      }
      if ( m_Value <= 0.0
        || (v32 = m_Value,
            flDistancea = v22,
            v24 = CountdownTimer::Now(p_m_ctTimer),
            v22 = flDistancea,
            (v25 = (v32 - v24) / this->m_ctTimer.m_duration.m_Value) < 0.0) )
      {
        v26 = 1.0;
      }
      else
      {
        v26 = 0.0;
        if ( v25 <= 1.0 )
          v26 = 1.0 - v25;
      }
      flDistanceb = v22;
      ++v7;
      v40 = v26;
      v6 += 4;
      v27 = CDOTA_Buff::GetParent(this);
      DoAirCollisionPadding(v27, m_pInstance, v40, flDistanceb, v28);
    }
    while ( SLODWORD(v5[1].m_pfnTouch.__delta) > v7 );
  }
  return 1uLL;
}


// CDOTA_Ability_Visage_SummonFamiliars_StoneForm::~CDOTA_Ability_Visage_SummonFamiliars_StoneForm  (line 1632, @0x0000000002d2c810, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Visage_SummonFamiliars_StoneForm::~CDOTA_Ability_Visage_SummonFamiliars_StoneForm(
        CDOTA_Ability_Visage_SummonFamiliars_StoneForm *const this)
{
  this->_vptr_IHandleEntity = &off_466B850;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Visage_SummonFamiliars_StoneForm::~CDOTA_Ability_Visage_SummonFamiliars_StoneForm  (line 1632, @0x0000000002d2c830, libserver.so)  // inlines: ~CDOTA_Ability_Visage_SummonFamiliars_StoneForm
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Visage_SummonFamiliars_StoneForm::~CDOTA_Ability_Visage_SummonFamiliars_StoneForm(
        CDOTA_Ability_Visage_SummonFamiliars_StoneForm *const this)
{
  this->_vptr_IHandleEntity = &off_466B850;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Visage_SummonFamiliars_StoneForm::Schema_DynamicBinding  (line 1634, @0x0000000002d20fa0, libserver.so)
// globals: CDOTA_Ability_Visage_SummonFamiliars_StoneForm::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Visage_SummonFamiliars_StoneForm::Schema_DynamicBinding(
        const CDOTA_Ability_Visage_SummonFamiliars_StoneForm *const this)
{
  return CDOTA_Ability_Visage_SummonFamiliars_StoneForm::s_pSchemaBinding;
}


// CDOTA_Ability_Visage_SummonFamiliars_StoneForm::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1634, @0x0000000002d20fb0, libserver.so)
// globals: CDOTA_Ability_Visage_SummonFamiliars_StoneForm::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Visage_SummonFamiliars_StoneForm::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Visage_SummonFamiliars_StoneForm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Visage_SummonFamiliars_StoneForm::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Visage_SummonFamiliars_StoneForm::CEntityInstanceEntityClass::DestructInstance  (line 1634, @0x0000000002d20fc0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Visage_SummonFamiliars_StoneForm>
void __fastcall CDOTA_Ability_Visage_SummonFamiliars_StoneForm::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Visage_SummonFamiliars_StoneForm::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Visage_SummonFamiliars_StoneForm::CEntityInstanceEntityClass::FreeInstance  (line 1634, @0x0000000002d20fe0, libserver.so)
void __fastcall CDOTA_Ability_Visage_SummonFamiliars_StoneForm::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Visage_SummonFamiliars_StoneForm::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Visage_SummonFamiliars_StoneForm::CEntityInstanceEntityClass::CanAllocate  (line 1634, @0x0000000002d21000, libserver.so)
bool __fastcall CDOTA_Ability_Visage_SummonFamiliars_StoneForm::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Visage_SummonFamiliars_StoneForm::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Visage_SummonFamiliars_StoneForm::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1634, @0x0000000002d21010, libserver.so)
// globals: CDOTA_Ability_Visage_SummonFamiliars_StoneForm::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Visage_SummonFamiliars_StoneForm::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Visage_SummonFamiliars_StoneForm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Visage_SummonFamiliars_StoneForm::s_pSchemaBinding;
}


// CDOTA_Ability_Visage_SummonFamiliars_StoneForm::CEntityInstanceEntityClass::AllocateInstance  (line 1634, @0x0000000002d25690, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Visage_SummonFamiliars_StoneForm::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Visage_SummonFamiliars_StoneForm::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Visage_SummonFamiliars_StoneForm::CEntityInstanceEntityClass::ConstructInstance  (line 1634, @0x0000000002d29780, libserver.so)  // inlines: CDOTA_Ability_Visage_SummonFamiliars_StoneForm, Construct<CDOTA_Ability_Visage_SummonFamiliars_StoneForm>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Visage_SummonFamiliars_StoneForm::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Visage_SummonFamiliars_StoneForm::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_466B850;
  }
  return p;
}


// CDOTA_Ability_Visage_SummonFamiliars_StoneForm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1634, @0x0000000002d34ea0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Visage_SummonFamiliars_StoneForm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Visage_SummonFamiliars_StoneForm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Visage_SummonFamiliars_StoneForm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1634, @0x0000000002d34ec0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Visage_SummonFamiliars_StoneForm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Visage_SummonFamiliars_StoneForm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Visage_SummonFamiliars_StoneForm::GetEntityClassInternal  (line 1634, @0x0000000002d4bbc0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "visage_summon_familiars_stone_form", "CDOTA_Ability_Visage_SummonFamiliars_StoneForm"
// globals: `guard variable for'CDOTA_Ability_Visage_SummonFamiliars_StoneForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliars_StoneFormClass, CDOTA_Ability_Visage_SummonFamiliars_StoneForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliars_StoneFormClass, __dso_handle, CDOTA_Ability_Visage_SummonFamiliars_StoneForm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Visage_SummonFamiliars_StoneForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliars_StoneFormClassInfo, CDOTA_Ability_Visage_SummonFamiliars_StoneForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliars_StoneFormClassInfo
CEntityClass *__cdecl CDOTA_Ability_Visage_SummonFamiliars_StoneForm::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Visage_SummonFamiliars_StoneForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliars_StoneFormClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Visage_SummonFamiliars_StoneForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliars_StoneFormClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Visage_SummonFamiliars_StoneForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliars_StoneFormClass);
    CDOTA_Ability_Visage_SummonFamiliars_StoneForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliars_StoneFormClass._vptr_CEntityClass = off_466B7D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Visage_SummonFamiliars_StoneForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliars_StoneFormClass);
    __cxa_atexit(
      CDOTA_Ability_Visage_SummonFamiliars_StoneForm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Visage_SummonFamiliars_StoneForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliars_StoneFormClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Visage_SummonFamiliars_StoneFormClass != 0 )
    return &CDOTA_Ability_Visage_SummonFamiliars_StoneForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliars_StoneFormClass;
  if ( `guard variable for'CDOTA_Ability_Visage_SummonFamiliars_StoneForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliars_StoneFormClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Visage_SummonFamiliars_StoneForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliars_StoneFormClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Visage_SummonFamiliars_StoneForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliars_StoneFormClassInfo,
      "CDOTA_Ability_Visage_SummonFamiliars_StoneForm",
      "visage_summon_familiars_stone_form",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Visage_SummonFamiliars_StoneForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliars_StoneFormClassInfo);
  }
  CDOTA_Ability_Visage_SummonFamiliars_StoneForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliars_StoneFormClass.m_pClassInfo = &CDOTA_Ability_Visage_SummonFamiliars_StoneForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliars_StoneFormClassInfo;
  CDOTA_Ability_Visage_SummonFamiliars_StoneForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliars_StoneFormClass.m_pBaseClassInfo = CDOTA_Ability_Visage_SummonFamiliars_StoneForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliars_StoneFormClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Visage_SummonFamiliars_StoneFormClass = &CDOTA_Ability_Visage_SummonFamiliars_StoneForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliars_StoneFormClass;
  CDOTA_Ability_Visage_SummonFamiliars_StoneForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliars_StoneFormClassInfo.m_pClass = &CDOTA_Ability_Visage_SummonFamiliars_StoneForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliars_StoneFormClass;
  CDOTA_Ability_Visage_SummonFamiliars_StoneForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliars_StoneFormClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Visage_SummonFamiliars_StoneFormClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Visage_SummonFamiliars_StoneForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Visage_SummonFamiliars_StoneFormClass;
}


// CDOTA_Ability_Visage_SummonFamiliars_StoneForm::YouForgotToImplementOrDeclareServerClass  (line 1650, @0x0000000002ccaf80, libserver.so)
int __fastcall CDOTA_Ability_Visage_SummonFamiliars_StoneForm::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Visage_SummonFamiliars_StoneForm *const this)
{
  return 0;
}


// CDOTA_Ability_Visage_SummonFamiliars_StoneForm::GetServerClass  (line 1650, @0x0000000002cde3f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Visage_SummonFamiliars_StoneForm::GetServerClass(
        CDOTA_Ability_Visage_SummonFamiliars_StoneForm *const this)
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


// CDOTA_Ability_Visage_SummonFamiliars_StoneForm::OnSpellStart  (line 1659, @0x0000000002cf5540, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetTeamNumber
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, Thinker_Create, CDOTA_BaseNPC::StartGesture, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_visage_summon_familiars_stone_form", "stun_delay", "modifier_rooted"
void __fastcall CDOTA_Ability_Visage_SummonFamiliars_StoneForm::OnSpellStart(
        CDOTA_Ability_Visage_SummonFamiliars_StoneForm *const this)
{
  int m_Value; // r14d
  CDOTA_BaseNPC *Caster; // rax
  Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  float v7; // xmm1_4
  CDOTA_BaseNPC *v8; // r14
  CDOTA_BaseNPC *v9; // rax
  KeyValues kv; // [rsp+10h] [rbp-60h] BYREF
  KeyValues kv2; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-28h]

  v12 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_visage_summon_familiars_stone_form");
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  v5 = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(v5, this, "modifier_visage_summon_familiars_stone_form", &kv, *AbsOrigin, m_Value, 0, 1, 0);
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v6, 1510, 0.0, 0.0, 0, 0, 1.0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_delay", -1, 0);
  KeyValues::KeyValues(&kv2, "modifier_rooted");
  KeyValues::SetFloat(&kv2, "duration", v7);
  v8 = CDOTABaseAbility::GetCaster(this);
  v9 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v9, v8, this, "modifier_rooted", &kv2, 0);
  KeyValues::~KeyValues(&kv2);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker::~CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker  (line 1679, @0x0000000002d266f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker::~CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker(
        CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_466C310;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker::~CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker  (line 1679, @0x0000000002d26710, libserver.so)  // inlines: ~CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker::~CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker(
        CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_466C310;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker::IsHidden  (line 1688, @0x0000000002d21020, libserver.so)
bool __fastcall CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker::IsHidden(
        CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker::OnCreated  (line 1706, @0x0000000002d0b690, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "stun_radius", "stun_delay", "stun_damage", "stone_duration"
void __fastcall CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker::OnCreated(
        CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  float v8; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->stun_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "stun_radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->stun_radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->stun_delay = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "stun_delay", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  this->stun_delay = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->stun_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "stun_damage", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
LABEL_11:
    this->stun_duration = 0.0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
LABEL_12:
    this->stone_duration = 0.0;
    goto LABEL_7;
  }
LABEL_10:
  this->stun_damage = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_11;
LABEL_5:
  this->stun_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "stun_duration", -1, 0);
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
    goto LABEL_12;
LABEL_6:
  this->stone_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "stone_duration", -1, 0);
LABEL_7:
  this->m_iIntervalCount = 0;
  CDOTA_Buff::StartIntervalThink(this, this->stun_delay, v8);
}


// CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker::OnIntervalThink  (line 1723, @0x0000000002cf1bf0, libserver.so)  // inlines: CEntityHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, GetTeamNumber, IndexToIdentity, Init, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::FindReplacementSound (20 total)
// strings: "modifier_visage_summon_familiars_stone_form_buff", "modifier_visage_summonfamiliars_timer", "particles/units/heroes/hero_visage/visage_stone_form.vpcf", "Visage_Familar.StoneForm.Cast", "modifier_stunned", "Visage_Familar.StoneForm.Stun"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker::OnIntervalThink(
        CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker *const this)
{
  float v2; // xmm1_4
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_BaseNPC *v5; // rax
  CDOTABaseAbility *v6; // r13
  CDOTA_BaseNPC *v7; // rbx
  CDOTA_BaseNPC *v8; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_ParticleManager *v12; // rax
  unsigned int v13; // xmm0_4
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  unsigned __int16 v17; // dx
  int v18; // esi
  int v19; // eax
  CEntityIdentity *v20; // rdx
  CEntityIdentity *v21; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  CDOTA_BaseNPC *v23; // r13
  const char *ReplacementSound; // rsi
  __m128i v25; // xmm3
  float v26; // r13d
  CDOTA_BaseNPC *v27; // rbx
  CDOTA_BaseNPC *v28; // rax
  const Vector *v29; // r14
  CDOTA_BaseNPC *v30; // rax
  __int64 v31; // rbx
  CHandle<CBaseEntity> *v32; // rdx
  uint32 m_Index; // eax
  __int16 v34; // cx
  CEntityIdentity *v35; // rdx
  CEntityIdentity *v36; // rdx
  CDOTA_BaseNPC *v37; // r13
  CDOTA_BaseNPC *v38; // rax
  float v39; // xmm1_4
  CDOTABaseAbility *v40; // r15
  CDOTA_BaseNPC *v41; // rax
  CDOTABaseAbility *v42; // r15
  CDOTA_BaseNPC *v43; // rax
  CDOTA_BaseNPC *v44; // rax
  float flDamage; // [rsp+2Ch] [rbp-94h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v49; // [rsp+88h] [rbp-38h]

  v49 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_visage_summon_familiars_stone_form_buff");
  KeyValues::SetFloat(&kv, "duration", v2);
  Ability = CDOTA_Buff::GetAbility(this);
  Caster = CDOTA_Buff::GetCaster(this);
  v5 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v5, Caster, Ability, "modifier_visage_summon_familiars_stone_form_buff", &kv, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  v7 = CDOTA_Buff::GetCaster(this);
  v8 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v8, v7, v6, "modifier_visage_summonfamiliars_timer", &kv, 0);
  ParticleManager = GetParticleManager();
  LODWORD(v7) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_visage/visage_stone_form.vpcf",
                  8,
                  0,
                  0,
                  0);
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v12, v7, 0, *&AbsOrigin->x, AbsOrigin->z);
  *&v13 = this->stun_radius;
  LODWORD(entities.m_Memory.m_pMemory) = 1065353216;
  *&entities.m_Size = v13 | 0x3F80000000000000LL;
  v14 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v14, v7, 1, *&entities.m_Size, 1.0);
  v15 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v15, v7);
  v16 = CDOTA_Buff::GetCaster(this);
  if ( v16->m_hOwnerEntity.m_Value.m_Index == -1 )
  {
    v17 = 0x7FFF;
    v18 = 0x7FFF;
  }
  else
  {
    v17 = v16->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
    v18 = v17;
  }
  v19 = (v16->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v17 & 0x7FFF;
  entities.m_Size = v19;
  if ( (v19 + 2) > 1
    && (v20 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v18 >> 9]) != 0
    && (v21 = &v20[v18 & 0x1FF]) != 0
    && v19 == v21->m_EHandle.m_Index
    && (v44 = v21->m_pInstance, v21->m_pInstance != 0)
    && v44->m_bIsDOTANPC )
  {
    m_pInstance = 0;
    if ( (v44->m_iUnitType & 1) != 0 )
      m_pInstance = v21->m_pInstance;
  }
  else
  {
    m_pInstance = 0;
  }
  v23 = CDOTA_Buff::GetCaster(this);
  if ( v23 == 0 )
    v23 = CDOTA_Buff::GetParent(this);
  ReplacementSound = "Visage_Familar.StoneForm.Cast";
  if ( m_pInstance != 0 )
    ReplacementSound = CDOTA_BaseNPC::FindReplacementSound(m_pInstance, "Visage_Familar.StoneForm.Cast");
  DOTA_EmitSound(10, ReplacementSound, v23);
  *v25.m128i_i32 = this->stun_radius;
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v26 = COERCE_FLOAT(_mm_cvtsi128_si32(v25));
  v27 = CDOTA_Buff::GetCaster(this);
  v28 = CDOTA_Buff::GetCaster(this);
  v29 = CBaseEntity::GetAbsOrigin(v28);
  v30 = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(v30->m_iTeamNum.m_Value, v29, v27, v26, &entities, 2, 19, 0, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v31 = 0;
    do
    {
      while ( 1 )
      {
        v32 = &entities.m_Memory.m_pMemory[v31];
        m_Index = v32->m_Index;
        if ( v32->m_Index + 2 > 1 )
        {
          v34 = v32->m_Index;
          v35 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v32->m_Index) >> 9) & 0x3F];
          if ( v35 != 0 )
          {
            v36 = &v35[v34 & 0x1FF];
            if ( v36 != 0 && m_Index == v36->m_EHandle.m_Index )
            {
              v37 = v36->m_pInstance;
              if ( v36->m_pInstance != 0 && v37->m_bIsDOTANPC && CDOTA_Buff::GetCaster(this) != 0 )
              {
                v38 = CDOTA_Buff::GetCaster(this);
                if ( (*(v38->_vptr_IHandleEntity + 408))(v38) != 0 )
                  break;
              }
            }
          }
        }
        if ( entities.m_Size <= ++v31 )
          goto LABEL_24;
      }
      KeyValues::KeyValues(&kv2, "modifier_stunned");
      KeyValues::SetFloat(&kv2, "duration", v39);
      v40 = CDOTA_Buff::GetAbility(this);
      v41 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v37, v41, v40, "modifier_stunned", &kv2, 0);
      flDamage = this->stun_damage;
      v42 = CDOTA_Buff::GetAbility(this);
      v43 = CDOTA_Buff::GetCaster(this);
      ApplyDamage(v43, v37, v42, flDamage, 2, 0);
      DOTA_EmitSound(10, "Visage_Familar.StoneForm.Stun", v37);
      KeyValues::~KeyValues(&kv2);
      ++v31;
    }
    while ( entities.m_Size > v31 );
  }
LABEL_24:
  CDOTA_Buff::Destroy(this, 0, 0, 0);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker::OnDestroy  (line 1765, @0x0000000002ccaf90, libserver.so)
void __fastcall CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker::OnDestroy(
        CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Thinker *const this)
{
  ;
}


// CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff::~CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff  (line 1777, @0x0000000002d266a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff::~CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff(
        CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff *const this)
{
  this->_vptr_CDOTA_Buff = &off_466C630;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff::~CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff  (line 1777, @0x0000000002d266c0, libserver.so)  // inlines: ~CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff::~CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff(
        CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff *const this)
{
  this->_vptr_CDOTA_Buff = &off_466C630;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff::IsPurgable  (line 1784, @0x0000000002d21030, libserver.so)
bool __fastcall CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff::IsPurgable(
        CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff *const this)
{
  return 0;
}


// CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff::GetPriority  (line 1789, @0x0000000002d21040, libserver.so)
int __fastcall CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff::GetPriority(
        CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff *const this)
{
  return 8;
}


// CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff::OnCreated  (line 1802, @0x0000000002d0c7e0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CGridNav::DestroyTreesAroundPoint, CBaseAnimating::SetBodygroup
// strings: "stun_radius"
void __fastcall CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff::OnCreated(
        CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v6; // r12d
  CDOTA_BaseNPC *v7; // rax
  float v8; // xmm3_4
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  Vector v11; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->hp_regen = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->stun_radius = 0;
    goto LABEL_4;
  }
  this->hp_regen = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "hp_regen", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->stun_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "stun_radius", -1, 0);
LABEL_4:
  Caster = CDOTA_Buff::GetCaster(this);
  v6 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
  v7 = CDOTA_Buff::GetCaster(this);
  v11 = *CBaseEntity::GetAbsOrigin(v7);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v6, v11, 75.0, v8);
  v9 = CDOTA_Buff::GetCaster(this);
  CBaseAnimating::SetBodygroup(v9, 0, 1);
  v10 = CDOTA_Buff::GetCaster(this);
  CBaseAnimating::SetBodygroup(v10, 1, 1);
}


// CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff::DeclareFunctions  (line 1815, @0x0000000002ccafa0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff::DeclareFunctions(
        CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff *const this)
{
  this->m_Functions[56].__pfn = (&stru_10 + 697);
  this->m_Functions[56].__delta = 0;
}


// CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff::GetModifierConstantHealthRegen  (line 1822, @0x0000000002ccafc0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->hp_regen) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff::CheckState  (line 1829, @0x0000000002ccafe0, libserver.so)  // inlines: Disable, Enable
void __fastcall CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff::CheckState(
        CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff *const this,
        CDOTABuffState *const buffState)
{
  uint64 v2; // rdx

  v2 = buffState->m_nDisabledStateMask & 0xFFFFFFFFFCFFFEDDLL | 0x3000000;
  buffState->m_nEnabledStateMask = buffState->m_nEnabledStateMask & 0xFFFFFFFFFCFFFEDDLL | 0x122;
  buffState->m_nDisabledStateMask = v2;
}


// CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff::OnDestroy  (line 1843, @0x0000000002cd1e40, libserver.so)
// calls: CDOTA_Buff::GetCaster, CBaseAnimating::SetBodygroup, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "particles/units/heroes/hero_visage/visage_familiar_transform.vpcf", "attach_hitloc"
void __fastcall CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff::OnDestroy(
        CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Buff *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v8; // r14
  CDOTA_ParticleManager *v9; // rax
  CDOTA_BaseNPC *v10; // rbx
  CDOTA_ParticleManager *v11; // rax
  CDOTA_ParticleManager *v12; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  CBaseAnimating::SetBodygroup(Caster, 0, 0);
  v3 = CDOTA_Buff::GetCaster(this);
  CBaseAnimating::SetBodygroup(v3, 1, 0);
  v4 = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v4) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_visage/visage_familiar_transform.vpcf",
                  3,
                  v4,
                  0,
                  0);
  v6 = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
  v8 = CDOTA_Buff::GetCaster(this);
  v9 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v9, v4, 0, v8, 5, "attach_hitloc", *AbsOrigin, 1);
  v10 = CDOTA_Buff::GetCaster(this);
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v11, v4, 1, v10, 1, 0, vec3_invalid, 1);
  v12 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v12, v4);
}


// CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Timer::~CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Timer  (line 1860, @0x0000000002d26650, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Timer::~CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Timer(
        CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Timer *const this)
{
  this->_vptr_CDOTA_Buff = &off_466C950;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Timer::~CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Timer  (line 1860, @0x0000000002d26670, libserver.so)  // inlines: ~CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Timer
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Timer::~CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Timer(
        CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Timer *const this)
{
  this->_vptr_CDOTA_Buff = &off_466C950;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Timer::IsHidden  (line 1865, @0x0000000002d21050, libserver.so)
bool __fastcall CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Timer::IsHidden(
        CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Timer *const this)
{
  return 1;
}


// CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Timer::IsPurgable  (line 1866, @0x0000000002d21060, libserver.so)
bool __fastcall CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Timer::IsPurgable(
        CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Timer *const this)
{
  return 0;
}


// CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Timer::OnCreated  (line 1880, @0x0000000002cf7340, libserver.so)  // inlines: AssignTo, DOTAGameRules, DotaRetrieveAbilityValue<float>, GetGameTime, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "stone_duration"
void __fastcall CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Timer::OnCreated(
        CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Timer *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4
  float v5; // xmm0_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->stone_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "stone_duration", -1, 0);
  else
    this->stone_duration = 0.0;
  v5 = 0.0;
  if ( g_pGameRules != 0 )
    v5 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_fStartTime = v5;
  CDOTA_Buff::StartIntervalThink(this, 1.0, v4);
}


// CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Timer::OnIntervalThink  (line 1890, @0x0000000002cd7db0, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, DOTAGameRules, GetGameTime, GetTeamNumber, Vector, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTA_Buff::GetParent, CDOTA_BaseNPC::GetOpposingTeamNumber, GetGlobalTeam, CRecipientFilter::RemoveRecipientsByTeam, CRecipientFilter::AddRecipient, CRecipientFilter::AddRecipientsByTeam, GetParticleManager, CDOTA_ParticleManager::CreateParticle, floorf (17 total)
// strings: "particles/units/heroes/hero_visage/visage_stoneform_overhead_timer.vpcf"
void __fastcall CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Timer::OnIntervalThink(
        CDOTA_Modifier_Visage_SummonFamiliars_StoneForm_Timer *const this)
{
  float v1; // xmm1_4
  __m128i v3; // xmm0
  float v4; // r14d
  CDOTA_BaseNPC *Parent; // rax
  int OpposingTeamNumber; // eax
  CTeam *GlobalTeam; // rax
  CDOTA_BaseNPC *v8; // rax
  CTeam *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  const CEntityInstance *v11; // rax
  CTeam *v12; // rax
  CDOTA_BaseNPC *v13; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v15; // rax
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  double v18; // [rsp-18h] [rbp-178h]
  __int64 (__fastcall **v19)(CRecipientFilter *__hidden); // [rsp-8h] [rbp-168h] BYREF
  CReliableBroadcastRecipientFilter filter; // [rsp+0h] [rbp-160h]

  v1 = 0.0;
  *&filter.m_bUsingPredictionRules = __readfsqword(0x28u);
  v3 = 0x3F800000u;
  *v3.m128i_i32 = this->stone_duration + 1.0;
  if ( g_pGameRules != 0 )
    v1 = *&g_pGameRules[18].m_szQuestName[20];
  *v3.m128i_i32 = *v3.m128i_i32 - (v1 - this->m_fStartTime);
  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  CRecipientFilter::CRecipientFilter(&v19);
  v19 = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&v19);
  v19 = &off_3FCB130;
  CRecipientFilter::MakeReliable(&v19);
  Parent = CDOTA_Buff::GetParent(this);
  OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(Parent);
  GlobalTeam = GetGlobalTeam(OpposingTeamNumber);
  CRecipientFilter::RemoveRecipientsByTeam(&v19, GlobalTeam);
  v8 = CDOTA_Buff::GetParent(this);
  v9 = GetGlobalTeam(v8->m_iTeamNum.m_Value);
  CRecipientFilter::RemoveRecipientsByTeam(&v19, v9);
  v10 = CDOTA_Buff::GetParent(this);
  v11 = (*(v10->_vptr_IHandleEntity + 413))(v10);
  CRecipientFilter::AddRecipient(&v19, v11);
  v12 = GetGlobalTeam(1);
  CRecipientFilter::AddRecipientsByTeam(&v19, v12);
  v13 = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(v13) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_visage/visage_stoneform_overhead_timer.vpcf",
                   7,
                   v13,
                   &v19,
                   0);
  LODWORD(v18) = 0;
  HIDWORD(v18) = floorf(v4);
  v15 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v15, v13, 1, v18, 0.0);
  v16 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v16, v13, 2, COERCE_DOUBLE(1065353216), 0.0);
  v17 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v17, v13);
  v19 = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&v19);
}


// CDOTA_Unit_Hero_Visage::Event_Killed  (line 1912, @0x0000000002ceb870, libserver.so)  // inlines: GetGameMode
// calls: CDOTA_BaseNPC_Hero::Event_Killed, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_Visage_SummonFamiliars::DestroyFamiliars
// strings: "visage_summon_familiars"
void __fastcall CDOTA_Unit_Hero_Visage::Event_Killed(
        CDOTA_Unit_Hero_Visage *const this,
        const CTakeDamageInfo *const info)
{
  CDOTA_Ability_Visage_SummonFamiliars *AbilityByName; // rax

  if ( *&g_pGameRules[6].m_szQuestName[68] == 20
    && (AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "visage_summon_familiars", 0)) != 0 )
  {
    CDOTA_Ability_Visage_SummonFamiliars::DestroyFamiliars(AbilityByName);
    CDOTA_BaseNPC_Hero::Event_Killed(this, info);
  }
  else
  {
    CDOTA_BaseNPC_Hero::Event_Killed(this, info);
  }
}


