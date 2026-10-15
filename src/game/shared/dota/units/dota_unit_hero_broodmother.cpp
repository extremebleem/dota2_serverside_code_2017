// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_broodmother.cpp:44
class CDOTA_Unit_Hero_Broodmother : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Broodmother(CDOTA_Unit_Hero_Broodmother &);
	CDOTA_Unit_Hero_Broodmother(CDOTA_Unit_Hero_Broodmother &);
	CDOTA_Unit_Hero_Broodmother();
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
	virtual void Event_Killed(const CTakeDamageInfo &);
	virtual ~CDOTA_Unit_Hero_Broodmother();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[6] Precache
	// vtable[445] HasFlyingVision
	// vtable[488] ShouldDoFlyHeightVisual
	// vtable[92] Event_Killed
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_broodmother.cpp:59
class C_CDOTA_Unit_Hero_Broodmother_MapInstall {
	C_CDOTA_Unit_Hero_Broodmother_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_broodmother.cpp:80
class CDOTA_Unit_Broodmother_Spiderling : public CDOTA_BaseNPC_Creep_Talking {
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
	CDOTA_Unit_Broodmother_Spiderling(CDOTA_Unit_Broodmother_Spiderling &);
	CDOTA_Unit_Broodmother_Spiderling(CDOTA_Unit_Broodmother_Spiderling &);
	CDOTA_Unit_Broodmother_Spiderling();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetBeastName();
	virtual bool HasFlyingVision();
	virtual bool ShouldDoFlyHeightVisual();
	virtual ~CDOTA_Unit_Broodmother_Spiderling();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[490] GetBeastName
	// vtable[445] HasFlyingVision
	// vtable[488] ShouldDoFlyHeightVisual
	// sizeof = 4512
};

// src/game/shared/dota/units/dota_unit_hero_broodmother.cpp:91
class C_CDOTA_Unit_Broodmother_Spiderling_MapInstall {
	C_CDOTA_Unit_Broodmother_Spiderling_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_broodmother.cpp:104
class CDOTA_Ability_Broodmother_SpawnSpiderlings : public CDOTABaseAbility {
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
	CDOTA_Ability_Broodmother_SpawnSpiderlings(CDOTA_Ability_Broodmother_SpawnSpiderlings &);
	CDOTA_Ability_Broodmother_SpawnSpiderlings(CDOTA_Ability_Broodmother_SpawnSpiderlings &);
	CDOTA_Ability_Broodmother_SpawnSpiderlings();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Broodmother_SpawnSpiderlings();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_broodmother.cpp:178
class CDOTA_Modifier_Broodmother_SpawnSpiderlings : public CDOTA_Buff {
public:

private:

	float spiderling_duration;  // +0xba8
	int count;  // +0xbac
	CDOTA_Modifier_Broodmother_SpawnSpiderlings();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	void OnDestroySpawnCompletion(CDOTA_BaseNPC *, const CEntityKeyValues *);
	virtual void OnDestroy();
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_Broodmother_SpawnSpiderlings();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[67] GetEffectName
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_broodmother.cpp:266
class CDOTA_Modifier_Broodmother_Spider_HP : public CDOTA_Buff {
public:

private:

	int value;  // +0xba8
	CDOTA_Modifier_Broodmother_Spider_HP();
	virtual bool IsPermanent();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierHealthBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_Broodmother_Spider_HP();

	// vtable[23] IsPermanent
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_broodmother.cpp:320
class CDOTA_Ability_Broodmother_SpawnSpiderite : public CDOTABaseAbility {
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
	CDOTA_Ability_Broodmother_SpawnSpiderite(CDOTA_Ability_Broodmother_SpawnSpiderite &);
	CDOTA_Ability_Broodmother_SpawnSpiderite(CDOTA_Ability_Broodmother_SpawnSpiderite &);
	CDOTA_Ability_Broodmother_SpawnSpiderite();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Broodmother_SpawnSpiderite();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_broodmother.cpp:334
class CDOTA_Modifier_Broodmother_SpawnSpiderite : public CDOTA_Buff {
public:

private:

	float buff_duration;  // +0xba8
	CDOTA_Modifier_Broodmother_SpawnSpiderite();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnAttacked(const CModifierParams &);
	virtual ~CDOTA_Modifier_Broodmother_SpawnSpiderite();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[89] OnAttacked
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_broodmother.cpp:394
class CDOTA_Modifier_Broodmother_SpawnSpideriteDebuff : public CDOTA_Buff {
public:

private:

	EHANDLE m_hParentSpider;  // +0xba8
	CDOTA_Modifier_Broodmother_SpawnSpideriteDebuff();
	virtual bool IsDebuff();
	void OnDestroySpawnCompletion(CDOTA_BaseNPC *, const CEntityKeyValues *);
	virtual void OnDestroy();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Broodmother_SpawnSpideriteDebuff();

	// vtable[12] IsDebuff
	// vtable[60] OnDestroy
	// vtable[57] OnCreated
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_broodmother.cpp:457
class CDOTA_Ability_Broodmother_PoisonSting : public CDOTABaseAbility {
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
	CDOTA_Ability_Broodmother_PoisonSting(CDOTA_Ability_Broodmother_PoisonSting &);
	CDOTA_Ability_Broodmother_PoisonSting(CDOTA_Ability_Broodmother_PoisonSting &);
	CDOTA_Ability_Broodmother_PoisonSting();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Broodmother_PoisonSting();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_broodmother.cpp:471
class CDOTA_Modifier_Broodmother_PoisonSting : public CDOTA_Buff {
public:

private:

	float duration;  // +0xba8
	float duration_hero;  // +0xbac
	CDOTA_Modifier_Broodmother_PoisonSting();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnAttacked(const CModifierParams &);
	virtual ~CDOTA_Modifier_Broodmother_PoisonSting();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[89] OnAttacked
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_broodmother.cpp:532
class CDOTA_Modifier_Broodmother_PoisonStingDebuff : public CDOTA_Buff {
public:

private:

	int damage_per_second;  // +0xba8
	int movement_speed;  // +0xbac
	CDOTA_Modifier_Broodmother_PoisonStingDebuff();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ModifierVariant_t Tooltip(const CModifierParams &);
	virtual ~CDOTA_Modifier_Broodmother_PoisonStingDebuff();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeedBonus_Percentage
	// vtable[90] Tooltip
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_broodmother.cpp:601
class CDOTA_Unit_Broodmother_Web : public CDOTA_BaseNPC_Additive {
public:

private:

	int m_nFXIndex;  // +0x1198
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
	CDOTA_Unit_Broodmother_Web(CDOTA_Unit_Broodmother_Web &);
	CDOTA_Unit_Broodmother_Web();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void UpdateOnRemove();
	virtual ~CDOTA_Unit_Broodmother_Web();
	virtual void Spawn(const CEntityKeyValues *);
	virtual bool HasFlyingVision();
	virtual bool ShouldDoFlyHeightVisual();
	int GetFXIndex();
	Vector GetFXOrigin();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[11] UpdateOnRemove
	// vtable[8] Spawn
	// vtable[445] HasFlyingVision
	// vtable[488] ShouldDoFlyHeightVisual
	// sizeof = 4520
};

// src/game/shared/dota/units/dota_unit_hero_broodmother.cpp:631
class C_CDOTA_Unit_Broodmother_Web_MapInstall {
	C_CDOTA_Unit_Broodmother_Web_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_broodmother.cpp:756
class CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter : public CDOTA_Buff {
public:

private:

	int max_charges;  // +0xba8
	float charge_restore_time;  // +0xbac
	bool m_bIsThinking;  // +0xbb0
	CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual bool IsPermanent();
	virtual bool DestroyOnExpire();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	void SetThinking(bool);
	bool IsThinking();
	virtual ~CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[23] IsPermanent
	// vtable[61] DestroyOnExpire
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_broodmother.cpp:828
class CDOTA_Ability_Broodmother_SpinWeb : public CDOTABaseAbility {
public:

private:

	float charge_restore_time;  // +0x3a8
	int max_charges;  // +0x3ac
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
	CDOTA_Ability_Broodmother_SpinWeb(CDOTA_Ability_Broodmother_SpinWeb &);
	CDOTA_Ability_Broodmother_SpinWeb(CDOTA_Ability_Broodmother_SpinWeb &);
	CDOTA_Ability_Broodmother_SpinWeb();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual int CastFilterResult(const Vector &);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual bool IsRefreshable();
	virtual void RefreshCharges();
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual void OnSpellStart();
	virtual void OnUpgrade();
	virtual void OnUnStolen();
	virtual bool OnLoadState(KeyValues *);
	void DestroyWebs();
	virtual ~CDOTA_Ability_Broodmother_SpinWeb();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[258] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[217] IsRefreshable
	// vtable[318] RefreshCharges
	// vtable[226] GetCastRange
	// vtable[266] OnSpellStart
	// vtable[268] OnUpgrade
	// vtable[308] OnUnStolen
	// vtable[249] OnLoadState
	// sizeof = 944
};

// src/game/shared/dota/units/dota_unit_hero_broodmother.cpp:870
class C_CDOTA_Ability_Broodmother_SpinWeb_MapInstall {
	C_CDOTA_Ability_Broodmother_SpinWeb_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_broodmother.cpp:1116
class CDOTA_Modifier_Broodmother_SpinWeb_Thinker : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	int m_nFXIndex;  // +0xbac
	CDOTA_Modifier_Broodmother_SpinWeb_Thinker();
	virtual ~CDOTA_Modifier_Broodmother_SpinWeb_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsHidden();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual float GetAuraDuration();
	virtual bool GetAuraEntityReject(CDOTA_BaseNPC *);

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[11] IsHidden
	// vtable[5] CheckState
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[83] GetAuraDuration
	// vtable[42] GetAuraEntityReject
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_broodmother.cpp:1273
class CDOTA_Modifier_Broodmother_SpinWebInvisibleApplier : public CDOTA_Buff {
public:

	CDOTA_Modifier_Broodmother_SpinWebInvisibleApplier();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual bool DestroyOnAuraRefresh();
	virtual ~CDOTA_Modifier_Broodmother_SpinWebInvisibleApplier();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[46] DestroyOnAuraRefresh
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_broodmother.cpp:1332
class CDOTA_Modifier_Broodmother_SpinWeb_Slowed : public CDOTA_Buff {
public:

private:

	int bonus_movespeed;  // +0xba8
	CDOTA_Modifier_Broodmother_SpinWeb_Slowed();
	virtual void OnCreated(KeyValues *);
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Broodmother_SpinWeb_Slowed();

	// vtable[57] OnCreated
	// vtable[89] GetModifierMoveSpeedBonus_Percentage
	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_broodmother.cpp:1377
class CDOTA_Modifier_Broodmother_SpinWeb : public CDOTA_Modifier_PersistentInvisibility {
public:

private:

	int heath_regen;  // +0xbb4
	int bonus_movespeed;  // +0xbb8
	float m_fLastDamageTime;  // +0xbbc
	float damage_time;  // +0xbc0
	CDOTA_Modifier_Broodmother_SpinWeb();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void CheckState(CDOTABuffState &);
	virtual void OnDestroy();
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Broodmother_SpinWeb();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[5] CheckState
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[93] GetModifierConstantHealthRegen
	// vtable[94] GetModifierMoveSpeedBonus_Percentage
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_broodmother.cpp:1540
class CDOTA_Ability_Broodmother_SpinWeb_Destroy : public CDOTABaseAbility {
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
	CDOTA_Ability_Broodmother_SpinWeb_Destroy(CDOTA_Ability_Broodmother_SpinWeb_Destroy &);
	CDOTA_Ability_Broodmother_SpinWeb_Destroy(CDOTA_Ability_Broodmother_SpinWeb_Destroy &);
	CDOTA_Ability_Broodmother_SpinWeb_Destroy();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool ProcsMagicStick();
	virtual ~CDOTA_Ability_Broodmother_SpinWeb_Destroy();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[239] ProcsMagicStick
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_broodmother.cpp:1568
class CDOTA_Ability_Broodmother_IncapacitatingBite : public CDOTABaseAbility {
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
	CDOTA_Ability_Broodmother_IncapacitatingBite(CDOTA_Ability_Broodmother_IncapacitatingBite &);
	CDOTA_Ability_Broodmother_IncapacitatingBite(CDOTA_Ability_Broodmother_IncapacitatingBite &);
	CDOTA_Ability_Broodmother_IncapacitatingBite();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Broodmother_IncapacitatingBite();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_broodmother.cpp:1591
class CDOTA_Modifier_Broodmother_IncapacitatingBite : public CDOTA_Buff {
public:

private:

	float duration;  // +0xba8
	CDOTA_Modifier_Broodmother_IncapacitatingBite();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	virtual ~CDOTA_Modifier_Broodmother_IncapacitatingBite();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_broodmother.cpp:1667
class CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb : public CDOTA_Buff {
public:

private:

	int miss_chance;  // +0xba8
	int bonus_movespeed;  // +0xbac
	CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual const char * GetEffectName();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMiss_Percentage(const CModifierParams &);
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[67] GetEffectName
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMiss_Percentage
	// vtable[90] GetModifierMoveSpeedBonus_Percentage
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_broodmother.cpp:1734
class CDOTA_Ability_Broodmother_InsatiableHunger : public CDOTABaseAbility {
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
	CDOTA_Ability_Broodmother_InsatiableHunger(CDOTA_Ability_Broodmother_InsatiableHunger &);
	CDOTA_Ability_Broodmother_InsatiableHunger(CDOTA_Ability_Broodmother_InsatiableHunger &);
	CDOTA_Ability_Broodmother_InsatiableHunger();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Broodmother_InsatiableHunger();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_broodmother.cpp:1765
class CDOTA_Modifier_Broodmother_InsatiableHunger : public CDOTA_Buff {
public:

private:

