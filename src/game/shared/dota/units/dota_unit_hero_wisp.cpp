// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_wisp.cpp:47
class CDOTA_Unit_Hero_Wisp : public CDOTA_BaseNPC_Hero {
public:

private:

	int m_nAmbientFXIndex;  // +0x16ec
	int m_nStunnedFXIndex;  // +0x16f0
	int m_nTalkFXIndex;  // +0x16f4
	int m_nIllusionFXIndex;  // +0x16f8
	bool m_bParticleHexed;  // +0x16fc
	bool m_bParticleStunned;  // +0x16fd

	float m_flPrevHealth;  // +0x1700
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
	CDOTA_Unit_Hero_Wisp(CDOTA_Unit_Hero_Wisp &);
	CDOTA_Unit_Hero_Wisp(CDOTA_Unit_Hero_Wisp &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	void CreateAmbientEffects();
	void DestroyAmbientEffects();
	virtual void OnAlive();
	virtual void OnDying();
	virtual bool RequireFacingForActions();
	virtual void UpdateOnModelChange(bool);
	virtual const char * GetDeathEffectName();
	CDOTA_Unit_Hero_Wisp();
	virtual bool OnLoadState(KeyValues *);
	virtual ~CDOTA_Unit_Hero_Wisp();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[471] OnAlive
	// vtable[469] OnDying
	// vtable[434] RequireFacingForActions
	// vtable[473] UpdateOnModelChange
	// vtable[502] GetDeathEffectName
	// vtable[467] OnLoadState
	// sizeof = 5896
};

// src/game/shared/dota/units/dota_unit_hero_wisp.cpp:94
class C_CDOTA_Unit_Hero_Wisp_MapInstall {
	C_CDOTA_Unit_Hero_Wisp_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_wisp.cpp:343
class CDOTA_Modifier_Wisp_Tentacles : public CDOTA_Buff {
public:

private:

	int m_nFXIndex;  // +0xba8
	EHANDLE hCurrentEntity;  // +0xbac
	CDOTA_Modifier_Wisp_Tentacles();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Wisp_Tentacles();

	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_wisp.cpp:424
class CDOTA_Ability_Wisp_Tether : public CDOTABaseAbility, public CHorizontalMotionController {
public:

private:

	EHANDLE m_hTarget;  // +0x39c
	bool m_bProjectileActive;  // +0x3ac

	int latch_distance;  // +0x3b0
	int m_iProjectileIndex;  // +0x3b4
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
	CDOTA_Ability_Wisp_Tether(CDOTA_Ability_Wisp_Tether &);
	CDOTA_Ability_Wisp_Tether(CDOTA_Ability_Wisp_Tether &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Ability_Wisp_Tether();
	virtual void OnSpellStart();
	virtual void OnUpgrade();
	virtual bool OnProjectileHit_ExtraData(EHANDLE, const Vector &, KeyValues *);
	virtual void OnProjectileThink_ExtraData(const Vector &, KeyValues *);
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	EHANDLE GetTetherUnit();
	void BreakTether();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	bool IsProjectileActive();
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Wisp_Tether();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[268] OnUpgrade
	// vtable[290] OnProjectileHit_ExtraData
	// vtable[294] OnProjectileThink_ExtraData
	// vtable[333] UpdateHorizontalMotion
	// vtable[334] OnHorizontalMotionInterrupted
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[321] GetSlowDuration
	// sizeof = 952
};

// src/game/shared/dota/units/dota_unit_hero_wisp.cpp:463
class C_CDOTA_Ability_Wisp_Tether_MapInstall {
	C_CDOTA_Ability_Wisp_Tether_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_wisp.cpp:704
class CDOTA_Ability_Wisp_Tether_Break : public CDOTABaseAbility {
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
	CDOTA_Ability_Wisp_Tether_Break(CDOTA_Ability_Wisp_Tether_Break &);
	CDOTA_Ability_Wisp_Tether_Break(CDOTA_Ability_Wisp_Tether_Break &);
	CDOTA_Ability_Wisp_Tether_Break();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool ProcsMagicStick();
	virtual bool IsHiddenWhenStolen();
	virtual const char * GetAssociatedPrimaryAbilities();
	virtual ~CDOTA_Ability_Wisp_Tether_Break();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[239] ProcsMagicStick
	// vtable[306] IsHiddenWhenStolen
	// vtable[303] GetAssociatedPrimaryAbilities
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_wisp.cpp:735
class CDOTA_Modifier_Wisp_Tether : public CDOTA_Buff {
public:

private:

	bool m_bInManaGained;  // +0xba8

	EHANDLE m_hTarget;  // +0xbac
	float stun_duration;  // +0xbc8
	int movespeed;  // +0xbcc
	bool m_bIsInRange;  // +0xbd0

	int radius;  // +0xbd4
	int latch_distance;  // +0xbd8
	float m_flHealthHealed;  // +0xbdc
	float m_flManaHealed;  // +0xbe0
	float tether_heal_amp;  // +0xbe4
	float m_flHealMessageTime;  // +0xbe8
	float m_flManaMessageTime;  // +0xbec
	CDOTA_Modifier_Wisp_Tether();
	virtual bool IsPurgable();
	virtual void OnDestroy();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	ModifierVariant_t OnHealthGained(const CModifierParams &);
	ModifierVariant_t OnManaGained(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	CDOTA_BaseNPC * GetTetherTarget();
	virtual ~CDOTA_Modifier_Wisp_Tether();

	// vtable[14] IsPurgable
	// vtable[60] OnDestroy
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// sizeof = 3056
};

// src/game/shared/dota/units/dota_unit_hero_wisp.cpp:991
class CDOTA_Modifier_Wisp_Tether_Slow : public CDOTA_Buff {
public:

private:

	int slow;  // +0xba8
	CDOTA_Modifier_Wisp_Tether_Slow();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_Wisp_Tether_Slow();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_wisp.cpp:1043
class CDOTA_Modifier_Wisp_Tether_Haste : public CDOTA_Modifier_MoveSpeed_Percentage {
public:

	CDOTA_Modifier_Wisp_Tether_Haste();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_Wisp_Tether_Haste();

	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_wisp.cpp:1077
class CDOTA_Wisp_Spirit : public CDOTA_BaseNPC {
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
	CDOTA_Wisp_Spirit(CDOTA_Wisp_Spirit &);
	CDOTA_Wisp_Spirit(CDOTA_Wisp_Spirit &);
	CDOTA_Wisp_Spirit();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual bool IsPartOfFOWSystem();
	virtual int ShouldTransmit(const CGameCheckTransmitInfo *);
	virtual void StudioFrameAdvance();
	virtual void DispatchAnimEvents(CBaseAnimating *);
	virtual bool OnSaveState(KeyValues *);
	virtual ~CDOTA_Wisp_Spirit();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[212] IsPartOfFOWSystem
	// vtable[65] ShouldTransmit
	// vtable[490] StudioFrameAdvance
	// vtable[491] DispatchAnimEvents
	// vtable[466] OnSaveState
	// sizeof = 4504
};

// src/game/shared/dota/units/dota_unit_hero_wisp.cpp:1113
class C_CDOTA_Wisp_Spirit_MapInstall {
	C_CDOTA_Wisp_Spirit_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_wisp.cpp:1166
struct sSpiritDef {
private:

	int nSpiritFXIndex;  // +0x8
	int nSpiritState;  // +0xc

	// sizeof = 16
};

// src/game/shared/dota/units/dota_unit_hero_wisp.cpp:1183
class CDOTA_Ability_Wisp_Spirits : public CDOTABaseAbility {
public:

private:

	int m_nWispDirection;  // +0x3a8
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
	CDOTA_Ability_Wisp_Spirits(CDOTA_Ability_Wisp_Spirits &);
	CDOTA_Ability_Wisp_Spirits(CDOTA_Ability_Wisp_Spirits &);
	CDOTA_Ability_Wisp_Spirits();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void UpdateOnRemove();
	virtual void OnSpellStart();
	virtual void OnUpgrade();
	virtual void OnUnStolen();
	void SetSpiritDirection(int);
	int GetSpiritDirection();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Wisp_Spirits();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[11] UpdateOnRemove
	// vtable[266] OnSpellStart
	// vtable[268] OnUpgrade
	// vtable[308] OnUnStolen
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 944
};

// src/game/shared/dota/units/dota_unit_hero_wisp.cpp:1207
class C_CDOTA_Ability_Wisp_Spirits_MapInstall {
	C_CDOTA_Ability_Wisp_Spirits_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_wisp.cpp:1320
class CDOTA_Ability_Wisp_Empty1 : public CDOTABaseAbility {
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
	CDOTA_Ability_Wisp_Empty1(CDOTA_Ability_Wisp_Empty1 &);
	CDOTA_Ability_Wisp_Empty1(CDOTA_Ability_Wisp_Empty1 &);
	CDOTA_Ability_Wisp_Empty1();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Ability_Wisp_Empty1();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_wisp.cpp:1334
class CDOTA_Ability_Wisp_Empty2 : public CDOTABaseAbility {
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
	CDOTA_Ability_Wisp_Empty2(CDOTA_Ability_Wisp_Empty2 &);
	CDOTA_Ability_Wisp_Empty2(CDOTA_Ability_Wisp_Empty2 &);
	CDOTA_Ability_Wisp_Empty2();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Ability_Wisp_Empty2();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_wisp.cpp:1348
class CDOTA_Ability_Wisp_Spirits_In : public CDOTABaseAbility {
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
	CDOTA_Ability_Wisp_Spirits_In(CDOTA_Ability_Wisp_Spirits_In &);
	CDOTA_Ability_Wisp_Spirits_In(CDOTA_Ability_Wisp_Spirits_In &);
	CDOTA_Ability_Wisp_Spirits_In();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnToggle();
	virtual void OnUpgrade();
	virtual bool ProcsMagicStick();
	virtual bool IsHiddenWhenStolen();
	virtual bool IsStealable();
	virtual ~CDOTA_Ability_Wisp_Spirits_In();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[270] OnToggle
	// vtable[268] OnUpgrade
	// vtable[239] ProcsMagicStick
	// vtable[306] IsHiddenWhenStolen
	// vtable[305] IsStealable
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_wisp.cpp:1414
class CDOTA_Modifier_Wisp_Spirit_Invulnerable : public CDOTA_Buff {
public:

	CDOTA_Modifier_Wisp_Spirit_Invulnerable();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Wisp_Spirit_Invulnerable();

	// vtable[5] CheckState
	// vtable[11] IsHidden
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_wisp.cpp:1444
class CDOTA_Ability_Wisp_Spirits_Out : public CDOTABaseAbility {
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
	CDOTA_Ability_Wisp_Spirits_Out(CDOTA_Ability_Wisp_Spirits_Out &);
	CDOTA_Ability_Wisp_Spirits_Out(CDOTA_Ability_Wisp_Spirits_Out &);
	CDOTA_Ability_Wisp_Spirits_Out();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnToggle();
	virtual void OnUpgrade();
	virtual bool ProcsMagicStick();
	virtual bool IsStealable();
	virtual bool IsHiddenWhenStolen();
	virtual ~CDOTA_Ability_Wisp_Spirits_Out();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[270] OnToggle
	// vtable[268] OnUpgrade
	// vtable[239] ProcsMagicStick
	// vtable[305] IsStealable
	// vtable[306] IsHiddenWhenStolen
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_wisp.cpp:1511
class CDOTA_Modifier_Wisp_Spirits : public CDOTA_Buff {
	struct {
		float m_flImpactTime;  // +0x0
		EHANDLE m_hHitUnit;  // +0x4
		void (class *);
		void ImpactRecord_t(class *, const class &);

		// sizeof = 8
	};
	/* tag__fprintf: const_type tag not supported! */;

public:

private:

	int creep_damage;  // +0xba8
	int hero_damage;  // +0xbac
	int hit_radius;  // +0xbb0
	int hero_hit_radius;  // +0xbb4
	int explode_radius;  // +0xbb8
	int min_range;  // +0xbbc
	int max_range;  // +0xbc0
	int default_radius;  // +0xbc4
	float m_flRotation;  // +0xbc8
	float m_flSpiritRadius;  // +0xbcc
	int spirit_movement_rate;  // +0xbd0
	int m_nSwapIndex;  // +0xbd4
	CDOTA_Modifier_Wisp_Spirits();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual bool IsPurgable();
	void ExplodeSpirits();
	bool TryAddHitEntity(int, EHANDLE);
	virtual ~CDOTA_Modifier_Wisp_Spirits();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[14] IsPurgable
	// sizeof = 3152
};

// src/game/shared/dota/units/dota_unit_hero_wisp.cpp:1944
class CDOTA_Ability_Wisp_Overcharge : public CDOTABaseAbility {
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
	CDOTA_Ability_Wisp_Overcharge(CDOTA_Ability_Wisp_Overcharge &);
	CDOTA_Ability_Wisp_Overcharge(CDOTA_Ability_Wisp_Overcharge &);
	CDOTA_Ability_Wisp_Overcharge();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnToggle();
	virtual void OnUnStolen();
	virtual bool ProcsMagicStick();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Wisp_Overcharge();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[270] OnToggle
	// vtable[308] OnUnStolen
	// vtable[239] ProcsMagicStick
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_wisp.cpp:1959
class C_CDOTA_Ability_Wisp_Overcharge_MapInstall {
	C_CDOTA_Ability_Wisp_Overcharge_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_wisp.cpp:2042
class CDOTA_Modifier_Wisp_Overcharge : public CDOTA_Buff {
public:

private:

	int bonus_attack_speed;  // +0xba8
	int bonus_damage_pct;  // +0xbac
	float drain_interval;  // +0xbb0
	float drain_pct;  // +0xbb4
	CDOTA_Modifier_Wisp_Overcharge();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierIncomingDamage_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Wisp_Overcharge();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_wisp.cpp:2127
class CDOTA_Ability_Wisp_Relocate : public CDOTABaseAbility {
public:

private:

	int m_nFXIndexEndTeam;  // +0x390
	int m_nFXIndexChannel;  // +0x394
	float cast_delay;  // +0x398
	float return_time;  // +0x39c
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
	CDOTA_Ability_Wisp_Relocate(CDOTA_Ability_Wisp_Relocate &);
	CDOTA_Ability_Wisp_Relocate(CDOTA_Ability_Wisp_Relocate &);
	CDOTA_Ability_Wisp_Relocate();
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
	virtual ~CDOTA_Ability_Wisp_Relocate();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_wisp.cpp:2150
class C_CDOTA_Ability_Wisp_Relocate_MapInstall {
	C_CDOTA_Ability_Wisp_Relocate_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_wisp.cpp:2260
class CDOTA_Modifier_Wisp_Relocate_Thinker : public CDOTA_Buff {
public:

private:

	float cast_delay;  // +0xba8
	int m_nFXIndexEndTeam;  // +0xbac
	int m_nFXIndexChannel;  // +0xbb0
	CDOTA_Modifier_Wisp_Relocate_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	ModifierVariant_t OnDeath(const CModifierParams &);
	ModifierVariant_t OnStateChanged(const CModifierParams &);
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Wisp_Relocate_Thinker();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[11] IsHidden
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_wisp.cpp:2456
class CDOTA_Modifier_Wisp_Relocate_Return : public CDOTA_Buff {
public:

private:

	EHANDLE m_hTarget;  // +0xba8
	float return_time;  // +0xbb8
	int m_nFXTimeRemaining;  // +0xbbc
	CDOTA_Modifier_Wisp_Relocate_Return();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Wisp_Relocate_Return();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[14] IsPurgable
	// sizeof = 3008
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Wisp::~CDOTA_Unit_Hero_Wisp  (line 47, @0x0000000002d2d600, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Wisp::~CDOTA_Unit_Hero_Wisp(CDOTA_Unit_Hero_Wisp *const this)
{
  this->_vptr_IHandleEntity = &off_4673490;
  this->_vptr_INextBotEventResponder = &off_4674470;
  this->_vptr_CObstructionObject = &off_46747A0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Wisp::~CDOTA_Unit_Hero_Wisp  (line 47, @0x0000000002d2d640, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Wisp
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Wisp::~CDOTA_Unit_Hero_Wisp(CDOTA_Unit_Hero_Wisp *const this)
{
  this->_vptr_IHandleEntity = &off_4673490;
  this->_vptr_INextBotEventResponder = &off_4674470;
  this->_vptr_CObstructionObject = &off_46747A0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Wisp::Schema_DynamicBinding  (line 49, @0x0000000002d21510, libserver.so)
// globals: CDOTA_Unit_Hero_Wisp::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Wisp::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Wisp *const this)
{
  return CDOTA_Unit_Hero_Wisp::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Wisp::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 49, @0x0000000002d21540, libserver.so)
// globals: CDOTA_Unit_Hero_Wisp::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Wisp::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Wisp::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Wisp::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Wisp::CEntityInstanceEntityClass::DestructInstance  (line 49, @0x0000000002d21550, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Wisp>
void __fastcall CDOTA_Unit_Hero_Wisp::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Wisp::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Wisp::CEntityInstanceEntityClass::FreeInstance  (line 49, @0x0000000002d21570, libserver.so)
void __fastcall CDOTA_Unit_Hero_Wisp::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Wisp::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Wisp::CEntityInstanceEntityClass::CanAllocate  (line 49, @0x0000000002d21590, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Wisp::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Wisp::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Wisp::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 49, @0x0000000002d215a0, libserver.so)
// globals: CDOTA_Unit_Hero_Wisp::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Wisp::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Wisp::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Wisp::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Wisp::CEntityInstanceEntityClass::AllocateInstance  (line 49, @0x0000000002d25810, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Wisp::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Wisp::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5896);
  memset(v1, 0, 0x1708u);
  return v1;
}


// CDOTA_Unit_Hero_Wisp::CEntityInstanceEntityClass::ConstructInstance  (line 49, @0x0000000002d28ac0, libserver.so)  // inlines: CDOTA_Unit_Hero_Wisp, Construct<CDOTA_Unit_Hero_Wisp>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Wisp::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Wisp::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *(p + 1470) = -1;
    *p = &off_4673490;
    *(p + 236) = &off_4674470;
    *(p + 257) = &off_46747A0;
    *(p + 1469) = -1;
    *(p + 1468) = -1;
    *(p + 1467) = -1;
    *(p + 5885) = 0;
    *(p + 5884) = 0;
    *(p + 1472) = 0;
  }
  return p;
}


// CDOTA_Unit_Hero_Wisp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 49, @0x0000000002d35410, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Wisp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Wisp::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Wisp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 49, @0x0000000002d35720, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Wisp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Wisp::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Wisp::GetEntityClassInternal  (line 49, @0x0000000002d4d9f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "npc_dota_hero_wisp", "CDOTA_Unit_Hero_Wisp"
// globals: `guard variable for'CDOTA_Unit_Hero_Wisp::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WispClass, CDOTA_Unit_Hero_Wisp::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WispClass, __dso_handle, CDOTA_Unit_Hero_Wisp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Wisp::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WispClassInfo, CDOTA_Unit_Hero_Wisp::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WispClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Wisp::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Wisp::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WispClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Wisp::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WispClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Wisp::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WispClass);
    CDOTA_Unit_Hero_Wisp::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WispClass._vptr_CEntityClass = off_4673410;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Wisp::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WispClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Wisp::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Wisp::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WispClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_WispClass != 0 )
    return &CDOTA_Unit_Hero_Wisp::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WispClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Wisp::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WispClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Wisp::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WispClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Wisp::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WispClassInfo,
      "CDOTA_Unit_Hero_Wisp",
      "npc_dota_hero_wisp",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Wisp::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WispClassInfo);
  }
  CDOTA_Unit_Hero_Wisp::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WispClass.m_pClassInfo = &CDOTA_Unit_Hero_Wisp::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WispClassInfo;
  CDOTA_Unit_Hero_Wisp::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WispClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Wisp::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WispClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_WispClass = &CDOTA_Unit_Hero_Wisp::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WispClass;
  CDOTA_Unit_Hero_Wisp::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_WispClassInfo.m_pClass = &CDOTA_Unit_Hero_Wisp::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WispClass;
  CDOTA_Unit_Hero_Wisp::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WispClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_WispClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Wisp::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_WispClass;
}


// CDOTA_Unit_Hero_Wisp::RequireFacingForActions  (line 63, @0x0000000002d215b0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Wisp::RequireFacingForActions(CDOTA_Unit_Hero_Wisp *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Wisp::GetDeathEffectName  (line 67, @0x0000000002d215c0, libserver.so)
// strings: "particles/units/heroes/hero_wisp/wisp_death.vpcf"
const char *__fastcall CDOTA_Unit_Hero_Wisp::GetDeathEffectName(CDOTA_Unit_Hero_Wisp *const this)
{
  return "particles/units/heroes/hero_wisp/wisp_death.vpcf";
}


// CDOTA_Unit_Hero_Wisp::YouForgotToImplementOrDeclareServerClass  (line 94, @0x0000000002ccb4e0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Wisp::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Wisp *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Wisp::GetServerClass  (line 94, @0x0000000002cdddb0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Wisp::GetServerClass(CDOTA_Unit_Hero_Wisp *const this)
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


// CDOTA_Unit_Hero_Wisp::Spawn  (line 103, @0x0000000002ccf960, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Spawn
void __fastcall CDOTA_Unit_Hero_Wisp::Spawn(CDOTA_Unit_Hero_Wisp *const this, const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
}


// CDOTA_Unit_Hero_Wisp::CreateAmbientEffects  (line 111, @0x0000000002cece50, libserver.so)
void __fastcall CDOTA_Unit_Hero_Wisp::CreateAmbientEffects(CDOTA_Unit_Hero_Wisp *const this)
{
  ;
}


// CDOTA_Unit_Hero_Wisp::DestroyAmbientEffects  (line 143, @0x0000000002cece60, libserver.so)
void __fastcall CDOTA_Unit_Hero_Wisp::DestroyAmbientEffects(CDOTA_Unit_Hero_Wisp *const this)
{
  ;
}


// CDOTA_Unit_Hero_Wisp::OnAlive  (line 173, @0x0000000002cd7be0, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTA_BaseNPC::GetOpposingTeamNumber, GetGlobalTeam, CRecipientFilter::RemoveRecipientsByTeam, CRecipientFilter::AddRecipientsByTeam, GetParticleManager, CDOTA_ParticleManager::CreateParticle (17 total)
// strings: "modifier_wisp_tentacles", "particles/units/heroes/hero_wisp/wisp_illusion.vpcf", "attach_hitloc"
void __fastcall CDOTA_Unit_Hero_Wisp::OnAlive(CDOTA_Unit_Hero_Wisp *const this)
{
  int OpposingTeamNumber; // eax
  CTeam *GlobalTeam; // rax
  CTeam *v4; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *AbsOrigin; // r14
  int m_nIllusionFXIndex; // r15d
  CDOTA_ParticleManager *v8; // rax
  KeyValues kv; // [rsp+10h] [rbp-190h] BYREF
  CReliableBroadcastRecipientFilter filter; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v11; // [rsp+168h] [rbp-38h]

  v11 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_wisp_tentacles");
  CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_wisp_tentacles", &kv, 0);
  if ( this->m_bIsIllusion.m_Value && this->m_nIllusionFXIndex == -1 )
  {
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB130;
    CRecipientFilter::MakeReliable(&filter);
    OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(this);
    GlobalTeam = GetGlobalTeam(OpposingTeamNumber);
    CRecipientFilter::RemoveRecipientsByTeam(&filter, GlobalTeam);
    v4 = GetGlobalTeam(1);
    CRecipientFilter::AddRecipientsByTeam(&filter, v4);
    ParticleManager = GetParticleManager();
    this->m_nIllusionFXIndex = CDOTA_ParticleManager::CreateParticle(
                                 ParticleManager,
                                 "particles/units/heroes/hero_wisp/wisp_illusion.vpcf",
                                 2,
                                 this,
                                 &filter,
                                 0);
    AbsOrigin = CBaseEntity::GetAbsOrigin(this);
    m_nIllusionFXIndex = this->m_nIllusionFXIndex;
    v8 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v8, m_nIllusionFXIndex, 0, this, 5, "attach_hitloc", *AbsOrigin, 1);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Unit_Hero_Wisp::OnDying  (line 195, @0x0000000002cce550, libserver.so)
// calls: CBaseEntity::AddEffects, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect
void __fastcall CDOTA_Unit_Hero_Wisp::OnDying(CDOTA_Unit_Hero_Wisp *const this)
{
  int m_nIllusionFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax

  CBaseEntity::AddEffects(this, 32);
  m_nIllusionFXIndex = this->m_nIllusionFXIndex;
  if ( m_nIllusionFXIndex != -1 )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nIllusionFXIndex, 1);
    this->m_nIllusionFXIndex = -1;
  }
}


// CDOTA_Unit_Hero_Wisp::OnLoadState  (line 214, @0x0000000002ccb9f0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::OnLoadState, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::SwapAbilities
// strings: "wisp_empty1", "wisp_spirits_in", "wisp_empty2", "wisp_spirits_out", "wisp_tether_break"
bool __fastcall CDOTA_Unit_Hero_Wisp::OnLoadState(CDOTA_Unit_Hero_Wisp *const this, KeyValues *pKV)
{
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v4; // rax

  CDOTA_BaseNPC_Hero::OnLoadState(this, pKV);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "wisp_tether", 0);
  if ( AbilityByName != 0 && AbilityByName->m_bHidden.m_Value )
    CDOTA_BaseNPC::SwapAbilities(this, "wisp_tether_break", "wisp_tether", 0, 1);
  v4 = CDOTA_BaseNPC::FindAbilityByName(this, "wisp_empty1", 0);
  if ( v4 != 0 && v4->m_bHidden.m_Value )
  {
    CDOTA_BaseNPC::SwapAbilities(this, "wisp_spirits_in", "wisp_empty1", 0, 1);
    CDOTA_BaseNPC::SwapAbilities(this, "wisp_spirits_out", "wisp_empty2", 0, 1);
  }
  return 1;
}


// CDOTA_Unit_Hero_Wisp::UpdateOnModelChange  (line 238, @0x0000000002cd2260, libserver.so)
// calls: CDOTA_BaseNPC::UpdateOnModelChange, GetParticleManager, CDOTA_ParticleManager::SetShouldDraw
void __fastcall CDOTA_Unit_Hero_Wisp::UpdateOnModelChange(CDOTA_Unit_Hero_Wisp *const this, bool bOriginalModel)
{
  bool v4; // zf
  int m_nIllusionFXIndex; // r12d
  CDOTA_ParticleManager *v6; // rax
  CDOTA_ParticleManager *ParticleManager; // rax

  CDOTA_BaseNPC::UpdateOnModelChange(this, bOriginalModel);
  v4 = !bOriginalModel;
  m_nIllusionFXIndex = this->m_nIllusionFXIndex;
  if ( v4 )
  {
    if ( m_nIllusionFXIndex != -1 )
    {
      ParticleManager = GetParticleManager();
      CDOTA_ParticleManager::SetShouldDraw(ParticleManager, m_nIllusionFXIndex, 0);
    }
    this->m_bParticleHexed = 1;
  }
  else
  {
    if ( m_nIllusionFXIndex != -1 )
    {
      v6 = GetParticleManager();
      CDOTA_ParticleManager::SetShouldDraw(v6, m_nIllusionFXIndex, 1);
    }
    this->m_bParticleHexed = 0;
  }
}


// CDOTA_Modifier_Wisp_Tentacles::~CDOTA_Modifier_Wisp_Tentacles  (line 343, @0x0000000002d26420, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Wisp_Tentacles::~CDOTA_Modifier_Wisp_Tentacles(
        CDOTA_Modifier_Wisp_Tentacles *const this)
{
  this->_vptr_CDOTA_Buff = &off_4674830;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Wisp_Tentacles::~CDOTA_Modifier_Wisp_Tentacles  (line 343, @0x0000000002d26440, libserver.so)  // inlines: ~CDOTA_Modifier_Wisp_Tentacles
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Wisp_Tentacles::~CDOTA_Modifier_Wisp_Tentacles(
        CDOTA_Modifier_Wisp_Tentacles *const this)
{
  this->_vptr_CDOTA_Buff = &off_4674830;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Wisp_Tentacles::IsPurgable  (line 348, @0x0000000002d215d0, libserver.so)
bool __fastcall CDOTA_Modifier_Wisp_Tentacles::IsPurgable(CDOTA_Modifier_Wisp_Tentacles *const this)
{
  return 0;
}


// CDOTA_Modifier_Wisp_Tentacles::IsHidden  (line 349, @0x0000000002d215e0, libserver.so)
bool __fastcall CDOTA_Modifier_Wisp_Tentacles::IsHidden(CDOTA_Modifier_Wisp_Tentacles *const this)
{
  return 1;
}


// CDOTA_Modifier_Wisp_Tentacles::OnCreated  (line 361, @0x0000000002ccc8c0, libserver.so)
// calls: CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::AddParticle, CDOTA_Buff::StartIntervalThink
// strings: "particles/units/heroes/hero_wisp/wisp_ambient_entity_tentacles.vpcf"
void __fastcall CDOTA_Modifier_Wisp_Tentacles::OnCreated(CDOTA_Modifier_Wisp_Tentacles *const this, KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax
  float v6; // xmm1_4

  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_wisp/wisp_ambient_entity_tentacles.vpcf",
               9,
               Parent,
               0,
               0);
  this->m_nFXIndex = Particle;
  CDOTA_Buff::AddParticle(this, Particle, 0, 0, -1, 0, 0);
  CDOTA_Buff::StartIntervalThink(this, 1.0, v6);
}


// CDOTA_Modifier_Wisp_Tentacles::OnIntervalThink  (line 370, @0x0000000002cf2ec0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, HasElement, IndexToIdentity, LookupEntity, Purge, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::SetFrozen, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, RandomInt, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleControlEnt, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge (15 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Wisp_Tentacles::OnIntervalThink(CDOTA_Modifier_Wisp_Tentacles *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  int v3; // r12d
  CDOTA_ParticleManager *v4; // rax
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_BaseNPC *v6; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v8; // rax
  int m_Size; // r13d
  uint32 m_Index; // edx
  CEntityIdentity *v11; // rax
  CEntityIdentity *v12; // rax
  CDOTA_BaseNPC *m_pInstance; // r13
  int v14; // r14d
  CDOTA_ParticleManager *v15; // rax
  int v16; // ebx
  CDOTA_ParticleManager *v17; // rax
  int v18; // ebx
  CDOTA_ParticleManager *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  int m_nFXIndex; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  __int64 v23; // r13
  CEntityInstance *v24; // rax
  CDOTA_BaseNPC *v25; // r14
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+30h] [rbp-40h] BYREF

