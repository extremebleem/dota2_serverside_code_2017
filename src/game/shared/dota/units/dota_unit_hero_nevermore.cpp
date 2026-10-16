// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_nevermore.cpp:34
class CDOTA_Unit_Hero_Nevermore : public CDOTA_BaseNPC_Hero {
public:

private:

	int m_nFXDeath;  // +0x16ec
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
	CDOTA_Unit_Hero_Nevermore(CDOTA_Unit_Hero_Nevermore &);
	CDOTA_Unit_Hero_Nevermore(CDOTA_Unit_Hero_Nevermore &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetDeathEffectName();
	virtual void OnDeath();
	virtual void OnAlive();
	virtual void OnDying();
	CDOTA_Unit_Hero_Nevermore();
	virtual bool IsDemon();
	virtual void CalculateActivityModifiers(Activity);
	virtual ~CDOTA_Unit_Hero_Nevermore();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[502] GetDeathEffectName
	// vtable[470] OnDeath
	// vtable[471] OnAlive
	// vtable[469] OnDying
	// vtable[402] IsDemon
	// vtable[442] CalculateActivityModifiers
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_nevermore.cpp:90
class C_CDOTA_Unit_Hero_Nevermore_MapInstall {
	C_CDOTA_Unit_Hero_Nevermore_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_nevermore.cpp:152
class CDOTA_Ability_Nevermore_Shadowraze : public CDOTABaseAbility {
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

public:

private:

	int m_nFXIndex;  // +0x390
	int m_nFXIndexB;  // +0x394
	CDOTA_Ability_Nevermore_Shadowraze(CDOTA_Ability_Nevermore_Shadowraze &);
	CDOTA_Ability_Nevermore_Shadowraze(CDOTA_Ability_Nevermore_Shadowraze &);
	CDOTA_Ability_Nevermore_Shadowraze();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual int ShadowRazeLevel();
	virtual void ModifyOrAppendCriteria(CResponseCriteriaSet &);
	virtual DOTAAbilitySpeakTrigger_t SpeakTrigger();
	virtual const char * GetStolenActivityModifier();
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetCooldown(int);
	virtual ~CDOTA_Ability_Nevermore_Shadowraze();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[333] ShadowRazeLevel
	// vtable[159] ModifyOrAppendCriteria
	// vtable[300] SpeakTrigger
	// vtable[310] GetStolenActivityModifier
	// vtable[226] GetCastRange
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[242] GetCooldown
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_nevermore.cpp:181
class C_CDOTA_Ability_Nevermore_Shadowraze_MapInstall {
	C_CDOTA_Ability_Nevermore_Shadowraze_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_nevermore.cpp:346
class CDOTA_Modifier_Shadowraze_Counter : public CDOTA_Buff {
public:

private:

	float shadowraze_cooldown;  // +0xba8
	CDOTA_Modifier_Shadowraze_Counter();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsHidden();
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_Shadowraze_Counter();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[11] IsHidden
	// vtable[7] GetAttributes
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_nevermore.cpp:384
class CDOTA_Ability_Nevermore_Shadowraze1 : public CDOTA_Ability_Nevermore_Shadowraze {
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
	CDOTA_Ability_Nevermore_Shadowraze1(CDOTA_Ability_Nevermore_Shadowraze1 &);
	CDOTA_Ability_Nevermore_Shadowraze1(CDOTA_Ability_Nevermore_Shadowraze1 &);
	CDOTA_Ability_Nevermore_Shadowraze1();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnUpgrade();
	virtual int ShadowRazeLevel();
	virtual Activity GetGestureBasedActivity();
	virtual ~CDOTA_Ability_Nevermore_Shadowraze1();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[268] OnUpgrade
	// vtable[333] ShadowRazeLevel
	// vtable[211] GetGestureBasedActivity
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_nevermore.cpp:417
class CDOTA_Ability_Nevermore_Shadowraze2 : public CDOTA_Ability_Nevermore_Shadowraze {
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
	CDOTA_Ability_Nevermore_Shadowraze2(CDOTA_Ability_Nevermore_Shadowraze2 &);
	CDOTA_Ability_Nevermore_Shadowraze2(CDOTA_Ability_Nevermore_Shadowraze2 &);
	CDOTA_Ability_Nevermore_Shadowraze2();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnUpgrade();
	virtual int ShadowRazeLevel();
	virtual Activity GetGestureBasedActivity();
	virtual ~CDOTA_Ability_Nevermore_Shadowraze2();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[268] OnUpgrade
	// vtable[333] ShadowRazeLevel
	// vtable[211] GetGestureBasedActivity
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_nevermore.cpp:450
class CDOTA_Ability_Nevermore_Shadowraze3 : public CDOTA_Ability_Nevermore_Shadowraze {
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
	CDOTA_Ability_Nevermore_Shadowraze3(CDOTA_Ability_Nevermore_Shadowraze3 &);
	CDOTA_Ability_Nevermore_Shadowraze3(CDOTA_Ability_Nevermore_Shadowraze3 &);
	CDOTA_Ability_Nevermore_Shadowraze3();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnUpgrade();
	virtual int ShadowRazeLevel();
	virtual Activity GetGestureBasedActivity();
	virtual ~CDOTA_Ability_Nevermore_Shadowraze3();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[268] OnUpgrade
	// vtable[333] ShadowRazeLevel
	// vtable[211] GetGestureBasedActivity
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_nevermore.cpp:486
class CDOTA_Ability_Nevermore_Presence : public CDOTABaseAbility {
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
	CDOTA_Ability_Nevermore_Presence(CDOTA_Ability_Nevermore_Presence &);
	CDOTA_Ability_Nevermore_Presence(CDOTA_Ability_Nevermore_Presence &);
	CDOTA_Ability_Nevermore_Presence();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Nevermore_Presence();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_nevermore.cpp:502
class CDOTA_Modifier_Nevermore_Presence_Aura : public CDOTA_Buff {
public:

private:

	int presence_radius;  // +0xba8
	CDOTA_Modifier_Nevermore_Presence_Aura();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Nevermore_Presence_Aura();

	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[11] IsHidden
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_nevermore.cpp:541
class CDOTA_Modifier_Nevermore_Presence : public CDOTA_Buff {
public:

private:

	int presence_armor_reduction;  // +0xba8
	bool m_bWasHidden;  // +0xbac
	CDOTA_Modifier_Nevermore_Presence();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_Nevermore_Presence();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_nevermore.cpp:622
class CDOTA_Ability_Nevermore_Requiem : public CDOTABaseAbility {
public:

private:

	int requiem_line_width_start;  // +0x390
	int requiem_line_width_end;  // +0x394
	int m_nCachedSouls;  // +0x398
	int m_nFXIndex;  // +0x39c
	int m_nKilleater_nLines;  // +0x3a0

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
	CDOTA_Ability_Nevermore_Requiem(CDOTA_Ability_Nevermore_Requiem &);
	CDOTA_Ability_Nevermore_Requiem(CDOTA_Ability_Nevermore_Requiem &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	CDOTA_Ability_Nevermore_Requiem();
	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual bool OnAbilityPhaseStart();
	virtual void OnAbilityPhaseInterrupted();
	virtual bool OnProjectileHit_ExtraData(EHANDLE, const Vector &, KeyValues *);
	virtual void OnProjectileThink_ExtraData(int, const Vector &, KeyValues *);
	virtual void OnStolen(CDOTABaseAbility *);
	virtual const char * GetStolenActivityModifier();
	int GetCachedSouls();
	void DoRequiem(int, bool);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Nevermore_Requiem();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[290] OnProjectileHit_ExtraData
	// vtable[295] OnProjectileThink_ExtraData
	// vtable[307] OnStolen
	// vtable[310] GetStolenActivityModifier
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 960
};

// src/game/shared/dota/units/dota_unit_hero_nevermore.cpp:666
class C_CDOTA_Ability_Nevermore_Requiem_MapInstall {
	C_CDOTA_Ability_Nevermore_Requiem_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_nevermore.cpp:1056
class CDOTA_Modifier_Nevermore_Requiem_InvisBreak : public CDOTA_Buff {
public:

private:

	bool bDisableInvis;  // +0xba8
	CDOTA_Modifier_Nevermore_Requiem_InvisBreak();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void CheckState(CDOTABuffState &);
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Nevermore_Requiem_InvisBreak();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_nevermore.cpp:1119
class CDOTA_Modifier_Nevermore_Requiem_Thinker : public CDOTA_Buff {
public:

	CDOTA_Modifier_Nevermore_Requiem_Thinker();
	virtual void OnDestroy();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Nevermore_Requiem_Thinker();

	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_nevermore.cpp:1160
class CDOTA_Modifier_Nevermore_Requiem_Aura : public CDOTA_Buff {
public:

	CDOTA_Modifier_Nevermore_Requiem_Aura(CDOTA_Modifier_Nevermore_Requiem_Aura &);
	CDOTA_Modifier_Nevermore_Requiem_Aura(const CDOTA_Modifier_Nevermore_Requiem_Aura &);
	CDOTA_Modifier_Nevermore_Requiem_Aura();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Nevermore_Requiem_Aura();

	// vtable[11] IsHidden
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_nevermore.cpp:1175
class CDOTA_Modifier_Nevermore_Requiem : public CDOTA_Buff {
public:

private:

	int requiem_reduction_ms;  // +0xba8
	int requiem_reduction_damage;  // +0xbac
	CDOTA_Modifier_Nevermore_Requiem();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBaseDamageOutgoing_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Nevermore_Requiem();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_nevermore.cpp:1242
class CDOTA_Ability_Nevermore_Necromastery : public CDOTABaseAbility {
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
	CDOTA_Ability_Nevermore_Necromastery(CDOTA_Ability_Nevermore_Necromastery &);
	CDOTA_Ability_Nevermore_Necromastery(CDOTA_Ability_Nevermore_Necromastery &);
	CDOTA_Ability_Nevermore_Necromastery();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual bool OnSaveState(KeyValues *);
	virtual bool OnLoadState(KeyValues *);
	virtual ~CDOTA_Ability_Nevermore_Necromastery();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[248] OnSaveState
	// vtable[249] OnLoadState
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_nevermore.cpp:1300
class CDOTA_Modifier_Nevermore_Necromastery : public CDOTA_Buff {
public:

private:

	int necromastery_damage_per_soul;  // +0xba8
	int necromastery_max_souls;  // +0xbac
	int necromastery_max_souls_scepter;  // +0xbb0
	int necromastery_souls_hero_bonus;  // +0xbb4
	int m_iParticleSoulsIndex;  // +0xbb8
	int m_FXIndex;  // +0xbbc
	CDOTA_Modifier_Nevermore_Necromastery();
	virtual int GetAttributes();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnDeath(const CModifierParams &);
	ModifierVariant_t OnRespawn(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual bool RemoveOnDeath();
	virtual int GetPriority();
	virtual ~CDOTA_Modifier_Nevermore_Necromastery();

	// vtable[7] GetAttributes
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[54] RemoveOnDeath
	// vtable[6] GetPriority
	// sizeof = 3008
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Nevermore::~CDOTA_Unit_Hero_Nevermore  (line 34, @0x0000000002a18bb0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Nevermore::~CDOTA_Unit_Hero_Nevermore(CDOTA_Unit_Hero_Nevermore *const this)
{
  this->_vptr_IHandleEntity = &off_4366B70;
  this->_vptr_INextBotEventResponder = &off_4367B50;
  this->_vptr_CObstructionObject = &off_4367E80;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Nevermore::~CDOTA_Unit_Hero_Nevermore  (line 34, @0x0000000002a18bf0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Nevermore
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Nevermore::~CDOTA_Unit_Hero_Nevermore(CDOTA_Unit_Hero_Nevermore *const this)
{
  this->_vptr_IHandleEntity = &off_4366B70;
  this->_vptr_INextBotEventResponder = &off_4367B50;
  this->_vptr_CObstructionObject = &off_4367E80;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Nevermore::Schema_DynamicBinding  (line 36, @0x0000000002a0ac80, libserver.so)
// globals: CDOTA_Unit_Hero_Nevermore::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Nevermore::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Nevermore *const this)
{
  return CDOTA_Unit_Hero_Nevermore::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Nevermore::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 36, @0x0000000002a0acb0, libserver.so)
// globals: CDOTA_Unit_Hero_Nevermore::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Nevermore::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Nevermore::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Nevermore::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Nevermore::CEntityInstanceEntityClass::DestructInstance  (line 36, @0x0000000002a0acc0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Nevermore>
void __fastcall CDOTA_Unit_Hero_Nevermore::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Nevermore::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Nevermore::CEntityInstanceEntityClass::FreeInstance  (line 36, @0x0000000002a0ace0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Nevermore::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Nevermore::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Nevermore::CEntityInstanceEntityClass::CanAllocate  (line 36, @0x0000000002a0ad00, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Nevermore::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Nevermore::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Nevermore::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 36, @0x0000000002a0ad10, libserver.so)
// globals: CDOTA_Unit_Hero_Nevermore::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Nevermore::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Nevermore::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Nevermore::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Nevermore::CEntityInstanceEntityClass::AllocateInstance  (line 36, @0x0000000002a0ffc0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Nevermore::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Nevermore::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Nevermore::CEntityInstanceEntityClass::ConstructInstance  (line 36, @0x0000000002a13670, libserver.so)  // inlines: CDOTA_Unit_Hero_Nevermore, Construct<CDOTA_Unit_Hero_Nevermore>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Nevermore::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Nevermore::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *(p + 1467) = -1;
    *p = &off_4366B70;
    *(p + 236) = &off_4367B50;
    *(p + 257) = &off_4367E80;
  }
  return p;
}


// CDOTA_Unit_Hero_Nevermore::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 36, @0x0000000002a205f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Nevermore::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Nevermore::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Nevermore::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 36, @0x0000000002a20b20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Nevermore::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Nevermore::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Nevermore::GetEntityClassInternal  (line 36, @0x0000000002a3bba0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "npc_dota_hero_nevermore", "CDOTA_Unit_Hero_Nevermore"
// globals: `guard variable for'CDOTA_Unit_Hero_Nevermore::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NevermoreClass, CDOTA_Unit_Hero_Nevermore::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NevermoreClass, __dso_handle, CDOTA_Unit_Hero_Nevermore::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Nevermore::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_NevermoreClassInfo, CDOTA_Unit_Hero_Nevermore::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_NevermoreClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Nevermore::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Nevermore::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NevermoreClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Nevermore::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NevermoreClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Nevermore::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NevermoreClass);
    CDOTA_Unit_Hero_Nevermore::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NevermoreClass._vptr_CEntityClass = off_4366AF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Nevermore::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NevermoreClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Nevermore::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Nevermore::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NevermoreClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_NevermoreClass != 0 )
    return &CDOTA_Unit_Hero_Nevermore::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NevermoreClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Nevermore::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_NevermoreClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Nevermore::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_NevermoreClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Nevermore::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_NevermoreClassInfo,
      "CDOTA_Unit_Hero_Nevermore",
      "npc_dota_hero_nevermore",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Nevermore::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_NevermoreClassInfo);
  }
  CDOTA_Unit_Hero_Nevermore::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NevermoreClass.m_pClassInfo = &CDOTA_Unit_Hero_Nevermore::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_NevermoreClassInfo;
  CDOTA_Unit_Hero_Nevermore::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NevermoreClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Nevermore::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_NevermoreClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_NevermoreClass = &CDOTA_Unit_Hero_Nevermore::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NevermoreClass;
  CDOTA_Unit_Hero_Nevermore::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_NevermoreClassInfo.m_pClass = &CDOTA_Unit_Hero_Nevermore::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NevermoreClass;
  CDOTA_Unit_Hero_Nevermore::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NevermoreClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_NevermoreClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Nevermore::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NevermoreClass;
}


// CDOTA_Unit_Hero_Nevermore::GetDeathEffectName  (line 39, @0x0000000002a0ad20, libserver.so)
const char *__fastcall CDOTA_Unit_Hero_Nevermore::GetDeathEffectName(CDOTA_Unit_Hero_Nevermore *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Nevermore::IsDemon  (line 53, @0x0000000002a0ad30, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Nevermore::IsDemon(const CDOTA_Unit_Hero_Nevermore *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Nevermore::CalculateActivityModifiers  (line 55, @0x0000000002a19030, libserver.so)
// calls: CDOTA_BaseNPC::CalculateActivityModifiers, CDOTA_BaseNPC::GetAttackSpeed, CDOTA_BaseNPC::AddActivityModifier
// strings: "fast_run", "fastest", "faster"
void __fastcall CDOTA_Unit_Hero_Nevermore::CalculateActivityModifiers(
        CDOTA_Unit_Hero_Nevermore *const this,
        Activity iActivity)
{
  float v3; // xmm0_4
  UtlSymId_t v4[16]; // [rsp+0h] [rbp-20h] BYREF

  CDOTA_BaseNPC::CalculateActivityModifiers(this, iActivity);
  v3 = CDOTA_BaseNPC::GetAttackSpeed(this) * 100.0;
  if ( v3 > 360.0 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "fastest");
  }
  else if ( v3 >= 275.0 && v3 <= 360.0 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "faster");
  }
  else if ( v3 >= 175.0 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "fast");
  }
  if ( (*(this->_vptr_IHandleEntity + 386))(this) > 384 )
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "fast_run");
}


// CDOTA_Unit_Hero_Nevermore::YouForgotToImplementOrDeclareServerClass  (line 90, @0x00000000029b5ac0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Nevermore::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Nevermore *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Nevermore::GetServerClass  (line 90, @0x00000000029ca170, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Nevermore::GetServerClass(CDOTA_Unit_Hero_Nevermore *const this)
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


// CDOTA_Unit_Hero_Nevermore::OnAlive  (line 100, @0x00000000029b5ad0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Nevermore::OnAlive(CDOTA_Unit_Hero_Nevermore *const this)
{
  ;
}


// CDOTA_Unit_Hero_Nevermore::OnDying  (line 113, @0x00000000029b5ae0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Nevermore::OnDying(CDOTA_Unit_Hero_Nevermore *const this)
{
  ;
}


// CDOTA_Unit_Hero_Nevermore::OnDeath  (line 129, @0x00000000029ba1e0, libserver.so)
// calls: CBaseEntity::AddEffects
void __fastcall CDOTA_Unit_Hero_Nevermore::OnDeath(CDOTA_Unit_Hero_Nevermore *const this)
{
  if ( !this->m_bCustomKillEffect.m_Value )
    CBaseEntity::AddEffects(this, 32);
}


// CDOTA_Ability_Nevermore_Shadowraze::~CDOTA_Ability_Nevermore_Shadowraze  (line 152, @0x0000000002a17940, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Nevermore_Shadowraze::~CDOTA_Ability_Nevermore_Shadowraze(
        CDOTA_Ability_Nevermore_Shadowraze *const this)
{
  this->_vptr_IHandleEntity = &off_4367F50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Nevermore_Shadowraze::~CDOTA_Ability_Nevermore_Shadowraze  (line 152, @0x0000000002a17960, libserver.so)  // inlines: ~CDOTA_Ability_Nevermore_Shadowraze
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Nevermore_Shadowraze::~CDOTA_Ability_Nevermore_Shadowraze(
        CDOTA_Ability_Nevermore_Shadowraze *const this)
{
  this->_vptr_IHandleEntity = &off_4367F50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Nevermore_Shadowraze::Schema_DynamicBinding  (line 154, @0x0000000002a0ad40, libserver.so)
// globals: CDOTA_Ability_Nevermore_Shadowraze::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nevermore_Shadowraze::Schema_DynamicBinding(
        const CDOTA_Ability_Nevermore_Shadowraze *const this)
{
  return CDOTA_Ability_Nevermore_Shadowraze::s_pSchemaBinding;
}


// CDOTA_Ability_Nevermore_Shadowraze::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 154, @0x0000000002a0ad50, libserver.so)
// globals: CDOTA_Ability_Nevermore_Shadowraze::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nevermore_Shadowraze::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Nevermore_Shadowraze::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nevermore_Shadowraze::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Nevermore_Shadowraze::CEntityInstanceEntityClass::DestructInstance  (line 154, @0x0000000002a0ad60, libserver.so)  // inlines: Destruct<CDOTA_Ability_Nevermore_Shadowraze>
void __fastcall CDOTA_Ability_Nevermore_Shadowraze::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Nevermore_Shadowraze::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Nevermore_Shadowraze::CEntityInstanceEntityClass::FreeInstance  (line 154, @0x0000000002a0ad80, libserver.so)
void __fastcall CDOTA_Ability_Nevermore_Shadowraze::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Nevermore_Shadowraze::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Nevermore_Shadowraze::CEntityInstanceEntityClass::CanAllocate  (line 154, @0x0000000002a0ada0, libserver.so)
bool __fastcall CDOTA_Ability_Nevermore_Shadowraze::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Nevermore_Shadowraze::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Nevermore_Shadowraze::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 154, @0x0000000002a0adb0, libserver.so)
// globals: CDOTA_Ability_Nevermore_Shadowraze::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Nevermore_Shadowraze::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Nevermore_Shadowraze::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nevermore_Shadowraze::s_pSchemaBinding;
}


// CDOTA_Ability_Nevermore_Shadowraze::CEntityInstanceEntityClass::AllocateInstance  (line 154, @0x0000000002a10000, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Nevermore_Shadowraze::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Nevermore_Shadowraze::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Nevermore_Shadowraze::CEntityInstanceEntityClass::ConstructInstance  (line 154, @0x0000000002a145d0, libserver.so)  // inlines: CDOTA_Ability_Nevermore_Shadowraze, Construct<CDOTA_Ability_Nevermore_Shadowraze>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Nevermore_Shadowraze::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Nevermore_Shadowraze::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4367F50;
  }
  return p;
}


// CDOTA_Ability_Nevermore_Shadowraze::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 154, @0x0000000002a1fd60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Nevermore_Shadowraze::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nevermore_Shadowraze::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Nevermore_Shadowraze::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 154, @0x0000000002a1fd80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Nevermore_Shadowraze::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nevermore_Shadowraze::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInfo  (line 154, @0x0000000002a308f0, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release
// callers: CDOTA_Ability_Nevermore_Shadowraze2::GetEntityClassInternal, CDOTA_Ability_Nevermore_Shadowraze3::GetEntityClassInternal, CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal
// strings: "nevermore_shadowraze", "CDOTA_Ability_Nevermore_Shadowraze", "dota_base_ability", "CDOTABaseAbility", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClassInfo, CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClassInfo, `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo, CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo
CEntityClassInfo *__cdecl CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInfo()
{
  if ( `guard variable for'CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClassInfo != 0 )
    return &CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClassInfo) == 0 )
    return &CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClassInfo;
  if ( `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo) != 0 )
  {
    if ( `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo == 0
      && __cxa_guard_acquire(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo) != 0 )
    {
      if ( `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo == 0
        && __cxa_guard_acquire(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo) != 0 )
      {
        CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
          &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo,
          "CGameEntity",
          0,
          0,
          &g_EntityRootClassInfo);
        __cxa_guard_release(&`guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
      }
      CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
        &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo,
        "CBaseEntity",
        0,
        0,
        &CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo);
      __cxa_guard_release(&`guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
    }
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo,
      "CDOTABaseAbility",
      "dota_base_ability",
      0,
      &CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
  }
  CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
    &CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClassInfo,
    "CDOTA_Ability_Nevermore_Shadowraze",
    "nevermore_shadowraze",
    0,
    &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClassInfo);
  return &CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClassInfo;
}


// CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal  (line 154, @0x0000000002a3ccb0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "nevermore_shadowraze", "CDOTA_Ability_Nevermore_Shadowraze"
// globals: `guard variable for'CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass, CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Nevermore_Shadowraze::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClassInfo, CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClassInfo
CEntityClass *__cdecl CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass) != 0 )
  {
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_pClassInfo = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_flags = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_pInputs = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_nInputCount = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_pOutputs = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_nOutputCount = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_pGameClass = 0;
    CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass._vptr_CEntityClass = off_4367ED0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass);
    __cxa_atexit(
      CDOTA_Ability_Nevermore_Shadowraze::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Nevermore_ShadowrazeClass != 0 )
    return &CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass;
  if ( `guard variable for'CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClassInfo,
      "CDOTA_Ability_Nevermore_Shadowraze",
      "nevermore_shadowraze",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClassInfo);
  }
  CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_pClassInfo = &CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClassInfo;
  CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_pBaseClassInfo = CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Nevermore_ShadowrazeClass = &CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass;
  CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClassInfo.m_pClass = &CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass;
  CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Nevermore_ShadowrazeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_ShadowrazeClass;
}


// CDOTA_Ability_Nevermore_Shadowraze::ShadowRazeLevel  (line 159, @0x0000000002a0adc0, libserver.so)
int __fastcall CDOTA_Ability_Nevermore_Shadowraze::ShadowRazeLevel(CDOTA_Ability_Nevermore_Shadowraze *const this)
{
  return 0;
}


// CDOTA_Ability_Nevermore_Shadowraze::SpeakTrigger  (line 162, @0x0000000002a0add0, libserver.so)
DOTAAbilitySpeakTrigger_t __fastcall CDOTA_Ability_Nevermore_Shadowraze::SpeakTrigger(
        CDOTA_Ability_Nevermore_Shadowraze *const this)
{
  return DOTAAbilitySpeakTrigger_t::DOTA_ABILITY_SPEAK_START_ACTION_PHASE;
}


// CDOTA_Ability_Nevermore_Shadowraze::GetStolenActivityModifier  (line 164, @0x0000000002a0ade0, libserver.so)
const char *__fastcall CDOTA_Ability_Nevermore_Shadowraze::GetStolenActivityModifier(
        CDOTA_Ability_Nevermore_Shadowraze *const this)
{
  return "shadowraze";
}


// CDOTA_Ability_Nevermore_Shadowraze::GetCastRange  (line 166, @0x0000000002a33ca0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "shadowraze_range"
int __fastcall CDOTA_Ability_Nevermore_Shadowraze::GetCastRange(
        CDOTA_Ability_Nevermore_Shadowraze *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "shadowraze_range", -1, 0);
}


// CDOTA_Ability_Nevermore_Shadowraze::YouForgotToImplementOrDeclareServerClass  (line 181, @0x00000000029b5af0, libserver.so)
int __fastcall CDOTA_Ability_Nevermore_Shadowraze::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Nevermore_Shadowraze *const this)
{
  return 0;
}


// CDOTA_Ability_Nevermore_Shadowraze::GetServerClass  (line 181, @0x00000000029c9070, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Nevermore_Shadowraze::GetServerClass(
        CDOTA_Ability_Nevermore_Shadowraze *const this)
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


// CDOTA_Ability_Nevermore_Shadowraze::GetCooldown  (line 188, @0x00000000029e6100, libserver.so)
// calls: CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_nevermore_2"
float __fastcall CDOTA_Ability_Nevermore_Shadowraze::GetCooldown(
        CDOTA_Ability_Nevermore_Shadowraze *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float result; // xmm0_4
  float flCooldown; // [rsp+Ch] [rbp-14h]

  flCooldown = CDOTABaseAbility::GetCooldown(this, iLevel);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_nevermore_2", 0);
  result = flCooldown;
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    return flCooldown - CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  return result;
}


// CDOTA_Ability_Nevermore_Shadowraze::OnSpellStart  (line 201, @0x00000000029f39c0, libserver.so)  // inlines: CBroadcastRecipientFilter, CGameTrace, CReliableBroadcastRecipientFilter, CUtlMemory, CUtlVector, CUtlVectorBase, EnableInteractsWith, FindModifierByName, Get, GetEntityIdentity, GetEntryIndex, GetFloat, GetInstance, GetLevelSpecialValueFor<int>, GetParent, GetTeamNumber, IndexToIdentity, Init, IsRealHero, IsValid, LengthSqr, LookupEntity, Ray_t, RnCollisionAttr_t, SpeakConcept, ToDOTABaseNPC, ToDOTABaseNPCHero, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator=, operator[], ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter, ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CDOTA_BaseNPC::GetOpposingTeamNumber, CDOTAFogOfWarSystem::IsLocationVisible, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, GetGlobalTeam (40 total)
// strings: "shadowraze_range", "shadowraze_radius", "particles/units/heroes/hero_nevermore/nevermore_shadowraze.vpcf", "modifier_nevermore_shadowraze_counter", "shadowraze_cooldown", "particles/units/heroes/hero_nevermore/nevermore_shadowraze_double.vpcf" (10 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Nevermore_Shadowraze::OnSpellStart(CDOTA_Ability_Nevermore_Shadowraze *const this)
{
  int LevelSpecialValue; // r12d
  int v3; // r13d
  CDOTA_BaseNPC *Caster; // rax
  __m128i x_low; // xmm5
  __m128i y_low; // xmm6
  float v7; // xmm0_4
  float v8; // r12d
  float v9; // r14d
  CDOTA_BaseNPC *v10; // rax
  const Vector *AbsOrigin; // rax
  vec_t v12; // xmm1_4
  vec_t v13; // xmm0_4
  float m_fValue; // xmm0_4
  __m128i v15; // xmm3
  float v16; // r13d
  CDOTA_BaseNPC *v17; // rax
  int OpposingTeamNumber; // eax
  CDOTA_BaseNPC *v19; // rax
  int v20; // eax
  CTeam *GlobalTeam; // rax
  int v22; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v24; // rax
  CDOTA_BaseNPC *v25; // r12
  CDOTA_BaseNPC *v26; // rax
  __int64 v27; // r13
  int v28; // r15d
  CEntityInstance *m_pInstance; // r12
  CModifieractoryDictionary *v30; // rax
  IModifierFactory *Factory; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v33; // r14
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  int v36; // eax
  CHandle<CBaseEntity> *v37; // rdx
  uint32 v38; // eax
  __int16 v39; // cx
  CEntityIdentity *v40; // rdx
  CEntityIdentity *v41; // rdx
  CDOTA_BaseNPC *v42; // r14
  CDOTA_BaseNPC *v43; // rax
  double v44; // xmm0_8
  CDOTA_BaseNPC_Hero *v45; // r14
  CDOTA_BaseNPC *v46; // rax
  CDOTA_BaseNPC_Hero *v47; // rdi
  CDOTA_BaseNPC_Hero *v48; // r14
  CDOTA_BaseNPC *v49; // rax
  CDOTA_BaseNPC_Hero *v50; // rdi
  CDOTA_BaseNPC_Hero *v51; // r14
  CDOTA_BaseNPC *v52; // rax
  CDOTA_BaseNPC_Hero *v53; // rdi
  CHandle<CBaseEntity> *v54; // rdx
  uint32 m_Index; // eax
  __int16 v56; // cx
  CEntityIdentity *v57; // rdx
  CEntityIdentity *v58; // rdx
  CDOTA_BaseNPC_Hero *v59; // r14
  CDOTA_BaseNPC *v60; // rax
  CDOTA_BaseNPC_Hero *v61; // rdi
  float v62; // xmm1_4
  CDOTA_BaseNPC *v63; // rax
  CDOTA_Buff *v64; // rax
  CDOTA_BaseNPC *v65; // rax
  CDOTA_BaseNPC *v66; // rax
  const Vector *v67; // r12
  CDOTA_BaseNPC *v68; // r14
  int m_nFXIndex; // r13d
  CDOTA_ParticleManager *v70; // rax
  CDOTA_ParticleManager *v71; // rax
  CDOTA_BaseNPC *v72; // rax
  int v73; // r12d
  CDOTA_ParticleManager *v74; // rax
  CDOTA_BaseNPC *v75; // rax
  CDOTA_BaseNPC *v76; // rax
  const Vector *v77; // r12
  CDOTA_BaseNPC *v78; // r14
  int m_nFXIndexB; // r13d
  CDOTA_ParticleManager *v80; // rax
  CDOTA_ParticleManager *v81; // rax
  float v82; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_BaseNPC *v84; // rax
  CDOTA_BaseNPC_Hero *v85; // rdi
  bool bDrawCounter; // [rsp+47h] [rbp-309h]
  int nMaxStackCount; // [rsp+48h] [rbp-308h]
  float shadowraze_cooldownb; // [rsp+4Ch] [rbp-304h]
  float shadowraze_cooldown; // [rsp+4Ch] [rbp-304h]
  int shadowraze_cooldowna; // [rsp+4Ch] [rbp-304h]
  Vector vDirection; // [rsp+50h] [rbp-300h] BYREF
  Vector vLoc; // [rsp+60h] [rbp-2F0h] BYREF
  double v93; // [rsp+70h] [rbp-2E0h]
  float v94; // [rsp+78h] [rbp-2D8h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+80h] [rbp-2D0h] BYREF
  CResponseCriteriaSet criteria; // [rsp+C0h] [rbp-290h] BYREF
  int v97; // [rsp+F8h] [rbp-258h]
  int v98; // [rsp+FCh] [rbp-254h]
  float v99; // [rsp+100h] [rbp-250h]
  char v100; // [rsp+104h] [rbp-24Ch]
  bool v101; // [rsp+105h] [rbp-24Bh]
  trace_t tr; // [rsp+110h] [rbp-240h] BYREF
  KeyValues kv; // [rsp+1C0h] [rbp-190h] BYREF
  CReliableBroadcastRecipientFilter filter; // [rsp+1E0h] [rbp-170h] BYREF
  unsigned __int64 v105; // [rsp+318h] [rbp-38h]

  v105 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "shadowraze_range", -1, 0);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "shadowraze_radius", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  (*(Caster->_vptr_IHandleEntity + 61))(Caster, &vDirection, 0, 0);
  x_low = LODWORD(vDirection.x);
  y_low = LODWORD(vDirection.y);
  *x_low.m128i_i32 = vDirection.x * LevelSpecialValue;
  *y_low.m128i_i32 = vDirection.y * LevelSpecialValue;
  v7 = LevelSpecialValue * vDirection.z;
  v8 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
  v9 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
  shadowraze_cooldownb = v7;
  v10 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
  v12 = v9 + AbsOrigin->y;
  v13 = shadowraze_cooldownb + AbsOrigin->z;
  vLoc.x = v8 + AbsOrigin->x;
  vLoc.y = v12;
  vLoc.z = v13;
  memset(&tr.m_ShapeAttributes, 0, 31);
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  *(&criteria.m_Lookup.m_Elements.m_pMemory + 1) = (vLoc.y + 0.0) - (vLoc.y + 0.0);
  v99 = m_fValue;
  *(&criteria._vptr_CResponseCriteriaSet + 1) = vLoc.y + 0.0;
  *&criteria.m_Lookup.m_LessFunc = vLoc.z + 256.0;
  *&criteria._vptr_CResponseCriteriaSet = vLoc.x + 0.0;
  *&criteria.m_Lookup.m_Elements.m_pMemory = (vLoc.x + 0.0) - (vLoc.x + 0.0);
  *&criteria.m_Lookup.m_Elements.m_nAllocationCount = (vLoc.z - 256.0) - (vLoc.z + 256.0);
  HIDWORD(criteria.m_Lookup.m_LessFunc) = 0;
  memset(&criteria.m_Lookup.m_Elements.m_nGrowSize, 0, 28);
  v98 = 0;
  v97 = 0;
  v100 = 1;
  v101 = (((*&criteria.m_Lookup.m_Elements.m_pMemory * *&criteria.m_Lookup.m_Elements.m_pMemory)
         + (*(&criteria.m_Lookup.m_Elements.m_pMemory + 1) * *(&criteria.m_Lookup.m_Elements.m_pMemory + 1)))
        + (*&criteria.m_Lookup.m_Elements.m_nAllocationCount * *&criteria.m_Lookup.m_Elements.m_nAllocationCount)) != 0.0;
  CTraceFilterSimple::CTraceFilterSimple(&entities, 0, 4, 0);
  entities.m_Memory.m_pMemory = (entities.m_Memory.m_pMemory | 0x7001);
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &criteria, &entities, &tr);
  *v15.m128i_i32 = v3;
  vLoc = tr.endpos;
  v16 = COERCE_FLOAT(_mm_cvtsi128_si32(v15));
  v17 = CDOTABaseAbility::GetCaster(this);
  OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v17);
  LOBYTE(v8) = CDOTAFogOfWarSystem::IsLocationVisible(&g_DOTAFogOfWarSystem, OpposingTeamNumber, &vLoc, v16);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filter);
  if ( LOBYTE(v8) == 0 )
  {
    v19 = CDOTABaseAbility::GetCaster(this);
    v20 = CDOTA_BaseNPC::GetOpposingTeamNumber(v19);
    GlobalTeam = GetGlobalTeam(v20);
    CRecipientFilter::RemoveRecipientsByTeam(&filter, GlobalTeam);
  }
  v22 = CDOTABaseAbility::CreateAbilityParticleEffect(
          this,
          "particles/units/heroes/hero_nevermore/nevermore_shadowraze.vpcf",
          8,
          0,
          &filter);
  *(&v93 + 1) = vLoc.y + 0.0;
  v94 = vLoc.z + 40.0;
  *&v93 = vLoc.x + 0.0;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, v22, 0, v93, v94);
  v24 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v24, v22);
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v25 = CDOTABaseAbility::GetCaster(this);
  v26 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v26->m_iTeamNum.m_Value, &vLoc, v25, v16, &entities, 2, 19, 0, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v27 = 0;
    v28 = 0;
    bDrawCounter = 0;
    nMaxStackCount = 0;
    while ( 1 )
    {
      shadowraze_cooldowna = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "shadowraze_cooldown", -1, 0);
      v54 = &entities.m_Memory.m_pMemory[v27];
      m_Index = entities.m_Memory.m_pMemory[v27].m_Index;
      if ( m_Index + 2 <= 1
        || (v56 = v54->m_Index,
            (v57 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v54->m_Index) >> 9) & 0x3F]) == 0)
        || (v58 = &v57[v56 & 0x1FF]) == 0
        || m_Index != v58->m_EHandle.m_Index
        || (m_pInstance = v58->m_pInstance, v58->m_pInstance == 0)
        || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
      {
        m_pInstance = 0;
      }
      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0
        || LOBYTE(m_pInstance[71].m_pEntity) != 0
        || (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) == 0 )
      {
        goto LABEL_14;
      }
      v30 = ModifierFactoryDictionary();
      Factory = CModifieractoryDictionary::FindFactory(v30, "modifier_nevermore_shadowraze_counter");
      ModifierByName = CDOTA_ModifierManager::FindModifierByName(
                         &m_pInstance[64].m_worldGroupId,
                         Factory,
                         "modifier_nevermore_shadowraze_counter",
                         0);
      v33 = ModifierByName;
      if ( ModifierByName == 0 )
      {
        KeyValues::KeyValues(&kv, "modifier_nevermore_shadowraze_counter");
        KeyValues::SetFloat(&kv, "duration", v62);
        v63 = CDOTABaseAbility::GetCaster(this);
        v64 = CDOTA_BaseNPC::AddNewModifier(m_pInstance, v63, this, "modifier_nevermore_shadowraze_counter", &kv, 0);
        if ( v64 != 0 )
        {
          (*(v64->_vptr_CDOTA_Buff + 28))(v64, 1);
          nMaxStackCount = 1;
        }
        KeyValues::~KeyValues(&kv);
        goto LABEL_14;
      }
      (*(ModifierByName->_vptr_CDOTA_Buff + 25))(ModifierByName);
      (*(v33->_vptr_CDOTA_Buff + 63))(v33, 1, shadowraze_cooldowna);
      if ( (*(v33->_vptr_CDOTA_Buff + 27))(v33) > nMaxStackCount )
      {
        nMaxStackCount = (*(v33->_vptr_CDOTA_Buff + 27))(v33);
        m_pParent = this->m_pGameSceneNode->m_pParent;
        if ( m_pParent == 0 )
        {
LABEL_56:
          OwnerEntity = 0;
          goto LABEL_13;
        }
      }
      else
      {
        m_pParent = this->m_pGameSceneNode->m_pParent;
        if ( m_pParent == 0 )
          goto LABEL_56;
      }
      OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
LABEL_13:
      bDrawCounter = CBaseModelEntity::CanBeSeenByTeam(m_pInstance, OwnerEntity->m_iTeamNum.m_Value);
LABEL_14:
      v36 = (*(this->_vptr_IHandleEntity + 247))(this);
      v37 = &entities.m_Memory.m_pMemory[v27];
      shadowraze_cooldown = v36;
      v38 = entities.m_Memory.m_pMemory[v27].m_Index;
      if ( v38 + 2 <= 1
        || (v39 = v37->m_Index,
            (v40 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v37->m_Index) >> 9) & 0x3F]) == 0)
        || (v41 = &v40[v39 & 0x1FF]) == 0
        || v38 != v41->m_EHandle.m_Index
        || (v42 = v41->m_pInstance, v41->m_pInstance == 0)
        || !v42->m_bIsDOTANPC )
      {
        v42 = 0;
      }
      v43 = CDOTABaseAbility::GetCaster(this);
      v44 = ApplyDamage(v43, v42, this, shadowraze_cooldown, 2, 0);
      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
        && LOBYTE(m_pInstance[71].m_pEntity) == 0
        && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance, v44) == 0 )
      {
        if ( nMaxStackCount == 3 )
        {
          v45 = 0;
          if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
            v45 = m_pInstance;
          v46 = CDOTABaseAbility::GetCaster(this);
          if ( v46 != 0 && (v46->m_iUnitType & 1) != 0 )
            v47 = v46;
          else
            v47 = 0;
          EconEntity_OnOwnerKillEaterEvent(
            v47,
            v45,
            kill_eater_event_t::kKillEaterEvent_ShadowFiend_TripleRazeKills,
            1,
            INVALID_ITEM_DEF_INDEX);
        }
        if ( (*(this->_vptr_IHandleEntity + 333))(this) == 1 )
        {
          v48 = 0;
          if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
            v48 = m_pInstance;
          v49 = CDOTABaseAbility::GetCaster(this);
          if ( v49 != 0 && (v49->m_iUnitType & 1) != 0 )
            v50 = v49;
          else
            v50 = 0;
          EconEntity_OnOwnerKillEaterEvent(
            v50,
            v48,
            kill_eater_event_t::kKillEaterEvent_ShadowFiend_QRazeKills,
            1,
            INVALID_ITEM_DEF_INDEX);
        }
        if ( (*(this->_vptr_IHandleEntity + 333))(this) == 2 )
        {
          v51 = 0;
          if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
            v51 = m_pInstance;
          v52 = CDOTABaseAbility::GetCaster(this);
          if ( v52 != 0 && (v52->m_iUnitType & 1) != 0 )
            v53 = v52;
          else
            v53 = 0;
          EconEntity_OnOwnerKillEaterEvent(
            v53,
            v51,
            kill_eater_event_t::kKillEaterEvent_ShadowFiend_WRazeKills,
            1,
            INVALID_ITEM_DEF_INDEX);
        }
        if ( (*(this->_vptr_IHandleEntity + 333))(this) == 3 )
        {
          v59 = 0;
          if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
            v59 = m_pInstance;
          v60 = CDOTABaseAbility::GetCaster(this);
          if ( v60 != 0 && (v60->m_iUnitType & 1) != 0 )
            v61 = v60;
          else
            v61 = 0;
          EconEntity_OnOwnerKillEaterEvent(
            v61,
            v59,
            kill_eater_event_t::kKillEaterEvent_ShadowFiend_ERazeKills,
            1,
            INVALID_ITEM_DEF_INDEX);
        }
      }
      ++v28;
      ++v27;
      if ( entities.m_Size <= v28 )
      {
        if ( nMaxStackCount == 2 && bDrawCounter )
        {
          v65 = CDOTABaseAbility::GetCaster(this);
          this->m_nFXIndex = CDOTABaseAbility::CreateAbilityParticleEffect(
                               this,
                               "particles/units/heroes/hero_nevermore/nevermore_shadowraze_double.vpcf",
                               1,
                               v65,
                               0);
          v66 = CDOTABaseAbility::GetCaster(this);
          v67 = CBaseEntity::GetAbsOrigin(v66);
          v68 = CDOTABaseAbility::GetCaster(this);
          m_nFXIndex = this->m_nFXIndex;
          v70 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v70, m_nFXIndex, 1, v68, 5, "attach_hitloc", *v67, 1);
          LODWORD(v67) = this->m_nFXIndex;
          v71 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v71, v67);
        }
        else if ( nMaxStackCount == 3 && bDrawCounter )
        {
          v73 = this->m_nFXIndex;
          if ( v73 != -1 )
          {
            v74 = GetParticleManager();
            CDOTA_ParticleManager::DestroyParticleEffect(v74, v73, 1);
            this->m_nFXIndex = -1;
          }
          v75 = CDOTABaseAbility::GetCaster(this);
          this->m_nFXIndexB = CDOTABaseAbility::CreateAbilityParticleEffect(
                                this,
                                "particles/units/heroes/hero_nevermore/nevermore_shadowraze_triple.vpcf",
                                1,
                                v75,
                                0);
          v76 = CDOTABaseAbility::GetCaster(this);
          v77 = CBaseEntity::GetAbsOrigin(v76);
          v78 = CDOTABaseAbility::GetCaster(this);
          m_nFXIndexB = this->m_nFXIndexB;
          v80 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControlEnt(v80, m_nFXIndexB, 1, v78, 5, "attach_hitloc", *v77, 1);
          LODWORD(v77) = this->m_nFXIndexB;
          v81 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v81, v77);
          CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
          CResponseCriteriaSet::AppendCriteria(&criteria, "tripleraze", 1.0, v82);
          m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
          if ( m_pSpeech != 0 )
            CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 4, 0, 0, 0, 0);
          v84 = CDOTABaseAbility::GetCaster(this);
          if ( v84 != 0 && (v84->m_iUnitType & 1) != 0 )
            v85 = v84;
          else
            v85 = 0;
          EconEntity_OnOwnerKillEaterEvent(
            v85,
            0,
            kill_eater_event_t::kKillEaterEvent_ShadowFiend_TripleRaze,
            1,
            INVALID_ITEM_DEF_INDEX);
          CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
        }
        break;
      }
    }
  }
  v72 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSoundLocationWithCaster(&vLoc, "Hero_Nevermore.Shadowraze", v72);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTA_Ability_Nevermore_Shadowraze::ModifyOrAppendCriteria  (line 324, @0x00000000029b8340, libserver.so)
// calls: CBaseEntity::ModifyOrAppendCriteria, CResponseCriteriaSet::AppendCriteria
// strings: "abilityname", "particles/units/heroes/hero_nevermore/nevermore_shadowraze.vpcf"
void __fastcall CDOTA_Ability_Nevermore_Shadowraze::ModifyOrAppendCriteria(
        CDOTA_Ability_Nevermore_Shadowraze *const this,
        CResponseCriteriaSet *const set)
{
  float v4; // xmm2_4

  CBaseEntity::ModifyOrAppendCriteria(this, set);
  CResponseCriteriaSet::AppendCriteria(
    set,
    "abilityname",
    "particles/units/heroes/hero_nevermore/nevermore_shadowraze.vpcf",
    1.0);
  (*(this->_vptr_IHandleEntity + 333))(this);
  CResponseCriteriaSet::AppendCriteria(set, "shadowraze", 1.0, v4);
}


// CDOTA_Ability_Nevermore_Shadowraze::GetAbilityDamageToTargetOverInterval  (line 334, @0x00000000029bb730, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Nevermore_Shadowraze::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Nevermore_Shadowraze *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int v6; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    v6 = (*(this->_vptr_IHandleEntity + 247))(this, fInterval);
    return (v6 * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Modifier_Shadowraze_Counter::~CDOTA_Modifier_Shadowraze_Counter  (line 346, @0x0000000002a11470, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Shadowraze_Counter::~CDOTA_Modifier_Shadowraze_Counter(
        CDOTA_Modifier_Shadowraze_Counter *const this)
{
  this->_vptr_CDOTA_Buff = &off_4368A10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Shadowraze_Counter::~CDOTA_Modifier_Shadowraze_Counter  (line 346, @0x0000000002a11490, libserver.so)  // inlines: ~CDOTA_Modifier_Shadowraze_Counter
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Shadowraze_Counter::~CDOTA_Modifier_Shadowraze_Counter(
        CDOTA_Modifier_Shadowraze_Counter *const this)
{
  this->_vptr_CDOTA_Buff = &off_4368A10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Shadowraze_Counter::IsHidden  (line 353, @0x0000000002a0adf0, libserver.so)
bool __fastcall CDOTA_Modifier_Shadowraze_Counter::IsHidden(CDOTA_Modifier_Shadowraze_Counter *const this)
{
  return 1;
}


// CDOTA_Modifier_Shadowraze_Counter::GetAttributes  (line 355, @0x0000000002a0ae00, libserver.so)
int __fastcall CDOTA_Modifier_Shadowraze_Counter::GetAttributes(CDOTA_Modifier_Shadowraze_Counter *const this)
{
  return 4;
}


// CDOTA_Modifier_Shadowraze_Counter::OnCreated  (line 366, @0x00000000029e0040, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "shadowraze_cooldown"
void __fastcall CDOTA_Modifier_Shadowraze_Counter::OnCreated(
        CDOTA_Modifier_Shadowraze_Counter *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->shadowraze_cooldown = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "shadowraze_cooldown", -1, 0);
  else
    this->shadowraze_cooldown = 0.0;
}


// CDOTA_Modifier_Shadowraze_Counter::OnRefresh  (line 373, @0x00000000029e0220, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "shadowraze_cooldown"
void __fastcall CDOTA_Modifier_Shadowraze_Counter::OnRefresh(
        CDOTA_Modifier_Shadowraze_Counter *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->shadowraze_cooldown = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "shadowraze_cooldown", -1, 0);
  else
    this->shadowraze_cooldown = 0.0;
}


// CDOTA_Ability_Nevermore_Shadowraze1::~CDOTA_Ability_Nevermore_Shadowraze1  (line 384, @0x0000000002a17990, libserver.so)  // inlines: ~CDOTA_Ability_Nevermore_Shadowraze
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Nevermore_Shadowraze1::~CDOTA_Ability_Nevermore_Shadowraze1(
        CDOTA_Ability_Nevermore_Shadowraze1 *const this)
{
  this->_vptr_IHandleEntity = &off_4367F50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Nevermore_Shadowraze1::~CDOTA_Ability_Nevermore_Shadowraze1  (line 384, @0x0000000002a179b0, libserver.so)  // inlines: ~CDOTA_Ability_Nevermore_Shadowraze, ~CDOTA_Ability_Nevermore_Shadowraze1
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Nevermore_Shadowraze1::~CDOTA_Ability_Nevermore_Shadowraze1(
        CDOTA_Ability_Nevermore_Shadowraze1 *const this)
{
  this->_vptr_IHandleEntity = &off_4367F50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Nevermore_Shadowraze1::Schema_DynamicBinding  (line 386, @0x0000000002a0ae10, libserver.so)
// globals: CDOTA_Ability_Nevermore_Shadowraze1::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nevermore_Shadowraze1::Schema_DynamicBinding(
        const CDOTA_Ability_Nevermore_Shadowraze1 *const this)
{
  return CDOTA_Ability_Nevermore_Shadowraze1::s_pSchemaBinding;
}


// CDOTA_Ability_Nevermore_Shadowraze1::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 386, @0x0000000002a0ae20, libserver.so)
// globals: CDOTA_Ability_Nevermore_Shadowraze1::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nevermore_Shadowraze1::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Nevermore_Shadowraze1::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nevermore_Shadowraze1::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Nevermore_Shadowraze1::CEntityInstanceEntityClass::DestructInstance  (line 386, @0x0000000002a0ae30, libserver.so)  // inlines: Destruct<CDOTA_Ability_Nevermore_Shadowraze1>
void __fastcall CDOTA_Ability_Nevermore_Shadowraze1::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Nevermore_Shadowraze1::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Nevermore_Shadowraze1::CEntityInstanceEntityClass::FreeInstance  (line 386, @0x0000000002a0ae50, libserver.so)
void __fastcall CDOTA_Ability_Nevermore_Shadowraze1::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Nevermore_Shadowraze1::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Nevermore_Shadowraze1::CEntityInstanceEntityClass::CanAllocate  (line 386, @0x0000000002a0ae70, libserver.so)
bool __fastcall CDOTA_Ability_Nevermore_Shadowraze1::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Nevermore_Shadowraze1::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Nevermore_Shadowraze1::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 386, @0x0000000002a0ae80, libserver.so)
// globals: CDOTA_Ability_Nevermore_Shadowraze1::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Nevermore_Shadowraze1::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Nevermore_Shadowraze1::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nevermore_Shadowraze1::s_pSchemaBinding;
}


// CDOTA_Ability_Nevermore_Shadowraze1::CEntityInstanceEntityClass::AllocateInstance  (line 386, @0x0000000002a10040, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Nevermore_Shadowraze1::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Nevermore_Shadowraze1::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Nevermore_Shadowraze1::CEntityInstanceEntityClass::ConstructInstance  (line 386, @0x0000000002a14600, libserver.so)  // inlines: CDOTA_Ability_Nevermore_Shadowraze, CDOTA_Ability_Nevermore_Shadowraze1, Construct<CDOTA_Ability_Nevermore_Shadowraze1>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Nevermore_Shadowraze1::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Nevermore_Shadowraze1::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4368D70;
  }
  return p;
}


// CDOTA_Ability_Nevermore_Shadowraze1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 386, @0x0000000002a1fdb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Nevermore_Shadowraze1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nevermore_Shadowraze1::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Nevermore_Shadowraze1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 386, @0x0000000002a1fdd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Nevermore_Shadowraze1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nevermore_Shadowraze1::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal  (line 386, @0x0000000002a3e3e0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "nevermore_shadowraze1", "CDOTA_Ability_Nevermore_Shadowraze1"
// globals: `guard variable for'CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class, CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Nevermore_Shadowraze1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1ClassInfo, CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1ClassInfo
CEntityClass *__cdecl CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class) != 0 )
  {
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_classInputs.m_Size = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_hNetworkSerializer = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_pBaseClassInfo = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_pClassInfo = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_flags = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_pScriptClassDesc = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_pInputs = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_nInputCount = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_pOutputs = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_nOutputCount = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_pGameClass = 0;
    CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class._vptr_CEntityClass = off_4368CF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class);
    __cxa_atexit(
      CDOTA_Ability_Nevermore_Shadowraze1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Nevermore_Shadowraze1Class != 0 )
    return &CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class;
  if ( `guard variable for'CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1ClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1ClassInfo,
      "CDOTA_Ability_Nevermore_Shadowraze1",
      "nevermore_shadowraze1",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1ClassInfo);
  }
  CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_pClassInfo = &CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1ClassInfo;
  CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_pBaseClassInfo = CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1ClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Nevermore_Shadowraze1Class = &CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class;
  CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1ClassInfo.m_pClass = &CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class;
  CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Nevermore_Shadowraze1Class->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Nevermore_Shadowraze1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze1Class;
}


// CDOTA_Ability_Nevermore_Shadowraze1::ShadowRazeLevel  (line 390, @0x0000000002a0ae90, libserver.so)
int __fastcall CDOTA_Ability_Nevermore_Shadowraze1::ShadowRazeLevel(CDOTA_Ability_Nevermore_Shadowraze1 *const this)
{
  return 1;
}


// CDOTA_Ability_Nevermore_Shadowraze1::GetGestureBasedActivity  (line 393, @0x0000000002a0aea0, libserver.so)
Activity __fastcall CDOTA_Ability_Nevermore_Shadowraze1::GetGestureBasedActivity(
        CDOTA_Ability_Nevermore_Shadowraze1 *const this)
{
  return 1663;
}


// CDOTA_Ability_Nevermore_Shadowraze1::OnUpgrade  (line 399, @0x00000000029baf30, libserver.so)  // inlines: ClassMatches
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAbilityCount, CDOTA_BaseNPC::GetAbilityByIndex, CEntityIdentity::ClassMatches, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "nevermore_shadowraze2", "nevermore_shadowraze3"
void __fastcall CDOTA_Ability_Nevermore_Shadowraze1::OnUpgrade(CDOTA_Ability_Nevermore_Shadowraze1 *const this)
{
  int i; // ebx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTABaseAbility *AbilityByIndex; // r12

  for ( i = 0; ; ++i )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    if ( i >= CDOTA_BaseNPC::GetAbilityCount(Caster) )
      break;
    v4 = CDOTABaseAbility::GetCaster(this);
    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v4, i);
    if ( AbilityByIndex != 0
      && AbilityByIndex->m_iLevel.m_Value < this->m_iLevel.m_Value
      && (CEntityIdentity::ClassMatches(AbilityByIndex->m_pEntity, "nevermore_shadowraze2")
       || CEntityIdentity::ClassMatches(AbilityByIndex->m_pEntity, "nevermore_shadowraze3")) )
    {
      CDOTABaseAbility::UpgradeAbility(AbilityByIndex, 0);
    }
  }
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Nevermore_Shadowraze2::~CDOTA_Ability_Nevermore_Shadowraze2  (line 417, @0x0000000002a179e0, libserver.so)  // inlines: ~CDOTA_Ability_Nevermore_Shadowraze
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Nevermore_Shadowraze2::~CDOTA_Ability_Nevermore_Shadowraze2(
        CDOTA_Ability_Nevermore_Shadowraze2 *const this)
{
  this->_vptr_IHandleEntity = &off_4367F50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Nevermore_Shadowraze2::~CDOTA_Ability_Nevermore_Shadowraze2  (line 417, @0x0000000002a17a00, libserver.so)  // inlines: ~CDOTA_Ability_Nevermore_Shadowraze, ~CDOTA_Ability_Nevermore_Shadowraze2
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Nevermore_Shadowraze2::~CDOTA_Ability_Nevermore_Shadowraze2(
        CDOTA_Ability_Nevermore_Shadowraze2 *const this)
{
  this->_vptr_IHandleEntity = &off_4367F50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Nevermore_Shadowraze2::Schema_DynamicBinding  (line 419, @0x0000000002a0aeb0, libserver.so)
// globals: CDOTA_Ability_Nevermore_Shadowraze2::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nevermore_Shadowraze2::Schema_DynamicBinding(
        const CDOTA_Ability_Nevermore_Shadowraze2 *const this)
{
  return CDOTA_Ability_Nevermore_Shadowraze2::s_pSchemaBinding;
}


// CDOTA_Ability_Nevermore_Shadowraze2::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 419, @0x0000000002a0aec0, libserver.so)
// globals: CDOTA_Ability_Nevermore_Shadowraze2::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nevermore_Shadowraze2::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Nevermore_Shadowraze2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nevermore_Shadowraze2::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Nevermore_Shadowraze2::CEntityInstanceEntityClass::DestructInstance  (line 419, @0x0000000002a0aed0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Nevermore_Shadowraze2>
void __fastcall CDOTA_Ability_Nevermore_Shadowraze2::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Nevermore_Shadowraze2::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Nevermore_Shadowraze2::CEntityInstanceEntityClass::FreeInstance  (line 419, @0x0000000002a0aef0, libserver.so)
void __fastcall CDOTA_Ability_Nevermore_Shadowraze2::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Nevermore_Shadowraze2::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Nevermore_Shadowraze2::CEntityInstanceEntityClass::CanAllocate  (line 419, @0x0000000002a0af10, libserver.so)
bool __fastcall CDOTA_Ability_Nevermore_Shadowraze2::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Nevermore_Shadowraze2::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Nevermore_Shadowraze2::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 419, @0x0000000002a0af20, libserver.so)
// globals: CDOTA_Ability_Nevermore_Shadowraze2::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Nevermore_Shadowraze2::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Nevermore_Shadowraze2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nevermore_Shadowraze2::s_pSchemaBinding;
}


// CDOTA_Ability_Nevermore_Shadowraze2::CEntityInstanceEntityClass::AllocateInstance  (line 419, @0x0000000002a10080, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Nevermore_Shadowraze2::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Nevermore_Shadowraze2::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Nevermore_Shadowraze2::CEntityInstanceEntityClass::ConstructInstance  (line 419, @0x0000000002a14630, libserver.so)  // inlines: CDOTA_Ability_Nevermore_Shadowraze, CDOTA_Ability_Nevermore_Shadowraze2, Construct<CDOTA_Ability_Nevermore_Shadowraze2>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Nevermore_Shadowraze2::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Nevermore_Shadowraze2::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4369870;
  }
  return p;
}


// CDOTA_Ability_Nevermore_Shadowraze2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 419, @0x0000000002a1fe00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Nevermore_Shadowraze2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nevermore_Shadowraze2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Nevermore_Shadowraze2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 419, @0x0000000002a1fe20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Nevermore_Shadowraze2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nevermore_Shadowraze2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Nevermore_Shadowraze2::GetEntityClassInternal  (line 419, @0x0000000002a391a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "nevermore_shadowraze2", "CDOTA_Ability_Nevermore_Shadowraze2"
// globals: `guard variable for'CDOTA_Ability_Nevermore_Shadowraze2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze2Class, CDOTA_Ability_Nevermore_Shadowraze2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze2Class, __dso_handle, CDOTA_Ability_Nevermore_Shadowraze2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Nevermore_Shadowraze2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze2ClassInfo, CDOTA_Ability_Nevermore_Shadowraze2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze2ClassInfo
CEntityClass *__cdecl CDOTA_Ability_Nevermore_Shadowraze2::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Nevermore_Shadowraze2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze2Class == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nevermore_Shadowraze2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze2Class) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Nevermore_Shadowraze2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze2Class);
    CDOTA_Ability_Nevermore_Shadowraze2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze2Class._vptr_CEntityClass = off_43697F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nevermore_Shadowraze2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze2Class);
    __cxa_atexit(
      CDOTA_Ability_Nevermore_Shadowraze2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Nevermore_Shadowraze2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze2Class,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Nevermore_Shadowraze2Class != 0 )
    return &CDOTA_Ability_Nevermore_Shadowraze2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze2Class;
  if ( `guard variable for'CDOTA_Ability_Nevermore_Shadowraze2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze2ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nevermore_Shadowraze2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze2ClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Nevermore_Shadowraze2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze2ClassInfo,
      "CDOTA_Ability_Nevermore_Shadowraze2",
      "nevermore_shadowraze2",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nevermore_Shadowraze2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze2ClassInfo);
  }
  CDOTA_Ability_Nevermore_Shadowraze2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze2Class.m_pClassInfo = &CDOTA_Ability_Nevermore_Shadowraze2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze2ClassInfo;
  CDOTA_Ability_Nevermore_Shadowraze2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze2Class.m_pBaseClassInfo = CDOTA_Ability_Nevermore_Shadowraze2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze2ClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Nevermore_Shadowraze2Class = &CDOTA_Ability_Nevermore_Shadowraze2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze2Class;
  CDOTA_Ability_Nevermore_Shadowraze2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze2ClassInfo.m_pClass = &CDOTA_Ability_Nevermore_Shadowraze2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze2Class;
  CDOTA_Ability_Nevermore_Shadowraze2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze2Class.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Nevermore_Shadowraze2Class->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Nevermore_Shadowraze2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze2Class;
}


// CDOTA_Ability_Nevermore_Shadowraze2::ShadowRazeLevel  (line 423, @0x0000000002a0af30, libserver.so)
int __fastcall CDOTA_Ability_Nevermore_Shadowraze2::ShadowRazeLevel(CDOTA_Ability_Nevermore_Shadowraze2 *const this)
{
  return 2;
}


// CDOTA_Ability_Nevermore_Shadowraze2::GetGestureBasedActivity  (line 426, @0x0000000002a0af40, libserver.so)
Activity __fastcall CDOTA_Ability_Nevermore_Shadowraze2::GetGestureBasedActivity(
        CDOTA_Ability_Nevermore_Shadowraze2 *const this)
{
  return 1664;
}


// CDOTA_Ability_Nevermore_Shadowraze2::OnUpgrade  (line 432, @0x00000000029bafe0, libserver.so)  // inlines: ClassMatches
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAbilityCount, CDOTA_BaseNPC::GetAbilityByIndex, CEntityIdentity::ClassMatches, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "nevermore_shadowraze1", "nevermore_shadowraze3"
void __fastcall CDOTA_Ability_Nevermore_Shadowraze2::OnUpgrade(CDOTA_Ability_Nevermore_Shadowraze2 *const this)
{
  int i; // ebx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTABaseAbility *AbilityByIndex; // r12

  for ( i = 0; ; ++i )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    if ( i >= CDOTA_BaseNPC::GetAbilityCount(Caster) )
      break;
    v4 = CDOTABaseAbility::GetCaster(this);
    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v4, i);
    if ( AbilityByIndex != 0
      && AbilityByIndex->m_iLevel.m_Value < this->m_iLevel.m_Value
      && (CEntityIdentity::ClassMatches(AbilityByIndex->m_pEntity, "nevermore_shadowraze1")
       || CEntityIdentity::ClassMatches(AbilityByIndex->m_pEntity, "nevermore_shadowraze3")) )
    {
      CDOTABaseAbility::UpgradeAbility(AbilityByIndex, 0);
    }
  }
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Nevermore_Shadowraze3::~CDOTA_Ability_Nevermore_Shadowraze3  (line 450, @0x0000000002a17a30, libserver.so)  // inlines: ~CDOTA_Ability_Nevermore_Shadowraze
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Nevermore_Shadowraze3::~CDOTA_Ability_Nevermore_Shadowraze3(
        CDOTA_Ability_Nevermore_Shadowraze3 *const this)
{
  this->_vptr_IHandleEntity = &off_4367F50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Nevermore_Shadowraze3::~CDOTA_Ability_Nevermore_Shadowraze3  (line 450, @0x0000000002a17a50, libserver.so)  // inlines: ~CDOTA_Ability_Nevermore_Shadowraze, ~CDOTA_Ability_Nevermore_Shadowraze3
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Nevermore_Shadowraze3::~CDOTA_Ability_Nevermore_Shadowraze3(
        CDOTA_Ability_Nevermore_Shadowraze3 *const this)
{
  this->_vptr_IHandleEntity = &off_4367F50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Nevermore_Shadowraze3::Schema_DynamicBinding  (line 452, @0x0000000002a0af50, libserver.so)
// globals: CDOTA_Ability_Nevermore_Shadowraze3::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nevermore_Shadowraze3::Schema_DynamicBinding(
        const CDOTA_Ability_Nevermore_Shadowraze3 *const this)
{
  return CDOTA_Ability_Nevermore_Shadowraze3::s_pSchemaBinding;
}


// CDOTA_Ability_Nevermore_Shadowraze3::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 452, @0x0000000002a0af60, libserver.so)
// globals: CDOTA_Ability_Nevermore_Shadowraze3::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nevermore_Shadowraze3::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Nevermore_Shadowraze3::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nevermore_Shadowraze3::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Nevermore_Shadowraze3::CEntityInstanceEntityClass::DestructInstance  (line 452, @0x0000000002a0af70, libserver.so)  // inlines: Destruct<CDOTA_Ability_Nevermore_Shadowraze3>
void __fastcall CDOTA_Ability_Nevermore_Shadowraze3::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Nevermore_Shadowraze3::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Nevermore_Shadowraze3::CEntityInstanceEntityClass::FreeInstance  (line 452, @0x0000000002a0af90, libserver.so)
void __fastcall CDOTA_Ability_Nevermore_Shadowraze3::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Nevermore_Shadowraze3::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Nevermore_Shadowraze3::CEntityInstanceEntityClass::CanAllocate  (line 452, @0x0000000002a0afb0, libserver.so)
bool __fastcall CDOTA_Ability_Nevermore_Shadowraze3::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Nevermore_Shadowraze3::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Nevermore_Shadowraze3::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 452, @0x0000000002a0afc0, libserver.so)
// globals: CDOTA_Ability_Nevermore_Shadowraze3::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Nevermore_Shadowraze3::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Nevermore_Shadowraze3::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nevermore_Shadowraze3::s_pSchemaBinding;
}


// CDOTA_Ability_Nevermore_Shadowraze3::CEntityInstanceEntityClass::AllocateInstance  (line 452, @0x0000000002a100c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Nevermore_Shadowraze3::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Nevermore_Shadowraze3::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Nevermore_Shadowraze3::CEntityInstanceEntityClass::ConstructInstance  (line 452, @0x0000000002a14660, libserver.so)  // inlines: CDOTA_Ability_Nevermore_Shadowraze, CDOTA_Ability_Nevermore_Shadowraze3, Construct<CDOTA_Ability_Nevermore_Shadowraze3>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Nevermore_Shadowraze3::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Nevermore_Shadowraze3::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_436A370;
  }
  return p;
}


// CDOTA_Ability_Nevermore_Shadowraze3::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 452, @0x0000000002a1fe50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Nevermore_Shadowraze3::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nevermore_Shadowraze3::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Nevermore_Shadowraze3::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 452, @0x0000000002a1fe70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Nevermore_Shadowraze3::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nevermore_Shadowraze3::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Nevermore_Shadowraze3::GetEntityClassInternal  (line 452, @0x0000000002a392f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "nevermore_shadowraze3", "CDOTA_Ability_Nevermore_Shadowraze3"
// globals: `guard variable for'CDOTA_Ability_Nevermore_Shadowraze3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze3Class, CDOTA_Ability_Nevermore_Shadowraze3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze3Class, __dso_handle, CDOTA_Ability_Nevermore_Shadowraze3::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Nevermore_Shadowraze3::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze3ClassInfo, CDOTA_Ability_Nevermore_Shadowraze3::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze3ClassInfo
CEntityClass *__cdecl CDOTA_Ability_Nevermore_Shadowraze3::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Nevermore_Shadowraze3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze3Class == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nevermore_Shadowraze3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze3Class) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Nevermore_Shadowraze3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze3Class);
    CDOTA_Ability_Nevermore_Shadowraze3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze3Class._vptr_CEntityClass = off_436A2F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nevermore_Shadowraze3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze3Class);
    __cxa_atexit(
      CDOTA_Ability_Nevermore_Shadowraze3::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Nevermore_Shadowraze3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze3Class,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Nevermore_Shadowraze3Class != 0 )
    return &CDOTA_Ability_Nevermore_Shadowraze3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze3Class;
  if ( `guard variable for'CDOTA_Ability_Nevermore_Shadowraze3::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze3ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nevermore_Shadowraze3::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze3ClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Ability_Nevermore_Shadowraze::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Nevermore_Shadowraze3::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze3ClassInfo,
      "CDOTA_Ability_Nevermore_Shadowraze3",
      "nevermore_shadowraze3",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nevermore_Shadowraze3::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze3ClassInfo);
  }
  CDOTA_Ability_Nevermore_Shadowraze3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze3Class.m_pClassInfo = &CDOTA_Ability_Nevermore_Shadowraze3::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze3ClassInfo;
  CDOTA_Ability_Nevermore_Shadowraze3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze3Class.m_pBaseClassInfo = CDOTA_Ability_Nevermore_Shadowraze3::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze3ClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Nevermore_Shadowraze3Class = &CDOTA_Ability_Nevermore_Shadowraze3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze3Class;
  CDOTA_Ability_Nevermore_Shadowraze3::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze3ClassInfo.m_pClass = &CDOTA_Ability_Nevermore_Shadowraze3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze3Class;
  CDOTA_Ability_Nevermore_Shadowraze3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze3Class.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Nevermore_Shadowraze3Class->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Nevermore_Shadowraze3::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_Shadowraze3Class;
}


// CDOTA_Ability_Nevermore_Shadowraze3::ShadowRazeLevel  (line 456, @0x0000000002a0afd0, libserver.so)
int __fastcall CDOTA_Ability_Nevermore_Shadowraze3::ShadowRazeLevel(CDOTA_Ability_Nevermore_Shadowraze3 *const this)
{
  return 3;
}


// CDOTA_Ability_Nevermore_Shadowraze3::GetGestureBasedActivity  (line 459, @0x0000000002a0afe0, libserver.so)
Activity __fastcall CDOTA_Ability_Nevermore_Shadowraze3::GetGestureBasedActivity(
        CDOTA_Ability_Nevermore_Shadowraze3 *const this)
{
  return 1665;
}


// CDOTA_Ability_Nevermore_Shadowraze3::OnUpgrade  (line 465, @0x00000000029bb090, libserver.so)  // inlines: ClassMatches
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAbilityCount, CDOTA_BaseNPC::GetAbilityByIndex, CEntityIdentity::ClassMatches, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "nevermore_shadowraze1", "nevermore_shadowraze2"
void __fastcall CDOTA_Ability_Nevermore_Shadowraze3::OnUpgrade(CDOTA_Ability_Nevermore_Shadowraze3 *const this)
{
  int i; // ebx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTABaseAbility *AbilityByIndex; // r12

  for ( i = 0; ; ++i )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    if ( i >= CDOTA_BaseNPC::GetAbilityCount(Caster) )
      break;
    v4 = CDOTABaseAbility::GetCaster(this);
    AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v4, i);
    if ( AbilityByIndex != 0
      && AbilityByIndex->m_iLevel.m_Value < this->m_iLevel.m_Value
      && (CEntityIdentity::ClassMatches(AbilityByIndex->m_pEntity, "nevermore_shadowraze1")
       || CEntityIdentity::ClassMatches(AbilityByIndex->m_pEntity, "nevermore_shadowraze2")) )
    {
      CDOTABaseAbility::UpgradeAbility(AbilityByIndex, 0);
    }
  }
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Nevermore_Presence::~CDOTA_Ability_Nevermore_Presence  (line 486, @0x0000000002a17a80, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Nevermore_Presence::~CDOTA_Ability_Nevermore_Presence(
        CDOTA_Ability_Nevermore_Presence *const this)
{
  this->_vptr_IHandleEntity = &off_436AE70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Nevermore_Presence::~CDOTA_Ability_Nevermore_Presence  (line 486, @0x0000000002a17aa0, libserver.so)  // inlines: ~CDOTA_Ability_Nevermore_Presence
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Nevermore_Presence::~CDOTA_Ability_Nevermore_Presence(
        CDOTA_Ability_Nevermore_Presence *const this)
{
  this->_vptr_IHandleEntity = &off_436AE70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Nevermore_Presence::Schema_DynamicBinding  (line 488, @0x0000000002a0aff0, libserver.so)
// globals: CDOTA_Ability_Nevermore_Presence::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nevermore_Presence::Schema_DynamicBinding(
        const CDOTA_Ability_Nevermore_Presence *const this)
{
  return CDOTA_Ability_Nevermore_Presence::s_pSchemaBinding;
}


// CDOTA_Ability_Nevermore_Presence::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 488, @0x0000000002a0b000, libserver.so)
// globals: CDOTA_Ability_Nevermore_Presence::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nevermore_Presence::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Nevermore_Presence::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nevermore_Presence::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Nevermore_Presence::CEntityInstanceEntityClass::DestructInstance  (line 488, @0x0000000002a0b010, libserver.so)  // inlines: Destruct<CDOTA_Ability_Nevermore_Presence>
void __fastcall CDOTA_Ability_Nevermore_Presence::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Nevermore_Presence::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Nevermore_Presence::CEntityInstanceEntityClass::FreeInstance  (line 488, @0x0000000002a0b030, libserver.so)
void __fastcall CDOTA_Ability_Nevermore_Presence::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Nevermore_Presence::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Nevermore_Presence::CEntityInstanceEntityClass::CanAllocate  (line 488, @0x0000000002a0b050, libserver.so)
bool __fastcall CDOTA_Ability_Nevermore_Presence::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Nevermore_Presence::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Nevermore_Presence::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 488, @0x0000000002a0b060, libserver.so)
// globals: CDOTA_Ability_Nevermore_Presence::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Nevermore_Presence::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Nevermore_Presence::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nevermore_Presence::s_pSchemaBinding;
}


// CDOTA_Ability_Nevermore_Presence::CEntityInstanceEntityClass::AllocateInstance  (line 488, @0x0000000002a10100, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Nevermore_Presence::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Nevermore_Presence::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Nevermore_Presence::CEntityInstanceEntityClass::ConstructInstance  (line 488, @0x0000000002a14690, libserver.so)  // inlines: CDOTA_Ability_Nevermore_Presence, Construct<CDOTA_Ability_Nevermore_Presence>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Nevermore_Presence::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Nevermore_Presence::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_436AE70;
  }
  return p;
}


// CDOTA_Ability_Nevermore_Presence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 488, @0x0000000002a1fea0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Nevermore_Presence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nevermore_Presence::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Nevermore_Presence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 488, @0x0000000002a1fec0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Nevermore_Presence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nevermore_Presence::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Nevermore_Presence::GetEntityClassInternal  (line 488, @0x0000000002a39440, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "nevermore_dark_lord", "CDOTA_Ability_Nevermore_Presence"
// globals: `guard variable for'CDOTA_Ability_Nevermore_Presence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_PresenceClass, CDOTA_Ability_Nevermore_Presence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_PresenceClass, __dso_handle, CDOTA_Ability_Nevermore_Presence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Nevermore_Presence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_PresenceClassInfo, CDOTA_Ability_Nevermore_Presence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_PresenceClassInfo
CEntityClass *__cdecl CDOTA_Ability_Nevermore_Presence::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Nevermore_Presence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_PresenceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nevermore_Presence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_PresenceClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Nevermore_Presence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_PresenceClass);
    CDOTA_Ability_Nevermore_Presence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_PresenceClass._vptr_CEntityClass = off_436ADF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nevermore_Presence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_PresenceClass);
    __cxa_atexit(
      CDOTA_Ability_Nevermore_Presence::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Nevermore_Presence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_PresenceClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Nevermore_PresenceClass != 0 )
    return &CDOTA_Ability_Nevermore_Presence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_PresenceClass;
  if ( `guard variable for'CDOTA_Ability_Nevermore_Presence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_PresenceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nevermore_Presence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_PresenceClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Nevermore_Presence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_PresenceClassInfo,
      "CDOTA_Ability_Nevermore_Presence",
      "nevermore_dark_lord",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nevermore_Presence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_PresenceClassInfo);
  }
  CDOTA_Ability_Nevermore_Presence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_PresenceClass.m_pClassInfo = &CDOTA_Ability_Nevermore_Presence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_PresenceClassInfo;
  CDOTA_Ability_Nevermore_Presence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_PresenceClass.m_pBaseClassInfo = CDOTA_Ability_Nevermore_Presence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_PresenceClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Nevermore_PresenceClass = &CDOTA_Ability_Nevermore_Presence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_PresenceClass;
  CDOTA_Ability_Nevermore_Presence::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_PresenceClassInfo.m_pClass = &CDOTA_Ability_Nevermore_Presence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_PresenceClass;
  CDOTA_Ability_Nevermore_Presence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_PresenceClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Nevermore_PresenceClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Nevermore_Presence::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_PresenceClass;
}


// CDOTA_Ability_Nevermore_Presence::GetIntrinsicModifierName  (line 493, @0x0000000002a0b070, libserver.so)
// strings: "modifier_nevermore_presence_aura"
const char *__fastcall CDOTA_Ability_Nevermore_Presence::GetIntrinsicModifierName(
        CDOTA_Ability_Nevermore_Presence *const this)
{
  return "modifier_nevermore_presence_aura";
}


// CDOTA_Modifier_Nevermore_Presence_Aura::~CDOTA_Modifier_Nevermore_Presence_Aura  (line 502, @0x0000000002a11420, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nevermore_Presence_Aura::~CDOTA_Modifier_Nevermore_Presence_Aura(
        CDOTA_Modifier_Nevermore_Presence_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_436B930;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nevermore_Presence_Aura::~CDOTA_Modifier_Nevermore_Presence_Aura  (line 502, @0x0000000002a11440, libserver.so)  // inlines: ~CDOTA_Modifier_Nevermore_Presence_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nevermore_Presence_Aura::~CDOTA_Modifier_Nevermore_Presence_Aura(
        CDOTA_Modifier_Nevermore_Presence_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_436B930;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nevermore_Presence_Aura::IsAura  (line 507, @0x0000000002a0b080, libserver.so)
bool __fastcall CDOTA_Modifier_Nevermore_Presence_Aura::IsAura(CDOTA_Modifier_Nevermore_Presence_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Nevermore_Presence_Aura::GetModifierAura  (line 508, @0x0000000002a0b090, libserver.so)
// strings: "modifier_nevermore_presence"
const char *__fastcall CDOTA_Modifier_Nevermore_Presence_Aura::GetModifierAura(
        CDOTA_Modifier_Nevermore_Presence_Aura *const this)
{
  return "modifier_nevermore_presence";
}


// CDOTA_Modifier_Nevermore_Presence_Aura::GetAuraSearchTeam  (line 510, @0x0000000002a0b0a0, libserver.so)
int __fastcall CDOTA_Modifier_Nevermore_Presence_Aura::GetAuraSearchTeam(
        CDOTA_Modifier_Nevermore_Presence_Aura *const this)
{
  return 2;
}


// CDOTA_Modifier_Nevermore_Presence_Aura::GetAuraSearchType  (line 511, @0x0000000002a0b0b0, libserver.so)
int __fastcall CDOTA_Modifier_Nevermore_Presence_Aura::GetAuraSearchType(
        CDOTA_Modifier_Nevermore_Presence_Aura *const this)
{
  return 19;
}


// CDOTA_Modifier_Nevermore_Presence_Aura::GetAuraSearchFlags  (line 512, @0x0000000002a0b0c0, libserver.so)
int __fastcall CDOTA_Modifier_Nevermore_Presence_Aura::GetAuraSearchFlags(
        CDOTA_Modifier_Nevermore_Presence_Aura *const this)
{
  return 16;
}


// CDOTA_Modifier_Nevermore_Presence_Aura::GetAuraRadius  (line 513, @0x0000000002a0b0d0, libserver.so)
int __fastcall CDOTA_Modifier_Nevermore_Presence_Aura::GetAuraRadius(
        CDOTA_Modifier_Nevermore_Presence_Aura *const this)
{
  return this->presence_radius;
}


// CDOTA_Modifier_Nevermore_Presence_Aura::IsHidden  (line 518, @0x0000000002a0b0e0, libserver.so)
bool __fastcall CDOTA_Modifier_Nevermore_Presence_Aura::IsHidden(CDOTA_Modifier_Nevermore_Presence_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Nevermore_Presence_Aura::OnCreated  (line 527, @0x00000000029f7460, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "presence_radius"
void __fastcall CDOTA_Modifier_Nevermore_Presence_Aura::OnCreated(
        CDOTA_Modifier_Nevermore_Presence_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->presence_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "presence_radius", -1, 0);
  else
    this->presence_radius = 0;
}


// CDOTA_Modifier_Nevermore_Presence_Aura::OnRefresh  (line 532, @0x00000000029f6e00, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "presence_radius"
void __fastcall CDOTA_Modifier_Nevermore_Presence_Aura::OnRefresh(
        CDOTA_Modifier_Nevermore_Presence_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->presence_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "presence_radius", -1, 0);
  else
    this->presence_radius = 0;
}


// CDOTA_Modifier_Nevermore_Presence::~CDOTA_Modifier_Nevermore_Presence  (line 541, @0x0000000002a113d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nevermore_Presence::~CDOTA_Modifier_Nevermore_Presence(
        CDOTA_Modifier_Nevermore_Presence *const this)
{
  this->_vptr_CDOTA_Buff = &off_436BC50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nevermore_Presence::~CDOTA_Modifier_Nevermore_Presence  (line 541, @0x0000000002a113f0, libserver.so)  // inlines: ~CDOTA_Modifier_Nevermore_Presence
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nevermore_Presence::~CDOTA_Modifier_Nevermore_Presence(
        CDOTA_Modifier_Nevermore_Presence *const this)
{
  this->_vptr_CDOTA_Buff = &off_436BC50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nevermore_Presence::OnCreated  (line 576, @0x00000000029f74c0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "presence_armor_reduction"
void __fastcall CDOTA_Modifier_Nevermore_Presence::OnCreated(
        CDOTA_Modifier_Nevermore_Presence *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  int LevelSpecialValue; // eax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "presence_armor_reduction", -1, 0);
    this->m_bWasHidden = 0;
    this->presence_armor_reduction = LevelSpecialValue;
  }
  else
  {
    this->presence_armor_reduction = 0;
    this->m_bWasHidden = 0;
  }
}


// CDOTA_Modifier_Nevermore_Presence::OnRefresh  (line 584, @0x00000000029f6fe0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "presence_armor_reduction"
void __fastcall CDOTA_Modifier_Nevermore_Presence::OnRefresh(
        CDOTA_Modifier_Nevermore_Presence *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->presence_armor_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                       Ability,
                                       "presence_armor_reduction",
                                       -1,
                                       0);
  else
    this->presence_armor_reduction = 0;
}


// CDOTA_Modifier_Nevermore_Presence::DeclareFunctions  (line 591, @0x00000000029b5b00, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Nevermore_Presence::GetModifierPhysicalArmorBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_Nevermore_Presence::DeclareFunctions(CDOTA_Modifier_Nevermore_Presence *const this)
{
  this->m_Functions[45].__pfn = CDOTA_Modifier_Nevermore_Presence::GetModifierPhysicalArmorBonus;
  this->m_Functions[45].__delta = 0;
}


// CDOTA_Modifier_Nevermore_Presence::GetModifierPhysicalArmorBonus  (line 598, @0x00000000029ba100, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CBaseModelEntity::CanBeSeenByTeam
ModifierVariant_t __fastcall CDOTA_Modifier_Nevermore_Presence::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Nevermore_Presence *const this,
        const CModifierParams *const params)
{
  int m_Value; // r12d
  CDOTA_BaseNPC *Caster; // rax
  __m128i v6; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetCaster(this) != 0 && CDOTA_Buff::GetParent(this) != 0 )
  {
    result.m_szVal = CDOTA_Buff::GetCaster(this);
    *&result.m_eType = 1;
    if ( (result.m_szVal[2787] & 0x10) != 0 )
    {
LABEL_4:
      result.m_szVal = 0;
      return result;
    }
    m_Value = CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value;
    Caster = CDOTA_Buff::GetCaster(this);
    if ( CBaseModelEntity::CanBeSeenByTeam(Caster, m_Value) )
    {
      *v6.m128i_i32 = this->presence_armor_reduction;
      *&result.m_eType = (_mm_cvtsi128_si32(v6) << 32) | 1;
      goto LABEL_4;
    }
  }
  return 1uLL;
}


// CDOTA_Ability_Nevermore_Requiem::~CDOTA_Ability_Nevermore_Requiem  (line 622, @0x0000000002a332d0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Nevermore_Requiem::~CDOTA_Ability_Nevermore_Requiem(
        CDOTA_Ability_Nevermore_Requiem *const this)
{
  this->_vptr_IHandleEntity = &off_436BFB0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vecHeroesReqd);
  if ( (this->m_vecHeroesReqd.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vecHeroesReqd.m_Memory),
        (this->m_vecHeroesReqd.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vecHeroesReqd.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_Nevermore_Requiem::~CDOTA_Ability_Nevermore_Requiem  (line 622, @0x0000000002a33570, libserver.so)  // inlines: Purge, ~CDOTA_Ability_Nevermore_Requiem, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Nevermore_Requiem::~CDOTA_Ability_Nevermore_Requiem(
        CDOTA_Ability_Nevermore_Requiem *const this)
{
  this->_vptr_IHandleEntity = &off_436BFB0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vecHeroesReqd);
  if ( (this->m_vecHeroesReqd.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vecHeroesReqd.m_Memory);
    if ( (this->m_vecHeroesReqd.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_vecHeroesReqd.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Nevermore_Requiem::Schema_DynamicBinding  (line 624, @0x0000000002a0b0f0, libserver.so)
// globals: CDOTA_Ability_Nevermore_Requiem::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nevermore_Requiem::Schema_DynamicBinding(
        const CDOTA_Ability_Nevermore_Requiem *const this)
{
  return CDOTA_Ability_Nevermore_Requiem::s_pSchemaBinding;
}


// CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 624, @0x0000000002a0b100, libserver.so)
// globals: CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass::DestructInstance  (line 624, @0x0000000002a0b110, libserver.so)  // inlines: Destruct<CDOTA_Ability_Nevermore_Requiem>
void __fastcall CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass::FreeInstance  (line 624, @0x0000000002a0b130, libserver.so)
void __fastcall CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass::CanAllocate  (line 624, @0x0000000002a0b150, libserver.so)
bool __fastcall CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 624, @0x0000000002a0b160, libserver.so)
// globals: CDOTA_Ability_Nevermore_Requiem::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nevermore_Requiem::s_pSchemaBinding;
}


// CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass::AllocateInstance  (line 624, @0x0000000002a10140, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 960);
  memset(v1, 0, 0x3C0u);
  return v1;
}


// CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 624, @0x0000000002a1fef0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 624, @0x0000000002a1ff10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass::ConstructInstance  (line 624, @0x0000000002a30a40, libserver.so)  // inlines: Construct<CDOTA_Ability_Nevermore_Requiem>
// calls: CDOTA_Ability_Nevermore_Requiem::CDOTA_Ability_Nevermore_Requiem
CEntityInstance *__fastcall CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
    CDOTA_Ability_Nevermore_Requiem::CDOTA_Ability_Nevermore_Requiem(p);
  return p;
}


// CDOTA_Ability_Nevermore_Requiem::GetEntityClassInternal  (line 624, @0x0000000002a39590, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_Nevermore_Requiem"
// globals: `guard variable for'CDOTA_Ability_Nevermore_Requiem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_RequiemClass, CDOTA_Ability_Nevermore_Requiem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_RequiemClass, __dso_handle, CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Nevermore_Requiem::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_RequiemClassInfo, CDOTA_Ability_Nevermore_Requiem::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_RequiemClassInfo
CEntityClass *__cdecl CDOTA_Ability_Nevermore_Requiem::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Nevermore_Requiem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_RequiemClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nevermore_Requiem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_RequiemClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Nevermore_Requiem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_RequiemClass);
    CDOTA_Ability_Nevermore_Requiem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_RequiemClass._vptr_CEntityClass = off_436BF30;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nevermore_Requiem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_RequiemClass);
    __cxa_atexit(
      CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Nevermore_Requiem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_RequiemClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Nevermore_RequiemClass != 0 )
    return &CDOTA_Ability_Nevermore_Requiem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_RequiemClass;
  if ( `guard variable for'CDOTA_Ability_Nevermore_Requiem::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_RequiemClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nevermore_Requiem::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_RequiemClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Nevermore_Requiem::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_RequiemClassInfo,
      "CDOTA_Ability_Nevermore_Requiem",
      "nevermore_requiem",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nevermore_Requiem::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_RequiemClassInfo);
  }
  CDOTA_Ability_Nevermore_Requiem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_RequiemClass.m_pClassInfo = &CDOTA_Ability_Nevermore_Requiem::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_RequiemClassInfo;
  CDOTA_Ability_Nevermore_Requiem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_RequiemClass.m_pBaseClassInfo = CDOTA_Ability_Nevermore_Requiem::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_RequiemClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Nevermore_RequiemClass = &CDOTA_Ability_Nevermore_Requiem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_RequiemClass;
  CDOTA_Ability_Nevermore_Requiem::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_RequiemClassInfo.m_pClass = &CDOTA_Ability_Nevermore_Requiem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_RequiemClass;
  CDOTA_Ability_Nevermore_Requiem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_RequiemClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Nevermore_RequiemClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Nevermore_Requiem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_RequiemClass;
}


// CDOTA_Ability_Nevermore_Requiem::GetStolenActivityModifier  (line 638, @0x0000000002a0b170, libserver.so)
const char *__fastcall CDOTA_Ability_Nevermore_Requiem::GetStolenActivityModifier(
        CDOTA_Ability_Nevermore_Requiem *const this)
{
  return "requiem";
}


// CDOTA_Ability_Nevermore_Requiem::YouForgotToImplementOrDeclareServerClass  (line 666, @0x00000000029b5b20, libserver.so)
int __fastcall CDOTA_Ability_Nevermore_Requiem::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Nevermore_Requiem *const this)
{
  return 0;
}


// CDOTA_Ability_Nevermore_Requiem::GetServerClass  (line 666, @0x00000000029c9b30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Nevermore_Requiem::GetServerClass(CDOTA_Ability_Nevermore_Requiem *const this)
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


// CDOTA_Ability_Nevermore_Requiem::CDOTA_Ability_Nevermore_Requiem  (line 673, @0x00000000029d56b0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// calls: CDOTABaseAbility::CDOTABaseAbility
// callers: CDOTA_Ability_Nevermore_Requiem::CEntityInstanceEntityClass::ConstructInstance
void __fastcall CDOTA_Ability_Nevermore_Requiem::CDOTA_Ability_Nevermore_Requiem(
        CDOTA_Ability_Nevermore_Requiem *const this)
{
  CDOTABaseAbility::CDOTABaseAbility(this);
  this->m_vecHeroesReqd.m_Size = 0;
  this->_vptr_IHandleEntity = &off_436BFB0;
  this->m_vecHeroesReqd.m_Memory.m_pMemory = 0;
  this->m_vecHeroesReqd.m_Memory.m_nAllocationCount = 0;
  this->m_vecHeroesReqd.m_Memory.m_nGrowSize = 0;
  this->m_nCachedSouls = 0;
}


// CDOTA_Ability_Nevermore_Requiem::OnAbilityPhaseStart  (line 739, @0x00000000029b8930, libserver.so)  // inlines: GetParent
// calls: CGameSceneNode::GetOwnerEntity, CDOTABaseAbility::CreateAbilityParticleEffect, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::UnitEmitSound, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "particles/units/heroes/hero_nevermore/nevermore_wings.vpcf", "attach_hitloc", "attach_attack1", "attach_attack2", "Hero_Nevermore.RequiemOfSoulsCast", "modifier_nevermore_requiem_invis_break"
bool __fastcall CDOTA_Ability_Nevermore_Requiem::OnAbilityPhaseStart(CDOTA_Ability_Nevermore_Requiem *const this)
{
  CBaseEntity *OwnerEntity; // rcx
  CGameSceneNode *m_pParent; // rdi
  CGameSceneNode *v4; // rdi
  CBaseEntity *v5; // rax
  const CBaseAnimating *v6; // r13
  const Vector *AbsOrigin; // r12
  CGameSceneNode *v8; // rdi
  int m_nFXIndex; // r14d
  CDOTA_ParticleManager *ParticleManager; // rax
  CGameSceneNode *v11; // rdi
  CBaseEntity *v12; // rax
  const CBaseAnimating *v13; // r13
  const Vector *v14; // r12
  CGameSceneNode *v15; // rdi
  int v16; // r14d
  CDOTA_ParticleManager *v17; // rax
  CGameSceneNode *v18; // rdi
  CBaseEntity *v19; // rax
  const CBaseAnimating *v20; // r13
  const Vector *v21; // r12
  CGameSceneNode *v22; // rdi
  int v23; // r14d
  CDOTA_ParticleManager *v24; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v26; // r13
  CDOTA_BaseNPC *v27; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-28h]

  OwnerEntity = 0;
  v30 = __readfsqword(0x28u);
  m_pParent = this->m_pGameSceneNode->m_pParent;
  if ( m_pParent != 0 )
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
  this->m_nFXIndex = CDOTABaseAbility::CreateAbilityParticleEffect(
                       this,
                       "particles/units/heroes/hero_nevermore/nevermore_wings.vpcf",
                       1,
                       OwnerEntity,
                       0);
  v4 = this->m_pGameSceneNode->m_pParent;
  v5 = 0;
  if ( v4 != 0 )
    v5 = CGameSceneNode::GetOwnerEntity(v4);
  v6 = 0;
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v8 = this->m_pGameSceneNode->m_pParent;
  if ( v8 != 0 )
    v6 = CGameSceneNode::GetOwnerEntity(v8);
  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, m_nFXIndex, 1, v6, 5, "attach_hitloc", *AbsOrigin, 1);
  v11 = this->m_pGameSceneNode->m_pParent;
  v12 = 0;
  if ( v11 != 0 )
    v12 = CGameSceneNode::GetOwnerEntity(v11);
  v13 = 0;
  v14 = CBaseEntity::GetAbsOrigin(v12);
  v15 = this->m_pGameSceneNode->m_pParent;
  if ( v15 != 0 )
    v13 = CGameSceneNode::GetOwnerEntity(v15);
  v16 = this->m_nFXIndex;
  v17 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v17, v16, 5, v13, 5, "attach_attack1", *v14, 1);
  v18 = this->m_pGameSceneNode->m_pParent;
  v19 = 0;
  if ( v18 != 0 )
    v19 = CGameSceneNode::GetOwnerEntity(v18);
  v20 = 0;
  v21 = CBaseEntity::GetAbsOrigin(v19);
  v22 = this->m_pGameSceneNode->m_pParent;
  if ( v22 != 0 )
    v20 = CGameSceneNode::GetOwnerEntity(v22);
  v23 = this->m_nFXIndex;
  v24 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v24, v23, 6, v20, 5, "attach_attack2", *v21, 1);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(Caster, "Hero_Nevermore.RequiemOfSoulsCast", 0.0, 0, 0);
  KeyValues::KeyValues(&kv, "modifier_nevermore_requiem_invis_break");
  v26 = CDOTABaseAbility::GetCaster(this);
  v27 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v27, v26, this, "modifier_nevermore_requiem_invis_break", &kv, 0);
  KeyValues::~KeyValues(&kv);
  return 1;
}


// CDOTA_Ability_Nevermore_Requiem::OnAbilityPhaseInterrupted  (line 755, @0x00000000029b7ae0, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTABaseAbility::GetCaster, CBaseEntity::StopSound, CDOTA_BaseNPC::RemoveModifierByName
// strings: "Hero_Nevermore.RequiemOfSoulsCast", "modifier_nevermore_requiem_invis_break"
void __fastcall CDOTA_Ability_Nevermore_Requiem::OnAbilityPhaseInterrupted(CDOTA_Ability_Nevermore_Requiem *const this)
{
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // rax

  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 1);
  Caster = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::StopSound(Caster, "Hero_Nevermore.RequiemOfSoulsCast");
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v5, "modifier_nevermore_requiem_invis_break");
}


// CDOTA_Ability_Nevermore_Requiem::OnSpellStart  (line 767, @0x00000000029f64d0, libserver.so)  // inlines: FindModifierByName, GetLevelSpecialValueFor<int>, GetTeamNumber
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, GetParticleManager, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, CDOTA_ModifierManager::FindModifierByName, ceilf, CDOTA_Ability_Nevermore_Requiem::DoRequiem, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_BaseNPC::HasScepter (19 total)
// strings: "requiem_soul_conversion", "modifier_nevermore_necromastery", "modifier_nevermore_requiem_invis_break", "requiem_line_speed", "requiem_radius", "modifier_nevermore_requiem_thinker"
void __fastcall CDOTA_Ability_Nevermore_Requiem::OnSpellStart(CDOTA_Ability_Nevermore_Requiem *const this)
{
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  int v4; // esi
  int v5; // r12d
  int LevelSpecialValue; // r13d
  CDOTA_BaseNPC *Caster; // r14
  CModifieractoryDictionary *v8; // rax
  IModifierFactory *Factory; // rax
  CDOTA_Buff *ModifierByName; // rax
  int v11; // eax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  float v14; // xmm1_4
  int m_Value; // r14d
  CDOTA_BaseNPC *v16; // rax
  Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v18; // rax
  KeyValues kv; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-28h]

  v20 = __readfsqword(0x28u);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_vecHeroesReqd);
  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  v4 = m_nFXIndex;
  v5 = 0;
  CDOTA_ParticleManager::ReleaseParticleIndex(ParticleManager, v4);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "requiem_soul_conversion", -1, 0);
  if ( this->m_bStolen.m_Value )
    v5 = this->m_nCachedSouls / LevelSpecialValue;
  Caster = CDOTABaseAbility::GetCaster(this);
  v8 = ModifierFactoryDictionary();
  Factory = CModifieractoryDictionary::FindFactory(v8, "modifier_nevermore_necromastery");
  ModifierByName = CDOTA_ModifierManager::FindModifierByName(
                     &Caster->m_ModifierManager,
                     Factory,
                     "modifier_nevermore_necromastery",
                     0);
  if ( ModifierByName != 0 )
  {
    v11 = (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName);
    v5 = ceilf((v11 / LevelSpecialValue));
  }
  this->m_nKilleater_nLines = v5;
  CDOTA_Ability_Nevermore_Requiem::DoRequiem(this, v5, 0);
  v12 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v12, "modifier_nevermore_requiem_invis_break");
  v13 = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(v13) )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "requiem_line_speed", -1, 0);
    CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "requiem_radius", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_nevermore_requiem_thinker");
    KeyValues::SetFloat(&kv, "duration", v14);
    m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
    v16 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v16);
    v18 = CDOTABaseAbility::GetCaster(this);
    Thinker_Create(v18, this, "modifier_nevermore_requiem_thinker", &kv, *AbsOrigin, m_Value, 0, 1, 0);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Nevermore_Requiem::DoRequiem  (line 805, @0x00000000029f5a40, libserver.so)  // inlines: CBroadcastRecipientFilter, CDOTAUserMsg_NevermoreRequiem_t, CEntityHandle, CHandle, CNetMessagePB, CUserMessagePB, FindGameEvent<CDOTAUserMsg_NevermoreRequiem_t>, FindOrCreateGameEvent<CDOTAUserMsg_NevermoreRequiem_t>, Get, GetAbilityData, GetEHandle, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetParent, GetSerialNumber, PostEvent<CDOTAUserMsg_NevermoreRequiem_t>, QAngle, SendUserMessage<CDOTAUserMsg_NevermoreRequiem_t>, Server_EHandleToInt, Set, SetBool, ToNetworkableInt, Vector, VectorAdd, VectorMultiply, mutable_origin, operator*, operator+, operator=, sLinearProjectileCreateInfo, set_entity_handle, set_has_entity_handle, set_has_origin, set_has_reverse, set_has_x, set_has_y, set_has_z, set_lines, set_reverse, set_x, set_y, set_z, ~CBroadcastRecipientFilter, ~CDOTAUserMsg_NevermoreRequiem_t, ~CNetMessagePB, ~CUserMessagePB
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::UnitEmitSound, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CGameSceneNode::GetOwnerEntity, CBaseEntity::GetAbsOrigin, CDOTAUserMsg_NevermoreRequiem::CDOTAUserMsg_NevermoreRequiem, CEntityHandle::operator CEntityInstance*, CDOTAUserMsg_NevermoreRequiem::~CDOTAUserMsg_NevermoreRequiem, CRecipientFilter::~CRecipientFilter, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::CreateAbilityParticleEffect (29 total)
// callers: CDOTA_Ability_Nevermore_Requiem::OnSpellStart, CDOTA_Modifier_Nevermore_Necromastery::OnDeath, CDOTA_Modifier_Nevermore_Requiem_Thinker::OnDestroy
// strings: "Hero_Nevermore.RequiemOfSouls", "requiem_soul_conversion", "particles/units/heroes/hero_nevermore/nevermore_requiemofsouls.vpcf", "attach_hitloc", "requiem_line_width_start", "requiem_line_width_end" (10 total)
// globals: IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_NevermoreRequiem_t>(bool)::s_hEvent
void __fastcall CDOTA_Ability_Nevermore_Requiem::DoRequiem(
        CDOTA_Ability_Nevermore_Requiem *const this,
        int nLines,
        bool bReverse)
{
  CDOTA_BaseNPC *Caster; // rax
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rdi
  const Vector *AbsOrigin; // r14
  CEntityIdentity *m_pEntity; // rdx
  __int16 v11; // cx
  CEntityInstance *v12; // rax
  int v13; // edx
  int v14; // eax
  vec_t x; // xmm7_4
  CMsgVector *v16; // rax
  CMsgVector *v17; // rax
  vec_t y; // xmm7_4
  vec_t z; // xmm7_4
  CMsgVector *v20; // r14
  IGameEventSystem *v21; // r14
  int AbilityParticleEffect; // ebx
  CDOTA_BaseNPC *v23; // rax
  const Vector *v24; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v26; // rax
  CDOTA_BaseNPC *v27; // r12
  CDOTA_ParticleManager *v28; // rax
  CDOTA_ParticleManager *v29; // rax
  float v30; // xmm1_4
  vec_t v31; // xmm0_4
  vec_t v32; // xmm1_4
  float requiem_line_width_start; // xmm0_4
  CDOTA_BaseNPC *v34; // rax
  CEntityIdentity *v35; // rdx
  int v36; // eax
  __int16 v37; // cx
  int v38; // r12d
  int v39; // r14d
  CBaseEntity *v40; // rdi
  const Vector *v41; // rax
  vec_t v42; // xmm0_4
  vec_t v43; // xmm2_4
  CGameSceneNode *v44; // rax
  const CGameSceneNode *v45; // rdi
  CBaseEntity *v46; // rdi
  float v47; // xmm1_4
  float v48; // xmm1_4
  float v49; // xmm1_4
  CGameSceneNode *m_pGameSceneNode; // rax
  float v51; // xmm0_4
  const CGameSceneNode *v52; // rdi
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r14d
  CDOTA_BaseNPC *v55; // rax
  const Vector *v56; // r12
  CDOTA_BaseNPC *v57; // rax
  float v58; // xmm3_4
  int requiem_line_speed; // [rsp+20h] [rbp-230h]
  void *pMemc; // [rsp+28h] [rbp-228h]
  float pMem; // [rsp+28h] [rbp-228h]
  CMsgVector *pMemb; // [rsp+28h] [rbp-228h]
  CMsgVector *pMema; // [rsp+28h] [rbp-228h]
  vec_t v64; // [rsp+30h] [rbp-220h]
  vec_t v65; // [rsp+30h] [rbp-220h]
  vec_t v66; // [rsp+30h] [rbp-220h]
  void (__fastcall *v67)(IGameEventSystem *, _QWORD, _QWORD, KeyValues *, void *, sLinearProjectileCreateInfo *, __int64); // [rsp+30h] [rbp-220h]
  float v68; // [rsp+30h] [rbp-220h]
  float v69; // [rsp+38h] [rbp-218h]
  QAngle angles; // [rsp+40h] [rbp-210h] BYREF
  Vector vForward; // [rsp+50h] [rbp-200h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+60h] [rbp-1F0h] BYREF
  KeyValues kv; // [rsp+E0h] [rbp-170h] BYREF
  unsigned __int64 v74; // [rsp+218h] [rbp-38h]

  v74 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(Caster, "Hero_Nevermore.RequiemOfSouls", 0.0, 0, 0);
  if ( nLines > 0 )
  {
    CRecipientFilter::CRecipientFilter(&kv);
    kv.m_uValue = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&kv);
    m_pParent = this->m_pGameSceneNode->m_pParent;
    if ( m_pParent != 0 )
      OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    else
      OwnerEntity = 0;
    AbsOrigin = CBaseEntity::GetAbsOrigin(OwnerEntity);
    CDOTAUserMsg_NevermoreRequiem::CDOTAUserMsg_NevermoreRequiem(&info);
    vForward.x = NAN;
    info.pszEffectName = off_430C930;
    if ( this != 0 )
    {
      m_pEntity = this->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v11 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LODWORD(vForward.x) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v11 & 0x7FFF;
      }
    }
    v12 = CEntityHandle::operator CEntityInstance *(&vForward);
    v13 = 0xFFFFFF;
    if ( v12 != 0 && LODWORD(vForward.x) != -1 )
      v13 = LOWORD(vForward.x) & 0x7FFF | (LODWORD(vForward.x) >> 1) & 0xFFC000;
    LODWORD(info.vSpawnOrigin.z) = v13;
    LODWORD(info.vVelocity.x) = nLines;
    LOBYTE(info.vAcceleration.x) = bReverse;
    v14 = LODWORD(info.vSpawnOrigin.x) | 0xF;
    LODWORD(info.vSpawnOrigin.x) |= 0xBu;
    x = AbsOrigin->x;
    LODWORD(info.vSpawnOrigin.x) = v14;
    v16 = *&info.vVelocity.y;
    v64 = x;
    if ( *&info.vVelocity.y == 0 )
    {
      pMema = operator new(0x28u);
      CMsgVector::CMsgVector(pMema);
      v16 = pMema;
      *&info.vVelocity.y = pMema;
    }
    *(v16 + 4) |= 1u;
    *(v16 + 6) = v64;
    v17 = *&info.vVelocity.y;
    y = AbsOrigin->y;
    LODWORD(info.vSpawnOrigin.x) |= 4u;
    v65 = y;
    if ( *&info.vVelocity.y == 0 )
    {
      pMemb = operator new(0x28u);
      CMsgVector::CMsgVector(pMemb);
      v17 = pMemb;
      *&info.vVelocity.y = pMemb;
    }
    *(v17 + 4) |= 2u;
    *(v17 + 7) = v65;
    z = AbsOrigin->z;
    v20 = *&info.vVelocity.y;
    LODWORD(info.vSpawnOrigin.x) |= 4u;
    v66 = z;
    if ( *&info.vVelocity.y == 0 )
    {
      v20 = operator new(0x28u);
      CMsgVector::CMsgVector(v20);
      *&info.vVelocity.y = v20;
    }
    *(v20 + 4) |= 4u;
    *(v20 + 8) = v66;
    v21 = g_pGameEventSystem;
    v67 = *(*g_pGameEventSystem + 128LL);
    pMemc = IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_NevermoreRequiem_t>(bool)::s_hEvent;
    (*(*g_pNetworkMessages + 96LL))(
      g_pNetworkMessages,
      IGameEventSystem::FindOrCreateGameEvent<CDOTAUserMsg_NevermoreRequiem_t>(bool)::s_hEvent);
    v67(v21, 0, 0, &kv, pMemc, &info, 48);
    info.pszEffectName = &off_430C7B0;
    CDOTAUserMsg_NevermoreRequiem::~CDOTAUserMsg_NevermoreRequiem(&info);
    kv.m_uValue = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&kv);
  }
  if ( !bReverse )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "requiem_soul_conversion", -1, 0);
    AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                              this,
                              "particles/units/heroes/hero_nevermore/nevermore_requiemofsouls.vpcf",
                              8,
                              0,
                              0);
    v23 = CDOTABaseAbility::GetCaster(this);
    v24 = CBaseEntity::GetAbsOrigin(v23);
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(ParticleManager, AbilityParticleEffect, 0, *&v24->x, v24->z);
    *(&info.pszEffectName + 4) = 0;
    *&info.pszEffectName = nLines;
    v26 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v26, AbilityParticleEffect, 1, *&info.pszEffectName, *&info.pAbility);
    v27 = CDOTABaseAbility::GetCaster(this);
    v28 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(
      v28,
      AbilityParticleEffect,
      3,
      v27,
      5,
      "attach_hitloc",
      vec3_invalid,
      1);
    v29 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v29, AbilityParticleEffect);
    this->requiem_line_width_start = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                       this,
                                       "requiem_line_width_start",
                                       -1,
                                       0);
    this->requiem_line_width_end = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "requiem_line_width_end", -1, 0);
    requiem_line_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "requiem_line_speed", -1, 0);
    LODWORD(v27) = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "requiem_radius", -1, 0);
    KeyValues::KeyValues(&kv, "requiem");
    KeyValues::SetFloat(&kv, "flDamageDealt", v30);
    info.hSource.m_Index = -1;
    info.pszEffectName = 0;
    info.bHasFrontalCone = 1;
    v31 = vec3_origin.z;
    info.bCheckStartPosition = 0;
    info.iUnitTargetTeam = 0;
    info.vSpawnOrigin.z = v31;
    v32 = vec3_origin.y;
    info.vVelocity.z = v31;
    info.vAcceleration.z = v31;
    requiem_line_width_start = this->requiem_line_width_start;
    info.vSpawnOrigin.x = vec3_origin.x;
    info.vSpawnOrigin.y = v32;
    info.vVelocity.x = vec3_origin.x;
    info.vVelocity.y = v32;
    info.vAcceleration.x = vec3_origin.x;
    info.vAcceleration.y = v32;
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
    info.fDistance = v27;
    info.fStartRadius = requiem_line_width_start;
    info.fEndRadius = this->requiem_line_width_end;
    v34 = CDOTABaseAbility::GetCaster(this);
    if ( v34 != 0 && (v35 = v34->m_pEntity) != 0 )
    {
      v36 = (v35->m_EHandle.m_Index >> 15) - (v35->m_flags & 1);
      v37 = 0x7FFF;
      if ( v35->m_EHandle.m_Index != -1 )
        v37 = v35->m_EHandle.m_Index & 0x7FFF;
      LOWORD(info.hSource.m_Index) = v37 | info.hSource.m_Index & 0x8000;
      info.hSource.m_Index = (v36 << 15) | info.hSource.m_Index & 0x7FFF;
    }
    else
    {
      info.hSource.m_Index = -1;
    }
    info.iUnitTargetTeam = 2;
    info.iUnitTargetType = 19;
    info.iUnitTargetFlags = 16;
    info.bHasFrontalCone = 0;
    info.bCheckStartPosition = 1;
    info.pKVExtraData = &kv;
    if ( nLines > 0 )
    {
      v38 = 0;
      v39 = 0;
      do
      {
        angles.x = 0.0;
        angles.z = 0.0;
        angles.y = (v38 / nLines);
        AngleVectors(&angles, &vForward, 0, 0);
        m_pGameSceneNode = this->m_pGameSceneNode;
        info.vVelocity.x = requiem_line_speed * vForward.x;
        info.vVelocity.z = requiem_line_speed * vForward.z;
        v51 = this->requiem_line_width_start;
        info.vVelocity.y = requiem_line_speed * vForward.y;
        v52 = m_pGameSceneNode->m_pParent;
        v69 = vForward.x * v51;
        v68 = vForward.y * v51;
        pMem = v51 * vForward.z;
        if ( v52 != 0 )
          v40 = CGameSceneNode::GetOwnerEntity(v52);
        else
          v40 = 0;
        v41 = CBaseEntity::GetAbsOrigin(v40);
        v42 = pMem + v41->z;
        v43 = v69 + v41->x;
        info.vSpawnOrigin.y = v68 + v41->y;
        v44 = this->m_pGameSceneNode;
        info.vSpawnOrigin.z = v42;
        info.vSpawnOrigin.x = v43;
        v45 = v44->m_pParent;
        if ( v45 != 0 )
          v46 = CGameSceneNode::GetOwnerEntity(v45);
        else
          v46 = 0;
        CBaseEntity::GetAbsOrigin(v46);
        KeyValues::SetFloat(&kv, "x", v47);
        KeyValues::SetFloat(&kv, "y", v48);
        KeyValues::SetFloat(&kv, "z", v49);
        KeyValues::SetInt(&kv, "returning", 0);
        CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
        ++v39;
        v38 += 360;
      }
      while ( v39 != nLines );
    }
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(this, 0);
      m_pAbilityData = this->m_pAbilityData;
    }
    m_iAbilityID = m_pAbilityData->m_iAbilityID;
    v55 = CDOTABaseAbility::GetCaster(this);
    v56 = CBaseEntity::GetAbsOrigin(v55);
    v57 = CDOTABaseAbility::GetCaster(this);
    CDOTAGamerules::SendProjectionAbilityMessage(g_pGameRules, v57, 1, m_iAbilityID, 0, 0, *&v56->x, v56->z, -1.0, v58);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Nevermore_Requiem::OnProjectileThink_ExtraData  (line 889, @0x00000000029e48d0, libserver.so)  // inlines: FastSqrt, GetBool, GetLevelSpecialValueFor<int>, Length2D, NormalizeInPlace, SetBool, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator-
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, KeyValues::GetInt, KeyValues::GetFloat, KeyValues::SetInt, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetAbsOrigin, VectorNormalize, CDOTA_ProjectileManager::UpdateLinearProjectileDirection, CDOTA_ProjectileManager::ClearHitList, CDOTA_ProjectileManager::ResetRadiusValues
// strings: "returning", "requiem_radius", "requiem_line_speed", "requiem_line_width_start", "requiem_line_width_end"
void __fastcall CDOTA_Ability_Nevermore_Requiem::OnProjectileThink_ExtraData(
        CDOTA_Ability_Nevermore_Requiem *const this,
        int iProjectileIndex,
        const Vector *const vLocation,
        KeyValues *pExtraData)
{
  CDOTA_BaseNPC *Caster; // rax
  int Int; // r15d
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm1_4
  CDOTA_BaseNPC *v13; // rax
  int LevelSpecialValue; // ebx
  int v15; // r15d
  CDOTA_BaseNPC *v16; // rax
  const Vector *AbsOrigin; // rax
  float x; // xmm2_4
  float y; // xmm1_4
  vec_t v20; // xmm1_4
  float v21; // xmm2_4
  float requiem_line_speed; // [rsp+8h] [rbp-58h]
  int requiem_line_speeda; // [rsp+8h] [rbp-58h]
  float requiem_line_width_end; // [rsp+Ch] [rbp-54h]
  int requiem_line_width_enda; // [rsp+Ch] [rbp-54h]
  Vector vDirection; // [rsp+10h] [rbp-50h] BYREF
  Vector vVelocity; // [rsp+20h] [rbp-40h] BYREF

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
  {
    Int = KeyValues::GetInt(pExtraData, "returning", 0);
    requiem_line_width_end = KeyValues::GetFloat(pExtraData, "x", v10);
    requiem_line_speed = KeyValues::GetFloat(pExtraData, "y", v11);
    KeyValues::GetFloat(pExtraData, "z", v12);
    if ( fsqrt(
           ((vLocation->x - requiem_line_width_end) * (vLocation->x - requiem_line_width_end))
         + ((vLocation->y - requiem_line_speed) * (vLocation->y - requiem_line_speed))) < 30.0
      && Int == 0 )
    {
      v13 = CDOTABaseAbility::GetCaster(this);
      if ( (*(v13->_vptr_IHandleEntity + 408))(v13) != 0 )
      {
        KeyValues::SetInt(pExtraData, "returning", 1);
        LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "requiem_radius", -1, 0);
        requiem_line_speeda = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "requiem_line_speed", -1, 0);
        v15 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "requiem_line_width_start", -1, 0);
        requiem_line_width_enda = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "requiem_line_width_end", -1, 0);
        v16 = CDOTABaseAbility::GetCaster(this);
        AbsOrigin = CBaseEntity::GetAbsOrigin(v16);
        x = AbsOrigin->x;
        y = AbsOrigin->y;
        vDirection.z = 0.0;
        v20 = y - vLocation->y;
        vDirection.x = x - vLocation->x;
        vDirection.y = v20;
        VectorNormalize(&vDirection);
        vVelocity.z = vDirection.z * requiem_line_speeda;
        vVelocity.y = vDirection.y * requiem_line_speeda;
        vVelocity.x = requiem_line_speeda * vDirection.x;
        CDOTA_ProjectileManager::UpdateLinearProjectileDirection(
          &g_DOTAProjectileManager,
          iProjectileIndex,
          &vVelocity,
          LevelSpecialValue);
        CDOTA_ProjectileManager::ClearHitList(&g_DOTAProjectileManager, iProjectileIndex);
        CDOTA_ProjectileManager::ResetRadiusValues(
          &g_DOTAProjectileManager,
          iProjectileIndex,
          requiem_line_width_enda,
          v15,
          v21);
      }
    }
  }
}


// CDOTA_Ability_Nevermore_Requiem::OnProjectileHit_ExtraData  (line 937, @0x00000000029fda30, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetBool, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetSerialNumber, GrowMemory, IndexToIdentity, IsRealHero, IsValid, LookupEntity, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, EconEntity_OnOwnerKillEaterEvent, CDOTA_BaseNPC::HasScepter, KeyValues::GetFloat, CDOTA_BaseNPC::Heal, __stack_chk_fail, KeyValues::GetInt, ApplyDamage, CDOTA_BaseNPC::UnitEmitSound, KeyValues::KeyValues, CDOTABaseAbility::GetDuration (17 total)
// strings: "requiem_heal_pct_scepter", "requiem_damage_pct_scepter", "flDamageDealt", "returning", "Hero_Nevermore.RequiemOfSouls.Damage", "modifier_nevermore_requiem"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_Nevermore_Requiem::OnProjectileHit_ExtraData(
        CDOTA_Ability_Nevermore_Requiem *const this,
        _DWORD *hTarget,
        const Vector *const vLocation,
        KeyValues *pExtraData)
{
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  bool v8; // zf
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC_Hero *v10; // rdi
  CDOTA_BaseNPC *v11; // rax
  float v12; // xmm1_4
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  CEntityInstance *m_pInstance; // r12
  int Int; // r14d
  float v18; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  float v20; // xmm1_4
  CDOTA_BaseNPC *v21; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v23; // cx
  __int64 m_Size; // r12
  int v25; // eax
  CHandle<CBaseEntity> *v26; // rax
  float flDamage; // [rsp+Ch] [rbp-54h]
  float flDamagea; // [rsp+Ch] [rbp-54h]
  float flDamageb; // [rsp+Ch] [rbp-54h]
  float flDamaged; // [rsp+Ch] [rbp-54h]
  float flDamagec; // [rsp+Ch] [rbp-54h]
  int v32; // [rsp+10h] [rbp-50h]
  KeyValues kv; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v34; // [rsp+38h] [rbp-28h]

  v34 = __readfsqword(0x28u);
  if ( (*hTarget + 2) > 1
    && (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F]) != 0
    && (v7 = &v6[*hTarget & 0x1FF]) != 0
    && *hTarget == v7->m_EHandle.m_Index
    && (m_pInstance = v7->m_pInstance, v7->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "requiem_heal_pct_scepter", -1, 0);
    flDamageb = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "requiem_damage_pct_scepter", -1, 0);
    Int = KeyValues::GetInt(pExtraData, "returning", 0);
    v18 = (*(this->_vptr_IHandleEntity + 247))(this);
    if ( Int != 0 )
    {
      v18 = v18 * (flDamageb / 100.0);
      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
      {
        flDamagec = v18;
        KeyValues::GetFloat(pExtraData, "flDamageDealt", v18);
        KeyValues::SetFloat(pExtraData, "flDamageDealt", flDamagec);
        v18 = flDamagec;
      }
    }
    flDamaged = v18;
    Caster = CDOTABaseAbility::GetCaster(this);
    ApplyDamage(Caster, m_pInstance, this, flDamaged, 2, 0);
    CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Nevermore.RequiemOfSouls.Damage", 0.0, 0, 0);
    KeyValues::KeyValues(&kv, "modifier_nevermore_requiem");
    CDOTABaseAbility::GetDuration(this);
    KeyValues::SetFloat(&kv, "duration", v20);
    v21 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(m_pInstance, v21, this, "modifier_nevermore_requiem", &kv, 0);
    if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
      && LOBYTE(m_pInstance[71].m_pEntity) == 0
      && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) == 0 )
    {
      m_pEntity = m_pInstance->m_pEntity;
      v32 = -1;
      if ( m_pEntity != 0 )
      {
        v23 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v23 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v32 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v23 & 0x7FFF;
      }
      m_Size = this->m_vecHeroesReqd.m_Size;
      v25 = this->m_vecHeroesReqd.m_Size;
      if ( m_Size == this->m_vecHeroesReqd.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_vecHeroesReqd.m_Memory, 1);
        v25 = this->m_vecHeroesReqd.m_Size;
      }
      this->m_vecHeroesReqd.m_Size = v25 + 1;
      v26 = &this->m_vecHeroesReqd.m_Memory.m_pMemory[m_Size];
      if ( v26 != 0 )
        v26->m_Index = v32;
    }
    KeyValues::~KeyValues(&kv);
  }
  else
  {
    flDamage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "requiem_heal_pct_scepter", -1, 0);
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "requiem_damage_pct_scepter", -1, 0);
    v8 = this->m_nKilleater_nLines-- == 1;
    if ( v8 && this->m_vecHeroesReqd.m_Size > 1 )
    {
      v9 = CDOTABaseAbility::GetCaster(this);
      if ( v9 != 0 )
      {
        v10 = 0;
        if ( v9->m_bIsDOTANPC && (v9->m_iUnitType & 1) != 0 && !v9->m_bIsIllusion.m_Value )
          v10 = v9;
      }
      else
      {
        v10 = 0;
      }
      EconEntity_OnOwnerKillEaterEvent(
        v10,
        0,
        kill_eater_event_t::kKillEaterEvent_ShadowFiend_RequiemMultiKills,
        1,
        INVALID_ITEM_DEF_INDEX);
    }
    v11 = CDOTABaseAbility::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(v11) )
    {
      flDamagea = (KeyValues::GetFloat(pExtraData, "flDamageDealt", v12) * flDamage) / 100.0;
      if ( flDamagea > 0.0 )
      {
        v14 = CDOTABaseAbility::GetCaster(this);
        if ( (*(v14->_vptr_IHandleEntity + 408))(v14) != 0 )
        {
          v15 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::Heal(v15, flDamagea, this, 0, 1);
        }
      }
    }
  }
  return 0;
}


// CDOTA_Ability_Nevermore_Requiem::OnStolen  (line 1000, @0x00000000029c09e0, libserver.so)  // inlines: FindModifierByName
// calls: CDOTABaseAbility::GetCaster, ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, CDOTA_ModifierManager::FindModifierByName
// strings: "modifier_nevermore_necromastery"
void __fastcall CDOTA_Ability_Nevermore_Requiem::OnStolen(
        CDOTA_Ability_Nevermore_Requiem *const this,
        CDOTABaseAbility *pSourceAbility)
{
  CDOTA_BaseNPC *Caster; // rbx
  CModifieractoryDictionary *v4; // rax
  IModifierFactory *Factory; // rax
  CDOTA_Buff *ModifierByName; // rax

  if ( pSourceAbility != 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(pSourceAbility);
    if ( Caster != 0 )
    {
      v4 = ModifierFactoryDictionary();
      Factory = CModifieractoryDictionary::FindFactory(v4, "modifier_nevermore_necromastery");
      ModifierByName = CDOTA_ModifierManager::FindModifierByName(
                         &Caster->m_ModifierManager,
                         Factory,
                         "modifier_nevermore_necromastery",
                         0);
      if ( ModifierByName != 0 )
        this->m_nCachedSouls = (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName);
    }
  }
}


// CDOTA_Ability_Nevermore_Requiem::GetAbilityDamageToTargetOverInterval  (line 1018, @0x00000000029e6170, libserver.so)  // inlines: FastSqrt, Length2D, RemapValClamped, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, clamp<float, float>, operator*, operator+, operator-
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTALocomotor::GetAverageVelocityOverTime, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "requiem_radius", "modifier_nevermore_necromastery"
__int64 __fastcall CDOTA_Ability_Nevermore_Requiem::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Nevermore_Requiem *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  unsigned int v4; // r12d
  int LevelSpecialValue; // r14d
  CDOTALocomotor *v9; // rax
  float v10; // xmm1_4
  float v11; // xmm0_4
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *Caster; // rax
  const Vector *v14; // rax
  float v15; // xmm0_4
  CDOTA_BaseNPC *v16; // rax
  CDOTA_Buff *ModifierByName; // rax
  float v18; // xmm3_4
  __m128 v19; // xmm0
  double v20; // xmm2_8
  double v21; // xmm1_8
  int v22; // eax
  int v23; // r12d
  int v24; // ebx
  __m128 v25; // xmm3
  float fDistance; // [rsp+8h] [rbp-38h]
  float fDistancea; // [rsp+8h] [rbp-38h]
  float v28; // [rsp+Ch] [rbp-34h]
  float v29; // [rsp+Ch] [rbp-34h]
  float v30; // [rsp+Ch] [rbp-34h]
  float v31; // [rsp+Ch] [rbp-34h]
  unsigned __int64 v32; // [rsp+10h] [rbp-30h]

  v4 = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "requiem_radius", -1, 1);
    v28 = (*(this->_vptr_IHandleEntity + 231))(this);
    v9 = (*(pTarget->_vptr_IHandleEntity + 376))(pTarget);
    v32 = CDOTALocomotor::GetAverageVelocityOverTime(v9, v28, v10).m128i_u64[0];
    v11 = (*(this->_vptr_IHandleEntity + 231))(this);
    v29 = *&v32 * v11;
    fDistance = v11 * *(&v32 + 1);
    AbsOrigin = CBaseEntity::GetAbsOrigin(pTarget);
    v30 = v29 + AbsOrigin->x;
    fDistancea = fDistance + AbsOrigin->y;
    Caster = CDOTABaseAbility::GetCaster(this);
    v14 = CBaseEntity::GetAbsOrigin(Caster);
    v15 = fsqrt(((v14->x - v30) * (v14->x - v30)) + ((v14->y - fDistancea) * (v14->y - fDistancea)));
    if ( v15 <= LevelSpecialValue )
    {
      v31 = v15;
      v16 = CDOTABaseAbility::GetCaster(this);
      ModifierByName = CDOTA_BaseNPC::FindModifierByName(v16, "modifier_nevermore_necromastery", 0);
      v18 = 0.0;
      v19 = LODWORD(v31);
      v20 = 0.0;
      *&v21 = COERCE_UNSIGNED_INT(LevelSpecialValue);
      if ( ModifierByName != 0 )
      {
        v22 = (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName, v31, *&v21, 0.0);
        v19 = LODWORD(v31);
        v18 = 0.0;
        *&v21 = COERCE_UNSIGNED_INT(LevelSpecialValue);
        *&v20 = (v22 / 2) * 0.5;
      }
      if ( *&v21 == 0.0 )
      {
        v19.m128_f32[0] = v19.m128_f32[0] - 0.0;
        if ( v19.m128_f32[0] < 0.0 )
          v23 = *&v20;
        else
          v23 = 1;
      }
      else
      {
        v19.m128_f32[0] = v19.m128_f32[0] / *&v21;
        if ( v19.m128_f32[0] >= 0.0 )
        {
          v25 = _mm_cmplt_ss(0x3F800000u, v19);
          *&v21 = v25.m128_i32[0] & 0x3F800000;
          LODWORD(v18) = _mm_andnot_ps(v25, v19).m128_u32[0] | v25.m128_i32[0] & 0x3F800000;
        }
        v19.m128_i32[1] = 0;
        v19.m128_f32[0] = ((1.0 - *&v20) * v18) + *&v20;
        v23 = v19.m128_f32[0];
      }
      v24 = (*(this->_vptr_IHandleEntity + 247))(this, *v19.m128_u64, v21, v20);
      return ((v23 * v24) * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
    }
  }
  return v4;
}


// CDOTA_Modifier_Nevermore_Requiem_InvisBreak::~CDOTA_Modifier_Nevermore_Requiem_InvisBreak  (line 1056, @0x0000000002a11380, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nevermore_Requiem_InvisBreak::~CDOTA_Modifier_Nevermore_Requiem_InvisBreak(
        CDOTA_Modifier_Nevermore_Requiem_InvisBreak *const this)
{
  this->_vptr_CDOTA_Buff = &off_436CA70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nevermore_Requiem_InvisBreak::~CDOTA_Modifier_Nevermore_Requiem_InvisBreak  (line 1056, @0x0000000002a113a0, libserver.so)  // inlines: ~CDOTA_Modifier_Nevermore_Requiem_InvisBreak
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nevermore_Requiem_InvisBreak::~CDOTA_Modifier_Nevermore_Requiem_InvisBreak(
        CDOTA_Modifier_Nevermore_Requiem_InvisBreak *const this)
{
  this->_vptr_CDOTA_Buff = &off_436CA70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nevermore_Requiem_InvisBreak::IsHidden  (line 1061, @0x0000000002a0b180, libserver.so)
bool __fastcall CDOTA_Modifier_Nevermore_Requiem_InvisBreak::IsHidden(
        CDOTA_Modifier_Nevermore_Requiem_InvisBreak *const this)
{
  return 1;
}


// CDOTA_Modifier_Nevermore_Requiem_InvisBreak::IsPurgable  (line 1062, @0x0000000002a0b190, libserver.so)
bool __fastcall CDOTA_Modifier_Nevermore_Requiem_InvisBreak::IsPurgable(
        CDOTA_Modifier_Nevermore_Requiem_InvisBreak *const this)
{
  return 0;
}


// CDOTA_Modifier_Nevermore_Requiem_InvisBreak::OnCreated  (line 1078, @0x00000000029b6af0, libserver.so)
// calls: CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Nevermore_Requiem_InvisBreak::OnCreated(
        CDOTA_Modifier_Nevermore_Requiem_InvisBreak *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4

  this->bDisableInvis = 0;
  CDOTA_Buff::StartIntervalThink(this, 1.0, v2);
}


// CDOTA_Modifier_Nevermore_Requiem_InvisBreak::OnIntervalThink  (line 1088, @0x00000000029b5b30, libserver.so)
void __fastcall CDOTA_Modifier_Nevermore_Requiem_InvisBreak::OnIntervalThink(
        CDOTA_Modifier_Nevermore_Requiem_InvisBreak *const this)
{
  this->bDisableInvis = 1;
}


// CDOTA_Modifier_Nevermore_Requiem_InvisBreak::CheckState  (line 1101, @0x00000000029b5b40, libserver.so)  // inlines: Disable, Enable
void __fastcall CDOTA_Modifier_Nevermore_Requiem_InvisBreak::CheckState(
        CDOTA_Modifier_Nevermore_Requiem_InvisBreak *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nEnabledStateMask; // rdx
  uint64 v3; // rax

  m_nEnabledStateMask = buffState->m_nEnabledStateMask;
  buffState->m_nEnabledStateMask |= 0x2000000uLL;
  v3 = buffState->m_nDisabledStateMask & 0xFFFFFFFFFDFFFFFFLL;
  buffState->m_nDisabledStateMask = v3;
  if ( this->bDisableInvis )
  {
    LOBYTE(m_nEnabledStateMask) = m_nEnabledStateMask & 0x7F;
    LOBYTE(v3) = v3 | 0x80;
    buffState->m_nDisabledStateMask = v3;
    buffState->m_nEnabledStateMask = m_nEnabledStateMask | 0x2000000;
  }
}


// CDOTA_Modifier_Nevermore_Requiem_Thinker::~CDOTA_Modifier_Nevermore_Requiem_Thinker  (line 1119, @0x0000000002a11330, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nevermore_Requiem_Thinker::~CDOTA_Modifier_Nevermore_Requiem_Thinker(
        CDOTA_Modifier_Nevermore_Requiem_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_436CD90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nevermore_Requiem_Thinker::~CDOTA_Modifier_Nevermore_Requiem_Thinker  (line 1119, @0x0000000002a11350, libserver.so)  // inlines: ~CDOTA_Modifier_Nevermore_Requiem_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nevermore_Requiem_Thinker::~CDOTA_Modifier_Nevermore_Requiem_Thinker(
        CDOTA_Modifier_Nevermore_Requiem_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_436CD90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nevermore_Requiem_Thinker::IsPurgable  (line 1125, @0x0000000002a0b1a0, libserver.so)
bool __fastcall CDOTA_Modifier_Nevermore_Requiem_Thinker::IsPurgable(
        CDOTA_Modifier_Nevermore_Requiem_Thinker *const this)
{
  return 0;
}


// CDOTA_Modifier_Nevermore_Requiem_Thinker::IsHidden  (line 1126, @0x0000000002a0b1b0, libserver.so)
bool __fastcall CDOTA_Modifier_Nevermore_Requiem_Thinker::IsHidden(
        CDOTA_Modifier_Nevermore_Requiem_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Nevermore_Requiem_Thinker::OnDestroy  (line 1133, @0x00000000029fa210, libserver.so)  // inlines: DotaRetrieveAbilityValue<int>, FindModifierByName, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, ModifierFactoryDictionary, CModifieractoryDictionary::FindFactory, CDOTA_ModifierManager::FindModifierByName, ceilf, CDOTA_Ability_Nevermore_Requiem::DoRequiem, CDOTA_Buff::GetParent, UTIL_Remove
// strings: "requiem_soul_conversion", "modifier_nevermore_necromastery"
void __fastcall CDOTA_Modifier_Nevermore_Requiem_Thinker::OnDestroy(
        CDOTA_Modifier_Nevermore_Requiem_Thinker *const this)
{
  int LevelSpecialValue; // r13d
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_Ability_Nevermore_Requiem *v5; // r12
  int v6; // r14d
  CDOTA_BaseNPC *Caster; // r15
  CModifieractoryDictionary *v8; // rax
  IModifierFactory *Factory; // rax
  CDOTA_Buff *ModifierByName; // rax
  int v11; // eax
  CDOTA_BaseNPC *Parent; // rax

  LevelSpecialValue = 0;
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "requiem_soul_conversion", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  v5 = v4;
  if ( v4 != 0 )
  {
    v6 = 0;
    if ( v4->m_bStolen.m_Value )
      v6 = SLODWORD(v4[1].m_pEntity) / LevelSpecialValue;
    Caster = CDOTA_Buff::GetCaster(this);
    v8 = ModifierFactoryDictionary();
    Factory = CModifieractoryDictionary::FindFactory(v8, "modifier_nevermore_necromastery");
    ModifierByName = CDOTA_ModifierManager::FindModifierByName(
                       &Caster->m_ModifierManager,
                       Factory,
                       "modifier_nevermore_necromastery",
                       0);
    if ( ModifierByName != 0 )
    {
      v11 = (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName);
      v6 = ceilf((v11 / LevelSpecialValue));
    }
    CDOTA_Ability_Nevermore_Requiem::DoRequiem(v5, v6, 1);
  }
  Parent = CDOTA_Buff::GetParent(this);
  UTIL_Remove(Parent);
}


// CDOTA_Modifier_Nevermore_Requiem_Aura::~CDOTA_Modifier_Nevermore_Requiem_Aura  (line 1160, @0x0000000002a13030, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nevermore_Requiem_Aura::~CDOTA_Modifier_Nevermore_Requiem_Aura(
        CDOTA_Modifier_Nevermore_Requiem_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_436D070;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nevermore_Requiem_Aura::~CDOTA_Modifier_Nevermore_Requiem_Aura  (line 1160, @0x0000000002a13050, libserver.so)  // inlines: ~CDOTA_Modifier_Nevermore_Requiem_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nevermore_Requiem_Aura::~CDOTA_Modifier_Nevermore_Requiem_Aura(
        CDOTA_Modifier_Nevermore_Requiem_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_436D070;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nevermore_Requiem_Aura::IsHidden  (line 1165, @0x0000000002a0b1c0, libserver.so)
bool __fastcall CDOTA_Modifier_Nevermore_Requiem_Aura::IsHidden(CDOTA_Modifier_Nevermore_Requiem_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Nevermore_Requiem::~CDOTA_Modifier_Nevermore_Requiem  (line 1175, @0x0000000002a112e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nevermore_Requiem::~CDOTA_Modifier_Nevermore_Requiem(
        CDOTA_Modifier_Nevermore_Requiem *const this)
{
  this->_vptr_CDOTA_Buff = &off_436D3D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nevermore_Requiem::~CDOTA_Modifier_Nevermore_Requiem  (line 1175, @0x0000000002a11300, libserver.so)  // inlines: ~CDOTA_Modifier_Nevermore_Requiem
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nevermore_Requiem::~CDOTA_Modifier_Nevermore_Requiem(
        CDOTA_Modifier_Nevermore_Requiem *const this)
{
  this->_vptr_CDOTA_Buff = &off_436D3D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nevermore_Requiem::IsDebuff  (line 1180, @0x0000000002a0b1d0, libserver.so)
bool __fastcall CDOTA_Modifier_Nevermore_Requiem::IsDebuff(CDOTA_Modifier_Nevermore_Requiem *const this)
{
  return 1;
}


// CDOTA_Modifier_Nevermore_Requiem::OnCreated  (line 1200, @0x00000000029f78f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "requiem_reduction_ms", "requiem_reduction_damage"
void __fastcall CDOTA_Modifier_Nevermore_Requiem::OnCreated(
        CDOTA_Modifier_Nevermore_Requiem *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->requiem_reduction_ms = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "requiem_reduction_ms", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->requiem_reduction_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                         v4,
                                         "requiem_reduction_damage",
                                         -1,
                                         0);
      return;
    }
  }
  else
  {
    this->requiem_reduction_ms = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->requiem_reduction_damage = 0;
}


// CDOTA_Modifier_Nevermore_Requiem::OnRefresh  (line 1208, @0x00000000029f7860, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "requiem_reduction_ms", "requiem_reduction_damage"
void __fastcall CDOTA_Modifier_Nevermore_Requiem::OnRefresh(
        CDOTA_Modifier_Nevermore_Requiem *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->requiem_reduction_ms = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "requiem_reduction_ms", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->requiem_reduction_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                         v4,
                                         "requiem_reduction_damage",
                                         -1,
                                         0);
      return;
    }
  }
  else
  {
    this->requiem_reduction_ms = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->requiem_reduction_damage = 0;
}


// CDOTA_Modifier_Nevermore_Requiem::DeclareFunctions  (line 1216, @0x00000000029b5b80, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Nevermore_Requiem::GetModifierBaseDamageOutgoing_Percentage(CModifierParams const&), CDOTA_Modifier_Nevermore_Requiem::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Nevermore_Requiem::DeclareFunctions(CDOTA_Modifier_Nevermore_Requiem *const this)
{
  this->m_Functions[34].__pfn = CDOTA_Modifier_Nevermore_Requiem::GetModifierBaseDamageOutgoing_Percentage;
  this->m_Functions[34].__delta = 0;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[13].__pfn = CDOTA_Modifier_Nevermore_Requiem::GetModifierMoveSpeedBonus_Percentage;
}


// CDOTA_Modifier_Nevermore_Requiem::GetModifierBaseDamageOutgoing_Percentage  (line 1224, @0x00000000029b5bc0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Nevermore_Requiem::GetModifierBaseDamageOutgoing_Percentage(
        CDOTA_Modifier_Nevermore_Requiem *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->requiem_reduction_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Nevermore_Requiem::GetModifierMoveSpeedBonus_Percentage  (line 1231, @0x00000000029b5be0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Nevermore_Requiem::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Nevermore_Requiem *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->requiem_reduction_ms;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Nevermore_Necromastery::~CDOTA_Ability_Nevermore_Necromastery  (line 1242, @0x0000000002a17ad0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Nevermore_Necromastery::~CDOTA_Ability_Nevermore_Necromastery(
        CDOTA_Ability_Nevermore_Necromastery *const this)
{
  this->_vptr_IHandleEntity = &off_436D730;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Nevermore_Necromastery::~CDOTA_Ability_Nevermore_Necromastery  (line 1242, @0x0000000002a17af0, libserver.so)  // inlines: ~CDOTA_Ability_Nevermore_Necromastery
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Nevermore_Necromastery::~CDOTA_Ability_Nevermore_Necromastery(
        CDOTA_Ability_Nevermore_Necromastery *const this)
{
  this->_vptr_IHandleEntity = &off_436D730;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Nevermore_Necromastery::Schema_DynamicBinding  (line 1244, @0x0000000002a0b1e0, libserver.so)
// globals: CDOTA_Ability_Nevermore_Necromastery::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nevermore_Necromastery::Schema_DynamicBinding(
        const CDOTA_Ability_Nevermore_Necromastery *const this)
{
  return CDOTA_Ability_Nevermore_Necromastery::s_pSchemaBinding;
}


// CDOTA_Ability_Nevermore_Necromastery::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1244, @0x0000000002a0b1f0, libserver.so)
// globals: CDOTA_Ability_Nevermore_Necromastery::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Nevermore_Necromastery::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Nevermore_Necromastery::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nevermore_Necromastery::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Nevermore_Necromastery::CEntityInstanceEntityClass::DestructInstance  (line 1244, @0x0000000002a0b200, libserver.so)  // inlines: Destruct<CDOTA_Ability_Nevermore_Necromastery>
void __fastcall CDOTA_Ability_Nevermore_Necromastery::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Nevermore_Necromastery::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Nevermore_Necromastery::CEntityInstanceEntityClass::FreeInstance  (line 1244, @0x0000000002a0b220, libserver.so)
void __fastcall CDOTA_Ability_Nevermore_Necromastery::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Nevermore_Necromastery::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Nevermore_Necromastery::CEntityInstanceEntityClass::CanAllocate  (line 1244, @0x0000000002a0b240, libserver.so)
bool __fastcall CDOTA_Ability_Nevermore_Necromastery::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Nevermore_Necromastery::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Nevermore_Necromastery::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1244, @0x0000000002a0b250, libserver.so)
// globals: CDOTA_Ability_Nevermore_Necromastery::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Nevermore_Necromastery::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Nevermore_Necromastery::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Nevermore_Necromastery::s_pSchemaBinding;
}


// CDOTA_Ability_Nevermore_Necromastery::CEntityInstanceEntityClass::AllocateInstance  (line 1244, @0x0000000002a10180, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Nevermore_Necromastery::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Nevermore_Necromastery::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Nevermore_Necromastery::CEntityInstanceEntityClass::ConstructInstance  (line 1244, @0x0000000002a146c0, libserver.so)  // inlines: CDOTA_Ability_Nevermore_Necromastery, Construct<CDOTA_Ability_Nevermore_Necromastery>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Nevermore_Necromastery::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Nevermore_Necromastery::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_436D730;
  }
  return p;
}


// CDOTA_Ability_Nevermore_Necromastery::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1244, @0x0000000002a1ff40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Nevermore_Necromastery::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nevermore_Necromastery::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Nevermore_Necromastery::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1244, @0x0000000002a1ff60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Nevermore_Necromastery::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Nevermore_Necromastery::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Nevermore_Necromastery::GetEntityClassInternal  (line 1244, @0x0000000002a396e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "nevermore_necromastery", "CDOTA_Ability_Nevermore_Necromastery"
// globals: `guard variable for'CDOTA_Ability_Nevermore_Necromastery::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_NecromasteryClass, CDOTA_Ability_Nevermore_Necromastery::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_NecromasteryClass, __dso_handle, CDOTA_Ability_Nevermore_Necromastery::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Nevermore_Necromastery::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_NecromasteryClassInfo, CDOTA_Ability_Nevermore_Necromastery::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_NecromasteryClassInfo
CEntityClass *__cdecl CDOTA_Ability_Nevermore_Necromastery::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Nevermore_Necromastery::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_NecromasteryClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nevermore_Necromastery::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_NecromasteryClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Nevermore_Necromastery::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_NecromasteryClass);
    CDOTA_Ability_Nevermore_Necromastery::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_NecromasteryClass._vptr_CEntityClass = off_436D6B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nevermore_Necromastery::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_NecromasteryClass);
    __cxa_atexit(
      CDOTA_Ability_Nevermore_Necromastery::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Nevermore_Necromastery::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_NecromasteryClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Nevermore_NecromasteryClass != 0 )
    return &CDOTA_Ability_Nevermore_Necromastery::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_NecromasteryClass;
  if ( `guard variable for'CDOTA_Ability_Nevermore_Necromastery::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_NecromasteryClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Nevermore_Necromastery::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_NecromasteryClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Nevermore_Necromastery::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_NecromasteryClassInfo,
      "CDOTA_Ability_Nevermore_Necromastery",
      "nevermore_necromastery",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Nevermore_Necromastery::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_NecromasteryClassInfo);
  }
  CDOTA_Ability_Nevermore_Necromastery::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_NecromasteryClass.m_pClassInfo = &CDOTA_Ability_Nevermore_Necromastery::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_NecromasteryClassInfo;
  CDOTA_Ability_Nevermore_Necromastery::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_NecromasteryClass.m_pBaseClassInfo = CDOTA_Ability_Nevermore_Necromastery::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_NecromasteryClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Nevermore_NecromasteryClass = &CDOTA_Ability_Nevermore_Necromastery::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_NecromasteryClass;
  CDOTA_Ability_Nevermore_Necromastery::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Nevermore_NecromasteryClassInfo.m_pClass = &CDOTA_Ability_Nevermore_Necromastery::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_NecromasteryClass;
  CDOTA_Ability_Nevermore_Necromastery::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_NecromasteryClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Nevermore_NecromasteryClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Nevermore_Necromastery::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Nevermore_NecromasteryClass;
}


// CDOTA_Ability_Nevermore_Necromastery::GetIntrinsicModifierName  (line 1247, @0x0000000002a0b260, libserver.so)
// strings: "modifier_nevermore_necromastery"
const char *__fastcall CDOTA_Ability_Nevermore_Necromastery::GetIntrinsicModifierName(
        CDOTA_Ability_Nevermore_Necromastery *const this)
{
  return "modifier_nevermore_necromastery";
}


// CDOTA_Ability_Nevermore_Necromastery::OnSaveState  (line 1256, @0x00000000029b85e0, libserver.so)
// calls: CDOTABaseAbility::OnSaveState, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, KeyValues::SetInt
// strings: "modifier_nevermore_necromastery", "modifier_nevermore_necromastery_stacks"
bool __fastcall CDOTA_Ability_Nevermore_Necromastery::OnSaveState(
        CDOTA_Ability_Nevermore_Necromastery *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax
  int v6; // eax

  CDOTABaseAbility::OnSaveState(this, pKV);
  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_nevermore_necromastery", 0);
  if ( ModifierByName != 0 )
  {
    v6 = (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName);
    KeyValues::SetInt(pKV, "modifier_nevermore_necromastery_stacks", v6);
  }
  return 1;
}


// CDOTA_Ability_Nevermore_Necromastery::OnLoadState  (line 1274, @0x00000000029b8640, libserver.so)
// calls: CDOTABaseAbility::OnLoadState, KeyValues::GetInt, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_nevermore_necromastery_stacks", "modifier_nevermore_necromastery"
bool __fastcall CDOTA_Ability_Nevermore_Necromastery::OnLoadState(
        CDOTA_Ability_Nevermore_Necromastery *const this,
        KeyValues *pKV)
{
  unsigned int Int; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax

  CDOTABaseAbility::OnLoadState(this, pKV);
  Int = KeyValues::GetInt(pKV, "modifier_nevermore_necromastery_stacks", 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_nevermore_necromastery", 0);
  if ( ModifierByName != 0 )
    (*(ModifierByName->_vptr_CDOTA_Buff + 28))(ModifierByName, Int);
  return 1;
}


// CDOTA_Modifier_Nevermore_Necromastery::~CDOTA_Modifier_Nevermore_Necromastery  (line 1300, @0x0000000002a11290, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nevermore_Necromastery::~CDOTA_Modifier_Nevermore_Necromastery(
        CDOTA_Modifier_Nevermore_Necromastery *const this)
{
  this->_vptr_CDOTA_Buff = &off_436E1F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nevermore_Necromastery::~CDOTA_Modifier_Nevermore_Necromastery  (line 1300, @0x0000000002a112b0, libserver.so)  // inlines: ~CDOTA_Modifier_Nevermore_Necromastery
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nevermore_Necromastery::~CDOTA_Modifier_Nevermore_Necromastery(
        CDOTA_Modifier_Nevermore_Necromastery *const this)
{
  this->_vptr_CDOTA_Buff = &off_436E1F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nevermore_Necromastery::GetAttributes  (line 1305, @0x0000000002a131c0, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_Nevermore_Necromastery::GetAttributes(CDOTA_Modifier_Nevermore_Necromastery *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 1;
}


// CDOTA_Modifier_Nevermore_Necromastery::RemoveOnDeath  (line 1318, @0x0000000002a0b270, libserver.so)
bool __fastcall CDOTA_Modifier_Nevermore_Necromastery::RemoveOnDeath(CDOTA_Modifier_Nevermore_Necromastery *const this)
{
  return 0;
}


// CDOTA_Modifier_Nevermore_Necromastery::GetPriority  (line 1320, @0x0000000002a0b280, libserver.so)
int __fastcall CDOTA_Modifier_Nevermore_Necromastery::GetPriority(CDOTA_Modifier_Nevermore_Necromastery *const this)
{
  return 2;
}


// CDOTA_Modifier_Nevermore_Necromastery::OnCreated  (line 1336, @0x00000000029fc900, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>, Vector
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::AddParticle
// strings: "necromastery_damage_per_soul", "necromastery_max_souls", "necromastery_max_souls_scepter", "necromastery_souls_hero_bonus", "particles/units/heroes/hero_nevermore/nevermore_souls.vpcf", "attach_hitloc"
void __fastcall CDOTA_Modifier_Nevermore_Necromastery::OnCreated(
        CDOTA_Modifier_Nevermore_Necromastery *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v8; // rax
  int m_iParticleSoulsIndex; // r13d
  const CBaseAnimating *v10; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  __int64 v12; // r12
  CDOTA_BaseNPC *v13; // rax
  int v14; // r13d
  const CBaseAnimating *v15; // r14
  CDOTA_ParticleManager *v16; // rax
  __m128d v17; // xmm0
  int v18; // eax
  double v19; // xmm0_8
  float v20; // xmm3_4
  CDOTA_ParticleManager *v21; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-34h]
  double v23; // [rsp+10h] [rbp-30h]
  Vector v24; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->necromastery_damage_per_soul = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                           Ability,
                                           "necromastery_damage_per_soul",
                                           -1,
                                           0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->necromastery_damage_per_soul = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->necromastery_max_souls = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "necromastery_max_souls", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_9:
      this->necromastery_max_souls_scepter = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
LABEL_10:
      this->necromastery_souls_hero_bonus = 0;
      goto LABEL_6;
    }
  }
  this->necromastery_max_souls = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_9;
LABEL_4:
  this->necromastery_max_souls_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                           v5,
                                           "necromastery_max_souls_scepter",
                                           -1,
                                           0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_10;
LABEL_5:
  this->necromastery_souls_hero_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                          v6,
                                          "necromastery_souls_hero_bonus",
                                          -1,
                                          0);
LABEL_6:
  Parent = CDOTA_Buff::GetParent(this);
  this->m_iParticleSoulsIndex = CDOTA_Buff::CreateBuffParticleEffect(
                                  this,
                                  "particles/units/heroes/hero_nevermore/nevermore_souls.vpcf",
                                  2,
                                  Parent,
                                  0);
  v8 = CDOTA_Buff::GetParent(this);
  m_iParticleSoulsIndex = this->m_iParticleSoulsIndex;
  v10 = v8;
  ParticleManager = GetParticleManager();
  v12 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(
    ParticleManager,
    m_iParticleSoulsIndex,
    0,
    v10,
    5,
    "attach_hitloc",
    vec3_invalid,
    1);
  v13 = CDOTA_Buff::GetParent(this);
  v14 = this->m_iParticleSoulsIndex;
  v15 = v13;
  v16 = GetParticleManager();
  *&v24.x = v12;
  v24.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v16, v14, 1, v15, 1, 0, v24, 1);
  LODWORD(v12) = (*(this->_vptr_CDOTA_Buff + 27))(this);
  *&v17.m128d_f64[1] = (*(this->_vptr_CDOTA_Buff + 27))(this).m128_u64[1];
  *&v23 = v18;
  v19 = v12;
  LODWORD(v12) = this->m_iParticleSoulsIndex;
  v17.m128d_f64[0] = v19 * 0.5;
  v20 = _mm_movedup_pd(v17).m128d_f64[0];
  *(&v23 + 1) = v20;
  v21 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v21, v12, 4, v23, 0.0);
  CDOTA_Buff::AddParticle(this, this->m_iParticleSoulsIndex, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_Nevermore_Necromastery::OnRefresh  (line 1364, @0x00000000029f9390, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, GetParticleManager, CDOTA_ParticleManager::SetShouldDraw
// strings: "necromastery_damage_per_soul", "necromastery_max_souls", "necromastery_max_souls_scepter", "necromastery_souls_hero_bonus"
void __fastcall CDOTA_Modifier_Nevermore_Necromastery::OnRefresh(
        CDOTA_Modifier_Nevermore_Necromastery *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  int m_iParticleSoulsIndex; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->necromastery_damage_per_soul = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                           Ability,
                                           "necromastery_damage_per_soul",
                                           -1,
                                           0);
  else
    this->necromastery_damage_per_soul = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    this->necromastery_max_souls = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "necromastery_max_souls", -1, 0);
  else
    this->necromastery_max_souls = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
    this->necromastery_max_souls_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                             v5,
                                             "necromastery_max_souls_scepter",
                                             -1,
                                             0);
  else
    this->necromastery_max_souls_scepter = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
    this->necromastery_souls_hero_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                            v6,
                                            "necromastery_souls_hero_bonus",
                                            -1,
                                            0);
  else
    this->necromastery_souls_hero_bonus = 0;
  m_iParticleSoulsIndex = this->m_iParticleSoulsIndex;
  if ( m_iParticleSoulsIndex != -1 )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetShouldDraw(ParticleManager, m_iParticleSoulsIndex, 1);
  }
}


// CDOTA_Modifier_Nevermore_Necromastery::DeclareFunctions  (line 1385, @0x00000000029b5c00, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Nevermore_Necromastery::OnDeath(CModifierParams const&), CDOTA_Modifier_Nevermore_Necromastery::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Nevermore_Necromastery::DeclareFunctions(
        CDOTA_Modifier_Nevermore_Necromastery *const this)
{
  this->m_Functions[138].__pfn = CDOTA_Modifier_Nevermore_Necromastery::OnDeath;
  this->m_Functions[138].__delta = 0;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Nevermore_Necromastery::GetModifierPreAttack_BonusDamage;
}


// CDOTA_Modifier_Nevermore_Necromastery::OnDeath  (line 1393, @0x00000000029f66f0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsTrained, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, UnitNPC, Vector, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::CreateBuffParticleEffect, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle, CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<float>, ceilf (18 total)
// strings: "particles/units/heroes/hero_nevermore/nevermore_necro_souls_hero.vpcf", "attach_hitloc", "particles/units/heroes/hero_nevermore/nevermore_necro_souls.vpcf", "necromastery_soul_release", "modifier_nevermore_necromastery", "requiem_soul_conversion"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Nevermore_Necromastery::OnDeath(
        CDOTA_Modifier_Nevermore_Necromastery *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  uint32 v7; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *v11; // r12
  CDOTA_BaseNPC *Caster; // rax
  bool HasScepter; // al
  int necromastery_max_souls_scepter; // r13d
  CDOTA_BaseNPC *Parent; // r15
  int v16; // r12d
  __m128d v17; // xmm0
  int v18; // ebx
  int v19; // eax
  float v20; // xmm2_4
  CDOTA_ParticleManager *v21; // rax
  CDOTA_BaseNPC *v23; // rax
  const char *v24; // rsi
  CBaseEntity *v25; // rcx
  int BuffParticleEffect; // r13d
  const Vector *AbsOrigin; // r14
  CDOTA_ParticleManager *v28; // rax
  const Vector *v29; // r12
  CDOTA_ParticleManager *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  void (__fastcall *v32)(CDOTA_Modifier_Nevermore_Necromastery *const, __int64); // r14
  int v33; // eax
  __int64 v34; // rsi
  CDOTA_BaseNPC *v35; // rax
  CDOTA_BaseNPC *v36; // r12
  CDOTABaseAbility *Ability; // rax
  void (__fastcall *v38)(CDOTA_Modifier_Nevermore_Necromastery *const, _QWORD); // r13
  int v39; // eax
  float v40; // xmm0_4
  CDOTA_BaseNPC *v41; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_Ability_Nevermore_Requiem *v43; // r12
  int m_nCachedSouls; // r13d
  CDOTA_BaseNPC *v45; // rax
  CDOTA_Buff *ModifierByName; // rax
  int LevelSpecialValue; // eax
  float v48; // xmm0_4
  int m_iParticleSoulsIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  double necromastery_soul_release; // [rsp+10h] [rbp-40h] BYREF
  float v52; // [rsp+18h] [rbp-38h]
  ModifierVariant_t result; // 0:rax.16

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
  v7 = params->hunit.m_Index;
  if ( v7 + 2 <= 1
    || (m_Index_low = LOWORD(params->hunit.m_Index),
        (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v10 = &v9[m_Index_low & 0x1FF]) == 0
    || v7 != v10->m_EHandle.m_Index
    || (v11 = v10->m_pInstance, v10->m_pInstance == 0)
    || BYTE3(v11[7]._vptr_IHandleEntity) == 0 )
  {
    v11 = 0;
  }
  Caster = CDOTA_Buff::GetCaster(this);
  HasScepter = CDOTA_BaseNPC::HasScepter(Caster);
  necromastery_max_souls_scepter = this->necromastery_max_souls_scepter;
  if ( !HasScepter )
    necromastery_max_souls_scepter = this->necromastery_max_souls;
  Parent = CDOTA_Buff::GetParent(this);
  if ( Parent != m_pInstance
    || m_pInstance == v11
    || (v11[43].m_iszPrivateVScripts.u.m_Id & 0x10) != 0
    || (*(v11->_vptr_IHandleEntity + 436))(v11) != 0
    || (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) == 0 )
  {
    if ( CDOTA_Buff::GetParent(this) == v11 && (*(v11->_vptr_IHandleEntity + 436))(v11) == 0 )
    {
      v35 = CDOTA_Buff::GetParent(this);
      v36 = v35;
      if ( v35 != 0 && (v35->m_iUnitType & 1) != 0 && (*(v35->_vptr_IHandleEntity + 438))(v35) == 0 )
      {
        Ability = CDOTA_Buff::GetAbility(this);
        DotaRetrieveAbilityValue<float>(Ability, &necromastery_soul_release, "necromastery_soul_release");
        v38 = *(this->_vptr_CDOTA_Buff + 28);
        v39 = (*(this->_vptr_CDOTA_Buff + 27))(this);
        v40 = ceilf(v39 * *&necromastery_soul_release);
        v38(this, v40);
        if ( (*(v36->_vptr_IHandleEntity + 438))(v36) == 0 )
        {
          v41 = CDOTA_Buff::GetParent(this);
          AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v41, "nevermore_requiem", 0);
          v43 = AbilityByName;
          if ( AbilityByName != 0 && CDOTABaseAbility::GetEffectiveLevel(AbilityByName) >= 0 )
          {
            m_nCachedSouls = 0;
            if ( CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value )
              m_nCachedSouls = v43->m_nCachedSouls;
            v45 = CDOTA_Buff::GetCaster(this);
            ModifierByName = CDOTA_BaseNPC::FindModifierByName(v45, "modifier_nevermore_necromastery", 0);
            if ( ModifierByName != 0 )
              m_nCachedSouls = (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName);
            LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v43, "requiem_soul_conversion", -1, 0);
            v48 = ceilf((m_nCachedSouls / LevelSpecialValue));
            CDOTA_Ability_Nevermore_Requiem::DoRequiem(v43, v48, 0);
          }
        }
        m_iParticleSoulsIndex = this->m_iParticleSoulsIndex;
        if ( m_iParticleSoulsIndex != -1 )
        {
          ParticleManager = GetParticleManager();
          CDOTA_ParticleManager::SetShouldDraw(ParticleManager, m_iParticleSoulsIndex, 0);
        }
      }
    }
    goto LABEL_15;
  }
  *&result.m_eType = 1;
  if ( (m_pInstance->m_nUnitState64.m_Value & 0x10000000) != 0 )
    goto LABEL_16;
  if ( necromastery_max_souls_scepter > (*(this->_vptr_CDOTA_Buff + 27))(this) )
  {
    (*(this->_vptr_CDOTA_Buff + 25))(this);
    if ( (v11[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 || LOBYTE(v11[71].m_pEntity) != 0 )
      goto LABEL_27;
    v32 = *(this->_vptr_CDOTA_Buff + 28);
    v33 = (*(this->_vptr_CDOTA_Buff + 27))(this);
    v34 = necromastery_max_souls_scepter;
    if ( necromastery_max_souls_scepter >= this->necromastery_souls_hero_bonus + v33 )
      v34 = (*(this->_vptr_CDOTA_Buff + 27))(this, necromastery_max_souls_scepter) + this->necromastery_souls_hero_bonus;
    v32(this, v34);
  }
  if ( (v11[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 || LOBYTE(v11[71].m_pEntity) != 0 )
  {
LABEL_27:
    v31 = CDOTA_Buff::GetParent(this);
    v24 = "particles/units/heroes/hero_nevermore/nevermore_necro_souls.vpcf";
    v25 = v31;
    goto LABEL_26;
  }
  v23 = CDOTA_Buff::GetParent(this);
  v24 = "particles/units/heroes/hero_nevermore/nevermore_necro_souls_hero.vpcf";
  v25 = v23;
LABEL_26:
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(this, v24, 2, v25, 0);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
  v28 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v28, BuffParticleEffect, 0, v11, 5, "attach_hitloc", *AbsOrigin, 1);
  v29 = CBaseEntity::GetAbsOrigin(Parent);
  v30 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v30, BuffParticleEffect, 1, Parent, 5, "attach_hitloc", *v29, 1);
  CDOTA_Buff::AddParticle(this, BuffParticleEffect, 0, 0, -1, 0, 0);
LABEL_15:
  v16 = (*(this->_vptr_CDOTA_Buff + 27))(this);
  *&v17.m128d_f64[1] = (*(this->_vptr_CDOTA_Buff + 27))(this).m128_u64[1];
  v18 = this->m_iParticleSoulsIndex;
  v52 = 0.0;
  *&necromastery_soul_release = v19;
  v17.m128d_f64[0] = v16 * 0.5;
  v20 = _mm_movedup_pd(v17).m128d_f64[0];
  *(&necromastery_soul_release + 1) = v20;
  v21 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v21, v18, 4, necromastery_soul_release, v52);
  *&result.m_eType = 1;
LABEL_16:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Nevermore_Necromastery::OnRespawn  (line 1470, @0x00000000029d5710, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Nevermore_Necromastery::OnRespawn(
        CDOTA_Modifier_Nevermore_Necromastery *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[params->hunit.m_Index & 0x1FF];
  if ( v4 == 0 || m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  if ( v4->m_pInstance != 0 && BYTE3(v4->m_pInstance[7]._vptr_IHandleEntity) != 0 )
    CDOTA_Buff::GetParent(this);
  return 1uLL;
}


// CDOTA_Modifier_Nevermore_Necromastery::GetModifierPreAttack_BonusDamage  (line 1483, @0x00000000029e63b0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::HasScepter
// strings: "special_bonus_unique_nevermore_1"
ModifierVariant_t __fastcall CDOTA_Modifier_Nevermore_Necromastery::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Nevermore_Necromastery *const this,
        const CModifierParams *const params)
{
  int necromastery_damage_per_soul; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int v6; // r13d
  CDOTA_BaseNPC *v7; // rax
  bool HasScepter; // al
  __m128i v9; // xmm0
  int necromastery_max_souls_scepter; // edx
  int v11; // r12d
  ModifierVariant_t result; // 0:rax.16

  necromastery_damage_per_soul = this->necromastery_damage_per_soul;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_nevermore_1", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    necromastery_damage_per_soul += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  v6 = necromastery_damage_per_soul * (*(this->_vptr_CDOTA_Buff + 27))(this);
  v7 = CDOTA_Buff::GetCaster(this);
  HasScepter = CDOTA_BaseNPC::HasScepter(v7);
  necromastery_max_souls_scepter = this->necromastery_max_souls_scepter;
  if ( !HasScepter )
    necromastery_max_souls_scepter = this->necromastery_max_souls;
  v11 = necromastery_max_souls_scepter * necromastery_damage_per_soul;
  if ( v11 > v6 )
    v11 = v6;
  result.m_szVal = 0;
  *v9.m128i_i32 = v11;
  *&result.m_eType = (_mm_cvtsi128_si32(v9) << 32) | 1;
  return result;
}