	int bonus_damage;  // +0xba8
	int lifesteal_pct;  // +0xbac
	CDOTA_Modifier_Broodmother_InsatiableHunger();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual ModifierVariant_t OnAttacked(const CModifierParams &);
	virtual ModifierVariant_t Tooltip(const CModifierParams &);
	virtual const char * GetHeroEffectName();
	virtual int HeroEffectPriority();
	virtual ~CDOTA_Modifier_Broodmother_InsatiableHunger();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierPreAttack_BonusDamage
	// vtable[90] OnAttacked
	// vtable[91] Tooltip
	// vtable[72] GetHeroEffectName
	// vtable[73] HeroEffectPriority
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Broodmother::~CDOTA_Unit_Hero_Broodmother  (line 44, @0x0000000002ba2600, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Broodmother::~CDOTA_Unit_Hero_Broodmother(CDOTA_Unit_Hero_Broodmother *const this)
{
  this->_vptr_IHandleEntity = &off_44ACDB0;
  this->_vptr_INextBotEventResponder = &off_44ADD90;
  this->_vptr_CObstructionObject = &off_44AE0C0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Broodmother::~CDOTA_Unit_Hero_Broodmother  (line 44, @0x0000000002ba2640, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Broodmother
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Broodmother::~CDOTA_Unit_Hero_Broodmother(CDOTA_Unit_Hero_Broodmother *const this)
{
  this->_vptr_IHandleEntity = &off_44ACDB0;
  this->_vptr_INextBotEventResponder = &off_44ADD90;
  this->_vptr_CObstructionObject = &off_44AE0C0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Broodmother::Schema_DynamicBinding  (line 46, @0x0000000002b8e0a0, libserver.so)
// globals: CDOTA_Unit_Hero_Broodmother::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Broodmother::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Broodmother *const this)
{
  return CDOTA_Unit_Hero_Broodmother::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Broodmother::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 46, @0x0000000002b8e0d0, libserver.so)
// globals: CDOTA_Unit_Hero_Broodmother::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Broodmother::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Broodmother::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Broodmother::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Broodmother::CEntityInstanceEntityClass::DestructInstance  (line 46, @0x0000000002b8e0e0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Broodmother>
void __fastcall CDOTA_Unit_Hero_Broodmother::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Broodmother::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Broodmother::CEntityInstanceEntityClass::FreeInstance  (line 46, @0x0000000002b8e100, libserver.so)
void __fastcall CDOTA_Unit_Hero_Broodmother::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Broodmother::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Broodmother::CEntityInstanceEntityClass::CanAllocate  (line 46, @0x0000000002b8e120, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Broodmother::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Broodmother::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Broodmother::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 46, @0x0000000002b8e130, libserver.so)
// globals: CDOTA_Unit_Hero_Broodmother::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Broodmother::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Broodmother::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Broodmother::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Broodmother::CEntityInstanceEntityClass::AllocateInstance  (line 46, @0x0000000002b97020, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Broodmother::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Broodmother::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Broodmother::CEntityInstanceEntityClass::ConstructInstance  (line 46, @0x0000000002b9c3e0, libserver.so)  // inlines: CDOTA_Unit_Hero_Broodmother, Construct<CDOTA_Unit_Hero_Broodmother>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Broodmother::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Broodmother::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_44ACDB0;
    *(p + 236) = &off_44ADD90;
    *(p + 257) = &off_44AE0C0;
  }
  return p;
}


// CDOTA_Unit_Hero_Broodmother::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 46, @0x0000000002babef0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Broodmother::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Broodmother::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Broodmother::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 46, @0x0000000002bac4c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Broodmother::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Broodmother::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal  (line 46, @0x0000000002bd2070, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "npc_dota_hero_broodmother", "CDOTA_Unit_Hero_Broodmother"
// globals: `guard variable for'CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass, CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Unit_Hero_Broodmother::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Broodmother::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClassInfo, CDOTA_Unit_Hero_Broodmother::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass) != 0 )
  {
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_designerName.u.m_Id = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_AllHelpers.m_Size = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_classInputs.m_Size = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_classOutputs.m_Size = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_hNetworkSerializer = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_pBaseClassInfo = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_pClassInfo = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_flags = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_nAllHelpersFlags = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_pScriptClassDesc = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_pInputs = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_nInputCount = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_pOutputs = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_nOutputCount = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_pGameClass = 0;
    CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass._vptr_CEntityClass = off_44ACD30;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Broodmother::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_BroodmotherClass != 0 )
    return &CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Broodmother::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Broodmother::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Broodmother::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClassInfo,
      "CDOTA_Unit_Hero_Broodmother",
      "npc_dota_hero_broodmother",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Broodmother::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClassInfo);
  }
  CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_pClassInfo = &CDOTA_Unit_Hero_Broodmother::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClassInfo;
  CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Broodmother::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_BroodmotherClass = &CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass;
  CDOTA_Unit_Hero_Broodmother::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClassInfo.m_pClass = &CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass;
  CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_BroodmotherClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Broodmother::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_BroodmotherClass;
}


// CDOTA_Unit_Hero_Broodmother::HasFlyingVision  (line 51, @0x0000000002b8e140, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Broodmother::HasFlyingVision(CDOTA_Unit_Hero_Broodmother *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Broodmother::ShouldDoFlyHeightVisual  (line 52, @0x0000000002b8e150, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Broodmother::ShouldDoFlyHeightVisual(CDOTA_Unit_Hero_Broodmother *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Broodmother::YouForgotToImplementOrDeclareServerClass  (line 59, @0x0000000002b344e0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Broodmother::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Broodmother *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Broodmother::GetServerClass  (line 59, @0x0000000002b4c260, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Broodmother::GetServerClass(CDOTA_Unit_Hero_Broodmother *const this)
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


// CDOTA_Unit_Hero_Broodmother::Precache  (line 66, @0x0000000002b3a0d0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Precache, DOTA_PrecacheUnitByNameSync
// strings: "npc_dota_broodmother_spiderling", "npc_dota_broodmother_spiderite"
void __fastcall CDOTA_Unit_Hero_Broodmother::Precache(
        CDOTA_Unit_Hero_Broodmother *const this,
        const CEntityPrecacheContext *pContext)
{
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
  DOTA_PrecacheUnitByNameSync("npc_dota_broodmother_spiderling", pContext->m_pManifest, -1);
  DOTA_PrecacheUnitByNameSync("npc_dota_broodmother_spiderite", pContext->m_pManifest, -1);
}


// CDOTA_Unit_Broodmother_Spiderling::~CDOTA_Unit_Broodmother_Spiderling  (line 80, @0x0000000002b98fe0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep, ~CDOTA_BaseNPC_Creep_Talking
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_Unit_Broodmother_Spiderling::~CDOTA_Unit_Broodmother_Spiderling(
        CDOTA_Unit_Broodmother_Spiderling *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_Unit_Broodmother_Spiderling::~CDOTA_Unit_Broodmother_Spiderling  (line 80, @0x0000000002ba8f50, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep, ~CDOTA_BaseNPC_Creep_Talking, ~CDOTA_Unit_Broodmother_Spiderling
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Broodmother_Spiderling::~CDOTA_Unit_Broodmother_Spiderling(
        CDOTA_Unit_Broodmother_Spiderling *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Broodmother_Spiderling::Schema_DynamicBinding  (line 82, @0x0000000002b8e160, libserver.so)
// globals: CDOTA_Unit_Broodmother_Spiderling::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Broodmother_Spiderling::Schema_DynamicBinding(
        const CDOTA_Unit_Broodmother_Spiderling *const this)
{
  return CDOTA_Unit_Broodmother_Spiderling::s_pSchemaBinding;
}


// CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 82, @0x0000000002b8e190, libserver.so)
// globals: CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass::DestructInstance  (line 82, @0x0000000002b8e1a0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Broodmother_Spiderling>
void __fastcall CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass::FreeInstance  (line 82, @0x0000000002b8e1c0, libserver.so)
void __fastcall CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass::CanAllocate  (line 82, @0x0000000002b8e1e0, libserver.so)
bool __fastcall CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 82, @0x0000000002b8e1f0, libserver.so)
// globals: CDOTA_Unit_Broodmother_Spiderling::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Broodmother_Spiderling::s_pSchemaBinding;
}


// CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass::AllocateInstance  (line 82, @0x0000000002b97060, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4512);
  memset(v1, 0, 0x11A0u);
  return v1;
}


// CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass::ConstructInstance  (line 82, @0x0000000002b98f40, libserver.so)  // inlines: CDOTA_BaseNPC_Creep_Talking, CDOTA_Unit_Broodmother_Spiderling, Construct<CDOTA_Unit_Broodmother_Spiderling>
// calls: CDOTA_BaseNPC_Creep::CDOTA_BaseNPC_Creep
CEntityInstance *__fastcall CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Creep::CDOTA_BaseNPC_Creep(p);
    *p = &off_44AE190;
    *(p + 236) = &off_44AF0F8;
    *(p + 257) = &off_44AF428;
  }
  return p;
}


// CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 82, @0x0000000002bac110, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 82, @0x0000000002bac610, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Broodmother_Spiderling::GetEntityClassInternal  (line 82, @0x0000000002bcf3e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CDOTA_BaseNPC_Creep::GetEntityClassInfo, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "npc_dota_broodmother_spiderling", "CDOTA_Unit_Broodmother_Spiderling", "npc_dota_talking_creep", "CDOTA_BaseNPC_Creep_Talking"
// globals: `guard variable for'CDOTA_Unit_Broodmother_Spiderling::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Broodmother_SpiderlingClass, CDOTA_Unit_Broodmother_Spiderling::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Broodmother_SpiderlingClass, __dso_handle, CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Broodmother_Spiderling::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Broodmother_SpiderlingClassInfo, CDOTA_Unit_Broodmother_Spiderling::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Broodmother_SpiderlingClassInfo, `guard variable for'CDOTA_BaseNPC_Creep_Talking::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClassInfo, CDOTA_BaseNPC_Creep_Talking::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClassInfo
CEntityClass *__cdecl CDOTA_Unit_Broodmother_Spiderling::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Broodmother_Spiderling::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Broodmother_SpiderlingClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Broodmother_Spiderling::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Broodmother_SpiderlingClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Broodmother_Spiderling::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Broodmother_SpiderlingClass);
    CDOTA_Unit_Broodmother_Spiderling::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Broodmother_SpiderlingClass._vptr_CEntityClass = off_44AE110;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Broodmother_Spiderling::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Broodmother_SpiderlingClass);
    __cxa_atexit(
      CDOTA_Unit_Broodmother_Spiderling::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Broodmother_Spiderling::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Broodmother_SpiderlingClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Broodmother_SpiderlingClass != 0 )
    return &CDOTA_Unit_Broodmother_Spiderling::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Broodmother_SpiderlingClass;
  if ( `guard variable for'CDOTA_Unit_Broodmother_Spiderling::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Broodmother_SpiderlingClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Broodmother_Spiderling::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Broodmother_SpiderlingClassInfo) != 0 )
  {
    if ( `guard variable for'CDOTA_BaseNPC_Creep_Talking::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Creep_Talking::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClassInfo) != 0 )
    {
      EntityClassInfo = CDOTA_BaseNPC_Creep::GetEntityClassInfo();
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CDOTA_BaseNPC_Creep_Talking::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClassInfo,
        "CDOTA_BaseNPC_Creep_Talking",
        "npc_dota_talking_creep",
        0,
        EntityClassInfo);
      __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Creep_Talking::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Broodmother_Spiderling::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Broodmother_SpiderlingClassInfo,
      "CDOTA_Unit_Broodmother_Spiderling",
      "npc_dota_broodmother_spiderling",
      0,
      &CDOTA_BaseNPC_Creep_Talking::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Creep_TalkingClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Broodmother_Spiderling::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Broodmother_SpiderlingClassInfo);
  }
  CDOTA_Unit_Broodmother_Spiderling::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Broodmother_SpiderlingClass.m_pClassInfo = &CDOTA_Unit_Broodmother_Spiderling::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Broodmother_SpiderlingClassInfo;
  CDOTA_Unit_Broodmother_Spiderling::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Broodmother_SpiderlingClass.m_pBaseClassInfo = CDOTA_Unit_Broodmother_Spiderling::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Broodmother_SpiderlingClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Broodmother_SpiderlingClass = &CDOTA_Unit_Broodmother_Spiderling::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Broodmother_SpiderlingClass;
  CDOTA_Unit_Broodmother_Spiderling::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Broodmother_SpiderlingClassInfo.m_pClass = &CDOTA_Unit_Broodmother_Spiderling::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Broodmother_SpiderlingClass;
  CDOTA_Unit_Broodmother_Spiderling::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Broodmother_SpiderlingClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_Unit_Broodmother_SpiderlingClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Broodmother_Spiderling::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Broodmother_SpiderlingClass;
}


// CDOTA_Unit_Broodmother_Spiderling::GetBeastName  (line 86, @0x0000000002b8e200, libserver.so)
// strings: "spiderling"
const char *__fastcall CDOTA_Unit_Broodmother_Spiderling::GetBeastName(CDOTA_Unit_Broodmother_Spiderling *const this)
{
  return "spiderling";
}


// CDOTA_Unit_Broodmother_Spiderling::HasFlyingVision  (line 87, @0x0000000002b8e210, libserver.so)
bool __fastcall CDOTA_Unit_Broodmother_Spiderling::HasFlyingVision(CDOTA_Unit_Broodmother_Spiderling *const this)
{
  return 0;
}


// CDOTA_Unit_Broodmother_Spiderling::ShouldDoFlyHeightVisual  (line 88, @0x0000000002b8e220, libserver.so)
bool __fastcall CDOTA_Unit_Broodmother_Spiderling::ShouldDoFlyHeightVisual(
        CDOTA_Unit_Broodmother_Spiderling *const this)
{
  return 0;
}


// CDOTA_Unit_Broodmother_Spiderling::YouForgotToImplementOrDeclareServerClass  (line 91, @0x0000000002b344f0, libserver.so)
int __fastcall CDOTA_Unit_Broodmother_Spiderling::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Broodmother_Spiderling *const this)
{
  return 0;
}


// CDOTA_Unit_Broodmother_Spiderling::GetServerClass  (line 91, @0x0000000002b4c060, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Broodmother_Spiderling::GetServerClass(
        CDOTA_Unit_Broodmother_Spiderling *const this)
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


// CDOTA_Ability_Broodmother_SpawnSpiderlings::~CDOTA_Ability_Broodmother_SpawnSpiderlings  (line 104, @0x0000000002ba07c0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Broodmother_SpawnSpiderlings::~CDOTA_Ability_Broodmother_SpawnSpiderlings(
        CDOTA_Ability_Broodmother_SpawnSpiderlings *const this)
{
  this->_vptr_IHandleEntity = &off_44AF510;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Broodmother_SpawnSpiderlings::~CDOTA_Ability_Broodmother_SpawnSpiderlings  (line 104, @0x0000000002ba07e0, libserver.so)  // inlines: ~CDOTA_Ability_Broodmother_SpawnSpiderlings
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Broodmother_SpawnSpiderlings::~CDOTA_Ability_Broodmother_SpawnSpiderlings(
        CDOTA_Ability_Broodmother_SpawnSpiderlings *const this)
{
  this->_vptr_IHandleEntity = &off_44AF510;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Broodmother_SpawnSpiderlings::Schema_DynamicBinding  (line 106, @0x0000000002b8e230, libserver.so)
// globals: CDOTA_Ability_Broodmother_SpawnSpiderlings::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Broodmother_SpawnSpiderlings::Schema_DynamicBinding(
        const CDOTA_Ability_Broodmother_SpawnSpiderlings *const this)
{
  return CDOTA_Ability_Broodmother_SpawnSpiderlings::s_pSchemaBinding;
}


// CDOTA_Ability_Broodmother_SpawnSpiderlings::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 106, @0x0000000002b8e240, libserver.so)
// globals: CDOTA_Ability_Broodmother_SpawnSpiderlings::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Broodmother_SpawnSpiderlings::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Broodmother_SpawnSpiderlings::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Broodmother_SpawnSpiderlings::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Broodmother_SpawnSpiderlings::CEntityInstanceEntityClass::DestructInstance  (line 106, @0x0000000002b8e250, libserver.so)  // inlines: Destruct<CDOTA_Ability_Broodmother_SpawnSpiderlings>
void __fastcall CDOTA_Ability_Broodmother_SpawnSpiderlings::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Broodmother_SpawnSpiderlings::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Broodmother_SpawnSpiderlings::CEntityInstanceEntityClass::FreeInstance  (line 106, @0x0000000002b8e270, libserver.so)
void __fastcall CDOTA_Ability_Broodmother_SpawnSpiderlings::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Broodmother_SpawnSpiderlings::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Broodmother_SpawnSpiderlings::CEntityInstanceEntityClass::CanAllocate  (line 106, @0x0000000002b8e290, libserver.so)
bool __fastcall CDOTA_Ability_Broodmother_SpawnSpiderlings::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Broodmother_SpawnSpiderlings::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Broodmother_SpawnSpiderlings::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 106, @0x0000000002b8e2a0, libserver.so)
// globals: CDOTA_Ability_Broodmother_SpawnSpiderlings::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Broodmother_SpawnSpiderlings::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Broodmother_SpawnSpiderlings::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Broodmother_SpawnSpiderlings::s_pSchemaBinding;
}


// CDOTA_Ability_Broodmother_SpawnSpiderlings::CEntityInstanceEntityClass::AllocateInstance  (line 106, @0x0000000002b970a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Broodmother_SpawnSpiderlings::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Broodmother_SpawnSpiderlings::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Broodmother_SpawnSpiderlings::CEntityInstanceEntityClass::ConstructInstance  (line 106, @0x0000000002b9ccf0, libserver.so)  // inlines: CDOTA_Ability_Broodmother_SpawnSpiderlings, Construct<CDOTA_Ability_Broodmother_SpawnSpiderlings>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Broodmother_SpawnSpiderlings::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Broodmother_SpawnSpiderlings::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44AF510;
  }
  return p;
}


// CDOTA_Ability_Broodmother_SpawnSpiderlings::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 106, @0x0000000002ba9ee0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Broodmother_SpawnSpiderlings::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Broodmother_SpawnSpiderlings::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Broodmother_SpawnSpiderlings::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 106, @0x0000000002ba9f00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Broodmother_SpawnSpiderlings::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Broodmother_SpawnSpiderlings::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Broodmother_SpawnSpiderlings::GetEntityClassInternal  (line 106, @0x0000000002bc5f90, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "broodmother_spawn_spiderlings", "CDOTA_Ability_Broodmother_SpawnSpiderlings"
// globals: `guard variable for'CDOTA_Ability_Broodmother_SpawnSpiderlings::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpiderlingsClass, CDOTA_Ability_Broodmother_SpawnSpiderlings::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpiderlingsClass, __dso_handle, CDOTA_Ability_Broodmother_SpawnSpiderlings::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Broodmother_SpawnSpiderlings::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpiderlingsClassInfo, CDOTA_Ability_Broodmother_SpawnSpiderlings::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpiderlingsClassInfo
CEntityClass *__cdecl CDOTA_Ability_Broodmother_SpawnSpiderlings::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Broodmother_SpawnSpiderlings::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpiderlingsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Broodmother_SpawnSpiderlings::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpiderlingsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Broodmother_SpawnSpiderlings::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpiderlingsClass);
    CDOTA_Ability_Broodmother_SpawnSpiderlings::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpiderlingsClass._vptr_CEntityClass = off_44AF490;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Broodmother_SpawnSpiderlings::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpiderlingsClass);
    __cxa_atexit(
      CDOTA_Ability_Broodmother_SpawnSpiderlings::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Broodmother_SpawnSpiderlings::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpiderlingsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Broodmother_SpawnSpiderlingsClass != 0 )
    return &CDOTA_Ability_Broodmother_SpawnSpiderlings::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpiderlingsClass;
  if ( `guard variable for'CDOTA_Ability_Broodmother_SpawnSpiderlings::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpiderlingsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Broodmother_SpawnSpiderlings::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpiderlingsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Broodmother_SpawnSpiderlings::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpiderlingsClassInfo,
      "CDOTA_Ability_Broodmother_SpawnSpiderlings",
      "broodmother_spawn_spiderlings",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Broodmother_SpawnSpiderlings::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpiderlingsClassInfo);
  }
  CDOTA_Ability_Broodmother_SpawnSpiderlings::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpiderlingsClass.m_pClassInfo = &CDOTA_Ability_Broodmother_SpawnSpiderlings::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpiderlingsClassInfo;
  CDOTA_Ability_Broodmother_SpawnSpiderlings::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpiderlingsClass.m_pBaseClassInfo = CDOTA_Ability_Broodmother_SpawnSpiderlings::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpiderlingsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Broodmother_SpawnSpiderlingsClass = &CDOTA_Ability_Broodmother_SpawnSpiderlings::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpiderlingsClass;
  CDOTA_Ability_Broodmother_SpawnSpiderlings::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpiderlingsClassInfo.m_pClass = &CDOTA_Ability_Broodmother_SpawnSpiderlings::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpiderlingsClass;
  CDOTA_Ability_Broodmother_SpawnSpiderlings::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpiderlingsClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Broodmother_SpawnSpiderlingsClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Broodmother_SpawnSpiderlings::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpiderlingsClass;
}


// CDOTA_Ability_Broodmother_SpawnSpiderlings::OnSpellStart  (line 119, @0x0000000002b69540, libserver.so)  // inlines: CEntityHandle, CHandle, Color, GetEHandle, GetEntryIndex, GetSerialNumber, Set, operator=, sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorTarget, CDOTA_ProjectileManager::CreateTrackingProjectile, CDOTA_BaseNPC::UnitEmitSound, __stack_chk_fail
// strings: "particles/units/heroes/hero_broodmother/broodmother_web_cast.vpcf", "Hero_Broodmother.SpawnSpiderlingsCast"
void __fastcall CDOTA_Ability_Broodmother_SpawnSpiderlings::OnSpellStart(
        CDOTA_Ability_Broodmother_SpawnSpiderlings *const this)
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

  info.pAbility = this;
  v12 = __readfsqword(0x28u);
  info.hSource.m_Index = -1;
  info.hTarget.m_Index = -1;
  info.colorGemColor = 0;
  info.pAttackRecord = 0;
  info.iMoveSpeed = 0;
  info.iSourceAttachment = 1;
  info.vSourceLoc.x = vec3_origin.x;
  y = vec3_origin.y;
  info.bProvidesVision = 0;
  info.vSourceLoc.y = y;
  z = vec3_origin.z;
  info.iVisionTeamNumber = -1;
  info.vSourceLoc.z = z;
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
  info.pszEffectName = "particles/units/heroes/hero_broodmother/broodmother_web_cast.vpcf";
  info.iMoveSpeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "projectile_speed", -1, 0);
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
  info.iSourceAttachment = 3;
  CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
  v10 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v10, "Hero_Broodmother.SpawnSpiderlingsCast", 0.0, 0, 0);
}


// CDOTA_Ability_Broodmother_SpawnSpiderlings::OnProjectileHit  (line 139, @0x0000000002b769b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTABaseAbility::GetLevelSpecialValueFor<int>, ApplyDamage, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_broodmother_spawn_spiderlings", "Hero_Broodmother.SpawnSpiderlingsImpact"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Broodmother_SpawnSpiderlings::OnProjectileHit(
        CDOTA_Ability_Broodmother_SpawnSpiderlings *const this,
        _WORD *hTarget,
        const Vector *const vLocation)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  unsigned __int64 m_Value; // rax
  float v9; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v11; // rax
  float buff_duration; // [rsp+Ch] [rbp-44h]
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
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && !m_pInstance->m_bIsWaitingToSpawn.m_Value )
        {
          m_Value = m_pInstance->m_nUnitState64.m_Value;
          if ( (m_Value & 0x100) == 0
            && (m_Value & 0x200) == 0
            && !CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, this, 1) )
          {
            CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "buff_duration", -1, 0);
            KeyValues::KeyValues(&kv, "modifier_broodmother_spawn_spiderlings");
            KeyValues::SetFloat(&kv, "duration", v9);
            Caster = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, this, "modifier_broodmother_spawn_spiderlings", &kv, 0);
            buff_duration = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
            v11 = CDOTABaseAbility::GetCaster(this);
            ApplyDamage(v11, m_pInstance, this, buff_duration, 2, 0);
            CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Broodmother.SpawnSpiderlingsImpact", 0.0, 0, 0);
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
  }
  return 1;
}


// CDOTA_Ability_Broodmother_SpawnSpiderlings::GetAbilityDamageToTargetOverInterval  (line 165, @0x0000000002b69770, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Broodmother_SpawnSpiderlings::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Broodmother_SpawnSpiderlings *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 1);
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Modifier_Broodmother_SpawnSpiderlings::~CDOTA_Modifier_Broodmother_SpawnSpiderlings  (line 178, @0x0000000002b9b830, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Broodmother_SpawnSpiderlings::~CDOTA_Modifier_Broodmother_SpawnSpiderlings(
        CDOTA_Modifier_Broodmother_SpawnSpiderlings *const this)
{
  this->_vptr_CDOTA_Buff = &off_44AFFD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Broodmother_SpawnSpiderlings::~CDOTA_Modifier_Broodmother_SpawnSpiderlings  (line 178, @0x0000000002b9b850, libserver.so)  // inlines: ~CDOTA_Modifier_Broodmother_SpawnSpiderlings
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Broodmother_SpawnSpiderlings::~CDOTA_Modifier_Broodmother_SpawnSpiderlings(
        CDOTA_Modifier_Broodmother_SpawnSpiderlings *const this)
{
  this->_vptr_CDOTA_Buff = &off_44AFFD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Broodmother_SpawnSpiderlings::IsDebuff  (line 183, @0x0000000002b8e2b0, libserver.so)
bool __fastcall CDOTA_Modifier_Broodmother_SpawnSpiderlings::IsDebuff(
        CDOTA_Modifier_Broodmother_SpawnSpiderlings *const this)
{
  return 1;
}


// CDOTA_Modifier_Broodmother_SpawnSpiderlings::GetEffectName  (line 189, @0x0000000002b8e2c0, libserver.so)
// strings: "particles/units/heroes/hero_broodmother/broodmother_spiderlings_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Broodmother_SpawnSpiderlings::GetEffectName(
        CDOTA_Modifier_Broodmother_SpawnSpiderlings *const this)
{
  return "particles/units/heroes/hero_broodmother/broodmother_spiderlings_debuff.vpcf";
}


// CDOTA_Modifier_Broodmother_SpawnSpiderlings::OnCreated  (line 201, @0x0000000002b7d940, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "spiderling_duration"
void __fastcall CDOTA_Modifier_Broodmother_SpawnSpiderlings::OnCreated(
        CDOTA_Modifier_Broodmother_SpawnSpiderlings *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->spiderling_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "spiderling_duration", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->count = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "count", -1, 0);
      return;
    }
  }
  else
  {
    this->spiderling_duration = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->count = 0;
}


// CDOTA_Modifier_Broodmother_SpawnSpiderlings::OnDestroy  (line 211, @0x0000000002b646d0, libserver.so)  // inlines: GetTeamNumber, NetworkStateChanged, Set, SetUnitLabelIndex, entindex, operator=<int>
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, DOTA_Character_ScriptSpawn_Synchronous, CDOTA_BaseNPC::SetControllableByPlayer, CEntityInstance::GetEntityIndex (22 total)
// strings: "particles/units/heroes/hero_broodmother/broodmother_spiderlings_spawn.vpcf", "Hero_Broodmother.SpawnSpiderlings", "npc_dota_broodmother_spiderling", "modifier_kill", "special_bonus_unique_broodmother_2", "modifier_broodmother_spider_hp"
void __fastcall CDOTA_Modifier_Broodmother_SpawnSpiderlings::OnDestroy(
        CDOTA_Modifier_Broodmother_SpawnSpiderlings *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *v4; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  int i; // r14d
  CDOTA_BaseNPC *Caster; // rbx
  int m_Value; // r12d
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // r12
  CDOTA_BaseNPC *v13; // rax
  int v14; // eax
  unsigned __int8 m_Data; // bl
  int v16; // ebx
  CDOTA_BaseNPC *v17; // rax
  CDOTABaseAbility *AbilityByIndex; // rax
  float v19; // xmm1_4
  CDOTABaseAbility *v20; // rbx
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v24; // rbx
  CDOTA_BaseNPC *v25; // rax
  int count; // [rsp+1Ch] [rbp-74h] BYREF
  KeyValues kv; // [rsp+20h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v29; // [rsp+58h] [rbp-38h]
  Vector v30; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v31; // 0:xmm0_8.8,8:xmm1_4.4

  v29 = __readfsqword(0x28u);
  Parent = CDOTA_Buff::GetParent(this);
  if ( (*(Parent->_vptr_IHandleEntity + 408))(Parent) == 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(Ability, &count, "count");
    v4 = CDOTA_Buff::GetParent(this);
    ParticleManager = GetParticleManager();
    LODWORD(v4) = CDOTA_ParticleManager::CreateParticle(
                    ParticleManager,
                    "particles/units/heroes/hero_broodmother/broodmother_spiderlings_spawn.vpcf",
                    0,
                    v4,
                    0,
                    0);
    v6 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v6, v4);
    v7 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::UnitEmitSound(v7, "Hero_Broodmother.SpawnSpiderlings", 0.0, 0, 0);
    if ( count > 0 )
    {
      for ( i = 0; i < count; ++i )
      {
        Caster = CDOTA_Buff::GetCaster(this);
        m_Value = CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value;
        v11 = CDOTA_Buff::GetParent(this);
        v30 = *CBaseEntity::GetAbsOrigin(v11);
        v12 = DOTA_Character_ScriptSpawn_Synchronous("npc_dota_broodmother_spiderling", m_Value, Caster, 0, 0, v30);
        if ( v12 != 0 )
        {
          v13 = CDOTA_Buff::GetCaster(this);
          v14 = (*(v13->_vptr_IHandleEntity + 414))(v13);
          CDOTA_BaseNPC::SetControllableByPlayer(v12, v14, 0);
          m_Data = CEntityInstance::GetEntityIndex(v12).m_Data;
          if ( m_Data != v12->m_nUnitLabelIndex.m_Value )
          {
            (*(v12->_vptr_IHandleEntity + 22))(v12, 3417, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            v12->m_nUnitLabelIndex.m_Value = m_Data;
          }
          v16 = 0;
          v17 = CDOTA_Buff::GetParent(this);
          v31 = *CBaseEntity::GetAbsOrigin(v17);
          FindClearSpaceForUnit(v12, v31, 1);
          do
          {
            AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v12, v16);
            if ( AbilityByIndex != 0 )
              CDOTABaseAbility::UpgradeAbility(AbilityByIndex, 0);
            ++v16;
          }
          while ( v16 != 24 );
          KeyValues::KeyValues(&kv, "modifier_kill");
          KeyValues::SetFloat(&kv, "duration", v19);
          v20 = CDOTA_Buff::GetAbility(this);
          v21 = CDOTA_Buff::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(v12, v21, v20, "modifier_kill", &kv, 0);
          v22 = CDOTA_Buff::GetCaster(this);
          AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v22, "special_bonus_unique_broodmother_2", 0);
          if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
          {
            KeyValues::KeyValues(&kv2, "modifier_broodmother_spider_hp");
            v24 = CDOTA_Buff::GetAbility(this);
            v25 = CDOTA_Buff::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(v12, v25, v24, "modifier_broodmother_spider_hp", &kv2, 0);
            KeyValues::~KeyValues(&kv2);
          }
          KeyValues::~KeyValues(&kv);
        }
      }
    }
  }
}


// CDOTA_Modifier_Broodmother_Spider_HP::~CDOTA_Modifier_Broodmother_Spider_HP  (line 266, @0x0000000002b9b7e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Broodmother_Spider_HP::~CDOTA_Modifier_Broodmother_Spider_HP(
        CDOTA_Modifier_Broodmother_Spider_HP *const this)
{
  this->_vptr_CDOTA_Buff = &off_44B02F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Broodmother_Spider_HP::~CDOTA_Modifier_Broodmother_Spider_HP  (line 266, @0x0000000002b9b800, libserver.so)  // inlines: ~CDOTA_Modifier_Broodmother_Spider_HP
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Broodmother_Spider_HP::~CDOTA_Modifier_Broodmother_Spider_HP(
        CDOTA_Modifier_Broodmother_Spider_HP *const this)
{
  this->_vptr_CDOTA_Buff = &off_44B02F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Broodmother_Spider_HP::IsPermanent  (line 271, @0x0000000002b8e2d0, libserver.so)
bool __fastcall CDOTA_Modifier_Broodmother_Spider_HP::IsPermanent(CDOTA_Modifier_Broodmother_Spider_HP *const this)
{
  return 1;
}


// CDOTA_Modifier_Broodmother_Spider_HP::OnCreated  (line 286, @0x0000000002b75350, libserver.so)  // inlines: SetBaseMaxHealth
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::Heal
// strings: "special_bonus_unique_broodmother_2"
void __fastcall CDOTA_Modifier_Broodmother_Spider_HP::OnCreated(
        CDOTA_Modifier_Broodmother_Spider_HP *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *Parent; // rax
  __m128i v6; // xmm1
  CDOTABaseAbility *Ability; // r12
  CDOTA_BaseNPC *v8; // rax
  float value; // [rsp+Ch] [rbp-14h]

  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_broodmother_2", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->value = CDOTABaseAbility::GetLevelSpecialValueFor<float>(AbilityByName, "value", 1, 1);
  Parent = CDOTA_Buff::GetParent(this);
  *v6.m128i_i32 = (this->value + (*(Parent->_vptr_IHandleEntity + 156))(Parent));
  LODWORD(CDOTA_Buff::GetParent(this)->m_flBaseMaxHealth) = _mm_cvtsi128_si32(v6);
  Ability = CDOTA_Buff::GetAbility(this);
  value = this->value;
  v8 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::Heal(v8, value, Ability, 0, 1);
}


// CDOTA_Modifier_Broodmother_Spider_HP::DeclareFunctions  (line 302, @0x0000000002b34500, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Broodmother_Spider_HP::GetModifierHealthBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Broodmother_Spider_HP::DeclareFunctions(
        CDOTA_Modifier_Broodmother_Spider_HP *const this)
{
  this->m_Functions[58].__pfn = CDOTA_Modifier_Broodmother_Spider_HP::GetModifierHealthBonus;
  this->m_Functions[58].__delta = 0;
}


// CDOTA_Modifier_Broodmother_Spider_HP::GetModifierHealthBonus  (line 309, @0x0000000002b34520, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Broodmother_Spider_HP::GetModifierHealthBonus(
        CDOTA_Modifier_Broodmother_Spider_HP *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->value;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Broodmother_SpawnSpiderite::~CDOTA_Ability_Broodmother_SpawnSpiderite  (line 320, @0x0000000002ba0810, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Broodmother_SpawnSpiderite::~CDOTA_Ability_Broodmother_SpawnSpiderite(
        CDOTA_Ability_Broodmother_SpawnSpiderite *const this)
{
  this->_vptr_IHandleEntity = &off_44B0650;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Broodmother_SpawnSpiderite::~CDOTA_Ability_Broodmother_SpawnSpiderite  (line 320, @0x0000000002ba0830, libserver.so)  // inlines: ~CDOTA_Ability_Broodmother_SpawnSpiderite
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Broodmother_SpawnSpiderite::~CDOTA_Ability_Broodmother_SpawnSpiderite(
        CDOTA_Ability_Broodmother_SpawnSpiderite *const this)
{
  this->_vptr_IHandleEntity = &off_44B0650;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Broodmother_SpawnSpiderite::Schema_DynamicBinding  (line 322, @0x0000000002b8e2e0, libserver.so)
// globals: CDOTA_Ability_Broodmother_SpawnSpiderite::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Broodmother_SpawnSpiderite::Schema_DynamicBinding(
        const CDOTA_Ability_Broodmother_SpawnSpiderite *const this)
{
  return CDOTA_Ability_Broodmother_SpawnSpiderite::s_pSchemaBinding;
}


// CDOTA_Ability_Broodmother_SpawnSpiderite::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 322, @0x0000000002b8e2f0, libserver.so)
// globals: CDOTA_Ability_Broodmother_SpawnSpiderite::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Broodmother_SpawnSpiderite::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Broodmother_SpawnSpiderite::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Broodmother_SpawnSpiderite::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Broodmother_SpawnSpiderite::CEntityInstanceEntityClass::DestructInstance  (line 322, @0x0000000002b8e300, libserver.so)  // inlines: Destruct<CDOTA_Ability_Broodmother_SpawnSpiderite>
void __fastcall CDOTA_Ability_Broodmother_SpawnSpiderite::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Broodmother_SpawnSpiderite::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Broodmother_SpawnSpiderite::CEntityInstanceEntityClass::FreeInstance  (line 322, @0x0000000002b8e320, libserver.so)
void __fastcall CDOTA_Ability_Broodmother_SpawnSpiderite::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Broodmother_SpawnSpiderite::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Broodmother_SpawnSpiderite::CEntityInstanceEntityClass::CanAllocate  (line 322, @0x0000000002b8e340, libserver.so)
bool __fastcall CDOTA_Ability_Broodmother_SpawnSpiderite::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Broodmother_SpawnSpiderite::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Broodmother_SpawnSpiderite::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 322, @0x0000000002b8e350, libserver.so)
// globals: CDOTA_Ability_Broodmother_SpawnSpiderite::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Broodmother_SpawnSpiderite::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Broodmother_SpawnSpiderite::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Broodmother_SpawnSpiderite::s_pSchemaBinding;
}


// CDOTA_Ability_Broodmother_SpawnSpiderite::CEntityInstanceEntityClass::AllocateInstance  (line 322, @0x0000000002b970e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Broodmother_SpawnSpiderite::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Broodmother_SpawnSpiderite::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Broodmother_SpawnSpiderite::CEntityInstanceEntityClass::ConstructInstance  (line 322, @0x0000000002b9cd20, libserver.so)  // inlines: CDOTA_Ability_Broodmother_SpawnSpiderite, Construct<CDOTA_Ability_Broodmother_SpawnSpiderite>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Broodmother_SpawnSpiderite::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Broodmother_SpawnSpiderite::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44B0650;
  }
  return p;
}


// CDOTA_Ability_Broodmother_SpawnSpiderite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 322, @0x0000000002ba9f30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Broodmother_SpawnSpiderite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Broodmother_SpawnSpiderite::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Broodmother_SpawnSpiderite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 322, @0x0000000002ba9f50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Broodmother_SpawnSpiderite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Broodmother_SpawnSpiderite::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal  (line 322, @0x0000000002bd1680, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "broodmother_spawn_spiderite", "CDOTA_Ability_Broodmother_SpawnSpiderite"
// globals: `guard variable for'CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass, CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Broodmother_SpawnSpiderite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClassInfo, CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClassInfo
CEntityClass *__cdecl CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass) != 0 )
  {
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_pClassInfo = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_flags = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_pInputs = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_nInputCount = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_pOutputs = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_nOutputCount = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_pGameClass = 0;
    CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass._vptr_CEntityClass = off_44B05D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass);
    __cxa_atexit(
      CDOTA_Ability_Broodmother_SpawnSpiderite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Broodmother_SpawnSpideriteClass != 0 )
    return &CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass;
  if ( `guard variable for'CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClassInfo,
      "CDOTA_Ability_Broodmother_SpawnSpiderite",
      "broodmother_spawn_spiderite",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClassInfo);
  }
  CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_pClassInfo = &CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClassInfo;
  CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_pBaseClassInfo = CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Broodmother_SpawnSpideriteClass = &CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass;
  CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClassInfo.m_pClass = &CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass;
  CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Broodmother_SpawnSpideriteClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Broodmother_SpawnSpiderite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpawnSpideriteClass;
}


// CDOTA_Ability_Broodmother_SpawnSpiderite::GetIntrinsicModifierName  (line 325, @0x0000000002b8e360, libserver.so)
// strings: "modifier_broodmother_spawn_spiderite"
const char *__fastcall CDOTA_Ability_Broodmother_SpawnSpiderite::GetIntrinsicModifierName(
        CDOTA_Ability_Broodmother_SpawnSpiderite *const this)
{
  return "modifier_broodmother_spawn_spiderite";
}


// CDOTA_Modifier_Broodmother_SpawnSpiderite::~CDOTA_Modifier_Broodmother_SpawnSpiderite  (line 334, @0x0000000002b9b790, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Broodmother_SpawnSpiderite::~CDOTA_Modifier_Broodmother_SpawnSpiderite(
        CDOTA_Modifier_Broodmother_SpawnSpiderite *const this)
{
  this->_vptr_CDOTA_Buff = &off_44B1110;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Broodmother_SpawnSpiderite::~CDOTA_Modifier_Broodmother_SpawnSpiderite  (line 334, @0x0000000002b9b7b0, libserver.so)  // inlines: ~CDOTA_Modifier_Broodmother_SpawnSpiderite
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Broodmother_SpawnSpiderite::~CDOTA_Modifier_Broodmother_SpawnSpiderite(
        CDOTA_Modifier_Broodmother_SpawnSpiderite *const this)
{
  this->_vptr_CDOTA_Buff = &off_44B1110;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Broodmother_SpawnSpiderite::IsHidden  (line 339, @0x0000000002b8e370, libserver.so)
bool __fastcall CDOTA_Modifier_Broodmother_SpawnSpiderite::IsHidden(
        CDOTA_Modifier_Broodmother_SpawnSpiderite *const this)
{
  return 1;
}


// CDOTA_Modifier_Broodmother_SpawnSpiderite::OnCreated  (line 354, @0x0000000002b7d7e0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
void __fastcall CDOTA_Modifier_Broodmother_SpawnSpiderite::OnCreated(
        CDOTA_Modifier_Broodmother_SpawnSpiderite *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->buff_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "buff_duration", -1, 0);
  else
    this->buff_duration = 0.0;
}


// CDOTA_Modifier_Broodmother_SpawnSpiderite::DeclareFunctions  (line 361, @0x0000000002b34540, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Broodmother_SpawnSpiderite::DeclareFunctions(
        CDOTA_Modifier_Broodmother_SpawnSpiderite *const this)
{
  this->m_Functions[137].__pfn = (&stru_10 + 697);
  this->m_Functions[137].__delta = 0;
}


// CDOTA_Modifier_Broodmother_SpawnSpiderite::OnAttacked  (line 368, @0x0000000002b4a630, libserver.so)  // inlines: Attacker, AttackerNPC, CEntityHandle, Get, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetPtr, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_broodmother_spawn_spiderite_debuff"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Broodmother_SpawnSpiderite::OnAttacked(
        CDOTA_Modifier_Broodmother_SpawnSpiderite *const this,
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
  int m_Id; // eax
  float v14; // xmm1_4
  uint32 v15; // eax
  CEntityInstance *v16; // rdx
  CEntityIdentity *v17; // rcx
  CEntityIdentity *v18; // rcx
  CDOTABaseAbility *Ability; // rbx
  CDOTA_BaseNPC *Caster; // rax
  unsigned __int16 v21; // dx
  int v22; // edi
  CBaseEntity *v23; // rsi
  int v24; // ecx
  CEntityIdentity *v25; // rax
  CEntityIdentity *v26; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v28; // [rsp+28h] [rbp-28h]

  v28 = __readfsqword(0x28u);
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
          v9 = params->htarget.m_Index;
          if ( v9 + 2 > 1 )
          {
            v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
            if ( v10 != 0 )
            {
              v11 = &v10[params->htarget.m_Index & 0x1FF];
              if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
              {
                v12 = v11->m_pInstance;
                if ( v11->m_pInstance != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 )
                {
                  m_Id = v12[43].m_iszPrivateVScripts.u.m_Id;
                  if ( (m_Id & 0x10) == 0 && (m_Id & 0x193) != 0 && (BYTE1(v12[58]._vptr_IHandleEntity) & 2) == 0 )
                  {
                    KeyValues::KeyValues(&kv, "modifier_broodmother_spawn_spiderite_debuff");
                    KeyValues::SetFloat(&kv, "duration", v14);
                    v15 = params->hattacker.m_Index;
                    v16 = 0;
                    if ( v15 + 2 > 1 )
                    {
                      v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9)
                                                                           & 0x3F];
                      if ( v17 != 0 )
                      {
                        v18 = &v17[params->hattacker.m_Index & 0x1FF];
                        if ( v18 != 0 && v15 == v18->m_EHandle.m_Index )
                          v16 = v18->m_pInstance;
                      }
                    }
                    KeyValues::SetPtr(&kv, "parent", v16);
                    Ability = CDOTA_Buff::GetAbility(this);
                    Caster = CDOTA_Buff::GetCaster(this);
                    if ( Caster->m_hOwnerEntity.m_Value.m_Index == -1 )
                    {
                      v21 = 0x7FFF;
                      v22 = 0x7FFF;
                    }
                    else
                    {
                      v21 = Caster->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
                      v22 = v21;
                    }
                    v23 = 0;
                    v24 = (Caster->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v21 & 0x7FFF;
                    if ( (v24 + 2) > 1 )
                    {
                      v25 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v22 >> 9];
                      if ( v25 != 0 )
                      {
                        v26 = &v25[v22 & 0x1FF];
                        if ( v26 != 0 && v24 == v26->m_EHandle.m_Index )
                          v23 = v26->m_pInstance;
                      }
                    }
                    CDOTA_BaseNPC::AddNewModifier(
                      v12,
                      v23,
                      Ability,
                      "modifier_broodmother_spawn_spiderite_debuff",
                      &kv,
                      0);
                    KeyValues::~KeyValues(&kv);
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


// CDOTA_Modifier_Broodmother_SpawnSpideriteDebuff::~CDOTA_Modifier_Broodmother_SpawnSpideriteDebuff  (line 394, @0x0000000002b9b740, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Broodmother_SpawnSpideriteDebuff::~CDOTA_Modifier_Broodmother_SpawnSpideriteDebuff(
        CDOTA_Modifier_Broodmother_SpawnSpideriteDebuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_44B1430;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Broodmother_SpawnSpideriteDebuff::~CDOTA_Modifier_Broodmother_SpawnSpideriteDebuff  (line 394, @0x0000000002b9b760, libserver.so)  // inlines: ~CDOTA_Modifier_Broodmother_SpawnSpideriteDebuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Broodmother_SpawnSpideriteDebuff::~CDOTA_Modifier_Broodmother_SpawnSpideriteDebuff(
        CDOTA_Modifier_Broodmother_SpawnSpideriteDebuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_44B1430;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Broodmother_SpawnSpideriteDebuff::IsDebuff  (line 399, @0x0000000002b8e380, libserver.so)
bool __fastcall CDOTA_Modifier_Broodmother_SpawnSpideriteDebuff::IsDebuff(
        CDOTA_Modifier_Broodmother_SpawnSpideriteDebuff *const this)
{
  return 1;
}


// CDOTA_Modifier_Broodmother_SpawnSpideriteDebuff::OnCreated  (line 413, @0x0000000002b36f00, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, ToDOTABaseNPC, operator=
// calls: KeyValues::GetPtr
void __fastcall CDOTA_Modifier_Broodmother_SpawnSpideriteDebuff::OnCreated(
        CDOTA_Modifier_Broodmother_SpawnSpideriteDebuff *const this,
        KeyValues *pKV)
{
  _BYTE *Ptr; // rax
  __int64 v4; // rdx
  int v5; // eax
  __int16 v6; // cx

  Ptr = KeyValues::GetPtr(pKV, "parent", 0);
  if ( Ptr != 0 && Ptr[339] != 0 && (v4 = *(Ptr + 1)) != 0 )
  {
    v5 = (*(v4 + 16) >> 15) - (*(v4 + 48) & 1);
    if ( *(v4 + 16) == -1 )
      v6 = 0x7FFF;
    else
      v6 = *(v4 + 16) & 0x7FFF;
    LOWORD(this->m_hParentSpider.m_Index) = v6 | this->m_hParentSpider.m_Index & 0x8000;
    this->m_hParentSpider.m_Index = (v5 << 15) | this->m_hParentSpider.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hParentSpider.m_Index = -1;
  }
}


// CDOTA_Modifier_Broodmother_SpawnSpideriteDebuff::OnDestroy  (line 421, @0x0000000002b81850, libserver.so)  // inlines: DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, GetTeamNumber
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, DOTA_Character_ScriptSpawn_Synchronous, CDOTA_BaseNPC::SetControllableByPlayer, FindClearSpaceForUnit, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::FindAbilityByName (15 total)
// strings: "npc_dota_broodmother_spiderite", "spiderite_duration", "modifier_kill", "special_bonus_unique_broodmother_2", "modifier_broodmother_spider_hp"
void __fastcall CDOTA_Modifier_Broodmother_SpawnSpideriteDebuff::OnDestroy(
        CDOTA_Modifier_Broodmother_SpawnSpideriteDebuff *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *Caster; // r13
  int m_Value; // r12d
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // r12
  CDOTA_BaseNPC *v7; // rax
  int v8; // eax
  CDOTA_BaseNPC *v9; // rax
  CDOTABaseAbility *Ability; // rax
  float v11; // xmm1_4
  CDOTABaseAbility *v12; // r14
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v16; // r15
  CDOTA_BaseNPC *v17; // rax
  KeyValues kv; // [rsp+10h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-38h]
  Vector v21; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v22; // 0:xmm0_8.8,8:xmm1_4.4

  v20 = __readfsqword(0x28u);
  Parent = CDOTA_Buff::GetParent(this);
  if ( (*(Parent->_vptr_IHandleEntity + 408))(Parent) == 0 && CDOTA_Buff::GetCaster(this) != 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    m_Value = CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value;
    v5 = CDOTA_Buff::GetParent(this);
    v21 = *CBaseEntity::GetAbsOrigin(v5);
    v6 = DOTA_Character_ScriptSpawn_Synchronous("npc_dota_broodmother_spiderite", m_Value, Caster, 0, 0, v21);
    if ( v6 != 0 )
    {
      v7 = CDOTA_Buff::GetCaster(this);
      v8 = (*(v7->_vptr_IHandleEntity + 414))(v7);
      CDOTA_BaseNPC::SetControllableByPlayer(v6, v8, 0);
      v9 = CDOTA_Buff::GetParent(this);
      v22 = *CBaseEntity::GetAbsOrigin(v9);
      FindClearSpaceForUnit(v6, v22, 1);
      Ability = CDOTA_Buff::GetAbility(this);
      if ( Ability != 0 )
        CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "spiderite_duration", -1, 0);
      KeyValues::KeyValues(&kv, "modifier_kill");
      KeyValues::SetFloat(&kv, "duration", v11);
      v12 = CDOTA_Buff::GetAbility(this);
      v13 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v6, v13, v12, "modifier_kill", &kv, 0);
      v14 = CDOTA_Buff::GetCaster(this);
      AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v14, "special_bonus_unique_broodmother_2", 0);
      if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
      {
        KeyValues::KeyValues(&kv2, "modifier_broodmother_spider_hp");
        v16 = CDOTA_Buff::GetAbility(this);
        v17 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v6, v17, v16, "modifier_broodmother_spider_hp", &kv2, 0);
        KeyValues::~KeyValues(&kv2);
      }
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Ability_Broodmother_PoisonSting::~CDOTA_Ability_Broodmother_PoisonSting  (line 457, @0x0000000002ba0860, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Broodmother_PoisonSting::~CDOTA_Ability_Broodmother_PoisonSting(
        CDOTA_Ability_Broodmother_PoisonSting *const this)
{
  this->_vptr_IHandleEntity = &off_44B1790;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Broodmother_PoisonSting::~CDOTA_Ability_Broodmother_PoisonSting  (line 457, @0x0000000002ba0880, libserver.so)  // inlines: ~CDOTA_Ability_Broodmother_PoisonSting
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Broodmother_PoisonSting::~CDOTA_Ability_Broodmother_PoisonSting(
        CDOTA_Ability_Broodmother_PoisonSting *const this)
{
  this->_vptr_IHandleEntity = &off_44B1790;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Broodmother_PoisonSting::Schema_DynamicBinding  (line 459, @0x0000000002b8e390, libserver.so)
// globals: CDOTA_Ability_Broodmother_PoisonSting::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Broodmother_PoisonSting::Schema_DynamicBinding(
        const CDOTA_Ability_Broodmother_PoisonSting *const this)
{
  return CDOTA_Ability_Broodmother_PoisonSting::s_pSchemaBinding;
}


// CDOTA_Ability_Broodmother_PoisonSting::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 459, @0x0000000002b8e3a0, libserver.so)
// globals: CDOTA_Ability_Broodmother_PoisonSting::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Broodmother_PoisonSting::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Broodmother_PoisonSting::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Broodmother_PoisonSting::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Broodmother_PoisonSting::CEntityInstanceEntityClass::DestructInstance  (line 459, @0x0000000002b8e3b0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Broodmother_PoisonSting>
void __fastcall CDOTA_Ability_Broodmother_PoisonSting::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Broodmother_PoisonSting::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Broodmother_PoisonSting::CEntityInstanceEntityClass::FreeInstance  (line 459, @0x0000000002b8e3d0, libserver.so)
void __fastcall CDOTA_Ability_Broodmother_PoisonSting::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Broodmother_PoisonSting::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Broodmother_PoisonSting::CEntityInstanceEntityClass::CanAllocate  (line 459, @0x0000000002b8e3f0, libserver.so)
bool __fastcall CDOTA_Ability_Broodmother_PoisonSting::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Broodmother_PoisonSting::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Broodmother_PoisonSting::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 459, @0x0000000002b8e400, libserver.so)
// globals: CDOTA_Ability_Broodmother_PoisonSting::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Broodmother_PoisonSting::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Broodmother_PoisonSting::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Broodmother_PoisonSting::s_pSchemaBinding;
}


// CDOTA_Ability_Broodmother_PoisonSting::CEntityInstanceEntityClass::AllocateInstance  (line 459, @0x0000000002b97120, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Broodmother_PoisonSting::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Broodmother_PoisonSting::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Broodmother_PoisonSting::CEntityInstanceEntityClass::ConstructInstance  (line 459, @0x0000000002b9cd50, libserver.so)  // inlines: CDOTA_Ability_Broodmother_PoisonSting, Construct<CDOTA_Ability_Broodmother_PoisonSting>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Broodmother_PoisonSting::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Broodmother_PoisonSting::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44B1790;
  }
  return p;
}


// CDOTA_Ability_Broodmother_PoisonSting::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 459, @0x0000000002ba9f80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Broodmother_PoisonSting::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Broodmother_PoisonSting::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Broodmother_PoisonSting::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 459, @0x0000000002ba9fa0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Broodmother_PoisonSting::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Broodmother_PoisonSting::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Broodmother_PoisonSting::GetEntityClassInternal  (line 459, @0x0000000002bc60e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "broodmother_poison_sting", "CDOTA_Ability_Broodmother_PoisonSting"
// globals: `guard variable for'CDOTA_Ability_Broodmother_PoisonSting::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_PoisonStingClass, CDOTA_Ability_Broodmother_PoisonSting::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_PoisonStingClass, __dso_handle, CDOTA_Ability_Broodmother_PoisonSting::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Broodmother_PoisonSting::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_PoisonStingClassInfo, CDOTA_Ability_Broodmother_PoisonSting::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_PoisonStingClassInfo
CEntityClass *__cdecl CDOTA_Ability_Broodmother_PoisonSting::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Broodmother_PoisonSting::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_PoisonStingClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Broodmother_PoisonSting::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_PoisonStingClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Broodmother_PoisonSting::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_PoisonStingClass);
    CDOTA_Ability_Broodmother_PoisonSting::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_PoisonStingClass._vptr_CEntityClass = off_44B1710;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Broodmother_PoisonSting::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_PoisonStingClass);
    __cxa_atexit(
      CDOTA_Ability_Broodmother_PoisonSting::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Broodmother_PoisonSting::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_PoisonStingClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Broodmother_PoisonStingClass != 0 )
    return &CDOTA_Ability_Broodmother_PoisonSting::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_PoisonStingClass;
  if ( `guard variable for'CDOTA_Ability_Broodmother_PoisonSting::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_PoisonStingClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Broodmother_PoisonSting::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_PoisonStingClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Broodmother_PoisonSting::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_PoisonStingClassInfo,
      "CDOTA_Ability_Broodmother_PoisonSting",
      "broodmother_poison_sting",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Broodmother_PoisonSting::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_PoisonStingClassInfo);
  }
  CDOTA_Ability_Broodmother_PoisonSting::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_PoisonStingClass.m_pClassInfo = &CDOTA_Ability_Broodmother_PoisonSting::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_PoisonStingClassInfo;
  CDOTA_Ability_Broodmother_PoisonSting::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_PoisonStingClass.m_pBaseClassInfo = CDOTA_Ability_Broodmother_PoisonSting::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_PoisonStingClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Broodmother_PoisonStingClass = &CDOTA_Ability_Broodmother_PoisonSting::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_PoisonStingClass;
  CDOTA_Ability_Broodmother_PoisonSting::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_PoisonStingClassInfo.m_pClass = &CDOTA_Ability_Broodmother_PoisonSting::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_PoisonStingClass;
  CDOTA_Ability_Broodmother_PoisonSting::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_PoisonStingClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Broodmother_PoisonStingClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Broodmother_PoisonSting::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_PoisonStingClass;
}


// CDOTA_Ability_Broodmother_PoisonSting::GetIntrinsicModifierName  (line 462, @0x0000000002b8e410, libserver.so)
// strings: "modifier_broodmother_poison_sting"
const char *__fastcall CDOTA_Ability_Broodmother_PoisonSting::GetIntrinsicModifierName(
        CDOTA_Ability_Broodmother_PoisonSting *const this)
{
  return "modifier_broodmother_poison_sting";
}


// CDOTA_Modifier_Broodmother_PoisonSting::~CDOTA_Modifier_Broodmother_PoisonSting  (line 471, @0x0000000002b9b6f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Broodmother_PoisonSting::~CDOTA_Modifier_Broodmother_PoisonSting(
        CDOTA_Modifier_Broodmother_PoisonSting *const this)
{
  this->_vptr_CDOTA_Buff = &off_44B2250;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Broodmother_PoisonSting::~CDOTA_Modifier_Broodmother_PoisonSting  (line 471, @0x0000000002b9b710, libserver.so)  // inlines: ~CDOTA_Modifier_Broodmother_PoisonSting
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Broodmother_PoisonSting::~CDOTA_Modifier_Broodmother_PoisonSting(
        CDOTA_Modifier_Broodmother_PoisonSting *const this)
{
  this->_vptr_CDOTA_Buff = &off_44B2250;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Broodmother_PoisonSting::IsHidden  (line 476, @0x0000000002b8e420, libserver.so)
bool __fastcall CDOTA_Modifier_Broodmother_PoisonSting::IsHidden(CDOTA_Modifier_Broodmother_PoisonSting *const this)
{
  return 1;
}


// CDOTA_Modifier_Broodmother_PoisonSting::OnCreated  (line 492, @0x0000000002b7da70, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
void __fastcall CDOTA_Modifier_Broodmother_PoisonSting::OnCreated(
        CDOTA_Modifier_Broodmother_PoisonSting *const this,
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
      this->duration_hero = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "duration_hero", -1, 0);
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
  this->duration_hero = 0.0;
}


// CDOTA_Modifier_Broodmother_PoisonSting::DeclareFunctions  (line 500, @0x0000000002b34560, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Broodmother_PoisonSting::DeclareFunctions(
        CDOTA_Modifier_Broodmother_PoisonSting *const this)
{
  this->m_Functions[137].__pfn = (&stru_10 + 697);
  this->m_Functions[137].__delta = 0;
}


// CDOTA_Modifier_Broodmother_PoisonSting::OnAttacked  (line 507, @0x0000000002b47e80, libserver.so)  // inlines: AttackerNPC, CEntityHandle, Get, GetEntityIdentity, GetEntryIndex, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, IndexToIdentity, Init, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_broodmother_poison_sting_debuff"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Broodmother_PoisonSting::OnAttacked(
        CDOTA_Modifier_Broodmother_PoisonSting *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CEntityInstance *v12; // rbx
  CDOTA_BaseNPC *Caster; // rax
  unsigned __int16 v14; // dx
  int v15; // esi
  int v16; // eax
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *v20; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-28h]

  v22 = __readfsqword(0x28u);
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
          v9 = params->htarget.m_Index;
          if ( v9 + 2 > 1 )
          {
            v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
            if ( v10 != 0 )
            {
              v11 = &v10[params->htarget.m_Index & 0x1FF];
              if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
              {
                v12 = v11->m_pInstance;
                if ( v11->m_pInstance != 0
                  && BYTE3(v12[7]._vptr_IHandleEntity) != 0
                  && (v12[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0 )
                {
                  Caster = CDOTA_Buff::GetCaster(this);
                  if ( Caster->m_hOwnerEntity.m_Value.m_Index == -1 )
                  {
                    v14 = 0x7FFF;
                    v15 = 0x7FFF;
                  }
                  else
                  {
                    v14 = Caster->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
                    v15 = v14;
                  }
                  v16 = (Caster->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v14 & 0x7FFF;
                  if ( (v16 + 2) > 1 )
                  {
                    v17 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v15 >> 9];
                    if ( v17 != 0 )
                    {
                      v18 = &v17[v15 & 0x1FF];
                      if ( v18 != 0 && v16 == v18->m_EHandle.m_Index && v18->m_pInstance != 0 )
                      {
                        KeyValues::KeyValues(&kv, "modifier_broodmother_poison_sting_debuff");
                        KeyValues::SetFloat(&kv, "duration", this->duration_hero);
                        Ability = CDOTA_Buff::GetAbility(this);
                        v20 = CDOTA_Buff::GetCaster(this);
                        CDOTA_BaseNPC::AddNewModifier(
                          v12,
                          v20,
                          Ability,
                          "modifier_broodmother_poison_sting_debuff",
                          &kv,
                          0);
                        KeyValues::~KeyValues(&kv);
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


// CDOTA_Modifier_Broodmother_PoisonStingDebuff::~CDOTA_Modifier_Broodmother_PoisonStingDebuff  (line 532, @0x0000000002b9b6a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Broodmother_PoisonStingDebuff::~CDOTA_Modifier_Broodmother_PoisonStingDebuff(
        CDOTA_Modifier_Broodmother_PoisonStingDebuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_44B2570;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Broodmother_PoisonStingDebuff::~CDOTA_Modifier_Broodmother_PoisonStingDebuff  (line 532, @0x0000000002b9b6c0, libserver.so)  // inlines: ~CDOTA_Modifier_Broodmother_PoisonStingDebuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Broodmother_PoisonStingDebuff::~CDOTA_Modifier_Broodmother_PoisonStingDebuff(
        CDOTA_Modifier_Broodmother_PoisonStingDebuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_44B2570;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Broodmother_PoisonStingDebuff::IsDebuff  (line 537, @0x0000000002b8e430, libserver.so)
bool __fastcall CDOTA_Modifier_Broodmother_PoisonStingDebuff::IsDebuff(
        CDOTA_Modifier_Broodmother_PoisonStingDebuff *const this)
{
  return 1;
}


// CDOTA_Modifier_Broodmother_PoisonStingDebuff::OnCreated  (line 556, @0x0000000002b6d6b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Broodmother_PoisonStingDebuff::OnCreated(
        CDOTA_Modifier_Broodmother_PoisonStingDebuff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->damage_per_second = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->movement_speed = 0;
    goto LABEL_4;
  }
  this->damage_per_second = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_per_second", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "movement_speed", -1, 0);
LABEL_4:
  CDOTA_Buff::StartIntervalThink(this, 1.0, v5);
}


// CDOTA_Modifier_Broodmother_PoisonStingDebuff::OnIntervalThink  (line 568, @0x0000000002b37960, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage
void __fastcall CDOTA_Modifier_Broodmother_PoisonStingDebuff::OnIntervalThink(
        CDOTA_Modifier_Broodmother_PoisonStingDebuff *const this)
{
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  float damage_per_second; // [rsp+Ch] [rbp-24h]

  damage_per_second = this->damage_per_second;
  Ability = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, Ability, damage_per_second, 2, 0);
}


// CDOTA_Modifier_Broodmother_PoisonStingDebuff::DeclareFunctions  (line 577, @0x0000000002b34580, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Broodmother_PoisonStingDebuff::DeclareFunctions(
        CDOTA_Modifier_Broodmother_PoisonStingDebuff *const this)
{
  this->m_Functions[13].__pfn = (&stru_10 + 697);
  this->m_Functions[13].__delta = 0;
  this->m_Functions[151].__pfn = (&stru_10 + 705);
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_Broodmother_PoisonStingDebuff::GetModifierMoveSpeedBonus_Percentage  (line 585, @0x0000000002b345c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Broodmother_PoisonStingDebuff::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Broodmother_PoisonStingDebuff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Broodmother_PoisonStingDebuff::Tooltip  (line 592, @0x0000000002b345e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Broodmother_PoisonStingDebuff::Tooltip(
        CDOTA_Modifier_Broodmother_PoisonStingDebuff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->damage_per_second;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Unit_Broodmother_Web::Schema_DynamicBinding  (line 603, @0x0000000002b8e440, libserver.so)
// globals: CDOTA_Unit_Broodmother_Web::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Broodmother_Web::Schema_DynamicBinding(
        const CDOTA_Unit_Broodmother_Web *const this)
{
  return CDOTA_Unit_Broodmother_Web::s_pSchemaBinding;
}


// CDOTA_Unit_Broodmother_Web::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 603, @0x0000000002b8e470, libserver.so)
// globals: CDOTA_Unit_Broodmother_Web::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Broodmother_Web::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Broodmother_Web::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Broodmother_Web::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Broodmother_Web::CEntityInstanceEntityClass::DestructInstance  (line 603, @0x0000000002b8e480, libserver.so)  // inlines: Destruct<CDOTA_Unit_Broodmother_Web>
void __fastcall CDOTA_Unit_Broodmother_Web::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Broodmother_Web::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Broodmother_Web::CEntityInstanceEntityClass::FreeInstance  (line 603, @0x0000000002b8e4a0, libserver.so)
void __fastcall CDOTA_Unit_Broodmother_Web::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Broodmother_Web::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Broodmother_Web::CEntityInstanceEntityClass::CanAllocate  (line 603, @0x0000000002b8e4c0, libserver.so)
bool __fastcall CDOTA_Unit_Broodmother_Web::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Broodmother_Web::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Broodmother_Web::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 603, @0x0000000002b8e4d0, libserver.so)
// globals: CDOTA_Unit_Broodmother_Web::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Broodmother_Web::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Broodmother_Web::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Broodmother_Web::s_pSchemaBinding;
}


// CDOTA_Unit_Broodmother_Web::CEntityInstanceEntityClass::AllocateInstance  (line 603, @0x0000000002b97160, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Broodmother_Web::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Broodmother_Web::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4520);
  memset(v1, 0, 0x11A8u);
  return v1;
}


// CDOTA_Unit_Broodmother_Web::CEntityInstanceEntityClass::ConstructInstance  (line 603, @0x0000000002b98de0, libserver.so)  // inlines: CDOTA_BaseNPC_Additive, CDOTA_Unit_Broodmother_Web, Construct<CDOTA_Unit_Broodmother_Web>
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_Unit_Broodmother_Web::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Broodmother_Web::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *p = &off_44B28F0;
    *(p + 236) = &off_44B3850;
    *(p + 257) = &off_44B3B80;
  }
  return p;
}


// CDOTA_Unit_Broodmother_Web::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 603, @0x0000000002babdd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Broodmother_Web::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Broodmother_Web::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Broodmother_Web::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 603, @0x0000000002bac130, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Broodmother_Web::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Broodmother_Web::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Broodmother_Web::GetEntityClassInternal  (line 603, @0x0000000002bce420, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CDOTA_BaseNPC_Additive::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "npc_dota_broodmother_web", "CDOTA_Unit_Broodmother_Web"
// globals: `guard variable for'CDOTA_Unit_Broodmother_Web::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Broodmother_WebClass, CDOTA_Unit_Broodmother_Web::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Broodmother_WebClass, __dso_handle, CDOTA_Unit_Broodmother_Web::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Broodmother_Web::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Broodmother_WebClassInfo, CDOTA_Unit_Broodmother_Web::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Broodmother_WebClassInfo
CEntityClass *__cdecl CDOTA_Unit_Broodmother_Web::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Broodmother_Web::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Broodmother_WebClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Broodmother_Web::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Broodmother_WebClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Broodmother_Web::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Broodmother_WebClass);
    CDOTA_Unit_Broodmother_Web::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Broodmother_WebClass._vptr_CEntityClass = off_44B2870;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Broodmother_Web::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Broodmother_WebClass);
    __cxa_atexit(
      CDOTA_Unit_Broodmother_Web::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Broodmother_Web::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Broodmother_WebClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Broodmother_WebClass != 0 )
    return &CDOTA_Unit_Broodmother_Web::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Broodmother_WebClass;
  if ( `guard variable for'CDOTA_Unit_Broodmother_Web::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Broodmother_WebClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Broodmother_Web::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Broodmother_WebClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Additive::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Broodmother_Web::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Broodmother_WebClassInfo,
      "CDOTA_Unit_Broodmother_Web",
      "npc_dota_broodmother_web",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Broodmother_Web::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Broodmother_WebClassInfo);
  }
  CDOTA_Unit_Broodmother_Web::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Broodmother_WebClass.m_pClassInfo = &CDOTA_Unit_Broodmother_Web::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Broodmother_WebClassInfo;
  CDOTA_Unit_Broodmother_Web::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Broodmother_WebClass.m_pBaseClassInfo = CDOTA_Unit_Broodmother_Web::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Broodmother_WebClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Broodmother_WebClass = &CDOTA_Unit_Broodmother_Web::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Broodmother_WebClass;
  CDOTA_Unit_Broodmother_Web::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Broodmother_WebClassInfo.m_pClass = &CDOTA_Unit_Broodmother_Web::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Broodmother_WebClass;
  CDOTA_Unit_Broodmother_Web::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Broodmother_WebClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_Unit_Broodmother_WebClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Broodmother_Web::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Broodmother_WebClass;
}


// CDOTA_Unit_Broodmother_Web::HasFlyingVision  (line 611, @0x0000000002b8e4e0, libserver.so)
bool __fastcall CDOTA_Unit_Broodmother_Web::HasFlyingVision(CDOTA_Unit_Broodmother_Web *const this)
{
  return 0;
}


// CDOTA_Unit_Broodmother_Web::ShouldDoFlyHeightVisual  (line 612, @0x0000000002b8e4f0, libserver.so)
bool __fastcall CDOTA_Unit_Broodmother_Web::ShouldDoFlyHeightVisual(CDOTA_Unit_Broodmother_Web *const this)
{
  return 0;
}


// CDOTA_Unit_Broodmother_Web::YouForgotToImplementOrDeclareServerClass  (line 631, @0x0000000002b34600, libserver.so)
int __fastcall CDOTA_Unit_Broodmother_Web::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Broodmother_Web *const this)
{
  return 0;
}


// CDOTA_Unit_Broodmother_Web::GetServerClass  (line 631, @0x0000000002b4c460, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Broodmother_Web::GetServerClass(CDOTA_Unit_Broodmother_Web *const this)
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


// CDOTA_Unit_Broodmother_Web::Spawn  (line 638, @0x0000000002b3a1b0, libserver.so)  // inlines: SetBlockCreepSpawn
// calls: CDOTA_BaseNPC::Spawn
void __fastcall CDOTA_Unit_Broodmother_Web::Spawn(
        CDOTA_Unit_Broodmother_Web *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC::Spawn(this, pKeyValues);
  this->m_bBlocksCreepSpawn = 0;
}


// CDOTA_Unit_Broodmother_Web::UpdateOnRemove  (line 684, @0x0000000002b373e0, libserver.so)
// calls: CBaseEntity::StopSound, CDOTA_BaseNPC::UpdateOnRemove
// strings: "Hero_Broodmother.WebLoop"
void __fastcall CDOTA_Unit_Broodmother_Web::UpdateOnRemove(CDOTA_Unit_Broodmother_Web *const this)
{
  CBaseEntity::StopSound(this, "Hero_Broodmother.WebLoop");
  CDOTA_BaseNPC::UpdateOnRemove(this);
}


// CDOTA_Unit_Broodmother_Web::~CDOTA_Unit_Broodmother_Web  (line 691, @0x0000000002b368f0, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_Unit_Broodmother_Web::~CDOTA_Unit_Broodmother_Web(CDOTA_Unit_Broodmother_Web *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_Unit_Broodmother_Web::~CDOTA_Unit_Broodmother_Web  (line 691, @0x0000000002b36940, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_Unit_Broodmother_Web
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Broodmother_Web::~CDOTA_Unit_Broodmother_Web(CDOTA_Unit_Broodmother_Web *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter::~CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter  (line 756, @0x0000000002b9b650, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter::~CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter(
        CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter *const this)
{
  this->_vptr_CDOTA_Buff = &off_44B3C10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter::~CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter  (line 756, @0x0000000002b9b670, libserver.so)  // inlines: ~CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter::~CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter(
        CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter *const this)
{
  this->_vptr_CDOTA_Buff = &off_44B3C10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter::IsHidden  (line 761, @0x0000000002b8e500, libserver.so)
bool __fastcall CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter::IsHidden(
        CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter *const this)
{
  return 0;
}


// CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter::IsPurgable  (line 762, @0x0000000002b8e510, libserver.so)
bool __fastcall CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter::IsPurgable(
        CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter *const this)
{
  return 0;
}


// CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter::IsPermanent  (line 763, @0x0000000002b8e520, libserver.so)
bool __fastcall CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter::IsPermanent(
        CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter *const this)
{
  return 1;
}


// CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter::DestroyOnExpire  (line 764, @0x0000000002b8e530, libserver.so)
bool __fastcall CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter::DestroyOnExpire(
        CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter *const this)
{
  return 0;
}


// CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter::OnCreated  (line 785, @0x0000000002b7df00, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "max_charges", "charge_restore_time"
void __fastcall CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter::OnCreated(
        CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter *const this,
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


// CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter::OnIntervalThink  (line 796, @0x0000000002b6e350, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
// strings: "max_charges"
void __fastcall CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter::OnIntervalThink(
        CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter *const this)
{
  CDOTABaseAbility *Ability; // rax
  float v3; // xmm1_4
  void (__fastcall *v4)(CDOTA_Modifier_Broodmother_SpinWeb_ChargeCounter *const, __int64, float); // r12
  CDOTABaseAbility *v5; // rax
  float v6; // xmm0_4
  CDOTABaseAbility *v7; // rax
  float v8; // xmm0_4
  float v9; // xmm1_4
  float charge_restore_time; // [rsp+Ch] [rbp-14h]
  float v11; // [rsp+Ch] [rbp-14h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->max_charges = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "max_charges", -1, 0);
  else
    this->max_charges = 0;
  if ( (*(this->_vptr_CDOTA_Buff + 27))(this) >= this->max_charges
    || ((*(this->_vptr_CDOTA_Buff + 25))(this), (*(this->_vptr_CDOTA_Buff + 27))(this) == this->max_charges) )
  {
    CDOTA_Buff::StartIntervalThink(this, -1.0, v3);
    this->m_bIsThinking = 0;
  }
  else
  {
    charge_restore_time = this->charge_restore_time;
    v4 = *(this->_vptr_CDOTA_Buff + 63);
    v5 = CDOTA_Buff::GetAbility(this);
    v6 = (*(v5->_vptr_IHandleEntity + 243))(v5, 0xFFFFFFFFLL);
    v4(this, 1, v6 * charge_restore_time);
    v11 = this->charge_restore_time;
    v7 = CDOTA_Buff::GetAbility(this);
    v8 = (*(v7->_vptr_IHandleEntity + 243))(v7, 0xFFFFFFFFLL);
    CDOTA_Buff::StartIntervalThink(this, v8 * v11, v9);
  }
}


// CDOTA_Ability_Broodmother_SpinWeb::~CDOTA_Ability_Broodmother_SpinWeb  (line 828, @0x0000000002bc3c50, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Broodmother_SpinWeb::~CDOTA_Ability_Broodmother_SpinWeb(
        CDOTA_Ability_Broodmother_SpinWeb *const this)
{
  this->_vptr_IHandleEntity = &off_44B3F70;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hWebs);
  if ( (this->m_hWebs.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hWebs.m_Memory),
        (this->m_hWebs.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hWebs.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_Broodmother_SpinWeb::~CDOTA_Ability_Broodmother_SpinWeb  (line 828, @0x0000000002bc3e80, libserver.so)  // inlines: Purge, ~CDOTA_Ability_Broodmother_SpinWeb, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Broodmother_SpinWeb::~CDOTA_Ability_Broodmother_SpinWeb(
        CDOTA_Ability_Broodmother_SpinWeb *const this)
{
  this->_vptr_IHandleEntity = &off_44B3F70;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hWebs);
  if ( (this->m_hWebs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hWebs.m_Memory);
    if ( (this->m_hWebs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hWebs.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Broodmother_SpinWeb::Schema_DynamicBinding  (line 830, @0x0000000002b8e540, libserver.so)
// globals: CDOTA_Ability_Broodmother_SpinWeb::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Broodmother_SpinWeb::Schema_DynamicBinding(
        const CDOTA_Ability_Broodmother_SpinWeb *const this)
{
  return CDOTA_Ability_Broodmother_SpinWeb::s_pSchemaBinding;
}


// CDOTA_Ability_Broodmother_SpinWeb::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 830, @0x0000000002b8e550, libserver.so)
// globals: CDOTA_Ability_Broodmother_SpinWeb::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Broodmother_SpinWeb::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Broodmother_SpinWeb::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Broodmother_SpinWeb::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Broodmother_SpinWeb::CEntityInstanceEntityClass::DestructInstance  (line 830, @0x0000000002b8e560, libserver.so)  // inlines: Destruct<CDOTA_Ability_Broodmother_SpinWeb>
void __fastcall CDOTA_Ability_Broodmother_SpinWeb::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Broodmother_SpinWeb::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Broodmother_SpinWeb::CEntityInstanceEntityClass::FreeInstance  (line 830, @0x0000000002b8e580, libserver.so)
void __fastcall CDOTA_Ability_Broodmother_SpinWeb::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Broodmother_SpinWeb::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Broodmother_SpinWeb::CEntityInstanceEntityClass::CanAllocate  (line 830, @0x0000000002b8e5a0, libserver.so)
bool __fastcall CDOTA_Ability_Broodmother_SpinWeb::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Broodmother_SpinWeb::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Broodmother_SpinWeb::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 830, @0x0000000002b8e5b0, libserver.so)
// globals: CDOTA_Ability_Broodmother_SpinWeb::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Broodmother_SpinWeb::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Broodmother_SpinWeb::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Broodmother_SpinWeb::s_pSchemaBinding;
}


// CDOTA_Ability_Broodmother_SpinWeb::CEntityInstanceEntityClass::AllocateInstance  (line 830, @0x0000000002b971a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Broodmother_SpinWeb::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Broodmother_SpinWeb::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 944);
  memset(v1, 0, 0x3B0u);
  return v1;
}


// CDOTA_Ability_Broodmother_SpinWeb::CEntityInstanceEntityClass::ConstructInstance  (line 830, @0x0000000002ba85a0, libserver.so)  // inlines: CDOTA_Ability_Broodmother_SpinWeb, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_Broodmother_SpinWeb>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Broodmother_SpinWeb::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Broodmother_SpinWeb::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 0;
    *p = &off_44B3F70;
    *(p + 115) = 0;
    *(p + 232) = 0;
    *(p + 233) = 0;
  }
  return p;
}


// CDOTA_Ability_Broodmother_SpinWeb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 830, @0x0000000002ba9fd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Broodmother_SpinWeb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Broodmother_SpinWeb::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Broodmother_SpinWeb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 830, @0x0000000002ba9ff0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Broodmother_SpinWeb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Broodmother_SpinWeb::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Broodmother_SpinWeb::GetEntityClassInternal  (line 830, @0x0000000002bc6230, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_Broodmother_SpinWeb"
// globals: `guard variable for'CDOTA_Ability_Broodmother_SpinWeb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpinWebClass, CDOTA_Ability_Broodmother_SpinWeb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpinWebClass, __dso_handle, CDOTA_Ability_Broodmother_SpinWeb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Broodmother_SpinWeb::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpinWebClassInfo, CDOTA_Ability_Broodmother_SpinWeb::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpinWebClassInfo
CEntityClass *__cdecl CDOTA_Ability_Broodmother_SpinWeb::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Broodmother_SpinWeb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpinWebClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Broodmother_SpinWeb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpinWebClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Broodmother_SpinWeb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpinWebClass);
    CDOTA_Ability_Broodmother_SpinWeb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpinWebClass._vptr_CEntityClass = off_44B3EF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Broodmother_SpinWeb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpinWebClass);
    __cxa_atexit(
      CDOTA_Ability_Broodmother_SpinWeb::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Broodmother_SpinWeb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpinWebClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Broodmother_SpinWebClass != 0 )
    return &CDOTA_Ability_Broodmother_SpinWeb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpinWebClass;
  if ( `guard variable for'CDOTA_Ability_Broodmother_SpinWeb::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpinWebClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Broodmother_SpinWeb::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpinWebClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Broodmother_SpinWeb::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpinWebClassInfo,
      "CDOTA_Ability_Broodmother_SpinWeb",
      "broodmother_spin_web",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Broodmother_SpinWeb::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpinWebClassInfo);
  }
  CDOTA_Ability_Broodmother_SpinWeb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpinWebClass.m_pClassInfo = &CDOTA_Ability_Broodmother_SpinWeb::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpinWebClassInfo;
  CDOTA_Ability_Broodmother_SpinWeb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpinWebClass.m_pBaseClassInfo = CDOTA_Ability_Broodmother_SpinWeb::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpinWebClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Broodmother_SpinWebClass = &CDOTA_Ability_Broodmother_SpinWeb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpinWebClass;
  CDOTA_Ability_Broodmother_SpinWeb::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpinWebClassInfo.m_pClass = &CDOTA_Ability_Broodmother_SpinWeb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpinWebClass;
  CDOTA_Ability_Broodmother_SpinWeb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpinWebClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Broodmother_SpinWebClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Broodmother_SpinWeb::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpinWebClass;
}


// CDOTA_Ability_Broodmother_SpinWeb::IsRefreshable  (line 847, @0x0000000002b8e5c0, libserver.so)
bool __fastcall CDOTA_Ability_Broodmother_SpinWeb::IsRefreshable(CDOTA_Ability_Broodmother_SpinWeb *const this)
{
  return 0;
}


// CDOTA_Ability_Broodmother_SpinWeb::YouForgotToImplementOrDeclareServerClass  (line 870, @0x0000000002b34610, libserver.so)
int __fastcall CDOTA_Ability_Broodmother_SpinWeb::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Broodmother_SpinWeb *const this)
{
  return 0;
}


// CDOTA_Ability_Broodmother_SpinWeb::GetServerClass  (line 870, @0x0000000002b4be60, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Broodmother_SpinWeb::GetServerClass(
        CDOTA_Ability_Broodmother_SpinWeb *const this)
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


// CDOTA_Ability_Broodmother_SpinWeb::GetCastRange  (line 880, @0x0000000002b44720, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CEntityInstance*, operator[]
// calls: CDOTABaseAbility::GetCastRange, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::IsPositionInRange
// globals: CEntityHandle::gm_pEntityList
int __fastcall CDOTA_Ability_Broodmother_SpinWeb::GetCastRange(
        CDOTA_Ability_Broodmother_SpinWeb *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  int CastRange; // ebx
  CDOTA_BaseNPC *Caster; // rax
  float v7; // xmm3_4
  float v8; // xmm3_4
  __int64 v9; // rbx
  CHandle<CBaseEntity> *v10; // rdx
  uint32 m_Index; // eax
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTA_BaseNPC *m_pInstance; // rdi

  CastRange = CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::IsPositionInRange(Caster, *&vLocation->x, COERCE_DOUBLE(LODWORD(vLocation->z)), CastRange, v7)
    || this->m_hWebs.m_Size <= 0 )
  {
    return CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
  }
  v9 = 0;
  while ( 1 )
  {
    v10 = &this->m_hWebs.m_Memory.m_pMemory[v9];
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
          if ( v14->m_pInstance != 0
            && m_pInstance->m_bIsDOTANPC
            && CDOTA_BaseNPC::IsPositionInRange(
                 m_pInstance,
                 *&vLocation->x,
                 COERCE_DOUBLE(LODWORD(vLocation->z)),
                 2000.0,
                 v8) )
          {
            break;
          }
        }
      }
    }
    if ( this->m_hWebs.m_Size <= ++v9 )
      return CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
  }
  return 100000;
}


// CDOTA_Ability_Broodmother_SpinWeb::CastFilterResult  (line 900, @0x0000000002b36c00, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_broodmother_spin_web_charge_counter"
int __fastcall CDOTA_Ability_Broodmother_SpinWeb::CastFilterResult(
        CDOTA_Ability_Broodmother_SpinWeb *const this,
        const Vector *const vLocation)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rdi
  int result; // eax

  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_broodmother_spin_web_charge_counter", 0);
  result = 0;
  if ( ModifierByName != 0 )
    return (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName) == 0 ? 0x17 : 0;
  return result;
}


// CDOTA_Ability_Broodmother_SpinWeb::GetCustomCastError  (line 917, @0x0000000002b34620, libserver.so)
// strings: "dota_hud_error_spin_web_no_charges"
const char *__fastcall CDOTA_Ability_Broodmother_SpinWeb::GetCustomCastError(
        CDOTA_Ability_Broodmother_SpinWeb *const this,
        CDOTA_BaseNPC *pTarget)
{
  return "dota_hud_error_spin_web_no_charges";
}


// CDOTA_Ability_Broodmother_SpinWeb::RefreshCharges  (line 925, @0x0000000002b668d0, libserver.so)  // inlines: GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName
// strings: "max_charges", "modifier_broodmother_spin_web_charge_counter"
void __fastcall CDOTA_Ability_Broodmother_SpinWeb::RefreshCharges(CDOTA_Ability_Broodmother_SpinWeb *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax

  this->max_charges = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_charges", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_broodmother_spin_web_charge_counter", 0);
  if ( ModifierByName != 0 )
    (*(ModifierByName->_vptr_CDOTA_Buff + 28))(ModifierByName, this->max_charges);
  (*(this->_vptr_IHandleEntity + 297))(this);
}


// CDOTA_Ability_Broodmother_SpinWeb::OnSpellStart  (line 940, @0x0000000002b84b60, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetBool, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Set, SetThinking, Vector, operator CEntityInstance*, operator[]
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetCursorPosition, DOTA_CreateUnitByName, CDOTA_BaseNPC::SetControllableByPlayer, CDOTAFogOfWarSystem::AddFOWEntity, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, GetParticleManager (25 total)
// strings: "charge_restore_time", "special_bonus_unique_broodmother_1", "npc_dota_broodmother_web", "modifier_broodmother_spin_web_web", "particles/units/heroes/hero_broodmother/broodmother_spin_web_cast.vpcf", "attach_attack1" (9 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Broodmother_SpinWeb::OnSpellStart(CDOTA_Ability_Broodmother_SpinWeb *const this)
{
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *p_m_hWebs; // r14
  float LevelSpecialValue; // xmm0_4
  int m_Size; // eax
  int v5; // r12d
  __int64 v6; // r13
  CHandle<CBaseEntity> *v7; // rdx
  uint32 m_Index; // eax
  __int16 v9; // cx
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  int v12; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int v15; // r15d
  int m_Value; // r13d
  CDOTA_BaseNPC *v17; // r12
  CDOTA_BaseNPC *v18; // r14
  CDOTA_BaseNPC *v19; // r12
  CDOTA_BaseNPC *v20; // rax
  int v21; // eax
  CDOTA_BaseNPC *v22; // rax
  CEntityIdentity *m_pEntity; // rax
  int v24; // edx
  __int16 v25; // cx
  __int64 v26; // r13
  int v27; // eax
  vec_t *p_m_Index; // rax
  CDOTA_BaseNPC *v29; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v31; // rax
  CDOTA_ParticleManager *v32; // rax
  CDOTA_ParticleManager *v33; // rax
  CDOTA_ParticleManager *v34; // rax
  CDOTA_BaseNPC *v35; // rax
  CDOTABaseAbility *v36; // rax
  CDOTA_BaseNPC *v37; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v39; // r12
  void (__fastcall *v40)(CDOTA_Ability_Broodmother_SpinWeb *const); // r13
  float v41; // xmm0_4
  float v42; // xmm1_4
  int (**vptr_CDOTA_Buff)(...); // rax
  int (*v44)(...); // r13
  float v45; // xmm0_4
  CHandle<CBaseEntity> *m_pMemory; // rdx
  CEntityInstance *m_pInstance; // rdi
  uint32 v48; // eax
  __int16 v49; // cx
  CEntityIdentity *v50; // rdx
  CEntityIdentity *v51; // rdx
  CDOTA_BaseNPC *pEnt; // [rsp+8h] [rbp-78h]
  float pEnta; // [rsp+8h] [rbp-78h]
  float pEntb; // [rsp+8h] [rbp-78h]
  Vector vLocation; // [rsp+20h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v57; // [rsp+48h] [rbp-38h]
  Vector CursorPosition; // 0:kr14_12.12

  p_m_hWebs = &this->m_hWebs;
  v57 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "charge_restore_time", -1, 0);
  m_Size = this->m_hWebs.m_Size;
  this->charge_restore_time = LevelSpecialValue;
  v5 = m_Size - 1;
  v6 = m_Size - 1;
  if ( m_Size - 1 >= 0 )
  {
    do
    {
      v7 = &this->m_hWebs.m_Memory.m_pMemory[v6];
      m_Index = v7->m_Index;
      if ( v7->m_Index + 2 <= 1
        || (v9 = v7->m_Index,
            (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v7->m_Index) >> 9) & 0x3F]) == 0)
        || (v11 = &v10[v9 & 0x1FF]) == 0
        || m_Index != v11->m_EHandle.m_Index
        || v11->m_pInstance == 0 )
      {
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(p_m_hWebs, v5);
      }
      --v5;
      --v6;
    }
    while ( v5 != -1 );
  }
  v12 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "count", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_broodmother_1", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    v12 = (CDOTABaseAbility::GetLevelSpecialValueFor<float>(AbilityByName, "value", 1, 1) + v12);
  if ( this->m_hWebs.m_Size == v12 )
  {
    m_pMemory = this->m_hWebs.m_Memory.m_pMemory;
    m_pInstance = 0;
    v48 = m_pMemory->m_Index;
    if ( m_pMemory->m_Index + 2 > 1 )
    {
      v49 = m_pMemory->m_Index;
      v50 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
      if ( v50 != 0 )
      {
        v51 = &v50[v49 & 0x1FF];
        if ( v51 != 0 && v48 == v51->m_EHandle.m_Index )
          m_pInstance = v51->m_pInstance;
      }
    }
    UTIL_Remove(m_pInstance);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&this->m_hWebs, 0);
  }
  v15 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  v17 = CDOTABaseAbility::GetCaster(this);
  v18 = CDOTABaseAbility::GetCaster(this);
  vLocation = CDOTABaseAbility::GetCursorPosition(this);
  v19 = DOTA_CreateUnitByName("npc_dota_broodmother_web", &vLocation, 0, v18, v17, m_Value);
  if ( v19 != 0 )
  {
    v20 = CDOTABaseAbility::GetCaster(this);
    v21 = (*(v20->_vptr_IHandleEntity + 414))(v20);
    CDOTA_BaseNPC::SetControllableByPlayer(v19, v21, 0);
    CDOTAFogOfWarSystem::AddFOWEntity(&g_DOTAFogOfWarSystem, v19);
    KeyValues::KeyValues(&kv, "modifier_broodmother_spin_web_web");
    v22 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v19, v22, this, "modifier_broodmother_spin_web_web", &kv, 0);
    vLocation.x = NAN;
    m_pEntity = v19->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v24 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v25 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v25 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(vLocation.x) = v25 | LOWORD(vLocation.x) & 0x8000;
      LODWORD(vLocation.x) = (v24 << 15) | LOWORD(vLocation.x) & 0x7FFF;
    }
    v26 = this->m_hWebs.m_Size;
    v27 = this->m_hWebs.m_Size;
    if ( v26 == this->m_hWebs.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hWebs.m_Memory, 1);
      v27 = this->m_hWebs.m_Size;
    }
    this->m_hWebs.m_Size = v27 + 1;
    p_m_Index = &this->m_hWebs.m_Memory.m_pMemory[v26].m_Index;
    if ( p_m_Index != 0 )
      *p_m_Index = vLocation.x;
    CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
    v29 = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    LODWORD(v29) = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/units/heroes/hero_broodmother/broodmother_spin_web_cast.vpcf",
                     2,
                     v29,
                     0,
                     0);
    pEnt = CDOTABaseAbility::GetCaster(this);
    v31 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v31, v29, 0, pEnt, 5, "attach_attack1", vec3_invalid, 1);
    v32 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v32, v29, 1, *&CursorPosition.x, CursorPosition.z);
    *&vLocation.y = 0;
    vLocation.x = v15;
    v33 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v33, v29, 2, *&vLocation.x, vLocation.z);
    v34 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v34, v29);
    v35 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v35, "Hero_Broodmother.SpinWebCast", 0.0, 0, 0);
    v36 = CDOTA_BaseNPC::FindAbilityByName(v19, "broodmother_spin_web_destroy", 0);
    if ( v36 != 0 )
      CDOTABaseAbility::UpgradeAbility(v36, 0);
    KeyValues::~KeyValues(&kv);
  }
  if ( dota_ability_debug.m_pParent->m_Value.m_nValue == 0 )
  {
    v37 = CDOTABaseAbility::GetCaster(this);
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(v37, "modifier_broodmother_spin_web_charge_counter", 0);
    v39 = ModifierByName;
    if ( ModifierByName != 0 )
    {
      (*(ModifierByName->_vptr_CDOTA_Buff + 26))(ModifierByName);
      if ( LOBYTE(v39[1].m_References.m_pHead) == 0 )
      {
        pEnta = this->charge_restore_time;
        v41 = (*(this->_vptr_IHandleEntity + 243))(this, 0xFFFFFFFFLL);
        CDOTA_Buff::StartIntervalThink(v39, v41 * pEnta, v42);
        vptr_CDOTA_Buff = v39->_vptr_CDOTA_Buff;
        LOBYTE(v39[1].m_References.m_pHead) = 1;
        v44 = vptr_CDOTA_Buff[63];
        pEntb = this->charge_restore_time;
        v45 = (*(this->_vptr_IHandleEntity + 243))(this, 0xFFFFFFFFLL);
        v44(v39, 1, v45 * pEntb);
      }
      if ( (*(v39->_vptr_CDOTA_Buff + 27))(v39) == 0 )
      {
        v40 = *(this->_vptr_IHandleEntity + 241);
        (*(v39->_vptr_CDOTA_Buff + 33))(v39);
        v40(this);
      }
    }
  }
}


// CDOTA_Ability_Broodmother_SpinWeb::OnUpgrade  (line 1025, @0x0000000002b76b60, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, IndexToIdentity, IsValid, LookupEntity, SetThinking, ToDOTABaseNPC, operator CEntityInstance*, operator[]
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::OnUpgrade, KeyValues::~KeyValues, CDOTA_Buff::StartIntervalThink, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_broodmother_spin_web_web", "charge_restore_time", "max_charges", "modifier_broodmother_spin_web_charge_counter"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Broodmother_SpinWeb::OnUpgrade(CDOTA_Ability_Broodmother_SpinWeb *const this)
{
  __int64 v2; // rbx
  CHandle<CBaseEntity> *v3; // rdx
  uint32 m_Index; // eax
  __int16 v5; // cx
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_Buff *ModifierByName; // rbx
  float v12; // xmm0_4
  float v13; // xmm1_4
  int (**vptr_CDOTA_Buff)(...); // rax
  int (*v15)(...); // r14
  float v16; // xmm0_4
  CDOTA_BaseNPC *v17; // rbx
  CDOTA_BaseNPC *v18; // rax
  float charge_restore_time; // [rsp+Ch] [rbp-64h]
  float v20; // [rsp+Ch] [rbp-64h]
  KeyValues kv; // [rsp+10h] [rbp-60h] BYREF
  KeyValues kv_counter; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-28h]

  v2 = 0;
  v23 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_broodmother_spin_web_web");
  if ( this->m_hWebs.m_Size > 0 )
  {
    do
    {
      v3 = &this->m_hWebs.m_Memory.m_pMemory[v2];
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
            if ( v7->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
            {
              Caster = CDOTABaseAbility::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, this, "modifier_broodmother_spin_web_web", &kv, 0);
            }
          }
        }
      }
      ++v2;
    }
    while ( this->m_hWebs.m_Size > v2 );
  }
  this->charge_restore_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "charge_restore_time", -1, 0);
  this->max_charges = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_charges", -1, 0);
  v10 = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(v10, "modifier_broodmother_spin_web_charge_counter", 0);
  if ( ModifierByName != 0
    || (KeyValues::KeyValues(&kv_counter, "modifier_broodmother_spin_web_charge_counter"),
        v17 = CDOTABaseAbility::GetCaster(this),
        v18 = CDOTABaseAbility::GetCaster(this),
        ModifierByName = CDOTA_BaseNPC::AddNewModifier(
                           v18,
                           v17,
                           this,
                           "modifier_broodmother_spin_web_charge_counter",
                           &kv_counter,
                           0),
        KeyValues::~KeyValues(&kv_counter),
        ModifierByName != 0) )
  {
    if ( LOBYTE(ModifierByName[1].m_References.m_pHead) == 0
      && (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName) < this->max_charges )
    {
      charge_restore_time = this->charge_restore_time;
      v12 = (*(this->_vptr_IHandleEntity + 243))(this, 0xFFFFFFFFLL);
      CDOTA_Buff::StartIntervalThink(ModifierByName, v12 * charge_restore_time, v13);
      vptr_CDOTA_Buff = ModifierByName->_vptr_CDOTA_Buff;
      LOBYTE(ModifierByName[1].m_References.m_pHead) = 1;
      v20 = this->charge_restore_time;
      v15 = vptr_CDOTA_Buff[63];
      v16 = (*(this->_vptr_IHandleEntity + 243))(this, 0xFFFFFFFFLL);
      v15(ModifierByName, 1, v16 * v20);
    }
  }
  CDOTABaseAbility::OnUpgrade(this);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Broodmother_SpinWeb::OnUnStolen  (line 1062, @0x0000000002b50b00, libserver.so)
// calls: CDOTABaseAbility::OnUnStolen, CDOTA_Ability_Broodmother_SpinWeb::DestroyWebs, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_broodmother_spin_web_charge_counter"
void __fastcall CDOTA_Ability_Broodmother_SpinWeb::OnUnStolen(CDOTA_Ability_Broodmother_SpinWeb *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  CDOTABaseAbility::OnUnStolen(this);
  CDOTA_Ability_Broodmother_SpinWeb::DestroyWebs(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_broodmother_spin_web_charge_counter");
}


// CDOTA_Ability_Broodmother_SpinWeb::DestroyWebs  (line 1074, @0x0000000002b50a40, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator[]
// calls: UTIL_Remove
// callers: CDOTA_Ability_Broodmother_SpinWeb::OnUnStolen, CDOTA_Unit_Hero_Broodmother::Event_Killed
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Broodmother_SpinWeb::DestroyWebs(CDOTA_Ability_Broodmother_SpinWeb *const this)
{
  __int64 v2; // r12
  int i; // ebx
  CHandle<CBaseEntity> *v4; // rdx
  uint32 m_Index; // eax
  __int16 v6; // cx
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx

  v2 = 0;
  for ( i = 0; this->m_hWebs.m_Size > i; ++v2 )
  {
    while ( 1 )
    {
      v4 = &this->m_hWebs.m_Memory.m_pMemory[v2];
      m_Index = v4->m_Index;
      if ( v4->m_Index + 2 > 1 )
      {
        v6 = v4->m_Index;
        v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v4->m_Index) >> 9) & 0x3F];
        if ( v7 != 0 )
        {
          v8 = &v7[v6 & 0x1FF];
          if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index && v8->m_pInstance != 0 )
            break;
        }
      }
      ++i;
      ++v2;
      if ( this->m_hWebs.m_Size <= i )
        return;
    }
    UTIL_Remove(v8->m_pInstance);
    ++i;
  }
}


// CDOTA_Ability_Broodmother_SpinWeb::OnLoadState  (line 1089, @0x0000000002b829f0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GetUnitName, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Purge, Set, String, ToCStr, ToDOTABaseNPC, _V_strstr, operator CBaseEntity*, operator CEntityInstance*, operator[], strstr, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::OnLoadState, FindUnitsInRadius, strstr, KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlMemory<CHandle<CBaseEntity>, int>::Grow, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume (13 total)
// strings: "npc_dota_broodmother_web", "modifier_broodmother_spin_web_web"
// globals: CEntityHandle::gm_pEntityList
bool __fastcall CDOTA_Ability_Broodmother_SpinWeb::OnLoadState(
        CDOTA_Ability_Broodmother_SpinWeb *const this,
        KeyValues *pKV)
{
  int m_Value; // edi
  __int64 v4; // rbx
  CHandle<CBaseEntity> *v5; // rdx
  uint32 m_Index; // eax
  __int16 v7; // cx
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  const char *m_pAsString; // rdi
  CEntityIdentity *m_pEntity; // rdx
  __int16 v13; // cx
  __int64 m_Size; // r14
  int v15; // eax
  CHandle<CBaseEntity> *v16; // rax
  CDOTA_BaseNPC *Caster; // rax
  int v19; // [rsp+30h] [rbp-80h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hPotentialWebs; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v22; // [rsp+78h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  CDOTABaseAbility::OnLoadState(this, pKV);
  m_Value = this->m_iTeamNum.m_Value;
  hPotentialWebs.m_Size = 0;
  hPotentialWebs.m_Memory.m_pMemory = 0;
  hPotentialWebs.m_Memory.m_nAllocationCount = 0;
  hPotentialWebs.m_Memory.m_nGrowSize = 0;
  FindUnitsInRadius(m_Value, &vec3_origin, 0, -1.0, &hPotentialWebs, 1, 32, 0, 0, 0);
  if ( hPotentialWebs.m_Size > 0 )
  {
    v4 = 0;
    do
    {
      while ( 1 )
      {
        v5 = &hPotentialWebs.m_Memory.m_pMemory[v4];
        m_Index = v5->m_Index;
        if ( v5->m_Index + 2 > 1 )
        {
          v7 = v5->m_Index;
          v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v5->m_Index) >> 9) & 0x3F];
          if ( v8 != 0 )
          {
            v9 = &v8[v7 & 0x1FF];
            if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
            {
              m_pInstance = v9->m_pInstance;
              if ( v9->m_pInstance != 0
                && m_pInstance->m_bIsDOTANPC
                && m_pInstance->m_iTeamNum.m_Value == this->m_iTeamNum.m_Value )
              {
                m_pAsString = m_pInstance->m_iszUnitName.m_Value.u.m_pAsString;
                if ( m_pAsString != 0 && strstr(m_pAsString, "npc_dota_broodmother_web") != 0 )
                  break;
              }
            }
          }
        }
        if ( hPotentialWebs.m_Size <= ++v4 )
          goto LABEL_22;
      }
      m_pEntity = m_pInstance->m_pEntity;
      v19 = -1;
      if ( m_pEntity != 0 )
      {
        v13 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v19 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v13 & 0x7FFF;
      }
      m_Size = this->m_hWebs.m_Size;
      v15 = this->m_hWebs.m_Size;
      if ( m_Size == this->m_hWebs.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hWebs.m_Memory, 1);
        v15 = this->m_hWebs.m_Size;
      }
      this->m_hWebs.m_Size = v15 + 1;
      v16 = &this->m_hWebs.m_Memory.m_pMemory[m_Size];
      if ( v16 != 0 )
        v16->m_Index = v19;
      KeyValues::KeyValues(&kv, "modifier_broodmother_spin_web_web");
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, this, "modifier_broodmother_spin_web_web", &kv, 0);
      KeyValues::~KeyValues(&kv);
      ++v4;
    }
    while ( hPotentialWebs.m_Size > v4 );
  }
LABEL_22:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hPotentialWebs);
  if ( (hPotentialWebs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hPotentialWebs.m_Memory);
    if ( (hPotentialWebs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hPotentialWebs.m_Memory);
  }
  return 1;
}


// CDOTA_Modifier_Broodmother_SpinWeb_Thinker::IsHidden  (line 1125, @0x0000000002b8e5d0, libserver.so)
bool __fastcall CDOTA_Modifier_Broodmother_SpinWeb_Thinker::IsHidden(
        CDOTA_Modifier_Broodmother_SpinWeb_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Broodmother_SpinWeb_Thinker::IsAura  (line 1129, @0x0000000002b8e5e0, libserver.so)
bool __fastcall CDOTA_Modifier_Broodmother_SpinWeb_Thinker::IsAura(
        CDOTA_Modifier_Broodmother_SpinWeb_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Broodmother_SpinWeb_Thinker::GetModifierAura  (line 1130, @0x0000000002b8e5f0, libserver.so)
// strings: "modifier_broodmother_spin_web_invisible_applier"
const char *__fastcall CDOTA_Modifier_Broodmother_SpinWeb_Thinker::GetModifierAura(
        CDOTA_Modifier_Broodmother_SpinWeb_Thinker *const this)
{
  return "modifier_broodmother_spin_web_invisible_applier";
}


// CDOTA_Modifier_Broodmother_SpinWeb_Thinker::GetAuraSearchTeam  (line 1132, @0x0000000002b8e600, libserver.so)
int __fastcall CDOTA_Modifier_Broodmother_SpinWeb_Thinker::GetAuraSearchTeam(
        CDOTA_Modifier_Broodmother_SpinWeb_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Broodmother_SpinWeb_Thinker::GetAuraSearchType  (line 1133, @0x0000000002b8e610, libserver.so)
int __fastcall CDOTA_Modifier_Broodmother_SpinWeb_Thinker::GetAuraSearchType(
        CDOTA_Modifier_Broodmother_SpinWeb_Thinker *const this)
{
  return 19;
}


// CDOTA_Modifier_Broodmother_SpinWeb_Thinker::GetAuraSearchFlags  (line 1134, @0x0000000002b8e620, libserver.so)
int __fastcall CDOTA_Modifier_Broodmother_SpinWeb_Thinker::GetAuraSearchFlags(
        CDOTA_Modifier_Broodmother_SpinWeb_Thinker *const this)
{
  return 0;
}


// CDOTA_Modifier_Broodmother_SpinWeb_Thinker::GetAuraRadius  (line 1135, @0x0000000002b8e630, libserver.so)
int __fastcall CDOTA_Modifier_Broodmother_SpinWeb_Thinker::GetAuraRadius(
        CDOTA_Modifier_Broodmother_SpinWeb_Thinker *const this)
{
  return this->radius;
}


// CDOTA_Modifier_Broodmother_SpinWeb_Thinker::GetAuraDuration  (line 1136, @0x0000000002b8e640, libserver.so)
float __fastcall CDOTA_Modifier_Broodmother_SpinWeb_Thinker::GetAuraDuration(
        CDOTA_Modifier_Broodmother_SpinWeb_Thinker *const this)
{
  return 0.2;
}


// CDOTA_Modifier_Broodmother_SpinWeb_Thinker::GetAuraEntityReject  (line 1137, @0x0000000002ba5680, libserver.so)  // inlines: FStrEq, GetUnitName, String, ToCStr, _V_strcmp
// calls: CDOTA_Buff::GetCaster, strcmp
// strings: "npc_dota_broodmother_spiderling", "npc_dota_broodmother_spiderite"
bool __fastcall CDOTA_Modifier_Broodmother_SpinWeb_Thinker::GetAuraEntityReject(
        CDOTA_Modifier_Broodmother_SpinWeb_Thinker *const this,
        CDOTA_BaseNPC *pNPC)
{
  __int64 v4; // r13
  CDOTA_BaseNPC *Caster; // rax
  __int64 v6; // rax
  bool v7; // dl
  const char *m_pAsString; // rbx
  bool v10; // r12

  v4 = (*(pNPC->_vptr_IHandleEntity + 413))(pNPC);
  Caster = CDOTA_Buff::GetCaster(this);
  v6 = (*(Caster->_vptr_IHandleEntity + 413))(Caster);
  v7 = 1;
  if ( v4 == v6 )
  {
    if ( pNPC == CDOTA_Buff::GetCaster(this) )
      return 0;
    m_pAsString = pNPC->m_iszUnitName.m_Value.u.m_pAsString;
    if ( m_pAsString == 0 )
      return 1;
    v10 = 0;
    if ( m_pAsString == "npc_dota_broodmother_spiderling"
      || strcmp(m_pAsString, "npc_dota_broodmother_spiderling") == 0
      || m_pAsString == "npc_dota_broodmother_spiderite" )
    {
      return v10;
    }
    return strcmp(m_pAsString, "npc_dota_broodmother_spiderite") != 0;
  }
  return v7;
}


// CDOTA_Modifier_Broodmother_SpinWeb_Thinker::~CDOTA_Modifier_Broodmother_SpinWeb_Thinker  (line 1167, @0x0000000002b369b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Broodmother_SpinWeb_Thinker::~CDOTA_Modifier_Broodmother_SpinWeb_Thinker(
        CDOTA_Modifier_Broodmother_SpinWeb_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_44B4A30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Broodmother_SpinWeb_Thinker::~CDOTA_Modifier_Broodmother_SpinWeb_Thinker  (line 1167, @0x0000000002b369d0, libserver.so)  // inlines: ~CDOTA_Modifier_Broodmother_SpinWeb_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Broodmother_SpinWeb_Thinker::~CDOTA_Modifier_Broodmother_SpinWeb_Thinker(
        CDOTA_Modifier_Broodmother_SpinWeb_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_44B4A30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Broodmother_SpinWeb_Thinker::OnCreated  (line 1192, @0x0000000002b6c630, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Broodmother_SpinWeb_Thinker::OnCreated(
        CDOTA_Modifier_Broodmother_SpinWeb_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
}


// CDOTA_Modifier_Broodmother_SpinWeb_Thinker::OnRefresh  (line 1203, @0x0000000002b6ca50, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Broodmother_SpinWeb_Thinker::OnRefresh(
        CDOTA_Modifier_Broodmother_SpinWeb_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
}


// CDOTA_Modifier_Broodmother_SpinWeb_Thinker::CheckState  (line 1210, @0x0000000002b34630, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Broodmother_SpinWeb_Thinker::CheckState(
        CDOTA_Modifier_Broodmother_SpinWeb_Thinker *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x2800306uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFD7FFCF9LL;
}


// CDOTA_Modifier_Broodmother_SpinWebInvisibleApplier::~CDOTA_Modifier_Broodmother_SpinWebInvisibleApplier  (line 1273, @0x0000000002b9b600, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Broodmother_SpinWebInvisibleApplier::~CDOTA_Modifier_Broodmother_SpinWebInvisibleApplier(
        CDOTA_Modifier_Broodmother_SpinWebInvisibleApplier *const this)
{
  this->_vptr_CDOTA_Buff = &off_44B4D50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Broodmother_SpinWebInvisibleApplier::~CDOTA_Modifier_Broodmother_SpinWebInvisibleApplier  (line 1273, @0x0000000002b9b620, libserver.so)  // inlines: ~CDOTA_Modifier_Broodmother_SpinWebInvisibleApplier
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Broodmother_SpinWebInvisibleApplier::~CDOTA_Modifier_Broodmother_SpinWebInvisibleApplier(
        CDOTA_Modifier_Broodmother_SpinWebInvisibleApplier *const this)
{
  this->_vptr_CDOTA_Buff = &off_44B4D50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Broodmother_SpinWebInvisibleApplier::IsHidden  (line 1278, @0x0000000002b8e650, libserver.so)
bool __fastcall CDOTA_Modifier_Broodmother_SpinWebInvisibleApplier::IsHidden(
        CDOTA_Modifier_Broodmother_SpinWebInvisibleApplier *const this)
{
  return 1;
}


// CDOTA_Modifier_Broodmother_SpinWebInvisibleApplier::DestroyOnAuraRefresh  (line 1283, @0x0000000002b8e660, libserver.so)
bool __fastcall CDOTA_Modifier_Broodmother_SpinWebInvisibleApplier::DestroyOnAuraRefresh(
        CDOTA_Modifier_Broodmother_SpinWebInvisibleApplier *const this)
{
  return 0;
}


// CDOTA_Modifier_Broodmother_SpinWebInvisibleApplier::OnCreated  (line 1290, @0x0000000002b380c0, libserver.so)
// calls: KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_broodmother_spin_web"
void __fastcall CDOTA_Modifier_Broodmother_SpinWebInvisibleApplier::OnCreated(
        CDOTA_Modifier_Broodmother_SpinWebInvisibleApplier *const this,
        KeyValues *pKV)
{
  float v3; // xmm1_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *Parent; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_broodmother_spin_web");
  KeyValues::SetFloat(&kv, "duration", v3);
  Ability = CDOTA_Buff::GetAbility(this);
  Caster = CDOTA_Buff::GetCaster(this);
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::AddNewModifier(Parent, Caster, Ability, "modifier_broodmother_spin_web", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Broodmother_SpinWebInvisibleApplier::OnRefresh  (line 1300, @0x0000000002b38180, libserver.so)
// calls: KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_broodmother_spin_web"
void __fastcall CDOTA_Modifier_Broodmother_SpinWebInvisibleApplier::OnRefresh(
        CDOTA_Modifier_Broodmother_SpinWebInvisibleApplier *const this,
        KeyValues *pKV)
{
  float v3; // xmm1_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *Parent; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_broodmother_spin_web");
  KeyValues::SetFloat(&kv, "duration", v3);
  Ability = CDOTA_Buff::GetAbility(this);
  Caster = CDOTA_Buff::GetCaster(this);
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::AddNewModifier(Parent, Caster, Ability, "modifier_broodmother_spin_web", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Broodmother_SpinWebInvisibleApplier::OnDestroy  (line 1311, @0x0000000002b7ec70, libserver.so)  // inlines: DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy
// strings: "fade_delay", "modifier_broodmother_spin_web", "modifier_broodmother_spin_web_slowed"
void __fastcall CDOTA_Modifier_Broodmother_SpinWebInvisibleApplier::OnDestroy(
        CDOTA_Modifier_Broodmother_SpinWebInvisibleApplier *const this)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_Buff *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "fade_delay", -1, 0);
  Parent = CDOTA_Buff::GetParent(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_broodmother_spin_web", 0);
  if ( ModifierByName != 0 )
    CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
  v5 = CDOTA_Buff::GetParent(this);
  v6 = CDOTA_BaseNPC::FindModifierByName(v5, "modifier_broodmother_spin_web_slowed", 0);
  if ( v6 != 0 )
    CDOTA_Buff::Destroy(v6, 0, 0, 0);
}


// CDOTA_Modifier_Broodmother_SpinWeb_Slowed::~CDOTA_Modifier_Broodmother_SpinWeb_Slowed  (line 1332, @0x0000000002b9b5b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Broodmother_SpinWeb_Slowed::~CDOTA_Modifier_Broodmother_SpinWeb_Slowed(
        CDOTA_Modifier_Broodmother_SpinWeb_Slowed *const this)
{
  this->_vptr_CDOTA_Buff = &off_44B5070;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Broodmother_SpinWeb_Slowed::~CDOTA_Modifier_Broodmother_SpinWeb_Slowed  (line 1332, @0x0000000002b9b5d0, libserver.so)  // inlines: ~CDOTA_Modifier_Broodmother_SpinWeb_Slowed
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Broodmother_SpinWeb_Slowed::~CDOTA_Modifier_Broodmother_SpinWeb_Slowed(
        CDOTA_Modifier_Broodmother_SpinWeb_Slowed *const this)
{
  this->_vptr_CDOTA_Buff = &off_44B5070;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Broodmother_SpinWeb_Slowed::IsPurgable  (line 1341, @0x0000000002b8e670, libserver.so)
bool __fastcall CDOTA_Modifier_Broodmother_SpinWeb_Slowed::IsPurgable(
        CDOTA_Modifier_Broodmother_SpinWeb_Slowed *const this)
{
  return 0;
}


// CDOTA_Modifier_Broodmother_SpinWeb_Slowed::OnCreated  (line 1351, @0x0000000002b6cab0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_movespeed"
void __fastcall CDOTA_Modifier_Broodmother_SpinWeb_Slowed::OnCreated(
        CDOTA_Modifier_Broodmother_SpinWeb_Slowed *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_movespeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_movespeed", -1, 0);
  else
    this->bonus_movespeed = 0;
}


// CDOTA_Modifier_Broodmother_SpinWeb_Slowed::DeclareFunctions  (line 1359, @0x0000000002b34650, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Broodmother_SpinWeb_Slowed::DeclareFunctions(
        CDOTA_Modifier_Broodmother_SpinWeb_Slowed *const this)
{
  this->m_Functions[13].__pfn = (&stru_10 + 697);
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Broodmother_SpinWeb_Slowed::GetModifierMoveSpeedBonus_Percentage  (line 1368, @0x0000000002b34670, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Broodmother_SpinWeb_Slowed::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Broodmother_SpinWeb_Slowed *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->bonus_movespeed;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Broodmother_SpinWeb::~CDOTA_Modifier_Broodmother_SpinWeb  (line 1377, @0x0000000002b9b560, libserver.so)  // inlines: ~CDOTA_Modifier_PersistentInvisibility
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Broodmother_SpinWeb::~CDOTA_Modifier_Broodmother_SpinWeb(
        CDOTA_Modifier_Broodmother_SpinWeb *const this)
{
  this->_vptr_CDOTA_Buff = &off_411D6D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Broodmother_SpinWeb::~CDOTA_Modifier_Broodmother_SpinWeb  (line 1377, @0x0000000002b9b580, libserver.so)  // inlines: ~CDOTA_Modifier_Broodmother_SpinWeb, ~CDOTA_Modifier_PersistentInvisibility
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Broodmother_SpinWeb::~CDOTA_Modifier_Broodmother_SpinWeb(
        CDOTA_Modifier_Broodmother_SpinWeb *const this)
{
  this->_vptr_CDOTA_Buff = &off_411D6D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Broodmother_SpinWeb::IsPurgable  (line 1387, @0x0000000002b8e680, libserver.so)
bool __fastcall CDOTA_Modifier_Broodmother_SpinWeb::IsPurgable(CDOTA_Modifier_Broodmother_SpinWeb *const this)
{
  return 0;
}


// CDOTA_Modifier_Broodmother_SpinWeb::CheckState  (line 1408, @0x0000000002b3cbb0, libserver.so)  // inlines: DOTAGameRules, Enable, GetGameTime
void __fastcall CDOTA_Modifier_Broodmother_SpinWeb::CheckState(
        CDOTA_Modifier_Broodmother_SpinWeb *const this,
        CDOTABuffState *const buffState)
{
  float v2; // xmm0_4
  uint64 m_nDisabledStateMask; // rax

  v2 = 0.0;
  if ( g_pGameRules != 0 )
    v2 = *&g_pGameRules[18].m_szQuestName[20];
  if ( (v2 - this->m_fLastDamageTime) > this->damage_time )
  {
    m_nDisabledStateMask = buffState->m_nDisabledStateMask;
    buffState->m_nEnabledStateMask |= 0x202000000uLL;
    buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFDFDFFFFFFLL;
  }
}


// CDOTA_Modifier_Broodmother_SpinWeb::OnTakeDamage  (line 1421, @0x0000000002b46550, libserver.so)  // inlines: AttackerNPC, DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, IndexToIdentity, IsOwnedByAnyPlayer, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CGridNav::DestroyTreesAroundPoint, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_broodmother_spin_web_slowed", "bonus_movespeed"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Broodmother_SpinWeb::OnTakeDamage(
        CDOTA_Modifier_Broodmother_SpinWeb *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 v7; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *v12; // r13
  CDOTA_BaseNPC *Parent; // r14
  CDOTA_BaseNPC *v14; // rax
  int m_Id; // eax
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v17; // r12d
  CDOTA_BaseNPC *v18; // rax
  float v19; // xmm3_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *v23; // r13
  CDOTA_BaseNPC *v24; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v26; // [rsp+18h] [rbp-28h]
  Vector v28; // 0:xmm0_8.8,8:xmm1_4.4

  v26 = __readfsqword(0x28u);
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
  if ( v7 + 2 > 1 )
  {
    m_Index_low = LOWORD(params->hattacker.m_Index);
    v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v9 != 0 )
    {
      v10 = &v9[m_Index_low & 0x1FF];
      if ( v10 != 0 && v7 == v10->m_EHandle.m_Index )
      {
        v12 = v10->m_pInstance;
        if ( v10->m_pInstance != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 && m_pInstance != 0 )
        {
          Parent = CDOTA_Buff::GetParent(this);
          if ( Parent == m_pInstance )
          {
            v14 = CDOTA_Buff::GetParent(this);
            if ( (*(v14->_vptr_IHandleEntity + 408))(v14) != 0 )
            {
              m_Id = v12[43].m_iszPrivateVScripts.u.m_Id;
              if ( (m_Id & 1) != 0
                || v12[61].m_hPrivateScope.m_hScope != 0
                || (m_Id & 0x800) != 0
                || (*(v12->_vptr_IHandleEntity + 405))(v12) != 0 )
              {
                if ( (Parent->m_nUnitState64.m_Value & 0x200000000LL) != 0 )
                {
                  Caster = CDOTA_Buff::GetCaster(this);
                  v17 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
                  v18 = CDOTA_Buff::GetParent(this);
                  v28 = *CBaseEntity::GetAbsOrigin(v18);
                  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v17, v28, 150.0, v19);
                }
                v20 = 0.0;
                if ( g_pGameRules != 0 )
                  v20 = *&g_pGameRules[18].m_szQuestName[20];
                this->m_fLastDamageTime = v20;
                KeyValues::KeyValues(&kv, "modifier_broodmother_spin_web_slowed");
                KeyValues::SetFloat(&kv, "duration", v21);
                KeyValues::SetInt(&kv, "bonus_movespeed", this->bonus_movespeed);
                Ability = CDOTA_Buff::GetAbility(this);
                v23 = CDOTA_Buff::GetCaster(this);
                v24 = CDOTA_Buff::GetParent(this);
                CDOTA_BaseNPC::AddNewModifier(v24, v23, Ability, "modifier_broodmother_spin_web_slowed", &kv, 0);
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


// CDOTA_Modifier_Broodmother_SpinWeb::OnCreated  (line 1451, @0x0000000002b7e6d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Modifier_PersistentInvisibility::OnCreated, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "heath_regen", "bonus_movespeed", "damage_time"
void __fastcall CDOTA_Modifier_Broodmother_SpinWeb::OnCreated(
        CDOTA_Modifier_Broodmother_SpinWeb *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  CDOTA_Modifier_PersistentInvisibility::OnCreated(this, pKV);
  this->m_fLastDamageTime = -1.0;
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->heath_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "heath_regen", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->bonus_movespeed = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->heath_regen = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->bonus_movespeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_movespeed", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->damage_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "damage_time", -1, 0);
    return;
  }
LABEL_7:
  this->damage_time = 0.0;
}


// CDOTA_Modifier_Broodmother_SpinWeb::OnRefresh  (line 1464, @0x0000000002b7e540, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Modifier_PersistentInvisibility::OnRefresh, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "heath_regen", "bonus_movespeed", "damage_time"
void __fastcall CDOTA_Modifier_Broodmother_SpinWeb::OnRefresh(
        CDOTA_Modifier_Broodmother_SpinWeb *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  CDOTA_Modifier_PersistentInvisibility::OnRefresh(this, pKV);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->heath_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "heath_regen", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->bonus_movespeed = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->heath_regen = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->bonus_movespeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_movespeed", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->damage_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "damage_time", -1, 0);
    return;
  }
LABEL_7:
  this->damage_time = 0.0;
}


// CDOTA_Modifier_Broodmother_SpinWeb::GetActivityTranslationModifiers  (line 1474, @0x0000000002b34690, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Broodmother_SpinWeb::GetActivityTranslationModifiers(
        CDOTA_Modifier_Broodmother_SpinWeb *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "web";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_Broodmother_SpinWeb::DeclareFunctions  (line 1482, @0x0000000002b3a1d0, libserver.so)  // inlines: SetFunction
// calls: CDOTA_Modifier_PersistentInvisibility::DeclareFunctions
// globals: CDOTA_Modifier_Broodmother_SpinWeb::GetActivityTranslationModifiers(CModifierParams const&), CDOTA_Modifier_Broodmother_SpinWeb::OnTakeDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Broodmother_SpinWeb::DeclareFunctions(CDOTA_Modifier_Broodmother_SpinWeb *const this)
{
  CDOTA_Modifier_PersistentInvisibility::DeclareFunctions(this);
  this->m_Functions[56].__pfn = (&stru_10 + 729);
  this->m_Functions[155].__pfn = CDOTA_Modifier_Broodmother_SpinWeb::GetActivityTranslationModifiers;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[13].__pfn = (&stru_10 + 737);
  this->m_Functions[13].__delta = 0;
  this->m_Functions[155].__delta = 0;
  this->m_Functions[134].__pfn = CDOTA_Modifier_Broodmother_SpinWeb::OnTakeDamage;
  this->m_Functions[134].__delta = 0;
}


// CDOTA_Modifier_Broodmother_SpinWeb::GetModifierConstantHealthRegen  (line 1513, @0x0000000002b346b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Broodmother_SpinWeb::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Broodmother_SpinWeb *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->heath_regen;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Broodmother_SpinWeb::GetModifierMoveSpeedBonus_Percentage  (line 1520, @0x0000000002b346d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Broodmother_SpinWeb::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Broodmother_SpinWeb *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = (2 * this->bonus_movespeed);
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Broodmother_SpinWeb::OnDestroy  (line 1527, @0x0000000002b3a250, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindClearSpaceForUnit, CDOTA_Modifier_PersistentInvisibility::OnDestroy
void __fastcall CDOTA_Modifier_Broodmother_SpinWeb::OnDestroy(CDOTA_Modifier_Broodmother_SpinWeb *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v4; // rax

  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v4 = CDOTA_Buff::GetParent(this);
  FindClearSpaceForUnit(v4, *AbsOrigin, 0);
  CDOTA_Modifier_PersistentInvisibility::OnDestroy(this);
}


// CDOTA_Ability_Broodmother_SpinWeb_Destroy::~CDOTA_Ability_Broodmother_SpinWeb_Destroy  (line 1540, @0x0000000002ba08b0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Broodmother_SpinWeb_Destroy::~CDOTA_Ability_Broodmother_SpinWeb_Destroy(
        CDOTA_Ability_Broodmother_SpinWeb_Destroy *const this)
{
  this->_vptr_IHandleEntity = &off_44B5730;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Broodmother_SpinWeb_Destroy::~CDOTA_Ability_Broodmother_SpinWeb_Destroy  (line 1540, @0x0000000002ba08d0, libserver.so)  // inlines: ~CDOTA_Ability_Broodmother_SpinWeb_Destroy
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Broodmother_SpinWeb_Destroy::~CDOTA_Ability_Broodmother_SpinWeb_Destroy(
        CDOTA_Ability_Broodmother_SpinWeb_Destroy *const this)
{
  this->_vptr_IHandleEntity = &off_44B5730;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Broodmother_SpinWeb_Destroy::Schema_DynamicBinding  (line 1542, @0x0000000002b8e690, libserver.so)
// globals: CDOTA_Ability_Broodmother_SpinWeb_Destroy::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Broodmother_SpinWeb_Destroy::Schema_DynamicBinding(
        const CDOTA_Ability_Broodmother_SpinWeb_Destroy *const this)
{
  return CDOTA_Ability_Broodmother_SpinWeb_Destroy::s_pSchemaBinding;
}


// CDOTA_Ability_Broodmother_SpinWeb_Destroy::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1542, @0x0000000002b8e6a0, libserver.so)
// globals: CDOTA_Ability_Broodmother_SpinWeb_Destroy::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Broodmother_SpinWeb_Destroy::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Broodmother_SpinWeb_Destroy::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Broodmother_SpinWeb_Destroy::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Broodmother_SpinWeb_Destroy::CEntityInstanceEntityClass::DestructInstance  (line 1542, @0x0000000002b8e6b0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Broodmother_SpinWeb_Destroy>
void __fastcall CDOTA_Ability_Broodmother_SpinWeb_Destroy::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Broodmother_SpinWeb_Destroy::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Broodmother_SpinWeb_Destroy::CEntityInstanceEntityClass::FreeInstance  (line 1542, @0x0000000002b8e6d0, libserver.so)
void __fastcall CDOTA_Ability_Broodmother_SpinWeb_Destroy::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Broodmother_SpinWeb_Destroy::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Broodmother_SpinWeb_Destroy::CEntityInstanceEntityClass::CanAllocate  (line 1542, @0x0000000002b8e6f0, libserver.so)
bool __fastcall CDOTA_Ability_Broodmother_SpinWeb_Destroy::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Broodmother_SpinWeb_Destroy::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Broodmother_SpinWeb_Destroy::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1542, @0x0000000002b8e700, libserver.so)
// globals: CDOTA_Ability_Broodmother_SpinWeb_Destroy::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Broodmother_SpinWeb_Destroy::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Broodmother_SpinWeb_Destroy::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Broodmother_SpinWeb_Destroy::s_pSchemaBinding;
}


// CDOTA_Ability_Broodmother_SpinWeb_Destroy::CEntityInstanceEntityClass::AllocateInstance  (line 1542, @0x0000000002b971e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Broodmother_SpinWeb_Destroy::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Broodmother_SpinWeb_Destroy::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Broodmother_SpinWeb_Destroy::CEntityInstanceEntityClass::ConstructInstance  (line 1542, @0x0000000002b9cd80, libserver.so)  // inlines: CDOTA_Ability_Broodmother_SpinWeb_Destroy, Construct<CDOTA_Ability_Broodmother_SpinWeb_Destroy>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Broodmother_SpinWeb_Destroy::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Broodmother_SpinWeb_Destroy::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44B5730;
  }
  return p;
}


// CDOTA_Ability_Broodmother_SpinWeb_Destroy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1542, @0x0000000002baa020, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Broodmother_SpinWeb_Destroy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Broodmother_SpinWeb_Destroy::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Broodmother_SpinWeb_Destroy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1542, @0x0000000002baa040, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Broodmother_SpinWeb_Destroy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Broodmother_SpinWeb_Destroy::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Broodmother_SpinWeb_Destroy::GetEntityClassInternal  (line 1542, @0x0000000002bc6380, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "broodmother_spin_web_destroy", "CDOTA_Ability_Broodmother_SpinWeb_Destroy"
// globals: `guard variable for'CDOTA_Ability_Broodmother_SpinWeb_Destroy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpinWeb_DestroyClass, CDOTA_Ability_Broodmother_SpinWeb_Destroy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpinWeb_DestroyClass, __dso_handle, CDOTA_Ability_Broodmother_SpinWeb_Destroy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Broodmother_SpinWeb_Destroy::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpinWeb_DestroyClassInfo, CDOTA_Ability_Broodmother_SpinWeb_Destroy::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpinWeb_DestroyClassInfo
CEntityClass *__cdecl CDOTA_Ability_Broodmother_SpinWeb_Destroy::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Broodmother_SpinWeb_Destroy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpinWeb_DestroyClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Broodmother_SpinWeb_Destroy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpinWeb_DestroyClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Broodmother_SpinWeb_Destroy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpinWeb_DestroyClass);
    CDOTA_Ability_Broodmother_SpinWeb_Destroy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpinWeb_DestroyClass._vptr_CEntityClass = off_44B56B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Broodmother_SpinWeb_Destroy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpinWeb_DestroyClass);
    __cxa_atexit(
      CDOTA_Ability_Broodmother_SpinWeb_Destroy::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Broodmother_SpinWeb_Destroy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpinWeb_DestroyClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Broodmother_SpinWeb_DestroyClass != 0 )
    return &CDOTA_Ability_Broodmother_SpinWeb_Destroy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpinWeb_DestroyClass;
  if ( `guard variable for'CDOTA_Ability_Broodmother_SpinWeb_Destroy::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpinWeb_DestroyClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Broodmother_SpinWeb_Destroy::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpinWeb_DestroyClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Broodmother_SpinWeb_Destroy::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpinWeb_DestroyClassInfo,
      "CDOTA_Ability_Broodmother_SpinWeb_Destroy",
      "broodmother_spin_web_destroy",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Broodmother_SpinWeb_Destroy::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpinWeb_DestroyClassInfo);
  }
  CDOTA_Ability_Broodmother_SpinWeb_Destroy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpinWeb_DestroyClass.m_pClassInfo = &CDOTA_Ability_Broodmother_SpinWeb_Destroy::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpinWeb_DestroyClassInfo;
  CDOTA_Ability_Broodmother_SpinWeb_Destroy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpinWeb_DestroyClass.m_pBaseClassInfo = CDOTA_Ability_Broodmother_SpinWeb_Destroy::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpinWeb_DestroyClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Broodmother_SpinWeb_DestroyClass = &CDOTA_Ability_Broodmother_SpinWeb_Destroy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpinWeb_DestroyClass;
  CDOTA_Ability_Broodmother_SpinWeb_Destroy::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_SpinWeb_DestroyClassInfo.m_pClass = &CDOTA_Ability_Broodmother_SpinWeb_Destroy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpinWeb_DestroyClass;
  CDOTA_Ability_Broodmother_SpinWeb_Destroy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpinWeb_DestroyClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Broodmother_SpinWeb_DestroyClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Broodmother_SpinWeb_Destroy::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_SpinWeb_DestroyClass;
}


// CDOTA_Ability_Broodmother_SpinWeb_Destroy::ProcsMagicStick  (line 1547, @0x0000000002b8e710, libserver.so)
bool __fastcall CDOTA_Ability_Broodmother_SpinWeb_Destroy::ProcsMagicStick(
        CDOTA_Ability_Broodmother_SpinWeb_Destroy *const this)
{
  return 0;
}


// CDOTA_Ability_Broodmother_SpinWeb_Destroy::OnSpellStart  (line 1555, @0x0000000002b37510, libserver.so)
// calls: CDOTABaseAbility::GetCaster, UTIL_Remove
void __fastcall CDOTA_Ability_Broodmother_SpinWeb_Destroy::OnSpellStart(
        CDOTA_Ability_Broodmother_SpinWeb_Destroy *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  UTIL_Remove(Caster);
}


// CDOTA_Ability_Broodmother_IncapacitatingBite::~CDOTA_Ability_Broodmother_IncapacitatingBite  (line 1568, @0x0000000002ba0900, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Broodmother_IncapacitatingBite::~CDOTA_Ability_Broodmother_IncapacitatingBite(
        CDOTA_Ability_Broodmother_IncapacitatingBite *const this)
{
  this->_vptr_IHandleEntity = &off_44B6230;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Broodmother_IncapacitatingBite::~CDOTA_Ability_Broodmother_IncapacitatingBite  (line 1568, @0x0000000002ba0920, libserver.so)  // inlines: ~CDOTA_Ability_Broodmother_IncapacitatingBite
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Broodmother_IncapacitatingBite::~CDOTA_Ability_Broodmother_IncapacitatingBite(
        CDOTA_Ability_Broodmother_IncapacitatingBite *const this)
{
  this->_vptr_IHandleEntity = &off_44B6230;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Broodmother_IncapacitatingBite::Schema_DynamicBinding  (line 1570, @0x0000000002b8e720, libserver.so)
// globals: CDOTA_Ability_Broodmother_IncapacitatingBite::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Broodmother_IncapacitatingBite::Schema_DynamicBinding(
        const CDOTA_Ability_Broodmother_IncapacitatingBite *const this)
{
  return CDOTA_Ability_Broodmother_IncapacitatingBite::s_pSchemaBinding;
}


// CDOTA_Ability_Broodmother_IncapacitatingBite::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1570, @0x0000000002b8e730, libserver.so)
// globals: CDOTA_Ability_Broodmother_IncapacitatingBite::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Broodmother_IncapacitatingBite::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Broodmother_IncapacitatingBite::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Broodmother_IncapacitatingBite::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Broodmother_IncapacitatingBite::CEntityInstanceEntityClass::DestructInstance  (line 1570, @0x0000000002b8e740, libserver.so)  // inlines: Destruct<CDOTA_Ability_Broodmother_IncapacitatingBite>
void __fastcall CDOTA_Ability_Broodmother_IncapacitatingBite::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Broodmother_IncapacitatingBite::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Broodmother_IncapacitatingBite::CEntityInstanceEntityClass::FreeInstance  (line 1570, @0x0000000002b8e760, libserver.so)
void __fastcall CDOTA_Ability_Broodmother_IncapacitatingBite::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Broodmother_IncapacitatingBite::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Broodmother_IncapacitatingBite::CEntityInstanceEntityClass::CanAllocate  (line 1570, @0x0000000002b8e780, libserver.so)
bool __fastcall CDOTA_Ability_Broodmother_IncapacitatingBite::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Broodmother_IncapacitatingBite::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Broodmother_IncapacitatingBite::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1570, @0x0000000002b8e790, libserver.so)
// globals: CDOTA_Ability_Broodmother_IncapacitatingBite::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Broodmother_IncapacitatingBite::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Broodmother_IncapacitatingBite::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Broodmother_IncapacitatingBite::s_pSchemaBinding;
}


// CDOTA_Ability_Broodmother_IncapacitatingBite::CEntityInstanceEntityClass::AllocateInstance  (line 1570, @0x0000000002b97220, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Broodmother_IncapacitatingBite::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Broodmother_IncapacitatingBite::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Broodmother_IncapacitatingBite::CEntityInstanceEntityClass::ConstructInstance  (line 1570, @0x0000000002b9cdb0, libserver.so)  // inlines: CDOTA_Ability_Broodmother_IncapacitatingBite, Construct<CDOTA_Ability_Broodmother_IncapacitatingBite>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Broodmother_IncapacitatingBite::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Broodmother_IncapacitatingBite::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44B6230;
  }
  return p;
}


// CDOTA_Ability_Broodmother_IncapacitatingBite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1570, @0x0000000002baa070, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Broodmother_IncapacitatingBite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Broodmother_IncapacitatingBite::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Broodmother_IncapacitatingBite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1570, @0x0000000002baa090, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Broodmother_IncapacitatingBite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Broodmother_IncapacitatingBite::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Broodmother_IncapacitatingBite::GetEntityClassInternal  (line 1570, @0x0000000002bc64d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "broodmother_incapacitating_bite", "CDOTA_Ability_Broodmother_IncapacitatingBite"
// globals: `guard variable for'CDOTA_Ability_Broodmother_IncapacitatingBite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_IncapacitatingBiteClass, CDOTA_Ability_Broodmother_IncapacitatingBite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_IncapacitatingBiteClass, __dso_handle, CDOTA_Ability_Broodmother_IncapacitatingBite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Broodmother_IncapacitatingBite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_IncapacitatingBiteClassInfo, CDOTA_Ability_Broodmother_IncapacitatingBite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_IncapacitatingBiteClassInfo
CEntityClass *__cdecl CDOTA_Ability_Broodmother_IncapacitatingBite::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Broodmother_IncapacitatingBite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_IncapacitatingBiteClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Broodmother_IncapacitatingBite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_IncapacitatingBiteClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Broodmother_IncapacitatingBite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_IncapacitatingBiteClass);
    CDOTA_Ability_Broodmother_IncapacitatingBite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_IncapacitatingBiteClass._vptr_CEntityClass = off_44B61B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Broodmother_IncapacitatingBite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_IncapacitatingBiteClass);
    __cxa_atexit(
      CDOTA_Ability_Broodmother_IncapacitatingBite::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Broodmother_IncapacitatingBite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_IncapacitatingBiteClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Broodmother_IncapacitatingBiteClass != 0 )
    return &CDOTA_Ability_Broodmother_IncapacitatingBite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_IncapacitatingBiteClass;
  if ( `guard variable for'CDOTA_Ability_Broodmother_IncapacitatingBite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_IncapacitatingBiteClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Broodmother_IncapacitatingBite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_IncapacitatingBiteClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Broodmother_IncapacitatingBite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_IncapacitatingBiteClassInfo,
      "CDOTA_Ability_Broodmother_IncapacitatingBite",
      "broodmother_incapacitating_bite",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Broodmother_IncapacitatingBite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_IncapacitatingBiteClassInfo);
  }
  CDOTA_Ability_Broodmother_IncapacitatingBite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_IncapacitatingBiteClass.m_pClassInfo = &CDOTA_Ability_Broodmother_IncapacitatingBite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_IncapacitatingBiteClassInfo;
  CDOTA_Ability_Broodmother_IncapacitatingBite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_IncapacitatingBiteClass.m_pBaseClassInfo = CDOTA_Ability_Broodmother_IncapacitatingBite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_IncapacitatingBiteClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Broodmother_IncapacitatingBiteClass = &CDOTA_Ability_Broodmother_IncapacitatingBite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_IncapacitatingBiteClass;
  CDOTA_Ability_Broodmother_IncapacitatingBite::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_IncapacitatingBiteClassInfo.m_pClass = &CDOTA_Ability_Broodmother_IncapacitatingBite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_IncapacitatingBiteClass;
  CDOTA_Ability_Broodmother_IncapacitatingBite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_IncapacitatingBiteClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Broodmother_IncapacitatingBiteClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Broodmother_IncapacitatingBite::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_IncapacitatingBiteClass;
}


// CDOTA_Ability_Broodmother_IncapacitatingBite::GetIntrinsicModifierName  (line 1573, @0x0000000002b8e7a0, libserver.so)
// strings: "modifier_broodmother_incapacitating_bite"
const char *__fastcall CDOTA_Ability_Broodmother_IncapacitatingBite::GetIntrinsicModifierName(
        CDOTA_Ability_Broodmother_IncapacitatingBite *const this)
{
  return "modifier_broodmother_incapacitating_bite";
}


// CDOTA_Ability_Broodmother_IncapacitatingBite::GetSlowDuration  (line 1582, @0x0000000002b75420, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Broodmother_IncapacitatingBite::GetSlowDuration(
        CDOTA_Ability_Broodmother_IncapacitatingBite *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 1);
}


// CDOTA_Modifier_Broodmother_IncapacitatingBite::~CDOTA_Modifier_Broodmother_IncapacitatingBite  (line 1591, @0x0000000002b9b510, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Broodmother_IncapacitatingBite::~CDOTA_Modifier_Broodmother_IncapacitatingBite(
        CDOTA_Modifier_Broodmother_IncapacitatingBite *const this)
{
  this->_vptr_CDOTA_Buff = &off_44B6CF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Broodmother_IncapacitatingBite::~CDOTA_Modifier_Broodmother_IncapacitatingBite  (line 1591, @0x0000000002b9b530, libserver.so)  // inlines: ~CDOTA_Modifier_Broodmother_IncapacitatingBite
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Broodmother_IncapacitatingBite::~CDOTA_Modifier_Broodmother_IncapacitatingBite(
        CDOTA_Modifier_Broodmother_IncapacitatingBite *const this)
{
  this->_vptr_CDOTA_Buff = &off_44B6CF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Broodmother_IncapacitatingBite::IsHidden  (line 1596, @0x0000000002b8e7b0, libserver.so)
bool __fastcall CDOTA_Modifier_Broodmother_IncapacitatingBite::IsHidden(
        CDOTA_Modifier_Broodmother_IncapacitatingBite *const this)
{
  return 1;
}


// CDOTA_Modifier_Broodmother_IncapacitatingBite::DeclareFunctions  (line 1613, @0x0000000002b346f0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Broodmother_IncapacitatingBite::OnAttackLanded(CModifierParams const&)
void __fastcall CDOTA_Modifier_Broodmother_IncapacitatingBite::DeclareFunctions(
        CDOTA_Modifier_Broodmother_IncapacitatingBite *const this)
{
  this->m_Functions[121].__pfn = CDOTA_Modifier_Broodmother_IncapacitatingBite::OnAttackLanded;
  this->m_Functions[121].__delta = 0;
}


// CDOTA_Modifier_Broodmother_IncapacitatingBite::OnAttackLanded  (line 1620, @0x0000000002b49140, libserver.so)  // inlines: Attacker, AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::IsInvulnerable, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_broodmother_incapacitating_bite_orb"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Broodmother_IncapacitatingBite::OnAttackLanded(
        CDOTA_Modifier_Broodmother_IncapacitatingBite *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // edx
  CDOTA_BaseNPC *m_pInstance; // rsi
  CDOTA_BaseNPC *v7; // r12
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  uint32 v11; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityInstance *v14; // rbx
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v16; // r15
  int m_Id; // eax
  float v18; // xmm1_4
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-38h]
  ModifierVariant_t result; // 0:rax.16

  v20 = __readfsqword(0x28u);
  Parent = CDOTA_Buff::GetParent(this);
  m_Index = params->hattacker.m_Index;
  m_pInstance = 0;
  v7 = Parent;
  if ( m_Index + 2 > 1 )
  {
    v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v8 != 0 )
    {
      v9 = &v8[params->hattacker.m_Index & 0x1FF];
      if ( v9 != 0 && m_Index == v9->m_EHandle.m_Index )
        m_pInstance = v9->m_pInstance;
    }
  }
  if ( v7 == m_pInstance )
  {
    v11 = params->htarget.m_Index;
    if ( v11 + 2 <= 1
      || (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
      || (v13 = &v12[params->htarget.m_Index & 0x1FF]) == 0
      || v11 != v13->m_EHandle.m_Index
      || (v14 = v13->m_pInstance, v13->m_pInstance == 0)
      || BYTE3(v14[7]._vptr_IHandleEntity) == 0 )
    {
      v14 = 0;
    }
    if ( v7 != 0 && v7->m_bIsDOTANPC )
    {
      Ability = CDOTA_Buff::GetAbility(this);
      v16 = Ability;
      if ( v14 != 0
        && Ability != 0
        && (BYTE1(v14[58]._vptr_IHandleEntity) & 2) == 0
        && LOBYTE(v14[71]._vptr_IHandleEntity) == 0
        && !CDOTA_BaseNPC::IsInvulnerable(v14) )
      {
        m_Id = v14[43].m_iszPrivateVScripts.u.m_Id;
        if ( (m_Id & 0x10) == 0
          && (m_Id & 0x193) != 0
          && HIBYTE(v14[7].m_CScriptComponent) != v7->m_iTeamNum.m_Value
          && (v7->m_nUnitState64.m_Value & 0x10000000) == 0 )
        {
          KeyValues::KeyValues(&kv, "modifier_broodmother_incapacitating_bite_orb");
          KeyValues::SetFloat(&kv, "duration", v18);
          CDOTA_BaseNPC::AddNewModifier(v14, v7, v16, "modifier_broodmother_incapacitating_bite_orb", &kv, 0);
          KeyValues::~KeyValues(&kv);
          *&result.m_eType = 1;
          goto LABEL_8;
        }
      }
    }
    else
    {
      CDOTA_Buff::GetAbility(this);
    }
  }
  *&result.m_eType = 1;
LABEL_8:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Broodmother_IncapacitatingBite::OnCreated  (line 1650, @0x0000000002b7d840, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
void __fastcall CDOTA_Modifier_Broodmother_IncapacitatingBite::OnCreated(
        CDOTA_Modifier_Broodmother_IncapacitatingBite *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "duration", -1, 0);
  else
    this->duration = 0.0;
}


// CDOTA_Modifier_Broodmother_IncapacitatingBite::OnRefresh  (line 1657, @0x0000000002b7d660, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
void __fastcall CDOTA_Modifier_Broodmother_IncapacitatingBite::OnRefresh(
        CDOTA_Modifier_Broodmother_IncapacitatingBite *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "duration", -1, 0);
  else
    this->duration = 0.0;
}


// CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb::~CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb  (line 1667, @0x0000000002b9b4c0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb::~CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb(
        CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb *const this)
{
  this->_vptr_CDOTA_Buff = &off_44B7010;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb::~CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb  (line 1667, @0x0000000002b9b4e0, libserver.so)  // inlines: ~CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb::~CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb(
        CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb *const this)
{
  this->_vptr_CDOTA_Buff = &off_44B7010;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb::IsDebuff  (line 1672, @0x0000000002b8e7c0, libserver.so)
bool __fastcall CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb::IsDebuff(
        CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb *const this)
{
  return 1;
}


// CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb::GetEffectName  (line 1677, @0x0000000002b8e7d0, libserver.so)
// strings: "particles/units/heroes/hero_broodmother/broodmother_incapacitatingbite_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb::GetEffectName(
        CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb *const this)
{
  return "particles/units/heroes/hero_broodmother/broodmother_incapacitatingbite_debuff.vpcf";
}


// CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb::OnCreated  (line 1693, @0x0000000002b6cc90, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "miss_chance", "bonus_movespeed"
void __fastcall CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb::OnCreated(
        CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->miss_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "miss_chance", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_movespeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_movespeed", -1, 0);
      return;
    }
  }
  else
  {
    this->miss_chance = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_movespeed = 0;
}


// CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb::OnRefresh  (line 1701, @0x0000000002b6d230, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "miss_chance", "bonus_movespeed"
void __fastcall CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb::OnRefresh(
        CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->miss_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "miss_chance", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_movespeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_movespeed", -1, 0);
      return;
    }
  }
  else
  {
    this->miss_chance = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_movespeed = 0;
}


// CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb::DeclareFunctions  (line 1708, @0x0000000002b34710, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb::DeclareFunctions(
        CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb *const this)
{
  this->m_Functions[44].__pfn = (&stru_10 + 697);
  this->m_Functions[44].__delta = 0;
  this->m_Functions[13].__pfn = (&stru_10 + 705);
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb::GetModifierMiss_Percentage  (line 1716, @0x0000000002b34750, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb::GetModifierMiss_Percentage(
        CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->miss_chance;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb::GetModifierMoveSpeedBonus_Percentage  (line 1723, @0x0000000002b34770, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Broodmother_IncapacitatingBiteOrb *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_movespeed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Broodmother_InsatiableHunger::~CDOTA_Ability_Broodmother_InsatiableHunger  (line 1734, @0x0000000002ba0950, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Broodmother_InsatiableHunger::~CDOTA_Ability_Broodmother_InsatiableHunger(
        CDOTA_Ability_Broodmother_InsatiableHunger *const this)
{
  this->_vptr_IHandleEntity = &off_44B7390;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Broodmother_InsatiableHunger::~CDOTA_Ability_Broodmother_InsatiableHunger  (line 1734, @0x0000000002ba0970, libserver.so)  // inlines: ~CDOTA_Ability_Broodmother_InsatiableHunger
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Broodmother_InsatiableHunger::~CDOTA_Ability_Broodmother_InsatiableHunger(
        CDOTA_Ability_Broodmother_InsatiableHunger *const this)
{
  this->_vptr_IHandleEntity = &off_44B7390;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Broodmother_InsatiableHunger::Schema_DynamicBinding  (line 1736, @0x0000000002b8e7e0, libserver.so)
// globals: CDOTA_Ability_Broodmother_InsatiableHunger::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Broodmother_InsatiableHunger::Schema_DynamicBinding(
        const CDOTA_Ability_Broodmother_InsatiableHunger *const this)
{
  return CDOTA_Ability_Broodmother_InsatiableHunger::s_pSchemaBinding;
}


// CDOTA_Ability_Broodmother_InsatiableHunger::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1736, @0x0000000002b8e7f0, libserver.so)
// globals: CDOTA_Ability_Broodmother_InsatiableHunger::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Broodmother_InsatiableHunger::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Broodmother_InsatiableHunger::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Broodmother_InsatiableHunger::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Broodmother_InsatiableHunger::CEntityInstanceEntityClass::DestructInstance  (line 1736, @0x0000000002b8e800, libserver.so)  // inlines: Destruct<CDOTA_Ability_Broodmother_InsatiableHunger>
void __fastcall CDOTA_Ability_Broodmother_InsatiableHunger::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Broodmother_InsatiableHunger::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Broodmother_InsatiableHunger::CEntityInstanceEntityClass::FreeInstance  (line 1736, @0x0000000002b8e820, libserver.so)
void __fastcall CDOTA_Ability_Broodmother_InsatiableHunger::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Broodmother_InsatiableHunger::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Broodmother_InsatiableHunger::CEntityInstanceEntityClass::CanAllocate  (line 1736, @0x0000000002b8e840, libserver.so)
bool __fastcall CDOTA_Ability_Broodmother_InsatiableHunger::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Broodmother_InsatiableHunger::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Broodmother_InsatiableHunger::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1736, @0x0000000002b8e850, libserver.so)
// globals: CDOTA_Ability_Broodmother_InsatiableHunger::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Broodmother_InsatiableHunger::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Broodmother_InsatiableHunger::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Broodmother_InsatiableHunger::s_pSchemaBinding;
}


// CDOTA_Ability_Broodmother_InsatiableHunger::CEntityInstanceEntityClass::AllocateInstance  (line 1736, @0x0000000002b97260, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Broodmother_InsatiableHunger::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Broodmother_InsatiableHunger::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Broodmother_InsatiableHunger::CEntityInstanceEntityClass::ConstructInstance  (line 1736, @0x0000000002b9cde0, libserver.so)  // inlines: CDOTA_Ability_Broodmother_InsatiableHunger, Construct<CDOTA_Ability_Broodmother_InsatiableHunger>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Broodmother_InsatiableHunger::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Broodmother_InsatiableHunger::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44B7390;
  }
  return p;
}


// CDOTA_Ability_Broodmother_InsatiableHunger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1736, @0x0000000002baa0c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Broodmother_InsatiableHunger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Broodmother_InsatiableHunger::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Broodmother_InsatiableHunger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1736, @0x0000000002baa0e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Broodmother_InsatiableHunger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Broodmother_InsatiableHunger::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Broodmother_InsatiableHunger::GetEntityClassInternal  (line 1736, @0x0000000002bc6620, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "broodmother_insatiable_hunger", "CDOTA_Ability_Broodmother_InsatiableHunger"
// globals: `guard variable for'CDOTA_Ability_Broodmother_InsatiableHunger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_InsatiableHungerClass, CDOTA_Ability_Broodmother_InsatiableHunger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_InsatiableHungerClass, __dso_handle, CDOTA_Ability_Broodmother_InsatiableHunger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Broodmother_InsatiableHunger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_InsatiableHungerClassInfo, CDOTA_Ability_Broodmother_InsatiableHunger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_InsatiableHungerClassInfo
CEntityClass *__cdecl CDOTA_Ability_Broodmother_InsatiableHunger::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Broodmother_InsatiableHunger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_InsatiableHungerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Broodmother_InsatiableHunger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_InsatiableHungerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Broodmother_InsatiableHunger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_InsatiableHungerClass);
    CDOTA_Ability_Broodmother_InsatiableHunger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_InsatiableHungerClass._vptr_CEntityClass = off_44B7310;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Broodmother_InsatiableHunger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_InsatiableHungerClass);
    __cxa_atexit(
      CDOTA_Ability_Broodmother_InsatiableHunger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Broodmother_InsatiableHunger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_InsatiableHungerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Broodmother_InsatiableHungerClass != 0 )
    return &CDOTA_Ability_Broodmother_InsatiableHunger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_InsatiableHungerClass;
  if ( `guard variable for'CDOTA_Ability_Broodmother_InsatiableHunger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_InsatiableHungerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Broodmother_InsatiableHunger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_InsatiableHungerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Broodmother_InsatiableHunger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_InsatiableHungerClassInfo,
      "CDOTA_Ability_Broodmother_InsatiableHunger",
      "broodmother_insatiable_hunger",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Broodmother_InsatiableHunger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_InsatiableHungerClassInfo);
  }
  CDOTA_Ability_Broodmother_InsatiableHunger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_InsatiableHungerClass.m_pClassInfo = &CDOTA_Ability_Broodmother_InsatiableHunger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_InsatiableHungerClassInfo;
  CDOTA_Ability_Broodmother_InsatiableHunger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_InsatiableHungerClass.m_pBaseClassInfo = CDOTA_Ability_Broodmother_InsatiableHunger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_InsatiableHungerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Broodmother_InsatiableHungerClass = &CDOTA_Ability_Broodmother_InsatiableHunger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_InsatiableHungerClass;
  CDOTA_Ability_Broodmother_InsatiableHunger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Broodmother_InsatiableHungerClassInfo.m_pClass = &CDOTA_Ability_Broodmother_InsatiableHunger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_InsatiableHungerClass;
  CDOTA_Ability_Broodmother_InsatiableHunger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_InsatiableHungerClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Broodmother_InsatiableHungerClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Broodmother_InsatiableHunger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Broodmother_InsatiableHungerClass;
}


// CDOTA_Ability_Broodmother_InsatiableHunger::OnSpellStart  (line 1746, @0x0000000002b72890, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_broodmother_insatiable_hunger"
void __fastcall CDOTA_Ability_Broodmother_InsatiableHunger::OnSpellStart(
        CDOTA_Ability_Broodmother_InsatiableHunger *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v6; // [rsp+28h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_broodmother_insatiable_hunger");
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_broodmother_insatiable_hunger", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Broodmother_InsatiableHunger::~CDOTA_Modifier_Broodmother_InsatiableHunger  (line 1765, @0x0000000002b9b470, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Broodmother_InsatiableHunger::~CDOTA_Modifier_Broodmother_InsatiableHunger(
        CDOTA_Modifier_Broodmother_InsatiableHunger *const this)
{
  this->_vptr_CDOTA_Buff = &off_44B7E50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Broodmother_InsatiableHunger::~CDOTA_Modifier_Broodmother_InsatiableHunger  (line 1765, @0x0000000002b9b490, libserver.so)  // inlines: ~CDOTA_Modifier_Broodmother_InsatiableHunger
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Broodmother_InsatiableHunger::~CDOTA_Modifier_Broodmother_InsatiableHunger(
        CDOTA_Modifier_Broodmother_InsatiableHunger *const this)
{
  this->_vptr_CDOTA_Buff = &off_44B7E50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Broodmother_InsatiableHunger::IsPurgable  (line 1773, @0x0000000002b8e860, libserver.so)
bool __fastcall CDOTA_Modifier_Broodmother_InsatiableHunger::IsPurgable(
        CDOTA_Modifier_Broodmother_InsatiableHunger *const this)
{
  return 0;
}


// CDOTA_Modifier_Broodmother_InsatiableHunger::GetHeroEffectName  (line 1779, @0x0000000002b8e870, libserver.so)
// strings: "particles/units/heroes/hero_broodmother/broodmother_hunger_hero_effect.vpcf"
const char *__fastcall CDOTA_Modifier_Broodmother_InsatiableHunger::GetHeroEffectName(
        CDOTA_Modifier_Broodmother_InsatiableHunger *const this)
{
  return "particles/units/heroes/hero_broodmother/broodmother_hunger_hero_effect.vpcf";
}


// CDOTA_Modifier_Broodmother_InsatiableHunger::HeroEffectPriority  (line 1780, @0x0000000002b8e880, libserver.so)
int __fastcall CDOTA_Modifier_Broodmother_InsatiableHunger::HeroEffectPriority(
        CDOTA_Modifier_Broodmother_InsatiableHunger *const this)
{
  return 100;
}


// CDOTA_Modifier_Broodmother_InsatiableHunger::OnCreated  (line 1793, @0x0000000002b6eb30, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::UnitEmitSound
// strings: "lifesteal_pct", "particles/units/heroes/hero_broodmother/broodmother_hunger_buff.vpcf", "attach_thorax", "Hero_Broodmother.InsatiableHunger"
void __fastcall CDOTA_Modifier_Broodmother_InsatiableHunger::OnCreated(
        CDOTA_Modifier_Broodmother_InsatiableHunger *const this,
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

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->bonus_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->lifesteal_pct = 0;
    goto LABEL_4;
  }
  this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->lifesteal_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "lifesteal_pct", -1, 0);
LABEL_4:
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_broodmother/broodmother_hunger_buff.vpcf",
                      2,
                      Parent,
                      0,
                      0);
  v7 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
  v9 = CDOTA_Buff::GetParent(this);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v10, Parent, 0, v9, 5, "attach_thorax", *AbsOrigin, 1);
  CDOTA_Buff::AddParticle(this, Parent, 0, 0, -1, 0, 0);
  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(Caster, "Hero_Broodmother.InsatiableHunger", 0.0, 0, 0);
}


// CDOTA_Modifier_Broodmother_InsatiableHunger::OnRefresh  (line 1809, @0x0000000002b6d590, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "lifesteal_pct"
void __fastcall CDOTA_Modifier_Broodmother_InsatiableHunger::OnRefresh(
        CDOTA_Modifier_Broodmother_InsatiableHunger *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->lifesteal_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "lifesteal_pct", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->lifesteal_pct = 0;
}


// CDOTA_Modifier_Broodmother_InsatiableHunger::DeclareFunctions  (line 1816, @0x0000000002b34790, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Broodmother_InsatiableHunger::DeclareFunctions(
        CDOTA_Modifier_Broodmother_InsatiableHunger *const this)
{
  this->m_Functions[0].__pfn = (&stru_10 + 697);
  this->m_Functions[0].__delta = 0;
  this->m_Functions[137].__pfn = (&stru_10 + 705);
  this->m_Functions[137].__delta = 0;
  this->m_Functions[151].__pfn = (&stru_10 + 713);
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_Broodmother_InsatiableHunger::OnDestroy  (line 1826, @0x0000000002b375e0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CBaseEntity::StopSound
// strings: "Hero_Broodmother.InsatiableHunger"
void __fastcall CDOTA_Modifier_Broodmother_InsatiableHunger::OnDestroy(
        CDOTA_Modifier_Broodmother_InsatiableHunger *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  CBaseEntity::StopSound(Caster, "Hero_Broodmother.InsatiableHunger");
}


// CDOTA_Modifier_Broodmother_InsatiableHunger::GetModifierPreAttack_BonusDamage  (line 1833, @0x0000000002b347e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Broodmother_InsatiableHunger::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Broodmother_InsatiableHunger *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Broodmother_InsatiableHunger::OnAttacked  (line 1840, @0x0000000002b48650, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CBaseEntity::GetHealth, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::Heal, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "particles/generic_gameplay/generic_lifesteal.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Broodmother_InsatiableHunger::OnAttacked(
        CDOTA_Modifier_Broodmother_InsatiableHunger *const this,
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
  CDOTABaseAbility *Ability; // r14
  float Health; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v16; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v18; // rax
  float flAmount; // [rsp+Ch] [rbp-24h]
  float flAmounta; // [rsp+Ch] [rbp-24h]

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
          v9 = params->htarget.m_Index;
          if ( v9 + 2 > 1 )
          {
            v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
            if ( v10 != 0 )
            {
              v11 = &v10[params->htarget.m_Index & 0x1FF];
              if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
              {
                v12 = v11->m_pInstance;
                if ( v11->m_pInstance != 0
                  && BYTE3(v12[7]._vptr_IHandleEntity) != 0
                  && LOBYTE(v12[71].m_pEntity) == 0
                  && (v12[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0 )
                {
                  Ability = CDOTA_Buff::GetAbility(this);
                  flAmount = params->fDamage;
                  if ( CBaseEntity::GetHealth(v12) <= flAmount )
                    Health = CBaseEntity::GetHealth(v12);
                  else
                    Health = params->fDamage;
                  flAmounta = (this->lifesteal_pct * Health) / 100.0;
                  Caster = CDOTA_Buff::GetCaster(this);
                  CDOTA_BaseNPC::Heal(Caster, flAmounta, Ability, 0, 1);
                  v16 = CDOTA_Buff::GetCaster(this);
                  ParticleManager = GetParticleManager();
                  LODWORD(v16) = CDOTA_ParticleManager::CreateParticle(
                                   ParticleManager,
                                   "particles/generic_gameplay/generic_lifesteal.vpcf",
                                   1,
                                   v16,
                                   0,
                                   0);
                  v18 = GetParticleManager();
                  CDOTA_ParticleManager::ReleaseParticleIndex(v18, v16);
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


// CDOTA_Modifier_Broodmother_InsatiableHunger::Tooltip  (line 1859, @0x0000000002b34800, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Broodmother_InsatiableHunger::Tooltip(
        CDOTA_Modifier_Broodmother_InsatiableHunger *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->lifesteal_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Unit_Hero_Broodmother::Event_Killed  (line 1867, @0x0000000002b50b40, libserver.so)  // inlines: GetGameMode
// calls: CDOTA_BaseNPC_Hero::Event_Killed, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_Broodmother_SpinWeb::DestroyWebs
void __fastcall CDOTA_Unit_Hero_Broodmother::Event_Killed(
        CDOTA_Unit_Hero_Broodmother *const this,
        const CTakeDamageInfo *const info)
{
  CDOTA_Ability_Broodmother_SpinWeb *AbilityByName; // rax

  if ( *&g_pGameRules[6].m_szQuestName[68] == 20
    && (AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "broodmother_spin_web", 0)) != 0 )
  {
    CDOTA_Ability_Broodmother_SpinWeb::DestroyWebs(AbilityByName);
    CDOTA_BaseNPC_Hero::Event_Killed(this, info);
  }
  else
  {
    CDOTA_BaseNPC_Hero::Event_Killed(this, info);
  }
}


