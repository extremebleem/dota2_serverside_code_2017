// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_faceless_void.cpp:37
class CDOTA_Unit_Hero_FacelessVoid : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_FacelessVoid(CDOTA_Unit_Hero_FacelessVoid &);
	CDOTA_Unit_Hero_FacelessVoid(CDOTA_Unit_Hero_FacelessVoid &);
	CDOTA_Unit_Hero_FacelessVoid();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual ~CDOTA_Unit_Hero_FacelessVoid();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[6] Precache
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_faceless_void.cpp:46
class C_CDOTA_Unit_Hero_FacelessVoid_MapInstall {
	C_CDOTA_Unit_Hero_FacelessVoid_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_faceless_void.cpp:69
class CDOTA_Ability_FacelessVoid_Backtrack : public CDOTABaseAbility {
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
	CDOTA_Ability_FacelessVoid_Backtrack(CDOTA_Ability_FacelessVoid_Backtrack &);
	CDOTA_Ability_FacelessVoid_Backtrack(CDOTA_Ability_FacelessVoid_Backtrack &);
	CDOTA_Ability_FacelessVoid_Backtrack();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_FacelessVoid_Backtrack();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_faceless_void.cpp:83
class CDOTA_Modifier_FacelessVoid_Backtrack : public CDOTA_Buff {
public:

private:

	int dodge_chance_pct;  // +0xba8
	CDOTA_Modifier_FacelessVoid_Backtrack();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierAvoidDamage(const CModifierParams &);
	virtual ~CDOTA_Modifier_FacelessVoid_Backtrack();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierAvoidDamage
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_faceless_void.cpp:151
class CDOTA_Ability_FacelessVoid_TimeLock : public CDOTABaseAbility {
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
	CDOTA_Ability_FacelessVoid_TimeLock(CDOTA_Ability_FacelessVoid_TimeLock &);
	CDOTA_Ability_FacelessVoid_TimeLock(CDOTA_Ability_FacelessVoid_TimeLock &);
	CDOTA_Ability_FacelessVoid_TimeLock();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_FacelessVoid_TimeLock();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_faceless_void.cpp:165
class CDOTA_Modifier_FacelessVoid_TimeLock : public CDOTA_Buff {
public:

private:

	float duration;  // +0xba8
	float duration_creep;  // +0xbac
	int chance_pct;  // +0xbb0
	int bonus_damage;  // +0xbb4
	CDOTA_Modifier_FacelessVoid_TimeLock();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierProcAttack_BonusDamage_Magical(const CModifierParams &);
	virtual ~CDOTA_Modifier_FacelessVoid_TimeLock();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierProcAttack_BonusDamage_Magical
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_faceless_void.cpp:242
class CDOTA_Modifier_FacelessVoid_TimeLock_Freeze : public CDOTA_Modifier_Stunned {
public:

	CDOTA_Modifier_FacelessVoid_TimeLock_Freeze();
	virtual bool IsDebuff();
	virtual bool IsStunDebuff();
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_FacelessVoid_TimeLock_Freeze();

	// vtable[12] IsDebuff
	// vtable[16] IsStunDebuff
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_faceless_void.cpp:285
class CDOTA_Ability_FacelessVoid_TimeDilation : public CDOTABaseAbility {
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
	CDOTA_Ability_FacelessVoid_TimeDilation(CDOTA_Ability_FacelessVoid_TimeDilation &);
	CDOTA_Ability_FacelessVoid_TimeDilation(CDOTA_Ability_FacelessVoid_TimeDilation &);
	CDOTA_Ability_FacelessVoid_TimeDilation();
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
	virtual ~CDOTA_Ability_FacelessVoid_TimeDilation();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[333] GetAOERadius
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_faceless_void.cpp:298
class C_CDOTA_Ability_FacelessVoid_TimeDilation_MapInstall {
	C_CDOTA_Ability_FacelessVoid_TimeDilation_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_faceless_void.cpp:351
class CDOTA_Modifier_FacelessVoid_TimeDilation_Slow : public CDOTA_Buff {
	struct SavedCooldown {
		EHANDLE hAbility;  // +0x0
		float flCooldown;  // +0x4
		SavedCooldown();
		SavedCooldown(const SavedCooldown &);

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

private:

	int m_nFXIndex;  // +0xba8
	int m_nAffectedAbilities;  // +0xbac
	int slow;  // +0xbb0

	CDOTA_Modifier_FacelessVoid_TimeDilation_Slow();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual const char * GetEffectName();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual bool IsDebuff();
	virtual ~CDOTA_Modifier_FacelessVoid_TimeDilation_Slow();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[67] GetEffectName
	// vtable[65] DeclareFunctions
	// vtable[12] IsDebuff
	// sizeof = 3216
};

// src/game/shared/dota/units/dota_unit_hero_faceless_void.cpp:462
class CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker : public CDOTA_Buff {
	struct sDamageSources {
		float flTime;  // +0x0
		float flAmount;  // +0x4

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

private:

	CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual bool RemoveOnDeath();
	virtual void DeclareFunctions();
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	float FindOldDamage(float);
	virtual ~CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[54] RemoveOnDeath
	// vtable[65] DeclareFunctions
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_faceless_void.cpp:550
class CDOTA_Ability_FacelessVoid_TimeWalk : public CDOTABaseAbility, public CHorizontalMotionController {
public:

private:

	int speed;  // +0x39c
	int range;  // +0x3a0
	int radius;  // +0x3a4
	int m_nProjectileID;  // +0x3a8
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
	CDOTA_Ability_FacelessVoid_TimeWalk(CDOTA_Ability_FacelessVoid_TimeWalk &);
	CDOTA_Ability_FacelessVoid_TimeWalk(CDOTA_Ability_FacelessVoid_TimeWalk &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Ability_FacelessVoid_TimeWalk();
	virtual bool OnAbilityPhaseStart();
	virtual void OnAbilityPhaseInterrupted();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual void OnProjectileThink(const Vector &);
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual void Spawn(const CEntityKeyValues *);
	virtual ~CDOTA_Ability_FacelessVoid_TimeWalk();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[291] OnProjectileThink
	// vtable[333] UpdateHorizontalMotion
	// vtable[334] OnHorizontalMotionInterrupted
	// vtable[8] Spawn
	// sizeof = 952
};

// src/game/shared/dota/units/dota_unit_hero_faceless_void.cpp:597
class C_CDOTA_Ability_FacelessVoid_TimeWalk_MapInstall {
	C_CDOTA_Ability_FacelessVoid_TimeWalk_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_faceless_void.cpp:783
class CDOTA_Modifier_FacelessVoid_TimeWalk_Slow : public CDOTA_Buff {
public:

private:

	int movement_speed_pct;  // +0xba8
	CDOTA_Modifier_FacelessVoid_TimeWalk_Slow();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual bool IsDebuff();
	virtual ~CDOTA_Modifier_FacelessVoid_TimeWalk_Slow();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[12] IsDebuff
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_faceless_void.cpp:829
class CDOTA_Modifier_FacelessVoid_TimeWalk : public CDOTA_Buff {
public:

	CDOTA_Modifier_FacelessVoid_TimeWalk();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsPurgable();
	virtual void CheckState(CDOTABuffState &);
	virtual ModifierVariant_t GetModifierInvisibilityLevel(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_FacelessVoid_TimeWalk();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// vtable[89] GetModifierInvisibilityLevel
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[11] IsHidden
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_faceless_void.cpp:893
class CDOTA_Ability_FacelessVoid_Chronosphere : public CDOTABaseAbility {
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
	CDOTA_Ability_FacelessVoid_Chronosphere(CDOTA_Ability_FacelessVoid_Chronosphere &);
	CDOTA_Ability_FacelessVoid_Chronosphere(CDOTA_Ability_FacelessVoid_Chronosphere &);
	CDOTA_Ability_FacelessVoid_Chronosphere();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual float GetAOERadius();
	virtual float GetCooldown(int);
	virtual void OnSpellStart();
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_FacelessVoid_Chronosphere();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[333] GetAOERadius
	// vtable[242] GetCooldown
	// vtable[266] OnSpellStart
	// vtable[322] GetStunDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_faceless_void.cpp:908
class C_CDOTA_Ability_FacelessVoid_Chronosphere_MapInstall {
	C_CDOTA_Ability_FacelessVoid_Chronosphere_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_faceless_void.cpp:963
class CDOTA_Modifier_FacelessVoid_Chronosphere : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	CDOTA_Modifier_FacelessVoid_Chronosphere();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual bool GetAuraEntityReject(CDOTA_BaseNPC *);
	virtual float GetAuraDuration();
	virtual int GetNumAvoidLocations();
	virtual Vector GetAvoidLocation(int);
	virtual float AvoidStrength(CDOTA_Bot *);
	virtual float GetAvoidRadius(int);
	virtual bool IsAvoidMagical();
	virtual bool IsPersistentAvoidance();
	virtual ~CDOTA_Modifier_FacelessVoid_Chronosphere();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[42] GetAuraEntityReject
	// vtable[83] GetAuraDuration
	// vtable[74] GetNumAvoidLocations
	// vtable[75] GetAvoidLocation
	// vtable[77] AvoidStrength
	// vtable[78] GetAvoidRadius
	// vtable[79] IsAvoidMagical
	// vtable[81] IsPersistentAvoidance
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_faceless_void.cpp:1056
class CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze : public CDOTA_Buff, public CHorizontalMotionController, public CVerticalMotionController {
public:

	CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void UpdateVerticalMotion(CDOTA_BaseNPC *, float);
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsVerticalMotionValidToApply();
	virtual bool IsMotionController();
	virtual bool IsDebuff();
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual int GetAttributes();
	virtual void CheckState(CDOTABuffState &);
	virtual int GetPriority();
	virtual void DeclareFunctions();
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual ~CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] UpdateVerticalMotion
	// vtable[91] IsHorizontalMotionValidToApply
	// vtable[92] IsVerticalMotionValidToApply
	// vtable[21] IsMotionController
	// vtable[12] IsDebuff
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[7] GetAttributes
	// vtable[5] CheckState
	// vtable[6] GetPriority
	// vtable[65] DeclareFunctions
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_faceless_void.cpp:1186
class CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual bool GetAuraEntityReject(CDOTA_BaseNPC *);
	virtual float GetAuraDuration();
	virtual ~CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[42] GetAuraEntityReject
	// vtable[83] GetAuraDuration
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_faceless_void.cpp:1240
class CDOTA_Modifier_FacelessVoid_Chronosphere_Speed : public CDOTA_Buff {
public:

private:

	int bonus_attack_speed;  // +0xba8
	CDOTA_Modifier_FacelessVoid_Chronosphere_Speed();
	virtual void DeclareFunctions();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual ModifierVariant_t GetModifierMoveSpeed_Absolute(const CModifierParams &);
	virtual ModifierVariant_t GetModifierMoveSpeed_Max(const CModifierParams &);
	virtual ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual void CheckState(CDOTABuffState &);
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_FacelessVoid_Chronosphere_Speed();

	// vtable[65] DeclareFunctions
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[89] GetModifierMoveSpeed_Absolute
	// vtable[90] GetModifierMoveSpeed_Max
	// vtable[91] GetModifierAttackSpeedBonus_Constant
	// vtable[67] GetEffectName
	// vtable[5] CheckState
	// vtable[57] OnCreated
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_FacelessVoid::~CDOTA_Unit_Hero_FacelessVoid  (line 37, @0x0000000002ac6710, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_FacelessVoid::~CDOTA_Unit_Hero_FacelessVoid(CDOTA_Unit_Hero_FacelessVoid *const this)
{
  this->_vptr_IHandleEntity = &off_43F50B0;
  this->_vptr_INextBotEventResponder = &off_43F6090;
  this->_vptr_CObstructionObject = &off_43F63C0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_FacelessVoid::~CDOTA_Unit_Hero_FacelessVoid  (line 37, @0x0000000002ac6750, libserver.so)  // inlines: ~CDOTA_Unit_Hero_FacelessVoid
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_FacelessVoid::~CDOTA_Unit_Hero_FacelessVoid(CDOTA_Unit_Hero_FacelessVoid *const this)
{
  this->_vptr_IHandleEntity = &off_43F50B0;
  this->_vptr_INextBotEventResponder = &off_43F6090;
  this->_vptr_CObstructionObject = &off_43F63C0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_FacelessVoid::Schema_DynamicBinding  (line 39, @0x0000000002ab8d00, libserver.so)
// globals: CDOTA_Unit_Hero_FacelessVoid::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_FacelessVoid::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_FacelessVoid *const this)
{
  return CDOTA_Unit_Hero_FacelessVoid::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_FacelessVoid::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 39, @0x0000000002ab8d30, libserver.so)
// globals: CDOTA_Unit_Hero_FacelessVoid::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_FacelessVoid::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_FacelessVoid::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_FacelessVoid::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_FacelessVoid::CEntityInstanceEntityClass::DestructInstance  (line 39, @0x0000000002ab8d40, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_FacelessVoid>
void __fastcall CDOTA_Unit_Hero_FacelessVoid::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_FacelessVoid::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_FacelessVoid::CEntityInstanceEntityClass::FreeInstance  (line 39, @0x0000000002ab8d60, libserver.so)
void __fastcall CDOTA_Unit_Hero_FacelessVoid::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_FacelessVoid::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_FacelessVoid::CEntityInstanceEntityClass::CanAllocate  (line 39, @0x0000000002ab8d80, libserver.so)
bool __fastcall CDOTA_Unit_Hero_FacelessVoid::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_FacelessVoid::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_FacelessVoid::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 39, @0x0000000002ab8d90, libserver.so)
// globals: CDOTA_Unit_Hero_FacelessVoid::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_FacelessVoid::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_FacelessVoid::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_FacelessVoid::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_FacelessVoid::CEntityInstanceEntityClass::AllocateInstance  (line 39, @0x0000000002abed40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_FacelessVoid::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_FacelessVoid::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_FacelessVoid::CEntityInstanceEntityClass::ConstructInstance  (line 39, @0x0000000002ac48f0, libserver.so)  // inlines: CDOTA_Unit_Hero_FacelessVoid, Construct<CDOTA_Unit_Hero_FacelessVoid>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_FacelessVoid::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_FacelessVoid::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_43F50B0;
    *(p + 236) = &off_43F6090;
    *(p + 257) = &off_43F63C0;
  }
  return p;
}


// CDOTA_Unit_Hero_FacelessVoid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002acd090, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_FacelessVoid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_FacelessVoid::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_FacelessVoid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002acd350, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_FacelessVoid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_FacelessVoid::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_FacelessVoid::GetEntityClassInternal  (line 39, @0x0000000002adbd60, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "npc_dota_hero_faceless_void", "CDOTA_Unit_Hero_FacelessVoid"
// globals: `guard variable for'CDOTA_Unit_Hero_FacelessVoid::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_FacelessVoidClass, CDOTA_Unit_Hero_FacelessVoid::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_FacelessVoidClass, __dso_handle, CDOTA_Unit_Hero_FacelessVoid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_FacelessVoid::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_FacelessVoidClassInfo, CDOTA_Unit_Hero_FacelessVoid::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_FacelessVoidClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_FacelessVoid::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_FacelessVoid::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_FacelessVoidClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_FacelessVoid::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_FacelessVoidClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_FacelessVoid::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_FacelessVoidClass);
    CDOTA_Unit_Hero_FacelessVoid::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_FacelessVoidClass._vptr_CEntityClass = off_43F5030;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_FacelessVoid::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_FacelessVoidClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_FacelessVoid::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_FacelessVoid::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_FacelessVoidClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_FacelessVoidClass != 0 )
    return &CDOTA_Unit_Hero_FacelessVoid::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_FacelessVoidClass;
  if ( `guard variable for'CDOTA_Unit_Hero_FacelessVoid::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_FacelessVoidClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_FacelessVoid::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_FacelessVoidClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_FacelessVoid::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_FacelessVoidClassInfo,
      "CDOTA_Unit_Hero_FacelessVoid",
      "npc_dota_hero_faceless_void",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_FacelessVoid::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_FacelessVoidClassInfo);
  }
  CDOTA_Unit_Hero_FacelessVoid::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_FacelessVoidClass.m_pClassInfo = &CDOTA_Unit_Hero_FacelessVoid::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_FacelessVoidClassInfo;
  CDOTA_Unit_Hero_FacelessVoid::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_FacelessVoidClass.m_pBaseClassInfo = CDOTA_Unit_Hero_FacelessVoid::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_FacelessVoidClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_FacelessVoidClass = &CDOTA_Unit_Hero_FacelessVoid::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_FacelessVoidClass;
  CDOTA_Unit_Hero_FacelessVoid::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_FacelessVoidClassInfo.m_pClass = &CDOTA_Unit_Hero_FacelessVoid::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_FacelessVoidClass;
  CDOTA_Unit_Hero_FacelessVoid::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_FacelessVoidClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_FacelessVoidClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_FacelessVoid::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_FacelessVoidClass;
}


// CDOTA_Unit_Hero_FacelessVoid::YouForgotToImplementOrDeclareServerClass  (line 46, @0x0000000002a77970, libserver.so)
int __fastcall CDOTA_Unit_Hero_FacelessVoid::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_FacelessVoid *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_FacelessVoid::GetServerClass  (line 46, @0x0000000002a8a3f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_FacelessVoid::GetServerClass(CDOTA_Unit_Hero_FacelessVoid *const this)
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


// CDOTA_Unit_Hero_FacelessVoid::Precache  (line 54, @0x0000000002a7b200, libserver.so)
// calls: PrecacheParticleSystem, CDOTA_BaseNPC_Hero::Precache
// strings: "particles/units/heroes/hero_morphling/morphling_waveform.vpcf"
void __fastcall CDOTA_Unit_Hero_FacelessVoid::Precache(
        CDOTA_Unit_Hero_FacelessVoid *const this,
        const CEntityPrecacheContext *pContext)
{
  PrecacheParticleSystem("particles/units/heroes/hero_morphling/morphling_waveform.vpcf", pContext);
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
}


// CDOTA_Ability_FacelessVoid_Backtrack::~CDOTA_Ability_FacelessVoid_Backtrack  (line 69, @0x0000000002ac5500, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_FacelessVoid_Backtrack::~CDOTA_Ability_FacelessVoid_Backtrack(
        CDOTA_Ability_FacelessVoid_Backtrack *const this)
{
  this->_vptr_IHandleEntity = &off_43F6490;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_FacelessVoid_Backtrack::~CDOTA_Ability_FacelessVoid_Backtrack  (line 69, @0x0000000002ac5520, libserver.so)  // inlines: ~CDOTA_Ability_FacelessVoid_Backtrack
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_FacelessVoid_Backtrack::~CDOTA_Ability_FacelessVoid_Backtrack(
        CDOTA_Ability_FacelessVoid_Backtrack *const this)
{
  this->_vptr_IHandleEntity = &off_43F6490;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_FacelessVoid_Backtrack::Schema_DynamicBinding  (line 71, @0x0000000002ab8da0, libserver.so)
// globals: CDOTA_Ability_FacelessVoid_Backtrack::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_FacelessVoid_Backtrack::Schema_DynamicBinding(
        const CDOTA_Ability_FacelessVoid_Backtrack *const this)
{
  return CDOTA_Ability_FacelessVoid_Backtrack::s_pSchemaBinding;
}


// CDOTA_Ability_FacelessVoid_Backtrack::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 71, @0x0000000002ab8db0, libserver.so)
// globals: CDOTA_Ability_FacelessVoid_Backtrack::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_FacelessVoid_Backtrack::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_FacelessVoid_Backtrack::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_FacelessVoid_Backtrack::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_FacelessVoid_Backtrack::CEntityInstanceEntityClass::DestructInstance  (line 71, @0x0000000002ab8dc0, libserver.so)  // inlines: Destruct<CDOTA_Ability_FacelessVoid_Backtrack>
void __fastcall CDOTA_Ability_FacelessVoid_Backtrack::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_FacelessVoid_Backtrack::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_FacelessVoid_Backtrack::CEntityInstanceEntityClass::FreeInstance  (line 71, @0x0000000002ab8de0, libserver.so)
void __fastcall CDOTA_Ability_FacelessVoid_Backtrack::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_FacelessVoid_Backtrack::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_FacelessVoid_Backtrack::CEntityInstanceEntityClass::CanAllocate  (line 71, @0x0000000002ab8e00, libserver.so)
bool __fastcall CDOTA_Ability_FacelessVoid_Backtrack::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_FacelessVoid_Backtrack::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_FacelessVoid_Backtrack::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 71, @0x0000000002ab8e10, libserver.so)
// globals: CDOTA_Ability_FacelessVoid_Backtrack::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_FacelessVoid_Backtrack::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_FacelessVoid_Backtrack::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_FacelessVoid_Backtrack::s_pSchemaBinding;
}


// CDOTA_Ability_FacelessVoid_Backtrack::CEntityInstanceEntityClass::AllocateInstance  (line 71, @0x0000000002abed80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_FacelessVoid_Backtrack::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_FacelessVoid_Backtrack::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_FacelessVoid_Backtrack::CEntityInstanceEntityClass::ConstructInstance  (line 71, @0x0000000002ac2a30, libserver.so)  // inlines: CDOTA_Ability_FacelessVoid_Backtrack, Construct<CDOTA_Ability_FacelessVoid_Backtrack>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_FacelessVoid_Backtrack::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_FacelessVoid_Backtrack::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43F6490;
  }
  return p;
}


// CDOTA_Ability_FacelessVoid_Backtrack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 71, @0x0000000002acbed0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_FacelessVoid_Backtrack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_FacelessVoid_Backtrack::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_FacelessVoid_Backtrack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 71, @0x0000000002acbef0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_FacelessVoid_Backtrack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_FacelessVoid_Backtrack::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_FacelessVoid_Backtrack::GetEntityClassInternal  (line 71, @0x0000000002adbeb0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "faceless_void_backtrack", "CDOTA_Ability_FacelessVoid_Backtrack"
// globals: `guard variable for'CDOTA_Ability_FacelessVoid_Backtrack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_BacktrackClass, CDOTA_Ability_FacelessVoid_Backtrack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_BacktrackClass, __dso_handle, CDOTA_Ability_FacelessVoid_Backtrack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_FacelessVoid_Backtrack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_BacktrackClassInfo, CDOTA_Ability_FacelessVoid_Backtrack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_BacktrackClassInfo
CEntityClass *__cdecl CDOTA_Ability_FacelessVoid_Backtrack::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_FacelessVoid_Backtrack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_BacktrackClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_FacelessVoid_Backtrack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_BacktrackClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_FacelessVoid_Backtrack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_BacktrackClass);
    CDOTA_Ability_FacelessVoid_Backtrack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_BacktrackClass._vptr_CEntityClass = off_43F6410;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_FacelessVoid_Backtrack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_BacktrackClass);
    __cxa_atexit(
      CDOTA_Ability_FacelessVoid_Backtrack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_FacelessVoid_Backtrack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_BacktrackClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_FacelessVoid_BacktrackClass != 0 )
    return &CDOTA_Ability_FacelessVoid_Backtrack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_BacktrackClass;
  if ( `guard variable for'CDOTA_Ability_FacelessVoid_Backtrack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_BacktrackClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_FacelessVoid_Backtrack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_BacktrackClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_FacelessVoid_Backtrack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_BacktrackClassInfo,
      "CDOTA_Ability_FacelessVoid_Backtrack",
      "faceless_void_backtrack",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_FacelessVoid_Backtrack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_BacktrackClassInfo);
  }
  CDOTA_Ability_FacelessVoid_Backtrack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_BacktrackClass.m_pClassInfo = &CDOTA_Ability_FacelessVoid_Backtrack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_BacktrackClassInfo;
  CDOTA_Ability_FacelessVoid_Backtrack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_BacktrackClass.m_pBaseClassInfo = CDOTA_Ability_FacelessVoid_Backtrack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_BacktrackClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_FacelessVoid_BacktrackClass = &CDOTA_Ability_FacelessVoid_Backtrack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_BacktrackClass;
  CDOTA_Ability_FacelessVoid_Backtrack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_BacktrackClassInfo.m_pClass = &CDOTA_Ability_FacelessVoid_Backtrack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_BacktrackClass;
  CDOTA_Ability_FacelessVoid_Backtrack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_BacktrackClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_FacelessVoid_BacktrackClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_FacelessVoid_Backtrack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_BacktrackClass;
}


// CDOTA_Ability_FacelessVoid_Backtrack::GetIntrinsicModifierName  (line 74, @0x0000000002ab8e20, libserver.so)
// strings: "modifier_faceless_void_backtrack"
const char *__fastcall CDOTA_Ability_FacelessVoid_Backtrack::GetIntrinsicModifierName(
        CDOTA_Ability_FacelessVoid_Backtrack *const this)
{
  return "modifier_faceless_void_backtrack";
}


// CDOTA_Modifier_FacelessVoid_Backtrack::~CDOTA_Modifier_FacelessVoid_Backtrack  (line 83, @0x0000000002ac1a00, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_FacelessVoid_Backtrack::~CDOTA_Modifier_FacelessVoid_Backtrack(
        CDOTA_Modifier_FacelessVoid_Backtrack *const this)
{
  this->_vptr_CDOTA_Buff = &off_43F6F50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_FacelessVoid_Backtrack::~CDOTA_Modifier_FacelessVoid_Backtrack  (line 83, @0x0000000002ac1a20, libserver.so)  // inlines: ~CDOTA_Modifier_FacelessVoid_Backtrack
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_FacelessVoid_Backtrack::~CDOTA_Modifier_FacelessVoid_Backtrack(
        CDOTA_Modifier_FacelessVoid_Backtrack *const this)
{
  this->_vptr_CDOTA_Buff = &off_43F6F50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_FacelessVoid_Backtrack::IsHidden  (line 91, @0x0000000002ab8e30, libserver.so)
bool __fastcall CDOTA_Modifier_FacelessVoid_Backtrack::IsHidden(CDOTA_Modifier_FacelessVoid_Backtrack *const this)
{
  return 1;
}


// CDOTA_Modifier_FacelessVoid_Backtrack::OnCreated  (line 105, @0x0000000002aa9bc0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "dodge_chance_pct"
void __fastcall CDOTA_Modifier_FacelessVoid_Backtrack::OnCreated(
        CDOTA_Modifier_FacelessVoid_Backtrack *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->dodge_chance_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "dodge_chance_pct", -1, 0);
  else
    this->dodge_chance_pct = 0;
}


// CDOTA_Modifier_FacelessVoid_Backtrack::OnRefresh  (line 112, @0x0000000002aaa280, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "dodge_chance_pct"
void __fastcall CDOTA_Modifier_FacelessVoid_Backtrack::OnRefresh(
        CDOTA_Modifier_FacelessVoid_Backtrack *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->dodge_chance_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "dodge_chance_pct", -1, 0);
  else
    this->dodge_chance_pct = 0;
}


// CDOTA_Modifier_FacelessVoid_Backtrack::DeclareFunctions  (line 119, @0x0000000002a77980, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_FacelessVoid_Backtrack::DeclareFunctions(
        CDOTA_Modifier_FacelessVoid_Backtrack *const this)
{
  this->m_Functions[42].__pfn = (&stru_10 + 697);
  this->m_Functions[42].__delta = 0;
}


// CDOTA_Modifier_FacelessVoid_Backtrack::GetModifierAvoidDamage  (line 126, @0x0000000002a7d290, libserver.so)  // inlines: ModifierVariant_t
// calls: CDOTA_Buff::GetParent, RollPseudoRandomPercentage, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "particles/units/heroes/hero_faceless_void/faceless_void_backtrack.vpcf"
ModifierVariant_t __fastcall CDOTA_Modifier_FacelessVoid_Backtrack::GetModifierAvoidDamage(
        CDOTA_Modifier_FacelessVoid_Backtrack *const this,
        const CModifierParams *const params)
{
  __m128i v4; // xmm0
  CDOTA_BaseNPC *Parent; // rax
  bool v6; // al
  CDOTA_BaseNPC *v7; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v9; // rax
  ModifierVariant_t result; // 0:rax.16

  if ( (params->nDamageflags & 0x20) != 0 )
    return 1uLL;
  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) != 0
    || CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value )
  {
    v4 = 0;
  }
  else
  {
    Parent = CDOTA_Buff::GetParent(this);
    v6 = RollPseudoRandomPercentage(
           this->dodge_chance_pct,
           DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_FACELESS_VOID_BACKTRACK,
           Parent);
    v4 = 0;
    if ( v6 )
    {
      v7 = CDOTA_Buff::GetParent(this);
      ParticleManager = GetParticleManager();
      LODWORD(v7) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_faceless_void/faceless_void_backtrack.vpcf",
                      1,
                      v7,
                      0,
                      0);
      v9 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v9, v7);
      v4 = 0x3F800000u;
    }
  }
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v4) << 32) | 1;
  return result;
}


// CDOTA_Ability_FacelessVoid_TimeLock::~CDOTA_Ability_FacelessVoid_TimeLock  (line 151, @0x0000000002ac5550, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_FacelessVoid_TimeLock::~CDOTA_Ability_FacelessVoid_TimeLock(
        CDOTA_Ability_FacelessVoid_TimeLock *const this)
{
  this->_vptr_IHandleEntity = &off_43F72B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_FacelessVoid_TimeLock::~CDOTA_Ability_FacelessVoid_TimeLock  (line 151, @0x0000000002ac5570, libserver.so)  // inlines: ~CDOTA_Ability_FacelessVoid_TimeLock
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_FacelessVoid_TimeLock::~CDOTA_Ability_FacelessVoid_TimeLock(
        CDOTA_Ability_FacelessVoid_TimeLock *const this)
{
  this->_vptr_IHandleEntity = &off_43F72B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_FacelessVoid_TimeLock::Schema_DynamicBinding  (line 153, @0x0000000002ab8e40, libserver.so)
// globals: CDOTA_Ability_FacelessVoid_TimeLock::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_FacelessVoid_TimeLock::Schema_DynamicBinding(
        const CDOTA_Ability_FacelessVoid_TimeLock *const this)
{
  return CDOTA_Ability_FacelessVoid_TimeLock::s_pSchemaBinding;
}


// CDOTA_Ability_FacelessVoid_TimeLock::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 153, @0x0000000002ab8e50, libserver.so)
// globals: CDOTA_Ability_FacelessVoid_TimeLock::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_FacelessVoid_TimeLock::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_FacelessVoid_TimeLock::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_FacelessVoid_TimeLock::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_FacelessVoid_TimeLock::CEntityInstanceEntityClass::DestructInstance  (line 153, @0x0000000002ab8e60, libserver.so)  // inlines: Destruct<CDOTA_Ability_FacelessVoid_TimeLock>
void __fastcall CDOTA_Ability_FacelessVoid_TimeLock::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_FacelessVoid_TimeLock::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_FacelessVoid_TimeLock::CEntityInstanceEntityClass::FreeInstance  (line 153, @0x0000000002ab8e80, libserver.so)
void __fastcall CDOTA_Ability_FacelessVoid_TimeLock::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_FacelessVoid_TimeLock::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_FacelessVoid_TimeLock::CEntityInstanceEntityClass::CanAllocate  (line 153, @0x0000000002ab8ea0, libserver.so)
bool __fastcall CDOTA_Ability_FacelessVoid_TimeLock::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_FacelessVoid_TimeLock::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_FacelessVoid_TimeLock::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 153, @0x0000000002ab8eb0, libserver.so)
// globals: CDOTA_Ability_FacelessVoid_TimeLock::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_FacelessVoid_TimeLock::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_FacelessVoid_TimeLock::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_FacelessVoid_TimeLock::s_pSchemaBinding;
}


// CDOTA_Ability_FacelessVoid_TimeLock::CEntityInstanceEntityClass::AllocateInstance  (line 153, @0x0000000002abedc0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_FacelessVoid_TimeLock::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_FacelessVoid_TimeLock::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_FacelessVoid_TimeLock::CEntityInstanceEntityClass::ConstructInstance  (line 153, @0x0000000002ac2a60, libserver.so)  // inlines: CDOTA_Ability_FacelessVoid_TimeLock, Construct<CDOTA_Ability_FacelessVoid_TimeLock>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_FacelessVoid_TimeLock::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_FacelessVoid_TimeLock::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43F72B0;
  }
  return p;
}


// CDOTA_Ability_FacelessVoid_TimeLock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 153, @0x0000000002acbf20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_FacelessVoid_TimeLock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_FacelessVoid_TimeLock::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_FacelessVoid_TimeLock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 153, @0x0000000002acbf40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_FacelessVoid_TimeLock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_FacelessVoid_TimeLock::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_FacelessVoid_TimeLock::GetEntityClassInternal  (line 153, @0x0000000002adc000, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "faceless_void_time_lock", "CDOTA_Ability_FacelessVoid_TimeLock"
// globals: `guard variable for'CDOTA_Ability_FacelessVoid_TimeLock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeLockClass, CDOTA_Ability_FacelessVoid_TimeLock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeLockClass, __dso_handle, CDOTA_Ability_FacelessVoid_TimeLock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_FacelessVoid_TimeLock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeLockClassInfo, CDOTA_Ability_FacelessVoid_TimeLock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeLockClassInfo
CEntityClass *__cdecl CDOTA_Ability_FacelessVoid_TimeLock::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_FacelessVoid_TimeLock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeLockClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_FacelessVoid_TimeLock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeLockClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_FacelessVoid_TimeLock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeLockClass);
    CDOTA_Ability_FacelessVoid_TimeLock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeLockClass._vptr_CEntityClass = off_43F7230;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_FacelessVoid_TimeLock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeLockClass);
    __cxa_atexit(
      CDOTA_Ability_FacelessVoid_TimeLock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_FacelessVoid_TimeLock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeLockClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_FacelessVoid_TimeLockClass != 0 )
    return &CDOTA_Ability_FacelessVoid_TimeLock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeLockClass;
  if ( `guard variable for'CDOTA_Ability_FacelessVoid_TimeLock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeLockClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_FacelessVoid_TimeLock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeLockClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_FacelessVoid_TimeLock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeLockClassInfo,
      "CDOTA_Ability_FacelessVoid_TimeLock",
      "faceless_void_time_lock",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_FacelessVoid_TimeLock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeLockClassInfo);
  }
  CDOTA_Ability_FacelessVoid_TimeLock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeLockClass.m_pClassInfo = &CDOTA_Ability_FacelessVoid_TimeLock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeLockClassInfo;
  CDOTA_Ability_FacelessVoid_TimeLock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeLockClass.m_pBaseClassInfo = CDOTA_Ability_FacelessVoid_TimeLock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeLockClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_FacelessVoid_TimeLockClass = &CDOTA_Ability_FacelessVoid_TimeLock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeLockClass;
  CDOTA_Ability_FacelessVoid_TimeLock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeLockClassInfo.m_pClass = &CDOTA_Ability_FacelessVoid_TimeLock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeLockClass;
  CDOTA_Ability_FacelessVoid_TimeLock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeLockClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_FacelessVoid_TimeLockClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_FacelessVoid_TimeLock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeLockClass;
}


// CDOTA_Ability_FacelessVoid_TimeLock::GetIntrinsicModifierName  (line 156, @0x0000000002ab8ec0, libserver.so)
// strings: "modifier_faceless_void_time_lock"
const char *__fastcall CDOTA_Ability_FacelessVoid_TimeLock::GetIntrinsicModifierName(
        CDOTA_Ability_FacelessVoid_TimeLock *const this)
{
  return "modifier_faceless_void_time_lock";
}


// CDOTA_Modifier_FacelessVoid_TimeLock::~CDOTA_Modifier_FacelessVoid_TimeLock  (line 165, @0x0000000002ac19b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_FacelessVoid_TimeLock::~CDOTA_Modifier_FacelessVoid_TimeLock(
        CDOTA_Modifier_FacelessVoid_TimeLock *const this)
{
  this->_vptr_CDOTA_Buff = &off_43F7D70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_FacelessVoid_TimeLock::~CDOTA_Modifier_FacelessVoid_TimeLock  (line 165, @0x0000000002ac19d0, libserver.so)  // inlines: ~CDOTA_Modifier_FacelessVoid_TimeLock
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_FacelessVoid_TimeLock::~CDOTA_Modifier_FacelessVoid_TimeLock(
        CDOTA_Modifier_FacelessVoid_TimeLock *const this)
{
  this->_vptr_CDOTA_Buff = &off_43F7D70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_FacelessVoid_TimeLock::IsHidden  (line 173, @0x0000000002ab8ed0, libserver.so)
bool __fastcall CDOTA_Modifier_FacelessVoid_TimeLock::IsHidden(CDOTA_Modifier_FacelessVoid_TimeLock *const this)
{
  return 1;
}


// CDOTA_Modifier_FacelessVoid_TimeLock::OnCreated  (line 190, @0x0000000002aabc90, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_FacelessVoid_TimeLock::OnCreated(
        CDOTA_Modifier_FacelessVoid_TimeLock *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "duration", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->duration = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->duration_creep = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "duration_creep", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->chance_pct = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->duration_creep = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->chance_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "chance_pct", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bonus_damage", -1, 0);
    return;
  }
LABEL_9:
  this->bonus_damage = 0;
}


// CDOTA_Modifier_FacelessVoid_TimeLock::OnRefresh  (line 200, @0x0000000002aabdc0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_FacelessVoid_TimeLock::OnRefresh(
        CDOTA_Modifier_FacelessVoid_TimeLock *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "duration", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->duration = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->duration_creep = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "duration_creep", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->chance_pct = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->duration_creep = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->chance_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "chance_pct", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bonus_damage", -1, 0);
    return;
  }
LABEL_9:
  this->bonus_damage = 0;
}


// CDOTA_Modifier_FacelessVoid_TimeLock::DeclareFunctions  (line 210, @0x0000000002a779a0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_FacelessVoid_TimeLock::DeclareFunctions(
        CDOTA_Modifier_FacelessVoid_TimeLock *const this)
{
  this->m_Functions[5].__pfn = (&stru_10 + 697);
  this->m_Functions[5].__delta = 0;
}


// CDOTA_Modifier_FacelessVoid_TimeLock::GetModifierProcAttack_BonusDamage_Magical  (line 217, @0x0000000002a84ac0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::PreventCritOrBashAnimations, CDOTA_Buff::GetParent, RollPseudoRandomPercentage, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_faceless_void_time_lock_stun", "modifier_faceless_void_timelock_freeze", "Hero_FacelessVoid.TimeLockImpact"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_FacelessVoid_TimeLock::GetModifierProcAttack_BonusDamage_Magical(
        CDOTA_Modifier_FacelessVoid_TimeLock *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // ecx
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 m_iUnitType; // eax
  float v12; // xmm1_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // rax
  __m128i v15; // xmm1
  unsigned __int64 v16; // [rsp+8h] [rbp-48h]
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-28h]
  ModifierVariant_t result; // 0:rax.16

  v18 = __readfsqword(0x28u);
  if ( (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x10000000) == 0
    && (v5 = CDOTA_Buff::GetCaster(this), !CDOTA_BaseNPC::PreventCritOrBashAnimations(v5))
    && (Parent = CDOTA_Buff::GetParent(this),
        RollPseudoRandomPercentage(this->chance_pct, DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_FACELESS_BASH, Parent))
    && (m_Index = params->htarget.m_Index) + 2 > 1
    && (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) != 0
    && (v9 = &v8[params->htarget.m_Index & 0x1FF]) != 0
    && m_Index == v9->m_EHandle.m_Index
    && (m_pInstance = v9->m_pInstance, v9->m_pInstance != 0)
    && m_pInstance->m_bIsDOTANPC
    && ((m_iUnitType = m_pInstance->m_iUnitType) & 0x10) == 0
    && (m_iUnitType & 0x193) != 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_faceless_void_time_lock_stun");
    KeyValues::SetFloat(&kv, "duration", v12);
    Ability = CDOTA_Buff::GetAbility(this);
    Caster = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, Ability, "modifier_faceless_void_timelock_freeze", &kv, 0);
    DOTA_EmitSound(10, "Hero_FacelessVoid.TimeLockImpact", m_pInstance);
    *v15.m128i_i32 = this->bonus_damage;
    v16 = (_mm_cvtsi128_si32(v15) << 32) | 1;
    KeyValues::~KeyValues(&kv);
    *&result.m_eType = v16;
  }
  else
  {
    *&result.m_eType = 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_FacelessVoid_TimeLock_Freeze::~CDOTA_Modifier_FacelessVoid_TimeLock_Freeze  (line 242, @0x0000000002ac1460, libserver.so)  // inlines: ~CDOTA_Modifier_Stunned
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_FacelessVoid_TimeLock_Freeze::~CDOTA_Modifier_FacelessVoid_TimeLock_Freeze(
        CDOTA_Modifier_FacelessVoid_TimeLock_Freeze *const this)
{
  this->_vptr_CDOTA_Buff = &off_411CD70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_FacelessVoid_TimeLock_Freeze::~CDOTA_Modifier_FacelessVoid_TimeLock_Freeze  (line 242, @0x0000000002ac1480, libserver.so)  // inlines: ~CDOTA_Modifier_FacelessVoid_TimeLock_Freeze, ~CDOTA_Modifier_Stunned
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_FacelessVoid_TimeLock_Freeze::~CDOTA_Modifier_FacelessVoid_TimeLock_Freeze(
        CDOTA_Modifier_FacelessVoid_TimeLock_Freeze *const this)
{
  this->_vptr_CDOTA_Buff = &off_411CD70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_FacelessVoid_TimeLock_Freeze::IsDebuff  (line 247, @0x0000000002ab8ee0, libserver.so)
bool __fastcall CDOTA_Modifier_FacelessVoid_TimeLock_Freeze::IsDebuff(
        CDOTA_Modifier_FacelessVoid_TimeLock_Freeze *const this)
{
  return 1;
}


// CDOTA_Modifier_FacelessVoid_TimeLock_Freeze::IsStunDebuff  (line 248, @0x0000000002ab8ef0, libserver.so)
bool __fastcall CDOTA_Modifier_FacelessVoid_TimeLock_Freeze::IsStunDebuff(
        CDOTA_Modifier_FacelessVoid_TimeLock_Freeze *const this)
{
  return 1;
}


// CDOTA_Modifier_FacelessVoid_TimeLock_Freeze::GetEffectName  (line 249, @0x0000000002ab8f00, libserver.so)
// strings: "particles/generic_gameplay/generic_stunned.vpcf"
const char *__fastcall CDOTA_Modifier_FacelessVoid_TimeLock_Freeze::GetEffectName(
        CDOTA_Modifier_FacelessVoid_TimeLock_Freeze *const this)
{
  return "particles/generic_gameplay/generic_stunned.vpcf";
}


// CDOTA_Modifier_FacelessVoid_TimeLock_Freeze::GetEffectAttachType  (line 250, @0x0000000002ab8f10, libserver.so)
int __fastcall CDOTA_Modifier_FacelessVoid_TimeLock_Freeze::GetEffectAttachType(
        CDOTA_Modifier_FacelessVoid_TimeLock_Freeze *const this)
{
  return 7;
}


// CDOTA_Modifier_FacelessVoid_TimeLock_Freeze::GetStatusEffectName  (line 251, @0x0000000002ab8f20, libserver.so)
// strings: "particles/status_fx/status_effect_faceless_chronosphere.vpcf"
const char *__fastcall CDOTA_Modifier_FacelessVoid_TimeLock_Freeze::GetStatusEffectName(
        CDOTA_Modifier_FacelessVoid_TimeLock_Freeze *const this)
{
  return "particles/status_fx/status_effect_faceless_chronosphere.vpcf";
}


// CDOTA_Modifier_FacelessVoid_TimeLock_Freeze::StatusEffectPriority  (line 252, @0x0000000002ab8f30, libserver.so)
int __fastcall CDOTA_Modifier_FacelessVoid_TimeLock_Freeze::StatusEffectPriority(
        CDOTA_Modifier_FacelessVoid_TimeLock_Freeze *const this)
{
  return 30;
}


// CDOTA_Modifier_FacelessVoid_TimeLock_Freeze::CheckState  (line 262, @0x0000000002a7bb60, libserver.so)  // inlines: Enable
// calls: CDOTA_Modifier_Stunned::CheckState
void __fastcall CDOTA_Modifier_FacelessVoid_TimeLock_Freeze::CheckState(
        CDOTA_Modifier_FacelessVoid_TimeLock_Freeze *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  CDOTA_Modifier_Stunned::CheckState(this, buffState);
  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x40020uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFBFFDFLL;
}


// CDOTA_Ability_FacelessVoid_TimeDilation::~CDOTA_Ability_FacelessVoid_TimeDilation  (line 285, @0x0000000002ac55a0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_FacelessVoid_TimeDilation::~CDOTA_Ability_FacelessVoid_TimeDilation(
        CDOTA_Ability_FacelessVoid_TimeDilation *const this)
{
  this->_vptr_IHandleEntity = &off_43F83F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_FacelessVoid_TimeDilation::~CDOTA_Ability_FacelessVoid_TimeDilation  (line 285, @0x0000000002ac55c0, libserver.so)  // inlines: ~CDOTA_Ability_FacelessVoid_TimeDilation
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_FacelessVoid_TimeDilation::~CDOTA_Ability_FacelessVoid_TimeDilation(
        CDOTA_Ability_FacelessVoid_TimeDilation *const this)
{
  this->_vptr_IHandleEntity = &off_43F83F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_FacelessVoid_TimeDilation::Schema_DynamicBinding  (line 287, @0x0000000002ab8f40, libserver.so)
// globals: CDOTA_Ability_FacelessVoid_TimeDilation::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_FacelessVoid_TimeDilation::Schema_DynamicBinding(
        const CDOTA_Ability_FacelessVoid_TimeDilation *const this)
{
  return CDOTA_Ability_FacelessVoid_TimeDilation::s_pSchemaBinding;
}


// CDOTA_Ability_FacelessVoid_TimeDilation::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 287, @0x0000000002ab8f50, libserver.so)
// globals: CDOTA_Ability_FacelessVoid_TimeDilation::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_FacelessVoid_TimeDilation::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_FacelessVoid_TimeDilation::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_FacelessVoid_TimeDilation::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_FacelessVoid_TimeDilation::CEntityInstanceEntityClass::DestructInstance  (line 287, @0x0000000002ab8f60, libserver.so)  // inlines: Destruct<CDOTA_Ability_FacelessVoid_TimeDilation>
void __fastcall CDOTA_Ability_FacelessVoid_TimeDilation::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_FacelessVoid_TimeDilation::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_FacelessVoid_TimeDilation::CEntityInstanceEntityClass::FreeInstance  (line 287, @0x0000000002ab8f80, libserver.so)
void __fastcall CDOTA_Ability_FacelessVoid_TimeDilation::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_FacelessVoid_TimeDilation::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_FacelessVoid_TimeDilation::CEntityInstanceEntityClass::CanAllocate  (line 287, @0x0000000002ab8fa0, libserver.so)
bool __fastcall CDOTA_Ability_FacelessVoid_TimeDilation::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_FacelessVoid_TimeDilation::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_FacelessVoid_TimeDilation::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 287, @0x0000000002ab8fb0, libserver.so)
// globals: CDOTA_Ability_FacelessVoid_TimeDilation::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_FacelessVoid_TimeDilation::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_FacelessVoid_TimeDilation::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_FacelessVoid_TimeDilation::s_pSchemaBinding;
}


// CDOTA_Ability_FacelessVoid_TimeDilation::CEntityInstanceEntityClass::AllocateInstance  (line 287, @0x0000000002abee00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_FacelessVoid_TimeDilation::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_FacelessVoid_TimeDilation::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_FacelessVoid_TimeDilation::CEntityInstanceEntityClass::ConstructInstance  (line 287, @0x0000000002ac2a90, libserver.so)  // inlines: CDOTA_Ability_FacelessVoid_TimeDilation, Construct<CDOTA_Ability_FacelessVoid_TimeDilation>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_FacelessVoid_TimeDilation::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_FacelessVoid_TimeDilation::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43F83F0;
  }
  return p;
}


// CDOTA_Ability_FacelessVoid_TimeDilation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 287, @0x0000000002acbf70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_FacelessVoid_TimeDilation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_FacelessVoid_TimeDilation::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_FacelessVoid_TimeDilation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 287, @0x0000000002acbf90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_FacelessVoid_TimeDilation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_FacelessVoid_TimeDilation::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_FacelessVoid_TimeDilation::GetEntityClassInternal  (line 287, @0x0000000002adc150, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "faceless_void_time_dilation", "CDOTA_Ability_FacelessVoid_TimeDilation"
// globals: `guard variable for'CDOTA_Ability_FacelessVoid_TimeDilation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeDilationClass, CDOTA_Ability_FacelessVoid_TimeDilation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeDilationClass, __dso_handle, CDOTA_Ability_FacelessVoid_TimeDilation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_FacelessVoid_TimeDilation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeDilationClassInfo, CDOTA_Ability_FacelessVoid_TimeDilation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeDilationClassInfo
CEntityClass *__cdecl CDOTA_Ability_FacelessVoid_TimeDilation::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_FacelessVoid_TimeDilation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeDilationClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_FacelessVoid_TimeDilation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeDilationClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_FacelessVoid_TimeDilation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeDilationClass);
    CDOTA_Ability_FacelessVoid_TimeDilation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeDilationClass._vptr_CEntityClass = off_43F8370;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_FacelessVoid_TimeDilation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeDilationClass);
    __cxa_atexit(
      CDOTA_Ability_FacelessVoid_TimeDilation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_FacelessVoid_TimeDilation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeDilationClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_FacelessVoid_TimeDilationClass != 0 )
    return &CDOTA_Ability_FacelessVoid_TimeDilation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeDilationClass;
  if ( `guard variable for'CDOTA_Ability_FacelessVoid_TimeDilation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeDilationClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_FacelessVoid_TimeDilation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeDilationClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_FacelessVoid_TimeDilation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeDilationClassInfo,
      "CDOTA_Ability_FacelessVoid_TimeDilation",
      "faceless_void_time_dilation",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_FacelessVoid_TimeDilation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeDilationClassInfo);
  }
  CDOTA_Ability_FacelessVoid_TimeDilation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeDilationClass.m_pClassInfo = &CDOTA_Ability_FacelessVoid_TimeDilation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeDilationClassInfo;
  CDOTA_Ability_FacelessVoid_TimeDilation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeDilationClass.m_pBaseClassInfo = CDOTA_Ability_FacelessVoid_TimeDilation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeDilationClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_FacelessVoid_TimeDilationClass = &CDOTA_Ability_FacelessVoid_TimeDilation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeDilationClass;
  CDOTA_Ability_FacelessVoid_TimeDilation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeDilationClassInfo.m_pClass = &CDOTA_Ability_FacelessVoid_TimeDilation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeDilationClass;
  CDOTA_Ability_FacelessVoid_TimeDilation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeDilationClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_FacelessVoid_TimeDilationClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_FacelessVoid_TimeDilation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeDilationClass;
}


// CDOTA_Ability_FacelessVoid_TimeDilation::GetAOERadius  (line 293, @0x0000000002ae6620, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_FacelessVoid_TimeDilation::GetAOERadius(
        CDOTA_Ability_FacelessVoid_TimeDilation *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
}


// CDOTA_Ability_FacelessVoid_TimeDilation::YouForgotToImplementOrDeclareServerClass  (line 298, @0x0000000002a779c0, libserver.so)
int __fastcall CDOTA_Ability_FacelessVoid_TimeDilation::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_FacelessVoid_TimeDilation *const this)
{
  return 0;
}


// CDOTA_Ability_FacelessVoid_TimeDilation::GetServerClass  (line 298, @0x0000000002a8a5f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_FacelessVoid_TimeDilation::GetServerClass(
        CDOTA_Ability_FacelessVoid_TimeDilation *const this)
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


// CDOTA_Ability_FacelessVoid_TimeDilation::OnSpellStart  (line 308, @0x0000000002aa58f0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, DOTA_EmitSound, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, GetParticleManager, CDOTA_ParticleManager::CreateParticle (17 total)
// strings: "Hero_FacelessVoid.TimeDilation.Cast", "modifier_faceless_void_time_dilation_slow", "particles/units/heroes/hero_faceless_void/faceless_void_timedialate.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_FacelessVoid_TimeDilation::OnSpellStart(
        CDOTA_Ability_FacelessVoid_TimeDilation *const this)
{
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v3; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  __int64 v7; // r12
  int v8; // ebx
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  float v15; // xmm1_4
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v19; // rax
  CDOTA_ParticleManager *v20; // rax
  float flRadius; // [rsp+28h] [rbp-88h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  flRadius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
  v5 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v5->m_iTeamNum.m_Value, AbsOrigin, Caster, flRadius, &entities, 2, 19, 0, 0, 0);
  v6 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_FacelessVoid.TimeDilation.Cast", v6);
  if ( entities.m_Size > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      while ( 1 )
      {
        v9 = &entities.m_Memory.m_pMemory[v7];
        m_Index = entities.m_Memory.m_pMemory[v7].m_Index;
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
                break;
            }
          }
        }
        ++v8;
        ++v7;
        if ( entities.m_Size <= v8 )
          goto LABEL_11;
      }
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
      KeyValues::KeyValues(&kv, "modifier_faceless_void_time_dilation_slow");
      KeyValues::SetFloat(&kv, "duration", v15);
      v16 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v16, this, "modifier_faceless_void_time_dilation_slow", &kv, 0);
      ++v8;
      ++v7;
      KeyValues::~KeyValues(&kv);
    }
    while ( entities.m_Size > v8 );
  }
LABEL_11:
  v17 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v17) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_faceless_void/faceless_void_timedialate.vpcf",
                   1,
                   v17,
                   0,
                   0);
  v19 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v19, v17, 1, COERCE_DOUBLE(LODWORD(flRadius)), 1.0);
  v20 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v20, v17);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Ability_FacelessVoid_TimeDilation::GetSlowDuration  (line 342, @0x0000000002a9b900, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_FacelessVoid_TimeDilation::GetSlowDuration(
        CDOTA_Ability_FacelessVoid_TimeDilation *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
}


// CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::~CDOTA_Modifier_FacelessVoid_TimeDilation_Slow  (line 351, @0x0000000002ae5fc0, libserver.so)  // inlines: ConvertToExternalMemory, IsExternallyAllocated, Purge, Purge_FixedGrowable, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlVectorBase<CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::SavedCooldown, CUtlMemoryFixedGrowable<CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::SavedCooldown, 24ul, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::SavedCooldown, int>::Purge
void __fastcall CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::~CDOTA_Modifier_FacelessVoid_TimeDilation_Slow(
        CDOTA_Modifier_FacelessVoid_TimeDilation_Slow *const this)
{
  uint32 m_nGrowSize; // edx
  CDOTA_Modifier_FacelessVoid_TimeDilation_Slow *m_pMemory; // rsi
  uint32 v4; // eax

  this->_vptr_CDOTA_Buff = &off_43F8EB0;
  CUtlVectorBase<CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::SavedCooldown,CUtlMemoryFixedGrowable<CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::SavedCooldown,24ul,int>>::RemoveAll(&this->m_vecSavedCooldowns);
  if ( this->m_vecSavedCooldowns.m_Memory.m_nAllocationCount < 0 )
  {
    v4 = this->m_vecSavedCooldowns.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    m_nGrowSize = this->m_vecSavedCooldowns.m_Memory.m_nGrowSize;
    m_pMemory = this->m_vecSavedCooldowns.m_Memory.m_pMemory;
    v4 = m_nGrowSize & 0xC0000000;
    if ( &this->m_vecSavedCooldowns.m_Memory.m_FixedMemory != m_pMemory )
    {
      if ( m_pMemory != 0 && v4 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        m_nGrowSize = this->m_vecSavedCooldowns.m_Memory.m_nGrowSize;
      }
      this->m_vecSavedCooldowns.m_Memory.m_pMemory = &this->m_vecSavedCooldowns.m_Memory.m_FixedMemory;
      this->m_vecSavedCooldowns.m_Memory.m_nAllocationCount = 24;
      this->m_vecSavedCooldowns.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
      goto LABEL_7;
    }
  }
  if ( v4 != 0 )
  {
LABEL_7:
    CDOTA_Buff::~CDOTA_Buff(this);
    return;
  }
  CUtlMemory<CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::SavedCooldown,int>::Purge(&this->m_vecSavedCooldowns.m_Memory);
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::~CDOTA_Modifier_FacelessVoid_TimeDilation_Slow  (line 351, @0x0000000002ae6090, libserver.so)  // inlines: ConvertToExternalMemory, IsExternallyAllocated, Purge, Purge_FixedGrowable, ~CDOTA_Modifier_FacelessVoid_TimeDilation_Slow, ~CUtlMemory, ~CUtlMemoryFixedGrowable, ~CUtlMemoryFixedGrowable_Base, ~CUtlVectorBase, ~CUtlVectorFixedGrowable
// calls: CUtlVectorBase<CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::SavedCooldown, CUtlMemoryFixedGrowable<CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::SavedCooldown, 24ul, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::SavedCooldown, int>::Purge
void __fastcall CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::~CDOTA_Modifier_FacelessVoid_TimeDilation_Slow(
        CDOTA_Modifier_FacelessVoid_TimeDilation_Slow *const this)
{
  uint32 m_nGrowSize; // edx
  CDOTA_Modifier_FacelessVoid_TimeDilation_Slow *m_pMemory; // rsi
  uint32 v4; // eax

  this->_vptr_CDOTA_Buff = &off_43F8EB0;
  CUtlVectorBase<CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::SavedCooldown,CUtlMemoryFixedGrowable<CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::SavedCooldown,24ul,int>>::RemoveAll(&this->m_vecSavedCooldowns);
  if ( this->m_vecSavedCooldowns.m_Memory.m_nAllocationCount < 0 )
  {
    v4 = this->m_vecSavedCooldowns.m_Memory.m_nGrowSize & 0xC0000000;
  }
  else
  {
    m_nGrowSize = this->m_vecSavedCooldowns.m_Memory.m_nGrowSize;
    m_pMemory = this->m_vecSavedCooldowns.m_Memory.m_pMemory;
    v4 = m_nGrowSize & 0xC0000000;
    if ( &this->m_vecSavedCooldowns.m_Memory.m_FixedMemory != m_pMemory )
    {
      if ( m_pMemory != 0 && v4 == 0 )
      {
        (*(*g_pMemAlloc + 16LL))(g_pMemAlloc);
        m_nGrowSize = this->m_vecSavedCooldowns.m_Memory.m_nGrowSize;
      }
      this->m_vecSavedCooldowns.m_Memory.m_pMemory = &this->m_vecSavedCooldowns.m_Memory.m_FixedMemory;
      this->m_vecSavedCooldowns.m_Memory.m_nAllocationCount = 24;
      this->m_vecSavedCooldowns.m_Memory.m_nGrowSize = m_nGrowSize & 0x3FFFFFFF | 0x80000000;
      goto LABEL_7;
    }
  }
  if ( v4 == 0 )
    CUtlMemory<CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::SavedCooldown,int>::Purge(&this->m_vecSavedCooldowns.m_Memory);
LABEL_7:
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::GetEffectName  (line 359, @0x0000000002ab8fc0, libserver.so)
// strings: "particles/units/heroes/hero_faceless_void/faceless_void_time_walk_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::GetEffectName(
        CDOTA_Modifier_FacelessVoid_TimeDilation_Slow *const this)
{
  return "particles/units/heroes/hero_faceless_void/faceless_void_time_walk_debuff.vpcf";
}


// CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::IsDebuff  (line 364, @0x0000000002ab8fd0, libserver.so)
bool __fastcall CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::IsDebuff(
        CDOTA_Modifier_FacelessVoid_TimeDilation_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::OnCreated  (line 380, @0x0000000002ab19a0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::SavedCooldown>, Element, GetEHandle, GetEntryIndex, GetSerialNumber, GrowMemory, IsRealHero, NetworkStateChanged, SavedCooldown, Set, SetFrozenCooldown, Vector, operator=<bool>, operator[]
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::GetAbilityByIndex, CDOTABaseAbility::GetCooldownTimeRemaining, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::AddParticle, DOTA_EmitSound, CUtlMemory<CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::SavedCooldown, int>::Grow (13 total)
// strings: "particles/units/heroes/hero_faceless_void/faceless_void_backtrack.vpcf", "particles/units/heroes/hero_faceless_void/faceless_void_dialatedebuf.vpcf", "Hero_FacelessVoid.TimeDilation.Target"
void __fastcall CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::OnCreated(
        CDOTA_Modifier_FacelessVoid_TimeDilation_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  int v8; // r13d
  CDOTA_BaseNPC *v9; // rbx
  CDOTA_ParticleManager *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTABaseAbility *AbilityByIndex; // rax
  CDOTABaseAbility *v13; // rbx
  CEntityIdentity *m_pEntity; // rdx
  __int16 v15; // cx
  float CooldownTimeRemaining; // xmm0_4
  __int64 m_Size; // r15
  int v18; // eax
  CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::SavedCooldown *v19; // rax
  void (__fastcall *v20)(CDOTABaseAbility *, float); // r15
  float v21; // xmm0_4
  int m_nFXIndex; // ebx
  CDOTA_ParticleManager *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  float v25; // [rsp+Ch] [rbp-44h]
  float v26; // [rsp+Ch] [rbp-44h]
  int v27; // [rsp+10h] [rbp-40h]
  double v28; // [rsp+10h] [rbp-40h]

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->slow, "slow");
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_faceless_void/faceless_void_backtrack.vpcf",
                      1,
                      Parent,
                      0,
                      0);
  v6 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v6, Parent);
  v7 = CDOTA_Buff::GetParent(this);
  if ( (v7->m_iUnitType & 1) != 0 && !v7->m_bIsIllusion.m_Value )
  {
    v8 = 0;
    v9 = CDOTA_Buff::GetParent(this);
    v10 = GetParticleManager();
    this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                         v10,
                         "particles/units/heroes/hero_faceless_void/faceless_void_dialatedebuf.vpcf",
                         1,
                         v9,
                         0,
                         0);
    do
    {
      v11 = CDOTA_Buff::GetParent(this);
      AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v11, v8);
      v13 = AbilityByIndex;
      if ( AbilityByIndex != 0
        && CDOTABaseAbility::GetCooldownTimeRemaining(AbilityByIndex) > 0.0
        && (*(v13->_vptr_IHandleEntity + 217))(v13) != 0
        && !v13->m_bFrozenCooldown.m_Value )
      {
        (*(this->_vptr_CDOTA_Buff + 25))(this);
        v27 = -1;
        m_pEntity = v13->m_pEntity;
        if ( m_pEntity != 0 )
        {
          v15 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          v27 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v15 & 0x7FFF;
        }
        CooldownTimeRemaining = CDOTABaseAbility::GetCooldownTimeRemaining(v13);
        m_Size = this->m_vecSavedCooldowns.m_Size;
        v18 = this->m_vecSavedCooldowns.m_Size;
        if ( m_Size == this->m_vecSavedCooldowns.m_Memory.m_nAllocationCount )
        {
          v26 = CooldownTimeRemaining;
          CUtlMemory<CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::SavedCooldown,int>::Grow(
            &this->m_vecSavedCooldowns.m_Memory,
            1);
          v18 = this->m_vecSavedCooldowns.m_Size;
          CooldownTimeRemaining = v26;
        }
        this->m_vecSavedCooldowns.m_Size = v18 + 1;
        v19 = &this->m_vecSavedCooldowns.m_Memory.m_pMemory[m_Size];
        if ( v19 != 0 )
        {
          v19->flCooldown = CooldownTimeRemaining;
          v19->hAbility.m_Index = v27;
        }
        v20 = *(v13->_vptr_IHandleEntity + 241);
        v25 = CDOTABaseAbility::GetCooldownTimeRemaining(v13);
        v21 = (*(this->_vptr_CDOTA_Buff + 33))(this);
        v20(v13, v21 + v25);
        if ( !v13->m_bFrozenCooldown.m_Value )
        {
          (*(v13->_vptr_IHandleEntity + 22))(v13, 845, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          v13->m_bFrozenCooldown.m_Value = 1;
        }
        ++this->m_nAffectedAbilities;
      }
      ++v8;
    }
    while ( v8 != 24 );
    m_nFXIndex = this->m_nFXIndex;
    *&v28 = this->m_nAffectedAbilities;
    *(&v28 + 1) = *&v28;
    v23 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v23, m_nFXIndex, 1, v28, *&v28);
    CDOTA_Buff::AddParticle(this, this->m_nFXIndex, 0, 0, -1, 0, 0);
    v24 = CDOTA_Buff::GetParent(this);
    DOTA_EmitSound(10, "Hero_FacelessVoid.TimeDilation.Target", v24);
    if ( this->m_nAffectedAbilities == 0 )
      CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::OnDestroy  (line 417, @0x0000000002a98360, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, SetFrozenCooldown, ToDOTAAbility, end, operator CBaseEntity*, operator CEntityInstance*, operator=<bool>
// calls: __dynamic_cast, CDOTABaseAbility::EndCooldown, CUtlVectorBase<CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::SavedCooldown, CUtlMemoryFixedGrowable<CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::SavedCooldown, 24ul, int> >::RemoveAll
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::OnDestroy(
        CDOTA_Modifier_FacelessVoid_TimeDilation_Slow *const this)
{
  CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::SavedCooldown *m_pMemory; // rbx
  CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::SavedCooldown *v3; // r13
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // r12

  m_pMemory = this->m_vecSavedCooldowns.m_Memory.m_pMemory;
  v3 = &m_pMemory[this->m_vecSavedCooldowns.m_Size];
  while ( v3 != m_pMemory )
  {
    while ( 1 )
    {
      if ( m_pMemory->hAbility.m_Index + 2 > 1 )
      {
        v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->hAbility.m_Index) >> 9) & 0x3F];
        if ( v4 != 0 )
        {
          v5 = &v4[m_pMemory->hAbility.m_Index & 0x1FF];
          if ( v5 != 0 && m_pMemory->hAbility.m_Index == v5->m_EHandle.m_Index && v5->m_pInstance != 0 )
          {
            v6 = __dynamic_cast(v5->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0);
            v7 = v6;
            if ( v6 != 0 && v6->m_bFrozenCooldown.m_Value )
              break;
          }
        }
      }
      if ( v3 == ++m_pMemory )
        goto LABEL_12;
    }
    ++m_pMemory;
    (*(v6->_vptr_IHandleEntity + 22))(v6, 845, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v7->m_bFrozenCooldown.m_Value = 0;
    CDOTABaseAbility::EndCooldown(v7);
    (*(v7->_vptr_IHandleEntity + 241))(v7, m_pMemory[-1].flCooldown);
  }
LABEL_12:
  CUtlVectorBase<CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::SavedCooldown,CUtlMemoryFixedGrowable<CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::SavedCooldown,24ul,int>>::RemoveAll(&this->m_vecSavedCooldowns);
}


// CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::DeclareFunctions  (line 436, @0x0000000002a779d0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::DeclareFunctions(
        CDOTA_Modifier_FacelessVoid_TimeDilation_Slow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::GetModifierAttackSpeedBonus_Constant;
}


// CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::GetModifierMoveSpeedBonus_Percentage  (line 444, @0x0000000002a77a10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_FacelessVoid_TimeDilation_Slow *const this,
        const CModifierParams *const params)
{
  int v2; // ebx
  __m128i v3; // xmm0
  int v4; // eax
  ModifierVariant_t result; // 0:rax.16

  v2 = -this->slow;
  v3 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v3.m128i_i32 = (v4 * v2);
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::GetModifierAttackSpeedBonus_Constant  (line 451, @0x0000000002a77a50, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_FacelessVoid_TimeDilation_Slow::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_FacelessVoid_TimeDilation_Slow *const this,
        const CModifierParams *const params)
{
  int v2; // ebx
  __m128i v3; // xmm0
  int v4; // eax
  ModifierVariant_t result; // 0:rax.16

  v2 = -this->slow;
  v3 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v3.m128i_i32 = (v4 * v2);
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::~CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker  (line 462, @0x0000000002acacb0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::sDamageSources, int>::Purge
void __fastcall CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::~CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker(
        CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker *const this)
{
  bool v2; // zf
  CUtlVectorBase<CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::sDamageSources,CUtlMemory<CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::sDamageSources,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vDamageSources.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_43F91D0;
  this->m_vDamageSources.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_vDamageSources.m_Memory,
        CUtlMemory<CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::sDamageSources,int>::Purge(&this->m_vDamageSources.m_Memory),
        (this->m_vDamageSources.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::sDamageSources,int>::Purge(p_m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::~CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker  (line 462, @0x0000000002acad90, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::sDamageSources, int>::Purge
void __fastcall CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::~CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker(
        CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker *const this)
{
  bool v2; // zf
  CUtlVectorBase<CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::sDamageSources,CUtlMemory<CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::sDamageSources,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_vDamageSources.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_43F91D0;
  this->m_vDamageSources.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_vDamageSources.m_Memory;
    CUtlMemory<CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::sDamageSources,int>::Purge(&this->m_vDamageSources.m_Memory);
    if ( (this->m_vDamageSources.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::sDamageSources,int>::Purge(p_m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::IsHidden  (line 467, @0x0000000002ab8fe0, libserver.so)
bool __fastcall CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::IsHidden(
        CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker *const this)
{
  return 1;
}


// CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::IsPurgable  (line 468, @0x0000000002ab8ff0, libserver.so)
bool __fastcall CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::IsPurgable(
        CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker *const this)
{
  return 0;
}


// CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::RemoveOnDeath  (line 469, @0x0000000002ab9000, libserver.so)
bool __fastcall CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::RemoveOnDeath(
        CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker *const this)
{
  return 0;
}


// CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::FindOldDamage  (line 489, @0x0000000002a90cf0, libserver.so)  // inlines: DOTAGameRules, GetGameTime, RemoveAll
// callers: CDOTA_Ability_FacelessVoid_TimeWalk::OnSpellStart
float __fastcall CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::FindOldDamage(
        CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker *const this,
        float a2,
        float flTime)
{
  float v4; // xmm2_4
  float result; // xmm0_4
  int m_Size; // ecx
  float v7; // xmm2_4
  CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::sDamageSources *m_pMemory; // rdx
  CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::sDamageSources *v9; // rax
  __int64 v10; // rcx

  if ( g_pGameRules != 0 )
  {
    v4 = *&g_pGameRules[18].m_szQuestName[20];
    result = 0.0;
  }
  else
  {
    result = 0.0;
    v4 = 0.0;
  }
  m_Size = this->m_vDamageSources.m_Size;
  v7 = v4 - a2;
  if ( m_Size > 0 )
  {
    m_pMemory = this->m_vDamageSources.m_Memory.m_pMemory;
    v9 = m_pMemory + 1;
    v10 = &m_pMemory[(m_Size - 1) + 1];
    while ( 1 )
    {
      if ( m_pMemory->flTime <= v7 )
      {
        m_pMemory = v9;
        if ( v9 == v10 )
          break;
      }
      else
      {
        result = result + m_pMemory->flAmount;
        m_pMemory = v9;
        if ( v9 == v10 )
          break;
      }
      ++v9;
    }
  }
  this->m_vDamageSources.m_Size = 0;
  return result;
}


// CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::DeclareFunctions  (line 509, @0x0000000002a77a90, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::OnTakeDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::DeclareFunctions(
        CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker *const this)
{
  this->m_Functions[134].__pfn = CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::OnTakeDamage;
  this->m_Functions[134].__delta = 0;
}


// CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::OnTakeDamage  (line 516, @0x0000000002ab1cd0, libserver.so)  // inlines: AddToTail, CopyConstruct<CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::sDamageSources>, DOTAGameRules, Element, FStrEq, Get, GetAbilityName, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, ToDOTAAbility, Unit, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTA_Buff::GetParent, CUtlMemory<CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::sDamageSources, int>::Grow, __dynamic_cast
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::OnTakeDamage(
        CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  float fDamage; // xmm0_4
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  float v13; // xmm1_4
  __int64 m_Size; // rbx
  int v15; // eax
  CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::sDamageSources *v16; // rax
  void *v17; // rax
  char **v18; // rax
  char *v19; // rsi
  float v20; // [rsp+8h] [rbp-28h]
  float flDamage; // [rsp+Ch] [rbp-24h]
  float flDamagea; // [rsp+Ch] [rbp-24h]

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
  if ( CDOTA_Buff::GetParent(this) == m_pInstance )
  {
    fDamage = params->fDamage;
    if ( fDamage >= 0.0 )
    {
      v10 = params->inflictor.m_Index;
      if ( v10 + 2 <= 1
        || (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->inflictor.m_Index) >> 9) & 0x3F]) == 0
        || (v12 = &v11[params->inflictor.m_Index & 0x1FF]) == 0
        || v10 != v12->m_EHandle.m_Index
        || v12->m_pInstance == 0
        || (flDamagea = params->fDamage,
            v17 = __dynamic_cast(v12->m_pInstance, &`typeinfo for'CBaseEntity, &`typeinfo for'CDOTABaseAbility, 0),
            fDamage = flDamagea,
            v17 == 0)
        || (v18 = *(v17 + 111)) == 0
        || (v19 = *v18, *v18 == 0)
        || v19 != "item_armlet" && strcmp(v19, "item_armlet") != 0 )
      {
        v13 = 0.0;
        if ( g_pGameRules != 0 )
          v13 = *&g_pGameRules[18].m_szQuestName[20];
        m_Size = this->m_vDamageSources.m_Size;
        v15 = this->m_vDamageSources.m_Size;
        if ( m_Size == this->m_vDamageSources.m_Memory.m_nAllocationCount )
        {
          v20 = v13;
          flDamage = fDamage;
          CUtlMemory<CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::sDamageSources,int>::Grow(
            &this->m_vDamageSources.m_Memory,
            1);
          v15 = this->m_vDamageSources.m_Size;
          v13 = v20;
          fDamage = flDamage;
        }
        this->m_vDamageSources.m_Size = v15 + 1;
        v16 = &this->m_vDamageSources.m_Memory.m_pMemory[m_Size];
        if ( v16 != 0 )
        {
          v16->flTime = v13;
          v16->flAmount = fDamage;
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Ability_FacelessVoid_TimeWalk::~CDOTA_Ability_FacelessVoid_TimeWalk  (line 550, @0x0000000002ac55f0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_FacelessVoid_TimeWalk::~CDOTA_Ability_FacelessVoid_TimeWalk(
        CDOTA_Ability_FacelessVoid_TimeWalk *const this)
{
  this->_vptr_IHandleEntity = &off_43F9530;
  this->_vptr_CHorizontalMotionController = &off_43F9FB8;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_FacelessVoid_TimeWalk::~CDOTA_Ability_FacelessVoid_TimeWalk  (line 550, @0x0000000002ac5620, libserver.so)  // inlines: ~CDOTA_Ability_FacelessVoid_TimeWalk
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_FacelessVoid_TimeWalk::~CDOTA_Ability_FacelessVoid_TimeWalk(
        CDOTA_Ability_FacelessVoid_TimeWalk *const this)
{
  this->_vptr_IHandleEntity = &off_43F9530;
  this->_vptr_CHorizontalMotionController = &off_43F9FB8;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_FacelessVoid_TimeWalk::Schema_DynamicBinding  (line 552, @0x0000000002ab9010, libserver.so)
// globals: CDOTA_Ability_FacelessVoid_TimeWalk::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_FacelessVoid_TimeWalk::Schema_DynamicBinding(
        const CDOTA_Ability_FacelessVoid_TimeWalk *const this)
{
  return CDOTA_Ability_FacelessVoid_TimeWalk::s_pSchemaBinding;
}


// CDOTA_Ability_FacelessVoid_TimeWalk::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 552, @0x0000000002ab9030, libserver.so)
// globals: CDOTA_Ability_FacelessVoid_TimeWalk::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_FacelessVoid_TimeWalk::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_FacelessVoid_TimeWalk::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_FacelessVoid_TimeWalk::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_FacelessVoid_TimeWalk::CEntityInstanceEntityClass::DestructInstance  (line 552, @0x0000000002ab9040, libserver.so)  // inlines: Destruct<CDOTA_Ability_FacelessVoid_TimeWalk>
void __fastcall CDOTA_Ability_FacelessVoid_TimeWalk::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_FacelessVoid_TimeWalk::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_FacelessVoid_TimeWalk::CEntityInstanceEntityClass::FreeInstance  (line 552, @0x0000000002ab9060, libserver.so)
void __fastcall CDOTA_Ability_FacelessVoid_TimeWalk::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_FacelessVoid_TimeWalk::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_FacelessVoid_TimeWalk::CEntityInstanceEntityClass::CanAllocate  (line 552, @0x0000000002ab9080, libserver.so)
bool __fastcall CDOTA_Ability_FacelessVoid_TimeWalk::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_FacelessVoid_TimeWalk::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_FacelessVoid_TimeWalk::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 552, @0x0000000002ab9090, libserver.so)
// globals: CDOTA_Ability_FacelessVoid_TimeWalk::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_FacelessVoid_TimeWalk::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_FacelessVoid_TimeWalk::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_FacelessVoid_TimeWalk::s_pSchemaBinding;
}


// CDOTA_Ability_FacelessVoid_TimeWalk::CEntityInstanceEntityClass::AllocateInstance  (line 552, @0x0000000002abee40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_FacelessVoid_TimeWalk::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_FacelessVoid_TimeWalk::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 952);
  memset(v1, 0, 0x3B8u);
  return v1;
}


// CDOTA_Ability_FacelessVoid_TimeWalk::CEntityInstanceEntityClass::ConstructInstance  (line 552, @0x0000000002ac2ac0, libserver.so)  // inlines: CDOTA_Ability_FacelessVoid_TimeWalk, CHorizontalMotionController, Construct<CDOTA_Ability_FacelessVoid_TimeWalk>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_FacelessVoid_TimeWalk::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_FacelessVoid_TimeWalk::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 230) = 2;
    *p = &off_43F9530;
    *(p + 114) = &off_43F9FB8;
  }
  return p;
}


// CDOTA_Ability_FacelessVoid_TimeWalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 552, @0x0000000002acbfc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_FacelessVoid_TimeWalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_FacelessVoid_TimeWalk::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_FacelessVoid_TimeWalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 552, @0x0000000002acbfe0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_FacelessVoid_TimeWalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_FacelessVoid_TimeWalk::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_FacelessVoid_TimeWalk::GetEntityClassInternal  (line 552, @0x0000000002adc2a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "faceless_void_time_walk", "CDOTA_Ability_FacelessVoid_TimeWalk"
// globals: `guard variable for'CDOTA_Ability_FacelessVoid_TimeWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeWalkClass, CDOTA_Ability_FacelessVoid_TimeWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeWalkClass, __dso_handle, CDOTA_Ability_FacelessVoid_TimeWalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_FacelessVoid_TimeWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeWalkClassInfo, CDOTA_Ability_FacelessVoid_TimeWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeWalkClassInfo
CEntityClass *__cdecl CDOTA_Ability_FacelessVoid_TimeWalk::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_FacelessVoid_TimeWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeWalkClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_FacelessVoid_TimeWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeWalkClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_FacelessVoid_TimeWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeWalkClass);
    CDOTA_Ability_FacelessVoid_TimeWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeWalkClass._vptr_CEntityClass = off_43F94B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_FacelessVoid_TimeWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeWalkClass);
    __cxa_atexit(
      CDOTA_Ability_FacelessVoid_TimeWalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_FacelessVoid_TimeWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeWalkClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_FacelessVoid_TimeWalkClass != 0 )
    return &CDOTA_Ability_FacelessVoid_TimeWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeWalkClass;
  if ( `guard variable for'CDOTA_Ability_FacelessVoid_TimeWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeWalkClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_FacelessVoid_TimeWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeWalkClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_FacelessVoid_TimeWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeWalkClassInfo,
      "CDOTA_Ability_FacelessVoid_TimeWalk",
      "faceless_void_time_walk",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_FacelessVoid_TimeWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeWalkClassInfo);
  }
  CDOTA_Ability_FacelessVoid_TimeWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeWalkClass.m_pClassInfo = &CDOTA_Ability_FacelessVoid_TimeWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeWalkClassInfo;
  CDOTA_Ability_FacelessVoid_TimeWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeWalkClass.m_pBaseClassInfo = CDOTA_Ability_FacelessVoid_TimeWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeWalkClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_FacelessVoid_TimeWalkClass = &CDOTA_Ability_FacelessVoid_TimeWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeWalkClass;
  CDOTA_Ability_FacelessVoid_TimeWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeWalkClassInfo.m_pClass = &CDOTA_Ability_FacelessVoid_TimeWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeWalkClass;
  CDOTA_Ability_FacelessVoid_TimeWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeWalkClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_FacelessVoid_TimeWalkClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_FacelessVoid_TimeWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_TimeWalkClass;
}


// CDOTA_Ability_FacelessVoid_TimeWalk::YouForgotToImplementOrDeclareServerClass  (line 597, @0x0000000002a77ab0, libserver.so)
int __fastcall CDOTA_Ability_FacelessVoid_TimeWalk::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_FacelessVoid_TimeWalk *const this)
{
  return 0;
}


// CDOTA_Ability_FacelessVoid_TimeWalk::GetServerClass  (line 597, @0x0000000002a8a270, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_FacelessVoid_TimeWalk::GetServerClass(
        CDOTA_Ability_FacelessVoid_TimeWalk *const this)
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


// CDOTA_Ability_FacelessVoid_TimeWalk::Spawn  (line 607, @0x0000000002a7be20, libserver.so)  // inlines: GetParent, ToDOTABaseNPC
// calls: CDOTABaseAbility::Spawn, KeyValues::KeyValues, CGameSceneNode::GetOwnerEntity, KeyValues::~KeyValues, CDOTA_BaseNPC::AddNewModifier, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_faceless_void_time_walk_tracker"
void __fastcall CDOTA_Ability_FacelessVoid_TimeWalk::Spawn(
        CDOTA_Ability_FacelessVoid_TimeWalk *const this,
        const CEntityKeyValues *pKV)
{
  CGameSceneNode *m_pParent; // rdi
  CDOTA_BaseNPC *OwnerEntity; // rax
  KeyValues kv; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-18h]

  v6 = __readfsqword(0x28u);
  CDOTABaseAbility::Spawn(this, pKV);
  KeyValues::KeyValues(&kv, "modifier_faceless_void_time_walk_tracker");
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
  {
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    if ( OwnerEntity != 0 && OwnerEntity->m_bIsDOTANPC )
      CDOTA_BaseNPC::AddNewModifier(OwnerEntity, OwnerEntity, this, "modifier_faceless_void_time_walk_tracker", &kv, 0);
  }
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_FacelessVoid_TimeWalk::UpdateHorizontalMotion  (line 621, @0x0000000002a7a430, libserver.so)
// calls: CBaseEntity::SetAbsOrigin
void __fastcall CDOTA_Ability_FacelessVoid_TimeWalk::UpdateHorizontalMotion(
        CDOTA_Ability_FacelessVoid_TimeWalk *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  CBaseEntity::SetAbsOrigin(me, &this->m_vProjectileLocation);
}


// CDOTA_Ability_FacelessVoid_TimeWalk::OnHorizontalMotionInterrupted  (line 628, @0x0000000002a7bee0, libserver.so)
// calls: CDOTA_ProjectileManager::DestroyLinearProjectile, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_faceless_void_time_walk"
void __fastcall CDOTA_Ability_FacelessVoid_TimeWalk::OnHorizontalMotionInterrupted(
        CDOTA_Ability_FacelessVoid_TimeWalk *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  CDOTA_ProjectileManager::DestroyLinearProjectile(&g_DOTAProjectileManager, this->m_nProjectileID);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_faceless_void_time_walk");
}


// CDOTA_Ability_FacelessVoid_TimeWalk::OnAbilityPhaseStart  (line 638, @0x0000000002a7d660, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::StartGesture
bool __fastcall CDOTA_Ability_FacelessVoid_TimeWalk::OnAbilityPhaseStart(
        CDOTA_Ability_FacelessVoid_TimeWalk *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  if ( !this->m_bStolen.m_Value )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::StartGesture(Caster, 1510, 0.2, 0.2, 0, 0, 1.0);
  }
  return 1;
}


// CDOTA_Ability_FacelessVoid_TimeWalk::OnAbilityPhaseInterrupted  (line 652, @0x0000000002a7d6b0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Ability_FacelessVoid_TimeWalk::OnAbilityPhaseInterrupted(
        CDOTA_Ability_FacelessVoid_TimeWalk *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  if ( !this->m_bStolen.m_Value )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveGesture(Caster, 1510);
  }
}


// CDOTA_Ability_FacelessVoid_TimeWalk::OnSpellStart  (line 664, @0x0000000002aa2fc0, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, Set, VectorAdd, VectorMultiply, VectorNormalize2D, VectorSubtract, operator*, operator+, operator-, operator=, sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTALocomotor::ApplyHorizontalMotionController, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetCursorPosition, VectorNormalize, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, GetParticleManager, CDOTA_ParticleManager::CreateParticle (28 total)
// strings: "special_bonus_unique_faceless_void", "modifier_faceless_void_time_walk", "particles/units/heroes/hero_faceless_void/faceless_void_time_walk_preimage.vpcf", "Hero_FacelessVoid.TimeWalk", "modifier_faceless_void_time_walk_tracker", "backtrack_duration"
void __fastcall CDOTA_Ability_FacelessVoid_TimeWalk::OnSpellStart(CDOTA_Ability_FacelessVoid_TimeWalk *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTALocomotor *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v7; // rax
  const Vector *AbsOrigin; // r12
  vec_t v9; // xmm0_4
  vec_t v10; // xmm1_4
  float range; // xmm0_4
  float speed; // xmm0_4
  float v13; // xmm1_4
  CDOTA_BaseNPC *v14; // r13
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *v16; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v18; // rax
  const Vector *v19; // r14
  CDOTA_ParticleManager *v20; // rax
  CDOTA_ParticleManager *v21; // rax
  CDOTA_BaseNPC *v22; // r14
  CDOTA_ParticleManager *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v27; // rax
  const Vector *v28; // rax
  vec_t v29; // xmm0_4
  CDOTA_BaseNPC *v30; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v32; // eax
  __int16 v33; // cx
  CDOTA_BaseNPC *v34; // rax
  CDOTA_BaseNPC *v35; // rax
  __m128i v36; // xmm6
  __m128i x_low; // xmm4
  float v38; // r13d
  float v39; // r14d
  CDOTA_BaseNPC *v40; // rax
  const Vector *v41; // rax
  unsigned int v42; // xmm1_4
  unsigned int v43; // xmm2_4
  CDOTA_BaseNPC *v44; // rax
  Vector *v45; // r13
  CDOTA_BaseNPC *v46; // rax
  CDOTA_BaseNPC *v47; // rax
  CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker *ModifierByName; // r13
  float LevelSpecialValue; // xmm0_4
  float v50; // xmm1_4
  __m128i v51; // xmm0
  float v52; // r13d
  CDOTA_BaseNPC *v53; // rax
  CDOTA_BaseNPC *v54; // rax
  const Vector *v55; // rax
  vec_t v56; // xmm1_4
  vec_t v57; // xmm0_4
  CDOTA_BaseNPC *v58; // rax
  const Vector *v59; // rax
  vec_t v60; // xmm2_4
  vec_t v61; // xmm1_4
  CDOTA_BaseNPC *v62; // rax
  const QAngle *AbsAngles; // rax
  vec_t vVel; // [rsp+10h] [rbp-100h]
  vec_t vVel_4a; // [rsp+14h] [rbp-FCh]
  float vVel_4; // [rsp+14h] [rbp-FCh]
  vec_t vVel_8b; // [rsp+18h] [rbp-F8h]
  float vVel_8; // [rsp+18h] [rbp-F8h]
  float vVel_8a; // [rsp+18h] [rbp-F8h]
  float flLength; // [rsp+1Ch] [rbp-F4h]
  float flLengthc; // [rsp+1Ch] [rbp-F4h]
  float flLengtha; // [rsp+1Ch] [rbp-F4h]
  float flLengthb; // [rsp+1Ch] [rbp-F4h]
  Vector vDir; // [rsp+20h] [rbp-F0h] BYREF
  Vector vPos; // [rsp+30h] [rbp-E0h]
  Vector vTeleportEnd; // [rsp+40h] [rbp-D0h]
  sLinearProjectileCreateInfo info; // [rsp+50h] [rbp-C0h] BYREF
  KeyValues kv; // [rsp+D0h] [rbp-40h] BYREF
  unsigned __int64 v79; // [rsp+E8h] [rbp-28h]
  Vector CursorPosition; // 0:kr14_12.12

  v79 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  this->m_vProjectileLocation = *CBaseEntity::GetAbsOrigin(Caster);
  v3 = CDOTABaseAbility::GetCaster(this);
  v4 = (*(v3->_vptr_IHandleEntity + 376))(v3);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v4, &this->CHorizontalMotionController, 0) )
  {
    this->speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
    this->range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "range", -1, 0);
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
    this->range += (*(this->_vptr_IHandleEntity + 228))(this);
    v5 = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v5, "special_bonus_unique_faceless_void", 0);
    if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
      this->range += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
    v7 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
    *&info.pszEffectName = CDOTABaseAbility::GetCursorPosition(this);
    v9 = *(&info.pszEffectName + 1) - AbsOrigin->y;
    v10 = *&info.pszEffectName - AbsOrigin->x;
    vDir.z = 0.0;
    vDir.y = v9;
    vDir.x = v10;
    flLength = VectorNormalize(&vDir);
    if ( flLength < 0.0099999998 )
    {
      v62 = CDOTABaseAbility::GetCaster(this);
      AbsAngles = CBaseEntity::GetAbsAngles(v62);
      AngleVectors(AbsAngles, &vDir, 0, 0);
    }
    CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
    *&vPos.x = *&CursorPosition.x;
    range = this->range;
    vPos.z = CursorPosition.z;
    if ( flLength > range )
    {
      vVel_4 = vDir.x * range;
      vVel_8 = vDir.y * range;
      flLengtha = range * vDir.z;
      v54 = CDOTABaseAbility::GetCaster(this);
      v55 = CBaseEntity::GetAbsOrigin(v54);
      v56 = vVel_4 + v55->x;
      v57 = flLengtha + v55->z;
      vPos.y = vVel_8 + v55->y;
      vPos.x = v56;
      vVel_8a = v56;
      flLengthb = vPos.y;
      vPos.z = v57;
      v58 = CDOTABaseAbility::GetCaster(this);
      v59 = CBaseEntity::GetAbsOrigin(v58);
      v60 = flLengthb - v59->y;
      v61 = vVel_8a - v59->x;
      vDir.z = 0.0;
      vDir.y = v60;
      vDir.x = v61;
      flLength = VectorNormalize(&vDir);
    }
    speed = this->speed;
    vVel_8b = vDir.x * speed;
    vVel_4a = vDir.y * speed;
    vVel = speed * vDir.z;
    KeyValues::KeyValues(&kv, "modifier_faceless_void_time_walk");
    KeyValues::SetFloat(&kv, "duration", v13);
    v14 = CDOTABaseAbility::GetCaster(this);
    v15 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v15, v14, this, "modifier_faceless_void_time_walk", &kv, 0);
    v16 = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    LODWORD(v16) = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/units/heroes/hero_faceless_void/faceless_void_time_walk_preimage.vpcf",
                     2,
                     0,
                     0,
                     v16);
    v18 = CDOTABaseAbility::GetCaster(this);
    v19 = CBaseEntity::GetAbsOrigin(v18);
    v20 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v20, v16, 0, *&v19->x, v19->z);
    v21 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v21, v16, 1, *&vPos.x, vPos.z);
    v22 = CDOTABaseAbility::GetCaster(this);
    v23 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v23, v16, 2, v22, 1, 0, vec3_invalid, 1);
    v24 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v24, v16);
    info.bHasFrontalCone = 1;
    info.hSource.m_Index = -1;
    info.pszEffectName = 0;
    info.fDistance = 0.0;
    info.bCheckStartPosition = 0;
    y = vec3_origin.y;
    info.bProvidesVision = 0;
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
    info.fStartRadius = 0.0;
    info.fEndRadius = 0.0;
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
    v27 = CDOTABaseAbility::GetCaster(this);
    v28 = CBaseEntity::GetAbsOrigin(v27);
    info.vSpawnOrigin.x = v28->x;
    info.vSpawnOrigin.y = v28->y;
    v29 = v28->z;
    info.vVelocity.x = vVel_8b;
    info.vVelocity.y = vVel_4a;
    info.vSpawnOrigin.z = v29;
    info.fDistance = flLength;
    info.vVelocity.z = vVel;
    info.fStartRadius = this->radius;
    info.fEndRadius = info.fStartRadius;
    v30 = CDOTABaseAbility::GetCaster(this);
    if ( v30 != 0 && (m_pEntity = v30->m_pEntity) != 0 )
    {
      v32 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v33 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v33 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(info.hSource.m_Index) = v33 | info.hSource.m_Index & 0x8000;
      info.hSource.m_Index = (v32 << 15) | info.hSource.m_Index & 0x7FFF;
    }
    else
    {
      info.hSource.m_Index = -1;
    }
    info.iUnitTargetTeam = 2;
    info.iUnitTargetType = 3;
    info.bHasFrontalCone = 0;
    this->m_nProjectileID = CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
    v34 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v34, "Hero_FacelessVoid.TimeWalk", 0.0, 0, 0);
    v35 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::PrimeResumePreviousMovement(v35);
    v36 = LODWORD(flLength);
    x_low = LODWORD(vDir.x);
    *x_low.m128i_i32 = vDir.x * flLength;
    *v36.m128i_i32 = flLength * vDir.z;
    v38 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
    flLengthc = vDir.y * flLength;
    v39 = COERCE_FLOAT(_mm_cvtsi128_si32(v36));
    v40 = CDOTABaseAbility::GetCaster(this);
    v41 = CBaseEntity::GetAbsOrigin(v40);
    *&v42 = flLengthc + v41->y;
    *&v43 = v38 + v41->x;
    vTeleportEnd.z = v39 + v41->z;
    *&vTeleportEnd.x = __PAIR64__(v42, v43);
    v44 = CDOTABaseAbility::GetCaster(this);
    v45 = CBaseEntity::GetAbsOrigin(v44);
    v46 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UpdateResumePreviousMovement(v46, *v45, vTeleportEnd);
    v47 = CDOTABaseAbility::GetCaster(this);
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(v47, "modifier_faceless_void_time_walk_tracker", 0);
    if ( ModifierByName != 0 )
    {
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "backtrack_duration", -1, 0);
      *v51.m128i_i32 = CDOTA_Modifier_FacelessVoid_TimeWalk_Tracker::FindOldDamage(
                         ModifierByName,
                         LevelSpecialValue,
                         v50);
      v52 = COERCE_FLOAT(_mm_cvtsi128_si32(v51));
      v53 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::Heal(v53, v52, this, 0, 1);
    }
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_FacelessVoid_TimeWalk::OnProjectileHit  (line 748, @0x0000000002a832b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName, CDOTALocomotor::RemoveHorizontalMotionController, FindClearSpaceForUnit, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "modifier_faceless_void_time_walk", "particles/units/heroes/hero_faceless_void/faceless_void_time_walk_slow.vpcf"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_FacelessVoid_TimeWalk::OnProjectileHit(
        CDOTA_Ability_FacelessVoid_TimeWalk *const this,
        unsigned __int16 *hTarget,
        const Vector *const vLocation)
{
  int v5; // eax
  unsigned __int64 v6; // rsi
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTALocomotor *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v15; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  CDOTA_ParticleManager *v19; // rax
  double v21; // [rsp+0h] [rbp-30h]

  v5 = *hTarget;
  if ( (*hTarget + 2) > 1 )
  {
    v6 = *hTarget;
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v6 >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[v6 & 0x1FF];
      if ( v8 != 0
        && v5 == v8->m_EHandle.m_Index
        && v8->m_pInstance != 0
        && BYTE3(v8->m_pInstance[7]._vptr_IHandleEntity) != 0 )
      {
        return 0;
      }
    }
  }
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_faceless_void_time_walk");
  v10 = CDOTABaseAbility::GetCaster(this);
  v11 = (*(v10->_vptr_IHandleEntity + 376))(v10);
  CDOTALocomotor::RemoveHorizontalMotionController(v11, &this->CHorizontalMotionController);
  v12 = CDOTABaseAbility::GetCaster(this);
  FindClearSpaceForUnit(v12, *vLocation, 0);
  v13 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v13) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_faceless_void/faceless_void_time_walk_slow.vpcf",
                   2,
                   0,
                   0,
                   v13);
  v15 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v15);
  v17 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v17, v13, 0, *&AbsOrigin->x, AbsOrigin->z);
  *&v21 = COERCE_UNSIGNED_INT(this->radius);
  v18 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v18, v13, 1, v21, 0.0);
  v19 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v19, v13);
  return 0;
}


// CDOTA_Ability_FacelessVoid_TimeWalk::OnProjectileThink  (line 771, @0x0000000002a77ac0, libserver.so)  // inlines: operator=
void __fastcall CDOTA_Ability_FacelessVoid_TimeWalk::OnProjectileThink(
        CDOTA_Ability_FacelessVoid_TimeWalk *const this,
        const Vector *const vLocation)
{
  this->m_vProjectileLocation = *vLocation;
}


// CDOTA_Modifier_FacelessVoid_TimeWalk_Slow::~CDOTA_Modifier_FacelessVoid_TimeWalk_Slow  (line 783, @0x0000000002ac1960, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_FacelessVoid_TimeWalk_Slow::~CDOTA_Modifier_FacelessVoid_TimeWalk_Slow(
        CDOTA_Modifier_FacelessVoid_TimeWalk_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_43FA050;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_FacelessVoid_TimeWalk_Slow::~CDOTA_Modifier_FacelessVoid_TimeWalk_Slow  (line 783, @0x0000000002ac1980, libserver.so)  // inlines: ~CDOTA_Modifier_FacelessVoid_TimeWalk_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_FacelessVoid_TimeWalk_Slow::~CDOTA_Modifier_FacelessVoid_TimeWalk_Slow(
        CDOTA_Modifier_FacelessVoid_TimeWalk_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_43FA050;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_FacelessVoid_TimeWalk_Slow::GetEffectName  (line 792, @0x0000000002ab90a0, libserver.so)
// strings: "particles/units/heroes/hero_faceless_void/faceless_void_time_walk_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_FacelessVoid_TimeWalk_Slow::GetEffectName(
        CDOTA_Modifier_FacelessVoid_TimeWalk_Slow *const this)
{
  return "particles/units/heroes/hero_faceless_void/faceless_void_time_walk_debuff.vpcf";
}


// CDOTA_Modifier_FacelessVoid_TimeWalk_Slow::IsDebuff  (line 794, @0x0000000002ab90b0, libserver.so)
bool __fastcall CDOTA_Modifier_FacelessVoid_TimeWalk_Slow::IsDebuff(
        CDOTA_Modifier_FacelessVoid_TimeWalk_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_FacelessVoid_TimeWalk_Slow::OnCreated  (line 805, @0x0000000002aaa1c0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_FacelessVoid_TimeWalk_Slow::OnCreated(
        CDOTA_Modifier_FacelessVoid_TimeWalk_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->movement_speed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movement_speed_pct", -1, 0);
  else
    this->movement_speed_pct = 0;
}


// CDOTA_Modifier_FacelessVoid_TimeWalk_Slow::DeclareFunctions  (line 812, @0x0000000002a77af0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_FacelessVoid_TimeWalk_Slow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_FacelessVoid_TimeWalk_Slow::DeclareFunctions(
        CDOTA_Modifier_FacelessVoid_TimeWalk_Slow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_FacelessVoid_TimeWalk_Slow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_FacelessVoid_TimeWalk_Slow::GetModifierMoveSpeedBonus_Percentage  (line 819, @0x0000000002a77b10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_FacelessVoid_TimeWalk_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_FacelessVoid_TimeWalk_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->movement_speed_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_FacelessVoid_TimeWalk::~CDOTA_Modifier_FacelessVoid_TimeWalk  (line 829, @0x0000000002ac1910, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_FacelessVoid_TimeWalk::~CDOTA_Modifier_FacelessVoid_TimeWalk(
        CDOTA_Modifier_FacelessVoid_TimeWalk *const this)
{
  this->_vptr_CDOTA_Buff = &off_43FA370;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_FacelessVoid_TimeWalk::~CDOTA_Modifier_FacelessVoid_TimeWalk  (line 829, @0x0000000002ac1930, libserver.so)  // inlines: ~CDOTA_Modifier_FacelessVoid_TimeWalk
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_FacelessVoid_TimeWalk::~CDOTA_Modifier_FacelessVoid_TimeWalk(
        CDOTA_Modifier_FacelessVoid_TimeWalk *const this)
{
  this->_vptr_CDOTA_Buff = &off_43FA370;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_FacelessVoid_TimeWalk::IsPurgable  (line 836, @0x0000000002ab90c0, libserver.so)
bool __fastcall CDOTA_Modifier_FacelessVoid_TimeWalk::IsPurgable(CDOTA_Modifier_FacelessVoid_TimeWalk *const this)
{
  return 0;
}


// CDOTA_Modifier_FacelessVoid_TimeWalk::GetEffectName  (line 840, @0x0000000002ab90d0, libserver.so)
// strings: "particles/units/heroes/hero_faceless_void/faceless_void_time_walk.vpcf"
const char *__fastcall CDOTA_Modifier_FacelessVoid_TimeWalk::GetEffectName(
        CDOTA_Modifier_FacelessVoid_TimeWalk *const this)
{
  return "particles/units/heroes/hero_faceless_void/faceless_void_time_walk.vpcf";
}


// CDOTA_Modifier_FacelessVoid_TimeWalk::GetStatusEffectName  (line 841, @0x0000000002ab90e0, libserver.so)
// strings: "particles/status_fx/status_effect_faceless_timewalk.vpcf"
const char *__fastcall CDOTA_Modifier_FacelessVoid_TimeWalk::GetStatusEffectName(
        CDOTA_Modifier_FacelessVoid_TimeWalk *const this)
{
  return "particles/status_fx/status_effect_faceless_timewalk.vpcf";
}


// CDOTA_Modifier_FacelessVoid_TimeWalk::StatusEffectPriority  (line 842, @0x0000000002ab90f0, libserver.so)
int __fastcall CDOTA_Modifier_FacelessVoid_TimeWalk::StatusEffectPriority(
        CDOTA_Modifier_FacelessVoid_TimeWalk *const this)
{
  return 50;
}


// CDOTA_Modifier_FacelessVoid_TimeWalk::IsHidden  (line 844, @0x0000000002ab9100, libserver.so)
bool __fastcall CDOTA_Modifier_FacelessVoid_TimeWalk::IsHidden(CDOTA_Modifier_FacelessVoid_TimeWalk *const this)
{
  return 1;
}


// CDOTA_Modifier_FacelessVoid_TimeWalk::OnCreated  (line 851, @0x0000000002a79b20, libserver.so)
// calls: CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_FacelessVoid_TimeWalk::OnCreated(
        CDOTA_Modifier_FacelessVoid_TimeWalk *const this,
        KeyValues *pKV)
{
  double v3; // xmm0_8
  float v4; // xmm1_4
  float v5; // xmm0_4
  float v6; // xmm1_4

  v3 = (*(this->_vptr_CDOTA_Buff + 31))(this, pKV);
  v4 = *&v3;
  v5 = 0.0;
  v6 = v4 - 0.30000001;
  if ( v6 >= 0.0 )
    v5 = (*(this->_vptr_CDOTA_Buff + 31))(this) - 0.30000001;
  CDOTA_Buff::StartIntervalThink(this, v5, v6);
}


// CDOTA_Modifier_FacelessVoid_TimeWalk::OnIntervalThink  (line 858, @0x0000000002a79e80, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_BaseNPC::StartGesture, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_FacelessVoid_TimeWalk::OnIntervalThink(CDOTA_Modifier_FacelessVoid_TimeWalk *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax

  if ( !CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value )
  {
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::StartGesture(Parent, 1540, 0.0, 0.2, 0, 0, 1.0);
  }
  CDOTA_Buff::StartIntervalThink(this, -1.0, v2);
}


// CDOTA_Modifier_FacelessVoid_TimeWalk::CheckState  (line 872, @0x0000000002a77b30, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_FacelessVoid_TimeWalk::CheckState(
        CDOTA_Modifier_FacelessVoid_TimeWalk *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x120uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFFFEDFLL;
}


// CDOTA_Modifier_FacelessVoid_TimeWalk::GetModifierInvisibilityLevel  (line 880, @0x0000000002a77b50, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_FacelessVoid_TimeWalk::GetModifierInvisibilityLevel(
        CDOTA_Modifier_FacelessVoid_TimeWalk *const this,
        const CModifierParams *const params)
{
  return 0x3F00000000000001uLL;
}


// CDOTA_Ability_FacelessVoid_Chronosphere::~CDOTA_Ability_FacelessVoid_Chronosphere  (line 893, @0x0000000002ac5660, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_FacelessVoid_Chronosphere::~CDOTA_Ability_FacelessVoid_Chronosphere(
        CDOTA_Ability_FacelessVoid_Chronosphere *const this)
{
  this->_vptr_IHandleEntity = &off_43FA6D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_FacelessVoid_Chronosphere::~CDOTA_Ability_FacelessVoid_Chronosphere  (line 893, @0x0000000002ac5680, libserver.so)  // inlines: ~CDOTA_Ability_FacelessVoid_Chronosphere
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_FacelessVoid_Chronosphere::~CDOTA_Ability_FacelessVoid_Chronosphere(
        CDOTA_Ability_FacelessVoid_Chronosphere *const this)
{
  this->_vptr_IHandleEntity = &off_43FA6D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_FacelessVoid_Chronosphere::Schema_DynamicBinding  (line 895, @0x0000000002ab9110, libserver.so)
// globals: CDOTA_Ability_FacelessVoid_Chronosphere::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_FacelessVoid_Chronosphere::Schema_DynamicBinding(
        const CDOTA_Ability_FacelessVoid_Chronosphere *const this)
{
  return CDOTA_Ability_FacelessVoid_Chronosphere::s_pSchemaBinding;
}


// CDOTA_Ability_FacelessVoid_Chronosphere::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 895, @0x0000000002ab9120, libserver.so)
// globals: CDOTA_Ability_FacelessVoid_Chronosphere::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_FacelessVoid_Chronosphere::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_FacelessVoid_Chronosphere::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_FacelessVoid_Chronosphere::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_FacelessVoid_Chronosphere::CEntityInstanceEntityClass::DestructInstance  (line 895, @0x0000000002ab9130, libserver.so)  // inlines: Destruct<CDOTA_Ability_FacelessVoid_Chronosphere>
void __fastcall CDOTA_Ability_FacelessVoid_Chronosphere::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_FacelessVoid_Chronosphere::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_FacelessVoid_Chronosphere::CEntityInstanceEntityClass::FreeInstance  (line 895, @0x0000000002ab9150, libserver.so)
void __fastcall CDOTA_Ability_FacelessVoid_Chronosphere::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_FacelessVoid_Chronosphere::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_FacelessVoid_Chronosphere::CEntityInstanceEntityClass::CanAllocate  (line 895, @0x0000000002ab9170, libserver.so)
bool __fastcall CDOTA_Ability_FacelessVoid_Chronosphere::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_FacelessVoid_Chronosphere::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_FacelessVoid_Chronosphere::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 895, @0x0000000002ab9180, libserver.so)
// globals: CDOTA_Ability_FacelessVoid_Chronosphere::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_FacelessVoid_Chronosphere::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_FacelessVoid_Chronosphere::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_FacelessVoid_Chronosphere::s_pSchemaBinding;
}


// CDOTA_Ability_FacelessVoid_Chronosphere::CEntityInstanceEntityClass::AllocateInstance  (line 895, @0x0000000002abee80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_FacelessVoid_Chronosphere::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_FacelessVoid_Chronosphere::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_FacelessVoid_Chronosphere::CEntityInstanceEntityClass::ConstructInstance  (line 895, @0x0000000002ac2b10, libserver.so)  // inlines: CDOTA_Ability_FacelessVoid_Chronosphere, Construct<CDOTA_Ability_FacelessVoid_Chronosphere>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_FacelessVoid_Chronosphere::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_FacelessVoid_Chronosphere::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43FA6D0;
  }
  return p;
}


// CDOTA_Ability_FacelessVoid_Chronosphere::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 895, @0x0000000002acc010, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_FacelessVoid_Chronosphere::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_FacelessVoid_Chronosphere::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_FacelessVoid_Chronosphere::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 895, @0x0000000002acc030, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_FacelessVoid_Chronosphere::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_FacelessVoid_Chronosphere::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_FacelessVoid_Chronosphere::GetEntityClassInternal  (line 895, @0x0000000002adc3f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "faceless_void_chronosphere", "CDOTA_Ability_FacelessVoid_Chronosphere"
// globals: `guard variable for'CDOTA_Ability_FacelessVoid_Chronosphere::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_ChronosphereClass, CDOTA_Ability_FacelessVoid_Chronosphere::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_ChronosphereClass, __dso_handle, CDOTA_Ability_FacelessVoid_Chronosphere::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_FacelessVoid_Chronosphere::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_ChronosphereClassInfo, CDOTA_Ability_FacelessVoid_Chronosphere::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_ChronosphereClassInfo
CEntityClass *__cdecl CDOTA_Ability_FacelessVoid_Chronosphere::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_FacelessVoid_Chronosphere::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_ChronosphereClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_FacelessVoid_Chronosphere::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_ChronosphereClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_FacelessVoid_Chronosphere::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_ChronosphereClass);
    CDOTA_Ability_FacelessVoid_Chronosphere::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_ChronosphereClass._vptr_CEntityClass = off_43FA650;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_FacelessVoid_Chronosphere::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_ChronosphereClass);
    __cxa_atexit(
      CDOTA_Ability_FacelessVoid_Chronosphere::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_FacelessVoid_Chronosphere::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_ChronosphereClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_FacelessVoid_ChronosphereClass != 0 )
    return &CDOTA_Ability_FacelessVoid_Chronosphere::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_ChronosphereClass;
  if ( `guard variable for'CDOTA_Ability_FacelessVoid_Chronosphere::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_ChronosphereClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_FacelessVoid_Chronosphere::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_ChronosphereClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_FacelessVoid_Chronosphere::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_ChronosphereClassInfo,
      "CDOTA_Ability_FacelessVoid_Chronosphere",
      "faceless_void_chronosphere",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_FacelessVoid_Chronosphere::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_ChronosphereClassInfo);
  }
  CDOTA_Ability_FacelessVoid_Chronosphere::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_ChronosphereClass.m_pClassInfo = &CDOTA_Ability_FacelessVoid_Chronosphere::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_ChronosphereClassInfo;
  CDOTA_Ability_FacelessVoid_Chronosphere::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_ChronosphereClass.m_pBaseClassInfo = CDOTA_Ability_FacelessVoid_Chronosphere::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_ChronosphereClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_FacelessVoid_ChronosphereClass = &CDOTA_Ability_FacelessVoid_Chronosphere::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_ChronosphereClass;
  CDOTA_Ability_FacelessVoid_Chronosphere::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_FacelessVoid_ChronosphereClassInfo.m_pClass = &CDOTA_Ability_FacelessVoid_Chronosphere::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_ChronosphereClass;
  CDOTA_Ability_FacelessVoid_Chronosphere::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_ChronosphereClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_FacelessVoid_ChronosphereClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_FacelessVoid_Chronosphere::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_FacelessVoid_ChronosphereClass;
}


// CDOTA_Ability_FacelessVoid_Chronosphere::GetAOERadius  (line 899, @0x0000000002ae6640, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_FacelessVoid_Chronosphere::GetAOERadius(
        CDOTA_Ability_FacelessVoid_Chronosphere *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
}


// CDOTA_Ability_FacelessVoid_Chronosphere::YouForgotToImplementOrDeclareServerClass  (line 908, @0x0000000002a77b70, libserver.so)
int __fastcall CDOTA_Ability_FacelessVoid_Chronosphere::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_FacelessVoid_Chronosphere *const this)
{
  return 0;
}


// CDOTA_Ability_FacelessVoid_Chronosphere::GetServerClass  (line 908, @0x0000000002a8a570, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_FacelessVoid_Chronosphere::GetServerClass(
        CDOTA_Ability_FacelessVoid_Chronosphere *const this)
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


// CDOTA_Ability_FacelessVoid_Chronosphere::GetCooldown  (line 917, @0x0000000002a9b920, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_FacelessVoid_Chronosphere::GetCooldown(
        CDOTA_Ability_FacelessVoid_Chronosphere *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) && CDOTABaseAbility::GetEffectiveLevel(this) >= 0 )
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "cooldown_scepter", -1, 0);
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_FacelessVoid_Chronosphere::OnSpellStart  (line 924, @0x0000000002aa40c0, libserver.so)  // inlines: GetAbilityData, GetLevelSpecialValueFor<int>, GetTeamNumber, entindex
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCursorPosition, Thinker_Create, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTAFogOfWarSystem::AddTempViewer, CDOTA_BaseNPC::UnitEmitSound, CEntityInstance::GetEntityIndex, CreateUnitEvent (17 total)
// strings: "modifier_faceless_void_chronosphere", "modifier_faceless_void_chronosphere_selfbuff", "Hero_FacelessVoid.Chronosphere"
void __fastcall CDOTA_Ability_FacelessVoid_Chronosphere::OnSpellStart(
        CDOTA_Ability_FacelessVoid_Chronosphere *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  __m128i v3; // xmm0
  float v4; // r15d
  float v5; // xmm1_4
  int m_Value; // r13d
  CDOTA_BaseNPC *v7; // rax
  float v8; // xmm1_4
  int v9; // r14d
  CDOTA_BaseNPC *v10; // rax
  __m128i v11; // xmm3
  float v12; // r14d
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  CEntityIndex v16; // eax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r14d
  CDOTA_BaseNPC *v19; // rax
  float v20; // xmm3_4
  Vector vLocation; // [rsp+30h] [rbp-80h] BYREF
  KeyValues kv; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-38h]
  Vector CursorPosition; // 0:kr00_12.12
  Vector v26; // 0:kr14_12.12

  v24 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    *v3.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration_scepter", -1, 0);
  else
    *v3.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  KeyValues::KeyValues(&kv, "modifier_faceless_void_chronosphere");
  KeyValues::SetFloat(&kv, "duration", v5);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  v7 = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(v7, this, "modifier_faceless_void_chronosphere", &kv, CursorPosition, m_Value, 0, 1, 0);
  KeyValues::KeyValues(&kv2, "modifier_faceless_void_chronosphere_selfbuff");
  KeyValues::SetFloat(&kv2, "duration", v8);
  v9 = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  v26 = CDOTABaseAbility::GetCursorPosition(this);
  v10 = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(v10, this, "modifier_faceless_void_chronosphere_selfbuff", &kv2, v26, v9, 0, 1, 0);
  *v11.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "vision_radius", -1, 0);
  v12 = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
  vLocation = CDOTABaseAbility::GetCursorPosition(this);
  v13 = CDOTABaseAbility::GetCaster(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_CHRONOSPHERE,
    v13->m_iTeamNum.m_Value,
    &vLocation,
    v12,
    v4,
    0);
  v14 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v14, "Hero_FacelessVoid.Chronosphere", 0.0, 0, 0);
  v15 = CDOTABaseAbility::GetCaster(this);
  v16.m_Data = CEntityInstance::GetEntityIndex(v15).m_Data;
  CreateUnitEvent(v16, 0, 25, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_IMPORTANT_ABILITY);
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  vLocation = CDOTABaseAbility::GetCursorPosition(this);
  v19 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(
    g_pGameRules,
    v19,
    0,
    m_iAbilityID,
    0,
    0,
    *&vLocation.x,
    vLocation.z,
    v4,
    v20);
  KeyValues::~KeyValues(&kv2);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_FacelessVoid_Chronosphere::GetStunDuration  (line 954, @0x0000000002a9b980, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_FacelessVoid_Chronosphere::GetStunDuration(
        CDOTA_Ability_FacelessVoid_Chronosphere *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
}


// CDOTA_Modifier_FacelessVoid_Chronosphere::~CDOTA_Modifier_FacelessVoid_Chronosphere  (line 963, @0x0000000002ac18c0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere::~CDOTA_Modifier_FacelessVoid_Chronosphere(
        CDOTA_Modifier_FacelessVoid_Chronosphere *const this)
{
  this->_vptr_CDOTA_Buff = &off_43FB190;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_FacelessVoid_Chronosphere::~CDOTA_Modifier_FacelessVoid_Chronosphere  (line 963, @0x0000000002ac18e0, libserver.so)  // inlines: ~CDOTA_Modifier_FacelessVoid_Chronosphere
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere::~CDOTA_Modifier_FacelessVoid_Chronosphere(
        CDOTA_Modifier_FacelessVoid_Chronosphere *const this)
{
  this->_vptr_CDOTA_Buff = &off_43FB190;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_FacelessVoid_Chronosphere::IsAura  (line 971, @0x0000000002ab9190, libserver.so)
bool __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere::IsAura(CDOTA_Modifier_FacelessVoid_Chronosphere *const this)
{
  return 1;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere::GetModifierAura  (line 972, @0x0000000002ab91a0, libserver.so)
// strings: "modifier_faceless_void_chronosphere_freeze"
const char *__fastcall CDOTA_Modifier_FacelessVoid_Chronosphere::GetModifierAura(
        CDOTA_Modifier_FacelessVoid_Chronosphere *const this)
{
  return "modifier_faceless_void_chronosphere_freeze";
}


// CDOTA_Modifier_FacelessVoid_Chronosphere::GetAuraSearchTeam  (line 973, @0x0000000002ab91b0, libserver.so)
int __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere::GetAuraSearchTeam(
        CDOTA_Modifier_FacelessVoid_Chronosphere *const this)
{
  return 3;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere::GetAuraSearchType  (line 974, @0x0000000002ab91c0, libserver.so)
int __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere::GetAuraSearchType(
        CDOTA_Modifier_FacelessVoid_Chronosphere *const this)
{
  return 39;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere::GetAuraSearchFlags  (line 975, @0x0000000002ab91d0, libserver.so)
int __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere::GetAuraSearchFlags(
        CDOTA_Modifier_FacelessVoid_Chronosphere *const this)
{
  return 80;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere::GetAuraRadius  (line 976, @0x0000000002ab91e0, libserver.so)
int __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere::GetAuraRadius(
        CDOTA_Modifier_FacelessVoid_Chronosphere *const this)
{
  return this->radius;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere::GetAuraDuration  (line 978, @0x0000000002ab91f0, libserver.so)
float __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere::GetAuraDuration(
        CDOTA_Modifier_FacelessVoid_Chronosphere *const this)
{
  return 0.1;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere::GetNumAvoidLocations  (line 981, @0x0000000002ab9200, libserver.so)
int __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere::GetNumAvoidLocations(
        CDOTA_Modifier_FacelessVoid_Chronosphere *const this)
{
  return 1;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere::GetAvoidLocation  (line 982, @0x0000000002ac2380, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin
Vector __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere::GetAvoidLocation(
        CDOTA_Modifier_FacelessVoid_Chronosphere *const this,
        int iAvoid)
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


// CDOTA_Modifier_FacelessVoid_Chronosphere::AvoidStrength  (line 983, @0x0000000002ab9210, libserver.so)
float __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere::AvoidStrength(
        CDOTA_Modifier_FacelessVoid_Chronosphere *const this,
        CDOTA_Bot *pBot)
{
  return 0.89999998;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere::GetAvoidRadius  (line 984, @0x0000000002ab9220, libserver.so)
float __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere::GetAvoidRadius(
        CDOTA_Modifier_FacelessVoid_Chronosphere *const this,
        int iAvoid)
{
  return this->radius + 400.0;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere::IsAvoidMagical  (line 985, @0x0000000002ab9240, libserver.so)
bool __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere::IsAvoidMagical(
        CDOTA_Modifier_FacelessVoid_Chronosphere *const this)
{
  return 1;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere::IsPersistentAvoidance  (line 986, @0x0000000002ab9250, libserver.so)
bool __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere::IsPersistentAvoidance(
        CDOTA_Modifier_FacelessVoid_Chronosphere *const this)
{
  return 1;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere::OnCreated  (line 996, @0x0000000002a9e9e0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, GetTeamNumber, Purge, QueueConcept, ToDOTABaseNPCHero, Vector, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleFoWProperties, CDOTA_Buff::AddParticle, FindUnitsInRadius, CResponseCriteriaSet::CResponseCriteriaSet (20 total)
// strings: "particles/units/heroes/hero_faceless_void/faceless_void_chronosphere.vpcf", "chronotargets"
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere::OnCreated(
        CDOTA_Modifier_FacelessVoid_Chronosphere *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_ParticleManager *v8; // rax
  CDOTA_ParticleManager *v9; // rax
  CDOTA_ParticleManager *v10; // rax
  int (**vptr_CDOTA_Buff)(...); // rax
  int v12; // r14d
  CDOTA_BaseNPC *v13; // r13
  CDOTA_BaseNPC *v14; // rax
  const Vector *v15; // r15
  CDOTA_BaseNPC *v16; // rax
  float v17; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC_Hero *v20; // rdi
  float flFoWRadius; // [rsp+1Ch] [rbp-94h]
  float flFoWRadiusa; // [rsp+1Ch] [rbp-94h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+20h] [rbp-90h] BYREF
  CResponseCriteriaSet criteria; // [rsp+40h] [rbp-70h] BYREF

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->radius, "radius");
  Caster = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_faceless_void/faceless_void_chronosphere.vpcf",
                      2,
                      0,
                      0,
                      Caster);
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v8 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v8, Caster, 0, *&AbsOrigin->x, AbsOrigin->z);
  *&criteria._vptr_CResponseCriteriaSet = this->radius;
  HIDWORD(criteria._vptr_CResponseCriteriaSet) = criteria._vptr_CResponseCriteriaSet;
  LODWORD(criteria.m_Lookup.m_LessFunc) = criteria._vptr_CResponseCriteriaSet;
  v9 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(
    v9,
    Caster,
    1,
    *&criteria._vptr_CResponseCriteriaSet,
    *&criteria._vptr_CResponseCriteriaSet);
  flFoWRadius = this->radius;
  v10 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleFoWProperties(v10, Caster, 0, -1, flFoWRadius);
  CDOTA_Buff::AddParticle(this, Caster, 0, 0, -1, 0, 0);
  vptr_CDOTA_Buff = this->_vptr_CDOTA_Buff;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v12 = vptr_CDOTA_Buff[40](this);
  flFoWRadiusa = (*(this->_vptr_CDOTA_Buff + 41))(this);
  v13 = CDOTA_Buff::GetParent(this);
  v14 = CDOTA_Buff::GetParent(this);
  v15 = CBaseEntity::GetAbsOrigin(v14);
  v16 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v16->m_iTeamNum.m_Value, v15, v13, flFoWRadiusa, &entities, 2, 1, v12, 0, 0);
  CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
  CResponseCriteriaSet::AppendCriteria(&criteria, "chronotargets", 1.0, v17);
  m_pSpeech = CDOTA_Buff::GetCaster(this)->m_Speech.m_pSpeech;
  if ( m_pSpeech != 0 )
    CDOTA_Speech::QueueConcept(m_pSpeech, 18, 1.0, &criteria, 4, 1, 0, 0, 0);
  if ( entities.m_Size > 1 )
  {
    v19 = CDOTA_Buff::GetCaster(this);
    if ( v19 != 0 && (v19->m_iUnitType & 1) != 0 )
      v20 = v19;
    else
      v20 = 0;
    EconEntity_OnOwnerKillEaterEvent(
      v20,
      0,
      kill_eater_event_t::kKillEaterEventType_Faceless_MultiChrono,
      1,
      INVALID_ITEM_DEF_INDEX);
  }
  CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
  if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
  }
}


// CDOTA_Modifier_FacelessVoid_Chronosphere::OnDestroy  (line 1024, @0x0000000002a7a640, libserver.so)
// calls: CDOTA_Buff::GetParent, UTIL_Remove
void __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere::OnDestroy(
        CDOTA_Modifier_FacelessVoid_Chronosphere *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  UTIL_Remove(Parent);
}


// CDOTA_Modifier_FacelessVoid_Chronosphere::GetAuraEntityReject  (line 1031, @0x0000000002a818b0, libserver.so)  // inlines: FStrEq, GetClassNameAsCStr, GetClassname, InState, IsInvulnerable, String, _V_strcmp
// calls: CDOTA_Buff::GetCaster, strcmp
// strings: "npc_dota_hero_faceless_void", "npc_dota_earth_spirit_stone"
bool __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere::GetAuraEntityReject(
        CDOTA_Modifier_FacelessVoid_Chronosphere *const this,
        CDOTA_BaseNPC *pNPC)
{
  int v4; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rax
  bool v7; // r12
  const char *m_pAsString; // rbx

  if ( CDOTA_Buff::GetCaster(this) == pNPC )
    return 1;
  v4 = (*(pNPC->_vptr_IHandleEntity + 414))(pNPC);
  Caster = CDOTA_Buff::GetCaster(this);
  if ( v4 == (*(Caster->_vptr_IHandleEntity + 414))(Caster) )
    return 1;
  if ( (pNPC->m_bIsWaitingToSpawn.m_Value || (pNPC->m_nUnitState64.m_Value & 0x100) != 0)
    && (pNPC->m_iUnitType & 1) != 0 )
  {
    return 1;
  }
  m_pEntity = pNPC->m_pEntity;
  v7 = 0;
  m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
  if ( m_pAsString != 0 )
  {
    v7 = 1;
    if ( m_pAsString != "npc_dota_hero_faceless_void"
      && strcmp(m_pEntity->m_designerName.u.m_pAsString, "npc_dota_hero_faceless_void") != 0
      && m_pAsString != "npc_dota_earth_spirit_stone" )
    {
      return strcmp(m_pAsString, "npc_dota_earth_spirit_stone") == 0;
    }
  }
  return v7;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::~CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze  (line 1056, @0x0000000002ac1840, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::~CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze(
        CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze *const this)
{
  this->_vptr_CDOTA_Buff = &off_43FB4B0;
  this->_vptr_CHorizontalMotionController = &off_43FB7A8;
  this->_vptr_CVerticalMotionController = &off_43FB7E8;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::~CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze  (line 1056, @0x0000000002ac1870, libserver.so)  // inlines: ~CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::~CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze(
        CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze *const this)
{
  this->_vptr_CDOTA_Buff = &off_43FB4B0;
  this->_vptr_CHorizontalMotionController = &off_43FB7A8;
  this->_vptr_CVerticalMotionController = &off_43FB7E8;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::IsHorizontalMotionValidToApply  (line 1070, @0x0000000002ab9260, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::IsVerticalMotionValidToApply  (line 1071, @0x0000000002ab9290, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::IsVerticalMotionValidToApply(
        CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::IsMotionController  (line 1073, @0x0000000002ab92c0, libserver.so)
bool __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::IsMotionController(
        CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze *const this)
{
  return 1;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::IsDebuff  (line 1075, @0x0000000002ab92d0, libserver.so)
bool __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::IsDebuff(
        CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze *const this)
{
  return 1;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::GetEffectName  (line 1077, @0x0000000002ab92e0, libserver.so)
const char *__fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::GetEffectName(
        CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze *const this)
{
  return 0;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::GetEffectAttachType  (line 1078, @0x0000000002ab92f0, libserver.so)
int __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::GetEffectAttachType(
        CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze *const this)
{
  return 1;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::GetStatusEffectName  (line 1079, @0x0000000002ab9300, libserver.so)
// strings: "particles/status_fx/status_effect_faceless_chronosphere.vpcf"
const char *__fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::GetStatusEffectName(
        CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze *const this)
{
  return "particles/status_fx/status_effect_faceless_chronosphere.vpcf";
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::StatusEffectPriority  (line 1080, @0x0000000002ab9310, libserver.so)
int __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::StatusEffectPriority(
        CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze *const this)
{
  return 30;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::GetAttributes  (line 1081, @0x0000000002ac47d0, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::GetAttributes(
        CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 4;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::GetPriority  (line 1084, @0x0000000002ab9320, libserver.so)
int __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::GetPriority(
        CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze *const this)
{
  return 8;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::OnCreated  (line 1094, @0x0000000002a7bf30, libserver.so)  // inlines: IsCurrentlyMotionControlled
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::ApplyHorizontalMotionController, CDOTA_Buff::Destroy, CDOTALocomotor::ApplyVerticalMotionController
void __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::OnCreated(
        CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax
  __int64 v4; // rax
  CDOTALocomotor *v5; // r12

  Parent = CDOTA_Buff::GetParent(this);
  v4 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  v5 = v4;
  if ( *(v4 + 216) != 0 )
  {
    if ( CDOTALocomotor::ApplyHorizontalMotionController(v4, &this->CHorizontalMotionController, 0)
      && CDOTALocomotor::ApplyVerticalMotionController(v5, &this->CVerticalMotionController, 0) )
    {
      CDOTALocomotor::ApplyHorizontalMotionController(v5, &this->CHorizontalMotionController, 0);
      CDOTALocomotor::ApplyVerticalMotionController(v5, &this->CVerticalMotionController, 0);
    }
    else
    {
      CDOTA_Buff::Destroy(this, 0, 0, 0);
    }
  }
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::OnDestroy  (line 1115, @0x0000000002a7bff0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController, CDOTALocomotor::RemoveVerticalMotionController
void __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::OnDestroy(
        CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTALocomotor *v5; // rax

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveHorizontalMotionController(v3, &this->CHorizontalMotionController);
  v4 = CDOTA_Buff::GetParent(this);
  v5 = (*(v4->_vptr_IHandleEntity + 376))(v4);
  CDOTALocomotor::RemoveVerticalMotionController(v5, &this->CVerticalMotionController);
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::CheckState  (line 1125, @0x0000000002a79bf0, libserver.so)  // inlines: Disable, Enable, GetTeamNumber
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_slark_shadow_dance", "modifier_techies_minefield_sign_aura"
void __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::CheckState(
        CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax
  unsigned __int8 m_Value; // r13
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v7; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x40020uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFBFFDFLL;
  if ( CDOTA_Buff::GetParent(this) != 0 && CDOTA_Buff::GetCaster(this) != 0 )
  {
    m_Value = CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value;
    if ( m_Value != CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value )
    {
      Parent = CDOTA_Buff::GetParent(this);
      if ( CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_slark_shadow_dance", 0) == 0 )
      {
        v7 = CDOTA_Buff::GetParent(this);
        if ( CDOTA_BaseNPC::FindModifierByName(v7, "modifier_techies_minefield_sign_aura", 0) == 0 )
        {
          buffState->m_nDisabledStateMask |= 0x80uLL;
          buffState->m_nEnabledStateMask &= ~0x80uLL;
        }
      }
    }
  }
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::UpdateHorizontalMotion  (line 1140, @0x0000000002a77b80, libserver.so)
void __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::UpdateHorizontalMotion(
        CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  ;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::UpdateVerticalMotion  (line 1149, @0x0000000002a77ba0, libserver.so)
void __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::UpdateVerticalMotion(
        CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  ;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::DeclareFunctions  (line 1158, @0x0000000002a77bc0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::DeclareFunctions(
        CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze *const this)
{
  this->m_Functions[138].__pfn = CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::OnDeath;
  this->m_Functions[138].__delta = 0;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::OnDeath  (line 1165, @0x0000000002a85150, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsRealHero, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, EconEntity_OnOwnerKillEaterEvent
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
ModifierVariant_t __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze::OnDeath(
        CDOTA_Modifier_FacelessVoid_Chronosphere_Freeze *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  __int64 v5; // rcx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC_Hero *v11; // rdi
  uint32 v12; // edx
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v14; // rcx
  CEntityIdentity *v15; // rcx
  CDOTA_BaseNPC_Hero *v16; // rdx
  CDOTA_BaseNPC_Hero *v17; // rsi

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v5 = params->hunit.m_Index & 0x1FF;
  v6 = &v3[v5];
  if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
  {
    m_pInstance = v6->m_pInstance;
    if ( v6->m_pInstance != 0
      && m_pInstance->m_bIsDOTANPC
      && (m_pInstance->m_iUnitType & 1) != 0
      && !m_pInstance->m_bIsIllusion.m_Value
      && (*(m_pInstance->_vptr_IHandleEntity + 436))(m_pInstance, params, v6, v5 * 120, CEntityHandle::gm_pEntityList) == 0 )
    {
      Parent = CDOTA_Buff::GetParent(this);
      if ( Parent == m_pInstance )
      {
        Caster = CDOTA_Buff::GetCaster(this);
        if ( Caster == 0 || (v11 = Caster, (Caster->m_iUnitType & 1) == 0) )
          v11 = 0;
        v12 = params->hattacker.m_Index;
        if ( v12 + 2 <= 1
          || (m_Index_low = LOWORD(params->hattacker.m_Index),
              (v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
          || (v15 = &v14[m_Index_low & 0x1FF]) == 0
          || v12 != v15->m_EHandle.m_Index
          || (v16 = v15->m_pInstance, v15->m_pInstance == 0)
          || !v16->m_bIsDOTANPC )
        {
          v16 = 0;
        }
        if ( v11 == v16 )
        {
          v17 = 0;
          if ( (Parent->m_iUnitType & 1) != 0 )
            v17 = Parent;
          EconEntity_OnOwnerKillEaterEvent(
            v11,
            v17,
            kill_eater_event_t::kKillEaterEventType_Faceless_ChronoKills,
            1,
            INVALID_ITEM_DEF_INDEX);
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff::~CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff  (line 1186, @0x0000000002ac17f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff::~CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff(
        CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_43FB870;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff::~CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff  (line 1186, @0x0000000002ac1810, libserver.so)  // inlines: ~CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff::~CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff(
        CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_43FB870;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff::IsAura  (line 1194, @0x0000000002ab9330, libserver.so)
bool __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff::IsAura(
        CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff *const this)
{
  return 1;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff::GetModifierAura  (line 1195, @0x0000000002ab9340, libserver.so)
// strings: "modifier_faceless_void_chronosphere_speed"
const char *__fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff::GetModifierAura(
        CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff *const this)
{
  return "modifier_faceless_void_chronosphere_speed";
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff::GetAuraSearchTeam  (line 1196, @0x0000000002ab9350, libserver.so)
int __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff::GetAuraSearchTeam(
        CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff *const this)
{
  return 3;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff::GetAuraSearchType  (line 1197, @0x0000000002ab9360, libserver.so)
int __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff::GetAuraSearchType(
        CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff *const this)
{
  return 39;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff::GetAuraSearchFlags  (line 1198, @0x0000000002ab9370, libserver.so)
int __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff::GetAuraSearchFlags(
        CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff *const this)
{
  return 80;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff::GetAuraRadius  (line 1199, @0x0000000002ab9380, libserver.so)
int __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff::GetAuraRadius(
        CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff *const this)
{
  return this->radius;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff::GetAuraDuration  (line 1201, @0x0000000002ab9390, libserver.so)
float __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff::GetAuraDuration(
        CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff *const this)
{
  return 0.1;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff::OnCreated  (line 1210, @0x0000000002aa9800, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff::OnCreated(
        CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff::OnDestroy  (line 1217, @0x0000000002a7a660, libserver.so)
// calls: CDOTA_Buff::GetParent, UTIL_Remove
void __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff::OnDestroy(
        CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  UTIL_Remove(Parent);
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff::GetAuraEntityReject  (line 1224, @0x0000000002a79b90, libserver.so)
// calls: CDOTA_Buff::GetCaster
bool __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff::GetAuraEntityReject(
        CDOTA_Modifier_FacelessVoid_Chronosphere_SelfBuff *const this,
        CDOTA_BaseNPC *pNPC)
{
  int v4; // ebx
  CDOTA_BaseNPC *Caster; // rax
  bool result; // al

  result = 0;
  if ( CDOTA_Buff::GetCaster(this) != pNPC )
  {
    v4 = (*(pNPC->_vptr_IHandleEntity + 414))(pNPC);
    Caster = CDOTA_Buff::GetCaster(this);
    if ( v4 != (*(Caster->_vptr_IHandleEntity + 414))(Caster) )
      return 1;
  }
  return result;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_Speed::~CDOTA_Modifier_FacelessVoid_Chronosphere_Speed  (line 1240, @0x0000000002ac17a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_Speed::~CDOTA_Modifier_FacelessVoid_Chronosphere_Speed(
        CDOTA_Modifier_FacelessVoid_Chronosphere_Speed *const this)
{
  this->_vptr_CDOTA_Buff = &off_43FBB90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_Speed::~CDOTA_Modifier_FacelessVoid_Chronosphere_Speed  (line 1240, @0x0000000002ac17c0, libserver.so)  // inlines: ~CDOTA_Modifier_FacelessVoid_Chronosphere_Speed
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_Speed::~CDOTA_Modifier_FacelessVoid_Chronosphere_Speed(
        CDOTA_Modifier_FacelessVoid_Chronosphere_Speed *const this)
{
  this->_vptr_CDOTA_Buff = &off_43FBB90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_Speed::IsHidden  (line 1246, @0x0000000002ab93a0, libserver.so)
bool __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_Speed::IsHidden(
        CDOTA_Modifier_FacelessVoid_Chronosphere_Speed *const this)
{
  return 1;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_Speed::IsPurgable  (line 1247, @0x0000000002ab93b0, libserver.so)
bool __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_Speed::IsPurgable(
        CDOTA_Modifier_FacelessVoid_Chronosphere_Speed *const this)
{
  return 0;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_Speed::GetEffectName  (line 1252, @0x0000000002ab93c0, libserver.so)
// strings: "particles/units/heroes/hero_faceless_void/faceless_void_chrono_speed.vpcf"
const char *__fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_Speed::GetEffectName(
        CDOTA_Modifier_FacelessVoid_Chronosphere_Speed *const this)
{
  return "particles/units/heroes/hero_faceless_void/faceless_void_chrono_speed.vpcf";
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_Speed::OnCreated  (line 1265, @0x0000000002aa9e00, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_Speed::OnCreated(
        CDOTA_Modifier_FacelessVoid_Chronosphere_Speed *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_attack_speed", -1, 0);
  else
    this->bonus_attack_speed = 0;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_Speed::DeclareFunctions  (line 1272, @0x0000000002a77be0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_Speed::DeclareFunctions(
        CDOTA_Modifier_FacelessVoid_Chronosphere_Speed *const this)
{
  this->m_Functions[18].__pfn = (&stru_10 + 697);
  this->m_Functions[18].__delta = 0;
  this->m_Functions[21].__pfn = (&stru_10 + 705);
  this->m_Functions[21].__delta = 0;
  this->m_Functions[24].__pfn = (&stru_10 + 713);
  this->m_Functions[24].__delta = 0;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_Speed::GetModifierAttackSpeedBonus_Constant  (line 1281, @0x0000000002a77c30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_Speed::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_FacelessVoid_Chronosphere_Speed *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_Speed::GetModifierMoveSpeed_Absolute  (line 1288, @0x0000000002a77c50, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_Speed::GetModifierMoveSpeed_Absolute(
        CDOTA_Modifier_FacelessVoid_Chronosphere_Speed *const this,
        const CModifierParams *const params)
{
  return 0x447A000000000001uLL;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_Speed::GetModifierMoveSpeed_Max  (line 1295, @0x0000000002a77c70, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_Speed::GetModifierMoveSpeed_Max(
        CDOTA_Modifier_FacelessVoid_Chronosphere_Speed *const this,
        const CModifierParams *const params)
{
  return 0x461C400000000001uLL;
}


// CDOTA_Modifier_FacelessVoid_Chronosphere_Speed::CheckState  (line 1302, @0x0000000002a77c90, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_FacelessVoid_Chronosphere_Speed::CheckState(
        CDOTA_Modifier_FacelessVoid_Chronosphere_Speed *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x2000000uLL;
  buffState->m_nDisabledStateMask &= ~0x2000000uLL;
}