  if ( this->m_nFXIndex == -1 )
    return;
  Parent = CDOTA_Buff::GetParent(this);
  if ( (*(Parent->_vptr_IHandleEntity + 443))(Parent) != 0 )
  {
    v20 = CDOTA_Buff::GetParent(this);
    if ( (*(v20->_vptr_IHandleEntity + 408))(v20) != 0 )
    {
      m_nFXIndex = this->m_nFXIndex;
      ParticleManager = GetParticleManager();
      CDOTA_ParticleManager::SetFrozen(ParticleManager, m_nFXIndex, 1);
      return;
    }
  }
  v3 = this->m_nFXIndex;
  v4 = GetParticleManager();
  CDOTA_ParticleManager::SetFrozen(v4, v3, 0);
  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x20) != 0 )
  {
    v18 = this->m_nFXIndex;
    v19 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v19, v18, 10, 0.0, 0.0);
    return;
  }
  hEntities.m_Size = 0;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  Caster = CDOTA_Buff::GetCaster(this);
  v6 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v6);
  v8 = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(v8->m_iTeamNum.m_Value, AbsOrigin, Caster, 256.0, &hEntities, 3, 55, 0, 0, 0);
  m_Size = hEntities.m_Size;
  if ( hEntities.m_Size > 1 )
  {
    if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
           &hEntities,
           &this->hCurrentEntity) >= 0 )
    {
      if ( RandomInt(0, 3) > 0 )
        goto LABEL_7;
      m_Size = hEntities.m_Size;
    }
    v23 = RandomInt(0, (m_Size - 1));
    v24 = CEntityHandle::operator CEntityInstance *(&hEntities.m_Memory.m_pMemory[v23]);
    if ( v24 != 0 && BYTE3(v24[7]._vptr_IHandleEntity) != 0 )
      v25 = v24;
    else
      v25 = 0;
    if ( CDOTA_Buff::GetParent(this) != v25 )
    {
      m_Index = hEntities.m_Memory.m_pMemory[v23].m_Index;
      this->hCurrentEntity.m_Index = m_Index;
      goto LABEL_8;
    }
LABEL_7:
    m_Index = this->hCurrentEntity.m_Index;
LABEL_8:
    if ( m_Index + 2 > 1 )
    {
      v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->hCurrentEntity.m_Index) >> 9) & 0x3F];
      if ( v11 != 0 )
      {
        v12 = &v11[this->hCurrentEntity.m_Index & 0x1FF];
        if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
        {
          m_pInstance = v12->m_pInstance;
          if ( v12->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
            goto LABEL_13;
        }
      }
    }
  }
  m_pInstance = 0;
LABEL_13:
  v14 = this->m_nFXIndex;
  v15 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v15, v14, 10, 0.007812501848093234, 1.0);
  if ( m_pInstance != 0 && SLOBYTE(m_pInstance->m_nUnitState64.m_Value) >= 0 )
  {
    v16 = this->m_nFXIndex;
    v17 = GetParticleManager();
  }
  else
  {
    m_pInstance = CDOTA_Buff::GetParent(this);
    v16 = this->m_nFXIndex;
    v17 = GetParticleManager();
  }
  CDOTA_ParticleManager::SetParticleControlEnt(v17, v16, 1, m_pInstance, 1, 0, vec3_invalid, 1);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEntities);
  if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
    if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
  }
}


// CDOTA_Ability_Wisp_Tether::~CDOTA_Ability_Wisp_Tether  (line 424, @0x0000000002d2c950, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Wisp_Tether::~CDOTA_Ability_Wisp_Tether(CDOTA_Ability_Wisp_Tether *const this)
{
  this->_vptr_IHandleEntity = &off_4674B90;
  this->_vptr_CHorizontalMotionController = &off_4675618;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Wisp_Tether::~CDOTA_Ability_Wisp_Tether  (line 424, @0x0000000002d2c980, libserver.so)  // inlines: ~CDOTA_Ability_Wisp_Tether
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Wisp_Tether::~CDOTA_Ability_Wisp_Tether(CDOTA_Ability_Wisp_Tether *const this)
{
  this->_vptr_IHandleEntity = &off_4674B90;
  this->_vptr_CHorizontalMotionController = &off_4675618;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Wisp_Tether::Schema_DynamicBinding  (line 426, @0x0000000002d215f0, libserver.so)
// globals: CDOTA_Ability_Wisp_Tether::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Wisp_Tether::Schema_DynamicBinding(
        const CDOTA_Ability_Wisp_Tether *const this)
{
  return CDOTA_Ability_Wisp_Tether::s_pSchemaBinding;
}


// CDOTA_Ability_Wisp_Tether::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 426, @0x0000000002d21610, libserver.so)
// globals: CDOTA_Ability_Wisp_Tether::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Wisp_Tether::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Wisp_Tether::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Wisp_Tether::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Wisp_Tether::CEntityInstanceEntityClass::DestructInstance  (line 426, @0x0000000002d21620, libserver.so)  // inlines: Destruct<CDOTA_Ability_Wisp_Tether>
void __fastcall CDOTA_Ability_Wisp_Tether::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Wisp_Tether::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Wisp_Tether::CEntityInstanceEntityClass::FreeInstance  (line 426, @0x0000000002d21640, libserver.so)
void __fastcall CDOTA_Ability_Wisp_Tether::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Wisp_Tether::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Wisp_Tether::CEntityInstanceEntityClass::CanAllocate  (line 426, @0x0000000002d21660, libserver.so)
bool __fastcall CDOTA_Ability_Wisp_Tether::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Wisp_Tether::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Wisp_Tether::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 426, @0x0000000002d21670, libserver.so)
// globals: CDOTA_Ability_Wisp_Tether::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Wisp_Tether::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Wisp_Tether::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Wisp_Tether::s_pSchemaBinding;
}


// CDOTA_Ability_Wisp_Tether::CEntityInstanceEntityClass::AllocateInstance  (line 426, @0x0000000002d25850, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Wisp_Tether::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Wisp_Tether::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 952);
  memset(v1, 0, 0x3B8u);
  return v1;
}


// CDOTA_Ability_Wisp_Tether::CEntityInstanceEntityClass::ConstructInstance  (line 426, @0x0000000002d29860, libserver.so)  // inlines: CDOTA_Ability_Wisp_Tether, CEntityHandle, CHandle, CHorizontalMotionController, Construct<CDOTA_Ability_Wisp_Tether>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Wisp_Tether::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Wisp_Tether::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 230) = 2;
    *p = &off_4674B90;
    *(p + 114) = &off_4675618;
    *(p + 231) = -1;
  }
  return p;
}


// CDOTA_Ability_Wisp_Tether::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 426, @0x0000000002d35030, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Wisp_Tether::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Wisp_Tether::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Wisp_Tether::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 426, @0x0000000002d35050, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Wisp_Tether::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Wisp_Tether::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Wisp_Tether::GetEntityClassInternal  (line 426, @0x0000000002d4c250, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "CDOTA_Ability_Wisp_Tether"
// globals: `guard variable for'CDOTA_Ability_Wisp_Tether::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_TetherClass, CDOTA_Ability_Wisp_Tether::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_TetherClass, __dso_handle, CDOTA_Ability_Wisp_Tether::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Wisp_Tether::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_TetherClassInfo, CDOTA_Ability_Wisp_Tether::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_TetherClassInfo
CEntityClass *__cdecl CDOTA_Ability_Wisp_Tether::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Wisp_Tether::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_TetherClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Wisp_Tether::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_TetherClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Wisp_Tether::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_TetherClass);
    CDOTA_Ability_Wisp_Tether::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_TetherClass._vptr_CEntityClass = off_4674B10;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Wisp_Tether::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_TetherClass);
    __cxa_atexit(
      CDOTA_Ability_Wisp_Tether::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Wisp_Tether::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_TetherClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Wisp_TetherClass != 0 )
    return &CDOTA_Ability_Wisp_Tether::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_TetherClass;
  if ( `guard variable for'CDOTA_Ability_Wisp_Tether::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_TetherClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Wisp_Tether::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_TetherClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Wisp_Tether::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_TetherClassInfo,
      "CDOTA_Ability_Wisp_Tether",
      "wisp_tether",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Wisp_Tether::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_TetherClassInfo);
  }
  CDOTA_Ability_Wisp_Tether::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_TetherClass.m_pClassInfo = &CDOTA_Ability_Wisp_Tether::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_TetherClassInfo;
  CDOTA_Ability_Wisp_Tether::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_TetherClass.m_pBaseClassInfo = CDOTA_Ability_Wisp_Tether::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_TetherClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Wisp_TetherClass = &CDOTA_Ability_Wisp_Tether::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_TetherClass;
  CDOTA_Ability_Wisp_Tether::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_TetherClassInfo.m_pClass = &CDOTA_Ability_Wisp_Tether::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_TetherClass;
  CDOTA_Ability_Wisp_Tether::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_TetherClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Wisp_TetherClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Wisp_Tether::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_TetherClass;
}


// CDOTA_Ability_Wisp_Tether::GetAssociatedSecondaryAbilities  (line 446, @0x0000000002d21680, libserver.so)
// strings: "wisp_tether_break"
const char *__fastcall CDOTA_Ability_Wisp_Tether::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Wisp_Tether *const this)
{
  return "wisp_tether_break";
}


// CDOTA_Ability_Wisp_Tether::YouForgotToImplementOrDeclareServerClass  (line 463, @0x0000000002ccb4f0, libserver.so)
int __fastcall CDOTA_Ability_Wisp_Tether::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Wisp_Tether *const this)
{
  return 0;
}


// CDOTA_Ability_Wisp_Tether::GetServerClass  (line 463, @0x0000000002cddc70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Wisp_Tether::GetServerClass(CDOTA_Ability_Wisp_Tether *const this)
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


// CDOTA_Ability_Wisp_Tether::CastFilterResult  (line 472, @0x0000000002cd14e0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, UnitFilter
int __fastcall CDOTA_Ability_Wisp_Tether::CastFilterResult(
        CDOTA_Ability_Wisp_Tether *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  int v5; // ebx

  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = UnitFilter(pTarget, 1, 3, 32, Caster->m_iTeamNum.m_Value);
  if ( v5 == 0 && pTarget == CDOTABaseAbility::GetCaster(this) )
    return 23;
  return v5;
}


// CDOTA_Ability_Wisp_Tether::GetCustomCastError  (line 486, @0x0000000002ccbaf0, libserver.so)
// calls: CDOTABaseAbility::GetCaster
// strings: "#dota_hud_error_cant_cast_on_self"
const char *__fastcall CDOTA_Ability_Wisp_Tether::GetCustomCastError(
        CDOTA_Ability_Wisp_Tether *const this,
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


// CDOTA_Ability_Wisp_Tether::OnUpgrade  (line 496, @0x0000000002ccf230, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "wisp_tether_break"
void __fastcall CDOTA_Ability_Wisp_Tether::OnUpgrade(CDOTA_Ability_Wisp_Tether *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "wisp_tether_break", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value == 0 )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Wisp_Tether::OnSpellStart  (line 510, @0x0000000002cfdc80, libserver.so)  // inlines: CEntityHandle, CHandle, Color, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<int>, GetSerialNumber, Set, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorNormalize2D, VectorSubtract, operator*, operator+, operator-, operator=, sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::FindModifierByName, KeyValues::KeyValues, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, KeyValues::SetPtr, CDOTA_BaseNPC::SwapAbilities (21 total)
// strings: "latch_distance", "modifier_wisp_overcharge", "modifier_wisp_tether", "modifier_wisp_tether_haste", "wisp_tether_break", "latch_speed" (7 total)
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_Ability_Wisp_Tether::OnSpellStart(CDOTA_Ability_Wisp_Tether *const this)
{
  CDOTA_BaseNPC *CursorTarget; // r12
  CBaseEntity *v3; // rax
  CDOTA_BaseNPC *v4; // r13
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // r14
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *v8; // rax
  float v9; // xmm1_4
  CDOTA_BaseNPC *v10; // r14
  CDOTA_BaseNPC *v11; // rax
  float v12; // xmm1_4
  CDOTA_BaseNPC *v13; // rax
  CEntityIdentity *m_pEntity; // rax
  int v15; // edx
  __int16 v16; // cx
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  const Vector *AbsOrigin; // r14
  const Vector *v20; // rax
  vec_t v21; // xmm1_4
  vec_t v22; // xmm0_4
  CDOTA_BaseNPC *v23; // rax
  CDOTALocomotor *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  CDOTA_Buff *v26; // rax
  int LevelSpecialValue; // eax
  int v28; // r15d
  CDOTA_BaseNPC *v29; // rax
  const Vector *v30; // rax
  vec_t z; // xmm0_4
  vec_t y; // xmm0_4
  vec_t v33; // xmm0_4
  CDOTA_BaseNPC *v34; // rax
  CEntityIdentity *v35; // rax
  int v36; // edx
  __int16 v37; // cx
  CDOTA_BaseNPC *v38; // rax
  __m128i v39; // xmm7
  __m128i x_low; // xmm5
  float v41; // r12d
  float v42; // r13d
  CDOTA_BaseNPC *v43; // rax
  const Vector *v44; // rax
  unsigned int v45; // xmm1_4
  unsigned int v46; // xmm2_4
  CDOTA_BaseNPC *v47; // rax
  Vector *v48; // r12
  CDOTA_BaseNPC *v49; // rax
  float fLength; // [rsp+Ch] [rbp-E4h]
  float fLengtha; // [rsp+Ch] [rbp-E4h]
  Vector vDir; // [rsp+10h] [rbp-E0h] BYREF
  Vector vTeleportEnd; // [rsp+20h] [rbp-D0h]
  KeyValues kv; // [rsp+30h] [rbp-C0h] BYREF
  _BYTE kv_0[24]; // [rsp+50h] [rbp-A0h] OVERLAPPED BYREF
  int v56; // [rsp+68h] [rbp-88h]
  int v57; // [rsp+6Ch] [rbp-84h]
  int v58; // [rsp+70h] [rbp-80h]
  Vector v59; // [rsp+74h] [rbp-7Ch]
  int v60; // [rsp+80h] [rbp-70h]
  char v61; // [rsp+84h] [rbp-6Ch]
  int v62; // [rsp+88h] [rbp-68h]
  int v63; // [rsp+8Ch] [rbp-64h]
  char v64; // [rsp+90h] [rbp-60h]
  char v65; // [rsp+91h] [rbp-5Fh]
  char v66; // [rsp+92h] [rbp-5Eh]
  char v67; // [rsp+93h] [rbp-5Dh]
  char v68; // [rsp+94h] [rbp-5Ch]
  char v69; // [rsp+95h] [rbp-5Bh]
  int v70; // [rsp+96h] [rbp-5Ah]
  int v71; // [rsp+9Ch] [rbp-54h]
  int v72; // [rsp+A0h] [rbp-50h]
  KeyValues *p_kv; // [rsp+A8h] [rbp-48h]
  unsigned __int64 v74; // [rsp+B8h] [rbp-38h]

  v74 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  if ( CursorTarget != CDOTABaseAbility::GetCaster(this) )
  {
    this->latch_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "latch_distance", -1, 0);
    v3 = CDOTABaseAbility::GetCursorTarget(this);
    v4 = v3;
    if ( v3 != 0 && v3->m_bIsDOTANPC )
    {
      this->m_bProjectileActive = 0;
      Caster = CDOTABaseAbility::GetCaster(this);
      ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_wisp_overcharge", 0);
      if ( ModifierByName != 0 )
      {
        KeyValues::KeyValues(kv_0, "modifier_wisp_overcharge");
        Ability = CDOTA_Buff::GetAbility(ModifierByName);
        v8 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v4, v8, Ability, "modifier_wisp_overcharge", kv_0, 0);
        KeyValues::~KeyValues(kv_0);
      }
      KeyValues::KeyValues(kv_0, "modifier_wisp_tether");
      CDOTABaseAbility::GetDuration(this);
      KeyValues::SetFloat(kv_0, "duration", v9);
      KeyValues::SetPtr(kv_0, "target", v4);
      v10 = CDOTABaseAbility::GetCaster(this);
      v11 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v11, v10, this, "modifier_wisp_tether", kv_0, 0);
      KeyValues::~KeyValues(kv_0);
      KeyValues::KeyValues(kv_0, "modifier_wisp_tether_haste");
      CDOTABaseAbility::GetDuration(this);
      KeyValues::SetFloat(kv_0, "duration", v12);
      v13 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v4, v13, this, "modifier_wisp_tether_haste", kv_0, 0);
      KeyValues::~KeyValues(kv_0);
      m_pEntity = v4->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v15 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v16 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v16 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hTarget.m_Index) = v16 | this->m_hTarget.m_Index & 0x8000;
        this->m_hTarget.m_Index = (v15 << 15) | this->m_hTarget.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hTarget.m_Index = -1;
      }
      v17 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::SwapAbilities(v17, "wisp_tether", "wisp_tether_break", 0, 1);
      v18 = CDOTABaseAbility::GetCaster(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v18);
      v20 = CBaseEntity::GetAbsOrigin(v4);
      v21 = v20->x - AbsOrigin->x;
      v22 = v20->y - AbsOrigin->y;
      vDir.z = 0.0;
      vDir.x = v21;
      vDir.y = v22;
      fLength = VectorNormalize(&vDir);
      if ( this->latch_distance <= fLength )
      {
        v23 = CDOTABaseAbility::GetCaster(this);
        v24 = (*(v23->_vptr_IHandleEntity + 376))(v23);
        if ( CDOTALocomotor::ApplyHorizontalMotionController(v24, &this->CHorizontalMotionController, 0) )
        {
          v25 = CDOTABaseAbility::GetCaster(this);
          v26 = CDOTA_BaseNPC::FindModifierByName(v25, "modifier_wisp_tether", 0);
          if ( v26 != 0 )
            (*(v26->_vptr_CDOTA_Buff + 56))(v26);
          LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "latch_speed", -1, 0);
          ++this->m_iProjectileIndex;
          v28 = LevelSpecialValue;
          KeyValues::KeyValues(&kv, "tether_projectile");
          KeyValues::SetInt(&kv, "iProjectileIndex", this->m_iProjectileIndex);
          v29 = CDOTABaseAbility::GetCaster(this);
          v30 = CBaseEntity::GetAbsOrigin(v29);
          this->m_vProjectileLocation.x = v30->x;
          this->m_vProjectileLocation.y = v30->y;
          z = v30->z;
          v58 = -1;
          v70 = 0;
          this->m_vProjectileLocation.z = z;
          v57 = -1;
          *kv_0 = 0;
          v60 = 1;
          v59.x = vec3_origin.x;
          y = vec3_origin.y;
          v61 = 0;
          v59.y = y;
          v33 = vec3_origin.z;
          v62 = -1;
          v59.z = v33;
          v63 = 0;
          v64 = 0;
          v65 = 1;
          v66 = 0;
          v67 = 1;
          p_kv = 0;
          v68 = 0;
          v71 = 0;
          v72 = 0;
          v69 = 0;
          *&kv_0[8] = this;
          v56 = v28;
          v34 = CDOTABaseAbility::GetCaster(this);
          v59 = *CBaseEntity::GetAbsOrigin(v34);
          v35 = v4->m_pEntity;
          if ( v35 != 0 )
          {
            v36 = (v35->m_EHandle.m_Index >> 15) - (v35->m_flags & 1);
            v37 = 0x7FFF;
            if ( v35->m_EHandle.m_Index != -1 )
              v37 = v35->m_EHandle.m_Index & 0x7FFF;
            LOWORD(v58) = v37 | v58 & 0x8000;
            v58 = (v36 << 15) | v58 & 0x7FFF;
          }
          else
          {
            v58 = -1;
          }
          v65 = 0;
          p_kv = &kv;
          CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, kv_0);
          v38 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::PrimeResumePreviousMovement(v38);
          v39 = LODWORD(fLength);
          x_low = LODWORD(vDir.x);
          *x_low.m128i_i32 = vDir.x * fLength;
          *v39.m128i_i32 = fLength * vDir.z;
          v41 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
          fLengtha = vDir.y * fLength;
          v42 = COERCE_FLOAT(_mm_cvtsi128_si32(v39));
          v43 = CDOTABaseAbility::GetCaster(this);
          v44 = CBaseEntity::GetAbsOrigin(v43);
          *&v45 = fLengtha + v44->y;
          *&v46 = v41 + v44->x;
          vTeleportEnd.z = v42 + v44->z;
          *&vTeleportEnd.x = __PAIR64__(v45, v46);
          v47 = CDOTABaseAbility::GetCaster(this);
          v48 = CBaseEntity::GetAbsOrigin(v47);
          v49 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::UpdateResumePreviousMovement(v49, *v48, vTeleportEnd);
          this->m_bProjectileActive = 1;
          KeyValues::~KeyValues(&kv);
        }
      }
    }
  }
}


// CDOTA_Ability_Wisp_Tether::BreakTether  (line 602, @0x0000000002cece70, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CEntityInstance*, operator=
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_BaseNPC::SwapAbilities, CDOTALocomotor::InterruptHorizontalMotionController
// callers: CDOTA_Ability_Wisp_Tether_Break::OnSpellStart, CDOTA_Modifier_Wisp_Tether::OnDestroy, CDOTA_Modifier_Wisp_Tether::OnIntervalThink
// strings: "modifier_wisp_tether", "wisp_tether_break", "modifier_wisp_tether_haste", "modifier_wisp_overcharge"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Wisp_Tether::BreakTether(CDOTA_Ability_Wisp_Tether *const this)
{
  CDOTA_BaseNPC *v2; // rax
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTALocomotor *v8; // rax
  CDOTA_BaseNPC *m_pInstance; // r12

  if ( this->m_bProjectileActive )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    v8 = (*(Caster->_vptr_IHandleEntity + 376))(Caster);
    CDOTALocomotor::InterruptHorizontalMotionController(v8, 1);
    this->m_bProjectileActive = 0;
  }
  v2 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v2, "modifier_wisp_tether");
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
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          CDOTA_BaseNPC::RemoveModifierByName(v5->m_pInstance, "modifier_wisp_tether_haste");
          CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, "modifier_wisp_overcharge");
        }
      }
    }
  }
  if ( this->m_bHidden.m_Value )
  {
    v6 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::SwapAbilities(v6, "wisp_tether_break", "wisp_tether", 0, 1);
  }
  this->m_hTarget.m_Index = -1;
}


// CDOTA_Ability_Wisp_Tether::OnProjectileHit_ExtraData  (line 631, @0x0000000002cd21f0, libserver.so)
// calls: KeyValues::GetInt, CDOTABaseAbility::GetCaster, CDOTALocomotor::InterruptHorizontalMotionController
__int64 __fastcall CDOTA_Ability_Wisp_Tether::OnProjectileHit_ExtraData(
        CDOTA_Ability_Wisp_Tether *const this,
        EHANDLE hTarget,
        const Vector *const vLocation,
        KeyValues *pExtraData)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTALocomotor *v7; // rax

  if ( KeyValues::GetInt(pExtraData, "iProjectileIndex", 0) != this->m_iProjectileIndex || !this->m_bProjectileActive )
    return 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  v7 = (*(Caster->_vptr_IHandleEntity + 376))(Caster);
  CDOTALocomotor::InterruptHorizontalMotionController(v7, 1);
  return 0;
}


// CDOTA_Ability_Wisp_Tether::OnProjectileThink_ExtraData  (line 651, @0x0000000002cdab30, libserver.so)  // inlines: FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, Length2D, LookupEntity, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=
// calls: KeyValues::GetInt, CDOTABaseAbility::GetCaster, CDOTALocomotor::InterruptHorizontalMotionController, CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Wisp_Tether::OnProjectileThink_ExtraData(
        CDOTA_Ability_Wisp_Tether *const this,
        const Vector *const vLocation,
        KeyValues *pExtraData)
{
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *Caster; // rax
  CDOTALocomotor *v9; // rax
  vec_t x; // xmm0_4
  const CBaseEntity *m_pInstance; // rdi
  const Vector *AbsOrigin; // rax
  float v13; // xmm1_4

  if ( KeyValues::GetInt(pExtraData, "iProjectileIndex", 0) == this->m_iProjectileIndex && this->m_bProjectileActive )
  {
    m_Index = this->m_hTarget.m_Index;
    if ( m_Index + 2 > 1
      && (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
      && (v7 = &v6[this->m_hTarget.m_Index & 0x1FF]) != 0
      && m_Index == v7->m_EHandle.m_Index
      && (m_pInstance = v7->m_pInstance, v7->m_pInstance != 0)
      && m_pInstance->m_bIsDOTANPC
      && (AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance),
          v13 = AbsOrigin->y - vLocation->y,
          fsqrt(((AbsOrigin->x - vLocation->x) * (AbsOrigin->x - vLocation->x)) + (v13 * v13)) >= 300.0) )
    {
      x = vLocation->x;
    }
    else
    {
      Caster = CDOTABaseAbility::GetCaster(this);
      v9 = (*(Caster->_vptr_IHandleEntity + 376))(Caster);
      CDOTALocomotor::InterruptHorizontalMotionController(v9, 1);
      x = vLocation->x;
    }
    this->m_vProjectileLocation.x = x;
    this->m_vProjectileLocation.y = vLocation->y;
    this->m_vProjectileLocation.z = vLocation->z;
  }
}


// CDOTA_Ability_Wisp_Tether::UpdateHorizontalMotion  (line 674, @0x0000000002ccd120, libserver.so)
// calls: CBaseEntity::SetAbsOrigin
void __fastcall CDOTA_Ability_Wisp_Tether::UpdateHorizontalMotion(
        CDOTA_Ability_Wisp_Tether *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  CBaseEntity::SetAbsOrigin(me, &this->m_vProjectileLocation);
}


// CDOTA_Ability_Wisp_Tether::OnHorizontalMotionInterrupted  (line 683, @0x0000000002ccd410, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CGridNav::DestroyTreesAroundPoint
void __fastcall CDOTA_Ability_Wisp_Tether::OnHorizontalMotionInterrupted(CDOTA_Ability_Wisp_Tether *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v3; // r12d
  CDOTA_BaseNPC *v4; // rax
  float v5; // xmm3_4
  Vector v6; // 0:xmm0_8.8,8:xmm1_4.4

  this->m_bProjectileActive = 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
  v4 = CDOTABaseAbility::GetCaster(this);
  v6 = *CBaseEntity::GetAbsOrigin(v4);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v3, v6, 350.0, v5);
}


// CDOTA_Ability_Wisp_Tether::GetSlowDuration  (line 693, @0x0000000002cf69f0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Wisp_Tether::GetSlowDuration(CDOTA_Ability_Wisp_Tether *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 0);
}


// CDOTA_Ability_Wisp_Tether_Break::~CDOTA_Ability_Wisp_Tether_Break  (line 704, @0x0000000002d2c9c0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Wisp_Tether_Break::~CDOTA_Ability_Wisp_Tether_Break(
        CDOTA_Ability_Wisp_Tether_Break *const this)
{
  this->_vptr_IHandleEntity = &off_46756F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Wisp_Tether_Break::~CDOTA_Ability_Wisp_Tether_Break  (line 704, @0x0000000002d2c9e0, libserver.so)  // inlines: ~CDOTA_Ability_Wisp_Tether_Break
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Wisp_Tether_Break::~CDOTA_Ability_Wisp_Tether_Break(
        CDOTA_Ability_Wisp_Tether_Break *const this)
{
  this->_vptr_IHandleEntity = &off_46756F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Wisp_Tether_Break::Schema_DynamicBinding  (line 706, @0x0000000002d21690, libserver.so)
// globals: CDOTA_Ability_Wisp_Tether_Break::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Wisp_Tether_Break::Schema_DynamicBinding(
        const CDOTA_Ability_Wisp_Tether_Break *const this)
{
  return CDOTA_Ability_Wisp_Tether_Break::s_pSchemaBinding;
}


// CDOTA_Ability_Wisp_Tether_Break::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 706, @0x0000000002d216a0, libserver.so)
// globals: CDOTA_Ability_Wisp_Tether_Break::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Wisp_Tether_Break::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Wisp_Tether_Break::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Wisp_Tether_Break::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Wisp_Tether_Break::CEntityInstanceEntityClass::DestructInstance  (line 706, @0x0000000002d216b0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Wisp_Tether_Break>
void __fastcall CDOTA_Ability_Wisp_Tether_Break::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Wisp_Tether_Break::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Wisp_Tether_Break::CEntityInstanceEntityClass::FreeInstance  (line 706, @0x0000000002d216d0, libserver.so)
void __fastcall CDOTA_Ability_Wisp_Tether_Break::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Wisp_Tether_Break::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Wisp_Tether_Break::CEntityInstanceEntityClass::CanAllocate  (line 706, @0x0000000002d216f0, libserver.so)
bool __fastcall CDOTA_Ability_Wisp_Tether_Break::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Wisp_Tether_Break::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Wisp_Tether_Break::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 706, @0x0000000002d21700, libserver.so)
// globals: CDOTA_Ability_Wisp_Tether_Break::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Wisp_Tether_Break::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Wisp_Tether_Break::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Wisp_Tether_Break::s_pSchemaBinding;
}


// CDOTA_Ability_Wisp_Tether_Break::CEntityInstanceEntityClass::AllocateInstance  (line 706, @0x0000000002d25890, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Wisp_Tether_Break::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Wisp_Tether_Break::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Wisp_Tether_Break::CEntityInstanceEntityClass::ConstructInstance  (line 706, @0x0000000002d298b0, libserver.so)  // inlines: CDOTA_Ability_Wisp_Tether_Break, Construct<CDOTA_Ability_Wisp_Tether_Break>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Wisp_Tether_Break::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Wisp_Tether_Break::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_46756F0;
  }
  return p;
}


// CDOTA_Ability_Wisp_Tether_Break::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 706, @0x0000000002d35080, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Wisp_Tether_Break::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Wisp_Tether_Break::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Wisp_Tether_Break::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 706, @0x0000000002d350a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Wisp_Tether_Break::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Wisp_Tether_Break::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Wisp_Tether_Break::GetEntityClassInternal  (line 706, @0x0000000002d4c3a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "wisp_tether_break", "CDOTA_Ability_Wisp_Tether_Break"
// globals: `guard variable for'CDOTA_Ability_Wisp_Tether_Break::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Tether_BreakClass, CDOTA_Ability_Wisp_Tether_Break::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Tether_BreakClass, __dso_handle, CDOTA_Ability_Wisp_Tether_Break::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Wisp_Tether_Break::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Tether_BreakClassInfo, CDOTA_Ability_Wisp_Tether_Break::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Tether_BreakClassInfo
CEntityClass *__cdecl CDOTA_Ability_Wisp_Tether_Break::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Wisp_Tether_Break::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Tether_BreakClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Wisp_Tether_Break::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Tether_BreakClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Wisp_Tether_Break::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Tether_BreakClass);
    CDOTA_Ability_Wisp_Tether_Break::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Tether_BreakClass._vptr_CEntityClass = off_4675670;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Wisp_Tether_Break::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Tether_BreakClass);
    __cxa_atexit(
      CDOTA_Ability_Wisp_Tether_Break::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Wisp_Tether_Break::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Tether_BreakClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Wisp_Tether_BreakClass != 0 )
    return &CDOTA_Ability_Wisp_Tether_Break::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Tether_BreakClass;
  if ( `guard variable for'CDOTA_Ability_Wisp_Tether_Break::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Tether_BreakClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Wisp_Tether_Break::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Tether_BreakClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Wisp_Tether_Break::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Tether_BreakClassInfo,
      "CDOTA_Ability_Wisp_Tether_Break",
      "wisp_tether_break",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Wisp_Tether_Break::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Tether_BreakClassInfo);
  }
  CDOTA_Ability_Wisp_Tether_Break::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Tether_BreakClass.m_pClassInfo = &CDOTA_Ability_Wisp_Tether_Break::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Tether_BreakClassInfo;
  CDOTA_Ability_Wisp_Tether_Break::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Tether_BreakClass.m_pBaseClassInfo = CDOTA_Ability_Wisp_Tether_Break::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Tether_BreakClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Wisp_Tether_BreakClass = &CDOTA_Ability_Wisp_Tether_Break::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Tether_BreakClass;
  CDOTA_Ability_Wisp_Tether_Break::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Tether_BreakClassInfo.m_pClass = &CDOTA_Ability_Wisp_Tether_Break::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Tether_BreakClass;
  CDOTA_Ability_Wisp_Tether_Break::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Tether_BreakClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Wisp_Tether_BreakClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Wisp_Tether_Break::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Tether_BreakClass;
}


// CDOTA_Ability_Wisp_Tether_Break::ProcsMagicStick  (line 709, @0x0000000002d21710, libserver.so)
bool __fastcall CDOTA_Ability_Wisp_Tether_Break::ProcsMagicStick(CDOTA_Ability_Wisp_Tether_Break *const this)
{
  return 0;
}


// CDOTA_Ability_Wisp_Tether_Break::IsHiddenWhenStolen  (line 710, @0x0000000002d21720, libserver.so)
bool __fastcall CDOTA_Ability_Wisp_Tether_Break::IsHiddenWhenStolen(CDOTA_Ability_Wisp_Tether_Break *const this)
{
  return 1;
}


// CDOTA_Ability_Wisp_Tether_Break::GetAssociatedPrimaryAbilities  (line 712, @0x0000000002d21730, libserver.so)
const char *__fastcall CDOTA_Ability_Wisp_Tether_Break::GetAssociatedPrimaryAbilities(
        CDOTA_Ability_Wisp_Tether_Break *const this)
{
  return "wisp_tether";
}


// CDOTA_Ability_Wisp_Tether_Break::OnSpellStart  (line 720, @0x0000000002cecfa0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_Wisp_Tether::BreakTether
void __fastcall CDOTA_Ability_Wisp_Tether_Break::OnSpellStart(CDOTA_Ability_Wisp_Tether_Break *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Ability_Wisp_Tether *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "wisp_tether", 0);
  if ( AbilityByName != 0 )
    CDOTA_Ability_Wisp_Tether::BreakTether(AbilityByName);
}


// CDOTA_Modifier_Wisp_Tether::~CDOTA_Modifier_Wisp_Tether  (line 735, @0x0000000002d46310, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Wisp_Tether::~CDOTA_Modifier_Wisp_Tether(CDOTA_Modifier_Wisp_Tether *const this)
{
  this->_vptr_CDOTA_Buff = &off_46761B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->hStunnedEntities);
  if ( (this->hStunnedEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->hStunnedEntities.m_Memory),
        (this->hStunnedEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->hStunnedEntities.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Wisp_Tether::~CDOTA_Modifier_Wisp_Tether  (line 735, @0x0000000002d46960, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_Wisp_Tether, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Wisp_Tether::~CDOTA_Modifier_Wisp_Tether(CDOTA_Modifier_Wisp_Tether *const this)
{
  this->_vptr_CDOTA_Buff = &off_46761B0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->hStunnedEntities);
  if ( (this->hStunnedEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->hStunnedEntities.m_Memory);
    if ( (this->hStunnedEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->hStunnedEntities.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Wisp_Tether::IsPurgable  (line 740, @0x0000000002d21740, libserver.so)
bool __fastcall CDOTA_Modifier_Wisp_Tether::IsPurgable(CDOTA_Modifier_Wisp_Tether *const this)
{
  return 0;
}


// CDOTA_Modifier_Wisp_Tether::OnCreated  (line 778, @0x0000000002cfc160, libserver.so)  // inlines: AssignTo, DOTAGameRules, DotaRetrieveAbilityValue<float>, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetLevelSpecialValueFor<float>, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, Vector, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, DotaRetrieveAbilityValue<int>, KeyValues::GetPtr, CDOTA_Buff::StartIntervalThink, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::GetParent, CDOTA_ParticleManager::SetParticleControlEnt, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::AddParticle (14 total)
// strings: "latch_distance", "tether_heal_amp", "particles/units/heroes/hero_wisp/wisp_tether.vpcf", "attach_hitloc", "Hero_Wisp.Tether"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Wisp_Tether::OnCreated(CDOTA_Modifier_Wisp_Tether *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  float v9; // xmm0_4
  CGameRules *v10; // rax
  _QWORD *Ptr; // rax
  float v12; // xmm1_4
  __int64 v13; // rdx
  int v14; // eax
  __int16 v15; // cx
  const CBaseAnimating *m_pInstance; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_ParticleManager *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  const Vector *AbsOrigin; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v24; // rdx
  CEntityIdentity *v25; // rdx
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  CDOTA_BaseNPC *Caster; // rax
  double v29; // [rsp+10h] [rbp-30h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->stun_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "stun_duration", -1, 0);
  else
    this->stun_duration = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->movespeed, "movespeed");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->radius, "radius");
  v7 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v7, &this->latch_distance, "latch_distance");
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 != 0 )
    this->tether_heal_amp = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8, "tether_heal_amp", -1, 0);
  else
    this->tether_heal_amp = 0.0;
  v9 = 0.0;
  this->m_flHealthHealed = 0.0;
  this->m_flManaHealed = 0.0;
  v10 = g_pGameRules;
  if ( g_pGameRules != 0 )
  {
    this->m_flHealMessageTime = *&g_pGameRules[18].m_szQuestName[20];
    v9 = *&v10[18].m_szQuestName[20];
  }
  else
  {
    this->m_flHealMessageTime = 0.0;
  }
  this->m_flManaMessageTime = v9;
  this->m_bIsInRange = 0;
  Ptr = KeyValues::GetPtr(pKV, "target", 0);
  if ( Ptr != 0 && (v13 = Ptr[1]) != 0 )
  {
    v14 = (*(v13 + 16) >> 15) - (*(v13 + 48) & 1);
    if ( *(v13 + 16) == -1 )
      v15 = 0x7FFF;
    else
      v15 = *(v13 + 16) & 0x7FFF;
    LOWORD(this->m_hTarget.m_Index) = v15 | this->m_hTarget.m_Index & 0x8000;
    this->m_hTarget.m_Index = (v14 << 15) | this->m_hTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTarget.m_Index = -1;
  }
  m_pInstance = 0;
  this->m_bInManaGained = 0;
  CDOTA_Buff::StartIntervalThink(this, 0.1, v12);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_wisp/wisp_tether.vpcf",
               2,
               0,
               0,
               0);
  Parent = CDOTA_Buff::GetParent(this);
  v20 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v20, Particle, 0, Parent, 5, "attach_hitloc", vec3_invalid, 1);
  v21 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v21);
  m_Index = this->m_hTarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v24 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
    if ( v24 != 0 )
    {
      v25 = &v24[this->m_hTarget.m_Index & 0x1FF];
      if ( v25 != 0 && m_Index == v25->m_EHandle.m_Index )
        m_pInstance = v25->m_pInstance;
    }
  }
  v26 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v26, Particle, 1, m_pInstance, 5, "attach_hitloc", *AbsOrigin, 1);
  *&v29 = this->latch_distance;
  *(&v29 + 1) = *&v29;
  v27 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v27, Particle, 2, v29, *&v29);
  CDOTA_Buff::AddParticle(this, Particle, 0, 0, -1, 0, 0);
  Caster = CDOTA_Buff::GetCaster(this);
  DOTA_EmitSound(2, "Hero_Wisp.Tether", Caster);
}


// CDOTA_Modifier_Wisp_Tether::OnRefresh  (line 812, @0x0000000002d0b380, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "latch_distance", "tether_heal_amp"
void __fastcall CDOTA_Modifier_Wisp_Tether::OnRefresh(CDOTA_Modifier_Wisp_Tether *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->stun_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "stun_duration", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->stun_duration = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->movespeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "movespeed", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_9;
    }
  }
  this->movespeed = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "radius", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
LABEL_10:
    this->latch_distance = 0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_11;
  }
LABEL_9:
  this->radius = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_10;
LABEL_5:
  this->latch_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "latch_distance", -1, 0);
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->tether_heal_amp = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "tether_heal_amp", -1, 0);
    return;
  }
LABEL_11:
  this->tether_heal_amp = 0.0;
}


// CDOTA_Modifier_Wisp_Tether::OnDestroy  (line 823, @0x0000000002cecfe0, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Ability_Wisp_Tether::BreakTether, CDOTA_Buff::GetParent, CBaseEntity::StopSound, CDOTA_BaseNPC::UnitEmitSound
// strings: "Hero_Wisp.Tether", "Hero_Wisp.Tether.Stop"
void __fastcall CDOTA_Modifier_Wisp_Tether::OnDestroy(CDOTA_Modifier_Wisp_Tether *const this)
{
  CDOTA_Ability_Wisp_Tether *Ability; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    CDOTA_Ability_Wisp_Tether::BreakTether(Ability);
  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(Parent, "Hero_Wisp.Tether");
  v4 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v4, "Hero_Wisp.Tether.Stop", 0.0, 0, 0);
}


// CDOTA_Modifier_Wisp_Tether::DeclareFunctions  (line 838, @0x0000000002ccb500, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Wisp_Tether::OnHealthGained(CModifierParams const&), CDOTA_Modifier_Wisp_Tether::OnManaGained(CModifierParams const&), CDOTA_Modifier_Wisp_Tether::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Wisp_Tether::DeclareFunctions(CDOTA_Modifier_Wisp_Tether *const this)
{
  this->m_Functions[144].__pfn = CDOTA_Modifier_Wisp_Tether::OnHealthGained;
  this->m_Functions[144].__delta = 0;
  this->m_Functions[145].__delta = 0;
  this->m_Functions[145].__pfn = CDOTA_Modifier_Wisp_Tether::OnManaGained;
  this->m_Functions[13].__pfn = CDOTA_Modifier_Wisp_Tether::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Wisp_Tether::OnHealthGained  (line 847, @0x0000000002cdb240, libserver.so)  // inlines: DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::Heal, CDOTA_Buff::GetCaster, SendOverheadEventMessage
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Wisp_Tether::OnHealthGained(
        CDOTA_Modifier_Wisp_Tether *const this,
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
  CDOTABaseAbility *Ability; // rax
  float v14; // xmm0_4
  float v15; // xmm2_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTAPlayer *v17; // rax
  int m_flHealthHealed; // r14d
  CDOTAPlayer *v19; // rax
  float v20; // xmm0_4
  float v21; // [rsp+Ch] [rbp-24h]

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
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
        {
          v9 = this->m_hTarget.m_Index;
          if ( v9 + 2 > 1 )
          {
            v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
            if ( v10 != 0 )
            {
              v11 = &v10[this->m_hTarget.m_Index & 0x1FF];
              if ( v11 != 0 && v9 == v11->m_EHandle.m_Index )
              {
                v12 = v11->m_pInstance;
                if ( v11->m_pInstance != 0 && v12->m_bIsDOTANPC )
                {
                  Ability = CDOTA_Buff::GetAbility(this);
                  CDOTA_BaseNPC::Heal(v12, params->fGain * this->tether_heal_amp, Ability, 0, 1);
                  v14 = (params->fGain * this->tether_heal_amp) + this->m_flHealthHealed;
                  this->m_flHealthHealed = v14;
                  if ( v14 > 1.0 )
                  {
                    v15 = 0.0;
                    if ( g_pGameRules != 0 )
                      v15 = *&g_pGameRules[18].m_szQuestName[20];
                    if ( (v15 - this->m_flHealMessageTime) > 1.0 )
                    {
                      v21 = v14;
                      Caster = CDOTA_Buff::GetCaster(this);
                      v17 = (*(Caster->_vptr_IHandleEntity + 413))(Caster);
                      SendOverheadEventMessage(v17, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, v12, v21, 0);
                      m_flHealthHealed = this->m_flHealthHealed;
                      v19 = (*(v12->_vptr_IHandleEntity + 413))(v12);
                      SendOverheadEventMessage(v19, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_HEAL, v12, m_flHealthHealed, 0);
                      v20 = 0.0;
                      if ( g_pGameRules != 0 )
                        v20 = *&g_pGameRules[18].m_szQuestName[20];
                      this->m_flHealMessageTime = v20;
                      this->m_flHealthHealed = 0.0;
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


// CDOTA_Modifier_Wisp_Tether::OnManaGained  (line 875, @0x0000000002cdbf70, libserver.so)  // inlines: DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::GiveMana, CDOTA_Buff::GetCaster, SendOverheadEventMessage, CDOTA_Buff::GetAbility, CDOTA_CombatLog::AddManaRestoredEvent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Wisp_Tether::OnManaGained(
        CDOTA_Modifier_Wisp_Tether *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // ecx
  unsigned __int64 v10; // rax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rax
  CDOTA_BaseNPC *v13; // r13
  uint32 v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CDOTA_BaseNPC *v17; // r14
  float v18; // xmm0_4
  float v19; // xmm2_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTAPlayer *v21; // rax
  int m_flManaHealed; // r15d
  CDOTAPlayer *v23; // rax
  CDOTABaseAbility *Ability; // rax
  float v25; // xmm0_4
  float flValue; // [rsp+Ch] [rbp-34h]
  float flValuea; // [rsp+Ch] [rbp-34h]

  if ( !this->m_bInManaGained )
  {
    this->m_bInManaGained = 1;
    m_Index = params->hunit.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[params->hunit.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
          {
            v9 = params->hunit.m_Index;
            if ( v9 + 2 <= 1
              || (v10 = params->hunit.m_Index & 0x7FFF,
                  (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v10 >> 9)]) == 0)
              || (v12 = &v11[v10 & 0x1FF]) == 0
              || v9 != v12->m_EHandle.m_Index
              || (v13 = v12->m_pInstance, v12->m_pInstance == 0)
              || !v13->m_bIsDOTANPC )
            {
              v13 = 0;
            }
            v14 = this->m_hTarget.m_Index;
            if ( v14 + 2 > 1 )
            {
              v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F];
              if ( v15 != 0 )
              {
                v16 = &v15[this->m_hTarget.m_Index & 0x1FF];
                if ( v16 != 0 && v14 == v16->m_EHandle.m_Index )
                {
                  v17 = v16->m_pInstance;
                  if ( v16->m_pInstance != 0
                    && v17->m_bIsDOTANPC
                    && v13 != 0
                    && v13->m_flMaxMana.m_Value != v13->m_flMana.m_Value )
                  {
                    CDOTA_BaseNPC::GiveMana(v17, params->fGain * this->tether_heal_amp, 0, 1);
                    v18 = (params->fGain * this->tether_heal_amp) + this->m_flManaHealed;
                    this->m_flManaHealed = v18;
                    if ( v18 >= 1.0 )
                    {
                      v19 = 0.0;
                      if ( g_pGameRules != 0 )
                        v19 = *&g_pGameRules[18].m_szQuestName[20];
                      if ( (v19 - this->m_flManaMessageTime) >= 1.0 )
                      {
                        flValue = v18;
                        Caster = CDOTA_Buff::GetCaster(this);
                        v21 = (*(Caster->_vptr_IHandleEntity + 413))(Caster);
                        SendOverheadEventMessage(v21, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_MANA_ADD, v17, flValue, 0);
                        m_flManaHealed = this->m_flManaHealed;
                        v23 = (*(v17->_vptr_IHandleEntity + 413))(v17);
                        SendOverheadEventMessage(
                          v23,
                          DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_MANA_ADD,
                          v17,
                          m_flManaHealed,
                          0);
                        flValuea = this->m_flManaHealed;
                        Ability = CDOTA_Buff::GetAbility(this);
                        CDOTA_CombatLog::AddManaRestoredEvent(&g_DOTACombatLog, Ability, v13, v17, flValuea);
                        v25 = 0.0;
                        if ( g_pGameRules != 0 )
                          v25 = *&g_pGameRules[18].m_szQuestName[20];
                        this->m_flManaMessageTime = v25;
                        this->m_flManaHealed = 0.0;
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
    this->m_bInManaGained = 0;
  }
  return 1uLL;
}


// CDOTA_Modifier_Wisp_Tether::GetModifierMoveSpeedBonus_Percentage  (line 913, @0x0000000002ccb560, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Wisp_Tether::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Wisp_Tether *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->movespeed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Wisp_Tether::OnIntervalThink  (line 920, @0x0000000002d14ee0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Element, FastSqrt, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetPaddedCollisionRadius, GetSerialNumber, GetTeamNumber, GrowMemory, InState, IndexToIdentity, IsCurrentlyMotionControlled, IsInvulnerable, IsValid, Length2D, LookupEntity, Set, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator-, operator->, operator==<CBaseEntity>, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_Ability_Wisp_Tether::BreakTether, CDOTA_Buff::GetCaster, FindUnitsInRadius, CalcDistanceToLineSegment2D, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier (23 total)
// strings: "modifier_wisp_tether_slow", "particles/units/heroes/hero_wisp/wisp_tether_hit.vpcf", "attach_hitloc", "Hero_Wisp.Tether.Stun"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Wisp_Tether::OnIntervalThink(CDOTA_Modifier_Wisp_Tether *const this)
{
  EHANDLE *p_m_hTarget; // rbx
  const CBaseEntity *v3; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *Parent; // rax
  const Vector *v6; // rax
  vec_t v7; // xmm2_4
  vec_t v8; // xmm1_4
  const CBaseEntity *v9; // rax
  const Vector *v10; // r12
  CDOTA_BaseNPC *v11; // rax
  const Vector *v12; // rax
  CEntityInstance *v13; // rax
  CDOTA_Ability_Wisp_Tether *Ability; // rax
  CDOTA_BaseNPC *v15; // rax
  __int64 v16; // rax
  CDOTA_BaseNPC *v17; // rbx
  CDOTA_BaseNPC *Caster; // rax
  __int64 v19; // rbx
  CHandle<CBaseEntity> *v20; // rdx
  uint32 m_Index; // eax
  __int16 v22; // cx
  CEntityIdentity *v23; // rdx
  CEntityIdentity *v24; // rdx
  CEntityInstance *m_pInstance; // r12
  uint32 v26; // eax
  const CBaseEntity *v27; // rdi
  unsigned __int64 v28; // rdx
  CEntityIdentity *v29; // rcx
  CEntityIdentity *v30; // rdx
  const Vector *v31; // r15
  CDOTA_BaseNPC *v32; // rax
  const Vector *v33; // r14
  const Vector *v34; // rax
  CEntityIdentity *m_pEntity; // r14
  __int16 v36; // cx
  int v37; // eax
  __int16 v38; // cx
  int v39; // eax
  __int64 m_Size; // r14
  int v41; // eax
  CHandle<CBaseEntity> *v42; // rax
  float v43; // xmm1_4
  CDOTABaseAbility *v44; // r14
  CDOTA_BaseNPC *v45; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v47; // rax
  CDOTA_ParticleManager *v48; // rax
  float flRadius; // [rsp+38h] [rbp-98h]
  CHandle<CBaseEntity> v50; // [rsp+40h] [rbp-90h] BYREF
  Vector vecCenter; // [rsp+50h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hUnits; // [rsp+60h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+80h] [rbp-50h] BYREF
  unsigned __int64 v54; // [rsp+98h] [rbp-38h]

  p_m_hTarget = &this->m_hTarget;
  v54 = __readfsqword(0x28u);
  v3 = CEntityHandle::operator CEntityInstance *(&this->m_hTarget);
  if ( v3 != 0 )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(v3);
    Parent = CDOTA_Buff::GetParent(this);
    v6 = CBaseEntity::GetAbsOrigin(Parent);
    v7 = (v6->y + AbsOrigin->y) * 0.5;
    v8 = (v6->z + AbsOrigin->z) * 0.5;
    vecCenter.x = (v6->x + AbsOrigin->x) * 0.5;
    vecCenter.y = v7;
    vecCenter.z = v8;
    v9 = CEntityHandle::operator CEntityInstance *(p_m_hTarget);
    v10 = CBaseEntity::GetAbsOrigin(v9);
    v11 = CDOTA_Buff::GetParent(this);
    v12 = CBaseEntity::GetAbsOrigin(v11);
    flRadius = fsqrt(((v12->x - v10->x) * (v12->x - v10->x)) + ((v12->y - v10->y) * (v12->y - v10->y)));
    if ( this->m_bIsInRange
      || this->latch_distance <= flRadius
      && ((v15 = CDOTA_Buff::GetParent(this), *((v16 = (*(v15->_vptr_IHandleEntity + 376))(v15)) + 216) != 0)
       || *(v16 + 224) != 0) )
    {
      if ( flRadius > 2150.0 || this->m_bIsInRange && flRadius > this->radius )
      {
        Ability = CDOTA_Buff::GetAbility(this);
        if ( Ability != 0 )
          goto LABEL_7;
      }
    }
    else
    {
      this->m_bIsInRange = 1;
    }
    v13 = CEntityHandle::operator CEntityInstance *(p_m_hTarget);
    if ( (*(v13->_vptr_IHandleEntity + 139))(v13) == 0 )
    {
      Ability = CDOTA_Buff::GetAbility(this);
      if ( Ability != 0 )
      {
LABEL_7:
        CDOTA_Ability_Wisp_Tether::BreakTether(Ability);
        return;
      }
    }
    hUnits.m_Size = 0;
    hUnits.m_Memory.m_pMemory = 0;
    hUnits.m_Memory.m_nAllocationCount = 0;
    hUnits.m_Memory.m_nGrowSize = 0;
    v17 = CDOTA_Buff::GetParent(this);
    Caster = CDOTA_Buff::GetCaster(this);
    FindUnitsInRadius(Caster->m_iTeamNum.m_Value, &vecCenter, v17, flRadius, &hUnits, 2, 19, 0, 0, 0);
    if ( hUnits.m_Size > 0 )
    {
      v19 = 0;
      do
      {
        while ( 1 )
        {
          v20 = &hUnits.m_Memory.m_pMemory[v19];
          m_Index = v20->m_Index;
          if ( v20->m_Index + 2 > 1 )
          {
            v22 = v20->m_Index;
            v23 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v20->m_Index) >> 9) & 0x3F];
            if ( v23 != 0 )
            {
              v24 = &v23[v22 & 0x1FF];
              if ( v24 != 0 && m_Index == v24->m_EHandle.m_Index )
              {
                m_pInstance = v24->m_pInstance;
                if ( v24->m_pInstance != 0
                  && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                  && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0
                  && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 1) == 0 )
                {
                  v26 = this->m_hTarget.m_Index;
                  v27 = 0;
                  if ( v26 + 2 > 1 )
                  {
                    v28 = this->m_hTarget.m_Index & 0x7FFF;
                    v29 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v28 >> 9)];
                    if ( v29 != 0 )
                    {
                      v27 = 0;
                      v30 = &v29[v28 & 0x1FF];
                      if ( v30 != 0 && v26 == v30->m_EHandle.m_Index )
                        v27 = v30->m_pInstance;
                    }
                    else
                    {
                      v27 = 0;
                    }
                  }
                  v31 = CBaseEntity::GetAbsOrigin(v27);
                  v32 = CDOTA_Buff::GetParent(this);
                  v33 = CBaseEntity::GetAbsOrigin(v32);
                  v34 = CBaseEntity::GetAbsOrigin(m_pInstance);
                  if ( ((*(&m_pInstance[48]._vptr_IHandleEntity + 1) + *&m_pInstance[48].m_pEntity) + 50.0) >= CalcDistanceToLineSegment2D(v34, v33, v31, 0) )
                  {
                    v50.m_Index = -1;
                    m_pEntity = m_pInstance->m_pEntity;
                    if ( m_pEntity != 0 )
                    {
                      v36 = 0x7FFF;
                      v37 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                      if ( m_pEntity->m_EHandle.m_Index != -1 )
                        v36 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                      LOWORD(v50.m_Index) = v36 | v50.m_Index & 0x8000;
                      v50.m_Index = (v37 << 15) | v50.m_Index & 0x7FFF;
                    }
                    if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                           &this->hStunnedEntities,
                           &v50) == -1 )
                      break;
                  }
                }
              }
            }
          }
          if ( hUnits.m_Size <= ++v19 )
            goto LABEL_45;
        }
        v50.m_Index = -1;
        if ( m_pEntity != 0 )
        {
          v38 = 0x7FFF;
          v39 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v38 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(v50.m_Index) = v38 | v50.m_Index & 0x8000;
          v50.m_Index = (v39 << 15) | v50.m_Index & 0x7FFF;
        }
        m_Size = this->hStunnedEntities.m_Size;
        v41 = this->hStunnedEntities.m_Size;
        if ( m_Size == this->hStunnedEntities.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->hStunnedEntities.m_Memory, 1);
          v41 = this->hStunnedEntities.m_Size;
        }
        this->hStunnedEntities.m_Size = v41 + 1;
        v42 = &this->hStunnedEntities.m_Memory.m_pMemory[m_Size];
        if ( v42 != 0 )
          v42->m_Index = v50.m_Index;
        KeyValues::KeyValues(&kv, "modifier_wisp_tether_slow");
        KeyValues::SetFloat(&kv, "duration", v43);
        v44 = CDOTA_Buff::GetAbility(this);
        v45 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(m_pInstance, v45, v44, "modifier_wisp_tether_slow", &kv, 0);
        ParticleManager = GetParticleManager();
        LODWORD(v44) = CDOTA_ParticleManager::CreateParticle(
                         ParticleManager,
                         "particles/units/heroes/hero_wisp/wisp_tether_hit.vpcf",
                         2,
                         m_pInstance,
                         0,
                         0);
        v47 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v47, v44, 0, m_pInstance, 5, "attach_hitloc", vec3_invalid, 1);
        v48 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v48, v44);
        CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Wisp.Tether.Stun", 0.0, 0, 0);
        KeyValues::~KeyValues(&kv);
        ++v19;
      }
      while ( hUnits.m_Size > v19 );
    }
LABEL_45:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hUnits);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Wisp_Tether_Slow::~CDOTA_Modifier_Wisp_Tether_Slow  (line 991, @0x0000000002d263d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Wisp_Tether_Slow::~CDOTA_Modifier_Wisp_Tether_Slow(
        CDOTA_Modifier_Wisp_Tether_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_46764D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Wisp_Tether_Slow::~CDOTA_Modifier_Wisp_Tether_Slow  (line 991, @0x0000000002d263f0, libserver.so)  // inlines: ~CDOTA_Modifier_Wisp_Tether_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Wisp_Tether_Slow::~CDOTA_Modifier_Wisp_Tether_Slow(
        CDOTA_Modifier_Wisp_Tether_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_46764D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Wisp_Tether_Slow::IsDebuff  (line 996, @0x0000000002d21750, libserver.so)
bool __fastcall CDOTA_Modifier_Wisp_Tether_Slow::IsDebuff(CDOTA_Modifier_Wisp_Tether_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_Wisp_Tether_Slow::GetEffectName  (line 1004, @0x0000000002d21760, libserver.so)
// strings: "particles/units/heroes/hero_wisp/wisp_tether_slow.vpcf"
const char *__fastcall CDOTA_Modifier_Wisp_Tether_Slow::GetEffectName(CDOTA_Modifier_Wisp_Tether_Slow *const this)
{
  return "particles/units/heroes/hero_wisp/wisp_tether_slow.vpcf";
}


// CDOTA_Modifier_Wisp_Tether_Slow::OnCreated  (line 1014, @0x0000000002d09040, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Wisp_Tether_Slow::OnCreated(CDOTA_Modifier_Wisp_Tether_Slow *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "slow", -1, 0);
  else
    this->slow = 0;
}


// CDOTA_Modifier_Wisp_Tether_Slow::DeclareFunctions  (line 1021, @0x0000000002ccb580, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Wisp_Tether_Slow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Wisp_Tether_Slow::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Wisp_Tether_Slow::DeclareFunctions(CDOTA_Modifier_Wisp_Tether_Slow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Wisp_Tether_Slow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Wisp_Tether_Slow::GetModifierAttackSpeedBonus_Constant;
}


// CDOTA_Modifier_Wisp_Tether_Slow::GetModifierMoveSpeedBonus_Percentage  (line 1027, @0x0000000002ccb5c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Wisp_Tether_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Wisp_Tether_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->slow;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Wisp_Tether_Slow::GetModifierAttackSpeedBonus_Constant  (line 1034, @0x0000000002ccb5e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Wisp_Tether_Slow::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Wisp_Tether_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->slow;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Wisp_Tether_Haste::~CDOTA_Modifier_Wisp_Tether_Haste  (line 1043, @0x0000000002d26380, libserver.so)  // inlines: ~CDOTA_Modifier_MoveSpeed_Percentage
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Wisp_Tether_Haste::~CDOTA_Modifier_Wisp_Tether_Haste(
        CDOTA_Modifier_Wisp_Tether_Haste *const this)
{
  this->_vptr_CDOTA_Buff = &off_411BDD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Wisp_Tether_Haste::~CDOTA_Modifier_Wisp_Tether_Haste  (line 1043, @0x0000000002d263a0, libserver.so)  // inlines: ~CDOTA_Modifier_MoveSpeed_Percentage, ~CDOTA_Modifier_Wisp_Tether_Haste
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Wisp_Tether_Haste::~CDOTA_Modifier_Wisp_Tether_Haste(
        CDOTA_Modifier_Wisp_Tether_Haste *const this)
{
  this->_vptr_CDOTA_Buff = &off_411BDD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Wisp_Tether_Haste::IsPurgable  (line 1047, @0x0000000002d21770, libserver.so)
bool __fastcall CDOTA_Modifier_Wisp_Tether_Haste::IsPurgable(CDOTA_Modifier_Wisp_Tether_Haste *const this)
{
  return 0;
}


// CDOTA_Modifier_Wisp_Tether_Haste::OnCreated  (line 1055, @0x0000000002cd1f60, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound, CDOTA_Modifier_MoveSpeed_Percentage::OnCreated
// strings: "Hero_Wisp.Tether.Target"
void __fastcall CDOTA_Modifier_Wisp_Tether_Haste::OnCreated(
        CDOTA_Modifier_Wisp_Tether_Haste *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(Parent, "Hero_Wisp.Tether.Target", 0.0, 0, 0);
  CDOTA_Modifier_MoveSpeed_Percentage::OnCreated(this, pKV);
}


// CDOTA_Modifier_Wisp_Tether_Haste::OnDestroy  (line 1065, @0x0000000002ccd060, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::StopSound
// strings: "Hero_Wisp.Tether.Target"
void __fastcall CDOTA_Modifier_Wisp_Tether_Haste::OnDestroy(CDOTA_Modifier_Wisp_Tether_Haste *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(Parent, "Hero_Wisp.Tether.Target");
}


// CDOTA_Wisp_Spirit::~CDOTA_Wisp_Spirit  (line 1077, @0x0000000002d26180, libserver.so)
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_Wisp_Spirit::~CDOTA_Wisp_Spirit(CDOTA_Wisp_Spirit *const this)
{
  this->_vptr_IHandleEntity = &off_4676B50;
  this->_vptr_INextBotEventResponder = &off_4677AC0;
  this->_vptr_CObstructionObject = &off_4677DF0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_Wisp_Spirit::~CDOTA_Wisp_Spirit  (line 1077, @0x0000000002d261c0, libserver.so)  // inlines: ~CDOTA_Wisp_Spirit
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_Wisp_Spirit::~CDOTA_Wisp_Spirit(CDOTA_Wisp_Spirit *const this)
{
  this->_vptr_IHandleEntity = &off_4676B50;
  this->_vptr_INextBotEventResponder = &off_4677AC0;
  this->_vptr_CObstructionObject = &off_4677DF0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Wisp_Spirit::Schema_DynamicBinding  (line 1079, @0x0000000002d21780, libserver.so)
// globals: CDOTA_Wisp_Spirit::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Wisp_Spirit::Schema_DynamicBinding(const CDOTA_Wisp_Spirit *const this)
{
  return CDOTA_Wisp_Spirit::s_pSchemaBinding;
}


// CDOTA_Wisp_Spirit::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1079, @0x0000000002d217b0, libserver.so)
// globals: CDOTA_Wisp_Spirit::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Wisp_Spirit::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Wisp_Spirit::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Wisp_Spirit::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Wisp_Spirit::CEntityInstanceEntityClass::DestructInstance  (line 1079, @0x0000000002d217c0, libserver.so)  // inlines: Destruct<CDOTA_Wisp_Spirit>
void __fastcall CDOTA_Wisp_Spirit::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Wisp_Spirit::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Wisp_Spirit::CEntityInstanceEntityClass::FreeInstance  (line 1079, @0x0000000002d217e0, libserver.so)
void __fastcall CDOTA_Wisp_Spirit::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Wisp_Spirit::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Wisp_Spirit::CEntityInstanceEntityClass::CanAllocate  (line 1079, @0x0000000002d21800, libserver.so)
bool __fastcall CDOTA_Wisp_Spirit::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Wisp_Spirit::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Wisp_Spirit::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1079, @0x0000000002d21810, libserver.so)
// globals: CDOTA_Wisp_Spirit::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Wisp_Spirit::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Wisp_Spirit::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Wisp_Spirit::s_pSchemaBinding;
}


// CDOTA_Wisp_Spirit::CEntityInstanceEntityClass::AllocateInstance  (line 1079, @0x0000000002d258d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Wisp_Spirit::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Wisp_Spirit::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4504);
  memset(v1, 0, 0x1198u);
  return v1;
}


// CDOTA_Wisp_Spirit::CEntityInstanceEntityClass::ConstructInstance  (line 1079, @0x0000000002d25c60, libserver.so)  // inlines: CDOTA_Wisp_Spirit, Construct<CDOTA_Wisp_Spirit>
// calls: CDOTA_BaseNPC::CDOTA_BaseNPC
CEntityInstance *__fastcall CDOTA_Wisp_Spirit::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Wisp_Spirit::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC::CDOTA_BaseNPC(p);
    *p = &off_4676B50;
    *(p + 236) = &off_4677AC0;
    *(p + 257) = &off_4677DF0;
  }
  return p;
}


// CDOTA_Wisp_Spirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1079, @0x0000000002d33850, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Wisp_Spirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Wisp_Spirit::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Wisp_Spirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1079, @0x0000000002d35300, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Wisp_Spirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Wisp_Spirit::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Wisp_Spirit::GetEntityClassInternal  (line 1079, @0x0000000002d4e9d0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CDOTA_BaseNPC::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "npc_dota_wisp_spirit", "CDOTA_Wisp_Spirit"
// globals: `guard variable for'CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass, CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Wisp_Spirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Wisp_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_Wisp_SpiritClassInfo, CDOTA_Wisp_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_Wisp_SpiritClassInfo
CEntityClass *__cdecl CDOTA_Wisp_Spirit::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass) != 0 )
  {
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_designerName.u.m_Id = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_AllHelpers.m_Size = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_classInputs.m_Size = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_classOutputs.m_Size = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_hNetworkSerializer = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_pBaseClassInfo = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_pClassInfo = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_flags = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_nAllHelpersFlags = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_pScriptClassDesc = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_pInputs = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_nInputCount = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_pOutputs = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_nOutputCount = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_pGameClass = 0;
    CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass._vptr_CEntityClass = off_4676AD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass);
    __cxa_atexit(
      CDOTA_Wisp_Spirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Wisp_SpiritClass != 0 )
    return &CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass;
  if ( `guard variable for'CDOTA_Wisp_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_Wisp_SpiritClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Wisp_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_Wisp_SpiritClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Wisp_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_Wisp_SpiritClassInfo,
      "CDOTA_Wisp_Spirit",
      "npc_dota_wisp_spirit",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Wisp_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_Wisp_SpiritClassInfo);
  }
  CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_pClassInfo = &CDOTA_Wisp_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_Wisp_SpiritClassInfo;
  CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_pBaseClassInfo = CDOTA_Wisp_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_Wisp_SpiritClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Wisp_SpiritClass = &CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass;
  CDOTA_Wisp_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_Wisp_SpiritClassInfo.m_pClass = &CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass;
  CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_Wisp_SpiritClass->m_pComponentOverrides = 0;
  return &CDOTA_Wisp_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_Wisp_SpiritClass;
}


// CDOTA_Wisp_Spirit::IsPartOfFOWSystem  (line 1084, @0x0000000002d21820, libserver.so)
bool __fastcall CDOTA_Wisp_Spirit::IsPartOfFOWSystem(CDOTA_Wisp_Spirit *const this)
{
  return 1;
}


// CDOTA_Wisp_Spirit::StudioFrameAdvance  (line 1092, @0x0000000002d21830, libserver.so)
void __fastcall CDOTA_Wisp_Spirit::StudioFrameAdvance(CDOTA_Wisp_Spirit *const this)
{
  ;
}


// CDOTA_Wisp_Spirit::DispatchAnimEvents  (line 1093, @0x0000000002d21840, libserver.so)
void __fastcall CDOTA_Wisp_Spirit::DispatchAnimEvents(CDOTA_Wisp_Spirit *const this, CBaseAnimating *eventHandler)
{
  ;
}


// CDOTA_Wisp_Spirit::ShouldTransmit  (line 1100, @0x0000000002cd1fa0, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTA_BaseNPC::ShouldTransmit
int __fastcall CDOTA_Wisp_Spirit::ShouldTransmit(CDOTA_Wisp_Spirit *const this, const CGameCheckTransmitInfo *pInfo)
{
  int ShouldTransmit; // eax
  int v5; // edx

  ShouldTransmit = CDOTA_BaseNPC::ShouldTransmit(this, pInfo);
  v5 = 4;
  if ( pInfo->m_nRecipientTeamNumber != this->m_iTeamNum.m_Value )
    return ShouldTransmit;
  return v5;
}


// CDOTA_Wisp_Spirit::YouForgotToImplementOrDeclareServerClass  (line 1113, @0x0000000002ccb600, libserver.so)
int __fastcall CDOTA_Wisp_Spirit::YouForgotToImplementOrDeclareServerClass(CDOTA_Wisp_Spirit *const this)
{
  return 0;
}


// CDOTA_Wisp_Spirit::GetServerClass  (line 1113, @0x0000000002cddd70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Wisp_Spirit::GetServerClass(CDOTA_Wisp_Spirit *const this)
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


// CDOTA_Wisp_Spirit::Spawn  (line 1151, @0x0000000002cd1fd0, libserver.so)  // inlines: AddSolidFlags, SetSolid
// calls: CDOTA_BaseNPC::Spawn, CBaseModelEntity::SetModel, CCollisionProperty::SetSolidFlags, CBaseEntity::SetMoveType, CBaseAnimating::UseClientSideAnimation
// strings: "models/development/invisiblebox.vmdl"
void __fastcall CDOTA_Wisp_Spirit::Spawn(CDOTA_Wisp_Spirit *const this, const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC::Spawn(this, pKeyValues);
  CBaseModelEntity::SetModel(this, "models/development/invisiblebox.vmdl");
  (*(this->m_Collision._vptr_ICollideable + 26))(&this->m_Collision, 2);
  CCollisionProperty::SetSolidFlags(&this->m_Collision, this->m_Collision.m_usSolidFlags.m_Value | 1);
  CBaseEntity::SetMoveType(this, MoveType_t::MOVETYPE_NONE, MoveCollide_t::MOVECOLLIDE_DEFAULT);
  CBaseAnimating::UseClientSideAnimation(this, 1);
}


// CDOTA_Wisp_Spirit::OnSaveState  (line 1174, @0x0000000002ccb610, libserver.so)
bool __fastcall CDOTA_Wisp_Spirit::OnSaveState(CDOTA_Wisp_Spirit *const this, KeyValues *pKV)
{
  return 0;
}


// CDOTA_Ability_Wisp_Spirits::~CDOTA_Ability_Wisp_Spirits  (line 1183, @0x0000000002d331c0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<sSpiritDef, int>::Purge
void __fastcall CDOTA_Ability_Wisp_Spirits::~CDOTA_Ability_Wisp_Spirits(CDOTA_Ability_Wisp_Spirits *const this)
{
  bool v2; // zf
  CUtlVectorBase<sSpiritDef,CUtlMemory<sSpiritDef,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_SpiritDefs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_4677ED0;
  this->m_SpiritDefs.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_SpiritDefs.m_Memory,
        CUtlMemory<sSpiritDef,int>::Purge(&this->m_SpiritDefs.m_Memory),
        (this->m_SpiritDefs.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<sSpiritDef,int>::Purge(p_m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_Wisp_Spirits::~CDOTA_Ability_Wisp_Spirits  (line 1183, @0x0000000002d333f0, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Ability_Wisp_Spirits, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<sSpiritDef, int>::Purge
void __fastcall CDOTA_Ability_Wisp_Spirits::~CDOTA_Ability_Wisp_Spirits(CDOTA_Ability_Wisp_Spirits *const this)
{
  bool v2; // zf
  CUtlVectorBase<sSpiritDef,CUtlMemory<sSpiritDef,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_SpiritDefs.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_IHandleEntity = &off_4677ED0;
  this->m_SpiritDefs.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_SpiritDefs.m_Memory;
    CUtlMemory<sSpiritDef,int>::Purge(&this->m_SpiritDefs.m_Memory);
    if ( (this->m_SpiritDefs.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<sSpiritDef,int>::Purge(p_m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Wisp_Spirits::Schema_DynamicBinding  (line 1185, @0x0000000002d21850, libserver.so)
// globals: CDOTA_Ability_Wisp_Spirits::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Wisp_Spirits::Schema_DynamicBinding(
        const CDOTA_Ability_Wisp_Spirits *const this)
{
  return CDOTA_Ability_Wisp_Spirits::s_pSchemaBinding;
}


// CDOTA_Ability_Wisp_Spirits::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1185, @0x0000000002d21860, libserver.so)
// globals: CDOTA_Ability_Wisp_Spirits::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Wisp_Spirits::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Wisp_Spirits::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Wisp_Spirits::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Wisp_Spirits::CEntityInstanceEntityClass::DestructInstance  (line 1185, @0x0000000002d21870, libserver.so)  // inlines: Destruct<CDOTA_Ability_Wisp_Spirits>
void __fastcall CDOTA_Ability_Wisp_Spirits::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Wisp_Spirits::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Wisp_Spirits::CEntityInstanceEntityClass::FreeInstance  (line 1185, @0x0000000002d21890, libserver.so)
void __fastcall CDOTA_Ability_Wisp_Spirits::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Wisp_Spirits::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Wisp_Spirits::CEntityInstanceEntityClass::CanAllocate  (line 1185, @0x0000000002d218b0, libserver.so)
bool __fastcall CDOTA_Ability_Wisp_Spirits::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Wisp_Spirits::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Wisp_Spirits::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1185, @0x0000000002d218c0, libserver.so)
// globals: CDOTA_Ability_Wisp_Spirits::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Wisp_Spirits::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Wisp_Spirits::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Wisp_Spirits::s_pSchemaBinding;
}


// CDOTA_Ability_Wisp_Spirits::CEntityInstanceEntityClass::AllocateInstance  (line 1185, @0x0000000002d25910, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Wisp_Spirits::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Wisp_Spirits::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 944);
  memset(v1, 0, 0x3B0u);
  return v1;
}


// CDOTA_Ability_Wisp_Spirits::CEntityInstanceEntityClass::ConstructInstance  (line 1185, @0x0000000002d322a0, libserver.so)  // inlines: CDOTA_Ability_Wisp_Spirits, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_Wisp_Spirits>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Wisp_Spirits::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Wisp_Spirits::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = 0;
    *p = &off_4677ED0;
    *(p + 115) = 0;
    *(p + 232) = 0;
    *(p + 233) = 0;
  }
  return p;
}


// CDOTA_Ability_Wisp_Spirits::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1185, @0x0000000002d350d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Wisp_Spirits::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Wisp_Spirits::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Wisp_Spirits::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1185, @0x0000000002d350f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Wisp_Spirits::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Wisp_Spirits::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Wisp_Spirits::GetEntityClassInternal  (line 1185, @0x0000000002d4c4f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "CDOTA_Ability_Wisp_Spirits"
// globals: `guard variable for'CDOTA_Ability_Wisp_Spirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_SpiritsClass, CDOTA_Ability_Wisp_Spirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_SpiritsClass, __dso_handle, CDOTA_Ability_Wisp_Spirits::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Wisp_Spirits::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_SpiritsClassInfo, CDOTA_Ability_Wisp_Spirits::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_SpiritsClassInfo
CEntityClass *__cdecl CDOTA_Ability_Wisp_Spirits::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Wisp_Spirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_SpiritsClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Wisp_Spirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_SpiritsClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Wisp_Spirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_SpiritsClass);
    CDOTA_Ability_Wisp_Spirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_SpiritsClass._vptr_CEntityClass = off_4677E50;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Wisp_Spirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_SpiritsClass);
    __cxa_atexit(
      CDOTA_Ability_Wisp_Spirits::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Wisp_Spirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_SpiritsClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Wisp_SpiritsClass != 0 )
    return &CDOTA_Ability_Wisp_Spirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_SpiritsClass;
  if ( `guard variable for'CDOTA_Ability_Wisp_Spirits::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_SpiritsClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Wisp_Spirits::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_SpiritsClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Wisp_Spirits::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_SpiritsClassInfo,
      "CDOTA_Ability_Wisp_Spirits",
      "wisp_spirits",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Wisp_Spirits::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_SpiritsClassInfo);
  }
  CDOTA_Ability_Wisp_Spirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_SpiritsClass.m_pClassInfo = &CDOTA_Ability_Wisp_Spirits::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_SpiritsClassInfo;
  CDOTA_Ability_Wisp_Spirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_SpiritsClass.m_pBaseClassInfo = CDOTA_Ability_Wisp_Spirits::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_SpiritsClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Wisp_SpiritsClass = &CDOTA_Ability_Wisp_Spirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_SpiritsClass;
  CDOTA_Ability_Wisp_Spirits::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_SpiritsClassInfo.m_pClass = &CDOTA_Ability_Wisp_Spirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_SpiritsClass;
  CDOTA_Ability_Wisp_Spirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_SpiritsClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Wisp_SpiritsClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Wisp_Spirits::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_SpiritsClass;
}


// CDOTA_Ability_Wisp_Spirits::GetAssociatedSecondaryAbilities  (line 1198, @0x0000000002d218d0, libserver.so)
// strings: "wisp_spirits_in;wisp_spirits_out"
const char *__fastcall CDOTA_Ability_Wisp_Spirits::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Wisp_Spirits *const this)
{
  return "wisp_spirits_in;wisp_spirits_out";
}


// CDOTA_Ability_Wisp_Spirits::YouForgotToImplementOrDeclareServerClass  (line 1207, @0x0000000002ccb620, libserver.so)
int __fastcall CDOTA_Ability_Wisp_Spirits::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Wisp_Spirits *const this)
{
  return 0;
}


// CDOTA_Ability_Wisp_Spirits::GetServerClass  (line 1207, @0x0000000002cddcf0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Wisp_Spirits::GetServerClass(CDOTA_Ability_Wisp_Spirits *const this)
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


// CDOTA_Ability_Wisp_Spirits::UpdateOnRemove  (line 1217, @0x0000000002cd6870, libserver.so)
// calls: CDOTABaseAbility::UpdateOnRemove, UTIL_Remove
void __fastcall CDOTA_Ability_Wisp_Spirits::UpdateOnRemove(CDOTA_Ability_Wisp_Spirits *const this)
{
  __int64 v2; // r12
  int v3; // ebx
  CDOTA_BaseNPC *pSpirit; // rdi

  v2 = 0;
  v3 = 0;
  CDOTABaseAbility::UpdateOnRemove(this);
  if ( this->m_SpiritDefs.m_Size > 0 )
  {
    do
    {
      ++v3;
      pSpirit = this->m_SpiritDefs.m_Memory.m_pMemory[v2++].pSpirit;
      UTIL_Remove(pSpirit);
    }
    while ( this->m_SpiritDefs.m_Size > v3 );
  }
}


// CDOTA_Ability_Wisp_Spirits::Spawn  (line 1228, @0x0000000002d1a0d0, libserver.so)  // inlines: AddToTail, CopyConstruct<sSpiritDef>, Element, GetParent, GetTeamNumber, GrowMemory, NetworkStateChanged, Set, SetBlockCreepSpawn, SetShouldDoFlyHeightVisual, ToDOTABaseNPC, operator=<bool>, operator[]
// calls: CDOTABaseAbility::Spawn, CGameSceneNode::GetOwnerEntity, KeyValues::KeyValues, CDOTABaseAbility::GetCaster, DOTA_CreateUnitByName, CBaseEntity::AddEffects, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CUtlMemory<sSpiritDef, int>::Grow, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_wisp_spirit_invulnerable", "npc_dota_wisp_spirit"
void __fastcall CDOTA_Ability_Wisp_Spirits::Spawn(
        CDOTA_Ability_Wisp_Spirits *const this,
        const CEntityKeyValues *pKeyValues)
{
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  int i; // r14d
  int m_Value; // r13d
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *UnitByName; // rax
  CDOTA_BaseNPC *v10; // r12
  CDOTA_BaseNPC *v11; // rax
  bool v12; // zf
  __int64 m_Size; // r13
  int v14; // eax
  __int64 v15; // r13
  sSpiritDef *v16; // r13
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  CDOTABaseAbility::Spawn(this, pKeyValues);
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
  {
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    if ( OwnerEntity != 0 && OwnerEntity->m_bIsDOTANPC )
    {
      for ( i = 5; i != 0; --i )
      {
        KeyValues::KeyValues(&kv, "modifier_wisp_spirit_invulnerable");
        m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
        Caster = CDOTABaseAbility::GetCaster(this);
        v8 = CDOTABaseAbility::GetCaster(this);
        UnitByName = DOTA_CreateUnitByName("npc_dota_wisp_spirit", &vec3_origin, 0, v8, Caster, m_Value);
        v10 = UnitByName;
        if ( UnitByName != 0 )
        {
          CBaseEntity::AddEffects(UnitByName, 32);
          v11 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(v10, v11, this, "modifier_wisp_spirit_invulnerable", &kv, 0);
          v12 = !v10->m_bShouldDoFlyHeightVisual.m_Value;
          v10->m_bBlocksCreepSpawn = 0;
          if ( !v12 )
          {
            (*(v10->_vptr_IHandleEntity + 22))(v10, 4188, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            v10->m_bShouldDoFlyHeightVisual.m_Value = 0;
          }
        }
        m_Size = this->m_SpiritDefs.m_Size;
        v14 = this->m_SpiritDefs.m_Size;
        if ( m_Size == this->m_SpiritDefs.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<sSpiritDef,int>::Grow(&this->m_SpiritDefs.m_Memory, 1);
          v14 = this->m_SpiritDefs.m_Size;
        }
        v15 = m_Size;
        v12 = &this->m_SpiritDefs.m_Memory.m_pMemory[v15] == 0;
        v16 = &this->m_SpiritDefs.m_Memory.m_pMemory[v15];
        this->m_SpiritDefs.m_Size = v14 + 1;
        if ( !v12 )
        {
          v16->pSpirit = v10;
          v16->nSpiritFXIndex = -1;
          v16->nSpiritState = 0;
        }
        KeyValues::~KeyValues(&kv);
      }
    }
  }
}


// CDOTA_Ability_Wisp_Spirits::OnSpellStart  (line 1259, @0x0000000002cccb50, libserver.so)
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_wisp_spirits", "Hero_Wisp.Spirits.Cast", "Hero_Wisp.Spirits.Loop"
void __fastcall CDOTA_Ability_Wisp_Spirits::OnSpellStart(CDOTA_Ability_Wisp_Spirits *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-28h]

  this->m_nWispDirection = 0;
  v8 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_wisp_spirits");
  CDOTABaseAbility::GetDuration(this);
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_wisp_spirits", &kv, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Wisp.Spirits.Cast", v5);
  v6 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(2, "Hero_Wisp.Spirits.Loop", v6);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Wisp_Spirits::OnUpgrade  (line 1275, @0x0000000002ccf280, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "wisp_spirits_out", "wisp_spirits_in"
void __fastcall CDOTA_Ability_Wisp_Spirits::OnUpgrade(CDOTA_Ability_Wisp_Spirits *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTABaseAbility *v5; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "wisp_spirits_out", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value == 0 )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  v4 = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTA_BaseNPC::FindAbilityByName(v4, "wisp_spirits_in", 0);
  if ( v5 != 0 && v5->m_iLevel.m_Value == 0 )
    CDOTABaseAbility::UpgradeAbility(v5, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Wisp_Spirits::OnUnStolen  (line 1295, @0x0000000002ccc020, libserver.so)
// calls: CDOTABaseAbility::OnUnStolen, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_wisp_spirits"
void __fastcall CDOTA_Ability_Wisp_Spirits::OnUnStolen(CDOTA_Ability_Wisp_Spirits *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  CDOTABaseAbility::OnUnStolen(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_wisp_spirits");
}


// CDOTA_Ability_Wisp_Spirits::GetAbilityDamageToTargetOverInterval  (line 1306, @0x0000000002cf6a10, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Wisp_Spirits::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Wisp_Spirits *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  float LevelSpecialValue; // [rsp-1Ch] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "hero_damage", -1, 0);
    return ((LevelSpecialValue * 5.0) * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Ability_Wisp_Empty1::~CDOTA_Ability_Wisp_Empty1  (line 1320, @0x0000000002d2ca10, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Wisp_Empty1::~CDOTA_Ability_Wisp_Empty1(CDOTA_Ability_Wisp_Empty1 *const this)
{
  this->_vptr_IHandleEntity = &off_46789D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Wisp_Empty1::~CDOTA_Ability_Wisp_Empty1  (line 1320, @0x0000000002d2ca30, libserver.so)  // inlines: ~CDOTA_Ability_Wisp_Empty1
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Wisp_Empty1::~CDOTA_Ability_Wisp_Empty1(CDOTA_Ability_Wisp_Empty1 *const this)
{
  this->_vptr_IHandleEntity = &off_46789D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Wisp_Empty1::Schema_DynamicBinding  (line 1322, @0x0000000002d218e0, libserver.so)
// globals: CDOTA_Ability_Wisp_Empty1::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Wisp_Empty1::Schema_DynamicBinding(
        const CDOTA_Ability_Wisp_Empty1 *const this)
{
  return CDOTA_Ability_Wisp_Empty1::s_pSchemaBinding;
}


// CDOTA_Ability_Wisp_Empty1::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1322, @0x0000000002d218f0, libserver.so)
// globals: CDOTA_Ability_Wisp_Empty1::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Wisp_Empty1::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Wisp_Empty1::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Wisp_Empty1::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Wisp_Empty1::CEntityInstanceEntityClass::DestructInstance  (line 1322, @0x0000000002d21900, libserver.so)  // inlines: Destruct<CDOTA_Ability_Wisp_Empty1>
void __fastcall CDOTA_Ability_Wisp_Empty1::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Wisp_Empty1::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Wisp_Empty1::CEntityInstanceEntityClass::FreeInstance  (line 1322, @0x0000000002d21920, libserver.so)
void __fastcall CDOTA_Ability_Wisp_Empty1::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Wisp_Empty1::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Wisp_Empty1::CEntityInstanceEntityClass::CanAllocate  (line 1322, @0x0000000002d21940, libserver.so)
bool __fastcall CDOTA_Ability_Wisp_Empty1::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Wisp_Empty1::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Wisp_Empty1::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1322, @0x0000000002d21950, libserver.so)
// globals: CDOTA_Ability_Wisp_Empty1::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Wisp_Empty1::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Wisp_Empty1::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Wisp_Empty1::s_pSchemaBinding;
}


// CDOTA_Ability_Wisp_Empty1::CEntityInstanceEntityClass::AllocateInstance  (line 1322, @0x0000000002d25950, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Wisp_Empty1::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Wisp_Empty1::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Wisp_Empty1::CEntityInstanceEntityClass::ConstructInstance  (line 1322, @0x0000000002d298e0, libserver.so)  // inlines: CDOTA_Ability_Wisp_Empty1, Construct<CDOTA_Ability_Wisp_Empty1>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Wisp_Empty1::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Wisp_Empty1::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_46789D0;
  }
  return p;
}


// CDOTA_Ability_Wisp_Empty1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1322, @0x0000000002d35120, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Wisp_Empty1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Wisp_Empty1::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Wisp_Empty1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1322, @0x0000000002d35140, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Wisp_Empty1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Wisp_Empty1::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Wisp_Empty1::GetEntityClassInternal  (line 1322, @0x0000000002d4c640, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "wisp_empty1", "CDOTA_Ability_Wisp_Empty1"
// globals: `guard variable for'CDOTA_Ability_Wisp_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Empty1Class, CDOTA_Ability_Wisp_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Empty1Class, __dso_handle, CDOTA_Ability_Wisp_Empty1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Wisp_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Empty1ClassInfo, CDOTA_Ability_Wisp_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Empty1ClassInfo
CEntityClass *__cdecl CDOTA_Ability_Wisp_Empty1::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Wisp_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Empty1Class == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Wisp_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Empty1Class) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Wisp_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Empty1Class);
    CDOTA_Ability_Wisp_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Empty1Class._vptr_CEntityClass = off_4678950;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Wisp_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Empty1Class);
    __cxa_atexit(
      CDOTA_Ability_Wisp_Empty1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Wisp_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Empty1Class,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Wisp_Empty1Class != 0 )
    return &CDOTA_Ability_Wisp_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Empty1Class;
  if ( `guard variable for'CDOTA_Ability_Wisp_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Empty1ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Wisp_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Empty1ClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Wisp_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Empty1ClassInfo,
      "CDOTA_Ability_Wisp_Empty1",
      "wisp_empty1",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Wisp_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Empty1ClassInfo);
  }
  CDOTA_Ability_Wisp_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Empty1Class.m_pClassInfo = &CDOTA_Ability_Wisp_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Empty1ClassInfo;
  CDOTA_Ability_Wisp_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Empty1Class.m_pBaseClassInfo = CDOTA_Ability_Wisp_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Empty1ClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Wisp_Empty1Class = &CDOTA_Ability_Wisp_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Empty1Class;
  CDOTA_Ability_Wisp_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Empty1ClassInfo.m_pClass = &CDOTA_Ability_Wisp_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Empty1Class;
  CDOTA_Ability_Wisp_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Empty1Class.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Wisp_Empty1Class->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Wisp_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Empty1Class;
}


// CDOTA_Ability_Wisp_Empty2::~CDOTA_Ability_Wisp_Empty2  (line 1334, @0x0000000002d2ca60, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Wisp_Empty2::~CDOTA_Ability_Wisp_Empty2(CDOTA_Ability_Wisp_Empty2 *const this)
{
  this->_vptr_IHandleEntity = &off_46794D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Wisp_Empty2::~CDOTA_Ability_Wisp_Empty2  (line 1334, @0x0000000002d2ca80, libserver.so)  // inlines: ~CDOTA_Ability_Wisp_Empty2
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Wisp_Empty2::~CDOTA_Ability_Wisp_Empty2(CDOTA_Ability_Wisp_Empty2 *const this)
{
  this->_vptr_IHandleEntity = &off_46794D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Wisp_Empty2::Schema_DynamicBinding  (line 1336, @0x0000000002d21960, libserver.so)
// globals: CDOTA_Ability_Wisp_Empty2::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Wisp_Empty2::Schema_DynamicBinding(
        const CDOTA_Ability_Wisp_Empty2 *const this)
{
  return CDOTA_Ability_Wisp_Empty2::s_pSchemaBinding;
}


// CDOTA_Ability_Wisp_Empty2::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1336, @0x0000000002d21970, libserver.so)
// globals: CDOTA_Ability_Wisp_Empty2::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Wisp_Empty2::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Wisp_Empty2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Wisp_Empty2::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Wisp_Empty2::CEntityInstanceEntityClass::DestructInstance  (line 1336, @0x0000000002d21980, libserver.so)  // inlines: Destruct<CDOTA_Ability_Wisp_Empty2>
void __fastcall CDOTA_Ability_Wisp_Empty2::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Wisp_Empty2::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Wisp_Empty2::CEntityInstanceEntityClass::FreeInstance  (line 1336, @0x0000000002d219a0, libserver.so)
void __fastcall CDOTA_Ability_Wisp_Empty2::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Wisp_Empty2::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Wisp_Empty2::CEntityInstanceEntityClass::CanAllocate  (line 1336, @0x0000000002d219c0, libserver.so)
bool __fastcall CDOTA_Ability_Wisp_Empty2::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Wisp_Empty2::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Wisp_Empty2::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1336, @0x0000000002d219d0, libserver.so)
// globals: CDOTA_Ability_Wisp_Empty2::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Wisp_Empty2::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Wisp_Empty2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Wisp_Empty2::s_pSchemaBinding;
}


// CDOTA_Ability_Wisp_Empty2::CEntityInstanceEntityClass::AllocateInstance  (line 1336, @0x0000000002d25990, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Wisp_Empty2::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Wisp_Empty2::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Wisp_Empty2::CEntityInstanceEntityClass::ConstructInstance  (line 1336, @0x0000000002d29910, libserver.so)  // inlines: CDOTA_Ability_Wisp_Empty2, Construct<CDOTA_Ability_Wisp_Empty2>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Wisp_Empty2::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Wisp_Empty2::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_46794D0;
  }
  return p;
}


// CDOTA_Ability_Wisp_Empty2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1336, @0x0000000002d35170, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Wisp_Empty2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Wisp_Empty2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Wisp_Empty2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1336, @0x0000000002d35190, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Wisp_Empty2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Wisp_Empty2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Wisp_Empty2::GetEntityClassInternal  (line 1336, @0x0000000002d4c790, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "wisp_empty2", "CDOTA_Ability_Wisp_Empty2"
// globals: `guard variable for'CDOTA_Ability_Wisp_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Empty2Class, CDOTA_Ability_Wisp_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Empty2Class, __dso_handle, CDOTA_Ability_Wisp_Empty2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Wisp_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Empty2ClassInfo, CDOTA_Ability_Wisp_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Empty2ClassInfo
CEntityClass *__cdecl CDOTA_Ability_Wisp_Empty2::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Wisp_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Empty2Class == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Wisp_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Empty2Class) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Wisp_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Empty2Class);
    CDOTA_Ability_Wisp_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Empty2Class._vptr_CEntityClass = off_4679450;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Wisp_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Empty2Class);
    __cxa_atexit(
      CDOTA_Ability_Wisp_Empty2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Wisp_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Empty2Class,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Wisp_Empty2Class != 0 )
    return &CDOTA_Ability_Wisp_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Empty2Class;
  if ( `guard variable for'CDOTA_Ability_Wisp_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Empty2ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Wisp_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Empty2ClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Wisp_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Empty2ClassInfo,
      "CDOTA_Ability_Wisp_Empty2",
      "wisp_empty2",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Wisp_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Empty2ClassInfo);
  }
  CDOTA_Ability_Wisp_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Empty2Class.m_pClassInfo = &CDOTA_Ability_Wisp_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Empty2ClassInfo;
  CDOTA_Ability_Wisp_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Empty2Class.m_pBaseClassInfo = CDOTA_Ability_Wisp_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Empty2ClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Wisp_Empty2Class = &CDOTA_Ability_Wisp_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Empty2Class;
  CDOTA_Ability_Wisp_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Empty2ClassInfo.m_pClass = &CDOTA_Ability_Wisp_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Empty2Class;
  CDOTA_Ability_Wisp_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Empty2Class.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Wisp_Empty2Class->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Wisp_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Empty2Class;
}


// CDOTA_Ability_Wisp_Spirits_In::~CDOTA_Ability_Wisp_Spirits_In  (line 1348, @0x0000000002d2cab0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Wisp_Spirits_In::~CDOTA_Ability_Wisp_Spirits_In(
        CDOTA_Ability_Wisp_Spirits_In *const this)
{
  this->_vptr_IHandleEntity = &off_4679FD0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Wisp_Spirits_In::~CDOTA_Ability_Wisp_Spirits_In  (line 1348, @0x0000000002d2cad0, libserver.so)  // inlines: ~CDOTA_Ability_Wisp_Spirits_In
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Wisp_Spirits_In::~CDOTA_Ability_Wisp_Spirits_In(
        CDOTA_Ability_Wisp_Spirits_In *const this)
{
  this->_vptr_IHandleEntity = &off_4679FD0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Wisp_Spirits_In::Schema_DynamicBinding  (line 1350, @0x0000000002d219e0, libserver.so)
// globals: CDOTA_Ability_Wisp_Spirits_In::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Wisp_Spirits_In::Schema_DynamicBinding(
        const CDOTA_Ability_Wisp_Spirits_In *const this)
{
  return CDOTA_Ability_Wisp_Spirits_In::s_pSchemaBinding;
}


// CDOTA_Ability_Wisp_Spirits_In::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1350, @0x0000000002d219f0, libserver.so)
// globals: CDOTA_Ability_Wisp_Spirits_In::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Wisp_Spirits_In::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Wisp_Spirits_In::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Wisp_Spirits_In::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Wisp_Spirits_In::CEntityInstanceEntityClass::DestructInstance  (line 1350, @0x0000000002d21a00, libserver.so)  // inlines: Destruct<CDOTA_Ability_Wisp_Spirits_In>
void __fastcall CDOTA_Ability_Wisp_Spirits_In::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Wisp_Spirits_In::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Wisp_Spirits_In::CEntityInstanceEntityClass::FreeInstance  (line 1350, @0x0000000002d21a20, libserver.so)
void __fastcall CDOTA_Ability_Wisp_Spirits_In::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Wisp_Spirits_In::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Wisp_Spirits_In::CEntityInstanceEntityClass::CanAllocate  (line 1350, @0x0000000002d21a40, libserver.so)
bool __fastcall CDOTA_Ability_Wisp_Spirits_In::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Wisp_Spirits_In::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Wisp_Spirits_In::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1350, @0x0000000002d21a50, libserver.so)
// globals: CDOTA_Ability_Wisp_Spirits_In::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Wisp_Spirits_In::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Wisp_Spirits_In::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Wisp_Spirits_In::s_pSchemaBinding;
}


// CDOTA_Ability_Wisp_Spirits_In::CEntityInstanceEntityClass::AllocateInstance  (line 1350, @0x0000000002d259d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Wisp_Spirits_In::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Wisp_Spirits_In::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Wisp_Spirits_In::CEntityInstanceEntityClass::ConstructInstance  (line 1350, @0x0000000002d29940, libserver.so)  // inlines: CDOTA_Ability_Wisp_Spirits_In, Construct<CDOTA_Ability_Wisp_Spirits_In>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Wisp_Spirits_In::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Wisp_Spirits_In::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4679FD0;
  }
  return p;
}


// CDOTA_Ability_Wisp_Spirits_In::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1350, @0x0000000002d351c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Wisp_Spirits_In::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Wisp_Spirits_In::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Wisp_Spirits_In::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1350, @0x0000000002d351e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Wisp_Spirits_In::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Wisp_Spirits_In::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Wisp_Spirits_In::GetEntityClassInternal  (line 1350, @0x0000000002d4c8e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "wisp_spirits_in", "CDOTA_Ability_Wisp_Spirits_In"
// globals: `guard variable for'CDOTA_Ability_Wisp_Spirits_In::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_InClass, CDOTA_Ability_Wisp_Spirits_In::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_InClass, __dso_handle, CDOTA_Ability_Wisp_Spirits_In::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Wisp_Spirits_In::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Spirits_InClassInfo, CDOTA_Ability_Wisp_Spirits_In::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Spirits_InClassInfo
CEntityClass *__cdecl CDOTA_Ability_Wisp_Spirits_In::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Wisp_Spirits_In::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_InClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Wisp_Spirits_In::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_InClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Wisp_Spirits_In::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_InClass);
    CDOTA_Ability_Wisp_Spirits_In::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_InClass._vptr_CEntityClass = off_4679F50;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Wisp_Spirits_In::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_InClass);
    __cxa_atexit(
      CDOTA_Ability_Wisp_Spirits_In::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Wisp_Spirits_In::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_InClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Wisp_Spirits_InClass != 0 )
    return &CDOTA_Ability_Wisp_Spirits_In::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_InClass;
  if ( `guard variable for'CDOTA_Ability_Wisp_Spirits_In::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Spirits_InClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Wisp_Spirits_In::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Spirits_InClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Wisp_Spirits_In::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Spirits_InClassInfo,
      "CDOTA_Ability_Wisp_Spirits_In",
      "wisp_spirits_in",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Wisp_Spirits_In::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Spirits_InClassInfo);
  }
  CDOTA_Ability_Wisp_Spirits_In::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_InClass.m_pClassInfo = &CDOTA_Ability_Wisp_Spirits_In::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Spirits_InClassInfo;
  CDOTA_Ability_Wisp_Spirits_In::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_InClass.m_pBaseClassInfo = CDOTA_Ability_Wisp_Spirits_In::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Spirits_InClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Wisp_Spirits_InClass = &CDOTA_Ability_Wisp_Spirits_In::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_InClass;
  CDOTA_Ability_Wisp_Spirits_In::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Spirits_InClassInfo.m_pClass = &CDOTA_Ability_Wisp_Spirits_In::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_InClass;
  CDOTA_Ability_Wisp_Spirits_In::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_InClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Wisp_Spirits_InClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Wisp_Spirits_In::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_InClass;
}


// CDOTA_Ability_Wisp_Spirits_In::ProcsMagicStick  (line 1355, @0x0000000002d21a60, libserver.so)
bool __fastcall CDOTA_Ability_Wisp_Spirits_In::ProcsMagicStick(CDOTA_Ability_Wisp_Spirits_In *const this)
{
  return 0;
}


// CDOTA_Ability_Wisp_Spirits_In::IsHiddenWhenStolen  (line 1357, @0x0000000002d21a70, libserver.so)
bool __fastcall CDOTA_Ability_Wisp_Spirits_In::IsHiddenWhenStolen(CDOTA_Ability_Wisp_Spirits_In *const this)
{
  return 1;
}


// CDOTA_Ability_Wisp_Spirits_In::IsStealable  (line 1358, @0x0000000002d21a80, libserver.so)
bool __fastcall CDOTA_Ability_Wisp_Spirits_In::IsStealable(CDOTA_Ability_Wisp_Spirits_In *const this)
{
  return 0;
}


// CDOTA_Ability_Wisp_Spirits_In::OnUpgrade  (line 1365, @0x0000000002ccf310, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "wisp_spirits_out"
void __fastcall CDOTA_Ability_Wisp_Spirits_In::OnUpgrade(CDOTA_Ability_Wisp_Spirits_In *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTABaseAbility *v5; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "wisp_spirits_out", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value == 0 )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  v4 = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTA_BaseNPC::FindAbilityByName(v4, "wisp_spirits", 0);
  if ( v5 != 0 && v5->m_iLevel.m_Value == 0 )
    CDOTABaseAbility::UpgradeAbility(v5, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Wisp_Spirits_In::OnToggle  (line 1385, @0x0000000002ccdfb0, libserver.so)  // inlines: SetSpiritDirection
// calls: CDOTABaseAbility::OnToggle, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName
// strings: "wisp_spirits_out"
void __fastcall CDOTA_Ability_Wisp_Spirits_In::OnToggle(CDOTA_Ability_Wisp_Spirits_In *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v4; // r12
  CDOTA_BaseNPC *v5; // rax
  CDOTABaseAbility *v6; // rax

  CDOTABaseAbility::OnToggle(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "wisp_spirits", 0);
  v4 = AbilityByName;
  if ( AbilityByName != 0 )
  {
    if ( this->m_bToggleState.m_Value )
    {
      v5 = CDOTABaseAbility::GetCaster(this);
      v6 = CDOTA_BaseNPC::FindAbilityByName(v5, "wisp_spirits_out", 0);
      if ( v6 != 0 && v6->m_bToggleState.m_Value )
        (*(v6->_vptr_IHandleEntity + 270))(v6);
      LODWORD(v4[1].m_iszPrivateVScripts.u.m_Id) = -1;
    }
    else
    {
      LODWORD(AbilityByName[1].m_iszPrivateVScripts.u.m_Id) = 0;
    }
  }
}


// CDOTA_Modifier_Wisp_Spirit_Invulnerable::~CDOTA_Modifier_Wisp_Spirit_Invulnerable  (line 1414, @0x0000000002d26330, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Wisp_Spirit_Invulnerable::~CDOTA_Modifier_Wisp_Spirit_Invulnerable(
        CDOTA_Modifier_Wisp_Spirit_Invulnerable *const this)
{
  this->_vptr_CDOTA_Buff = &off_467AA90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Wisp_Spirit_Invulnerable::~CDOTA_Modifier_Wisp_Spirit_Invulnerable  (line 1414, @0x0000000002d26350, libserver.so)  // inlines: ~CDOTA_Modifier_Wisp_Spirit_Invulnerable
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Wisp_Spirit_Invulnerable::~CDOTA_Modifier_Wisp_Spirit_Invulnerable(
        CDOTA_Modifier_Wisp_Spirit_Invulnerable *const this)
{
  this->_vptr_CDOTA_Buff = &off_467AA90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Wisp_Spirit_Invulnerable::IsHidden  (line 1420, @0x0000000002d21a90, libserver.so)
bool __fastcall CDOTA_Modifier_Wisp_Spirit_Invulnerable::IsHidden(CDOTA_Modifier_Wisp_Spirit_Invulnerable *const this)
{
  return 1;
}


// CDOTA_Modifier_Wisp_Spirit_Invulnerable::CheckState  (line 1427, @0x0000000002ccb630, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Wisp_Spirit_Invulnerable::CheckState(
        CDOTA_Modifier_Wisp_Spirit_Invulnerable *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x2904100uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFD6FBEFFLL;
}


// CDOTA_Ability_Wisp_Spirits_Out::~CDOTA_Ability_Wisp_Spirits_Out  (line 1444, @0x0000000002d2cb00, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Wisp_Spirits_Out::~CDOTA_Ability_Wisp_Spirits_Out(
        CDOTA_Ability_Wisp_Spirits_Out *const this)
{
  this->_vptr_IHandleEntity = &off_467ADF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Wisp_Spirits_Out::~CDOTA_Ability_Wisp_Spirits_Out  (line 1444, @0x0000000002d2cb20, libserver.so)  // inlines: ~CDOTA_Ability_Wisp_Spirits_Out
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Wisp_Spirits_Out::~CDOTA_Ability_Wisp_Spirits_Out(
        CDOTA_Ability_Wisp_Spirits_Out *const this)
{
  this->_vptr_IHandleEntity = &off_467ADF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Wisp_Spirits_Out::Schema_DynamicBinding  (line 1446, @0x0000000002d21aa0, libserver.so)
// globals: CDOTA_Ability_Wisp_Spirits_Out::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Wisp_Spirits_Out::Schema_DynamicBinding(
        const CDOTA_Ability_Wisp_Spirits_Out *const this)
{
  return CDOTA_Ability_Wisp_Spirits_Out::s_pSchemaBinding;
}


// CDOTA_Ability_Wisp_Spirits_Out::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1446, @0x0000000002d21ab0, libserver.so)
// globals: CDOTA_Ability_Wisp_Spirits_Out::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Wisp_Spirits_Out::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Wisp_Spirits_Out::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Wisp_Spirits_Out::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Wisp_Spirits_Out::CEntityInstanceEntityClass::DestructInstance  (line 1446, @0x0000000002d21ac0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Wisp_Spirits_Out>
void __fastcall CDOTA_Ability_Wisp_Spirits_Out::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Wisp_Spirits_Out::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Wisp_Spirits_Out::CEntityInstanceEntityClass::FreeInstance  (line 1446, @0x0000000002d21ae0, libserver.so)
void __fastcall CDOTA_Ability_Wisp_Spirits_Out::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Wisp_Spirits_Out::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Wisp_Spirits_Out::CEntityInstanceEntityClass::CanAllocate  (line 1446, @0x0000000002d21b00, libserver.so)
bool __fastcall CDOTA_Ability_Wisp_Spirits_Out::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Wisp_Spirits_Out::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Wisp_Spirits_Out::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1446, @0x0000000002d21b10, libserver.so)
// globals: CDOTA_Ability_Wisp_Spirits_Out::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Wisp_Spirits_Out::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Wisp_Spirits_Out::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Wisp_Spirits_Out::s_pSchemaBinding;
}


// CDOTA_Ability_Wisp_Spirits_Out::CEntityInstanceEntityClass::AllocateInstance  (line 1446, @0x0000000002d25a10, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Wisp_Spirits_Out::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Wisp_Spirits_Out::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Wisp_Spirits_Out::CEntityInstanceEntityClass::ConstructInstance  (line 1446, @0x0000000002d29970, libserver.so)  // inlines: CDOTA_Ability_Wisp_Spirits_Out, Construct<CDOTA_Ability_Wisp_Spirits_Out>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Wisp_Spirits_Out::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Wisp_Spirits_Out::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_467ADF0;
  }
  return p;
}


// CDOTA_Ability_Wisp_Spirits_Out::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1446, @0x0000000002d35210, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Wisp_Spirits_Out::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Wisp_Spirits_Out::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Wisp_Spirits_Out::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1446, @0x0000000002d35230, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Wisp_Spirits_Out::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Wisp_Spirits_Out::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal  (line 1446, @0x0000000002d4f710, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "wisp_spirits_out", "CDOTA_Ability_Wisp_Spirits_Out"
// globals: `guard variable for'CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass, CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Wisp_Spirits_Out::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClassInfo, CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClassInfo
CEntityClass *__cdecl CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass) != 0 )
  {
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_pClassInfo = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_flags = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_pInputs = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_nInputCount = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_pOutputs = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_nOutputCount = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_pGameClass = 0;
    CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass._vptr_CEntityClass = off_467AD70;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass);
    __cxa_atexit(
      CDOTA_Ability_Wisp_Spirits_Out::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Wisp_Spirits_OutClass != 0 )
    return &CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass;
  if ( `guard variable for'CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClassInfo,
      "CDOTA_Ability_Wisp_Spirits_Out",
      "wisp_spirits_out",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClassInfo);
  }
  CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_pClassInfo = &CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClassInfo;
  CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_pBaseClassInfo = CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Wisp_Spirits_OutClass = &CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass;
  CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClassInfo.m_pClass = &CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass;
  CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Wisp_Spirits_OutClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Wisp_Spirits_Out::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_Spirits_OutClass;
}


// CDOTA_Ability_Wisp_Spirits_Out::ProcsMagicStick  (line 1451, @0x0000000002d21b20, libserver.so)
bool __fastcall CDOTA_Ability_Wisp_Spirits_Out::ProcsMagicStick(CDOTA_Ability_Wisp_Spirits_Out *const this)
{
  return 0;
}


// CDOTA_Ability_Wisp_Spirits_Out::IsStealable  (line 1453, @0x0000000002d21b30, libserver.so)
bool __fastcall CDOTA_Ability_Wisp_Spirits_Out::IsStealable(CDOTA_Ability_Wisp_Spirits_Out *const this)
{
  return 0;
}


// CDOTA_Ability_Wisp_Spirits_Out::IsHiddenWhenStolen  (line 1454, @0x0000000002d21b40, libserver.so)
bool __fastcall CDOTA_Ability_Wisp_Spirits_Out::IsHiddenWhenStolen(CDOTA_Ability_Wisp_Spirits_Out *const this)
{
  return 1;
}


// CDOTA_Ability_Wisp_Spirits_Out::OnUpgrade  (line 1461, @0x0000000002ccf3a0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "wisp_spirits_in"
void __fastcall CDOTA_Ability_Wisp_Spirits_Out::OnUpgrade(CDOTA_Ability_Wisp_Spirits_Out *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTABaseAbility *v5; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "wisp_spirits_in", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value == 0 )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  v4 = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTA_BaseNPC::FindAbilityByName(v4, "wisp_spirits", 0);
  if ( v5 != 0 && v5->m_iLevel.m_Value == 0 )
    CDOTABaseAbility::UpgradeAbility(v5, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Wisp_Spirits_Out::OnToggle  (line 1481, @0x0000000002cce050, libserver.so)  // inlines: SetSpiritDirection
// calls: CDOTABaseAbility::OnToggle, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName
// strings: "wisp_spirits_in"
void __fastcall CDOTA_Ability_Wisp_Spirits_Out::OnToggle(CDOTA_Ability_Wisp_Spirits_Out *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v4; // r12
  CDOTA_BaseNPC *v5; // rax
  CDOTABaseAbility *v6; // rax

  CDOTABaseAbility::OnToggle(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "wisp_spirits", 0);
  v4 = AbilityByName;
  if ( AbilityByName != 0 )
  {
    if ( this->m_bToggleState.m_Value )
    {
      v5 = CDOTABaseAbility::GetCaster(this);
      v6 = CDOTA_BaseNPC::FindAbilityByName(v5, "wisp_spirits_in", 0);
      if ( v6 != 0 && v6->m_bToggleState.m_Value )
        (*(v6->_vptr_IHandleEntity + 270))(v6);
      LODWORD(v4[1].m_iszPrivateVScripts.u.m_Id) = 1;
    }
    else
    {
      LODWORD(AbilityByName[1].m_iszPrivateVScripts.u.m_Id) = 0;
    }
  }
}


// CDOTA_Modifier_Wisp_Spirits::~CDOTA_Modifier_Wisp_Spirits  (line 1511, @0x0000000002d32f20, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CDOTA_Modifier_Wisp_Spirits::ImpactRecord_t, int>::Purge, CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Wisp_Spirits::~CDOTA_Modifier_Wisp_Spirits(CDOTA_Modifier_Wisp_Spirits *const this)
{
  CDOTA_Modifier_Wisp_Spirits *v1; // r14
  char *v2; // r13
  CDOTA_Modifier_Wisp_Spirits *v3; // r12
  CDOTA_Modifier_Wisp_Spirits *v4; // rbx
  CUtlMemory<CDOTA_Modifier_Wisp_Spirits::ImpactRecord_t,int> *v5; // rdi

  v1 = (this + 3032);
  v2 = this + 3128;
  v3 = this + 1;
  v4 = this + 1;
  *this = &off_467B8B0;
  do
  {
    while ( 1 )
    {
      *&v2[v4 - v3] = 0;
      if ( (*(v4 - 1) & 0xC0000000) == 0 )
      {
        CUtlMemory<CDOTA_Modifier_Wisp_Spirits::ImpactRecord_t,int>::Purge(v4 - 1);
        if ( (*(v4 - 1) & 0xC0000000) == 0 )
          break;
      }
      v4 = (v4 - 24);
      if ( v1 == v4 )
        goto LABEL_6;
    }
    v5 = (v4 - 16);
    v4 = (v4 - 24);
    CUtlMemory<CDOTA_Modifier_Wisp_Spirits::ImpactRecord_t,int>::Purge(v5);
  }
  while ( v1 != v4 );
LABEL_6:
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Wisp_Spirits::~CDOTA_Modifier_Wisp_Spirits  (line 1511, @0x0000000002d335a0, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Modifier_Wisp_Spirits, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlMemory<CDOTA_Modifier_Wisp_Spirits::ImpactRecord_t, int>::Purge, CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Wisp_Spirits::~CDOTA_Modifier_Wisp_Spirits(CDOTA_Modifier_Wisp_Spirits *const this)
{
  CDOTA_Modifier_Wisp_Spirits *v1; // r14
  char *v2; // r13
  CDOTA_Modifier_Wisp_Spirits *v3; // r12
  CDOTA_Modifier_Wisp_Spirits *v4; // rbx
  CUtlMemory<CDOTA_Modifier_Wisp_Spirits::ImpactRecord_t,int> *v5; // rdi

  v1 = (this + 3032);
  v2 = this + 3128;
  v3 = this + 1;
  v4 = this + 1;
  *this = &off_467B8B0;
  do
  {
    while ( 1 )
    {
      *&v2[v4 - v3] = 0;
      if ( (*(v4 - 1) & 0xC0000000) == 0 )
      {
        CUtlMemory<CDOTA_Modifier_Wisp_Spirits::ImpactRecord_t,int>::Purge(v4 - 1);
        if ( (*(v4 - 1) & 0xC0000000) == 0 )
          break;
      }
      v4 = (v4 - 24);
      if ( v1 == v4 )
        goto LABEL_6;
    }
    v5 = (v4 - 16);
    v4 = (v4 - 24);
    CUtlMemory<CDOTA_Modifier_Wisp_Spirits::ImpactRecord_t,int>::Purge(v5);
  }
  while ( v1 != v4 );
LABEL_6:
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Wisp_Spirits::IsPurgable  (line 1520, @0x0000000002d21b50, libserver.so)
bool __fastcall CDOTA_Modifier_Wisp_Spirits::IsPurgable(CDOTA_Modifier_Wisp_Spirits *const this)
{
  return 0;
}


// CDOTA_Modifier_Wisp_Spirits::OnCreated  (line 1557, @0x0000000002cfa1d0, libserver.so)  // inlines: GetAbilityName, operator[]
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::SwapAbilities, CDOTA_Buff::StartIntervalThink, CDOTA_BaseNPC::GetAbilityByIndex
// strings: "min_range", "max_range", "creep_damage", "hero_hit_radius", "explode_radius", "default_radius" (12 total)
void __fastcall CDOTA_Modifier_Wisp_Spirits::OnCreated(CDOTA_Modifier_Wisp_Spirits *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  CDOTABaseAbility *v10; // rax
  CDOTABaseAbility *v11; // rax
  float v12; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v14; // rax
  CDOTABaseAbility *v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  char *v19; // rcx
  float v20; // xmm1_4
  int m_iAbilityIndex; // r12d
  CDOTA_BaseNPC *v22; // rax
  CDOTABaseAbility *AbilityByIndex; // r12
  const char *v24; // r13
  CDOTA_BaseNPC *v25; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *m_pszAbilityName; // rax
  CDOTA_BaseNPC *v28; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, this + 751, "min_range");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, this + 752, "max_range");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, this + 746, "creep_damage");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, this + 747, "hero_damage");
  v7 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v7, this + 748, "hit_radius");
  v8 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v8, this + 749, "hero_hit_radius");
  v9 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v9, this + 750, "explode_radius");
  v10 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v10, this + 753, "default_radius");
  v11 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v11, this + 756, "spirit_movement_rate");
  v12 = *(this + 753);
  *(this + 754) = 0;
  *(this + 755) = v12;
  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::SwapAbilities(Caster, "wisp_empty1", "wisp_spirits_in", 0, 1);
  v14 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::SwapAbilities(v14, "wisp_empty2", "wisp_spirits_out", 0, 1);
  v15 = CDOTA_Buff::GetAbility(this);
  v17 = 0;
  if ( v15 != 0 )
  {
    do
    {
      v18 = v17;
      v17 += 16;
      v19 = v15[1].m_pEntity + v18;
      *(v19 + 3) = 0;
      *(v19 + 2) = -1;
    }
    while ( v17 != 80 );
  }
  (*(*this + 448LL))(this, v16, v17);
  CDOTA_Buff::StartIntervalThink(this, 0.0, v20);
  if ( CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value )
  {
    m_iAbilityIndex = CDOTA_Buff::GetAbility(this)->m_iAbilityIndex;
    v22 = CDOTA_Buff::GetCaster(this);
    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v22, m_iAbilityIndex + 1);
    if ( AbilityByIndex != 0 )
    {
      v24 = "<NoAbilityName>";
      v25 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::SwapAbilities(v25, "wisp_spirits", "wisp_spirits_in", 0, 1);
      m_pAbilityData = AbilityByIndex->m_pAbilityData;
      if ( m_pAbilityData != 0 )
      {
        m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
        if ( m_pszAbilityName != 0 )
          v24 = m_pszAbilityName;
      }
      v28 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::SwapAbilities(v28, v24, "wisp_spirits_out", 0, 1);
      *(this + 757) = AbilityByIndex->m_iAbilityIndex;
    }
  }
}


// CDOTA_Modifier_Wisp_Spirits::OnRefresh  (line 1610, @0x0000000002d078b0, libserver.so)  // inlines: operator[]
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Modifier_Wisp_Spirits::ExplodeSpirits, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_Buff::StartIntervalThink
// strings: "min_range", "max_range", "creep_damage", "hero_hit_radius", "explode_radius", "default_radius" (7 total)
void __fastcall CDOTA_Modifier_Wisp_Spirits::OnRefresh(CDOTA_Modifier_Wisp_Spirits *const this, KeyValues *pKV)
{
  __int64 v2; // r12
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  CDOTABaseAbility *v10; // rax
  CDOTABaseAbility *v11; // rax
  CDOTABaseAbility *v12; // rax
  float v13; // xmm0_4
  CDOTABaseAbility *v14; // r15
  char *v15; // r13
  int v16; // r14d
  CDOTA_ParticleManager *ParticleManager; // rax
  float v18; // xmm1_4

  v2 = 0;
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, this + 751, "min_range");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, this + 752, "max_range");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, this + 746, "creep_damage");
  v7 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v7, this + 747, "hero_damage");
  v8 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v8, this + 748, "hit_radius");
  v9 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v9, this + 749, "hero_hit_radius");
  v10 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v10, this + 750, "explode_radius");
  v11 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v11, this + 753, "default_radius");
  v12 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v12, this + 756, "spirit_movement_rate");
  CDOTA_Modifier_Wisp_Spirits::ExplodeSpirits(this);
  v13 = *(this + 753);
  *(this + 754) = 0;
  *(this + 755) = v13;
  v14 = CDOTA_Buff::GetAbility(this);
  if ( v14 != 0 )
  {
    do
    {
      v15 = v14[1].m_pEntity + v2;
      v16 = *(v15 + 2);
      *(v15 + 3) = 0;
      if ( v16 != -1 )
      {
        ParticleManager = GetParticleManager();
        CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, v16, 0);
      }
      v2 += 16;
      *(v15 + 2) = -1;
    }
    while ( v2 != 80 );
  }
  (*(*this + 448LL))(this);
  CDOTA_Buff::StartIntervalThink(this, 0.0, v18);
}


// CDOTA_Modifier_Wisp_Spirits::OnDestroy  (line 1649, @0x0000000002d07a70, libserver.so)  // inlines: GetAbilityName
// calls: CDOTA_Modifier_Wisp_Spirits::ExplodeSpirits, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::GetAbilityByIndex, CDOTA_BaseNPC::SwapAbilities, CBaseEntity::StopSound
// strings: "wisp_spirits_in", "<NoAbilityName>", "wisp_spirits_out", "Hero_Wisp.Spirits.Cast", "Hero_Wisp.Spirits.Loop", "wisp_empty1" (7 total)
void __fastcall CDOTA_Modifier_Wisp_Spirits::OnDestroy(CDOTA_Modifier_Wisp_Spirits *const this)
{
  int v2; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByIndex; // r12
  CDOTA_BaseNPC *v5; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v7; // r12
  const char *m_pszAbilityName; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax

  CDOTA_Modifier_Wisp_Spirits::ExplodeSpirits(this);
  if ( CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value )
  {
    v2 = *(this + 757);
    Caster = CDOTA_Buff::GetCaster(this);
    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(Caster, v2);
    if ( AbilityByIndex != 0 )
    {
      v5 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::SwapAbilities(v5, "wisp_spirits", "wisp_spirits_in", 1, 0);
      m_pAbilityData = AbilityByIndex->m_pAbilityData;
      v7 = "<NoAbilityName>";
      if ( m_pAbilityData != 0 )
      {
        m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
        if ( m_pszAbilityName != 0 )
          v7 = m_pszAbilityName;
      }
      v9 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::SwapAbilities(v9, v7, "wisp_spirits_out", 1, 0);
    }
  }
  else
  {
    v12 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::SwapAbilities(v12, "wisp_spirits_in", "wisp_empty1", 0, 1);
    v13 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::SwapAbilities(v13, "wisp_spirits_out", "wisp_empty2", 0, 1);
  }
  v10 = CDOTA_Buff::GetCaster(this);
  CBaseEntity::StopSound(v10, "Hero_Wisp.Spirits.Cast");
  v11 = CDOTA_Buff::GetCaster(this);
  CBaseEntity::StopSound(v11, "Hero_Wisp.Spirits.Loop");
}


// CDOTA_Modifier_Wisp_Spirits::ExplodeSpirits  (line 1678, @0x0000000002d073c0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, VectorAdd, operator CBaseEntity*, operator CEntityInstance*, operator+, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetAbility, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTAFogOfWarSystem::RemoveFOWEntity, CBaseEntity::AddEffects, CBaseEntity::SetAbsVelocity, CBaseEntity::StopSound, DOTA_EmitSound, sincos (21 total)
// callers: CDOTA_Modifier_Wisp_Spirits::OnRefresh, CDOTA_Modifier_Wisp_Spirits::OnDestroy
// strings: "wisp_spirits_out", "wisp_spirits_in", "special_bonus_unique_wisp", "Hero_Wisp.Spirits.Loop", "Hero_Wisp.Spirits.Destroy", "Hero_Wisp.Spirits.Target" (7 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Wisp_Spirits::ExplodeSpirits(CDOTA_Modifier_Wisp_Spirits *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTABaseAbility *v7; // rax
  int nSpiritFXIndex; // ebx
  CDOTA_ParticleManager *v9; // rax
  CBaseModelEntity *pSpirit; // rsi
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  const Vector *AbsOrigin; // rax
  __m128d v15; // xmm2
  float v16; // xmm0_4
  vec_t v17; // xmm0_4
  float v18; // xmm1_4
  vec_t v19; // xmm1_4
  float GroundHeight; // xmm0_4
  __m128i v21; // xmm5
  float v22; // ebx
  CDOTA_BaseNPC *v23; // r13
  CDOTA_BaseNPC *v24; // rax
  __int64 v25; // r12
  int v26; // ebx
  CHandle<CBaseEntity> *v27; // rdx
  uint32 m_Index; // eax
  __int16 v29; // cx
  CEntityIdentity *v30; // rdx
  CEntityIdentity *v31; // rdx
  CEntityInstance *m_pInstance; // r13
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *v34; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v37; // rax
  CDOTA_ParticleManager *v38; // rax
  unsigned __int64 v39; // [rsp+18h] [rbp-A8h]
  double v40; // [rsp+20h] [rbp-A0h]
  double v41; // [rsp+28h] [rbp-98h]
  CDOTA_Ability_Wisp_Spirits *pSpiritsAbility; // [rsp+30h] [rbp-90h]
  __int64 i; // [rsp+38h] [rbp-88h]
  sSpiritDef *v44; // [rsp+40h] [rbp-80h]
  float flDamage; // [rsp+4Ch] [rbp-74h]
  double cosx; // [rsp+50h] [rbp-70h] BYREF
  double sinx; // [rsp+58h] [rbp-68h] BYREF
  Vector vecWispLoc; // [rsp+60h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+70h] [rbp-50h] BYREF

  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "wisp_spirits_out", 0);
  if ( AbilityByName != 0 && AbilityByName->m_bToggleState.m_Value )
    (*(AbilityByName->_vptr_IHandleEntity + 270))(AbilityByName);
  v4 = CDOTA_Buff::GetCaster(this);
  v5 = CDOTA_BaseNPC::FindAbilityByName(v4, "wisp_spirits_in", 0);
  if ( v5 != 0 && v5->m_bToggleState.m_Value )
    (*(v5->_vptr_IHandleEntity + 270))(v5);
  flDamage = *(this + 747);
  v6 = CDOTA_Buff::GetCaster(this);
  v7 = CDOTA_BaseNPC::FindAbilityByName(v6, "special_bonus_unique_wisp", 0);
  if ( v7 != 0 && v7->m_iLevel.m_Value > 0 )
    flDamage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "value", 1, 1) + flDamage;
  i = 0;
  pSpiritsAbility = CDOTA_Buff::GetAbility(this);
  if ( pSpiritsAbility != 0 )
  {
    do
    {
      v44 = &pSpiritsAbility->m_SpiritDefs.m_Memory.m_pMemory[i];
      if ( v44->nSpiritState == 1 )
      {
        *&v39 = *(this + 755);
        sincos(*(this + 754) - i * 6.283185307179586 / 5.0, &sinx, &cosx);
        v40 = cosx;
        v41 = sinx;
        v13 = CDOTA_Buff::GetCaster(this);
        AbsOrigin = CBaseEntity::GetAbsOrigin(v13);
        v15 = v39;
        v15.m128d_f64[0] = *&v39 * v41;
        v16 = v40 * *&v39;
        v17 = v16 + AbsOrigin->y;
        v18 = _mm_movedup_pd(v15).m128d_f64[0];
        v19 = v18 + AbsOrigin->x;
        vecWispLoc.z = AbsOrigin->z + 0.0;
        vecWispLoc.y = v17;
        vecWispLoc.x = v19;
        GroundHeight = GetGroundHeight(&vecWispLoc, 0);
        *v21.m128i_i32 = *(this + 750);
        hEntities.m_Size = 0;
        hEntities.m_Memory.m_pMemory = 0;
        hEntities.m_Memory.m_nAllocationCount = 0;
        hEntities.m_Memory.m_nGrowSize = 0;
        vecWispLoc.z = GroundHeight + 92.0;
        v22 = COERCE_FLOAT(_mm_cvtsi128_si32(v21));
        v23 = CDOTA_Buff::GetCaster(this);
        v24 = CDOTA_Buff::GetCaster(this);
        FindUnitsInRadius(v24->m_iTeamNum.m_Value, &vecWispLoc, v23, v22, &hEntities, 2, 19, 0, 0, 0);
        if ( hEntities.m_Size > 0 )
        {
          v25 = 0;
          v26 = 0;
          do
          {
            while ( 1 )
            {
              v27 = &hEntities.m_Memory.m_pMemory[v25];
              m_Index = hEntities.m_Memory.m_pMemory[v25].m_Index;
              if ( m_Index + 2 > 1 )
              {
                v29 = v27->m_Index;
                v30 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v27->m_Index) >> 9) & 0x3F];
                if ( v30 != 0 )
                {
                  v31 = &v30[v29 & 0x1FF];
                  if ( v31 != 0 && m_Index == v31->m_EHandle.m_Index )
                  {
                    m_pInstance = v31->m_pInstance;
                    if ( v31->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                    {
                      Ability = CDOTA_Buff::GetAbility(this);
                      v34 = CDOTA_Buff::GetCaster(this);
                      ApplyDamage(v34, m_pInstance, Ability, flDamage, 2, 0);
                      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                        break;
                    }
                  }
                }
              }
              ++v26;
              ++v25;
              if ( hEntities.m_Size <= v26 )
                goto LABEL_25;
            }
            DOTA_EmitSound(10, "Hero_Wisp.Spirits.Target", m_pInstance);
            ++v26;
            ++v25;
          }
          while ( hEntities.m_Size > v26 );
        }
LABEL_25:
        v44->nSpiritState = 2;
        ParticleManager = GetParticleManager();
        Particle = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/units/heroes/hero_wisp/wisp_guardian_explosion.vpcf",
                     2,
                     0,
                     0,
                     0);
        v37 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControl(v37, Particle, 0, *&vecWispLoc.x, vecWispLoc.z);
        v38 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v38, Particle);
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
      }
      nSpiritFXIndex = v44->nSpiritFXIndex;
      v9 = GetParticleManager();
      CDOTA_ParticleManager::DestroyParticleEffect(v9, nSpiritFXIndex, 0);
      pSpirit = v44->pSpirit;
      v44->nSpiritFXIndex = -1;
      CDOTAFogOfWarSystem::RemoveFOWEntity(&g_DOTAFogOfWarSystem, pSpirit);
      CBaseEntity::AddEffects(v44->pSpirit, 32);
      (*(v44->pSpirit->_vptr_IHandleEntity + 70))(v44->pSpirit, 4);
      CBaseEntity::SetAbsVelocity(v44->pSpirit, &vec3_origin);
      ++i;
    }
    while ( i != 5 );
  }
  v11 = CDOTA_Buff::GetCaster(this);
  CBaseEntity::StopSound(v11, "Hero_Wisp.Spirits.Loop");
  v12 = CDOTA_Buff::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Wisp.Spirits.Destroy", v12);
}


// CDOTA_Modifier_Wisp_Spirits::TryAddHitEntity  (line 1758, @0x0000000002d1a2a0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CDOTA_Modifier_Wisp_Spirits::ImpactRecord_t>, DOTAGameRules, Element, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GrowMemory, ImpactRecord_t, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator==<CBaseEntity>, operator[]
// calls: CUtlMemory<CDOTA_Modifier_Wisp_Spirits::ImpactRecord_t, int>::Grow
// callers: CDOTA_Modifier_Wisp_Spirits::OnIntervalThink
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Modifier_Wisp_Spirits::TryAddHitEntity(
        CDOTA_Modifier_Wisp_Spirits *const this,
        int nSpiritIdx,
        unsigned __int16 *hHitEntity)
{
  __int64 v3; // r12
  int v4; // ebx
  __int64 v5; // rax
  CEntityInstance *v6; // rsi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  CEntityInstance *m_pInstance; // rdi
  int v10; // ecx
  CEntityIdentity *v11; // rsi
  CEntityIdentity *v12; // rsi
  int v13; // xmm0_4
  int v14; // eax
  _DWORD *v15; // rax
  int v17; // [rsp+Ch] [rbp-44h]
  char *v18; // [rsp+10h] [rbp-40h]
  char *v19; // [rsp+18h] [rbp-38h]

  v18 = this + 24 * nSpiritIdx + 3024;
  v3 = *(this + 6 * nSpiritIdx + 758);
  v19 = this + 24 * nSpiritIdx + 3032;
  if ( v3 <= 0 )
  {
    v4 = *hHitEntity;
LABEL_16:
    v13 = 0;
    if ( g_pGameRules != 0 )
      v13 = *&g_pGameRules[18].m_szQuestName[20];
    v14 = v3;
    if ( *(v19 + 4) == v3 )
    {
      v17 = v13;
      CUtlMemory<CDOTA_Modifier_Wisp_Spirits::ImpactRecord_t,int>::Grow((v19 + 8), 1);
      v13 = v17;
      v14 = *(v18 + 2);
    }
    *(v18 + 2) = v14 + 1;
    v15 = (*(v19 + 1) + 8 * v3);
    if ( v15 != 0 )
    {
      *v15 = v13;
      v15[1] = v4;
    }
    return 1;
  }
  else
  {
    v4 = *hHitEntity;
    v5 = *(this + 3 * nSpiritIdx + 380);
    while ( 1 )
    {
      m_pInstance = 0;
      v10 = *(v5 + 4);
      if ( (v10 + 2) > 1 )
      {
        v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*(v5 + 4) >> 9) & 0x3F];
        if ( v11 != 0 )
        {
          v12 = &v11[*(v5 + 4) & 0x1FF];
          if ( v12 != 0 && v10 == v12->m_EHandle.m_Index )
            m_pInstance = v12->m_pInstance;
        }
      }
      v6 = 0;
      if ( (*hHitEntity + 2) > 1 )
      {
        v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hHitEntity >> 9) & 0x3F];
        if ( v7 != 0 )
        {
          v8 = &v7[*hHitEntity & 0x1FF];
          if ( v8 != 0 && v8->m_EHandle.m_Index == v4 )
            v6 = v8->m_pInstance;
        }
      }
      if ( m_pInstance == v6 )
        return 0;
      v5 += 8;
      if ( v5 == *(v19 + 1) + 8LL * (v3 - 1) + 8 )
        goto LABEL_16;
    }
  }
}


// CDOTA_Modifier_Wisp_Spirits::OnIntervalThink  (line 1781, @0x0000000002d1a470, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, DOTAGameRules, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetSerialNumber, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, MarkPVSInformationDirty, Remove, RemoveEffects, Set, ShiftElementsLeft, ToDOTABaseNPC, V_memmove, VectorAdd, VectorDivide, VectorSubtract, memmove, operator CBaseEntity*, operator CEntityInstance*, operator+, operator-, operator/, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetAbility, memmove, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, sincos, CBaseEntity::GetAbsOrigin, GetGroundHeight, CBaseEntity::SetAbsVelocity, CBaseEntity::SetAbsOrigin, FindUnitsInRadius, CDOTAFogOfWarSystem::AddTempViewer (28 total)
// strings: "special_bonus_unique_wisp", "Hero_Wisp.Spirits.Target", "particles/units/heroes/hero_wisp/wisp_guardian_explosion.vpcf", "particles/units/heroes/hero_wisp/wisp_guardian_explosion_small.vpcf", "Hero_Wisp.Spirits.TargetCreep", "particles/units/heroes/hero_wisp/wisp_guardian.vpcf"
// globals: CEntityHandle::gm_pEntityList
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_Modifier_Wisp_Spirits::OnIntervalThink(CDOTA_Modifier_Wisp_Spirits *const this)
{
  float v2; // xmm1_4
  char *v3; // r13
  __int64 v4; // rbx
  sSpiritDef *v5; // r12
  int v6; // r15d
  __int64 v7; // r14
  __int64 v8; // rax
  int v9; // ecx
  int nSpiritState; // eax
  CDOTA_Modifier_Wisp_Spirits *v11; // r14
  double v12; // xmm2_8
  __m128d v13; // xmm1
  float v14; // xmm5_4
  CDOTA_BaseNPC *v15; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v17; // xmm1_4
  float v18; // xmm0_4
  CDOTA_BaseNPC *v19; // rax
  CDOTABaseAbility *v20; // rax
  __m128i v21; // xmm0
  float v22; // r15d
  float v23; // xmm0_4
  float v24; // xmm2_4
  CDOTA_BaseNPC *v25; // rax
  const Vector *AbsOrigin; // rax
  __m128d v27; // xmm2
  float v28; // xmm0_4
  vec_t v29; // xmm0_4
  float v30; // xmm1_4
  vec_t v31; // xmm1_4
  const Vector *v32; // rax
  float v33; // xmm2_4
  float v34; // xmm0_4
  __m128i v35; // xmm5
  float v36; // r15d
  CDOTA_BaseNPC *v37; // r12
  CDOTA_BaseNPC *v38; // rax
  CDOTA_BaseNPC *v39; // rax
  __m128i v40; // xmm6
  float v41; // r13d
  CDOTA_BaseNPC *v42; // r12
  CDOTA_BaseNPC *v43; // rax
  __int64 v44; // r12
  int v45; // ebx
  unsigned __int16 *v46; // rdx
  int v47; // eax
  __int16 v48; // cx
  CEntityIdentity *v49; // rdx
  CEntityIdentity *v50; // rdx
  CEntityInstance *v51; // r13
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v53; // rax
  CDOTA_ParticleManager *v54; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v56; // rax
  CDOTA_ParticleManager *v57; // rax
  int v58; // ebx
  CDOTA_ParticleManager *v59; // rax
  CBaseModelEntity *pSpirit; // r14
  void (__fastcall *v61)(CDOTA_BaseNPC *, _QWORD); // r14
  CDOTA_BaseNPC *Caster; // rax
  __m128i v63; // xmm4
  float v64; // r15d
  CDOTA_BaseNPC *v65; // r12
  CDOTA_BaseNPC *v66; // rax
  __int64 v67; // r12
  int v68; // ebx
  unsigned __int16 *v69; // rdx
  int v70; // eax
  __int16 v71; // cx
  CEntityIdentity *v72; // rdx
  CEntityIdentity *v73; // rdx
  CEntityInstance *m_pInstance; // r15
  CEntityIdentity *m_pEntity; // rdx
  int v76; // eax
  __int16 v77; // cx
  CDOTA_BaseNPC *v78; // rax
  CDOTA_ParticleManager *v79; // rax
  CDOTA_ParticleManager *v80; // rax
  CDOTA_ParticleManager *v81; // rax
  CBaseEntity *v82; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTABaseAbility *pInflictor; // [rsp+20h] [rbp-C0h]
  CDOTABaseAbility *pInflictora; // [rsp+20h] [rbp-C0h]
  unsigned __int64 pEntities; // [rsp+28h] [rbp-B8h]
  int nWispsActive; // [rsp+30h] [rbp-B0h]
  __int128 nWispsActivea; // [rsp+30h] [rbp-B0h]
  float nWispsActiveb; // [rsp+30h] [rbp-B0h]
  CBaseEntity *nWispsActivec; // [rsp+30h] [rbp-B0h]
  CDOTA_Modifier_Wisp_Spirits *thisa; // [rsp+38h] [rbp-A8h]
  float thisb; // [rsp+38h] [rbp-A8h]
  CDOTA_Ability_Wisp_Spirits *pSpiritsAbility; // [rsp+40h] [rbp-A0h]
  int nWispsFinished; // [rsp+48h] [rbp-98h]
  __int64 nWispsFinisheda; // [rsp+48h] [rbp-98h]
  float flDamage; // [rsp+54h] [rbp-8Ch]
  float v97; // [rsp+58h] [rbp-88h]
  __int64 v98; // [rsp+58h] [rbp-88h]
  float v99; // [rsp+58h] [rbp-88h]
  __int128 cosx; // [rsp+60h] [rbp-80h] BYREF
  int v101[4]; // [rsp+70h] [rbp-70h] BYREF
  Vector vecWispLoc; // [rsp+80h] [rbp-60h] BYREF
  __int128 vecVelocity; // [rsp+90h] [rbp-50h] OVERLAPPED BYREF
  int v104; // [rsp+A0h] [rbp-40h]
  int v105; // [rsp+A4h] [rbp-3Ch]

  pSpiritsAbility = CDOTA_Buff::GetAbility(this);
  if ( pSpiritsAbility == 0 )
    return;
  if ( g_pGameRules != 0 )
    v2 = *&g_pGameRules[18].m_szQuestName[20] - 2.0;
  else
    v2 = -2.0;
  nWispsFinished = 0;
  v3 = this + 3032;
  v4 = 0;
  thisa = this;
  nWispsActive = 0;
  do
  {
    v5 = &pSpiritsAbility->m_SpiritDefs.m_Memory.m_pMemory[v4];
    v6 = *v3 - 1;
    v7 = 8LL * v6;
    if ( v6 >= 0 )
    {
      do
      {
        while ( 1 )
        {
          v8 = *(v3 + 1);
          if ( v2 >= *(v8 + v7) )
            break;
          --v6;
          v7 -= 8;
          if ( v6 == -1 )
            goto LABEL_12;
        }
        v9 = *v3;
        if ( *v3 - v6 - 1 > 0 )
        {
          v97 = v2;
          memmove((v8 + v7), (v8 + v7 + 8), 8LL * (*v3 - v6 - 1));
          v9 = *v3;
          v2 = v97;
        }
        --v6;
        v7 -= 8;
        *v3 = v9 - 1;
      }
      while ( v6 != -1 );
    }
LABEL_12:
    nSpiritState = v5->nSpiritState;
    if ( nSpiritState != 0 )
      goto LABEL_13;
    v99 = v2;
    *v21.m128i_i64 = (*(*thisa + 248LL))(thisa);
    v22 = COERCE_FLOAT(_mm_cvtsi128_si32(v21));
    (*(*thisa + 240LL))(thisa);
    v24 = 0.0;
    v2 = v99;
    if ( g_pGameRules != 0 )
      v24 = *&g_pGameRules[18].m_szQuestName[20];
    if ( (v22 - (v23 - v24)) >= v4 )
    {
      CDOTAFogOfWarSystem::AddFOWEntity(&g_DOTAFogOfWarSystem, v5->pSpirit);
      pSpirit = v5->pSpirit;
      v5->nSpiritState = 1;
      (*(pSpirit->_vptr_IHandleEntity + 188))(pSpirit, pSpirit->m_fEffects.m_Value & 0xFFFFFFDF);
      pSpirit->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
      CBaseEntity::DispatchUpdateTransmitState(pSpirit);
      v61 = *(v5->pSpirit->_vptr_IHandleEntity + 70);
      Caster = CDOTA_Buff::GetCaster(thisa);
      v61(v5->pSpirit, Caster->m_iTeamNum.m_Value);
      nSpiritState = v5->nSpiritState;
      v2 = v99;
LABEL_13:
      if ( nSpiritState != 1 )
        goto LABEL_14;
      goto LABEL_34;
    }
    nSpiritState = v5->nSpiritState;
    if ( nSpiritState != 1 )
    {
LABEL_14:
      nWispsFinished += nSpiritState == 2;
      goto LABEL_15;
    }
LABEL_34:
    ++nWispsActive;
LABEL_15:
    ++v4;
    v3 += 24;
  }
  while ( v4 != 5 );
  v11 = thisa;
  if ( nWispsFinished == 5 )
  {
    CDOTA_Buff::Destroy(thisa, 0, 0, 0);
  }
  else
  {
    if ( nWispsActive <= 1 )
      v12 = 1.649999976158142;
    else
      v12 = ((nWispsActive * 0.15000001) + 1.65);
    v13 = _mm_cvtps_pd(*(thisa + 754));
    v13.m128d_f64[0] = v13.m128d_f64[0] + (gpGlobals->frametime + gpGlobals->frametime) * 3.141592653589793 / v12;
    v14 = _mm_movedup_pd(v13).m128d_f64[0];
    *(thisa + 754) = v14;
    v15 = CDOTA_Buff::GetCaster(thisa);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v15, "wisp_spirits", 0);
    if ( AbilityByName != 0 )
    {
      v17 = *(thisa + 752);
      v18 = ((SLODWORD(AbilityByName[1].m_iszPrivateVScripts.u.m_Id) * gpGlobals->frametime) * *(thisa + 756))
          + *(thisa + 755);
      if ( v18 <= v17 )
        v17 = fmaxf(*(thisa + 751), v18);
      *(thisa + 755) = v17;
    }
    flDamage = *(thisa + 747);
    v19 = CDOTA_Buff::GetCaster(thisa);
    v20 = CDOTA_BaseNPC::FindAbilityByName(v19, "special_bonus_unique_wisp", 0);
    if ( v20 != 0 && v20->m_iLevel.m_Value > 0 )
      flDamage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v20, "value", 1, 1) + flDamage;
    for ( nWispsFinisheda = 0; nWispsFinisheda != 5; ++nWispsFinisheda )
    {
      v98 = &pSpiritsAbility->m_SpiritDefs.m_Memory.m_pMemory[nWispsFinisheda];
      if ( *(v98 + 12) == 1 )
      {
        *&pEntities = *(v11 + 755);
        sincos(*(v11 + 754) - nWispsFinisheda * 6.283185307179586 / 5.0, &cosx + 1, &cosx);
        nWispsActivea = cosx;
        v25 = CDOTA_Buff::GetCaster(v11);
        AbsOrigin = CBaseEntity::GetAbsOrigin(v25);
        v27 = pEntities;
        v27.m128d_f64[0] = *&pEntities * *(&nWispsActivea + 1);
        v28 = *&nWispsActivea * *&pEntities;
        v29 = v28 + AbsOrigin->y;
        v30 = _mm_movedup_pd(v27).m128d_f64[0];
        v31 = v30 + AbsOrigin->x;
        vecWispLoc.z = AbsOrigin->z + 0.0;
        vecWispLoc.y = v29;
        vecWispLoc.x = v31;
        vecWispLoc.z = GetGroundHeight(&vecWispLoc, 0) + 92.0;
        if ( gpGlobals->frametime > 0.0 )
        {
          thisb = gpGlobals->frametime;
          v32 = CBaseEntity::GetAbsOrigin(*v98);
          v33 = (vecWispLoc.z - v32->z) * (1.0 / thisb);
          v34 = (vecWispLoc.x - v32->x) * (1.0 / thisb);
          *(&vecVelocity + 1) = (vecWispLoc.y - v32->y) * (1.0 / thisb);
          *(&vecVelocity + 2) = v33;
          *&vecVelocity = v34;
          CBaseEntity::SetAbsVelocity(*v98, &vecVelocity);
        }
        CBaseEntity::SetAbsOrigin(*v98, &vecWispLoc);
        if ( *(v98 + 8) == -1 )
        {
          v82 = *v98;
          ParticleManager = GetParticleManager();
          *(v98 + 8) = CDOTA_ParticleManager::CreateParticle(
                         ParticleManager,
                         "particles/units/heroes/hero_wisp/wisp_guardian.vpcf",
                         1,
                         v82,
                         0,
                         0);
        }
        *v35.m128i_i32 = *(v11 + 749);
        LODWORD(vecVelocity) = 0;
        *(&vecVelocity + 1) = 0;
        v104 = 0;
        v105 = 0;
        v36 = COERCE_FLOAT(_mm_cvtsi128_si32(v35));
        v37 = CDOTA_Buff::GetCaster(v11);
        v38 = CDOTA_Buff::GetCaster(v11);
        FindUnitsInRadius(v38->m_iTeamNum.m_Value, &vecWispLoc, v37, v36, &vecVelocity, 2, 1, 0x2000, 0, 0);
        if ( vecVelocity <= 0 )
        {
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&vecVelocity);
          *v63.m128i_i32 = *(v11 + 748);
          v64 = COERCE_FLOAT(_mm_cvtsi128_si32(v63));
          v65 = CDOTA_Buff::GetCaster(v11);
          v66 = CDOTA_Buff::GetCaster(v11);
          FindUnitsInRadius(v66->m_iTeamNum.m_Value, &vecWispLoc, v65, v64, &vecVelocity, 2, 19, 0, 0, 0);
          if ( vecVelocity > 0 )
          {
            v67 = 0;
            v68 = 0;
            do
            {
              v69 = (*(&vecVelocity + 1) + v67);
              v70 = *(*(&vecVelocity + 1) + v67);
              if ( (v70 + 2) > 1 )
              {
                v71 = *v69;
                v72 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v69 >> 9) & 0x3F];
                if ( v72 != 0 )
                {
                  v73 = &v72[v71 & 0x1FF];
                  if ( v73 != 0 && v70 == v73->m_EHandle.m_Index )
                  {
                    m_pInstance = v73->m_pInstance;
                    if ( v73->m_pInstance != 0
                      && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                      && (LOBYTE(m_pInstance[71].m_pEntity) != 0
                       || SLOBYTE(m_pInstance[43].m_iszPrivateVScripts.u.m_Id) < 0) )
                    {
                      m_pEntity = m_pInstance->m_pEntity;
                      v101[0] = -1;
                      if ( m_pEntity != 0 )
                      {
                        v76 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                        v77 = 0x7FFF;
                        if ( m_pEntity->m_EHandle.m_Index != -1 )
                          v77 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                        LOWORD(v101[0]) = v77 | v101[0] & 0x8000;
                        v101[0] = (v76 << 15) | v101[0] & 0x7FFF;
                      }
                      if ( CDOTA_Modifier_Wisp_Spirits::TryAddHitEntity(v11, nWispsFinisheda, v101) != 0 )
                      {
                        nWispsActiveb = *(v11 + 746);
                        pInflictor = CDOTA_Buff::GetAbility(v11);
                        v78 = CDOTA_Buff::GetCaster(v11);
                        ApplyDamage(v78, m_pInstance, pInflictor, nWispsActiveb, 2, 0);
                        nWispsActivec = *v98;
                        v79 = GetParticleManager();
                        LODWORD(nWispsActivec) = CDOTA_ParticleManager::CreateParticle(
                                                   v79,
                                                   "particles/units/heroes/hero_wisp/wisp_guardian_explosion_small.vpcf",
                                                   2,
                                                   nWispsActivec,
                                                   0,
                                                   0);
                        pInflictora = *v98;
                        v80 = GetParticleManager();
                        CDOTA_ParticleManager::SetParticleControlEnt(
                          v80,
                          nWispsActivec,
                          0,
                          pInflictora,
                          1,
                          0,
                          vec3_invalid,
                          1);
                        v81 = GetParticleManager();
                        CDOTA_ParticleManager::ReleaseParticleIndex(v81, nWispsActivec);
                        CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Wisp.Spirits.TargetCreep", 0.0, 0, 0);
                      }
                    }
                  }
                }
              }
              ++v68;
              v67 += 4;
            }
            while ( vecVelocity > v68 );
          }
        }
        else
        {
          v39 = CDOTA_Buff::GetCaster(v11);
          CDOTAFogOfWarSystem::AddTempViewer(
            &g_DOTAFogOfWarSystem,
            FoWViewerType_t::FOWVIEWERTYPE_WISPSPIRITS,
            v39->m_iTeamNum.m_Value,
            &vecWispLoc,
            400.0,
            2.9400001,
            0);
          CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&vecVelocity);
          *v40.m128i_i32 = *(v11 + 750);
          v41 = COERCE_FLOAT(_mm_cvtsi128_si32(v40));
          v42 = CDOTA_Buff::GetCaster(v11);
          v43 = CDOTA_Buff::GetCaster(v11);
          FindUnitsInRadius(v43->m_iTeamNum.m_Value, &vecWispLoc, v42, v41, &vecVelocity, 2, 19, 0, 0, 0);
          if ( vecVelocity > 0 )
          {
            v44 = 0;
            v45 = 0;
            do
            {
              while ( 1 )
              {
                v46 = (*(&vecVelocity + 1) + v44);
                v47 = *(*(&vecVelocity + 1) + v44);
                if ( (v47 + 2) > 1 )
                {
                  v48 = *v46;
                  v49 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v46 >> 9) & 0x3F];
                  if ( v49 != 0 )
                  {
                    v50 = &v49[v48 & 0x1FF];
                    if ( v50 != 0 && v47 == v50->m_EHandle.m_Index )
                    {
                      v51 = v50->m_pInstance;
                      if ( v50->m_pInstance != 0 && BYTE3(v51[7]._vptr_IHandleEntity) != 0 )
                      {
                        Ability = CDOTA_Buff::GetAbility(v11);
                        v53 = CDOTA_Buff::GetCaster(v11);
                        ApplyDamage(v53, v51, Ability, flDamage, 2, 0);
                        if ( (v51[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                          break;
                      }
                    }
                  }
                }
                ++v45;
                v44 += 4;
                if ( vecVelocity <= v45 )
                  goto LABEL_51;
              }
              DOTA_EmitSound(2, "Hero_Wisp.Spirits.Target", v51);
              ++v45;
              v44 += 4;
            }
            while ( vecVelocity > v45 );
          }
LABEL_51:
          *(v98 + 12) = 2;
          v54 = GetParticleManager();
          Particle = CDOTA_ParticleManager::CreateParticle(
                       v54,
                       "particles/units/heroes/hero_wisp/wisp_guardian_explosion.vpcf",
                       2,
                       0,
                       0,
                       0);
          v56 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(v56, Particle, 0, *&vecWispLoc.x, vecWispLoc.z);
          v57 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v57, Particle);
          v58 = *(v98 + 8);
          v59 = GetParticleManager();
          CDOTA_ParticleManager::DestroyParticleEffect(v59, v58, 0);
          *(v98 + 8) = -1;
        }
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&vecVelocity);
      }
    }
  }
}


// CDOTA_Ability_Wisp_Overcharge::~CDOTA_Ability_Wisp_Overcharge  (line 1944, @0x0000000002d2cb50, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Wisp_Overcharge::~CDOTA_Ability_Wisp_Overcharge(
        CDOTA_Ability_Wisp_Overcharge *const this)
{
  this->_vptr_IHandleEntity = &off_467BC10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Wisp_Overcharge::~CDOTA_Ability_Wisp_Overcharge  (line 1944, @0x0000000002d2cb70, libserver.so)  // inlines: ~CDOTA_Ability_Wisp_Overcharge
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Wisp_Overcharge::~CDOTA_Ability_Wisp_Overcharge(
        CDOTA_Ability_Wisp_Overcharge *const this)
{
  this->_vptr_IHandleEntity = &off_467BC10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Wisp_Overcharge::Schema_DynamicBinding  (line 1946, @0x0000000002d21b60, libserver.so)
// globals: CDOTA_Ability_Wisp_Overcharge::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Wisp_Overcharge::Schema_DynamicBinding(
        const CDOTA_Ability_Wisp_Overcharge *const this)
{
  return CDOTA_Ability_Wisp_Overcharge::s_pSchemaBinding;
}


// CDOTA_Ability_Wisp_Overcharge::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1946, @0x0000000002d21b70, libserver.so)
// globals: CDOTA_Ability_Wisp_Overcharge::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Wisp_Overcharge::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Wisp_Overcharge::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Wisp_Overcharge::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Wisp_Overcharge::CEntityInstanceEntityClass::DestructInstance  (line 1946, @0x0000000002d21b80, libserver.so)  // inlines: Destruct<CDOTA_Ability_Wisp_Overcharge>
void __fastcall CDOTA_Ability_Wisp_Overcharge::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Wisp_Overcharge::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Wisp_Overcharge::CEntityInstanceEntityClass::FreeInstance  (line 1946, @0x0000000002d21ba0, libserver.so)
void __fastcall CDOTA_Ability_Wisp_Overcharge::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Wisp_Overcharge::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Wisp_Overcharge::CEntityInstanceEntityClass::CanAllocate  (line 1946, @0x0000000002d21bc0, libserver.so)
bool __fastcall CDOTA_Ability_Wisp_Overcharge::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Wisp_Overcharge::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Wisp_Overcharge::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1946, @0x0000000002d21bd0, libserver.so)
// globals: CDOTA_Ability_Wisp_Overcharge::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Wisp_Overcharge::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Wisp_Overcharge::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Wisp_Overcharge::s_pSchemaBinding;
}


// CDOTA_Ability_Wisp_Overcharge::CEntityInstanceEntityClass::AllocateInstance  (line 1946, @0x0000000002d25a50, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Wisp_Overcharge::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Wisp_Overcharge::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Wisp_Overcharge::CEntityInstanceEntityClass::ConstructInstance  (line 1946, @0x0000000002d299a0, libserver.so)  // inlines: CDOTA_Ability_Wisp_Overcharge, Construct<CDOTA_Ability_Wisp_Overcharge>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Wisp_Overcharge::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Wisp_Overcharge::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_467BC10;
  }
  return p;
}


// CDOTA_Ability_Wisp_Overcharge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1946, @0x0000000002d35260, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Wisp_Overcharge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Wisp_Overcharge::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Wisp_Overcharge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1946, @0x0000000002d35280, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Wisp_Overcharge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Wisp_Overcharge::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Wisp_Overcharge::GetEntityClassInternal  (line 1946, @0x0000000002d4ca30, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "CDOTA_Ability_Wisp_Overcharge"
// globals: `guard variable for'CDOTA_Ability_Wisp_Overcharge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_OverchargeClass, CDOTA_Ability_Wisp_Overcharge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_OverchargeClass, __dso_handle, CDOTA_Ability_Wisp_Overcharge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Wisp_Overcharge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_OverchargeClassInfo, CDOTA_Ability_Wisp_Overcharge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_OverchargeClassInfo
CEntityClass *__cdecl CDOTA_Ability_Wisp_Overcharge::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Wisp_Overcharge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_OverchargeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Wisp_Overcharge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_OverchargeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Wisp_Overcharge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_OverchargeClass);
    CDOTA_Ability_Wisp_Overcharge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_OverchargeClass._vptr_CEntityClass = off_467BB90;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Wisp_Overcharge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_OverchargeClass);
    __cxa_atexit(
      CDOTA_Ability_Wisp_Overcharge::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Wisp_Overcharge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_OverchargeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Wisp_OverchargeClass != 0 )
    return &CDOTA_Ability_Wisp_Overcharge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_OverchargeClass;
  if ( `guard variable for'CDOTA_Ability_Wisp_Overcharge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_OverchargeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Wisp_Overcharge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_OverchargeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Wisp_Overcharge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_OverchargeClassInfo,
      "CDOTA_Ability_Wisp_Overcharge",
      "wisp_overcharge",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Wisp_Overcharge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_OverchargeClassInfo);
  }
  CDOTA_Ability_Wisp_Overcharge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_OverchargeClass.m_pClassInfo = &CDOTA_Ability_Wisp_Overcharge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_OverchargeClassInfo;
  CDOTA_Ability_Wisp_Overcharge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_OverchargeClass.m_pBaseClassInfo = CDOTA_Ability_Wisp_Overcharge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_OverchargeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Wisp_OverchargeClass = &CDOTA_Ability_Wisp_Overcharge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_OverchargeClass;
  CDOTA_Ability_Wisp_Overcharge::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_OverchargeClassInfo.m_pClass = &CDOTA_Ability_Wisp_Overcharge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_OverchargeClass;
  CDOTA_Ability_Wisp_Overcharge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_OverchargeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Wisp_OverchargeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Wisp_Overcharge::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_OverchargeClass;
}


// CDOTA_Ability_Wisp_Overcharge::ProcsMagicStick  (line 1953, @0x0000000002d21be0, libserver.so)
bool __fastcall CDOTA_Ability_Wisp_Overcharge::ProcsMagicStick(CDOTA_Ability_Wisp_Overcharge *const this)
{
  return 0;
}


// CDOTA_Ability_Wisp_Overcharge::YouForgotToImplementOrDeclareServerClass  (line 1959, @0x0000000002ccb650, libserver.so)
int __fastcall CDOTA_Ability_Wisp_Overcharge::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Wisp_Overcharge *const this)
{
  return 0;
}


// CDOTA_Ability_Wisp_Overcharge::GetServerClass  (line 1959, @0x0000000002cdddf0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Wisp_Overcharge::GetServerClass(CDOTA_Ability_Wisp_Overcharge *const this)
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


// CDOTA_Ability_Wisp_Overcharge::OnToggle  (line 1968, @0x0000000002cd9620, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTetherUnit, IndexToIdentity, LookupEntity, ToDOTABaseNPC, operator CEntityInstance*
// calls: CDOTABaseAbility::OnToggle, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTA_BaseNPC::RemoveModifierByName, CBaseEntity::StopSound, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_wisp_overcharge", "Hero_Wisp.Overcharge"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Wisp_Overcharge::OnToggle(CDOTA_Ability_Wisp_Overcharge *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int m_pEntity_high; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *v8; // r14
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  CDOTABaseAbility::OnToggle(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "wisp_tether", 0);
  if ( AbilityByName == 0
    || ((m_pEntity_high = HIDWORD(AbilityByName[1].m_pEntity)) + 2) <= 1
    || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_pEntity_high >> 9) & 0x3F]) == 0
    || (v6 = &v5[m_pEntity_high & 0x1FF]) == 0
    || m_pEntity_high != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  if ( this->m_bToggleState.m_Value )
  {
    KeyValues::KeyValues(&kv, "modifier_wisp_overcharge");
    v8 = CDOTABaseAbility::GetCaster(this);
    v9 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v9, v8, this, "modifier_wisp_overcharge", &kv, 0);
    if ( m_pInstance != 0 )
    {
      v10 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v10, this, "modifier_wisp_overcharge", &kv, 0);
    }
    KeyValues::~KeyValues(&kv);
  }
  else
  {
    v11 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveModifierByName(v11, "modifier_wisp_overcharge");
    v12 = CDOTABaseAbility::GetCaster(this);
    CBaseEntity::StopSound(v12, "Hero_Wisp.Overcharge");
    if ( m_pInstance != 0 )
      CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, "modifier_wisp_overcharge");
  }
}


// CDOTA_Ability_Wisp_Overcharge::OnUnStolen  (line 2007, @0x0000000002cd29b0, libserver.so)
// calls: CDOTABaseAbility::OnUnStolen
void __fastcall CDOTA_Ability_Wisp_Overcharge::OnUnStolen(CDOTA_Ability_Wisp_Overcharge *const this)
{
  CDOTABaseAbility::OnUnStolen(this);
  if ( this->m_bToggleState.m_Value )
    (*(this->_vptr_IHandleEntity + 270))(this);
}


// CDOTA_Ability_Wisp_Overcharge::GetAbilityDamageToTargetOverInterval  (line 2022, @0x0000000002d00030, libserver.so)  // inlines: RemapVal
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAttackSpeed, CDOTA_BaseNPC::GetAttacksPerSecond, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetAverageTrueAttackDamage, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Wisp_Overcharge::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Wisp_Overcharge *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v8; // rax
  float v9; // xmm2_4
  float v10; // xmm2_4
  CDOTA_BaseNPC *v11; // rax
  __m128 v12; // xmm2
  float AttackSpeed; // [rsp-4h] [rbp-20h]
  float fIntervala; // [rsp+0h] [rbp-1Ch]
  float fIntervalb; // [rsp+0h] [rbp-1Ch]
  float fIntervalc; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    AttackSpeed = CDOTA_BaseNPC::GetAttackSpeed(Caster);
    v8 = CDOTABaseAbility::GetCaster(this);
    fIntervala = CDOTA_BaseNPC::GetAttacksPerSecond(v8);
    v9 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bonus_attack_speed", -1, 0) + AttackSpeed;
    if ( AttackSpeed == 0.0 )
    {
      v12.m128_f32[0] = v9 - AttackSpeed;
      LODWORD(v10) = _mm_cmple_ss(0LL, v12).m128_u32[0] & LODWORD(fIntervala);
    }
    else
    {
      v10 = ((v9 * fIntervala) / AttackSpeed) + 0.0;
    }
    fIntervalb = (v10 - fIntervala) * fInterval;
    v11 = CDOTABaseAbility::GetCaster(this);
    fIntervalc = fIntervalb * CDOTA_BaseNPC::GetAverageTrueAttackDamage(v11, pTarget);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)) * fIntervalc);
  }
  return result;
}


// CDOTA_Modifier_Wisp_Overcharge::~CDOTA_Modifier_Wisp_Overcharge  (line 2042, @0x0000000002d262e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Wisp_Overcharge::~CDOTA_Modifier_Wisp_Overcharge(
        CDOTA_Modifier_Wisp_Overcharge *const this)
{
  this->_vptr_CDOTA_Buff = &off_467C6D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Wisp_Overcharge::~CDOTA_Modifier_Wisp_Overcharge  (line 2042, @0x0000000002d26300, libserver.so)  // inlines: ~CDOTA_Modifier_Wisp_Overcharge
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Wisp_Overcharge::~CDOTA_Modifier_Wisp_Overcharge(
        CDOTA_Modifier_Wisp_Overcharge *const this)
{
  this->_vptr_CDOTA_Buff = &off_467C6D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Wisp_Overcharge::IsPurgable  (line 2049, @0x0000000002d21bf0, libserver.so)
bool __fastcall CDOTA_Modifier_Wisp_Overcharge::IsPurgable(CDOTA_Modifier_Wisp_Overcharge *const this)
{
  return 0;
}


// CDOTA_Modifier_Wisp_Overcharge::OnCreated  (line 2068, @0x0000000002d0d700, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle, DOTA_EmitSound, CDOTA_Buff::StartIntervalThink
// strings: "drain_interval", "drain_pct", "particles/units/heroes/hero_wisp/wisp_overcharge.vpcf", "attach_hitloc", "Hero_Wisp.Overcharge"
void __fastcall CDOTA_Modifier_Wisp_Overcharge::OnCreated(CDOTA_Modifier_Wisp_Overcharge *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v8; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v10; // r13
  CDOTA_ParticleManager *v11; // rax
  CDOTA_BaseNPC *Caster; // rax
  float v13; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_attack_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->bonus_attack_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_damage_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_damage_pct", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_11:
      this->drain_interval = 0.0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_12;
    }
  }
  this->bonus_damage_pct = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_11;
LABEL_4:
  this->drain_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "drain_interval", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->drain_pct = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "drain_pct", -1, 0);
    goto LABEL_6;
  }
LABEL_12:
  this->drain_pct = 0.0;
LABEL_6:
  Parent = CDOTA_Buff::GetParent(this);
  if ( Parent == CDOTA_Buff::GetCaster(this) )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    DOTA_EmitSound(2, "Hero_Wisp.Overcharge", Caster);
    CDOTA_Buff::StartIntervalThink(this, this->drain_interval, v13);
    (*(this->_vptr_CDOTA_Buff + 56))(this);
  }
  v8 = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(v8) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_wisp/wisp_overcharge.vpcf",
                  2,
                  v8,
                  0,
                  0);
  v10 = CDOTA_Buff::GetParent(this);
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v11, v8, 0, v10, 5, "attach_hitloc", vec3_invalid, 1);
  CDOTA_Buff::AddParticle(this, v8, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_Wisp_Overcharge::OnIntervalThink  (line 2090, @0x0000000002cd2040, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::ReduceMana, CDOTA_Buff::GetAbility, CBaseEntity::GetHealth, CDOTA_BaseNPC::ModifyHealth
void __fastcall CDOTA_Modifier_Wisp_Overcharge::OnIntervalThink(CDOTA_Modifier_Wisp_Overcharge *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  float v3; // xmm1_4
  CDOTABaseAbility *Ability; // r12
  CDOTA_BaseNPC *v5; // rax
  int Health; // r14d
  CDOTA_BaseNPC *v7; // rax
  int v8; // r13d
  CDOTA_BaseNPC *v9; // rax
  float v10; // [rsp+Ch] [rbp-24h]
  float v11; // [rsp+Ch] [rbp-24h]
  float v12; // [rsp+Ch] [rbp-24h]

  v10 = this->drain_interval * this->drain_pct;
  v11 = v10 * CDOTA_Buff::GetParent(this)->m_flMana.m_Value;
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::ReduceMana(Parent, v11, v3);
  Ability = CDOTA_Buff::GetAbility(this);
  v5 = CDOTA_Buff::GetParent(this);
  Health = CBaseEntity::GetHealth(v5);
  v12 = this->drain_interval * this->drain_pct;
  v7 = CDOTA_Buff::GetParent(this);
  v8 = CBaseEntity::GetHealth(v7);
  v9 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::ModifyHealth(v9, (Health - (v8 * v12)), Ability, 0, 32);
}


// CDOTA_Modifier_Wisp_Overcharge::DeclareFunctions  (line 2101, @0x0000000002ccb660, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Wisp_Overcharge::GetModifierIncomingDamage_Percentage(CModifierParams const&), CDOTA_Modifier_Wisp_Overcharge::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Wisp_Overcharge::DeclareFunctions(CDOTA_Modifier_Wisp_Overcharge *const this)
{
  this->m_Functions[36].__pfn = CDOTA_Modifier_Wisp_Overcharge::GetModifierIncomingDamage_Percentage;
  this->m_Functions[36].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Wisp_Overcharge::GetModifierAttackSpeedBonus_Constant;
}


// CDOTA_Modifier_Wisp_Overcharge::GetModifierIncomingDamage_Percentage  (line 2109, @0x0000000002ccb6a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Wisp_Overcharge::GetModifierIncomingDamage_Percentage(
        CDOTA_Modifier_Wisp_Overcharge *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Wisp_Overcharge::GetModifierAttackSpeedBonus_Constant  (line 2116, @0x0000000002ccb6c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Wisp_Overcharge::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Wisp_Overcharge *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Wisp_Relocate::~CDOTA_Ability_Wisp_Relocate  (line 2127, @0x0000000002d2cba0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Wisp_Relocate::~CDOTA_Ability_Wisp_Relocate(CDOTA_Ability_Wisp_Relocate *const this)
{
  this->_vptr_IHandleEntity = &off_467CA30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Wisp_Relocate::~CDOTA_Ability_Wisp_Relocate  (line 2127, @0x0000000002d2cbc0, libserver.so)  // inlines: ~CDOTA_Ability_Wisp_Relocate
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Wisp_Relocate::~CDOTA_Ability_Wisp_Relocate(CDOTA_Ability_Wisp_Relocate *const this)
{
  this->_vptr_IHandleEntity = &off_467CA30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Wisp_Relocate::Schema_DynamicBinding  (line 2129, @0x0000000002d21c00, libserver.so)
// globals: CDOTA_Ability_Wisp_Relocate::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Wisp_Relocate::Schema_DynamicBinding(
        const CDOTA_Ability_Wisp_Relocate *const this)
{
  return CDOTA_Ability_Wisp_Relocate::s_pSchemaBinding;
}


// CDOTA_Ability_Wisp_Relocate::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2129, @0x0000000002d21c10, libserver.so)
// globals: CDOTA_Ability_Wisp_Relocate::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Wisp_Relocate::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Wisp_Relocate::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Wisp_Relocate::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Wisp_Relocate::CEntityInstanceEntityClass::DestructInstance  (line 2129, @0x0000000002d21c20, libserver.so)  // inlines: Destruct<CDOTA_Ability_Wisp_Relocate>
void __fastcall CDOTA_Ability_Wisp_Relocate::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Wisp_Relocate::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Wisp_Relocate::CEntityInstanceEntityClass::FreeInstance  (line 2129, @0x0000000002d21c40, libserver.so)
void __fastcall CDOTA_Ability_Wisp_Relocate::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Wisp_Relocate::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Wisp_Relocate::CEntityInstanceEntityClass::CanAllocate  (line 2129, @0x0000000002d21c60, libserver.so)
bool __fastcall CDOTA_Ability_Wisp_Relocate::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Wisp_Relocate::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Wisp_Relocate::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2129, @0x0000000002d21c70, libserver.so)
// globals: CDOTA_Ability_Wisp_Relocate::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Wisp_Relocate::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Wisp_Relocate::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Wisp_Relocate::s_pSchemaBinding;
}


// CDOTA_Ability_Wisp_Relocate::CEntityInstanceEntityClass::AllocateInstance  (line 2129, @0x0000000002d25a90, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Wisp_Relocate::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Wisp_Relocate::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_Wisp_Relocate::CEntityInstanceEntityClass::ConstructInstance  (line 2129, @0x0000000002d299d0, libserver.so)  // inlines: CDOTA_Ability_Wisp_Relocate, Construct<CDOTA_Ability_Wisp_Relocate>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Wisp_Relocate::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Wisp_Relocate::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_467CA30;
  }
  return p;
}


// CDOTA_Ability_Wisp_Relocate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2129, @0x0000000002d352b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Wisp_Relocate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Wisp_Relocate::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Wisp_Relocate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2129, @0x0000000002d352d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Wisp_Relocate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Wisp_Relocate::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Wisp_Relocate::GetEntityClassInternal  (line 2129, @0x0000000002d4cb80, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "wisp_relocate", "CDOTA_Ability_Wisp_Relocate"
// globals: `guard variable for'CDOTA_Ability_Wisp_Relocate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_RelocateClass, CDOTA_Ability_Wisp_Relocate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_RelocateClass, __dso_handle, CDOTA_Ability_Wisp_Relocate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Wisp_Relocate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_RelocateClassInfo, CDOTA_Ability_Wisp_Relocate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_RelocateClassInfo
CEntityClass *__cdecl CDOTA_Ability_Wisp_Relocate::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Wisp_Relocate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_RelocateClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Wisp_Relocate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_RelocateClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Wisp_Relocate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_RelocateClass);
    CDOTA_Ability_Wisp_Relocate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_RelocateClass._vptr_CEntityClass = off_467C9B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Wisp_Relocate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_RelocateClass);
    __cxa_atexit(
      CDOTA_Ability_Wisp_Relocate::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Wisp_Relocate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_RelocateClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Wisp_RelocateClass != 0 )
    return &CDOTA_Ability_Wisp_Relocate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_RelocateClass;
  if ( `guard variable for'CDOTA_Ability_Wisp_Relocate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_RelocateClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Wisp_Relocate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_RelocateClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Wisp_Relocate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_RelocateClassInfo,
      "CDOTA_Ability_Wisp_Relocate",
      "wisp_relocate",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Wisp_Relocate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_RelocateClassInfo);
  }
  CDOTA_Ability_Wisp_Relocate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_RelocateClass.m_pClassInfo = &CDOTA_Ability_Wisp_Relocate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_RelocateClassInfo;
  CDOTA_Ability_Wisp_Relocate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_RelocateClass.m_pBaseClassInfo = CDOTA_Ability_Wisp_Relocate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_RelocateClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Wisp_RelocateClass = &CDOTA_Ability_Wisp_Relocate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_RelocateClass;
  CDOTA_Ability_Wisp_Relocate::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Wisp_RelocateClassInfo.m_pClass = &CDOTA_Ability_Wisp_Relocate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_RelocateClass;
  CDOTA_Ability_Wisp_Relocate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_RelocateClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Wisp_RelocateClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Wisp_Relocate::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Wisp_RelocateClass;
}


// CDOTA_Ability_Wisp_Relocate::YouForgotToImplementOrDeclareServerClass  (line 2150, @0x0000000002ccb6e0, libserver.so)
int __fastcall CDOTA_Ability_Wisp_Relocate::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Wisp_Relocate *const this)
{
  return 0;
}


// CDOTA_Ability_Wisp_Relocate::GetServerClass  (line 2150, @0x0000000002cddbf0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Wisp_Relocate::GetServerClass(CDOTA_Ability_Wisp_Relocate *const this)
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


// CDOTA_Ability_Wisp_Relocate::OnAbilityPhaseStart  (line 2174, @0x0000000002ccc240, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_wisp_tether"
bool __fastcall CDOTA_Ability_Wisp_Relocate::OnAbilityPhaseStart(CDOTA_Ability_Wisp_Relocate *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v3; // rbx
  float v4; // xmm0_4
  float v5; // xmm1_4

  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_wisp_tether", 0);
  v3 = ModifierByName;
  if ( ModifierByName != 0 )
  {
    (*(ModifierByName->_vptr_CDOTA_Buff + 30))(ModifierByName);
    v5 = 0.0;
    if ( g_pGameRules != 0 )
      v5 = *&g_pGameRules[18].m_szQuestName[20];
    if ( (v4 - v5) < 0.1 )
      (*(v3->_vptr_CDOTA_Buff + 63))(v3, 1, 0.1);
  }
  return 1;
}


// CDOTA_Ability_Wisp_Relocate::OnSpellStart  (line 2187, @0x0000000002cf5d10, libserver.so)  // inlines: DOTAGameRules, Get, GetGameTime, GetInstance, GetLevelSpecialValueFor<float>, GetTeamNumber, GetTetherTarget, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTABaseAbility::GetCursorPosition, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTAFogOfWarSystem::AddTempViewer, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, MinimapEvent, KeyValues::KeyValues, CBaseEntity::GetAbsOrigin, KeyValues::SetFloat (21 total)
// strings: "return_time", "modifier_wisp_tether", "particles/units/heroes/hero_wisp/wisp_relocate_marker_endpoint.vpcf", "start_x", "start_y", "start_z" (23 total)
void __fastcall CDOTA_Ability_Wisp_Relocate::OnSpellStart(CDOTA_Ability_Wisp_Relocate *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax
  const CEntityHandle *v4; // rbx
  float v5; // xmm0_4
  float v6; // xmm2_4
  double v7; // xmm1_8
  int v8; // ebx
  int v9; // edx
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax
  int v12; // ebx
  CDOTA_ParticleManager *v13; // rax
  int y; // r14d
  int cast_delay; // r15d
  int x; // r13d
  CDOTA_BaseNPC *v17; // rbx
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC *v19; // rsi
  int v20; // ebx
  int v21; // r15d
  int v22; // r14d
  int v23; // r13d
  CDOTA_BaseNPC *v24; // rax
  int v25; // edi
  CDOTA_BaseNPC *v26; // rax
  float v27; // xmm1_4
  CDOTA_BaseNPC *v28; // rax
  float v29; // xmm1_4
  CDOTA_BaseNPC *v30; // rax
  float v31; // xmm1_4
  float v32; // xmm1_4
  float v33; // xmm1_4
  float v34; // xmm1_4
  float v35; // xmm1_4
  float v36; // xmm1_4
  CDOTA_BaseNPC *v37; // r13
  CDOTA_BaseNPC *v38; // rax
  CDOTA_BaseNPC *v39; // r13
  CDOTA_ParticleManager *v40; // rax
  CDOTA_BaseNPC *v41; // r14
  CDOTA_ParticleManager *v42; // rax
  CDOTA_BaseNPC *v43; // rax
  CDOTA_BaseNPC *v44; // rax
  CDOTA_Buff *v45; // rdi
  Vector vRequestedPosition; // [rsp+10h] [rbp-90h] BYREF
  Vector vOrigin; // [rsp+20h] [rbp-80h]
  KeyValues kv; // [rsp+30h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v50; // [rsp+68h] [rbp-38h]

  v50 = __readfsqword(0x28u);
  vRequestedPosition = CDOTABaseAbility::GetCursorPosition(this);
  this->cast_delay = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "cast_delay", -1, 0);
  this->return_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "return_time", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_wisp_tether", 0);
  v4 = ModifierByName;
  if ( ModifierByName != 0 )
  {
    (*(ModifierByName->_vptr_CDOTA_Buff + 30))(ModifierByName);
    v6 = 0.0;
    if ( g_pGameRules != 0 )
      v6 = *&g_pGameRules[18].m_szQuestName[20];
    *&v7 = LODWORD(this->cast_delay);
    *&v7 = (*&v7 + this->return_time) + 0.1;
    if ( *&v7 > (v5 - v6) )
    {
      (*(*&v4->m_Index + 504LL))(v4, 1, v7);
      v44 = CEntityHandle::operator CEntityInstance *(v4 + 747);
      if ( v44 != 0 && v44->m_bIsDOTANPC )
      {
        v45 = CDOTA_BaseNPC::FindModifierByName(v44, "modifier_wisp_tether_haste", 0);
        if ( v45 != 0 )
          (*(v45->_vptr_CDOTA_Buff + 63))(v45, 1, (this->cast_delay + this->return_time) + 0.1);
      }
    }
  }
  v8 = 0;
  while ( ++v8 != 14 )
  {
    while ( (v8 - 6) <= 7 || (v8 - 2) <= 1 )
    {
      v9 = v8++;
      CDOTAFogOfWarSystem::AddTempViewer(
        &g_DOTAFogOfWarSystem,
        FoWViewerType_t::FOWVIEWERTYPE_RELOCATE,
        v9,
        &vRequestedPosition,
        150.0,
        2.5,
        0);
      if ( v8 == 14 )
        goto LABEL_10;
    }
  }
LABEL_10:
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_wisp/wisp_relocate_marker_endpoint.vpcf",
               2,
               0,
               0,
               0);
  this->m_nFXIndexEndTeam = Particle;
  v12 = Particle;
  v13 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v13, v12, 0, *&vRequestedPosition.x, vRequestedPosition.z);
  y = vRequestedPosition.y;
  cast_delay = this->cast_delay;
  x = vRequestedPosition.x;
  v17 = CDOTABaseAbility::GetCaster(this);
  v18 = CDOTABaseAbility::GetCaster(this);
  v19 = v17;
  v20 = 0;
  MinimapEvent(v18->m_iTeamNum.m_Value, v19, x, y, 32, cast_delay);
  do
  {
    while ( (v20 - 6) > 7 && (v20 - 2) > 1 || v20 == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
    {
      if ( ++v20 == 14 )
        goto LABEL_16;
    }
    v21 = this->cast_delay;
    v22 = vRequestedPosition.y;
    v23 = vRequestedPosition.x;
    v24 = CDOTABaseAbility::GetCaster(this);
    v25 = v20++;
    MinimapEvent(v25, v24, v23, v22, 1024, v21);
  }
  while ( v20 != 14 );
LABEL_16:
  KeyValues::KeyValues(&kv, "teleporting");
  v26 = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::GetAbsOrigin(v26);
  KeyValues::SetFloat(&kv, "start_x", v27);
  v28 = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::GetAbsOrigin(v28);
  KeyValues::SetFloat(&kv, "start_y", v29);
  v30 = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::GetAbsOrigin(v30);
  KeyValues::SetFloat(&kv, "start_z", v31);
  KeyValues::SetFloat(&kv, "end_x", v32);
  KeyValues::SetFloat(&kv, "end_y", v33);
  KeyValues::SetFloat(&kv, "end_z", v34);
  KeyValues::SetFloat(&kv, "channel_time", v35);
  KeyValues::SetFloat(&kv, "duration", v36);
  KeyValues::SetString(&kv, "loop_appear_sound", "Hero_Wisp.Relocate");
  KeyValues::SetString(&kv, "loop_disappear_sound", "Hero_Wisp.Relocate");
  KeyValues::SetString(&kv, "hero_appear_sound", "Hero_Wisp.TeleportIn");
  KeyValues::SetString(&kv, "hero_disappear_sound", "Hero_Wisp.TeleportOut");
  v37 = CDOTABaseAbility::GetCaster(this);
  v38 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v38, v37, this, "modifier_teleporting", &kv, 0);
  v39 = CDOTABaseAbility::GetCaster(this);
  v40 = GetParticleManager();
  this->m_nFXIndexChannel = CDOTA_ParticleManager::CreateParticle(
                              v40,
                              "particles/units/heroes/hero_wisp/wisp_relocate_channel.vpcf",
                              2,
                              v39,
                              0,
                              0);
  v41 = CDOTABaseAbility::GetCaster(this);
  LODWORD(v39) = this->m_nFXIndexChannel;
  v42 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v42, v39, 0, v41, 5, "attach_hitloc", vec3_invalid, 1);
  KeyValues::KeyValues(&kv2, "modifier_wisp_relocate_thinker");
  KeyValues::SetInt(&kv2, "m_nFXIndexEndTeam", this->m_nFXIndexEndTeam);
  KeyValues::SetInt(&kv2, "m_nFXIndexChannel", this->m_nFXIndexChannel);
  LODWORD(v41) = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  vOrigin = CDOTABaseAbility::GetCursorPosition(this);
  v43 = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(v43, this, "modifier_wisp_relocate_thinker", &kv2, vOrigin, v41, 0, 1, 0);
  KeyValues::~KeyValues(&kv2);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Wisp_Relocate_Thinker::~CDOTA_Modifier_Wisp_Relocate_Thinker  (line 2260, @0x0000000002d26290, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Wisp_Relocate_Thinker::~CDOTA_Modifier_Wisp_Relocate_Thinker(
        CDOTA_Modifier_Wisp_Relocate_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_467D4F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Wisp_Relocate_Thinker::~CDOTA_Modifier_Wisp_Relocate_Thinker  (line 2260, @0x0000000002d262b0, libserver.so)  // inlines: ~CDOTA_Modifier_Wisp_Relocate_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Wisp_Relocate_Thinker::~CDOTA_Modifier_Wisp_Relocate_Thinker(
        CDOTA_Modifier_Wisp_Relocate_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_467D4F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Wisp_Relocate_Thinker::IsHidden  (line 2272, @0x0000000002d21c80, libserver.so)
bool __fastcall CDOTA_Modifier_Wisp_Relocate_Thinker::IsHidden(CDOTA_Modifier_Wisp_Relocate_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Wisp_Relocate_Thinker::OnCreated  (line 2285, @0x0000000002cf7520, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::GetInt, CDOTA_Buff::StartIntervalThink
// strings: "m_nFXIndexEndTeam", "m_nFXIndexChannel"
void __fastcall CDOTA_Modifier_Wisp_Relocate_Thinker::OnCreated(
        CDOTA_Modifier_Wisp_Relocate_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  int Int; // eax
  float cast_delay; // xmm0_4
  float v7; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->cast_delay = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "cast_delay", -1, 0);
  else
    this->cast_delay = 0.0;
  this->m_nFXIndexEndTeam = KeyValues::GetInt(pKV, "m_nFXIndexEndTeam", 0);
  Int = KeyValues::GetInt(pKV, "m_nFXIndexChannel", 0);
  cast_delay = this->cast_delay;
  this->m_nFXIndexChannel = Int;
  CDOTA_Buff::StartIntervalThink(this, cast_delay, v7);
}


// CDOTA_Modifier_Wisp_Relocate_Thinker::DeclareFunctions  (line 2300, @0x0000000002ccb6f0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Wisp_Relocate_Thinker::OnDeath(CModifierParams const&), CDOTA_Modifier_Wisp_Relocate_Thinker::OnStateChanged(CModifierParams const&)
void __fastcall CDOTA_Modifier_Wisp_Relocate_Thinker::DeclareFunctions(
        CDOTA_Modifier_Wisp_Relocate_Thinker *const this)
{
  this->m_Functions[138].__pfn = CDOTA_Modifier_Wisp_Relocate_Thinker::OnDeath;
  this->m_Functions[138].__delta = 0;
  this->m_Functions[135].__delta = 0;
  this->m_Functions[135].__pfn = CDOTA_Modifier_Wisp_Relocate_Thinker::OnStateChanged;
}


// CDOTA_Modifier_Wisp_Relocate_Thinker::OnDeath  (line 2309, @0x0000000002cd8ce0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_Buff::GetParent, UTIL_Remove
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Wisp_Relocate_Thinker::OnDeath(
        CDOTA_Modifier_Wisp_Relocate_Thinker *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx
  int m_nFXIndexChannel; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  int m_nFXIndexEndTeam; // ebx
  CDOTA_ParticleManager *v11; // rax
  CDOTA_BaseNPC *Parent; // rax

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
  if ( CDOTA_Buff::GetCaster(this) == m_pInstance )
  {
    m_nFXIndexChannel = this->m_nFXIndexChannel;
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndexChannel, 0);
    m_nFXIndexEndTeam = this->m_nFXIndexEndTeam;
    v11 = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(v11, m_nFXIndexEndTeam, 0);
    Parent = CDOTA_Buff::GetParent(this);
    UTIL_Remove(Parent);
  }
  return 1uLL;
}


// CDOTA_Modifier_Wisp_Relocate_Thinker::OnStateChanged  (line 2326, @0x0000000002cd8bc0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_Buff::GetParent, UTIL_Remove
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Wisp_Relocate_Thinker::OnStateChanged(
        CDOTA_Modifier_Wisp_Relocate_Thinker *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  int m_nFXIndexChannel; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  int m_nFXIndexEndTeam; // r12d
  CDOTA_ParticleManager *v11; // rax
  CDOTA_BaseNPC *Parent; // rax

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
  if ( CDOTA_Buff::GetCaster(this) == m_pInstance
    && ((CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x20) != 0
     || (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x40) != 0
     || (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 1) != 0) )
  {
    m_nFXIndexChannel = this->m_nFXIndexChannel;
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndexChannel, 0);
    m_nFXIndexEndTeam = this->m_nFXIndexEndTeam;
    v11 = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(v11, m_nFXIndexEndTeam, 0);
    Parent = CDOTA_Buff::GetParent(this);
    UTIL_Remove(Parent);
  }
  return 1uLL;
}


// CDOTA_Modifier_Wisp_Relocate_Thinker::OnIntervalThink  (line 2347, @0x0000000002cf8550, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, DotaRetrieveAbilityValue<float>, Get, GetAbilityData, GetEHandle, GetEntryIndex, GetGameTime, GetInstance, GetLevelSpecialValueFor<float>, GetSerialNumber, GetTetherTarget, GetTetherUnit, IsConsideredHero, Set, SpeakConcept, ToDOTABaseNPC, VectorAdd, entindex, operator CBaseEntity*, operator+
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_Speech::SpeakConcept, CDOTA_Buff::GetParent, UTIL_Remove, CResponseCriteriaSet::~CResponseCriteriaSet, CBaseEntity::GetAbsOrigin (33 total)
// strings: "return_time", "relocateinterrupted", "particles/units/heroes/hero_wisp/wisp_relocate_teleport.vpcf", "modifier_wisp_relocate_return", "modifier_wisp_tether", "modifier_wisp_tether_haste" (8 total)
void __fastcall CDOTA_Modifier_Wisp_Relocate_Thinker::OnIntervalThink(CDOTA_Modifier_Wisp_Relocate_Thinker *const this)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v3; // rax
  int m_nFXIndexChannel; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  int m_nFXIndexEndTeam; // r12d
  CDOTA_ParticleManager *v7; // rax
  float v8; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_BaseNPC *Parent; // rax
  int v11; // r12d
  CDOTA_ParticleManager *v12; // rax
  int v13; // r12d
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v19; // cx
  CDOTA_ParticleManager *v20; // rax
  int Particle; // r13d
  CDOTA_BaseNPC *v22; // rax
  float v23; // xmm1_4
  CDOTA_ParticleManager *v24; // rax
  CDOTA_ParticleManager *v25; // rax
  CDOTA_BaseNPC *v26; // r13
  CDOTA_ParticleManager *v27; // rax
  CDOTA_ParticleManager *v28; // rax
  CDOTABaseAbility *v29; // r15
  CDOTA_BaseNPC *v30; // r14
  CDOTA_BaseNPC *v31; // rax
  CDOTA_BaseNPC *v32; // rax
  unsigned int v33; // eax
  CDOTA_BaseNPC *v34; // rax
  CDOTA_BaseNPC *v35; // rax
  CDOTA_BaseNPC *v36; // rax
  CEntityIndex v37; // eax
  CDOTA_BaseNPC *v38; // rax
  CDOTA_Buff *ModifierByName; // rax
  CEntityHandle *v40; // r14
  float v41; // xmm0_4
  float v42; // xmm1_4
  __m128i v43; // xmm4
  unsigned int v44; // r15d
  CDOTA_BaseNPC *v45; // rax
  CDOTA_Buff *v46; // rdi
  CDOTABaseAbility *v47; // rax
  CEntityInstance *v48; // rax
  CDOTA_BaseNPC *v49; // r12
  CDOTA_BaseNPC *v50; // rax
  CDOTABaseAbility *v51; // rax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  CDOTABaseAbility *v53; // r12
  int m_iAbilityID; // r12d
  CDOTA_BaseNPC *v55; // rax
  float v56; // xmm3_4
  CDOTA_BaseNPC *v57; // rax
  CDOTALocomotor *v58; // rax
  CDOTA_ParticleManager *v59; // rax
  int v60; // r14d
  float v61; // xmm1_4
  CDOTA_ParticleManager *v62; // rax
  CDOTA_ParticleManager *v63; // rax
  CDOTA_ParticleManager *v64; // rax
  int v65; // r14d
  CDOTA_ParticleManager *v66; // rax
  float flRadius; // [rsp+10h] [rbp-D0h]
  double v68; // [rsp+14h] [rbp-CCh]
  float return_time; // [rsp+1Ch] [rbp-C4h]
  double v70; // [rsp+30h] [rbp-B0h]
  float v71; // [rsp+38h] [rbp-A8h]
  double v72; // [rsp+40h] [rbp-A0h]
  float v73; // [rsp+48h] [rbp-98h]
  CResponseCriteriaSet criteria; // [rsp+50h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+90h] [rbp-50h] BYREF
  unsigned __int64 v76; // [rsp+A8h] [rbp-38h]
  Vector v77; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v78; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v79; // 0:xmm0_8.8,8:xmm1_4.4

  v76 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "cast_delay", -1, 0);
  v3 = CDOTA_Buff::GetAbility(this);
  if ( v3 != 0 )
    return_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v3, "return_time", -1, 0);
  else
    return_time = 0.0;
  if ( (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x20) != 0
    || (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x40) != 0
    || (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 1) != 0 )
  {
    m_nFXIndexChannel = this->m_nFXIndexChannel;
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndexChannel, 0);
    m_nFXIndexEndTeam = this->m_nFXIndexEndTeam;
    v7 = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(v7, m_nFXIndexEndTeam, 0);
    CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
    CResponseCriteriaSet::AppendCriteria(&criteria, "relocateinterrupted", 1.0, v8);
    m_pSpeech = CDOTA_Buff::GetCaster(this)->m_Speech.m_pSpeech;
    if ( m_pSpeech != 0 )
      CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 0, 0, 0, 0, 0);
    Parent = CDOTA_Buff::GetParent(this);
    UTIL_Remove(Parent);
    CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  }
  else
  {
    v11 = this->m_nFXIndexChannel;
    v12 = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(v12, v11, 0);
    v13 = this->m_nFXIndexEndTeam;
    v14 = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(v14, v13, 0);
    v15 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v15);
    v68 = *&AbsOrigin->x;
    flRadius = AbsOrigin->z;
    Caster = CDOTA_Buff::GetCaster(this);
    LODWORD(criteria._vptr_CResponseCriteriaSet) = -1;
    if ( Caster != 0 )
    {
      m_pEntity = Caster->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v19 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v19 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LODWORD(criteria._vptr_CResponseCriteriaSet) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                                     | v19 & 0x7FFF;
      }
    }
    CDOTA_ProjectileManager::ProjectileDodge(&g_DOTAProjectileManager, &criteria, 0);
    v20 = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 v20,
                 "particles/units/heroes/hero_wisp/wisp_relocate_teleport.vpcf",
                 2,
                 0,
                 0,
                 0);
    v22 = CDOTA_Buff::GetCaster(this);
    v70 = (*(v22->_vptr_IHandleEntity + 62))(v22);
    v71 = v23;
    v24 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v24, Particle, 0, v70, v71);
    v25 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v25, Particle);
    v26 = CDOTA_Buff::GetCaster(this);
    v27 = GetParticleManager();
    LODWORD(v26) = CDOTA_ParticleManager::CreateParticle(
                     v27,
                     "particles/units/heroes/hero_wisp/wisp_relocate_teleport.vpcf",
                     9,
                     v26,
                     0,
                     0);
    v28 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v28, v26);
    KeyValues::KeyValues(&kv, "modifier_wisp_relocate_return");
    v29 = CDOTA_Buff::GetAbility(this);
    v30 = CDOTA_Buff::GetCaster(this);
    v31 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v31, v30, v29, "modifier_wisp_relocate_return", &kv, 0);
    v32 = CDOTA_Buff::GetCaster(this);
    v33 = (*(v32->_vptr_IHandleEntity + 414))(v32);
    *&v77.x = v68;
    v77.z = flRadius;
    CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v33, v77, 250.0, flRadius);
    v34 = CDOTA_Buff::GetCaster(this);
    *&v78.x = v68;
    v78.z = flRadius;
    FindClearSpaceForUnit(v34, v78, 1);
    v35 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::Interrupt(v35);
    v36 = CDOTA_Buff::GetCaster(this);
    v37.m_Data = CEntityInstance::GetEntityIndex(v36).m_Data;
    CreateUnitEvent(v37, 0, 25, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_IMPORTANT_ABILITY);
    v38 = CDOTA_Buff::GetCaster(this);
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(v38, "modifier_wisp_tether", 0);
    v40 = ModifierByName;
    if ( ModifierByName != 0 )
    {
      (*(ModifierByName->_vptr_CDOTA_Buff + 30))(ModifierByName);
      v42 = 0.0;
      if ( g_pGameRules != 0 )
        v42 = *&g_pGameRules[18].m_szQuestName[20];
      v43 = LODWORD(return_time);
      *v43.m128i_i32 = return_time + 0.1;
      v44 = _mm_cvtsi128_si32(v43);
      if ( (return_time + 0.1) > (v41 - v42) )
      {
        (*(*&v40->m_Index + 504LL))(v40, 1, *v43.m128i_i64);
        v45 = CEntityHandle::operator CEntityInstance *(v40 + 747);
        if ( v45 != 0 && v45->m_bIsDOTANPC )
        {
          v46 = CDOTA_BaseNPC::FindModifierByName(v45, "modifier_wisp_tether_haste", 0);
          if ( v46 != 0 )
            (*(v46->_vptr_CDOTA_Buff + 63))(v46, 1, *_mm_cvtsi32_si128(v44).m128i_i64);
        }
      }
      v47 = CDOTA_Buff::GetAbility(v40);
      if ( v47 != 0 )
      {
        LODWORD(criteria._vptr_CResponseCriteriaSet) = HIDWORD(v47[1].m_pEntity);
        v48 = CEntityHandle::operator CEntityInstance *(&criteria);
        v49 = v48;
        if ( v48 != 0 && BYTE3(v48[7]._vptr_IHandleEntity) != 0 && (v48[43].m_iszPrivateVScripts.u.m_Id & 3) != 0 )
        {
          v50 = CDOTA_Buff::GetCaster(this);
          if ( !CDOTA_PlayerResource::IsDisableHelpSetForPlayerID(
                  g_pDOTAPlayerResource,
                  v49->m_nControllingPlayerID,
                  v50->m_nControllingPlayerID) )
          {
            CDOTA_ModifierManager::RemoveModifierByName(&v49->m_ModifierManager, "modifier_life_stealer_infest");
            CDOTA_ModifierManager::RemoveModifierByName(&v49->m_ModifierManager, "modifier_life_stealer_assimilate");
            v58 = (*(v49->_vptr_IHandleEntity + 376))(v49);
            CDOTALocomotor::InterruptMotionControllers(v58, 0);
            v59 = GetParticleManager();
            v60 = CDOTA_ParticleManager::CreateParticle(
                    v59,
                    "particles/units/heroes/hero_wisp/wisp_relocate_teleport.vpcf",
                    2,
                    0,
                    0,
                    0);
            v72 = (*(v49->_vptr_IHandleEntity + 62))(v49);
            v73 = v61;
            v62 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControl(v62, v60, 0, v72, v73);
            v63 = GetParticleManager();
            CDOTA_ParticleManager::ReleaseParticleIndex(v63, v60);
            v64 = GetParticleManager();
            v65 = CDOTA_ParticleManager::CreateParticle(
                    v64,
                    "particles/units/heroes/hero_wisp/wisp_relocate_teleport.vpcf",
                    9,
                    v49,
                    0,
                    0);
            v66 = GetParticleManager();
            CDOTA_ParticleManager::ReleaseParticleIndex(v66, v65);
            *&criteria._vptr_CResponseCriteriaSet = *&v68 + 50.0;
            *(&criteria._vptr_CResponseCriteriaSet + 1) = *(&v68 + 1) + 50.0;
            v79.z = flRadius + 0.0;
            *&v79.x = criteria._vptr_CResponseCriteriaSet;
            *&criteria.m_Lookup.m_LessFunc = flRadius + 0.0;
            FindClearSpaceForUnit(v49, v79, 1);
            CDOTA_BaseNPC::Interrupt(v49);
          }
        }
      }
    }
    if ( CDOTA_Buff::GetAbility(this) != 0 )
    {
      v51 = CDOTA_Buff::GetAbility(this);
      m_pAbilityData = v51->m_pAbilityData;
      v53 = v51;
      if ( m_pAbilityData == 0 )
      {
        CDOTABaseAbility::LoadAbilityData(v51, 0);
        m_pAbilityData = v53->m_pAbilityData;
      }
      m_iAbilityID = m_pAbilityData->m_iAbilityID;
      v55 = CDOTA_Buff::GetCaster(this);
      CDOTAGamerules::SendProjectionAbilityMessage(g_pGameRules, v55, 0, m_iAbilityID, 0, 0, v68, flRadius, -1.0, v56);
    }
    v57 = CDOTA_Buff::GetParent(this);
    UTIL_Remove(v57);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_Wisp_Relocate_Return::~CDOTA_Modifier_Wisp_Relocate_Return  (line 2456, @0x0000000002d26240, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Wisp_Relocate_Return::~CDOTA_Modifier_Wisp_Relocate_Return(
        CDOTA_Modifier_Wisp_Relocate_Return *const this)
{
  this->_vptr_CDOTA_Buff = &off_467D810;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Wisp_Relocate_Return::~CDOTA_Modifier_Wisp_Relocate_Return  (line 2456, @0x0000000002d26260, libserver.so)  // inlines: ~CDOTA_Modifier_Wisp_Relocate_Return
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Wisp_Relocate_Return::~CDOTA_Modifier_Wisp_Relocate_Return(
        CDOTA_Modifier_Wisp_Relocate_Return *const this)
{
  this->_vptr_CDOTA_Buff = &off_467D810;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Wisp_Relocate_Return::IsPurgable  (line 2465, @0x0000000002d21c90, libserver.so)
bool __fastcall CDOTA_Modifier_Wisp_Relocate_Return::IsPurgable(CDOTA_Modifier_Wisp_Relocate_Return *const this)
{
  return 0;
}


// CDOTA_Modifier_Wisp_Relocate_Return::OnCreated  (line 2479, @0x0000000002cf7c60, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetSerialNumber, Set, Vector, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::GetPtr, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_Buff::StartIntervalThink, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::AddParticle, CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound (13 total)
// strings: "return_time", "particles/units/heroes/hero_wisp/wisp_relocate_marker.vpcf", "particles/units/heroes/hero_wisp/wisp_relocate_timer.vpcf", "Hero_Wisp.ReturnCounter"
void __fastcall CDOTA_Modifier_Wisp_Relocate_Return::OnCreated(
        CDOTA_Modifier_Wisp_Relocate_Return *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  _QWORD *Ptr; // rax
  __int64 v6; // rdx
  int v7; // eax
  __int16 v8; // cx
  CDOTA_BaseNPC *Caster; // rax
  float v10; // xmm1_4
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_ParticleManager *v13; // rax
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *v15; // rax
  int v16; // eax
  long double v17; // fst6
  char v19; // c2
  unsigned int v20; // xmm0_4
  int v21; // xmm1_4
  int m_nFXTimeRemaining; // r12d
  CDOTA_ParticleManager *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  double soundtime; // [rsp+10h] [rbp-30h]
  double v26; // [rsp+20h] [rbp-20h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->return_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "return_time", -1, 0);
  else
    this->return_time = 0.0;
  Ptr = KeyValues::GetPtr(pKV, "target", 0);
  if ( Ptr != 0 && (v6 = Ptr[1]) != 0 )
  {
    v7 = (*(v6 + 16) >> 15) - (*(v6 + 48) & 1);
    v8 = 0x7FFF;
    if ( *(v6 + 16) != -1 )
      v8 = *(v6 + 16) & 0x7FFF;
    LOWORD(this->m_hTarget.m_Index) = v8 | this->m_hTarget.m_Index & 0x8000;
    this->m_hTarget.m_Index = (v7 << 15) | this->m_hTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTarget.m_Index = -1;
  }
  Caster = CDOTA_Buff::GetCaster(this);
  this->m_vecReturnPosition = *CBaseEntity::GetAbsOrigin(Caster);
  CDOTA_Buff::StartIntervalThink(this, 1.0, v10);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_wisp/wisp_relocate_marker.vpcf",
               2,
               0,
               0,
               0);
  v13 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(
    v13,
    Particle,
    0,
    *&this->m_vecReturnPosition.x,
    this->m_vecReturnPosition.z);
  CDOTA_Buff::AddParticle(this, Particle, 0, 0, -1, 0, 0);
  Parent = CDOTA_Buff::GetParent(this);
  v15 = GetParticleManager();
  v16 = CDOTA_ParticleManager::CreateParticle(
          v15,
          "particles/units/heroes/hero_wisp/wisp_relocate_timer.vpcf",
          7,
          Parent,
          0,
          0);
  soundtime = this->return_time;
  this->m_nFXTimeRemaining = v16;
  v17 = soundtime;
  do
    v17 = __FPREM__(v17, 10.0);
  while ( v19 != 0 );
  if ( this->return_time > 9.0 )
    v21 = 1065353216;
  else
    v21 = 0;
  m_nFXTimeRemaining = this->m_nFXTimeRemaining;
  *&v20 = v17;
  v26 = COERCE_DOUBLE(__PAIR64__(v20, v21));
  v23 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v23, m_nFXTimeRemaining, 1, v26, 0.0);
  CDOTA_Buff::AddParticle(this, this->m_nFXTimeRemaining, 0, 0, -1, 0, 1);
  v24 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v24, "Hero_Wisp.ReturnCounter", 0.0, 0, 0);
}


// CDOTA_Modifier_Wisp_Relocate_Return::OnDestroy  (line 2503, @0x0000000002ccd080, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::StopSound
// strings: "Hero_Wisp.ReturnCounter"
void __fastcall CDOTA_Modifier_Wisp_Relocate_Return::OnDestroy(CDOTA_Modifier_Wisp_Relocate_Return *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(Parent, "Hero_Wisp.ReturnCounter");
}


// CDOTA_Modifier_Wisp_Relocate_Return::OnIntervalThink  (line 2512, @0x0000000002cdcb00, libserver.so)  // inlines: CEntityHandle, CHandle, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTetherUnit, IndexToIdentity, IsConsideredHero, LookupEntity, ToDOTABaseNPC, Vector, VectorAdd, operator CEntityInstance*, operator+
// calls: GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::GetCaster, CDOTA_ParticleManager::ReleaseParticleIndex, CGridNav::DestroyTreesAroundPoint, FindClearSpaceForUnit, CDOTA_BaseNPC::Interrupt, CDOTA_BaseNPC::UnitEmitSound, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Buff::Destroy, CDOTA_PlayerResource::IsDisableHelpSetForPlayerID (15 total)
// strings: "particles/units/heroes/hero_wisp/wisp_relocate_teleport.vpcf", "Hero_Wisp.Return", "modifier_life_stealer_infest", "modifier_life_stealer_assimilate"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Wisp_Relocate_Return::OnIntervalThink(CDOTA_Modifier_Wisp_Relocate_Return *const this)
{
  __m128 v2; // xmm1
  long double v3; // fst6
  char v5; // c2
  int m_nFXTimeRemaining; // ebx
  float v7; // xmm5_4
  CDOTA_ParticleManager *v8; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_BaseNPC *Caster; // rax
  float v12; // xmm1_4
  CDOTA_ParticleManager *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // r12
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  unsigned int v19; // eax
  float v20; // xmm3_4
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int m_pEntity_high; // eax
  CEntityIdentity *v27; // rdx
  CEntityIdentity *v28; // rdx
  CEntityInstance *m_pInstance; // r12
  CDOTA_BaseNPC *v30; // rax
  CDOTALocomotor *v31; // rax
  CDOTA_ParticleManager *v32; // rax
  int v33; // r13d
  float v34; // xmm1_4
  CDOTA_ParticleManager *v35; // rax
  CDOTA_ParticleManager *v36; // rax
  CDOTA_ParticleManager *v37; // rax
  int v38; // r13d
  CDOTA_ParticleManager *v39; // rax
  double v40; // [rsp+20h] [rbp-50h]
  float v41; // [rsp+28h] [rbp-48h]
  double v42; // [rsp+30h] [rbp-40h]
  float v43; // [rsp+38h] [rbp-38h]
  double vPos; // [rsp+40h] [rbp-30h]
  __int64 vPosa; // [rsp+40h] [rbp-30h]
  Vector v46; // 0:xmm0_8.8,8:xmm1_4.4

  v2.m128_f32[0] = this->return_time - 1.0;
  LODWORD(this->return_time) = v2.m128_i32[0];
  if ( v2.m128_f32[0] < 1.0 )
  {
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_wisp/wisp_relocate_teleport.vpcf",
                 2,
                 0,
                 0,
                 0);
    Caster = CDOTA_Buff::GetCaster(this);
    v40 = (*(Caster->_vptr_IHandleEntity + 62))(Caster);
    v41 = v12;
    v13 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v13, Particle, 0, v40, v41);
    v14 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v14, Particle);
    v15 = CDOTA_Buff::GetCaster(this);
    v16 = GetParticleManager();
    LODWORD(v15) = CDOTA_ParticleManager::CreateParticle(
                     v16,
                     "particles/units/heroes/hero_wisp/wisp_relocate_teleport.vpcf",
                     9,
                     v15,
                     0,
                     0);
    v17 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v17, v15);
    v18 = CDOTA_Buff::GetCaster(this);
    v19 = (*(v18->_vptr_IHandleEntity + 414))(v18);
    CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v19, this->m_vecReturnPosition, 250.0, v20);
    v21 = CDOTA_Buff::GetCaster(this);
    FindClearSpaceForUnit(v21, this->m_vecReturnPosition, 1);
    v22 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::Interrupt(v22);
    v23 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v23, "Hero_Wisp.Return", 0.0, 0, 0);
    v24 = CDOTA_Buff::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v24, "wisp_tether", 0);
    if ( AbilityByName != 0 )
    {
      m_pEntity_high = HIDWORD(AbilityByName[1].m_pEntity);
      if ( (m_pEntity_high + 2) > 1 )
      {
        v27 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_pEntity_high >> 9) & 0x3F];
        if ( v27 != 0 )
        {
          v28 = &v27[m_pEntity_high & 0x1FF];
          if ( v28 != 0 && m_pEntity_high == v28->m_EHandle.m_Index )
          {
            m_pInstance = v28->m_pInstance;
            if ( v28->m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 3) != 0 )
            {
              v30 = CDOTA_Buff::GetCaster(this);
              if ( !CDOTA_PlayerResource::IsDisableHelpSetForPlayerID(
                      g_pDOTAPlayerResource,
                      m_pInstance[61].m_iszPrivateVScripts.u.m_Id,
                      v30->m_nControllingPlayerID) )
              {
                CDOTA_ModifierManager::RemoveModifierByName(
                  &m_pInstance[64].m_worldGroupId,
                  "modifier_life_stealer_infest");
                CDOTA_ModifierManager::RemoveModifierByName(
                  &m_pInstance[64].m_worldGroupId,
                  "modifier_life_stealer_assimilate");
                v31 = (*(m_pInstance->_vptr_IHandleEntity + 376))(m_pInstance);
                CDOTALocomotor::InterruptMotionControllers(v31, 0);
                v32 = GetParticleManager();
                v33 = CDOTA_ParticleManager::CreateParticle(
                        v32,
                        "particles/units/heroes/hero_wisp/wisp_relocate_teleport.vpcf",
                        2,
                        0,
                        0,
                        0);
                v42 = (*(m_pInstance->_vptr_IHandleEntity + 62))(m_pInstance);
                v43 = v34;
                v35 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControl(v35, v33, 0, v42, v43);
                v36 = GetParticleManager();
                CDOTA_ParticleManager::ReleaseParticleIndex(v36, v33);
                v37 = GetParticleManager();
                v38 = CDOTA_ParticleManager::CreateParticle(
                        v37,
                        "particles/units/heroes/hero_wisp/wisp_relocate_teleport.vpcf",
                        9,
                        m_pInstance,
                        0,
                        0);
                v39 = GetParticleManager();
                CDOTA_ParticleManager::ReleaseParticleIndex(v39, v38);
                v46.z = this->m_vecReturnPosition.z + 0.0;
                *(&vPosa + 1) = this->m_vecReturnPosition.y + 50.0;
                *&vPosa = this->m_vecReturnPosition.x + 50.0;
                *&v46.x = vPosa;
                FindClearSpaceForUnit(m_pInstance, v46, 1);
                CDOTA_BaseNPC::Interrupt(m_pInstance);
              }
            }
          }
        }
      }
    }
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
  else
  {
    v3 = v2.m128_f32[0];
    do
      v3 = __FPREM__(v3, 10.0);
    while ( v5 != 0 );
    m_nFXTimeRemaining = this->m_nFXTimeRemaining;
    v7 = _mm_movedup_pd(COERCE_UNSIGNED_INT64(v3)).m128d_f64[0];
    *(&vPos + 1) = v7;
    LODWORD(vPos) = COERCE_UNSIGNED_INT(_mm_cmplt_ss(0x41100000u, v2).m128_f32[0]) & 0x3F800000;
    v8 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v8, m_nFXTimeRemaining, 1, vPos, 0.0);
  }
}


