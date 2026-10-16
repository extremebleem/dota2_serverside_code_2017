// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:39
class CDOTA_Unit_Hero_Brewmaster : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Brewmaster(CDOTA_Unit_Hero_Brewmaster &);
	CDOTA_Unit_Hero_Brewmaster(CDOTA_Unit_Hero_Brewmaster &);
	CDOTA_Unit_Hero_Brewmaster();
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
	virtual bool OnSaveState(KeyValues *);
	virtual bool OnLoadState(KeyValues *);
	virtual ~CDOTA_Unit_Hero_Brewmaster();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[6] Precache
	// vtable[466] OnSaveState
	// vtable[467] OnLoadState
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:60
class C_CDOTA_Unit_Hero_Brewmaster_MapInstall {
	C_CDOTA_Unit_Hero_Brewmaster_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:238
class CDOTA_Unit_Brewmaster_PrimalEarth : public CDOTA_BaseNPC_Creep {
public:

private:

	int m_nFXEarthAmbient1;  // +0x119c
	int m_nFXEarthAmbient2;  // +0x11a0
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
	CDOTA_Unit_Brewmaster_PrimalEarth(CDOTA_Unit_Brewmaster_PrimalEarth &);
	CDOTA_Unit_Brewmaster_PrimalEarth(CDOTA_Unit_Brewmaster_PrimalEarth &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnAlive();
	virtual void OnDying();
	CDOTA_Unit_Brewmaster_PrimalEarth();
	virtual bool WantsToSaveWithLifetime();
	virtual ~CDOTA_Unit_Brewmaster_PrimalEarth();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[471] OnAlive
	// vtable[469] OnDying
	// vtable[468] WantsToSaveWithLifetime
	// sizeof = 4520
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:263
class C_CDOTA_Unit_Brewmaster_PrimalEarth_MapInstall {
	C_CDOTA_Unit_Brewmaster_PrimalEarth_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:331
class CDOTA_Unit_Brewmaster_PrimalStorm : public CDOTA_BaseNPC_Creep {
public:

private:

	int m_nFXStormAmbient1;  // +0x119c
	int m_nFXStormAmbient2;  // +0x11a0
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
	CDOTA_Unit_Brewmaster_PrimalStorm(CDOTA_Unit_Brewmaster_PrimalStorm &);
	CDOTA_Unit_Brewmaster_PrimalStorm(CDOTA_Unit_Brewmaster_PrimalStorm &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnAlive();
	virtual void OnDying();
	CDOTA_Unit_Brewmaster_PrimalStorm();
	virtual bool WantsToSaveWithLifetime();
	virtual ~CDOTA_Unit_Brewmaster_PrimalStorm();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[471] OnAlive
	// vtable[469] OnDying
	// vtable[468] WantsToSaveWithLifetime
	// sizeof = 4520
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:356
class C_CDOTA_Unit_Brewmaster_PrimalStorm_MapInstall {
	C_CDOTA_Unit_Brewmaster_PrimalStorm_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:425
class CDOTA_Unit_Brewmaster_PrimalFire : public CDOTA_BaseNPC_Creep {
public:

private:

	int m_nFXAmbient;  // +0x119c
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
	CDOTA_Unit_Brewmaster_PrimalFire(CDOTA_Unit_Brewmaster_PrimalFire &);
	CDOTA_Unit_Brewmaster_PrimalFire(CDOTA_Unit_Brewmaster_PrimalFire &);
	CDOTA_Unit_Brewmaster_PrimalFire();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnAlive();
	virtual void OnDying();
	virtual bool WantsToSaveWithLifetime();
	virtual ~CDOTA_Unit_Brewmaster_PrimalFire();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[471] OnAlive
	// vtable[469] OnDying
	// vtable[468] WantsToSaveWithLifetime
	// sizeof = 4512
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:443
class C_CDOTA_Unit_Brewmaster_PrimalFire_MapInstall {
	C_CDOTA_Unit_Brewmaster_PrimalFire_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:502
class CDOTA_Ability_Brewmaster_ThunderClap : public CDOTABaseAbility {
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
	CDOTA_Ability_Brewmaster_ThunderClap(CDOTA_Ability_Brewmaster_ThunderClap &);
	CDOTA_Ability_Brewmaster_ThunderClap(CDOTA_Ability_Brewmaster_ThunderClap &);
	CDOTA_Ability_Brewmaster_ThunderClap();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual DOTAAbilitySpeakTrigger_t SpeakTrigger();
	virtual int GetConceptRecipientType();
	virtual bool IsHiddenWhenStolen();
	virtual void OnStolen(CDOTABaseAbility *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Brewmaster_ThunderClap();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[300] SpeakTrigger
	// vtable[299] GetConceptRecipientType
	// vtable[306] IsHiddenWhenStolen
	// vtable[307] OnStolen
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:523
class C_CDOTA_Ability_Brewmaster_ThunderClap_MapInstall {
	C_CDOTA_Ability_Brewmaster_ThunderClap_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:606
class CDOTA_Modifier_Brewmaster_ThunderClap : public CDOTA_Buff {
public:

private:

	int movement_slow;  // +0xba8
	int attack_speed_slow;  // +0xbac
	CDOTA_Modifier_Brewmaster_ThunderClap();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Brewmaster_ThunderClap();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:667
class CDOTA_Ability_Brewmaster_DrunkenHaze : public CDOTABaseAbility {
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
	CDOTA_Ability_Brewmaster_DrunkenHaze(CDOTA_Ability_Brewmaster_DrunkenHaze &);
	CDOTA_Ability_Brewmaster_DrunkenHaze(CDOTA_Ability_Brewmaster_DrunkenHaze &);
	CDOTA_Ability_Brewmaster_DrunkenHaze();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual int GetConceptRecipientType();
	virtual bool IsHiddenWhenStolen();
	virtual void OnStolen(CDOTABaseAbility *);
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Brewmaster_DrunkenHaze();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[299] GetConceptRecipientType
	// vtable[306] IsHiddenWhenStolen
	// vtable[307] OnStolen
	// vtable[289] OnProjectileHit
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:693
class C_CDOTA_Ability_Brewmaster_DrunkenHaze_MapInstall {
	C_CDOTA_Ability_Brewmaster_DrunkenHaze_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:771
class CDOTA_Modifier_Brewmaster_DrunkenHaze : public CDOTA_Buff {
public:

private:

	int movement_slow;  // +0xba8
	int miss_chance;  // +0xbac
	CDOTA_Modifier_Brewmaster_DrunkenHaze();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierMiss_Percentage(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Brewmaster_DrunkenHaze();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:841
class CDOTA_Ability_Brewmaster_DrunkenBrawler : public CDOTABaseAbility {
	class NetworkVar_m_iBrawlActive {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

public:

private:

	bool m_bUpdateIcons;  // +0x394
	typedef CDOTA_Ability_Brewmaster_DrunkenBrawler ThisClass;

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
	CDOTA_Ability_Brewmaster_DrunkenBrawler(CDOTA_Ability_Brewmaster_DrunkenBrawler &);
	CDOTA_Ability_Brewmaster_DrunkenBrawler(CDOTA_Ability_Brewmaster_DrunkenBrawler &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CDOTA_Ability_Brewmaster_DrunkenBrawler();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool IsHiddenWhenStolen();
	virtual const char * GetIntrinsicModifierName();
	virtual void OnStolen(CDOTABaseAbility *);
	virtual ~CDOTA_Ability_Brewmaster_DrunkenBrawler();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[306] IsHiddenWhenStolen
	// vtable[280] GetIntrinsicModifierName
	// vtable[307] OnStolen
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:900
class C_CDOTA_Ability_Brewmaster_DrunkenBrawler_MapInstall {
	C_CDOTA_Ability_Brewmaster_DrunkenBrawler_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:942
class CDOTA_Modifier_Brewmaster_DrunkenBrawler : public CDOTA_Buff {
public:

private:

	int dodge_chance;  // +0xba8
	int crit_chance;  // +0xbac
	int crit_multiplier;  // +0xbb0
	int m_nFXIndex;  // +0xbb4
	int m_nFXIndexB;  // +0xbb8
	float last_proc;  // +0xbbc
	float m_flLastAttack;  // +0xbc0
	float m_flLastDefend;  // +0xbc4
	CDOTA_Modifier_Brewmaster_DrunkenBrawler();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnAttackLanded(const CModifierParams &);
	ModifierVariant_t GetModifierEvasion_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_CriticalStrike(const CModifierParams &);
	ModifierVariant_t Tooltip(const CModifierParams &);
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Brewmaster_DrunkenBrawler();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[89] OnAttackLanded
	// vtable[11] IsHidden
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:1160
class C_CDOTA_Ability_Brewmaster_PrimalSplit_MapInstall {
	C_CDOTA_Ability_Brewmaster_PrimalSplit_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:1223
class CDOTA_Modifier_Brewmaster_PrimalSplitDelay : public CDOTA_Buff {
public:

	CDOTA_Modifier_Brewmaster_PrimalSplitDelay();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Brewmaster_PrimalSplitDelay();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:1425
class CDOTA_Modifier_Brewmaster_PrimalSplitDuration : public CDOTA_Buff {
public:

private:

	int value;  // +0xba8
	CDOTA_Modifier_Brewmaster_PrimalSplitDuration();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual bool IsPurgable();
	ModifierVariant_t GetUnitLifetimeFraction(const CModifierParams &);
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_Brewmaster_PrimalSplitDuration();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[14] IsPurgable
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:1479
class CDOTA_Modifier_Brewmaster_PrimalSplit : public CDOTA_Buff, public CHorizontalMotionController, public CVerticalMotionController {
public:

private:

	EHANDLE m_hTarget;  // +0xbc4
	EHANDLE m_hSecondaryTarget;  // +0xbc8
	EHANDLE m_hTertiaryTarget;  // +0xbcc
	int m_nFXIndex;  // +0xbd0
	CDOTA_Modifier_Brewmaster_PrimalSplit();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void UpdateVerticalMotion(CDOTA_BaseNPC *, float);
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsVerticalMotionValidToApply();
	virtual bool IsMotionController();
	void UpdateMotion(CDOTA_BaseNPC *);
	virtual ~CDOTA_Modifier_Brewmaster_PrimalSplit();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] UpdateVerticalMotion
	// vtable[91] IsHorizontalMotionValidToApply
	// vtable[92] IsVerticalMotionValidToApply
	// vtable[21] IsMotionController
	// sizeof = 3032
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:1722
class CDOTA_Ability_Brewmaster_HurlBoulder : public CDOTABaseAbility {
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
	CDOTA_Ability_Brewmaster_HurlBoulder(CDOTA_Ability_Brewmaster_HurlBoulder &);
	CDOTA_Ability_Brewmaster_HurlBoulder(CDOTA_Ability_Brewmaster_HurlBoulder &);
	CDOTA_Ability_Brewmaster_HurlBoulder();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual void UpdateOnRemove();
	virtual ~CDOTA_Ability_Brewmaster_HurlBoulder();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[11] UpdateOnRemove
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:1796
class CDOTA_Ability_Brewmaster_SpellImmunity : public CDOTABaseAbility {
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
	CDOTA_Ability_Brewmaster_SpellImmunity(CDOTA_Ability_Brewmaster_SpellImmunity &);
	CDOTA_Ability_Brewmaster_SpellImmunity(CDOTA_Ability_Brewmaster_SpellImmunity &);
	CDOTA_Ability_Brewmaster_SpellImmunity();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Brewmaster_SpellImmunity();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:1810
class CDOTA_Modifier_Brewmaster_SpellImmunity : public CDOTA_Modifier_MagicImmune {
public:

	CDOTA_Modifier_Brewmaster_SpellImmunity(CDOTA_Modifier_Brewmaster_SpellImmunity &);
	CDOTA_Modifier_Brewmaster_SpellImmunity(const CDOTA_Modifier_Brewmaster_SpellImmunity &);
	CDOTA_Modifier_Brewmaster_SpellImmunity();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Brewmaster_SpellImmunity();

	// vtable[11] IsHidden
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:1826
class CDOTA_Ability_Brewmaster_Pulverize : public CDOTABaseAbility {
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
	CDOTA_Ability_Brewmaster_Pulverize(CDOTA_Ability_Brewmaster_Pulverize &);
	CDOTA_Ability_Brewmaster_Pulverize(CDOTA_Ability_Brewmaster_Pulverize &);
	CDOTA_Ability_Brewmaster_Pulverize();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Brewmaster_Pulverize();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:1840
class CDOTA_Modifier_Brewmaster_Pulverize : public CDOTA_Buff {
public:

private:

	int bonus_building_damage;  // +0xba8
	CDOTA_Modifier_Brewmaster_Pulverize();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierDamageOutgoing_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Brewmaster_Pulverize();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:1911
class CDOTA_Ability_Brewmaster_DispelMagic : public CDOTABaseAbility {
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
	CDOTA_Ability_Brewmaster_DispelMagic(CDOTA_Ability_Brewmaster_DispelMagic &);
	CDOTA_Ability_Brewmaster_DispelMagic(CDOTA_Ability_Brewmaster_DispelMagic &);
	CDOTA_Ability_Brewmaster_DispelMagic();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Brewmaster_DispelMagic();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:1927
class C_CDOTA_Ability_Brewmaster_DispelMagic_MapInstall {
	C_CDOTA_Ability_Brewmaster_DispelMagic_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:1981
class CDOTA_Ability_Brewmaster_Cyclone : public CDOTABaseAbility {
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
	CDOTA_Ability_Brewmaster_Cyclone(CDOTA_Ability_Brewmaster_Cyclone &);
	CDOTA_Ability_Brewmaster_Cyclone(CDOTA_Ability_Brewmaster_Cyclone &);
	CDOTA_Ability_Brewmaster_Cyclone();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Brewmaster_Cyclone();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:2019
class CDOTA_Modifier_Brewmaster_Cyclone : public CDOTA_Modifier_Cyclone {
public:

	CDOTA_Modifier_Brewmaster_Cyclone();
	virtual const char * GetEffectName();
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_Brewmaster_Cyclone();

	// vtable[67] GetEffectName
	// vtable[60] OnDestroy
	// sizeof = 3040
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:2048
class CDOTA_Ability_Brewmaster_WindWalk : public CDOTABaseAbility {
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
	CDOTA_Ability_Brewmaster_WindWalk(CDOTA_Ability_Brewmaster_WindWalk &);
	CDOTA_Ability_Brewmaster_WindWalk(CDOTA_Ability_Brewmaster_WindWalk &);
	CDOTA_Ability_Brewmaster_WindWalk();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Brewmaster_WindWalk();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:2085
class CDOTA_Modifier_Brewmaster_WindWalk : public CDOTA_Modifier_Invisible {
public:

private:

	int bonus_movement_speeed;  // +0xbb4
	int bonus_damage;  // +0xbb8
	CDOTA_Modifier_Brewmaster_WindWalk();
	virtual void CheckState(CDOTABuffState &);
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Brewmaster_WindWalk();

	// vtable[5] CheckState
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:2180
class CDOTA_Ability_Brewmaster_PermanentImmolation : public CDOTABaseAbility {
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
	CDOTA_Ability_Brewmaster_PermanentImmolation(CDOTA_Ability_Brewmaster_PermanentImmolation &);
	CDOTA_Ability_Brewmaster_PermanentImmolation(CDOTA_Ability_Brewmaster_PermanentImmolation &);
	CDOTA_Ability_Brewmaster_PermanentImmolation();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Brewmaster_PermanentImmolation();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:2193
class C_CDOTA_Ability_Brewmaster_PermanentImmolation_MapInstall {
	C_CDOTA_Ability_Brewmaster_PermanentImmolation_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:2204
class CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraRadius();
	virtual ~CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[41] GetAuraRadius
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_brewmaster.cpp:2247
class CDOTA_Modifier_Brewmaster_PermanentImmolation : public CDOTA_Buff {
public:

private:

	int damage;  // +0xba8
	CDOTA_Modifier_Brewmaster_PermanentImmolation();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	ModifierVariant_t Tooltip(const CModifierParams &);
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Brewmaster_PermanentImmolation();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Brewmaster::~CDOTA_Unit_Hero_Brewmaster  (line 39, @0x0000000002ba2560, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Brewmaster::~CDOTA_Unit_Hero_Brewmaster(CDOTA_Unit_Hero_Brewmaster *const this)
{
  this->_vptr_IHandleEntity = &off_449CED0;
  this->_vptr_INextBotEventResponder = &off_449DEB0;
  this->_vptr_CObstructionObject = &off_449E1E0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Brewmaster::~CDOTA_Unit_Hero_Brewmaster  (line 39, @0x0000000002ba25a0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Brewmaster
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Brewmaster::~CDOTA_Unit_Hero_Brewmaster(CDOTA_Unit_Hero_Brewmaster *const this)
{
  this->_vptr_IHandleEntity = &off_449CED0;
  this->_vptr_INextBotEventResponder = &off_449DEB0;
  this->_vptr_CObstructionObject = &off_449E1E0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Brewmaster::Schema_DynamicBinding  (line 41, @0x0000000002b8d650, libserver.so)
// globals: CDOTA_Unit_Hero_Brewmaster::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Brewmaster::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Brewmaster *const this)
{
  return CDOTA_Unit_Hero_Brewmaster::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Brewmaster::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002b8d680, libserver.so)
// globals: CDOTA_Unit_Hero_Brewmaster::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Brewmaster::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Brewmaster::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Brewmaster::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Brewmaster::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002b8d690, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Brewmaster>
void __fastcall CDOTA_Unit_Hero_Brewmaster::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Brewmaster::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Brewmaster::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002b8d6b0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Brewmaster::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Brewmaster::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Brewmaster::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002b8d6d0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Brewmaster::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Brewmaster::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Brewmaster::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002b8d6e0, libserver.so)
// globals: CDOTA_Unit_Hero_Brewmaster::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Brewmaster::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Brewmaster::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Brewmaster::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Brewmaster::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002b96ca0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Brewmaster::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Brewmaster::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Brewmaster::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002b9c390, libserver.so)  // inlines: CDOTA_Unit_Hero_Brewmaster, Construct<CDOTA_Unit_Hero_Brewmaster>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Brewmaster::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Brewmaster::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_449CED0;
    *(p + 236) = &off_449DEB0;
    *(p + 257) = &off_449E1E0;
  }
  return p;
}


// CDOTA_Unit_Hero_Brewmaster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002bac0d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Brewmaster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Brewmaster::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Brewmaster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002bac1f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Brewmaster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Brewmaster::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Brewmaster::GetEntityClassInternal  (line 41, @0x0000000002bcd850, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "npc_dota_hero_brewmaster", "CDOTA_Unit_Hero_Brewmaster"
// globals: `guard variable for'CDOTA_Unit_Hero_Brewmaster::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BrewmasterClass, CDOTA_Unit_Hero_Brewmaster::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BrewmasterClass, __dso_handle, CDOTA_Unit_Hero_Brewmaster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Brewmaster::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BrewmasterClassInfo, CDOTA_Unit_Hero_Brewmaster::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BrewmasterClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Brewmaster::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Brewmaster::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BrewmasterClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Brewmaster::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BrewmasterClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Brewmaster::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BrewmasterClass);
    CDOTA_Unit_Hero_Brewmaster::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BrewmasterClass._vptr_CEntityClass = off_449CE50;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Brewmaster::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BrewmasterClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Brewmaster::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Brewmaster::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BrewmasterClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_BrewmasterClass != 0 )
    return &CDOTA_Unit_Hero_Brewmaster::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BrewmasterClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Brewmaster::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BrewmasterClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Brewmaster::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BrewmasterClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Brewmaster::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BrewmasterClassInfo,
      "CDOTA_Unit_Hero_Brewmaster",
      "npc_dota_hero_brewmaster",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Brewmaster::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BrewmasterClassInfo);
  }
  CDOTA_Unit_Hero_Brewmaster::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BrewmasterClass.m_pClassInfo = &CDOTA_Unit_Hero_Brewmaster::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BrewmasterClassInfo;
  CDOTA_Unit_Hero_Brewmaster::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BrewmasterClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Brewmaster::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BrewmasterClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_BrewmasterClass = &CDOTA_Unit_Hero_Brewmaster::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BrewmasterClass;
  CDOTA_Unit_Hero_Brewmaster::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BrewmasterClassInfo.m_pClass = &CDOTA_Unit_Hero_Brewmaster::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BrewmasterClass;
  CDOTA_Unit_Hero_Brewmaster::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BrewmasterClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_BrewmasterClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Brewmaster::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BrewmasterClass;
}


// CDOTA_Unit_Hero_Brewmaster::YouForgotToImplementOrDeclareServerClass  (line 60, @0x0000000002b340c0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Brewmaster::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Brewmaster *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Brewmaster::GetServerClass  (line 60, @0x0000000002b4c020, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Brewmaster::GetServerClass(CDOTA_Unit_Hero_Brewmaster *const this)
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


// CDOTA_Unit_Hero_Brewmaster::Spawn  (line 69, @0x0000000002b39b70, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Spawn, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "particles/units/heroes/hero_brewmaster/brewmaster_spawn.vpcf", "attach_keg", "attach_mouth"
void __fastcall CDOTA_Unit_Hero_Brewmaster::Spawn(
        CDOTA_Unit_Hero_Brewmaster *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  const Vector *AbsOrigin; // r13
  CDOTA_ParticleManager *v6; // rax
  const Vector *v7; // r13
  CDOTA_ParticleManager *v8; // rax
  CDOTA_ParticleManager *v9; // rax

  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_brewmaster/brewmaster_spawn.vpcf",
               2,
               0,
               0,
               0);
  AbsOrigin = CBaseEntity::GetAbsOrigin(this);
  v6 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v6, Particle, 0, this, 5, "attach_keg", *AbsOrigin, 1);
  v7 = CBaseEntity::GetAbsOrigin(this);
  v8 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v8, Particle, 1, this, 5, "attach_mouth", *v7, 1);
  v9 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v9, Particle);
}


// CDOTA_Unit_Hero_Brewmaster::Precache  (line 81, @0x0000000002b5e250, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Precache, CFmtStrN<256, false>::CFmtStrN, DOTA_PrecacheUnitByNameSync, __stack_chk_fail
// strings: "npc_dota_brewmaster_earth_%1d", "npc_dota_brewmaster_storm_%1d", "npc_dota_brewmaster_fire_%1d"
void __fastcall CDOTA_Unit_Hero_Brewmaster::Precache(
        CDOTA_Unit_Hero_Brewmaster *const this,
        const CEntityPrecacheContext *pContext)
{
  int v3; // ebx
  int v4; // edx
  CFmtStrN<256,false> v5; // [rsp+0h] [rbp-140h] BYREF
  unsigned __int64 v6; // [rsp+118h] [rbp-28h]

  v3 = 1;
  v6 = __readfsqword(0x28u);
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
  do
  {
    CFmtStrN<256,false>::CFmtStrN(&v5, "npc_dota_brewmaster_earth_%1d", v3);
    DOTA_PrecacheUnitByNameSync(v5.m_szBuf, pContext, -1);
    CFmtStrN<256,false>::CFmtStrN(&v5, "npc_dota_brewmaster_storm_%1d", v3);
    DOTA_PrecacheUnitByNameSync(v5.m_szBuf, pContext, -1);
    v4 = v3++;
    CFmtStrN<256,false>::CFmtStrN(&v5, "npc_dota_brewmaster_fire_%1d", v4);
    DOTA_PrecacheUnitByNameSync(v5.m_szBuf, pContext, -1);
  }
  while ( v3 != 4 );
}


// CDOTA_Unit_Hero_Brewmaster::OnSaveState  (line 98, @0x0000000002b61320, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetTeamNumber, GetUnitName, IndexToIdentity, IsValid, LookupEntity, Purge, String, ToCStr, ToDOTABaseNPC, _V_strstr, operator CBaseEntity*, operator CEntityInstance*, strstr, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: FindUnitsInRadius, strstr, CDOTA_BaseNPC::FindModifierByName, KeyValues::SetFloat, CDOTA_BaseNPC_Hero::OnSaveState, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "npc_dota_brewmaster_earth", "modifier_brewmaster_primal_split_duration", "spirit_duration", "npc_dota_brewmaster_storm", "npc_dota_brewmaster_fire"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Unit_Hero_Brewmaster::OnSaveState(CDOTA_Unit_Hero_Brewmaster *const this, KeyValues *pKV)
{
  int m_Value; // edi
  CHandle<CBaseEntity> *m_pMemory; // rax
  CConcreteEntityList *v4; // r12
  CHandle<CBaseEntity> *v5; // r14
  CHandle<CBaseEntity> *v6; // rbx
  uint32 m_Index; // ecx
  __int16 v8; // si
  CEntityIdentity *v9; // rax
  CEntityIdentity *v10; // rax
  CDOTA_BaseNPC *m_pInstance; // r13
  const char *m_pAsString; // r15
  CDOTA_Buff *ModifierByName; // rax
  float v14; // xmm1_4
  CDOTA_Buff *v15; // rax
  float v16; // xmm1_4
  CDOTA_Buff *v17; // rax
  float v18; // xmm1_4
  bool v19; // bl
  CDOTA_BaseNPC *pPrimalFire; // [rsp+30h] [rbp-70h]
  CDOTA_BaseNPC *pPrimalStorm; // [rsp+38h] [rbp-68h]
  CDOTA_BaseNPC *pPrimalEarth; // [rsp+48h] [rbp-58h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hPotentialPrimals; // [rsp+50h] [rbp-50h] BYREF

  m_Value = this->m_iTeamNum.m_Value;
  hPotentialPrimals.m_Size = 0;
  hPotentialPrimals.m_Memory.m_pMemory = 0;
  hPotentialPrimals.m_Memory.m_nAllocationCount = 0;
  hPotentialPrimals.m_Memory.m_nGrowSize = 0;
  FindUnitsInRadius(m_Value, &vec3_origin, 0, -1.0, &hPotentialPrimals, 1, 1, 0, 0, 0);
  if ( hPotentialPrimals.m_Size <= 0 )
    goto LABEL_29;
  m_pMemory = hPotentialPrimals.m_Memory.m_pMemory;
  pPrimalFire = 0;
  v4 = CEntityHandle::gm_pEntityList;
  pPrimalStorm = 0;
  pPrimalEarth = 0;
  v5 = hPotentialPrimals.m_Memory.m_pMemory + 1;
  v6 = &hPotentialPrimals.m_Memory.m_pMemory[hPotentialPrimals.m_Size - 1 + 1];
  while ( 1 )
  {
    m_Index = m_pMemory->m_Index;
    if ( m_pMemory->m_Index + 2 > 1 )
    {
      v8 = m_pMemory->m_Index;
      v9 = v4->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
      if ( v9 == 0 )
        goto LABEL_3;
      v10 = &v9[v8 & 0x1FF];
      if ( v10 == 0 )
        goto LABEL_3;
      if ( m_Index != v10->m_EHandle.m_Index )
        goto LABEL_3;
      m_pInstance = v10->m_pInstance;
      if ( v10->m_pInstance == 0 )
        goto LABEL_3;
      if ( !m_pInstance->m_bIsDOTANPC )
        goto LABEL_3;
      m_pAsString = m_pInstance->m_iszUnitName.m_Value.u.m_pAsString;
      if ( m_pAsString == 0 )
        goto LABEL_3;
      if ( strstr(m_pInstance->m_iszUnitName.m_Value.u.m_pAsString, "npc_dota_brewmaster_earth") != 0 )
        break;
      if ( strstr(m_pAsString, "npc_dota_brewmaster_storm") != 0 )
      {
        pPrimalStorm = m_pInstance;
      }
      else
      {
        if ( strstr(m_pAsString, "npc_dota_brewmaster_fire") == 0 )
          m_pInstance = pPrimalFire;
        pPrimalFire = m_pInstance;
      }
    }
LABEL_3:
    m_pMemory = v5;
    if ( v5 == v6 )
      goto LABEL_14;
LABEL_4:
    ++v5;
  }
  pPrimalEarth = m_pInstance;
  m_pMemory = v5;
  if ( v5 != v6 )
    goto LABEL_4;
LABEL_14:
  if ( pPrimalEarth != 0 )
  {
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(pPrimalEarth, "modifier_brewmaster_primal_split_duration", 0);
    if ( ModifierByName != 0 )
    {
      (*(ModifierByName->_vptr_CDOTA_Buff + 30))(ModifierByName);
      v14 = 0.0;
      if ( g_pGameRules != 0 )
        v14 = *&g_pGameRules[18].m_szQuestName[20];
      KeyValues::SetFloat(pKV, "spirit_duration", v14);
    }
  }
  if ( pPrimalStorm != 0 )
  {
    v15 = CDOTA_BaseNPC::FindModifierByName(pPrimalStorm, "modifier_brewmaster_primal_split_duration", 0);
    if ( v15 != 0 )
    {
      (*(v15->_vptr_CDOTA_Buff + 30))(v15);
      v16 = 0.0;
      if ( g_pGameRules != 0 )
        v16 = *&g_pGameRules[18].m_szQuestName[20];
      KeyValues::SetFloat(pKV, "spirit_duration", v16);
    }
  }
  if ( pPrimalFire != 0 )
  {
    v17 = CDOTA_BaseNPC::FindModifierByName(pPrimalFire, "modifier_brewmaster_primal_split_duration", 0);
    if ( v17 != 0 )
    {
      (*(v17->_vptr_CDOTA_Buff + 30))(v17);
      v18 = 0.0;
      if ( g_pGameRules != 0 )
        v18 = *&g_pGameRules[18].m_szQuestName[20];
      KeyValues::SetFloat(pKV, "spirit_duration", v18);
    }
  }
LABEL_29:
  v19 = CDOTA_BaseNPC_Hero::OnSaveState(this, pKV);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hPotentialPrimals);
  if ( (hPotentialPrimals.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hPotentialPrimals.m_Memory);
    if ( (hPotentialPrimals.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hPotentialPrimals.m_Memory);
  }
  return v19;
}


// CDOTA_Unit_Hero_Brewmaster::OnLoadState  (line 158, @0x0000000002b61630, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GetUnitName, IndexToIdentity, IsValid, LookupEntity, Purge, String, ToCStr, ToDOTABaseNPC, _V_strstr, operator CBaseEntity*, operator CEntityInstance*, operator[], strstr, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_BaseNPC::FindAbilityByName, KeyValues::GetFloat, FindUnitsInRadius, strstr, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, KeyValues::SetPtr, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CDOTA_BaseNPC_Hero::OnLoadState (15 total)
// strings: "brewmaster_primal_split", "spirit_duration", "npc_dota_brewmaster_earth", "modifier_brewmaster_primal_split_duration", "modifier_brewmaster_primal_split", "npc_dota_brewmaster_storm" (7 total)
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Unit_Hero_Brewmaster::OnLoadState(CDOTA_Unit_Hero_Brewmaster *const this, KeyValues *pKV)
{
  float v4; // xmm1_4
  int m_Value; // edi
  __int64 v6; // rbx
  CDOTA_BaseNPC *v7; // r14
  CConcreteEntityList *v8; // rsi
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  __int64 v13; // rcx
  CEntityIdentity *v14; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  const char *m_pAsString; // r15
  float v17; // xmm1_4
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  float v20; // xmm1_4
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *pTarget3; // [rsp+28h] [rbp-98h]
  CDOTA_BaseNPC *pTarget2; // [rsp+30h] [rbp-90h]
  CDOTABaseAbility *pSplitAbility; // [rsp+38h] [rbp-88h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hPotentialSpirits; // [rsp+50h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+88h] [rbp-38h]

  v30 = __readfsqword(0x28u);
  pSplitAbility = CDOTA_BaseNPC::FindAbilityByName(this, "brewmaster_primal_split", 0);
  if ( pSplitAbility == 0 || KeyValues::GetFloat(pKV, "spirit_duration", v4) <= 0.0 )
    return CDOTA_BaseNPC_Hero::OnLoadState(this, pKV);
  m_Value = this->m_iTeamNum.m_Value;
  hPotentialSpirits.m_Size = 0;
  hPotentialSpirits.m_Memory.m_pMemory = 0;
  hPotentialSpirits.m_Memory.m_nAllocationCount = 0;
  hPotentialSpirits.m_Memory.m_nGrowSize = 0;
  FindUnitsInRadius(m_Value, &vec3_origin, 0, -1.0, &hPotentialSpirits, 1, 1, 0, 0, 0);
  if ( hPotentialSpirits.m_Size <= 0 )
  {
    pTarget3 = 0;
    pTarget2 = 0;
    goto LABEL_21;
  }
  pTarget3 = 0;
  v6 = 0;
  v7 = 0;
  pTarget2 = 0;
  do
  {
    while ( 1 )
    {
      v8 = CEntityHandle::gm_pEntityList;
      v9 = &hPotentialSpirits.m_Memory.m_pMemory[v6];
      m_Index = v9->m_Index;
      if ( v9->m_Index + 2 > 1 )
      {
        v11 = v9->m_Index;
        v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F];
        if ( v12 != 0 )
        {
          v13 = v11 & 0x1FF;
          v8 = (8 * v13);
          v14 = &v12[v13];
          if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
          {
            m_pInstance = v14->m_pInstance;
            if ( v14->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
            {
              m_pAsString = m_pInstance->m_iszUnitName.m_Value.u.m_pAsString;
              if ( m_pAsString != 0 )
              {
                if ( strstr(m_pInstance->m_iszUnitName.m_Value.u.m_pAsString, "npc_dota_brewmaster_earth") != 0 )
                {
                  v7 = m_pInstance;
                  goto LABEL_15;
                }
                if ( strstr(m_pAsString, "npc_dota_brewmaster_storm") != 0 )
                {
                  pTarget2 = m_pInstance;
                  goto LABEL_15;
                }
                if ( strstr(m_pAsString, "npc_dota_brewmaster_fire") != 0 )
                  break;
              }
            }
          }
        }
      }
      if ( ++v6 >= hPotentialSpirits.m_Size )
        goto LABEL_16;
    }
    pTarget3 = m_pInstance;
LABEL_15:
    KeyValues::KeyValues(&kv, "modifier_brewmaster_primal_split_duration");
    KeyValues::SetFloat(&kv, "duration", v17);
    CDOTA_BaseNPC::AddNewModifier(m_pInstance, this, pSplitAbility, "modifier_brewmaster_primal_split_duration", &kv, 0);
    KeyValues::~KeyValues(&kv);
    ++v6;
  }
  while ( v6 < hPotentialSpirits.m_Size );
LABEL_16:
  if ( v7 != 0 && (*(v7->_vptr_IHandleEntity + 408))(v7, v8) != 0 )
  {
LABEL_20:
    if ( (*(v7->_vptr_IHandleEntity + 408))(v7) == 0 )
      goto LABEL_21;
  }
  else
  {
    if ( pTarget2 != 0 )
    {
      v18 = pTarget3;
      pTarget3 = 0;
      v7 = pTarget2;
      pTarget2 = v18;
      goto LABEL_20;
    }
    v22 = pTarget3;
    pTarget3 = 0;
    pTarget2 = v22;
LABEL_21:
    v19 = pTarget3;
    pTarget3 = 0;
    v7 = pTarget2;
    pTarget2 = v19;
  }
  KeyValues::KeyValues(&kv, "modifier_brewmaster_primal_split");
  KeyValues::SetPtr(&kv, "target1", v7);
  KeyValues::SetPtr(&kv, "target2", pTarget2);
  KeyValues::SetPtr(&kv, "target3", pTarget3);
  KeyValues::SetFloat(&kv, "duration", v20);
  CDOTA_BaseNPC::AddNewModifier(this, this, pSplitAbility, "modifier_brewmaster_primal_split", &kv, 0);
  KeyValues::~KeyValues(&kv);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hPotentialSpirits);
  if ( (hPotentialSpirits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hPotentialSpirits.m_Memory);
    if ( (hPotentialSpirits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hPotentialSpirits.m_Memory);
  }
  return CDOTA_BaseNPC_Hero::OnLoadState(this, pKV);
}


// CDOTA_Unit_Brewmaster_PrimalEarth::~CDOTA_Unit_Brewmaster_PrimalEarth  (line 238, @0x0000000002b99030, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_Unit_Brewmaster_PrimalEarth::~CDOTA_Unit_Brewmaster_PrimalEarth(
        CDOTA_Unit_Brewmaster_PrimalEarth *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_Unit_Brewmaster_PrimalEarth::~CDOTA_Unit_Brewmaster_PrimalEarth  (line 238, @0x0000000002b99080, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep, ~CDOTA_Unit_Brewmaster_PrimalEarth
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Brewmaster_PrimalEarth::~CDOTA_Unit_Brewmaster_PrimalEarth(
        CDOTA_Unit_Brewmaster_PrimalEarth *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Brewmaster_PrimalEarth::Schema_DynamicBinding  (line 240, @0x0000000002b8d6f0, libserver.so)
// globals: CDOTA_Unit_Brewmaster_PrimalEarth::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Brewmaster_PrimalEarth::Schema_DynamicBinding(
        const CDOTA_Unit_Brewmaster_PrimalEarth *const this)
{
  return CDOTA_Unit_Brewmaster_PrimalEarth::s_pSchemaBinding;
}


// CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 240, @0x0000000002b8d720, libserver.so)
// globals: CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass::DestructInstance  (line 240, @0x0000000002b8d730, libserver.so)  // inlines: Destruct<CDOTA_Unit_Brewmaster_PrimalEarth>
void __fastcall CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass::FreeInstance  (line 240, @0x0000000002b8d750, libserver.so)
void __fastcall CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass::CanAllocate  (line 240, @0x0000000002b8d770, libserver.so)
bool __fastcall CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 240, @0x0000000002b8d780, libserver.so)
// globals: CDOTA_Unit_Brewmaster_PrimalEarth::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Brewmaster_PrimalEarth::s_pSchemaBinding;
}


// CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass::AllocateInstance  (line 240, @0x0000000002b96ce0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4520);
  memset(v1, 0, 0x11A8u);
  return v1;
}


// CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass::ConstructInstance  (line 240, @0x0000000002b98e30, libserver.so)  // inlines: CDOTA_Unit_Brewmaster_PrimalEarth, Construct<CDOTA_Unit_Brewmaster_PrimalEarth>
// calls: CDOTA_BaseNPC_Creep::CDOTA_BaseNPC_Creep
CEntityInstance *__fastcall CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Creep::CDOTA_BaseNPC_Creep(p);
    *(p + 1127) = -1;
    *p = &off_449E2B0;
    *(p + 236) = &off_449F210;
    *(p + 257) = &off_449F540;
    *(p + 1128) = -1;
  }
  return p;
}


// CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 240, @0x0000000002babe90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 240, @0x0000000002bac250, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal  (line 240, @0x0000000002bd1d20, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CDOTA_BaseNPC_Creep::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "npc_dota_brewmaster_earth", "CDOTA_Unit_Brewmaster_PrimalEarth"
// globals: `guard variable for'CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass, CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClassInfo, CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClassInfo
CEntityClass *__cdecl CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass) != 0 )
  {
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_designerName.u.m_Id = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_AllHelpers.m_Size = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_classInputs.m_Size = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_classOutputs.m_Size = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_hNetworkSerializer = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_pBaseClassInfo = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_pClassInfo = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_flags = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_nAllHelpersFlags = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_pScriptClassDesc = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_pInputs = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_nInputCount = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_pOutputs = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_nOutputCount = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_pGameClass = 0;
    CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass._vptr_CEntityClass = off_449E230;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass);
    __cxa_atexit(
      CDOTA_Unit_Brewmaster_PrimalEarth::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Brewmaster_PrimalEarthClass != 0 )
    return &CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass;
  if ( `guard variable for'CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Creep::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClassInfo,
      "CDOTA_Unit_Brewmaster_PrimalEarth",
      "npc_dota_brewmaster_earth",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClassInfo);
  }
  CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_pClassInfo = &CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClassInfo;
  CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_pBaseClassInfo = CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Brewmaster_PrimalEarthClass = &CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass;
  CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClassInfo.m_pClass = &CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass;
  CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_Unit_Brewmaster_PrimalEarthClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Brewmaster_PrimalEarth::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalEarthClass;
}


// CDOTA_Unit_Brewmaster_PrimalEarth::WantsToSaveWithLifetime  (line 253, @0x0000000002b8d790, libserver.so)
bool __fastcall CDOTA_Unit_Brewmaster_PrimalEarth::WantsToSaveWithLifetime(
        CDOTA_Unit_Brewmaster_PrimalEarth *const this)
{
  return 1;
}


// CDOTA_Unit_Brewmaster_PrimalEarth::YouForgotToImplementOrDeclareServerClass  (line 263, @0x0000000002b340d0, libserver.so)
int __fastcall CDOTA_Unit_Brewmaster_PrimalEarth::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Brewmaster_PrimalEarth *const this)
{
  return 0;
}


// CDOTA_Unit_Brewmaster_PrimalEarth::GetServerClass  (line 263, @0x0000000002b4bb60, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Brewmaster_PrimalEarth::GetServerClass(
        CDOTA_Unit_Brewmaster_PrimalEarth *const this)
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


// CDOTA_Unit_Brewmaster_PrimalEarth::OnAlive  (line 270, @0x0000000002b340e0, libserver.so)
void __fastcall CDOTA_Unit_Brewmaster_PrimalEarth::OnAlive(CDOTA_Unit_Brewmaster_PrimalEarth *const this)
{
  ;
}


// CDOTA_Unit_Brewmaster_PrimalEarth::OnDying  (line 288, @0x0000000002b451e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevel, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::AddEffects, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::HasScepter, CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles, AngleVectors, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleControlOrientation, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "brewmaster_primal_split", "particles/units/heroes/hero_brewmaster/brewmaster_earth_death.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Unit_Brewmaster_PrimalEarth::OnDying(CDOTA_Unit_Brewmaster_PrimalEarth *const this)
{
  int v2; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTABaseAbility *AbilityByName; // rax
  int m_Value; // r13d
  bool HasScepter; // al
  int v9; // r13d
  const Vector *AbsOrigin; // rax
  const QAngle *AbsAngles; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  float vecPos; // [rsp+Ch] [rbp-74h]
  double vecPos_4; // [rsp+10h] [rbp-70h]
  Vector vecFwd; // [rsp+20h] [rbp-60h] BYREF
  Vector vecRight; // [rsp+30h] [rbp-50h] BYREF
  Vector vecUp; // [rsp+40h] [rbp-40h] BYREF
  double v23[6]; // [rsp+50h] [rbp-30h] BYREF

  CBaseEntity::AddEffects(this, 32);
  v2 = (*(this->_vptr_IHandleEntity + 414))(this);
  CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(v23, g_pDOTAPlayerResource, v2);
  if ( (LODWORD(v23[0]) + 2) > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v23[0]) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[LOWORD(v23[0]) & 0x1FF];
      if ( v4 != 0 && LODWORD(v23[0]) == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          AbilityByName = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "brewmaster_primal_split", 0);
          if ( AbilityByName != 0 )
          {
            m_Value = AbilityByName->m_iLevel.m_Value;
            HasScepter = CDOTA_BaseNPC::HasScepter(m_pInstance);
            if ( !this->m_bIsIllusion.m_Value )
            {
              v9 = HasScepter + m_Value;
              AbsOrigin = CBaseEntity::GetAbsOrigin(this);
              vecPos_4 = *&AbsOrigin->x;
              vecPos = AbsOrigin->z + 96.0;
              AbsAngles = CBaseEntity::GetAbsAngles(this);
              AngleVectors(AbsAngles, &vecFwd, &vecRight, &vecUp);
              ParticleManager = GetParticleManager();
              Particle = CDOTA_ParticleManager::CreateParticle(
                           ParticleManager,
                           "particles/units/heroes/hero_brewmaster/brewmaster_earth_death.vpcf",
                           2,
                           0,
                           0,
                           0);
              v14 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControl(v14, Particle, 0, vecPos_4, vecPos);
              v15 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControlOrientation(
                v15,
                Particle,
                0,
                *&vecFwd.x,
                vecFwd.z,
                *&vecRight.x,
                vecRight.z,
                *&vecUp.x,
                vecUp.z);
              *(v23 + 4) = 0.0;
              *v23 = v9;
              v16 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControl(v16, Particle, 1, v23[0], *&v23[1]);
              v17 = GetParticleManager();
              CDOTA_ParticleManager::ReleaseParticleIndex(v17, Particle);
            }
          }
        }
      }
    }
  }
}


// CDOTA_Unit_Brewmaster_PrimalStorm::~CDOTA_Unit_Brewmaster_PrimalStorm  (line 331, @0x0000000002b990e0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_Unit_Brewmaster_PrimalStorm::~CDOTA_Unit_Brewmaster_PrimalStorm(
        CDOTA_Unit_Brewmaster_PrimalStorm *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_Unit_Brewmaster_PrimalStorm::~CDOTA_Unit_Brewmaster_PrimalStorm  (line 331, @0x0000000002b99130, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep, ~CDOTA_Unit_Brewmaster_PrimalStorm
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Brewmaster_PrimalStorm::~CDOTA_Unit_Brewmaster_PrimalStorm(
        CDOTA_Unit_Brewmaster_PrimalStorm *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Brewmaster_PrimalStorm::Schema_DynamicBinding  (line 333, @0x0000000002b8d7a0, libserver.so)
// globals: CDOTA_Unit_Brewmaster_PrimalStorm::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Brewmaster_PrimalStorm::Schema_DynamicBinding(
        const CDOTA_Unit_Brewmaster_PrimalStorm *const this)
{
  return CDOTA_Unit_Brewmaster_PrimalStorm::s_pSchemaBinding;
}


// CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 333, @0x0000000002b8d7d0, libserver.so)
// globals: CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass::DestructInstance  (line 333, @0x0000000002b8d7e0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Brewmaster_PrimalStorm>
void __fastcall CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass::FreeInstance  (line 333, @0x0000000002b8d800, libserver.so)
void __fastcall CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass::CanAllocate  (line 333, @0x0000000002b8d820, libserver.so)
bool __fastcall CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 333, @0x0000000002b8d830, libserver.so)
// globals: CDOTA_Unit_Brewmaster_PrimalStorm::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Brewmaster_PrimalStorm::s_pSchemaBinding;
}


// CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass::AllocateInstance  (line 333, @0x0000000002b96d20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4520);
  memset(v1, 0, 0x11A8u);
  return v1;
}


// CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass::ConstructInstance  (line 333, @0x0000000002b98e90, libserver.so)  // inlines: CDOTA_Unit_Brewmaster_PrimalStorm, Construct<CDOTA_Unit_Brewmaster_PrimalStorm>
// calls: CDOTA_BaseNPC_Creep::CDOTA_BaseNPC_Creep
CEntityInstance *__fastcall CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Creep::CDOTA_BaseNPC_Creep(p);
    *(p + 1127) = -1;
    *p = &off_449F610;
    *(p + 236) = &off_44A0570;
    *(p + 257) = &off_44A08A0;
    *(p + 1128) = -1;
  }
  return p;
}


// CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 333, @0x0000000002babfb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 333, @0x0000000002bac310, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Brewmaster_PrimalStorm::GetEntityClassInternal  (line 333, @0x0000000002bce180, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CDOTA_BaseNPC_Creep::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "npc_dota_brewmaster_storm", "CDOTA_Unit_Brewmaster_PrimalStorm"
// globals: `guard variable for'CDOTA_Unit_Brewmaster_PrimalStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalStormClass, CDOTA_Unit_Brewmaster_PrimalStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalStormClass, __dso_handle, CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Brewmaster_PrimalStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalStormClassInfo, CDOTA_Unit_Brewmaster_PrimalStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalStormClassInfo
CEntityClass *__cdecl CDOTA_Unit_Brewmaster_PrimalStorm::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Brewmaster_PrimalStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalStormClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Brewmaster_PrimalStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalStormClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Brewmaster_PrimalStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalStormClass);
    CDOTA_Unit_Brewmaster_PrimalStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalStormClass._vptr_CEntityClass = off_449F590;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Brewmaster_PrimalStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalStormClass);
    __cxa_atexit(
      CDOTA_Unit_Brewmaster_PrimalStorm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Brewmaster_PrimalStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalStormClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Brewmaster_PrimalStormClass != 0 )
    return &CDOTA_Unit_Brewmaster_PrimalStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalStormClass;
  if ( `guard variable for'CDOTA_Unit_Brewmaster_PrimalStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalStormClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Brewmaster_PrimalStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalStormClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Creep::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Brewmaster_PrimalStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalStormClassInfo,
      "CDOTA_Unit_Brewmaster_PrimalStorm",
      "npc_dota_brewmaster_storm",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Brewmaster_PrimalStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalStormClassInfo);
  }
  CDOTA_Unit_Brewmaster_PrimalStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalStormClass.m_pClassInfo = &CDOTA_Unit_Brewmaster_PrimalStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalStormClassInfo;
  CDOTA_Unit_Brewmaster_PrimalStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalStormClass.m_pBaseClassInfo = CDOTA_Unit_Brewmaster_PrimalStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalStormClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Brewmaster_PrimalStormClass = &CDOTA_Unit_Brewmaster_PrimalStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalStormClass;
  CDOTA_Unit_Brewmaster_PrimalStorm::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalStormClassInfo.m_pClass = &CDOTA_Unit_Brewmaster_PrimalStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalStormClass;
  CDOTA_Unit_Brewmaster_PrimalStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalStormClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_Unit_Brewmaster_PrimalStormClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Brewmaster_PrimalStorm::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalStormClass;
}


// CDOTA_Unit_Brewmaster_PrimalStorm::WantsToSaveWithLifetime  (line 346, @0x0000000002b8d840, libserver.so)
bool __fastcall CDOTA_Unit_Brewmaster_PrimalStorm::WantsToSaveWithLifetime(
        CDOTA_Unit_Brewmaster_PrimalStorm *const this)
{
  return 1;
}


// CDOTA_Unit_Brewmaster_PrimalStorm::YouForgotToImplementOrDeclareServerClass  (line 356, @0x0000000002b340f0, libserver.so)
int __fastcall CDOTA_Unit_Brewmaster_PrimalStorm::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Brewmaster_PrimalStorm *const this)
{
  return 0;
}


// CDOTA_Unit_Brewmaster_PrimalStorm::GetServerClass  (line 356, @0x0000000002b4c1e0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Brewmaster_PrimalStorm::GetServerClass(
        CDOTA_Unit_Brewmaster_PrimalStorm *const this)
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


// CDOTA_Unit_Brewmaster_PrimalStorm::OnAlive  (line 363, @0x0000000002b34100, libserver.so)
void __fastcall CDOTA_Unit_Brewmaster_PrimalStorm::OnAlive(CDOTA_Unit_Brewmaster_PrimalStorm *const this)
{
  ;
}


// CDOTA_Unit_Brewmaster_PrimalStorm::OnDying  (line 381, @0x0000000002b455a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevel, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::AddEffects, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::HasScepter, CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles, AngleVectors, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleControlOrientation, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "brewmaster_primal_split", "particles/units/heroes/hero_brewmaster/brewmaster_storm_death.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Unit_Brewmaster_PrimalStorm::OnDying(CDOTA_Unit_Brewmaster_PrimalStorm *const this)
{
  int v2; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTABaseAbility *AbilityByName; // rax
  int m_Value; // r13d
  bool HasScepter; // al
  int v9; // r13d
  const Vector *AbsOrigin; // rax
  const QAngle *AbsAngles; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  float vecPos; // [rsp+Ch] [rbp-74h]
  double vecPos_4; // [rsp+10h] [rbp-70h]
  Vector vecFwd; // [rsp+20h] [rbp-60h] BYREF
  Vector vecRight; // [rsp+30h] [rbp-50h] BYREF
  Vector vecUp; // [rsp+40h] [rbp-40h] BYREF
  double v23[6]; // [rsp+50h] [rbp-30h] BYREF

  CBaseEntity::AddEffects(this, 32);
  v2 = (*(this->_vptr_IHandleEntity + 414))(this);
  CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(v23, g_pDOTAPlayerResource, v2);
  if ( (LODWORD(v23[0]) + 2) > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v23[0]) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[LOWORD(v23[0]) & 0x1FF];
      if ( v4 != 0 && LODWORD(v23[0]) == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          AbilityByName = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "brewmaster_primal_split", 0);
          if ( AbilityByName != 0 )
          {
            m_Value = AbilityByName->m_iLevel.m_Value;
            HasScepter = CDOTA_BaseNPC::HasScepter(m_pInstance);
            if ( !this->m_bIsIllusion.m_Value )
            {
              v9 = HasScepter + m_Value;
              AbsOrigin = CBaseEntity::GetAbsOrigin(this);
              vecPos_4 = *&AbsOrigin->x;
              vecPos = AbsOrigin->z + 96.0;
              AbsAngles = CBaseEntity::GetAbsAngles(this);
              AngleVectors(AbsAngles, &vecFwd, &vecRight, &vecUp);
              ParticleManager = GetParticleManager();
              Particle = CDOTA_ParticleManager::CreateParticle(
                           ParticleManager,
                           "particles/units/heroes/hero_brewmaster/brewmaster_storm_death.vpcf",
                           2,
                           0,
                           0,
                           0);
              v14 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControl(v14, Particle, 0, vecPos_4, vecPos);
              v15 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControlOrientation(
                v15,
                Particle,
                0,
                *&vecFwd.x,
                vecFwd.z,
                *&vecRight.x,
                vecRight.z,
                *&vecUp.x,
                vecUp.z);
              *(v23 + 4) = 0.0;
              *v23 = v9;
              v16 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControl(v16, Particle, 1, v23[0], *&v23[1]);
              v17 = GetParticleManager();
              CDOTA_ParticleManager::ReleaseParticleIndex(v17, Particle);
            }
          }
        }
      }
    }
  }
}


// CDOTA_Unit_Brewmaster_PrimalFire::~CDOTA_Unit_Brewmaster_PrimalFire  (line 425, @0x0000000002b99190, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_Unit_Brewmaster_PrimalFire::~CDOTA_Unit_Brewmaster_PrimalFire(
        CDOTA_Unit_Brewmaster_PrimalFire *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_Unit_Brewmaster_PrimalFire::~CDOTA_Unit_Brewmaster_PrimalFire  (line 425, @0x0000000002b991e0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep, ~CDOTA_Unit_Brewmaster_PrimalFire
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Brewmaster_PrimalFire::~CDOTA_Unit_Brewmaster_PrimalFire(
        CDOTA_Unit_Brewmaster_PrimalFire *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Brewmaster_PrimalFire::Schema_DynamicBinding  (line 427, @0x0000000002b8d850, libserver.so)
// globals: CDOTA_Unit_Brewmaster_PrimalFire::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Brewmaster_PrimalFire::Schema_DynamicBinding(
        const CDOTA_Unit_Brewmaster_PrimalFire *const this)
{
  return CDOTA_Unit_Brewmaster_PrimalFire::s_pSchemaBinding;
}


// CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 427, @0x0000000002b8d880, libserver.so)
// globals: CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass::DestructInstance  (line 427, @0x0000000002b8d890, libserver.so)  // inlines: Destruct<CDOTA_Unit_Brewmaster_PrimalFire>
void __fastcall CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass::FreeInstance  (line 427, @0x0000000002b8d8b0, libserver.so)
void __fastcall CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass::CanAllocate  (line 427, @0x0000000002b8d8d0, libserver.so)
bool __fastcall CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 427, @0x0000000002b8d8e0, libserver.so)
// globals: CDOTA_Unit_Brewmaster_PrimalFire::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Brewmaster_PrimalFire::s_pSchemaBinding;
}


// CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass::AllocateInstance  (line 427, @0x0000000002b96d60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4512);
  memset(v1, 0, 0x11A0u);
  return v1;
}


// CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass::ConstructInstance  (line 427, @0x0000000002b98ef0, libserver.so)  // inlines: CDOTA_Unit_Brewmaster_PrimalFire, Construct<CDOTA_Unit_Brewmaster_PrimalFire>
// calls: CDOTA_BaseNPC_Creep::CDOTA_BaseNPC_Creep
CEntityInstance *__fastcall CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Creep::CDOTA_BaseNPC_Creep(p);
    *p = &off_44A0970;
    *(p + 236) = &off_44A18D0;
    *(p + 257) = &off_44A1C00;
  }
  return p;
}


// CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 427, @0x0000000002babf30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 427, @0x0000000002bac520, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Brewmaster_PrimalFire::GetEntityClassInternal  (line 427, @0x0000000002bcdc40, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CDOTA_BaseNPC_Creep::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "npc_dota_brewmaster_fire", "CDOTA_Unit_Brewmaster_PrimalFire"
// globals: `guard variable for'CDOTA_Unit_Brewmaster_PrimalFire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalFireClass, CDOTA_Unit_Brewmaster_PrimalFire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalFireClass, __dso_handle, CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Brewmaster_PrimalFire::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalFireClassInfo, CDOTA_Unit_Brewmaster_PrimalFire::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalFireClassInfo
CEntityClass *__cdecl CDOTA_Unit_Brewmaster_PrimalFire::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Brewmaster_PrimalFire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalFireClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Brewmaster_PrimalFire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalFireClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Brewmaster_PrimalFire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalFireClass);
    CDOTA_Unit_Brewmaster_PrimalFire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalFireClass._vptr_CEntityClass = off_44A08F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Brewmaster_PrimalFire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalFireClass);
    __cxa_atexit(
      CDOTA_Unit_Brewmaster_PrimalFire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Brewmaster_PrimalFire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalFireClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Brewmaster_PrimalFireClass != 0 )
    return &CDOTA_Unit_Brewmaster_PrimalFire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalFireClass;
  if ( `guard variable for'CDOTA_Unit_Brewmaster_PrimalFire::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalFireClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Brewmaster_PrimalFire::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalFireClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Creep::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Brewmaster_PrimalFire::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalFireClassInfo,
      "CDOTA_Unit_Brewmaster_PrimalFire",
      "npc_dota_brewmaster_fire",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Brewmaster_PrimalFire::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalFireClassInfo);
  }
  CDOTA_Unit_Brewmaster_PrimalFire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalFireClass.m_pClassInfo = &CDOTA_Unit_Brewmaster_PrimalFire::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalFireClassInfo;
  CDOTA_Unit_Brewmaster_PrimalFire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalFireClass.m_pBaseClassInfo = CDOTA_Unit_Brewmaster_PrimalFire::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalFireClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Brewmaster_PrimalFireClass = &CDOTA_Unit_Brewmaster_PrimalFire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalFireClass;
  CDOTA_Unit_Brewmaster_PrimalFire::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalFireClassInfo.m_pClass = &CDOTA_Unit_Brewmaster_PrimalFire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalFireClass;
  CDOTA_Unit_Brewmaster_PrimalFire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalFireClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_Unit_Brewmaster_PrimalFireClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Brewmaster_PrimalFire::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Brewmaster_PrimalFireClass;
}


// CDOTA_Unit_Brewmaster_PrimalFire::WantsToSaveWithLifetime  (line 434, @0x0000000002b8d8f0, libserver.so)
bool __fastcall CDOTA_Unit_Brewmaster_PrimalFire::WantsToSaveWithLifetime(CDOTA_Unit_Brewmaster_PrimalFire *const this)
{
  return 1;
}


// CDOTA_Unit_Brewmaster_PrimalFire::YouForgotToImplementOrDeclareServerClass  (line 443, @0x0000000002b34110, libserver.so)
int __fastcall CDOTA_Unit_Brewmaster_PrimalFire::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Brewmaster_PrimalFire *const this)
{
  return 0;
}


// CDOTA_Unit_Brewmaster_PrimalFire::GetServerClass  (line 443, @0x0000000002b4bf60, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Brewmaster_PrimalFire::GetServerClass(CDOTA_Unit_Brewmaster_PrimalFire *const this)
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


// CDOTA_Unit_Brewmaster_PrimalFire::OnAlive  (line 451, @0x0000000002b34120, libserver.so)
void __fastcall CDOTA_Unit_Brewmaster_PrimalFire::OnAlive(CDOTA_Unit_Brewmaster_PrimalFire *const this)
{
  ;
}


// CDOTA_Unit_Brewmaster_PrimalFire::OnDying  (line 460, @0x0000000002b453c0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevel, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::AddEffects, CDOTA_PlayerResource::GetPlayerSelectedHeroHandle, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::HasScepter, CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles, AngleVectors, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleControlOrientation, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "brewmaster_primal_split", "particles/units/heroes/hero_brewmaster/brewmaster_fire_death.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Unit_Brewmaster_PrimalFire::OnDying(CDOTA_Unit_Brewmaster_PrimalFire *const this)
{
  int v2; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTABaseAbility *AbilityByName; // rax
  int m_Value; // r13d
  bool HasScepter; // al
  int v9; // r13d
  const Vector *AbsOrigin; // rax
  const QAngle *AbsAngles; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  float vecPos; // [rsp+Ch] [rbp-74h]
  double vecPos_4; // [rsp+10h] [rbp-70h]
  Vector vecFwd; // [rsp+20h] [rbp-60h] BYREF
  Vector vecRight; // [rsp+30h] [rbp-50h] BYREF
  Vector vecUp; // [rsp+40h] [rbp-40h] BYREF
  double v23[6]; // [rsp+50h] [rbp-30h] BYREF

  CBaseEntity::AddEffects(this, 32);
  v2 = (*(this->_vptr_IHandleEntity + 414))(this);
  CDOTA_PlayerResource::GetPlayerSelectedHeroHandle(v23, g_pDOTAPlayerResource, v2);
  if ( (LODWORD(v23[0]) + 2) > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v23[0]) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[LOWORD(v23[0]) & 0x1FF];
      if ( v4 != 0 && LODWORD(v23[0]) == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          AbilityByName = CDOTA_BaseNPC::FindAbilityByName(m_pInstance, "brewmaster_primal_split", 0);
          if ( AbilityByName != 0 )
          {
            m_Value = AbilityByName->m_iLevel.m_Value;
            HasScepter = CDOTA_BaseNPC::HasScepter(m_pInstance);
            if ( !this->m_bIsIllusion.m_Value )
            {
              v9 = HasScepter + m_Value;
              AbsOrigin = CBaseEntity::GetAbsOrigin(this);
              vecPos_4 = *&AbsOrigin->x;
              vecPos = AbsOrigin->z + 96.0;
              AbsAngles = CBaseEntity::GetAbsAngles(this);
              AngleVectors(AbsAngles, &vecFwd, &vecRight, &vecUp);
              ParticleManager = GetParticleManager();
              Particle = CDOTA_ParticleManager::CreateParticle(
                           ParticleManager,
                           "particles/units/heroes/hero_brewmaster/brewmaster_fire_death.vpcf",
                           2,
                           0,
                           0,
                           0);
              v14 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControl(v14, Particle, 0, vecPos_4, vecPos);
              v15 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControlOrientation(
                v15,
                Particle,
                0,
                *&vecFwd.x,
                vecFwd.z,
                *&vecRight.x,
                vecRight.z,
                *&vecUp.x,
                vecUp.z);
              *(v23 + 4) = 0.0;
              *v23 = v9;
              v16 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControl(v16, Particle, 1, v23[0], *&v23[1]);
              v17 = GetParticleManager();
              CDOTA_ParticleManager::ReleaseParticleIndex(v17, Particle);
            }
          }
        }
      }
    }
  }
}


// CDOTA_Ability_Brewmaster_ThunderClap::~CDOTA_Ability_Brewmaster_ThunderClap  (line 502, @0x0000000002ba04a0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Brewmaster_ThunderClap::~CDOTA_Ability_Brewmaster_ThunderClap(
        CDOTA_Ability_Brewmaster_ThunderClap *const this)
{
  this->_vptr_IHandleEntity = &off_44A1CD0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Brewmaster_ThunderClap::~CDOTA_Ability_Brewmaster_ThunderClap  (line 502, @0x0000000002ba04c0, libserver.so)  // inlines: ~CDOTA_Ability_Brewmaster_ThunderClap
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Brewmaster_ThunderClap::~CDOTA_Ability_Brewmaster_ThunderClap(
        CDOTA_Ability_Brewmaster_ThunderClap *const this)
{
  this->_vptr_IHandleEntity = &off_44A1CD0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Brewmaster_ThunderClap::Schema_DynamicBinding  (line 504, @0x0000000002b8d900, libserver.so)
// globals: CDOTA_Ability_Brewmaster_ThunderClap::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Brewmaster_ThunderClap::Schema_DynamicBinding(
        const CDOTA_Ability_Brewmaster_ThunderClap *const this)
{
  return CDOTA_Ability_Brewmaster_ThunderClap::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_ThunderClap::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 504, @0x0000000002b8d910, libserver.so)
// globals: CDOTA_Ability_Brewmaster_ThunderClap::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Brewmaster_ThunderClap::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Brewmaster_ThunderClap::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Brewmaster_ThunderClap::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_ThunderClap::CEntityInstanceEntityClass::DestructInstance  (line 504, @0x0000000002b8d920, libserver.so)  // inlines: Destruct<CDOTA_Ability_Brewmaster_ThunderClap>
void __fastcall CDOTA_Ability_Brewmaster_ThunderClap::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Brewmaster_ThunderClap::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Brewmaster_ThunderClap::CEntityInstanceEntityClass::FreeInstance  (line 504, @0x0000000002b8d940, libserver.so)
void __fastcall CDOTA_Ability_Brewmaster_ThunderClap::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Brewmaster_ThunderClap::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Brewmaster_ThunderClap::CEntityInstanceEntityClass::CanAllocate  (line 504, @0x0000000002b8d960, libserver.so)
bool __fastcall CDOTA_Ability_Brewmaster_ThunderClap::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Brewmaster_ThunderClap::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Brewmaster_ThunderClap::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 504, @0x0000000002b8d970, libserver.so)
// globals: CDOTA_Ability_Brewmaster_ThunderClap::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Brewmaster_ThunderClap::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Brewmaster_ThunderClap::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Brewmaster_ThunderClap::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_ThunderClap::CEntityInstanceEntityClass::AllocateInstance  (line 504, @0x0000000002b96da0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Brewmaster_ThunderClap::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Brewmaster_ThunderClap::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Brewmaster_ThunderClap::CEntityInstanceEntityClass::ConstructInstance  (line 504, @0x0000000002b9cb40, libserver.so)  // inlines: CDOTA_Ability_Brewmaster_ThunderClap, Construct<CDOTA_Ability_Brewmaster_ThunderClap>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Brewmaster_ThunderClap::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Brewmaster_ThunderClap::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44A1CD0;
  }
  return p;
}


// CDOTA_Ability_Brewmaster_ThunderClap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 504, @0x0000000002ba9bc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Brewmaster_ThunderClap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Brewmaster_ThunderClap::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Brewmaster_ThunderClap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 504, @0x0000000002ba9be0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Brewmaster_ThunderClap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Brewmaster_ThunderClap::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Brewmaster_ThunderClap::GetEntityClassInternal  (line 504, @0x0000000002bc53c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "brewmaster_thunder_clap", "CDOTA_Ability_Brewmaster_ThunderClap"
// globals: `guard variable for'CDOTA_Ability_Brewmaster_ThunderClap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_ThunderClapClass, CDOTA_Ability_Brewmaster_ThunderClap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_ThunderClapClass, __dso_handle, CDOTA_Ability_Brewmaster_ThunderClap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Brewmaster_ThunderClap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_ThunderClapClassInfo, CDOTA_Ability_Brewmaster_ThunderClap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_ThunderClapClassInfo
CEntityClass *__cdecl CDOTA_Ability_Brewmaster_ThunderClap::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Brewmaster_ThunderClap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_ThunderClapClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Brewmaster_ThunderClap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_ThunderClapClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Brewmaster_ThunderClap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_ThunderClapClass);
    CDOTA_Ability_Brewmaster_ThunderClap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_ThunderClapClass._vptr_CEntityClass = off_44A1C50;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Brewmaster_ThunderClap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_ThunderClapClass);
    __cxa_atexit(
      CDOTA_Ability_Brewmaster_ThunderClap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Brewmaster_ThunderClap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_ThunderClapClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Brewmaster_ThunderClapClass != 0 )
    return &CDOTA_Ability_Brewmaster_ThunderClap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_ThunderClapClass;
  if ( `guard variable for'CDOTA_Ability_Brewmaster_ThunderClap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_ThunderClapClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Brewmaster_ThunderClap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_ThunderClapClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Brewmaster_ThunderClap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_ThunderClapClassInfo,
      "CDOTA_Ability_Brewmaster_ThunderClap",
      "brewmaster_thunder_clap",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Brewmaster_ThunderClap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_ThunderClapClassInfo);
  }
  CDOTA_Ability_Brewmaster_ThunderClap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_ThunderClapClass.m_pClassInfo = &CDOTA_Ability_Brewmaster_ThunderClap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_ThunderClapClassInfo;
  CDOTA_Ability_Brewmaster_ThunderClap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_ThunderClapClass.m_pBaseClassInfo = CDOTA_Ability_Brewmaster_ThunderClap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_ThunderClapClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Brewmaster_ThunderClapClass = &CDOTA_Ability_Brewmaster_ThunderClap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_ThunderClapClass;
  CDOTA_Ability_Brewmaster_ThunderClap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_ThunderClapClassInfo.m_pClass = &CDOTA_Ability_Brewmaster_ThunderClap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_ThunderClapClass;
  CDOTA_Ability_Brewmaster_ThunderClap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_ThunderClapClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Brewmaster_ThunderClapClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Brewmaster_ThunderClap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_ThunderClapClass;
}


// CDOTA_Ability_Brewmaster_ThunderClap::SpeakTrigger  (line 509, @0x0000000002b8d980, libserver.so)
DOTAAbilitySpeakTrigger_t __fastcall CDOTA_Ability_Brewmaster_ThunderClap::SpeakTrigger(
        CDOTA_Ability_Brewmaster_ThunderClap *const this)
{
  return DOTAAbilitySpeakTrigger_t::DOTA_ABILITY_SPEAK_START_ACTION_PHASE;
}


// CDOTA_Ability_Brewmaster_ThunderClap::GetConceptRecipientType  (line 510, @0x0000000002b8d990, libserver.so)
int __fastcall CDOTA_Ability_Brewmaster_ThunderClap::GetConceptRecipientType(
        CDOTA_Ability_Brewmaster_ThunderClap *const this)
{
  return 4;
}


// CDOTA_Ability_Brewmaster_ThunderClap::IsHiddenWhenStolen  (line 511, @0x0000000002b8d9a0, libserver.so)
bool __fastcall CDOTA_Ability_Brewmaster_ThunderClap::IsHiddenWhenStolen(
        CDOTA_Ability_Brewmaster_ThunderClap *const this)
{
  return 1;
}


// CDOTA_Ability_Brewmaster_ThunderClap::YouForgotToImplementOrDeclareServerClass  (line 523, @0x0000000002b34130, libserver.so)
int __fastcall CDOTA_Ability_Brewmaster_ThunderClap::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Brewmaster_ThunderClap *const this)
{
  return 0;
}


// CDOTA_Ability_Brewmaster_ThunderClap::GetServerClass  (line 523, @0x0000000002b4c3e0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Brewmaster_ThunderClap::GetServerClass(
        CDOTA_Ability_Brewmaster_ThunderClap *const this)
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


// CDOTA_Ability_Brewmaster_ThunderClap::OnSpellStart  (line 532, @0x0000000002b7bf40, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, ApplyDamage, CDOTA_BaseNPC::UnitEmitSound, CDOTABaseAbility::CreateAbilityParticleEffect, GetParticleManager (18 total)
// strings: "duration_creeps", "modifier_brewmaster_thunder_clap", "Hero_Brewmaster.ThunderClap.Target", "particles/units/heroes/hero_brewmaster/brewmaster_thunder_clap.vpcf", "Hero_Brewmaster.ThunderClap"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Brewmaster_ThunderClap::OnSpellStart(CDOTA_Ability_Brewmaster_ThunderClap *const this)
{
  int LevelSpecialValue; // ebx
  int v3; // r15d
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v7; // rax
  float v8; // xmm1_4
  __int64 v9; // rbx
  CHandle<CBaseEntity> *v10; // rdx
  uint32 m_Index; // eax
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  int AbilityParticleEffect; // ebx
  CDOTA_BaseNPC *v19; // rax
  const Vector *v20; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  float flRadius; // [rsp+20h] [rbp-90h]
  double v26; // [rsp+30h] [rbp-80h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v29; // [rsp+78h] [rbp-38h]

  v29 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration_creeps", -1, 0);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
  hEntities.m_Size = 0;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  flRadius = LevelSpecialValue;
  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, Caster, flRadius, &hEntities, 2, 3, 0, 0, 0);
  KeyValues::KeyValues(&kv, "modifier_brewmaster_thunder_clap");
  if ( hEntities.m_Size > 0 )
  {
    v9 = 0;
    do
    {
      while ( 1 )
      {
        v10 = &hEntities.m_Memory.m_pMemory[v9];
        m_Index = v10->m_Index;
        if ( v10->m_Index + 2 > 1 )
        {
          v12 = v10->m_Index;
          v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Index) >> 9) & 0x3F];
          if ( v13 != 0 )
          {
            v14 = &v13[v12 & 0x1FF];
            if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
            {
              m_pInstance = v14->m_pInstance;
              if ( v14->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                break;
            }
          }
        }
        if ( hEntities.m_Size <= ++v9 )
          goto LABEL_11;
      }
      KeyValues::SetFloat(&kv, "duration", v8);
      v16 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v16, this, "modifier_brewmaster_thunder_clap", &kv, 0);
      v17 = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(v17, m_pInstance, this, v3, 2, 0);
      CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Brewmaster.ThunderClap.Target", 0.0, 0, 0);
      ++v9;
    }
    while ( hEntities.m_Size > v9 );
  }
LABEL_11:
  AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                            this,
                            "particles/units/heroes/hero_brewmaster/brewmaster_thunder_clap.vpcf",
                            2,
                            0,
                            0);
  v19 = CDOTABaseAbility::GetCaster(this);
  v20 = CBaseEntity::GetAbsOrigin(v19);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, AbilityParticleEffect, 0, *&v20->x, v20->z);
  *&v26 = flRadius;
  *(&v26 + 1) = flRadius;
  v22 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v22, AbilityParticleEffect, 1, v26, flRadius);
  v23 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v23, AbilityParticleEffect);
  v24 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v24, "Hero_Brewmaster.ThunderClap", 0.0, 0, 0);
  KeyValues::~KeyValues(&kv);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
}


// CDOTA_Ability_Brewmaster_ThunderClap::OnStolen  (line 576, @0x0000000002b39f60, libserver.so)
// calls: CDOTABaseAbility::SetActivated
void __fastcall CDOTA_Ability_Brewmaster_ThunderClap::OnStolen(
        CDOTA_Ability_Brewmaster_ThunderClap *const this,
        CDOTABaseAbility *pSourceAbility)
{
  CDOTABaseAbility::SetActivated(this, !this->m_bHidden.m_Value);
}


// CDOTA_Ability_Brewmaster_ThunderClap::GetAbilityDamageToTargetOverInterval  (line 586, @0x0000000002b3be40, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Brewmaster_ThunderClap::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Brewmaster_ThunderClap *const this,
        CDOTA_BaseNPC *pTarget,
        float fDuration,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int v6; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    v6 = (*(this->_vptr_IHandleEntity + 247))(this, fDuration);
    return (v6 * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Ability_Brewmaster_ThunderClap::GetSlowDuration  (line 598, @0x0000000002b75310, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Brewmaster_ThunderClap::GetSlowDuration(
        CDOTA_Ability_Brewmaster_ThunderClap *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 1);
}


// CDOTA_Modifier_Brewmaster_ThunderClap::~CDOTA_Modifier_Brewmaster_ThunderClap  (line 606, @0x0000000002b9bb30, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Brewmaster_ThunderClap::~CDOTA_Modifier_Brewmaster_ThunderClap(
        CDOTA_Modifier_Brewmaster_ThunderClap *const this)
{
  this->_vptr_CDOTA_Buff = &off_44A2790;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Brewmaster_ThunderClap::~CDOTA_Modifier_Brewmaster_ThunderClap  (line 606, @0x0000000002b9bb50, libserver.so)  // inlines: ~CDOTA_Modifier_Brewmaster_ThunderClap
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Brewmaster_ThunderClap::~CDOTA_Modifier_Brewmaster_ThunderClap(
        CDOTA_Modifier_Brewmaster_ThunderClap *const this)
{
  this->_vptr_CDOTA_Buff = &off_44A2790;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Brewmaster_ThunderClap::IsDebuff  (line 611, @0x0000000002b8d9b0, libserver.so)
bool __fastcall CDOTA_Modifier_Brewmaster_ThunderClap::IsDebuff(CDOTA_Modifier_Brewmaster_ThunderClap *const this)
{
  return 1;
}


// CDOTA_Modifier_Brewmaster_ThunderClap::GetEffectName  (line 619, @0x0000000002b8d9c0, libserver.so)
// strings: "particles/units/heroes/hero_brewmaster/brewmaster_thunder_clap_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Brewmaster_ThunderClap::GetEffectName(
        CDOTA_Modifier_Brewmaster_ThunderClap *const this)
{
  return "particles/units/heroes/hero_brewmaster/brewmaster_thunder_clap_debuff.vpcf";
}


// CDOTA_Modifier_Brewmaster_ThunderClap::GetStatusEffectName  (line 620, @0x0000000002b8d9d0, libserver.so)
// strings: "particles/status_fx/status_effect_brewmaster_thunder_clap.vpcf"
const char *__fastcall CDOTA_Modifier_Brewmaster_ThunderClap::GetStatusEffectName(
        CDOTA_Modifier_Brewmaster_ThunderClap *const this)
{
  return "particles/status_fx/status_effect_brewmaster_thunder_clap.vpcf";
}


// CDOTA_Modifier_Brewmaster_ThunderClap::StatusEffectPriority  (line 621, @0x0000000002b8d9e0, libserver.so)
int __fastcall CDOTA_Modifier_Brewmaster_ThunderClap::StatusEffectPriority(
        CDOTA_Modifier_Brewmaster_ThunderClap *const this)
{
  return 49;
}


// CDOTA_Modifier_Brewmaster_ThunderClap::OnCreated  (line 633, @0x0000000002b6d500, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "attack_speed_slow"
void __fastcall CDOTA_Modifier_Brewmaster_ThunderClap::OnCreated(
        CDOTA_Modifier_Brewmaster_ThunderClap *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->movement_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movement_slow", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->attack_speed_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "attack_speed_slow", -1, 0);
      return;
    }
  }
  else
  {
    this->movement_slow = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->attack_speed_slow = 0;
}


// CDOTA_Modifier_Brewmaster_ThunderClap::DeclareFunctions  (line 641, @0x0000000002b34140, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Brewmaster_ThunderClap::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Brewmaster_ThunderClap::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Brewmaster_ThunderClap::DeclareFunctions(
        CDOTA_Modifier_Brewmaster_ThunderClap *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Brewmaster_ThunderClap::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Brewmaster_ThunderClap::GetModifierAttackSpeedBonus_Constant;
}


// CDOTA_Modifier_Brewmaster_ThunderClap::GetModifierMoveSpeedBonus_Percentage  (line 649, @0x0000000002b34180, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Brewmaster_ThunderClap::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Brewmaster_ThunderClap *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->movement_slow;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Brewmaster_ThunderClap::GetModifierAttackSpeedBonus_Constant  (line 656, @0x0000000002b341a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Brewmaster_ThunderClap::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Brewmaster_ThunderClap *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->attack_speed_slow;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Brewmaster_DrunkenHaze::~CDOTA_Ability_Brewmaster_DrunkenHaze  (line 667, @0x0000000002ba04f0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Brewmaster_DrunkenHaze::~CDOTA_Ability_Brewmaster_DrunkenHaze(
        CDOTA_Ability_Brewmaster_DrunkenHaze *const this)
{
  this->_vptr_IHandleEntity = &off_44A2AF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Brewmaster_DrunkenHaze::~CDOTA_Ability_Brewmaster_DrunkenHaze  (line 667, @0x0000000002ba0510, libserver.so)  // inlines: ~CDOTA_Ability_Brewmaster_DrunkenHaze
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Brewmaster_DrunkenHaze::~CDOTA_Ability_Brewmaster_DrunkenHaze(
        CDOTA_Ability_Brewmaster_DrunkenHaze *const this)
{
  this->_vptr_IHandleEntity = &off_44A2AF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Brewmaster_DrunkenHaze::Schema_DynamicBinding  (line 669, @0x0000000002b8d9f0, libserver.so)
// globals: CDOTA_Ability_Brewmaster_DrunkenHaze::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Brewmaster_DrunkenHaze::Schema_DynamicBinding(
        const CDOTA_Ability_Brewmaster_DrunkenHaze *const this)
{
  return CDOTA_Ability_Brewmaster_DrunkenHaze::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_DrunkenHaze::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 669, @0x0000000002b8da00, libserver.so)
// globals: CDOTA_Ability_Brewmaster_DrunkenHaze::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Brewmaster_DrunkenHaze::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Brewmaster_DrunkenHaze::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Brewmaster_DrunkenHaze::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_DrunkenHaze::CEntityInstanceEntityClass::DestructInstance  (line 669, @0x0000000002b8da10, libserver.so)  // inlines: Destruct<CDOTA_Ability_Brewmaster_DrunkenHaze>
void __fastcall CDOTA_Ability_Brewmaster_DrunkenHaze::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Brewmaster_DrunkenHaze::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Brewmaster_DrunkenHaze::CEntityInstanceEntityClass::FreeInstance  (line 669, @0x0000000002b8da30, libserver.so)
void __fastcall CDOTA_Ability_Brewmaster_DrunkenHaze::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Brewmaster_DrunkenHaze::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Brewmaster_DrunkenHaze::CEntityInstanceEntityClass::CanAllocate  (line 669, @0x0000000002b8da50, libserver.so)
bool __fastcall CDOTA_Ability_Brewmaster_DrunkenHaze::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Brewmaster_DrunkenHaze::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Brewmaster_DrunkenHaze::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 669, @0x0000000002b8da60, libserver.so)
// globals: CDOTA_Ability_Brewmaster_DrunkenHaze::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Brewmaster_DrunkenHaze::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Brewmaster_DrunkenHaze::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Brewmaster_DrunkenHaze::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_DrunkenHaze::CEntityInstanceEntityClass::AllocateInstance  (line 669, @0x0000000002b96de0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Brewmaster_DrunkenHaze::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Brewmaster_DrunkenHaze::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Brewmaster_DrunkenHaze::CEntityInstanceEntityClass::ConstructInstance  (line 669, @0x0000000002b9cb70, libserver.so)  // inlines: CDOTA_Ability_Brewmaster_DrunkenHaze, Construct<CDOTA_Ability_Brewmaster_DrunkenHaze>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Brewmaster_DrunkenHaze::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Brewmaster_DrunkenHaze::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44A2AF0;
  }
  return p;
}


// CDOTA_Ability_Brewmaster_DrunkenHaze::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 669, @0x0000000002ba9c10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Brewmaster_DrunkenHaze::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Brewmaster_DrunkenHaze::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Brewmaster_DrunkenHaze::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 669, @0x0000000002ba9c30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Brewmaster_DrunkenHaze::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Brewmaster_DrunkenHaze::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Brewmaster_DrunkenHaze::GetEntityClassInternal  (line 669, @0x0000000002bc5510, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "brewmaster_drunken_haze", "CDOTA_Ability_Brewmaster_DrunkenHaze"
// globals: `guard variable for'CDOTA_Ability_Brewmaster_DrunkenHaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenHazeClass, CDOTA_Ability_Brewmaster_DrunkenHaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenHazeClass, __dso_handle, CDOTA_Ability_Brewmaster_DrunkenHaze::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Brewmaster_DrunkenHaze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenHazeClassInfo, CDOTA_Ability_Brewmaster_DrunkenHaze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenHazeClassInfo
CEntityClass *__cdecl CDOTA_Ability_Brewmaster_DrunkenHaze::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Brewmaster_DrunkenHaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenHazeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Brewmaster_DrunkenHaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenHazeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Brewmaster_DrunkenHaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenHazeClass);
    CDOTA_Ability_Brewmaster_DrunkenHaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenHazeClass._vptr_CEntityClass = off_44A2A70;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Brewmaster_DrunkenHaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenHazeClass);
    __cxa_atexit(
      CDOTA_Ability_Brewmaster_DrunkenHaze::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Brewmaster_DrunkenHaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenHazeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Brewmaster_DrunkenHazeClass != 0 )
    return &CDOTA_Ability_Brewmaster_DrunkenHaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenHazeClass;
  if ( `guard variable for'CDOTA_Ability_Brewmaster_DrunkenHaze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenHazeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Brewmaster_DrunkenHaze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenHazeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Brewmaster_DrunkenHaze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenHazeClassInfo,
      "CDOTA_Ability_Brewmaster_DrunkenHaze",
      "brewmaster_drunken_haze",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Brewmaster_DrunkenHaze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenHazeClassInfo);
  }
  CDOTA_Ability_Brewmaster_DrunkenHaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenHazeClass.m_pClassInfo = &CDOTA_Ability_Brewmaster_DrunkenHaze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenHazeClassInfo;
  CDOTA_Ability_Brewmaster_DrunkenHaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenHazeClass.m_pBaseClassInfo = CDOTA_Ability_Brewmaster_DrunkenHaze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenHazeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Brewmaster_DrunkenHazeClass = &CDOTA_Ability_Brewmaster_DrunkenHaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenHazeClass;
  CDOTA_Ability_Brewmaster_DrunkenHaze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenHazeClassInfo.m_pClass = &CDOTA_Ability_Brewmaster_DrunkenHaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenHazeClass;
  CDOTA_Ability_Brewmaster_DrunkenHaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenHazeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Brewmaster_DrunkenHazeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Brewmaster_DrunkenHaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenHazeClass;
}


// CDOTA_Ability_Brewmaster_DrunkenHaze::GetConceptRecipientType  (line 673, @0x0000000002b8da70, libserver.so)
int __fastcall CDOTA_Ability_Brewmaster_DrunkenHaze::GetConceptRecipientType(
        CDOTA_Ability_Brewmaster_DrunkenHaze *const this)
{
  return 4;
}


// CDOTA_Ability_Brewmaster_DrunkenHaze::IsHiddenWhenStolen  (line 674, @0x0000000002b8da80, libserver.so)
bool __fastcall CDOTA_Ability_Brewmaster_DrunkenHaze::IsHiddenWhenStolen(
        CDOTA_Ability_Brewmaster_DrunkenHaze *const this)
{
  return 1;
}


// CDOTA_Ability_Brewmaster_DrunkenHaze::YouForgotToImplementOrDeclareServerClass  (line 693, @0x0000000002b341c0, libserver.so)
int __fastcall CDOTA_Ability_Brewmaster_DrunkenHaze::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Brewmaster_DrunkenHaze *const this)
{
  return 0;
}


// CDOTA_Ability_Brewmaster_DrunkenHaze::GetServerClass  (line 693, @0x0000000002b4bd60, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Brewmaster_DrunkenHaze::GetServerClass(
        CDOTA_Ability_Brewmaster_DrunkenHaze *const this)
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


// CDOTA_Ability_Brewmaster_DrunkenHaze::OnSpellStart  (line 702, @0x0000000002b42b10, libserver.so)  // inlines: CEntityHandle, CHandle, Color, GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=, sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorTarget, CDOTA_ProjectileManager::CreateTrackingProjectile, CDOTA_BaseNPC::UnitEmitSound, __stack_chk_fail
// strings: "particles/units/heroes/hero_brewmaster/brewmaster_drunken_haze.vpcf", "Hero_Brewmaster.DrunkenHaze.Cast"
void __fastcall CDOTA_Ability_Brewmaster_DrunkenHaze::OnSpellStart(CDOTA_Ability_Brewmaster_DrunkenHaze *const this)
{
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v6; // cx
  CBaseEntity *CursorTarget; // rax
  CEntityIdentity *v8; // rdx
  __int16 v9; // cx
  CDOTA_BaseNPC *v10; // rax
  sTrackingProjectileCreateInfo info; // [rsp+0h] [rbp-80h] BYREF
  unsigned __int64 v12; // [rsp+68h] [rbp-18h]

  info.hSource.m_Index = -1;
  v12 = __readfsqword(0x28u);
  info.hTarget.m_Index = -1;
  info.colorGemColor = 0;
  info.pAttackRecord = 0;
  info.iSourceAttachment = 1;
  info.bProvidesVision = 0;
  info.iVisionTeamNumber = -1;
  info.vSourceLoc.x = vec3_origin.x;
  y = vec3_origin.y;
  info.iVisionRadius = 0;
  info.vSourceLoc.y = y;
  z = vec3_origin.z;
  info.bDrawsOnMinimap = 0;
  info.vSourceLoc.z = z;
  info.bDodgeable = 1;
  info.bIsAttack = 0;
  info.bVisibleToEnemies = 1;
  info.pKVExtraData = 0;
  info.bReplaceExisting = 0;
  info.flExpireTime = 0.0;
  info.flMaxImpactTime = 0.0;
  info.bServerOnly = 0;
  info.pszEffectName = "particles/units/heroes/hero_brewmaster/brewmaster_drunken_haze.vpcf";
  info.pAbility = this;
  info.iMoveSpeed = 1600;
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( Caster != 0 && (m_pEntity = Caster->m_pEntity) != 0 )
  {
    v6 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    if ( CursorTarget == 0 )
      goto LABEL_13;
  }
  else
  {
    info.hSource.m_Index = -1;
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    if ( CursorTarget == 0 )
      goto LABEL_13;
  }
  v8 = CursorTarget->m_pEntity;
  if ( v8 == 0 )
  {
LABEL_13:
    info.hTarget.m_Index = -1;
    goto LABEL_10;
  }
  if ( v8->m_EHandle.m_Index == -1 )
    v9 = 0x7FFF;
  else
    v9 = v8->m_EHandle.m_Index & 0x7FFF;
  info.hTarget.m_Index = (((v8->m_EHandle.m_Index >> 15) - (v8->m_flags & 1)) << 15) | v9 & 0x7FFF;
LABEL_10:
  info.iSourceAttachment = 2;
  CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
  v10 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v10, "Hero_Brewmaster.DrunkenHaze.Cast", 0.0, 0, 0);
}


// CDOTA_Ability_Brewmaster_DrunkenHaze::OnProjectileHit  (line 729, @0x0000000002b72290, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_brewmaster_drunken_haze", "Hero_Brewmaster.DrunkenHaze.Target"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Brewmaster_DrunkenHaze::OnProjectileHit(
        CDOTA_Ability_Brewmaster_DrunkenHaze *const this,
        unsigned __int16 *hTarget,
        const Vector *const vLocation)
{
  int v4; // eax
  unsigned __int64 v5; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  unsigned __int64 m_Value; // rax
  float v11; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  v4 = *hTarget;
  if ( (*hTarget + 2) > 1 )
  {
    v5 = *hTarget;
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[v5 & 0x1FF];
      if ( v7 != 0 && v4 == v7->m_EHandle.m_Index )
      {
        m_pInstance = v7->m_pInstance;
        if ( v7->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && !m_pInstance->m_bIsWaitingToSpawn.m_Value )
        {
          m_Value = m_pInstance->m_nUnitState64.m_Value;
          if ( (m_Value & 0x100) == 0
            && (m_Value & 0x200) == 0
            && !CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, this, 1) )
          {
            CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
            KeyValues::KeyValues(&kv, "modifier_brewmaster_drunken_haze");
            KeyValues::SetFloat(&kv, "duration", v11);
            Caster = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, this, "modifier_brewmaster_drunken_haze", &kv, 0);
            CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Brewmaster.DrunkenHaze.Target", 0.0, 0, 0);
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
  }
  return 1;
}


// CDOTA_Ability_Brewmaster_DrunkenHaze::OnStolen  (line 751, @0x0000000002b39f80, libserver.so)
// calls: CDOTABaseAbility::SetActivated
void __fastcall CDOTA_Ability_Brewmaster_DrunkenHaze::OnStolen(
        CDOTA_Ability_Brewmaster_DrunkenHaze *const this,
        CDOTABaseAbility *pSourceAbility)
{
  CDOTABaseAbility::SetActivated(this, !this->m_bHidden.m_Value);
}


// CDOTA_Ability_Brewmaster_DrunkenHaze::GetSlowDuration  (line 761, @0x0000000002b75330, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Brewmaster_DrunkenHaze::GetSlowDuration(
        CDOTA_Ability_Brewmaster_DrunkenHaze *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 1);
}


// CDOTA_Modifier_Brewmaster_DrunkenHaze::~CDOTA_Modifier_Brewmaster_DrunkenHaze  (line 771, @0x0000000002b9bae0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Brewmaster_DrunkenHaze::~CDOTA_Modifier_Brewmaster_DrunkenHaze(
        CDOTA_Modifier_Brewmaster_DrunkenHaze *const this)
{
  this->_vptr_CDOTA_Buff = &off_44A35B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Brewmaster_DrunkenHaze::~CDOTA_Modifier_Brewmaster_DrunkenHaze  (line 771, @0x0000000002b9bb00, libserver.so)  // inlines: ~CDOTA_Modifier_Brewmaster_DrunkenHaze
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Brewmaster_DrunkenHaze::~CDOTA_Modifier_Brewmaster_DrunkenHaze(
        CDOTA_Modifier_Brewmaster_DrunkenHaze *const this)
{
  this->_vptr_CDOTA_Buff = &off_44A35B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Brewmaster_DrunkenHaze::IsDebuff  (line 776, @0x0000000002b8da90, libserver.so)
bool __fastcall CDOTA_Modifier_Brewmaster_DrunkenHaze::IsDebuff(CDOTA_Modifier_Brewmaster_DrunkenHaze *const this)
{
  return 1;
}


// CDOTA_Modifier_Brewmaster_DrunkenHaze::GetEffectName  (line 784, @0x0000000002b8daa0, libserver.so)
// strings: "particles/units/heroes/hero_brewmaster/brewmaster_drunken_haze_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Brewmaster_DrunkenHaze::GetEffectName(
        CDOTA_Modifier_Brewmaster_DrunkenHaze *const this)
{
  return "particles/units/heroes/hero_brewmaster/brewmaster_drunken_haze_debuff.vpcf";
}


// CDOTA_Modifier_Brewmaster_DrunkenHaze::GetStatusEffectName  (line 785, @0x0000000002b8dab0, libserver.so)
// strings: "particles/status_fx/status_effect_brewmaster_drunken_haze.vpcf"
const char *__fastcall CDOTA_Modifier_Brewmaster_DrunkenHaze::GetStatusEffectName(
        CDOTA_Modifier_Brewmaster_DrunkenHaze *const this)
{
  return "particles/status_fx/status_effect_brewmaster_drunken_haze.vpcf";
}


// CDOTA_Modifier_Brewmaster_DrunkenHaze::StatusEffectPriority  (line 786, @0x0000000002b8dac0, libserver.so)
int __fastcall CDOTA_Modifier_Brewmaster_DrunkenHaze::StatusEffectPriority(
        CDOTA_Modifier_Brewmaster_DrunkenHaze *const this)
{
  return 50;
}


// CDOTA_Modifier_Brewmaster_DrunkenHaze::OnCreated  (line 798, @0x0000000002b6d350, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "miss_chance"
void __fastcall CDOTA_Modifier_Brewmaster_DrunkenHaze::OnCreated(
        CDOTA_Modifier_Brewmaster_DrunkenHaze *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->movement_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movement_slow", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->miss_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "miss_chance", -1, 0);
      return;
    }
  }
  else
  {
    this->movement_slow = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->miss_chance = 0;
}


// CDOTA_Modifier_Brewmaster_DrunkenHaze::DeclareFunctions  (line 806, @0x0000000002b341d0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Brewmaster_DrunkenHaze::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Brewmaster_DrunkenHaze::GetModifierMiss_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Brewmaster_DrunkenHaze::DeclareFunctions(
        CDOTA_Modifier_Brewmaster_DrunkenHaze *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Brewmaster_DrunkenHaze::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[44].__delta = 0;
  this->m_Functions[44].__pfn = CDOTA_Modifier_Brewmaster_DrunkenHaze::GetModifierMiss_Percentage;
}


// CDOTA_Modifier_Brewmaster_DrunkenHaze::GetModifierMoveSpeedBonus_Percentage  (line 814, @0x0000000002b34210, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Brewmaster_DrunkenHaze::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Brewmaster_DrunkenHaze *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->movement_slow;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Brewmaster_DrunkenHaze::GetModifierMiss_Percentage  (line 821, @0x0000000002b34230, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Brewmaster_DrunkenHaze::GetModifierMiss_Percentage(
        CDOTA_Modifier_Brewmaster_DrunkenHaze *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->miss_chance;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Brewmaster_DrunkenBrawler::~CDOTA_Ability_Brewmaster_DrunkenBrawler  (line 841, @0x0000000002ba0540, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Brewmaster_DrunkenBrawler::~CDOTA_Ability_Brewmaster_DrunkenBrawler(
        CDOTA_Ability_Brewmaster_DrunkenBrawler *const this)
{
  this->_vptr_IHandleEntity = &off_44A3910;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Brewmaster_DrunkenBrawler::~CDOTA_Ability_Brewmaster_DrunkenBrawler  (line 841, @0x0000000002ba0560, libserver.so)  // inlines: ~CDOTA_Ability_Brewmaster_DrunkenBrawler
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Brewmaster_DrunkenBrawler::~CDOTA_Ability_Brewmaster_DrunkenBrawler(
        CDOTA_Ability_Brewmaster_DrunkenBrawler *const this)
{
  this->_vptr_IHandleEntity = &off_44A3910;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Brewmaster_DrunkenBrawler::Schema_DynamicBinding  (line 843, @0x0000000002b8dad0, libserver.so)
// globals: CDOTA_Ability_Brewmaster_DrunkenBrawler::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Brewmaster_DrunkenBrawler::Schema_DynamicBinding(
        const CDOTA_Ability_Brewmaster_DrunkenBrawler *const this)
{
  return CDOTA_Ability_Brewmaster_DrunkenBrawler::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_DrunkenBrawler::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 843, @0x0000000002b8dae0, libserver.so)
// globals: CDOTA_Ability_Brewmaster_DrunkenBrawler::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Brewmaster_DrunkenBrawler::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Brewmaster_DrunkenBrawler::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Brewmaster_DrunkenBrawler::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_DrunkenBrawler::CEntityInstanceEntityClass::DestructInstance  (line 843, @0x0000000002b8daf0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Brewmaster_DrunkenBrawler>
void __fastcall CDOTA_Ability_Brewmaster_DrunkenBrawler::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Brewmaster_DrunkenBrawler::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Brewmaster_DrunkenBrawler::CEntityInstanceEntityClass::FreeInstance  (line 843, @0x0000000002b8db10, libserver.so)
void __fastcall CDOTA_Ability_Brewmaster_DrunkenBrawler::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Brewmaster_DrunkenBrawler::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Brewmaster_DrunkenBrawler::CEntityInstanceEntityClass::CanAllocate  (line 843, @0x0000000002b8db30, libserver.so)
bool __fastcall CDOTA_Ability_Brewmaster_DrunkenBrawler::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Brewmaster_DrunkenBrawler::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Brewmaster_DrunkenBrawler::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 843, @0x0000000002b8db40, libserver.so)
// globals: CDOTA_Ability_Brewmaster_DrunkenBrawler::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Brewmaster_DrunkenBrawler::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Brewmaster_DrunkenBrawler::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Brewmaster_DrunkenBrawler::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_DrunkenBrawler::CEntityInstanceEntityClass::AllocateInstance  (line 843, @0x0000000002b96e20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Brewmaster_DrunkenBrawler::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Brewmaster_DrunkenBrawler::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Brewmaster_DrunkenBrawler::CEntityInstanceEntityClass::ConstructInstance  (line 843, @0x0000000002ba8d10, libserver.so)  // inlines: CDOTA_Ability_Brewmaster_DrunkenBrawler, CNetworkVarBase, Construct<CDOTA_Ability_Brewmaster_DrunkenBrawler>, EnsureValidValue<int>, NetworkStateChanged, Set, operator=<<anonymous enum> >
// calls: CDOTABaseAbility::CDOTABaseAbility, CBaseEntity::NetworkStateChanged, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Ability_Brewmaster_DrunkenBrawler::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Brewmaster_DrunkenBrawler::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44A3910;
    *(p + 228) = 0;
    CBaseEntity::NetworkStateChanged(p, 0x390u, -1, -1);
    *(p + 228) = 3;
    *(p + 916) = 1;
  }
  return p;
}


// CDOTA_Ability_Brewmaster_DrunkenBrawler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 843, @0x0000000002ba9c60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Brewmaster_DrunkenBrawler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Brewmaster_DrunkenBrawler::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Brewmaster_DrunkenBrawler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 843, @0x0000000002ba9c80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Brewmaster_DrunkenBrawler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Brewmaster_DrunkenBrawler::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Brewmaster_DrunkenBrawler::GetEntityClassInternal  (line 843, @0x0000000002bc5660, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "brewmaster_drunken_brawler", "CDOTA_Ability_Brewmaster_DrunkenBrawler"
// globals: `guard variable for'CDOTA_Ability_Brewmaster_DrunkenBrawler::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenBrawlerClass, CDOTA_Ability_Brewmaster_DrunkenBrawler::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenBrawlerClass, __dso_handle, CDOTA_Ability_Brewmaster_DrunkenBrawler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Brewmaster_DrunkenBrawler::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenBrawlerClassInfo, CDOTA_Ability_Brewmaster_DrunkenBrawler::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenBrawlerClassInfo
CEntityClass *__cdecl CDOTA_Ability_Brewmaster_DrunkenBrawler::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Brewmaster_DrunkenBrawler::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenBrawlerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Brewmaster_DrunkenBrawler::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenBrawlerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Brewmaster_DrunkenBrawler::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenBrawlerClass);
    CDOTA_Ability_Brewmaster_DrunkenBrawler::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenBrawlerClass._vptr_CEntityClass = off_44A3890;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Brewmaster_DrunkenBrawler::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenBrawlerClass);
    __cxa_atexit(
      CDOTA_Ability_Brewmaster_DrunkenBrawler::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Brewmaster_DrunkenBrawler::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenBrawlerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Brewmaster_DrunkenBrawlerClass != 0 )
    return &CDOTA_Ability_Brewmaster_DrunkenBrawler::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenBrawlerClass;
  if ( `guard variable for'CDOTA_Ability_Brewmaster_DrunkenBrawler::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenBrawlerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Brewmaster_DrunkenBrawler::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenBrawlerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Brewmaster_DrunkenBrawler::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenBrawlerClassInfo,
      "CDOTA_Ability_Brewmaster_DrunkenBrawler",
      "brewmaster_drunken_brawler",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Brewmaster_DrunkenBrawler::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenBrawlerClassInfo);
  }
  CDOTA_Ability_Brewmaster_DrunkenBrawler::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenBrawlerClass.m_pClassInfo = &CDOTA_Ability_Brewmaster_DrunkenBrawler::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenBrawlerClassInfo;
  CDOTA_Ability_Brewmaster_DrunkenBrawler::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenBrawlerClass.m_pBaseClassInfo = CDOTA_Ability_Brewmaster_DrunkenBrawler::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenBrawlerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Brewmaster_DrunkenBrawlerClass = &CDOTA_Ability_Brewmaster_DrunkenBrawler::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenBrawlerClass;
  CDOTA_Ability_Brewmaster_DrunkenBrawler::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenBrawlerClassInfo.m_pClass = &CDOTA_Ability_Brewmaster_DrunkenBrawler::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenBrawlerClass;
  CDOTA_Ability_Brewmaster_DrunkenBrawler::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenBrawlerClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Brewmaster_DrunkenBrawlerClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Brewmaster_DrunkenBrawler::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DrunkenBrawlerClass;
}


// CDOTA_Ability_Brewmaster_DrunkenBrawler::IsHiddenWhenStolen  (line 854, @0x0000000002b8db50, libserver.so)
bool __fastcall CDOTA_Ability_Brewmaster_DrunkenBrawler::IsHiddenWhenStolen(
        CDOTA_Ability_Brewmaster_DrunkenBrawler *const this)
{
  return 1;
}


// CDOTA_Ability_Brewmaster_DrunkenBrawler::GetIntrinsicModifierName  (line 855, @0x0000000002b8db60, libserver.so)
// strings: "modifier_brewmaster_drunken_brawler"
const char *__fastcall CDOTA_Ability_Brewmaster_DrunkenBrawler::GetIntrinsicModifierName(
        CDOTA_Ability_Brewmaster_DrunkenBrawler *const this)
{
  return "modifier_brewmaster_drunken_brawler";
}


// CDOTA_Ability_Brewmaster_DrunkenBrawler::YouForgotToImplementOrDeclareServerClass  (line 900, @0x0000000002b34250, libserver.so)
int __fastcall CDOTA_Ability_Brewmaster_DrunkenBrawler::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Brewmaster_DrunkenBrawler *const this)
{
  return 0;
}


// CDOTA_Ability_Brewmaster_DrunkenBrawler::GetServerClass  (line 900, @0x0000000002b4c2e0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Brewmaster_DrunkenBrawler::GetServerClass(
        CDOTA_Ability_Brewmaster_DrunkenBrawler *const this)
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


// CDOTA_Ability_Brewmaster_DrunkenBrawler::OnStolen  (line 931, @0x0000000002b39fa0, libserver.so)
// calls: CDOTABaseAbility::SetActivated
void __fastcall CDOTA_Ability_Brewmaster_DrunkenBrawler::OnStolen(
        CDOTA_Ability_Brewmaster_DrunkenBrawler *const this,
        CDOTABaseAbility *pSourceAbility)
{
  CDOTABaseAbility::SetActivated(this, !this->m_bHidden.m_Value);
}


// CDOTA_Modifier_Brewmaster_DrunkenBrawler::~CDOTA_Modifier_Brewmaster_DrunkenBrawler  (line 942, @0x0000000002b9ba90, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Brewmaster_DrunkenBrawler::~CDOTA_Modifier_Brewmaster_DrunkenBrawler(
        CDOTA_Modifier_Brewmaster_DrunkenBrawler *const this)
{
  this->_vptr_CDOTA_Buff = &off_44A43D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Brewmaster_DrunkenBrawler::~CDOTA_Modifier_Brewmaster_DrunkenBrawler  (line 942, @0x0000000002b9bab0, libserver.so)  // inlines: ~CDOTA_Modifier_Brewmaster_DrunkenBrawler
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Brewmaster_DrunkenBrawler::~CDOTA_Modifier_Brewmaster_DrunkenBrawler(
        CDOTA_Modifier_Brewmaster_DrunkenBrawler *const this)
{
  this->_vptr_CDOTA_Buff = &off_44A43D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Brewmaster_DrunkenBrawler::IsHidden  (line 956, @0x0000000002b8db70, libserver.so)
bool __fastcall CDOTA_Modifier_Brewmaster_DrunkenBrawler::IsHidden(
        CDOTA_Modifier_Brewmaster_DrunkenBrawler *const this)
{
  return 1;
}


// CDOTA_Modifier_Brewmaster_DrunkenBrawler::OnCreated  (line 974, @0x0000000002b812c0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, Vector
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::StartIntervalThink
// strings: "dodge_chance", "last_proc", "particles/units/heroes/hero_brewmaster/brewmaster_drunkenBrawler_evade.vpcf", "attach_hitloc", "particles/units/heroes/hero_brewmaster/brewmaster_drunkenBrawler_crit.vpcf"
void __fastcall CDOTA_Modifier_Brewmaster_DrunkenBrawler::OnCreated(
        CDOTA_Modifier_Brewmaster_DrunkenBrawler *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  float LevelSpecialValue; // xmm0_4
  float v8; // xmm0_4
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v11; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v13; // rax
  int m_nFXIndex; // r13d
  const CBaseAnimating *v15; // r14
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  CDOTA_BaseNPC *v18; // r12
  CDOTA_ParticleManager *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  const Vector *v21; // r12
  CDOTA_BaseNPC *v22; // rax
  int m_nFXIndexB; // r13d
  const CBaseAnimating *v24; // r14
  CDOTA_ParticleManager *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  float v27; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->dodge_chance, "dodge_chance");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->crit_chance, "crit_chance");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->crit_multiplier, "crit_multiplier");
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "last_proc", -1, 0);
    this->last_proc = LevelSpecialValue;
    v8 = -LevelSpecialValue;
  }
  else
  {
    this->last_proc = 0.0;
    v8 = -0.0;
  }
  this->m_flLastAttack = v8;
  this->m_flLastDefend = v8;
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_brewmaster/brewmaster_drunkenBrawler_evade.vpcf",
                       1,
                       Parent,
                       0,
                       0);
  v11 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
  v13 = CDOTA_Buff::GetParent(this);
  m_nFXIndex = this->m_nFXIndex;
  v15 = v13;
  v16 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v16, m_nFXIndex, 0, v15, 5, "attach_hitloc", *AbsOrigin, 1);
  LODWORD(AbsOrigin) = this->m_nFXIndex;
  v17 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v17, AbsOrigin, 1, 0.0, 0.0);
  v18 = CDOTA_Buff::GetParent(this);
  v19 = GetParticleManager();
  this->m_nFXIndexB = CDOTA_ParticleManager::CreateParticle(
                        v19,
                        "particles/units/heroes/hero_brewmaster/brewmaster_drunkenBrawler_crit.vpcf",
                        1,
                        v18,
                        0,
                        0);
  v20 = CDOTA_Buff::GetParent(this);
  v21 = CBaseEntity::GetAbsOrigin(v20);
  v22 = CDOTA_Buff::GetParent(this);
  m_nFXIndexB = this->m_nFXIndexB;
  v24 = v22;
  v25 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v25, m_nFXIndexB, 0, v24, 5, "attach_hitloc", *v21, 1);
  LODWORD(v21) = this->m_nFXIndexB;
  v26 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v26, v21, 1, 0.0, 0.0);
  CDOTA_Buff::StartIntervalThink(this, 0.2, v27);
}


// CDOTA_Modifier_Brewmaster_DrunkenBrawler::OnRefresh  (line 999, @0x0000000002b7ea10, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "dodge_chance", "last_proc"
void __fastcall CDOTA_Modifier_Brewmaster_DrunkenBrawler::OnRefresh(
        CDOTA_Modifier_Brewmaster_DrunkenBrawler *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->dodge_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "dodge_chance", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->dodge_chance = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->crit_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "crit_chance", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->crit_multiplier = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->crit_chance = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->crit_multiplier = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "crit_multiplier", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->last_proc = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "last_proc", -1, 0);
    return;
  }
LABEL_9:
  this->last_proc = 0.0;
}


// CDOTA_Modifier_Brewmaster_DrunkenBrawler::OnIntervalThink  (line 1009, @0x0000000002b41e60, libserver.so)  // inlines: DOTAGameRules, GetGameTime, NetworkStateChanged, Set, Vector, operator=<int>
// calls: GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::GetAbility, __dynamic_cast
// globals: `typeinfo for'CDOTA_Ability_Brewmaster_DrunkenBrawler
void __fastcall CDOTA_Modifier_Brewmaster_DrunkenBrawler::OnIntervalThink(
        CDOTA_Modifier_Brewmaster_DrunkenBrawler *const this)
{
  float v1; // xmm2_4
  float last_proc; // xmm0_4
  CGameRules *v4; // rax
  int m_nFXIndex; // r13d
  CDOTA_ParticleManager *ParticleManager; // rax
  int v7; // r12d
  float v8; // xmm0_4
  float v9; // xmm1_4
  int m_nFXIndexB; // r13d
  CDOTA_ParticleManager *v11; // rax
  CDOTABaseAbility *Ability; // rax
  _DWORD *v13; // rax
  _DWORD *v14; // rbx

  v1 = 0.0;
  last_proc = this->last_proc;
  v4 = g_pGameRules;
  if ( g_pGameRules != 0 )
    v1 = *&g_pGameRules[18].m_szQuestName[20];
  if ( v1 <= (this->m_flLastDefend + last_proc) )
  {
    v7 = 0;
  }
  else
  {
    m_nFXIndex = this->m_nFXIndex;
    if ( m_nFXIndex == -1 )
    {
      v7 = 1;
    }
    else
    {
      ParticleManager = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(ParticleManager, m_nFXIndex, 1, 0.007812501848093234, 1.0);
      v4 = g_pGameRules;
      v7 = 1;
      last_proc = this->last_proc;
    }
  }
  v8 = last_proc + this->m_flLastAttack;
  v9 = 0.0;
  if ( v4 != 0 )
    v9 = *&v4[18].m_szQuestName[20];
  if ( v9 > v8 )
  {
    m_nFXIndexB = this->m_nFXIndexB;
    v7 += 2;
    if ( m_nFXIndexB != -1 )
    {
      v11 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v11, m_nFXIndexB, 1, 0.007812501848093234, 1.0);
    }
  }
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    v13 = __dynamic_cast(
            Ability,
            &`typeinfo for'CDOTABaseAbility,
            &`typeinfo for'CDOTA_Ability_Brewmaster_DrunkenBrawler,
            0);
    v14 = v13;
    if ( v13 != 0 && v7 != v13[228] )
    {
      (*(*v13 + 176LL))(v13, 912, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v14[228] = v7;
    }
  }
}


// CDOTA_Modifier_Brewmaster_DrunkenBrawler::DeclareFunctions  (line 1048, @0x0000000002b34260, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Brewmaster_DrunkenBrawler::GetModifierEvasion_Constant(CModifierParams const&), CDOTA_Modifier_Brewmaster_DrunkenBrawler::GetModifierPreAttack_CriticalStrike(CModifierParams const&), CDOTA_Modifier_Brewmaster_DrunkenBrawler::Tooltip(CModifierParams const&)
void __fastcall CDOTA_Modifier_Brewmaster_DrunkenBrawler::DeclareFunctions(
        CDOTA_Modifier_Brewmaster_DrunkenBrawler *const this)
{
  this->m_Functions[40].__pfn = CDOTA_Modifier_Brewmaster_DrunkenBrawler::GetModifierEvasion_Constant;
  this->m_Functions[40].__delta = 0;
  this->m_Functions[83].__delta = 0;
  this->m_Functions[83].__pfn = CDOTA_Modifier_Brewmaster_DrunkenBrawler::GetModifierPreAttack_CriticalStrike;
  this->m_Functions[151].__pfn = CDOTA_Modifier_Brewmaster_DrunkenBrawler::Tooltip;
  this->m_Functions[151].__delta = 0;
  this->m_Functions[121].__pfn = (&stru_10 + 697);
  this->m_Functions[121].__delta = 0;
}


// CDOTA_Modifier_Brewmaster_DrunkenBrawler::OnAttackLanded  (line 1058, @0x0000000002b47980, libserver.so)  // inlines: AttackerNPC, DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*
// calls: GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_BaseNPC::UnitEmitSound
// strings: "Hero_Brewmaster.Brawler.Crit"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Brewmaster_DrunkenBrawler::OnAttackLanded(
        CDOTA_Modifier_Brewmaster_DrunkenBrawler *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 v7; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_BaseNPC *v10; // r14
  __int64 iRecord; // r13
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // r13
  float v15; // xmm0_4
  int m_nFXIndex; // ebx
  CDOTA_ParticleManager *v17; // rax
  CDOTA_BaseNPC *Parent; // rax
  float v19; // xmm0_4
  int m_nFXIndexB; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->hattacker.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v7 = params->htarget.m_Index;
  if ( v7 + 2 <= 1
    || (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v9 = &v8[params->htarget.m_Index & 0x1FF]) == 0
    || v7 != v9->m_EHandle.m_Index
    || (v10 = v9->m_pInstance, v9->m_pInstance == 0)
    || !v10->m_bIsDOTANPC )
  {
    v10 = 0;
  }
  iRecord = params->iRecord;
  AttackRecordsManager = GetAttackRecordsManager();
  RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
  if ( m_pInstance != 0
    && CDOTA_Buff::GetParent(this) == m_pInstance
    && v10 != 0
    && RecordByIndex != 0
    && RecordByIndex->m_flCriticalBonus > 1.0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::UnitEmitSound(Parent, "Hero_Brewmaster.Brawler.Crit", 0.0, 0, 0);
  }
  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
  {
    if ( CDOTA_Buff::GetParent(this) == m_pInstance )
    {
      v19 = 0.0;
      if ( g_pGameRules != 0 )
        v19 = *&g_pGameRules[18].m_szQuestName[20];
      m_nFXIndexB = this->m_nFXIndexB;
      this->m_flLastAttack = v19;
      if ( m_nFXIndexB != -1 )
      {
        ParticleManager = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControl(ParticleManager, m_nFXIndexB, 1, 0.0, 0.0);
      }
    }
    if ( CDOTA_Buff::GetParent(this) == v10 && (RecordByIndex == 0 || !RecordByIndex->m_bNeverMiss) )
    {
      v15 = 0.0;
      if ( g_pGameRules != 0 )
        v15 = *&g_pGameRules[18].m_szQuestName[20];
      this->m_flLastDefend = v15;
      m_nFXIndex = this->m_nFXIndex;
      if ( m_nFXIndex != -1 )
      {
        v17 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControl(v17, m_nFXIndex, 1, 0.0, 0.0);
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Brewmaster_DrunkenBrawler::GetModifierEvasion_Constant  (line 1099, @0x0000000002b3cae0, libserver.so)  // inlines: DOTAGameRules, GetGameTime, ModifierVariant_t, Vector
// calls: CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::SetParticleControl
ModifierVariant_t __fastcall CDOTA_Modifier_Brewmaster_DrunkenBrawler::GetModifierEvasion_Constant(
        CDOTA_Modifier_Brewmaster_DrunkenBrawler *const this,
        const CModifierParams *const params)
{
  __m128i m_flLastDefend_low; // xmm0
  float v4; // xmm1_4
  int m_nFXIndex; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
  {
    m_flLastDefend_low = LODWORD(this->m_flLastDefend);
    *m_flLastDefend_low.m128i_i32 = *m_flLastDefend_low.m128i_i32 + this->last_proc;
    if ( g_pGameRules != 0 )
    {
      v4 = *&g_pGameRules[18].m_szQuestName[20];
      if ( v4 <= *m_flLastDefend_low.m128i_i32 )
      {
LABEL_4:
        *m_flLastDefend_low.m128i_i32 = this->dodge_chance;
LABEL_5:
        result.m_szVal = 0;
        *&result.m_eType = (_mm_cvtsi128_si32(m_flLastDefend_low) << 32) | 1;
        return result;
      }
    }
    else
    {
      v4 = 0.0;
      if ( *m_flLastDefend_low.m128i_i32 >= 0.0 )
        goto LABEL_4;
    }
    this->m_flLastDefend = v4;
    m_nFXIndex = this->m_nFXIndex;
    if ( m_nFXIndex != -1 )
    {
      ParticleManager = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(ParticleManager, m_nFXIndex, 1, 0.0, 0.0);
    }
    m_flLastDefend_low = 0x42C80000u;
    goto LABEL_5;
  }
  return 1uLL;
}


// CDOTA_Modifier_Brewmaster_DrunkenBrawler::GetModifierPreAttack_CriticalStrike  (line 1121, @0x0000000002b45eb0, libserver.so)  // inlines: DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::PreventCritOrBashAnimations, RollPseudoRandomPercentage
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Brewmaster_DrunkenBrawler::GetModifierPreAttack_CriticalStrike(
        CDOTA_Modifier_Brewmaster_DrunkenBrawler *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r12
  CDOTA_BaseNPC *Caster; // rax
  __m128i v10; // xmm2
  float v11; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) != 0 )
    return 1uLL;
  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
  if ( v5 == 0 )
    return 1uLL;
  v6 = &v5[params->htarget.m_Index & 0x1FF];
  if ( v6 == 0 )
    return 1uLL;
  if ( m_Index != v6->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v6->m_pInstance;
  if ( v6->m_pInstance == 0 )
    return 1uLL;
  if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    return 1uLL;
  if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x10) != 0 )
    return 1uLL;
  if ( CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value == HIBYTE(m_pInstance[7].m_CScriptComponent) )
    return 1uLL;
  if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x193) == 0 )
    return 1uLL;
  Caster = CDOTA_Buff::GetCaster(this);
  if ( CDOTA_BaseNPC::PreventCritOrBashAnimations(Caster) )
    return 1uLL;
  v11 = 0.0;
  if ( g_pGameRules != 0 )
    v11 = *&g_pGameRules[18].m_szQuestName[20];
  if ( v11 <= (this->m_flLastAttack + this->last_proc) )
  {
    Parent = CDOTA_Buff::GetParent(this);
    if ( !RollPseudoRandomPercentage(
            this->crit_chance,
            DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_BREWMASTER_CRIT,
            Parent) )
      return 1uLL;
  }
  *v10.m128i_i32 = this->crit_multiplier;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v10) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Brewmaster_DrunkenBrawler::Tooltip  (line 1143, @0x0000000002b3c320, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Brewmaster_DrunkenBrawler::Tooltip(
        CDOTA_Modifier_Brewmaster_DrunkenBrawler *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  __m128i v3; // xmm1
  int nTooltipParam; // eax
  ModifierVariant_t result; // 0:rax.16

  nTooltipParam = params->nTooltipParam;
  if ( nTooltipParam == 1 )
  {
    *v2.m128i_i32 = this->crit_chance;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  }
  else if ( nTooltipParam == 2 )
  {
    *v3.m128i_i32 = this->crit_multiplier;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  }
  else
  {
    return 1uLL;
  }
  return result;
}


// CDOTA_Ability_Brewmaster_PrimalSplit::YouForgotToImplementOrDeclareServerClass  (line 1160, @0x0000000002b342d0, libserver.so)
int __fastcall CDOTA_Ability_Brewmaster_PrimalSplit::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Brewmaster_PrimalSplit *const this)
{
  return 0;
}


// CDOTA_Ability_Brewmaster_PrimalSplit::GetServerClass  (line 1160, @0x0000000002b4c0e0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Brewmaster_PrimalSplit::GetServerClass(
        CDOTA_Ability_Brewmaster_PrimalSplit *const this)
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


// CDOTA_Ability_Brewmaster_PrimalSplit::OnSpellStart  (line 1178, @0x0000000002b72400, libserver.so)  // inlines: GetAbilityData, GetLevelSpecialValueFor<float>, GetParent
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, CGameSceneNode::GetOwnerEntity, CBaseEntity::GetAbsOrigin, CDOTAGamerules::SendProjectionAbilityMessage, KeyValues::~KeyValues, CDOTABaseAbility::LoadAbilityData, __stack_chk_fail (13 total)
// strings: "split_duration", "modifier_brewmaster_primal_split_delay", "Hero_Brewmaster.PrimalSplit.Cast"
void __fastcall CDOTA_Ability_Brewmaster_PrimalSplit::OnSpellStart(CDOTA_Ability_Brewmaster_PrimalSplit *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r14d
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rdi
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v11; // rax
  float v12; // xmm3_4
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "split_duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_brewmaster_primal_split_delay");
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_brewmaster_primal_split_delay", &kv, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v5, "Hero_Brewmaster.PrimalSplit.Cast", 0.0, 0, 0);
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
  else
    OwnerEntity = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(OwnerEntity);
  v11 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(
    g_pGameRules,
    v11,
    0,
    m_iAbilityID,
    0,
    0,
    *&AbsOrigin->x,
    AbsOrigin->z,
    -1.0,
    v12);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Brewmaster_PrimalSplitDelay::~CDOTA_Modifier_Brewmaster_PrimalSplitDelay  (line 1223, @0x0000000002b9ba40, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Brewmaster_PrimalSplitDelay::~CDOTA_Modifier_Brewmaster_PrimalSplitDelay(
        CDOTA_Modifier_Brewmaster_PrimalSplitDelay *const this)
{
  this->_vptr_CDOTA_Buff = &off_44A5170;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Brewmaster_PrimalSplitDelay::~CDOTA_Modifier_Brewmaster_PrimalSplitDelay  (line 1223, @0x0000000002b9ba60, libserver.so)  // inlines: ~CDOTA_Modifier_Brewmaster_PrimalSplitDelay
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Brewmaster_PrimalSplitDelay::~CDOTA_Modifier_Brewmaster_PrimalSplitDelay(
        CDOTA_Modifier_Brewmaster_PrimalSplitDelay *const this)
{
  this->_vptr_CDOTA_Buff = &off_44A5170;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Brewmaster_PrimalSplitDelay::IsHidden  (line 1228, @0x0000000002b8db80, libserver.so)
bool __fastcall CDOTA_Modifier_Brewmaster_PrimalSplitDelay::IsHidden(
        CDOTA_Modifier_Brewmaster_PrimalSplitDelay *const this)
{
  return 1;
}


// CDOTA_Modifier_Brewmaster_PrimalSplitDelay::GetEffectName  (line 1232, @0x0000000002b8db90, libserver.so)
// strings: "particles/units/heroes/hero_brewmaster/brewmaster_primal_split.vpcf"
const char *__fastcall CDOTA_Modifier_Brewmaster_PrimalSplitDelay::GetEffectName(
        CDOTA_Modifier_Brewmaster_PrimalSplitDelay *const this)
{
  return "particles/units/heroes/hero_brewmaster/brewmaster_primal_split.vpcf";
}


// CDOTA_Modifier_Brewmaster_PrimalSplitDelay::GetEffectAttachType  (line 1233, @0x0000000002b8dba0, libserver.so)
int __fastcall CDOTA_Modifier_Brewmaster_PrimalSplitDelay::GetEffectAttachType(
        CDOTA_Modifier_Brewmaster_PrimalSplitDelay *const this)
{
  return 0;
}


// CDOTA_Modifier_Brewmaster_PrimalSplitDelay::OnCreated  (line 1242, @0x0000000002b342e0, libserver.so)
void __fastcall CDOTA_Modifier_Brewmaster_PrimalSplitDelay::OnCreated(
        CDOTA_Modifier_Brewmaster_PrimalSplitDelay *const this,
        KeyValues *pKV)
{
  ;
}


// CDOTA_Modifier_Brewmaster_PrimalSplitDelay::OnDestroy  (line 1248, @0x0000000002b706c0, libserver.so)  // inlines: FStrEq, GetAbilityName, GetLevel, GetTeamNumber, SpeakConcept, VectorAdd, VectorMultiply, _V_strcmp, operator*, operator+
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<float>, CDOTA_BaseNPC::FindAbilityByName, CBaseEntity::GetAbsOrigin, CFmtStrN<256, false>::CFmtStrN, DOTA_CreateUnitByName, CDOTA_BaseNPC::SetControllableByPlayer, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier (27 total)
// strings: "brewmaster_drunken_brawler", "brewmaster_thunder_clap", "brewmaster_drunken_haze", "npc_dota_brewmaster_fire_%1d", "modifier_brewmaster_primal_split_duration", "npc_dota_brewmaster_storm_%1d" (9 total)
void __fastcall CDOTA_Modifier_Brewmaster_PrimalSplitDelay::OnDestroy(
        CDOTA_Modifier_Brewmaster_PrimalSplitDelay *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v2; // rax
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTABaseAbility *AbilityByName; // r12
  CDOTA_BaseNPC *v6; // rax
  CDOTABaseAbility *v7; // rbx
  CDOTA_BaseNPC *v8; // rax
  CDOTABaseAbility *v9; // rax
  int m_Value; // r15d
  int v11; // r12d
  int v12; // ebx
  CDOTA_BaseNPC *v13; // r13
  CDOTA_BaseNPC *v14; // rax
  const Vector *AbsOrigin; // r14
  CDOTABaseAbility *v16; // rax
  CDOTA_BaseNPC *UnitByName; // r13
  CDOTA_BaseNPC *v18; // rax
  int v19; // eax
  float v20; // xmm1_4
  CDOTABaseAbility *v21; // rbx
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  const QAngle *AbsAngles; // rax
  unsigned int v25; // xmm0_4
  unsigned int v26; // xmm1_4
  __m128i v27; // xmm0
  __m128i y_low; // xmm6
  float v29; // r14d
  CDOTA_BaseNPC *v30; // rax
  const Vector *v31; // rax
  vec_t v32; // xmm3_4
  CDOTA_BaseNPC *v33; // rax
  const QAngle *v34; // rax
  int v35; // r14d
  CDOTA_BaseNPC *v36; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rsi
  int j; // ebx
  CDOTABaseAbility *v40; // rax
  DOTAAbilityData_t *v41; // rax
  const char *v42; // rsi
  int i; // ebx
  CDOTABaseAbility *AbilityByIndex; // rax
  int v45; // ebx
  CDOTA_BaseNPC *v46; // r14
  CDOTA_BaseNPC *v47; // rax
  const Vector *v48; // r15
  CDOTABaseAbility *v49; // rax
  CDOTA_BaseNPC *v50; // rax
  CDOTA_BaseNPC *v51; // r14
  void (__fastcall *v52)(CDOTA_BaseNPC *, _QWORD); // rbx
  CDOTA_BaseNPC *v53; // rax
  void (__fastcall *v54)(CDOTA_BaseNPC *, CDOTA_BaseNPC *); // rbx
  CDOTA_BaseNPC *v55; // rax
  CDOTA_BaseNPC *v56; // rax
  int v57; // eax
  float v58; // xmm1_4
  CDOTABaseAbility *v59; // rbx
  CDOTA_BaseNPC *v60; // rax
  CDOTA_BaseNPC *v61; // rax
  const QAngle *v62; // rax
  unsigned int v63; // xmm0_4
  unsigned int v64; // xmm1_4
  __m128i v65; // xmm0
  __m128i v66; // xmm7
  float v67; // r15d
  CDOTA_BaseNPC *v68; // rax
  const Vector *v69; // rax
  vec_t v70; // xmm4_4
  CDOTA_BaseNPC *v71; // rax
  const QAngle *v72; // rax
  int v73; // r15d
  CDOTA_BaseNPC *v74; // rax
  DOTAAbilityData_t *v75; // rax
  const char *v76; // rsi
  int m; // ebx
  CDOTABaseAbility *v78; // rax
  DOTAAbilityData_t *v79; // rax
  const char *v80; // rsi
  int k; // ebx
  CDOTABaseAbility *v82; // rax
  int v83; // ebx
  CDOTA_BaseNPC *v84; // r12
  CDOTA_BaseNPC *v85; // rax
  const Vector *v86; // r15
  CDOTABaseAbility *v87; // rax
  CDOTA_BaseNPC *v88; // rax
  CDOTA_BaseNPC *v89; // r15
  void (__fastcall *v90)(CDOTA_BaseNPC *, _QWORD); // rbx
  CDOTA_BaseNPC *v91; // rax
  void (__fastcall *v92)(CDOTA_BaseNPC *, CDOTA_BaseNPC *); // rbx
  CDOTA_BaseNPC *v93; // rax
  CDOTA_BaseNPC *v94; // rax
  int v95; // eax
  float v96; // xmm1_4
  CDOTABaseAbility *v97; // rbx
  CDOTA_BaseNPC *v98; // rax
  CDOTA_BaseNPC *v99; // rax
  const QAngle *v100; // rax
  float v101; // xmm1_4
  float v102; // xmm0_4
  __m128i v103; // xmm0
  __m128i v104; // xmm6
  float v105; // r12d
  CDOTA_BaseNPC *v106; // rax
  const Vector *v107; // rax
  vec_t v108; // xmm5_4
  CDOTA_BaseNPC *v109; // rax
  const QAngle *v110; // rax
  int v111; // r12d
  CDOTA_BaseNPC *v112; // rax
  DOTAAbilityData_t *v113; // rax
  const char *v114; // rsi
  int ii; // ebx
  CDOTABaseAbility *v116; // rax
  DOTAAbilityData_t *v117; // rax
  const char *v118; // rsi
  int n; // ebx
  CDOTABaseAbility *v120; // rax
  float v121; // xmm1_4
  CDOTABaseAbility *v122; // r12
  CDOTA_BaseNPC *v123; // rbx
  CDOTA_BaseNPC *v124; // rax
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_BaseNPC *pEconItemOwner; // [rsp+10h] [rbp-200h]
  float pEconItemOwnera; // [rsp+10h] [rbp-200h]
  CDOTA_BaseNPC *pEconItemOwnerb; // [rsp+10h] [rbp-200h]
  float pEconItemOwnerc; // [rsp+10h] [rbp-200h]
  CDOTA_BaseNPC *pEconItemOwnerd; // [rsp+10h] [rbp-200h]
  float pEconItemOwnere; // [rsp+10h] [rbp-200h]
  _BOOL4 iScepterAbilityBonus; // [rsp+28h] [rbp-1E8h]
  int iClapLevel; // [rsp+2Ch] [rbp-1E4h]
  float duration; // [rsp+3Ch] [rbp-1D4h] BYREF
  Vector vDirection_0; // [rsp+40h] [rbp-1D0h] BYREF
  Vector vPos; // [rsp+50h] [rbp-1C0h]
  Vector v138; // [rsp+60h] [rbp-1B0h]
  Vector vDirection; // [rsp+70h] [rbp-1A0h] BYREF
  CResponseCriteriaSet criteria; // [rsp+80h] [rbp-190h] BYREF
  KeyValues kv; // [rsp+C0h] [rbp-150h] BYREF
  unsigned __int64 v142; // [rsp+1D8h] [rbp-38h]
  Vector v143; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v144; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v145; // 0:xmm0_8.8,8:xmm1_4.4

  v142 = __readfsqword(0x28u);
  Caster = CDOTA_Buff::GetCaster(this);
  if ( (*(Caster->_vptr_IHandleEntity + 408))(Caster) == 0 )
    return;
  v2 = CDOTA_Buff::GetCaster(this);
  iScepterAbilityBonus = CDOTA_BaseNPC::HasScepter(v2);
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<float>(Ability, &duration, "duration");
  v4 = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v4, "brewmaster_drunken_brawler", 0);
  v6 = CDOTA_Buff::GetCaster(this);
  v7 = CDOTA_BaseNPC::FindAbilityByName(v6, "brewmaster_thunder_clap", 0);
  v8 = CDOTA_Buff::GetCaster(this);
  v9 = CDOTA_BaseNPC::FindAbilityByName(v8, "brewmaster_drunken_haze", 0);
  if ( AbilityByName != 0 )
    m_Value = AbilityByName->m_iLevel.m_Value;
  else
    m_Value = 0;
  if ( v7 != 0 )
    iClapLevel = v7->m_iLevel.m_Value;
  else
    iClapLevel = 0;
  if ( v9 != 0 )
    v11 = v9->m_iLevel.m_Value;
  else
    v11 = 0;
  v12 = CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value;
  v13 = CDOTA_Buff::GetCaster(this);
  pEconItemOwner = CDOTA_Buff::GetCaster(this);
  v14 = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v14);
  v16 = CDOTA_Buff::GetAbility(this);
  CFmtStrN<256,false>::CFmtStrN(&kv, "npc_dota_brewmaster_fire_%1d", v16->m_iLevel.m_Value);
  UnitByName = DOTA_CreateUnitByName(&kv.CKeyValues_Data + 9, AbsOrigin, 0, pEconItemOwner, v13, v12);
  if ( UnitByName != 0 )
  {
    v18 = CDOTA_Buff::GetCaster(this);
    v19 = (*(v18->_vptr_IHandleEntity + 414))(v18);
    CDOTA_BaseNPC::SetControllableByPlayer(UnitByName, v19, 0);
    KeyValues::KeyValues(&kv, "modifier_brewmaster_primal_split_duration");
    KeyValues::SetFloat(&kv, "duration", v20);
    v21 = CDOTA_Buff::GetAbility(this);
    v22 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(UnitByName, v22, v21, "modifier_brewmaster_primal_split_duration", &kv, 0);
    v23 = CDOTA_Buff::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v23);
    *&v25 = AbsAngles->y + 240.0;
    *&v26 = AbsAngles->x + 0.0;
    *&criteria.m_Lookup.m_LessFunc = AbsAngles->z + 0.0;
    criteria._vptr_CResponseCriteriaSet = __PAIR64__(v25, v26);
    AngleVectors(&criteria, &vDirection, 0, 0);
    v27 = 0x42C80000u;
    y_low = LODWORD(vDirection.y);
    *y_low.m128i_i32 = vDirection.y * 100.0;
    *v27.m128i_i32 = 100.0 * vDirection.z;
    pEconItemOwnera = vDirection.x * 100.0;
    LODWORD(v21) = _mm_cvtsi128_si32(y_low);
    v29 = COERCE_FLOAT(_mm_cvtsi128_si32(v27));
    v30 = CDOTA_Buff::GetCaster(this);
    v31 = CBaseEntity::GetAbsOrigin(v30);
    v32 = pEconItemOwnera + v31->x;
    v143.z = v29 + v31->z;
    vPos.y = *&v21 + v31->y;
    vPos.x = v32;
    *&v143.x = *&vPos.x;
    vPos.z = v143.z;
    FindClearSpaceForUnit(UnitByName, v143, 1);
    v33 = CDOTA_Buff::GetCaster(this);
    v34 = CBaseEntity::GetAbsAngles(v33);
    CBaseEntity::SetAbsAngles(UnitByName, v34);
    v35 = 0;
    while ( 1 )
    {
      if ( v35 >= CDOTA_BaseNPC::GetAbilityCount(UnitByName) )
      {
        KeyValues::~KeyValues(&kv);
        break;
      }
      if ( CDOTA_BaseNPC::GetAbilityByIndex(UnitByName, v35) != 0 )
      {
        v36 = CDOTA_Buff::GetCaster(this);
        if ( CDOTA_BaseNPC::HasScepter(v36)
          && (v41 = CDOTA_BaseNPC::GetAbilityByIndex(UnitByName, v35)->m_pAbilityData) != 0
          && (v42 = v41->m_pszAbilityName, v41->m_pszAbilityName != 0)
          && (v42 == "brewmaster_drunken_brawler" || strcmp(v42, "brewmaster_drunken_brawler") == 0) )
        {
          if ( m_Value <= 0 )
            goto LABEL_17;
          for ( i = 0; i != m_Value; ++i )
          {
            AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(UnitByName, v35);
            CDOTABaseAbility::UpgradeAbility(AbilityByIndex, 0);
          }
          ++v35;
        }
        else
        {
          m_pAbilityData = CDOTA_BaseNPC::GetAbilityByIndex(UnitByName, v35)->m_pAbilityData;
          if ( m_pAbilityData != 0 )
          {
            m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
            if ( m_pAbilityData->m_pszAbilityName != 0
              && (m_pszAbilityName == "brewmaster_drunken_brawler"
               || strcmp(m_pszAbilityName, "brewmaster_drunken_brawler") == 0) )
            {
              goto LABEL_17;
            }
          }
          for ( j = 0; j < CDOTA_Buff::GetAbility(this)->m_iLevel.m_Value; ++j )
          {
            v40 = CDOTA_BaseNPC::GetAbilityByIndex(UnitByName, v35);
            CDOTABaseAbility::UpgradeAbility(v40, 0);
          }
          ++v35;
        }
      }
      else
      {
LABEL_17:
        ++v35;
      }
    }
  }
  v45 = CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value;
  v46 = CDOTA_Buff::GetCaster(this);
  pEconItemOwnerb = CDOTA_Buff::GetCaster(this);
  v47 = CDOTA_Buff::GetCaster(this);
  v48 = CBaseEntity::GetAbsOrigin(v47);
  v49 = CDOTA_Buff::GetAbility(this);
  CFmtStrN<256,false>::CFmtStrN(&kv, "npc_dota_brewmaster_storm_%1d", v49->m_iLevel.m_Value);
  v50 = DOTA_CreateUnitByName(&kv.CKeyValues_Data + 9, v48, 0, pEconItemOwnerb, v46, v45);
  v51 = v50;
  if ( v50 == 0 )
    goto LABEL_54;
  v52 = *(v50->_vptr_IHandleEntity + 70);
  v53 = CDOTA_Buff::GetCaster(this);
  v52(v51, v53->m_iTeamNum.m_Value);
  v54 = *(v51->_vptr_IHandleEntity + 40);
  v55 = CDOTA_Buff::GetCaster(this);
  v54(v51, v55);
  v56 = CDOTA_Buff::GetCaster(this);
  v57 = (*(v56->_vptr_IHandleEntity + 414))(v56);
  CDOTA_BaseNPC::SetControllableByPlayer(v51, v57, 0);
  KeyValues::KeyValues(&kv, "modifier_brewmaster_primal_split_duration");
  KeyValues::SetFloat(&kv, "duration", v58);
  v59 = CDOTA_Buff::GetAbility(this);
  v60 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v51, v60, v59, "modifier_brewmaster_primal_split_duration", &kv, 0);
  v61 = CDOTA_Buff::GetCaster(this);
  v62 = CBaseEntity::GetAbsAngles(v61);
  *&v63 = v62->y + 120.0;
  *&v64 = v62->x + 0.0;
  *&criteria.m_Lookup.m_LessFunc = v62->z + 0.0;
  criteria._vptr_CResponseCriteriaSet = __PAIR64__(v63, v64);
  AngleVectors(&criteria, &vDirection, 0, 0);
  v65 = 0x42C80000u;
  v66 = LODWORD(vDirection.y);
  *v66.m128i_i32 = vDirection.y * 100.0;
  *v65.m128i_i32 = 100.0 * vDirection.z;
  pEconItemOwnerc = vDirection.x * 100.0;
  LODWORD(v59) = _mm_cvtsi128_si32(v66);
  v67 = COERCE_FLOAT(_mm_cvtsi128_si32(v65));
  v68 = CDOTA_Buff::GetCaster(this);
  v69 = CBaseEntity::GetAbsOrigin(v68);
  v70 = pEconItemOwnerc + v69->x;
  v144.z = v67 + v69->z;
  v138.y = *&v59 + v69->y;
  v138.x = v70;
  *&v144.x = *&v138.x;
  v138.z = v144.z;
  FindClearSpaceForUnit(v51, v144, 1);
  v71 = CDOTA_Buff::GetCaster(this);
  v72 = CBaseEntity::GetAbsAngles(v71);
  CBaseEntity::SetAbsAngles(v51, v72);
  v73 = 0;
  while ( v73 < CDOTA_BaseNPC::GetAbilityCount(v51) )
  {
    if ( CDOTA_BaseNPC::GetAbilityByIndex(v51, v73) == 0 )
      goto LABEL_40;
    v74 = CDOTA_Buff::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(v74)
      && (v79 = CDOTA_BaseNPC::GetAbilityByIndex(v51, v73)->m_pAbilityData) != 0
      && (v80 = v79->m_pszAbilityName, v79->m_pszAbilityName != 0)
      && (v80 == "brewmaster_drunken_haze" || strcmp(v80, "brewmaster_drunken_haze") == 0) )
    {
      if ( v11 <= 0 )
        goto LABEL_40;
      for ( k = 0; k != v11; ++k )
      {
        v82 = CDOTA_BaseNPC::GetAbilityByIndex(v51, v73);
        CDOTABaseAbility::UpgradeAbility(v82, 0);
      }
      ++v73;
    }
    else
    {
      v75 = CDOTA_BaseNPC::GetAbilityByIndex(v51, v73)->m_pAbilityData;
      if ( v75 != 0
        && (v76 = v75->m_pszAbilityName, v75->m_pszAbilityName != 0)
        && (v76 == "brewmaster_drunken_haze" || strcmp(v76, "brewmaster_drunken_haze") == 0) )
      {
LABEL_40:
        ++v73;
      }
      else
      {
        for ( m = 0; m < CDOTA_Buff::GetAbility(this)->m_iLevel.m_Value + iScepterAbilityBonus; ++m )
        {
          v78 = CDOTA_BaseNPC::GetAbilityByIndex(v51, v73);
          CDOTABaseAbility::UpgradeAbility(v78, 0);
        }
        ++v73;
      }
    }
  }
  KeyValues::~KeyValues(&kv);
LABEL_54:
  v83 = CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value;
  v84 = CDOTA_Buff::GetCaster(this);
  pEconItemOwnerd = CDOTA_Buff::GetCaster(this);
  v85 = CDOTA_Buff::GetCaster(this);
  v86 = CBaseEntity::GetAbsOrigin(v85);
  v87 = CDOTA_Buff::GetAbility(this);
  CFmtStrN<256,false>::CFmtStrN(&kv, "npc_dota_brewmaster_earth_%1d", v87->m_iLevel.m_Value);
  v88 = DOTA_CreateUnitByName(&kv.CKeyValues_Data + 9, v86, 0, pEconItemOwnerd, v84, v83);
  v89 = v88;
  if ( v88 == 0 )
    goto LABEL_77;
  v90 = *(v88->_vptr_IHandleEntity + 70);
  v91 = CDOTA_Buff::GetCaster(this);
  v90(v89, v91->m_iTeamNum.m_Value);
  v92 = *(v89->_vptr_IHandleEntity + 40);
  v93 = CDOTA_Buff::GetCaster(this);
  v92(v89, v93);
  v94 = CDOTA_Buff::GetCaster(this);
  v95 = (*(v94->_vptr_IHandleEntity + 414))(v94);
  CDOTA_BaseNPC::SetControllableByPlayer(v89, v95, 0);
  KeyValues::KeyValues(&kv, "modifier_brewmaster_primal_split_duration");
  KeyValues::SetFloat(&kv, "duration", v96);
  v97 = CDOTA_Buff::GetAbility(this);
  v98 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v89, v98, v97, "modifier_brewmaster_primal_split_duration", &kv, 0);
  v99 = CDOTA_Buff::GetCaster(this);
  v100 = CBaseEntity::GetAbsAngles(v99);
  v101 = v100->z + 0.0;
  v102 = v100->x + 0.0;
  *(&criteria._vptr_CResponseCriteriaSet + 1) = v100->y + 0.0;
  *&criteria.m_Lookup.m_LessFunc = v101;
  *&criteria._vptr_CResponseCriteriaSet = v102;
  AngleVectors(&criteria, &vDirection_0, 0, 0);
  v103 = 0x42C80000u;
  v104 = LODWORD(vDirection_0.y);
  *v104.m128i_i32 = vDirection_0.y * 100.0;
  *v103.m128i_i32 = 100.0 * vDirection_0.z;
  pEconItemOwnere = vDirection_0.x * 100.0;
  LODWORD(v97) = _mm_cvtsi128_si32(v104);
  v105 = COERCE_FLOAT(_mm_cvtsi128_si32(v103));
  v106 = CDOTA_Buff::GetCaster(this);
  v107 = CBaseEntity::GetAbsOrigin(v106);
  v108 = pEconItemOwnere + v107->x;
  v145.z = v105 + v107->z;
  vDirection.y = *&v97 + v107->y;
  vDirection.x = v108;
  *&v145.x = *&vDirection.x;
  vDirection.z = v145.z;
  FindClearSpaceForUnit(v89, v145, 1);
  v109 = CDOTA_Buff::GetCaster(this);
  v110 = CBaseEntity::GetAbsAngles(v109);
  CBaseEntity::SetAbsAngles(v89, v110);
  v111 = 0;
  while ( v111 < CDOTA_BaseNPC::GetAbilityCount(v89) )
  {
    if ( CDOTA_BaseNPC::GetAbilityByIndex(v89, v111) == 0 )
      goto LABEL_63;
    v112 = CDOTA_Buff::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(v112)
      && (v117 = CDOTA_BaseNPC::GetAbilityByIndex(v89, v111)->m_pAbilityData) != 0
      && (v118 = v117->m_pszAbilityName, v117->m_pszAbilityName != 0)
      && (v118 == "brewmaster_thunder_clap" || strcmp(v118, "brewmaster_thunder_clap") == 0) )
    {
      if ( iClapLevel <= 0 )
        goto LABEL_63;
      for ( n = 0; n != iClapLevel; ++n )
      {
        v120 = CDOTA_BaseNPC::GetAbilityByIndex(v89, v111);
        CDOTABaseAbility::UpgradeAbility(v120, 0);
      }
      ++v111;
    }
    else
    {
      v113 = CDOTA_BaseNPC::GetAbilityByIndex(v89, v111)->m_pAbilityData;
      if ( v113 != 0 )
      {
        v114 = v113->m_pszAbilityName;
        if ( v113->m_pszAbilityName != 0
          && (v114 == "brewmaster_thunder_clap" || strcmp(v114, "brewmaster_thunder_clap") == 0) )
        {
LABEL_63:
          ++v111;
          continue;
        }
      }
      for ( ii = 0; ii < CDOTA_Buff::GetAbility(this)->m_iLevel.m_Value + iScepterAbilityBonus; ++ii )
      {
        v116 = CDOTA_BaseNPC::GetAbilityByIndex(v89, v111);
        CDOTABaseAbility::UpgradeAbility(v116, 0);
      }
      ++v111;
    }
  }
  KeyValues::~KeyValues(&kv);
LABEL_77:
  KeyValues::KeyValues(&kv, "modifier_brewmaster_primal_split");
  KeyValues::SetPtr(&kv, "target1", v89);
  KeyValues::SetPtr(&kv, "target2", v51);
  KeyValues::SetPtr(&kv, "target3", UnitByName);
  KeyValues::SetFloat(&kv, "duration", v121);
  v122 = CDOTA_Buff::GetAbility(this);
  v123 = CDOTA_Buff::GetCaster(this);
  v124 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v124, v123, v122, "modifier_brewmaster_primal_split", &kv, 0);
  CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
  CResponseCriteriaSet::AppendCriteria(&criteria, "primalstate", "1", 1.0);
  m_pSpeech = CDOTA_Buff::GetCaster(this)->m_Speech.m_pSpeech;
  if ( m_pSpeech != 0 )
    CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 0, 0, 0, 0, 0);
  CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Brewmaster_PrimalSplitDelay::CheckState  (line 1410, @0x0000000002b342f0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Brewmaster_PrimalSplitDelay::CheckState(
        CDOTA_Modifier_Brewmaster_PrimalSplitDelay *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x80884102uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFF7F77BEFDLL;
}


// CDOTA_Modifier_Brewmaster_PrimalSplitDuration::~CDOTA_Modifier_Brewmaster_PrimalSplitDuration  (line 1425, @0x0000000002b9b9f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Brewmaster_PrimalSplitDuration::~CDOTA_Modifier_Brewmaster_PrimalSplitDuration(
        CDOTA_Modifier_Brewmaster_PrimalSplitDuration *const this)
{
  this->_vptr_CDOTA_Buff = &off_44A5490;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Brewmaster_PrimalSplitDuration::~CDOTA_Modifier_Brewmaster_PrimalSplitDuration  (line 1425, @0x0000000002b9ba10, libserver.so)  // inlines: ~CDOTA_Modifier_Brewmaster_PrimalSplitDuration
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Brewmaster_PrimalSplitDuration::~CDOTA_Modifier_Brewmaster_PrimalSplitDuration(
        CDOTA_Modifier_Brewmaster_PrimalSplitDuration *const this)
{
  this->_vptr_CDOTA_Buff = &off_44A5490;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Brewmaster_PrimalSplitDuration::IsPurgable  (line 1432, @0x0000000002b8dbb0, libserver.so)
bool __fastcall CDOTA_Modifier_Brewmaster_PrimalSplitDuration::IsPurgable(
        CDOTA_Modifier_Brewmaster_PrimalSplitDuration *const this)
{
  return 0;
}


// CDOTA_Modifier_Brewmaster_PrimalSplitDuration::DeclareFunctions  (line 1444, @0x0000000002b34320, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Brewmaster_PrimalSplitDuration::GetUnitLifetimeFraction(CModifierParams const&), CDOTA_Modifier_Brewmaster_PrimalSplitDuration::GetModifierPhysicalArmorBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Brewmaster_PrimalSplitDuration::DeclareFunctions(
        CDOTA_Modifier_Brewmaster_PrimalSplitDuration *const this)
{
  this->m_Functions[157].__pfn = CDOTA_Modifier_Brewmaster_PrimalSplitDuration::GetUnitLifetimeFraction;
  this->m_Functions[157].__delta = 0;
  this->m_Functions[45].__delta = 0;
  this->m_Functions[45].__pfn = CDOTA_Modifier_Brewmaster_PrimalSplitDuration::GetModifierPhysicalArmorBonus;
}


// CDOTA_Modifier_Brewmaster_PrimalSplitDuration::GetUnitLifetimeFraction  (line 1452, @0x0000000002b34360, libserver.so)  // inlines: DOTAGameRules, GetGameTime
ModifierVariant_t __fastcall CDOTA_Modifier_Brewmaster_PrimalSplitDuration::GetUnitLifetimeFraction(
        CDOTA_Modifier_Brewmaster_PrimalSplitDuration *const this,
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


// CDOTA_Modifier_Brewmaster_PrimalSplitDuration::GetModifierPhysicalArmorBonus  (line 1457, @0x0000000002b343d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Brewmaster_PrimalSplitDuration::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Brewmaster_PrimalSplitDuration *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->value;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Brewmaster_PrimalSplitDuration::OnCreated  (line 1462, @0x0000000002b69290, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_brewmaster"
void __fastcall CDOTA_Modifier_Brewmaster_PrimalSplitDuration::OnCreated(
        CDOTA_Modifier_Brewmaster_PrimalSplitDuration *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  this->value = 0;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_brewmaster", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->value = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
}


// CDOTA_Modifier_Brewmaster_PrimalSplit::~CDOTA_Modifier_Brewmaster_PrimalSplit  (line 1479, @0x0000000002b9b970, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Brewmaster_PrimalSplit::~CDOTA_Modifier_Brewmaster_PrimalSplit(
        CDOTA_Modifier_Brewmaster_PrimalSplit *const this)
{
  this->_vptr_CDOTA_Buff = &off_44A57B0;
  this->_vptr_CHorizontalMotionController = &off_44A5AA8;
  this->_vptr_CVerticalMotionController = &off_44A5AE8;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Brewmaster_PrimalSplit::~CDOTA_Modifier_Brewmaster_PrimalSplit  (line 1479, @0x0000000002b9b9a0, libserver.so)  // inlines: ~CDOTA_Modifier_Brewmaster_PrimalSplit
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Brewmaster_PrimalSplit::~CDOTA_Modifier_Brewmaster_PrimalSplit(
        CDOTA_Modifier_Brewmaster_PrimalSplit *const this)
{
  this->_vptr_CDOTA_Buff = &off_44A57B0;
  this->_vptr_CHorizontalMotionController = &off_44A5AA8;
  this->_vptr_CVerticalMotionController = &off_44A5AE8;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Brewmaster_PrimalSplit::IsHidden  (line 1489, @0x0000000002b8dbc0, libserver.so)
bool __fastcall CDOTA_Modifier_Brewmaster_PrimalSplit::IsHidden(CDOTA_Modifier_Brewmaster_PrimalSplit *const this)
{
  return 1;
}


// CDOTA_Modifier_Brewmaster_PrimalSplit::IsHorizontalMotionValidToApply  (line 1500, @0x0000000002b8dbd0, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Brewmaster_PrimalSplit::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_Brewmaster_PrimalSplit *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Brewmaster_PrimalSplit::IsVerticalMotionValidToApply  (line 1501, @0x0000000002b8dc00, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Brewmaster_PrimalSplit::IsVerticalMotionValidToApply(
        CDOTA_Modifier_Brewmaster_PrimalSplit *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Brewmaster_PrimalSplit::IsMotionController  (line 1503, @0x0000000002b8dc30, libserver.so)
bool __fastcall CDOTA_Modifier_Brewmaster_PrimalSplit::IsMotionController(
        CDOTA_Modifier_Brewmaster_PrimalSplit *const this)
{
  return 1;
}


// CDOTA_Modifier_Brewmaster_PrimalSplit::OnCreated  (line 1520, @0x0000000002b4a910, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, operator CBaseEntity*, operator CEntityInstance*, operator!=, operator=
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::ApplyHorizontalMotionController, CDOTA_Buff::Destroy, CDOTALocomotor::ApplyVerticalMotionController, KeyValues::GetPtr, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CBaseEntity::AddEffects, CDOTA_BaseNPC::UnitEmitSound
// strings: "Hero_Brewmaster.PrimalSplit.Spawn"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Brewmaster_PrimalSplit::OnCreated(
        CDOTA_Modifier_Brewmaster_PrimalSplit *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTALocomotor *v7; // rax
  _QWORD *Ptr; // rax
  __int64 v9; // rdx
  int v10; // eax
  __int16 v11; // cx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  __int16 v15; // cx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  __int16 v19; // cx
  CEntityInstance *m_pInstance; // r13
  CDOTABaseAbility *Ability; // rax
  uint32 m_Index; // edx
  CDOTABaseAbility *v23; // r12
  CConcreteEntityList *v24; // rax
  CEntityIdentity *v25; // rcx
  CEntityIdentity *v26; // rcx
  int vptr_IHandleEntity; // edx
  CEntityInstance *v28; // rsi
  CEntityIdentity *v29; // rcx
  CEntityIdentity *v30; // rcx
  uint32 v31; // edx
  CEntityInstance *v32; // r13
  CEntityIdentity *v33; // rcx
  CEntityIdentity *v34; // rcx
  int vptr_IHandleEntity_high; // edx
  CEntityInstance *v36; // rsi
  CEntityIdentity *v37; // rcx
  CEntityIdentity *v38; // rcx
  uint32 v39; // edx
  CEntityInstance *v40; // r13
  CEntityIdentity *v41; // rcx
  CEntityIdentity *v42; // rcx
  int v43; // edx
  CEntityInstance *v44; // rsi
  CEntityIdentity *v45; // rax
  CEntityIdentity *v46; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v48; // rax
  CEntityIdentity *v49; // rdx
  int v50; // eax
  __int16 v51; // cx
  CEntityIdentity *v52; // rdx
  int v53; // eax
  __int16 v54; // cx
  CEntityIdentity *m_pEntity; // rdx
  int v56; // eax
  __int16 v57; // cx

  Parent = CDOTA_Buff::GetParent(this);
  v5 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v5, &this->CHorizontalMotionController, 0)
    && (v6 = CDOTA_Buff::GetParent(this),
        v7 = (*(v6->_vptr_IHandleEntity + 376))(v6),
        CDOTALocomotor::ApplyVerticalMotionController(v7, &this->CVerticalMotionController, 0)) )
  {
    Ptr = KeyValues::GetPtr(pKV, "target1", 0);
    if ( Ptr != 0 && (v9 = Ptr[1]) != 0 )
    {
      v10 = (*(v9 + 16) >> 15) - (*(v9 + 48) & 1);
      v11 = 0x7FFF;
      if ( *(v9 + 16) != -1 )
        v11 = *(v9 + 16) & 0x7FFF;
      LOWORD(this->m_hTarget.m_Index) = v11 | this->m_hTarget.m_Index & 0x8000;
      this->m_hTarget.m_Index = (v10 << 15) | this->m_hTarget.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hTarget.m_Index = -1;
    }
    v12 = KeyValues::GetPtr(pKV, "target2", 0);
    if ( v12 != 0 && (v13 = v12[1]) != 0 )
    {
      v14 = (*(v13 + 16) >> 15) - (*(v13 + 48) & 1);
      v15 = 0x7FFF;
      if ( *(v13 + 16) != -1 )
        v15 = *(v13 + 16) & 0x7FFF;
      LOWORD(this->m_hSecondaryTarget.m_Index) = v15 | this->m_hSecondaryTarget.m_Index & 0x8000;
      this->m_hSecondaryTarget.m_Index = (v14 << 15) | this->m_hSecondaryTarget.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hSecondaryTarget.m_Index = -1;
    }
    v16 = KeyValues::GetPtr(pKV, "target3", 0);
    if ( v16 != 0 && (v17 = v16[1]) != 0 )
    {
      v18 = (*(v17 + 16) >> 15) - (*(v17 + 48) & 1);
      v19 = 0x7FFF;
      if ( *(v17 + 16) != -1 )
        v19 = *(v17 + 16) & 0x7FFF;
      LOWORD(this->m_hTertiaryTarget.m_Index) = v19 | this->m_hTertiaryTarget.m_Index & 0x8000;
      this->m_hTertiaryTarget.m_Index = (v18 << 15) | this->m_hTertiaryTarget.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hTertiaryTarget.m_Index = -1;
    }
    m_pInstance = 0;
    Ability = CDOTA_Buff::GetAbility(this);
    m_Index = this->m_hTarget.m_Index;
    v23 = Ability;
    v24 = CEntityHandle::gm_pEntityList;
    if ( m_Index + 2 > 1 )
    {
      v25 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
      if ( v25 != 0 )
      {
        v26 = &v25[this->m_hTarget.m_Index & 0x1FF];
        if ( v26 != 0 && m_Index == v26->m_EHandle.m_Index )
          m_pInstance = v26->m_pInstance;
      }
    }
    vptr_IHandleEntity = v23[1]._vptr_IHandleEntity;
    v28 = 0;
    if ( (vptr_IHandleEntity + 2) > 1 )
    {
      v29 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v23[1]._vptr_IHandleEntity) >> 9) & 0x3F];
      if ( v29 != 0 )
      {
        v30 = &v29[v23[1]._vptr_IHandleEntity & 0x1FF];
        if ( v30 != 0 && vptr_IHandleEntity == v30->m_EHandle.m_Index )
          v28 = v30->m_pInstance;
      }
    }
    if ( m_pInstance != v28 )
    {
      (*(v23->_vptr_IHandleEntity + 22))(v23, 912, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      if ( m_pInstance != 0 && (m_pEntity = m_pInstance->m_pEntity) != 0 )
      {
        v56 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        if ( m_pEntity->m_EHandle.m_Index == -1 )
          v57 = 0x7FFF;
        else
          v57 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(v23[1]._vptr_IHandleEntity) = v57 | v23[1]._vptr_IHandleEntity & 0x8000;
        LODWORD(v23[1]._vptr_IHandleEntity) = (v56 << 15) | v23[1]._vptr_IHandleEntity & 0x7FFF;
        v24 = CEntityHandle::gm_pEntityList;
      }
      else
      {
        LODWORD(v23[1]._vptr_IHandleEntity) = -1;
        v24 = CEntityHandle::gm_pEntityList;
      }
    }
    v31 = this->m_hSecondaryTarget.m_Index;
    v32 = 0;
    if ( v31 + 2 > 1 )
    {
      v33 = v24->m_pIdentityChunks[(LOWORD(this->m_hSecondaryTarget.m_Index) >> 9) & 0x3F];
      if ( v33 != 0 )
      {
        v34 = &v33[this->m_hSecondaryTarget.m_Index & 0x1FF];
        if ( v34 != 0 && v31 == v34->m_EHandle.m_Index )
          v32 = v34->m_pInstance;
      }
    }
    vptr_IHandleEntity_high = HIDWORD(v23[1]._vptr_IHandleEntity);
    v36 = 0;
    if ( (vptr_IHandleEntity_high + 2) > 1 )
    {
      v37 = v24->m_pIdentityChunks[(WORD2(v23[1]._vptr_IHandleEntity) >> 9) & 0x3F];
      if ( v37 != 0 )
      {
        v38 = &v37[WORD2(v23[1]._vptr_IHandleEntity) & 0x1FF];
        if ( v38 != 0 && vptr_IHandleEntity_high == v38->m_EHandle.m_Index )
          v36 = v38->m_pInstance;
      }
    }
    if ( v32 != v36 )
    {
      (*(v23->_vptr_IHandleEntity + 22))(v23, 916, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      if ( v32 != 0 && (v49 = v32->m_pEntity) != 0 )
      {
        v50 = (v49->m_EHandle.m_Index >> 15) - (v49->m_flags & 1);
        if ( v49->m_EHandle.m_Index == -1 )
          v51 = 0x7FFF;
        else
          v51 = v49->m_EHandle.m_Index & 0x7FFF;
        WORD2(v23[1]._vptr_IHandleEntity) = v51 | WORD2(v23[1]._vptr_IHandleEntity) & 0x8000;
        HIDWORD(v23[1]._vptr_IHandleEntity) = (v50 << 15) | HIDWORD(v23[1]._vptr_IHandleEntity) & 0x7FFF;
        v24 = CEntityHandle::gm_pEntityList;
      }
      else
      {
        HIDWORD(v23[1]._vptr_IHandleEntity) = -1;
        v24 = CEntityHandle::gm_pEntityList;
      }
    }
    v39 = this->m_hTertiaryTarget.m_Index;
    v40 = 0;
    if ( v39 + 2 > 1 )
    {
      v41 = v24->m_pIdentityChunks[(LOWORD(this->m_hTertiaryTarget.m_Index) >> 9) & 0x3F];
      if ( v41 != 0 )
      {
        v42 = &v41[this->m_hTertiaryTarget.m_Index & 0x1FF];
        if ( v42 != 0 && v39 == v42->m_EHandle.m_Index )
          v40 = v42->m_pInstance;
      }
    }
    v43 = v23[1].m_pEntity;
    v44 = 0;
    if ( (v43 + 2) > 1 )
    {
      v45 = v24->m_pIdentityChunks[(LOWORD(v23[1].m_pEntity) >> 9) & 0x3F];
      if ( v45 != 0 )
      {
        v46 = &v45[v23[1].m_pEntity & 0x1FF];
        if ( v46 != 0 && v43 == v46->m_EHandle.m_Index )
          v44 = v46->m_pInstance;
      }
    }
    if ( v40 != v44 )
    {
      (*(v23->_vptr_IHandleEntity + 22))(v23, 920, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      if ( v40 != 0 && (v52 = v40->m_pEntity) != 0 )
      {
        v53 = (v52->m_EHandle.m_Index >> 15) - (v52->m_flags & 1);
        if ( v52->m_EHandle.m_Index == -1 )
          v54 = 0x7FFF;
        else
          v54 = v52->m_EHandle.m_Index & 0x7FFF;
        LOWORD(v23[1].m_pEntity) = v54 | v23[1].m_pEntity & 0x8000;
        LODWORD(v23[1].m_pEntity) = (v53 << 15) | v23[1].m_pEntity & 0x7FFF;
      }
      else
      {
        LODWORD(v23[1].m_pEntity) = -1;
      }
    }
    Caster = CDOTA_Buff::GetCaster(this);
    CBaseEntity::AddEffects(Caster, 32);
    v48 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v48, "Hero_Brewmaster.PrimalSplit.Spawn", 0.0, 0, 0);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Brewmaster_PrimalSplit::OnDestroy  (line 1576, @0x0000000002b49ca0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, MarkPVSInformationDirty, RemoveEffects, SpeakConcept, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator==<CBaseEntity>
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController, CDOTALocomotor::RemoveVerticalMotionController, CDOTA_Buff::GetCaster, CBaseEntity::DispatchUpdateTransmitState, CDOTA_BaseNPC::UnitEmitSound, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_Speech::SpeakConcept, CDOTA_BaseNPC::ForceKill, CDOTA_BaseNPC::Stop, CResponseCriteriaSet::~CResponseCriteriaSet (15 total)
// strings: "Hero_Brewmaster.PrimalSplit.Return", "primalstate"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Brewmaster_PrimalSplit::OnDestroy(CDOTA_Modifier_Brewmaster_PrimalSplit *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTALocomotor *v5; // rax
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v7; // rax
  CDOTA_Speech *m_pSpeech; // rdi
  uint32 m_Index; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *v12; // rax
  uint32 v13; // ecx
  CConcreteEntityList *v14; // rax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  uint32 v17; // edx
  CEntityIdentity *v18; // rcx
  CEntityIdentity *v19; // rcx
  uint32 v20; // edx
  CEntityIdentity *v21; // rax
  CEntityIdentity *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  CDOTA_BaseNPC *v24; // rdi
  CDOTA_BaseNPC *v25; // rdi
  CDOTA_BaseNPC *m_pInstance; // r13
  const QAngle *AbsAngles; // r14
  CDOTA_BaseNPC *v28; // rax
  CResponseCriteriaSet criteria; // [rsp+10h] [rbp-60h] BYREF

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveHorizontalMotionController(v3, &this->CHorizontalMotionController);
  v4 = CDOTA_Buff::GetParent(this);
  v5 = (*(v4->_vptr_IHandleEntity + 376))(v4);
  CDOTALocomotor::RemoveVerticalMotionController(v5, &this->CVerticalMotionController);
  Caster = CDOTA_Buff::GetCaster(this);
  (*(Caster->_vptr_IHandleEntity + 188))(Caster, Caster->m_fEffects.m_Value & 0xFFFFFFDF);
  Caster->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(Caster);
  v7 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v7, "Hero_Brewmaster.PrimalSplit.Return", 0.0, 0, 0);
  CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
  CResponseCriteriaSet::AppendCriteria(&criteria, "primalstate", "2", 1.0);
  m_pSpeech = CDOTA_Buff::GetCaster(this)->m_Speech.m_pSpeech;
  if ( m_pSpeech != 0 )
    CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 0, 0, 0, 0, 0);
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) == 0
    || (v11 = &v10[this->m_hTarget.m_Index & 0x1FF]) == 0
    || m_Index != v11->m_EHandle.m_Index
    || v11->m_pInstance == 0
    || (*(v11->m_pInstance->_vptr_IHandleEntity + 139))(v11->m_pInstance) == 0 )
  {
    v12 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::ForceKill(v12, 0);
  }
  v13 = this->m_hTarget.m_Index;
  v14 = CEntityHandle::gm_pEntityList;
  if ( v13 + 2 > 1 )
  {
    v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v15 != 0 )
    {
      v16 = &v15[this->m_hTarget.m_Index & 0x1FF];
      if ( v16 != 0 && v13 == v16->m_EHandle.m_Index )
      {
        m_pInstance = v16->m_pInstance;
        if ( v16->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          AbsAngles = CBaseEntity::GetAbsAngles(v16->m_pInstance);
          v28 = CDOTA_Buff::GetCaster(this);
          CBaseEntity::SetAbsAngles(v28, AbsAngles);
          CDOTA_BaseNPC::ForceKill(m_pInstance, 0);
          v14 = CEntityHandle::gm_pEntityList;
        }
      }
    }
  }
  v17 = this->m_hSecondaryTarget.m_Index;
  if ( v17 + 2 > 1 )
  {
    v18 = v14->m_pIdentityChunks[(LOWORD(this->m_hSecondaryTarget.m_Index) >> 9) & 0x3F];
    if ( v18 != 0 )
    {
      v19 = &v18[this->m_hSecondaryTarget.m_Index & 0x1FF];
      if ( v19 != 0 && v17 == v19->m_EHandle.m_Index )
      {
        v25 = v19->m_pInstance;
        if ( v19->m_pInstance != 0 && v25->m_bIsDOTANPC )
        {
          CDOTA_BaseNPC::ForceKill(v25, 0);
          v14 = CEntityHandle::gm_pEntityList;
        }
      }
    }
  }
  v20 = this->m_hTertiaryTarget.m_Index;
  if ( v20 + 2 > 1 )
  {
    v21 = v14->m_pIdentityChunks[(LOWORD(this->m_hTertiaryTarget.m_Index) >> 9) & 0x3F];
    if ( v21 != 0 )
    {
      v22 = &v21[this->m_hTertiaryTarget.m_Index & 0x1FF];
      if ( v22 != 0 && v20 == v22->m_EHandle.m_Index )
      {
        v24 = v22->m_pInstance;
        if ( v22->m_pInstance != 0 && v24->m_bIsDOTANPC )
          CDOTA_BaseNPC::ForceKill(v24, 0);
      }
    }
  }
  v23 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::Stop(v23);
  CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
}


// CDOTA_Modifier_Brewmaster_PrimalSplit::CheckState  (line 1631, @0x0000000002b343f0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Brewmaster_PrimalSplit::CheckState(
        CDOTA_Modifier_Brewmaster_PrimalSplit *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x80844120uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFF7F7BBEDFLL;
}


// CDOTA_Modifier_Brewmaster_PrimalSplit::DeclareFunctions  (line 1645, @0x0000000002b34420, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Brewmaster_PrimalSplit::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_Brewmaster_PrimalSplit::DeclareFunctions(
        CDOTA_Modifier_Brewmaster_PrimalSplit *const this)
{
  this->m_Functions[138].__pfn = CDOTA_Modifier_Brewmaster_PrimalSplit::OnDeath;
  this->m_Functions[138].__delta = 0;
}


// CDOTA_Modifier_Brewmaster_PrimalSplit::OnDeath  (line 1652, @0x0000000002b4cfe0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CDOTABaseAbility*, operator CEntityInstance*, operator!=<CBaseEntity>, operator=
// calls: CDOTA_Buff::GetCaster, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::Kill
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Brewmaster_PrimalSplit::OnDeath(
        CDOTA_Modifier_Brewmaster_PrimalSplit *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // edx
  CEntityIdentity *v4; // rcx
  CEntityIdentity *v5; // rcx
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 v7; // edx
  CEntityIdentity *v8; // rcx
  CEntityIdentity *v9; // rcx
  CDOTA_BaseNPC *v10; // r13
  uint32 v11; // ecx
  CEntityIdentity *v12; // rax
  CEntityIdentity *v13; // rax
  CEntityInstance *v15; // rax
  CDOTA_BaseNPC *v16; // r13
  CDOTABaseAbility *Ability; // r12
  CDOTA_BaseNPC *v18; // rax
  CEntityInstance *v19; // rax
  CDOTA_BaseNPC *v20; // r13
  CDOTABaseAbility *v21; // r12
  CDOTA_BaseNPC *v22; // rax
  CEntityInstance *v23; // rax
  CDOTA_BaseNPC *v24; // r13
  CDOTABaseAbility *v25; // r12
  CDOTA_BaseNPC *v26; // rax
  CEntityInstance *v27; // rax
  const CModifierParams *v28; // rsi
  char v29; // al
  CEntityInstance *v30; // rax
  const CEntityHandle *p_ability; // rsi
  char v32; // al
  CDOTABaseAbility *v33; // r14
  CDOTA_BaseNPC *Caster; // rax
  const CModifierParams *paramsb; // [rsp+8h] [rbp-28h]

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
  v7 = params->hattacker.m_Index;
  if ( v7 + 2 <= 1
    || (v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v9 = &v8[params->hattacker.m_Index & 0x1FF]) == 0
    || v7 != v9->m_EHandle.m_Index
    || (v10 = v9->m_pInstance, v9->m_pInstance == 0)
    || !v10->m_bIsDOTANPC )
  {
    v10 = 0;
  }
  if ( m_pInstance != 0 )
  {
    v11 = this->m_hTarget.m_Index;
    if ( v11 + 2 > 1 )
    {
      v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
      if ( v12 != 0 )
      {
        v13 = &v12[this->m_hTarget.m_Index & 0x1FF];
        if ( v13 != 0 && v11 == v13->m_EHandle.m_Index && m_pInstance == v13->m_pInstance )
        {
          v27 = CEntityHandle::operator CEntityInstance *(&this->m_hSecondaryTarget);
          v28 = params;
          if ( v27 != 0 && (v29 = (*(v27->_vptr_IHandleEntity + 139))(v27, params), v28 = params, v29 != 0) )
          {
            this->m_hTarget.m_Index = this->m_hSecondaryTarget.m_Index;
          }
          else
          {
            paramsb = v28;
            v30 = CEntityHandle::operator CEntityInstance *(&this->m_hTertiaryTarget);
            p_ability = &paramsb->ability;
            if ( v30 != 0 && (v32 = (*(v30->_vptr_IHandleEntity + 139))(v30), p_ability = &paramsb->ability, v32 != 0) )
            {
              this->m_hTarget.m_Index = this->m_hTertiaryTarget.m_Index;
            }
            else
            {
              v33 = CEntityHandle::operator CEntityInstance *(p_ability);
              Caster = CDOTA_Buff::GetCaster(this);
              CDOTA_BaseNPC::Kill(Caster, v33, v10, 0.0, 0);
            }
          }
        }
      }
    }
    if ( CDOTA_Buff::GetCaster(this) == m_pInstance )
    {
      v15 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
      if ( v15 != 0 && BYTE3(v15[7]._vptr_IHandleEntity) != 0 )
        v16 = v15;
      else
        v16 = 0;
      Ability = CDOTA_Buff::GetAbility(this);
      v18 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::Kill(v18, Ability, v16, 0.0, 0);
      v19 = CEntityHandle::operator CEntityInstance *(&this->m_hSecondaryTarget);
      if ( v19 != 0 && BYTE3(v19[7]._vptr_IHandleEntity) != 0 )
        v20 = v19;
      else
        v20 = 0;
      v21 = CDOTA_Buff::GetAbility(this);
      v22 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::Kill(v22, v21, v20, 0.0, 0);
      v23 = CEntityHandle::operator CEntityInstance *(&this->m_hTertiaryTarget);
      if ( v23 != 0 && BYTE3(v23[7]._vptr_IHandleEntity) != 0 )
        v24 = v23;
      else
        v24 = 0;
      v25 = CDOTA_Buff::GetAbility(this);
      v26 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::Kill(v26, v25, v24, 0.0, 0);
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Brewmaster_PrimalSplit::UpdateHorizontalMotion  (line 1691, @0x0000000002b4f290, libserver.so)
// calls: CDOTA_Modifier_Brewmaster_PrimalSplit::UpdateMotion
void __fastcall CDOTA_Modifier_Brewmaster_PrimalSplit::UpdateHorizontalMotion(
        CDOTA_Modifier_Brewmaster_PrimalSplit *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  CDOTA_Modifier_Brewmaster_PrimalSplit::UpdateMotion(this, me);
}


// CDOTA_Modifier_Brewmaster_PrimalSplit::UpdateVerticalMotion  (line 1698, @0x0000000002b4f2b0, libserver.so)
// calls: CDOTA_Modifier_Brewmaster_PrimalSplit::UpdateMotion
void __fastcall CDOTA_Modifier_Brewmaster_PrimalSplit::UpdateVerticalMotion(
        CDOTA_Modifier_Brewmaster_PrimalSplit *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  CDOTA_Modifier_Brewmaster_PrimalSplit::UpdateMotion(this, me);
}


// CDOTA_Modifier_Brewmaster_PrimalSplit::UpdateMotion  (line 1705, @0x0000000002b4f210, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, IndexToIdentity, IsValid, LookupEntity, operator bool
// calls: CBaseEntity::GetAbsOrigin, CBaseEntity::SetAbsOrigin
// callers: CDOTA_Modifier_Brewmaster_PrimalSplit::UpdateHorizontalMotion, CDOTA_Modifier_Brewmaster_PrimalSplit::UpdateVerticalMotion
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Brewmaster_PrimalSplit::UpdateMotion(
        CDOTA_Modifier_Brewmaster_PrimalSplit *const this,
        CDOTA_BaseNPC *me)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v5; // rdx
  const Vector *AbsOrigin; // rax

  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v5 = &v3[this->m_hTarget.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        AbsOrigin = CBaseEntity::GetAbsOrigin(v5->m_pInstance);
        CBaseEntity::SetAbsOrigin(me, AbsOrigin);
      }
    }
  }
}


// CDOTA_Ability_Brewmaster_HurlBoulder::~CDOTA_Ability_Brewmaster_HurlBoulder  (line 1722, @0x0000000002ba0590, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Brewmaster_HurlBoulder::~CDOTA_Ability_Brewmaster_HurlBoulder(
        CDOTA_Ability_Brewmaster_HurlBoulder *const this)
{
  this->_vptr_IHandleEntity = &off_44A5BB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Brewmaster_HurlBoulder::~CDOTA_Ability_Brewmaster_HurlBoulder  (line 1722, @0x0000000002ba05b0, libserver.so)  // inlines: ~CDOTA_Ability_Brewmaster_HurlBoulder
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Brewmaster_HurlBoulder::~CDOTA_Ability_Brewmaster_HurlBoulder(
        CDOTA_Ability_Brewmaster_HurlBoulder *const this)
{
  this->_vptr_IHandleEntity = &off_44A5BB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Brewmaster_HurlBoulder::Schema_DynamicBinding  (line 1724, @0x0000000002b8dc40, libserver.so)
// globals: CDOTA_Ability_Brewmaster_HurlBoulder::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Brewmaster_HurlBoulder::Schema_DynamicBinding(
        const CDOTA_Ability_Brewmaster_HurlBoulder *const this)
{
  return CDOTA_Ability_Brewmaster_HurlBoulder::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_HurlBoulder::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1724, @0x0000000002b8dc50, libserver.so)
// globals: CDOTA_Ability_Brewmaster_HurlBoulder::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Brewmaster_HurlBoulder::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Brewmaster_HurlBoulder::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Brewmaster_HurlBoulder::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_HurlBoulder::CEntityInstanceEntityClass::DestructInstance  (line 1724, @0x0000000002b8dc60, libserver.so)  // inlines: Destruct<CDOTA_Ability_Brewmaster_HurlBoulder>
void __fastcall CDOTA_Ability_Brewmaster_HurlBoulder::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Brewmaster_HurlBoulder::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Brewmaster_HurlBoulder::CEntityInstanceEntityClass::FreeInstance  (line 1724, @0x0000000002b8dc80, libserver.so)
void __fastcall CDOTA_Ability_Brewmaster_HurlBoulder::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Brewmaster_HurlBoulder::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Brewmaster_HurlBoulder::CEntityInstanceEntityClass::CanAllocate  (line 1724, @0x0000000002b8dca0, libserver.so)
bool __fastcall CDOTA_Ability_Brewmaster_HurlBoulder::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Brewmaster_HurlBoulder::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Brewmaster_HurlBoulder::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1724, @0x0000000002b8dcb0, libserver.so)
// globals: CDOTA_Ability_Brewmaster_HurlBoulder::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Brewmaster_HurlBoulder::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Brewmaster_HurlBoulder::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Brewmaster_HurlBoulder::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_HurlBoulder::CEntityInstanceEntityClass::AllocateInstance  (line 1724, @0x0000000002b96e60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Brewmaster_HurlBoulder::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Brewmaster_HurlBoulder::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Brewmaster_HurlBoulder::CEntityInstanceEntityClass::ConstructInstance  (line 1724, @0x0000000002b9cba0, libserver.so)  // inlines: CDOTA_Ability_Brewmaster_HurlBoulder, Construct<CDOTA_Ability_Brewmaster_HurlBoulder>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Brewmaster_HurlBoulder::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Brewmaster_HurlBoulder::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44A5BB0;
  }
  return p;
}


// CDOTA_Ability_Brewmaster_HurlBoulder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1724, @0x0000000002ba9cb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Brewmaster_HurlBoulder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Brewmaster_HurlBoulder::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Brewmaster_HurlBoulder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1724, @0x0000000002ba9cd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Brewmaster_HurlBoulder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Brewmaster_HurlBoulder::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Brewmaster_HurlBoulder::GetEntityClassInternal  (line 1724, @0x0000000002bc57b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "brewmaster_earth_hurl_boulder", "CDOTA_Ability_Brewmaster_HurlBoulder"
// globals: `guard variable for'CDOTA_Ability_Brewmaster_HurlBoulder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_HurlBoulderClass, CDOTA_Ability_Brewmaster_HurlBoulder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_HurlBoulderClass, __dso_handle, CDOTA_Ability_Brewmaster_HurlBoulder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Brewmaster_HurlBoulder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_HurlBoulderClassInfo, CDOTA_Ability_Brewmaster_HurlBoulder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_HurlBoulderClassInfo
CEntityClass *__cdecl CDOTA_Ability_Brewmaster_HurlBoulder::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Brewmaster_HurlBoulder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_HurlBoulderClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Brewmaster_HurlBoulder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_HurlBoulderClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Brewmaster_HurlBoulder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_HurlBoulderClass);
    CDOTA_Ability_Brewmaster_HurlBoulder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_HurlBoulderClass._vptr_CEntityClass = off_44A5B30;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Brewmaster_HurlBoulder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_HurlBoulderClass);
    __cxa_atexit(
      CDOTA_Ability_Brewmaster_HurlBoulder::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Brewmaster_HurlBoulder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_HurlBoulderClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Brewmaster_HurlBoulderClass != 0 )
    return &CDOTA_Ability_Brewmaster_HurlBoulder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_HurlBoulderClass;
  if ( `guard variable for'CDOTA_Ability_Brewmaster_HurlBoulder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_HurlBoulderClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Brewmaster_HurlBoulder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_HurlBoulderClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Brewmaster_HurlBoulder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_HurlBoulderClassInfo,
      "CDOTA_Ability_Brewmaster_HurlBoulder",
      "brewmaster_earth_hurl_boulder",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Brewmaster_HurlBoulder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_HurlBoulderClassInfo);
  }
  CDOTA_Ability_Brewmaster_HurlBoulder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_HurlBoulderClass.m_pClassInfo = &CDOTA_Ability_Brewmaster_HurlBoulder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_HurlBoulderClassInfo;
  CDOTA_Ability_Brewmaster_HurlBoulder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_HurlBoulderClass.m_pBaseClassInfo = CDOTA_Ability_Brewmaster_HurlBoulder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_HurlBoulderClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Brewmaster_HurlBoulderClass = &CDOTA_Ability_Brewmaster_HurlBoulder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_HurlBoulderClass;
  CDOTA_Ability_Brewmaster_HurlBoulder::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_HurlBoulderClassInfo.m_pClass = &CDOTA_Ability_Brewmaster_HurlBoulder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_HurlBoulderClass;
  CDOTA_Ability_Brewmaster_HurlBoulder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_HurlBoulderClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Brewmaster_HurlBoulderClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Brewmaster_HurlBoulder::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_HurlBoulderClass;
}


// CDOTA_Ability_Brewmaster_HurlBoulder::UpdateOnRemove  (line 1730, @0x0000000002ba22f0, libserver.so)
// calls: CDOTA_ProjectileManager::RemoveTrackingProjectileFromAbility, CDOTABaseAbility::UpdateOnRemove
void __fastcall CDOTA_Ability_Brewmaster_HurlBoulder::UpdateOnRemove(CDOTA_Ability_Brewmaster_HurlBoulder *const this)
{
  CDOTA_ProjectileManager::RemoveTrackingProjectileFromAbility(&g_DOTAProjectileManager, this);
  CDOTABaseAbility::UpdateOnRemove(this);
}


// CDOTA_Ability_Brewmaster_HurlBoulder::OnSpellStart  (line 1744, @0x0000000002b69300, libserver.so)  // inlines: CEntityHandle, CHandle, Color, GetEHandle, GetEntryIndex, GetSerialNumber, InState, IsInvulnerable, IsMagicImmune, Set, ToDOTABaseNPC, operator=, sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_ProjectileManager::CreateTrackingProjectile, CDOTA_BaseNPC::UnitEmitSound, __stack_chk_fail
// strings: "particles/units/heroes/hero_brewmaster/brewmaster_hurl_boulder.vpcf", "Brewmaster_Earth.Boulder.Cast"
void __fastcall CDOTA_Ability_Brewmaster_HurlBoulder::OnSpellStart(CDOTA_Ability_Brewmaster_HurlBoulder *const this)
{
  CBaseEntity *CursorTarget; // rax
  __int64 v3; // rdx
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v8; // cx
  CBaseEntity *v9; // rax
  CEntityIdentity *v10; // rdx
  __int16 v11; // cx
  CDOTA_BaseNPC *v12; // rax
  sTrackingProjectileCreateInfo info; // [rsp+0h] [rbp-80h] BYREF
  unsigned __int64 v14; // [rsp+68h] [rbp-18h]

  v14 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    v3 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
    if ( (v3 & 0x200) == 0 && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0 && (v3 & 0x100) == 0 )
    {
      info.bProvidesVision = 0;
      info.hSource.m_Index = -1;
      info.hTarget.m_Index = -1;
      info.colorGemColor = 0;
      info.pAttackRecord = 0;
      info.vSourceLoc.x = vec3_origin.x;
      y = vec3_origin.y;
      info.iMoveSpeed = 0;
      info.vSourceLoc.y = y;
      z = vec3_origin.z;
      info.iSourceAttachment = 1;
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
      info.pszEffectName = "particles/units/heroes/hero_brewmaster/brewmaster_hurl_boulder.vpcf";
      info.pAbility = this;
      info.iMoveSpeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
      Caster = CDOTABaseAbility::GetCaster(this);
      if ( Caster != 0 && (m_pEntity = Caster->m_pEntity) != 0 )
      {
        v8 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v8 & 0x7FFF;
      }
      else
      {
        info.hSource.m_Index = -1;
      }
      v9 = CDOTABaseAbility::GetCursorTarget(this);
      if ( v9 != 0 && (v10 = v9->m_pEntity) != 0 )
      {
        v11 = 0x7FFF;
        if ( v10->m_EHandle.m_Index != -1 )
          v11 = v10->m_EHandle.m_Index & 0x7FFF;
        info.hTarget.m_Index = (((v10->m_EHandle.m_Index >> 15) - (v10->m_flags & 1)) << 15) | v11 & 0x7FFF;
      }
      else
      {
        info.hTarget.m_Index = -1;
      }
      CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
    }
  }
  v12 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v12, "Brewmaster_Earth.Boulder.Cast", 0.0, 0, 0);
}


// CDOTA_Ability_Brewmaster_HurlBoulder::OnProjectileHit  (line 1765, @0x0000000002b76800, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, ApplyDamage, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_stun", "modifier_stunned", "Brewmaster_Earth.Boulder.Target"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Brewmaster_HurlBoulder::OnProjectileHit(
        CDOTA_Ability_Brewmaster_HurlBoulder *const this,
        _WORD *hTarget,
        const Vector *const vLocation)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  unsigned __int64 m_Value; // rax
  int LevelSpecialValue; // r14d
  float v10; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v12; // rax
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
          m_Value = m_pInstance->m_nUnitState64.m_Value;
          if ( (m_Value & 0x200) == 0
            && !m_pInstance->m_bIsWaitingToSpawn.m_Value
            && (m_Value & 0x100) == 0
            && !CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, this, 1) )
          {
            CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
            LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
            KeyValues::KeyValues(&kv, "modifier_stun");
            KeyValues::SetFloat(&kv, "duration", v10);
            Caster = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, this, "modifier_stunned", &kv, 0);
            v12 = CDOTABaseAbility::GetCaster(this);
            ApplyDamage(v12, m_pInstance, this, LevelSpecialValue, 2, 0);
            CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Brewmaster_Earth.Boulder.Target", 0.0, 0, 0);
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
  }
  return 1;
}


// CDOTA_Ability_Brewmaster_SpellImmunity::~CDOTA_Ability_Brewmaster_SpellImmunity  (line 1796, @0x0000000002ba05e0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Brewmaster_SpellImmunity::~CDOTA_Ability_Brewmaster_SpellImmunity(
        CDOTA_Ability_Brewmaster_SpellImmunity *const this)
{
  this->_vptr_IHandleEntity = &off_44A66B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Brewmaster_SpellImmunity::~CDOTA_Ability_Brewmaster_SpellImmunity  (line 1796, @0x0000000002ba0600, libserver.so)  // inlines: ~CDOTA_Ability_Brewmaster_SpellImmunity
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Brewmaster_SpellImmunity::~CDOTA_Ability_Brewmaster_SpellImmunity(
        CDOTA_Ability_Brewmaster_SpellImmunity *const this)
{
  this->_vptr_IHandleEntity = &off_44A66B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Brewmaster_SpellImmunity::Schema_DynamicBinding  (line 1798, @0x0000000002b8dcc0, libserver.so)
// globals: CDOTA_Ability_Brewmaster_SpellImmunity::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Brewmaster_SpellImmunity::Schema_DynamicBinding(
        const CDOTA_Ability_Brewmaster_SpellImmunity *const this)
{
  return CDOTA_Ability_Brewmaster_SpellImmunity::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_SpellImmunity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1798, @0x0000000002b8dcd0, libserver.so)
// globals: CDOTA_Ability_Brewmaster_SpellImmunity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Brewmaster_SpellImmunity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Brewmaster_SpellImmunity::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Brewmaster_SpellImmunity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_SpellImmunity::CEntityInstanceEntityClass::DestructInstance  (line 1798, @0x0000000002b8dce0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Brewmaster_SpellImmunity>
void __fastcall CDOTA_Ability_Brewmaster_SpellImmunity::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Brewmaster_SpellImmunity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Brewmaster_SpellImmunity::CEntityInstanceEntityClass::FreeInstance  (line 1798, @0x0000000002b8dd00, libserver.so)
void __fastcall CDOTA_Ability_Brewmaster_SpellImmunity::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Brewmaster_SpellImmunity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Brewmaster_SpellImmunity::CEntityInstanceEntityClass::CanAllocate  (line 1798, @0x0000000002b8dd20, libserver.so)
bool __fastcall CDOTA_Ability_Brewmaster_SpellImmunity::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Brewmaster_SpellImmunity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Brewmaster_SpellImmunity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1798, @0x0000000002b8dd30, libserver.so)
// globals: CDOTA_Ability_Brewmaster_SpellImmunity::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Brewmaster_SpellImmunity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Brewmaster_SpellImmunity::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Brewmaster_SpellImmunity::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_SpellImmunity::CEntityInstanceEntityClass::AllocateInstance  (line 1798, @0x0000000002b96ea0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Brewmaster_SpellImmunity::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Brewmaster_SpellImmunity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Brewmaster_SpellImmunity::CEntityInstanceEntityClass::ConstructInstance  (line 1798, @0x0000000002b9cbd0, libserver.so)  // inlines: CDOTA_Ability_Brewmaster_SpellImmunity, Construct<CDOTA_Ability_Brewmaster_SpellImmunity>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Brewmaster_SpellImmunity::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Brewmaster_SpellImmunity::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44A66B0;
  }
  return p;
}


// CDOTA_Ability_Brewmaster_SpellImmunity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1798, @0x0000000002ba9d00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Brewmaster_SpellImmunity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Brewmaster_SpellImmunity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Brewmaster_SpellImmunity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1798, @0x0000000002ba9d20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Brewmaster_SpellImmunity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Brewmaster_SpellImmunity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Brewmaster_SpellImmunity::GetEntityClassInternal  (line 1798, @0x0000000002bc5900, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "brewmaster_earth_spell_immunity", "CDOTA_Ability_Brewmaster_SpellImmunity"
// globals: `guard variable for'CDOTA_Ability_Brewmaster_SpellImmunity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_SpellImmunityClass, CDOTA_Ability_Brewmaster_SpellImmunity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_SpellImmunityClass, __dso_handle, CDOTA_Ability_Brewmaster_SpellImmunity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Brewmaster_SpellImmunity::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_SpellImmunityClassInfo, CDOTA_Ability_Brewmaster_SpellImmunity::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_SpellImmunityClassInfo
CEntityClass *__cdecl CDOTA_Ability_Brewmaster_SpellImmunity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Brewmaster_SpellImmunity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_SpellImmunityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Brewmaster_SpellImmunity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_SpellImmunityClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Brewmaster_SpellImmunity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_SpellImmunityClass);
    CDOTA_Ability_Brewmaster_SpellImmunity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_SpellImmunityClass._vptr_CEntityClass = off_44A6630;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Brewmaster_SpellImmunity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_SpellImmunityClass);
    __cxa_atexit(
      CDOTA_Ability_Brewmaster_SpellImmunity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Brewmaster_SpellImmunity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_SpellImmunityClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Brewmaster_SpellImmunityClass != 0 )
    return &CDOTA_Ability_Brewmaster_SpellImmunity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_SpellImmunityClass;
  if ( `guard variable for'CDOTA_Ability_Brewmaster_SpellImmunity::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_SpellImmunityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Brewmaster_SpellImmunity::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_SpellImmunityClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Brewmaster_SpellImmunity::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_SpellImmunityClassInfo,
      "CDOTA_Ability_Brewmaster_SpellImmunity",
      "brewmaster_earth_spell_immunity",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Brewmaster_SpellImmunity::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_SpellImmunityClassInfo);
  }
  CDOTA_Ability_Brewmaster_SpellImmunity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_SpellImmunityClass.m_pClassInfo = &CDOTA_Ability_Brewmaster_SpellImmunity::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_SpellImmunityClassInfo;
  CDOTA_Ability_Brewmaster_SpellImmunity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_SpellImmunityClass.m_pBaseClassInfo = CDOTA_Ability_Brewmaster_SpellImmunity::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_SpellImmunityClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Brewmaster_SpellImmunityClass = &CDOTA_Ability_Brewmaster_SpellImmunity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_SpellImmunityClass;
  CDOTA_Ability_Brewmaster_SpellImmunity::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_SpellImmunityClassInfo.m_pClass = &CDOTA_Ability_Brewmaster_SpellImmunity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_SpellImmunityClass;
  CDOTA_Ability_Brewmaster_SpellImmunity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_SpellImmunityClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Brewmaster_SpellImmunityClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Brewmaster_SpellImmunity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_SpellImmunityClass;
}


// CDOTA_Ability_Brewmaster_SpellImmunity::GetIntrinsicModifierName  (line 1801, @0x0000000002b8dd40, libserver.so)
// strings: "modifier_brewmaster_earth_spell_immunity"
const char *__fastcall CDOTA_Ability_Brewmaster_SpellImmunity::GetIntrinsicModifierName(
        CDOTA_Ability_Brewmaster_SpellImmunity *const this)
{
  return "modifier_brewmaster_earth_spell_immunity";
}


// CDOTA_Modifier_Brewmaster_SpellImmunity::~CDOTA_Modifier_Brewmaster_SpellImmunity  (line 1810, @0x0000000002b9a620, libserver.so)  // inlines: ~CDOTA_Modifier_MagicImmune
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Brewmaster_SpellImmunity::~CDOTA_Modifier_Brewmaster_SpellImmunity(
        CDOTA_Modifier_Brewmaster_SpellImmunity *const this)
{
  this->_vptr_CDOTA_Buff = &off_411B710;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Brewmaster_SpellImmunity::~CDOTA_Modifier_Brewmaster_SpellImmunity  (line 1810, @0x0000000002b9a640, libserver.so)  // inlines: ~CDOTA_Modifier_Brewmaster_SpellImmunity, ~CDOTA_Modifier_MagicImmune
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Brewmaster_SpellImmunity::~CDOTA_Modifier_Brewmaster_SpellImmunity(
        CDOTA_Modifier_Brewmaster_SpellImmunity *const this)
{
  this->_vptr_CDOTA_Buff = &off_411B710;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Brewmaster_SpellImmunity::IsHidden  (line 1815, @0x0000000002b8dd50, libserver.so)
bool __fastcall CDOTA_Modifier_Brewmaster_SpellImmunity::IsHidden(CDOTA_Modifier_Brewmaster_SpellImmunity *const this)
{
  return 1;
}


// CDOTA_Ability_Brewmaster_Pulverize::~CDOTA_Ability_Brewmaster_Pulverize  (line 1826, @0x0000000002ba0630, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Brewmaster_Pulverize::~CDOTA_Ability_Brewmaster_Pulverize(
        CDOTA_Ability_Brewmaster_Pulverize *const this)
{
  this->_vptr_IHandleEntity = &off_44A74D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Brewmaster_Pulverize::~CDOTA_Ability_Brewmaster_Pulverize  (line 1826, @0x0000000002ba0650, libserver.so)  // inlines: ~CDOTA_Ability_Brewmaster_Pulverize
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Brewmaster_Pulverize::~CDOTA_Ability_Brewmaster_Pulverize(
        CDOTA_Ability_Brewmaster_Pulverize *const this)
{
  this->_vptr_IHandleEntity = &off_44A74D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Brewmaster_Pulverize::Schema_DynamicBinding  (line 1828, @0x0000000002b8dd60, libserver.so)
// globals: CDOTA_Ability_Brewmaster_Pulverize::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Brewmaster_Pulverize::Schema_DynamicBinding(
        const CDOTA_Ability_Brewmaster_Pulverize *const this)
{
  return CDOTA_Ability_Brewmaster_Pulverize::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_Pulverize::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1828, @0x0000000002b8dd70, libserver.so)
// globals: CDOTA_Ability_Brewmaster_Pulverize::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Brewmaster_Pulverize::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Brewmaster_Pulverize::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Brewmaster_Pulverize::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_Pulverize::CEntityInstanceEntityClass::DestructInstance  (line 1828, @0x0000000002b8dd80, libserver.so)  // inlines: Destruct<CDOTA_Ability_Brewmaster_Pulverize>
void __fastcall CDOTA_Ability_Brewmaster_Pulverize::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Brewmaster_Pulverize::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Brewmaster_Pulverize::CEntityInstanceEntityClass::FreeInstance  (line 1828, @0x0000000002b8dda0, libserver.so)
void __fastcall CDOTA_Ability_Brewmaster_Pulverize::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Brewmaster_Pulverize::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Brewmaster_Pulverize::CEntityInstanceEntityClass::CanAllocate  (line 1828, @0x0000000002b8ddc0, libserver.so)
bool __fastcall CDOTA_Ability_Brewmaster_Pulverize::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Brewmaster_Pulverize::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Brewmaster_Pulverize::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1828, @0x0000000002b8ddd0, libserver.so)
// globals: CDOTA_Ability_Brewmaster_Pulverize::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Brewmaster_Pulverize::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Brewmaster_Pulverize::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Brewmaster_Pulverize::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_Pulverize::CEntityInstanceEntityClass::AllocateInstance  (line 1828, @0x0000000002b96ee0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Brewmaster_Pulverize::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Brewmaster_Pulverize::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Brewmaster_Pulverize::CEntityInstanceEntityClass::ConstructInstance  (line 1828, @0x0000000002b9cc00, libserver.so)  // inlines: CDOTA_Ability_Brewmaster_Pulverize, Construct<CDOTA_Ability_Brewmaster_Pulverize>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Brewmaster_Pulverize::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Brewmaster_Pulverize::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44A74D0;
  }
  return p;
}


// CDOTA_Ability_Brewmaster_Pulverize::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1828, @0x0000000002ba9d50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Brewmaster_Pulverize::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Brewmaster_Pulverize::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Brewmaster_Pulverize::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1828, @0x0000000002ba9d70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Brewmaster_Pulverize::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Brewmaster_Pulverize::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Brewmaster_Pulverize::GetEntityClassInternal  (line 1828, @0x0000000002bc5a50, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "brewmaster_earth_pulverize", "CDOTA_Ability_Brewmaster_Pulverize"
// globals: `guard variable for'CDOTA_Ability_Brewmaster_Pulverize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PulverizeClass, CDOTA_Ability_Brewmaster_Pulverize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PulverizeClass, __dso_handle, CDOTA_Ability_Brewmaster_Pulverize::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Brewmaster_Pulverize::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_PulverizeClassInfo, CDOTA_Ability_Brewmaster_Pulverize::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_PulverizeClassInfo
CEntityClass *__cdecl CDOTA_Ability_Brewmaster_Pulverize::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Brewmaster_Pulverize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PulverizeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Brewmaster_Pulverize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PulverizeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Brewmaster_Pulverize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PulverizeClass);
    CDOTA_Ability_Brewmaster_Pulverize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PulverizeClass._vptr_CEntityClass = off_44A7450;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Brewmaster_Pulverize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PulverizeClass);
    __cxa_atexit(
      CDOTA_Ability_Brewmaster_Pulverize::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Brewmaster_Pulverize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PulverizeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Brewmaster_PulverizeClass != 0 )
    return &CDOTA_Ability_Brewmaster_Pulverize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PulverizeClass;
  if ( `guard variable for'CDOTA_Ability_Brewmaster_Pulverize::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_PulverizeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Brewmaster_Pulverize::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_PulverizeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Brewmaster_Pulverize::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_PulverizeClassInfo,
      "CDOTA_Ability_Brewmaster_Pulverize",
      "brewmaster_earth_pulverize",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Brewmaster_Pulverize::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_PulverizeClassInfo);
  }
  CDOTA_Ability_Brewmaster_Pulverize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PulverizeClass.m_pClassInfo = &CDOTA_Ability_Brewmaster_Pulverize::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_PulverizeClassInfo;
  CDOTA_Ability_Brewmaster_Pulverize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PulverizeClass.m_pBaseClassInfo = CDOTA_Ability_Brewmaster_Pulverize::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_PulverizeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Brewmaster_PulverizeClass = &CDOTA_Ability_Brewmaster_Pulverize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PulverizeClass;
  CDOTA_Ability_Brewmaster_Pulverize::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_PulverizeClassInfo.m_pClass = &CDOTA_Ability_Brewmaster_Pulverize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PulverizeClass;
  CDOTA_Ability_Brewmaster_Pulverize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PulverizeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Brewmaster_PulverizeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Brewmaster_Pulverize::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PulverizeClass;
}


// CDOTA_Ability_Brewmaster_Pulverize::GetIntrinsicModifierName  (line 1831, @0x0000000002b8dde0, libserver.so)
// strings: "modifier_brewmaster_earth_pulverize"
const char *__fastcall CDOTA_Ability_Brewmaster_Pulverize::GetIntrinsicModifierName(
        CDOTA_Ability_Brewmaster_Pulverize *const this)
{
  return "modifier_brewmaster_earth_pulverize";
}


// CDOTA_Modifier_Brewmaster_Pulverize::~CDOTA_Modifier_Brewmaster_Pulverize  (line 1840, @0x0000000002b9b920, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Brewmaster_Pulverize::~CDOTA_Modifier_Brewmaster_Pulverize(
        CDOTA_Modifier_Brewmaster_Pulverize *const this)
{
  this->_vptr_CDOTA_Buff = &off_44A7F90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Brewmaster_Pulverize::~CDOTA_Modifier_Brewmaster_Pulverize  (line 1840, @0x0000000002b9b940, libserver.so)  // inlines: ~CDOTA_Modifier_Brewmaster_Pulverize
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Brewmaster_Pulverize::~CDOTA_Modifier_Brewmaster_Pulverize(
        CDOTA_Modifier_Brewmaster_Pulverize *const this)
{
  this->_vptr_CDOTA_Buff = &off_44A7F90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Brewmaster_Pulverize::IsHidden  (line 1848, @0x0000000002b8ddf0, libserver.so)
bool __fastcall CDOTA_Modifier_Brewmaster_Pulverize::IsHidden(CDOTA_Modifier_Brewmaster_Pulverize *const this)
{
  return 1;
}


// CDOTA_Modifier_Brewmaster_Pulverize::OnCreated  (line 1863, @0x0000000002b6c390, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_building_damage"
void __fastcall CDOTA_Modifier_Brewmaster_Pulverize::OnCreated(
        CDOTA_Modifier_Brewmaster_Pulverize *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_building_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                    Ability,
                                    "bonus_building_damage",
                                    -1,
                                    0);
  else
    this->bonus_building_damage = 0;
}


// CDOTA_Modifier_Brewmaster_Pulverize::OnRefresh  (line 1870, @0x0000000002b6c930, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_building_damage"
void __fastcall CDOTA_Modifier_Brewmaster_Pulverize::OnRefresh(
        CDOTA_Modifier_Brewmaster_Pulverize *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_building_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                    Ability,
                                    "bonus_building_damage",
                                    -1,
                                    0);
  else
    this->bonus_building_damage = 0;
}


// CDOTA_Modifier_Brewmaster_Pulverize::DeclareFunctions  (line 1877, @0x0000000002b34440, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Brewmaster_Pulverize::GetModifierDamageOutgoing_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Brewmaster_Pulverize::DeclareFunctions(CDOTA_Modifier_Brewmaster_Pulverize *const this)
{
  this->m_Functions[28].__pfn = CDOTA_Modifier_Brewmaster_Pulverize::GetModifierDamageOutgoing_Percentage;
  this->m_Functions[28].__delta = 0;
}


// CDOTA_Modifier_Brewmaster_Pulverize::GetModifierDamageOutgoing_Percentage  (line 1884, @0x0000000002b450b0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Brewmaster_Pulverize::GetModifierDamageOutgoing_Percentage(
        CDOTA_Modifier_Brewmaster_Pulverize *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rbx
  uint32 v7; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *v12; // r13
  __m128i v13; // xmm0
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->htarget.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v7 = params->hattacker.m_Index;
  if ( v7 + 2 > 1
    && (m_Index_low = LOWORD(params->hattacker.m_Index),
        (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) != 0)
    && (v10 = &v9[m_Index_low & 0x1FF]) != 0
    && v7 == v10->m_EHandle.m_Index
    && (v12 = v10->m_pInstance, v10->m_pInstance != 0)
    && BYTE3(v12[7]._vptr_IHandleEntity) != 0
    && m_pInstance != 0
    && (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) == 0
    && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x10) != 0
    && HIBYTE(v12[7].m_CScriptComponent) != HIBYTE(m_pInstance[7].m_CScriptComponent) )
  {
    *v13.m128i_i32 = this->bonus_building_damage;
    *&result.m_eType = (_mm_cvtsi128_si32(v13) << 32) | 1;
  }
  else
  {
    *&result.m_eType = 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Ability_Brewmaster_DispelMagic::~CDOTA_Ability_Brewmaster_DispelMagic  (line 1911, @0x0000000002ba0680, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Brewmaster_DispelMagic::~CDOTA_Ability_Brewmaster_DispelMagic(
        CDOTA_Ability_Brewmaster_DispelMagic *const this)
{
  this->_vptr_IHandleEntity = &off_44A82F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Brewmaster_DispelMagic::~CDOTA_Ability_Brewmaster_DispelMagic  (line 1911, @0x0000000002ba06a0, libserver.so)  // inlines: ~CDOTA_Ability_Brewmaster_DispelMagic
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Brewmaster_DispelMagic::~CDOTA_Ability_Brewmaster_DispelMagic(
        CDOTA_Ability_Brewmaster_DispelMagic *const this)
{
  this->_vptr_IHandleEntity = &off_44A82F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Brewmaster_DispelMagic::Schema_DynamicBinding  (line 1913, @0x0000000002b8de00, libserver.so)
// globals: CDOTA_Ability_Brewmaster_DispelMagic::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Brewmaster_DispelMagic::Schema_DynamicBinding(
        const CDOTA_Ability_Brewmaster_DispelMagic *const this)
{
  return CDOTA_Ability_Brewmaster_DispelMagic::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_DispelMagic::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1913, @0x0000000002b8de10, libserver.so)
// globals: CDOTA_Ability_Brewmaster_DispelMagic::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Brewmaster_DispelMagic::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Brewmaster_DispelMagic::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Brewmaster_DispelMagic::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_DispelMagic::CEntityInstanceEntityClass::DestructInstance  (line 1913, @0x0000000002b8de20, libserver.so)  // inlines: Destruct<CDOTA_Ability_Brewmaster_DispelMagic>
void __fastcall CDOTA_Ability_Brewmaster_DispelMagic::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Brewmaster_DispelMagic::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Brewmaster_DispelMagic::CEntityInstanceEntityClass::FreeInstance  (line 1913, @0x0000000002b8de40, libserver.so)
void __fastcall CDOTA_Ability_Brewmaster_DispelMagic::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Brewmaster_DispelMagic::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Brewmaster_DispelMagic::CEntityInstanceEntityClass::CanAllocate  (line 1913, @0x0000000002b8de60, libserver.so)
bool __fastcall CDOTA_Ability_Brewmaster_DispelMagic::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Brewmaster_DispelMagic::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Brewmaster_DispelMagic::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1913, @0x0000000002b8de70, libserver.so)
// globals: CDOTA_Ability_Brewmaster_DispelMagic::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Brewmaster_DispelMagic::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Brewmaster_DispelMagic::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Brewmaster_DispelMagic::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_DispelMagic::CEntityInstanceEntityClass::AllocateInstance  (line 1913, @0x0000000002b96f20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Brewmaster_DispelMagic::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Brewmaster_DispelMagic::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Brewmaster_DispelMagic::CEntityInstanceEntityClass::ConstructInstance  (line 1913, @0x0000000002b9cc30, libserver.so)  // inlines: CDOTA_Ability_Brewmaster_DispelMagic, Construct<CDOTA_Ability_Brewmaster_DispelMagic>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Brewmaster_DispelMagic::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Brewmaster_DispelMagic::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44A82F0;
  }
  return p;
}


// CDOTA_Ability_Brewmaster_DispelMagic::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1913, @0x0000000002ba9da0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Brewmaster_DispelMagic::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Brewmaster_DispelMagic::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Brewmaster_DispelMagic::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1913, @0x0000000002ba9dc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Brewmaster_DispelMagic::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Brewmaster_DispelMagic::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal  (line 1913, @0x0000000002bd19d0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "brewmaster_storm_dispel_magic", "CDOTA_Ability_Brewmaster_DispelMagic"
// globals: `guard variable for'CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass, CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Brewmaster_DispelMagic::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClassInfo, CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClassInfo
CEntityClass *__cdecl CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass) != 0 )
  {
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_pClassInfo = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_flags = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_pInputs = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_nInputCount = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_pOutputs = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_nOutputCount = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_pGameClass = 0;
    CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass._vptr_CEntityClass = off_44A8270;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass);
    __cxa_atexit(
      CDOTA_Ability_Brewmaster_DispelMagic::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Brewmaster_DispelMagicClass != 0 )
    return &CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass;
  if ( `guard variable for'CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClassInfo,
      "CDOTA_Ability_Brewmaster_DispelMagic",
      "brewmaster_storm_dispel_magic",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClassInfo);
  }
  CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_pClassInfo = &CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClassInfo;
  CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_pBaseClassInfo = CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Brewmaster_DispelMagicClass = &CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass;
  CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClassInfo.m_pClass = &CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass;
  CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Brewmaster_DispelMagicClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Brewmaster_DispelMagic::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_DispelMagicClass;
}


// CDOTA_Ability_Brewmaster_DispelMagic::YouForgotToImplementOrDeclareServerClass  (line 1927, @0x0000000002b34460, libserver.so)
int __fastcall CDOTA_Ability_Brewmaster_DispelMagic::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Brewmaster_DispelMagic *const this)
{
  return 0;
}


// CDOTA_Ability_Brewmaster_DispelMagic::GetServerClass  (line 1927, @0x0000000002b4c4e0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Brewmaster_DispelMagic::GetServerClass(
        CDOTA_Ability_Brewmaster_DispelMagic *const this)
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


// CDOTA_Ability_Brewmaster_DispelMagic::OnSpellStart  (line 1936, @0x0000000002b6b050, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, FindUnitsInRadius, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSoundLocation, Purge, CDOTA_BaseNPC::RemoveModifierByName, ApplyDamage (16 total)
// strings: "particles/units/heroes/hero_brewmaster/brewmaster_dispel_magic.vpcf", "Brewmaster_Storm.DispelMagic", "modifier_brewmaster_storm_cyclone"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Brewmaster_DispelMagic::OnSpellStart(CDOTA_Ability_Brewmaster_DispelMagic *const this)
{
  int LevelSpecialValue; // r12d
  int v3; // eax
  __m128i v4; // xmm3
  int v5; // r15d
  float v6; // r12d
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_BaseNPC *v8; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v10; // rax
  CDOTA_ParticleManager *v11; // rax
  CDOTA_ParticleManager *v12; // rax
  __int64 v13; // rbx
  CHandle<CBaseEntity> *v14; // rdx
  uint32 m_Index; // eax
  __int16 v16; // cx
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  unsigned __int8 m_Value; // r14
  bool v21; // r14
  __m128i v22; // xmm2
  float v23; // r14d
  CDOTA_BaseNPC *v24; // rax
  Vector vOrigin; // [rsp+20h] [rbp-70h] BYREF
  Vector vPosition; // [rsp+30h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+40h] [rbp-50h] BYREF

  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
  *v4.m128i_i32 = LevelSpecialValue;
  v5 = v3;
  hEntities.m_Size = 0;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  Caster = CDOTABaseAbility::GetCaster(this);
  vPosition = CDOTABaseAbility::GetCursorPosition(this);
  v8 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v8->m_iTeamNum.m_Value, &vPosition, Caster, v6, &hEntities, 3, 3, 64, 0, 0);
  ParticleManager = GetParticleManager();
  LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_brewmaster/brewmaster_dispel_magic.vpcf",
                      8,
                      0,
                      0,
                      0);
  vPosition = CDOTABaseAbility::GetCursorPosition(this);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v10, Caster, 0, *&vPosition.x, vPosition.z);
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v11, Caster, 1, COERCE_DOUBLE(LODWORD(v6)), 0.0);
  v12 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v12, Caster);
  vOrigin = CDOTABaseAbility::GetCursorPosition(this);
  DOTA_EmitSoundLocation(&vOrigin, "Brewmaster_Storm.DispelMagic", 1);
  if ( hEntities.m_Size > 0 )
  {
    v13 = 0;
    do
    {
      while ( 1 )
      {
        v14 = &hEntities.m_Memory.m_pMemory[v13];
        m_Index = v14->m_Index;
        if ( v14->m_Index + 2 > 1 )
        {
          v16 = v14->m_Index;
          v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v14->m_Index) >> 9) & 0x3F];
          if ( v17 != 0 )
          {
            v18 = &v17[v16 & 0x1FF];
            if ( v18 != 0 && m_Index == v18->m_EHandle.m_Index )
            {
              m_pInstance = v18->m_pInstance;
              if ( v18->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              {
                m_Value = m_pInstance->m_iTeamNum.m_Value;
                v21 = m_Value == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
                Purge(m_pInstance, this, !v21 ? 2 : 4);
                CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, "modifier_brewmaster_storm_cyclone");
                if ( (m_pInstance->m_bIsSummoned.m_Value || m_pInstance->m_bIsIllusion.m_Value) && !v21 )
                  break;
              }
            }
          }
        }
        if ( ++v13 >= hEntities.m_Size )
          goto LABEL_14;
      }
      *v22.m128i_i32 = v5;
      v23 = COERCE_FLOAT(_mm_cvtsi128_si32(v22));
      v24 = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(v24, m_pInstance, this, v23, 2, 0);
      ++v13;
    }
    while ( v13 < hEntities.m_Size );
  }
LABEL_14:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEntities);
  if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
    if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
  }
}


// CDOTA_Ability_Brewmaster_Cyclone::~CDOTA_Ability_Brewmaster_Cyclone  (line 1981, @0x0000000002ba06d0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Brewmaster_Cyclone::~CDOTA_Ability_Brewmaster_Cyclone(
        CDOTA_Ability_Brewmaster_Cyclone *const this)
{
  this->_vptr_IHandleEntity = &off_44A8DF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Brewmaster_Cyclone::~CDOTA_Ability_Brewmaster_Cyclone  (line 1981, @0x0000000002ba06f0, libserver.so)  // inlines: ~CDOTA_Ability_Brewmaster_Cyclone
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Brewmaster_Cyclone::~CDOTA_Ability_Brewmaster_Cyclone(
        CDOTA_Ability_Brewmaster_Cyclone *const this)
{
  this->_vptr_IHandleEntity = &off_44A8DF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Brewmaster_Cyclone::Schema_DynamicBinding  (line 1983, @0x0000000002b8de80, libserver.so)
// globals: CDOTA_Ability_Brewmaster_Cyclone::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Brewmaster_Cyclone::Schema_DynamicBinding(
        const CDOTA_Ability_Brewmaster_Cyclone *const this)
{
  return CDOTA_Ability_Brewmaster_Cyclone::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_Cyclone::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1983, @0x0000000002b8de90, libserver.so)
// globals: CDOTA_Ability_Brewmaster_Cyclone::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Brewmaster_Cyclone::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Brewmaster_Cyclone::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Brewmaster_Cyclone::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_Cyclone::CEntityInstanceEntityClass::DestructInstance  (line 1983, @0x0000000002b8dea0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Brewmaster_Cyclone>
void __fastcall CDOTA_Ability_Brewmaster_Cyclone::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Brewmaster_Cyclone::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Brewmaster_Cyclone::CEntityInstanceEntityClass::FreeInstance  (line 1983, @0x0000000002b8dec0, libserver.so)
void __fastcall CDOTA_Ability_Brewmaster_Cyclone::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Brewmaster_Cyclone::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Brewmaster_Cyclone::CEntityInstanceEntityClass::CanAllocate  (line 1983, @0x0000000002b8dee0, libserver.so)
bool __fastcall CDOTA_Ability_Brewmaster_Cyclone::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Brewmaster_Cyclone::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Brewmaster_Cyclone::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1983, @0x0000000002b8def0, libserver.so)
// globals: CDOTA_Ability_Brewmaster_Cyclone::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Brewmaster_Cyclone::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Brewmaster_Cyclone::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Brewmaster_Cyclone::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_Cyclone::CEntityInstanceEntityClass::AllocateInstance  (line 1983, @0x0000000002b96f60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Brewmaster_Cyclone::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Brewmaster_Cyclone::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Brewmaster_Cyclone::CEntityInstanceEntityClass::ConstructInstance  (line 1983, @0x0000000002b9cc60, libserver.so)  // inlines: CDOTA_Ability_Brewmaster_Cyclone, Construct<CDOTA_Ability_Brewmaster_Cyclone>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Brewmaster_Cyclone::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Brewmaster_Cyclone::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44A8DF0;
  }
  return p;
}


// CDOTA_Ability_Brewmaster_Cyclone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1983, @0x0000000002ba9df0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Brewmaster_Cyclone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Brewmaster_Cyclone::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Brewmaster_Cyclone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1983, @0x0000000002ba9e10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Brewmaster_Cyclone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Brewmaster_Cyclone::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Brewmaster_Cyclone::GetEntityClassInternal  (line 1983, @0x0000000002bc5ba0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "brewmaster_storm_cyclone", "CDOTA_Ability_Brewmaster_Cyclone"
// globals: `guard variable for'CDOTA_Ability_Brewmaster_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_CycloneClass, CDOTA_Ability_Brewmaster_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_CycloneClass, __dso_handle, CDOTA_Ability_Brewmaster_Cyclone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Brewmaster_Cyclone::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_CycloneClassInfo, CDOTA_Ability_Brewmaster_Cyclone::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_CycloneClassInfo
CEntityClass *__cdecl CDOTA_Ability_Brewmaster_Cyclone::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Brewmaster_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_CycloneClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Brewmaster_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_CycloneClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Brewmaster_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_CycloneClass);
    CDOTA_Ability_Brewmaster_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_CycloneClass._vptr_CEntityClass = off_44A8D70;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Brewmaster_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_CycloneClass);
    __cxa_atexit(
      CDOTA_Ability_Brewmaster_Cyclone::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Brewmaster_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_CycloneClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Brewmaster_CycloneClass != 0 )
    return &CDOTA_Ability_Brewmaster_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_CycloneClass;
  if ( `guard variable for'CDOTA_Ability_Brewmaster_Cyclone::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_CycloneClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Brewmaster_Cyclone::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_CycloneClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Brewmaster_Cyclone::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_CycloneClassInfo,
      "CDOTA_Ability_Brewmaster_Cyclone",
      "brewmaster_storm_cyclone",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Brewmaster_Cyclone::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_CycloneClassInfo);
  }
  CDOTA_Ability_Brewmaster_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_CycloneClass.m_pClassInfo = &CDOTA_Ability_Brewmaster_Cyclone::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_CycloneClassInfo;
  CDOTA_Ability_Brewmaster_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_CycloneClass.m_pBaseClassInfo = CDOTA_Ability_Brewmaster_Cyclone::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_CycloneClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Brewmaster_CycloneClass = &CDOTA_Ability_Brewmaster_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_CycloneClass;
  CDOTA_Ability_Brewmaster_Cyclone::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_CycloneClassInfo.m_pClass = &CDOTA_Ability_Brewmaster_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_CycloneClass;
  CDOTA_Ability_Brewmaster_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_CycloneClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Brewmaster_CycloneClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Brewmaster_Cyclone::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_CycloneClass;
}


// CDOTA_Ability_Brewmaster_Cyclone::OnSpellStart  (line 1993, @0x0000000002b72580, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, InState, IsConsideredHero, IsInvulnerable, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_brewmaster_storm_cyclone", "Brewmaster_Storm.Cyclone"
void __fastcall CDOTA_Ability_Brewmaster_Cyclone::OnSpellStart(CDOTA_Ability_Brewmaster_Cyclone *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  __int64 v4; // rax
  CDOTA_BaseNPC *Caster; // rax
  float duration_hero; // [rsp+Ch] [rbp-44h]
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0 )
  {
    v4 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
    if ( (v4 & 0x100) == 0 && (v4 & 0x200) == 0 && !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1) )
    {
      duration_hero = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration_hero", -1, 0);
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration_unit", -1, 0);
      KeyValues::KeyValues(&kv, "modifier_brewmaster_storm_cyclone");
      KeyValues::SetFloat(&kv, "duration", duration_hero);
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_brewmaster_storm_cyclone", &kv, 0);
      CDOTA_BaseNPC::UnitEmitSound(v3, "Brewmaster_Storm.Cyclone", 0.0, 0, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Modifier_Brewmaster_Cyclone::~CDOTA_Modifier_Brewmaster_Cyclone  (line 2019, @0x0000000002b9a360, libserver.so)  // inlines: ~CDOTA_Modifier_Cyclone
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Brewmaster_Cyclone::~CDOTA_Modifier_Brewmaster_Cyclone(
        CDOTA_Modifier_Brewmaster_Cyclone *const this)
{
  this->_vptr_CDOTA_Buff = &off_41260F0;
  this->_vptr_CHorizontalMotionController = &off_41263F8;
  this->_vptr_CVerticalMotionController = &off_4126438;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Brewmaster_Cyclone::~CDOTA_Modifier_Brewmaster_Cyclone  (line 2019, @0x0000000002b9a3a0, libserver.so)  // inlines: ~CDOTA_Modifier_Brewmaster_Cyclone, ~CDOTA_Modifier_Cyclone
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Brewmaster_Cyclone::~CDOTA_Modifier_Brewmaster_Cyclone(
        CDOTA_Modifier_Brewmaster_Cyclone *const this)
{
  this->_vptr_CDOTA_Buff = &off_41260F0;
  this->_vptr_CHorizontalMotionController = &off_41263F8;
  this->_vptr_CVerticalMotionController = &off_4126438;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Brewmaster_Cyclone::GetEffectName  (line 2024, @0x0000000002b8df00, libserver.so)
// strings: "particles/units/heroes/hero_brewmaster/brewmaster_cyclone.vpcf"
const char *__fastcall CDOTA_Modifier_Brewmaster_Cyclone::GetEffectName(CDOTA_Modifier_Brewmaster_Cyclone *const this)
{
  return "particles/units/heroes/hero_brewmaster/brewmaster_cyclone.vpcf";
}


// CDOTA_Modifier_Brewmaster_Cyclone::OnDestroy  (line 2033, @0x0000000002b39fc0, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::StopSound, CDOTA_Modifier_Cyclone::OnDestroy
// strings: "Brewmaster_Storm.Cyclone"
void __fastcall CDOTA_Modifier_Brewmaster_Cyclone::OnDestroy(CDOTA_Modifier_Brewmaster_Cyclone *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(Parent, "Brewmaster_Storm.Cyclone");
  CDOTA_Modifier_Cyclone::OnDestroy(this);
}


// CDOTA_Ability_Brewmaster_WindWalk::~CDOTA_Ability_Brewmaster_WindWalk  (line 2048, @0x0000000002ba0720, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Brewmaster_WindWalk::~CDOTA_Ability_Brewmaster_WindWalk(
        CDOTA_Ability_Brewmaster_WindWalk *const this)
{
  this->_vptr_IHandleEntity = &off_44A9CB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Brewmaster_WindWalk::~CDOTA_Ability_Brewmaster_WindWalk  (line 2048, @0x0000000002ba0740, libserver.so)  // inlines: ~CDOTA_Ability_Brewmaster_WindWalk
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Brewmaster_WindWalk::~CDOTA_Ability_Brewmaster_WindWalk(
        CDOTA_Ability_Brewmaster_WindWalk *const this)
{
  this->_vptr_IHandleEntity = &off_44A9CB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Brewmaster_WindWalk::Schema_DynamicBinding  (line 2050, @0x0000000002b8df10, libserver.so)
// globals: CDOTA_Ability_Brewmaster_WindWalk::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Brewmaster_WindWalk::Schema_DynamicBinding(
        const CDOTA_Ability_Brewmaster_WindWalk *const this)
{
  return CDOTA_Ability_Brewmaster_WindWalk::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_WindWalk::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2050, @0x0000000002b8df20, libserver.so)
// globals: CDOTA_Ability_Brewmaster_WindWalk::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Brewmaster_WindWalk::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Brewmaster_WindWalk::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Brewmaster_WindWalk::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_WindWalk::CEntityInstanceEntityClass::DestructInstance  (line 2050, @0x0000000002b8df30, libserver.so)  // inlines: Destruct<CDOTA_Ability_Brewmaster_WindWalk>
void __fastcall CDOTA_Ability_Brewmaster_WindWalk::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Brewmaster_WindWalk::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Brewmaster_WindWalk::CEntityInstanceEntityClass::FreeInstance  (line 2050, @0x0000000002b8df50, libserver.so)
void __fastcall CDOTA_Ability_Brewmaster_WindWalk::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Brewmaster_WindWalk::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Brewmaster_WindWalk::CEntityInstanceEntityClass::CanAllocate  (line 2050, @0x0000000002b8df70, libserver.so)
bool __fastcall CDOTA_Ability_Brewmaster_WindWalk::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Brewmaster_WindWalk::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Brewmaster_WindWalk::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2050, @0x0000000002b8df80, libserver.so)
// globals: CDOTA_Ability_Brewmaster_WindWalk::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Brewmaster_WindWalk::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Brewmaster_WindWalk::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Brewmaster_WindWalk::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_WindWalk::CEntityInstanceEntityClass::AllocateInstance  (line 2050, @0x0000000002b96fa0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Brewmaster_WindWalk::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Brewmaster_WindWalk::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Brewmaster_WindWalk::CEntityInstanceEntityClass::ConstructInstance  (line 2050, @0x0000000002b9cc90, libserver.so)  // inlines: CDOTA_Ability_Brewmaster_WindWalk, Construct<CDOTA_Ability_Brewmaster_WindWalk>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Brewmaster_WindWalk::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Brewmaster_WindWalk::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44A9CB0;
  }
  return p;
}


// CDOTA_Ability_Brewmaster_WindWalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2050, @0x0000000002ba9e40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Brewmaster_WindWalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Brewmaster_WindWalk::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Brewmaster_WindWalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2050, @0x0000000002ba9e60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Brewmaster_WindWalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Brewmaster_WindWalk::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Brewmaster_WindWalk::GetEntityClassInternal  (line 2050, @0x0000000002bc5cf0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "brewmaster_storm_wind_walk", "CDOTA_Ability_Brewmaster_WindWalk"
// globals: `guard variable for'CDOTA_Ability_Brewmaster_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_WindWalkClass, CDOTA_Ability_Brewmaster_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_WindWalkClass, __dso_handle, CDOTA_Ability_Brewmaster_WindWalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Brewmaster_WindWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_WindWalkClassInfo, CDOTA_Ability_Brewmaster_WindWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_WindWalkClassInfo
CEntityClass *__cdecl CDOTA_Ability_Brewmaster_WindWalk::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Brewmaster_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_WindWalkClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Brewmaster_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_WindWalkClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Brewmaster_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_WindWalkClass);
    CDOTA_Ability_Brewmaster_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_WindWalkClass._vptr_CEntityClass = off_44A9C30;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Brewmaster_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_WindWalkClass);
    __cxa_atexit(
      CDOTA_Ability_Brewmaster_WindWalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Brewmaster_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_WindWalkClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Brewmaster_WindWalkClass != 0 )
    return &CDOTA_Ability_Brewmaster_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_WindWalkClass;
  if ( `guard variable for'CDOTA_Ability_Brewmaster_WindWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_WindWalkClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Brewmaster_WindWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_WindWalkClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Brewmaster_WindWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_WindWalkClassInfo,
      "CDOTA_Ability_Brewmaster_WindWalk",
      "brewmaster_storm_wind_walk",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Brewmaster_WindWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_WindWalkClassInfo);
  }
  CDOTA_Ability_Brewmaster_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_WindWalkClass.m_pClassInfo = &CDOTA_Ability_Brewmaster_WindWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_WindWalkClassInfo;
  CDOTA_Ability_Brewmaster_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_WindWalkClass.m_pBaseClassInfo = CDOTA_Ability_Brewmaster_WindWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_WindWalkClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Brewmaster_WindWalkClass = &CDOTA_Ability_Brewmaster_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_WindWalkClass;
  CDOTA_Ability_Brewmaster_WindWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_WindWalkClassInfo.m_pClass = &CDOTA_Ability_Brewmaster_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_WindWalkClass;
  CDOTA_Ability_Brewmaster_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_WindWalkClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Brewmaster_WindWalkClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Brewmaster_WindWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_WindWalkClass;
}


// CDOTA_Ability_Brewmaster_WindWalk::OnSpellStart  (line 2060, @0x0000000002b726f0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetParent
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CGameSceneNode::GetOwnerEntity, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex (15 total)
// strings: "modifier_brewmaster_wind_walk", "fadetime", "modifier_brewmaster_storm_wind_walk", "Brewmaster_Storm.WindWalk", "particles/units/heroes/hero_brewmaster/brewmaster_windwalk.vpcf"
void __fastcall CDOTA_Ability_Brewmaster_WindWalk::OnSpellStart(CDOTA_Ability_Brewmaster_WindWalk *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rdi
  const Vector *AbsOrigin; // rbx
  CDOTA_ParticleManager *v11; // rax
  CDOTA_ParticleManager *v12; // rax
  float duration; // [rsp+Ch] [rbp-44h]
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-28h]

  v15 = __readfsqword(0x28u);
  duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "fade_time", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_brewmaster_wind_walk");
  KeyValues::SetFloat(&kv, "duration", duration);
  KeyValues::SetFloat(&kv, "fadetime", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_brewmaster_storm_wind_walk", &kv, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v5, "Brewmaster_Storm.WindWalk", 0.0, 0, 0);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_brewmaster/brewmaster_windwalk.vpcf",
               2,
               0,
               0,
               0);
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
  else
    OwnerEntity = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(OwnerEntity);
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v11, Particle, 0, *&AbsOrigin->x, AbsOrigin->z);
  v12 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v12, Particle);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Brewmaster_WindWalk::~CDOTA_Modifier_Brewmaster_WindWalk  (line 2085, @0x0000000002b9a4e0, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Brewmaster_WindWalk::~CDOTA_Modifier_Brewmaster_WindWalk(
        CDOTA_Modifier_Brewmaster_WindWalk *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Brewmaster_WindWalk::~CDOTA_Modifier_Brewmaster_WindWalk  (line 2085, @0x0000000002b9a500, libserver.so)  // inlines: ~CDOTA_Modifier_Brewmaster_WindWalk, ~CDOTA_Modifier_Invisible
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Brewmaster_WindWalk::~CDOTA_Modifier_Brewmaster_WindWalk(
        CDOTA_Modifier_Brewmaster_WindWalk *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Brewmaster_WindWalk::CheckState  (line 2109, @0x0000000002b3c440, libserver.so)  // inlines: Enable
// calls: CDOTA_Modifier_Invisible::CheckState
void __fastcall CDOTA_Modifier_Brewmaster_WindWalk::CheckState(
        CDOTA_Modifier_Brewmaster_WindWalk *const this,
        CDOTABuffState *const buffState)
{
  CDOTA_Modifier_Invisible::CheckState(this, buffState);
  if ( (*(this->_vptr_CDOTA_Buff + 93))(this) != 0 )
  {
    buffState->m_nEnabledStateMask |= 0x2000000uLL;
    buffState->m_nDisabledStateMask &= ~0x2000000uLL;
  }
}


// CDOTA_Modifier_Brewmaster_WindWalk::OnCreated  (line 2120, @0x0000000002b6d750, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Modifier_Invisible::OnCreated
// strings: "bonus_movement_speeed"
void __fastcall CDOTA_Modifier_Brewmaster_WindWalk::OnCreated(
        CDOTA_Modifier_Brewmaster_WindWalk *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_movement_speeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                    Ability,
                                    "bonus_movement_speeed",
                                    -1,
                                    0);
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
    {
LABEL_3:
      this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_damage", -1, 0);
      CDOTA_Modifier_Invisible::OnCreated(this, pKV);
      return;
    }
  }
  else
  {
    this->bonus_movement_speeed = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_3;
  }
  this->bonus_damage = 0;
  CDOTA_Modifier_Invisible::OnCreated(this, pKV);
}


// CDOTA_Modifier_Brewmaster_WindWalk::DeclareFunctions  (line 2130, @0x0000000002b39ff0, libserver.so)  // inlines: SetFunction
// calls: CDOTA_Modifier_Invisible::DeclareFunctions
// globals: CDOTA_Modifier_Brewmaster_WindWalk::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Brewmaster_WindWalk::GetActivityTranslationModifiers(CModifierParams const&), CDOTA_Modifier_Brewmaster_WindWalk::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Brewmaster_WindWalk::DeclareFunctions(CDOTA_Modifier_Brewmaster_WindWalk *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Brewmaster_WindWalk::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[155].__delta = 0;
  this->m_Functions[155].__pfn = CDOTA_Modifier_Brewmaster_WindWalk::GetActivityTranslationModifiers;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Brewmaster_WindWalk::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
  CDOTA_Modifier_Invisible::DeclareFunctions(this);
}


// CDOTA_Modifier_Brewmaster_WindWalk::GetModifierMoveSpeedBonus_Percentage  (line 2141, @0x0000000002b34470, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Brewmaster_WindWalk::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Brewmaster_WindWalk *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_movement_speeed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Brewmaster_WindWalk::GetActivityTranslationModifiers  (line 2148, @0x0000000002b3c160, libserver.so)
// strings: "windwalk"
ModifierVariant_t __fastcall CDOTA_Modifier_Brewmaster_WindWalk::GetActivityTranslationModifiers(
        CDOTA_Modifier_Brewmaster_WindWalk *const this,
        const CModifierParams *const params)
{
  Activity nActivity; // ecx
  ModifierVariant_t result; // 0:rax.16

  nActivity = params->nActivity;
  if ( (nActivity - 1502) <= 1 || (result = 2uLL, nActivity == 1500) )
  {
    result.m_szVal = "windwalk";
    *&result.m_eType = 2;
  }
  return result;
}


// CDOTA_Modifier_Brewmaster_WindWalk::GetModifierPreAttack_BonusDamage  (line 2162, @0x0000000002b43ce0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Brewmaster_WindWalk::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Brewmaster_WindWalk *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // rax
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    return 1uLL;
  v5 = &v4[params->htarget.m_Index & 0x1FF];
  if ( v5 == 0 )
    return 1uLL;
  if ( m_Index != v5->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
    || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x10) != 0 )
  {
    return 1uLL;
  }
  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Brewmaster_PermanentImmolation::~CDOTA_Ability_Brewmaster_PermanentImmolation  (line 2180, @0x0000000002ba0770, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Brewmaster_PermanentImmolation::~CDOTA_Ability_Brewmaster_PermanentImmolation(
        CDOTA_Ability_Brewmaster_PermanentImmolation *const this)
{
  this->_vptr_IHandleEntity = &off_44AAAF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Brewmaster_PermanentImmolation::~CDOTA_Ability_Brewmaster_PermanentImmolation  (line 2180, @0x0000000002ba0790, libserver.so)  // inlines: ~CDOTA_Ability_Brewmaster_PermanentImmolation
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Brewmaster_PermanentImmolation::~CDOTA_Ability_Brewmaster_PermanentImmolation(
        CDOTA_Ability_Brewmaster_PermanentImmolation *const this)
{
  this->_vptr_IHandleEntity = &off_44AAAF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Brewmaster_PermanentImmolation::Schema_DynamicBinding  (line 2182, @0x0000000002b8df90, libserver.so)
// globals: CDOTA_Ability_Brewmaster_PermanentImmolation::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Brewmaster_PermanentImmolation::Schema_DynamicBinding(
        const CDOTA_Ability_Brewmaster_PermanentImmolation *const this)
{
  return CDOTA_Ability_Brewmaster_PermanentImmolation::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_PermanentImmolation::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2182, @0x0000000002b8dfa0, libserver.so)
// globals: CDOTA_Ability_Brewmaster_PermanentImmolation::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Brewmaster_PermanentImmolation::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Brewmaster_PermanentImmolation::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Brewmaster_PermanentImmolation::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_PermanentImmolation::CEntityInstanceEntityClass::DestructInstance  (line 2182, @0x0000000002b8dfb0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Brewmaster_PermanentImmolation>
void __fastcall CDOTA_Ability_Brewmaster_PermanentImmolation::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Brewmaster_PermanentImmolation::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Brewmaster_PermanentImmolation::CEntityInstanceEntityClass::FreeInstance  (line 2182, @0x0000000002b8dfd0, libserver.so)
void __fastcall CDOTA_Ability_Brewmaster_PermanentImmolation::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Brewmaster_PermanentImmolation::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Brewmaster_PermanentImmolation::CEntityInstanceEntityClass::CanAllocate  (line 2182, @0x0000000002b8dff0, libserver.so)
bool __fastcall CDOTA_Ability_Brewmaster_PermanentImmolation::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Brewmaster_PermanentImmolation::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Brewmaster_PermanentImmolation::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2182, @0x0000000002b8e000, libserver.so)
// globals: CDOTA_Ability_Brewmaster_PermanentImmolation::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Brewmaster_PermanentImmolation::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Brewmaster_PermanentImmolation::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Brewmaster_PermanentImmolation::s_pSchemaBinding;
}


// CDOTA_Ability_Brewmaster_PermanentImmolation::CEntityInstanceEntityClass::AllocateInstance  (line 2182, @0x0000000002b96fe0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Brewmaster_PermanentImmolation::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Brewmaster_PermanentImmolation::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Brewmaster_PermanentImmolation::CEntityInstanceEntityClass::ConstructInstance  (line 2182, @0x0000000002b9ccc0, libserver.so)  // inlines: CDOTA_Ability_Brewmaster_PermanentImmolation, Construct<CDOTA_Ability_Brewmaster_PermanentImmolation>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Brewmaster_PermanentImmolation::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Brewmaster_PermanentImmolation::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44AAAF0;
  }
  return p;
}


// CDOTA_Ability_Brewmaster_PermanentImmolation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2182, @0x0000000002ba9e90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Brewmaster_PermanentImmolation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Brewmaster_PermanentImmolation::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Brewmaster_PermanentImmolation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2182, @0x0000000002ba9eb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Brewmaster_PermanentImmolation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Brewmaster_PermanentImmolation::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Brewmaster_PermanentImmolation::GetEntityClassInternal  (line 2182, @0x0000000002bc5e40, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "brewmaster_fire_permanent_immolation", "CDOTA_Ability_Brewmaster_PermanentImmolation"
// globals: `guard variable for'CDOTA_Ability_Brewmaster_PermanentImmolation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PermanentImmolationClass, CDOTA_Ability_Brewmaster_PermanentImmolation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PermanentImmolationClass, __dso_handle, CDOTA_Ability_Brewmaster_PermanentImmolation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Brewmaster_PermanentImmolation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_PermanentImmolationClassInfo, CDOTA_Ability_Brewmaster_PermanentImmolation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_PermanentImmolationClassInfo
CEntityClass *__cdecl CDOTA_Ability_Brewmaster_PermanentImmolation::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Brewmaster_PermanentImmolation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PermanentImmolationClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Brewmaster_PermanentImmolation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PermanentImmolationClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Brewmaster_PermanentImmolation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PermanentImmolationClass);
    CDOTA_Ability_Brewmaster_PermanentImmolation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PermanentImmolationClass._vptr_CEntityClass = off_44AAA70;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Brewmaster_PermanentImmolation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PermanentImmolationClass);
    __cxa_atexit(
      CDOTA_Ability_Brewmaster_PermanentImmolation::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Brewmaster_PermanentImmolation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PermanentImmolationClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Brewmaster_PermanentImmolationClass != 0 )
    return &CDOTA_Ability_Brewmaster_PermanentImmolation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PermanentImmolationClass;
  if ( `guard variable for'CDOTA_Ability_Brewmaster_PermanentImmolation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_PermanentImmolationClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Brewmaster_PermanentImmolation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_PermanentImmolationClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Brewmaster_PermanentImmolation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_PermanentImmolationClassInfo,
      "CDOTA_Ability_Brewmaster_PermanentImmolation",
      "brewmaster_fire_permanent_immolation",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Brewmaster_PermanentImmolation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_PermanentImmolationClassInfo);
  }
  CDOTA_Ability_Brewmaster_PermanentImmolation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PermanentImmolationClass.m_pClassInfo = &CDOTA_Ability_Brewmaster_PermanentImmolation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_PermanentImmolationClassInfo;
  CDOTA_Ability_Brewmaster_PermanentImmolation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PermanentImmolationClass.m_pBaseClassInfo = CDOTA_Ability_Brewmaster_PermanentImmolation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_PermanentImmolationClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Brewmaster_PermanentImmolationClass = &CDOTA_Ability_Brewmaster_PermanentImmolation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PermanentImmolationClass;
  CDOTA_Ability_Brewmaster_PermanentImmolation::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Brewmaster_PermanentImmolationClassInfo.m_pClass = &CDOTA_Ability_Brewmaster_PermanentImmolation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PermanentImmolationClass;
  CDOTA_Ability_Brewmaster_PermanentImmolation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PermanentImmolationClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Brewmaster_PermanentImmolationClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Brewmaster_PermanentImmolation::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Brewmaster_PermanentImmolationClass;
}


// CDOTA_Ability_Brewmaster_PermanentImmolation::GetIntrinsicModifierName  (line 2186, @0x0000000002b8e010, libserver.so)
// strings: "modifier_brewmaster_fire_permanent_immolation_aura"
const char *__fastcall CDOTA_Ability_Brewmaster_PermanentImmolation::GetIntrinsicModifierName(
        CDOTA_Ability_Brewmaster_PermanentImmolation *const this)
{
  return "modifier_brewmaster_fire_permanent_immolation_aura";
}


// CDOTA_Ability_Brewmaster_PermanentImmolation::YouForgotToImplementOrDeclareServerClass  (line 2193, @0x0000000002b34490, libserver.so)
int __fastcall CDOTA_Ability_Brewmaster_PermanentImmolation::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Brewmaster_PermanentImmolation *const this)
{
  return 0;
}


// CDOTA_Ability_Brewmaster_PermanentImmolation::GetServerClass  (line 2193, @0x0000000002b4bc60, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Brewmaster_PermanentImmolation::GetServerClass(
        CDOTA_Ability_Brewmaster_PermanentImmolation *const this)
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


// CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura::~CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura  (line 2204, @0x0000000002b9b8d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura::~CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura(
        CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_44AB5B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura::~CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura  (line 2204, @0x0000000002b9b8f0, libserver.so)  // inlines: ~CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura::~CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura(
        CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_44AB5B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura::IsHidden  (line 2209, @0x0000000002b8e020, libserver.so)
bool __fastcall CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura::IsHidden(
        CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura::IsAura  (line 2214, @0x0000000002b8e030, libserver.so)
bool __fastcall CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura::IsAura(
        CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura::GetModifierAura  (line 2215, @0x0000000002b8e040, libserver.so)
// strings: "modifier_brewmaster_fire_permanent_immolation"
const char *__fastcall CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura::GetModifierAura(
        CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura *const this)
{
  return "modifier_brewmaster_fire_permanent_immolation";
}


// CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura::GetAuraSearchTeam  (line 2217, @0x0000000002b8e050, libserver.so)
int __fastcall CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura::GetAuraSearchTeam(
        CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura *const this)
{
  return 2;
}


// CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura::GetAuraSearchType  (line 2218, @0x0000000002b8e060, libserver.so)
int __fastcall CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura::GetAuraSearchType(
        CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura *const this)
{
  return 19;
}


// CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura::GetAuraRadius  (line 2219, @0x0000000002b8e070, libserver.so)
int __fastcall CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura::GetAuraRadius(
        CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura *const this)
{
  return this->radius;
}


// CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura::OnCreated  (line 2231, @0x0000000002b6c7b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura::OnCreated(
        CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
}


// CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura::OnRefresh  (line 2238, @0x0000000002b6c3f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura::OnRefresh(
        CDOTA_Modifier_Brewmaster_PermanentImmolation_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
}


// CDOTA_Modifier_Brewmaster_PermanentImmolation::~CDOTA_Modifier_Brewmaster_PermanentImmolation  (line 2247, @0x0000000002b9b880, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Brewmaster_PermanentImmolation::~CDOTA_Modifier_Brewmaster_PermanentImmolation(
        CDOTA_Modifier_Brewmaster_PermanentImmolation *const this)
{
  this->_vptr_CDOTA_Buff = &off_44AB8D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Brewmaster_PermanentImmolation::~CDOTA_Modifier_Brewmaster_PermanentImmolation  (line 2247, @0x0000000002b9b8a0, libserver.so)  // inlines: ~CDOTA_Modifier_Brewmaster_PermanentImmolation
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Brewmaster_PermanentImmolation::~CDOTA_Modifier_Brewmaster_PermanentImmolation(
        CDOTA_Modifier_Brewmaster_PermanentImmolation *const this)
{
  this->_vptr_CDOTA_Buff = &off_44AB8D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Brewmaster_PermanentImmolation::GetStatusEffectName  (line 2259, @0x0000000002b8e080, libserver.so)
// strings: "particles/status_fx/status_effect_burn.vpcf"
const char *__fastcall CDOTA_Modifier_Brewmaster_PermanentImmolation::GetStatusEffectName(
        CDOTA_Modifier_Brewmaster_PermanentImmolation *const this)
{
  return "particles/status_fx/status_effect_burn.vpcf";
}


// CDOTA_Modifier_Brewmaster_PermanentImmolation::StatusEffectPriority  (line 2260, @0x0000000002b8e090, libserver.so)
int __fastcall CDOTA_Modifier_Brewmaster_PermanentImmolation::StatusEffectPriority(
        CDOTA_Modifier_Brewmaster_PermanentImmolation *const this)
{
  return 30;
}


// CDOTA_Modifier_Brewmaster_PermanentImmolation::OnCreated  (line 2271, @0x0000000002b6cbd0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Brewmaster_PermanentImmolation::OnCreated(
        CDOTA_Modifier_Brewmaster_PermanentImmolation *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage", -1, 0);
  else
    this->damage = 0;
  CDOTA_Buff::StartIntervalThink(this, 1.0, v4);
}


// CDOTA_Modifier_Brewmaster_PermanentImmolation::OnIntervalThink  (line 2290, @0x0000000002b378e0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, ApplyDamage
void __fastcall CDOTA_Modifier_Brewmaster_PermanentImmolation::OnIntervalThink(
        CDOTA_Modifier_Brewmaster_PermanentImmolation *const this)
{
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  float damage; // [rsp+Ch] [rbp-24h]

  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    damage = this->damage;
    Ability = CDOTA_Buff::GetAbility(this);
    Parent = CDOTA_Buff::GetParent(this);
    Caster = CDOTA_Buff::GetCaster(this);
    ApplyDamage(Caster, Parent, Ability, damage, 2, 0);
  }
}


// CDOTA_Modifier_Brewmaster_PermanentImmolation::DeclareFunctions  (line 2302, @0x0000000002b344a0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Brewmaster_PermanentImmolation::Tooltip(CModifierParams const&)
void __fastcall CDOTA_Modifier_Brewmaster_PermanentImmolation::DeclareFunctions(
        CDOTA_Modifier_Brewmaster_PermanentImmolation *const this)
{
  this->m_Functions[151].__pfn = CDOTA_Modifier_Brewmaster_PermanentImmolation::Tooltip;
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_Brewmaster_PermanentImmolation::Tooltip  (line 2309, @0x0000000002b344c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Brewmaster_PermanentImmolation::Tooltip(
        CDOTA_Modifier_Brewmaster_PermanentImmolation *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


