// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_techies.cpp:42
class CDOTA_Unit_Hero_Techies : public CDOTA_BaseNPC_Hero {
public:

private:

	bool m_bLastDeathFromSuicide;  // +0x16ec
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
	CDOTA_Unit_Hero_Techies(CDOTA_Unit_Hero_Techies &);
	CDOTA_Unit_Hero_Techies(CDOTA_Unit_Hero_Techies &);
	CDOTA_Unit_Hero_Techies();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void OnAssetModifiersUpdated();
	virtual void InitialSpawn();
	virtual int GetRangedProjectileAttachment(CDOTA_AttackRecord *);
	virtual void Event_Killed(const CTakeDamageInfo &);
	virtual void ModifyOrAppendCriteria(CResponseCriteriaSet &);
	virtual ~CDOTA_Unit_Hero_Techies();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[6] Precache
	// vtable[482] OnAssetModifiersUpdated
	// vtable[392] InitialSpawn
	// vtable[395] GetRangedProjectileAttachment
	// vtable[92] Event_Killed
	// vtable[159] ModifyOrAppendCriteria
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_techies.cpp:66
class C_CDOTA_Unit_Hero_Techies_MapInstall {
	C_CDOTA_Unit_Hero_Techies_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_techies.cpp:124
class CDOTA_Modifier_Techies_Suicide_RespawnTime : public CDOTA_Buff {
public:

private:

	int m_nSuicideKillCount;  // +0xba8
	CDOTA_Modifier_Techies_Suicide_RespawnTime();
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	ModifierVariant_t GetModifierPercentageRespawnTime(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	virtual bool IsPermanent();
	virtual bool IsHidden();
	int GetKillCount();
	virtual ~CDOTA_Modifier_Techies_Suicide_RespawnTime();

	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[23] IsPermanent
	// vtable[11] IsHidden
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_techies.cpp:202
class CDOTA_Ability_Techies_LandMines : public CDOTABaseAbility {
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
	CDOTA_Ability_Techies_LandMines(CDOTA_Ability_Techies_LandMines &);
	CDOTA_Ability_Techies_LandMines(CDOTA_Ability_Techies_LandMines &);
	CDOTA_Ability_Techies_LandMines();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual void OnSpellStart();
	virtual int CastFilterResult(const Vector &);
	virtual const char * GetCustomCastError(const Vector &);
	virtual ~CDOTA_Ability_Techies_LandMines();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[266] OnSpellStart
	// vtable[258] CastFilterResult
	// vtable[259] GetCustomCastError
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_techies.cpp:227
class C_CDOTA_Ability_Techies_LandMines_MapInstall {
	C_CDOTA_Ability_Techies_LandMines_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_techies.cpp:303
class CDOTA_Modifier_Techies_LandMine : public CDOTA_Modifier_Invisible {
public:

private:

	int radius;  // +0xbb4
	float proximity_threshold;  // +0xbb8
	float damage;  // +0xbbc
	float activation_delay;  // +0xbc0
	bool bActivated;  // +0xbc4

	CDOTA_Modifier_Techies_LandMine();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void DestroyMine();
	virtual void OnIntervalThink();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	virtual ~CDOTA_Modifier_Techies_LandMine();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[94] DestroyMine
	// vtable[56] OnIntervalThink
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// sizeof = 3040
};

// src/game/shared/dota/units/dota_unit_hero_techies.cpp:485
class CDOTA_Modifier_Techies_LandMine_Burn : public CDOTA_Buff {
public:

private:

	int burn_damage;  // +0xba8
	CDOTA_Modifier_Techies_LandMine_Burn();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual ~CDOTA_Modifier_Techies_LandMine_Burn();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_techies.cpp:530
class CDOTA_Ability_Techies_StasisTrap : public CDOTABaseAbility {
public:

private:

	int m_nFXIndex;  // +0x390
	EHANDLE m_hTrap;  // +0x394
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
	CDOTA_Ability_Techies_StasisTrap(CDOTA_Ability_Techies_StasisTrap &);
	CDOTA_Ability_Techies_StasisTrap(CDOTA_Ability_Techies_StasisTrap &);
	CDOTA_Ability_Techies_StasisTrap();
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
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual ~CDOTA_Ability_Techies_StasisTrap();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[304] GetAssociatedSecondaryAbilities
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_techies.cpp:558
class C_CDOTA_Ability_Techies_StasisTrap_MapInstall {
	C_CDOTA_Ability_Techies_StasisTrap_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_techies.cpp:658
class CDOTA_Modifier_Techies_StasisTrap : public CDOTA_Modifier_Invisible {
public:

private:

	int activation_radius;  // +0xbb4
	int stun_radius;  // +0xbb8
	float stun_duration;  // +0xbbc
	float explode_delay;  // +0xbc0
	float activation_time;  // +0xbc4
	bool m_bActivated;  // +0xbc8
	bool m_bTriggered;  // +0xbc9
	CDOTA_Modifier_Techies_StasisTrap();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual void CheckState(CDOTABuffState &);
	void TriggerStasisTrap();
	virtual ~CDOTA_Modifier_Techies_StasisTrap();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[5] CheckState
	// sizeof = 3024
};

// src/game/shared/dota/units/dota_unit_hero_techies.cpp:849
class CDOTA_Modifier_Techies_StasisTrap_Stunned : public CDOTA_Modifier_Rooted {
public:

	CDOTA_Modifier_Techies_StasisTrap_Stunned();
	virtual bool IsDebuff();
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Techies_StasisTrap_Stunned();

	// vtable[12] IsDebuff
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_techies.cpp:885
class CDOTA_Ability_Techies_Suicide : public CDOTABaseAbility {
public:

private:

	uint32 m_unSuicideKills;  // +0x390
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
	CDOTA_Ability_Techies_Suicide(CDOTA_Ability_Techies_Suicide &);
	CDOTA_Ability_Techies_Suicide(CDOTA_Ability_Techies_Suicide &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Ability_Techies_Suicide();
	virtual void OnSpellStart();
	virtual bool OnAbilityPhaseStart();
	virtual void OnAbilityPhaseInterrupted();
	void BlowUp();
	virtual ~CDOTA_Ability_Techies_Suicide();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_techies.cpp:913
class C_CDOTA_Ability_Techies_Suicide_MapInstall {
	C_CDOTA_Ability_Techies_Suicide_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_techies.cpp:1107
class CDOTA_Modifier_Techies_Suicide_Leap_Animation : public CDOTA_Modifier_Disarmed {
public:

	CDOTA_Modifier_Techies_Suicide_Leap_Animation();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual bool IsPermanent();
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual ~CDOTA_Modifier_Techies_Suicide_Leap_Animation();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[23] IsPermanent
	// vtable[65] DeclareFunctions
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_techies.cpp:1151
class CDOTA_Modifier_Techies_Suicide_Leap : public CDOTA_Buff, public CHorizontalMotionController, public CVerticalMotionController {
public:

private:

	float m_flPredictedTotalTime;  // +0xbd0
	float m_flCurrentTimeHoriz;  // +0xbe0
	float m_flCurrentTimeVert;  // +0xbe4
	bool m_bHorizontalMotionInterrupted;  // +0xbe8
	bool m_bDamageApplied;  // +0xbe9
	bool m_bTargetTeleported;  // +0xbea

	float m_flInitialVelocityZ;  // +0xc04
	CDOTA_Modifier_Techies_Suicide_Leap();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsHidden();
	virtual bool IsStunDebuff();
	virtual bool IsPurgable();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void UpdateVerticalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual void OnVerticalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsVerticalMotionValidToApply();
	virtual bool IsMotionController();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	virtual bool RemoveOnDeath();
	void DisableMotionControl();
	virtual ~CDOTA_Modifier_Techies_Suicide_Leap();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[5] CheckState
	// vtable[11] IsHidden
	// vtable[16] IsStunDebuff
	// vtable[14] IsPurgable
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] UpdateVerticalMotion
	// vtable[91] OnHorizontalMotionInterrupted
	// vtable[92] OnVerticalMotionInterrupted
	// vtable[93] IsHorizontalMotionValidToApply
	// vtable[94] IsVerticalMotionValidToApply
	// vtable[21] IsMotionController
	// vtable[54] RemoveOnDeath
	// sizeof = 3080
};

// src/game/shared/dota/units/dota_unit_hero_techies.cpp:1421
class CDOTA_NPC_TechiesMines : public CDOTA_BaseNPC_Additive {
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
	CDOTA_NPC_TechiesMines(CDOTA_NPC_TechiesMines &);
	CDOTA_NPC_TechiesMines(CDOTA_NPC_TechiesMines &);
	CDOTA_NPC_TechiesMines();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool CanAcceptTargetToAttack(CDOTA_BaseNPC *);
	virtual bool CanBeSelected();
	virtual bool CanBeAutoAttacked();
	virtual int ShouldTransmit(const CGameCheckTransmitInfo *);
	virtual void OnDying();
	virtual ~CDOTA_NPC_TechiesMines();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[391] CanAcceptTargetToAttack
	// vtable[490] CanBeSelected
	// vtable[399] CanBeAutoAttacked
	// vtable[65] ShouldTransmit
	// vtable[469] OnDying
	// sizeof = 4504
};

// src/game/shared/dota/units/dota_unit_hero_techies.cpp:1516
class C_CDOTA_NPC_TechiesMines_MapInstall {
	C_CDOTA_NPC_TechiesMines_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_techies.cpp:1522
class CDOTA_Ability_Techies_RemoteMines : public CDOTABaseAbility {
public:

private:

	int m_nFXIndex;  // +0x390
	EHANDLE m_hRMine;  // +0x394
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
	CDOTA_Ability_Techies_RemoteMines(CDOTA_Ability_Techies_RemoteMines &);
	CDOTA_Ability_Techies_RemoteMines(CDOTA_Ability_Techies_RemoteMines &);
	CDOTA_Ability_Techies_RemoteMines();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual bool OnAbilityPhaseStart();
	virtual void OnAbilityPhaseInterrupted();
	virtual void OnUpgrade();
	virtual ~CDOTA_Ability_Techies_RemoteMines();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[226] GetCastRange
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[268] OnUpgrade
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_techies.cpp:1541
class C_CDOTA_Ability_Techies_RemoteMines_MapInstall {
	C_CDOTA_Ability_Techies_RemoteMines_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_techies.cpp:1689
class CDOTA_Modifier_Techies_DeployRemoteMine : public CDOTA_Buff {
public:

	CDOTA_Modifier_Techies_DeployRemoteMine();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Techies_DeployRemoteMine();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_techies.cpp:1744
class CDOTA_Modifier_Techies_RemoteMine : public CDOTA_Modifier_Invisible {
public:

private:

	int radius;  // +0xbb4
	int damage;  // +0xbb8
	int radius_scepter;  // +0xbbc
	int damage_scepter;  // +0xbc0
	int vision_radius;  // +0xbc4
	float vision_duration;  // +0xbc8
	int model_scale;  // +0xbcc
	bool bExploding;  // +0xbd0
	CDOTA_Modifier_Techies_RemoteMine();
	virtual bool IsHidden();
	virtual const char * GetEffectName();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	void Activate();
	virtual void DeclareFunctions();
	ModifierVariant_t GetUnitLifetimeFraction(const CModifierParams &);
	virtual ModifierVariant_t OnAbilityExecuted(const CModifierParams &);
	ModifierVariant_t ModelScale(const CModifierParams &);
	virtual void OnIntervalThink();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Techies_RemoteMine();

	// vtable[11] IsHidden
	// vtable[67] GetEffectName
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[90] OnAbilityExecuted
	// vtable[56] OnIntervalThink
	// vtable[5] CheckState
	// sizeof = 3032
};

// src/game/shared/dota/units/dota_unit_hero_techies.cpp:1944
class CDOTA_Ability_Techies_FocusedDetonate : public CDOTABaseAbility {
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
	CDOTA_Ability_Techies_FocusedDetonate(CDOTA_Ability_Techies_FocusedDetonate &);
	CDOTA_Ability_Techies_FocusedDetonate(CDOTA_Ability_Techies_FocusedDetonate &);
	CDOTA_Ability_Techies_FocusedDetonate();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual const char * GetAssociatedPrimaryAbilities();
	virtual bool IsStealable();
	virtual bool ProcsMagicStick();
	virtual ~CDOTA_Ability_Techies_FocusedDetonate();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[303] GetAssociatedPrimaryAbilities
	// vtable[305] IsStealable
	// vtable[239] ProcsMagicStick
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_techies.cpp:1966
class C_CDOTA_Ability_Techies_FocusedDetonate_MapInstall {
	C_CDOTA_Ability_Techies_FocusedDetonate_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_techies.cpp:2008
class CDOTA_Ability_Techies_RemoteMines_SelfDetonate : public CDOTABaseAbility {
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
	CDOTA_Ability_Techies_RemoteMines_SelfDetonate(CDOTA_Ability_Techies_RemoteMines_SelfDetonate &);
	CDOTA_Ability_Techies_RemoteMines_SelfDetonate(CDOTA_Ability_Techies_RemoteMines_SelfDetonate &);
	CDOTA_Ability_Techies_RemoteMines_SelfDetonate();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual int CastFilterResult();
	virtual bool ProcsMagicStick();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual ~CDOTA_Ability_Techies_RemoteMines_SelfDetonate();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[260] CastFilterResult
	// vtable[239] ProcsMagicStick
	// vtable[304] GetAssociatedSecondaryAbilities
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_techies.cpp:2020
class C_CDOTA_Ability_Techies_RemoteMines_SelfDetonate_MapInstall {
	C_CDOTA_Ability_Techies_RemoteMines_SelfDetonate_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_techies.cpp:2088
class CDOTA_Ability_Techies_Minefield_Sign : public CDOTABaseAbility {
public:

private:

	int m_nFXIndex;  // +0x390
	int aura_radius;  // +0x394
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
	CDOTA_Ability_Techies_Minefield_Sign(CDOTA_Ability_Techies_Minefield_Sign &);
	CDOTA_Ability_Techies_Minefield_Sign(CDOTA_Ability_Techies_Minefield_Sign &);
	CDOTA_Ability_Techies_Minefield_Sign();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual bool IsStealable();
	virtual bool ProcsMagicStick();
	virtual ~CDOTA_Ability_Techies_Minefield_Sign();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[305] IsStealable
	// vtable[239] ProcsMagicStick
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_techies.cpp:2115
class C_CDOTA_Ability_Techies_Minefield_Sign_MapInstall {
	C_CDOTA_Ability_Techies_Minefield_Sign_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_techies.cpp:2193
class CDOTA_Modifier_Techies_Minefield_Sign_Thinker : public CDOTA_Buff {
public:

private:

	int aura_radius;  // +0xba8
	CDOTA_Modifier_Techies_Minefield_Sign_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsHidden();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraRadius();
	virtual bool GetAuraEntityReject(CDOTA_BaseNPC *);
	virtual ~CDOTA_Modifier_Techies_Minefield_Sign_Thinker();

	// vtable[57] OnCreated
	// vtable[5] CheckState
	// vtable[11] IsHidden
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[41] GetAuraRadius
	// vtable[42] GetAuraEntityReject
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_techies.cpp:2251
class CDOTA_Modifier_Techies_Minefield_Sign_Aura : public CDOTA_Modifier_Invisible {
public:

	CDOTA_Modifier_Techies_Minefield_Sign_Aura();
	virtual int StatusEffectPriority();
	virtual int GetPriority();
	virtual bool IsHidden();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Techies_Minefield_Sign_Aura();

	// vtable[71] StatusEffectPriority
	// vtable[6] GetPriority
	// vtable[11] IsHidden
	// vtable[5] CheckState
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_techies.cpp:2273
class CDOTA_NPC_Techies_Minefield_Sign : public CDOTA_BaseNPC_Additive {
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
	CDOTA_NPC_Techies_Minefield_Sign(CDOTA_NPC_Techies_Minefield_Sign &);
	CDOTA_NPC_Techies_Minefield_Sign(CDOTA_NPC_Techies_Minefield_Sign &);
	CDOTA_NPC_Techies_Minefield_Sign();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual int ShouldTransmit(const CGameCheckTransmitInfo *);
	virtual ~CDOTA_NPC_Techies_Minefield_Sign();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[65] ShouldTransmit
	// sizeof = 4504
};

// src/game/shared/dota/units/dota_unit_hero_techies.cpp:2293
class C_CDOTA_NPC_Techies_Minefield_Sign_MapInstall {
	C_CDOTA_NPC_Techies_Minefield_Sign_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_techies.cpp:2302
class CDOTA_Modifier_Techies_Arcana_DamageListener : public CDOTA_Buff {
public:

	CDOTA_Modifier_Techies_Arcana_DamageListener();
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Techies_Arcana_DamageListener();

	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// vtable[89] OnTakeDamage
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Techies::~CDOTA_Unit_Hero_Techies  (line 42, @0x0000000002d2d1a0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Techies::~CDOTA_Unit_Hero_Techies(CDOTA_Unit_Hero_Techies *const this)
{
  this->_vptr_IHandleEntity = &off_4630A70;
  this->_vptr_INextBotEventResponder = &off_4631A50;
  this->_vptr_CObstructionObject = &off_4631D80;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Techies::~CDOTA_Unit_Hero_Techies  (line 42, @0x0000000002d2d1e0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Techies
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Techies::~CDOTA_Unit_Hero_Techies(CDOTA_Unit_Hero_Techies *const this)
{
  this->_vptr_IHandleEntity = &off_4630A70;
  this->_vptr_INextBotEventResponder = &off_4631A50;
  this->_vptr_CObstructionObject = &off_4631D80;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Techies::Schema_DynamicBinding  (line 44, @0x0000000002d1e5a0, libserver.so)
// globals: CDOTA_Unit_Hero_Techies::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Techies::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Techies *const this)
{
  return CDOTA_Unit_Hero_Techies::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Techies::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 44, @0x0000000002d1e5d0, libserver.so)
// globals: CDOTA_Unit_Hero_Techies::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Techies::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Techies::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Techies::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Techies::CEntityInstanceEntityClass::DestructInstance  (line 44, @0x0000000002d1e5e0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Techies>
void __fastcall CDOTA_Unit_Hero_Techies::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Techies::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Techies::CEntityInstanceEntityClass::FreeInstance  (line 44, @0x0000000002d1e600, libserver.so)
void __fastcall CDOTA_Unit_Hero_Techies::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Techies::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Techies::CEntityInstanceEntityClass::CanAllocate  (line 44, @0x0000000002d1e620, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Techies::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Techies::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Techies::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 44, @0x0000000002d1e630, libserver.so)
// globals: CDOTA_Unit_Hero_Techies::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Techies::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Techies::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Techies::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Techies::CEntityInstanceEntityClass::AllocateInstance  (line 44, @0x0000000002d249d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Techies::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Techies::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Techies::CEntityInstanceEntityClass::ConstructInstance  (line 44, @0x0000000002d28880, libserver.so)  // inlines: CDOTA_Unit_Hero_Techies, Construct<CDOTA_Unit_Hero_Techies>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Techies::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Techies::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_4630A70;
    *(p + 236) = &off_4631A50;
    *(p + 257) = &off_4631D80;
  }
  return p;
}


// CDOTA_Unit_Hero_Techies::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 44, @0x0000000002d353d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Techies::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Techies::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Techies::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 44, @0x0000000002d358d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Techies::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Techies::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Techies::GetEntityClassInternal  (line 44, @0x0000000002d4d8a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "npc_dota_hero_techies", "CDOTA_Unit_Hero_Techies"
// globals: `guard variable for'CDOTA_Unit_Hero_Techies::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TechiesClass, CDOTA_Unit_Hero_Techies::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TechiesClass, __dso_handle, CDOTA_Unit_Hero_Techies::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Techies::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TechiesClassInfo, CDOTA_Unit_Hero_Techies::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TechiesClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Techies::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Techies::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TechiesClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Techies::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TechiesClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Techies::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TechiesClass);
    CDOTA_Unit_Hero_Techies::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TechiesClass._vptr_CEntityClass = off_46309F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Techies::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TechiesClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Techies::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Techies::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TechiesClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_TechiesClass != 0 )
    return &CDOTA_Unit_Hero_Techies::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TechiesClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Techies::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TechiesClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Techies::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TechiesClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Techies::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TechiesClassInfo,
      "CDOTA_Unit_Hero_Techies",
      "npc_dota_hero_techies",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Techies::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TechiesClassInfo);
  }
  CDOTA_Unit_Hero_Techies::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TechiesClass.m_pClassInfo = &CDOTA_Unit_Hero_Techies::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TechiesClassInfo;
  CDOTA_Unit_Hero_Techies::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TechiesClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Techies::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TechiesClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_TechiesClass = &CDOTA_Unit_Hero_Techies::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TechiesClass;
  CDOTA_Unit_Hero_Techies::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_TechiesClassInfo.m_pClass = &CDOTA_Unit_Hero_Techies::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TechiesClass;
  CDOTA_Unit_Hero_Techies::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TechiesClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_TechiesClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Techies::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_TechiesClass;
}


// CDOTA_Unit_Hero_Techies::YouForgotToImplementOrDeclareServerClass  (line 66, @0x0000000002cc94d0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Techies::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Techies *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Techies::GetServerClass  (line 66, @0x0000000002cdeab0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Techies::GetServerClass(CDOTA_Unit_Hero_Techies *const this)
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


// CDOTA_Unit_Hero_Techies::GetRangedProjectileAttachment  (line 77, @0x0000000002ccb790, libserver.so)
// calls: CDOTA_BaseNPC::GetRangedProjectileAttachment
int __fastcall CDOTA_Unit_Hero_Techies::GetRangedProjectileAttachment(
        CDOTA_Unit_Hero_Techies *const this,
        CDOTA_AttackRecord *pRecord)
{
  int RangedProjectileAttachment; // eax
  int v4; // edx

  RangedProjectileAttachment = CDOTA_BaseNPC::GetRangedProjectileAttachment(this, pRecord);
  v4 = 5;
  if ( this->m_nArcanaLevel <= 0 )
    return RangedProjectileAttachment;
  return v4;
}


// CDOTA_Unit_Hero_Techies::InitialSpawn  (line 89, @0x0000000002cd08a0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::InitialSpawn, CDOTA_BaseNPC::GetAbilityByIndex, CDOTABaseAbility::UpgradeAbility
void __fastcall CDOTA_Unit_Hero_Techies::InitialSpawn(CDOTA_Unit_Hero_Techies *const this)
{
  CDOTABaseAbility *AbilityByIndex; // rax

  CDOTA_BaseNPC_Hero::InitialSpawn(this);
  AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(this, 4);
  CDOTABaseAbility::UpgradeAbility(AbilityByIndex, 1);
}


// CDOTA_Unit_Hero_Techies::Precache  (line 97, @0x0000000002cd0950, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Precache, CBaseEntity::PrecacheModel, PrecacheParticleSystem
// strings: "models/heroes/techies/fx_techiesfx_mine.vmdl", "models/heroes/techies/techies_sign.vmdl", "particles/econ/items/techies/techies_arcana/techies_suicide_kills_arcana.vpcf", "particles/econ/items/techies/techies_arcana/techies_suicide_dud_arcana.vpcf", "particles/units/heroes/hero_earthshaker/earthshaker_totem_cast.vpcf"
void __fastcall CDOTA_Unit_Hero_Techies::Precache(
        CDOTA_Unit_Hero_Techies *const this,
        const CEntityPrecacheContext *pContext)
{
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
  CBaseEntity::PrecacheModel("models/heroes/techies/fx_techiesfx_mine.vmdl", pContext);
  CBaseEntity::PrecacheModel("models/heroes/techies/techies_sign.vmdl", pContext);
  PrecacheParticleSystem("particles/econ/items/techies/techies_arcana/techies_suicide_kills_arcana.vpcf", pContext);
  PrecacheParticleSystem("particles/econ/items/techies/techies_arcana/techies_suicide_dud_arcana.vpcf", pContext);
  PrecacheParticleSystem("particles/units/heroes/hero_earthshaker/earthshaker_totem_cast.vpcf", pContext);
}


// CDOTA_Unit_Hero_Techies::OnAssetModifiersUpdated  (line 108, @0x0000000002cd09c0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::OnAssetModifiersUpdated, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_techies_arcana_damage_listener"
void __fastcall CDOTA_Unit_Hero_Techies::OnAssetModifiersUpdated(CDOTA_Unit_Hero_Techies *const this)
{
  KeyValues kv; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v3; // [rsp+18h] [rbp-18h]

  v3 = __readfsqword(0x28u);
  CDOTA_BaseNPC_Hero::OnAssetModifiersUpdated(this);
  if ( this->m_nArcanaLevel > 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_techies_arcana_damage_listener");
    CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_techies_arcana_damage_listener", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_Techies_Suicide_RespawnTime::~CDOTA_Modifier_Techies_Suicide_RespawnTime  (line 124, @0x0000000002d27af0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Techies_Suicide_RespawnTime::~CDOTA_Modifier_Techies_Suicide_RespawnTime(
        CDOTA_Modifier_Techies_Suicide_RespawnTime *const this)
{
  this->_vptr_CDOTA_Buff = &off_4631E10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Techies_Suicide_RespawnTime::~CDOTA_Modifier_Techies_Suicide_RespawnTime  (line 124, @0x0000000002d27b10, libserver.so)  // inlines: ~CDOTA_Modifier_Techies_Suicide_RespawnTime
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Techies_Suicide_RespawnTime::~CDOTA_Modifier_Techies_Suicide_RespawnTime(
        CDOTA_Modifier_Techies_Suicide_RespawnTime *const this)
{
  this->_vptr_CDOTA_Buff = &off_4631E10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Techies_Suicide_RespawnTime::IsPurgable  (line 129, @0x0000000002d1e640, libserver.so)
bool __fastcall CDOTA_Modifier_Techies_Suicide_RespawnTime::IsPurgable(
        CDOTA_Modifier_Techies_Suicide_RespawnTime *const this)
{
  return 0;
}


// CDOTA_Modifier_Techies_Suicide_RespawnTime::IsPermanent  (line 134, @0x0000000002d1e650, libserver.so)
bool __fastcall CDOTA_Modifier_Techies_Suicide_RespawnTime::IsPermanent(
        CDOTA_Modifier_Techies_Suicide_RespawnTime *const this)
{
  return 1;
}


// CDOTA_Modifier_Techies_Suicide_RespawnTime::IsHidden  (line 135, @0x0000000002d1e660, libserver.so)
bool __fastcall CDOTA_Modifier_Techies_Suicide_RespawnTime::IsHidden(
        CDOTA_Modifier_Techies_Suicide_RespawnTime *const this)
{
  return 1;
}


// CDOTA_Modifier_Techies_Suicide_RespawnTime::GetActivityTranslationModifiers  (line 146, @0x0000000002cc94e0, libserver.so)
// strings: "suicide_squad"
ModifierVariant_t __fastcall CDOTA_Modifier_Techies_Suicide_RespawnTime::GetActivityTranslationModifiers(
        CDOTA_Modifier_Techies_Suicide_RespawnTime *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "suicide_squad";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_Techies_Suicide_RespawnTime::DeclareFunctions  (line 151, @0x0000000002cc9500, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Techies_Suicide_RespawnTime::GetModifierPercentageRespawnTime(CModifierParams const&), CDOTA_Modifier_Techies_Suicide_RespawnTime::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_Techies_Suicide_RespawnTime::DeclareFunctions(
        CDOTA_Modifier_Techies_Suicide_RespawnTime *const this)
{
  this->m_Functions[75].__pfn = CDOTA_Modifier_Techies_Suicide_RespawnTime::GetModifierPercentageRespawnTime;
  this->m_Functions[75].__delta = 0;
  this->m_Functions[155].__delta = 0;
  this->m_Functions[155].__pfn = CDOTA_Modifier_Techies_Suicide_RespawnTime::GetActivityTranslationModifiers;
}


// CDOTA_Modifier_Techies_Suicide_RespawnTime::OnCreated  (line 159, @0x0000000002ccb760, libserver.so)
// calls: KeyValues::GetInt
// strings: "suicide_kill_count"
void __fastcall CDOTA_Modifier_Techies_Suicide_RespawnTime::OnCreated(
        CDOTA_Modifier_Techies_Suicide_RespawnTime *const this,
        KeyValues *pKV)
{
  this->m_nSuicideKillCount = KeyValues::GetInt(pKV, "suicide_kill_count", 1);
}


// CDOTA_Modifier_Techies_Suicide_RespawnTime::GetModifierPercentageRespawnTime  (line 164, @0x0000000002cc9540, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Techies_Suicide_RespawnTime::GetModifierPercentageRespawnTime(
        CDOTA_Modifier_Techies_Suicide_RespawnTime *const this,
        const CModifierParams *const params)
{
  return 1uLL;
}


// CDOTA_Unit_Hero_Techies::Event_Killed  (line 170, @0x0000000002cd0a50, libserver.so)
// calls: CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC_Hero::Event_Killed
// strings: "modifier_techies_suicide_respawn_time"
void __fastcall CDOTA_Unit_Hero_Techies::Event_Killed(
        CDOTA_Unit_Hero_Techies *const this,
        const CTakeDamageInfo *const info)
{
  this->m_bLastDeathFromSuicide = CDOTA_BaseNPC::FindModifierByName(this, "modifier_techies_suicide_respawn_time", 0) != 0;
  CDOTA_BaseNPC_Hero::Event_Killed(this, info);
}


// CDOTA_Unit_Hero_Techies::ModifyOrAppendCriteria  (line 179, @0x0000000002cd0b80, libserver.so)  // inlines: GetActiveConcept
// calls: CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria, CResponseCriteriaSet::AppendCriteria, CDOTA_BaseNPC::FindModifierByName, __dynamic_cast
// strings: "respawnFromSuicide", "modifier_techies_suicide_respawn_time", "suicide_kills"
// globals: `typeinfo for'CDOTA_Modifier_Techies_Suicide_RespawnTime
void __fastcall CDOTA_Unit_Hero_Techies::ModifyOrAppendCriteria(
        CDOTA_Unit_Hero_Techies *const this,
        CResponseCriteriaSet *const criteria)
{
  float v4; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rax
  int m_iActiveConcept; // eax
  CDOTA_Buff *ModifierByName; // rax
  float v8; // xmm2_4

  CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria(this, criteria);
  m_pSpeech = this->m_Speech.m_pSpeech;
  if ( m_pSpeech != 0 )
  {
    m_iActiveConcept = m_pSpeech->m_iActiveConcept;
    if ( m_iActiveConcept == 5 )
    {
      ModifierByName = CDOTA_BaseNPC::FindModifierByName(this, "modifier_techies_suicide_respawn_time", 0);
      if ( ModifierByName != 0
        && __dynamic_cast(
             ModifierByName,
             &`typeinfo for'CDOTA_Buff,
             &`typeinfo for'CDOTA_Modifier_Techies_Suicide_RespawnTime,
             0) != 0 )
      {
        CResponseCriteriaSet::AppendCriteria(criteria, "suicide_kills", 1.0, v8);
      }
    }
    else if ( m_iActiveConcept == 7 )
    {
      CResponseCriteriaSet::AppendCriteria(criteria, "respawnFromSuicide", 1.0, v4);
    }
  }
}


// CDOTA_Ability_Techies_LandMines::~CDOTA_Ability_Techies_LandMines  (line 202, @0x0000000002d2be60, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Techies_LandMines::~CDOTA_Ability_Techies_LandMines(
        CDOTA_Ability_Techies_LandMines *const this)
{
  this->_vptr_IHandleEntity = &off_4632170;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Techies_LandMines::~CDOTA_Ability_Techies_LandMines  (line 202, @0x0000000002d2be80, libserver.so)  // inlines: ~CDOTA_Ability_Techies_LandMines
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Techies_LandMines::~CDOTA_Ability_Techies_LandMines(
        CDOTA_Ability_Techies_LandMines *const this)
{
  this->_vptr_IHandleEntity = &off_4632170;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Techies_LandMines::Schema_DynamicBinding  (line 204, @0x0000000002d1e670, libserver.so)
// globals: CDOTA_Ability_Techies_LandMines::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Techies_LandMines::Schema_DynamicBinding(
        const CDOTA_Ability_Techies_LandMines *const this)
{
  return CDOTA_Ability_Techies_LandMines::s_pSchemaBinding;
}


// CDOTA_Ability_Techies_LandMines::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 204, @0x0000000002d1e680, libserver.so)
// globals: CDOTA_Ability_Techies_LandMines::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Techies_LandMines::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Techies_LandMines::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Techies_LandMines::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Techies_LandMines::CEntityInstanceEntityClass::DestructInstance  (line 204, @0x0000000002d1e690, libserver.so)  // inlines: Destruct<CDOTA_Ability_Techies_LandMines>
void __fastcall CDOTA_Ability_Techies_LandMines::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Techies_LandMines::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Techies_LandMines::CEntityInstanceEntityClass::FreeInstance  (line 204, @0x0000000002d1e6b0, libserver.so)
void __fastcall CDOTA_Ability_Techies_LandMines::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Techies_LandMines::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Techies_LandMines::CEntityInstanceEntityClass::CanAllocate  (line 204, @0x0000000002d1e6d0, libserver.so)
bool __fastcall CDOTA_Ability_Techies_LandMines::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Techies_LandMines::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Techies_LandMines::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 204, @0x0000000002d1e6e0, libserver.so)
// globals: CDOTA_Ability_Techies_LandMines::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Techies_LandMines::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Techies_LandMines::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Techies_LandMines::s_pSchemaBinding;
}


// CDOTA_Ability_Techies_LandMines::CEntityInstanceEntityClass::AllocateInstance  (line 204, @0x0000000002d24a10, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Techies_LandMines::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Techies_LandMines::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Techies_LandMines::CEntityInstanceEntityClass::ConstructInstance  (line 204, @0x0000000002d291c0, libserver.so)  // inlines: CDOTA_Ability_Techies_LandMines, Construct<CDOTA_Ability_Techies_LandMines>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Techies_LandMines::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Techies_LandMines::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4632170;
  }
  return p;
}


// CDOTA_Ability_Techies_LandMines::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 204, @0x0000000002d34310, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Techies_LandMines::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Techies_LandMines::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Techies_LandMines::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 204, @0x0000000002d34330, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Techies_LandMines::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Techies_LandMines::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Techies_LandMines::GetEntityClassInternal  (line 204, @0x0000000002d48b30, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "techies_land_mines", "CDOTA_Ability_Techies_LandMines"
// globals: `guard variable for'CDOTA_Ability_Techies_LandMines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_LandMinesClass, CDOTA_Ability_Techies_LandMines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_LandMinesClass, __dso_handle, CDOTA_Ability_Techies_LandMines::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Techies_LandMines::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_LandMinesClassInfo, CDOTA_Ability_Techies_LandMines::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_LandMinesClassInfo
CEntityClass *__cdecl CDOTA_Ability_Techies_LandMines::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Techies_LandMines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_LandMinesClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Techies_LandMines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_LandMinesClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Techies_LandMines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_LandMinesClass);
    CDOTA_Ability_Techies_LandMines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_LandMinesClass._vptr_CEntityClass = off_46320F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Techies_LandMines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_LandMinesClass);
    __cxa_atexit(
      CDOTA_Ability_Techies_LandMines::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Techies_LandMines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_LandMinesClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Techies_LandMinesClass != 0 )
    return &CDOTA_Ability_Techies_LandMines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_LandMinesClass;
  if ( `guard variable for'CDOTA_Ability_Techies_LandMines::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_LandMinesClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Techies_LandMines::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_LandMinesClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Techies_LandMines::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_LandMinesClassInfo,
      "CDOTA_Ability_Techies_LandMines",
      "techies_land_mines",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Techies_LandMines::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_LandMinesClassInfo);
  }
  CDOTA_Ability_Techies_LandMines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_LandMinesClass.m_pClassInfo = &CDOTA_Ability_Techies_LandMines::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_LandMinesClassInfo;
  CDOTA_Ability_Techies_LandMines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_LandMinesClass.m_pBaseClassInfo = CDOTA_Ability_Techies_LandMines::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_LandMinesClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Techies_LandMinesClass = &CDOTA_Ability_Techies_LandMines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_LandMinesClass;
  CDOTA_Ability_Techies_LandMines::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_LandMinesClassInfo.m_pClass = &CDOTA_Ability_Techies_LandMines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_LandMinesClass;
  CDOTA_Ability_Techies_LandMines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_LandMinesClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Techies_LandMinesClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Techies_LandMines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_LandMinesClass;
}


// CDOTA_Ability_Techies_LandMines::GetAssociatedSecondaryAbilities  (line 208, @0x0000000002d1e6f0, libserver.so)
// strings: "techies_minefield_sign"
const char *__fastcall CDOTA_Ability_Techies_LandMines::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Techies_LandMines *const this)
{
  return "techies_minefield_sign";
}


// CDOTA_Ability_Techies_LandMines::YouForgotToImplementOrDeclareServerClass  (line 227, @0x0000000002cc9550, libserver.so)
int __fastcall CDOTA_Ability_Techies_LandMines::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Techies_LandMines *const this)
{
  return 0;
}


// CDOTA_Ability_Techies_LandMines::GetServerClass  (line 227, @0x0000000002cde930, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Techies_LandMines::GetServerClass(CDOTA_Ability_Techies_LandMines *const this)
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


// CDOTA_Ability_Techies_LandMines::CastFilterResult  (line 236, @0x0000000002d05370, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FStrEq, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, GetUnitName, IndexToIdentity, IsValid, LookupEntity, Purge, String, ToCStr, ToDOTABaseNPC, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "npc_dota_techies_land_mine"
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Ability_Techies_LandMines::CastFilterResult(
        CDOTA_Ability_Techies_LandMines *const this,
        const Vector *const vLocation)
{
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_BaseNPC *v5; // rax
  CHandle<CBaseEntity> *m_pMemory; // rax
  CEntityIdentity *v7; // r8
  CEntityIdentity *v8; // r8
  CEntityInstance *m_pInstance; // rdx
  const char *m_pAsString; // rdi
  int v11; // r12d
  float flRadius; // [rsp+1Ch] [rbp-44h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+20h] [rbp-40h] BYREF

  hEntities.m_Size = 0;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  flRadius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v5->m_iTeamNum.m_Value, vLocation, Caster, flRadius, &hEntities, 1, 32, 0, 0, 0);
  if ( hEntities.m_Size <= 0 )
  {
LABEL_14:
    v11 = 0;
  }
  else
  {
    m_pMemory = hEntities.m_Memory.m_pMemory;
    while ( 1 )
    {
      if ( m_pMemory->m_Index + 2 > 1 )
      {
        v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
        if ( v7 != 0 )
        {
          v8 = &v7[m_pMemory->m_Index & 0x1FF];
          if ( v8 != 0 && m_pMemory->m_Index == v8->m_EHandle.m_Index )
          {
            m_pInstance = v8->m_pInstance;
            if ( v8->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
            {
              m_pAsString = m_pInstance[70].m_iszPrivateVScripts.u.m_pAsString;
              if ( m_pAsString != 0
                && (m_pAsString == "npc_dota_techies_land_mine" || strcmp("npc_dota_techies_land_mine", m_pAsString) == 0) )
              {
                break;
              }
            }
          }
        }
      }
      if ( ++m_pMemory == &hEntities.m_Memory.m_pMemory[hEntities.m_Size - 1 + 1] )
        goto LABEL_14;
    }
    v11 = 23;
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEntities);
  if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
    return v11;
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
  if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0 )
    return v11;
  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
  return v11;
}


// CDOTA_Ability_Techies_LandMines::GetCustomCastError  (line 259, @0x0000000002cc9560, libserver.so)
// strings: "#dota_hud_error_cant_place_near_mine"
const char *__fastcall CDOTA_Ability_Techies_LandMines::GetCustomCastError(
        CDOTA_Ability_Techies_LandMines *const this,
        const Vector *const vLocation)
{
  return "#dota_hud_error_cant_place_near_mine";
}


// CDOTA_Ability_Techies_LandMines::OnSpellStart  (line 266, @0x0000000002cd0c60, libserver.so)  // inlines: DOTAGameRules, GetGameTime, GetTeamNumber, SetBlockCreepSpawn
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, DOTA_Character_ScriptSpawn_Synchronous, CDOTAPlayer::SetLastOrderTime, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::SetControllableByPlayer, CBaseEntity::GetAbsAngles, CBaseEntity::SetAbsAngles, DOTA_EmitSoundLocation, KeyValues::~KeyValues (14 total)
// strings: "npc_dota_techies_land_mine", "modifier_techies_land_mine", "fadetime", "Hero_Techies.LandMine.Plant"
void __fastcall CDOTA_Ability_Techies_LandMines::OnSpellStart(CDOTA_Ability_Techies_LandMines *const this)
{
  CDOTA_BaseNPC *Caster; // r13
  int m_Value; // r12d
  CDOTA_BaseNPC *v4; // r12
  CDOTA_BaseNPC *v5; // rax
  CDOTAPlayer *v6; // rax
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  CDOTA_BaseNPC *v10; // rax
  void (__fastcall *v11)(CDOTA_BaseNPC *, _QWORD); // r14
  CDOTA_BaseNPC *v12; // rax
  void (__fastcall *v13)(CDOTA_BaseNPC *, CDOTA_BaseNPC *); // r14
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  int v16; // eax
  const QAngle *AbsAngles; // rax
  QAngle facingAngle; // [rsp+0h] [rbp-70h] BYREF
  Vector vOrigin; // [rsp+10h] [rbp-60h] BYREF
  Vector CursorPosition; // [rsp+20h] [rbp-50h]
  KeyValues kv; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-28h]

  v22 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  v4 = DOTA_Character_ScriptSpawn_Synchronous("npc_dota_techies_land_mine", m_Value, Caster, 0, 0, CursorPosition);
  if ( v4 != 0 )
  {
    v5 = CDOTABaseAbility::GetCaster(this);
    v6 = (*(v5->_vptr_IHandleEntity + 413))(v5);
    if ( v6 != 0 )
    {
      v8 = 0.0;
      if ( g_pGameRules != 0 )
        v8 = *&g_pGameRules[18].m_szQuestName[20];
      CDOTAPlayer::SetLastOrderTime(v6, v8, v7, 1);
    }
    KeyValues::KeyValues(&kv, "modifier_techies_land_mine");
    KeyValues::SetFloat(&kv, "fadetime", v9);
    v10 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v4, v10, this, "modifier_techies_land_mine", &kv, 0);
    v11 = *(v4->_vptr_IHandleEntity + 70);
    v12 = CDOTABaseAbility::GetCaster(this);
    v11(v4, v12->m_iTeamNum.m_Value);
    v13 = *(v4->_vptr_IHandleEntity + 40);
    v14 = CDOTABaseAbility::GetCaster(this);
    v13(v4, v14);
    v15 = CDOTABaseAbility::GetCaster(this);
    v16 = (*(v15->_vptr_IHandleEntity + 414))(v15);
    CDOTA_BaseNPC::SetControllableByPlayer(v4, v16, 0);
    v4->m_bBlocksCreepSpawn = 0;
    AbsAngles = CBaseEntity::GetAbsAngles(v4);
    *&facingAngle.x = *&AbsAngles->x;
    *&AbsAngles = AbsAngles->z;
    facingAngle.y = 0.0;
    LODWORD(facingAngle.z) = AbsAngles;
    CBaseEntity::SetAbsAngles(v4, &facingAngle);
    vOrigin = CDOTABaseAbility::GetCursorPosition(this);
    DOTA_EmitSoundLocation(&vOrigin, "Hero_Techies.LandMine.Plant", 1);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_Techies_LandMine::~CDOTA_Modifier_Techies_LandMine  (line 303, @0x0000000002d274d0, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Techies_LandMine::~CDOTA_Modifier_Techies_LandMine(
        CDOTA_Modifier_Techies_LandMine *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Techies_LandMine::~CDOTA_Modifier_Techies_LandMine  (line 303, @0x0000000002d274f0, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible, ~CDOTA_Modifier_Techies_LandMine
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Techies_LandMine::~CDOTA_Modifier_Techies_LandMine(
        CDOTA_Modifier_Techies_LandMine *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Techies_LandMine::IsHidden  (line 307, @0x0000000002d1e700, libserver.so)
bool __fastcall CDOTA_Modifier_Techies_LandMine::IsHidden(CDOTA_Modifier_Techies_LandMine *const this)
{
  return 1;
}


// CDOTA_Modifier_Techies_LandMine::DeclareFunctions  (line 316, @0x0000000002d1e710, libserver.so)
void __fastcall CDOTA_Modifier_Techies_LandMine::DeclareFunctions(CDOTA_Modifier_Techies_LandMine *const this)
{
  ;
}


// CDOTA_Modifier_Techies_LandMine::OnCreated  (line 334, @0x0000000002d0a6c0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Modifier_Invisible::OnCreated, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "proximity_threshold", "activation_delay"
void __fastcall CDOTA_Modifier_Techies_LandMine::OnCreated(CDOTA_Modifier_Techies_LandMine *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm1_4
  float LevelSpecialValue; // xmm0_4

  CDOTA_Modifier_Invisible::OnCreated(this, pKV);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_7:
    this->proximity_threshold = 0.0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
LABEL_8:
    LevelSpecialValue = 0.0;
    this->activation_delay = 0.0;
    goto LABEL_5;
  }
  this->radius = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_7;
LABEL_3:
  this->proximity_threshold = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "proximity_threshold", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "activation_delay", -1, 0);
  this->activation_delay = LevelSpecialValue;
LABEL_5:
  this->bActivated = 0;
  CDOTA_Buff::StartIntervalThink(this, LevelSpecialValue, v6);
}


// CDOTA_Modifier_Techies_LandMine::CheckState  (line 351, @0x0000000002cd0820, libserver.so)  // inlines: Disable, Enable
// calls: CDOTA_Modifier_Invisible::CheckState
void __fastcall CDOTA_Modifier_Techies_LandMine::CheckState(
        CDOTA_Modifier_Techies_LandMine *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nEnabledStateMask; // rcx
  uint64 m_nDisabledStateMask; // rax
  uint64 v6; // rax
  uint64 v7; // rax

  CDOTA_Modifier_Invisible::CheckState(this, buffState);
  m_nEnabledStateMask = buffState->m_nEnabledStateMask;
  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x402000201uLL;
  v6 = m_nDisabledStateMask & 0xFFFFFFFBFDFFFDFELL;
  buffState->m_nDisabledStateMask = v6;
  if ( this->m_Timer.m_timestamp.m_Value > 0.0 || !this->bActivated )
  {
    LOBYTE(v6) = v6 | 0x80;
    buffState->m_nDisabledStateMask = v6;
    v7 = m_nEnabledStateMask;
    LOBYTE(v7) = m_nEnabledStateMask & 0x7F;
    buffState->m_nEnabledStateMask = v7 | 0x402000201LL;
  }
}


// CDOTA_Modifier_Techies_LandMine::OnIntervalThink  (line 368, @0x0000000002cf2530, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FStrEq, Get, GetClassNameAsCStr, GetClassname, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, Invalidate, IsElapsed, IsValid, LookupEntity, NetworkStateChanged, Purge, Set, String, ToDOTABaseNPC, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*, operator=<float>, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::StartIntervalThink, CountdownTimer::Now, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CountdownTimer::Start, _Unwind_Resume
// strings: "npc_dota_unit_undying_tombstone"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Techies_LandMine::OnIntervalThink(CDOTA_Modifier_Techies_LandMine *const this)
{
  float v1; // xmm1_4
  __m128i v3; // xmm2
  float v4; // ebx
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v8; // rax
  __int64 v9; // r12
  int v10; // ebx
  unsigned __int16 *v11; // rdx
  int v12; // eax
  __int16 v13; // cx
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CEntityInstance *m_pInstance; // rax
  const char *m_pAsString; // rsi
  float v18; // xmm1_4
  int v19; // [rsp+20h] [rbp-58h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hTargets; // [rsp+28h] [rbp-50h] BYREF

  this->bActivated = 1;
  CDOTA_Buff::StartIntervalThink(this, 0.0, v1);
  if ( this->m_Timer.m_timestamp.m_Value > 0.0
    && CountdownTimer::Now(&this->m_Timer) >= this->m_Timer.m_timestamp.m_Value )
  {
    (*(this->_vptr_CDOTA_Buff + 94))(this);
  }
  else
  {
    v19 = 0;
    *v3.m128i_i32 = this->radius;
    *&hTargets.m_Size = 0;
    hTargets.m_Memory.m_pMemory = 0;
    v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
    Parent = CDOTA_Buff::GetParent(this);
    v6 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
    v8 = CDOTA_Buff::GetParent(this);
    FindUnitsInRadius(v8->m_iTeamNum.m_Value, AbsOrigin, Parent, v4, &v19, 2, 23, 16, 0, 0);
    v9 = 0;
    v10 = 0;
    if ( v19 > 0 )
    {
      while ( 1 )
      {
        v11 = (*&hTargets.m_Size + v9);
        v12 = *(*&hTargets.m_Size + v9);
        if ( (v12 + 2) > 1 )
        {
          v13 = *v11;
          v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v11 >> 9) & 0x3F];
          if ( v14 != 0 )
          {
            v15 = &v14[v13 & 0x1FF];
            if ( v15 != 0 && v12 == v15->m_EHandle.m_Index )
            {
              m_pInstance = v15->m_pInstance;
              if ( v15->m_pInstance != 0
                && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                && ((m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x193) != 0
                 || (m_pAsString = m_pInstance->m_pEntity->m_designerName.u.m_pAsString) != 0
                 && (m_pAsString == "npc_dota_unit_undying_tombstone"
                  || strcmp(m_pAsString, "npc_dota_unit_undying_tombstone") == 0))
                && (*(m_pInstance->_vptr_IHandleEntity + 489))(m_pInstance) == 0 )
              {
                break;
              }
            }
          }
        }
        ++v10;
        v9 += 4;
        if ( v19 <= v10 )
          goto LABEL_22;
      }
      if ( this->m_Timer.m_timestamp.m_Value <= 0.0 )
        CountdownTimer::Start(&this->m_Timer, this->proximity_threshold, v18);
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&v19);
    }
    else
    {
LABEL_22:
      if ( this->m_Timer.m_timestamp.m_Value != -1.0 )
      {
        (*(this->m_Timer._vptr_CountdownTimer + 2))(&this->m_Timer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL, -1.0);
        this->m_Timer.m_timestamp.m_Value = -1.0;
      }
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&v19);
      if ( (HIDWORD(hTargets.m_Memory.m_pMemory) & 0xC0000000) == 0 )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hTargets);
        if ( (HIDWORD(hTargets.m_Memory.m_pMemory) & 0xC0000000) == 0 )
          CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hTargets);
      }
    }
  }
}


// CDOTA_Modifier_Techies_LandMine::DestroyMine  (line 411, @0x0000000002cfc4f0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FStrEq, Get, GetAbilityData, GetClassNameAsCStr, GetClassname, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsRealHero, IsValid, LookupEntity, String, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, Vector, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, ApplyDamage, CDOTA_Buff::GetCaster, EconEntity_OnOwnerKillEaterEvent, CDOTAGamerules::SendProjectionAbilityMessage, CDOTAFogOfWarSystem::AddTempViewer, CDOTA_Buff::CreateBuffParticleEffect (20 total)
// strings: "npc_dota_unit_undying_tombstone", "building_damage_pct", "particles/units/heroes/hero_techies/techies_land_mine_explode.vpcf", "Hero_Techies.LandMine.Detonate"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_Techies_LandMine::DestroyMine(CDOTA_Modifier_Techies_LandMine *const this)
{
  __m128i v1; // xmm4
  float v3; // r13d
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v7; // rax
  __int64 v8; // r12
  int v9; // r13d
  CHandle<CBaseEntity> *v10; // rdx
  uint32 m_Index; // eax
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CEntityInstance *m_pInstance; // rbx
  const char *m_pAsString; // rsi
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  double v20; // xmm0_8
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC_Hero *v22; // rdi
  CDOTABaseAbility *v23; // rax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  CDOTABaseAbility *v25; // rbx
  int m_iAbilityID; // r12d
  CDOTA_BaseNPC *v27; // rax
  const Vector *v28; // rbx
  CDOTA_BaseNPC *v29; // rax
  float v30; // xmm3_4
  CDOTA_BaseNPC *v31; // rax
  const Vector *v32; // rbx
  CDOTA_BaseNPC *v33; // rax
  unsigned int BuffParticleEffect; // ebx
  CDOTA_BaseNPC *v35; // rax
  const Vector *v36; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  float radius; // xmm0_4
  CDOTA_ParticleManager *v39; // rax
  float v40; // xmm0_4
  CDOTA_ParticleManager *v41; // rax
  CDOTA_BaseNPC *v42; // rax
  CDOTA_ParticleManager *v43; // rax
  CDOTA_BaseNPC *v44; // rax
  CDOTA_BaseNPC *v45; // rax
  CDOTABaseAbility *pInflictor; // [rsp+30h] [rbp-70h]
  int nHeroKills; // [rsp+38h] [rbp-68h]
  float flDamage; // [rsp+3Ch] [rbp-64h]
  double building_damage_pct; // [rsp+40h] [rbp-60h] BYREF
  float v50; // [rsp+48h] [rbp-58h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hTargets; // [rsp+50h] [rbp-50h] BYREF

  hTargets.m_Size = 0;
  *v1.m128i_i32 = this->radius;
  hTargets.m_Memory.m_pMemory = 0;
  hTargets.m_Memory.m_nAllocationCount = 0;
  hTargets.m_Memory.m_nGrowSize = 0;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  Parent = CDOTA_Buff::GetParent(this);
  v5 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, Parent, v3, &hTargets, 2, 23, 16, 0, 0);
  if ( hTargets.m_Size > 0 )
  {
    v8 = 0;
    v9 = 0;
    nHeroKills = 0;
    do
    {
      while ( 1 )
      {
        v10 = &hTargets.m_Memory.m_pMemory[v8];
        m_Index = hTargets.m_Memory.m_pMemory[v8].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v12 = v10->m_Index;
          v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Index) >> 9) & 0x3F];
          if ( v13 != 0 )
          {
            v14 = &v13[v12 & 0x1FF];
            if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
            {
              m_pInstance = v14->m_pInstance;
              if ( v14->m_pInstance != 0
                && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                && ((m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x193) != 0
                 || (m_pAsString = m_pInstance->m_pEntity->m_designerName.u.m_pAsString) != 0
                 && (m_pAsString == "npc_dota_unit_undying_tombstone"
                  || strcmp(m_pAsString, "npc_dota_unit_undying_tombstone") == 0))
                && (*(m_pInstance->_vptr_IHandleEntity + 489))(v14->m_pInstance) == 0 )
              {
                Ability = CDOTA_Buff::GetAbility(this);
                DotaRetrieveAbilityValue<float>(Ability, &this->damage, "damage");
                flDamage = this->damage;
                if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x10) != 0 )
                {
                  v18 = CDOTA_Buff::GetAbility(this);
                  DotaRetrieveAbilityValue<int>(v18, &building_damage_pct, "building_damage_pct");
                  flDamage = (SLODWORD(building_damage_pct) / 100.0) * flDamage;
                }
                pInflictor = CDOTA_Buff::GetAbility(this);
                v19 = CDOTA_Buff::GetParent(this);
                v20 = ApplyDamage(v19, m_pInstance, pInflictor, flDamage, 2, 0);
                if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
                  break;
              }
            }
          }
        }
        ++v9;
        ++v8;
        if ( hTargets.m_Size <= v9 )
          goto LABEL_20;
      }
      nHeroKills += (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance, v20) == 0;
      ++v9;
      ++v8;
    }
    while ( hTargets.m_Size > v9 );
LABEL_20:
    if ( nHeroKills != 0 )
    {
      Caster = CDOTA_Buff::GetCaster(this);
      v22 = 0;
      if ( Caster != 0 && Caster->m_bIsDOTANPC && (Caster->m_iUnitType & 1) != 0 && !Caster->m_bIsIllusion.m_Value )
        v22 = Caster;
      EconEntity_OnOwnerKillEaterEvent(
        v22,
        0,
        kill_eater_event_t::kKillEaterEvent_Techies_LandMineKills,
        nHeroKills,
        INVALID_ITEM_DEF_INDEX);
      if ( CDOTA_Buff::GetAbility(this) != 0 )
      {
        v23 = CDOTA_Buff::GetAbility(this);
        m_pAbilityData = v23->m_pAbilityData;
        v25 = v23;
        if ( m_pAbilityData == 0 )
        {
          CDOTABaseAbility::LoadAbilityData(v23, 0);
          m_pAbilityData = v25->m_pAbilityData;
        }
        m_iAbilityID = m_pAbilityData->m_iAbilityID;
        v27 = CDOTA_Buff::GetParent(this);
        v28 = CBaseEntity::GetAbsOrigin(v27);
        v29 = CDOTA_Buff::GetCaster(this);
        CDOTAGamerules::SendProjectionAbilityMessage(
          g_pGameRules,
          v29,
          0,
          m_iAbilityID,
          0,
          0,
          *&v28->x,
          v28->z,
          -1.0,
          v30);
      }
    }
  }
  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    v31 = CDOTA_Buff::GetParent(this);
    v32 = CBaseEntity::GetAbsOrigin(v31);
    v33 = CDOTA_Buff::GetCaster(this);
    CDOTAFogOfWarSystem::AddTempViewer(
      &g_DOTAFogOfWarSystem,
      FoWViewerType_t::FOWVIEWERTYPE_FOWENTITY_TEMP,
      v33->m_iTeamNum.m_Value,
      v32,
      400.0,
      1.0,
      0);
  }
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_techies/techies_land_mine_explode.vpcf",
                         2,
                         0,
                         0);
  v35 = CDOTA_Buff::GetParent(this);
  v36 = CBaseEntity::GetAbsOrigin(v35);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, BuffParticleEffect, 0, *&v36->x, v36->z);
  radius = this->radius;
  building_damage_pct = 0.007812501848093234;
  v50 = radius;
  v39 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v39, BuffParticleEffect, 1, building_damage_pct, v50);
  v40 = this->radius;
  building_damage_pct = 0.007812501848093234;
  v50 = v40;
  v41 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v41, BuffParticleEffect, 2, building_damage_pct, v50);
  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    v42 = CDOTA_Buff::GetCaster(this);
    (*(v42->_vptr_IHandleEntity + 206))(v42, BuffParticleEffect, 0);
  }
  v43 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v43, BuffParticleEffect);
  v44 = CDOTA_Buff::GetParent(this);
  CBaseEntity::EmitSound(v44, "Hero_Techies.LandMine.Detonate", 0.0, 0);
  v45 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::ForceKill(v45, 0);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hTargets);
}


// CDOTA_Modifier_Techies_LandMine_Burn::~CDOTA_Modifier_Techies_LandMine_Burn  (line 485, @0x0000000002d27aa0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Techies_LandMine_Burn::~CDOTA_Modifier_Techies_LandMine_Burn(
        CDOTA_Modifier_Techies_LandMine_Burn *const this)
{
  this->_vptr_CDOTA_Buff = &off_4632F90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Techies_LandMine_Burn::~CDOTA_Modifier_Techies_LandMine_Burn  (line 485, @0x0000000002d27ac0, libserver.so)  // inlines: ~CDOTA_Modifier_Techies_LandMine_Burn
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Techies_LandMine_Burn::~CDOTA_Modifier_Techies_LandMine_Burn(
        CDOTA_Modifier_Techies_LandMine_Burn *const this)
{
  this->_vptr_CDOTA_Buff = &off_4632F90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Techies_LandMine_Burn::IsDebuff  (line 490, @0x0000000002d1e720, libserver.so)
bool __fastcall CDOTA_Modifier_Techies_LandMine_Burn::IsDebuff(CDOTA_Modifier_Techies_LandMine_Burn *const this)
{
  return 1;
}


// CDOTA_Modifier_Techies_LandMine_Burn::GetEffectName  (line 496, @0x0000000002d1e730, libserver.so)
// strings: "particles/units/heroes/hero_ogre_magi/ogre_magi_ignite_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Techies_LandMine_Burn::GetEffectName(
        CDOTA_Modifier_Techies_LandMine_Burn *const this)
{
  return "particles/units/heroes/hero_ogre_magi/ogre_magi_ignite_debuff.vpcf";
}


// CDOTA_Modifier_Techies_LandMine_Burn::GetStatusEffectName  (line 497, @0x0000000002d1e740, libserver.so)
// strings: "particles/status_fx/status_effect_burn.vpcf"
const char *__fastcall CDOTA_Modifier_Techies_LandMine_Burn::GetStatusEffectName(
        CDOTA_Modifier_Techies_LandMine_Burn *const this)
{
  return "particles/status_fx/status_effect_burn.vpcf";
}


// CDOTA_Modifier_Techies_LandMine_Burn::OnCreated  (line 508, @0x0000000002d09c60, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
// strings: "burn_damage"
void __fastcall CDOTA_Modifier_Techies_LandMine_Burn::OnCreated(
        CDOTA_Modifier_Techies_LandMine_Burn *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->burn_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "burn_damage", -1, 0);
  else
    this->burn_damage = 0;
  CDOTA_Buff::StartIntervalThink(this, 0.25, v4);
  (*(this->_vptr_CDOTA_Buff + 56))(this);
}


// CDOTA_Modifier_Techies_LandMine_Burn::OnIntervalThink  (line 518, @0x0000000002ccd7a0, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage
void __fastcall CDOTA_Modifier_Techies_LandMine_Burn::OnIntervalThink(CDOTA_Modifier_Techies_LandMine_Burn *const this)
{
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  float v5; // [rsp+Ch] [rbp-24h]

  v5 = this->burn_damage * 0.25;
  Ability = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, Ability, v5, 2, 0);
}


// CDOTA_Ability_Techies_StasisTrap::~CDOTA_Ability_Techies_StasisTrap  (line 530, @0x0000000002d2beb0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Techies_StasisTrap::~CDOTA_Ability_Techies_StasisTrap(
        CDOTA_Ability_Techies_StasisTrap *const this)
{
  this->_vptr_IHandleEntity = &off_46332F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Techies_StasisTrap::~CDOTA_Ability_Techies_StasisTrap  (line 530, @0x0000000002d2bed0, libserver.so)  // inlines: ~CDOTA_Ability_Techies_StasisTrap
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Techies_StasisTrap::~CDOTA_Ability_Techies_StasisTrap(
        CDOTA_Ability_Techies_StasisTrap *const this)
{
  this->_vptr_IHandleEntity = &off_46332F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Techies_StasisTrap::Schema_DynamicBinding  (line 532, @0x0000000002d1e750, libserver.so)
// globals: CDOTA_Ability_Techies_StasisTrap::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Techies_StasisTrap::Schema_DynamicBinding(
        const CDOTA_Ability_Techies_StasisTrap *const this)
{
  return CDOTA_Ability_Techies_StasisTrap::s_pSchemaBinding;
}


// CDOTA_Ability_Techies_StasisTrap::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 532, @0x0000000002d1e760, libserver.so)
// globals: CDOTA_Ability_Techies_StasisTrap::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Techies_StasisTrap::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Techies_StasisTrap::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Techies_StasisTrap::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Techies_StasisTrap::CEntityInstanceEntityClass::DestructInstance  (line 532, @0x0000000002d1e770, libserver.so)  // inlines: Destruct<CDOTA_Ability_Techies_StasisTrap>
void __fastcall CDOTA_Ability_Techies_StasisTrap::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Techies_StasisTrap::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Techies_StasisTrap::CEntityInstanceEntityClass::FreeInstance  (line 532, @0x0000000002d1e790, libserver.so)
void __fastcall CDOTA_Ability_Techies_StasisTrap::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Techies_StasisTrap::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Techies_StasisTrap::CEntityInstanceEntityClass::CanAllocate  (line 532, @0x0000000002d1e7b0, libserver.so)
bool __fastcall CDOTA_Ability_Techies_StasisTrap::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Techies_StasisTrap::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Techies_StasisTrap::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 532, @0x0000000002d1e7c0, libserver.so)
// globals: CDOTA_Ability_Techies_StasisTrap::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Techies_StasisTrap::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Techies_StasisTrap::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Techies_StasisTrap::s_pSchemaBinding;
}


// CDOTA_Ability_Techies_StasisTrap::CEntityInstanceEntityClass::AllocateInstance  (line 532, @0x0000000002d24a50, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Techies_StasisTrap::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Techies_StasisTrap::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Techies_StasisTrap::CEntityInstanceEntityClass::ConstructInstance  (line 532, @0x0000000002d291f0, libserver.so)  // inlines: CDOTA_Ability_Techies_StasisTrap, CEntityHandle, CHandle, Construct<CDOTA_Ability_Techies_StasisTrap>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Techies_StasisTrap::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Techies_StasisTrap::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 229) = -1;
    *p = &off_46332F0;
  }
  return p;
}


// CDOTA_Ability_Techies_StasisTrap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 532, @0x0000000002d34360, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Techies_StasisTrap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Techies_StasisTrap::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Techies_StasisTrap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 532, @0x0000000002d34380, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Techies_StasisTrap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Techies_StasisTrap::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Techies_StasisTrap::GetEntityClassInternal  (line 532, @0x0000000002d48c80, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "CDOTA_Ability_Techies_StasisTrap"
// globals: `guard variable for'CDOTA_Ability_Techies_StasisTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_StasisTrapClass, CDOTA_Ability_Techies_StasisTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_StasisTrapClass, __dso_handle, CDOTA_Ability_Techies_StasisTrap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Techies_StasisTrap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_StasisTrapClassInfo, CDOTA_Ability_Techies_StasisTrap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_StasisTrapClassInfo
CEntityClass *__cdecl CDOTA_Ability_Techies_StasisTrap::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Techies_StasisTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_StasisTrapClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Techies_StasisTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_StasisTrapClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Techies_StasisTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_StasisTrapClass);
    CDOTA_Ability_Techies_StasisTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_StasisTrapClass._vptr_CEntityClass = off_4633270;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Techies_StasisTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_StasisTrapClass);
    __cxa_atexit(
      CDOTA_Ability_Techies_StasisTrap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Techies_StasisTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_StasisTrapClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Techies_StasisTrapClass != 0 )
    return &CDOTA_Ability_Techies_StasisTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_StasisTrapClass;
  if ( `guard variable for'CDOTA_Ability_Techies_StasisTrap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_StasisTrapClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Techies_StasisTrap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_StasisTrapClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Techies_StasisTrap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_StasisTrapClassInfo,
      "CDOTA_Ability_Techies_StasisTrap",
      "techies_stasis_trap",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Techies_StasisTrap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_StasisTrapClassInfo);
  }
  CDOTA_Ability_Techies_StasisTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_StasisTrapClass.m_pClassInfo = &CDOTA_Ability_Techies_StasisTrap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_StasisTrapClassInfo;
  CDOTA_Ability_Techies_StasisTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_StasisTrapClass.m_pBaseClassInfo = CDOTA_Ability_Techies_StasisTrap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_StasisTrapClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Techies_StasisTrapClass = &CDOTA_Ability_Techies_StasisTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_StasisTrapClass;
  CDOTA_Ability_Techies_StasisTrap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_StasisTrapClassInfo.m_pClass = &CDOTA_Ability_Techies_StasisTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_StasisTrapClass;
  CDOTA_Ability_Techies_StasisTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_StasisTrapClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Techies_StasisTrapClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Techies_StasisTrap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_StasisTrapClass;
}


// CDOTA_Ability_Techies_StasisTrap::GetAssociatedSecondaryAbilities  (line 540, @0x0000000002d1e7d0, libserver.so)
// strings: "techies_minefield_sign"
const char *__fastcall CDOTA_Ability_Techies_StasisTrap::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Techies_StasisTrap *const this)
{
  return "techies_minefield_sign";
}


// CDOTA_Ability_Techies_StasisTrap::YouForgotToImplementOrDeclareServerClass  (line 558, @0x0000000002cc9570, libserver.so)
int __fastcall CDOTA_Ability_Techies_StasisTrap::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Techies_StasisTrap *const this)
{
  return 0;
}


// CDOTA_Ability_Techies_StasisTrap::GetServerClass  (line 558, @0x0000000002cdebb0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Techies_StasisTrap::GetServerClass(CDOTA_Ability_Techies_StasisTrap *const this)
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


// CDOTA_Ability_Techies_StasisTrap::OnSpellStart  (line 567, @0x0000000002cf46c0, libserver.so)  // inlines: DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetLevelSpecialValueFor<float>, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, __stack_chk_fail, CDOTABaseAbility::GetCaster, CDOTAPlayer::SetLastOrderTime, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_techies_stasis_trap", "fadetime", "modifier_techies_deploy_trap"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Techies_StasisTrap::OnSpellStart(CDOTA_Ability_Techies_StasisTrap *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_BaseNPC *Caster; // rax
  CDOTAPlayer *v7; // rdi
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  CDOTA_BaseNPC *v11; // rax
  CDOTA_Buff *ModifierByName; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "fade_time", -1, 0);
  m_Index = this->m_hTrap.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTrap.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hTrap.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          Caster = CDOTABaseAbility::GetCaster(this);
          v7 = (*(Caster->_vptr_IHandleEntity + 413))(Caster);
          if ( v7 != 0 )
          {
            v9 = 0.0;
            if ( g_pGameRules != 0 )
              v9 = *&g_pGameRules[18].m_szQuestName[20];
            CDOTAPlayer::SetLastOrderTime(v7, v9, v8, 1);
          }
          KeyValues::KeyValues(&kv, "modifier_techies_stasis_trap");
          KeyValues::SetFloat(&kv, "fadetime", v10);
          v11 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(m_pInstance, v11, this, "modifier_techies_stasis_trap", &kv, 0);
          ModifierByName = CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_techies_deploy_trap", 0);
          if ( ModifierByName != 0 )
            CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
          KeyValues::~KeyValues(&kv);
        }
      }
    }
  }
}


// CDOTA_Ability_Techies_StasisTrap::OnAbilityPhaseStart  (line 600, @0x0000000002cd0e50, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, GetTeamNumber, Set, SetBlockCreepSpawn, Vector, operator=
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, DOTA_Character_ScriptSpawn_Synchronous, CDOTA_BaseNPC::SetControllableByPlayer, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CBaseEntity::GetAbsAngles, RandomFloat, CBaseEntity::SetAbsAngles, FindClearSpaceForUnit, DOTA_EmitSoundLocation (22 total)
// strings: "npc_dota_techies_stasis_trap", "modifier_techies_deploy_trap", "Hero_Techies.StasisTrap.Plant", "particles/units/heroes/hero_techies/techies_stasis_trap_plant.vpcf"
bool __fastcall CDOTA_Ability_Techies_StasisTrap::OnAbilityPhaseStart(CDOTA_Ability_Techies_StasisTrap *const this)
{
  const CBaseEntity *v1; // r14
  CDOTA_BaseNPC *Caster; // r13
  int m_Value; // r12d
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // r12
  void (__fastcall *v7)(CDOTA_BaseNPC *, _QWORD); // r13
  CDOTA_BaseNPC *v8; // rax
  void (__fastcall *v9)(CDOTA_BaseNPC *, CDOTA_BaseNPC *); // r13
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  int v12; // eax
  float v13; // xmm1_4
  CDOTA_BaseNPC *v14; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v16; // eax
  __int16 v17; // cx
  CDOTA_BaseNPC *v18; // rax
  const QAngle *AbsAngles; // rax
  int AbilityParticleEffect; // eax
  int v21; // r13d
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *AbsOrigin; // rax
  int m_nFXIndex; // r15d
  const Vector *v25; // r13
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  const Vector *v28; // rax
  int v29; // r14d
  const Vector *v30; // r13
  CDOTA_ParticleManager *v31; // rax
  CDOTA_BaseNPC *v32; // rax
  Vector vecFwd; // [rsp+10h] [rbp-D0h] BYREF
  Vector vecRight; // [rsp+20h] [rbp-C0h] BYREF
  Vector vecUp; // [rsp+30h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+40h] [rbp-A0h]
  float v38; // [rsp+48h] [rbp-98h]
  QAngle facingAngle; // [rsp+50h] [rbp-90h] BYREF
  Vector vOrigin; // [rsp+60h] [rbp-80h] BYREF
  Vector CursorPosition; // [rsp+70h] [rbp-70h]
  Vector v42; // [rsp+80h] [rbp-60h]
  KeyValues kv; // [rsp+90h] [rbp-50h] BYREF
  unsigned __int64 v44; // [rsp+A8h] [rbp-38h]

  v1 = 0;
  v44 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  v5 = DOTA_Character_ScriptSpawn_Synchronous("npc_dota_techies_stasis_trap", m_Value, Caster, 0, 0, CursorPosition);
  v6 = v5;
  if ( v5 != 0 )
  {
    v1 = v5;
    v7 = *(v5->_vptr_IHandleEntity + 70);
    v8 = CDOTABaseAbility::GetCaster(this);
    v7(v6, v8->m_iTeamNum.m_Value);
    v9 = *(v6->_vptr_IHandleEntity + 40);
    v10 = CDOTABaseAbility::GetCaster(this);
    v9(v6, v10);
    v11 = CDOTABaseAbility::GetCaster(this);
    v12 = (*(v11->_vptr_IHandleEntity + 414))(v11);
    CDOTA_BaseNPC::SetControllableByPlayer(v6, v12, 0);
    v6->m_bBlocksCreepSpawn = 0;
    KeyValues::KeyValues(&kv, "modifier_techies_deploy_trap");
    KeyValues::SetFloat(&kv, "duration", v13);
    v14 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v6, v14, this, "modifier_techies_deploy_trap", &kv, 0);
    facingAngle = *CBaseEntity::GetAbsAngles(v6);
    facingAngle.y = RandomFloat(0.0, 360.0);
    CBaseEntity::SetAbsAngles(v6, &facingAngle);
    v42 = CDOTABaseAbility::GetCursorPosition(this);
    FindClearSpaceForUnit(v6, v42, 1);
    m_pEntity = v6->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v16 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v17 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hTrap.m_Index) = v17 | this->m_hTrap.m_Index & 0x8000;
      this->m_hTrap.m_Index = (v16 << 15) | this->m_hTrap.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hTrap.m_Index = -1;
    }
    vOrigin = CDOTABaseAbility::GetCursorPosition(this);
    DOTA_EmitSoundLocation(&vOrigin, "Hero_Techies.StasisTrap.Plant", 1);
    KeyValues::~KeyValues(&kv);
  }
  v18 = CDOTABaseAbility::GetCaster(this);
  AbsAngles = CBaseEntity::GetAbsAngles(v18);
  AngleVectors(AbsAngles, &vecFwd, &vecRight, &vecUp);
  AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                            this,
                            "particles/units/heroes/hero_techies/techies_stasis_trap_plant.vpcf",
                            1,
                            v6,
                            0);
  this->m_nFXIndex = AbilityParticleEffect;
  v21 = AbilityParticleEffect;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, v21, 0, v6, 1, 0, vec3_invalid, 1);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v1);
  m_nFXIndex = this->m_nFXIndex;
  v25 = AbsOrigin;
  v26 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v26, m_nFXIndex, 1, *&v25->x, v25->z);
  LODWORD(v25) = this->m_nFXIndex;
  *&vOrigin.x = 0;
  vOrigin.z = 1.0;
  *&facingAngle.x = 0x3F80000000000000LL;
  facingAngle.z = 0.0;
  v37 = 1065353216;
  v38 = 0.0;
  v27 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlOrientation(
    v27,
    v25,
    1,
    *&v37,
    v38,
    *&facingAngle.x,
    facingAngle.z,
    *&vOrigin.x,
    vOrigin.z);
  v28 = CBaseEntity::GetAbsOrigin(v1);
  v29 = this->m_nFXIndex;
  v30 = v28;
  v31 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v31, v29, 2, v6, 1, 0, *v30, 1);
  v32 = CDOTABaseAbility::GetCaster(this);
  (*(v32->_vptr_IHandleEntity + 206))(v32, this->m_nFXIndex, 0);
  return 1;
}


// CDOTA_Ability_Techies_StasisTrap::OnAbilityPhaseInterrupted  (line 643, @0x0000000002cd8120, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: UTIL_Remove, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Techies_StasisTrap::OnAbilityPhaseInterrupted(
        CDOTA_Ability_Techies_StasisTrap *const this)
{
  uint32 m_Index; // eax
  CEntityInstance *m_pInstance; // rdi
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  int m_nFXIndex; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax

  m_Index = this->m_hTrap.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTrap.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hTrap.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
        m_pInstance = v5->m_pInstance;
    }
  }
  UTIL_Remove(m_pInstance);
  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 1);
}


// CDOTA_Modifier_Techies_StasisTrap::~CDOTA_Modifier_Techies_StasisTrap  (line 658, @0x0000000002d27480, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Techies_StasisTrap::~CDOTA_Modifier_Techies_StasisTrap(
        CDOTA_Modifier_Techies_StasisTrap *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Techies_StasisTrap::~CDOTA_Modifier_Techies_StasisTrap  (line 658, @0x0000000002d274a0, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible, ~CDOTA_Modifier_Techies_StasisTrap
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Techies_StasisTrap::~CDOTA_Modifier_Techies_StasisTrap(
        CDOTA_Modifier_Techies_StasisTrap *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Techies_StasisTrap::IsHidden  (line 662, @0x0000000002d1e7e0, libserver.so)
bool __fastcall CDOTA_Modifier_Techies_StasisTrap::IsHidden(CDOTA_Modifier_Techies_StasisTrap *const this)
{
  return 1;
}


// CDOTA_Modifier_Techies_StasisTrap::CheckState  (line 690, @0x0000000002cd0720, libserver.so)  // inlines: Enable
// calls: CDOTA_Modifier_Invisible::CheckState
void __fastcall CDOTA_Modifier_Techies_StasisTrap::CheckState(
        CDOTA_Modifier_Techies_StasisTrap *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  CDOTA_Modifier_Invisible::CheckState(this, buffState);
  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x2000201uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFDFFFDFELL;
}


// CDOTA_Modifier_Techies_StasisTrap::OnCreated  (line 701, @0x0000000002d0bc80, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Modifier_Invisible::OnCreated, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "activation_radius", "explode_delay", "activation_time", "stun_radius"
void __fastcall CDOTA_Modifier_Techies_StasisTrap::OnCreated(
        CDOTA_Modifier_Techies_StasisTrap *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  float v8; // xmm1_4

  CDOTA_Modifier_Invisible::OnCreated(this, pKV);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->activation_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "activation_radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->activation_radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->explode_delay = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "explode_delay", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  this->explode_delay = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->activation_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "activation_time", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
LABEL_11:
    this->stun_radius = 0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
LABEL_12:
    this->stun_duration = 0.0;
    goto LABEL_7;
  }
LABEL_10:
  this->activation_time = 0.0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_11;
LABEL_5:
  this->stun_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "stun_radius", -1, 0);
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
    goto LABEL_12;
LABEL_6:
  this->stun_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "stun_duration", -1, 0);
LABEL_7:
  CDOTA_Buff::StartIntervalThink(this, this->activation_time, v8);
  this->m_bActivated = 0;
  this->m_bTriggered = 0;
}


// CDOTA_Modifier_Techies_StasisTrap::OnIntervalThink  (line 719, @0x0000000002cf2180, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FStrEq, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GetUnitName, IndexToIdentity, IsValid, LookupEntity, Purge, String, ToCStr, ToDOTABaseNPC, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_Buff::StartIntervalThink, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CDOTA_BaseNPC::FindModifierByName, CDOTA_Modifier_Techies_StasisTrap::TriggerStasisTrap, CDOTA_BaseNPC::ForceKill, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "modifier_techies_stasis_trap", "npc_dota_techies_stasis_trap"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Techies_StasisTrap::OnIntervalThink(CDOTA_Modifier_Techies_StasisTrap *const this)
{
  __m128i v1; // xmm1
  float v3; // r15d
  CDOTA_BaseNPC *v4; // r14
  CDOTA_BaseNPC *v5; // rax
  const Vector *v6; // rbx
  CDOTA_BaseNPC *v7; // rax
  float v8; // xmm1_4
  __int64 j; // rbx
  CHandle<CBaseEntity> *v10; // rdx
  uint32 v11; // eax
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  float explode_delay; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_Modifier_Techies_StasisTrap *ModifierByName; // rdi
  __m128i v18; // xmm2
  float v19; // r15d
  CDOTA_BaseNPC *v20; // r14
  CDOTA_BaseNPC *v21; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v23; // rax
  __int64 v24; // r14
  int i; // ebx
  CHandle<CBaseEntity> *v26; // rdx
  uint32 m_Index; // eax
  __int16 v28; // cx
  CEntityIdentity *v29; // rdx
  CEntityIdentity *v30; // rdx
  CDOTA_BaseNPC *m_pInstance; // rax
  const char *m_pAsString; // rsi
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hTraps; // [rsp+20h] [rbp-50h] BYREF

  if ( this->m_bActivated )
  {
    if ( this->m_bTriggered && CDOTA_Buff::GetParent(this) != 0 )
    {
      Parent = CDOTA_Buff::GetParent(this);
      ModifierByName = CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_techies_stasis_trap", 0);
      if ( ModifierByName != 0 )
        CDOTA_Modifier_Techies_StasisTrap::TriggerStasisTrap(ModifierByName);
      hTraps.m_Size = 0;
      *v18.m128i_i32 = this->stun_radius;
      hTraps.m_Memory.m_pMemory = 0;
      hTraps.m_Memory.m_nAllocationCount = 0;
      hTraps.m_Memory.m_nGrowSize = 0;
      v19 = COERCE_FLOAT(_mm_cvtsi128_si32(v18));
      v20 = CDOTA_Buff::GetParent(this);
      v21 = CDOTA_Buff::GetParent(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v21);
      v23 = CDOTA_Buff::GetParent(this);
      FindUnitsInRadius(v23->m_iTeamNum.m_Value, AbsOrigin, v20, v19, &hTraps, 1, 32, 0, 0, 0);
      v24 = 0;
      for ( i = 0; hTraps.m_Size > i; ++v24 )
      {
        while ( 1 )
        {
          v26 = &hTraps.m_Memory.m_pMemory[v24];
          m_Index = hTraps.m_Memory.m_pMemory[v24].m_Index;
          if ( m_Index + 2 > 1 )
          {
            v28 = v26->m_Index;
            v29 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v26->m_Index) >> 9) & 0x3F];
            if ( v29 != 0 )
            {
              v30 = &v29[v28 & 0x1FF];
              if ( v30 != 0 && m_Index == v30->m_EHandle.m_Index )
              {
                m_pInstance = v30->m_pInstance;
                if ( v30->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                {
                  m_pAsString = m_pInstance->m_iszUnitName.m_Value.u.m_pAsString;
                  if ( m_pAsString != 0
                    && (m_pAsString == "npc_dota_techies_stasis_trap"
                     || strcmp(m_pAsString, "npc_dota_techies_stasis_trap") == 0) )
                  {
                    break;
                  }
                }
              }
            }
          }
          ++i;
          ++v24;
          if ( hTraps.m_Size <= i )
            goto LABEL_33;
        }
        CDOTA_BaseNPC::ForceKill(v30->m_pInstance, 0);
        ++i;
      }
LABEL_33:
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hTraps);
    }
    *v1.m128i_i32 = this->activation_radius;
    hTraps.m_Size = 0;
    hTraps.m_Memory.m_pMemory = 0;
    hTraps.m_Memory.m_nAllocationCount = 0;
    hTraps.m_Memory.m_nGrowSize = 0;
    v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
    v4 = CDOTA_Buff::GetParent(this);
    v5 = CDOTA_Buff::GetParent(this);
    v6 = CBaseEntity::GetAbsOrigin(v5);
    v7 = CDOTA_Buff::GetParent(this);
    FindUnitsInRadius(v7->m_iTeamNum.m_Value, v6, v4, v3, &hTraps, 2, 19, 256, 0, 0);
    for ( j = 0; hTraps.m_Size > j; ++j )
    {
      while ( 1 )
      {
        v10 = &hTraps.m_Memory.m_pMemory[j];
        v11 = v10->m_Index;
        if ( v10->m_Index + 2 > 1 )
        {
          v12 = v10->m_Index;
          v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Index) >> 9) & 0x3F];
          if ( v13 != 0 )
          {
            v14 = &v13[v12 & 0x1FF];
            if ( v14 != 0
              && v11 == v14->m_EHandle.m_Index
              && v14->m_pInstance != 0
              && BYTE3(v14->m_pInstance[7]._vptr_IHandleEntity) != 0 )
            {
              break;
            }
          }
        }
        if ( hTraps.m_Size <= ++j )
          goto LABEL_13;
      }
      explode_delay = this->explode_delay;
      this->m_bTriggered = 1;
      CDOTA_Buff::StartIntervalThink(this, explode_delay, v8);
    }
LABEL_13:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hTraps);
    if ( (hTraps.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hTraps.m_Memory);
      if ( (hTraps.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hTraps.m_Memory);
    }
  }
  else
  {
    this->m_bActivated = 1;
    CDOTA_Buff::StartIntervalThink(this, 0.1, *v1.m128i_i32);
  }
}


// CDOTA_Modifier_Techies_StasisTrap::TriggerStasisTrap  (line 773, @0x0000000002cf0950, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsRealHero, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl (21 total)
// callers: CDOTA_Modifier_Techies_StasisTrap::OnIntervalThink
// strings: "modifier_techies_stasis_trap_stunned", "particles/units/heroes/hero_techies/techies_stasis_trap_beams.vpcf", "attach_fx", "attach_hitloc", "particles/units/heroes/hero_techies/techies_stasis_trap_explode.vpcf", "Hero_Techies.StasisTrap.Stun"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_Techies_StasisTrap::TriggerStasisTrap(CDOTA_Modifier_Techies_StasisTrap *const this)
{
  __m128i v1; // xmm2
  float v3; // r14d
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v7; // rax
  int v8; // r14d
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityInstance *m_pInstance; // r13
  float v15; // xmm1_4
  CDOTABaseAbility *Ability; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v18; // r15
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *v20; // r15
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  CDOTA_ParticleManager *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  CDOTA_BaseNPC_Hero *v27; // rdi
  unsigned int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *v29; // r13
  CDOTA_ParticleManager *v30; // rax
  CDOTA_ParticleManager *v31; // rax
  CDOTA_BaseNPC *v32; // rax
  CDOTA_ParticleManager *v33; // rax
  CDOTA_BaseNPC *v34; // rax
  CDOTA_BaseNPC *v35; // rax
  const Vector *v36; // r12
  CDOTA_BaseNPC *v37; // rax
  CDOTA_BaseNPC *v38; // rax
  int nHeroesStunned; // [rsp+2Ch] [rbp-94h]
  __int64 v40; // [rsp+38h] [rbp-88h]
  double v41; // [rsp+40h] [rbp-80h]
  double v42; // [rsp+40h] [rbp-80h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hTargets; // [rsp+50h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v45; // [rsp+88h] [rbp-38h]

  hTargets.m_Size = 0;
  *v1.m128i_i32 = this->stun_radius;
  hTargets.m_Memory.m_pMemory = 0;
  v45 = __readfsqword(0x28u);
  hTargets.m_Memory.m_nAllocationCount = 0;
  hTargets.m_Memory.m_nGrowSize = 0;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  Parent = CDOTA_Buff::GetParent(this);
  v5 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, Parent, v3, &hTargets, 2, 19, 0, 0, 0);
  if ( hTargets.m_Size > 0 )
  {
    v8 = 0;
    v40 = 0;
    nHeroesStunned = 0;
    do
    {
      v9 = &hTargets.m_Memory.m_pMemory[v40];
      m_Index = hTargets.m_Memory.m_pMemory[v40].m_Index;
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
            if ( v13->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
            {
              KeyValues::KeyValues(&kv, "modifier_techies_stasis_trap_stunned");
              KeyValues::SetFloat(&kv, "duration", v15);
              Ability = CDOTA_Buff::GetAbility(this);
              Caster = CDOTA_Buff::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(
                m_pInstance,
                Caster,
                Ability,
                "modifier_techies_stasis_trap_stunned",
                &kv,
                0);
              LODWORD(Ability) = CDOTA_Buff::CreateBuffParticleEffect(
                                   this,
                                   "particles/units/heroes/hero_techies/techies_stasis_trap_beams.vpcf",
                                   2,
                                   0,
                                   0);
              v18 = CDOTA_Buff::GetParent(this);
              ParticleManager = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControlEnt(
                ParticleManager,
                Ability,
                0,
                v18,
                5,
                "attach_fx",
                vec3_invalid,
                1);
              v20 = CBaseEntity::GetAbsOrigin(m_pInstance);
              v21 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControlEnt(v21, Ability, 1, m_pInstance, 5, "attach_hitloc", *v20, 1);
              *&v41 = this->stun_duration;
              HIDWORD(v41) = LODWORD(v41);
              v22 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControl(v22, Ability, 2, v41, *&v41);
              HIDWORD(v41) = 1065353216;
              *&v41 = this->stun_radius;
              v23 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControl(v23, Ability, 3, v41, 1.0);
              v24 = CDOTA_Buff::GetCaster(this);
              (*(v24->_vptr_IHandleEntity + 206))(v24, Ability, 0);
              v25 = GetParticleManager();
              CDOTA_ParticleManager::ReleaseParticleIndex(v25, Ability);
              if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                nHeroesStunned += LOBYTE(m_pInstance[71].m_pEntity) == 0;
              KeyValues::~KeyValues(&kv);
            }
          }
        }
      }
      ++v40;
      ++v8;
    }
    while ( hTargets.m_Size > v8 );
    if ( nHeroesStunned != 0 )
    {
      v26 = CDOTA_Buff::GetCaster(this);
      v27 = 0;
      if ( v26 != 0 && v26->m_bIsDOTANPC && (v26->m_iUnitType & 1) != 0 && !v26->m_bIsIllusion.m_Value )
        v27 = v26;
      EconEntity_OnOwnerKillEaterEvent(
        v27,
        0,
        kill_eater_event_t::kKillEaterEvent_Techies_StatisTrapStuns,
        nHeroesStunned,
        INVALID_ITEM_DEF_INDEX);
    }
  }
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_techies/techies_stasis_trap_explode.vpcf",
                         2,
                         0,
                         0);
  v29 = CDOTA_Buff::GetParent(this);
  v30 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v30, BuffParticleEffect, 0, v29, 1, 0, vec3_invalid, 1);
  *&v42 = this->stun_radius;
  *(&v42 + 1) = *&v42;
  v31 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v31, BuffParticleEffect, 1, v42, *&v42);
  v32 = CDOTA_Buff::GetCaster(this);
  (*(v32->_vptr_IHandleEntity + 206))(v32, BuffParticleEffect, 0);
  v33 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v33, BuffParticleEffect);
  v34 = CDOTA_Buff::GetParent(this);
  CBaseEntity::EmitSound(v34, "Hero_Techies.StasisTrap.Stun", 0.0, 0);
  v35 = CDOTA_Buff::GetParent(this);
  v36 = CBaseEntity::GetAbsOrigin(v35);
  v37 = CDOTA_Buff::GetCaster(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_FOWENTITY_TEMP,
    v37->m_iTeamNum.m_Value,
    v36,
    600.0,
    1.0,
    0);
  v38 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::ForceKill(v38, 0);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hTargets);
}


// CDOTA_Modifier_Techies_StasisTrap::OnDestroy  (line 836, @0x0000000002ccfab0, libserver.so)
// calls: CDOTA_Buff::CreateBuffParticleEffect, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::GetCaster, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::ForceKill
// strings: "particles/units/heroes/hero_techies/techies_stasis_spring.vpcf"
void __fastcall CDOTA_Modifier_Techies_StasisTrap::OnDestroy(CDOTA_Modifier_Techies_StasisTrap *const this)
{
  unsigned int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_ParticleManager *v6; // rax
  CDOTA_BaseNPC *v7; // rax

  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_techies/techies_stasis_spring.vpcf",
                         2,
                         0,
                         0);
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, BuffParticleEffect, 0, Parent, 1, 0, vec3_invalid, 1);
  Caster = CDOTA_Buff::GetCaster(this);
  (*(Caster->_vptr_IHandleEntity + 206))(Caster, BuffParticleEffect, 0);
  v6 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v6, BuffParticleEffect);
  v7 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::ForceKill(v7, 0);
}


// CDOTA_Modifier_Techies_StasisTrap_Stunned::~CDOTA_Modifier_Techies_StasisTrap_Stunned  (line 849, @0x0000000002d27a50, libserver.so)  // inlines: ~CDOTA_Modifier_Rooted
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Techies_StasisTrap_Stunned::~CDOTA_Modifier_Techies_StasisTrap_Stunned(
        CDOTA_Modifier_Techies_StasisTrap_Stunned *const this)
{
  this->_vptr_CDOTA_Buff = &off_411ECF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Techies_StasisTrap_Stunned::~CDOTA_Modifier_Techies_StasisTrap_Stunned  (line 849, @0x0000000002d27a70, libserver.so)  // inlines: ~CDOTA_Modifier_Rooted, ~CDOTA_Modifier_Techies_StasisTrap_Stunned
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Techies_StasisTrap_Stunned::~CDOTA_Modifier_Techies_StasisTrap_Stunned(
        CDOTA_Modifier_Techies_StasisTrap_Stunned *const this)
{
  this->_vptr_CDOTA_Buff = &off_411ECF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Techies_StasisTrap_Stunned::IsDebuff  (line 854, @0x0000000002d1e7f0, libserver.so)
bool __fastcall CDOTA_Modifier_Techies_StasisTrap_Stunned::IsDebuff(
        CDOTA_Modifier_Techies_StasisTrap_Stunned *const this)
{
  return 1;
}


// CDOTA_Modifier_Techies_StasisTrap_Stunned::GetEffectName  (line 855, @0x0000000002d1e800, libserver.so)
// strings: "particles/generic_gameplay/generic_stunned.vpcf"
const char *__fastcall CDOTA_Modifier_Techies_StasisTrap_Stunned::GetEffectName(
        CDOTA_Modifier_Techies_StasisTrap_Stunned *const this)
{
  return "particles/generic_gameplay/generic_stunned.vpcf";
}


// CDOTA_Modifier_Techies_StasisTrap_Stunned::GetEffectAttachType  (line 856, @0x0000000002d1e810, libserver.so)
int __fastcall CDOTA_Modifier_Techies_StasisTrap_Stunned::GetEffectAttachType(
        CDOTA_Modifier_Techies_StasisTrap_Stunned *const this)
{
  return 7;
}


// CDOTA_Modifier_Techies_StasisTrap_Stunned::GetStatusEffectName  (line 857, @0x0000000002d1e820, libserver.so)
// strings: "particles/status_fx/status_effect_techies_stasis.vpcf"
const char *__fastcall CDOTA_Modifier_Techies_StasisTrap_Stunned::GetStatusEffectName(
        CDOTA_Modifier_Techies_StasisTrap_Stunned *const this)
{
  return "particles/status_fx/status_effect_techies_stasis.vpcf";
}


// CDOTA_Modifier_Techies_StasisTrap_Stunned::StatusEffectPriority  (line 858, @0x0000000002d1e830, libserver.so)
int __fastcall CDOTA_Modifier_Techies_StasisTrap_Stunned::StatusEffectPriority(
        CDOTA_Modifier_Techies_StasisTrap_Stunned *const this)
{
  return 30;
}


// CDOTA_Modifier_Techies_StasisTrap_Stunned::CheckState  (line 869, @0x0000000002cd1270, libserver.so)  // inlines: Enable
// calls: CDOTA_Modifier_Rooted::CheckState
void __fastcall CDOTA_Modifier_Techies_StasisTrap_Stunned::CheckState(
        CDOTA_Modifier_Techies_StasisTrap_Stunned *const this,
        CDOTABuffState *const buffState)
{
  CDOTA_Modifier_Rooted::CheckState(this, buffState);
  buffState->m_nEnabledStateMask |= 1uLL;
  buffState->m_nDisabledStateMask &= ~1uLL;
}


// CDOTA_Ability_Techies_Suicide::~CDOTA_Ability_Techies_Suicide  (line 885, @0x0000000002d2bf00, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Techies_Suicide::~CDOTA_Ability_Techies_Suicide(
        CDOTA_Ability_Techies_Suicide *const this)
{
  this->_vptr_IHandleEntity = &off_4634450;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Techies_Suicide::~CDOTA_Ability_Techies_Suicide  (line 885, @0x0000000002d2bf20, libserver.so)  // inlines: ~CDOTA_Ability_Techies_Suicide
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Techies_Suicide::~CDOTA_Ability_Techies_Suicide(
        CDOTA_Ability_Techies_Suicide *const this)
{
  this->_vptr_IHandleEntity = &off_4634450;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Techies_Suicide::Schema_DynamicBinding  (line 887, @0x0000000002d1e840, libserver.so)
// globals: CDOTA_Ability_Techies_Suicide::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Techies_Suicide::Schema_DynamicBinding(
        const CDOTA_Ability_Techies_Suicide *const this)
{
  return CDOTA_Ability_Techies_Suicide::s_pSchemaBinding;
}


// CDOTA_Ability_Techies_Suicide::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 887, @0x0000000002d1e850, libserver.so)
// globals: CDOTA_Ability_Techies_Suicide::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Techies_Suicide::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Techies_Suicide::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Techies_Suicide::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Techies_Suicide::CEntityInstanceEntityClass::DestructInstance  (line 887, @0x0000000002d1e860, libserver.so)  // inlines: Destruct<CDOTA_Ability_Techies_Suicide>
void __fastcall CDOTA_Ability_Techies_Suicide::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Techies_Suicide::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Techies_Suicide::CEntityInstanceEntityClass::FreeInstance  (line 887, @0x0000000002d1e880, libserver.so)
void __fastcall CDOTA_Ability_Techies_Suicide::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Techies_Suicide::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Techies_Suicide::CEntityInstanceEntityClass::CanAllocate  (line 887, @0x0000000002d1e8a0, libserver.so)
bool __fastcall CDOTA_Ability_Techies_Suicide::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Techies_Suicide::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Techies_Suicide::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 887, @0x0000000002d1e8b0, libserver.so)
// globals: CDOTA_Ability_Techies_Suicide::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Techies_Suicide::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Techies_Suicide::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Techies_Suicide::s_pSchemaBinding;
}


// CDOTA_Ability_Techies_Suicide::CEntityInstanceEntityClass::AllocateInstance  (line 887, @0x0000000002d24a90, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Techies_Suicide::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Techies_Suicide::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Techies_Suicide::CEntityInstanceEntityClass::ConstructInstance  (line 887, @0x0000000002d29230, libserver.so)  // inlines: CDOTA_Ability_Techies_Suicide, Construct<CDOTA_Ability_Techies_Suicide>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Techies_Suicide::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Techies_Suicide::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 0;
    *p = &off_4634450;
  }
  return p;
}


// CDOTA_Ability_Techies_Suicide::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 887, @0x0000000002d343b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Techies_Suicide::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Techies_Suicide::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Techies_Suicide::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 887, @0x0000000002d343d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Techies_Suicide::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Techies_Suicide::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Techies_Suicide::GetEntityClassInternal  (line 887, @0x0000000002d48dd0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "techies_suicide", "CDOTA_Ability_Techies_Suicide"
// globals: `guard variable for'CDOTA_Ability_Techies_Suicide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_SuicideClass, CDOTA_Ability_Techies_Suicide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_SuicideClass, __dso_handle, CDOTA_Ability_Techies_Suicide::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Techies_Suicide::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_SuicideClassInfo, CDOTA_Ability_Techies_Suicide::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_SuicideClassInfo
CEntityClass *__cdecl CDOTA_Ability_Techies_Suicide::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Techies_Suicide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_SuicideClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Techies_Suicide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_SuicideClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Techies_Suicide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_SuicideClass);
    CDOTA_Ability_Techies_Suicide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_SuicideClass._vptr_CEntityClass = off_46343D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Techies_Suicide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_SuicideClass);
    __cxa_atexit(
      CDOTA_Ability_Techies_Suicide::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Techies_Suicide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_SuicideClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Techies_SuicideClass != 0 )
    return &CDOTA_Ability_Techies_Suicide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_SuicideClass;
  if ( `guard variable for'CDOTA_Ability_Techies_Suicide::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_SuicideClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Techies_Suicide::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_SuicideClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Techies_Suicide::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_SuicideClassInfo,
      "CDOTA_Ability_Techies_Suicide",
      "techies_suicide",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Techies_Suicide::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_SuicideClassInfo);
  }
  CDOTA_Ability_Techies_Suicide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_SuicideClass.m_pClassInfo = &CDOTA_Ability_Techies_Suicide::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_SuicideClassInfo;
  CDOTA_Ability_Techies_Suicide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_SuicideClass.m_pBaseClassInfo = CDOTA_Ability_Techies_Suicide::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_SuicideClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Techies_SuicideClass = &CDOTA_Ability_Techies_Suicide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_SuicideClass;
  CDOTA_Ability_Techies_Suicide::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_SuicideClassInfo.m_pClass = &CDOTA_Ability_Techies_Suicide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_SuicideClass;
  CDOTA_Ability_Techies_Suicide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_SuicideClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Techies_SuicideClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Techies_Suicide::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_SuicideClass;
}


// CDOTA_Ability_Techies_Suicide::YouForgotToImplementOrDeclareServerClass  (line 913, @0x0000000002cc9580, libserver.so)
int __fastcall CDOTA_Ability_Techies_Suicide::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Techies_Suicide *const this)
{
  return 0;
}


// CDOTA_Ability_Techies_Suicide::GetServerClass  (line 913, @0x0000000002cde830, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Techies_Suicide::GetServerClass(CDOTA_Ability_Techies_Suicide *const this)
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


// CDOTA_Ability_Techies_Suicide::OnAbilityPhaseStart  (line 921, @0x0000000002cfd180, libserver.so)  // inlines: GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetHealth, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "hp_cost", "modifier_techies_suicide_leap_animation"
bool __fastcall CDOTA_Ability_Techies_Suicide::OnAbilityPhaseStart(CDOTA_Ability_Techies_Suicide *const this)
{
  int LevelSpecialValue; // r12d
  CDOTA_BaseNPC *Caster; // rax
  int Health; // r13d
  CDOTA_BaseNPC *v5; // rax
  float v7; // xmm1_4
  CDOTA_BaseNPC *v8; // r13
  CDOTA_BaseNPC *v9; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "hp_cost", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  Health = CBaseEntity::GetHealth(Caster);
  v5 = CDOTABaseAbility::GetCaster(this);
  if ( ((LevelSpecialValue * (*(v5->_vptr_IHandleEntity + 156))(v5)) / 100.0) > Health )
  {
    KeyValues::KeyValues(&kv, "modifier_techies_suicide_leap_animation");
    KeyValues::SetFloat(&kv, "duration", v7);
    v8 = CDOTABaseAbility::GetCaster(this);
    v9 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v9, v8, this, "modifier_techies_suicide_leap_animation", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
  return 1;
}


// CDOTA_Ability_Techies_Suicide::OnAbilityPhaseInterrupted  (line 938, @0x0000000002ccc000, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_techies_suicide_leap_animation"
void __fastcall CDOTA_Ability_Techies_Suicide::OnAbilityPhaseInterrupted(CDOTA_Ability_Techies_Suicide *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_techies_suicide_leap_animation");
}


// CDOTA_Ability_Techies_Suicide::OnSpellStart  (line 945, @0x0000000002cce0f0, libserver.so)
// calls: CDOTABaseAbility::GetCursorPosition, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_techies_suicide_leap", "vLocX", "vLocY", "vLocZ", "Hero_Techies.BlastOff.Cast"
void __fastcall CDOTA_Ability_Techies_Suicide::OnSpellStart(CDOTA_Ability_Techies_Suicide *const this)
{
  float v2; // xmm1_4
  float v3; // xmm1_4
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  CDOTABaseAbility::GetCursorPosition(this);
  KeyValues::KeyValues(&kv, "modifier_techies_suicide_leap");
  KeyValues::SetFloat(&kv, "vLocX", v2);
  KeyValues::SetFloat(&kv, "vLocY", v3);
  KeyValues::SetFloat(&kv, "vLocZ", v4);
  Caster = CDOTABaseAbility::GetCaster(this);
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v6, Caster, this, "modifier_techies_suicide_leap", &kv, 0);
  v7 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v7, "Hero_Techies.BlastOff.Cast", 0.0, 0, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Techies_Suicide::BlowUp  (line 960, @0x0000000002d05540, libserver.so)  // inlines: CSocketIterator, CSocketPair, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSocket, GetTeamNumber, GetWearable, IndexToIdentity, IsRealHero, IsValid, LookupEntity, TSocketIterator, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, Vector, VectorAdd, operator CBaseEntity*, operator CEconWearable*, operator CEntityInstance*, operator+, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CSocketIterator::GetSocket, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, ApplyDamage, EconEntity_OnOwnerKillEaterEvent (23 total)
// callers: CDOTA_Modifier_Techies_Suicide_Leap::UpdateVerticalMotion
// strings: "silence_duration", "special_bonus_unique_techies", "modifier_silence", "particles/units/heroes/hero_techies/techies_blast_off.vpcf", "Hero_Techies.Suicide", "hp_cost" (10 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Techies_Suicide::BlowUp(CDOTA_Ability_Techies_Suicide *const this)
{
  int LevelSpecialValue; // ebx
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v5; // r12
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v8; // rax
  uint32 v9; // r14d
  CHandle<CEconWearable> *v10; // rdx
  uint32 m_Index; // eax
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  __int64 v15; // rax
  TSocketIterator<CItemSocket_Strange> *m_Sockets; // rdx
  int v17; // ebx
  IItemSocket *Socket; // rax
  __int64 v19; // r12
  CHandle<CBaseEntity> *v20; // rdx
  uint32 v21; // eax
  __int16 v22; // cx
  CEntityIdentity *v23; // rdx
  CEntityIdentity *v24; // rdx
  CEntityInstance *m_pInstance; // rbx
  float v26; // xmm1_4
  CDOTA_BaseNPC *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  double v29; // xmm0_8
  uint32 v30; // eax
  uint32 v31; // eax
  CDOTA_BaseNPC *v32; // rax
  CDOTA_BaseNPC_Hero *v33; // rdi
  unsigned int v34; // ebx
  CDOTA_BaseNPC *v35; // rax
  const Vector *v36; // r12
  CDOTA_ParticleManager *v37; // rax
  CDOTA_ParticleManager *v38; // rax
  CDOTA_ParticleManager *v39; // rax
  CDOTA_BaseNPC *v40; // rax
  CDOTA_ParticleManager *v41; // rax
  CDOTA_BaseNPC *v42; // rax
  CDOTA_BaseNPC *v43; // rax
  unsigned int v44; // ebx
  CDOTA_BaseNPC *v45; // rax
  float v46; // xmm3_4
  CDOTA_BaseNPC *v47; // rax
  int v48; // ebx
  CDOTA_BaseNPC *v49; // rax
  __m128i v50; // xmm6
  float v51; // r12d
  CDOTA_BaseNPC *v52; // rbx
  CDOTA_BaseNPC *v53; // rax
  CDOTA_BaseNPC *v54; // rax
  float v55; // xmm1_4
  CDOTA_BaseNPC *v56; // r12
  CDOTA_BaseNPC *v57; // rax
  unsigned int AbilityParticleEffect; // ebx
  CDOTA_BaseNPC *v59; // rax
  const Vector *v60; // rax
  float v61; // xmm0_4
  float v62; // xmm1_4
  CDOTA_ParticleManager *v63; // rax
  CDOTA_ParticleManager *v64; // rax
  CDOTA_ParticleManager *v65; // rax
  CDOTA_BaseNPC *v66; // rax
  CDOTA_ParticleManager *v67; // rax
  CDOTA_BaseNPC *v68; // rax
  const Vector *v69; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v71; // rax
  CDOTA_ParticleManager *v72; // rax
  float flRadius; // [rsp+24h] [rbp-17Ch]
  uint32 suicideKills; // [rsp+30h] [rbp-170h]
  int damage; // [rsp+38h] [rbp-168h]
  bool bHasArcana; // [rsp+3Fh] [rbp-161h]
  CItemSocket_Strange *pSocketStrange; // [rsp+40h] [rbp-160h]
  __int64 i; // [rsp+48h] [rbp-158h]
  double v79; // [rsp+60h] [rbp-140h]
  float v80; // [rsp+68h] [rbp-138h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hTargets; // [rsp+70h] [rbp-130h] BYREF
  TSocketIterator<CItemSocket_Strange> socketIterator; // [rsp+90h] [rbp-110h] BYREF
  KeyValues kv; // [rsp+150h] [rbp-50h] BYREF
  unsigned __int64 v84; // [rsp+168h] [rbp-38h]
  Vector v85; // 0:xmm0_8.8,8:xmm1_4.4

  v84 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "silence_duration", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_techies", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    damage += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  hTargets.m_Size = 0;
  hTargets.m_Memory.m_pMemory = 0;
  hTargets.m_Memory.m_nAllocationCount = 0;
  hTargets.m_Memory.m_nGrowSize = 0;
  flRadius = LevelSpecialValue;
  v5 = CDOTABaseAbility::GetCaster(this);
  v6 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
  v8 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v8->m_iTeamNum.m_Value, AbsOrigin, v5, flRadius, &hTargets, 2, 19, 0, 0, 0);
  bHasArcana = 0;
  v9 = 0;
  i = 0;
  pSocketStrange = 0;
  while ( i < CDOTABaseAbility::GetCaster(this)->m_hMyWearables.m_Vector.m_Size )
  {
    v10 = &CDOTABaseAbility::GetCaster(this)->m_hMyWearables.m_Vector.m_Memory.m_pMemory[i];
    m_Index = v10->m_Index;
    if ( v10->m_Index + 2 > 1 )
    {
      v12 = v10->m_Index;
      v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Index) >> 9) & 0x3F];
      if ( v13 != 0 )
      {
        v14 = &v13[v12 & 0x1FF];
        if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index && v14->m_pInstance != 0 )
        {
          v15 = (*(v14->m_pInstance->_vptr_IHandleEntity + 265))(v14->m_pInstance);
          if ( v15 != -104 )
          {
            m_Sockets = socketIterator.m_Sockets;
            do
            {
              m_Sockets->_vptr_IEconItemAttributeIterator = 0;
              m_Sockets = (m_Sockets + 16);
              *&m_Sockets[-1].m_unAttribStorageTypeFlags = 0;
            }
            while ( m_Sockets != &socketIterator.m_nSocketCount );
            socketIterator.m_nSocketCount = 0;
            socketIterator._vptr_IEconItemAttributeIterator = off_40FC710;
            socketIterator.m_nGemCount = 0;
            socketIterator.m_unAttribStorageTypeFlags = 1;
            (*(*(v15 + 104) + 224LL))(v15 + 104, &socketIterator);
            if ( socketIterator.m_nGemCount > 0 && socketIterator.m_nSocketCount > 0 )
            {
              v17 = 0;
              do
              {
                Socket = CSocketIterator::GetSocket(&socketIterator, v17);
                if ( Socket != 0 && LODWORD(Socket[5]._vptr_IItemSocket) == 204 )
                {
                  pSocketStrange = Socket;
                  bHasArcana = 1;
                  if ( v9 < this->m_unSuicideKills + HIDWORD(Socket[5]._vptr_IItemSocket) )
                    v9 = this->m_unSuicideKills + HIDWORD(Socket[5]._vptr_IItemSocket);
                }
                ++v17;
              }
              while ( socketIterator.m_nSocketCount > v17 );
            }
          }
        }
      }
    }
    ++i;
  }
  if ( hTargets.m_Size <= 0 )
  {
    suicideKills = 0;
  }
  else
  {
    suicideKills = 0;
    v19 = 0;
    do
    {
      v20 = &hTargets.m_Memory.m_pMemory[v19];
      v21 = v20->m_Index;
      if ( v20->m_Index + 2 > 1 )
      {
        v22 = v20->m_Index;
        v23 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v20->m_Index) >> 9) & 0x3F];
        if ( v23 != 0 )
        {
          v24 = &v23[v22 & 0x1FF];
          if ( v24 != 0 && v21 == v24->m_EHandle.m_Index )
          {
            m_pInstance = v24->m_pInstance;
            if ( v24->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
            {
              KeyValues::KeyValues(&kv, "modifier_silence");
              KeyValues::SetFloat(&kv, "duration", v26);
              v27 = CDOTABaseAbility::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(m_pInstance, v27, this, "modifier_silence", &kv, 0);
              v28 = CDOTABaseAbility::GetCaster(this);
              v29 = ApplyDamage(v28, m_pInstance, this, damage, 2, 0);
              if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance, v29) == 0
                && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
              {
                ++suicideKills;
                v30 = this->m_unSuicideKills + 1;
                this->m_unSuicideKills = v30;
                if ( pSocketStrange != 0 && bHasArcana )
                {
                  v31 = *(pSocketStrange + 11) + v30;
                  if ( v9 < v31 )
                    v9 = v31;
                }
                if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
                  || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0
                  || LOBYTE(m_pInstance[71].m_pEntity) != 0 )
                {
                  m_pInstance = 0;
                }
                v32 = CDOTABaseAbility::GetCaster(this);
                v33 = 0;
                if ( v32 != 0 && v32->m_bIsDOTANPC && (v32->m_iUnitType & 1) != 0 && !v32->m_bIsIllusion.m_Value )
                  v33 = v32;
                EconEntity_OnOwnerKillEaterEvent(
                  v33,
                  m_pInstance,
                  kill_eater_event_t::kKillEaterEvent_Techies_SuicideKills,
                  1,
                  INVALID_ITEM_DEF_INDEX);
              }
              KeyValues::~KeyValues(&kv);
            }
          }
        }
      }
      ++v19;
    }
    while ( hTargets.m_Size > v19 );
    if ( v9 > 1 && bHasArcana )
    {
      if ( suicideKills != 0 )
      {
        AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                                  this,
                                  "particles/econ/items/techies/techies_arcana/techies_suicide_kills_arcana.vpcf",
                                  2,
                                  0,
                                  0);
        v68 = CDOTABaseAbility::GetCaster(this);
        v69 = CBaseEntity::GetAbsOrigin(v68);
        *(&v79 + 1) = v69->y + 0.0;
        v80 = v69->z + 250.0;
        *&v79 = v69->x + 0.0;
        ParticleManager = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControl(ParticleManager, AbilityParticleEffect, 0, v79, v80);
        LODWORD(socketIterator._vptr_IEconItemAttributeIterator) = 0;
        LODWORD(socketIterator.m_Sockets[0].m_pAttribute) = 0;
        *(&socketIterator._vptr_IEconItemAttributeIterator + 1) = v9;
        v71 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControl(
          v71,
          AbilityParticleEffect,
          1,
          *&socketIterator._vptr_IEconItemAttributeIterator,
          *&socketIterator.m_Sockets[0].m_pAttribute);
        socketIterator._vptr_IEconItemAttributeIterator = 1092616192;
        LODWORD(socketIterator.m_Sockets[0].m_pAttribute) = 0;
        v72 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControl(
          v72,
          AbilityParticleEffect,
          2,
          *&socketIterator._vptr_IEconItemAttributeIterator,
          *&socketIterator.m_Sockets[0].m_pAttribute);
        goto LABEL_60;
      }
LABEL_59:
      AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                                this,
                                "particles/econ/items/techies/techies_arcana/techies_suicide_dud_arcana.vpcf",
                                2,
                                0,
                                0);
      v59 = CDOTABaseAbility::GetCaster(this);
      v60 = CBaseEntity::GetAbsOrigin(v59);
      v61 = v60->z + 250.0;
      v62 = v60->x + 0.0;
      *(&socketIterator._vptr_IEconItemAttributeIterator + 1) = v60->y + 0.0;
      *&socketIterator.m_Sockets[0].m_pAttribute = v61;
      *&socketIterator._vptr_IEconItemAttributeIterator = v62;
      v63 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(
        v63,
        AbilityParticleEffect,
        0,
        *&socketIterator._vptr_IEconItemAttributeIterator,
        *&socketIterator.m_Sockets[0].m_pAttribute);
      v64 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v64, AbilityParticleEffect, 1, 0.0, 0.0);
      v65 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v65, AbilityParticleEffect, 2, COERCE_DOUBLE(1092616192), 0.0);
LABEL_60:
      v66 = CDOTABaseAbility::GetCaster(this);
      (*(v66->_vptr_IHandleEntity + 206))(v66, AbilityParticleEffect, 0);
      v67 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v67, AbilityParticleEffect);
      goto LABEL_53;
    }
    if ( suicideKills != 0 )
      goto LABEL_53;
  }
  if ( bHasArcana )
    goto LABEL_59;
LABEL_53:
  v34 = CDOTABaseAbility::CreateAbilityParticleEffect(
          this,
          "particles/units/heroes/hero_techies/techies_blast_off.vpcf",
          2,
          0,
          0);
  v35 = CDOTABaseAbility::GetCaster(this);
  v36 = CBaseEntity::GetAbsOrigin(v35);
  v37 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v37, v34, 0, *&v36->x, v36->z);
  v38 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v38, v34, 1, COERCE_DOUBLE(LODWORD(flRadius)), 1.0);
  v39 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v39, v34, 2, COERCE_DOUBLE(LODWORD(flRadius)), 1.0);
  v40 = CDOTABaseAbility::GetCaster(this);
  (*(v40->_vptr_IHandleEntity + 206))(v40, v34, 0);
  v41 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v41, v34);
  v42 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v42, "Hero_Techies.Suicide", 0.0, 0, 0);
  v43 = CDOTABaseAbility::GetCaster(this);
  v44 = (*(v43->_vptr_IHandleEntity + 414))(v43);
  v45 = CDOTABaseAbility::GetCaster(this);
  v85 = *CBaseEntity::GetAbsOrigin(v45);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v44, v85, flRadius, v46);
  v47 = CDOTABaseAbility::GetCaster(this);
  if ( (*(v47->_vptr_IHandleEntity + 408))(v47) != 0 )
  {
    v48 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "hp_cost", -1, 0);
    v49 = CDOTABaseAbility::GetCaster(this);
    *v50.m128i_i32 = ((v48 * (*(v49->_vptr_IHandleEntity + 156))(v49)) / 100);
    v51 = COERCE_FLOAT(_mm_cvtsi128_si32(v50));
    v52 = CDOTABaseAbility::GetCaster(this);
    v53 = CDOTABaseAbility::GetCaster(this);
    ApplyDamage(v53, v52, this, v51, 4, 1584);
  }
  v54 = CDOTABaseAbility::GetCaster(this);
  if ( (*(v54->_vptr_IHandleEntity + 408))(v54) == 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_techies_suicide_respawn_time");
    KeyValues::SetFloat(&kv, "duration", v55);
    KeyValues::SetInt(&kv, "suicide_kill_count", suicideKills);
    v56 = CDOTABaseAbility::GetCaster(this);
    v57 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v57, v56, this, "modifier_techies_suicide_respawn_time", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hTargets);
}


// CDOTA_Modifier_Techies_Suicide_Leap_Animation::~CDOTA_Modifier_Techies_Suicide_Leap_Animation  (line 1107, @0x0000000002d279b0, libserver.so)  // inlines: ~CDOTA_Modifier_Disarmed
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Techies_Suicide_Leap_Animation::~CDOTA_Modifier_Techies_Suicide_Leap_Animation(
        CDOTA_Modifier_Techies_Suicide_Leap_Animation *const this)
{
  this->_vptr_CDOTA_Buff = &off_411E9D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Techies_Suicide_Leap_Animation::~CDOTA_Modifier_Techies_Suicide_Leap_Animation  (line 1107, @0x0000000002d279d0, libserver.so)  // inlines: ~CDOTA_Modifier_Disarmed, ~CDOTA_Modifier_Techies_Suicide_Leap_Animation
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Techies_Suicide_Leap_Animation::~CDOTA_Modifier_Techies_Suicide_Leap_Animation(
        CDOTA_Modifier_Techies_Suicide_Leap_Animation *const this)
{
  this->_vptr_CDOTA_Buff = &off_411E9D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Techies_Suicide_Leap_Animation::IsHidden  (line 1112, @0x0000000002d1e8c0, libserver.so)
bool __fastcall CDOTA_Modifier_Techies_Suicide_Leap_Animation::IsHidden(
        CDOTA_Modifier_Techies_Suicide_Leap_Animation *const this)
{
  return 1;
}


// CDOTA_Modifier_Techies_Suicide_Leap_Animation::IsPurgable  (line 1113, @0x0000000002d1e8d0, libserver.so)
bool __fastcall CDOTA_Modifier_Techies_Suicide_Leap_Animation::IsPurgable(
        CDOTA_Modifier_Techies_Suicide_Leap_Animation *const this)
{
  return 0;
}


// CDOTA_Modifier_Techies_Suicide_Leap_Animation::IsPermanent  (line 1114, @0x0000000002d1e8e0, libserver.so)
bool __fastcall CDOTA_Modifier_Techies_Suicide_Leap_Animation::IsPermanent(
        CDOTA_Modifier_Techies_Suicide_Leap_Animation *const this)
{
  return 1;
}


// CDOTA_Modifier_Techies_Suicide_Leap_Animation::DeclareFunctions  (line 1125, @0x0000000002cc9590, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Techies_Suicide_Leap_Animation::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_Techies_Suicide_Leap_Animation::DeclareFunctions(
        CDOTA_Modifier_Techies_Suicide_Leap_Animation *const this)
{
  this->m_Functions[155].__pfn = CDOTA_Modifier_Techies_Suicide_Leap_Animation::GetActivityTranslationModifiers;
  this->m_Functions[155].__delta = 0;
}


// CDOTA_Modifier_Techies_Suicide_Leap_Animation::GetActivityTranslationModifiers  (line 1133, @0x0000000002cc95b0, libserver.so)
// strings: "blast_off"
ModifierVariant_t __fastcall CDOTA_Modifier_Techies_Suicide_Leap_Animation::GetActivityTranslationModifiers(
        CDOTA_Modifier_Techies_Suicide_Leap_Animation *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "blast_off";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_Techies_Suicide_Leap::~CDOTA_Modifier_Techies_Suicide_Leap  (line 1151, @0x0000000002d27930, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Techies_Suicide_Leap::~CDOTA_Modifier_Techies_Suicide_Leap(
        CDOTA_Modifier_Techies_Suicide_Leap *const this)
{
  this->_vptr_CDOTA_Buff = &off_4635230;
  this->_vptr_CHorizontalMotionController = &off_4635538;
  this->_vptr_CVerticalMotionController = &off_4635578;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Techies_Suicide_Leap::~CDOTA_Modifier_Techies_Suicide_Leap  (line 1151, @0x0000000002d27960, libserver.so)  // inlines: ~CDOTA_Modifier_Techies_Suicide_Leap
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Techies_Suicide_Leap::~CDOTA_Modifier_Techies_Suicide_Leap(
        CDOTA_Modifier_Techies_Suicide_Leap *const this)
{
  this->_vptr_CDOTA_Buff = &off_4635230;
  this->_vptr_CHorizontalMotionController = &off_4635538;
  this->_vptr_CVerticalMotionController = &off_4635578;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Techies_Suicide_Leap::IsHidden  (line 1166, @0x0000000002d1e8f0, libserver.so)
bool __fastcall CDOTA_Modifier_Techies_Suicide_Leap::IsHidden(CDOTA_Modifier_Techies_Suicide_Leap *const this)
{
  return 1;
}


// CDOTA_Modifier_Techies_Suicide_Leap::IsStunDebuff  (line 1167, @0x0000000002d1e900, libserver.so)
bool __fastcall CDOTA_Modifier_Techies_Suicide_Leap::IsStunDebuff(CDOTA_Modifier_Techies_Suicide_Leap *const this)
{
  return 1;
}


// CDOTA_Modifier_Techies_Suicide_Leap::IsPurgable  (line 1169, @0x0000000002d1e910, libserver.so)
bool __fastcall CDOTA_Modifier_Techies_Suicide_Leap::IsPurgable(CDOTA_Modifier_Techies_Suicide_Leap *const this)
{
  return 0;
}


// CDOTA_Modifier_Techies_Suicide_Leap::IsHorizontalMotionValidToApply  (line 1175, @0x0000000002d1e920, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Techies_Suicide_Leap::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_Techies_Suicide_Leap *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Techies_Suicide_Leap::IsVerticalMotionValidToApply  (line 1176, @0x0000000002d1e950, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Techies_Suicide_Leap::IsVerticalMotionValidToApply(
        CDOTA_Modifier_Techies_Suicide_Leap *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Techies_Suicide_Leap::IsMotionController  (line 1178, @0x0000000002d1e980, libserver.so)
bool __fastcall CDOTA_Modifier_Techies_Suicide_Leap::IsMotionController(
        CDOTA_Modifier_Techies_Suicide_Leap *const this)
{
  return 1;
}


// CDOTA_Modifier_Techies_Suicide_Leap::RemoveOnDeath  (line 1185, @0x0000000002d1e990, libserver.so)
bool __fastcall CDOTA_Modifier_Techies_Suicide_Leap::RemoveOnDeath(CDOTA_Modifier_Techies_Suicide_Leap *const this)
{
  return 0;
}


// CDOTA_Modifier_Techies_Suicide_Leap::DeclareFunctions  (line 1210, @0x0000000002cc95d0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Techies_Suicide_Leap::GetOverrideAnimation(CModifierParams const&)
void __fastcall CDOTA_Modifier_Techies_Suicide_Leap::DeclareFunctions(CDOTA_Modifier_Techies_Suicide_Leap *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_Techies_Suicide_Leap::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
}


// CDOTA_Modifier_Techies_Suicide_Leap::GetOverrideAnimation  (line 1217, @0x0000000002cc95f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Techies_Suicide_Leap::GetOverrideAnimation(
        CDOTA_Modifier_Techies_Suicide_Leap *const this,
        const CModifierParams *const params)
{
  return 0x44BDA00000000001uLL;
}


// CDOTA_Modifier_Techies_Suicide_Leap::CheckState  (line 1222, @0x0000000002cc9610, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Techies_Suicide_Leap::CheckState(
        CDOTA_Modifier_Techies_Suicide_Leap *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x20uLL;
  buffState->m_nDisabledStateMask &= ~0x20uLL;
}


// CDOTA_Modifier_Techies_Suicide_Leap::OnCreated  (line 1231, @0x0000000002cf8190, libserver.so)  // inlines: DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, Square<float>, VectorDivide, VectorSubtract, operator-, operator/, operator=
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::ApplyHorizontalMotionController, CDOTA_Buff::Destroy, CDOTALocomotor::ApplyVerticalMotionController, CBaseEntity::GetAbsOrigin, GetPositionOnGround, KeyValues::GetFloat, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt (15 total)
// strings: "vLocZ", "vLocY", "vLocX", "particles/units/heroes/hero_techies/techies_blast_off_trail.vpcf", "attach_hitloc"
// globals: TECHIES_MINIMUM_HEIGHT_ABOVE_LOWEST, TECHIES_MINIMUM_HEIGHT_ABOVE_HIGHEST, TECHIES_ACCELERATION_Z
void __fastcall CDOTA_Modifier_Techies_Suicide_Leap::OnCreated(
        CDOTA_Modifier_Techies_Suicide_Leap *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTALocomotor *v7; // rax
  CDOTA_BaseNPC *v8; // r13
  CDOTA_BaseNPC *v9; // rax
  const Vector *AbsOrigin; // rax
  float v11; // xmm1_4
  float v12; // xmm1_4
  vec_t v13; // xmm0_4
  CDOTABaseAbility *Ability; // rdi
  float LevelSpecialValue; // xmm0_4
  __m128d z_low; // xmm2
  float v17; // xmm4_4
  float z; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  double v23; // xmm0_8
  float v24; // xmm3_4
  float m_flInitialVelocityZ; // xmm2_4
  float v26; // xmm0_4
  float v27; // xmm2_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm2_4
  vec_t v32; // xmm0_4
  CDOTA_BaseNPC *v33; // rax
  int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *v35; // rax
  const Vector *v36; // r13
  CDOTA_BaseNPC *v37; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  vec_t Float; // [rsp+8h] [rbp-38h]
  vec_t v40; // [rsp+Ch] [rbp-34h]
  Vector PositionOnGround; // 0:kr00_12.12

  this->m_bHorizontalMotionInterrupted = 0;
  this->m_bDamageApplied = 0;
  this->m_bTargetTeleported = 0;
  Parent = CDOTA_Buff::GetParent(this);
  v5 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v5, &this->CHorizontalMotionController, 0)
    && (v6 = CDOTA_Buff::GetParent(this),
        v7 = (*(v6->_vptr_IHandleEntity + 376))(v6),
        CDOTALocomotor::ApplyVerticalMotionController(v7, &this->CVerticalMotionController, 0)) )
  {
    v8 = CDOTA_Buff::GetParent(this);
    v9 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
    PositionOnGround = GetPositionOnGround(AbsOrigin, v8);
    this->m_vStartPosition.z = PositionOnGround.z;
    this->m_vStartPosition.x = PositionOnGround.x;
    this->m_flCurrentTimeHoriz = 0.0;
    this->m_vStartPosition.y = PositionOnGround.y;
    this->m_flCurrentTimeVert = 0.0;
    Float = KeyValues::GetFloat(pKV, "vLocZ", PositionOnGround.z);
    v40 = KeyValues::GetFloat(pKV, "vLocY", v11);
    v13 = KeyValues::GetFloat(pKV, "vLocX", v12);
    this->m_vLoc.x = v13;
    this->m_vLoc.y = v40;
    this->m_vLoc.z = Float;
    this->m_vLastKnownTargetPosition.x = v13;
    this->m_vLastKnownTargetPosition.y = v40;
    this->m_vLastKnownTargetPosition.z = Float;
    Ability = CDOTA_Buff::GetAbility(this);
    if ( Ability != 0 )
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "duration", -1, 0);
    else
      LevelSpecialValue = 0.0;
    z_low = LODWORD(this->m_vLastKnownTargetPosition.z);
    v17 = (TECHIES_MINIMUM_HEIGHT_ABOVE_LOWEST * LevelSpecialValue) * LevelSpecialValue;
    z = this->m_vStartPosition.z;
    v19 = fmaxf(
            fminf(*z_low.m128d_f64, z) + v17,
            fmaxf(this->m_vLastKnownTargetPosition.z, z) + TECHIES_MINIMUM_HEIGHT_ABOVE_HIGHEST);
    v20 = fsqrt(((v19 - z) + (v19 - z)) * TECHIES_ACCELERATION_Z);
    v21 = TECHIES_ACCELERATION_Z;
    this->m_flInitialVelocityZ = v20;
    v22 = (v20 * v20) - ((v21 + v21) * (*z_low.m128d_f64 - this->m_vStartPosition.z));
    if ( v22 < 0.0 )
      v23 = 0.0;
    else
      v23 = v22;
    z_low.m128d_f64[0] = sqrt(v23);
    v24 = _mm_movedup_pd(z_low).m128d_f64[0];
    m_flInitialVelocityZ = this->m_flInitialVelocityZ;
    this->m_vHorizontalVelocity.z = 0.0;
    v26 = m_flInitialVelocityZ;
    v27 = (m_flInitialVelocityZ - v24) / v21;
    v28 = (v26 + v24) / v21;
    v29 = this->m_vLastKnownTargetPosition.y - this->m_vStartPosition.y;
    v30 = fmaxf(v28, v27);
    v31 = 1.0 / v30;
    this->m_flPredictedTotalTime = v30;
    v32 = (this->m_vLastKnownTargetPosition.x - this->m_vStartPosition.x) * (1.0 / v30);
    this->m_vHorizontalVelocity.y = v29 * v31;
    this->m_vHorizontalVelocity.x = v32;
    v33 = CDOTA_Buff::GetParent(this);
    BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                           this,
                           "particles/units/heroes/hero_techies/techies_blast_off_trail.vpcf",
                           1,
                           v33,
                           0);
    v35 = CDOTA_Buff::GetParent(this);
    v36 = CBaseEntity::GetAbsOrigin(v35);
    v37 = CDOTA_Buff::GetParent(this);
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(
      ParticleManager,
      BuffParticleEffect,
      1,
      v37,
      5,
      "attach_hitloc",
      *v36,
      1);
    CDOTA_Buff::AddParticle(this, BuffParticleEffect, 0, 0, -1, 0, 0);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Techies_Suicide_Leap::UpdateHorizontalMotion  (line 1300, @0x0000000002ccd1c0, libserver.so)  // inlines: NormalizeInPlace, VectorAdd, VectorDivide, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator/, operator=
// calls: CBaseEntity::GetAbsOrigin, VectorNormalize, CBaseEntity::SetAbsOrigin
// globals: TECHIES_MAX_HORIZONTAL_ACCELERATION
void __fastcall CDOTA_Modifier_Techies_Suicide_Leap::UpdateHorizontalMotion(
        CDOTA_Modifier_Techies_Suicide_Leap *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  float m_flPredictedTotalTime; // xmm2_4
  float y; // xmm3_4
  float v8; // xmm4_4
  float v9; // xmm4_4
  const Vector *AbsOrigin; // rax
  float v11; // xmm3_4
  float v12; // xmm2_4
  vec_t v13; // xmm4_4
  vec_t v14; // xmm0_4
  float v15; // xmm0_4
  vec_t v16; // xmm3_4
  vec_t v17; // xmm2_4
  vec_t v18; // xmm0_4
  float v19; // [rsp+Ch] [rbp-44h]
  float v20; // [rsp+10h] [rbp-40h]
  float dtb; // [rsp+14h] [rbp-3Ch]
  float v23; // [rsp+18h] [rbp-38h]
  float x; // [rsp+18h] [rbp-38h]
  float z; // [rsp+1Ch] [rbp-34h]
  Vector vVelDif; // [rsp+20h] [rbp-30h] BYREF
  Vector vNewPos; // [rsp+30h] [rbp-20h] BYREF

  m_flPredictedTotalTime = this->m_flPredictedTotalTime;
  y = this->m_vStartPosition.y;
  v8 = fminf(a3 + this->m_flCurrentTimeHoriz, m_flPredictedTotalTime);
  this->m_flCurrentTimeHoriz = v8;
  v9 = v8 / m_flPredictedTotalTime;
  v19 = ((this->m_vLastKnownTargetPosition.x - this->m_vStartPosition.x) * v9) + this->m_vStartPosition.x;
  v23 = ((this->m_vLastKnownTargetPosition.y - y) * v9) + y;
  AbsOrigin = CBaseEntity::GetAbsOrigin(me);
  v20 = a3;
  v11 = 1.0 / a3;
  v12 = v23;
  x = AbsOrigin->x;
  dtb = AbsOrigin->y;
  z = AbsOrigin->z;
  v13 = (0.0 * v11) - this->m_vHorizontalVelocity.z;
  v14 = ((v19 - AbsOrigin->x) * v11) - this->m_vHorizontalVelocity.x;
  vVelDif.y = ((v12 - dtb) * v11) - this->m_vHorizontalVelocity.y;
  vVelDif.z = v13;
  vVelDif.x = v14;
  v15 = fminf(VectorNormalize(&vVelDif), TECHIES_MAX_HORIZONTAL_ACCELERATION);
  v16 = ((vVelDif.x * v15) * v20) + this->m_vHorizontalVelocity.x;
  v17 = ((vVelDif.y * v15) * v20) + this->m_vHorizontalVelocity.y;
  v18 = ((v15 * vVelDif.z) * v20) + this->m_vHorizontalVelocity.z;
  this->m_vHorizontalVelocity.x = v16;
  this->m_vHorizontalVelocity.y = v17;
  this->m_vHorizontalVelocity.z = v18;
  vNewPos.x = (v16 * v20) + x;
  vNewPos.y = (v17 * v20) + dtb;
  vNewPos.z = (v20 * v18) + z;
  CBaseEntity::SetAbsOrigin(me, &vNewPos);
}


// CDOTA_Modifier_Techies_Suicide_Leap::UpdateVerticalMotion  (line 1325, @0x0000000002d06010, libserver.so)  // inlines: Square<float>
// calls: CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetParent, GetGroundHeight, CBaseEntity::SetAbsOrigin, CDOTA_Modifier_Techies_Suicide_Leap::DisableMotionControl, CDOTA_Buff::GetAbility, CDOTA_Ability_Techies_Suicide::BlowUp
// globals: TECHIES_ACCELERATION_Z
void __fastcall CDOTA_Modifier_Techies_Suicide_Leap::UpdateVerticalMotion(
        CDOTA_Modifier_Techies_Suicide_Leap *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  float v6; // xmm2_4
  float v7; // r14d
  const Vector *AbsOrigin; // rax
  float m_flCurrentTimeVert; // xmm0_4
  float v10; // xmm3_4
  float v11; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax
  float GroundHeight; // xmm0_4
  CDOTA_Ability_Techies_Suicide *Ability; // rax
  float v15; // [rsp+8h] [rbp-38h]
  float v16; // [rsp+Ch] [rbp-34h]
  Vector vNewPos; // [rsp+10h] [rbp-30h] BYREF

  v6 = this->m_flCurrentTimeVert + a3;
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(this->m_flInitialVelocityZ)));
  v15 = TECHIES_ACCELERATION_Z;
  this->m_flCurrentTimeVert = v6;
  v16 = v6;
  AbsOrigin = CBaseEntity::GetAbsOrigin(me);
  m_flCurrentTimeVert = this->m_flCurrentTimeVert;
  v10 = m_flCurrentTimeVert * m_flCurrentTimeVert;
  v11 = m_flCurrentTimeVert * this->m_flInitialVelocityZ;
  *&vNewPos.x = *&AbsOrigin->x;
  vNewPos.z = (((-0.5 * TECHIES_ACCELERATION_Z) * v10) + this->m_vStartPosition.z) + v11;
  Parent = CDOTA_Buff::GetParent(this);
  GroundHeight = GetGroundHeight(&vNewPos, Parent);
  if ( GroundHeight > vNewPos.z && (v7 - (v16 * v15)) < 0.0 )
  {
    vNewPos.z = GroundHeight;
    CBaseEntity::SetAbsOrigin(me, &vNewPos);
    if ( !this->m_bHorizontalMotionInterrupted )
    {
      Ability = CDOTA_Buff::GetAbility(this);
      if ( Ability != 0 )
        CDOTA_Ability_Techies_Suicide::BlowUp(Ability);
    }
    CDOTA_Modifier_Techies_Suicide_Leap::DisableMotionControl(this);
    (*(this->_vptr_CDOTA_Buff + 63))(this, 1, 0.15000001);
  }
  else
  {
    CBaseEntity::SetAbsOrigin(me, &vNewPos);
  }
}


// CDOTA_Modifier_Techies_Suicide_Leap::OnHorizontalMotionInterrupted  (line 1368, @0x0000000002cc9620, libserver.so)
void __fastcall CDOTA_Modifier_Techies_Suicide_Leap::OnHorizontalMotionInterrupted(
        CDOTA_Modifier_Techies_Suicide_Leap *const this)
{
  this->m_bHorizontalMotionInterrupted = 1;
}


// CDOTA_Modifier_Techies_Suicide_Leap::OnVerticalMotionInterrupted  (line 1377, @0x0000000002ccc3c0, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Techies_Suicide_Leap::OnVerticalMotionInterrupted(
        CDOTA_Modifier_Techies_Suicide_Leap *const this)
{
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Techies_Suicide_Leap::DisableMotionControl  (line 1384, @0x0000000002ce5660, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController, CDOTALocomotor::RemoveVerticalMotionController
// callers: CDOTA_Modifier_Techies_Suicide_Leap::OnDestroy, CDOTA_Modifier_Techies_Suicide_Leap::UpdateVerticalMotion
void __fastcall CDOTA_Modifier_Techies_Suicide_Leap::DisableMotionControl(
        CDOTA_Modifier_Techies_Suicide_Leap *const this)
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


// CDOTA_Modifier_Techies_Suicide_Leap::OnDestroy  (line 1394, @0x0000000002ce56c0, libserver.so)
// calls: CDOTA_Modifier_Techies_Suicide_Leap::DisableMotionControl
void __fastcall CDOTA_Modifier_Techies_Suicide_Leap::OnDestroy(CDOTA_Modifier_Techies_Suicide_Leap *const this)
{
  CDOTA_Modifier_Techies_Suicide_Leap::DisableMotionControl(this);
}


// CDOTA_NPC_TechiesMines::~CDOTA_NPC_TechiesMines  (line 1421, @0x0000000002d25e10, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_NPC_TechiesMines::~CDOTA_NPC_TechiesMines(CDOTA_NPC_TechiesMines *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_NPC_TechiesMines::~CDOTA_NPC_TechiesMines  (line 1421, @0x0000000002d25e60, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_NPC_TechiesMines
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_NPC_TechiesMines::~CDOTA_NPC_TechiesMines(CDOTA_NPC_TechiesMines *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_NPC_TechiesMines::Schema_DynamicBinding  (line 1423, @0x0000000002d1e9a0, libserver.so)
// globals: CDOTA_NPC_TechiesMines::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_NPC_TechiesMines::Schema_DynamicBinding(
        const CDOTA_NPC_TechiesMines *const this)
{
  return CDOTA_NPC_TechiesMines::s_pSchemaBinding;
}


// CDOTA_NPC_TechiesMines::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1423, @0x0000000002d1e9d0, libserver.so)
// globals: CDOTA_NPC_TechiesMines::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_NPC_TechiesMines::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_NPC_TechiesMines::CEntityInstanceEntityClass *const this)
{
  return CDOTA_NPC_TechiesMines::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_NPC_TechiesMines::CEntityInstanceEntityClass::DestructInstance  (line 1423, @0x0000000002d1e9e0, libserver.so)  // inlines: Destruct<CDOTA_NPC_TechiesMines>
void __fastcall CDOTA_NPC_TechiesMines::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_NPC_TechiesMines::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_NPC_TechiesMines::CEntityInstanceEntityClass::FreeInstance  (line 1423, @0x0000000002d1ea00, libserver.so)
void __fastcall CDOTA_NPC_TechiesMines::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_NPC_TechiesMines::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_NPC_TechiesMines::CEntityInstanceEntityClass::CanAllocate  (line 1423, @0x0000000002d1ea20, libserver.so)
bool __fastcall CDOTA_NPC_TechiesMines::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_NPC_TechiesMines::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_NPC_TechiesMines::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1423, @0x0000000002d1ea30, libserver.so)
// globals: CDOTA_NPC_TechiesMines::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_NPC_TechiesMines::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_NPC_TechiesMines::CEntityInstanceEntityClass *const this)
{
  return CDOTA_NPC_TechiesMines::s_pSchemaBinding;
}


// CDOTA_NPC_TechiesMines::CEntityInstanceEntityClass::AllocateInstance  (line 1423, @0x0000000002d24ad0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_NPC_TechiesMines::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_NPC_TechiesMines::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4504);
  memset(v1, 0, 0x1198u);
  return v1;
}


// CDOTA_NPC_TechiesMines::CEntityInstanceEntityClass::ConstructInstance  (line 1423, @0x0000000002d25ad0, libserver.so)  // inlines: CDOTA_BaseNPC_Additive, CDOTA_NPC_TechiesMines, Construct<CDOTA_NPC_TechiesMines>
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_NPC_TechiesMines::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_NPC_TechiesMines::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *p = &off_4635630;
    *(p + 236) = &off_4636598;
    *(p + 257) = &off_46368C8;
  }
  return p;
}


// CDOTA_NPC_TechiesMines::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1423, @0x0000000002d35350, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_NPC_TechiesMines::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_NPC_TechiesMines::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_NPC_TechiesMines::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1423, @0x0000000002d35660, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_NPC_TechiesMines::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_NPC_TechiesMines::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_NPC_TechiesMines::GetEntityClassInternal  (line 1423, @0x0000000002d4d0c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CDOTA_BaseNPC_Additive::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "npc_dota_techies_mines", "CDOTA_NPC_TechiesMines"
// globals: `guard variable for'CDOTA_NPC_TechiesMines::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_TechiesMinesClass, CDOTA_NPC_TechiesMines::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_TechiesMinesClass, __dso_handle, CDOTA_NPC_TechiesMines::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_NPC_TechiesMines::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_TechiesMinesClassInfo, CDOTA_NPC_TechiesMines::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_TechiesMinesClassInfo
CEntityClass *__cdecl CDOTA_NPC_TechiesMines::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_NPC_TechiesMines::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_TechiesMinesClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_NPC_TechiesMines::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_TechiesMinesClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_NPC_TechiesMines::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_TechiesMinesClass);
    CDOTA_NPC_TechiesMines::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_TechiesMinesClass._vptr_CEntityClass = off_46355B0;
    __cxa_guard_release(&`guard variable for'CDOTA_NPC_TechiesMines::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_TechiesMinesClass);
    __cxa_atexit(
      CDOTA_NPC_TechiesMines::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_NPC_TechiesMines::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_TechiesMinesClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_NPC_TechiesMinesClass != 0 )
    return &CDOTA_NPC_TechiesMines::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_TechiesMinesClass;
  if ( `guard variable for'CDOTA_NPC_TechiesMines::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_TechiesMinesClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_NPC_TechiesMines::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_TechiesMinesClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Additive::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_NPC_TechiesMines::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_TechiesMinesClassInfo,
      "CDOTA_NPC_TechiesMines",
      "npc_dota_techies_mines",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_NPC_TechiesMines::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_TechiesMinesClassInfo);
  }
  CDOTA_NPC_TechiesMines::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_TechiesMinesClass.m_pClassInfo = &CDOTA_NPC_TechiesMines::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_TechiesMinesClassInfo;
  CDOTA_NPC_TechiesMines::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_TechiesMinesClass.m_pBaseClassInfo = CDOTA_NPC_TechiesMines::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_TechiesMinesClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_NPC_TechiesMinesClass = &CDOTA_NPC_TechiesMines::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_TechiesMinesClass;
  CDOTA_NPC_TechiesMines::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_TechiesMinesClassInfo.m_pClass = &CDOTA_NPC_TechiesMines::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_TechiesMinesClass;
  CDOTA_NPC_TechiesMines::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_TechiesMinesClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_NPC_TechiesMinesClass->m_pComponentOverrides = 0;
  return &CDOTA_NPC_TechiesMines::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_TechiesMinesClass;
}


// CDOTA_NPC_TechiesMines::CanAcceptTargetToAttack  (line 1435, @0x0000000002d1ea40, libserver.so)
bool __fastcall CDOTA_NPC_TechiesMines::CanAcceptTargetToAttack(
        CDOTA_NPC_TechiesMines *const this,
        CDOTA_BaseNPC *pTargetNPC)
{
  return 0;
}


// CDOTA_NPC_TechiesMines::CanBeSelected  (line 1441, @0x0000000002d2cd80, libserver.so)
// calls: CBaseEntity::GetLifeState
bool __fastcall CDOTA_NPC_TechiesMines::CanBeSelected(CDOTA_NPC_TechiesMines *const this)
{
  return CBaseEntity::GetLifeState(this) == LifeState_t::LIFE_ALIVE;
}


// CDOTA_NPC_TechiesMines::CanBeAutoAttacked  (line 1444, @0x0000000002d1ea50, libserver.so)
bool __fastcall CDOTA_NPC_TechiesMines::CanBeAutoAttacked(CDOTA_NPC_TechiesMines *const this)
{
  return 0;
}


// CDOTA_NPC_TechiesMines::ShouldTransmit  (line 1445, @0x0000000002d26220, libserver.so)
// calls: CBaseEntity::ShouldTransmit
int __fastcall CDOTA_NPC_TechiesMines::ShouldTransmit(
        CDOTA_NPC_TechiesMines *const this,
        const CGameCheckTransmitInfo *pInfo)
{
  return CBaseEntity::ShouldTransmit(this, pInfo);
}


// CDOTA_NPC_TechiesMines::OnDying  (line 1453, @0x0000000002d28bc0, libserver.so)
// calls: CBaseEntity::AddEffects
void __fastcall CDOTA_NPC_TechiesMines::OnDying(CDOTA_NPC_TechiesMines *const this)
{
  CBaseEntity::AddEffects(this, 32);
}


// CDOTA_NPC_TechiesMines::YouForgotToImplementOrDeclareServerClass  (line 1516, @0x0000000002cc9640, libserver.so)
int __fastcall CDOTA_NPC_TechiesMines::YouForgotToImplementOrDeclareServerClass(CDOTA_NPC_TechiesMines *const this)
{
  return 0;
}


// CDOTA_NPC_TechiesMines::GetServerClass  (line 1516, @0x0000000002cdeb30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_NPC_TechiesMines::GetServerClass(CDOTA_NPC_TechiesMines *const this)
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


// CDOTA_Ability_Techies_RemoteMines::~CDOTA_Ability_Techies_RemoteMines  (line 1522, @0x0000000002d2bf50, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Techies_RemoteMines::~CDOTA_Ability_Techies_RemoteMines(
        CDOTA_Ability_Techies_RemoteMines *const this)
{
  this->_vptr_IHandleEntity = &off_46369B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Techies_RemoteMines::~CDOTA_Ability_Techies_RemoteMines  (line 1522, @0x0000000002d2bf70, libserver.so)  // inlines: ~CDOTA_Ability_Techies_RemoteMines
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Techies_RemoteMines::~CDOTA_Ability_Techies_RemoteMines(
        CDOTA_Ability_Techies_RemoteMines *const this)
{
  this->_vptr_IHandleEntity = &off_46369B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Techies_RemoteMines::Schema_DynamicBinding  (line 1524, @0x0000000002d1ea60, libserver.so)
// globals: CDOTA_Ability_Techies_RemoteMines::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Techies_RemoteMines::Schema_DynamicBinding(
        const CDOTA_Ability_Techies_RemoteMines *const this)
{
  return CDOTA_Ability_Techies_RemoteMines::s_pSchemaBinding;
}


// CDOTA_Ability_Techies_RemoteMines::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1524, @0x0000000002d1ea70, libserver.so)
// globals: CDOTA_Ability_Techies_RemoteMines::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Techies_RemoteMines::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Techies_RemoteMines::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Techies_RemoteMines::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Techies_RemoteMines::CEntityInstanceEntityClass::DestructInstance  (line 1524, @0x0000000002d1ea80, libserver.so)  // inlines: Destruct<CDOTA_Ability_Techies_RemoteMines>
void __fastcall CDOTA_Ability_Techies_RemoteMines::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Techies_RemoteMines::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Techies_RemoteMines::CEntityInstanceEntityClass::FreeInstance  (line 1524, @0x0000000002d1eaa0, libserver.so)
void __fastcall CDOTA_Ability_Techies_RemoteMines::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Techies_RemoteMines::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Techies_RemoteMines::CEntityInstanceEntityClass::CanAllocate  (line 1524, @0x0000000002d1eac0, libserver.so)
bool __fastcall CDOTA_Ability_Techies_RemoteMines::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Techies_RemoteMines::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Techies_RemoteMines::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1524, @0x0000000002d1ead0, libserver.so)
// globals: CDOTA_Ability_Techies_RemoteMines::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Techies_RemoteMines::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Techies_RemoteMines::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Techies_RemoteMines::s_pSchemaBinding;
}


// CDOTA_Ability_Techies_RemoteMines::CEntityInstanceEntityClass::AllocateInstance  (line 1524, @0x0000000002d24b10, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Techies_RemoteMines::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Techies_RemoteMines::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Techies_RemoteMines::CEntityInstanceEntityClass::ConstructInstance  (line 1524, @0x0000000002d29270, libserver.so)  // inlines: CDOTA_Ability_Techies_RemoteMines, CEntityHandle, CHandle, Construct<CDOTA_Ability_Techies_RemoteMines>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Techies_RemoteMines::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Techies_RemoteMines::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 229) = -1;
    *p = &off_46369B0;
  }
  return p;
}


// CDOTA_Ability_Techies_RemoteMines::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1524, @0x0000000002d34400, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Techies_RemoteMines::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Techies_RemoteMines::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Techies_RemoteMines::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1524, @0x0000000002d34420, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Techies_RemoteMines::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Techies_RemoteMines::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Techies_RemoteMines::GetEntityClassInternal  (line 1524, @0x0000000002d48f20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "techies_remote_mines", "CDOTA_Ability_Techies_RemoteMines"
// globals: `guard variable for'CDOTA_Ability_Techies_RemoteMines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_RemoteMinesClass, CDOTA_Ability_Techies_RemoteMines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_RemoteMinesClass, __dso_handle, CDOTA_Ability_Techies_RemoteMines::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Techies_RemoteMines::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_RemoteMinesClassInfo, CDOTA_Ability_Techies_RemoteMines::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_RemoteMinesClassInfo
CEntityClass *__cdecl CDOTA_Ability_Techies_RemoteMines::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Techies_RemoteMines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_RemoteMinesClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Techies_RemoteMines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_RemoteMinesClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Techies_RemoteMines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_RemoteMinesClass);
    CDOTA_Ability_Techies_RemoteMines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_RemoteMinesClass._vptr_CEntityClass = off_4636930;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Techies_RemoteMines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_RemoteMinesClass);
    __cxa_atexit(
      CDOTA_Ability_Techies_RemoteMines::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Techies_RemoteMines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_RemoteMinesClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Techies_RemoteMinesClass != 0 )
    return &CDOTA_Ability_Techies_RemoteMines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_RemoteMinesClass;
  if ( `guard variable for'CDOTA_Ability_Techies_RemoteMines::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_RemoteMinesClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Techies_RemoteMines::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_RemoteMinesClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Techies_RemoteMines::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_RemoteMinesClassInfo,
      "CDOTA_Ability_Techies_RemoteMines",
      "techies_remote_mines",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Techies_RemoteMines::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_RemoteMinesClassInfo);
  }
  CDOTA_Ability_Techies_RemoteMines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_RemoteMinesClass.m_pClassInfo = &CDOTA_Ability_Techies_RemoteMines::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_RemoteMinesClassInfo;
  CDOTA_Ability_Techies_RemoteMines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_RemoteMinesClass.m_pBaseClassInfo = CDOTA_Ability_Techies_RemoteMines::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_RemoteMinesClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Techies_RemoteMinesClass = &CDOTA_Ability_Techies_RemoteMines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_RemoteMinesClass;
  CDOTA_Ability_Techies_RemoteMines::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_RemoteMinesClassInfo.m_pClass = &CDOTA_Ability_Techies_RemoteMines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_RemoteMinesClass;
  CDOTA_Ability_Techies_RemoteMines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_RemoteMinesClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Techies_RemoteMinesClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Techies_RemoteMines::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_RemoteMinesClass;
}


// CDOTA_Ability_Techies_RemoteMines::GetCastRange  (line 1529, @0x0000000002d470d0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCastRange, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "cast_range_scepter"
int __fastcall CDOTA_Ability_Techies_RemoteMines::GetCastRange(
        CDOTA_Ability_Techies_RemoteMines *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "cast_range_scepter", -1, 0);
  else
    return CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
}


// CDOTA_Ability_Techies_RemoteMines::GetAssociatedSecondaryAbilities  (line 1530, @0x0000000002d1eae0, libserver.so)
// strings: "techies_focused_detonate"
const char *__fastcall CDOTA_Ability_Techies_RemoteMines::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Techies_RemoteMines *const this)
{
  return "techies_focused_detonate";
}


// CDOTA_Ability_Techies_RemoteMines::YouForgotToImplementOrDeclareServerClass  (line 1541, @0x0000000002cc9650, libserver.so)
int __fastcall CDOTA_Ability_Techies_RemoteMines::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Techies_RemoteMines *const this)
{
  return 0;
}


// CDOTA_Ability_Techies_RemoteMines::GetServerClass  (line 1541, @0x0000000002cdea30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Techies_RemoteMines::GetServerClass(
        CDOTA_Ability_Techies_RemoteMines *const this)
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


// CDOTA_Ability_Techies_RemoteMines::OnSpellStart  (line 1550, @0x0000000002cf4850, libserver.so)  // inlines: DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetLevelSpecialValueFor<float>, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, __stack_chk_fail, CDOTABaseAbility::GetCaster, CDOTAPlayer::SetLastOrderTime, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::GetCursorPosition (15 total)
// strings: "activation_time", "modifier_techies_remote_mine", "fadetime", "modifier_techies_deploy_trap", "techies_remote_mines_self_detonate", "Hero_Techies.RemoteMine.Plant"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Techies_RemoteMines::OnSpellStart(CDOTA_Ability_Techies_RemoteMines *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_BaseNPC *Caster; // rax
  CDOTAPlayer *v7; // rdi
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  CDOTA_BaseNPC *v12; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTABaseAbility *AbilityByName; // rax
  Vector vOrigin; // [rsp+0h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-38h]

  v17 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "activation_time", -1, 0);
  m_Index = this->m_hRMine.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hRMine.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hRMine.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          Caster = CDOTABaseAbility::GetCaster(this);
          v7 = (*(Caster->_vptr_IHandleEntity + 413))(Caster);
          if ( v7 != 0 )
          {
            v9 = 0.0;
            if ( g_pGameRules != 0 )
              v9 = *&g_pGameRules[18].m_szQuestName[20];
            CDOTAPlayer::SetLastOrderTime(v7, v9, v8, 1);
          }
          KeyValues::KeyValues(&kv, "modifier_techies_remote_mine");
          KeyValues::SetFloat(&kv, "fadetime", v10);
          KeyValues::SetFloat(&kv, "duration", v11);
          v12 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(m_pInstance, v12, this, "modifier_techies_remote_mine", &kv, 0);
          ModifierByName = CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_techies_deploy_trap", 0);
          if ( ModifierByName != 0 )
            CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
          AbilityByName = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "techies_remote_mines_self_detonate", 0);
          if ( AbilityByName != 0 )
            CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
          vOrigin = CDOTABaseAbility::GetCursorPosition(this);
          DOTA_EmitSoundLocation(&vOrigin, "Hero_Techies.RemoteMine.Plant", 1);
          KeyValues::~KeyValues(&kv);
        }
      }
    }
  }
}


// CDOTA_Ability_Techies_RemoteMines::OnAbilityPhaseStart  (line 1602, @0x0000000002cdf8a0, libserver.so)  // inlines: Get, GetEHandle, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, NetworkStateChanged, Set, SetBlockCreepSpawn, SetUnitLabelIndex, Vector, entindex, operator CBaseEntity*, operator->, operator=, operator=<int>
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, DOTA_Character_ScriptSpawn_Synchronous, CDOTA_BaseNPC::SetControllableByPlayer, CEntityInstance::GetEntityIndex, FindClearSpaceForUnit, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CBaseEntity::GetAbsAngles, RandomFloat, CBaseEntity::SetAbsAngles (24 total)
// strings: "npc_dota_techies_remote_mine", "modifier_techies_deploy_trap", "Hero_Techies.RemoteMine.Toss", "particles/units/heroes/hero_techies/techies_remote_mine_plant.vpcf", "attach_remote", "attach_attack4"
bool __fastcall CDOTA_Ability_Techies_RemoteMines::OnAbilityPhaseStart(CDOTA_Ability_Techies_RemoteMines *const this)
{
  CDOTA_BaseNPC *Caster; // r13
  int m_Value; // r12d
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // r12
  void (__fastcall *v6)(CDOTA_BaseNPC *, _QWORD); // r13
  CDOTA_BaseNPC *v7; // rax
  void (__fastcall *v8)(CDOTA_BaseNPC *, CDOTA_BaseNPC *); // r13
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  int v11; // eax
  unsigned __int8 m_Data; // r13
  CEntityIdentity *m_pEntity; // rax
  int v14; // edx
  __int16 v15; // cx
  float v16; // xmm1_4
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  const QAngle *AbsAngles; // rax
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  int m_nFXIndex; // r13d
  const CBaseAnimating *v24; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  __int64 v26; // r12
  CDOTA_BaseNPC *v27; // rax
  int v28; // r13d
  const CBaseAnimating *v29; // r14
  CDOTA_ParticleManager *v30; // rax
  const CBaseEntity *v31; // rax
  const Vector *AbsOrigin; // rax
  const Vector *v33; // r13
  CDOTA_ParticleManager *v34; // rax
  CDOTA_ParticleManager *v35; // rax
  const CBaseEntity *v36; // rax
  const Vector *v37; // r13
  CEntityInstance *v38; // rax
  const CBaseAnimating *v39; // r14
  CDOTA_ParticleManager *v40; // rax
  CDOTA_BaseNPC *v41; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-C4h]
  Vector vecFwd; // [rsp+10h] [rbp-C0h] BYREF
  Vector vecRight; // [rsp+20h] [rbp-B0h] BYREF
  Vector vecUp; // [rsp+30h] [rbp-A0h] BYREF
  double v47; // [rsp+40h] [rbp-90h]
  float v48; // [rsp+48h] [rbp-88h]
  double v49; // [rsp+50h] [rbp-80h]
  float v50; // [rsp+58h] [rbp-78h]
  QAngle facingAngle; // [rsp+60h] [rbp-70h] BYREF
  Vector CursorPosition; // [rsp+70h] [rbp-60h]
  Vector v53; // [rsp+80h] [rbp-50h]
  KeyValues kv; // [rsp+90h] [rbp-40h] BYREF
  unsigned __int64 v55; // [rsp+A8h] [rbp-28h]
  Vector v56; // 0:xmm0_8.8,8:xmm1_4.4

  v55 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  v4 = DOTA_Character_ScriptSpawn_Synchronous("npc_dota_techies_remote_mine", m_Value, Caster, 0, 0, CursorPosition);
  v5 = v4;
  if ( v4 != 0 )
  {
    v6 = *(v4->_vptr_IHandleEntity + 70);
    v7 = CDOTABaseAbility::GetCaster(this);
    v6(v5, v7->m_iTeamNum.m_Value);
    v8 = *(v5->_vptr_IHandleEntity + 40);
    v9 = CDOTABaseAbility::GetCaster(this);
    v8(v5, v9);
    v10 = CDOTABaseAbility::GetCaster(this);
    v11 = (*(v10->_vptr_IHandleEntity + 414))(v10);
    CDOTA_BaseNPC::SetControllableByPlayer(v5, v11, 0);
    v5->m_bBlocksCreepSpawn = 0;
    m_Data = CEntityInstance::GetEntityIndex(v5).m_Data;
    if ( m_Data != v5->m_nUnitLabelIndex.m_Value )
    {
      (*(v5->_vptr_IHandleEntity + 22))(v5, 3417, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v5->m_nUnitLabelIndex.m_Value = m_Data;
    }
    v53 = CDOTABaseAbility::GetCursorPosition(this);
    FindClearSpaceForUnit(v5, v53, 1);
    m_pEntity = v5->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v14 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v15 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hRMine.m_Index) = v15 | this->m_hRMine.m_Index & 0x8000;
      this->m_hRMine.m_Index = (v14 << 15) | this->m_hRMine.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hRMine.m_Index = -1;
    }
    KeyValues::KeyValues(&kv, "modifier_techies_deploy_trap");
    KeyValues::SetFloat(&kv, "duration", v16);
    v17 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v5, v17, this, "modifier_techies_deploy_trap", &kv, 0);
    CBaseEntity::GetAbsAngles(v5);
    facingAngle.x = RandomFloat(-20.0, 20.0);
    facingAngle.y = RandomFloat(-20.0, 30.0);
    facingAngle.z = RandomFloat(-20.0, 20.0);
    CBaseEntity::SetAbsAngles(v5, &facingAngle);
    v18 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v18, "Hero_Techies.RemoteMine.Toss", 0.0, 0, 0);
    KeyValues::~KeyValues(&kv);
  }
  v19 = CDOTABaseAbility::GetCaster(this);
  AbsAngles = CBaseEntity::GetAbsAngles(v19);
  AngleVectors(AbsAngles, &vecFwd, &vecRight, &vecUp);
  v21 = CDOTABaseAbility::GetCaster(this);
  this->m_nFXIndex = CDOTABaseAbility::CreateAbilityParticleEffect(
                       this,
                       "particles/units/heroes/hero_techies/techies_remote_mine_plant.vpcf",
                       2,
                       v21,
                       0);
  v22 = CDOTABaseAbility::GetCaster(this);
  m_nFXIndex = this->m_nFXIndex;
  v24 = v22;
  ParticleManager = GetParticleManager();
  v26 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, m_nFXIndex, 0, v24, 5, "attach_remote", vec3_invalid, 1);
  v27 = CDOTABaseAbility::GetCaster(this);
  v28 = this->m_nFXIndex;
  v29 = v27;
  v30 = GetParticleManager();
  v56.z = vecFallbackPosition;
  *&v56.x = v26;
  CDOTA_ParticleManager::SetParticleControlEnt(v30, v28, 3, v29, 5, "attach_attack4", v56, 1);
  v31 = CEntityHandle::operator CEntityInstance *(&this->m_hRMine);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v31);
  LODWORD(v29) = this->m_nFXIndex;
  v33 = AbsOrigin;
  v34 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v34, v29, 1, *&v33->x, v33->z);
  LODWORD(v33) = this->m_nFXIndex;
  *&facingAngle.x = 1065353216;
  facingAngle.z = 0.0;
  v49 = 0.0078125;
  v50 = 0.0;
  v47 = 0.0;
  v48 = 1.0;
  v35 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlOrientation(v35, v33, 1, v47, v48, v49, v50, *&facingAngle.x, facingAngle.z);
  v36 = CEntityHandle::operator CEntityInstance *(&this->m_hRMine);
  v37 = CBaseEntity::GetAbsOrigin(v36);
  v38 = CEntityHandle::operator CEntityInstance *(&this->m_hRMine);
  LODWORD(v26) = this->m_nFXIndex;
  v39 = v38;
  v40 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v40, v26, 2, v39, 1, 0, *v37, 1);
  v41 = CDOTABaseAbility::GetCaster(this);
  (*(v41->_vptr_IHandleEntity + 206))(v41, this->m_nFXIndex, 0);
  return 1;
}


// CDOTA_Ability_Techies_RemoteMines::OnAbilityPhaseInterrupted  (line 1654, @0x0000000002cd81b0, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: UTIL_Remove, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Techies_RemoteMines::OnAbilityPhaseInterrupted(
        CDOTA_Ability_Techies_RemoteMines *const this)
{
  uint32 m_Index; // eax
  CEntityInstance *m_pInstance; // rdi
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  int m_nFXIndex; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax

  m_Index = this->m_hRMine.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hRMine.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hRMine.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
        m_pInstance = v5->m_pInstance;
    }
  }
  UTIL_Remove(m_pInstance);
  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 1);
}


// CDOTA_Ability_Techies_RemoteMines::OnUpgrade  (line 1672, @0x0000000002ccc050, libserver.so)  // inlines: IsTrained
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::OnUpgrade
// strings: "techies_focused_detonate"
void __fastcall CDOTA_Ability_Techies_RemoteMines::OnUpgrade(CDOTA_Ability_Techies_RemoteMines *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v4; // rbx

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "techies_focused_detonate", 0);
  v4 = AbilityByName;
  if ( AbilityByName != 0 && CDOTABaseAbility::GetEffectiveLevel(AbilityByName) < 0 )
  {
    (*(v4->_vptr_IHandleEntity + 212))(v4, 1);
    CDOTABaseAbility::OnUpgrade(this);
  }
  else
  {
    CDOTABaseAbility::OnUpgrade(this);
  }
}


// CDOTA_Modifier_Techies_DeployRemoteMine::~CDOTA_Modifier_Techies_DeployRemoteMine  (line 1689, @0x0000000002d278e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Techies_DeployRemoteMine::~CDOTA_Modifier_Techies_DeployRemoteMine(
        CDOTA_Modifier_Techies_DeployRemoteMine *const this)
{
  this->_vptr_CDOTA_Buff = &off_4637470;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Techies_DeployRemoteMine::~CDOTA_Modifier_Techies_DeployRemoteMine  (line 1689, @0x0000000002d27900, libserver.so)  // inlines: ~CDOTA_Modifier_Techies_DeployRemoteMine
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Techies_DeployRemoteMine::~CDOTA_Modifier_Techies_DeployRemoteMine(
        CDOTA_Modifier_Techies_DeployRemoteMine *const this)
{
  this->_vptr_CDOTA_Buff = &off_4637470;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Techies_DeployRemoteMine::IsHidden  (line 1694, @0x0000000002d1eaf0, libserver.so)
bool __fastcall CDOTA_Modifier_Techies_DeployRemoteMine::IsHidden(CDOTA_Modifier_Techies_DeployRemoteMine *const this)
{
  return 1;
}


// CDOTA_Modifier_Techies_DeployRemoteMine::CheckState  (line 1707, @0x0000000002cc9660, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Techies_DeployRemoteMine::CheckState(
        CDOTA_Modifier_Techies_DeployRemoteMine *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0xC0844120uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFF3F7BBEDFLL;
}


// CDOTA_Modifier_Techies_DeployRemoteMine::OnCreated  (line 1722, @0x0000000002ccc440, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::AddEffects
void __fastcall CDOTA_Modifier_Techies_DeployRemoteMine::OnCreated(
        CDOTA_Modifier_Techies_DeployRemoteMine *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::AddEffects(Parent, 32);
}


// CDOTA_Modifier_Techies_DeployRemoteMine::OnDestroy  (line 1731, @0x0000000002cd7490, libserver.so)  // inlines: MarkPVSInformationDirty, RemoveEffects
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveState, CBaseEntity::DispatchUpdateTransmitState
void __fastcall CDOTA_Modifier_Techies_DeployRemoteMine::OnDestroy(CDOTA_Modifier_Techies_DeployRemoteMine *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rbx

  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveState(Parent, 0x1Fu);
  v3 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveState(v3, 8u);
  v4 = CDOTA_Buff::GetParent(this);
  (*(v4->_vptr_IHandleEntity + 188))(v4, v4->m_fEffects.m_Value & 0xFFFFFFDF);
  v4->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(v4);
}


// CDOTA_Modifier_Techies_RemoteMine::~CDOTA_Modifier_Techies_RemoteMine  (line 1744, @0x0000000002d27430, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Techies_RemoteMine::~CDOTA_Modifier_Techies_RemoteMine(
        CDOTA_Modifier_Techies_RemoteMine *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Techies_RemoteMine::~CDOTA_Modifier_Techies_RemoteMine  (line 1744, @0x0000000002d27450, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible, ~CDOTA_Modifier_Techies_RemoteMine
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Techies_RemoteMine::~CDOTA_Modifier_Techies_RemoteMine(
        CDOTA_Modifier_Techies_RemoteMine *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Techies_RemoteMine::IsHidden  (line 1749, @0x0000000002d1eb00, libserver.so)
bool __fastcall CDOTA_Modifier_Techies_RemoteMine::IsHidden(CDOTA_Modifier_Techies_RemoteMine *const this)
{
  return 1;
}


// CDOTA_Modifier_Techies_RemoteMine::GetEffectName  (line 1750, @0x0000000002d1eb10, libserver.so)
const char *__fastcall CDOTA_Modifier_Techies_RemoteMine::GetEffectName(CDOTA_Modifier_Techies_RemoteMine *const this)
{
  return 0;
}


// CDOTA_Modifier_Techies_RemoteMine::CheckState  (line 1781, @0x0000000002cd0750, libserver.so)  // inlines: Enable
// calls: CDOTA_Modifier_Invisible::CheckState
void __fastcall CDOTA_Modifier_Techies_RemoteMine::CheckState(
        CDOTA_Modifier_Techies_RemoteMine *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  if ( !this->bExploding )
    CDOTA_Modifier_Invisible::CheckState(this, buffState);
  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x2000201uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFDFFFDFELL;
}


// CDOTA_Modifier_Techies_RemoteMine::OnCreated  (line 1795, @0x0000000002d0cec0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Modifier_Invisible::OnCreated, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "model_scale"
void __fastcall CDOTA_Modifier_Techies_RemoteMine::OnCreated(
        CDOTA_Modifier_Techies_RemoteMine *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax

  CDOTA_Modifier_Invisible::OnCreated(this, pKV);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->model_scale = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "model_scale", -1, 0);
  else
    this->model_scale = 0;
  this->bExploding = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "radius", -1, 0);
  else
    this->radius = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
    this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "damage", -1, 0);
  else
    this->damage = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
    this->radius_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "radius_scepter", -1, 0);
  else
    this->radius_scepter = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
    this->damage_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "damage_scepter", -1, 0);
  else
    this->damage_scepter = 0;
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 != 0 )
    this->vision_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "vision_radius", -1, 0);
  else
    this->vision_radius = 0;
  v9 = CDOTA_Buff::GetAbility(this);
  if ( v9 != 0 )
    this->vision_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v9, "vision_duration", -1, 0);
  else
    this->vision_duration = 0.0;
}


// CDOTA_Modifier_Techies_RemoteMine::OnDestroy  (line 1816, @0x0000000002ccefc0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::ForceKill
void __fastcall CDOTA_Modifier_Techies_RemoteMine::OnDestroy(CDOTA_Modifier_Techies_RemoteMine *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax

  if ( CDOTA_Buff::GetParent(this) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    if ( (*(Parent->_vptr_IHandleEntity + 408))(Parent) != 0 )
    {
      v3 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::ForceKill(v3, 0);
    }
  }
}


// CDOTA_Modifier_Techies_RemoteMine::DeclareFunctions  (line 1828, @0x0000000002cc9690, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Techies_RemoteMine::GetUnitLifetimeFraction(CModifierParams const&), CDOTA_Modifier_Techies_RemoteMine::ModelScale(CModifierParams const&)
void __fastcall CDOTA_Modifier_Techies_RemoteMine::DeclareFunctions(CDOTA_Modifier_Techies_RemoteMine *const this)
{
  this->m_Functions[157].__pfn = CDOTA_Modifier_Techies_RemoteMine::GetUnitLifetimeFraction;
  this->m_Functions[157].__delta = 0;
  this->m_Functions[128].__pfn = (&stru_10 + 705);
  this->m_Functions[128].__delta = 0;
  this->m_Functions[153].__pfn = CDOTA_Modifier_Techies_RemoteMine::ModelScale;
  this->m_Functions[153].__delta = 0;
}


// CDOTA_Modifier_Techies_RemoteMine::ModelScale  (line 1839, @0x0000000002cc96e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Techies_RemoteMine::ModelScale(
        CDOTA_Modifier_Techies_RemoteMine *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->model_scale;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Techies_RemoteMine::OnIntervalThink  (line 1846, @0x0000000002cf0e90, libserver.so)  // inlines: CEntityHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, GetTeamNumber, IndexToIdentity, Init, IsRealHero, IsValid, LookupEntity, SetFOWDirty, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_Buff::GetAbility, ApplyDamage, EconEntity_OnOwnerKillEaterEvent, CDOTAGamerules::SendProjectionAbilityMessage, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl (21 total)
// strings: "particles/units/heroes/hero_techies/techies_remote_mines_detonate.vpcf", "Hero_Techies.RemoteMine.Detonate"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_Techies_RemoteMine::OnIntervalThink(CDOTA_Modifier_Techies_RemoteMine *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  __m128i v3; // xmm4
  __m128i v4; // xmm5
  int v5; // r14d
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v10; // rax
  __int64 v11; // rbx
  int v12; // r15d
  CHandle<CBaseEntity> *v13; // rdx
  uint32 m_Index; // eax
  __int16 v15; // cx
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  CEntityInstance *m_pInstance; // r12
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *v20; // rax
  double v21; // xmm0_8
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC_Hero *v23; // rdi
  CDOTABaseAbility *v24; // rax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  CDOTABaseAbility *v26; // rbx
  int m_iAbilityID; // r12d
  CDOTA_BaseNPC *v28; // rax
  const Vector *v29; // rbx
  CDOTA_BaseNPC *v30; // rax
  float v31; // xmm3_4
  CDOTA_BaseNPC *v32; // rax
  unsigned __int16 v33; // dx
  int v34; // esi
  CBaseEntity *v35; // rbx
  int v36; // eax
  CEntityIdentity *v37; // rdx
  CEntityIdentity *v38; // rdx
  CDOTA_ParticleManager *ParticleManager; // rax
  unsigned int Particle; // ebx
  CDOTA_BaseNPC *v41; // rax
  const Vector *v42; // r12
  CDOTA_ParticleManager *v43; // rax
  CDOTA_ParticleManager *v44; // rax
  CDOTA_BaseNPC *v45; // rax
  CDOTA_ParticleManager *v46; // rax
  CDOTA_BaseNPC *v47; // rax
  CDOTA_BaseNPC *v48; // rbx
  CDOTA_BaseNPC *v49; // rax
  const char *ReplacementSound; // rax
  __m128i v51; // xmm3
  float vision_duration; // r14d
  CDOTA_BaseNPC *v53; // rax
  const Vector *v54; // rbx
  CDOTA_BaseNPC *v55; // rax
  CDOTA_BaseNPC *v56; // rax
  CDOTA_BaseNPC *v57; // rax
  float flDamage; // [rsp+2Ch] [rbp-64h]
  double v59; // [rsp+30h] [rbp-60h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hTargets; // [rsp+40h] [rbp-50h] BYREF

  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(Caster) )
    {
      *v3.m128i_i32 = this->radius_scepter;
      v5 = _mm_cvtsi128_si32(v3);
    }
    else
    {
      *v4.m128i_i32 = this->radius;
      v5 = _mm_cvtsi128_si32(v4);
    }
    v6 = CDOTA_Buff::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(v6) )
      flDamage = this->damage_scepter;
    else
      flDamage = this->damage;
    hTargets.m_Size = 0;
    hTargets.m_Memory.m_pMemory = 0;
    hTargets.m_Memory.m_nAllocationCount = 0;
    hTargets.m_Memory.m_nGrowSize = 0;
    Parent = CDOTA_Buff::GetParent(this);
    v8 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
    v10 = CDOTA_Buff::GetParent(this);
    FindUnitsInRadius(v10->m_iTeamNum.m_Value, AbsOrigin, Parent, *&v5, &hTargets, 2, 19, 16, 0, 0);
    if ( hTargets.m_Size > 0 )
    {
      v11 = 0;
      v12 = 0;
      do
      {
        while ( 1 )
        {
          v13 = &hTargets.m_Memory.m_pMemory[v11];
          m_Index = v13->m_Index;
          if ( v13->m_Index + 2 > 1 )
          {
            v15 = v13->m_Index;
            v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v13->m_Index) >> 9) & 0x3F];
            if ( v16 != 0 )
            {
              v17 = &v16[v15 & 0x1FF];
              if ( v17 != 0 && m_Index == v17->m_EHandle.m_Index )
              {
                m_pInstance = v17->m_pInstance;
                if ( v17->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                {
                  Ability = CDOTA_Buff::GetAbility(this);
                  v20 = CDOTA_Buff::GetParent(this);
                  v21 = ApplyDamage(v20, m_pInstance, Ability, flDamage, 2, 0);
                  if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
                    break;
                }
              }
            }
          }
          if ( hTargets.m_Size <= ++v11 )
            goto LABEL_18;
        }
        v12 += (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance, v21) == 0;
        ++v11;
      }
      while ( hTargets.m_Size > v11 );
LABEL_18:
      if ( v12 != 0 )
      {
        v22 = CDOTA_Buff::GetCaster(this);
        v23 = 0;
        if ( v22 != 0 && v22->m_bIsDOTANPC && (v22->m_iUnitType & 1) != 0 && !v22->m_bIsIllusion.m_Value )
          v23 = v22;
        EconEntity_OnOwnerKillEaterEvent(
          v23,
          0,
          kill_eater_event_t::kKillEaterEvent_Techies_RemoteMineKills,
          v12,
          INVALID_ITEM_DEF_INDEX);
        if ( CDOTA_Buff::GetAbility(this) != 0 )
        {
          v24 = CDOTA_Buff::GetAbility(this);
          m_pAbilityData = v24->m_pAbilityData;
          v26 = v24;
          if ( m_pAbilityData == 0 )
          {
            CDOTABaseAbility::LoadAbilityData(v24, 0);
            m_pAbilityData = v26->m_pAbilityData;
          }
          m_iAbilityID = m_pAbilityData->m_iAbilityID;
          v28 = CDOTA_Buff::GetParent(this);
          v29 = CBaseEntity::GetAbsOrigin(v28);
          v30 = CDOTA_Buff::GetCaster(this);
          CDOTAGamerules::SendProjectionAbilityMessage(
            g_pGameRules,
            v30,
            0,
            m_iAbilityID,
            0,
            0,
            *&v29->x,
            v29->z,
            -1.0,
            v31);
        }
      }
    }
    v32 = CDOTA_Buff::GetParent(this);
    if ( v32->m_hOwnerEntity.m_Value.m_Index == -1 )
    {
      v33 = 0x7FFF;
      v34 = 0x7FFF;
    }
    else
    {
      v33 = v32->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
      v34 = v33;
    }
    v35 = 0;
    v36 = (v32->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v33 & 0x7FFF;
    if ( (v36 + 2) > 1 )
    {
      v37 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v34 >> 9];
      if ( v37 != 0 )
      {
        v38 = &v37[v34 & 0x1FF];
        if ( v38 != 0 && v36 == v38->m_EHandle.m_Index )
          v35 = v38->m_pInstance;
      }
    }
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_techies/techies_remote_mines_detonate.vpcf",
                 2,
                 0,
                 0,
                 v35);
    v41 = CDOTA_Buff::GetParent(this);
    v42 = CBaseEntity::GetAbsOrigin(v41);
    v43 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v43, Particle, 0, *&v42->x, v42->z);
    *&v59 = this->radius;
    *(&v59 + 1) = *&v59;
    v44 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v44, Particle, 1, v59, *&v59);
    v45 = CDOTA_Buff::GetCaster(this);
    (*(v45->_vptr_IHandleEntity + 206))(v45, Particle, 0);
    v46 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v46, Particle);
    v47 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::RemoveState(v47, 7u);
    CDOTA_Buff::GetParent(this)->m_bVisibilityDirtyFlag = 1;
    v48 = CDOTA_Buff::GetParent(this);
    v49 = CDOTA_Buff::GetCaster(this);
    ReplacementSound = CDOTA_BaseNPC::FindReplacementSound(v49, "Hero_Techies.RemoteMine.Detonate");
    DOTA_EmitSound(10, ReplacementSound, v48);
    *v51.m128i_i32 = this->vision_radius;
    vision_duration = this->vision_duration;
    LODWORD(v42) = _mm_cvtsi128_si32(v51);
    v53 = CDOTA_Buff::GetParent(this);
    v54 = CBaseEntity::GetAbsOrigin(v53);
    v55 = CDOTA_Buff::GetCaster(this);
    CDOTAFogOfWarSystem::AddTempViewer(
      &g_DOTAFogOfWarSystem,
      FoWViewerType_t::FOWVIEWERTYPE_FOWENTITY_TEMP,
      v55->m_iTeamNum.m_Value,
      v54,
      *&v42,
      vision_duration,
      0);
    v56 = CDOTA_Buff::GetParent(this);
    if ( (*(v56->_vptr_IHandleEntity + 408))(v56) != 0 )
    {
      v57 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::ForceKill(v57, 0);
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hTargets);
  }
}


// CDOTA_Modifier_Techies_RemoteMine::Activate  (line 1907, @0x0000000002cf79c0, libserver.so)  // inlines: DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// callers: CDOTA_Ability_Techies_RemoteMines_SelfDetonate::OnSpellStart, CDOTA_Ability_Techies_FocusedDetonate::OnSpellStart
// strings: "detonate_delay"
void __fastcall CDOTA_Modifier_Techies_RemoteMine::Activate(CDOTA_Modifier_Techies_RemoteMine *const this)
{
  CDOTABaseAbility *Ability; // rax
  float v3; // xmm1_4
  float LevelSpecialValue; // xmm0_4

  if ( CDOTA_Buff::GetCaster(this) != 0 && !this->bExploding )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    LevelSpecialValue = 0.0;
    if ( Ability != 0 )
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "detonate_delay", -1, 0);
    this->bExploding = 1;
    CDOTA_Buff::StartIntervalThink(this, LevelSpecialValue, v3);
  }
}


// CDOTA_Modifier_Techies_RemoteMine::GetUnitLifetimeFraction  (line 1925, @0x0000000002cc9700, libserver.so)  // inlines: DOTAGameRules, GetGameTime
ModifierVariant_t __fastcall CDOTA_Modifier_Techies_RemoteMine::GetUnitLifetimeFraction(
        CDOTA_Modifier_Techies_RemoteMine *const this,
        const CModifierParams *const params)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  float v5; // xmm0_4
  __int64 v6; // xmm2_8
  unsigned int v8; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  (*(this->_vptr_CDOTA_Buff + 30))(this, params);
  v4 = 0.0;
  if ( g_pGameRules != 0 )
    v4 = *&g_pGameRules[18].m_szQuestName[20];
  *&v8 = v3 - v4;
  v5 = (*(this->_vptr_CDOTA_Buff + 31))(this);
  v6 = v8;
  result.m_szVal = 0;
  *&v6 = *&v8 / v5;
  *&result.m_eType = (v6 << 32) | 1;
  return result;
}


// CDOTA_Modifier_Techies_RemoteMine::OnAbilityExecuted  (line 1932, @0x0000000002cc9770, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Techies_RemoteMine::OnAbilityExecuted(
        CDOTA_Modifier_Techies_RemoteMine *const this,
        const CModifierParams *const params)
{
  return 1uLL;
}


// CDOTA_Ability_Techies_FocusedDetonate::~CDOTA_Ability_Techies_FocusedDetonate  (line 1944, @0x0000000002d2bfa0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Techies_FocusedDetonate::~CDOTA_Ability_Techies_FocusedDetonate(
        CDOTA_Ability_Techies_FocusedDetonate *const this)
{
  this->_vptr_IHandleEntity = &off_4637B10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Techies_FocusedDetonate::~CDOTA_Ability_Techies_FocusedDetonate  (line 1944, @0x0000000002d2bfc0, libserver.so)  // inlines: ~CDOTA_Ability_Techies_FocusedDetonate
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Techies_FocusedDetonate::~CDOTA_Ability_Techies_FocusedDetonate(
        CDOTA_Ability_Techies_FocusedDetonate *const this)
{
  this->_vptr_IHandleEntity = &off_4637B10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Techies_FocusedDetonate::Schema_DynamicBinding  (line 1946, @0x0000000002d1eb20, libserver.so)
// globals: CDOTA_Ability_Techies_FocusedDetonate::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Techies_FocusedDetonate::Schema_DynamicBinding(
        const CDOTA_Ability_Techies_FocusedDetonate *const this)
{
  return CDOTA_Ability_Techies_FocusedDetonate::s_pSchemaBinding;
}


// CDOTA_Ability_Techies_FocusedDetonate::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1946, @0x0000000002d1eb30, libserver.so)
// globals: CDOTA_Ability_Techies_FocusedDetonate::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Techies_FocusedDetonate::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Techies_FocusedDetonate::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Techies_FocusedDetonate::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Techies_FocusedDetonate::CEntityInstanceEntityClass::DestructInstance  (line 1946, @0x0000000002d1eb40, libserver.so)  // inlines: Destruct<CDOTA_Ability_Techies_FocusedDetonate>
void __fastcall CDOTA_Ability_Techies_FocusedDetonate::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Techies_FocusedDetonate::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Techies_FocusedDetonate::CEntityInstanceEntityClass::FreeInstance  (line 1946, @0x0000000002d1eb60, libserver.so)
void __fastcall CDOTA_Ability_Techies_FocusedDetonate::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Techies_FocusedDetonate::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Techies_FocusedDetonate::CEntityInstanceEntityClass::CanAllocate  (line 1946, @0x0000000002d1eb80, libserver.so)
bool __fastcall CDOTA_Ability_Techies_FocusedDetonate::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Techies_FocusedDetonate::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Techies_FocusedDetonate::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1946, @0x0000000002d1eb90, libserver.so)
// globals: CDOTA_Ability_Techies_FocusedDetonate::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Techies_FocusedDetonate::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Techies_FocusedDetonate::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Techies_FocusedDetonate::s_pSchemaBinding;
}


// CDOTA_Ability_Techies_FocusedDetonate::CEntityInstanceEntityClass::AllocateInstance  (line 1946, @0x0000000002d24b50, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Techies_FocusedDetonate::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Techies_FocusedDetonate::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Techies_FocusedDetonate::CEntityInstanceEntityClass::ConstructInstance  (line 1946, @0x0000000002d292b0, libserver.so)  // inlines: CDOTA_Ability_Techies_FocusedDetonate, Construct<CDOTA_Ability_Techies_FocusedDetonate>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Techies_FocusedDetonate::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Techies_FocusedDetonate::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4637B10;
  }
  return p;
}


// CDOTA_Ability_Techies_FocusedDetonate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1946, @0x0000000002d34450, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Techies_FocusedDetonate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Techies_FocusedDetonate::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Techies_FocusedDetonate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1946, @0x0000000002d34470, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Techies_FocusedDetonate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Techies_FocusedDetonate::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Techies_FocusedDetonate::GetEntityClassInternal  (line 1946, @0x0000000002d49070, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "techies_focused_detonate", "CDOTA_Ability_Techies_FocusedDetonate"
// globals: `guard variable for'CDOTA_Ability_Techies_FocusedDetonate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_FocusedDetonateClass, CDOTA_Ability_Techies_FocusedDetonate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_FocusedDetonateClass, __dso_handle, CDOTA_Ability_Techies_FocusedDetonate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Techies_FocusedDetonate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_FocusedDetonateClassInfo, CDOTA_Ability_Techies_FocusedDetonate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_FocusedDetonateClassInfo
CEntityClass *__cdecl CDOTA_Ability_Techies_FocusedDetonate::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Techies_FocusedDetonate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_FocusedDetonateClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Techies_FocusedDetonate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_FocusedDetonateClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Techies_FocusedDetonate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_FocusedDetonateClass);
    CDOTA_Ability_Techies_FocusedDetonate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_FocusedDetonateClass._vptr_CEntityClass = off_4637A90;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Techies_FocusedDetonate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_FocusedDetonateClass);
    __cxa_atexit(
      CDOTA_Ability_Techies_FocusedDetonate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Techies_FocusedDetonate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_FocusedDetonateClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Techies_FocusedDetonateClass != 0 )
    return &CDOTA_Ability_Techies_FocusedDetonate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_FocusedDetonateClass;
  if ( `guard variable for'CDOTA_Ability_Techies_FocusedDetonate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_FocusedDetonateClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Techies_FocusedDetonate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_FocusedDetonateClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Techies_FocusedDetonate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_FocusedDetonateClassInfo,
      "CDOTA_Ability_Techies_FocusedDetonate",
      "techies_focused_detonate",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Techies_FocusedDetonate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_FocusedDetonateClassInfo);
  }
  CDOTA_Ability_Techies_FocusedDetonate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_FocusedDetonateClass.m_pClassInfo = &CDOTA_Ability_Techies_FocusedDetonate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_FocusedDetonateClassInfo;
  CDOTA_Ability_Techies_FocusedDetonate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_FocusedDetonateClass.m_pBaseClassInfo = CDOTA_Ability_Techies_FocusedDetonate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_FocusedDetonateClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Techies_FocusedDetonateClass = &CDOTA_Ability_Techies_FocusedDetonate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_FocusedDetonateClass;
  CDOTA_Ability_Techies_FocusedDetonate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_FocusedDetonateClassInfo.m_pClass = &CDOTA_Ability_Techies_FocusedDetonate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_FocusedDetonateClass;
  CDOTA_Ability_Techies_FocusedDetonate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_FocusedDetonateClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Techies_FocusedDetonateClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Techies_FocusedDetonate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_FocusedDetonateClass;
}


// CDOTA_Ability_Techies_FocusedDetonate::GetAssociatedPrimaryAbilities  (line 1961, @0x0000000002d1eba0, libserver.so)
// strings: "techies_remote_mines"
const char *__fastcall CDOTA_Ability_Techies_FocusedDetonate::GetAssociatedPrimaryAbilities(
        CDOTA_Ability_Techies_FocusedDetonate *const this)
{
  return "techies_remote_mines";
}


// CDOTA_Ability_Techies_FocusedDetonate::IsStealable  (line 1962, @0x0000000002d1ebb0, libserver.so)
bool __fastcall CDOTA_Ability_Techies_FocusedDetonate::IsStealable(CDOTA_Ability_Techies_FocusedDetonate *const this)
{
  return 0;
}


// CDOTA_Ability_Techies_FocusedDetonate::ProcsMagicStick  (line 1963, @0x0000000002d1ebc0, libserver.so)
bool __fastcall CDOTA_Ability_Techies_FocusedDetonate::ProcsMagicStick(
        CDOTA_Ability_Techies_FocusedDetonate *const this)
{
  return 0;
}


// CDOTA_Ability_Techies_FocusedDetonate::YouForgotToImplementOrDeclareServerClass  (line 1966, @0x0000000002cc9780, libserver.so)
int __fastcall CDOTA_Ability_Techies_FocusedDetonate::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Techies_FocusedDetonate *const this)
{
  return 0;
}


// CDOTA_Ability_Techies_FocusedDetonate::GetServerClass  (line 1966, @0x0000000002cdec30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Techies_FocusedDetonate::GetServerClass(
        CDOTA_Ability_Techies_FocusedDetonate *const this)
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


// CDOTA_Ability_Techies_FocusedDetonate::OnSpellStart  (line 1977, @0x0000000002d06170, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FStrEq, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, GetUnitName, IndexToIdentity, IsValid, LookupEntity, Purge, String, ToCStr, ToDOTABaseNPC, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCursorPosition, CDOTABaseAbility::GetCaster, FindUnitsInRadius, CDOTA_BaseNPC::FindModifierByName, CDOTA_Modifier_Techies_RemoteMine::Activate, CBaseEntity::EmitSound, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "npc_dota_techies_remote_mine", "modifier_techies_remote_mine", "Hero_Techies.RemoteMine.Activate"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Techies_FocusedDetonate::OnSpellStart(CDOTA_Ability_Techies_FocusedDetonate *const this)
{
  int LevelSpecialValue; // r13d
  __m128i v3; // xmm2
  float v4; // r13d
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v6; // rax
  __int64 v7; // r12
  int i; // ebx
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  const char *m_pAsString; // rsi
  CDOTA_Modifier_Techies_RemoteMine *ModifierByName; // rax
  Vector vLocation; // [rsp+20h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hMines; // [rsp+30h] [rbp-50h] BYREF
  Vector CursorPosition; // 0:kr00_12.12

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  *v3.m128i_i32 = LevelSpecialValue;
  vLocation = CursorPosition;
  hMines.m_Size = 0;
  hMines.m_Memory.m_pMemory = 0;
  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  hMines.m_Memory.m_nAllocationCount = 0;
  hMines.m_Memory.m_nGrowSize = 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  v6 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v6->m_iTeamNum.m_Value, &vLocation, Caster, v4, &hMines, 1, 32, 0, 0, 0);
  v7 = 0;
  for ( i = 0; hMines.m_Size > i; ++v7 )
  {
    while ( 1 )
    {
      v9 = &hMines.m_Memory.m_pMemory[v7];
      m_Index = hMines.m_Memory.m_pMemory[v7].m_Index;
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
              m_pAsString = m_pInstance->m_iszUnitName.m_Value.u.m_pAsString;
              if ( m_pAsString != 0
                && (m_pAsString == "npc_dota_techies_remote_mine"
                 || strcmp(m_pAsString, "npc_dota_techies_remote_mine") == 0) )
              {
                break;
              }
            }
          }
        }
      }
      ++i;
      ++v7;
      if ( hMines.m_Size <= i )
        goto LABEL_16;
    }
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_techies_remote_mine", 0);
    if ( ModifierByName != 0 )
      CDOTA_Modifier_Techies_RemoteMine::Activate(ModifierByName);
    CBaseEntity::EmitSound(m_pInstance, "Hero_Techies.RemoteMine.Activate", 0.0, 0);
    ++i;
  }
LABEL_16:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hMines);
  if ( (hMines.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hMines.m_Memory);
    if ( (hMines.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hMines.m_Memory);
  }
}


// CDOTA_Ability_Techies_RemoteMines_SelfDetonate::~CDOTA_Ability_Techies_RemoteMines_SelfDetonate  (line 2008, @0x0000000002d2bff0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Techies_RemoteMines_SelfDetonate::~CDOTA_Ability_Techies_RemoteMines_SelfDetonate(
        CDOTA_Ability_Techies_RemoteMines_SelfDetonate *const this)
{
  this->_vptr_IHandleEntity = &off_4638610;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Techies_RemoteMines_SelfDetonate::~CDOTA_Ability_Techies_RemoteMines_SelfDetonate  (line 2008, @0x0000000002d2c010, libserver.so)  // inlines: ~CDOTA_Ability_Techies_RemoteMines_SelfDetonate
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Techies_RemoteMines_SelfDetonate::~CDOTA_Ability_Techies_RemoteMines_SelfDetonate(
        CDOTA_Ability_Techies_RemoteMines_SelfDetonate *const this)
{
  this->_vptr_IHandleEntity = &off_4638610;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Techies_RemoteMines_SelfDetonate::Schema_DynamicBinding  (line 2010, @0x0000000002d1ebd0, libserver.so)
// globals: CDOTA_Ability_Techies_RemoteMines_SelfDetonate::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Techies_RemoteMines_SelfDetonate::Schema_DynamicBinding(
        const CDOTA_Ability_Techies_RemoteMines_SelfDetonate *const this)
{
  return CDOTA_Ability_Techies_RemoteMines_SelfDetonate::s_pSchemaBinding;
}


// CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2010, @0x0000000002d1ebe0, libserver.so)
// globals: CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CEntityInstanceEntityClass::DestructInstance  (line 2010, @0x0000000002d1ebf0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Techies_RemoteMines_SelfDetonate>
void __fastcall CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CEntityInstanceEntityClass::FreeInstance  (line 2010, @0x0000000002d1ec10, libserver.so)
void __fastcall CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CEntityInstanceEntityClass::CanAllocate  (line 2010, @0x0000000002d1ec30, libserver.so)
bool __fastcall CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2010, @0x0000000002d1ec40, libserver.so)
// globals: CDOTA_Ability_Techies_RemoteMines_SelfDetonate::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Techies_RemoteMines_SelfDetonate::s_pSchemaBinding;
}


// CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CEntityInstanceEntityClass::AllocateInstance  (line 2010, @0x0000000002d24b90, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CEntityInstanceEntityClass::ConstructInstance  (line 2010, @0x0000000002d292e0, libserver.so)  // inlines: CDOTA_Ability_Techies_RemoteMines_SelfDetonate, Construct<CDOTA_Ability_Techies_RemoteMines_SelfDetonate>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4638610;
  }
  return p;
}


// CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2010, @0x0000000002d344a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2010, @0x0000000002d344c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Techies_RemoteMines_SelfDetonate::GetEntityClassInternal  (line 2010, @0x0000000002d491c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "techies_remote_mines_self_detonate", "CDOTA_Ability_Techies_RemoteMines_SelfDetonate"
// globals: `guard variable for'CDOTA_Ability_Techies_RemoteMines_SelfDetonate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_RemoteMines_SelfDetonateClass, CDOTA_Ability_Techies_RemoteMines_SelfDetonate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_RemoteMines_SelfDetonateClass, __dso_handle, CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Techies_RemoteMines_SelfDetonate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_RemoteMines_SelfDetonateClassInfo, CDOTA_Ability_Techies_RemoteMines_SelfDetonate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_RemoteMines_SelfDetonateClassInfo
CEntityClass *__cdecl CDOTA_Ability_Techies_RemoteMines_SelfDetonate::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Techies_RemoteMines_SelfDetonate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_RemoteMines_SelfDetonateClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Techies_RemoteMines_SelfDetonate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_RemoteMines_SelfDetonateClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Techies_RemoteMines_SelfDetonate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_RemoteMines_SelfDetonateClass);
    CDOTA_Ability_Techies_RemoteMines_SelfDetonate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_RemoteMines_SelfDetonateClass._vptr_CEntityClass = off_4638590;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Techies_RemoteMines_SelfDetonate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_RemoteMines_SelfDetonateClass);
    __cxa_atexit(
      CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Techies_RemoteMines_SelfDetonate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_RemoteMines_SelfDetonateClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Techies_RemoteMines_SelfDetonateClass != 0 )
    return &CDOTA_Ability_Techies_RemoteMines_SelfDetonate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_RemoteMines_SelfDetonateClass;
  if ( `guard variable for'CDOTA_Ability_Techies_RemoteMines_SelfDetonate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_RemoteMines_SelfDetonateClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Techies_RemoteMines_SelfDetonate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_RemoteMines_SelfDetonateClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Techies_RemoteMines_SelfDetonate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_RemoteMines_SelfDetonateClassInfo,
      "CDOTA_Ability_Techies_RemoteMines_SelfDetonate",
      "techies_remote_mines_self_detonate",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Techies_RemoteMines_SelfDetonate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_RemoteMines_SelfDetonateClassInfo);
  }
  CDOTA_Ability_Techies_RemoteMines_SelfDetonate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_RemoteMines_SelfDetonateClass.m_pClassInfo = &CDOTA_Ability_Techies_RemoteMines_SelfDetonate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_RemoteMines_SelfDetonateClassInfo;
  CDOTA_Ability_Techies_RemoteMines_SelfDetonate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_RemoteMines_SelfDetonateClass.m_pBaseClassInfo = CDOTA_Ability_Techies_RemoteMines_SelfDetonate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_RemoteMines_SelfDetonateClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Techies_RemoteMines_SelfDetonateClass = &CDOTA_Ability_Techies_RemoteMines_SelfDetonate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_RemoteMines_SelfDetonateClass;
  CDOTA_Ability_Techies_RemoteMines_SelfDetonate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_RemoteMines_SelfDetonateClassInfo.m_pClass = &CDOTA_Ability_Techies_RemoteMines_SelfDetonate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_RemoteMines_SelfDetonateClass;
  CDOTA_Ability_Techies_RemoteMines_SelfDetonate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_RemoteMines_SelfDetonateClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Techies_RemoteMines_SelfDetonateClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Techies_RemoteMines_SelfDetonate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_RemoteMines_SelfDetonateClass;
}


// CDOTA_Ability_Techies_RemoteMines_SelfDetonate::ProcsMagicStick  (line 2015, @0x0000000002d1ec50, libserver.so)
bool __fastcall CDOTA_Ability_Techies_RemoteMines_SelfDetonate::ProcsMagicStick(
        CDOTA_Ability_Techies_RemoteMines_SelfDetonate *const this)
{
  return 0;
}


// CDOTA_Ability_Techies_RemoteMines_SelfDetonate::GetAssociatedSecondaryAbilities  (line 2017, @0x0000000002d1ec60, libserver.so)
// strings: "techies_minefield_sign"
const char *__fastcall CDOTA_Ability_Techies_RemoteMines_SelfDetonate::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Techies_RemoteMines_SelfDetonate *const this)
{
  return "techies_minefield_sign";
}


// CDOTA_Ability_Techies_RemoteMines_SelfDetonate::YouForgotToImplementOrDeclareServerClass  (line 2020, @0x0000000002cc9790, libserver.so)
int __fastcall CDOTA_Ability_Techies_RemoteMines_SelfDetonate::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Techies_RemoteMines_SelfDetonate *const this)
{
  return 0;
}


// CDOTA_Ability_Techies_RemoteMines_SelfDetonate::GetServerClass  (line 2020, @0x0000000002cdde30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Techies_RemoteMines_SelfDetonate::GetServerClass(
        CDOTA_Ability_Techies_RemoteMines_SelfDetonate *const this)
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


// CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CastFilterResult  (line 2029, @0x0000000002cc97a0, libserver.so)
int __fastcall CDOTA_Ability_Techies_RemoteMines_SelfDetonate::CastFilterResult(
        CDOTA_Ability_Techies_RemoteMines_SelfDetonate *const this)
{
  return 0;
}


// CDOTA_Ability_Techies_RemoteMines_SelfDetonate::OnSpellStart  (line 2065, @0x0000000002d00780, libserver.so)  // inlines: FStrEq, GetLevelSpecialValueFor<int>, GetParent, GetUnitName, String, ToCStr, ToDOTABaseNPC, _V_strcmp
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CGameSceneNode::GetOwnerEntity, CDOTA_BaseNPC::FindModifierByName, CDOTA_Modifier_Techies_RemoteMine::Activate
// strings: "npc_dota_techies_remote_mine", "modifier_techies_remote_mine"
void __fastcall CDOTA_Ability_Techies_RemoteMines_SelfDetonate::OnSpellStart(
        CDOTA_Ability_Techies_RemoteMines_SelfDetonate *const this)
{
  CGameSceneNode *m_pParent; // rdi
  CDOTA_BaseNPC *OwnerEntity; // rax
  const char *m_pAsString; // rsi
  CDOTA_Modifier_Techies_RemoteMine *ModifierByName; // rax

  CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
  {
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    if ( OwnerEntity != 0 && OwnerEntity->m_bIsDOTANPC )
    {
      m_pAsString = OwnerEntity->m_iszUnitName.m_Value.u.m_pAsString;
      if ( m_pAsString != 0
        && (m_pAsString == "npc_dota_techies_remote_mine" || strcmp(m_pAsString, "npc_dota_techies_remote_mine") == 0) )
      {
        ModifierByName = CDOTA_BaseNPC::FindModifierByName(OwnerEntity, "modifier_techies_remote_mine", 0);
        if ( ModifierByName != 0 )
          CDOTA_Modifier_Techies_RemoteMine::Activate(ModifierByName);
      }
    }
  }
}


// CDOTA_Ability_Techies_Minefield_Sign::~CDOTA_Ability_Techies_Minefield_Sign  (line 2088, @0x0000000002d2c040, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Techies_Minefield_Sign::~CDOTA_Ability_Techies_Minefield_Sign(
        CDOTA_Ability_Techies_Minefield_Sign *const this)
{
  this->_vptr_IHandleEntity = &off_4639110;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Techies_Minefield_Sign::~CDOTA_Ability_Techies_Minefield_Sign  (line 2088, @0x0000000002d2c060, libserver.so)  // inlines: ~CDOTA_Ability_Techies_Minefield_Sign
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Techies_Minefield_Sign::~CDOTA_Ability_Techies_Minefield_Sign(
        CDOTA_Ability_Techies_Minefield_Sign *const this)
{
  this->_vptr_IHandleEntity = &off_4639110;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Techies_Minefield_Sign::Schema_DynamicBinding  (line 2090, @0x0000000002d1ec70, libserver.so)
// globals: CDOTA_Ability_Techies_Minefield_Sign::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Techies_Minefield_Sign::Schema_DynamicBinding(
        const CDOTA_Ability_Techies_Minefield_Sign *const this)
{
  return CDOTA_Ability_Techies_Minefield_Sign::s_pSchemaBinding;
}


// CDOTA_Ability_Techies_Minefield_Sign::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2090, @0x0000000002d1ec80, libserver.so)
// globals: CDOTA_Ability_Techies_Minefield_Sign::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Techies_Minefield_Sign::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Techies_Minefield_Sign::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Techies_Minefield_Sign::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Techies_Minefield_Sign::CEntityInstanceEntityClass::DestructInstance  (line 2090, @0x0000000002d1ec90, libserver.so)  // inlines: Destruct<CDOTA_Ability_Techies_Minefield_Sign>
void __fastcall CDOTA_Ability_Techies_Minefield_Sign::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Techies_Minefield_Sign::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Techies_Minefield_Sign::CEntityInstanceEntityClass::FreeInstance  (line 2090, @0x0000000002d1ecb0, libserver.so)
void __fastcall CDOTA_Ability_Techies_Minefield_Sign::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Techies_Minefield_Sign::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Techies_Minefield_Sign::CEntityInstanceEntityClass::CanAllocate  (line 2090, @0x0000000002d1ecd0, libserver.so)
bool __fastcall CDOTA_Ability_Techies_Minefield_Sign::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Techies_Minefield_Sign::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Techies_Minefield_Sign::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2090, @0x0000000002d1ece0, libserver.so)
// globals: CDOTA_Ability_Techies_Minefield_Sign::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Techies_Minefield_Sign::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Techies_Minefield_Sign::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Techies_Minefield_Sign::s_pSchemaBinding;
}


// CDOTA_Ability_Techies_Minefield_Sign::CEntityInstanceEntityClass::AllocateInstance  (line 2090, @0x0000000002d24bd0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Techies_Minefield_Sign::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Techies_Minefield_Sign::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Techies_Minefield_Sign::CEntityInstanceEntityClass::ConstructInstance  (line 2090, @0x0000000002d29310, libserver.so)  // inlines: CDOTA_Ability_Techies_Minefield_Sign, Construct<CDOTA_Ability_Techies_Minefield_Sign>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Techies_Minefield_Sign::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Techies_Minefield_Sign::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4639110;
  }
  return p;
}


// CDOTA_Ability_Techies_Minefield_Sign::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2090, @0x0000000002d344f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Techies_Minefield_Sign::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Techies_Minefield_Sign::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Techies_Minefield_Sign::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2090, @0x0000000002d34510, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Techies_Minefield_Sign::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Techies_Minefield_Sign::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Techies_Minefield_Sign::GetEntityClassInternal  (line 2090, @0x0000000002d49310, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "techies_minefield_sign", "CDOTA_Ability_Techies_Minefield_Sign"
// globals: `guard variable for'CDOTA_Ability_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_Minefield_SignClass, CDOTA_Ability_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_Minefield_SignClass, __dso_handle, CDOTA_Ability_Techies_Minefield_Sign::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Techies_Minefield_Sign::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_Minefield_SignClassInfo, CDOTA_Ability_Techies_Minefield_Sign::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_Minefield_SignClassInfo
CEntityClass *__cdecl CDOTA_Ability_Techies_Minefield_Sign::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_Minefield_SignClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_Minefield_SignClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_Minefield_SignClass);
    CDOTA_Ability_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_Minefield_SignClass._vptr_CEntityClass = off_4639090;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_Minefield_SignClass);
    __cxa_atexit(
      CDOTA_Ability_Techies_Minefield_Sign::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_Minefield_SignClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Techies_Minefield_SignClass != 0 )
    return &CDOTA_Ability_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_Minefield_SignClass;
  if ( `guard variable for'CDOTA_Ability_Techies_Minefield_Sign::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_Minefield_SignClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Techies_Minefield_Sign::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_Minefield_SignClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Techies_Minefield_Sign::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_Minefield_SignClassInfo,
      "CDOTA_Ability_Techies_Minefield_Sign",
      "techies_minefield_sign",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Techies_Minefield_Sign::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_Minefield_SignClassInfo);
  }
  CDOTA_Ability_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_Minefield_SignClass.m_pClassInfo = &CDOTA_Ability_Techies_Minefield_Sign::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_Minefield_SignClassInfo;
  CDOTA_Ability_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_Minefield_SignClass.m_pBaseClassInfo = CDOTA_Ability_Techies_Minefield_Sign::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_Minefield_SignClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Techies_Minefield_SignClass = &CDOTA_Ability_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_Minefield_SignClass;
  CDOTA_Ability_Techies_Minefield_Sign::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Techies_Minefield_SignClassInfo.m_pClass = &CDOTA_Ability_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_Minefield_SignClass;
  CDOTA_Ability_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_Minefield_SignClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Techies_Minefield_SignClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Techies_Minefield_SignClass;
}


// CDOTA_Ability_Techies_Minefield_Sign::IsStealable  (line 2107, @0x0000000002d1ecf0, libserver.so)
bool __fastcall CDOTA_Ability_Techies_Minefield_Sign::IsStealable(CDOTA_Ability_Techies_Minefield_Sign *const this)
{
  return 0;
}


// CDOTA_Ability_Techies_Minefield_Sign::ProcsMagicStick  (line 2108, @0x0000000002d1ed00, libserver.so)
bool __fastcall CDOTA_Ability_Techies_Minefield_Sign::ProcsMagicStick(CDOTA_Ability_Techies_Minefield_Sign *const this)
{
  return 0;
}


// CDOTA_Ability_Techies_Minefield_Sign::YouForgotToImplementOrDeclareServerClass  (line 2115, @0x0000000002cc97b0, libserver.so)
int __fastcall CDOTA_Ability_Techies_Minefield_Sign::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Techies_Minefield_Sign *const this)
{
  return 0;
}


// CDOTA_Ability_Techies_Minefield_Sign::GetServerClass  (line 2115, @0x0000000002cde230, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Techies_Minefield_Sign::GetServerClass(
        CDOTA_Ability_Techies_Minefield_Sign *const this)
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


// CDOTA_Ability_Techies_Minefield_Sign::OnSpellStart  (line 2124, @0x0000000002cfd2a0, libserver.so)  // inlines: GetLevelSpecialValueFor<int>, GetTeamNumber, QAngle, SetBlockCreepSpawn, Vector, VectorNormalize2D, VectorSubtract, operator-
// calls: CDOTABaseAbility::GetCaster, CDOTAHeroList::LimitedUnitEnsureSpace, CDOTABaseAbility::GetCursorPosition, DOTA_CreateUnitByName, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, CBaseEntity::GetAbsOrigin, VectorNormalize, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::SetFloat, RandomFloat, CBaseEntity::SetAbsAngles (26 total)
// strings: "npc_dota_techies_minefield_sign", "modifier_techies_minefield_sign", "modifier_techies_minefield_sign_thinker", "modifier_kill", "particles/units/heroes/hero_techies/techies_sign_ambient_base.vpcf", "Hero_Techies.Sign"
void __fastcall CDOTA_Ability_Techies_Minefield_Sign::OnSpellStart(CDOTA_Ability_Techies_Minefield_Sign *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  int m_Value; // r13d
  CDOTA_BaseNPC *v4; // r12
  CDOTA_BaseNPC *v5; // r14
  CDOTA_BaseNPC *v6; // r12
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // r13
  vec_t v10; // xmm0_4
  vec_t v11; // xmm1_4
  float v12; // xmm1_4
  CDOTA_BaseNPC *v13; // rax
  vec_t v14; // xmm0_4
  CDOTA_BaseNPC *v15; // rax
  int v16; // eax
  int m_nFXIndex; // r15d
  CDOTA_ParticleManager *ParticleManager; // rax
  int AbilityParticleEffect; // eax
  int v20; // r15d
  CDOTA_ParticleManager *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  int v24; // r15d
  CDOTA_ParticleManager *v25; // rax
  int v26; // r15d
  CDOTA_ParticleManager *v27; // rax
  Vector vDirection; // [rsp+10h] [rbp-B0h] BYREF
  Vector CursorPosition; // [rsp+20h] [rbp-A0h]
  QAngle vAngles; // [rsp+30h] [rbp-90h] BYREF
  Vector vLocation; // [rsp+40h] [rbp-80h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+88h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTAHeroList::LimitedUnitEnsureSpace(&g_HeroList, Caster, EHeroLimitedUnitType::HERO_LIMITED_UNIT_TECHIES_SIGN, 1, 1);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  v4 = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTABaseAbility::GetCaster(this);
  vLocation = CDOTABaseAbility::GetCursorPosition(this);
  v6 = DOTA_CreateUnitByName("npc_dota_techies_minefield_sign", &vLocation, 1, v5, v4, m_Value);
  if ( v6 != 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_techies_minefield_sign");
    v7 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v6, v7, this, "modifier_techies_minefield_sign_thinker", &kv, 0);
    v8 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
    CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
    v10 = CursorPosition.y - AbsOrigin->y;
    v11 = CursorPosition.x - AbsOrigin->x;
    vDirection.z = 0.0;
    vDirection.y = v10;
    vDirection.x = v11;
    VectorNormalize(&vDirection);
    CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "lifetime", -1, 0);
    KeyValues::KeyValues(&kv2, "modifier_kill");
    KeyValues::SetFloat(&kv2, "duration", v12);
    v13 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v6, v13, this, "modifier_kill", &kv2, 0);
    v14 = RandomFloat(-135.0, -45.0);
    vAngles.x = 0.0;
    vAngles.y = v14;
    vAngles.z = 0.0;
    CBaseEntity::SetAbsAngles(v6, &vAngles);
    v15 = CDOTABaseAbility::GetCaster(this);
    v16 = (*(v15->_vptr_IHandleEntity + 414))(v15);
    CDOTA_BaseNPC::SetControllableByPlayer(v6, v16, 0);
    m_nFXIndex = this->m_nFXIndex;
    if ( m_nFXIndex != -1 )
    {
      ParticleManager = GetParticleManager();
      CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 0);
      this->m_nFXIndex = -1;
    }
    AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                              this,
                              "particles/units/heroes/hero_techies/techies_sign_ambient_base.vpcf",
                              2,
                              v6,
                              0);
    this->m_nFXIndex = AbilityParticleEffect;
    v20 = AbilityParticleEffect;
    v21 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v21, v20, 0, v6, 1, 0, vec3_invalid, 1);
    v22 = CDOTABaseAbility::GetCaster(this);
    (*(v22->_vptr_IHandleEntity + 206))(v22, this->m_nFXIndex, 0);
    CBaseAnimating::SetSkin(v6, 0);
    if ( this->m_bStolen.m_Value )
    {
      CBaseAnimating::SetSkin(v6, 1);
      *&vLocation.x = 0x435C000042700000LL;
      v24 = this->m_nFXIndex;
      vLocation.z = 20.0;
      v25 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v25, v24, 15, *&vLocation.x, vLocation.z);
      *&vLocation.x = 1065353216;
      v26 = this->m_nFXIndex;
      vLocation.z = 0.0;
      v27 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v27, v26, 16, *&vLocation.x, vLocation.z);
    }
    vLocation = CDOTABaseAbility::GetCursorPosition(this);
    FindClearSpaceForUnit(v6, vLocation, 1);
    CDOTA_BaseNPC::UnitEmitSound(v6, "Hero_Techies.Sign", 0.0, 0, 0);
    CBaseEntity::PhysicsTouchTriggers(v6, 0);
    v6->m_bBlocksCreepSpawn = 0;
    v23 = CDOTABaseAbility::GetCaster(this);
    CDOTAHeroList::LimitedUnitTrack(&g_HeroList, v23, EHeroLimitedUnitType::HERO_LIMITED_UNIT_TECHIES_SIGN, v6);
    KeyValues::~KeyValues(&kv2);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_Techies_Minefield_Sign_Thinker::~CDOTA_Modifier_Techies_Minefield_Sign_Thinker  (line 2193, @0x0000000002d27890, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Techies_Minefield_Sign_Thinker::~CDOTA_Modifier_Techies_Minefield_Sign_Thinker(
        CDOTA_Modifier_Techies_Minefield_Sign_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4639BD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Techies_Minefield_Sign_Thinker::~CDOTA_Modifier_Techies_Minefield_Sign_Thinker  (line 2193, @0x0000000002d278b0, libserver.so)  // inlines: ~CDOTA_Modifier_Techies_Minefield_Sign_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Techies_Minefield_Sign_Thinker::~CDOTA_Modifier_Techies_Minefield_Sign_Thinker(
        CDOTA_Modifier_Techies_Minefield_Sign_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4639BD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Techies_Minefield_Sign_Thinker::IsHidden  (line 2200, @0x0000000002d1ed10, libserver.so)
bool __fastcall CDOTA_Modifier_Techies_Minefield_Sign_Thinker::IsHidden(
        CDOTA_Modifier_Techies_Minefield_Sign_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Techies_Minefield_Sign_Thinker::IsAura  (line 2201, @0x0000000002d1ed20, libserver.so)
bool __fastcall CDOTA_Modifier_Techies_Minefield_Sign_Thinker::IsAura(
        CDOTA_Modifier_Techies_Minefield_Sign_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Techies_Minefield_Sign_Thinker::GetModifierAura  (line 2202, @0x0000000002d1ed30, libserver.so)
// strings: "modifier_techies_minefield_sign_aura"
const char *__fastcall CDOTA_Modifier_Techies_Minefield_Sign_Thinker::GetModifierAura(
        CDOTA_Modifier_Techies_Minefield_Sign_Thinker *const this)
{
  return "modifier_techies_minefield_sign_aura";
}


// CDOTA_Modifier_Techies_Minefield_Sign_Thinker::GetAuraSearchTeam  (line 2204, @0x0000000002d1ed40, libserver.so)
int __fastcall CDOTA_Modifier_Techies_Minefield_Sign_Thinker::GetAuraSearchTeam(
        CDOTA_Modifier_Techies_Minefield_Sign_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Techies_Minefield_Sign_Thinker::GetAuraSearchType  (line 2205, @0x0000000002d1ed50, libserver.so)
int __fastcall CDOTA_Modifier_Techies_Minefield_Sign_Thinker::GetAuraSearchType(
        CDOTA_Modifier_Techies_Minefield_Sign_Thinker *const this)
{
  return 32;
}


// CDOTA_Modifier_Techies_Minefield_Sign_Thinker::GetAuraRadius  (line 2206, @0x0000000002d1ed60, libserver.so)
int __fastcall CDOTA_Modifier_Techies_Minefield_Sign_Thinker::GetAuraRadius(
        CDOTA_Modifier_Techies_Minefield_Sign_Thinker *const this)
{
  return this->aura_radius;
}


// CDOTA_Modifier_Techies_Minefield_Sign_Thinker::GetAuraEntityReject  (line 2207, @0x0000000002d2f9c0, libserver.so)  // inlines: FStrEq, GetUnitName, String, ToCStr, _V_strcmp
// calls: strcmp, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter
// strings: "npc_dota_techies_land_mine", "npc_dota_techies_stasis_trap", "npc_dota_techies_remote_mine"
bool __fastcall CDOTA_Modifier_Techies_Minefield_Sign_Thinker::GetAuraEntityReject(
        CDOTA_Modifier_Techies_Minefield_Sign_Thinker *const this,
        CDOTA_BaseNPC *pNPC)
{
  bool v2; // bl
  const char *m_pAsString; // r12
  CDOTA_BaseNPC *Caster; // rax

  v2 = 1;
  m_pAsString = pNPC->m_iszUnitName.m_Value.u.m_pAsString;
  if ( m_pAsString != 0
    && (m_pAsString == "npc_dota_techies_land_mine"
     || strcmp(m_pAsString, "npc_dota_techies_land_mine") == 0
     || m_pAsString == "npc_dota_techies_stasis_trap"
     || strcmp(m_pAsString, "npc_dota_techies_stasis_trap") == 0
     || m_pAsString == "npc_dota_techies_remote_mine"
     || strcmp(m_pAsString, "npc_dota_techies_remote_mine") == 0) )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    return !CDOTA_BaseNPC::HasScepter(Caster);
  }
  return v2;
}


// CDOTA_Modifier_Techies_Minefield_Sign_Thinker::OnCreated  (line 2226, @0x0000000002d09160, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Techies_Minefield_Sign_Thinker::OnCreated(
        CDOTA_Modifier_Techies_Minefield_Sign_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->aura_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "aura_radius", -1, 0);
  else
    this->aura_radius = 0;
}


// CDOTA_Modifier_Techies_Minefield_Sign_Thinker::CheckState  (line 2234, @0x0000000002cc97c0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Techies_Minefield_Sign_Thinker::CheckState(
        CDOTA_Modifier_Techies_Minefield_Sign_Thinker *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x82904300uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFF7D6FBCFFLL;
}


// CDOTA_Modifier_Techies_Minefield_Sign_Aura::~CDOTA_Modifier_Techies_Minefield_Sign_Aura  (line 2251, @0x0000000002d273e0, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Techies_Minefield_Sign_Aura::~CDOTA_Modifier_Techies_Minefield_Sign_Aura(
        CDOTA_Modifier_Techies_Minefield_Sign_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Techies_Minefield_Sign_Aura::~CDOTA_Modifier_Techies_Minefield_Sign_Aura  (line 2251, @0x0000000002d27400, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible, ~CDOTA_Modifier_Techies_Minefield_Sign_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Techies_Minefield_Sign_Aura::~CDOTA_Modifier_Techies_Minefield_Sign_Aura(
        CDOTA_Modifier_Techies_Minefield_Sign_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Techies_Minefield_Sign_Aura::StatusEffectPriority  (line 2256, @0x0000000002d1ed70, libserver.so)
int __fastcall CDOTA_Modifier_Techies_Minefield_Sign_Aura::StatusEffectPriority(
        CDOTA_Modifier_Techies_Minefield_Sign_Aura *const this)
{
  return 100;
}


// CDOTA_Modifier_Techies_Minefield_Sign_Aura::GetPriority  (line 2257, @0x0000000002d1ed80, libserver.so)
int __fastcall CDOTA_Modifier_Techies_Minefield_Sign_Aura::GetPriority(
        CDOTA_Modifier_Techies_Minefield_Sign_Aura *const this)
{
  return 3;
}


// CDOTA_Modifier_Techies_Minefield_Sign_Aura::IsHidden  (line 2258, @0x0000000002d1ed90, libserver.so)
bool __fastcall CDOTA_Modifier_Techies_Minefield_Sign_Aura::IsHidden(
        CDOTA_Modifier_Techies_Minefield_Sign_Aura *const this)
{
  return 0;
}


// CDOTA_Modifier_Techies_Minefield_Sign_Aura::CheckState  (line 2264, @0x0000000002cd0790, libserver.so)  // inlines: Enable
// calls: CDOTA_Modifier_Invisible::CheckState
void __fastcall CDOTA_Modifier_Techies_Minefield_Sign_Aura::CheckState(
        CDOTA_Modifier_Techies_Minefield_Sign_Aura *const this,
        CDOTABuffState *const buffState)
{
  CDOTA_Modifier_Invisible::CheckState(this, buffState);
  buffState->m_nEnabledStateMask |= 0x400000000uLL;
  buffState->m_nDisabledStateMask &= ~0x400000000uLL;
}


// CDOTA_NPC_Techies_Minefield_Sign::~CDOTA_NPC_Techies_Minefield_Sign  (line 2273, @0x0000000002d25ec0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_NPC_Techies_Minefield_Sign::~CDOTA_NPC_Techies_Minefield_Sign(
        CDOTA_NPC_Techies_Minefield_Sign *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_NPC_Techies_Minefield_Sign::~CDOTA_NPC_Techies_Minefield_Sign  (line 2273, @0x0000000002d25f10, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_NPC_Techies_Minefield_Sign
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_NPC_Techies_Minefield_Sign::~CDOTA_NPC_Techies_Minefield_Sign(
        CDOTA_NPC_Techies_Minefield_Sign *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_NPC_Techies_Minefield_Sign::Schema_DynamicBinding  (line 2275, @0x0000000002d1eda0, libserver.so)
// globals: CDOTA_NPC_Techies_Minefield_Sign::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_NPC_Techies_Minefield_Sign::Schema_DynamicBinding(
        const CDOTA_NPC_Techies_Minefield_Sign *const this)
{
  return CDOTA_NPC_Techies_Minefield_Sign::s_pSchemaBinding;
}


// CDOTA_NPC_Techies_Minefield_Sign::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2275, @0x0000000002d1edd0, libserver.so)
// globals: CDOTA_NPC_Techies_Minefield_Sign::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_NPC_Techies_Minefield_Sign::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_NPC_Techies_Minefield_Sign::CEntityInstanceEntityClass *const this)
{
  return CDOTA_NPC_Techies_Minefield_Sign::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_NPC_Techies_Minefield_Sign::CEntityInstanceEntityClass::DestructInstance  (line 2275, @0x0000000002d1ede0, libserver.so)  // inlines: Destruct<CDOTA_NPC_Techies_Minefield_Sign>
void __fastcall CDOTA_NPC_Techies_Minefield_Sign::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_NPC_Techies_Minefield_Sign::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_NPC_Techies_Minefield_Sign::CEntityInstanceEntityClass::FreeInstance  (line 2275, @0x0000000002d1ee00, libserver.so)
void __fastcall CDOTA_NPC_Techies_Minefield_Sign::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_NPC_Techies_Minefield_Sign::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_NPC_Techies_Minefield_Sign::CEntityInstanceEntityClass::CanAllocate  (line 2275, @0x0000000002d1ee20, libserver.so)
bool __fastcall CDOTA_NPC_Techies_Minefield_Sign::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_NPC_Techies_Minefield_Sign::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_NPC_Techies_Minefield_Sign::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2275, @0x0000000002d1ee30, libserver.so)
// globals: CDOTA_NPC_Techies_Minefield_Sign::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_NPC_Techies_Minefield_Sign::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_NPC_Techies_Minefield_Sign::CEntityInstanceEntityClass *const this)
{
  return CDOTA_NPC_Techies_Minefield_Sign::s_pSchemaBinding;
}


// CDOTA_NPC_Techies_Minefield_Sign::CEntityInstanceEntityClass::AllocateInstance  (line 2275, @0x0000000002d24c10, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_NPC_Techies_Minefield_Sign::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_NPC_Techies_Minefield_Sign::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4504);
  memset(v1, 0, 0x1198u);
  return v1;
}


// CDOTA_NPC_Techies_Minefield_Sign::CEntityInstanceEntityClass::ConstructInstance  (line 2275, @0x0000000002d25b20, libserver.so)  // inlines: CDOTA_BaseNPC_Additive, CDOTA_NPC_Techies_Minefield_Sign, Construct<CDOTA_NPC_Techies_Minefield_Sign>
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_NPC_Techies_Minefield_Sign::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_NPC_Techies_Minefield_Sign::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *p = &off_463A270;
    *(p + 236) = &off_463B1D0;
    *(p + 257) = &off_463B500;
  }
  return p;
}


// CDOTA_NPC_Techies_Minefield_Sign::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2275, @0x0000000002d35390, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_NPC_Techies_Minefield_Sign::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_NPC_Techies_Minefield_Sign::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_NPC_Techies_Minefield_Sign::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2275, @0x0000000002d35630, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_NPC_Techies_Minefield_Sign::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_NPC_Techies_Minefield_Sign::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal  (line 2275, @0x0000000002d528c0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CDOTA_BaseNPC_Additive::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "npc_dota_techies_minefield_sign", "CDOTA_NPC_Techies_Minefield_Sign"
// globals: `guard variable for'CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass, CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_NPC_Techies_Minefield_Sign::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClassInfo, CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClassInfo
CEntityClass *__cdecl CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass) != 0 )
  {
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_designerName.u.m_Id = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass._vptr_CEntityClass = off_3F79390;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_AllHelpers.m_Size = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_classInputs.m_Size = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_classOutputs.m_Size = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_requiredEHandle.m_Index = -1;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_hNetworkSerializer = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_pBaseClassInfo = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_pClassInfo = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_flags = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_nAllHelpersFlags = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_pScriptClassDesc = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_pInputs = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_nInputCount = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_pOutputs = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_nOutputCount = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_pGameClass = 0;
    CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass._vptr_CEntityClass = off_463A1F0;
    __cxa_guard_release(&`guard variable for'CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass);
    __cxa_atexit(
      CDOTA_NPC_Techies_Minefield_Sign::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_NPC_Techies_Minefield_SignClass != 0 )
    return &CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass;
  if ( `guard variable for'CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Additive::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClassInfo,
      "CDOTA_NPC_Techies_Minefield_Sign",
      "npc_dota_techies_minefield_sign",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClassInfo);
  }
  CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_pClassInfo = &CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClassInfo;
  CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_pBaseClassInfo = CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_NPC_Techies_Minefield_SignClass = &CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass;
  CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInfo(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClassInfo.m_pClass = &CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass;
  CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_NPC_Techies_Minefield_SignClass->m_pComponentOverrides = 0;
  return &CDOTA_NPC_Techies_Minefield_Sign::GetEntityClassInternal(void)::g_EntityCDOTA_NPC_Techies_Minefield_SignClass;
}


// CDOTA_NPC_Techies_Minefield_Sign::ShouldTransmit  (line 2280, @0x0000000002d26230, libserver.so)
// calls: CBaseEntity::ShouldTransmit
int __fastcall CDOTA_NPC_Techies_Minefield_Sign::ShouldTransmit(
        CDOTA_NPC_Techies_Minefield_Sign *const this,
        const CGameCheckTransmitInfo *pInfo)
{
  return CBaseEntity::ShouldTransmit(this, pInfo);
}


// CDOTA_NPC_Techies_Minefield_Sign::YouForgotToImplementOrDeclareServerClass  (line 2293, @0x0000000002cc97f0, libserver.so)
int __fastcall CDOTA_NPC_Techies_Minefield_Sign::YouForgotToImplementOrDeclareServerClass(
        CDOTA_NPC_Techies_Minefield_Sign *const this)
{
  return 0;
}


// CDOTA_NPC_Techies_Minefield_Sign::GetServerClass  (line 2293, @0x0000000002cde030, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_NPC_Techies_Minefield_Sign::GetServerClass(CDOTA_NPC_Techies_Minefield_Sign *const this)
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


// CDOTA_Modifier_Techies_Arcana_DamageListener::~CDOTA_Modifier_Techies_Arcana_DamageListener  (line 2302, @0x0000000002d27840, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Techies_Arcana_DamageListener::~CDOTA_Modifier_Techies_Arcana_DamageListener(
        CDOTA_Modifier_Techies_Arcana_DamageListener *const this)
{
  this->_vptr_CDOTA_Buff = &off_463B590;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Techies_Arcana_DamageListener::~CDOTA_Modifier_Techies_Arcana_DamageListener  (line 2302, @0x0000000002d27860, libserver.so)  // inlines: ~CDOTA_Modifier_Techies_Arcana_DamageListener
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Techies_Arcana_DamageListener::~CDOTA_Modifier_Techies_Arcana_DamageListener(
        CDOTA_Modifier_Techies_Arcana_DamageListener *const this)
{
  this->_vptr_CDOTA_Buff = &off_463B590;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Techies_Arcana_DamageListener::IsHidden  (line 2307, @0x0000000002d1ee40, libserver.so)
bool __fastcall CDOTA_Modifier_Techies_Arcana_DamageListener::IsHidden(
        CDOTA_Modifier_Techies_Arcana_DamageListener *const this)
{
  return 1;
}


// CDOTA_Modifier_Techies_Arcana_DamageListener::DeclareFunctions  (line 2318, @0x0000000002cc9800, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Techies_Arcana_DamageListener::DeclareFunctions(
        CDOTA_Modifier_Techies_Arcana_DamageListener *const this)
{
  this->m_Functions[134].__pfn = (&stru_10 + 697);
  this->m_Functions[134].__delta = 0;
}


// CDOTA_Modifier_Techies_Arcana_DamageListener::OnTakeDamage  (line 2325, @0x0000000002d1c1f0, libserver.so)  // inlines: AddToTail, AttackerNPC, CDOTAUserMsg_MiniTaunt_t, CNetMessagePB, CUserMessagePB, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CBasePlayer*>, FStrEq, FindGameEvent<CDOTAUserMsg_MiniTaunt_t>, FindOrCreateGameEvent<CDOTAUserMsg_MiniTaunt_t>, Get, GetClassNameAsCStr, GetClassname, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, IndexToIdentity, IsValid, LookupEntity, PostEvent<CDOTAUserMsg_MiniTaunt_t>, Purge, RemoveAll, SendUserMessage<CDOTAUserMsg_MiniTaunt_t>, SpeakConcept, String, ToDOTAAbility, ToDOTABaseNPC, ToDOTABaseNPCHero, UnitNPC, _V_strcmp, operator CBaseEntity*, operator CEntityInstance*, set_has_taunting_player_id, set_taunting_player_id, ~CDOTAUserMsg_MiniTaunt_t, ~CNetMessagePB, ~CUserMessagePB, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: __stack_chk_fail, __dynamic_cast, CDOTABaseAbility::GetCaster, strcmp, CEntityHandle::operator CEntityInstance*, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipient, CUtlMemory<CBasePlayer*, int>::Grow, CDOTA_Buff::GetCaster, CDOTA_Speech::SpeakConcept (18 total)
// strings: "techies_land_mines", "techies_remote_mines", "istechiesminitaunt"
// globals: CEntityHandle::gm_pEntityList, IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MiniTaunt_t>(bool)::s_hEvent
ModifierVariant_t __fastcall CDOTA_Modifier_Techies_Arcana_DamageListener::OnTakeDamage(
        CDOTA_Modifier_Techies_Arcana_DamageListener *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v7; // rcx
  uint32 v9; // esi
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CEntityInstance *m_pInstance; // rax
  uint32 v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CDOTABaseAbility *v16; // rax
  CDOTABaseAbility *v17; // r13
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v19; // r14
  CEntityIdentity *m_pEntity; // rax
  const char *m_pAsString; // r13
  CEntityInstance *v22; // rax
  CEntityInstance *v23; // rdi
  CBasePlayer *v24; // r15
  const CEntityInstance *v25; // rax
  CDOTA_Speech *m_pSpeech; // rdi
  int v27; // eax
  IGameEventSystem *v28; // r14
  __int64 v29; // [rsp+18h] [rbp-348h]
  void (__fastcall *v30)(IGameEventSystem *, _QWORD, _QWORD, CRecipientFilter *, __int64, _QWORD *, __int64); // [rsp+20h] [rbp-340h]
  CUtlVector<CBasePlayer*,CUtlMemory<CBasePlayer*,int> > vecAdditionalRecipients; // [rsp+30h] [rbp-330h] BYREF
  _QWORD v32[2]; // [rsp+50h] [rbp-310h] BYREF
  int v33; // [rsp+60h] [rbp-300h]
  int nAttackerPlayerID; // [rsp+68h] [rbp-2F8h]
  CResponseCriteriaSet criteria; // [rsp+70h] [rbp-2F0h] BYREF
  CRecipientFilter filterspeech; // [rsp+B0h] [rbp-2B0h] BYREF
  CRecipientFilter filtervictims; // [rsp+1F0h] [rbp-170h] BYREF
  unsigned __int64 v38; // [rsp+328h] [rbp-38h]

  v38 = __readfsqword(0x28u);
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    m_Index_low = LOWORD(params->hattacker.m_Index);
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v7 = &v5[m_Index_low & 0x1FF];
      if ( v7 != 0
        && m_Index == v7->m_EHandle.m_Index
        && v7->m_pInstance != 0
        && BYTE3(v7->m_pInstance[7]._vptr_IHandleEntity) != 0 )
      {
        v9 = params->hunit.m_Index;
        if ( v9 + 2 > 1 )
        {
          v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
          if ( v10 != 0 )
          {
            v11 = &v10[params->hunit.m_Index & 0x1FF];
            if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
            {
              m_pInstance = v11->m_pInstance;
              if ( m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
              {
                v13 = params->inflictor.m_Index;
                if ( v13 + 2 > 1 )
                {
                  v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->inflictor.m_Index) >> 9) & 0x3F];
                  if ( v14 != 0 )
                  {
                    v15 = &v14[params->inflictor.m_Index & 0x1FF];
                    if ( v15 != 0 && v13 == v15->m_EHandle.m_Index && v15->m_pInstance != 0 )
                    {
                      v16 = __dynamic_cast(
                              v15->m_pInstance,
                              &`typeinfo for'CBaseEntity,
                              &`typeinfo for'CDOTABaseAbility,
                              0);
                      v17 = v16;
                      if ( v16 != 0 )
                      {
                        Caster = CDOTABaseAbility::GetCaster(v16);
                        v19 = Caster;
                        if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
                        {
                          m_pEntity = v17->m_pEntity;
                          m_pAsString = m_pEntity->m_designerName.u.m_pAsString;
                          if ( m_pAsString != 0
                            && (m_pAsString == "techies_land_mines"
                             || strcmp(m_pEntity->m_designerName.u.m_pAsString, "techies_land_mines") == 0
                             || m_pAsString == "techies_stasis_trap"
                             || strcmp(m_pAsString, "techies_stasis_trap") == 0
                             || m_pAsString == "techies_remote_mines"
                             || strcmp(m_pAsString, "techies_remote_mines") == 0) )
                          {
                            v22 = CEntityHandle::operator CEntityInstance *(&params->hunit);
                            if ( v22 == 0 || (v23 = v22, BYTE3(v22[7]._vptr_IHandleEntity) == 0) )
                              v23 = 0;
                            v24 = (*(v23->_vptr_IHandleEntity + 413))(v23);
                            if ( v24 != 0 )
                            {
                              CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
                              CResponseCriteriaSet::AppendCriteria(&criteria, "istechiesminitaunt", "yes", 1.0);
                              CRecipientFilter::CRecipientFilter(&filterspeech);
                              CRecipientFilter::AddRecipient(&filterspeech, v24);
                              v25 = (*(v19->_vptr_IHandleEntity + 413))(v19);
                              CRecipientFilter::AddRecipient(&filterspeech, v25);
                              vecAdditionalRecipients.m_Memory.m_pMemory = 0;
                              vecAdditionalRecipients.m_Memory.m_nAllocationCount = 0;
                              vecAdditionalRecipients.m_Memory.m_nGrowSize = 0;
                              CUtlMemory<CBasePlayer *,int>::Grow(&vecAdditionalRecipients.m_Memory, 1);
                              vecAdditionalRecipients.m_Size = 1;
                              if ( vecAdditionalRecipients.m_Memory.m_pMemory != 0 )
                                *vecAdditionalRecipients.m_Memory.m_pMemory = v24;
                              m_pSpeech = CDOTA_Buff::GetCaster(this)->m_Speech.m_pSpeech;
                              if ( m_pSpeech != 0 )
                                CDOTA_Speech::SpeakConcept(
                                  m_pSpeech,
                                  18,
                                  &criteria,
                                  1,
                                  0,
                                  0,
                                  0,
                                  &vecAdditionalRecipients);
                              CRecipientFilter::CRecipientFilter(&filtervictims);
                              CRecipientFilter::AddRecipient(&filtervictims, v24);
                              CDOTAUserMsg_MiniTaunt::CDOTAUserMsg_MiniTaunt(v32);
                              v32[0] = off_46082B0;
                              v27 = (*(v19->_vptr_IHandleEntity + 414))(v19);
                              v33 |= 1u;
                              nAttackerPlayerID = v27;
                              v28 = g_pGameEventSystem;
                              v30 = *(*g_pGameEventSystem + 128LL);
                              v29 = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MiniTaunt_t>(bool)::s_hEvent;
                              (*(*g_pNetworkMessages + 96LL))(
                                g_pNetworkMessages,
                                IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_MiniTaunt_t>(bool)::s_hEvent);
                              v30(v28, 0, 0, &filtervictims, v29, v32, 32);
                              v32[0] = &off_4608130;
                              CDOTAUserMsg_MiniTaunt::~CDOTAUserMsg_MiniTaunt(v32);
                              CRecipientFilter::~CRecipientFilter(&filtervictims);
                              vecAdditionalRecipients.m_Size = 0;
                              if ( (vecAdditionalRecipients.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                              {
                                CUtlMemory<CBasePlayer *,int>::Purge(&vecAdditionalRecipients.m_Memory);
                                if ( (vecAdditionalRecipients.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                                  CUtlMemory<CBasePlayer *,int>::Purge(&vecAdditionalRecipients.m_Memory);
                              }
                              CRecipientFilter::~CRecipientFilter(&filterspeech);
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
        }
      }
    }
  }
  return 1uLL;
}


