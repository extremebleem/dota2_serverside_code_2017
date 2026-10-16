// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:78
class CDOTA_Unit_Hero_Invoker : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Invoker(CDOTA_Unit_Hero_Invoker &);
	CDOTA_Unit_Hero_Invoker(CDOTA_Unit_Hero_Invoker &);
	CDOTA_Unit_Hero_Invoker();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual void OnAlive();
	virtual void OnDying();
	virtual bool UsesConstantGesture(bool);
	virtual ~CDOTA_Unit_Hero_Invoker();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[6] Precache
	// vtable[8] Spawn
	// vtable[471] OnAlive
	// vtable[469] OnDying
	// vtable[380] UsesConstantGesture
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:94
class C_CDOTA_Unit_Hero_Invoker_MapInstall {
	C_CDOTA_Unit_Hero_Invoker_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:132
class CDOTA_Ability_Invoker_AttributeBonus : public CDOTABaseAbility {
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
	CDOTA_Ability_Invoker_AttributeBonus(CDOTA_Ability_Invoker_AttributeBonus &);
	CDOTA_Ability_Invoker_AttributeBonus(CDOTA_Ability_Invoker_AttributeBonus &);
	CDOTA_Ability_Invoker_AttributeBonus();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDOTA_Ability_Invoker_AttributeBonus();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:144
class C_CDOTA_Ability_Invoker_AttributeBonus_MapInstall {
	C_CDOTA_Ability_Invoker_AttributeBonus_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:151
class CDOTA_Ability_Invoker_InvokedBase : public CDOTABaseAbility {
	class NetworkVar_m_nQuasLevel {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nWexLevel {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

	class NetworkVar_m_nExortLevel {
		void NetworkStateChanged(void *, int32, ChangeAccessorFieldPathIndex_t);

		// sizeof = 1
	};

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

protected:

	typedef CDOTA_Ability_Invoker_InvokedBase ThisClass;
	CDOTA_Ability_Invoker_InvokedBase(CDOTA_Ability_Invoker_InvokedBase &);
	CDOTA_Ability_Invoker_InvokedBase(CDOTA_Ability_Invoker_InvokedBase &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Ability_Invoker_InvokedBase();
	void UpgradeQuas();
	void UpgradeWex();
	void UpgradeExort();
	virtual void OnUpgradeQuas();
	virtual void OnUpgradeWex();
	virtual void OnUpgradeExort();
	int GetTrueQuasLevel();
	int GetTrueWexLevel();
	int GetTrueExortLevel();
	int GetQuasLevel();
	int GetWexLevel();
	int GetExortLevel();
	virtual void OnStolen(CDOTABaseAbility *);
	virtual void CopyAbilityState(CDOTABaseAbility *);
	virtual ~CDOTA_Ability_Invoker_InvokedBase();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[333] OnUpgradeQuas
	// vtable[334] OnUpgradeWex
	// vtable[335] OnUpgradeExort
	// vtable[307] OnStolen
	// vtable[210] CopyAbilityState
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:196
class C_CDOTA_Ability_Invoker_InvokedBase_MapInstall {
	C_CDOTA_Ability_Invoker_InvokedBase_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:268
class CDOTA_Ability_Invoker_ColdSnap : public CDOTA_Ability_Invoker_InvokedBase {
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
	CDOTA_Ability_Invoker_ColdSnap(CDOTA_Ability_Invoker_ColdSnap &);
	CDOTA_Ability_Invoker_ColdSnap(CDOTA_Ability_Invoker_ColdSnap &);
	CDOTA_Ability_Invoker_ColdSnap();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual ~CDOTA_Ability_Invoker_ColdSnap();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[304] GetAssociatedSecondaryAbilities
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:305
class CDOTA_Modifier_Invoker_ColdSnap : public CDOTA_Buff {
public:

private:

	float freeze_damage;  // +0xba8
	float freeze_duration;  // +0xbac
	float freeze_cooldown;  // +0xbb0
	float damage_trigger;  // +0xbb4
	CDOTA_Modifier_Invoker_ColdSnap();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t Tooltip(const CModifierParams &);
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	void ApplyFreeze(CDOTA_BaseNPC *);
	virtual ~CDOTA_Modifier_Invoker_ColdSnap();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[89] Tooltip
	// sizeof = 3024
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:439
class CDOTA_Modifier_Invoker_ColdSnap_Freeze : public CDOTA_Modifier_Stunned {
public:

	CDOTA_Modifier_Invoker_ColdSnap_Freeze();
	virtual bool IsDebuff();
	virtual bool IsStunDebuff();
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual bool IsHidden();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Invoker_ColdSnap_Freeze();

	// vtable[12] IsDebuff
	// vtable[16] IsStunDebuff
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[11] IsHidden
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:473
class CDOTA_Ability_Invoker_GhostWalk : public CDOTA_Ability_Invoker_InvokedBase {
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
	CDOTA_Ability_Invoker_GhostWalk(CDOTA_Ability_Invoker_GhostWalk &);
	CDOTA_Ability_Invoker_GhostWalk(CDOTA_Ability_Invoker_GhostWalk &);
	CDOTA_Ability_Invoker_GhostWalk();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual void OnUpgradeQuas();
	virtual void OnUpgradeWex();
	virtual const char * GetAssociatedSecondaryAbilities();
	void RefreshModifier();
	virtual ~CDOTA_Ability_Invoker_GhostWalk();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[333] OnUpgradeQuas
	// vtable[334] OnUpgradeWex
	// vtable[304] GetAssociatedSecondaryAbilities
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:548
class CDOTA_Modifier_Invoker_GhostWalk_Self : public CDOTA_Modifier_Invisible {
public:

private:

	int self_slow;  // +0xbb4
	int area_of_effect;  // +0xbb8
	float aura_fade_time;  // +0xbbc
	CDOTA_Modifier_Invoker_GhostWalk_Self();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraRadius();
	virtual float GetAuraDuration();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	void GetSelfSlow();
	virtual ~CDOTA_Modifier_Invoker_GhostWalk_Self();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[41] GetAuraRadius
	// vtable[83] GetAuraDuration
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:666
class CDOTA_Modifier_Invoker_GhostWalk_Enemy : public CDOTA_Buff {
public:

private:

	int enemy_slow;  // +0xba8
	CDOTA_Modifier_Invoker_GhostWalk_Enemy();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	void GetEnemySlow();
	virtual ~CDOTA_Modifier_Invoker_GhostWalk_Enemy();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:737
class CDOTA_Ability_Invoker_Tornado : public CDOTA_Ability_Invoker_InvokedBase {
public:

private:

	int vision_distance;  // +0x39c
	float end_vision_duration;  // +0x3a0
	float lift_duration;  // +0x3a4
	float base_damage;  // +0x3a8
	float quas_damage;  // +0x3ac
	float wex_damage;  // +0x3b0
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
	CDOTA_Ability_Invoker_Tornado(CDOTA_Ability_Invoker_Tornado &);
	CDOTA_Ability_Invoker_Tornado(CDOTA_Ability_Invoker_Tornado &);
	CDOTA_Ability_Invoker_Tornado();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual void OnProjectileThink(const Vector &);
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual float GetCooldown(int);
	virtual ~CDOTA_Ability_Invoker_Tornado();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[291] OnProjectileThink
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[242] GetCooldown
	// sizeof = 960
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:763
class C_CDOTA_Ability_Invoker_Tornado_MapInstall {
	C_CDOTA_Ability_Invoker_Tornado_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:908
class CDOTA_Modifier_Invoker_Tornado : public CDOTA_Modifier_Cyclone {
public:

private:

	float m_flLandDamage;  // +0xbdc
	CDOTA_Modifier_Invoker_Tornado();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual ~CDOTA_Modifier_Invoker_Tornado();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// sizeof = 3040
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:967
class CDOTA_Ability_Invoker_EMP : public CDOTA_Ability_Invoker_InvokedBase {
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
	CDOTA_Ability_Invoker_EMP(CDOTA_Ability_Invoker_EMP &);
	CDOTA_Ability_Invoker_EMP(CDOTA_Ability_Invoker_EMP &);
	CDOTA_Ability_Invoker_EMP();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual ~CDOTA_Ability_Invoker_EMP();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[304] GetAssociatedSecondaryAbilities
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:987
class C_CDOTA_Ability_Invoker_EMP_MapInstall {
	C_CDOTA_Ability_Invoker_EMP_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:1025
class CDOTA_Modifier_Invoker_EMP : public CDOTA_Buff {
public:

private:

	int area_of_effect;  // +0xba8
	int mana_burned;  // +0xbac
	float damage_per_mana;  // +0xbb0
	CDOTA_Modifier_Invoker_EMP();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual int GetNumAvoidLocations();
	virtual Vector GetAvoidLocation(int);
	virtual float AvoidStrength(CDOTA_Bot *);
	virtual float GetAvoidRadius(int);
	virtual bool IsPersistentAvoidance();
	virtual ~CDOTA_Modifier_Invoker_EMP();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[74] GetNumAvoidLocations
	// vtable[75] GetAvoidLocation
	// vtable[77] AvoidStrength
	// vtable[78] GetAvoidRadius
	// vtable[81] IsPersistentAvoidance
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:1125
class CDOTA_Ability_Invoker_Alacrity : public CDOTA_Ability_Invoker_InvokedBase {
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
	CDOTA_Ability_Invoker_Alacrity(CDOTA_Ability_Invoker_Alacrity &);
	CDOTA_Ability_Invoker_Alacrity(CDOTA_Ability_Invoker_Alacrity &);
	CDOTA_Ability_Invoker_Alacrity();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual ~CDOTA_Ability_Invoker_Alacrity();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[304] GetAssociatedSecondaryAbilities
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:1136
class C_CDOTA_Ability_Invoker_Alacrity_MapInstall {
	C_CDOTA_Ability_Invoker_Alacrity_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:1169
class CDOTA_Modifier_Invoker_Alacrity : public CDOTA_Buff {
public:

private:

	int bonus_attack_speed;  // +0xba8
	int bonus_damage;  // +0xbac
	CDOTA_Modifier_Invoker_Alacrity();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual bool ShouldUseOverheadOffset();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Invoker_Alacrity();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[69] ShouldUseOverheadOffset
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:1249
class CDOTA_Ability_Invoker_ChaosMeteor : public CDOTA_Ability_Invoker_InvokedBase {
public:

private:

	int area_of_effect;  // +0x39c
	float damage_interval;  // +0x3a0
	int vision_distance;  // +0x3a4
	float end_vision_duration;  // +0x3a8
	float main_damage;  // +0x3ac
	float burn_duration;  // +0x3b0
	float burn_dps;  // +0x3b4
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
	CDOTA_Ability_Invoker_ChaosMeteor(CDOTA_Ability_Invoker_ChaosMeteor &);
	CDOTA_Ability_Invoker_ChaosMeteor(CDOTA_Ability_Invoker_ChaosMeteor &);
	CDOTA_Ability_Invoker_ChaosMeteor();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual void OnProjectileThink_ExtraData(const Vector &, KeyValues *);
	virtual bool OnProjectileHit_ExtraData(EHANDLE, const Vector &, KeyValues *);
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual ~CDOTA_Ability_Invoker_ChaosMeteor();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[294] OnProjectileThink_ExtraData
	// vtable[290] OnProjectileHit_ExtraData
	// vtable[304] GetAssociatedSecondaryAbilities
	// sizeof = 952
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:1411
class CDOTA_Modifier_Invoker_ChaosMeteor_Land : public CDOTA_Buff {
public:

private:

	int travel_speed;  // +0xbb4
	int travel_distance;  // +0xbb8
	int vision_distance;  // +0xbbc
	CDOTA_Modifier_Invoker_ChaosMeteor_Land();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_Invoker_ChaosMeteor_Land();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:1494
class CDOTA_Modifier_Invoker_ChaosMeteor_Burn : public CDOTA_Buff {
public:

private:

	float m_flDamagePerSecond;  // +0xba8
	CDOTA_Modifier_Invoker_ChaosMeteor_Burn();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual int GetAttributes();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Invoker_ChaosMeteor_Burn();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[7] GetAttributes
	// vtable[11] IsHidden
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:1547
class CDOTA_Ability_Invoker_SunStrike : public CDOTA_Ability_Invoker_InvokedBase {
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
	CDOTA_Ability_Invoker_SunStrike(CDOTA_Ability_Invoker_SunStrike &);
	CDOTA_Ability_Invoker_SunStrike(CDOTA_Ability_Invoker_SunStrike &);
	CDOTA_Ability_Invoker_SunStrike();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual ~CDOTA_Ability_Invoker_SunStrike();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[304] GetAssociatedSecondaryAbilities
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:1562
class C_CDOTA_Ability_Invoker_SunStrike_MapInstall {
	C_CDOTA_Ability_Invoker_SunStrike_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:1610
class CDOTA_Modifier_Invoker_SunStrike : public CDOTA_Buff {
public:

private:

	int area_of_effect;  // +0xba8
	float damage;  // +0xbac
	int vision_distance;  // +0xbb0
	float vision_duration;  // +0xbb4
	CDOTA_Modifier_Invoker_SunStrike();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_Invoker_SunStrike();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:1732
class CDOTA_Ability_Invoker_ForgeSpirit : public CDOTA_Ability_Invoker_InvokedBase {
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
	CDOTA_Ability_Invoker_ForgeSpirit(CDOTA_Ability_Invoker_ForgeSpirit &);
	CDOTA_Ability_Invoker_ForgeSpirit(CDOTA_Ability_Invoker_ForgeSpirit &);
	CDOTA_Ability_Invoker_ForgeSpirit();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual ~CDOTA_Ability_Invoker_ForgeSpirit();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[304] GetAssociatedSecondaryAbilities
	// sizeof = 936
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:1835
class CDOTA_Modifier_ForgedSpirit_Stats : public CDOTA_Buff {
public:

private:

	int armor;  // +0xba8
	float attack_range;  // +0xbac
	CDOTA_Modifier_ForgedSpirit_Stats();
	virtual void OnCreated(KeyValues *);
	virtual int GetAttributes();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	ModifierVariant_t GetModifierAttackRangeBonus(const CModifierParams &);
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual ~CDOTA_Modifier_ForgedSpirit_Stats();

	// vtable[57] OnCreated
	// vtable[7] GetAttributes
	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// vtable[10] AddCustomTransmiterData
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:1905
class CDOTA_Ability_ForgedSpirit_MeltingStrike : public CDOTABaseAbility {
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
	CDOTA_Ability_ForgedSpirit_MeltingStrike(CDOTA_Ability_ForgedSpirit_MeltingStrike &);
	CDOTA_Ability_ForgedSpirit_MeltingStrike(CDOTA_Ability_ForgedSpirit_MeltingStrike &);
	CDOTA_Ability_ForgedSpirit_MeltingStrike();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_ForgedSpirit_MeltingStrike();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:1918
class CDOTA_Modifier_ForgedSpirit_MeltingStrike : public CDOTA_Buff {
public:

private:

	float duration;  // +0xba8
	CDOTA_Modifier_ForgedSpirit_MeltingStrike();
	virtual void OnCreated(KeyValues *);
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnAttacked(const CModifierParams &);
	virtual ~CDOTA_Modifier_ForgedSpirit_MeltingStrike();

	// vtable[57] OnCreated
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// vtable[89] OnAttacked
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:1981
class CDOTA_Modifier_MeltingStrike_Debuff : public CDOTA_Buff {
public:

private:

	int armor_removed;  // +0xba8
	int m_nMaxStacks;  // +0xbac
	CDOTA_Modifier_MeltingStrike_Debuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_MeltingStrike_Debuff();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:2045
class CDOTA_Ability_Invoker_IceWall : public CDOTA_Ability_Invoker_InvokedBase {
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
	CDOTA_Ability_Invoker_IceWall(CDOTA_Ability_Invoker_IceWall &);
	CDOTA_Ability_Invoker_IceWall(CDOTA_Ability_Invoker_IceWall &);
	CDOTA_Ability_Invoker_IceWall();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual const char * GetStolenActivityModifier();
	virtual ~CDOTA_Ability_Invoker_IceWall();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[310] GetStolenActivityModifier
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:2136
class CDOTA_Modifier_Invoker_IceWall_Thinker : public CDOTA_Buff {
public:

private:

	float damage_per_second;  // +0xba8
	int num_wall_elements;  // +0xbac
	int wall_element_spacing;  // +0xbb0
	int wall_element_radius;  // +0xbb4
	CDOTA_Modifier_Invoker_IceWall_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Invoker_IceWall_Thinker();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:2236
class CDOTA_Modifier_Invoker_IceWall_SlowAura : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	int slow;  // +0xbac
	float slow_duration;  // +0xbb0
	CDOTA_Modifier_Invoker_IceWall_SlowAura();
	virtual void OnCreated(KeyValues *);
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraRadius();
	virtual float GetAuraDuration();
	virtual void SetAuraCreateData(KeyValues *);
	virtual ~CDOTA_Modifier_Invoker_IceWall_SlowAura();

	// vtable[57] OnCreated
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[41] GetAuraRadius
	// vtable[83] GetAuraDuration
	// vtable[43] SetAuraCreateData
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:2273
class CDOTA_Modifier_Invoker_IceWall_SlowDebuff : public CDOTA_Buff {
public:

private:

	int slow;  // +0xba8
	CDOTA_Modifier_Invoker_IceWall_SlowDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Invoker_IceWall_SlowDebuff();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:2330
class CDOTA_Ability_Invoker_DeafeningBlast : public CDOTA_Ability_Invoker_InvokedBase {
public:

private:

	float end_vision_duration;  // +0x39c
	float damage;  // +0x3a0
	float knockback_duration;  // +0x3a4
	float disarm_duration;  // +0x3a8

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
	CDOTA_Ability_Invoker_DeafeningBlast(CDOTA_Ability_Invoker_DeafeningBlast &);
	CDOTA_Ability_Invoker_DeafeningBlast(CDOTA_Ability_Invoker_DeafeningBlast &);
	CDOTA_Ability_Invoker_DeafeningBlast();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual int GetBehavior();
	virtual ~CDOTA_Ability_Invoker_DeafeningBlast();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[251] GetBehavior
	// sizeof = 968
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:2352
class C_CDOTA_Ability_Invoker_DeafeningBlast_MapInstall {
	C_CDOTA_Ability_Invoker_DeafeningBlast_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:2485
class CDOTA_Modifier_Invoker_DeafeningBlast_Knockback : public CDOTA_Buff, public CHorizontalMotionController {
public:

private:

	float disarm_duration;  // +0xbb4
	float m_flStartTime;  // +0xbc4
	CDOTA_Modifier_Invoker_DeafeningBlast_Knockback();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual bool IsPurgable();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsMotionController();
	virtual ~CDOTA_Modifier_Invoker_DeafeningBlast_Knockback();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[14] IsPurgable
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] OnHorizontalMotionInterrupted
	// vtable[91] IsHorizontalMotionValidToApply
	// vtable[21] IsMotionController
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:2598
class CDOTA_Modifier_Invoker_DeafeningBlast_Disarm : public CDOTA_Modifier_Disarmed {
public:

	CDOTA_Modifier_Invoker_DeafeningBlast_Disarm(CDOTA_Modifier_Invoker_DeafeningBlast_Disarm &);
	CDOTA_Modifier_Invoker_DeafeningBlast_Disarm(const CDOTA_Modifier_Invoker_DeafeningBlast_Disarm &);
	CDOTA_Modifier_Invoker_DeafeningBlast_Disarm();
	virtual bool IsPurgable();
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual bool ShouldUseOverheadOffset();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Invoker_DeafeningBlast_Disarm();

	// vtable[14] IsPurgable
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[69] ShouldUseOverheadOffset
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:2618
class CDOTA_Modifier_Invoker_Instance : public CDOTA_Buff {
public:

	CDOTA_Modifier_Invoker_Instance(CDOTA_Modifier_Invoker_Instance &);
	CDOTA_Modifier_Invoker_Instance(const CDOTA_Modifier_Invoker_Instance &);
	CDOTA_Modifier_Invoker_Instance();
	virtual void OnCreated(KeyValues *);
	virtual int GetAttributes();
	virtual bool IsPurgable();
	virtual int GetType();
	virtual ~CDOTA_Modifier_Invoker_Instance();

	// vtable[57] OnCreated
	// vtable[7] GetAttributes
	// vtable[14] IsPurgable
	// vtable[89] GetType
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:2637
class CDOTA_Ability_Invoker_Invoke : public CDOTABaseAbility {
public:

private:

	int max_invoked_spells;  // +0x390

	int m_nCurInstanceSlot;  // +0x3b0
	bool m_bInvokedAbilitiesInitialized;  // +0x3b4

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
	CDOTA_Ability_Invoker_Invoke(CDOTA_Ability_Invoker_Invoke &);
	CDOTA_Ability_Invoker_Invoke(CDOTA_Ability_Invoker_Invoke &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Ability_Invoker_Invoke();
	virtual void OnSpellStart();
	virtual void OnUpgrade();
	virtual float GetCooldown(int);
	virtual int GetManaCost(int);
	virtual bool ShouldSpeakAbilityConcept();
	virtual bool IsStealable();
	void OnUpgradeElement(int);
	void NewInstance(CDOTA_Buff *);
	const char * GetNextInstanceSlot();
	Vector GetColor();
	void CastResultVO(bool);
	virtual ~CDOTA_Ability_Invoker_Invoke();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[268] OnUpgrade
	// vtable[242] GetCooldown
	// vtable[273] GetManaCost
	// vtable[333] ShouldSpeakAbilityConcept
	// vtable[305] IsStealable
	// sizeof = 1008
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:2700
class C_CDOTA_Ability_Invoker_Invoke_MapInstall {
	C_CDOTA_Ability_Invoker_Invoke_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:2967
class CDOTA_Modifier_Invoker_QuasInstance : public CDOTA_Modifier_Invoker_Instance {
public:

private:

	float health_regen_per_instance;  // +0xba8

	const char * m_pSlotName;  // +0xbb0
	CDOTA_Modifier_Invoker_QuasInstance();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	ModifierVariant_t OnRespawn(const CModifierParams &);
	virtual int GetType();
	virtual bool AllowIllusionDuplicate();
	virtual ~CDOTA_Modifier_Invoker_QuasInstance();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[89] GetType
	// vtable[18] AllowIllusionDuplicate
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:3083
class CDOTA_Modifier_Invoker_WexInstance : public CDOTA_Modifier_Invoker_Instance {
public:

private:

	int attack_speed_per_instance;  // +0xba8
	int move_speed_per_instance;  // +0xbac
	const char * m_pSlotName;  // +0xbb0
	CDOTA_Modifier_Invoker_WexInstance();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	ModifierVariant_t OnRespawn(const CModifierParams &);
	virtual int GetType();
	virtual bool AllowIllusionDuplicate();
	virtual ~CDOTA_Modifier_Invoker_WexInstance();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[89] GetType
	// vtable[18] AllowIllusionDuplicate
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:3211
class CDOTA_Modifier_Invoker_ExortInstance : public CDOTA_Modifier_Invoker_Instance {
public:

private:

	int bonus_damage_per_instance;  // +0xba8

	const char * m_pSlotName;  // +0xbb0
	CDOTA_Modifier_Invoker_ExortInstance();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	ModifierVariant_t OnRespawn(const CModifierParams &);
	virtual int GetType();
	virtual bool AllowIllusionDuplicate();
	virtual ~CDOTA_Modifier_Invoker_ExortInstance();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[89] GetType
	// vtable[18] AllowIllusionDuplicate
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:3328
class CDOTA_Ability_Invoker_Quas : public CDOTABaseAbility {
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
	CDOTA_Ability_Invoker_Quas(CDOTA_Ability_Invoker_Quas &);
	CDOTA_Ability_Invoker_Quas(CDOTA_Ability_Invoker_Quas &);
	CDOTA_Ability_Invoker_Quas();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual void OnUpgrade();
	virtual bool ProcsMagicStick();
	virtual bool IsStealable();
	virtual bool IsHiddenWhenStolen();
	virtual ~CDOTA_Ability_Invoker_Quas();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[268] OnUpgrade
	// vtable[239] ProcsMagicStick
	// vtable[305] IsStealable
	// vtable[306] IsHiddenWhenStolen
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:3374
class CDOTA_Ability_Invoker_Wex : public CDOTABaseAbility {
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
	CDOTA_Ability_Invoker_Wex(CDOTA_Ability_Invoker_Wex &);
	CDOTA_Ability_Invoker_Wex(CDOTA_Ability_Invoker_Wex &);
	CDOTA_Ability_Invoker_Wex();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual void OnUpgrade();
	virtual bool ProcsMagicStick();
	virtual bool IsStealable();
	virtual bool IsHiddenWhenStolen();
	virtual ~CDOTA_Ability_Invoker_Wex();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[268] OnUpgrade
	// vtable[239] ProcsMagicStick
	// vtable[305] IsStealable
	// vtable[306] IsHiddenWhenStolen
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:3420
class CDOTA_Ability_Invoker_Exort : public CDOTABaseAbility {
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
	CDOTA_Ability_Invoker_Exort(CDOTA_Ability_Invoker_Exort &);
	CDOTA_Ability_Invoker_Exort(CDOTA_Ability_Invoker_Exort &);
	CDOTA_Ability_Invoker_Exort();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual void OnUpgrade();
	virtual bool ProcsMagicStick();
	virtual bool IsStealable();
	virtual bool IsHiddenWhenStolen();
	virtual ~CDOTA_Ability_Invoker_Exort();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[268] OnUpgrade
	// vtable[239] ProcsMagicStick
	// vtable[305] IsStealable
	// vtable[306] IsHiddenWhenStolen
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:3466
class CDOTA_Ability_Invoker_Empty1 : public CDOTABaseAbility {
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
	CDOTA_Ability_Invoker_Empty1(CDOTA_Ability_Invoker_Empty1 &);
	CDOTA_Ability_Invoker_Empty1(CDOTA_Ability_Invoker_Empty1 &);
	CDOTA_Ability_Invoker_Empty1();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Ability_Invoker_Empty1();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:3480
class CDOTA_Ability_Invoker_Empty2 : public CDOTABaseAbility {
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
	CDOTA_Ability_Invoker_Empty2(CDOTA_Ability_Invoker_Empty2 &);
	CDOTA_Ability_Invoker_Empty2(CDOTA_Ability_Invoker_Empty2 &);
	CDOTA_Ability_Invoker_Empty2();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ~CDOTA_Ability_Invoker_Empty2();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:3489
class CDOTA_BaseNPC_Invoker_Forged_Spirit : public CDOTA_BaseNPC_Creep {
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
	CDOTA_BaseNPC_Invoker_Forged_Spirit(CDOTA_BaseNPC_Invoker_Forged_Spirit &);
	CDOTA_BaseNPC_Invoker_Forged_Spirit(CDOTA_BaseNPC_Invoker_Forged_Spirit &);
	CDOTA_BaseNPC_Invoker_Forged_Spirit();
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
	virtual ~CDOTA_BaseNPC_Invoker_Forged_Spirit();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[471] OnAlive
	// vtable[469] OnDying
	// sizeof = 4512
};

// src/game/shared/dota/units/dota_unit_hero_invoker.cpp:3499
class C_CDOTA_BaseNPC_Invoker_Forged_Spirit_MapInstall {
	C_CDOTA_BaseNPC_Invoker_Forged_Spirit_MapInstall();

	// sizeof = 1
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Invoker::~CDOTA_Unit_Hero_Invoker  (line 78, @0x0000000002ba2ce0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Invoker::~CDOTA_Unit_Hero_Invoker(CDOTA_Unit_Hero_Invoker *const this)
{
  this->_vptr_IHandleEntity = &off_44F1D90;
  this->_vptr_INextBotEventResponder = &off_44F2D70;
  this->_vptr_CObstructionObject = &off_44F30A0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Invoker::~CDOTA_Unit_Hero_Invoker  (line 78, @0x0000000002ba2d20, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Invoker
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Invoker::~CDOTA_Unit_Hero_Invoker(CDOTA_Unit_Hero_Invoker *const this)
{
  this->_vptr_IHandleEntity = &off_44F1D90;
  this->_vptr_INextBotEventResponder = &off_44F2D70;
  this->_vptr_CObstructionObject = &off_44F30A0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Invoker::Schema_DynamicBinding  (line 80, @0x0000000002b90e90, libserver.so)
// globals: CDOTA_Unit_Hero_Invoker::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Invoker::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Invoker *const this)
{
  return CDOTA_Unit_Hero_Invoker::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Invoker::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 80, @0x0000000002b90ec0, libserver.so)
// globals: CDOTA_Unit_Hero_Invoker::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Invoker::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Invoker::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Invoker::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Invoker::CEntityInstanceEntityClass::DestructInstance  (line 80, @0x0000000002b90ed0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Invoker>
void __fastcall CDOTA_Unit_Hero_Invoker::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Invoker::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Invoker::CEntityInstanceEntityClass::FreeInstance  (line 80, @0x0000000002b90ef0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Invoker::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Invoker::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Invoker::CEntityInstanceEntityClass::CanAllocate  (line 80, @0x0000000002b90f10, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Invoker::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Invoker::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Invoker::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 80, @0x0000000002b90f20, libserver.so)
// globals: CDOTA_Unit_Hero_Invoker::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Invoker::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Invoker::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Invoker::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Invoker::CEntityInstanceEntityClass::AllocateInstance  (line 80, @0x0000000002b97fe0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Invoker::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Invoker::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Invoker::CEntityInstanceEntityClass::ConstructInstance  (line 80, @0x0000000002b9c750, libserver.so)  // inlines: CDOTA_Unit_Hero_Invoker, Construct<CDOTA_Unit_Hero_Invoker>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Invoker::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Invoker::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_44F1D90;
    *(p + 236) = &off_44F2D70;
    *(p + 257) = &off_44F30A0;
  }
  return p;
}


// CDOTA_Unit_Hero_Invoker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 80, @0x0000000002bac090, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Invoker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Invoker::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Invoker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 80, @0x0000000002bac1c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Invoker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Invoker::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Invoker::GetEntityClassInternal  (line 80, @0x0000000002bceff0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "npc_dota_hero_invoker", "CDOTA_Unit_Hero_Invoker"
// globals: `guard variable for'CDOTA_Unit_Hero_Invoker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_InvokerClass, CDOTA_Unit_Hero_Invoker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_InvokerClass, __dso_handle, CDOTA_Unit_Hero_Invoker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Invoker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_InvokerClassInfo, CDOTA_Unit_Hero_Invoker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_InvokerClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Invoker::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Invoker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_InvokerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Invoker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_InvokerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Invoker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_InvokerClass);
    CDOTA_Unit_Hero_Invoker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_InvokerClass._vptr_CEntityClass = off_44F1D10;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Invoker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_InvokerClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Invoker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Invoker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_InvokerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_InvokerClass != 0 )
    return &CDOTA_Unit_Hero_Invoker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_InvokerClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Invoker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_InvokerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Invoker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_InvokerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Invoker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_InvokerClassInfo,
      "CDOTA_Unit_Hero_Invoker",
      "npc_dota_hero_invoker",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Invoker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_InvokerClassInfo);
  }
  CDOTA_Unit_Hero_Invoker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_InvokerClass.m_pClassInfo = &CDOTA_Unit_Hero_Invoker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_InvokerClassInfo;
  CDOTA_Unit_Hero_Invoker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_InvokerClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Invoker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_InvokerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_InvokerClass = &CDOTA_Unit_Hero_Invoker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_InvokerClass;
  CDOTA_Unit_Hero_Invoker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_InvokerClassInfo.m_pClass = &CDOTA_Unit_Hero_Invoker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_InvokerClass;
  CDOTA_Unit_Hero_Invoker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_InvokerClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_InvokerClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Invoker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_InvokerClass;
}


// CDOTA_Unit_Hero_Invoker::UsesConstantGesture  (line 91, @0x0000000002b90f30, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Invoker::UsesConstantGesture(CDOTA_Unit_Hero_Invoker *const this, bool bPortrait)
{
  return 1;
}


// CDOTA_Unit_Hero_Invoker::YouForgotToImplementOrDeclareServerClass  (line 94, @0x0000000002b357a0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Invoker::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Invoker *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Invoker::GetServerClass  (line 94, @0x0000000002b4ce60, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Invoker::GetServerClass(CDOTA_Unit_Hero_Invoker *const this)
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


// CDOTA_Unit_Hero_Invoker::Precache  (line 103, @0x0000000002b3a180, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Precache, DOTA_PrecacheUnitByNameSync
// strings: "npc_dota_invoker_forged_spirit"
void __fastcall CDOTA_Unit_Hero_Invoker::Precache(
        CDOTA_Unit_Hero_Invoker *const this,
        const CEntityPrecacheContext *pContext)
{
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
  DOTA_PrecacheUnitByNameSync("npc_dota_invoker_forged_spirit", pContext->m_pManifest, -1);
}


// CDOTA_Unit_Hero_Invoker::Spawn  (line 114, @0x0000000002b39c70, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Spawn, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility
// strings: "invoker_invoke"
void __fastcall CDOTA_Unit_Hero_Invoker::Spawn(CDOTA_Unit_Hero_Invoker *const this, const CEntityKeyValues *pKeyValues)
{
  CDOTABaseAbility *AbilityByName; // rax

  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "invoker_invoke", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value == 0 )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 1);
}


// CDOTA_Ability_Invoker_AttributeBonus::~CDOTA_Ability_Invoker_AttributeBonus  (line 132, @0x0000000002ba1690, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Invoker_AttributeBonus::~CDOTA_Ability_Invoker_AttributeBonus(
        CDOTA_Ability_Invoker_AttributeBonus *const this)
{
  this->_vptr_IHandleEntity = &off_44F3170;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Invoker_AttributeBonus::~CDOTA_Ability_Invoker_AttributeBonus  (line 132, @0x0000000002ba16b0, libserver.so)  // inlines: ~CDOTA_Ability_Invoker_AttributeBonus
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Invoker_AttributeBonus::~CDOTA_Ability_Invoker_AttributeBonus(
        CDOTA_Ability_Invoker_AttributeBonus *const this)
{
  this->_vptr_IHandleEntity = &off_44F3170;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Invoker_AttributeBonus::Schema_DynamicBinding  (line 134, @0x0000000002b90f40, libserver.so)
// globals: CDOTA_Ability_Invoker_AttributeBonus::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_AttributeBonus::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_AttributeBonus *const this)
{
  return CDOTA_Ability_Invoker_AttributeBonus::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_AttributeBonus::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 134, @0x0000000002b90f50, libserver.so)
// globals: CDOTA_Ability_Invoker_AttributeBonus::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_AttributeBonus::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_AttributeBonus::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_AttributeBonus::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_AttributeBonus::CEntityInstanceEntityClass::DestructInstance  (line 134, @0x0000000002b90f60, libserver.so)  // inlines: Destruct<CDOTA_Ability_Invoker_AttributeBonus>
void __fastcall CDOTA_Ability_Invoker_AttributeBonus::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Invoker_AttributeBonus::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Invoker_AttributeBonus::CEntityInstanceEntityClass::FreeInstance  (line 134, @0x0000000002b90f80, libserver.so)
void __fastcall CDOTA_Ability_Invoker_AttributeBonus::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Invoker_AttributeBonus::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Invoker_AttributeBonus::CEntityInstanceEntityClass::CanAllocate  (line 134, @0x0000000002b90fa0, libserver.so)
bool __fastcall CDOTA_Ability_Invoker_AttributeBonus::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Invoker_AttributeBonus::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Invoker_AttributeBonus::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 134, @0x0000000002b90fb0, libserver.so)
// globals: CDOTA_Ability_Invoker_AttributeBonus::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Invoker_AttributeBonus::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Invoker_AttributeBonus::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_AttributeBonus::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_AttributeBonus::CEntityInstanceEntityClass::AllocateInstance  (line 134, @0x0000000002b98020, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Invoker_AttributeBonus::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Invoker_AttributeBonus::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Invoker_AttributeBonus::CEntityInstanceEntityClass::ConstructInstance  (line 134, @0x0000000002b9d5e0, libserver.so)  // inlines: CDOTA_Ability_Invoker_AttributeBonus, Construct<CDOTA_Ability_Invoker_AttributeBonus>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Invoker_AttributeBonus::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Invoker_AttributeBonus::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44F3170;
  }
  return p;
}


// CDOTA_Ability_Invoker_AttributeBonus::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 134, @0x0000000002baae80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Invoker_AttributeBonus::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_AttributeBonus::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Invoker_AttributeBonus::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 134, @0x0000000002baaea0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Invoker_AttributeBonus::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_AttributeBonus::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Invoker_AttributeBonus::GetEntityClassInternal  (line 134, @0x0000000002bc9bf0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "invoker_attribute_bonus", "CDOTA_Ability_Invoker_AttributeBonus"
// globals: `guard variable for'CDOTA_Ability_Invoker_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_AttributeBonusClass, CDOTA_Ability_Invoker_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_AttributeBonusClass, __dso_handle, CDOTA_Ability_Invoker_AttributeBonus::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Invoker_AttributeBonus::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_AttributeBonusClassInfo, CDOTA_Ability_Invoker_AttributeBonus::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_AttributeBonusClassInfo
CEntityClass *__cdecl CDOTA_Ability_Invoker_AttributeBonus::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Invoker_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_AttributeBonusClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_AttributeBonusClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Invoker_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_AttributeBonusClass);
    CDOTA_Ability_Invoker_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_AttributeBonusClass._vptr_CEntityClass = off_44F30F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_AttributeBonusClass);
    __cxa_atexit(
      CDOTA_Ability_Invoker_AttributeBonus::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Invoker_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_AttributeBonusClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Invoker_AttributeBonusClass != 0 )
    return &CDOTA_Ability_Invoker_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_AttributeBonusClass;
  if ( `guard variable for'CDOTA_Ability_Invoker_AttributeBonus::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_AttributeBonusClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_AttributeBonus::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_AttributeBonusClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Invoker_AttributeBonus::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_AttributeBonusClassInfo,
      "CDOTA_Ability_Invoker_AttributeBonus",
      "invoker_attribute_bonus",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_AttributeBonus::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_AttributeBonusClassInfo);
  }
  CDOTA_Ability_Invoker_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_AttributeBonusClass.m_pClassInfo = &CDOTA_Ability_Invoker_AttributeBonus::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_AttributeBonusClassInfo;
  CDOTA_Ability_Invoker_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_AttributeBonusClass.m_pBaseClassInfo = CDOTA_Ability_Invoker_AttributeBonus::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_AttributeBonusClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Invoker_AttributeBonusClass = &CDOTA_Ability_Invoker_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_AttributeBonusClass;
  CDOTA_Ability_Invoker_AttributeBonus::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_AttributeBonusClassInfo.m_pClass = &CDOTA_Ability_Invoker_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_AttributeBonusClass;
  CDOTA_Ability_Invoker_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_AttributeBonusClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Invoker_AttributeBonusClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Invoker_AttributeBonus::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_AttributeBonusClass;
}


// CDOTA_Ability_Invoker_AttributeBonus::YouForgotToImplementOrDeclareServerClass  (line 144, @0x0000000002b357b0, libserver.so)
int __fastcall CDOTA_Ability_Invoker_AttributeBonus::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Invoker_AttributeBonus *const this)
{
  return 0;
}


// CDOTA_Ability_Invoker_AttributeBonus::GetServerClass  (line 144, @0x0000000002b4c920, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Invoker_AttributeBonus::GetServerClass(
        CDOTA_Ability_Invoker_AttributeBonus *const this)
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


// CDOTA_Ability_Invoker_InvokedBase::~CDOTA_Ability_Invoker_InvokedBase  (line 151, @0x0000000002b9fd70, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Invoker_InvokedBase::~CDOTA_Ability_Invoker_InvokedBase(
        CDOTA_Ability_Invoker_InvokedBase *const this)
{
  this->_vptr_IHandleEntity = &off_44F3C70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Invoker_InvokedBase::~CDOTA_Ability_Invoker_InvokedBase  (line 151, @0x0000000002b9fd90, libserver.so)  // inlines: ~CDOTA_Ability_Invoker_InvokedBase
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Invoker_InvokedBase::~CDOTA_Ability_Invoker_InvokedBase(
        CDOTA_Ability_Invoker_InvokedBase *const this)
{
  this->_vptr_IHandleEntity = &off_44F3C70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Invoker_InvokedBase::Schema_DynamicBinding  (line 153, @0x0000000002b90fc0, libserver.so)
// globals: CDOTA_Ability_Invoker_InvokedBase::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_InvokedBase::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_InvokedBase *const this)
{
  return CDOTA_Ability_Invoker_InvokedBase::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_InvokedBase::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 153, @0x0000000002b90fd0, libserver.so)
// globals: CDOTA_Ability_Invoker_InvokedBase::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_InvokedBase::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_InvokedBase::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_InvokedBase::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_InvokedBase::CEntityInstanceEntityClass::DestructInstance  (line 153, @0x0000000002b90fe0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Invoker_InvokedBase>
void __fastcall CDOTA_Ability_Invoker_InvokedBase::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Invoker_InvokedBase::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Invoker_InvokedBase::CEntityInstanceEntityClass::FreeInstance  (line 153, @0x0000000002b91000, libserver.so)
void __fastcall CDOTA_Ability_Invoker_InvokedBase::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Invoker_InvokedBase::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Invoker_InvokedBase::CEntityInstanceEntityClass::CanAllocate  (line 153, @0x0000000002b91020, libserver.so)
bool __fastcall CDOTA_Ability_Invoker_InvokedBase::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Invoker_InvokedBase::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Invoker_InvokedBase::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 153, @0x0000000002b91030, libserver.so)
// globals: CDOTA_Ability_Invoker_InvokedBase::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Invoker_InvokedBase::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Invoker_InvokedBase::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_InvokedBase::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_InvokedBase::CEntityInstanceEntityClass::AllocateInstance  (line 153, @0x0000000002b98060, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Invoker_InvokedBase::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Invoker_InvokedBase::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_Invoker_InvokedBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 153, @0x0000000002baaed0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Invoker_InvokedBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_InvokedBase::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Invoker_InvokedBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 153, @0x0000000002baaef0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Invoker_InvokedBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_InvokedBase::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Invoker_InvokedBase::CEntityInstanceEntityClass::ConstructInstance  (line 153, @0x0000000002bacdc0, libserver.so)  // inlines: CDOTA_Ability_Invoker_InvokedBase, CNetworkVarBase, Construct<CDOTA_Ability_Invoker_InvokedBase>, NetworkStateChanged
// calls: CDOTABaseAbility::CDOTABaseAbility, CBaseEntity::NetworkStateChanged, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Ability_Invoker_InvokedBase::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Invoker_InvokedBase::CEntityInstanceEntityClass *const this,
        void *p)
{
  __int64 v3; // rax
  __int64 v4; // rax

  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44F3C70;
    *(p + 228) = -1;
    CBaseEntity::NetworkStateChanged(p, 0x390u, -1, -1);
    v3 = *p;
    *(p + 229) = -1;
    (*(v3 + 176))(p, 916, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v4 = *p;
    *(p + 230) = -1;
    (*(v4 + 176))(p, 920, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
  }
  return p;
}


// CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo  (line 153, @0x0000000002bbf940, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release
// callers: CDOTA_Ability_Invoker_ColdSnap::GetEntityClassInternal, CDOTA_Ability_Invoker_GhostWalk::GetEntityClassInternal, CDOTA_Ability_Invoker_Tornado::GetEntityClassInternal, CDOTA_Ability_Invoker_EMP::GetEntityClassInternal, CDOTA_Ability_Invoker_Alacrity::GetEntityClassInternal, CDOTA_Ability_Invoker_ChaosMeteor::GetEntityClassInternal, CDOTA_Ability_Invoker_SunStrike::GetEntityClassInternal, CDOTA_Ability_Invoker_ForgeSpirit::GetEntityClassInternal, CDOTA_Ability_Invoker_IceWall::GetEntityClassInternal, CDOTA_Ability_Invoker_DeafeningBlast::GetEntityClassInternal
// strings: "CDOTA_Ability_Invoker_InvokedBase", "dota_base_ability", "CDOTABaseAbility", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClassInfo, CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClassInfo, `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo, CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo
CEntityClassInfo *__cdecl CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo()
{
  if ( `guard variable for'CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClassInfo != 0 )
    return &CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClassInfo) == 0 )
    return &CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClassInfo;
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
    &CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClassInfo,
    "CDOTA_Ability_Invoker_InvokedBase",
    0,
    0,
    &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClassInfo);
  return &CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClassInfo;
}


// CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal  (line 153, @0x0000000002bcf570, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_Invoker_InvokedBase"
// globals: `guard variable for'CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass, CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Invoker_InvokedBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClassInfo, CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClassInfo
CEntityClass *__cdecl CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass) != 0 )
  {
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_pClassInfo = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_flags = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_pInputs = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_nInputCount = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_pOutputs = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_nOutputCount = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_pGameClass = 0;
    CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass._vptr_CEntityClass = off_44F3BF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass);
    __cxa_atexit(
      CDOTA_Ability_Invoker_InvokedBase::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Invoker_InvokedBaseClass != 0 )
    return &CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass;
  if ( `guard variable for'CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClassInfo,
      "CDOTA_Ability_Invoker_InvokedBase",
      0,
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClassInfo);
  }
  CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_pClassInfo = &CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClassInfo;
  CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_pBaseClassInfo = CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Invoker_InvokedBaseClass = &CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass;
  CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClassInfo.m_pClass = &CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass;
  CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Invoker_InvokedBaseClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokedBaseClass;
}


// CDOTA_Ability_Invoker_InvokedBase::OnUpgradeQuas  (line 167, @0x0000000002b91040, libserver.so)
void __fastcall CDOTA_Ability_Invoker_InvokedBase::OnUpgradeQuas(CDOTA_Ability_Invoker_InvokedBase *const this)
{
  ;
}


// CDOTA_Ability_Invoker_InvokedBase::OnUpgradeWex  (line 168, @0x0000000002b91050, libserver.so)
void __fastcall CDOTA_Ability_Invoker_InvokedBase::OnUpgradeWex(CDOTA_Ability_Invoker_InvokedBase *const this)
{
  ;
}


// CDOTA_Ability_Invoker_InvokedBase::OnUpgradeExort  (line 169, @0x0000000002b91060, libserver.so)
void __fastcall CDOTA_Ability_Invoker_InvokedBase::OnUpgradeExort(CDOTA_Ability_Invoker_InvokedBase *const this)
{
  ;
}


// CDOTA_Ability_Invoker_InvokedBase::YouForgotToImplementOrDeclareServerClass  (line 196, @0x0000000002b357c0, libserver.so)
int __fastcall CDOTA_Ability_Invoker_InvokedBase::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Invoker_InvokedBase *const this)
{
  return 0;
}


// CDOTA_Ability_Invoker_InvokedBase::GetServerClass  (line 196, @0x0000000002b4cd60, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Invoker_InvokedBase::GetServerClass(
        CDOTA_Ability_Invoker_InvokedBase *const this)
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


// CDOTA_Ability_Invoker_InvokedBase::OnStolen  (line 210, @0x0000000002b427d0, libserver.so)  // inlines: GetTrueExortLevel, GetTrueQuasLevel, GetTrueWexLevel, NetworkStateChanged, Set, UpgradeExort, UpgradeQuas, UpgradeWex, operator++, operator+=<int>
// calls: __dynamic_cast
// globals: `typeinfo for'CDOTA_Ability_Invoker_InvokedBase
void __fastcall CDOTA_Ability_Invoker_InvokedBase::OnStolen(
        CDOTA_Ability_Invoker_InvokedBase *const this,
        CDOTABaseAbility *pSourceAbility)
{
  _DWORD *v3; // rax
  _DWORD *v4; // r12
  int m_Value; // r13d
  int (**vptr_IHandleEntity)(...); // rax
  int i; // r13d
  int (**v8)(...); // rax
  int (**v9)(...); // rax
  int v10; // r13d

  if ( pSourceAbility != 0 )
  {
    v3 = __dynamic_cast(
           pSourceAbility,
           &`typeinfo for'CDOTABaseAbility,
           &`typeinfo for'CDOTA_Ability_Invoker_InvokedBase,
           0);
    v4 = v3;
    if ( v3 != 0 )
    {
      m_Value = this->m_nQuasLevel.m_Value;
      if ( v3[228] > m_Value )
      {
        do
        {
          (*(this->_vptr_IHandleEntity + 22))(this, 912, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          vptr_IHandleEntity = this->_vptr_IHandleEntity;
          this->m_nQuasLevel.m_Value = m_Value + 1;
          vptr_IHandleEntity[333](this);
          m_Value = this->m_nQuasLevel.m_Value;
        }
        while ( m_Value < v4[228] );
      }
      for ( i = this->m_nWexLevel.m_Value; i < v4[229]; i = this->m_nWexLevel.m_Value )
      {
        (*(this->_vptr_IHandleEntity + 22))(this, 916, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v8 = this->_vptr_IHandleEntity;
        this->m_nWexLevel.m_Value = i + 1;
        v8[334](this);
      }
      while ( 1 )
      {
        v10 = this->m_nExortLevel.m_Value;
        if ( v10 >= v4[230] )
          break;
        (*(this->_vptr_IHandleEntity + 22))(this, 920, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v9 = this->_vptr_IHandleEntity;
        this->m_nExortLevel.m_Value = v10 + 1;
        v9[335](this);
      }
    }
  }
}


// CDOTA_Ability_Invoker_InvokedBase::CopyAbilityState  (line 225, @0x0000000002b42690, libserver.so)  // inlines: GetTrueExortLevel, GetTrueQuasLevel, GetTrueWexLevel, NetworkStateChanged, Set, UpgradeExort, UpgradeQuas, UpgradeWex, operator++, operator+=<int>
// calls: __dynamic_cast
// globals: `typeinfo for'CDOTA_Ability_Invoker_InvokedBase
void __fastcall CDOTA_Ability_Invoker_InvokedBase::CopyAbilityState(
        CDOTA_Ability_Invoker_InvokedBase *const this,
        CDOTABaseAbility *pAbilityCopy)
{
  _DWORD *v3; // rax
  _DWORD *v4; // rbx
  int i; // r13d
  __int64 v6; // rax
  int j; // r13d
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // r13d

  if ( pAbilityCopy != 0 )
  {
    v3 = __dynamic_cast(
           pAbilityCopy,
           &`typeinfo for'CDOTABaseAbility,
           &`typeinfo for'CDOTA_Ability_Invoker_InvokedBase,
           0);
    v4 = v3;
    if ( v3 != 0 )
    {
      for ( i = v3[228]; i < this->m_nQuasLevel.m_Value; i = v4[228] )
      {
        (*(*v4 + 176LL))(v4, 912, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v6 = *v4;
        v4[228] = i + 1;
        (*(v6 + 2664))(v4);
      }
      for ( j = v4[229]; j < this->m_nWexLevel.m_Value; j = v4[229] )
      {
        (*(*v4 + 176LL))(v4, 916, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v8 = *v4;
        v4[229] = j + 1;
        (*(v8 + 2672))(v4);
      }
      while ( 1 )
      {
        v10 = v4[230];
        if ( v10 >= this->m_nExortLevel.m_Value )
          break;
        (*(*v4 + 176LL))(v4, 920, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v9 = *v4;
        v4[230] = v10 + 1;
        (*(v9 + 2680))(v4);
      }
    }
  }
}


// CDOTA_Ability_Invoker_ColdSnap::~CDOTA_Ability_Invoker_ColdSnap  (line 268, @0x0000000002b9fdc0, libserver.so)  // inlines: ~CDOTA_Ability_Invoker_InvokedBase
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Invoker_ColdSnap::~CDOTA_Ability_Invoker_ColdSnap(
        CDOTA_Ability_Invoker_ColdSnap *const this)
{
  this->_vptr_IHandleEntity = &off_44F3C70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Invoker_ColdSnap::~CDOTA_Ability_Invoker_ColdSnap  (line 268, @0x0000000002b9fde0, libserver.so)  // inlines: ~CDOTA_Ability_Invoker_ColdSnap, ~CDOTA_Ability_Invoker_InvokedBase
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Invoker_ColdSnap::~CDOTA_Ability_Invoker_ColdSnap(
        CDOTA_Ability_Invoker_ColdSnap *const this)
{
  this->_vptr_IHandleEntity = &off_44F3C70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Invoker_ColdSnap::Schema_DynamicBinding  (line 270, @0x0000000002b91070, libserver.so)
// globals: CDOTA_Ability_Invoker_ColdSnap::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_ColdSnap::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_ColdSnap *const this)
{
  return CDOTA_Ability_Invoker_ColdSnap::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_ColdSnap::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 270, @0x0000000002b91080, libserver.so)
// globals: CDOTA_Ability_Invoker_ColdSnap::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_ColdSnap::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_ColdSnap::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_ColdSnap::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_ColdSnap::CEntityInstanceEntityClass::DestructInstance  (line 270, @0x0000000002b91090, libserver.so)  // inlines: Destruct<CDOTA_Ability_Invoker_ColdSnap>
void __fastcall CDOTA_Ability_Invoker_ColdSnap::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Invoker_ColdSnap::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Invoker_ColdSnap::CEntityInstanceEntityClass::FreeInstance  (line 270, @0x0000000002b910b0, libserver.so)
void __fastcall CDOTA_Ability_Invoker_ColdSnap::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Invoker_ColdSnap::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Invoker_ColdSnap::CEntityInstanceEntityClass::CanAllocate  (line 270, @0x0000000002b910d0, libserver.so)
bool __fastcall CDOTA_Ability_Invoker_ColdSnap::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Invoker_ColdSnap::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Invoker_ColdSnap::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 270, @0x0000000002b910e0, libserver.so)
// globals: CDOTA_Ability_Invoker_ColdSnap::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Invoker_ColdSnap::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Invoker_ColdSnap::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_ColdSnap::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_ColdSnap::CEntityInstanceEntityClass::AllocateInstance  (line 270, @0x0000000002b980a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Invoker_ColdSnap::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Invoker_ColdSnap::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_Invoker_ColdSnap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 270, @0x0000000002baaf20, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Invoker_ColdSnap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_ColdSnap::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Invoker_ColdSnap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 270, @0x0000000002baaf40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Invoker_ColdSnap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_ColdSnap::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Invoker_ColdSnap::CEntityInstanceEntityClass::ConstructInstance  (line 270, @0x0000000002bad0b0, libserver.so)  // inlines: CDOTA_Ability_Invoker_ColdSnap, CDOTA_Ability_Invoker_InvokedBase, CNetworkVarBase, Construct<CDOTA_Ability_Invoker_ColdSnap>, NetworkStateChanged
// calls: CDOTABaseAbility::CDOTABaseAbility, CBaseEntity::NetworkStateChanged, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Ability_Invoker_ColdSnap::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Invoker_ColdSnap::CEntityInstanceEntityClass *const this,
        void *p)
{
  __int64 v3; // rax
  __int64 v4; // rax

  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44F3C70;
    *(p + 228) = -1;
    CBaseEntity::NetworkStateChanged(p, 0x390u, -1, -1);
    v3 = *p;
    *(p + 229) = -1;
    (*(v3 + 176))(p, 916, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v4 = *p;
    *(p + 230) = -1;
    (*(v4 + 176))(p, 920, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *p = &off_44F4790;
  }
  return p;
}


// CDOTA_Ability_Invoker_ColdSnap::GetEntityClassInternal  (line 270, @0x0000000002bc9d40, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_Invoker_ColdSnap"
// globals: `guard variable for'CDOTA_Ability_Invoker_ColdSnap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ColdSnapClass, CDOTA_Ability_Invoker_ColdSnap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ColdSnapClass, __dso_handle, CDOTA_Ability_Invoker_ColdSnap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Invoker_ColdSnap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ColdSnapClassInfo, CDOTA_Ability_Invoker_ColdSnap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ColdSnapClassInfo
CEntityClass *__cdecl CDOTA_Ability_Invoker_ColdSnap::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Invoker_ColdSnap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ColdSnapClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_ColdSnap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ColdSnapClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Invoker_ColdSnap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ColdSnapClass);
    CDOTA_Ability_Invoker_ColdSnap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ColdSnapClass._vptr_CEntityClass = off_44F4710;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_ColdSnap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ColdSnapClass);
    __cxa_atexit(
      CDOTA_Ability_Invoker_ColdSnap::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Invoker_ColdSnap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ColdSnapClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Invoker_ColdSnapClass != 0 )
    return &CDOTA_Ability_Invoker_ColdSnap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ColdSnapClass;
  if ( `guard variable for'CDOTA_Ability_Invoker_ColdSnap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ColdSnapClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_ColdSnap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ColdSnapClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Invoker_ColdSnap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ColdSnapClassInfo,
      "CDOTA_Ability_Invoker_ColdSnap",
      "invoker_cold_snap",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_ColdSnap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ColdSnapClassInfo);
  }
  CDOTA_Ability_Invoker_ColdSnap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ColdSnapClass.m_pClassInfo = &CDOTA_Ability_Invoker_ColdSnap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ColdSnapClassInfo;
  CDOTA_Ability_Invoker_ColdSnap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ColdSnapClass.m_pBaseClassInfo = CDOTA_Ability_Invoker_ColdSnap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ColdSnapClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Invoker_ColdSnapClass = &CDOTA_Ability_Invoker_ColdSnap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ColdSnapClass;
  CDOTA_Ability_Invoker_ColdSnap::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ColdSnapClassInfo.m_pClass = &CDOTA_Ability_Invoker_ColdSnap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ColdSnapClass;
  CDOTA_Ability_Invoker_ColdSnap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ColdSnapClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Invoker_ColdSnapClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Invoker_ColdSnap::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ColdSnapClass;
}


// CDOTA_Ability_Invoker_ColdSnap::GetAssociatedSecondaryAbilities  (line 275, @0x0000000002b910f0, libserver.so)
// strings: "invoker_wex;invoker_quas;invoker_exort"
const char *__fastcall CDOTA_Ability_Invoker_ColdSnap::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Invoker_ColdSnap *const this)
{
  return "invoker_wex;invoker_quas;invoker_exort";
}


// CDOTA_Ability_Invoker_ColdSnap::OnSpellStart  (line 282, @0x0000000002b75e30, libserver.so)  // inlines: GetQuasLevel, InState, IsInvulnerable, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::StartGesture, CDOTA_BaseNPC::UnitEmitSound, CDOTA_BaseNPC::TriggerSpellAbsorb, KeyValues::KeyValues, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, KeyValues::SetInt, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues (14 total)
// strings: "Hero_Invoker.ColdSnap.Cast", "modifier_invoker_cold_snap", "quas_level", "Hero_Invoker.ColdSnap"
void __fastcall CDOTA_Ability_Invoker_ColdSnap::OnSpellStart(CDOTA_Ability_Invoker_ColdSnap *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  __int64 v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *Caster; // rax
  int m_Value; // edx
  float v9; // xmm1_4
  CDOTA_BaseNPC *v10; // rax
  int v11; // edx
  CDOTA_BaseNPC *v12; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0 )
  {
    v4 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
    if ( (v4 & 0x100) == 0 && (v4 & 0x200) == 0 && !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1) )
    {
      KeyValues::KeyValues(&kv, "modifier_invoker_cold_snap");
      Caster = CDOTABaseAbility::GetCaster(this);
      if ( CDOTA_BaseNPC::HasScepter(Caster) )
        m_Value = this->m_nQuasLevel.m_Value + 1;
      else
        m_Value = this->m_nQuasLevel.m_Value;
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", m_Value, 0);
      KeyValues::SetFloat(&kv, "duration", v9);
      v10 = CDOTABaseAbility::GetCaster(this);
      if ( CDOTA_BaseNPC::HasScepter(v10) )
        v11 = this->m_nQuasLevel.m_Value + 1;
      else
        v11 = this->m_nQuasLevel.m_Value;
      KeyValues::SetInt(&kv, "quas_level", v11);
      v12 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, v12, this, "modifier_invoker_cold_snap", &kv, 0);
      CDOTA_BaseNPC::UnitEmitSound(v3, "Hero_Invoker.ColdSnap", 0.0, 0, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v5, 1581, 0.1, 0.1, 9, 0, 1.0);
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v6, "Hero_Invoker.ColdSnap.Cast", 0.0, 0, 0);
}


// CDOTA_Modifier_Invoker_ColdSnap::~CDOTA_Modifier_Invoker_ColdSnap  (line 305, @0x0000000002b9a580, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Invoker_ColdSnap::~CDOTA_Modifier_Invoker_ColdSnap(
        CDOTA_Modifier_Invoker_ColdSnap *const this)
{
  this->_vptr_CDOTA_Buff = &off_44F5270;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Invoker_ColdSnap::~CDOTA_Modifier_Invoker_ColdSnap  (line 305, @0x0000000002b9a5a0, libserver.so)  // inlines: ~CDOTA_Modifier_Invoker_ColdSnap
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Invoker_ColdSnap::~CDOTA_Modifier_Invoker_ColdSnap(
        CDOTA_Modifier_Invoker_ColdSnap *const this)
{
  this->_vptr_CDOTA_Buff = &off_44F5270;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Invoker_ColdSnap::IsDebuff  (line 310, @0x0000000002b91100, libserver.so)
bool __fastcall CDOTA_Modifier_Invoker_ColdSnap::IsDebuff(CDOTA_Modifier_Invoker_ColdSnap *const this)
{
  return 1;
}


// CDOTA_Modifier_Invoker_ColdSnap::ApplyFreeze  (line 340, @0x0000000002b57730, libserver.so)  // inlines: InState, IsInvulnerable, IsMagicImmune, NetworkStateChanged, Set, Start, operator=<float>
// calls: CDOTA_Buff::GetParent, CountdownTimer::Now, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, ApplyDamage, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::CanEntityBeSeenByMyTeam, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin (17 total)
// callers: CDOTA_Modifier_Invoker_ColdSnap::OnTakeDamage, CDOTA_Modifier_Invoker_ColdSnap::OnCreated
// strings: "modifier_stun", "modifier_invoker_cold_snap_freeze", "particles/units/heroes/hero_invoker/invoker_cold_snap.vpcf", "attach_hitloc"
void __fastcall CDOTA_Modifier_Invoker_ColdSnap::ApplyFreeze(
        CDOTA_Modifier_Invoker_ColdSnap *const this,
        CDOTA_BaseNPC *pAttacker)
{
  CDOTA_BaseNPC *Parent; // r12
  unsigned __int64 m_Value; // rax
  double v6; // xmm0_8
  double v7; // xmm1_8
  double v8; // xmm2_8
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // rax
  float v11; // xmm1_4
  CDOTABaseAbility *v12; // r15
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // r15
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v16; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_ParticleManager *v18; // rax
  float v19; // [rsp+14h] [rbp-5Ch]
  float flDamage; // [rsp+18h] [rbp-58h]
  float flDamagea; // [rsp+18h] [rbp-58h]
  const Vector *flDamageb; // [rsp+18h] [rbp-58h]
  KeyValues kv; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-38h]

  v24 = __readfsqword(0x28u);
  Parent = CDOTA_Buff::GetParent(this);
  m_Value = Parent->m_nUnitState64.m_Value;
  if ( (m_Value & 0x200) == 0 && !Parent->m_bIsWaitingToSpawn.m_Value && (m_Value & 0x100) == 0 )
  {
    flDamage = this->freeze_cooldown;
    *&v6 = CountdownTimer::Now(&this->m_freezeCooldownTimer) + flDamage;
    if ( *&v6 != this->m_freezeCooldownTimer.m_timestamp.m_Value )
    {
      v19 = *&v6;
      (*(this->m_freezeCooldownTimer._vptr_CountdownTimer + 2))(
        &this->m_freezeCooldownTimer,
        12,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL);
      *&v6 = LODWORD(v19);
      this->m_freezeCooldownTimer.m_timestamp.m_Value = v19;
    }
    if ( flDamage != this->m_freezeCooldownTimer.m_duration.m_Value )
    {
      (*(this->m_freezeCooldownTimer._vptr_CountdownTimer + 2))(
        &this->m_freezeCooldownTimer,
        8,
        0xFFFFFFFFLL,
        0xFFFFFFFFLL,
        v6,
        v7,
        v8,
        flDamage);
      this->m_freezeCooldownTimer.m_duration.m_Value = flDamage;
    }
    flDamagea = this->freeze_damage;
    Ability = CDOTA_Buff::GetAbility(this);
    Caster = CDOTA_Buff::GetCaster(this);
    ApplyDamage(Caster, Parent, Ability, flDamagea, 2, 0);
    KeyValues::KeyValues(&kv, "modifier_stun");
    KeyValues::SetFloat(&kv, "duration", v11);
    v12 = CDOTA_Buff::GetAbility(this);
    v13 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(Parent, v13, v12, "modifier_invoker_cold_snap_freeze", &kv, 0);
    if ( pAttacker == 0 || !CDOTA_BaseNPC::CanEntityBeSeenByMyTeam(Parent, pAttacker) )
      pAttacker = Parent;
    v14 = CDOTA_Buff::GetCaster(this);
    ParticleManager = GetParticleManager();
    LODWORD(v14) = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/units/heroes/hero_invoker/invoker_cold_snap.vpcf",
                     2,
                     v14,
                     0,
                     0);
    flDamageb = CBaseEntity::GetAbsOrigin(Parent);
    v16 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v16, v14, 0, Parent, 5, "attach_hitloc", *flDamageb, 1);
    AbsOrigin = CBaseEntity::GetAbsOrigin(pAttacker);
    v18 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v18, v14, 1, pAttacker, 5, "attach_hitloc", *AbsOrigin, 1);
    CDOTA_Buff::AddParticle(this, v14, 0, 0, -1, 0, 0);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_Invoker_ColdSnap::OnCreated  (line 367, @0x0000000002b7f730, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: KeyValues::GetInt, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetCaster, CDOTA_Modifier_Invoker_ColdSnap::ApplyFreeze
// strings: "quas_level", "freeze_duration", "damage_trigger", "freeze_cooldown", "freeze_damage"
void __fastcall CDOTA_Modifier_Invoker_ColdSnap::OnCreated(CDOTA_Modifier_Invoker_ColdSnap *const this, KeyValues *pKV)
{
  int Int; // r12d
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTA_BaseNPC *Caster; // rax

  Int = KeyValues::GetInt(pKV, "quas_level", 0);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->freeze_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "freeze_duration", -1, 0);
  else
    this->freeze_duration = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
    this->damage_trigger = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "damage_trigger", -1, 0);
  else
    this->damage_trigger = 0.0;
  if ( CDOTA_Buff::GetAbility(this) != 0 )
  {
    v6 = CDOTA_Buff::GetAbility(this);
    this->freeze_cooldown = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "freeze_cooldown", Int, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    this->freeze_damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "freeze_damage", Int, 0);
  }
  else
  {
    this->freeze_cooldown = 0.0;
    this->freeze_damage = 0.0;
  }
  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_Modifier_Invoker_ColdSnap::ApplyFreeze(this, Caster);
}


// CDOTA_Modifier_Invoker_ColdSnap::OnRefresh  (line 398, @0x0000000002b357d0, libserver.so)
void __fastcall CDOTA_Modifier_Invoker_ColdSnap::OnRefresh(CDOTA_Modifier_Invoker_ColdSnap *const this, KeyValues *pKV)
{
  (*(this->_vptr_CDOTA_Buff + 57))(this, pKV);
}


// CDOTA_Modifier_Invoker_ColdSnap::DeclareFunctions  (line 405, @0x0000000002b357f0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Invoker_ColdSnap::OnTakeDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Invoker_ColdSnap::DeclareFunctions(CDOTA_Modifier_Invoker_ColdSnap *const this)
{
  this->m_Functions[151].__pfn = (&stru_10 + 697);
  this->m_Functions[151].__delta = 0;
  this->m_Functions[134].__pfn = CDOTA_Modifier_Invoker_ColdSnap::OnTakeDamage;
  this->m_Functions[134].__delta = 0;
}


// CDOTA_Modifier_Invoker_ColdSnap::Tooltip  (line 413, @0x0000000002b35830, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Invoker_ColdSnap::Tooltip(
        CDOTA_Modifier_Invoker_ColdSnap *const this,
        const CModifierParams *const params)
{
  __m128i freeze_damage_low; // xmm0
  ModifierVariant_t result; // 0:rax.16

  freeze_damage_low = LODWORD(this->freeze_damage);
  result.m_szVal = 0;
  *freeze_damage_low.m128i_i32 = *freeze_damage_low.m128i_i32;
  *&result.m_eType = (_mm_cvtsi128_si32(freeze_damage_low) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Invoker_ColdSnap::OnTakeDamage  (line 420, @0x0000000002b57a00, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsElapsed, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CountdownTimer::Now, CDOTA_Modifier_Invoker_ColdSnap::ApplyFreeze, CDOTA_BaseNPC::UnitEmitSound
// strings: "Hero_Invoker.ColdSnap.Freeze"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Invoker_ColdSnap::OnTakeDamage(
        CDOTA_Modifier_Invoker_ColdSnap *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CDOTA_BaseNPC *v12; // r14
  CDOTA_BaseNPC *Parent; // rax

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1
    || (m_Index_low = LOWORD(params->hattacker.m_Index),
        (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v7 = &v6[m_Index_low & 0x1FF]) == 0
    || m_Index != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v9 = params->hunit.m_Index;
  if ( v9 + 2 <= 1
    || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F]) == 0
    || (v11 = &v10[params->hunit.m_Index & 0x1FF]) == 0
    || v9 != v11->m_EHandle.m_Index
    || (v12 = v11->m_pInstance, v11->m_pInstance == 0)
    || !v12->m_bIsDOTANPC )
  {
    v12 = 0;
  }
  if ( CDOTA_Buff::GetParent(this) == v12
    && params->fDamage > this->damage_trigger
    && CountdownTimer::Now(&this->m_freezeCooldownTimer) >= this->m_freezeCooldownTimer.m_timestamp.m_Value
    && CDOTA_Buff::GetParent(this) != m_pInstance
    && (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x200) == 0 )
  {
    CDOTA_Modifier_Invoker_ColdSnap::ApplyFreeze(this, m_pInstance);
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::UnitEmitSound(Parent, "Hero_Invoker.ColdSnap.Freeze", 0.0, 0, 0);
  }
  return 1uLL;
}


// CDOTA_Modifier_Invoker_ColdSnap_Freeze::~CDOTA_Modifier_Invoker_ColdSnap_Freeze  (line 439, @0x0000000002b99c70, libserver.so)  // inlines: ~CDOTA_Modifier_Stunned
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Invoker_ColdSnap_Freeze::~CDOTA_Modifier_Invoker_ColdSnap_Freeze(
        CDOTA_Modifier_Invoker_ColdSnap_Freeze *const this)
{
  this->_vptr_CDOTA_Buff = &off_411CD70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Invoker_ColdSnap_Freeze::~CDOTA_Modifier_Invoker_ColdSnap_Freeze  (line 439, @0x0000000002b99c90, libserver.so)  // inlines: ~CDOTA_Modifier_Invoker_ColdSnap_Freeze, ~CDOTA_Modifier_Stunned
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Invoker_ColdSnap_Freeze::~CDOTA_Modifier_Invoker_ColdSnap_Freeze(
        CDOTA_Modifier_Invoker_ColdSnap_Freeze *const this)
{
  this->_vptr_CDOTA_Buff = &off_411CD70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Invoker_ColdSnap_Freeze::IsDebuff  (line 444, @0x0000000002b91110, libserver.so)
bool __fastcall CDOTA_Modifier_Invoker_ColdSnap_Freeze::IsDebuff(CDOTA_Modifier_Invoker_ColdSnap_Freeze *const this)
{
  return 1;
}


// CDOTA_Modifier_Invoker_ColdSnap_Freeze::IsStunDebuff  (line 445, @0x0000000002b91120, libserver.so)
bool __fastcall CDOTA_Modifier_Invoker_ColdSnap_Freeze::IsStunDebuff(
        CDOTA_Modifier_Invoker_ColdSnap_Freeze *const this)
{
  return 1;
}


// CDOTA_Modifier_Invoker_ColdSnap_Freeze::GetEffectName  (line 446, @0x0000000002b91130, libserver.so)
// strings: "particles/generic_gameplay/generic_stunned.vpcf"
const char *__fastcall CDOTA_Modifier_Invoker_ColdSnap_Freeze::GetEffectName(
        CDOTA_Modifier_Invoker_ColdSnap_Freeze *const this)
{
  return "particles/generic_gameplay/generic_stunned.vpcf";
}


// CDOTA_Modifier_Invoker_ColdSnap_Freeze::GetEffectAttachType  (line 447, @0x0000000002b91140, libserver.so)
int __fastcall CDOTA_Modifier_Invoker_ColdSnap_Freeze::GetEffectAttachType(
        CDOTA_Modifier_Invoker_ColdSnap_Freeze *const this)
{
  return 7;
}


// CDOTA_Modifier_Invoker_ColdSnap_Freeze::GetStatusEffectName  (line 448, @0x0000000002b91150, libserver.so)
// strings: "particles/status_fx/status_effect_frost.vpcf"
const char *__fastcall CDOTA_Modifier_Invoker_ColdSnap_Freeze::GetStatusEffectName(
        CDOTA_Modifier_Invoker_ColdSnap_Freeze *const this)
{
  return "particles/status_fx/status_effect_frost.vpcf";
}


// CDOTA_Modifier_Invoker_ColdSnap_Freeze::StatusEffectPriority  (line 449, @0x0000000002b91160, libserver.so)
int __fastcall CDOTA_Modifier_Invoker_ColdSnap_Freeze::StatusEffectPriority(
        CDOTA_Modifier_Invoker_ColdSnap_Freeze *const this)
{
  return 10;
}


// CDOTA_Modifier_Invoker_ColdSnap_Freeze::IsHidden  (line 450, @0x0000000002b91170, libserver.so)
bool __fastcall CDOTA_Modifier_Invoker_ColdSnap_Freeze::IsHidden(CDOTA_Modifier_Invoker_ColdSnap_Freeze *const this)
{
  return 1;
}


// CDOTA_Modifier_Invoker_ColdSnap_Freeze::CheckState  (line 460, @0x0000000002b3b2e0, libserver.so)  // inlines: Enable
// calls: CDOTA_Modifier_Stunned::CheckState
void __fastcall CDOTA_Modifier_Invoker_ColdSnap_Freeze::CheckState(
        CDOTA_Modifier_Invoker_ColdSnap_Freeze *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  CDOTA_Modifier_Stunned::CheckState(this, buffState);
  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x40020uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFBFFDFLL;
}


// CDOTA_Ability_Invoker_GhostWalk::~CDOTA_Ability_Invoker_GhostWalk  (line 473, @0x0000000002b9fe10, libserver.so)  // inlines: ~CDOTA_Ability_Invoker_InvokedBase
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Invoker_GhostWalk::~CDOTA_Ability_Invoker_GhostWalk(
        CDOTA_Ability_Invoker_GhostWalk *const this)
{
  this->_vptr_IHandleEntity = &off_44F3C70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Invoker_GhostWalk::~CDOTA_Ability_Invoker_GhostWalk  (line 473, @0x0000000002b9fe30, libserver.so)  // inlines: ~CDOTA_Ability_Invoker_GhostWalk, ~CDOTA_Ability_Invoker_InvokedBase
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Invoker_GhostWalk::~CDOTA_Ability_Invoker_GhostWalk(
        CDOTA_Ability_Invoker_GhostWalk *const this)
{
  this->_vptr_IHandleEntity = &off_44F3C70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Invoker_GhostWalk::Schema_DynamicBinding  (line 475, @0x0000000002b91180, libserver.so)
// globals: CDOTA_Ability_Invoker_GhostWalk::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_GhostWalk::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_GhostWalk *const this)
{
  return CDOTA_Ability_Invoker_GhostWalk::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_GhostWalk::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 475, @0x0000000002b91190, libserver.so)
// globals: CDOTA_Ability_Invoker_GhostWalk::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_GhostWalk::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_GhostWalk::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_GhostWalk::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_GhostWalk::CEntityInstanceEntityClass::DestructInstance  (line 475, @0x0000000002b911a0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Invoker_GhostWalk>
void __fastcall CDOTA_Ability_Invoker_GhostWalk::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Invoker_GhostWalk::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Invoker_GhostWalk::CEntityInstanceEntityClass::FreeInstance  (line 475, @0x0000000002b911c0, libserver.so)
void __fastcall CDOTA_Ability_Invoker_GhostWalk::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Invoker_GhostWalk::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Invoker_GhostWalk::CEntityInstanceEntityClass::CanAllocate  (line 475, @0x0000000002b911e0, libserver.so)
bool __fastcall CDOTA_Ability_Invoker_GhostWalk::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Invoker_GhostWalk::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Invoker_GhostWalk::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 475, @0x0000000002b911f0, libserver.so)
// globals: CDOTA_Ability_Invoker_GhostWalk::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Invoker_GhostWalk::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Invoker_GhostWalk::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_GhostWalk::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_GhostWalk::CEntityInstanceEntityClass::AllocateInstance  (line 475, @0x0000000002b980e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Invoker_GhostWalk::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Invoker_GhostWalk::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_Invoker_GhostWalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 475, @0x0000000002baaf70, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Invoker_GhostWalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_GhostWalk::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Invoker_GhostWalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 475, @0x0000000002baaf90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Invoker_GhostWalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_GhostWalk::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Invoker_GhostWalk::CEntityInstanceEntityClass::ConstructInstance  (line 475, @0x0000000002bacd00, libserver.so)  // inlines: CDOTA_Ability_Invoker_GhostWalk, CDOTA_Ability_Invoker_InvokedBase, CNetworkVarBase, Construct<CDOTA_Ability_Invoker_GhostWalk>, NetworkStateChanged
// calls: CDOTABaseAbility::CDOTABaseAbility, CBaseEntity::NetworkStateChanged, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Ability_Invoker_GhostWalk::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Invoker_GhostWalk::CEntityInstanceEntityClass *const this,
        void *p)
{
  __int64 v3; // rax
  __int64 v4; // rax

  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44F3C70;
    *(p + 228) = -1;
    CBaseEntity::NetworkStateChanged(p, 0x390u, -1, -1);
    v3 = *p;
    *(p + 229) = -1;
    (*(v3 + 176))(p, 916, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v4 = *p;
    *(p + 230) = -1;
    (*(v4 + 176))(p, 920, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *p = &off_44F58F0;
  }
  return p;
}


// CDOTA_Ability_Invoker_GhostWalk::GetEntityClassInternal  (line 475, @0x0000000002bc9e90, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_Invoker_GhostWalk"
// globals: `guard variable for'CDOTA_Ability_Invoker_GhostWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_GhostWalkClass, CDOTA_Ability_Invoker_GhostWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_GhostWalkClass, __dso_handle, CDOTA_Ability_Invoker_GhostWalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Invoker_GhostWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_GhostWalkClassInfo, CDOTA_Ability_Invoker_GhostWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_GhostWalkClassInfo
CEntityClass *__cdecl CDOTA_Ability_Invoker_GhostWalk::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Invoker_GhostWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_GhostWalkClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_GhostWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_GhostWalkClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Invoker_GhostWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_GhostWalkClass);
    CDOTA_Ability_Invoker_GhostWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_GhostWalkClass._vptr_CEntityClass = off_44F5870;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_GhostWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_GhostWalkClass);
    __cxa_atexit(
      CDOTA_Ability_Invoker_GhostWalk::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Invoker_GhostWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_GhostWalkClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Invoker_GhostWalkClass != 0 )
    return &CDOTA_Ability_Invoker_GhostWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_GhostWalkClass;
  if ( `guard variable for'CDOTA_Ability_Invoker_GhostWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_GhostWalkClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_GhostWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_GhostWalkClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Invoker_GhostWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_GhostWalkClassInfo,
      "CDOTA_Ability_Invoker_GhostWalk",
      "invoker_ghost_walk",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_GhostWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_GhostWalkClassInfo);
  }
  CDOTA_Ability_Invoker_GhostWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_GhostWalkClass.m_pClassInfo = &CDOTA_Ability_Invoker_GhostWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_GhostWalkClassInfo;
  CDOTA_Ability_Invoker_GhostWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_GhostWalkClass.m_pBaseClassInfo = CDOTA_Ability_Invoker_GhostWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_GhostWalkClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Invoker_GhostWalkClass = &CDOTA_Ability_Invoker_GhostWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_GhostWalkClass;
  CDOTA_Ability_Invoker_GhostWalk::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_GhostWalkClassInfo.m_pClass = &CDOTA_Ability_Invoker_GhostWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_GhostWalkClass;
  CDOTA_Ability_Invoker_GhostWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_GhostWalkClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Invoker_GhostWalkClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Invoker_GhostWalk::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_GhostWalkClass;
}


// CDOTA_Ability_Invoker_GhostWalk::GetAssociatedSecondaryAbilities  (line 483, @0x0000000002b91200, libserver.so)
// strings: "invoker_wex;invoker_quas;invoker_exort"
const char *__fastcall CDOTA_Ability_Invoker_GhostWalk::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Invoker_GhostWalk *const this)
{
  return "invoker_wex;invoker_quas;invoker_exort";
}


// CDOTA_Ability_Invoker_GhostWalk::OnUpgradeQuas  (line 496, @0x0000000002b57c50, libserver.so)
// calls: CDOTA_Ability_Invoker_GhostWalk::RefreshModifier
void __fastcall CDOTA_Ability_Invoker_GhostWalk::OnUpgradeQuas(CDOTA_Ability_Invoker_GhostWalk *const this)
{
  CDOTA_Ability_Invoker_GhostWalk::RefreshModifier(this);
}


// CDOTA_Ability_Invoker_GhostWalk::OnUpgradeWex  (line 505, @0x0000000002b57c60, libserver.so)
// calls: CDOTA_Ability_Invoker_GhostWalk::RefreshModifier
void __fastcall CDOTA_Ability_Invoker_GhostWalk::OnUpgradeWex(CDOTA_Ability_Invoker_GhostWalk *const this)
{
  CDOTA_Ability_Invoker_GhostWalk::RefreshModifier(this);
}


// CDOTA_Ability_Invoker_GhostWalk::RefreshModifier  (line 515, @0x0000000002b57ba0, libserver.so)  // inlines: SetBool
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, KeyValues::KeyValues, KeyValues::SetInt, CDOTA_Buff::DoRefresh, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// callers: CDOTA_Ability_Invoker_GhostWalk::OnUpgradeQuas, CDOTA_Ability_Invoker_GhostWalk::OnUpgradeWex
// strings: "modifier_invoker_ghost_walk_self", "force_duration"
void __fastcall CDOTA_Ability_Invoker_GhostWalk::RefreshModifier(CDOTA_Ability_Invoker_GhostWalk *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // r12
  KeyValues kv; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-18h]

  v4 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_invoker_ghost_walk_self", 0);
  if ( ModifierByName != 0 )
  {
    KeyValues::KeyValues(&kv, "refresh");
    KeyValues::SetInt(&kv, "force_duration", 1);
    CDOTA_Buff::DoRefresh(ModifierByName, &kv, 0, 0);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Invoker_GhostWalk::OnSpellStart  (line 529, @0x0000000002b748c0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::StartGesture, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_invoker_ghost_walk", "modifier_invoker_ghost_walk_self", "Hero_Invoker.GhostWalk"
void __fastcall CDOTA_Ability_Invoker_GhostWalk::OnSpellStart(CDOTA_Ability_Invoker_GhostWalk *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_invoker_ghost_walk");
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_invoker_ghost_walk_self", &kv, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v5, 1582, 0.1, 0.1, 9, 0, 1.0);
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v6, "Hero_Invoker.GhostWalk", 0.0, 0, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Invoker_GhostWalk_Self::~CDOTA_Modifier_Invoker_GhostWalk_Self  (line 548, @0x0000000002b9a440, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Invoker_GhostWalk_Self::~CDOTA_Modifier_Invoker_GhostWalk_Self(
        CDOTA_Modifier_Invoker_GhostWalk_Self *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Invoker_GhostWalk_Self::~CDOTA_Modifier_Invoker_GhostWalk_Self  (line 548, @0x0000000002b9a460, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible, ~CDOTA_Modifier_Invoker_GhostWalk_Self
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Invoker_GhostWalk_Self::~CDOTA_Modifier_Invoker_GhostWalk_Self(
        CDOTA_Modifier_Invoker_GhostWalk_Self *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Invoker_GhostWalk_Self::IsAura  (line 556, @0x0000000002b91210, libserver.so)
bool __fastcall CDOTA_Modifier_Invoker_GhostWalk_Self::IsAura(CDOTA_Modifier_Invoker_GhostWalk_Self *const this)
{
  return 1;
}


// CDOTA_Modifier_Invoker_GhostWalk_Self::GetModifierAura  (line 557, @0x0000000002b91220, libserver.so)
// strings: "modifier_invoker_ghost_walk_enemy"
const char *__fastcall CDOTA_Modifier_Invoker_GhostWalk_Self::GetModifierAura(
        CDOTA_Modifier_Invoker_GhostWalk_Self *const this)
{
  return "modifier_invoker_ghost_walk_enemy";
}


// CDOTA_Modifier_Invoker_GhostWalk_Self::GetAuraSearchTeam  (line 559, @0x0000000002b91230, libserver.so)
int __fastcall CDOTA_Modifier_Invoker_GhostWalk_Self::GetAuraSearchTeam(
        CDOTA_Modifier_Invoker_GhostWalk_Self *const this)
{
  return 2;
}


// CDOTA_Modifier_Invoker_GhostWalk_Self::GetAuraSearchType  (line 560, @0x0000000002b91240, libserver.so)
int __fastcall CDOTA_Modifier_Invoker_GhostWalk_Self::GetAuraSearchType(
        CDOTA_Modifier_Invoker_GhostWalk_Self *const this)
{
  return 3;
}


// CDOTA_Modifier_Invoker_GhostWalk_Self::GetAuraRadius  (line 561, @0x0000000002b91250, libserver.so)
int __fastcall CDOTA_Modifier_Invoker_GhostWalk_Self::GetAuraRadius(CDOTA_Modifier_Invoker_GhostWalk_Self *const this)
{
  return this->area_of_effect;
}


// CDOTA_Modifier_Invoker_GhostWalk_Self::GetAuraDuration  (line 562, @0x0000000002b91260, libserver.so)
float __fastcall CDOTA_Modifier_Invoker_GhostWalk_Self::GetAuraDuration(
        CDOTA_Modifier_Invoker_GhostWalk_Self *const this)
{
  return this->aura_fade_time;
}


// CDOTA_Modifier_Invoker_GhostWalk_Self::GetSelfSlow  (line 585, @0x0000000002b6a440, libserver.so)  // inlines: GetWexLevel
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// callers: CDOTA_Modifier_Invoker_GhostWalk_Self::OnRefresh, CDOTA_Modifier_Invoker_GhostWalk_Self::OnCreated
void __fastcall CDOTA_Modifier_Invoker_GhostWalk_Self::GetSelfSlow(CDOTA_Modifier_Invoker_GhostWalk_Self *const this)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v3; // r12
  CDOTA_BaseNPC *Caster; // rax
  bool HasScepter; // al
  int vptr_IHandleEntity_high; // r12d
  CDOTABaseAbility *v7; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  v3 = Ability;
  if ( Ability != 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(Ability);
    HasScepter = CDOTA_BaseNPC::HasScepter(Caster);
    vptr_IHandleEntity_high = HIDWORD(v3[1]._vptr_IHandleEntity);
    if ( HasScepter )
      ++vptr_IHandleEntity_high;
    v7 = CDOTA_Buff::GetAbility(this);
    this->self_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "self_slow", vptr_IHandleEntity_high, 0);
  }
}


// CDOTA_Modifier_Invoker_GhostWalk_Self::OnCreated  (line 597, @0x0000000002b7dfb0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Modifier_Invoker_GhostWalk_Self::GetSelfSlow, CDOTA_Modifier_Invisible::OnCreated
// strings: "area_of_effect", "aura_fade_time"
void __fastcall CDOTA_Modifier_Invoker_GhostWalk_Self::OnCreated(
        CDOTA_Modifier_Invoker_GhostWalk_Self *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->area_of_effect = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_3;
LABEL_6:
    this->aura_fade_time = 0.0;
    goto LABEL_4;
  }
  this->area_of_effect = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "area_of_effect", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_6;
LABEL_3:
  this->aura_fade_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "aura_fade_time", -1, 0);
LABEL_4:
  CDOTA_Modifier_Invoker_GhostWalk_Self::GetSelfSlow(this);
  CDOTA_Modifier_Invisible::OnCreated(this, pKV);
}


// CDOTA_Modifier_Invoker_GhostWalk_Self::OnRefresh  (line 613, @0x0000000002b6a4b0, libserver.so)
// calls: CDOTA_Modifier_Invoker_GhostWalk_Self::GetSelfSlow
void __fastcall CDOTA_Modifier_Invoker_GhostWalk_Self::OnRefresh(
        CDOTA_Modifier_Invoker_GhostWalk_Self *const this,
        KeyValues *pKV)
{
  CDOTA_Modifier_Invoker_GhostWalk_Self::GetSelfSlow(this);
}


// CDOTA_Modifier_Invoker_GhostWalk_Self::CheckState  (line 622, @0x0000000002b39a80, libserver.so)  // inlines: Enable
// calls: CDOTA_Modifier_Invisible::CheckState
void __fastcall CDOTA_Modifier_Invoker_GhostWalk_Self::CheckState(
        CDOTA_Modifier_Invoker_GhostWalk_Self *const this,
        CDOTABuffState *const buffState)
{
  CDOTA_Modifier_Invisible::CheckState(this, buffState);
  buffState->m_nEnabledStateMask |= 0x2000000uLL;
  buffState->m_nDisabledStateMask &= ~0x2000000uLL;
}


// CDOTA_Modifier_Invoker_GhostWalk_Self::DeclareFunctions  (line 631, @0x0000000002b3a090, libserver.so)  // inlines: SetFunction
// calls: CDOTA_Modifier_Invisible::DeclareFunctions
// globals: CDOTA_Modifier_Invoker_GhostWalk_Self::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Invoker_GhostWalk_Self::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_Invoker_GhostWalk_Self::DeclareFunctions(
        CDOTA_Modifier_Invoker_GhostWalk_Self *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Invoker_GhostWalk_Self::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[138].__delta = 0;
  this->m_Functions[138].__pfn = CDOTA_Modifier_Invoker_GhostWalk_Self::OnDeath;
  CDOTA_Modifier_Invisible::DeclareFunctions(this);
}


// CDOTA_Modifier_Invoker_GhostWalk_Self::GetModifierMoveSpeedBonus_Percentage  (line 642, @0x0000000002b35860, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Invoker_GhostWalk_Self::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Invoker_GhostWalk_Self *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->self_slow;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Invoker_GhostWalk_Self::OnDeath  (line 649, @0x0000000002b442f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Invoker_GhostWalk_Self::OnDeath(
        CDOTA_Modifier_Invoker_GhostWalk_Self *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[params->hunit.m_Index & 0x1FF];
  if ( v4 == 0 || m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC || CDOTA_Buff::GetParent(this) != m_pInstance )
    return 1uLL;
  CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


// CDOTA_Modifier_Invoker_GhostWalk_Enemy::~CDOTA_Modifier_Invoker_GhostWalk_Enemy  (line 666, @0x0000000002b9a3f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Invoker_GhostWalk_Enemy::~CDOTA_Modifier_Invoker_GhostWalk_Enemy(
        CDOTA_Modifier_Invoker_GhostWalk_Enemy *const this)
{
  this->_vptr_CDOTA_Buff = &off_44F6710;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Invoker_GhostWalk_Enemy::~CDOTA_Modifier_Invoker_GhostWalk_Enemy  (line 666, @0x0000000002b9a410, libserver.so)  // inlines: ~CDOTA_Modifier_Invoker_GhostWalk_Enemy
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Invoker_GhostWalk_Enemy::~CDOTA_Modifier_Invoker_GhostWalk_Enemy(
        CDOTA_Modifier_Invoker_GhostWalk_Enemy *const this)
{
  this->_vptr_CDOTA_Buff = &off_44F6710;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Invoker_GhostWalk_Enemy::GetEffectName  (line 676, @0x0000000002b91270, libserver.so)
// strings: "particles/units/heroes/hero_invoker/invoker_ghost_walk_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Invoker_GhostWalk_Enemy::GetEffectName(
        CDOTA_Modifier_Invoker_GhostWalk_Enemy *const this)
{
  return "particles/units/heroes/hero_invoker/invoker_ghost_walk_debuff.vpcf";
}


// CDOTA_Modifier_Invoker_GhostWalk_Enemy::GetStatusEffectName  (line 677, @0x0000000002b91280, libserver.so)
// strings: "particles/status_fx/status_effect_frost.vpcf"
const char *__fastcall CDOTA_Modifier_Invoker_GhostWalk_Enemy::GetStatusEffectName(
        CDOTA_Modifier_Invoker_GhostWalk_Enemy *const this)
{
  return "particles/status_fx/status_effect_frost.vpcf";
}


// CDOTA_Modifier_Invoker_GhostWalk_Enemy::StatusEffectPriority  (line 678, @0x0000000002b91290, libserver.so)
int __fastcall CDOTA_Modifier_Invoker_GhostWalk_Enemy::StatusEffectPriority(
        CDOTA_Modifier_Invoker_GhostWalk_Enemy *const this)
{
  return 10;
}


// CDOTA_Modifier_Invoker_GhostWalk_Enemy::GetEnemySlow  (line 692, @0x0000000002b6a4c0, libserver.so)  // inlines: GetQuasLevel
// calls: CDOTA_Buff::GetAbility, __dynamic_cast, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// callers: CDOTA_Modifier_Invoker_GhostWalk_Enemy::OnCreated, CDOTA_Modifier_Invoker_GhostWalk_Enemy::OnRefresh
// strings: "enemy_slow"
// globals: `typeinfo for'CDOTA_Ability_Invoker_GhostWalk
void __fastcall CDOTA_Modifier_Invoker_GhostWalk_Enemy::GetEnemySlow(
        CDOTA_Modifier_Invoker_GhostWalk_Enemy *const this)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v3; // rax
  CDOTABaseAbility *v4; // r12
  CDOTA_BaseNPC *Caster; // rax
  bool HasScepter; // al
  int vptr_IHandleEntity; // r12d
  CDOTABaseAbility *v8; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    v3 = __dynamic_cast(Ability, &`typeinfo for'CDOTABaseAbility, &`typeinfo for'CDOTA_Ability_Invoker_GhostWalk, 0);
    v4 = v3;
    if ( v3 != 0 )
    {
      Caster = CDOTABaseAbility::GetCaster(v3);
      HasScepter = CDOTA_BaseNPC::HasScepter(Caster);
      vptr_IHandleEntity = v4[1]._vptr_IHandleEntity;
      if ( HasScepter )
        ++vptr_IHandleEntity;
      v8 = CDOTA_Buff::GetAbility(this);
      this->enemy_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "enemy_slow", vptr_IHandleEntity, 0);
    }
  }
}


// CDOTA_Modifier_Invoker_GhostWalk_Enemy::OnCreated  (line 704, @0x0000000002b6a550, libserver.so)
// calls: CDOTA_Modifier_Invoker_GhostWalk_Enemy::GetEnemySlow
void __fastcall CDOTA_Modifier_Invoker_GhostWalk_Enemy::OnCreated(
        CDOTA_Modifier_Invoker_GhostWalk_Enemy *const this,
        KeyValues *pKV)
{
  CDOTA_Modifier_Invoker_GhostWalk_Enemy::GetEnemySlow(this);
}


// CDOTA_Modifier_Invoker_GhostWalk_Enemy::OnRefresh  (line 711, @0x0000000002b6a560, libserver.so)
// calls: CDOTA_Modifier_Invoker_GhostWalk_Enemy::GetEnemySlow
void __fastcall CDOTA_Modifier_Invoker_GhostWalk_Enemy::OnRefresh(
        CDOTA_Modifier_Invoker_GhostWalk_Enemy *const this,
        KeyValues *pKV)
{
  CDOTA_Modifier_Invoker_GhostWalk_Enemy::GetEnemySlow(this);
}


// CDOTA_Modifier_Invoker_GhostWalk_Enemy::DeclareFunctions  (line 718, @0x0000000002b35880, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Invoker_GhostWalk_Enemy::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Invoker_GhostWalk_Enemy::DeclareFunctions(
        CDOTA_Modifier_Invoker_GhostWalk_Enemy *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Invoker_GhostWalk_Enemy::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Invoker_GhostWalk_Enemy::GetModifierMoveSpeedBonus_Percentage  (line 725, @0x0000000002b3ca40, libserver.so)
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Invoker_GhostWalk_Enemy::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Invoker_GhostWalk_Enemy *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x200) != 0 )
    return 1uLL;
  *v3.m128i_i32 = this->enemy_slow;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Ability_Invoker_Tornado::~CDOTA_Ability_Invoker_Tornado  (line 737, @0x0000000002b9fe60, libserver.so)  // inlines: ~CDOTA_Ability_Invoker_InvokedBase
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Invoker_Tornado::~CDOTA_Ability_Invoker_Tornado(
        CDOTA_Ability_Invoker_Tornado *const this)
{
  this->_vptr_IHandleEntity = &off_44F3C70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Invoker_Tornado::~CDOTA_Ability_Invoker_Tornado  (line 737, @0x0000000002b9fe80, libserver.so)  // inlines: ~CDOTA_Ability_Invoker_InvokedBase, ~CDOTA_Ability_Invoker_Tornado
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Invoker_Tornado::~CDOTA_Ability_Invoker_Tornado(
        CDOTA_Ability_Invoker_Tornado *const this)
{
  this->_vptr_IHandleEntity = &off_44F3C70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Invoker_Tornado::Schema_DynamicBinding  (line 739, @0x0000000002b912a0, libserver.so)
// globals: CDOTA_Ability_Invoker_Tornado::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_Tornado::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_Tornado *const this)
{
  return CDOTA_Ability_Invoker_Tornado::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_Tornado::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 739, @0x0000000002b912b0, libserver.so)
// globals: CDOTA_Ability_Invoker_Tornado::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_Tornado::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_Tornado::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_Tornado::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_Tornado::CEntityInstanceEntityClass::DestructInstance  (line 739, @0x0000000002b912c0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Invoker_Tornado>
void __fastcall CDOTA_Ability_Invoker_Tornado::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Invoker_Tornado::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Invoker_Tornado::CEntityInstanceEntityClass::FreeInstance  (line 739, @0x0000000002b912e0, libserver.so)
void __fastcall CDOTA_Ability_Invoker_Tornado::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Invoker_Tornado::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Invoker_Tornado::CEntityInstanceEntityClass::CanAllocate  (line 739, @0x0000000002b91300, libserver.so)
bool __fastcall CDOTA_Ability_Invoker_Tornado::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Invoker_Tornado::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Invoker_Tornado::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 739, @0x0000000002b91310, libserver.so)
// globals: CDOTA_Ability_Invoker_Tornado::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Invoker_Tornado::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Invoker_Tornado::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_Tornado::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_Tornado::CEntityInstanceEntityClass::AllocateInstance  (line 739, @0x0000000002b98120, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Invoker_Tornado::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Invoker_Tornado::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 960);
  memset(v1, 0, 0x3C0u);
  return v1;
}


// CDOTA_Ability_Invoker_Tornado::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 739, @0x0000000002baafc0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Invoker_Tornado::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_Tornado::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Invoker_Tornado::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 739, @0x0000000002baafe0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Invoker_Tornado::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_Tornado::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Invoker_Tornado::CEntityInstanceEntityClass::ConstructInstance  (line 739, @0x0000000002bad250, libserver.so)  // inlines: CDOTA_Ability_Invoker_InvokedBase, CDOTA_Ability_Invoker_Tornado, CNetworkVarBase, Construct<CDOTA_Ability_Invoker_Tornado>, InValidate, NetworkStateChanged, SndOpEventGuid_t, SoundEventGuid_t
// calls: CDOTABaseAbility::CDOTABaseAbility, CBaseEntity::NetworkStateChanged, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Ability_Invoker_Tornado::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Invoker_Tornado::CEntityInstanceEntityClass *const this,
        void *p)
{
  __int64 v3; // rax
  __int64 v4; // rax

  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44F3C70;
    *(p + 228) = -1;
    CBaseEntity::NetworkStateChanged(p, 0x390u, -1, -1);
    v3 = *p;
    *(p + 229) = -1;
    (*(v3 + 176))(p, 916, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v4 = *p;
    *(p + 230) = -1;
    (*(v4 + 176))(p, 920, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *(p + 237) = 0;
    *p = &off_44F6A70;
    *(p + 238) = -1;
  }
  return p;
}


// CDOTA_Ability_Invoker_Tornado::GetEntityClassInternal  (line 739, @0x0000000002bc9fe0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_Invoker_Tornado"
// globals: `guard variable for'CDOTA_Ability_Invoker_Tornado::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_TornadoClass, CDOTA_Ability_Invoker_Tornado::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_TornadoClass, __dso_handle, CDOTA_Ability_Invoker_Tornado::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Invoker_Tornado::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_TornadoClassInfo, CDOTA_Ability_Invoker_Tornado::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_TornadoClassInfo
CEntityClass *__cdecl CDOTA_Ability_Invoker_Tornado::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Invoker_Tornado::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_TornadoClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_Tornado::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_TornadoClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Invoker_Tornado::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_TornadoClass);
    CDOTA_Ability_Invoker_Tornado::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_TornadoClass._vptr_CEntityClass = off_44F69F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_Tornado::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_TornadoClass);
    __cxa_atexit(
      CDOTA_Ability_Invoker_Tornado::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Invoker_Tornado::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_TornadoClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Invoker_TornadoClass != 0 )
    return &CDOTA_Ability_Invoker_Tornado::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_TornadoClass;
  if ( `guard variable for'CDOTA_Ability_Invoker_Tornado::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_TornadoClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_Tornado::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_TornadoClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Invoker_Tornado::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_TornadoClassInfo,
      "CDOTA_Ability_Invoker_Tornado",
      "invoker_tornado",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_Tornado::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_TornadoClassInfo);
  }
  CDOTA_Ability_Invoker_Tornado::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_TornadoClass.m_pClassInfo = &CDOTA_Ability_Invoker_Tornado::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_TornadoClassInfo;
  CDOTA_Ability_Invoker_Tornado::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_TornadoClass.m_pBaseClassInfo = CDOTA_Ability_Invoker_Tornado::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_TornadoClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Invoker_TornadoClass = &CDOTA_Ability_Invoker_Tornado::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_TornadoClass;
  CDOTA_Ability_Invoker_Tornado::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_TornadoClassInfo.m_pClass = &CDOTA_Ability_Invoker_Tornado::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_TornadoClass;
  CDOTA_Ability_Invoker_Tornado::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_TornadoClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Invoker_TornadoClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Invoker_Tornado::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_TornadoClass;
}


// CDOTA_Ability_Invoker_Tornado::GetAssociatedSecondaryAbilities  (line 747, @0x0000000002b91320, libserver.so)
// strings: "invoker_wex;invoker_quas;invoker_exort"
const char *__fastcall CDOTA_Ability_Invoker_Tornado::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Invoker_Tornado *const this)
{
  return "invoker_wex;invoker_quas;invoker_exort";
}


// CDOTA_Ability_Invoker_Tornado::YouForgotToImplementOrDeclareServerClass  (line 763, @0x0000000002b358a0, libserver.so)
int __fastcall CDOTA_Ability_Invoker_Tornado::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Invoker_Tornado *const this)
{
  return 0;
}


// CDOTA_Ability_Invoker_Tornado::GetServerClass  (line 763, @0x0000000002b4cb60, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Invoker_Tornado::GetServerClass(CDOTA_Ability_Invoker_Tornado *const this)
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


// CDOTA_Ability_Invoker_Tornado::GetCooldown  (line 773, @0x0000000002b6a570, libserver.so)
// calls: CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_invoker_3"
float __fastcall CDOTA_Ability_Invoker_Tornado::GetCooldown(CDOTA_Ability_Invoker_Tornado *const this, int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float result; // xmm0_4
  float flCooldown; // [rsp+Ch] [rbp-14h]

  flCooldown = CDOTABaseAbility::GetCooldown(this, iLevel);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_invoker_3", 0);
  result = flCooldown;
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    return flCooldown - CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  return result;
}


// CDOTA_Ability_Invoker_Tornado::OnSpellStart  (line 789, @0x0000000002b79950, libserver.so)  // inlines: CBroadcastRecipientFilter, CEntityHandle, CHandle, CReliableBroadcastRecipientFilter, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetParent, GetQuasLevel, GetSerialNumber, GetTeamNumber, GetWexLevel, InValidate, NormalizeInPlace, Set, StopSoundEvent, VectorMultiply, VectorSubtract, operator*, operator-, operator=, sLinearProjectileCreateInfo, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorPosition, VectorNormalize, CDOTA_ProjectileManager::CreateLinearProjectile, CGameSceneNode::GetOwnerEntity, CDOTA_BaseNPC::UnitEmitSound, CDOTA_BaseNPC::StartGesture, CRecipientFilter::CRecipientFilter (20 total)
// strings: "vision_distance", "end_vision_duration", "lift_duration", "quas_damage", "wex_damage", "area_of_effect" (10 total)
void __fastcall CDOTA_Ability_Invoker_Tornado::OnSpellStart(CDOTA_Ability_Invoker_Tornado *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  int m_Value; // edx
  CDOTA_BaseNPC *v4; // rax
  int v5; // edx
  CDOTA_BaseNPC *v6; // rax
  int v7; // edx
  int LevelSpecialValue; // r12d
  int v9; // r14d
  CDOTA_BaseNPC *v10; // rax
  int v11; // edx
  int v12; // r13d
  CDOTA_BaseNPC *v13; // rax
  const Vector *AbsOrigin; // r15
  vec_t v15; // xmm0_4
  vec_t v16; // xmm1_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v19; // rax
  const Vector *v20; // rax
  vec_t v21; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  CDOTA_BaseNPC *v23; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v25; // eax
  __int16 v26; // cx
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  CSoundOpGameSystem *v29; // r13
  CDOTA_BaseNPC *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  CDOTA_BaseNPC *v32; // rax
  CDOTA_BaseNPC *v33; // rax
  const QAngle *AbsAngles; // rax
  Vector vDir; // [rsp+0h] [rbp-200h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+10h] [rbp-1F0h] BYREF
  CRecipientFilter v37; // [rsp+90h] [rbp-170h] BYREF
  unsigned __int64 v38; // [rsp+1C8h] [rbp-38h]

  v38 = __readfsqword(0x28u);
  this->vision_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "vision_distance", -1, 0);
  this->end_vision_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "end_vision_duration", -1, 0);
  this->base_damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "base_damage", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    m_Value = this->m_nQuasLevel.m_Value + 1;
  else
    m_Value = this->m_nQuasLevel.m_Value;
  this->lift_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "lift_duration", m_Value, 0);
  v4 = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(v4) )
    v5 = this->m_nQuasLevel.m_Value + 1;
  else
    v5 = this->m_nQuasLevel.m_Value;
  this->quas_damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "quas_damage", v5, 0);
  v6 = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(v6) )
    v7 = this->m_nWexLevel.m_Value + 1;
  else
    v7 = this->m_nWexLevel.m_Value;
  this->wex_damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "wex_damage", v7, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "area_of_effect", -1, 0);
  v9 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "travel_speed", -1, 0);
  v10 = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(v10) )
    v11 = this->m_nWexLevel.m_Value + 1;
  else
    v11 = this->m_nWexLevel.m_Value;
  v12 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "travel_distance", v11, 0);
  v13 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v13);
  *&info.pszEffectName = CDOTABaseAbility::GetCursorPosition(this);
  v15 = *(&info.pszEffectName + 1) - AbsOrigin->y;
  v16 = *&info.pszEffectName - AbsOrigin->x;
  vDir.z = 0.0;
  vDir.y = v15;
  vDir.x = v16;
  if ( VectorNormalize(&vDir) < 0.0099999998 )
  {
    v33 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v33);
    AngleVectors(AbsAngles, &vDir, 0, 0);
  }
  info.hSource.m_Index = -1;
  info.fDistance = 0.0;
  info.fStartRadius = 0.0;
  info.fEndRadius = 0.0;
  info.bHasFrontalCone = 1;
  y = vec3_origin.y;
  info.bCheckStartPosition = 0;
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
  info.pszEffectName = "particles/units/heroes/hero_invoker/invoker_tornado.vpcf";
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
  v19 = CDOTABaseAbility::GetCaster(this);
  v20 = CBaseEntity::GetAbsOrigin(v19);
  info.vSpawnOrigin.x = v20->x;
  info.vSpawnOrigin.y = v20->y;
  v21 = v20->z;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  info.vSpawnOrigin.z = v21;
  info.vVelocity.y = vDir.y * v9;
  info.vVelocity.z = vDir.z * v9;
  info.vVelocity.x = v9 * vDir.x;
  info.fDistance = ((vptr_IHandleEntity[228])(this) + v12);
  info.fStartRadius = LevelSpecialValue;
  info.fEndRadius = LevelSpecialValue;
  v23 = CDOTABaseAbility::GetCaster(this);
  if ( v23 != 0 && (m_pEntity = v23->m_pEntity) != 0 )
  {
    v25 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v26 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v26 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(info.hSource.m_Index) = v26 | info.hSource.m_Index & 0x8000;
    info.hSource.m_Index = (v25 << 15) | info.hSource.m_Index & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  info.iUnitTargetTeam = 2;
  info.iUnitTargetType = 3;
  info.bHasFrontalCone = 0;
  info.bProvidesVision = 1;
  info.iVisionTeamNumber = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  info.iVisionRadius = this->vision_distance;
  CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  m_pParent = this->m_pGameSceneNode->m_pParent;
  OwnerEntity = 0;
  if ( m_pParent != 0 )
    OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
  CBaseEntity::GetAbsOrigin(OwnerEntity);
  v29 = g_pSoundOpGameSystem;
  if ( this->m_SoundEventGuid.m_nGuid.m_Data != 0 )
  {
    CRecipientFilter::CRecipientFilter(&v37);
    v37._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&v37);
    v37._vptr_IRecipientFilter = &off_3FCB130;
    CRecipientFilter::MakeReliable(&v37);
    CSoundOpGameSystem::StopSoundEvent(v29, &v37, this->m_SoundEventGuid);
    v37._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&v37);
    this->m_SoundEventGuid.m_nGuid.m_Data = 0;
    this->m_SoundEventGuid.m_hStackHash = -1;
  }
  v30 = CDOTABaseAbility::GetCaster(this);
  this->m_SoundEventGuid = CDOTA_BaseNPC::UnitEmitSound(v30, "Hero_Invoker.Tornado", 0.0, 0, 0);
  v31 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v31, 1583, 0.1, 0.1, 9, 0, 1.0);
  v32 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v32, "Hero_Invoker.Tornado.Cast", 0.0, 0, 0);
}


// CDOTA_Ability_Invoker_Tornado::OnProjectileHit  (line 853, @0x0000000002b4ddc0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, CDOTAFogOfWarSystem::AddTempViewer, CSoundOpGameSystem::StopSoundEvent, __stack_chk_fail, Purge, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_invoker_tornado", "land_damage"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Invoker_Tornado::OnProjectileHit(
        CDOTA_Ability_Invoker_Tornado *const this,
        unsigned __int16 *hTarget,
        const CFieldPath *vLocation)
{
  int v5; // eax
  __int16 v6; // di
  CEntityIdentity *v7; // rsi
  CEntityIdentity *v8; // rsi
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *m_pInstance; // r13
  float v12; // xmm1_4
  float v13; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  float flDuration; // [rsp+8h] [rbp-48h]
  float flRadius; // [rsp+Ch] [rbp-44h]
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-28h]

  v18 = __readfsqword(0x28u);
  v5 = *hTarget;
  if ( (*hTarget + 2) > 1
    && (v6 = *hTarget, (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F]) != 0)
    && (v8 = &v7[v6 & 0x1FF]) != 0
    && v5 == v8->m_EHandle.m_Index
    && (m_pInstance = v8->m_pInstance, v8->m_pInstance != 0)
    && m_pInstance->m_bIsDOTANPC )
  {
    Purge(m_pInstance, this, 2);
    KeyValues::KeyValues(&kv, "modifier_invoker_tornado");
    KeyValues::SetFloat(&kv, "duration", v12);
    KeyValues::SetFloat(&kv, "land_damage", v13);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, this, "modifier_invoker_tornado", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
  else
  {
    flDuration = this->end_vision_duration;
    flRadius = this->vision_distance;
    v9 = CDOTABaseAbility::GetCaster(this);
    CDOTAFogOfWarSystem::AddTempViewer(
      &g_DOTAFogOfWarSystem,
      FoWViewerType_t::FOWVIEWERTYPE_TORNADO,
      v9->m_iTeamNum.m_Value,
      vLocation,
      flRadius,
      flDuration,
      0);
    CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, &this->m_SoundEventGuid);
  }
  return 0;
}


// CDOTA_Ability_Invoker_Tornado::OnProjectileThink  (line 883, @0x0000000002b4b790, libserver.so)  // inlines: AllocateData, CBroadcastRecipientFilter, CSosFieldData, CSosFieldDataFloat3, ClearData, GetDataPtr, Init, SetValue, ~CBroadcastRecipientFilter, ~CSosFieldData, ~CSosFieldDataFloat3
// calls: CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CSoundOpGameSystem::SetSoundEventParam, operator delete [], CRecipientFilter::~CRecipientFilter, operator new [], __stack_chk_fail, CSosFieldData::ClearData, _Unwind_Resume
void __fastcall CDOTA_Ability_Invoker_Tornado::OnProjectileThink(
        CDOTA_Ability_Invoker_Tornado *const this,
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


// CDOTA_Modifier_Invoker_Tornado::~CDOTA_Modifier_Invoker_Tornado  (line 908, @0x0000000002b9a2d0, libserver.so)  // inlines: ~CDOTA_Modifier_Cyclone
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Invoker_Tornado::~CDOTA_Modifier_Invoker_Tornado(
        CDOTA_Modifier_Invoker_Tornado *const this)
{
  this->_vptr_CDOTA_Buff = &off_41260F0;
  this->_vptr_CHorizontalMotionController = &off_41263F8;
  this->_vptr_CVerticalMotionController = &off_4126438;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Invoker_Tornado::~CDOTA_Modifier_Invoker_Tornado  (line 908, @0x0000000002b9a310, libserver.so)  // inlines: ~CDOTA_Modifier_Cyclone, ~CDOTA_Modifier_Invoker_Tornado
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Invoker_Tornado::~CDOTA_Modifier_Invoker_Tornado(
        CDOTA_Modifier_Invoker_Tornado *const this)
{
  this->_vptr_CDOTA_Buff = &off_41260F0;
  this->_vptr_CHorizontalMotionController = &off_41263F8;
  this->_vptr_CVerticalMotionController = &off_4126438;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Invoker_Tornado::GetEffectName  (line 916, @0x0000000002b91330, libserver.so)
// strings: "particles/units/heroes/hero_invoker/invoker_tornado_child.vpcf"
const char *__fastcall CDOTA_Modifier_Invoker_Tornado::GetEffectName(CDOTA_Modifier_Invoker_Tornado *const this)
{
  return "particles/units/heroes/hero_invoker/invoker_tornado_child.vpcf";
}


// CDOTA_Modifier_Invoker_Tornado::GetEffectAttachType  (line 917, @0x0000000002b91340, libserver.so)
int __fastcall CDOTA_Modifier_Invoker_Tornado::GetEffectAttachType(CDOTA_Modifier_Invoker_Tornado *const this)
{
  return 0;
}


// CDOTA_Modifier_Invoker_Tornado::OnCreated  (line 930, @0x0000000002b3b340, libserver.so)
// calls: KeyValues::GetFloat, CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound, CDOTA_Modifier_Cyclone::OnCreated
// strings: "land_damage", "Hero_Invoker.Tornado.Target"
void __fastcall CDOTA_Modifier_Invoker_Tornado::OnCreated(CDOTA_Modifier_Invoker_Tornado *const this, KeyValues *pKV)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax

  this->m_flLandDamage = KeyValues::GetFloat(pKV, "land_damage", v2);
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(Parent, "Hero_Invoker.Tornado.Target", 0.0, 0, 0);
  CDOTA_Modifier_Cyclone::OnCreated(this, pKV);
}


// CDOTA_Modifier_Invoker_Tornado::OnDestroy  (line 943, @0x0000000002b3b3a0, libserver.so)  // inlines: ToDOTABaseNPCHero
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::GatherStates, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, ApplyDamage, CBaseEntity::StopSound, CDOTA_BaseNPC::UnitEmitSound, CDOTA_Modifier_Cyclone::OnDestroy, EconEntity_OnOwnerKillEaterEvent
// strings: "Hero_Invoker.Tornado.Target", "Hero_Invoker.Tornado.LandDamage"
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_Invoker_Tornado::OnDestroy(CDOTA_Modifier_Invoker_Tornado *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *v4; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC_Hero *v10; // r12
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC_Hero *v12; // rdi
  float flDamage; // [rsp+Ch] [rbp-24h]

  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::GatherStates(Parent);
  flDamage = this->m_flLandDamage;
  Ability = CDOTA_Buff::GetAbility(this);
  v4 = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, v4, Ability, flDamage, 2, 0);
  if ( (CDOTA_Buff::GetParent(this)->m_iUnitType & 1) != 0 && !CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value )
  {
    v8 = CDOTA_Buff::GetParent(this);
    if ( (*(v8->_vptr_IHandleEntity + 408))(v8) == 0 )
    {
      v9 = CDOTA_Buff::GetParent(this);
      if ( v9 == 0 || (v10 = v9, (v9->m_iUnitType & 1) == 0) )
        v10 = 0;
      v11 = CDOTA_Buff::GetCaster(this);
      if ( v11 != 0 && (v11->m_iUnitType & 1) != 0 )
        v12 = v11;
      else
        v12 = 0;
      EconEntity_OnOwnerKillEaterEvent(
        v12,
        v10,
        kill_eater_event_t::kKillEaterEventType_Invoker_TornadoKills,
        1,
        INVALID_ITEM_DEF_INDEX);
    }
  }
  v6 = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(v6, "Hero_Invoker.Tornado.Target");
  v7 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v7, "Hero_Invoker.Tornado.LandDamage", 0.0, 0, 0);
  CDOTA_Modifier_Cyclone::OnDestroy(this);
}


// CDOTA_Ability_Invoker_EMP::~CDOTA_Ability_Invoker_EMP  (line 967, @0x0000000002b9feb0, libserver.so)  // inlines: ~CDOTA_Ability_Invoker_InvokedBase
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Invoker_EMP::~CDOTA_Ability_Invoker_EMP(CDOTA_Ability_Invoker_EMP *const this)
{
  this->_vptr_IHandleEntity = &off_44F3C70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Invoker_EMP::~CDOTA_Ability_Invoker_EMP  (line 967, @0x0000000002b9fed0, libserver.so)  // inlines: ~CDOTA_Ability_Invoker_EMP, ~CDOTA_Ability_Invoker_InvokedBase
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Invoker_EMP::~CDOTA_Ability_Invoker_EMP(CDOTA_Ability_Invoker_EMP *const this)
{
  this->_vptr_IHandleEntity = &off_44F3C70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Invoker_EMP::Schema_DynamicBinding  (line 969, @0x0000000002b91350, libserver.so)
// globals: CDOTA_Ability_Invoker_EMP::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_EMP::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_EMP *const this)
{
  return CDOTA_Ability_Invoker_EMP::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_EMP::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 969, @0x0000000002b91360, libserver.so)
// globals: CDOTA_Ability_Invoker_EMP::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_EMP::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_EMP::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_EMP::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_EMP::CEntityInstanceEntityClass::DestructInstance  (line 969, @0x0000000002b91370, libserver.so)  // inlines: Destruct<CDOTA_Ability_Invoker_EMP>
void __fastcall CDOTA_Ability_Invoker_EMP::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Invoker_EMP::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Invoker_EMP::CEntityInstanceEntityClass::FreeInstance  (line 969, @0x0000000002b91390, libserver.so)
void __fastcall CDOTA_Ability_Invoker_EMP::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Invoker_EMP::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Invoker_EMP::CEntityInstanceEntityClass::CanAllocate  (line 969, @0x0000000002b913b0, libserver.so)
bool __fastcall CDOTA_Ability_Invoker_EMP::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Invoker_EMP::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Invoker_EMP::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 969, @0x0000000002b913c0, libserver.so)
// globals: CDOTA_Ability_Invoker_EMP::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Invoker_EMP::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Invoker_EMP::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_EMP::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_EMP::CEntityInstanceEntityClass::AllocateInstance  (line 969, @0x0000000002b98160, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Invoker_EMP::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Invoker_EMP::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_Invoker_EMP::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 969, @0x0000000002bab010, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Invoker_EMP::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_EMP::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Invoker_EMP::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 969, @0x0000000002bab030, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Invoker_EMP::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_EMP::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Invoker_EMP::CEntityInstanceEntityClass::ConstructInstance  (line 969, @0x0000000002bacc40, libserver.so)  // inlines: CDOTA_Ability_Invoker_EMP, CDOTA_Ability_Invoker_InvokedBase, CNetworkVarBase, Construct<CDOTA_Ability_Invoker_EMP>, NetworkStateChanged
// calls: CDOTABaseAbility::CDOTABaseAbility, CBaseEntity::NetworkStateChanged, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Ability_Invoker_EMP::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Invoker_EMP::CEntityInstanceEntityClass *const this,
        void *p)
{
  __int64 v3; // rax
  __int64 v4; // rax

  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44F3C70;
    *(p + 228) = -1;
    CBaseEntity::NetworkStateChanged(p, 0x390u, -1, -1);
    v3 = *p;
    *(p + 229) = -1;
    (*(v3 + 176))(p, 916, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v4 = *p;
    *(p + 230) = -1;
    (*(v4 + 176))(p, 920, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *p = &off_44F7950;
  }
  return p;
}


// CDOTA_Ability_Invoker_EMP::GetEntityClassInternal  (line 969, @0x0000000002bca130, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_Invoker_EMP"
// globals: `guard variable for'CDOTA_Ability_Invoker_EMP::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_EMPClass, CDOTA_Ability_Invoker_EMP::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_EMPClass, __dso_handle, CDOTA_Ability_Invoker_EMP::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Invoker_EMP::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_EMPClassInfo, CDOTA_Ability_Invoker_EMP::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_EMPClassInfo
CEntityClass *__cdecl CDOTA_Ability_Invoker_EMP::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Invoker_EMP::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_EMPClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_EMP::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_EMPClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Invoker_EMP::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_EMPClass);
    CDOTA_Ability_Invoker_EMP::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_EMPClass._vptr_CEntityClass = off_44F78D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_EMP::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_EMPClass);
    __cxa_atexit(
      CDOTA_Ability_Invoker_EMP::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Invoker_EMP::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_EMPClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Invoker_EMPClass != 0 )
    return &CDOTA_Ability_Invoker_EMP::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_EMPClass;
  if ( `guard variable for'CDOTA_Ability_Invoker_EMP::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_EMPClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_EMP::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_EMPClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Invoker_EMP::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_EMPClassInfo,
      "CDOTA_Ability_Invoker_EMP",
      "invoker_emp",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_EMP::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_EMPClassInfo);
  }
  CDOTA_Ability_Invoker_EMP::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_EMPClass.m_pClassInfo = &CDOTA_Ability_Invoker_EMP::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_EMPClassInfo;
  CDOTA_Ability_Invoker_EMP::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_EMPClass.m_pBaseClassInfo = CDOTA_Ability_Invoker_EMP::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_EMPClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Invoker_EMPClass = &CDOTA_Ability_Invoker_EMP::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_EMPClass;
  CDOTA_Ability_Invoker_EMP::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_EMPClassInfo.m_pClass = &CDOTA_Ability_Invoker_EMP::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_EMPClass;
  CDOTA_Ability_Invoker_EMP::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_EMPClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Invoker_EMPClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Invoker_EMP::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_EMPClass;
}


// CDOTA_Ability_Invoker_EMP::GetAssociatedSecondaryAbilities  (line 975, @0x0000000002b913d0, libserver.so)
// strings: "invoker_wex;invoker_quas;invoker_exort"
const char *__fastcall CDOTA_Ability_Invoker_EMP::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Invoker_EMP *const this)
{
  return "invoker_wex;invoker_quas;invoker_exort";
}


// CDOTA_Ability_Invoker_EMP::YouForgotToImplementOrDeclareServerClass  (line 987, @0x0000000002b358b0, libserver.so)
int __fastcall CDOTA_Ability_Invoker_EMP::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Invoker_EMP *const this)
{
  return 0;
}


// CDOTA_Ability_Invoker_EMP::GetServerClass  (line 987, @0x0000000002b4cf60, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Invoker_EMP::GetServerClass(CDOTA_Ability_Invoker_EMP *const this)
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


// CDOTA_Ability_Invoker_EMP::OnSpellStart  (line 996, @0x0000000002b79ff0, libserver.so)  // inlines: GetLevelSpecialValueFor<int>, GetTeamNumber, GetWexLevel
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, CDOTABaseAbility::GetCursorPosition, Thinker_Create, CDOTA_BaseNPC::StartGesture, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues (14 total)
// strings: "area_of_effect", "damage_per_mana_pct", "mana_burned", "modifier_invoker_emp", "Hero_Invoker.EMP.Cast"
void __fastcall CDOTA_Ability_Invoker_EMP::OnSpellStart(CDOTA_Ability_Invoker_EMP *const this)
{
  int LevelSpecialValue; // r14d
  CDOTA_BaseNPC *Caster; // rax
  int m_Value; // edx
  CDOTA_BaseNPC *v5; // rax
  int v6; // edx
  int v7; // r13d
  float v8; // xmm1_4
  float v9; // xmm1_4
  int v10; // r13d
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  KeyValues kv; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-38h]
  Vector CursorPosition; // 0:kr00_12.12

  v15 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "area_of_effect", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_per_mana_pct", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    m_Value = this->m_nWexLevel.m_Value + 1;
  else
    m_Value = this->m_nWexLevel.m_Value;
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "delay", m_Value, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(v5) )
    v6 = this->m_nWexLevel.m_Value + 1;
  else
    v6 = this->m_nWexLevel.m_Value;
  v7 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "mana_burned", v6, 0);
  KeyValues::KeyValues(&kv, "modifier_invoker_emp");
  KeyValues::SetFloat(&kv, "duration", v8);
  KeyValues::SetInt(&kv, "area_of_effect", LevelSpecialValue);
  KeyValues::SetInt(&kv, "mana_burned", v7);
  KeyValues::SetFloat(&kv, "damage_per_mana", v9);
  v10 = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  v11 = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(v11, this, "modifier_invoker_emp", &kv, CursorPosition, v10, 0, 0, 0);
  v12 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v12, 1584, 0.1, 0.1, 9, 0, 1.0);
  v13 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v13, "Hero_Invoker.EMP.Cast", 0.0, 0, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Invoker_EMP::~CDOTA_Modifier_Invoker_EMP  (line 1025, @0x0000000002b9a280, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Invoker_EMP::~CDOTA_Modifier_Invoker_EMP(CDOTA_Modifier_Invoker_EMP *const this)
{
  this->_vptr_CDOTA_Buff = &off_44F8430;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Invoker_EMP::~CDOTA_Modifier_Invoker_EMP  (line 1025, @0x0000000002b9a2a0, libserver.so)  // inlines: ~CDOTA_Modifier_Invoker_EMP
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Invoker_EMP::~CDOTA_Modifier_Invoker_EMP(CDOTA_Modifier_Invoker_EMP *const this)
{
  this->_vptr_CDOTA_Buff = &off_44F8430;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Invoker_EMP::IsHidden  (line 1030, @0x0000000002b913e0, libserver.so)
bool __fastcall CDOTA_Modifier_Invoker_EMP::IsHidden(CDOTA_Modifier_Invoker_EMP *const this)
{
  return 1;
}


// CDOTA_Modifier_Invoker_EMP::GetNumAvoidLocations  (line 1037, @0x0000000002b913f0, libserver.so)
int __fastcall CDOTA_Modifier_Invoker_EMP::GetNumAvoidLocations(CDOTA_Modifier_Invoker_EMP *const this)
{
  return 1;
}


// CDOTA_Modifier_Invoker_EMP::GetAvoidLocation  (line 1038, @0x0000000002b9dd60, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin
Vector __fastcall CDOTA_Modifier_Invoker_EMP::GetAvoidLocation(CDOTA_Modifier_Invoker_EMP *const this, int iAvoid)
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


// CDOTA_Modifier_Invoker_EMP::AvoidStrength  (line 1039, @0x0000000002bad520, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, RemapValClamped, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Modifier_Invoker_EMP::AvoidStrength(CDOTA_Modifier_Invoker_EMP *const this, CDOTA_Bot *pBot)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax
  float v6; // xmm1_4
  float result; // xmm0_4
  float v8; // xmm1_4

  m_Index = pBot->m_hUnit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pBot->m_hUnit.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[pBot->m_hUnit.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index )
      {
        m_pInstance = v4->m_pInstance;
        if ( v4->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
        {
          if ( *&m_pInstance[44].m_iszPrivateVScripts.u.m_Id <= 300.0 )
            goto LABEL_12;
LABEL_6:
          v6 = (*&m_pInstance[44].m_iszPrivateVScripts.u.m_Id - 300.0) / 1700.0;
          if ( v6 < 0.0 )
            return 0.80000001;
          result = 0.40000001;
          if ( v6 <= 1.0 )
            return (v6 * -0.40000001) + 0.80000001;
          return result;
        }
      }
    }
  }
  m_pInstance = 0;
  if ( 0.0 > 300.0 )
    goto LABEL_6;
LABEL_12:
  result = 0.0;
  v8 = *&m_pInstance[44].m_iszPrivateVScripts.u.m_Id / 300.0;
  if ( v8 >= 0.0 )
  {
    result = 0.80000001;
    if ( v8 <= 1.0 )
      return (0.80000001 * v8) + 0.0;
  }
  return result;
}


// CDOTA_Modifier_Invoker_EMP::GetAvoidRadius  (line 1040, @0x0000000002b91400, libserver.so)
float __fastcall CDOTA_Modifier_Invoker_EMP::GetAvoidRadius(CDOTA_Modifier_Invoker_EMP *const this, int iAvoid)
{
  return this->area_of_effect + 200.0;
}


// CDOTA_Modifier_Invoker_EMP::IsPersistentAvoidance  (line 1041, @0x0000000002b91420, libserver.so)
bool __fastcall CDOTA_Modifier_Invoker_EMP::IsPersistentAvoidance(CDOTA_Modifier_Invoker_EMP *const this)
{
  return 1;
}


// CDOTA_Modifier_Invoker_EMP::OnCreated  (line 1054, @0x0000000002b390c0, libserver.so)  // inlines: Vector, VectorAdd, operator+
// calls: KeyValues::GetInt, KeyValues::GetFloat, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::AddParticle, CDOTA_Buff::GetCaster, DOTA_EmitSoundLocationWithCaster
// strings: "area_of_effect", "mana_burned", "particles/units/heroes/hero_invoker/invoker_emp.vpcf", "Hero_Invoker.EMP.Charge"
void __fastcall CDOTA_Modifier_Invoker_EMP::OnCreated(CDOTA_Modifier_Invoker_EMP *const this, KeyValues *pKV)
{
  KeyValues *v2; // r12
  float v4; // xmm1_4
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  unsigned int v8; // xmm2_4
  unsigned int v9; // xmm1_4
  CDOTA_ParticleManager *v10; // rax
  CDOTA_ParticleManager *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *Caster; // rax
  Vector vPos; // [rsp+10h] [rbp-30h] BYREF
  double v15; // [rsp+20h] [rbp-20h]
  float v16; // [rsp+28h] [rbp-18h]

  v2 = pKV;
  this->area_of_effect = KeyValues::GetInt(pKV, "area_of_effect", 0);
  this->mana_burned = KeyValues::GetInt(v2, "mana_burned", 0);
  this->damage_per_mana = KeyValues::GetFloat(v2, "damage_per_mana", v4);
  ParticleManager = GetParticleManager();
  LODWORD(v2) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_invoker/invoker_emp.vpcf",
                  2,
                  0,
                  0,
                  0);
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  *&v8 = AbsOrigin->y + 0.0;
  *&v9 = AbsOrigin->x + 0.0;
  v16 = AbsOrigin->z + 64.0;
  v15 = COERCE_DOUBLE(__PAIR64__(v8, v9));
  v10 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v10, v2, 0, v15, v16);
  vPos.x = this->area_of_effect;
  vPos.y = vPos.x;
  vPos.z = vPos.x;
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v11, v2, 1, *&vPos.x, vPos.x);
  CDOTA_Buff::AddParticle(this, v2, 0, 0, -1, 0, 0);
  v12 = CDOTA_Buff::GetParent(this);
  vPos = *CBaseEntity::GetAbsOrigin(v12);
  Caster = CDOTA_Buff::GetCaster(this);
  DOTA_EmitSoundLocationWithCaster(&vPos, "Hero_Invoker.EMP.Charge", Caster);
}


// CDOTA_Modifier_Invoker_EMP::OnDestroy  (line 1080, @0x0000000002b601a0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetMana, GetTeamNumber, IndexToIdentity, IsRealHero, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_BaseNPC::ReduceMana, CDOTA_Buff::GetAbility, CDOTA_CombatLog::AddManaDamageEvent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::GiveMana, ApplyDamage, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex (16 total)
// strings: "particles/generic_gameplay/generic_manaburn.vpcf", "Hero_Invoker.EMP.Discharge", "Hero_Invoker.EMP.Charge"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Invoker_EMP::OnDestroy(CDOTA_Modifier_Invoker_EMP *const this)
{
  __m128i v1; // xmm5
  float v3; // r14d
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v7; // rax
  __int64 v8; // r13
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityInstance *m_pInstance; // rbx
  float mana_burned; // xmm0_4
  float v16; // xmm1_4
  int v17; // r14d
  CDOTABaseAbility *Ability; // rax
  __m128i v19; // xmm4
  float v20; // r14d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *v22; // r14
  CDOTA_BaseNPC *v23; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  CDOTA_BaseNPC *v29; // rax
  float flDamage; // [rsp+1Ch] [rbp-64h]
  float flDamagea; // [rsp+1Ch] [rbp-64h]
  Vector vPos; // [rsp+20h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+30h] [rbp-50h] BYREF

  hEntities.m_Size = 0;
  *v1.m128i_i32 = this->area_of_effect;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  Parent = CDOTA_Buff::GetParent(this);
  v5 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, Parent, v3, &hEntities, 2, 3, 0, 0, 0);
  if ( hEntities.m_Size > 0 )
  {
    v8 = 0;
    do
    {
      v9 = &hEntities.m_Memory.m_pMemory[v8];
      m_Index = v9->m_Index;
      if ( v9->m_Index + 2 <= 1
        || (v11 = v9->m_Index,
            (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F]) == 0)
        || (v13 = &v12[v11 & 0x1FF]) == 0
        || m_Index != v13->m_EHandle.m_Index
        || (m_pInstance = v13->m_pInstance, v13->m_pInstance == 0)
        || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
      {
        m_pInstance = 0;
      }
      mana_burned = this->mana_burned;
      v16 = *&m_pInstance[44].m_iszPrivateVScripts.u.m_Id;
      if ( v16 <= mana_burned )
        v17 = v16;
      else
        v17 = mana_burned;
      flDamage = v17;
      CDOTA_BaseNPC::ReduceMana(m_pInstance, v17, v16);
      Ability = CDOTA_Buff::GetAbility(this);
      CDOTA_CombatLog::AddManaDamageEvent(&g_DOTACombatLog, Ability, m_pInstance, v17);
      if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
      {
        v19 = 0x3F000000u;
        *v19.m128i_i32 = 0.5 * flDamage;
        v20 = COERCE_FLOAT(_mm_cvtsi128_si32(v19));
        Caster = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::GiveMana(Caster, v20, 0, 1);
      }
      flDamagea = flDamage * this->damage_per_mana;
      v22 = CDOTA_Buff::GetAbility(this);
      v23 = CDOTA_Buff::GetCaster(this);
      ApplyDamage(v23, m_pInstance, v22, flDamagea, 2, 0);
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/generic_gameplay/generic_manaburn.vpcf",
                   1,
                   m_pInstance,
                   0,
                   0);
      v26 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v26, Particle);
      ++v8;
    }
    while ( hEntities.m_Size > v8 );
  }
  v27 = CDOTA_Buff::GetParent(this);
  vPos = *CBaseEntity::GetAbsOrigin(v27);
  v28 = CDOTA_Buff::GetCaster(this);
  DOTA_EmitSoundLocationWithCaster(&vPos, "Hero_Invoker.EMP.Discharge", v28);
  v29 = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(v29, "Hero_Invoker.EMP.Charge");
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
}


// CDOTA_Ability_Invoker_Alacrity::~CDOTA_Ability_Invoker_Alacrity  (line 1125, @0x0000000002b9ff00, libserver.so)  // inlines: ~CDOTA_Ability_Invoker_InvokedBase
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Invoker_Alacrity::~CDOTA_Ability_Invoker_Alacrity(
        CDOTA_Ability_Invoker_Alacrity *const this)
{
  this->_vptr_IHandleEntity = &off_44F3C70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Invoker_Alacrity::~CDOTA_Ability_Invoker_Alacrity  (line 1125, @0x0000000002b9ff20, libserver.so)  // inlines: ~CDOTA_Ability_Invoker_Alacrity, ~CDOTA_Ability_Invoker_InvokedBase
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Invoker_Alacrity::~CDOTA_Ability_Invoker_Alacrity(
        CDOTA_Ability_Invoker_Alacrity *const this)
{
  this->_vptr_IHandleEntity = &off_44F3C70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Invoker_Alacrity::Schema_DynamicBinding  (line 1127, @0x0000000002b91430, libserver.so)
// globals: CDOTA_Ability_Invoker_Alacrity::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_Alacrity::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_Alacrity *const this)
{
  return CDOTA_Ability_Invoker_Alacrity::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_Alacrity::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1127, @0x0000000002b91440, libserver.so)
// globals: CDOTA_Ability_Invoker_Alacrity::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_Alacrity::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_Alacrity::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_Alacrity::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_Alacrity::CEntityInstanceEntityClass::DestructInstance  (line 1127, @0x0000000002b91450, libserver.so)  // inlines: Destruct<CDOTA_Ability_Invoker_Alacrity>
void __fastcall CDOTA_Ability_Invoker_Alacrity::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Invoker_Alacrity::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Invoker_Alacrity::CEntityInstanceEntityClass::FreeInstance  (line 1127, @0x0000000002b91470, libserver.so)
void __fastcall CDOTA_Ability_Invoker_Alacrity::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Invoker_Alacrity::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Invoker_Alacrity::CEntityInstanceEntityClass::CanAllocate  (line 1127, @0x0000000002b91490, libserver.so)
bool __fastcall CDOTA_Ability_Invoker_Alacrity::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Invoker_Alacrity::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Invoker_Alacrity::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1127, @0x0000000002b914a0, libserver.so)
// globals: CDOTA_Ability_Invoker_Alacrity::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Invoker_Alacrity::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Invoker_Alacrity::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_Alacrity::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_Alacrity::CEntityInstanceEntityClass::AllocateInstance  (line 1127, @0x0000000002b981a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Invoker_Alacrity::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Invoker_Alacrity::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_Invoker_Alacrity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1127, @0x0000000002bab060, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Invoker_Alacrity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_Alacrity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Invoker_Alacrity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1127, @0x0000000002bab080, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Invoker_Alacrity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_Alacrity::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Invoker_Alacrity::CEntityInstanceEntityClass::ConstructInstance  (line 1127, @0x0000000002bacff0, libserver.so)  // inlines: CDOTA_Ability_Invoker_Alacrity, CDOTA_Ability_Invoker_InvokedBase, CNetworkVarBase, Construct<CDOTA_Ability_Invoker_Alacrity>, NetworkStateChanged
// calls: CDOTABaseAbility::CDOTABaseAbility, CBaseEntity::NetworkStateChanged, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Ability_Invoker_Alacrity::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Invoker_Alacrity::CEntityInstanceEntityClass *const this,
        void *p)
{
  __int64 v3; // rax
  __int64 v4; // rax

  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44F3C70;
    *(p + 228) = -1;
    CBaseEntity::NetworkStateChanged(p, 0x390u, -1, -1);
    v3 = *p;
    *(p + 229) = -1;
    (*(v3 + 176))(p, 916, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v4 = *p;
    *(p + 230) = -1;
    (*(v4 + 176))(p, 920, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *p = &off_44F8790;
  }
  return p;
}


// CDOTA_Ability_Invoker_Alacrity::GetEntityClassInternal  (line 1127, @0x0000000002bca280, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_Invoker_Alacrity"
// globals: `guard variable for'CDOTA_Ability_Invoker_Alacrity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_AlacrityClass, CDOTA_Ability_Invoker_Alacrity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_AlacrityClass, __dso_handle, CDOTA_Ability_Invoker_Alacrity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Invoker_Alacrity::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_AlacrityClassInfo, CDOTA_Ability_Invoker_Alacrity::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_AlacrityClassInfo
CEntityClass *__cdecl CDOTA_Ability_Invoker_Alacrity::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Invoker_Alacrity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_AlacrityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_Alacrity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_AlacrityClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Invoker_Alacrity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_AlacrityClass);
    CDOTA_Ability_Invoker_Alacrity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_AlacrityClass._vptr_CEntityClass = off_44F8710;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_Alacrity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_AlacrityClass);
    __cxa_atexit(
      CDOTA_Ability_Invoker_Alacrity::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Invoker_Alacrity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_AlacrityClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Invoker_AlacrityClass != 0 )
    return &CDOTA_Ability_Invoker_Alacrity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_AlacrityClass;
  if ( `guard variable for'CDOTA_Ability_Invoker_Alacrity::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_AlacrityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_Alacrity::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_AlacrityClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Invoker_Alacrity::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_AlacrityClassInfo,
      "CDOTA_Ability_Invoker_Alacrity",
      "invoker_alacrity",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_Alacrity::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_AlacrityClassInfo);
  }
  CDOTA_Ability_Invoker_Alacrity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_AlacrityClass.m_pClassInfo = &CDOTA_Ability_Invoker_Alacrity::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_AlacrityClassInfo;
  CDOTA_Ability_Invoker_Alacrity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_AlacrityClass.m_pBaseClassInfo = CDOTA_Ability_Invoker_Alacrity::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_AlacrityClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Invoker_AlacrityClass = &CDOTA_Ability_Invoker_Alacrity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_AlacrityClass;
  CDOTA_Ability_Invoker_Alacrity::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_AlacrityClassInfo.m_pClass = &CDOTA_Ability_Invoker_Alacrity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_AlacrityClass;
  CDOTA_Ability_Invoker_Alacrity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_AlacrityClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Invoker_AlacrityClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Invoker_Alacrity::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_AlacrityClass;
}


// CDOTA_Ability_Invoker_Alacrity::GetAssociatedSecondaryAbilities  (line 1133, @0x0000000002b914b0, libserver.so)
// strings: "invoker_wex;invoker_quas;invoker_exort"
const char *__fastcall CDOTA_Ability_Invoker_Alacrity::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Invoker_Alacrity *const this)
{
  return "invoker_wex;invoker_quas;invoker_exort";
}


// CDOTA_Ability_Invoker_Alacrity::YouForgotToImplementOrDeclareServerClass  (line 1136, @0x0000000002b358c0, libserver.so)
int __fastcall CDOTA_Ability_Invoker_Alacrity::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Invoker_Alacrity *const this)
{
  return 0;
}


// CDOTA_Ability_Invoker_Alacrity::GetServerClass  (line 1136, @0x0000000002b4c6a0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Invoker_Alacrity::GetServerClass(CDOTA_Ability_Invoker_Alacrity *const this)
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


// CDOTA_Ability_Invoker_Alacrity::OnSpellStart  (line 1146, @0x0000000002b749d0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, InState, IsInvulnerable, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCursorTarget, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTA_BaseNPC::StartGesture, CDOTA_BaseNPC::UnitEmitSound, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_invoker_alacrity", "Hero_Invoker.Alacrity"
void __fastcall CDOTA_Ability_Invoker_Alacrity::OnSpellStart(CDOTA_Ability_Invoker_Alacrity *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0
    && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 1) == 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_invoker_alacrity");
    KeyValues::SetFloat(&kv, "duration", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_invoker_alacrity", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v6, 1585, 0.1, 0.1, 9, 0, 1.0);
  v7 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v7, "Hero_Invoker.Alacrity", 0.0, 0, 0);
}


// CDOTA_Modifier_Invoker_Alacrity::~CDOTA_Modifier_Invoker_Alacrity  (line 1169, @0x0000000002b9a230, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Invoker_Alacrity::~CDOTA_Modifier_Invoker_Alacrity(
        CDOTA_Modifier_Invoker_Alacrity *const this)
{
  this->_vptr_CDOTA_Buff = &off_44F9270;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Invoker_Alacrity::~CDOTA_Modifier_Invoker_Alacrity  (line 1169, @0x0000000002b9a250, libserver.so)  // inlines: ~CDOTA_Modifier_Invoker_Alacrity
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Invoker_Alacrity::~CDOTA_Modifier_Invoker_Alacrity(
        CDOTA_Modifier_Invoker_Alacrity *const this)
{
  this->_vptr_CDOTA_Buff = &off_44F9270;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Invoker_Alacrity::GetEffectName  (line 1181, @0x0000000002b914c0, libserver.so)
// strings: "particles/units/heroes/hero_invoker/invoker_alacrity_buff.vpcf"
const char *__fastcall CDOTA_Modifier_Invoker_Alacrity::GetEffectName(CDOTA_Modifier_Invoker_Alacrity *const this)
{
  return "particles/units/heroes/hero_invoker/invoker_alacrity_buff.vpcf";
}


// CDOTA_Modifier_Invoker_Alacrity::GetEffectAttachType  (line 1182, @0x0000000002b914d0, libserver.so)
int __fastcall CDOTA_Modifier_Invoker_Alacrity::GetEffectAttachType(CDOTA_Modifier_Invoker_Alacrity *const this)
{
  return 7;
}


// CDOTA_Modifier_Invoker_Alacrity::ShouldUseOverheadOffset  (line 1183, @0x0000000002b914e0, libserver.so)
bool __fastcall CDOTA_Modifier_Invoker_Alacrity::ShouldUseOverheadOffset(CDOTA_Modifier_Invoker_Alacrity *const this)
{
  return 1;
}


// CDOTA_Modifier_Invoker_Alacrity::GetStatusEffectName  (line 1184, @0x0000000002b914f0, libserver.so)
// strings: "particles/status_fx/status_effect_alacrity.vpcf"
const char *__fastcall CDOTA_Modifier_Invoker_Alacrity::GetStatusEffectName(
        CDOTA_Modifier_Invoker_Alacrity *const this)
{
  return "particles/status_fx/status_effect_alacrity.vpcf";
}


// CDOTA_Modifier_Invoker_Alacrity::StatusEffectPriority  (line 1185, @0x0000000002b91500, libserver.so)
int __fastcall CDOTA_Modifier_Invoker_Alacrity::StatusEffectPriority(CDOTA_Modifier_Invoker_Alacrity *const this)
{
  return 15;
}


// CDOTA_Modifier_Invoker_Alacrity::OnCreated  (line 1197, @0x0000000002b6a5e0, libserver.so)  // inlines: GetExortLevel, GetWexLevel
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Invoker_Alacrity::OnCreated(CDOTA_Modifier_Invoker_Alacrity *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rbx
  CDOTA_BaseNPC *Caster; // rax
  int vptr_IHandleEntity_high; // r14d
  CDOTA_BaseNPC *v7; // rax
  int m_pEntity; // r13d

  Ability = CDOTA_Buff::GetAbility(this);
  v4 = Ability;
  if ( Ability != 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(Ability);
    if ( CDOTA_BaseNPC::HasScepter(Caster) )
      vptr_IHandleEntity_high = HIDWORD(v4[1]._vptr_IHandleEntity) + 1;
    else
      vptr_IHandleEntity_high = HIDWORD(v4[1]._vptr_IHandleEntity);
    v7 = CDOTABaseAbility::GetCaster(v4);
    if ( CDOTA_BaseNPC::HasScepter(v7) )
      m_pEntity = LODWORD(v4[1].m_pEntity) + 1;
    else
      m_pEntity = v4[1].m_pEntity;
    this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                 v4,
                                 "bonus_attack_speed",
                                 vptr_IHandleEntity_high,
                                 0);
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_damage", m_pEntity, 0);
  }
}


// CDOTA_Modifier_Invoker_Alacrity::OnRefresh  (line 1218, @0x0000000002b358d0, libserver.so)
void __fastcall CDOTA_Modifier_Invoker_Alacrity::OnRefresh(CDOTA_Modifier_Invoker_Alacrity *const this, KeyValues *pKV)
{
  (*(this->_vptr_CDOTA_Buff + 57))(this, pKV);
}


// CDOTA_Modifier_Invoker_Alacrity::DeclareFunctions  (line 1225, @0x0000000002b358f0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Invoker_Alacrity::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Invoker_Alacrity::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Invoker_Alacrity::DeclareFunctions(CDOTA_Modifier_Invoker_Alacrity *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_Invoker_Alacrity::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[0].__pfn = CDOTA_Modifier_Invoker_Alacrity::GetModifierPreAttack_BonusDamage;
}


// CDOTA_Modifier_Invoker_Alacrity::GetModifierAttackSpeedBonus_Constant  (line 1233, @0x0000000002b35930, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Invoker_Alacrity::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Invoker_Alacrity *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Invoker_Alacrity::GetModifierPreAttack_BonusDamage  (line 1240, @0x0000000002b35950, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Invoker_Alacrity::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Invoker_Alacrity *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Invoker_ChaosMeteor::~CDOTA_Ability_Invoker_ChaosMeteor  (line 1249, @0x0000000002b9ff50, libserver.so)  // inlines: ~CDOTA_Ability_Invoker_InvokedBase
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Invoker_ChaosMeteor::~CDOTA_Ability_Invoker_ChaosMeteor(
        CDOTA_Ability_Invoker_ChaosMeteor *const this)
{
  this->_vptr_IHandleEntity = &off_44F3C70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Invoker_ChaosMeteor::~CDOTA_Ability_Invoker_ChaosMeteor  (line 1249, @0x0000000002b9ff70, libserver.so)  // inlines: ~CDOTA_Ability_Invoker_ChaosMeteor, ~CDOTA_Ability_Invoker_InvokedBase
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Invoker_ChaosMeteor::~CDOTA_Ability_Invoker_ChaosMeteor(
        CDOTA_Ability_Invoker_ChaosMeteor *const this)
{
  this->_vptr_IHandleEntity = &off_44F3C70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Invoker_ChaosMeteor::Schema_DynamicBinding  (line 1251, @0x0000000002b91510, libserver.so)
// globals: CDOTA_Ability_Invoker_ChaosMeteor::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_ChaosMeteor::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_ChaosMeteor *const this)
{
  return CDOTA_Ability_Invoker_ChaosMeteor::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_ChaosMeteor::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1251, @0x0000000002b91520, libserver.so)
// globals: CDOTA_Ability_Invoker_ChaosMeteor::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_ChaosMeteor::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_ChaosMeteor::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_ChaosMeteor::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_ChaosMeteor::CEntityInstanceEntityClass::DestructInstance  (line 1251, @0x0000000002b91530, libserver.so)  // inlines: Destruct<CDOTA_Ability_Invoker_ChaosMeteor>
void __fastcall CDOTA_Ability_Invoker_ChaosMeteor::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Invoker_ChaosMeteor::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Invoker_ChaosMeteor::CEntityInstanceEntityClass::FreeInstance  (line 1251, @0x0000000002b91550, libserver.so)
void __fastcall CDOTA_Ability_Invoker_ChaosMeteor::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Invoker_ChaosMeteor::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Invoker_ChaosMeteor::CEntityInstanceEntityClass::CanAllocate  (line 1251, @0x0000000002b91570, libserver.so)
bool __fastcall CDOTA_Ability_Invoker_ChaosMeteor::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Invoker_ChaosMeteor::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Invoker_ChaosMeteor::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1251, @0x0000000002b91580, libserver.so)
// globals: CDOTA_Ability_Invoker_ChaosMeteor::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Invoker_ChaosMeteor::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Invoker_ChaosMeteor::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_ChaosMeteor::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_ChaosMeteor::CEntityInstanceEntityClass::AllocateInstance  (line 1251, @0x0000000002b981e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Invoker_ChaosMeteor::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Invoker_ChaosMeteor::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 952);
  memset(v1, 0, 0x3B8u);
  return v1;
}


// CDOTA_Ability_Invoker_ChaosMeteor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1251, @0x0000000002bab0b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Invoker_ChaosMeteor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_ChaosMeteor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Invoker_ChaosMeteor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1251, @0x0000000002bab0d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Invoker_ChaosMeteor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_ChaosMeteor::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Invoker_ChaosMeteor::CEntityInstanceEntityClass::ConstructInstance  (line 1251, @0x0000000002bace70, libserver.so)  // inlines: CDOTA_Ability_Invoker_ChaosMeteor, CDOTA_Ability_Invoker_InvokedBase, CNetworkVarBase, Construct<CDOTA_Ability_Invoker_ChaosMeteor>, NetworkStateChanged
// calls: CDOTABaseAbility::CDOTABaseAbility, CBaseEntity::NetworkStateChanged, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Ability_Invoker_ChaosMeteor::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Invoker_ChaosMeteor::CEntityInstanceEntityClass *const this,
        void *p)
{
  __int64 v3; // rax
  __int64 v4; // rax

  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44F3C70;
    *(p + 228) = -1;
    CBaseEntity::NetworkStateChanged(p, 0x390u, -1, -1);
    v3 = *p;
    *(p + 229) = -1;
    (*(v3 + 176))(p, 916, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v4 = *p;
    *(p + 230) = -1;
    (*(v4 + 176))(p, 920, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *p = &off_44F95D0;
  }
  return p;
}


// CDOTA_Ability_Invoker_ChaosMeteor::GetEntityClassInternal  (line 1251, @0x0000000002bca3d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "invoker_chaos_meteor", "CDOTA_Ability_Invoker_ChaosMeteor"
// globals: `guard variable for'CDOTA_Ability_Invoker_ChaosMeteor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ChaosMeteorClass, CDOTA_Ability_Invoker_ChaosMeteor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ChaosMeteorClass, __dso_handle, CDOTA_Ability_Invoker_ChaosMeteor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Invoker_ChaosMeteor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ChaosMeteorClassInfo, CDOTA_Ability_Invoker_ChaosMeteor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ChaosMeteorClassInfo
CEntityClass *__cdecl CDOTA_Ability_Invoker_ChaosMeteor::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Invoker_ChaosMeteor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ChaosMeteorClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_ChaosMeteor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ChaosMeteorClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Invoker_ChaosMeteor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ChaosMeteorClass);
    CDOTA_Ability_Invoker_ChaosMeteor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ChaosMeteorClass._vptr_CEntityClass = off_44F9550;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_ChaosMeteor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ChaosMeteorClass);
    __cxa_atexit(
      CDOTA_Ability_Invoker_ChaosMeteor::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Invoker_ChaosMeteor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ChaosMeteorClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Invoker_ChaosMeteorClass != 0 )
    return &CDOTA_Ability_Invoker_ChaosMeteor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ChaosMeteorClass;
  if ( `guard variable for'CDOTA_Ability_Invoker_ChaosMeteor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ChaosMeteorClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_ChaosMeteor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ChaosMeteorClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Invoker_ChaosMeteor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ChaosMeteorClassInfo,
      "CDOTA_Ability_Invoker_ChaosMeteor",
      "invoker_chaos_meteor",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_ChaosMeteor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ChaosMeteorClassInfo);
  }
  CDOTA_Ability_Invoker_ChaosMeteor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ChaosMeteorClass.m_pClassInfo = &CDOTA_Ability_Invoker_ChaosMeteor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ChaosMeteorClassInfo;
  CDOTA_Ability_Invoker_ChaosMeteor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ChaosMeteorClass.m_pBaseClassInfo = CDOTA_Ability_Invoker_ChaosMeteor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ChaosMeteorClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Invoker_ChaosMeteorClass = &CDOTA_Ability_Invoker_ChaosMeteor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ChaosMeteorClass;
  CDOTA_Ability_Invoker_ChaosMeteor::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ChaosMeteorClassInfo.m_pClass = &CDOTA_Ability_Invoker_ChaosMeteor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ChaosMeteorClass;
  CDOTA_Ability_Invoker_ChaosMeteor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ChaosMeteorClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Invoker_ChaosMeteorClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Invoker_ChaosMeteor::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ChaosMeteorClass;
}


// CDOTA_Ability_Invoker_ChaosMeteor::GetAssociatedSecondaryAbilities  (line 1258, @0x0000000002b91590, libserver.so)
// strings: "invoker_wex;invoker_quas;invoker_exort"
const char *__fastcall CDOTA_Ability_Invoker_ChaosMeteor::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Invoker_ChaosMeteor *const this)
{
  return "invoker_wex;invoker_quas;invoker_exort";
}


// CDOTA_Ability_Invoker_ChaosMeteor::OnSpellStart  (line 1275, @0x0000000002b7a240, libserver.so)  // inlines: GetExortLevel, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, GetWexLevel, NormalizeInPlace, Vector, VectorAdd, VectorSubtract, operator+, operator-
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorPosition, VectorNormalize, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, Thinker_Create, GetParticleManager (22 total)
// strings: "area_of_effect", "vision_distance", "end_vision_duration", "burn_duration", "main_damage", "burn_dps" (13 total)
void __fastcall CDOTA_Ability_Invoker_ChaosMeteor::OnSpellStart(CDOTA_Ability_Invoker_ChaosMeteor *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  int m_Value; // edx
  CDOTA_BaseNPC *v4; // rax
  int v5; // edx
  __m128i v6; // xmm0
  unsigned int v7; // r15d
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // r12
  vec_t v10; // xmm0_4
  vec_t v11; // xmm1_4
  int LevelSpecialValue; // r14d
  CDOTA_BaseNPC *v13; // rax
  int v14; // edx
  int v15; // r13d
  float v16; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm1_4
  int v19; // eax
  int v20; // r13d
  CDOTA_BaseNPC *v21; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  CDOTA_BaseNPC *v24; // rax
  const Vector *v25; // rax
  float v26; // xmm0_4
  float v27; // xmm2_4
  CDOTA_ParticleManager *v28; // rax
  CDOTA_ParticleManager *v29; // rax
  CDOTA_ParticleManager *v30; // rax
  CDOTA_ParticleManager *v31; // rax
  CDOTA_BaseNPC *v32; // rax
  CDOTA_BaseNPC *v33; // rax
  CDOTA_BaseNPC *v34; // rax
  const QAngle *AbsAngles; // rax
  Vector vDir; // [rsp+10h] [rbp-A0h] BYREF
  double land_time; // [rsp+20h] [rbp-90h]
  float v38; // [rsp+28h] [rbp-88h]
  Vector vOrigin; // [rsp+30h] [rbp-80h]
  double v40; // [rsp+40h] [rbp-70h]
  float v41; // [rsp+48h] [rbp-68h]
  Vector CursorPosition; // [rsp+50h] [rbp-60h]
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v44; // [rsp+78h] [rbp-38h]
  Vector v45; // 0:kr20_12.12

  v44 = __readfsqword(0x28u);
  this->area_of_effect = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "area_of_effect", -1, 0);
  this->damage_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage_interval", -1, 0);
  this->vision_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "vision_distance", -1, 0);
  this->end_vision_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "end_vision_duration", -1, 0);
  this->burn_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "burn_duration", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    m_Value = this->m_nExortLevel.m_Value + 1;
  else
    m_Value = this->m_nExortLevel.m_Value;
  this->main_damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "main_damage", m_Value, 0);
  v4 = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(v4) )
    v5 = this->m_nExortLevel.m_Value + 1;
  else
    v5 = this->m_nExortLevel.m_Value;
  this->burn_dps = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "burn_dps", v5, 0);
  *v6.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "land_time", -1, 0);
  v7 = _mm_cvtsi128_si32(v6);
  v8 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  v10 = CursorPosition.y - AbsOrigin->y;
  v11 = CursorPosition.x - AbsOrigin->x;
  vDir.z = 0.0;
  vDir.y = v10;
  vDir.x = v11;
  if ( VectorNormalize(&vDir) < 0.0099999998 )
  {
    v34 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v34);
    AngleVectors(AbsAngles, &vDir, 0, 0);
  }
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "travel_speed", -1, 0);
  v13 = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(v13) )
    v14 = this->m_nWexLevel.m_Value + 1;
  else
    v14 = this->m_nWexLevel.m_Value;
  v15 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "travel_distance", v14, 0);
  KeyValues::KeyValues(&kv, "modifier_invoker_chaos_meteor_land");
  KeyValues::SetFloat(&kv, "duration", v16);
  KeyValues::SetFloat(&kv, "dir_x", v17);
  KeyValues::SetFloat(&kv, "dir_y", v18);
  KeyValues::SetInt(&kv, "travel_speed", LevelSpecialValue);
  v19 = (*(this->_vptr_IHandleEntity + 228))(this);
  KeyValues::SetInt(&kv, "travel_distance", v15 + v19);
  KeyValues::SetInt(&kv, "vision_distance", this->vision_distance);
  v20 = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  vOrigin = CDOTABaseAbility::GetCursorPosition(this);
  v21 = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(v21, this, "modifier_invoker_chaos_meteor_land", &kv, vOrigin, v20, 0, 0, 0);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_invoker/invoker_chaos_meteor_fly.vpcf",
               2,
               0,
               0,
               0);
  v24 = CDOTABaseAbility::GetCaster(this);
  v25 = CBaseEntity::GetAbsOrigin(v24);
  v26 = v25->z + 1100.0;
  v27 = v25->x + 0.0;
  *(&v40 + 1) = v25->y + 0.0;
  v41 = v26;
  *&v40 = v27;
  v28 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v28, Particle, 0, v40, v41);
  v45 = CDOTABaseAbility::GetCursorPosition(this);
  land_time = *&v45.x;
  CursorPosition.y = v45.y + 0.0;
  CursorPosition.z = v45.z + 90.0;
  CursorPosition.x = v45.x + 0.0;
  v29 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v29, Particle, 1, *&CursorPosition.x, CursorPosition.z);
  *&land_time = v7;
  v38 = 0.0;
  v30 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v30, Particle, 2, land_time, v38);
  v31 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v31, Particle);
  v32 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v32, 1586, 0.1, 0.1, 9, 0, 1.0);
  v33 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v33, "Hero_Invoker.ChaosMeteor.Cast", 0.0, 0, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Invoker_ChaosMeteor::OnProjectileThink_ExtraData  (line 1327, @0x0000000002b60480, libserver.so)  // inlines: AllocateData, CSosFieldData, CSosFieldDataFloat3, CUtlMemory, CUtlVector, CUtlVectorBase, ClearData, DOTAGameRules, Get, GetDataPtr, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetTeamNumber, IndexToIdentity, Init, IsValid, LookupEntity, SetValue, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CDOTAPASFilter, ~CPASFilter, ~CSosFieldData, ~CSosFieldDataFloat3, ~CUtlVector
// calls: KeyValues::GetFloat, KeyValues::SetFloat, KeyValues::GetInt, CDOTABaseAbility::GetCaster, CDOTAPASFilter::CDOTAPASFilter, operator delete [], operator new [], CSoundOpGameSystem::SetSoundEventParam, FindUnitsInRadius, ApplyDamage, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier (18 total)
// strings: "flNextThinkTime", "sound_id", "modifier_invoker_chaos_meteor_burn", "burn_dps"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Invoker_ChaosMeteor::OnProjectileThink_ExtraData(
        CDOTA_Ability_Invoker_ChaosMeteor *const this,
        const Vector *const vLocation,
        KeyValues *pExtraData)
{
  float v3; // xmm1_4
  float Float; // xmm0_4
  float v8; // xmm1_4
  int Int; // r13d
  CDOTA_BaseNPC *Caster; // rax
  vec_t x; // r14d
  vec_t y; // r15d
  SosFieldValueMem_t *v13; // rax
  SndOpEventGuid_t v14; // rdx
  __m128i v15; // xmm5
  float v16; // r13d
  CDOTA_BaseNPC *v17; // r14
  CDOTA_BaseNPC *v18; // rax
  __int64 v19; // r13
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTA_BaseNPC *v21; // rax
  float v22; // xmm1_4
  float v23; // xmm1_4
  CDOTA_BaseNPC *v24; // rax
  CHandle<CBaseEntity> *v25; // rdx
  uint32 m_Index; // eax
  __int16 v27; // cx
  CEntityIdentity *v28; // rdx
  CEntityIdentity *v29; // rdx
  vec_t flDamage; // [rsp+2Ch] [rbp-1D4h]
  float flDamagea; // [rsp+2Ch] [rbp-1D4h]
  CSosFieldData fieldData; // [rsp+30h] [rbp-1D0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+50h] [rbp-1B0h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-190h] BYREF
  CDOTAPASFilter filter; // [rsp+90h] [rbp-170h] BYREF
  unsigned __int64 v36; // [rsp+1C8h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  if ( pExtraData != 0 )
  {
    Float = KeyValues::GetFloat(pExtraData, "flNextThinkTime", v3);
    v8 = 0.0;
    if ( g_pGameRules != 0 )
      v8 = *&g_pGameRules[18].m_szQuestName[20];
    if ( Float <= v8 )
    {
      KeyValues::SetFloat(pExtraData, "flNextThinkTime", v8);
      Int = KeyValues::GetInt(pExtraData, "sound_id", 0);
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTAPASFilter::CDOTAPASFilter(&filter, Caster);
      fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_INVALID;
      x = vLocation->x;
      fieldData.m_nAllocSize = 0;
      fieldData.m_pData = 0;
      y = vLocation->y;
      flDamage = vLocation->z;
      fieldData.m_nFieldDataSize = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 10);
      fieldData.m_fieldDataType = SOFieldDataType_t::SOFTYPE_FLOAT_3;
      v13 = operator new[](0xCu);
      fieldData.m_pData = v13;
      fieldData.m_nAllocSize = 12;
      *v13 = x;
      *(v13 + 1) = y;
      *(v13 + 2) = flDamage;
      v14 = (*&Int | 0xFFFFFFFF00000000LL);
      CSoundOpGameSystem::SetSoundEventParam(g_pSoundOpGameSystem, &filter, v14, "position", &fieldData, 0, 0);
      if ( fieldData.m_nAllocSize > 8 && fieldData.m_pData != 0 )
        operator delete[](fieldData.m_pData);
      *v15.m128i_i32 = this->area_of_effect;
      entities.m_Size = 0;
      entities.m_Memory.m_pMemory = 0;
      entities.m_Memory.m_nAllocationCount = 0;
      entities.m_Memory.m_nGrowSize = 0;
      v16 = COERCE_FLOAT(_mm_cvtsi128_si32(v15));
      v17 = CDOTABaseAbility::GetCaster(this);
      v18 = CDOTABaseAbility::GetCaster(this);
      FindUnitsInRadius(v18->m_iTeamNum.m_Value, vLocation, v17, v16, &entities, 2, 3, 0, 0, 0);
      if ( entities.m_Size > 0 )
      {
        v19 = 0;
        do
        {
          v25 = &entities.m_Memory.m_pMemory[v19];
          m_Index = v25->m_Index;
          if ( v25->m_Index + 2 <= 1
            || (v27 = v25->m_Index,
                (v28 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v25->m_Index) >> 9) & 0x3F]) == 0)
            || (v29 = &v28[v27 & 0x1FF]) == 0
            || m_Index != v29->m_EHandle.m_Index
            || (m_pInstance = v29->m_pInstance, v29->m_pInstance == 0)
            || !m_pInstance->m_bIsDOTANPC )
          {
            m_pInstance = 0;
          }
          flDamagea = this->main_damage;
          v21 = CDOTABaseAbility::GetCaster(this);
          ApplyDamage(v21, m_pInstance, this, flDamagea, 2, 0);
          KeyValues::KeyValues(&kv, "modifier_invoker_chaos_meteor_burn");
          KeyValues::SetFloat(&kv, "duration", v22);
          KeyValues::SetFloat(&kv, "burn_dps", v23);
          v24 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(m_pInstance, v24, this, "modifier_invoker_chaos_meteor_burn", &kv, 0);
          KeyValues::~KeyValues(&kv);
          ++v19;
        }
        while ( entities.m_Size > v19 );
      }
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
      filter._vptr_IRecipientFilter = &off_3FCB190;
      CRecipientFilter::~CRecipientFilter(&filter);
    }
  }
}


// CDOTA_Ability_Invoker_ChaosMeteor::OnProjectileHit_ExtraData  (line 1376, @0x0000000002b4dd20, libserver.so)  // inlines: GetTeamNumber
// calls: CDOTABaseAbility::GetCaster, CDOTAFogOfWarSystem::AddTempViewer, KeyValues::GetInt, CSoundOpGameSystem::StopSoundEvent
// strings: "sound_id"
__int64 __fastcall CDOTA_Ability_Invoker_ChaosMeteor::OnProjectileHit_ExtraData(
        CDOTA_Ability_Invoker_ChaosMeteor *const this,
        EHANDLE hTarget,
        const CFieldPath *vLocation,
        KeyValues *pExtraData)
{
  CDOTA_BaseNPC *Caster; // rax
  float flDuration; // [rsp+8h] [rbp-28h]
  float flRadius; // [rsp+Ch] [rbp-24h]
  SndOpEventGuid_t nGuid; // [rsp+10h] [rbp-20h] BYREF

  flDuration = this->end_vision_duration;
  flRadius = this->vision_distance;
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_CHAOSMETEOR,
    Caster->m_iTeamNum.m_Value,
    vLocation,
    flRadius,
    flDuration,
    0);
  nGuid.m_hStackHash = -1;
  nGuid.m_nGuid.m_Data = KeyValues::GetInt(pExtraData, "sound_id", 0);
  CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, &nGuid);
  return 0;
}


// CDOTA_Modifier_Invoker_ChaosMeteor_Land::~CDOTA_Modifier_Invoker_ChaosMeteor_Land  (line 1411, @0x0000000002b9a1e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Invoker_ChaosMeteor_Land::~CDOTA_Modifier_Invoker_ChaosMeteor_Land(
        CDOTA_Modifier_Invoker_ChaosMeteor_Land *const this)
{
  this->_vptr_CDOTA_Buff = &off_44FA0B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Invoker_ChaosMeteor_Land::~CDOTA_Modifier_Invoker_ChaosMeteor_Land  (line 1411, @0x0000000002b9a200, libserver.so)  // inlines: ~CDOTA_Modifier_Invoker_ChaosMeteor_Land
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Invoker_ChaosMeteor_Land::~CDOTA_Modifier_Invoker_ChaosMeteor_Land(
        CDOTA_Modifier_Invoker_ChaosMeteor_Land *const this)
{
  this->_vptr_CDOTA_Buff = &off_44FA0B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Invoker_ChaosMeteor_Land::OnCreated  (line 1434, @0x0000000002b37bf0, libserver.so)
// calls: KeyValues::GetFloat, KeyValues::GetInt, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::UnitEmitSound
// strings: "dir_x", "dir_y", "travel_distance", "vision_distance", "Hero_Invoker.ChaosMeteor.Loop"
void __fastcall CDOTA_Modifier_Invoker_ChaosMeteor_Land::OnCreated(
        CDOTA_Modifier_Invoker_ChaosMeteor_Land *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4
  float v5; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax

  this->m_vDir.x = KeyValues::GetFloat(pKV, "dir_x", v2);
  this->m_vDir.y = KeyValues::GetFloat(pKV, "dir_y", v5);
  this->m_vDir.z = 0.0;
  this->travel_speed = KeyValues::GetInt(pKV, "travel_speed", 0);
  this->travel_distance = KeyValues::GetInt(pKV, "travel_distance", 0);
  this->vision_distance = KeyValues::GetInt(pKV, "vision_distance", 0);
  Caster = CDOTA_Buff::GetCaster(this);
  this->m_nSoundId = CDOTA_BaseNPC::UnitEmitSound(Caster, "Hero_Invoker.ChaosMeteor.Loop", 0.0, 0, 0);
}


// CDOTA_Modifier_Invoker_ChaosMeteor_Land::OnDestroy  (line 1453, @0x0000000002b42d20, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, GetTeamNumber, Set, VectorMultiply, operator*, operator=, sLinearProjectileCreateInfo
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, KeyValues::KeyValues, KeyValues::SetInt, CDOTA_ProjectileManager::CreateLinearProjectile, DOTA_EmitSoundLocationWithCaster, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "particles/units/heroes/hero_invoker/invoker_chaos_meteor.vpcf", "meteor_projectile_extra", "sound_id", "Hero_Invoker.ChaosMeteor.Impact"
void __fastcall CDOTA_Modifier_Invoker_ChaosMeteor_Land::OnDestroy(CDOTA_Modifier_Invoker_ChaosMeteor_Land *const this)
{
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax
  Vector *AbsOrigin; // rax
  float v6; // xmm2_4
  float v7; // xmm1_4
  float travel_speed; // xmm0_4
  vec_t v9; // xmm2_4
  vec_t v10; // xmm1_4
  vec_t v11; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v14; // cx
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  Vector vPos; // [rsp+0h] [rbp-C0h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+10h] [rbp-B0h] BYREF
  KeyValues kv; // [rsp+90h] [rbp-30h] BYREF
  unsigned __int64 v20; // [rsp+A8h] [rbp-18h]

  info.hSource.m_Index = -1;
  v20 = __readfsqword(0x28u);
  info.pAbility = 0;
  info.fDistance = 0.0;
  info.fStartRadius = 0.0;
  info.fEndRadius = 0.0;
  info.bHasFrontalCone = 1;
  y = vec3_origin.y;
  info.bCheckStartPosition = 0;
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
  info.pszEffectName = "particles/units/heroes/hero_invoker/invoker_chaos_meteor.vpcf";
  info.bStickyFoWReveal = 1;
  info.pAbility = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v6 = this->m_vDir.y;
  v7 = this->m_vDir.z;
  info.vSpawnOrigin = *AbsOrigin;
  travel_speed = this->travel_speed;
  v9 = v6 * travel_speed;
  v10 = v7 * travel_speed;
  v11 = travel_speed * this->m_vDir.x;
  info.vVelocity.y = v9;
  info.vVelocity.z = v10;
  info.vVelocity.x = v11;
  info.fDistance = this->travel_distance;
  Caster = CDOTA_Buff::GetCaster(this);
  if ( Caster != 0 && (m_pEntity = Caster->m_pEntity) != 0 )
  {
    v14 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v14 & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  info.bHasFrontalCone = 0;
  info.bProvidesVision = 1;
  info.iVisionTeamNumber = CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value;
  info.iVisionRadius = this->vision_distance;
  KeyValues::KeyValues(&kv, "meteor_projectile_extra");
  KeyValues::SetInt(&kv, "sound_id", this->m_nSoundId.m_nGuid.m_Data);
  info.pKVExtraData = &kv;
  CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  v15 = CDOTA_Buff::GetParent(this);
  vPos = *CBaseEntity::GetAbsOrigin(v15);
  v16 = CDOTA_Buff::GetCaster(this);
  DOTA_EmitSoundLocationWithCaster(&vPos, "Hero_Invoker.ChaosMeteor.Impact", v16);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Invoker_ChaosMeteor_Burn::~CDOTA_Modifier_Invoker_ChaosMeteor_Burn  (line 1494, @0x0000000002b9a190, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Invoker_ChaosMeteor_Burn::~CDOTA_Modifier_Invoker_ChaosMeteor_Burn(
        CDOTA_Modifier_Invoker_ChaosMeteor_Burn *const this)
{
  this->_vptr_CDOTA_Buff = &off_44FA3D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Invoker_ChaosMeteor_Burn::~CDOTA_Modifier_Invoker_ChaosMeteor_Burn  (line 1494, @0x0000000002b9a1b0, libserver.so)  // inlines: ~CDOTA_Modifier_Invoker_ChaosMeteor_Burn
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Invoker_ChaosMeteor_Burn::~CDOTA_Modifier_Invoker_ChaosMeteor_Burn(
        CDOTA_Modifier_Invoker_ChaosMeteor_Burn *const this)
{
  this->_vptr_CDOTA_Buff = &off_44FA3D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Invoker_ChaosMeteor_Burn::GetEffectName  (line 1503, @0x0000000002b915a0, libserver.so)
// strings: "particles/units/heroes/hero_invoker/invoker_chaos_meteor_burn_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Invoker_ChaosMeteor_Burn::GetEffectName(
        CDOTA_Modifier_Invoker_ChaosMeteor_Burn *const this)
{
  return "particles/units/heroes/hero_invoker/invoker_chaos_meteor_burn_debuff.vpcf";
}


// CDOTA_Modifier_Invoker_ChaosMeteor_Burn::GetStatusEffectName  (line 1504, @0x0000000002b915b0, libserver.so)
// strings: "particles/status_fx/status_effect_burn.vpcf"
const char *__fastcall CDOTA_Modifier_Invoker_ChaosMeteor_Burn::GetStatusEffectName(
        CDOTA_Modifier_Invoker_ChaosMeteor_Burn *const this)
{
  return "particles/status_fx/status_effect_burn.vpcf";
}


// CDOTA_Modifier_Invoker_ChaosMeteor_Burn::StatusEffectPriority  (line 1505, @0x0000000002b915c0, libserver.so)
int __fastcall CDOTA_Modifier_Invoker_ChaosMeteor_Burn::StatusEffectPriority(
        CDOTA_Modifier_Invoker_ChaosMeteor_Burn *const this)
{
  return 30;
}


// CDOTA_Modifier_Invoker_ChaosMeteor_Burn::GetAttributes  (line 1506, @0x0000000002b915d0, libserver.so)
int __fastcall CDOTA_Modifier_Invoker_ChaosMeteor_Burn::GetAttributes(
        CDOTA_Modifier_Invoker_ChaosMeteor_Burn *const this)
{
  return 2;
}


// CDOTA_Modifier_Invoker_ChaosMeteor_Burn::IsHidden  (line 1507, @0x0000000002b915e0, libserver.so)
bool __fastcall CDOTA_Modifier_Invoker_ChaosMeteor_Burn::IsHidden(CDOTA_Modifier_Invoker_ChaosMeteor_Burn *const this)
{
  return 0;
}


// CDOTA_Modifier_Invoker_ChaosMeteor_Burn::OnCreated  (line 1520, @0x0000000002b370c0, libserver.so)
// calls: KeyValues::GetFloat, CDOTA_Buff::StartIntervalThink
// strings: "burn_dps"
void __fastcall CDOTA_Modifier_Invoker_ChaosMeteor_Burn::OnCreated(
        CDOTA_Modifier_Invoker_ChaosMeteor_Burn *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4
  float v4; // xmm1_4

  this->m_flDamagePerSecond = KeyValues::GetFloat(pKV, "burn_dps", v2);
  CDOTA_Buff::StartIntervalThink(this, 1.0, v4);
}


// CDOTA_Modifier_Invoker_ChaosMeteor_Burn::OnIntervalThink  (line 1531, @0x0000000002b37a50, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage, CBaseEntity::EmitSound
// strings: "Hero_Invoker.ChaosMeteor.Damage"
void __fastcall CDOTA_Modifier_Invoker_ChaosMeteor_Burn::OnIntervalThink(
        CDOTA_Modifier_Invoker_ChaosMeteor_Burn *const this)
{
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // rax
  float flDamage; // [rsp+Ch] [rbp-24h]

  flDamage = this->m_flDamagePerSecond;
  Ability = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, Ability, flDamage, 2, 0);
  v5 = CDOTA_Buff::GetParent(this);
  CBaseEntity::EmitSound(v5, "Hero_Invoker.ChaosMeteor.Damage", 0.0, 0);
}


// CDOTA_Ability_Invoker_SunStrike::~CDOTA_Ability_Invoker_SunStrike  (line 1547, @0x0000000002b9ffa0, libserver.so)  // inlines: ~CDOTA_Ability_Invoker_InvokedBase
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Invoker_SunStrike::~CDOTA_Ability_Invoker_SunStrike(
        CDOTA_Ability_Invoker_SunStrike *const this)
{
  this->_vptr_IHandleEntity = &off_44F3C70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Invoker_SunStrike::~CDOTA_Ability_Invoker_SunStrike  (line 1547, @0x0000000002b9ffc0, libserver.so)  // inlines: ~CDOTA_Ability_Invoker_InvokedBase, ~CDOTA_Ability_Invoker_SunStrike
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Invoker_SunStrike::~CDOTA_Ability_Invoker_SunStrike(
        CDOTA_Ability_Invoker_SunStrike *const this)
{
  this->_vptr_IHandleEntity = &off_44F3C70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Invoker_SunStrike::Schema_DynamicBinding  (line 1549, @0x0000000002b915f0, libserver.so)
// globals: CDOTA_Ability_Invoker_SunStrike::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_SunStrike::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_SunStrike *const this)
{
  return CDOTA_Ability_Invoker_SunStrike::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_SunStrike::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1549, @0x0000000002b91600, libserver.so)
// globals: CDOTA_Ability_Invoker_SunStrike::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_SunStrike::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_SunStrike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_SunStrike::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_SunStrike::CEntityInstanceEntityClass::DestructInstance  (line 1549, @0x0000000002b91610, libserver.so)  // inlines: Destruct<CDOTA_Ability_Invoker_SunStrike>
void __fastcall CDOTA_Ability_Invoker_SunStrike::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Invoker_SunStrike::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Invoker_SunStrike::CEntityInstanceEntityClass::FreeInstance  (line 1549, @0x0000000002b91630, libserver.so)
void __fastcall CDOTA_Ability_Invoker_SunStrike::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Invoker_SunStrike::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Invoker_SunStrike::CEntityInstanceEntityClass::CanAllocate  (line 1549, @0x0000000002b91650, libserver.so)
bool __fastcall CDOTA_Ability_Invoker_SunStrike::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Invoker_SunStrike::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Invoker_SunStrike::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1549, @0x0000000002b91660, libserver.so)
// globals: CDOTA_Ability_Invoker_SunStrike::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Invoker_SunStrike::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Invoker_SunStrike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_SunStrike::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_SunStrike::CEntityInstanceEntityClass::AllocateInstance  (line 1549, @0x0000000002b98220, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Invoker_SunStrike::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Invoker_SunStrike::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_Invoker_SunStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1549, @0x0000000002bab100, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Invoker_SunStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_SunStrike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Invoker_SunStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1549, @0x0000000002bab120, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Invoker_SunStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_SunStrike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Invoker_SunStrike::CEntityInstanceEntityClass::ConstructInstance  (line 1549, @0x0000000002bacb80, libserver.so)  // inlines: CDOTA_Ability_Invoker_InvokedBase, CDOTA_Ability_Invoker_SunStrike, CNetworkVarBase, Construct<CDOTA_Ability_Invoker_SunStrike>, NetworkStateChanged
// calls: CDOTABaseAbility::CDOTABaseAbility, CBaseEntity::NetworkStateChanged, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Ability_Invoker_SunStrike::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Invoker_SunStrike::CEntityInstanceEntityClass *const this,
        void *p)
{
  __int64 v3; // rax
  __int64 v4; // rax

  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44F3C70;
    *(p + 228) = -1;
    CBaseEntity::NetworkStateChanged(p, 0x390u, -1, -1);
    v3 = *p;
    *(p + 229) = -1;
    (*(v3 + 176))(p, 916, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v4 = *p;
    *(p + 230) = -1;
    (*(v4 + 176))(p, 920, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *p = &off_44FA730;
  }
  return p;
}


// CDOTA_Ability_Invoker_SunStrike::GetEntityClassInternal  (line 1549, @0x0000000002bca520, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_Invoker_SunStrike"
// globals: `guard variable for'CDOTA_Ability_Invoker_SunStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_SunStrikeClass, CDOTA_Ability_Invoker_SunStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_SunStrikeClass, __dso_handle, CDOTA_Ability_Invoker_SunStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Invoker_SunStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_SunStrikeClassInfo, CDOTA_Ability_Invoker_SunStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_SunStrikeClassInfo
CEntityClass *__cdecl CDOTA_Ability_Invoker_SunStrike::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Invoker_SunStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_SunStrikeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_SunStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_SunStrikeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Invoker_SunStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_SunStrikeClass);
    CDOTA_Ability_Invoker_SunStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_SunStrikeClass._vptr_CEntityClass = off_44FA6B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_SunStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_SunStrikeClass);
    __cxa_atexit(
      CDOTA_Ability_Invoker_SunStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Invoker_SunStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_SunStrikeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Invoker_SunStrikeClass != 0 )
    return &CDOTA_Ability_Invoker_SunStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_SunStrikeClass;
  if ( `guard variable for'CDOTA_Ability_Invoker_SunStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_SunStrikeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_SunStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_SunStrikeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Invoker_SunStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_SunStrikeClassInfo,
      "CDOTA_Ability_Invoker_SunStrike",
      "invoker_sun_strike",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_SunStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_SunStrikeClassInfo);
  }
  CDOTA_Ability_Invoker_SunStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_SunStrikeClass.m_pClassInfo = &CDOTA_Ability_Invoker_SunStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_SunStrikeClassInfo;
  CDOTA_Ability_Invoker_SunStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_SunStrikeClass.m_pBaseClassInfo = CDOTA_Ability_Invoker_SunStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_SunStrikeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Invoker_SunStrikeClass = &CDOTA_Ability_Invoker_SunStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_SunStrikeClass;
  CDOTA_Ability_Invoker_SunStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_SunStrikeClassInfo.m_pClass = &CDOTA_Ability_Invoker_SunStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_SunStrikeClass;
  CDOTA_Ability_Invoker_SunStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_SunStrikeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Invoker_SunStrikeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Invoker_SunStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_SunStrikeClass;
}


// CDOTA_Ability_Invoker_SunStrike::GetAssociatedSecondaryAbilities  (line 1555, @0x0000000002b91670, libserver.so)
// strings: "invoker_wex;invoker_quas;invoker_exort"
const char *__fastcall CDOTA_Ability_Invoker_SunStrike::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Invoker_SunStrike *const this)
{
  return "invoker_wex;invoker_quas;invoker_exort";
}


// CDOTA_Ability_Invoker_SunStrike::YouForgotToImplementOrDeclareServerClass  (line 1562, @0x0000000002b35970, libserver.so)
int __fastcall CDOTA_Ability_Invoker_SunStrike::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Invoker_SunStrike *const this)
{
  return 0;
}


// CDOTA_Ability_Invoker_SunStrike::GetServerClass  (line 1562, @0x0000000002b4cc20, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Invoker_SunStrike::GetServerClass(CDOTA_Ability_Invoker_SunStrike *const this)
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


// CDOTA_Ability_Invoker_SunStrike::OnSpellStart  (line 1571, @0x0000000002b779b0, libserver.so)  // inlines: GetExortLevel, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, CDOTABaseAbility::GetCursorPosition, Thinker_Create, CDOTA_BaseNPC::StartGesture, CDOTAFogOfWarSystem::AddTempViewer, KeyValues::~KeyValues (14 total)
// strings: "area_of_effect", "vision_distance", "modifier_invoker_sun_strike"
void __fastcall CDOTA_Ability_Invoker_SunStrike::OnSpellStart(CDOTA_Ability_Invoker_SunStrike *const this)
{
  int LevelSpecialValue; // r15d
  int v3; // r13d
  CDOTA_BaseNPC *Caster; // rax
  int m_Value; // edx
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  int v9; // r14d
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  __m128i v12; // xmm4
  float v13; // r13d
  CDOTA_BaseNPC *v14; // rax
  float vision_duration; // [rsp+18h] [rbp-78h]
  float delay; // [rsp+1Ch] [rbp-74h]
  Vector vLocation; // [rsp+20h] [rbp-70h] BYREF
  Vector vOrigin; // [rsp+30h] [rbp-60h]
  KeyValues kv; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  delay = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "delay", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "area_of_effect", -1, 0);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "vision_distance", -1, 0);
  vision_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "vision_duration", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    m_Value = this->m_nExortLevel.m_Value + 1;
  else
    m_Value = this->m_nExortLevel.m_Value;
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage", m_Value, 0);
  KeyValues::KeyValues(&kv, "modifier_invoker_sun_strike");
  KeyValues::SetFloat(&kv, "duration", v6);
  KeyValues::SetInt(&kv, "area_of_effect", LevelSpecialValue);
  KeyValues::SetFloat(&kv, "damage", v7);
  KeyValues::SetInt(&kv, "vision_distance", v3);
  KeyValues::SetFloat(&kv, "vision_duration", v8);
  v9 = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  vOrigin = CDOTABaseAbility::GetCursorPosition(this);
  v10 = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(v10, this, "modifier_invoker_sun_strike", &kv, vOrigin, v9, 0, 1, 0);
  v11 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v11, 1587, 0.1, 0.1, 9, 0, 1.0);
  *v12.m128i_i32 = v3;
  v13 = COERCE_FLOAT(_mm_cvtsi128_si32(v12));
  vLocation = CDOTABaseAbility::GetCursorPosition(this);
  v14 = CDOTABaseAbility::GetCaster(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_SUNSTRIKE,
    v14->m_iTeamNum.m_Value,
    &vLocation,
    v13,
    delay + vision_duration,
    0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Invoker_SunStrike::~CDOTA_Modifier_Invoker_SunStrike  (line 1610, @0x0000000002b9a140, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Invoker_SunStrike::~CDOTA_Modifier_Invoker_SunStrike(
        CDOTA_Modifier_Invoker_SunStrike *const this)
{
  this->_vptr_CDOTA_Buff = &off_44FB210;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Invoker_SunStrike::~CDOTA_Modifier_Invoker_SunStrike  (line 1610, @0x0000000002b9a160, libserver.so)  // inlines: ~CDOTA_Modifier_Invoker_SunStrike
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Invoker_SunStrike::~CDOTA_Modifier_Invoker_SunStrike(
        CDOTA_Modifier_Invoker_SunStrike *const this)
{
  this->_vptr_CDOTA_Buff = &off_44FB210;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Invoker_SunStrike::OnCreated  (line 1632, @0x0000000002b5ecc0, libserver.so)  // inlines: CEntityIndex, CPASAttenuationFilter, CPASFilter, CUtlMemory, CUtlVector, CUtlVectorBase, EmitSound_t, Purge, RemoveAll, SoundEventGuid_t, ~CPASAttenuationFilter, ~CPASFilter, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase, ~EmitSound_t
// calls: KeyValues::GetInt, KeyValues::GetFloat, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddRecipientsByPAS, CPASAttenuationFilter::Filter, CDOTA_Buff::GetCaster, CBaseEntity::GetTeam, CRecipientFilter::RemoveRecipientsNotOnTeam, GetGlobalTeam, CRecipientFilter::AddRecipientsByTeam (19 total)
// strings: "area_of_effect", "vision_distance", "Hero_Invoker.SunStrike.Charge"
void __fastcall CDOTA_Modifier_Invoker_SunStrike::OnCreated(
        CDOTA_Modifier_Invoker_SunStrike *const this,
        KeyValues *pKV)
{
  float v4; // xmm1_4
  float v5; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax
  float v7; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CTeam *Team; // rax
  CTeam *GlobalTeam; // rax
  CDOTA_BaseNPC *v11; // rax
  Vector vPos; // [rsp+0h] [rbp-1D0h] BYREF
  EmitSound_t ep; // [rsp+10h] [rbp-1C0h] BYREF
  CPASAttenuationFilter filter; // [rsp+70h] [rbp-160h] BYREF
  unsigned __int64 v15; // [rsp+1A8h] [rbp-28h]

  v15 = __readfsqword(0x28u);
  this->area_of_effect = KeyValues::GetInt(pKV, "area_of_effect", 0);
  this->damage = KeyValues::GetFloat(pKV, "damage", v4);
  this->vision_distance = KeyValues::GetInt(pKV, "vision_distance", 0);
  this->vision_duration = KeyValues::GetFloat(pKV, "vision_duration", v5);
  Parent = CDOTA_Buff::GetParent(this);
  vPos = *CBaseEntity::GetAbsOrigin(Parent);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::AddRecipientsByPAS(&filter, &vPos);
  filter._vptr_IRecipientFilter = &off_3FECD70;
  CPASAttenuationFilter::Filter(&filter, &vPos, 0.80000001, v7);
  Caster = CDOTA_Buff::GetCaster(this);
  Team = CBaseEntity::GetTeam(Caster);
  CRecipientFilter::RemoveRecipientsNotOnTeam(&filter, Team);
  GlobalTeam = GetGlobalTeam(1);
  CRecipientFilter::AddRecipientsByTeam(&filter, GlobalTeam);
  ep.m_pSoundName = 0;
  ep.m_flVolume = 1.0;
  ep.m_SoundLevel = soundlevel_t::SNDLVL_NONE;
  ep.m_nFlags = 0;
  ep.m_nPitch = 100;
  ep.m_pOrigin = 0;
  ep.m_flSoundTime = 0.0;
  ep.m_pflSoundDuration = 0;
  ep.m_bEmitCloseCaption = 1;
  ep.m_bWarnOnMissingCloseCaption = 0;
  ep.m_bWarnOnDirectWaveReference = 0;
  ep.m_nSpeakerEntity.m_Data = -1;
  ep.m_UtlVecSoundOrigin.m_Size = 0;
  memset(&ep.m_UtlVecSoundOrigin.m_Memory, 0, 21);
  ep.m_nChannel = 6;
  v11 = CDOTA_Buff::GetCaster(this);
  ep.m_pSoundName = CDOTA_BaseNPC::FindReplacementSound(v11, "Hero_Invoker.SunStrike.Charge");
  ep.m_pOrigin = &vPos;
  CBaseEntity::EmitSound(&filter, 0, &ep);
  ep.m_UtlVecSoundOrigin.m_Size = 0;
  if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
    if ( (ep.m_UtlVecSoundOrigin.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&ep.m_UtlVecSoundOrigin.m_Memory);
  }
  filter._vptr_IRecipientFilter = &off_3FCB190;
  CRecipientFilter::~CRecipientFilter(&filter);
}


// CDOTA_Modifier_Invoker_SunStrike::OnDestroy  (line 1668, @0x0000000002b608f0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector, entindex, operator CBaseEntity*, operator CEntityInstance*, operator->, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSoundLocationWithCaster, FindUnitsInRadius, CEntityHandle::operator CEntityInstance*, CEntityInstance::GetEntityIndex, CreateUnitEvent (18 total)
// strings: "particles/units/heroes/hero_invoker/invoker_sun_strike.vpcf", "Hero_Invoker.SunStrike.Ignite"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_Invoker_SunStrike::OnDestroy(CDOTA_Modifier_Invoker_SunStrike *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_ParticleManager *v7; // rax
  unsigned int v8; // xmm0_4
  CDOTA_ParticleManager *v9; // rax
  CDOTA_ParticleManager *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  int area_of_effect; // eax
  __m128i v14; // xmm3
  float v15; // r13d
  CDOTA_BaseNPC *v16; // r12
  CDOTA_BaseNPC *v17; // rax
  CEntityInstance *v18; // rax
  CEntityIndex v19; // eax
  __m128i v20; // xmm4
  float v21; // r13d
  CDOTA_BaseNPC *v22; // r12
  CDOTA_BaseNPC *v23; // rax
  __int64 v24; // r13
  int v25; // r12d
  CHandle<CBaseEntity> *v26; // rdx
  uint32 m_Index; // eax
  __int16 v28; // cx
  CEntityIdentity *v29; // rdx
  CEntityIdentity *v30; // rdx
  CEntityInstance *m_pInstance; // rbx
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v33; // rax
  double v34; // xmm0_8
  CDOTA_BaseNPC_Hero *v35; // r15
  CDOTA_BaseNPC *v36; // rax
  CDOTA_BaseNPC_Hero *v37; // rdi
  float flDamagePerEnemy; // [rsp+2Ch] [rbp-74h]
  Vector vLocation; // [rsp+30h] [rbp-70h] BYREF
  Vector vPos; // [rsp+40h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+50h] [rbp-50h] BYREF

  Parent = CDOTA_Buff::GetParent(this);
  vLocation = *CBaseEntity::GetAbsOrigin(Parent);
  Caster = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_invoker/invoker_sun_strike.vpcf",
                      2,
                      0,
                      0,
                      Caster);
  v5 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v7, Caster, 0, *&AbsOrigin->x, AbsOrigin->z);
  *&v8 = this->area_of_effect;
  LODWORD(entities.m_Memory.m_pMemory) = 1065353216;
  *&entities.m_Size = v8 | 0x3F80000000000000LL;
  v9 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v9, Caster, 1, *&entities.m_Size, 1.0);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v10, Caster);
  v11 = CDOTA_Buff::GetParent(this);
  vPos = *CBaseEntity::GetAbsOrigin(v11);
  v12 = CDOTA_Buff::GetCaster(this);
  DOTA_EmitSoundLocationWithCaster(&vPos, "Hero_Invoker.SunStrike.Ignite", v12);
  area_of_effect = this->area_of_effect;
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  *v14.m128i_i32 = (2 * area_of_effect);
  v15 = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
  v16 = CDOTA_Buff::GetCaster(this);
  v17 = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(v17->m_iTeamNum.m_Value, &vLocation, v16, v15, &entities, 2, 1, 16, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v18 = CEntityHandle::operator CEntityInstance *(entities.m_Memory.m_pMemory);
    v19.m_Data = CEntityInstance::GetEntityIndex(v18).m_Data;
    CreateUnitEvent(v19, 0, 14, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_HERO_VS_HERO_ABILITY);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
  *v20.m128i_i32 = this->area_of_effect;
  v21 = COERCE_FLOAT(_mm_cvtsi128_si32(v20));
  v22 = CDOTA_Buff::GetCaster(this);
  v23 = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(v23->m_iTeamNum.m_Value, &vLocation, v22, v21, &entities, 2, 3, 16, 0, 0);
  if ( entities.m_Size != 0 )
  {
    flDamagePerEnemy = this->damage / entities.m_Size;
    if ( entities.m_Size > 0 )
    {
      v24 = 0;
      v25 = 0;
      do
      {
        v26 = &entities.m_Memory.m_pMemory[v24];
        m_Index = entities.m_Memory.m_pMemory[v24].m_Index;
        if ( m_Index + 2 <= 1
          || (v28 = v26->m_Index,
              (v29 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v26->m_Index) >> 9) & 0x3F]) == 0)
          || (v30 = &v29[v28 & 0x1FF]) == 0
          || m_Index != v30->m_EHandle.m_Index
          || (m_pInstance = v30->m_pInstance, v30->m_pInstance == 0)
          || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
        {
          m_pInstance = 0;
        }
        Ability = CDOTA_Buff::GetAbility(this);
        v33 = CDOTA_Buff::GetCaster(this);
        v34 = ApplyDamage(v33, m_pInstance, Ability, flDamagePerEnemy, 4, 0);
        if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
          && LOBYTE(m_pInstance[71].m_pEntity) == 0
          && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance, v34) == 0 )
        {
          v35 = 0;
          if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
            v35 = m_pInstance;
          v36 = CDOTA_Buff::GetCaster(this);
          if ( v36 != 0 && (v36->m_iUnitType & 1) != 0 )
            v37 = v36;
          else
            v37 = 0;
          EconEntity_OnOwnerKillEaterEvent(
            v37,
            v35,
            kill_eater_event_t::kKillEaterEventType_Invoker_SunstrikeKills,
            1,
            INVALID_ITEM_DEF_INDEX);
        }
        ++v25;
        ++v24;
      }
      while ( entities.m_Size > v25 );
    }
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Ability_Invoker_ForgeSpirit::~CDOTA_Ability_Invoker_ForgeSpirit  (line 1732, @0x0000000002b9fff0, libserver.so)  // inlines: ~CDOTA_Ability_Invoker_InvokedBase
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Invoker_ForgeSpirit::~CDOTA_Ability_Invoker_ForgeSpirit(
        CDOTA_Ability_Invoker_ForgeSpirit *const this)
{
  this->_vptr_IHandleEntity = &off_44F3C70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Invoker_ForgeSpirit::~CDOTA_Ability_Invoker_ForgeSpirit  (line 1732, @0x0000000002ba0010, libserver.so)  // inlines: ~CDOTA_Ability_Invoker_ForgeSpirit, ~CDOTA_Ability_Invoker_InvokedBase
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Invoker_ForgeSpirit::~CDOTA_Ability_Invoker_ForgeSpirit(
        CDOTA_Ability_Invoker_ForgeSpirit *const this)
{
  this->_vptr_IHandleEntity = &off_44F3C70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Invoker_ForgeSpirit::Schema_DynamicBinding  (line 1734, @0x0000000002b91680, libserver.so)
// globals: CDOTA_Ability_Invoker_ForgeSpirit::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_ForgeSpirit::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_ForgeSpirit *const this)
{
  return CDOTA_Ability_Invoker_ForgeSpirit::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_ForgeSpirit::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1734, @0x0000000002b91690, libserver.so)
// globals: CDOTA_Ability_Invoker_ForgeSpirit::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_ForgeSpirit::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_ForgeSpirit::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_ForgeSpirit::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_ForgeSpirit::CEntityInstanceEntityClass::DestructInstance  (line 1734, @0x0000000002b916a0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Invoker_ForgeSpirit>
void __fastcall CDOTA_Ability_Invoker_ForgeSpirit::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Invoker_ForgeSpirit::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Invoker_ForgeSpirit::CEntityInstanceEntityClass::FreeInstance  (line 1734, @0x0000000002b916c0, libserver.so)
void __fastcall CDOTA_Ability_Invoker_ForgeSpirit::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Invoker_ForgeSpirit::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Invoker_ForgeSpirit::CEntityInstanceEntityClass::CanAllocate  (line 1734, @0x0000000002b916e0, libserver.so)
bool __fastcall CDOTA_Ability_Invoker_ForgeSpirit::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Invoker_ForgeSpirit::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Invoker_ForgeSpirit::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1734, @0x0000000002b916f0, libserver.so)
// globals: CDOTA_Ability_Invoker_ForgeSpirit::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Invoker_ForgeSpirit::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Invoker_ForgeSpirit::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_ForgeSpirit::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_ForgeSpirit::CEntityInstanceEntityClass::AllocateInstance  (line 1734, @0x0000000002b98260, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Invoker_ForgeSpirit::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Invoker_ForgeSpirit::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 936);
  memset(v1, 0, 0x3A8u);
  return v1;
}


// CDOTA_Ability_Invoker_ForgeSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1734, @0x0000000002bab150, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Invoker_ForgeSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_ForgeSpirit::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Invoker_ForgeSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1734, @0x0000000002bab170, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Invoker_ForgeSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_ForgeSpirit::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Invoker_ForgeSpirit::CEntityInstanceEntityClass::ConstructInstance  (line 1734, @0x0000000002bad320, libserver.so)  // inlines: CDOTA_Ability_Invoker_ForgeSpirit, CDOTA_Ability_Invoker_InvokedBase, CEntityHandle, CHandle, CNetworkVarBase, Construct<CDOTA_Ability_Invoker_ForgeSpirit>, NetworkStateChanged
// calls: CDOTABaseAbility::CDOTABaseAbility, CBaseEntity::NetworkStateChanged, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Ability_Invoker_ForgeSpirit::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Invoker_ForgeSpirit::CEntityInstanceEntityClass *const this,
        void *p)
{
  __int64 v3; // rax
  __int64 v4; // rax

  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44F3C70;
    *(p + 228) = -1;
    CBaseEntity::NetworkStateChanged(p, 0x390u, -1, -1);
    v3 = *p;
    *(p + 229) = -1;
    (*(v3 + 176))(p, 916, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v4 = *p;
    *(p + 230) = -1;
    (*(v4 + 176))(p, 920, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *(p + 231) = -1;
    *p = &off_44FB570;
    *(p + 232) = -1;
  }
  return p;
}


// CDOTA_Ability_Invoker_ForgeSpirit::GetEntityClassInternal  (line 1734, @0x0000000002bca670, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "invoker_forge_spirit", "CDOTA_Ability_Invoker_ForgeSpirit"
// globals: `guard variable for'CDOTA_Ability_Invoker_ForgeSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ForgeSpiritClass, CDOTA_Ability_Invoker_ForgeSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ForgeSpiritClass, __dso_handle, CDOTA_Ability_Invoker_ForgeSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Invoker_ForgeSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ForgeSpiritClassInfo, CDOTA_Ability_Invoker_ForgeSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ForgeSpiritClassInfo
CEntityClass *__cdecl CDOTA_Ability_Invoker_ForgeSpirit::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Invoker_ForgeSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ForgeSpiritClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_ForgeSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ForgeSpiritClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Invoker_ForgeSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ForgeSpiritClass);
    CDOTA_Ability_Invoker_ForgeSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ForgeSpiritClass._vptr_CEntityClass = off_44FB4F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_ForgeSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ForgeSpiritClass);
    __cxa_atexit(
      CDOTA_Ability_Invoker_ForgeSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Invoker_ForgeSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ForgeSpiritClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Invoker_ForgeSpiritClass != 0 )
    return &CDOTA_Ability_Invoker_ForgeSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ForgeSpiritClass;
  if ( `guard variable for'CDOTA_Ability_Invoker_ForgeSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ForgeSpiritClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_ForgeSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ForgeSpiritClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Invoker_ForgeSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ForgeSpiritClassInfo,
      "CDOTA_Ability_Invoker_ForgeSpirit",
      "invoker_forge_spirit",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_ForgeSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ForgeSpiritClassInfo);
  }
  CDOTA_Ability_Invoker_ForgeSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ForgeSpiritClass.m_pClassInfo = &CDOTA_Ability_Invoker_ForgeSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ForgeSpiritClassInfo;
  CDOTA_Ability_Invoker_ForgeSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ForgeSpiritClass.m_pBaseClassInfo = CDOTA_Ability_Invoker_ForgeSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ForgeSpiritClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Invoker_ForgeSpiritClass = &CDOTA_Ability_Invoker_ForgeSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ForgeSpiritClass;
  CDOTA_Ability_Invoker_ForgeSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ForgeSpiritClassInfo.m_pClass = &CDOTA_Ability_Invoker_ForgeSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ForgeSpiritClass;
  CDOTA_Ability_Invoker_ForgeSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ForgeSpiritClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Invoker_ForgeSpiritClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Invoker_ForgeSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ForgeSpiritClass;
}


// CDOTA_Ability_Invoker_ForgeSpirit::GetAssociatedSecondaryAbilities  (line 1739, @0x0000000002b91700, libserver.so)
// strings: "invoker_wex;invoker_quas;invoker_exort"
const char *__fastcall CDOTA_Ability_Invoker_ForgeSpirit::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Invoker_ForgeSpirit *const this)
{
  return "invoker_wex;invoker_quas;invoker_exort";
}


// CDOTA_Ability_Invoker_ForgeSpirit::OnSpellStart  (line 1752, @0x0000000002b7a750, libserver.so)  // inlines: Get, GetEHandle, GetEntryIndex, GetExortLevel, GetInstance, GetQuasLevel, GetSerialNumber, GetTeamNumber, NetworkStateChanged, Set, SetBaseDamageMax, SetBaseDamageMin, SetMaxMana, SetUnitLabelIndex, ToDOTABaseNPC, operator CBaseEntity*, operator=, operator=<float>, operator=<int>
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_BaseNPC::ForceKill, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::SetControllableByPlayer, FindClearSpaceForUnit, CDOTA_BaseNPC::ModifyHealth, CDOTA_BaseNPC::SetMana, CDOTA_BaseNPC::GetAbilityByIndex (24 total)
// strings: "special_bonus_unique_invoker_1", "spirit_damage", "spirit_mana", "spirit_armor", "spirit_attack_range", "spirit_hp" (11 total)
void __fastcall CDOTA_Ability_Invoker_ForgeSpirit::OnSpellStart(CDOTA_Ability_Invoker_ForgeSpirit *const this)
{
  CHandle<CBaseEntity> *m_Spirits; // r13
  __int64 v3; // rbx
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *Caster; // rax
  int m_Value; // ebx
  CDOTA_BaseNPC *v7; // rax
  int v8; // r14d
  CDOTA_BaseNPC *v9; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int v11; // r14d
  CDOTA_BaseNPC *v12; // rax
  int v13; // eax
  float v14; // xmm1_4
  float v15; // xmm0_4
  CDOTABaseAbility *AbilityByIndex; // rax
  float v17; // xmm1_4
  CDOTA_BaseNPC *v18; // rax
  float v19; // xmm1_4
  CDOTA_BaseNPC *v20; // rax
  CEntityIdentity *m_pEntity; // rax
  int v22; // edx
  __int16 v23; // cx
  CDOTA_BaseNPC *v24; // rax
  CDOTA_BaseNPC *v25; // rbx
  CDOTA_BaseNPC *v26; // rax
  CDOTA_BaseNPC *v27; // rbx
  CDOTA_BaseNPC *v28; // rax
  CDOTA_BaseNPC *v29; // rax
  int spirit_hp; // [rsp+Ch] [rbp-A4h]
  int spirit_mana; // [rsp+10h] [rbp-A0h]
  float spirit_damage; // [rsp+14h] [rbp-9Ch]
  int spirit_armor; // [rsp+18h] [rbp-98h]
  int LevelSpecialValue; // [rsp+20h] [rbp-90h]
  int i; // [rsp+24h] [rbp-8Ch]
  Vector vSpawnPos; // [rsp+30h] [rbp-80h]
  KeyValues kv; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v39; // [rsp+78h] [rbp-38h]

  m_Spirits = this->m_Spirits;
  v3 = 0;
  v39 = __readfsqword(0x28u);
  do
  {
    v4 = CEntityHandle::operator CEntityInstance *(&m_Spirits[v3]);
    if ( v4 != 0 && v4->m_bIsDOTANPC )
      CDOTA_BaseNPC::ForceKill(v4, 0);
    ++v3;
  }
  while ( v3 != 2 );
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    m_Value = this->m_nQuasLevel.m_Value + 1;
  else
    m_Value = this->m_nQuasLevel.m_Value;
  v7 = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(v7) )
    v8 = this->m_nExortLevel.m_Value + 1;
  else
    v8 = this->m_nExortLevel.m_Value;
  v9 = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v9, "special_bonus_unique_invoker_1", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
    spirit_damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "spirit_damage", v8, 0);
    spirit_mana = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "spirit_mana", v8, 0);
    spirit_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "spirit_armor", v8, 0);
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "spirit_attack_range", m_Value, 0);
    spirit_hp = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "spirit_hp", m_Value, 0);
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "spirit_duration", m_Value, 0);
    if ( LevelSpecialValue <= 0 )
      goto LABEL_27;
  }
  else
  {
    spirit_damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "spirit_damage", v8, 0);
    spirit_mana = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "spirit_mana", v8, 0);
    spirit_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "spirit_armor", v8, 0);
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "spirit_attack_range", m_Value, 0);
    spirit_hp = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "spirit_hp", m_Value, 0);
    LevelSpecialValue = 1;
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "spirit_duration", m_Value, 0);
  }
  v11 = 1;
  do
  {
    v24 = CDOTABaseAbility::GetCaster(this);
    vSpawnPos = *CBaseEntity::GetAbsOrigin(v24);
    v25 = CDOTABaseAbility::GetCaster(this);
    v26 = CDOTABaseAbility::GetCaster(this);
    v27 = DOTA_Character_ScriptSpawn_Synchronous(
            "npc_dota_invoker_forged_spirit",
            v26->m_iTeamNum.m_Value,
            v25,
            0,
            0,
            vSpawnPos);
    if ( v27 != 0 )
    {
      v12 = CDOTABaseAbility::GetCaster(this);
      v13 = (*(v12->_vptr_IHandleEntity + 414))(v12);
      CDOTA_BaseNPC::SetControllableByPlayer(v27, v13, 0);
      FindClearSpaceForUnit(v27, vSpawnPos, 1);
      v27->m_flBaseMaxHealth = spirit_hp;
      CDOTA_BaseNPC::ModifyHealth(v27, spirit_hp, 0, 0, 0);
      i = v11;
      if ( v11 != v27->m_nUnitLabelIndex.m_Value )
      {
        (*(v27->_vptr_IHandleEntity + 22))(v27, 3417, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v27->m_nUnitLabelIndex.m_Value = v11;
      }
      v15 = spirit_mana;
      if ( spirit_mana != v27->m_flMaxMana.m_Value )
      {
        (*(v27->_vptr_IHandleEntity + 22))(v27, 2144, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v15 = spirit_mana;
        v27->m_flMaxMana.m_Value = spirit_mana;
      }
      CDOTA_BaseNPC::SetMana(v27, v15, v14);
      v27->m_iBaseDamageMin = spirit_damage;
      v27->m_iBaseDamageMax = spirit_damage;
      AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(v27, 0);
      CDOTABaseAbility::UpgradeAbility(AbilityByIndex, 0);
      KeyValues::KeyValues(&kv, "modifier_kill");
      KeyValues::SetFloat(&kv, "duration", v17);
      v18 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v27, v18, this, "modifier_kill", &kv, 0);
      KeyValues::KeyValues(&kv2, "modifier_forged_spirit_stats");
      KeyValues::SetInt(&kv2, "armor", spirit_armor);
      KeyValues::SetFloat(&kv2, "attack_range", v19);
      v20 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v27, v20, this, "modifier_forged_spirit_stats", &kv2, 0);
      m_pEntity = v27->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v22 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v23 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v23 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(m_Spirits->m_Index) = v23 | m_Spirits->m_Index & 0x8000;
        m_Spirits->m_Index = (v22 << 15) | m_Spirits->m_Index & 0x7FFF;
      }
      else
      {
        m_Spirits->m_Index = -1;
      }
      KeyValues::~KeyValues(&kv2);
      KeyValues::~KeyValues(&kv);
    }
    else
    {
      i = v11;
    }
    ++v11;
    ++m_Spirits;
  }
  while ( LevelSpecialValue > i );
LABEL_27:
  v28 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v28, 1588, 0.1, 0.1, 9, 0, 1.0);
  v29 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v29, "Hero_Invoker.ForgeSpirit", 0.0, 0, 0);
}


// CDOTA_Modifier_ForgedSpirit_Stats::~CDOTA_Modifier_ForgedSpirit_Stats  (line 1835, @0x0000000002b9a0f0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_ForgedSpirit_Stats::~CDOTA_Modifier_ForgedSpirit_Stats(
        CDOTA_Modifier_ForgedSpirit_Stats *const this)
{
  this->_vptr_CDOTA_Buff = &off_44FC050;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_ForgedSpirit_Stats::~CDOTA_Modifier_ForgedSpirit_Stats  (line 1835, @0x0000000002b9a110, libserver.so)  // inlines: ~CDOTA_Modifier_ForgedSpirit_Stats
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_ForgedSpirit_Stats::~CDOTA_Modifier_ForgedSpirit_Stats(
        CDOTA_Modifier_ForgedSpirit_Stats *const this)
{
  this->_vptr_CDOTA_Buff = &off_44FC050;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_ForgedSpirit_Stats::GetAttributes  (line 1842, @0x0000000002b91710, libserver.so)
int __fastcall CDOTA_Modifier_ForgedSpirit_Stats::GetAttributes(CDOTA_Modifier_ForgedSpirit_Stats *const this)
{
  return 1;
}


// CDOTA_Modifier_ForgedSpirit_Stats::IsPurgable  (line 1843, @0x0000000002b91720, libserver.so)
bool __fastcall CDOTA_Modifier_ForgedSpirit_Stats::IsPurgable(CDOTA_Modifier_ForgedSpirit_Stats *const this)
{
  return 0;
}


// CDOTA_Modifier_ForgedSpirit_Stats::IsHidden  (line 1844, @0x0000000002b91730, libserver.so)
bool __fastcall CDOTA_Modifier_ForgedSpirit_Stats::IsHidden(CDOTA_Modifier_ForgedSpirit_Stats *const this)
{
  return 1;
}


// CDOTA_Modifier_ForgedSpirit_Stats::GetModifierPhysicalArmorBonus  (line 1848, @0x0000000002b91740, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_ForgedSpirit_Stats::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_ForgedSpirit_Stats *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = (this->armor - 2);
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_ForgedSpirit_Stats::GetModifierAttackRangeBonus  (line 1849, @0x0000000002b91770, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_ForgedSpirit_Stats::GetModifierAttackRangeBonus(
        CDOTA_Modifier_ForgedSpirit_Stats *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->attack_range) << 32) | 1;
  return result;
}


// CDOTA_Modifier_ForgedSpirit_Stats::OnCreated  (line 1869, @0x0000000002b36840, libserver.so)
// calls: KeyValues::GetInt, KeyValues::GetFloat
void __fastcall CDOTA_Modifier_ForgedSpirit_Stats::OnCreated(
        CDOTA_Modifier_ForgedSpirit_Stats *const this,
        KeyValues *pKV)
{
  float v4; // xmm1_4

  this->armor = KeyValues::GetInt(pKV, "armor", 0);
  this->attack_range = KeyValues::GetFloat(pKV, "attack_range", v4);
}


// CDOTA_Modifier_ForgedSpirit_Stats::AddCustomTransmiterData  (line 1880, @0x0000000002b35980, libserver.so)  // inlines: set_armor, set_has_armor
void __fastcall CDOTA_Modifier_ForgedSpirit_Stats::AddCustomTransmiterData(
        CDOTA_Modifier_ForgedSpirit_Stats *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  int armor; // eax

  armor = this->armor;
  *(entry + 4) |= 0x800u;
  *(entry + 17) = armor;
}


// CDOTA_Modifier_ForgedSpirit_Stats::DeclareFunctions  (line 1893, @0x0000000002b359a0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_ForgedSpirit_Stats::GetModifierPhysicalArmorBonus(CModifierParams const&), CDOTA_Modifier_ForgedSpirit_Stats::GetModifierAttackRangeBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_ForgedSpirit_Stats::DeclareFunctions(CDOTA_Modifier_ForgedSpirit_Stats *const this)
{
  this->m_Functions[45].__pfn = CDOTA_Modifier_ForgedSpirit_Stats::GetModifierPhysicalArmorBonus;
  this->m_Functions[45].__delta = 0;
  this->m_Functions[69].__delta = 0;
  this->m_Functions[69].__pfn = CDOTA_Modifier_ForgedSpirit_Stats::GetModifierAttackRangeBonus;
}


// CDOTA_Ability_ForgedSpirit_MeltingStrike::~CDOTA_Ability_ForgedSpirit_MeltingStrike  (line 1905, @0x0000000002ba16e0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_ForgedSpirit_MeltingStrike::~CDOTA_Ability_ForgedSpirit_MeltingStrike(
        CDOTA_Ability_ForgedSpirit_MeltingStrike *const this)
{
  this->_vptr_IHandleEntity = &off_44FC3B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_ForgedSpirit_MeltingStrike::~CDOTA_Ability_ForgedSpirit_MeltingStrike  (line 1905, @0x0000000002ba1700, libserver.so)  // inlines: ~CDOTA_Ability_ForgedSpirit_MeltingStrike
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_ForgedSpirit_MeltingStrike::~CDOTA_Ability_ForgedSpirit_MeltingStrike(
        CDOTA_Ability_ForgedSpirit_MeltingStrike *const this)
{
  this->_vptr_IHandleEntity = &off_44FC3B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_ForgedSpirit_MeltingStrike::Schema_DynamicBinding  (line 1907, @0x0000000002b91790, libserver.so)
// globals: CDOTA_Ability_ForgedSpirit_MeltingStrike::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ForgedSpirit_MeltingStrike::Schema_DynamicBinding(
        const CDOTA_Ability_ForgedSpirit_MeltingStrike *const this)
{
  return CDOTA_Ability_ForgedSpirit_MeltingStrike::s_pSchemaBinding;
}


// CDOTA_Ability_ForgedSpirit_MeltingStrike::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1907, @0x0000000002b917a0, libserver.so)
// globals: CDOTA_Ability_ForgedSpirit_MeltingStrike::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_ForgedSpirit_MeltingStrike::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_ForgedSpirit_MeltingStrike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ForgedSpirit_MeltingStrike::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_ForgedSpirit_MeltingStrike::CEntityInstanceEntityClass::DestructInstance  (line 1907, @0x0000000002b917b0, libserver.so)  // inlines: Destruct<CDOTA_Ability_ForgedSpirit_MeltingStrike>
void __fastcall CDOTA_Ability_ForgedSpirit_MeltingStrike::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_ForgedSpirit_MeltingStrike::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_ForgedSpirit_MeltingStrike::CEntityInstanceEntityClass::FreeInstance  (line 1907, @0x0000000002b917d0, libserver.so)
void __fastcall CDOTA_Ability_ForgedSpirit_MeltingStrike::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_ForgedSpirit_MeltingStrike::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_ForgedSpirit_MeltingStrike::CEntityInstanceEntityClass::CanAllocate  (line 1907, @0x0000000002b917f0, libserver.so)
bool __fastcall CDOTA_Ability_ForgedSpirit_MeltingStrike::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_ForgedSpirit_MeltingStrike::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_ForgedSpirit_MeltingStrike::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1907, @0x0000000002b91800, libserver.so)
// globals: CDOTA_Ability_ForgedSpirit_MeltingStrike::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_ForgedSpirit_MeltingStrike::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_ForgedSpirit_MeltingStrike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_ForgedSpirit_MeltingStrike::s_pSchemaBinding;
}


// CDOTA_Ability_ForgedSpirit_MeltingStrike::CEntityInstanceEntityClass::AllocateInstance  (line 1907, @0x0000000002b982a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_ForgedSpirit_MeltingStrike::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_ForgedSpirit_MeltingStrike::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_ForgedSpirit_MeltingStrike::CEntityInstanceEntityClass::ConstructInstance  (line 1907, @0x0000000002b9d610, libserver.so)  // inlines: CDOTA_Ability_ForgedSpirit_MeltingStrike, Construct<CDOTA_Ability_ForgedSpirit_MeltingStrike>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_ForgedSpirit_MeltingStrike::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_ForgedSpirit_MeltingStrike::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44FC3B0;
  }
  return p;
}


// CDOTA_Ability_ForgedSpirit_MeltingStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1907, @0x0000000002bab240, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_ForgedSpirit_MeltingStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ForgedSpirit_MeltingStrike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_ForgedSpirit_MeltingStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1907, @0x0000000002bab260, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_ForgedSpirit_MeltingStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_ForgedSpirit_MeltingStrike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_ForgedSpirit_MeltingStrike::GetEntityClassInternal  (line 1907, @0x0000000002bcaa60, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "forged_spirit_melting_strike", "CDOTA_Ability_ForgedSpirit_MeltingStrike"
// globals: `guard variable for'CDOTA_Ability_ForgedSpirit_MeltingStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ForgedSpirit_MeltingStrikeClass, CDOTA_Ability_ForgedSpirit_MeltingStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ForgedSpirit_MeltingStrikeClass, __dso_handle, CDOTA_Ability_ForgedSpirit_MeltingStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_ForgedSpirit_MeltingStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ForgedSpirit_MeltingStrikeClassInfo, CDOTA_Ability_ForgedSpirit_MeltingStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ForgedSpirit_MeltingStrikeClassInfo
CEntityClass *__cdecl CDOTA_Ability_ForgedSpirit_MeltingStrike::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_ForgedSpirit_MeltingStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ForgedSpirit_MeltingStrikeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ForgedSpirit_MeltingStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ForgedSpirit_MeltingStrikeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_ForgedSpirit_MeltingStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ForgedSpirit_MeltingStrikeClass);
    CDOTA_Ability_ForgedSpirit_MeltingStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ForgedSpirit_MeltingStrikeClass._vptr_CEntityClass = off_44FC330;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ForgedSpirit_MeltingStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ForgedSpirit_MeltingStrikeClass);
    __cxa_atexit(
      CDOTA_Ability_ForgedSpirit_MeltingStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_ForgedSpirit_MeltingStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ForgedSpirit_MeltingStrikeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_ForgedSpirit_MeltingStrikeClass != 0 )
    return &CDOTA_Ability_ForgedSpirit_MeltingStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ForgedSpirit_MeltingStrikeClass;
  if ( `guard variable for'CDOTA_Ability_ForgedSpirit_MeltingStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ForgedSpirit_MeltingStrikeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_ForgedSpirit_MeltingStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ForgedSpirit_MeltingStrikeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_ForgedSpirit_MeltingStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ForgedSpirit_MeltingStrikeClassInfo,
      "CDOTA_Ability_ForgedSpirit_MeltingStrike",
      "forged_spirit_melting_strike",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_ForgedSpirit_MeltingStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ForgedSpirit_MeltingStrikeClassInfo);
  }
  CDOTA_Ability_ForgedSpirit_MeltingStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ForgedSpirit_MeltingStrikeClass.m_pClassInfo = &CDOTA_Ability_ForgedSpirit_MeltingStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ForgedSpirit_MeltingStrikeClassInfo;
  CDOTA_Ability_ForgedSpirit_MeltingStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ForgedSpirit_MeltingStrikeClass.m_pBaseClassInfo = CDOTA_Ability_ForgedSpirit_MeltingStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ForgedSpirit_MeltingStrikeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_ForgedSpirit_MeltingStrikeClass = &CDOTA_Ability_ForgedSpirit_MeltingStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ForgedSpirit_MeltingStrikeClass;
  CDOTA_Ability_ForgedSpirit_MeltingStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_ForgedSpirit_MeltingStrikeClassInfo.m_pClass = &CDOTA_Ability_ForgedSpirit_MeltingStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ForgedSpirit_MeltingStrikeClass;
  CDOTA_Ability_ForgedSpirit_MeltingStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ForgedSpirit_MeltingStrikeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_ForgedSpirit_MeltingStrikeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_ForgedSpirit_MeltingStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_ForgedSpirit_MeltingStrikeClass;
}


// CDOTA_Ability_ForgedSpirit_MeltingStrike::GetIntrinsicModifierName  (line 1910, @0x0000000002b91810, libserver.so)
// strings: "modifier_melting_strike"
const char *__fastcall CDOTA_Ability_ForgedSpirit_MeltingStrike::GetIntrinsicModifierName(
        CDOTA_Ability_ForgedSpirit_MeltingStrike *const this)
{
  return "modifier_melting_strike";
}


// CDOTA_Modifier_ForgedSpirit_MeltingStrike::~CDOTA_Modifier_ForgedSpirit_MeltingStrike  (line 1918, @0x0000000002b9a0a0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_ForgedSpirit_MeltingStrike::~CDOTA_Modifier_ForgedSpirit_MeltingStrike(
        CDOTA_Modifier_ForgedSpirit_MeltingStrike *const this)
{
  this->_vptr_CDOTA_Buff = &off_44FCE70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_ForgedSpirit_MeltingStrike::~CDOTA_Modifier_ForgedSpirit_MeltingStrike  (line 1918, @0x0000000002b9a0c0, libserver.so)  // inlines: ~CDOTA_Modifier_ForgedSpirit_MeltingStrike
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_ForgedSpirit_MeltingStrike::~CDOTA_Modifier_ForgedSpirit_MeltingStrike(
        CDOTA_Modifier_ForgedSpirit_MeltingStrike *const this)
{
  this->_vptr_CDOTA_Buff = &off_44FCE70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_ForgedSpirit_MeltingStrike::IsHidden  (line 1925, @0x0000000002b91820, libserver.so)
bool __fastcall CDOTA_Modifier_ForgedSpirit_MeltingStrike::IsHidden(
        CDOTA_Modifier_ForgedSpirit_MeltingStrike *const this)
{
  return 1;
}


// CDOTA_Modifier_ForgedSpirit_MeltingStrike::OnCreated  (line 1938, @0x0000000002b7d780, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
void __fastcall CDOTA_Modifier_ForgedSpirit_MeltingStrike::OnCreated(
        CDOTA_Modifier_ForgedSpirit_MeltingStrike *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "duration", -1, 0);
  else
    this->duration = 0.0;
}


// CDOTA_Modifier_ForgedSpirit_MeltingStrike::DeclareFunctions  (line 1945, @0x0000000002b359e0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_ForgedSpirit_MeltingStrike::DeclareFunctions(
        CDOTA_Modifier_ForgedSpirit_MeltingStrike *const this)
{
  this->m_Functions[137].__pfn = (&stru_10 + 697);
  this->m_Functions[137].__delta = 0;
}


// CDOTA_Modifier_ForgedSpirit_MeltingStrike::OnAttacked  (line 1952, @0x0000000002b48110, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::IsInvulnerable, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::SpendMana, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_melting_strike_debuff", "modifier_forged_spirit_melting_strike_debuff"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_ForgedSpirit_MeltingStrike::OnAttacked(
        CDOTA_Modifier_ForgedSpirit_MeltingStrike *const this,
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
  CDOTA_BaseNPC *v14; // r13
  CDOTABaseAbility *Ability; // rax
  float v16; // xmm0_4
  CDOTABaseAbility *v17; // rax
  float v18; // xmm1_4
  CDOTABaseAbility *v19; // rax
  float flManaSpent; // [rsp+Ch] [rbp-44h]
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-28h]
  ModifierVariant_t result; // 0:rax.16

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
          if ( v9 + 2 <= 1
            || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
            || (v11 = &v10[params->htarget.m_Index & 0x1FF]) == 0
            || v9 != v11->m_EHandle.m_Index
            || (v12 = v11->m_pInstance, v11->m_pInstance == 0)
            || BYTE3(v12[7]._vptr_IHandleEntity) == 0 )
          {
            v12 = 0;
          }
          Caster = CDOTA_Buff::GetCaster(this);
          v14 = Caster;
          if ( Caster == 0 || !Caster->m_bIsDOTANPC )
            v14 = 0;
          if ( v12 != 0
            && (v12[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
            && (BYTE1(v12[58]._vptr_IHandleEntity) & 2) == 0
            && LOBYTE(v12[71]._vptr_IHandleEntity) == 0
            && !CDOTA_BaseNPC::IsInvulnerable(v12)
            && HIBYTE(v12[7].m_CScriptComponent) != v14->m_iTeamNum.m_Value )
          {
            Ability = CDOTA_Buff::GetAbility(this);
            v16 = (*(Ability->_vptr_IHandleEntity + 274))(Ability, 0xFFFFFFFFLL);
            *&result.m_eType = 1;
            if ( v16 > v14->m_flMana.m_Value )
              goto LABEL_6;
            flManaSpent = v16;
            v17 = CDOTA_Buff::GetAbility(this);
            CDOTA_BaseNPC::SpendMana(v14, flManaSpent, v17, 0);
            KeyValues::KeyValues(&kv, "modifier_melting_strike_debuff");
            KeyValues::SetFloat(&kv, "duration", v18);
            v19 = CDOTA_Buff::GetAbility(this);
            CDOTA_BaseNPC::AddNewModifier(v12, v14, v19, "modifier_forged_spirit_melting_strike_debuff", &kv, 0);
            KeyValues::~KeyValues(&kv);
          }
        }
      }
    }
  }
  *&result.m_eType = 1;
LABEL_6:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_MeltingStrike_Debuff::~CDOTA_Modifier_MeltingStrike_Debuff  (line 1981, @0x0000000002b9a050, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_MeltingStrike_Debuff::~CDOTA_Modifier_MeltingStrike_Debuff(
        CDOTA_Modifier_MeltingStrike_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_44FD190;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_MeltingStrike_Debuff::~CDOTA_Modifier_MeltingStrike_Debuff  (line 1981, @0x0000000002b9a070, libserver.so)  // inlines: ~CDOTA_Modifier_MeltingStrike_Debuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_MeltingStrike_Debuff::~CDOTA_Modifier_MeltingStrike_Debuff(
        CDOTA_Modifier_MeltingStrike_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_44FD190;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_MeltingStrike_Debuff::IsPurgable  (line 1989, @0x0000000002b91830, libserver.so)
bool __fastcall CDOTA_Modifier_MeltingStrike_Debuff::IsPurgable(CDOTA_Modifier_MeltingStrike_Debuff *const this)
{
  return 0;
}


// CDOTA_Modifier_MeltingStrike_Debuff::GetModifierPhysicalArmorBonus  (line 1993, @0x0000000002b91840, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_MeltingStrike_Debuff::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_MeltingStrike_Debuff *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  int v4; // eax
  ModifierVariant_t result; // 0:rax.16

  v3 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v3.m128i_i32 = (this->armor_removed * -v4);
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_MeltingStrike_Debuff::OnCreated  (line 2008, @0x0000000002b6e010, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "max_armor_removed"
void __fastcall CDOTA_Modifier_MeltingStrike_Debuff::OnCreated(
        CDOTA_Modifier_MeltingStrike_Debuff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rdi
  __int64 v5; // rsi
  int LevelSpecialValue; // eax
  __int64 v7; // rdx

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->armor_removed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "armor_removed", -1, 0);
  else
    this->armor_removed = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  LevelSpecialValue = 0;
  if ( v4 != 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "max_armor_removed", -1, 0);
  v7 = (LevelSpecialValue >> 31);
  LODWORD(v7) = LevelSpecialValue % this->armor_removed;
  this->m_nMaxStacks = LevelSpecialValue / this->armor_removed;
  (*(this->_vptr_CDOTA_Buff + 25))(this, v5, v7);
}


// CDOTA_Modifier_MeltingStrike_Debuff::OnRefresh  (line 2024, @0x0000000002b35a00, libserver.so)
void __fastcall CDOTA_Modifier_MeltingStrike_Debuff::OnRefresh(
        CDOTA_Modifier_MeltingStrike_Debuff *const this,
        KeyValues *pKV)
{
  if ( (*(this->_vptr_CDOTA_Buff + 27))(this, pKV) < this->m_nMaxStacks )
    (*(this->_vptr_CDOTA_Buff + 25))(this);
}


// CDOTA_Modifier_MeltingStrike_Debuff::DeclareFunctions  (line 2036, @0x0000000002b35a40, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_MeltingStrike_Debuff::GetModifierPhysicalArmorBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_MeltingStrike_Debuff::DeclareFunctions(CDOTA_Modifier_MeltingStrike_Debuff *const this)
{
  this->m_Functions[45].__pfn = CDOTA_Modifier_MeltingStrike_Debuff::GetModifierPhysicalArmorBonus;
  this->m_Functions[45].__delta = 0;
}


// CDOTA_Ability_Invoker_IceWall::~CDOTA_Ability_Invoker_IceWall  (line 2045, @0x0000000002ba0040, libserver.so)  // inlines: ~CDOTA_Ability_Invoker_InvokedBase
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Invoker_IceWall::~CDOTA_Ability_Invoker_IceWall(
        CDOTA_Ability_Invoker_IceWall *const this)
{
  this->_vptr_IHandleEntity = &off_44F3C70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Invoker_IceWall::~CDOTA_Ability_Invoker_IceWall  (line 2045, @0x0000000002ba0060, libserver.so)  // inlines: ~CDOTA_Ability_Invoker_IceWall, ~CDOTA_Ability_Invoker_InvokedBase
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Invoker_IceWall::~CDOTA_Ability_Invoker_IceWall(
        CDOTA_Ability_Invoker_IceWall *const this)
{
  this->_vptr_IHandleEntity = &off_44F3C70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Invoker_IceWall::Schema_DynamicBinding  (line 2047, @0x0000000002b91880, libserver.so)
// globals: CDOTA_Ability_Invoker_IceWall::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_IceWall::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_IceWall *const this)
{
  return CDOTA_Ability_Invoker_IceWall::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_IceWall::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2047, @0x0000000002b91890, libserver.so)
// globals: CDOTA_Ability_Invoker_IceWall::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_IceWall::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_IceWall::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_IceWall::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_IceWall::CEntityInstanceEntityClass::DestructInstance  (line 2047, @0x0000000002b918a0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Invoker_IceWall>
void __fastcall CDOTA_Ability_Invoker_IceWall::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Invoker_IceWall::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Invoker_IceWall::CEntityInstanceEntityClass::FreeInstance  (line 2047, @0x0000000002b918c0, libserver.so)
void __fastcall CDOTA_Ability_Invoker_IceWall::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Invoker_IceWall::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Invoker_IceWall::CEntityInstanceEntityClass::CanAllocate  (line 2047, @0x0000000002b918e0, libserver.so)
bool __fastcall CDOTA_Ability_Invoker_IceWall::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Invoker_IceWall::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Invoker_IceWall::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2047, @0x0000000002b918f0, libserver.so)
// globals: CDOTA_Ability_Invoker_IceWall::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Invoker_IceWall::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Invoker_IceWall::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_IceWall::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_IceWall::CEntityInstanceEntityClass::AllocateInstance  (line 2047, @0x0000000002b982e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Invoker_IceWall::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Invoker_IceWall::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_Invoker_IceWall::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2047, @0x0000000002bab1a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Invoker_IceWall::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_IceWall::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Invoker_IceWall::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2047, @0x0000000002bab1c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Invoker_IceWall::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_IceWall::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Invoker_IceWall::CEntityInstanceEntityClass::ConstructInstance  (line 2047, @0x0000000002bacf30, libserver.so)  // inlines: CDOTA_Ability_Invoker_IceWall, CDOTA_Ability_Invoker_InvokedBase, CNetworkVarBase, Construct<CDOTA_Ability_Invoker_IceWall>, NetworkStateChanged
// calls: CDOTABaseAbility::CDOTABaseAbility, CBaseEntity::NetworkStateChanged, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Ability_Invoker_IceWall::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Invoker_IceWall::CEntityInstanceEntityClass *const this,
        void *p)
{
  __int64 v3; // rax
  __int64 v4; // rax

  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44F3C70;
    *(p + 228) = -1;
    CBaseEntity::NetworkStateChanged(p, 0x390u, -1, -1);
    v3 = *p;
    *(p + 229) = -1;
    (*(v3 + 176))(p, 916, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v4 = *p;
    *(p + 230) = -1;
    (*(v4 + 176))(p, 920, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *p = &off_44FD4F0;
  }
  return p;
}


// CDOTA_Ability_Invoker_IceWall::GetEntityClassInternal  (line 2047, @0x0000000002bca7c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "invoker_ice_wall", "CDOTA_Ability_Invoker_IceWall"
// globals: `guard variable for'CDOTA_Ability_Invoker_IceWall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_IceWallClass, CDOTA_Ability_Invoker_IceWall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_IceWallClass, __dso_handle, CDOTA_Ability_Invoker_IceWall::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Invoker_IceWall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_IceWallClassInfo, CDOTA_Ability_Invoker_IceWall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_IceWallClassInfo
CEntityClass *__cdecl CDOTA_Ability_Invoker_IceWall::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Invoker_IceWall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_IceWallClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_IceWall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_IceWallClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Invoker_IceWall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_IceWallClass);
    CDOTA_Ability_Invoker_IceWall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_IceWallClass._vptr_CEntityClass = off_44FD470;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_IceWall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_IceWallClass);
    __cxa_atexit(
      CDOTA_Ability_Invoker_IceWall::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Invoker_IceWall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_IceWallClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Invoker_IceWallClass != 0 )
    return &CDOTA_Ability_Invoker_IceWall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_IceWallClass;
  if ( `guard variable for'CDOTA_Ability_Invoker_IceWall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_IceWallClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_IceWall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_IceWallClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Invoker_IceWall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_IceWallClassInfo,
      "CDOTA_Ability_Invoker_IceWall",
      "invoker_ice_wall",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_IceWall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_IceWallClassInfo);
  }
  CDOTA_Ability_Invoker_IceWall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_IceWallClass.m_pClassInfo = &CDOTA_Ability_Invoker_IceWall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_IceWallClassInfo;
  CDOTA_Ability_Invoker_IceWall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_IceWallClass.m_pBaseClassInfo = CDOTA_Ability_Invoker_IceWall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_IceWallClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Invoker_IceWallClass = &CDOTA_Ability_Invoker_IceWall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_IceWallClass;
  CDOTA_Ability_Invoker_IceWall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_IceWallClassInfo.m_pClass = &CDOTA_Ability_Invoker_IceWall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_IceWallClass;
  CDOTA_Ability_Invoker_IceWall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_IceWallClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Invoker_IceWallClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Invoker_IceWall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_IceWallClass;
}


// CDOTA_Ability_Invoker_IceWall::GetAssociatedSecondaryAbilities  (line 2052, @0x0000000002b91900, libserver.so)
// strings: "invoker_wex;invoker_quas;invoker_exort"
const char *__fastcall CDOTA_Ability_Invoker_IceWall::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Invoker_IceWall *const this)
{
  return "invoker_wex;invoker_quas;invoker_exort";
}


// CDOTA_Ability_Invoker_IceWall::GetStolenActivityModifier  (line 2054, @0x0000000002b91910, libserver.so)
const char *__fastcall CDOTA_Ability_Invoker_IceWall::GetStolenActivityModifier(
        CDOTA_Ability_Invoker_IceWall *const this)
{
  return "wall";
}


// CDOTA_Ability_Invoker_IceWall::OnSpellStart  (line 2062, @0x0000000002b7ad40, libserver.so)  // inlines: Cross, CrossProduct, GetExortLevel, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetQuasLevel, GetTeamNumber, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator-
// calls: DOTA_ServerHasEntitySpace, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetAbsOrigin, CBaseEntity::GetAbsAngles, AngleVectors, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt, Thinker_Create (17 total)
// strings: "wall_place_distance", "num_wall_elements", "wall_element_spacing", "wall_element_radius", "modifier_invoker_ice_wall_thinker", "wallDirX" (9 total)
void __fastcall CDOTA_Ability_Invoker_IceWall::OnSpellStart(CDOTA_Ability_Invoker_IceWall *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  int m_Value; // ebx
  CDOTA_BaseNPC *v4; // rax
  int v5; // edx
  int LevelSpecialValue; // r14d
  int v7; // r15d
  int v8; // r13d
  int v9; // ebx
  CDOTA_BaseNPC *v10; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *v12; // rax
  const QAngle *AbsAngles; // rax
  float v14; // xmm1_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  int v18; // r14d
  CDOTA_BaseNPC *v19; // rax
  float v20; // xmm1_4
  float v21; // xmm1_4
  int v22; // ebx
  float v23; // xmm2_4
  int v24; // r13d
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  float v28; // [rsp+10h] [rbp-D0h]
  int slow; // [rsp+18h] [rbp-C8h]
  float vWallCentera; // [rsp+28h] [rbp-B8h]
  vec_t vWallCenterb; // [rsp+28h] [rbp-B8h]
  float vWallCenter; // [rsp+28h] [rbp-B8h]
  float vWallCenter_4a; // [rsp+2Ch] [rbp-B4h]
  unsigned int vWallCenter_4b; // [rsp+2Ch] [rbp-B4h]
  float vWallCenter_4; // [rsp+2Ch] [rbp-B4h]
  float vWallCenter_8a; // [rsp+30h] [rbp-B0h]
  unsigned int vWallCenter_8b; // [rsp+30h] [rbp-B0h]
  float vWallCenter_8; // [rsp+30h] [rbp-B0h]
  float v39; // [rsp+34h] [rbp-ACh]
  float v40; // [rsp+34h] [rbp-ACh]
  float v41; // [rsp+38h] [rbp-A8h]
  float v42; // [rsp+38h] [rbp-A8h]
  float duration; // [rsp+3Ch] [rbp-A4h]
  Vector vFacingDir; // [rsp+40h] [rbp-A0h] BYREF
  Vector vOrigin; // [rsp+50h] [rbp-90h]
  Vector vElementPos; // [rsp+60h] [rbp-80h]
  KeyValues kvThinker; // [rsp+70h] [rbp-70h] BYREF
  KeyValues kvAura; // [rsp+90h] [rbp-50h] BYREF
  unsigned __int64 v49; // [rsp+A8h] [rbp-38h]
  Vector v50; // 0:xmm0_8.8,8:xmm1_4.4

  v49 = __readfsqword(0x28u);
  if ( DOTA_ServerHasEntitySpace() )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(Caster) )
      m_Value = this->m_nQuasLevel.m_Value + 1;
    else
      m_Value = this->m_nQuasLevel.m_Value;
    v4 = CDOTABaseAbility::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(v4) )
      v5 = this->m_nExortLevel.m_Value + 1;
    else
      v5 = this->m_nExortLevel.m_Value;
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage_per_second", v5, 0);
    slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "slow", m_Value, 0);
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", m_Value, 0);
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "wall_place_distance", -1, 0);
    v7 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "num_wall_elements", -1, 0);
    v8 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "wall_element_spacing", -1, 0);
    v9 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "wall_element_radius", -1, 0);
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "slow_duration", -1, 0);
    v10 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
    vWallCenter_8a = AbsOrigin->x;
    vWallCenter_4a = AbsOrigin->y;
    vWallCentera = AbsOrigin->z;
    v12 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v12);
    AngleVectors(AbsAngles, &vFacingDir, 0, 0);
    vWallCenterb = (LevelSpecialValue * vFacingDir.z) + vWallCentera;
    *&vWallCenter_8b = (LevelSpecialValue * vFacingDir.x) + vWallCenter_8a;
    *&vWallCenter_4b = vWallCenter_4a + (LevelSpecialValue * vFacingDir.y);
    v41 = vFacingDir.y - (vFacingDir.z * 0.0);
    v39 = (vFacingDir.z * 0.0) - vFacingDir.x;
    v28 = (vFacingDir.x * 0.0) - (0.0 * vFacingDir.y);
    KeyValues::KeyValues(&kvThinker, "modifier_invoker_ice_wall_thinker");
    KeyValues::SetFloat(&kvThinker, "duration", v14);
    KeyValues::SetFloat(&kvThinker, "damage_per_second", v15);
    KeyValues::SetInt(&kvThinker, "num_wall_elements", v7);
    KeyValues::SetInt(&kvThinker, "wall_element_spacing", v8);
    KeyValues::SetInt(&kvThinker, "wall_element_radius", v9);
    KeyValues::SetFloat(&kvThinker, "wallDirX", v16);
    KeyValues::SetFloat(&kvThinker, "wallDirY", v17);
    v18 = this->m_iTeamNum.m_Value;
    v19 = CDOTABaseAbility::GetCaster(this);
    *&vOrigin.x = __PAIR64__(vWallCenter_4b, vWallCenter_8b);
    *&v50.x = __PAIR64__(vWallCenter_4b, vWallCenter_8b);
    v50.z = vWallCenterb;
    vOrigin.z = vWallCenterb;
    Thinker_Create(v19, this, "modifier_invoker_ice_wall_thinker", &kvThinker, v50, v18, 0, 0, 0);
    KeyValues::KeyValues(&kvAura, "modifier_invoker_ice_wall_slow_aura");
    KeyValues::SetFloat(&kvAura, "duration", v20);
    KeyValues::SetInt(&kvAura, "radius", v9);
    KeyValues::SetInt(&kvAura, "slow", slow);
    KeyValues::SetFloat(&kvAura, "slow_duration", v21);
    v22 = 0;
    v23 = v39 * v8;
    duration = v41 * v8;
    v42 = v23;
    v40 = v8 * v28;
    vWallCenter_8 = *&vWallCenter_8b - (duration * (v7 / 2));
    vWallCenter_4 = *&vWallCenter_4b - (v23 * (v7 / 2));
    vWallCenter = vWallCenterb - ((v7 / 2) * v40);
    if ( v7 > 0 )
    {
      do
      {
        v24 = this->m_iTeamNum.m_Value;
        vElementPos.x = (duration * v22) + vWallCenter_8;
        vElementPos.y = (v42 * v22) + vWallCenter_4;
        vElementPos.z = (v22 * v40) + vWallCenter;
        v25 = CDOTABaseAbility::GetCaster(this);
        Thinker_Create(v25, this, "modifier_invoker_ice_wall_slow_aura", &kvAura, vElementPos, v24, 0, 0, 0);
        ++v22;
      }
      while ( v22 != v7 );
    }
    v26 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::StartGesture(v26, 1589, 0.1, 0.1, 9, 0, 1.0);
    v27 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v27, "Hero_Invoker.IceWall.Cast", 0.0, 0, 0);
    KeyValues::~KeyValues(&kvAura);
    KeyValues::~KeyValues(&kvThinker);
  }
}


// CDOTA_Modifier_Invoker_IceWall_Thinker::~CDOTA_Modifier_Invoker_IceWall_Thinker  (line 2136, @0x0000000002b9a000, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Invoker_IceWall_Thinker::~CDOTA_Modifier_Invoker_IceWall_Thinker(
        CDOTA_Modifier_Invoker_IceWall_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_44FDFD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Invoker_IceWall_Thinker::~CDOTA_Modifier_Invoker_IceWall_Thinker  (line 2136, @0x0000000002b9a020, libserver.so)  // inlines: ~CDOTA_Modifier_Invoker_IceWall_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Invoker_IceWall_Thinker::~CDOTA_Modifier_Invoker_IceWall_Thinker(
        CDOTA_Modifier_Invoker_IceWall_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_44FDFD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Invoker_IceWall_Thinker::OnCreated  (line 2158, @0x0000000002b649e0, libserver.so)  // inlines: VectorAdd, VectorSubtract, operator*=, operator+, operator-
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, KeyValues::GetFloat, KeyValues::GetInt, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlForward, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::AddParticle, CDOTA_Buff::StartIntervalThink
// strings: "num_wall_elements", "wall_element_spacing", "wall_element_radius", "wallDirX", "wallDirY", "particles/units/heroes/hero_invoker/invoker_ice_wall.vpcf" (7 total)
void __fastcall CDOTA_Modifier_Invoker_IceWall_Thinker::OnCreated(
        CDOTA_Modifier_Invoker_IceWall_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  vec_t Float; // xmm0_4
  int num_wall_elements; // eax
  float x; // xmm3_4
  float v13; // xmm1_4
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v15; // rax
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_ParticleManager *v18; // rax
  CDOTA_BaseNPC *v19; // rax
  const Vector *v20; // rax
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  const Vector *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  const Vector *v29; // rax
  CDOTA_ParticleManager *v30; // rax
  CDOTA_ParticleManager *v31; // rax
  float v32; // xmm1_4
  float right; // [rsp+14h] [rbp-5Ch]
  float right_4; // [rsp+18h] [rbp-58h]
  float right_8; // [rsp+1Ch] [rbp-54h]
  double v36; // [rsp+20h] [rbp-50h]
  float v37; // [rsp+28h] [rbp-48h]
  double v38; // [rsp+30h] [rbp-40h]
  float v39; // [rsp+38h] [rbp-38h]
  double v40; // [rsp+40h] [rbp-30h]
  float v41; // [rsp+48h] [rbp-28h]
  double v42; // [rsp+50h] [rbp-20h]
  float v43; // [rsp+58h] [rbp-18h]

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->num_wall_elements, "num_wall_elements");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->wall_element_spacing, "wall_element_spacing");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->wall_element_radius, "wall_element_radius");
  this->damage_per_second = KeyValues::GetFloat(pKV, "damage_per_second", v7);
  this->num_wall_elements = KeyValues::GetInt(pKV, "num_wall_elements", 0);
  this->wall_element_spacing = KeyValues::GetInt(pKV, "wall_element_spacing", 0);
  this->wall_element_radius = KeyValues::GetInt(pKV, "wall_element_radius", 0);
  this->m_vWallDir.x = KeyValues::GetFloat(pKV, "wallDirX", v8);
  Float = KeyValues::GetFloat(pKV, "wallDirY", v9);
  num_wall_elements = this->num_wall_elements;
  x = this->m_vWallDir.x;
  this->m_vWallDir.y = Float;
  this->m_vWallDir.z = 0.0;
  v13 = (this->wall_element_spacing * num_wall_elements) * 0.5;
  right_8 = x * v13;
  right_4 = Float * v13;
  right = v13 * 0.0;
  ParticleManager = GetParticleManager();
  LODWORD(pKV) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_invoker/invoker_ice_wall.vpcf",
                   2,
                   0,
                   0,
                   0);
  v15 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlForward(v15, pKV, 0, *&this->m_vWallDir.x, this->m_vWallDir.z);
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  *(&v36 + 1) = right_4 + AbsOrigin->y;
  *&v36 = right_8 + AbsOrigin->x;
  v37 = right + AbsOrigin->z;
  v18 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v18, pKV, 0, v36, v37);
  v19 = CDOTA_Buff::GetParent(this);
  v20 = CBaseEntity::GetAbsOrigin(v19);
  *(&v38 + 1) = v20->y - right_4;
  *&v38 = v20->x - right_8;
  v39 = v20->z - right;
  v21 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v21, pKV, 1, v38, v39);
  v22 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v22, pKV, 2, *&this->m_vWallDir.x, this->m_vWallDir.z);
  CDOTA_Buff::AddParticle(this, pKV, 0, 0, -1, 0, 0);
  v23 = GetParticleManager();
  LODWORD(pKV) = CDOTA_ParticleManager::CreateParticle(
                   v23,
                   "particles/units/heroes/hero_invoker/invoker_ice_wall_b.vpcf",
                   2,
                   0,
                   0,
                   0);
  v24 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlForward(v24, pKV, 0, *&this->m_vWallDir.x, this->m_vWallDir.z);
  v25 = CDOTA_Buff::GetParent(this);
  v26 = CBaseEntity::GetAbsOrigin(v25);
  *(&v40 + 1) = right_4 + v26->y;
  *&v40 = right_8 + v26->x;
  v41 = right + v26->z;
  v27 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v27, pKV, 0, v40, v41);
  v28 = CDOTA_Buff::GetParent(this);
  v29 = CBaseEntity::GetAbsOrigin(v28);
  *(&v42 + 1) = v29->y - right_4;
  *&v42 = v29->x - right_8;
  v43 = v29->z - right;
  v30 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v30, pKV, 1, v42, v43);
  v31 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v31, pKV, 2, *&this->m_vWallDir.x, this->m_vWallDir.z);
  CDOTA_Buff::AddParticle(this, pKV, 0, 0, -1, 0, 0);
  CDOTA_Buff::StartIntervalThink(this, 1.0, v32);
}


// CDOTA_Modifier_Invoker_IceWall_Thinker::OnIntervalThink  (line 2197, @0x0000000002b88780, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CDOTA_BaseNPC*>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator-, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, FindUnitsInRadius, CUtlVectorBase<CDOTA_BaseNPC*, CUtlMemory<CDOTA_BaseNPC*, int> >::Find, CDOTA_Buff::GetAbility, ApplyDamage, CDOTA_BaseNPC::UnitEmitSound, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CDOTA_BaseNPC*, int>::Grow, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlMemory<CDOTA_BaseNPC*, int>::Purge (15 total)
// strings: "Hero_Invoker.IceWall.Slow"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Invoker_IceWall_Thinker::OnIntervalThink(
        CDOTA_Modifier_Invoker_IceWall_Thinker *const this)
{
  float wall_element_spacing; // xmm0_4
  int v3; // eax
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  __m128i v6; // xmm5
  float x; // xmm6_4
  int num_wall_elements; // r12d
  float v9; // xmm7_4
  float z; // xmm6_4
  float v11; // xmm0_4
  float v12; // r12d
  vec_t v13; // xmm2_4
  vec_t v14; // xmm1_4
  vec_t v15; // xmm0_4
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_BaseNPC *v17; // rax
  __int64 v18; // rbx
  CDOTA_BaseNPC *m_pInstance; // r12
  CHandle<CBaseEntity> *v20; // rdx
  uint32 m_Index; // eax
  __int16 v22; // cx
  CEntityIdentity *v23; // rdx
  CEntityIdentity *v24; // rdx
  __int64 m_Size; // r15
  int v26; // eax
  CDOTA_BaseNPC **v27; // rax
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v29; // rax
  CDOTA_BaseNPC *v30; // rax
  float v31; // [rsp+34h] [rbp-BCh]
  float v32; // [rsp+38h] [rbp-B8h]
  float v33; // [rsp+3Ch] [rbp-B4h]
  float pEntities; // [rsp+48h] [rbp-A8h]
  float ia; // [rsp+50h] [rbp-A0h]
  int i; // [rsp+50h] [rbp-A0h]
  float flDamage; // [rsp+54h] [rbp-9Ch]
  float flDamagea; // [rsp+54h] [rbp-9Ch]
  CDOTA_BaseNPC *pNPC; // [rsp+68h] [rbp-88h] BYREF
  Vector vElementPos; // [rsp+70h] [rbp-80h] BYREF
  CUtlVector<CDOTA_BaseNPC*,CUtlMemory<CDOTA_BaseNPC*,int> > damagedEntities; // [rsp+80h] [rbp-70h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+A0h] [rbp-50h] BYREF

  wall_element_spacing = this->wall_element_spacing;
  v3 = this->num_wall_elements / 2;
  pEntities = (this->m_vWallDir.x * wall_element_spacing) * v3;
  ia = (this->m_vWallDir.y * wall_element_spacing) * v3;
  flDamage = (wall_element_spacing * this->m_vWallDir.z) * v3;
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  x = AbsOrigin->x;
  damagedEntities.m_Size = 0;
  num_wall_elements = this->num_wall_elements;
  v9 = AbsOrigin->y - ia;
  v33 = x - pEntities;
  z = AbsOrigin->z;
  damagedEntities.m_Memory.m_pMemory = 0;
  v32 = v9;
  damagedEntities.m_Memory.m_nAllocationCount = 0;
  damagedEntities.m_Memory.m_nGrowSize = 0;
  v31 = z - flDamage;
  if ( num_wall_elements <= 0 )
  {
    damagedEntities.m_Size = 0;
LABEL_27:
    CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&damagedEntities.m_Memory);
    if ( (damagedEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&damagedEntities.m_Memory);
    return;
  }
  i = 0;
  do
  {
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    v11 = this->wall_element_spacing;
    *v6.m128i_i32 = this->wall_element_radius;
    v12 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
    v13 = ((this->m_vWallDir.y * v11) * i) + v32;
    v14 = ((this->m_vWallDir.z * v11) * i) + v31;
    v15 = ((v11 * this->m_vWallDir.x) * i) + v33;
    vElementPos.y = v13;
    vElementPos.z = v14;
    vElementPos.x = v15;
    Caster = CDOTA_Buff::GetCaster(this);
    v17 = CDOTA_Buff::GetCaster(this);
    FindUnitsInRadius(v17->m_iTeamNum.m_Value, &vElementPos, Caster, v12, &entities, 2, 3, 0, 0, 0);
    if ( entities.m_Size > 0 )
    {
      v18 = 0;
      do
      {
        while ( 1 )
        {
          v20 = &entities.m_Memory.m_pMemory[v18];
          m_Index = v20->m_Index;
          if ( v20->m_Index + 2 <= 1
            || (v22 = v20->m_Index,
                (v23 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v20->m_Index) >> 9) & 0x3F]) == 0)
            || (v24 = &v23[v22 & 0x1FF]) == 0
            || m_Index != v24->m_EHandle.m_Index
            || (m_pInstance = v24->m_pInstance, v24->m_pInstance == 0)
            || !m_pInstance->m_bIsDOTANPC )
          {
            m_pInstance = 0;
          }
          pNPC = m_pInstance;
          if ( CUtlVectorBase<CDOTA_BaseNPC *,CUtlMemory<CDOTA_BaseNPC *,int>>::Find(&damagedEntities, &pNPC) == -1 )
            break;
          if ( entities.m_Size <= ++v18 )
            goto LABEL_20;
        }
        m_Size = damagedEntities.m_Size;
        v26 = damagedEntities.m_Size;
        if ( damagedEntities.m_Size == damagedEntities.m_Memory.m_nAllocationCount )
        {
          CUtlMemory<CDOTA_BaseNPC *,int>::Grow(&damagedEntities.m_Memory, 1);
          v26 = damagedEntities.m_Size;
        }
        damagedEntities.m_Size = v26 + 1;
        v27 = &damagedEntities.m_Memory.m_pMemory[m_Size];
        if ( v27 != 0 )
          *v27 = m_pInstance;
        flDamagea = this->damage_per_second;
        Ability = CDOTA_Buff::GetAbility(this);
        v29 = CDOTA_Buff::GetCaster(this);
        ApplyDamage(v29, m_pInstance, Ability, flDamagea, 2, 0);
        v30 = CDOTA_Buff::GetParent(this);
        CDOTA_BaseNPC::UnitEmitSound(v30, "Hero_Invoker.IceWall.Slow", 0.0, 0, 0);
        ++v18;
      }
      while ( entities.m_Size > v18 );
    }
LABEL_20:
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
      if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    }
    ++i;
  }
  while ( this->num_wall_elements > i );
  damagedEntities.m_Size = 0;
  if ( (damagedEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    goto LABEL_27;
}


// CDOTA_Modifier_Invoker_IceWall_SlowAura::~CDOTA_Modifier_Invoker_IceWall_SlowAura  (line 2236, @0x0000000002b99fb0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Invoker_IceWall_SlowAura::~CDOTA_Modifier_Invoker_IceWall_SlowAura(
        CDOTA_Modifier_Invoker_IceWall_SlowAura *const this)
{
  this->_vptr_CDOTA_Buff = &off_44FE2F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Invoker_IceWall_SlowAura::~CDOTA_Modifier_Invoker_IceWall_SlowAura  (line 2236, @0x0000000002b99fd0, libserver.so)  // inlines: ~CDOTA_Modifier_Invoker_IceWall_SlowAura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Invoker_IceWall_SlowAura::~CDOTA_Modifier_Invoker_IceWall_SlowAura(
        CDOTA_Modifier_Invoker_IceWall_SlowAura *const this)
{
  this->_vptr_CDOTA_Buff = &off_44FE2F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Invoker_IceWall_SlowAura::IsAura  (line 2243, @0x0000000002b91920, libserver.so)
bool __fastcall CDOTA_Modifier_Invoker_IceWall_SlowAura::IsAura(CDOTA_Modifier_Invoker_IceWall_SlowAura *const this)
{
  return 1;
}


// CDOTA_Modifier_Invoker_IceWall_SlowAura::GetModifierAura  (line 2244, @0x0000000002b91930, libserver.so)
// strings: "modifier_invoker_ice_wall_slow_debuff"
const char *__fastcall CDOTA_Modifier_Invoker_IceWall_SlowAura::GetModifierAura(
        CDOTA_Modifier_Invoker_IceWall_SlowAura *const this)
{
  return "modifier_invoker_ice_wall_slow_debuff";
}


// CDOTA_Modifier_Invoker_IceWall_SlowAura::GetAuraSearchTeam  (line 2246, @0x0000000002b91940, libserver.so)
int __fastcall CDOTA_Modifier_Invoker_IceWall_SlowAura::GetAuraSearchTeam(
        CDOTA_Modifier_Invoker_IceWall_SlowAura *const this)
{
  return 2;
}


// CDOTA_Modifier_Invoker_IceWall_SlowAura::GetAuraSearchType  (line 2247, @0x0000000002b91950, libserver.so)
int __fastcall CDOTA_Modifier_Invoker_IceWall_SlowAura::GetAuraSearchType(
        CDOTA_Modifier_Invoker_IceWall_SlowAura *const this)
{
  return 3;
}


// CDOTA_Modifier_Invoker_IceWall_SlowAura::GetAuraRadius  (line 2248, @0x0000000002b91960, libserver.so)
int __fastcall CDOTA_Modifier_Invoker_IceWall_SlowAura::GetAuraRadius(
        CDOTA_Modifier_Invoker_IceWall_SlowAura *const this)
{
  return this->radius;
}


// CDOTA_Modifier_Invoker_IceWall_SlowAura::GetAuraDuration  (line 2249, @0x0000000002b91970, libserver.so)
float __fastcall CDOTA_Modifier_Invoker_IceWall_SlowAura::GetAuraDuration(
        CDOTA_Modifier_Invoker_IceWall_SlowAura *const this)
{
  return this->slow_duration;
}


// CDOTA_Modifier_Invoker_IceWall_SlowAura::SetAuraCreateData  (line 2250, @0x0000000002b9dcf0, libserver.so)
// calls: KeyValues::SetInt
void __fastcall CDOTA_Modifier_Invoker_IceWall_SlowAura::SetAuraCreateData(
        CDOTA_Modifier_Invoker_IceWall_SlowAura *const this,
        KeyValues *pKV)
{
  KeyValues::SetInt(pKV, "slow", this->slow);
}


// CDOTA_Modifier_Invoker_IceWall_SlowAura::OnCreated  (line 2262, @0x0000000002b36890, libserver.so)
// calls: KeyValues::GetInt, KeyValues::GetFloat
void __fastcall CDOTA_Modifier_Invoker_IceWall_SlowAura::OnCreated(
        CDOTA_Modifier_Invoker_IceWall_SlowAura *const this,
        KeyValues *pKV)
{
  float v4; // xmm1_4

  this->radius = KeyValues::GetInt(pKV, "radius", 0);
  this->slow = KeyValues::GetInt(pKV, "slow", 0);
  this->slow_duration = KeyValues::GetFloat(pKV, "slow_duration", v4);
}


// CDOTA_Modifier_Invoker_IceWall_SlowDebuff::~CDOTA_Modifier_Invoker_IceWall_SlowDebuff  (line 2273, @0x0000000002b99f60, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Invoker_IceWall_SlowDebuff::~CDOTA_Modifier_Invoker_IceWall_SlowDebuff(
        CDOTA_Modifier_Invoker_IceWall_SlowDebuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_44FE610;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Invoker_IceWall_SlowDebuff::~CDOTA_Modifier_Invoker_IceWall_SlowDebuff  (line 2273, @0x0000000002b99f80, libserver.so)  // inlines: ~CDOTA_Modifier_Invoker_IceWall_SlowDebuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Invoker_IceWall_SlowDebuff::~CDOTA_Modifier_Invoker_IceWall_SlowDebuff(
        CDOTA_Modifier_Invoker_IceWall_SlowDebuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_44FE610;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Invoker_IceWall_SlowDebuff::GetEffectName  (line 2284, @0x0000000002b91980, libserver.so)
// strings: "particles/units/heroes/hero_invoker/invoker_ice_wall_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Invoker_IceWall_SlowDebuff::GetEffectName(
        CDOTA_Modifier_Invoker_IceWall_SlowDebuff *const this)
{
  return "particles/units/heroes/hero_invoker/invoker_ice_wall_debuff.vpcf";
}


// CDOTA_Modifier_Invoker_IceWall_SlowDebuff::GetStatusEffectName  (line 2285, @0x0000000002b91990, libserver.so)
// strings: "particles/status_fx/status_effect_frost.vpcf"
const char *__fastcall CDOTA_Modifier_Invoker_IceWall_SlowDebuff::GetStatusEffectName(
        CDOTA_Modifier_Invoker_IceWall_SlowDebuff *const this)
{
  return "particles/status_fx/status_effect_frost.vpcf";
}


// CDOTA_Modifier_Invoker_IceWall_SlowDebuff::StatusEffectPriority  (line 2286, @0x0000000002b919a0, libserver.so)
int __fastcall CDOTA_Modifier_Invoker_IceWall_SlowDebuff::StatusEffectPriority(
        CDOTA_Modifier_Invoker_IceWall_SlowDebuff *const this)
{
  return 10;
}


// CDOTA_Modifier_Invoker_IceWall_SlowDebuff::OnCreated  (line 2297, @0x0000000002b36810, libserver.so)
// calls: KeyValues::GetInt
void __fastcall CDOTA_Modifier_Invoker_IceWall_SlowDebuff::OnCreated(
        CDOTA_Modifier_Invoker_IceWall_SlowDebuff *const this,
        KeyValues *pKV)
{
  this->slow = KeyValues::GetInt(pKV, "slow", 0);
}


// CDOTA_Modifier_Invoker_IceWall_SlowDebuff::DeclareFunctions  (line 2304, @0x0000000002b35a60, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Invoker_IceWall_SlowDebuff::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Invoker_IceWall_SlowDebuff::DeclareFunctions(
        CDOTA_Modifier_Invoker_IceWall_SlowDebuff *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Invoker_IceWall_SlowDebuff::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Invoker_IceWall_SlowDebuff::GetModifierMoveSpeedBonus_Percentage  (line 2311, @0x0000000002b37870, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
ModifierVariant_t __fastcall CDOTA_Modifier_Invoker_IceWall_SlowDebuff::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Invoker_IceWall_SlowDebuff *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetParent(this) != 0 && (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x200) != 0 )
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
    return 1uLL;
  }
  else
  {
    *v3.m128i_i32 = this->slow;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  }
  return result;
}


// CDOTA_Ability_Invoker_DeafeningBlast::~CDOTA_Ability_Invoker_DeafeningBlast  (line 2330, @0x0000000002bc3da0, libserver.so)  // inlines: Purge, ~CDOTA_Ability_Invoker_InvokedBase, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Invoker_DeafeningBlast::~CDOTA_Ability_Invoker_DeafeningBlast(
        CDOTA_Ability_Invoker_DeafeningBlast *const this)
{
  this->_vptr_IHandleEntity = &off_44FE970;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
    if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_44F3C70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Invoker_DeafeningBlast::~CDOTA_Ability_Invoker_DeafeningBlast  (line 2330, @0x0000000002bc40b0, libserver.so)  // inlines: Purge, ~CDOTA_Ability_Invoker_DeafeningBlast, ~CDOTA_Ability_Invoker_InvokedBase, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Invoker_DeafeningBlast::~CDOTA_Ability_Invoker_DeafeningBlast(
        CDOTA_Ability_Invoker_DeafeningBlast *const this)
{
  this->_vptr_IHandleEntity = &off_44FE970;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
    if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
  }
  this->_vptr_IHandleEntity = &off_44F3C70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Invoker_DeafeningBlast::Schema_DynamicBinding  (line 2332, @0x0000000002b919b0, libserver.so)
// globals: CDOTA_Ability_Invoker_DeafeningBlast::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_DeafeningBlast::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_DeafeningBlast *const this)
{
  return CDOTA_Ability_Invoker_DeafeningBlast::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_DeafeningBlast::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2332, @0x0000000002b919c0, libserver.so)
// globals: CDOTA_Ability_Invoker_DeafeningBlast::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_DeafeningBlast::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_DeafeningBlast::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_DeafeningBlast::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_DeafeningBlast::CEntityInstanceEntityClass::DestructInstance  (line 2332, @0x0000000002b919d0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Invoker_DeafeningBlast>
void __fastcall CDOTA_Ability_Invoker_DeafeningBlast::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Invoker_DeafeningBlast::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Invoker_DeafeningBlast::CEntityInstanceEntityClass::FreeInstance  (line 2332, @0x0000000002b919f0, libserver.so)
void __fastcall CDOTA_Ability_Invoker_DeafeningBlast::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Invoker_DeafeningBlast::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Invoker_DeafeningBlast::CEntityInstanceEntityClass::CanAllocate  (line 2332, @0x0000000002b91a10, libserver.so)
bool __fastcall CDOTA_Ability_Invoker_DeafeningBlast::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Invoker_DeafeningBlast::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Invoker_DeafeningBlast::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2332, @0x0000000002b91a20, libserver.so)
// globals: CDOTA_Ability_Invoker_DeafeningBlast::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Invoker_DeafeningBlast::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Invoker_DeafeningBlast::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_DeafeningBlast::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_DeafeningBlast::CEntityInstanceEntityClass::AllocateInstance  (line 2332, @0x0000000002b98320, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Invoker_DeafeningBlast::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Invoker_DeafeningBlast::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 968);
  memset(v1, 0, 0x3C8u);
  return v1;
}


// CDOTA_Ability_Invoker_DeafeningBlast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2332, @0x0000000002bab1f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Invoker_DeafeningBlast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_DeafeningBlast::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Invoker_DeafeningBlast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2332, @0x0000000002bab210, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Invoker_DeafeningBlast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_DeafeningBlast::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Invoker_DeafeningBlast::CEntityInstanceEntityClass::ConstructInstance  (line 2332, @0x0000000002bad170, libserver.so)  // inlines: CDOTA_Ability_Invoker_DeafeningBlast, CDOTA_Ability_Invoker_InvokedBase, CNetworkVarBase, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_Invoker_DeafeningBlast>, NetworkStateChanged
// calls: CDOTABaseAbility::CDOTABaseAbility, CBaseEntity::NetworkStateChanged, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Ability_Invoker_DeafeningBlast::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Invoker_DeafeningBlast::CEntityInstanceEntityClass *const this,
        void *p)
{
  __int64 v3; // rax
  __int64 v4; // rax

  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44F3C70;
    *(p + 228) = -1;
    CBaseEntity::NetworkStateChanged(p, 0x390u, -1, -1);
    v3 = *p;
    *(p + 229) = -1;
    (*(v3 + 176))(p, 916, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v4 = *p;
    *(p + 230) = -1;
    (*(v4 + 176))(p, 920, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *(p + 236) = 0;
    *p = &off_44FE970;
    *(p + 119) = 0;
    *(p + 240) = 0;
    *(p + 241) = 0;
  }
  return p;
}


// CDOTA_Ability_Invoker_DeafeningBlast::GetEntityClassInternal  (line 2332, @0x0000000002bca910, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "invoker_deafening_blast", "CDOTA_Ability_Invoker_DeafeningBlast"
// globals: `guard variable for'CDOTA_Ability_Invoker_DeafeningBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_DeafeningBlastClass, CDOTA_Ability_Invoker_DeafeningBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_DeafeningBlastClass, __dso_handle, CDOTA_Ability_Invoker_DeafeningBlast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Invoker_DeafeningBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_DeafeningBlastClassInfo, CDOTA_Ability_Invoker_DeafeningBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_DeafeningBlastClassInfo
CEntityClass *__cdecl CDOTA_Ability_Invoker_DeafeningBlast::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Invoker_DeafeningBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_DeafeningBlastClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_DeafeningBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_DeafeningBlastClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Invoker_DeafeningBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_DeafeningBlastClass);
    CDOTA_Ability_Invoker_DeafeningBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_DeafeningBlastClass._vptr_CEntityClass = off_44FE8F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_DeafeningBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_DeafeningBlastClass);
    __cxa_atexit(
      CDOTA_Ability_Invoker_DeafeningBlast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Invoker_DeafeningBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_DeafeningBlastClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Invoker_DeafeningBlastClass != 0 )
    return &CDOTA_Ability_Invoker_DeafeningBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_DeafeningBlastClass;
  if ( `guard variable for'CDOTA_Ability_Invoker_DeafeningBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_DeafeningBlastClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_DeafeningBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_DeafeningBlastClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Ability_Invoker_InvokedBase::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Invoker_DeafeningBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_DeafeningBlastClassInfo,
      "CDOTA_Ability_Invoker_DeafeningBlast",
      "invoker_deafening_blast",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_DeafeningBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_DeafeningBlastClassInfo);
  }
  CDOTA_Ability_Invoker_DeafeningBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_DeafeningBlastClass.m_pClassInfo = &CDOTA_Ability_Invoker_DeafeningBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_DeafeningBlastClassInfo;
  CDOTA_Ability_Invoker_DeafeningBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_DeafeningBlastClass.m_pBaseClassInfo = CDOTA_Ability_Invoker_DeafeningBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_DeafeningBlastClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Invoker_DeafeningBlastClass = &CDOTA_Ability_Invoker_DeafeningBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_DeafeningBlastClass;
  CDOTA_Ability_Invoker_DeafeningBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_DeafeningBlastClassInfo.m_pClass = &CDOTA_Ability_Invoker_DeafeningBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_DeafeningBlastClass;
  CDOTA_Ability_Invoker_DeafeningBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_DeafeningBlastClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Invoker_DeafeningBlastClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Invoker_DeafeningBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_DeafeningBlastClass;
}


// CDOTA_Ability_Invoker_DeafeningBlast::GetAssociatedSecondaryAbilities  (line 2339, @0x0000000002b91a30, libserver.so)
// strings: "invoker_wex;invoker_quas;invoker_exort"
const char *__fastcall CDOTA_Ability_Invoker_DeafeningBlast::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Invoker_DeafeningBlast *const this)
{
  return "invoker_wex;invoker_quas;invoker_exort";
}


// CDOTA_Ability_Invoker_DeafeningBlast::YouForgotToImplementOrDeclareServerClass  (line 2352, @0x0000000002b35a80, libserver.so)
int __fastcall CDOTA_Ability_Invoker_DeafeningBlast::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Invoker_DeafeningBlast *const this)
{
  return 0;
}


// CDOTA_Ability_Invoker_DeafeningBlast::GetServerClass  (line 2352, @0x0000000002b4ca20, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Invoker_DeafeningBlast::GetServerClass(
        CDOTA_Ability_Invoker_DeafeningBlast *const this)
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


// CDOTA_Ability_Invoker_DeafeningBlast::GetBehavior  (line 2359, @0x0000000002b35a90, libserver.so)
int __fastcall CDOTA_Ability_Invoker_DeafeningBlast::GetBehavior(CDOTA_Ability_Invoker_DeafeningBlast *const this)
{
  return 134217809;
}


// CDOTA_Ability_Invoker_DeafeningBlast::OnSpellStart  (line 2372, @0x0000000002b77c20, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetExortLevel, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetQuasLevel, GetSerialNumber, GetWexLevel, NormalizeInPlace, QAngle, Set, VectorMultiply, VectorSubtract, operator*, operator-, operator=, sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorPosition, VectorNormalize, CDOTA_BaseNPC::FindAbilityByName, VectorAngles, AngleVectors, CDOTA_ProjectileManager::CreateLinearProjectile (15 total)
// strings: "end_vision_duration", "disarm_duration", "radius_start", "radius_end", "travel_distance", "particles/units/heroes/hero_invoker/invoker_deafening_blast.vpcf" (8 total)
void __fastcall CDOTA_Ability_Invoker_DeafeningBlast::OnSpellStart(CDOTA_Ability_Invoker_DeafeningBlast *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  int m_Value; // edx
  CDOTA_BaseNPC *v4; // rax
  int v5; // edx
  CDOTA_BaseNPC *v6; // rax
  int v7; // edx
  int LevelSpecialValue; // r14d
  int v9; // r13d
  int v10; // r15d
  CDOTA_BaseNPC *v11; // rax
  const Vector *AbsOrigin; // r12
  vec_t v13; // xmm0_4
  vec_t v14; // xmm1_4
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v17; // rax
  const Vector *v18; // rax
  vec_t v19; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  CDOTA_BaseNPC *v21; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v23; // eax
  __int16 v24; // cx
  CDOTA_BaseNPC *v25; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int v27; // r12d
  float v28; // xmm0_4
  CDOTA_BaseNPC *v29; // rax
  CDOTA_BaseNPC *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  const QAngle *AbsAngles; // rax
  int travel_distance; // [rsp+Ch] [rbp-F4h]
  float travel_distancea; // [rsp+Ch] [rbp-F4h]
  Vector vDir; // [rsp+10h] [rbp-F0h] BYREF
  QAngle startAngle; // [rsp+20h] [rbp-E0h] BYREF
  QAngle angles; // [rsp+30h] [rbp-D0h] BYREF
  Vector vForward; // [rsp+40h] [rbp-C0h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+50h] [rbp-B0h] BYREF

  this->end_vision_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "end_vision_duration", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    m_Value = this->m_nExortLevel.m_Value + 1;
  else
    m_Value = this->m_nExortLevel.m_Value;
  this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage", m_Value, 0);
  v4 = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(v4) )
    v5 = this->m_nQuasLevel.m_Value + 1;
  else
    v5 = this->m_nQuasLevel.m_Value;
  this->knockback_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "knockback_duration", v5, 0);
  v6 = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(v6) )
    v7 = this->m_nWexLevel.m_Value + 1;
  else
    v7 = this->m_nWexLevel.m_Value;
  this->disarm_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "disarm_duration", v7, 0);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius_start", -1, 0);
  v9 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius_end", -1, 0);
  travel_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "travel_distance", -1, 0);
  v10 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "travel_speed", -1, 0);
  v11 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
  *&info.pszEffectName = CDOTABaseAbility::GetCursorPosition(this);
  v13 = *(&info.pszEffectName + 1) - AbsOrigin->y;
  v14 = *&info.pszEffectName - AbsOrigin->x;
  vDir.z = 0.0;
  vDir.y = v13;
  vDir.x = v14;
  if ( VectorNormalize(&vDir) < 0.0099999998 )
  {
    v31 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v31);
    AngleVectors(AbsAngles, &vDir, 0, 0);
  }
  info.bHasFrontalCone = 1;
  info.hSource.m_Index = -1;
  info.fDistance = 0.0;
  info.fStartRadius = 0.0;
  info.fEndRadius = 0.0;
  y = vec3_origin.y;
  info.bCheckStartPosition = 0;
  z = vec3_origin.z;
  info.vSpawnOrigin.x = vec3_origin.x;
  info.vSpawnOrigin.y = y;
  info.vVelocity.x = vec3_origin.x;
  info.vVelocity.y = y;
  info.vAcceleration.x = vec3_origin.x;
  info.vAcceleration.y = y;
  info.vSpawnOrigin.z = z;
  info.vVelocity.z = z;
  info.vAcceleration.z = z;
  info.pszEffectName = "particles/units/heroes/hero_invoker/invoker_deafening_blast.vpcf";
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
  v17 = CDOTABaseAbility::GetCaster(this);
  v18 = CBaseEntity::GetAbsOrigin(v17);
  info.vSpawnOrigin.x = v18->x;
  info.vSpawnOrigin.y = v18->y;
  v19 = v18->z;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  info.vSpawnOrigin.z = v19;
  info.fDistance = (travel_distance + (vptr_IHandleEntity[228])(this));
  info.fStartRadius = LevelSpecialValue;
  info.fEndRadius = v9;
  v21 = CDOTABaseAbility::GetCaster(this);
  if ( v21 != 0 && (m_pEntity = v21->m_pEntity) != 0 )
  {
    v23 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v24 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v24 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(info.hSource.m_Index) = v24 | info.hSource.m_Index & 0x8000;
    info.hSource.m_Index = (v23 << 15) | info.hSource.m_Index & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  info.iUnitTargetTeam = 2;
  info.iUnitTargetType = 3;
  info.bHasFrontalCone = 0;
  v25 = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v25, "special_bonus_unique_invoker_2", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
  {
    v27 = 0;
    VectorAngles(&vDir, &startAngle);
    travel_distancea = v10;
    do
    {
      v28 = v27;
      v27 += 30;
      angles.x = 0.0;
      angles.z = 0.0;
      angles.y = v28 + startAngle.y;
      AngleVectors(&angles, &vForward, 0, 0);
      info.vVelocity.y = vForward.y * travel_distancea;
      info.vVelocity.z = vForward.z * travel_distancea;
      info.vVelocity.x = travel_distancea * vForward.x;
      CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
    }
    while ( v27 != 360 );
  }
  else
  {
    info.vVelocity.y = vDir.y * v10;
    info.vVelocity.z = vDir.z * v10;
    info.vVelocity.x = v10 * vDir.x;
    CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  }
  v29 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v29, 1590, 0.1, 0.1, 9, 0, 1.0);
  v30 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v30, "Hero_Invoker.DeafeningBlast", 0.0, 0, 0);
}


// CDOTA_Ability_Invoker_DeafeningBlast::OnProjectileHit  (line 2451, @0x0000000002b842a0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, HasElement, IndexToIdentity, IsValid, Length2DSqr, LookupEntity, NormalizeInPlace, ToDOTABaseNPC, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=, operator[]
// calls: __stack_chk_fail, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTABaseAbility::GetCaster, ApplyDamage, CBaseEntity::GetAbsOrigin, VectorNormalize, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CUtlMemory<CHandle<CBaseEntity>, int>::Grow, _Unwind_Resume
// strings: "modifier_invoker_deafening_blast_knockback", "disarm_duration", "push_vec_x", "push_vec_y"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Invoker_DeafeningBlast::OnProjectileHit(
        CDOTA_Ability_Invoker_DeafeningBlast *const this,
        const CHandle<CBaseEntity> *hTarget,
        const Vector *const vLocation)
{
  CHandle<CBaseEntity> v5; // eax
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  vec_t v14; // xmm0_4
  vec_t v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm1_4
  float v19; // xmm1_4
  CDOTA_BaseNPC *v20; // rax
  __int64 m_Size; // r14
  int v22; // eax
  CHandle<CBaseEntity> *v23; // rax
  float flDamage; // [rsp+Ch] [rbp-54h]
  Vector vToTarget; // [rsp+10h] [rbp-50h] BYREF
  KeyValues kv; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-28h]

  v27 = __readfsqword(0x28u);
  v5.m_Index = hTarget->m_Index;
  if ( hTarget->m_Index + 2 > 1 )
  {
    m_Index_low = LOWORD(hTarget->m_Index);
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[m_Index_low & 0x1FF];
      if ( v8 != 0 && v5.m_Index == v8->m_EHandle.m_Index )
      {
        m_pInstance = v8->m_pInstance;
        if ( v8->m_pInstance != 0
          && m_pInstance->m_bIsDOTANPC
          && CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
               &this->m_hHitEntities,
               hTarget) < 0 )
        {
          flDamage = this->damage;
          Caster = CDOTABaseAbility::GetCaster(this);
          ApplyDamage(Caster, m_pInstance, this, flDamage, 2, 0);
          AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
          v14 = AbsOrigin->z - vLocation->z;
          v15 = AbsOrigin->x - vLocation->x;
          vToTarget.y = AbsOrigin->y - vLocation->y;
          vToTarget.z = v14;
          vToTarget.x = v15;
          VectorNormalize(&vToTarget);
          if ( ((vToTarget.x * vToTarget.x) + (vToTarget.y * vToTarget.y)) < 0.050000001 )
          {
            vToTarget.x = 1.0;
            vToTarget.y = 0.0;
            vToTarget.z = 0.0;
          }
          KeyValues::KeyValues(&kv, "modifier_invoker_deafening_blast_knockback");
          KeyValues::SetFloat(&kv, "duration", v16);
          KeyValues::SetFloat(&kv, "disarm_duration", v17);
          KeyValues::SetFloat(&kv, "push_vec_x", v18);
          KeyValues::SetFloat(&kv, "push_vec_y", v19);
          v20 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(m_pInstance, v20, this, "modifier_invoker_deafening_blast_knockback", &kv, 0);
          m_Size = this->m_hHitEntities.m_Size;
          v22 = this->m_hHitEntities.m_Size;
          if ( m_Size == this->m_hHitEntities.m_Memory.m_nAllocationCount )
          {
            CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hHitEntities.m_Memory, 1);
            v22 = this->m_hHitEntities.m_Size;
          }
          this->m_hHitEntities.m_Size = v22 + 1;
          v23 = &this->m_hHitEntities.m_Memory.m_pMemory[m_Size];
          if ( v23 != 0 )
            v23->m_Index = hTarget->m_Index;
          KeyValues::~KeyValues(&kv);
        }
      }
    }
  }
  return 0;
}


// CDOTA_Modifier_Invoker_DeafeningBlast_Knockback::~CDOTA_Modifier_Invoker_DeafeningBlast_Knockback  (line 2485, @0x0000000002b99ef0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Invoker_DeafeningBlast_Knockback::~CDOTA_Modifier_Invoker_DeafeningBlast_Knockback(
        CDOTA_Modifier_Invoker_DeafeningBlast_Knockback *const this)
{
  this->_vptr_CDOTA_Buff = &off_44FF450;
  this->_vptr_CHorizontalMotionController = &off_44FF740;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Invoker_DeafeningBlast_Knockback::~CDOTA_Modifier_Invoker_DeafeningBlast_Knockback  (line 2485, @0x0000000002b99f20, libserver.so)  // inlines: ~CDOTA_Modifier_Invoker_DeafeningBlast_Knockback
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Invoker_DeafeningBlast_Knockback::~CDOTA_Modifier_Invoker_DeafeningBlast_Knockback(
        CDOTA_Modifier_Invoker_DeafeningBlast_Knockback *const this)
{
  this->_vptr_CDOTA_Buff = &off_44FF450;
  this->_vptr_CHorizontalMotionController = &off_44FF740;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Invoker_DeafeningBlast_Knockback::GetEffectName  (line 2497, @0x0000000002b91a40, libserver.so)
// strings: "particles/units/heroes/hero_invoker/invoker_deafening_blast_knockback_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Invoker_DeafeningBlast_Knockback::GetEffectName(
        CDOTA_Modifier_Invoker_DeafeningBlast_Knockback *const this)
{
  return "particles/units/heroes/hero_invoker/invoker_deafening_blast_knockback_debuff.vpcf";
}


// CDOTA_Modifier_Invoker_DeafeningBlast_Knockback::GetStatusEffectName  (line 2498, @0x0000000002ba2320, libserver.so)
// calls: GetParticleManager, CDOTA_Buff::GetParent, CDOTA_ParticleManager::GetParticleReplacement
// strings: "particles/status_fx/status_effect_iceblast.vpcf"
const char *__fastcall CDOTA_Modifier_Invoker_DeafeningBlast_Knockback::GetStatusEffectName(
        CDOTA_Modifier_Invoker_DeafeningBlast_Knockback *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  GetParticleManager();
  Parent = CDOTA_Buff::GetParent(this);
  return CDOTA_ParticleManager::GetParticleReplacement("particles/status_fx/status_effect_iceblast.vpcf", Parent);
}


// CDOTA_Modifier_Invoker_DeafeningBlast_Knockback::StatusEffectPriority  (line 2499, @0x0000000002b91a50, libserver.so)
int __fastcall CDOTA_Modifier_Invoker_DeafeningBlast_Knockback::StatusEffectPriority(
        CDOTA_Modifier_Invoker_DeafeningBlast_Knockback *const this)
{
  return 49;
}


// CDOTA_Modifier_Invoker_DeafeningBlast_Knockback::IsPurgable  (line 2501, @0x0000000002b91a60, libserver.so)
bool __fastcall CDOTA_Modifier_Invoker_DeafeningBlast_Knockback::IsPurgable(
        CDOTA_Modifier_Invoker_DeafeningBlast_Knockback *const this)
{
  return 0;
}


// CDOTA_Modifier_Invoker_DeafeningBlast_Knockback::IsHorizontalMotionValidToApply  (line 2505, @0x0000000002b91a70, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Invoker_DeafeningBlast_Knockback::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_Invoker_DeafeningBlast_Knockback *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Invoker_DeafeningBlast_Knockback::IsMotionController  (line 2507, @0x0000000002b91aa0, libserver.so)
bool __fastcall CDOTA_Modifier_Invoker_DeafeningBlast_Knockback::IsMotionController(
        CDOTA_Modifier_Invoker_DeafeningBlast_Knockback *const this)
{
  return 1;
}


// CDOTA_Modifier_Invoker_DeafeningBlast_Knockback::OnCreated  (line 2523, @0x0000000002b39490, libserver.so)  // inlines: DOTAGameRules, GetGameTime
// calls: KeyValues::GetFloat, CDOTA_Buff::GetParent, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTALocomotor::ApplyHorizontalMotionController, CDOTA_Buff::Destroy, __stack_chk_fail, _Unwind_Resume
// strings: "disarm_duration", "push_vec_x", "push_vec_y", "modifier_invoker_deafening_blast_disarm"
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_Modifier_Invoker_DeafeningBlast_Knockback::OnCreated(
        CDOTA_Modifier_Invoker_DeafeningBlast_Knockback *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTALocomotor *v13; // rax
  __int64 v14; // [rsp-8h] [rbp-48h] BYREF
  unsigned __int64 kv_16; // [rsp+10h] [rbp-30h] OVERLAPPED

  kv_16 = __readfsqword(0x28u);
  this->disarm_duration = KeyValues::GetFloat(pKV, "disarm_duration", v2);
  this->m_vPushDir.x = KeyValues::GetFloat(pKV, "push_vec_x", v5);
  this->m_vPushDir.y = KeyValues::GetFloat(pKV, "push_vec_y", v6);
  v7 = 0.0;
  this->m_vPushDir.z = 0.0;
  if ( g_pGameRules != 0 )
    v7 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_flStartTime = v7;
  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x200) == 0 )
  {
    KeyValues::KeyValues(&v14, "modifier_invoker_deafening_blast_disarm");
    KeyValues::SetFloat(&v14, "duration", v8);
    Ability = CDOTA_Buff::GetAbility(this);
    Caster = CDOTA_Buff::GetCaster(this);
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::AddNewModifier(Parent, Caster, Ability, "modifier_invoker_deafening_blast_disarm", &v14, 0);
    KeyValues::~KeyValues(&v14);
  }
  v12 = CDOTA_Buff::GetParent(this);
  v13 = (*(v12->_vptr_IHandleEntity + 376))(v12);
  if ( !CDOTALocomotor::ApplyHorizontalMotionController(v13, &this->CHorizontalMotionController, 0) )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Invoker_DeafeningBlast_Knockback::OnDestroy  (line 2551, @0x0000000002b39620, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController
void __fastcall CDOTA_Modifier_Invoker_DeafeningBlast_Knockback::OnDestroy(
        CDOTA_Modifier_Invoker_DeafeningBlast_Knockback *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveHorizontalMotionController(v3, &this->CHorizontalMotionController);
}


// CDOTA_Modifier_Invoker_DeafeningBlast_Knockback::UpdateHorizontalMotion  (line 2561, @0x0000000002b3b4f0, libserver.so)  // inlines: DOTAGameRules, GetGameTime, VectorAdd, VectorMultiply, operator*, operator+
// calls: CBaseEntity::GetAbsOrigin, CBaseEntity::SetAbsOrigin, CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CGridNav::DestroyTreesAroundPoint, expf
void __fastcall CDOTA_Modifier_Invoker_DeafeningBlast_Knockback::UpdateHorizontalMotion(
        CDOTA_Modifier_Invoker_DeafeningBlast_Knockback *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  float v6; // xmm0_4
  float v7; // xmm2_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  const Vector *AbsOrigin; // rax
  vec_t v13; // xmm0_4
  vec_t v14; // xmm2_4
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v16; // r12d
  CDOTA_BaseNPC *Parent; // rax
  float v18; // xmm3_4
  float v19; // xmm0_4
  float v20; // [rsp+4h] [rbp-2Ch]
  float v21; // [rsp+8h] [rbp-28h]
  float dta; // [rsp+Ch] [rbp-24h]
  float dtb; // [rsp+Ch] [rbp-24h]
  float dtc; // [rsp+Ch] [rbp-24h]
  Vector vOrigin; // [rsp+10h] [rbp-20h] BYREF
  Vector v26; // 0:xmm0_8.8,8:xmm1_4.4

  dta = *&a3;
  v6 = (*(this->_vptr_CDOTA_Buff + 31))(this, a3, dt);
  v7 = 0.0;
  v8 = v6 / 3.0;
  v9 = dta;
  if ( g_pGameRules != 0 )
    v7 = *&g_pGameRules[18].m_szQuestName[20];
  v10 = v7 - this->m_flStartTime;
  if ( v10 > v8 )
  {
    v19 = expf(-0.67339998 * (v10 - v8));
    v9 = dta;
    v11 = v19 * 200.0;
  }
  else
  {
    v11 = 200.0;
  }
  v20 = (this->m_vPushDir.x * v11) * v9;
  v21 = (this->m_vPushDir.y * v11) * v9;
  dtb = (v11 * this->m_vPushDir.z) * v9;
  AbsOrigin = CBaseEntity::GetAbsOrigin(me);
  v13 = dtb + AbsOrigin->z;
  v14 = v20 + AbsOrigin->x;
  vOrigin.y = v21 + AbsOrigin->y;
  vOrigin.z = v13;
  vOrigin.x = v14;
  CBaseEntity::SetAbsOrigin(me, &vOrigin);
  Caster = CDOTA_Buff::GetCaster(this);
  v16 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
  dtc = CDOTA_Buff::GetParent(this)->m_flHullRadius;
  Parent = CDOTA_Buff::GetParent(this);
  v26 = *CBaseEntity::GetAbsOrigin(Parent);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 1, v16, v26, dtc, v18);
}


// CDOTA_Modifier_Invoker_DeafeningBlast_Knockback::OnHorizontalMotionInterrupted  (line 2587, @0x0000000002b37850, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Invoker_DeafeningBlast_Knockback::OnHorizontalMotionInterrupted(
        CDOTA_Modifier_Invoker_DeafeningBlast_Knockback *const this)
{
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Invoker_DeafeningBlast_Disarm::~CDOTA_Modifier_Invoker_DeafeningBlast_Disarm  (line 2598, @0x0000000002b9c0e0, libserver.so)  // inlines: ~CDOTA_Modifier_Disarmed
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Invoker_DeafeningBlast_Disarm::~CDOTA_Modifier_Invoker_DeafeningBlast_Disarm(
        CDOTA_Modifier_Invoker_DeafeningBlast_Disarm *const this)
{
  this->_vptr_CDOTA_Buff = &off_411E9D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Invoker_DeafeningBlast_Disarm::~CDOTA_Modifier_Invoker_DeafeningBlast_Disarm  (line 2598, @0x0000000002b9c100, libserver.so)  // inlines: ~CDOTA_Modifier_Disarmed, ~CDOTA_Modifier_Invoker_DeafeningBlast_Disarm
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Invoker_DeafeningBlast_Disarm::~CDOTA_Modifier_Invoker_DeafeningBlast_Disarm(
        CDOTA_Modifier_Invoker_DeafeningBlast_Disarm *const this)
{
  this->_vptr_CDOTA_Buff = &off_411E9D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Invoker_DeafeningBlast_Disarm::IsPurgable  (line 2603, @0x0000000002b91ab0, libserver.so)
bool __fastcall CDOTA_Modifier_Invoker_DeafeningBlast_Disarm::IsPurgable(
        CDOTA_Modifier_Invoker_DeafeningBlast_Disarm *const this)
{
  return 0;
}


// CDOTA_Modifier_Invoker_DeafeningBlast_Disarm::GetEffectName  (line 2605, @0x0000000002b91ac0, libserver.so)
// strings: "particles/units/heroes/hero_invoker/invoker_deafening_blast_disarm_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Invoker_DeafeningBlast_Disarm::GetEffectName(
        CDOTA_Modifier_Invoker_DeafeningBlast_Disarm *const this)
{
  return "particles/units/heroes/hero_invoker/invoker_deafening_blast_disarm_debuff.vpcf";
}


// CDOTA_Modifier_Invoker_DeafeningBlast_Disarm::GetEffectAttachType  (line 2606, @0x0000000002b91ad0, libserver.so)
int __fastcall CDOTA_Modifier_Invoker_DeafeningBlast_Disarm::GetEffectAttachType(
        CDOTA_Modifier_Invoker_DeafeningBlast_Disarm *const this)
{
  return 7;
}


// CDOTA_Modifier_Invoker_DeafeningBlast_Disarm::ShouldUseOverheadOffset  (line 2607, @0x0000000002b91ae0, libserver.so)
bool __fastcall CDOTA_Modifier_Invoker_DeafeningBlast_Disarm::ShouldUseOverheadOffset(
        CDOTA_Modifier_Invoker_DeafeningBlast_Disarm *const this)
{
  return 1;
}


// CDOTA_Modifier_Invoker_DeafeningBlast_Disarm::GetStatusEffectName  (line 2608, @0x0000000002b91af0, libserver.so)
// strings: "particles/status_fx/status_effect_iceblast.vpcf"
const char *__fastcall CDOTA_Modifier_Invoker_DeafeningBlast_Disarm::GetStatusEffectName(
        CDOTA_Modifier_Invoker_DeafeningBlast_Disarm *const this)
{
  return "particles/status_fx/status_effect_iceblast.vpcf";
}


// CDOTA_Modifier_Invoker_DeafeningBlast_Disarm::StatusEffectPriority  (line 2609, @0x0000000002b91b00, libserver.so)
int __fastcall CDOTA_Modifier_Invoker_DeafeningBlast_Disarm::StatusEffectPriority(
        CDOTA_Modifier_Invoker_DeafeningBlast_Disarm *const this)
{
  return 40;
}


// CDOTA_Modifier_Invoker_Instance::~CDOTA_Modifier_Invoker_Instance  (line 2618, @0x0000000002b99db0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Invoker_Instance::~CDOTA_Modifier_Invoker_Instance(
        CDOTA_Modifier_Invoker_Instance *const this)
{
  this->_vptr_CDOTA_Buff = &off_45005B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Invoker_Instance::~CDOTA_Modifier_Invoker_Instance  (line 2618, @0x0000000002b99dd0, libserver.so)  // inlines: ~CDOTA_Modifier_Invoker_Instance
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Invoker_Instance::~CDOTA_Modifier_Invoker_Instance(
        CDOTA_Modifier_Invoker_Instance *const this)
{
  this->_vptr_CDOTA_Buff = &off_45005B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Invoker_Instance::GetAttributes  (line 2625, @0x0000000002b91b10, libserver.so)
int __fastcall CDOTA_Modifier_Invoker_Instance::GetAttributes(CDOTA_Modifier_Invoker_Instance *const this)
{
  return 3;
}


// CDOTA_Modifier_Invoker_Instance::IsPurgable  (line 2626, @0x0000000002b91b20, libserver.so)
bool __fastcall CDOTA_Modifier_Invoker_Instance::IsPurgable(CDOTA_Modifier_Invoker_Instance *const this)
{
  return 0;
}


// CDOTA_Ability_Invoker_Invoke::~CDOTA_Ability_Invoker_Invoke  (line 2637, @0x0000000002ba1730, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Invoker_Invoke::~CDOTA_Ability_Invoker_Invoke(CDOTA_Ability_Invoker_Invoke *const this)
{
  this->_vptr_IHandleEntity = &off_44FFB30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Invoker_Invoke::~CDOTA_Ability_Invoker_Invoke  (line 2637, @0x0000000002ba1750, libserver.so)  // inlines: ~CDOTA_Ability_Invoker_Invoke
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Invoker_Invoke::~CDOTA_Ability_Invoker_Invoke(CDOTA_Ability_Invoker_Invoke *const this)
{
  this->_vptr_IHandleEntity = &off_44FFB30;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Invoker_Invoke::Schema_DynamicBinding  (line 2639, @0x0000000002b91b30, libserver.so)
// globals: CDOTA_Ability_Invoker_Invoke::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_Invoke::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_Invoke *const this)
{
  return CDOTA_Ability_Invoker_Invoke::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_Invoke::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 2639, @0x0000000002b91b40, libserver.so)
// globals: CDOTA_Ability_Invoker_Invoke::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_Invoke::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_Invoke::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_Invoke::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_Invoke::CEntityInstanceEntityClass::DestructInstance  (line 2639, @0x0000000002b91b50, libserver.so)  // inlines: Destruct<CDOTA_Ability_Invoker_Invoke>
void __fastcall CDOTA_Ability_Invoker_Invoke::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Invoker_Invoke::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Invoker_Invoke::CEntityInstanceEntityClass::FreeInstance  (line 2639, @0x0000000002b91b70, libserver.so)
void __fastcall CDOTA_Ability_Invoker_Invoke::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Invoker_Invoke::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Invoker_Invoke::CEntityInstanceEntityClass::CanAllocate  (line 2639, @0x0000000002b91b90, libserver.so)
bool __fastcall CDOTA_Ability_Invoker_Invoke::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Invoker_Invoke::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Invoker_Invoke::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 2639, @0x0000000002b91ba0, libserver.so)
// globals: CDOTA_Ability_Invoker_Invoke::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Invoker_Invoke::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Invoker_Invoke::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_Invoke::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_Invoke::CEntityInstanceEntityClass::AllocateInstance  (line 2639, @0x0000000002b98360, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Invoker_Invoke::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Invoker_Invoke::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1008);
  memset(v1, 0, 0x3F0u);
  return v1;
}


// CDOTA_Ability_Invoker_Invoke::CEntityInstanceEntityClass::ConstructInstance  (line 2639, @0x0000000002ba8e80, libserver.so)  // inlines: CDOTA_Ability_Invoker_Invoke, CEntityHandle, CHandle, Construct<CDOTA_Ability_Invoker_Invoke>, Set, operator=
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Invoker_Invoke::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Invoker_Invoke::CEntityInstanceEntityClass *const this,
        void *p)
{
  char *v3; // rax
  _DWORD *v4; // rdx
  __int64 v5; // rcx

  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44FFB30;
    v3 = p + 952;
    v4 = p + 952;
    do
      *v4++ = -1;
    while ( v4 != (p + 992) );
    *(p + 115) = 0;
    v5 = 0;
    *(p + 116) = 0;
    *(p + 117) = 0;
    while ( 1 )
    {
      *v3 = -1;
      if ( v5 == 36 )
        break;
      v3 = p + v5 + 956;
      v5 += 4;
    }
    *(p + 948) = 0;
    *(p + 236) = 0;
    *(p + 248) = 1131020288;
    *(p + 249) = 1126891520;
    *(p + 250) = 1120403456;
  }
  return p;
}


// CDOTA_Ability_Invoker_Invoke::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2639, @0x0000000002bab290, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Invoker_Invoke::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_Invoke::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Invoker_Invoke::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 2639, @0x0000000002bab2b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Invoker_Invoke::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_Invoke::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal  (line 2639, @0x0000000002bd0c90, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "invoker_invoke", "CDOTA_Ability_Invoker_Invoke"
// globals: `guard variable for'CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass, CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Invoker_Invoke::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Invoker_Invoke::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_InvokeClassInfo, CDOTA_Ability_Invoker_Invoke::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_InvokeClassInfo
CEntityClass *__cdecl CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass) != 0 )
  {
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_pClassInfo = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_flags = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_pInputs = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_nInputCount = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_pOutputs = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_nOutputCount = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_pGameClass = 0;
    CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass._vptr_CEntityClass = off_44FFAB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass);
    __cxa_atexit(
      CDOTA_Ability_Invoker_Invoke::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Invoker_InvokeClass != 0 )
    return &CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass;
  if ( `guard variable for'CDOTA_Ability_Invoker_Invoke::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_InvokeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_Invoke::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_InvokeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Invoker_Invoke::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_InvokeClassInfo,
      "CDOTA_Ability_Invoker_Invoke",
      "invoker_invoke",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_Invoke::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_InvokeClassInfo);
  }
  CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_pClassInfo = &CDOTA_Ability_Invoker_Invoke::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_InvokeClassInfo;
  CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_pBaseClassInfo = CDOTA_Ability_Invoker_Invoke::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_InvokeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Invoker_InvokeClass = &CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass;
  CDOTA_Ability_Invoker_Invoke::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_InvokeClassInfo.m_pClass = &CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass;
  CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Invoker_InvokeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Invoker_Invoke::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_InvokeClass;
}


// CDOTA_Ability_Invoker_Invoke::ShouldSpeakAbilityConcept  (line 2667, @0x0000000002b91bb0, libserver.so)
bool __fastcall CDOTA_Ability_Invoker_Invoke::ShouldSpeakAbilityConcept(CDOTA_Ability_Invoker_Invoke *const this)
{
  return 0;
}


// CDOTA_Ability_Invoker_Invoke::IsStealable  (line 2669, @0x0000000002b91bc0, libserver.so)
bool __fastcall CDOTA_Ability_Invoker_Invoke::IsStealable(CDOTA_Ability_Invoker_Invoke *const this)
{
  return 0;
}


// CDOTA_Ability_Invoker_Invoke::YouForgotToImplementOrDeclareServerClass  (line 2700, @0x0000000002b35aa0, libserver.so)
int __fastcall CDOTA_Ability_Invoker_Invoke::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Invoker_Invoke *const this)
{
  return 0;
}


// CDOTA_Ability_Invoker_Invoke::GetServerClass  (line 2700, @0x0000000002b4ce20, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Invoker_Invoke::GetServerClass(CDOTA_Ability_Invoker_Invoke *const this)
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


// CDOTA_Ability_Invoker_Invoke::OnSpellStart  (line 2709, @0x0000000002b683d0, libserver.so)  // inlines: FStrEq, GetAbilityName, GetLevelSpecialValueFor<int>, VectorAdd, VectorMultiply, _V_strcmp, operator*, operator+, operator=
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetAbilityByIndex, strcmp, CDOTA_BaseNPC::SwapAbilities, CDOTA_Ability_Invoker_Invoke::CastResultVO, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound, CDOTABaseAbility::EndCooldown (13 total)
// strings: "max_invoked_spells", "<NoAbilityName>", "particles/units/heroes/hero_invoker/invoker_invoke.vpcf", "Hero_Invoker.Invoke", "invoker_chaos_meteor", "invoker_forge_spirit" (8 total)
void __fastcall CDOTA_Ability_Invoker_Invoke::OnSpellStart(CDOTA_Ability_Invoker_Invoke *const this)
{
  int v1; // r15d
  __int64 v2; // r13
  int v3; // r12d
  CDOTA_Modifier_Invoker_Instance *v5; // rdi
  int v6; // eax
  const char *v7; // r13
  CDOTABaseAbility *AbilityByIndex; // rax
  const char *v9; // r9
  DOTAAbilityData_t *m_pAbilityData; // rdx
  const char *m_pszAbilityName; // rdx
  DOTAAbilityData_t *v12; // rax
  const char *v13; // r14
  const char *v14; // rax
  int v15; // eax
  const char *v16; // r9
  int v17; // eax
  CDOTA_BaseNPC *v18; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v20; // rax
  CDOTA_ParticleManager *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  bool v23; // si
  int v24; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *pFirstInvokedAbilitya; // [rsp+8h] [rbp-58h]
  CDOTABaseAbility *pFirstInvokedAbility; // [rsp+8h] [rbp-58h]
  unsigned int pFirstInvokedAbilityb; // [rsp+8h] [rbp-58h]
  CDOTA_BaseNPC *pInvoker; // [rsp+10h] [rbp-50h]
  unsigned int pInvokera; // [rsp+10h] [rbp-50h]
  int nNumExort; // [rsp+1Ch] [rbp-44h]
  float nNumExorta; // [rsp+1Ch] [rbp-44h]

  v1 = 0;
  v2 = 0;
  v3 = 0;
  nNumExort = 0;
  this->max_invoked_spells = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_invoked_spells", -1, 0);
  do
  {
    v5 = this->m_instances[v2];
    if ( v5 != 0 )
    {
      v6 = (*(v5->_vptr_CDOTA_Buff + 89))(v5);
      if ( v6 != 0 )
      {
        if ( v6 == 1 )
          ++v1;
        else
          ++nNumExort;
      }
      else
      {
        ++v3;
      }
    }
    ++v2;
  }
  while ( v2 != 3 );
  if ( v3 == 3 )
  {
    v7 = "invoker_cold_snap";
  }
  else if ( v1 == 1 && v3 == 2 )
  {
    v7 = "invoker_ghost_walk";
  }
  else if ( v1 == 2 && v3 == 1 )
  {
    v7 = "invoker_tornado";
  }
  else if ( v1 == 3 )
  {
    v7 = "invoker_emp";
  }
  else if ( nNumExort == 1 && v1 == 2 )
  {
    v7 = "invoker_alacrity";
  }
  else if ( nNumExort == 2 && v1 == 1 )
  {
    v7 = "invoker_chaos_meteor";
  }
  else if ( nNumExort == 3 )
  {
    v7 = "invoker_sun_strike";
  }
  else if ( nNumExort == 2 && v3 == 1 )
  {
    v7 = "invoker_forge_spirit";
  }
  else if ( nNumExort == 1 && v3 == 2 )
  {
    v7 = "invoker_ice_wall";
  }
  else
  {
    if ( v1 != 1 || v3 != 1 || nNumExort != 1 )
    {
      CDOTA_Ability_Invoker_Invoke::CastResultVO(this, 0);
      goto LABEL_31;
    }
    v7 = "invoker_deafening_blast";
  }
  pInvoker = CDOTABaseAbility::GetCaster(this);
  pFirstInvokedAbilitya = CDOTA_BaseNPC::GetAbilityByIndex(pInvoker, 3);
  AbilityByIndex = CDOTA_BaseNPC::GetAbilityByIndex(pInvoker, 4);
  v9 = "<NoAbilityName>";
  m_pAbilityData = pFirstInvokedAbilitya->m_pAbilityData;
  if ( m_pAbilityData != 0 )
  {
    m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
    v9 = "<NoAbilityName>";
    if ( m_pszAbilityName != 0 )
      v9 = m_pszAbilityName;
  }
  v12 = AbilityByIndex->m_pAbilityData;
  v13 = "<NoAbilityName>";
  if ( v12 != 0 )
  {
    v14 = v12->m_pszAbilityName;
    if ( v14 != 0 )
      v13 = v14;
  }
  if ( v7 == v9 || (pFirstInvokedAbility = v9, v15 = strcmp(v9, v7), v16 = pFirstInvokedAbility, v15 == 0) )
  {
    v23 = 0;
LABEL_46:
    CDOTA_Ability_Invoker_Invoke::CastResultVO(this, v23);
    CDOTABaseAbility::EndCooldown(this);
    v24 = (*(this->_vptr_IHandleEntity + 274))(this, 0xFFFFFFFFLL);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::GiveMana(Caster, v24, 0, 1);
    goto LABEL_31;
  }
  if ( v7 == v13 || (v17 = strcmp(v13, v7), v16 = pFirstInvokedAbility, v17 == 0) )
  {
    CDOTA_BaseNPC::SwapAbilities(pInvoker, v16, v13, 1, 1);
    v23 = 1;
    goto LABEL_46;
  }
  if ( this->max_invoked_spells == 1 )
  {
    CDOTA_BaseNPC::SwapAbilities(pInvoker, pFirstInvokedAbility, v7, 0, 1);
  }
  else
  {
    CDOTA_BaseNPC::SwapAbilities(pInvoker, pFirstInvokedAbility, v13, 1, 1);
    CDOTA_BaseNPC::SwapAbilities(pInvoker, v13, v7, 0, 1);
  }
  CDOTA_Ability_Invoker_Invoke::CastResultVO(this, 1);
LABEL_31:
  this->m_vecCurrentColor.x = (82.0 * nNumExort) + ((66.0 * v1) + (16.0 * v3));
  *&pFirstInvokedAbilityb = (82.0 * nNumExort) + ((66.0 * v1) + (16.0 * v3));
  this->m_vecCurrentColor.y = (61.0 * nNumExort) + ((31.0 * v1) + (53.0 * v3));
  this->m_vecCurrentColor.z = (nNumExort * 14.0) + ((v1 * 68.0) + (v3 * 85.0));
  *&pInvokera = (61.0 * nNumExort) + ((31.0 * v1) + (53.0 * v3));
  nNumExorta = (nNumExort * 14.0) + ((v1 * 68.0) + (v3 * 85.0));
  v18 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v18) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_invoker/invoker_invoke.vpcf",
                   1,
                   v18,
                   0,
                   0);
  v20 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(
    v20,
    v18,
    2,
    COERCE_DOUBLE(__PAIR64__(pInvokera, pFirstInvokedAbilityb)),
    nNumExorta);
  v21 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v21, v18);
  v22 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v22, "Hero_Invoker.Invoke", 0.0, 0, 0);
}


// CDOTA_Ability_Invoker_Invoke::CastResultVO  (line 2816, @0x0000000002b57c70, libserver.so)  // inlines: GetAbilityName, SpeakConcept
// calls: CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTABaseAbility::GetCaster, CDOTA_Speech::SpeakConcept, CResponseCriteriaSet::~CResponseCriteriaSet, _Unwind_Resume
// callers: CDOTA_Ability_Invoker_Invoke::OnSpellStart
// strings: "<NoAbilityName>", "abilityname", "invokesuccess"
void __fastcall CDOTA_Ability_Invoker_Invoke::CastResultVO(CDOTA_Ability_Invoker_Invoke *const this, bool bSuccess)
{
  DOTAAbilityData_t *m_pAbilityData; // rax
  const char *v4; // rdx
  const char *m_pszAbilityName; // rax
  float v6; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  CResponseCriteriaSet criteria; // [rsp+10h] [rbp-60h] BYREF

  CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
  m_pAbilityData = this->m_pAbilityData;
  v4 = "<NoAbilityName>";
  if ( m_pAbilityData != 0 )
  {
    m_pszAbilityName = m_pAbilityData->m_pszAbilityName;
    if ( m_pszAbilityName != 0 )
      v4 = m_pszAbilityName;
  }
  CResponseCriteriaSet::AppendCriteria(&criteria, "abilityname", v4, 1.0);
  CResponseCriteriaSet::AppendCriteria(&criteria, "invokesuccess", 1.0, v6);
  m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
  if ( m_pSpeech != 0 )
    CDOTA_Speech::SpeakConcept(m_pSpeech, 4, &criteria, 1, 0, 0, 0, 0);
  CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
}


// CDOTA_Ability_Invoker_Invoke::OnUpgrade  (line 2829, @0x0000000002b68880, libserver.so)  // inlines: GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, LoggingSystem_IsChannelEnabled, LoggingSystem_Log, CDOTABaseAbility::OnUpgrade
// strings: "max_invoked_spells", "CDOTA_Ability_Invoker_Invoke::OnUpgrade:  No such ability '%s'\n"
// globals: g_invokedAbilityNames, CDOTA_Ability_Invoker_Invoke::OnUpgrade(void)::__executeCount
void __fastcall CDOTA_Ability_Invoker_Invoke::OnUpgrade(CDOTA_Ability_Invoker_Invoke *const this)
{
  const char **v2; // rbx
  const char *v3; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  const char *v6; // rcx

  v2 = g_invokedAbilityNames;
  this->max_invoked_spells = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "max_invoked_spells", -1, 0);
  if ( CDOTABaseAbility::GetEffectiveLevel(this) == 0 )
  {
    do
    {
      while ( 1 )
      {
        v3 = *v2;
        Caster = CDOTABaseAbility::GetCaster(this);
        AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, v3, 0);
        if ( AbilityByName == 0 )
          break;
        CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
LABEL_4:
        if ( ++v2 == &unk_49FD6F0 )
          goto LABEL_9;
      }
      if ( CDOTA_Ability_Invoker_Invoke::OnUpgrade(void)::__executeCount > 19 )
        goto LABEL_4;
      ++CDOTA_Ability_Invoker_Invoke::OnUpgrade(void)::__executeCount;
      if ( LoggingSystem_IsChannelEnabled(LOG_SERVER, 2) == 0 )
        goto LABEL_4;
      v6 = *v2++;
      LoggingSystem_Log(LOG_SERVER, 2, "CDOTA_Ability_Invoker_Invoke::OnUpgrade:  No such ability '%s'\n", v6);
    }
    while ( v2 != &unk_49FD6F0 );
  }
LABEL_9:
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Invoker_Invoke::NewInstance  (line 2858, @0x0000000002b57d50, libserver.so)
// calls: CDOTA_Buff::Destroy
// callers: CDOTA_Modifier_Invoker_Instance::OnCreated
void __fastcall CDOTA_Ability_Invoker_Invoke::NewInstance(CDOTA_Ability_Invoker_Invoke *const this, CDOTA_Buff *pBuff)
{
  CDOTA_Modifier_Invoker_Instance *v4; // rdi
  CDOTA_Modifier_Invoker_Instance *v5; // rax

  v4 = this->m_instances[2];
  if ( v4 != 0 )
    CDOTA_Buff::Destroy(v4, 0, 0, 0);
  this->m_instances[2] = this->m_instances[1];
  v5 = this->m_instances[0];
  this->m_instances[0] = pBuff;
  this->m_instances[1] = v5;
}


// CDOTA_Ability_Invoker_Invoke::OnUpgradeElement  (line 2882, @0x0000000002b57de0, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, NetworkStateChanged, Set, UpgradeExort, UpgradeQuas, UpgradeWex, operator CEntityInstance*, operator++, operator+=<int>, operator=
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, KeyValues::KeyValues, CDOTA_Buff::DoRefresh, KeyValues::~KeyValues, _Unwind_Resume, __stack_chk_fail
// callers: CDOTA_Ability_Invoker_Quas::OnUpgrade, CDOTA_Ability_Invoker_Wex::OnUpgrade, CDOTA_Ability_Invoker_Exort::OnUpgrade
// globals: g_invokedAbilityNames, CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Invoker_Invoke::OnUpgradeElement(
        CDOTA_Ability_Invoker_Invoke *const this,
        int nElementType)
{
  __int64 v3; // rbx
  CDOTA_Modifier_Invoker_Instance *v4; // r13
  const char **v5; // r14
  CHandle<CBaseEntity> *m_invokedAbilities; // r13
  int v7; // r15d
  int (**v8)(...); // rax
  CEntityIdentity *m_pEntity; // rax
  int v10; // edx
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  const char *v14; // rbx
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *m_pInstance; // rbx
  int v17; // r15d
  int (**v18)(...); // rax
  int v19; // r15d
  int (**vptr_IHandleEntity)(...); // rax
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-38h]

  v3 = 0;
  v23 = __readfsqword(0x28u);
  do
  {
    v4 = this->m_instances[v3];
    if ( v4 != 0 && (*(v4->_vptr_CDOTA_Buff + 89))(this->m_instances[v3]) == nElementType )
    {
      KeyValues::KeyValues(&kv, "refresh");
      CDOTA_Buff::DoRefresh(v4, &kv, 0, 0);
      KeyValues::~KeyValues(&kv);
    }
    ++v3;
  }
  while ( v3 != 3 );
  v5 = g_invokedAbilityNames;
  m_invokedAbilities = this->m_invokedAbilities;
  do
  {
    if ( m_invokedAbilities->m_Index + 2 > 1
      && (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_invokedAbilities->m_Index) >> 9) & 0x3F]) != 0
      && (v13 = &v12[m_invokedAbilities->m_Index & 0x1FF]) != 0
      && m_invokedAbilities->m_Index == v13->m_EHandle.m_Index
      && (m_pInstance = v13->m_pInstance, this->m_bInvokedAbilitiesInitialized)
      && m_pInstance != 0
      || (v14 = *v5,
          Caster = CDOTABaseAbility::GetCaster(this),
          (m_pInstance = CDOTA_BaseNPC::FindAbilityByName(Caster, v14, 0)) != 0) )
    {
      if ( nElementType != 0 )
      {
        if ( nElementType == 1 )
        {
          v19 = HIDWORD(m_pInstance[1]._vptr_IHandleEntity) + 1;
          (*(m_pInstance->_vptr_IHandleEntity + 22))(m_pInstance, 916, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          vptr_IHandleEntity = m_pInstance->_vptr_IHandleEntity;
          HIDWORD(m_pInstance[1]._vptr_IHandleEntity) = v19;
          vptr_IHandleEntity[334](m_pInstance);
        }
        else
        {
          v7 = LODWORD(m_pInstance[1].m_pEntity) + 1;
          (*(m_pInstance->_vptr_IHandleEntity + 22))(m_pInstance, 920, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          v8 = m_pInstance->_vptr_IHandleEntity;
          LODWORD(m_pInstance[1].m_pEntity) = v7;
          v8[335](m_pInstance);
        }
      }
      else
      {
        v17 = LODWORD(m_pInstance[1]._vptr_IHandleEntity) + 1;
        (*(m_pInstance->_vptr_IHandleEntity + 22))(m_pInstance, 912, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        v18 = m_pInstance->_vptr_IHandleEntity;
        LODWORD(m_pInstance[1]._vptr_IHandleEntity) = v17;
        v18[333](m_pInstance);
      }
      m_pEntity = m_pInstance->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v10 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v11 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(m_invokedAbilities->m_Index) = v11 | m_invokedAbilities->m_Index & 0x8000;
        m_invokedAbilities->m_Index = (v10 << 15) | m_invokedAbilities->m_Index & 0x7FFF;
      }
      else
      {
        m_invokedAbilities->m_Index = -1;
      }
    }
    ++v5;
    ++m_invokedAbilities;
  }
  while ( v5 != &unk_49FD6F0 );
  this->m_bInvokedAbilitiesInitialized = 1;
}


// CDOTA_Ability_Invoker_Invoke::GetCooldown  (line 2932, @0x0000000002b76010, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Invoker_Invoke::GetCooldown(CDOTA_Ability_Invoker_Invoke *const this, int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "cooldown_scepter", -1, 0);
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_Invoker_Invoke::GetManaCost  (line 2939, @0x0000000002b6a6a0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetManaCost, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "mana_cost_scepter"
int __fastcall CDOTA_Ability_Invoker_Invoke::GetManaCost(CDOTA_Ability_Invoker_Invoke *const this, int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "mana_cost_scepter", iLevel, 0);
  else
    return CDOTABaseAbility::GetManaCost(this, iLevel);
}


// GetInvoke  (line 2947, @0x0000000002b58190, libserver.so)
// calls: CDOTA_BaseNPC::FindAbilityByName
// strings: "invoker_invoke"
CDOTA_Ability_Invoker_Invoke *__fastcall GetInvoke(CDOTA_BaseNPC *pInvoker)
{
  return CDOTA_BaseNPC::FindAbilityByName(pInvoker, "invoker_invoke", 0);
}


// CDOTA_Modifier_Invoker_Instance::OnCreated  (line 2953, @0x0000000002b57da0, libserver.so)  // inlines: GetInvoke
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_Invoker_Invoke::NewInstance
// callers: CDOTA_Modifier_Invoker_ExortInstance::OnCreated, CDOTA_Modifier_Invoker_WexInstance::OnCreated, CDOTA_Modifier_Invoker_QuasInstance::OnCreated
// strings: "invoker_invoke"
void __fastcall CDOTA_Modifier_Invoker_Instance::OnCreated(CDOTA_Modifier_Invoker_Instance *const this, KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Ability_Invoker_Invoke *AbilityByName; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "invoker_invoke", 0);
  CDOTA_Ability_Invoker_Invoke::NewInstance(AbilityByName, this);
}


// CDOTA_Modifier_Invoker_QuasInstance::~CDOTA_Modifier_Invoker_QuasInstance  (line 2967, @0x0000000002b99ea0, libserver.so)  // inlines: ~CDOTA_Modifier_Invoker_Instance
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Invoker_QuasInstance::~CDOTA_Modifier_Invoker_QuasInstance(
        CDOTA_Modifier_Invoker_QuasInstance *const this)
{
  this->_vptr_CDOTA_Buff = &off_45005B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Invoker_QuasInstance::~CDOTA_Modifier_Invoker_QuasInstance  (line 2967, @0x0000000002b99ec0, libserver.so)  // inlines: ~CDOTA_Modifier_Invoker_Instance, ~CDOTA_Modifier_Invoker_QuasInstance
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Invoker_QuasInstance::~CDOTA_Modifier_Invoker_QuasInstance(
        CDOTA_Modifier_Invoker_QuasInstance *const this)
{
  this->_vptr_CDOTA_Buff = &off_45005B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Invoker_QuasInstance::GetType  (line 2980, @0x0000000002b91bd0, libserver.so)
int __fastcall CDOTA_Modifier_Invoker_QuasInstance::GetType(CDOTA_Modifier_Invoker_QuasInstance *const this)
{
  return 0;
}


// CDOTA_Modifier_Invoker_QuasInstance::AllowIllusionDuplicate  (line 2982, @0x0000000002b91be0, libserver.so)
bool __fastcall CDOTA_Modifier_Invoker_QuasInstance::AllowIllusionDuplicate(
        CDOTA_Modifier_Invoker_QuasInstance *const this)
{
  return 1;
}


// CDOTA_Modifier_Invoker_QuasInstance::DeclareFunctions  (line 2996, @0x0000000002b35ab0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Invoker_QuasInstance::GetModifierConstantHealthRegen(CModifierParams const&), CDOTA_Modifier_Invoker_QuasInstance::OnDeath(CModifierParams const&), CDOTA_Modifier_Invoker_QuasInstance::OnRespawn(CModifierParams const&)
void __fastcall CDOTA_Modifier_Invoker_QuasInstance::DeclareFunctions(CDOTA_Modifier_Invoker_QuasInstance *const this)
{
  this->m_Functions[56].__pfn = CDOTA_Modifier_Invoker_QuasInstance::GetModifierConstantHealthRegen;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[138].__delta = 0;
  this->m_Functions[138].__pfn = CDOTA_Modifier_Invoker_QuasInstance::OnDeath;
  this->m_Functions[139].__pfn = CDOTA_Modifier_Invoker_QuasInstance::OnRespawn;
  this->m_Functions[139].__delta = 0;
}


// CDOTA_Modifier_Invoker_QuasInstance::GetModifierConstantHealthRegen  (line 3006, @0x0000000002b35b10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Invoker_QuasInstance::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Invoker_QuasInstance *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->health_regen_per_instance) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Invoker_QuasInstance::OnCreated  (line 3013, @0x0000000002b80b20, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetInvoke, GetLevelSpecialValueFor<float>, GetNextInstanceSlot
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, RandomInt, CDOTA_BaseNPC::StartGesture, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle, CDOTA_Modifier_Invoker_Instance::OnCreated
// strings: "health_regen_per_instance", "invoker_invoke", "particles/units/heroes/hero_invoker/invoker_quas_orb.vpcf", "attach_attack1", "attach_attack2"
// globals: g_orbAttachmentNames
void __fastcall CDOTA_Modifier_Invoker_QuasInstance::OnCreated(
        CDOTA_Modifier_Invoker_QuasInstance *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  uint32 m_nHashCode; // ecx
  const char *v8; // rdi
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax
  const char *v13; // r9
  int v14; // r12d
  CDOTA_BaseNPC *v15; // r15
  CDOTA_ParticleManager *v16; // rax
  __int64 v17; // r13
  CDOTA_BaseNPC *v18; // r15
  CDOTA_ParticleManager *v19; // rax
  CDOTA_BaseNPC *v20; // r15
  CDOTA_ParticleManager *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // r12
  CDOTA_ParticleManager *v24; // rax
  char *pAttachmentName; // [rsp+10h] [rbp-40h]
  char *pAttachmentNamea; // [rsp+10h] [rbp-40h]
  vec_t vecFallbackPosition; // [rsp+1Ch] [rbp-34h]
  Vector v28; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v29; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->health_regen_per_instance = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                        Ability,
                                        "health_regen_per_instance",
                                        -1,
                                        0);
  else
    this->health_regen_per_instance = 0.0;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "invoker_invoke", 0);
  m_nHashCode = AbilityByName[1].m_worldGroupId.m_nHashCode;
  v8 = g_orbAttachmentNames[m_nHashCode];
  AbilityByName[1].m_worldGroupId.m_nHashCode = (m_nHashCode + 1) % 3;
  this->m_pSlotName = v8;
  if ( RandomInt(0, 1) == 1 )
  {
    v9 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::StartGesture(v9, 1516, 0.1, 0.1, 9, 0, 1.0);
    v10 = CDOTA_Buff::GetCaster(this);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_invoker/invoker_quas_orb.vpcf",
                 2,
                 v10,
                 0,
                 0);
    v13 = "attach_attack1";
  }
  else
  {
    v22 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::StartGesture(v22, 1517, 0.1, 0.1, 9, 0, 1.0);
    v23 = CDOTA_Buff::GetCaster(this);
    v24 = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 v24,
                 "particles/units/heroes/hero_invoker/invoker_quas_orb.vpcf",
                 2,
                 v23,
                 0,
                 0);
    v13 = "attach_attack2";
  }
  v14 = Particle;
  pAttachmentName = v13;
  v15 = CDOTA_Buff::GetCaster(this);
  v16 = GetParticleManager();
  v17 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(v16, v14, 0, v15, 5, pAttachmentName, vec3_invalid, 1);
  pAttachmentNamea = this->m_pSlotName;
  v18 = CDOTA_Buff::GetCaster(this);
  v19 = GetParticleManager();
  *&v28.x = v17;
  v28.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v19, v14, 1, v18, 5, pAttachmentNamea, v28, 1);
  v20 = CDOTA_Buff::GetCaster(this);
  v21 = GetParticleManager();
  *&v29.x = v17;
  v29.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v21, v14, 2, v20, 1, 0, v29, 1);
  CDOTA_Buff::AddParticle(this, v14, 0, 0, -1, 0, 0);
  CDOTA_Modifier_Invoker_Instance::OnCreated(this, pKV);
}


// CDOTA_Modifier_Invoker_QuasInstance::OnRefresh  (line 3042, @0x0000000002b7d6c0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "health_regen_per_instance"
void __fastcall CDOTA_Modifier_Invoker_QuasInstance::OnRefresh(
        CDOTA_Modifier_Invoker_QuasInstance *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->health_regen_per_instance = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                        Ability,
                                        "health_regen_per_instance",
                                        -1,
                                        0);
  else
    this->health_regen_per_instance = 0.0;
}


// CDOTA_Modifier_Invoker_QuasInstance::OnDeath  (line 3049, @0x0000000002b43fe0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::DestroyParticles
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Invoker_QuasInstance::OnDeath(
        CDOTA_Modifier_Invoker_QuasInstance *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[params->hunit.m_Index & 0x1FF];
  if ( v4 == 0 || m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC || CDOTA_Buff::GetParent(this) != m_pInstance )
    return 1uLL;
  CDOTA_Buff::DestroyParticles(this, 0);
  return 1uLL;
}


// CDOTA_Modifier_Invoker_QuasInstance::OnRespawn  (line 3063, @0x0000000002b46d40, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle
// strings: "particles/units/heroes/hero_invoker/invoker_quas_orb.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Invoker_QuasInstance::OnRespawn(
        CDOTA_Modifier_Invoker_QuasInstance *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax
  const char *m_pSlotName; // r15
  CDOTA_BaseNPC *v12; // r14
  CDOTA_ParticleManager *v13; // rax
  __int64 v14; // r13
  const char *v15; // r15
  CDOTA_BaseNPC *v16; // r14
  CDOTA_ParticleManager *v17; // rax
  CDOTA_BaseNPC *v18; // r14
  CDOTA_ParticleManager *v19; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-34h]
  Vector v22; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v23; // 0:xmm0_8.8,8:xmm1_4.4

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
          Caster = CDOTA_Buff::GetCaster(this);
          ParticleManager = GetParticleManager();
          Particle = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_invoker/invoker_quas_orb.vpcf",
                       2,
                       Caster,
                       0,
                       0);
          m_pSlotName = this->m_pSlotName;
          LODWORD(Caster) = Particle;
          v12 = CDOTA_Buff::GetCaster(this);
          v13 = GetParticleManager();
          v14 = *&vec3_invalid.x;
          vecFallbackPosition = vec3_invalid.z;
          CDOTA_ParticleManager::SetParticleControlEnt(v13, Caster, 0, v12, 5, m_pSlotName, vec3_invalid, 1);
          v15 = this->m_pSlotName;
          v16 = CDOTA_Buff::GetCaster(this);
          v17 = GetParticleManager();
          *&v22.x = v14;
          v22.z = vecFallbackPosition;
          CDOTA_ParticleManager::SetParticleControlEnt(v17, Caster, 1, v16, 5, v15, v22, 1);
          v18 = CDOTA_Buff::GetCaster(this);
          v19 = GetParticleManager();
          *&v23.x = v14;
          v23.z = vecFallbackPosition;
          CDOTA_ParticleManager::SetParticleControlEnt(v19, Caster, 2, v18, 1, 0, v23, 1);
          CDOTA_Buff::AddParticle(this, Caster, 0, 0, -1, 0, 0);
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Invoker_WexInstance::~CDOTA_Modifier_Invoker_WexInstance  (line 3083, @0x0000000002b99e50, libserver.so)  // inlines: ~CDOTA_Modifier_Invoker_Instance
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Invoker_WexInstance::~CDOTA_Modifier_Invoker_WexInstance(
        CDOTA_Modifier_Invoker_WexInstance *const this)
{
  this->_vptr_CDOTA_Buff = &off_45005B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Invoker_WexInstance::~CDOTA_Modifier_Invoker_WexInstance  (line 3083, @0x0000000002b99e70, libserver.so)  // inlines: ~CDOTA_Modifier_Invoker_Instance, ~CDOTA_Modifier_Invoker_WexInstance
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Invoker_WexInstance::~CDOTA_Modifier_Invoker_WexInstance(
        CDOTA_Modifier_Invoker_WexInstance *const this)
{
  this->_vptr_CDOTA_Buff = &off_45005B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Invoker_WexInstance::GetType  (line 3097, @0x0000000002b91bf0, libserver.so)
int __fastcall CDOTA_Modifier_Invoker_WexInstance::GetType(CDOTA_Modifier_Invoker_WexInstance *const this)
{
  return 1;
}


// CDOTA_Modifier_Invoker_WexInstance::AllowIllusionDuplicate  (line 3099, @0x0000000002b91c00, libserver.so)
bool __fastcall CDOTA_Modifier_Invoker_WexInstance::AllowIllusionDuplicate(
        CDOTA_Modifier_Invoker_WexInstance *const this)
{
  return 1;
}


// CDOTA_Modifier_Invoker_WexInstance::DeclareFunctions  (line 3115, @0x0000000002b35b30, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Invoker_WexInstance::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Invoker_WexInstance::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Invoker_WexInstance::OnDeath(CModifierParams const&), CDOTA_Modifier_Invoker_WexInstance::OnRespawn(CModifierParams const&)
void __fastcall CDOTA_Modifier_Invoker_WexInstance::DeclareFunctions(CDOTA_Modifier_Invoker_WexInstance *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_Invoker_WexInstance::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[13].__pfn = CDOTA_Modifier_Invoker_WexInstance::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[138].__pfn = CDOTA_Modifier_Invoker_WexInstance::OnDeath;
  this->m_Functions[138].__delta = 0;
  this->m_Functions[139].__pfn = CDOTA_Modifier_Invoker_WexInstance::OnRespawn;
  this->m_Functions[139].__delta = 0;
}


// CDOTA_Modifier_Invoker_WexInstance::GetModifierAttackSpeedBonus_Constant  (line 3126, @0x0000000002b35ba0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Invoker_WexInstance::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Invoker_WexInstance *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->attack_speed_per_instance;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Invoker_WexInstance::GetModifierMoveSpeedBonus_Percentage  (line 3133, @0x0000000002b35bc0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Invoker_WexInstance::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Invoker_WexInstance *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->move_speed_per_instance;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Invoker_WexInstance::OnCreated  (line 3140, @0x0000000002b6f510, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetInvoke, GetLevelSpecialValueFor<int>, GetNextInstanceSlot
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, RandomInt, CDOTA_BaseNPC::StartGesture, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle, CDOTA_Modifier_Invoker_Instance::OnCreated
// strings: "attack_speed_per_instance", "move_speed_per_instance", "invoker_invoke", "particles/units/heroes/hero_invoker/invoker_wex_orb.vpcf", "attach_attack1", "attach_attack2"
// globals: g_orbAttachmentNames
void __fastcall CDOTA_Modifier_Invoker_WexInstance::OnCreated(
        CDOTA_Modifier_Invoker_WexInstance *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  uint32 m_nHashCode; // ecx
  const char *v9; // rdi
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax
  const char *v14; // r9
  int v15; // r12d
  CDOTA_BaseNPC *v16; // r15
  CDOTA_ParticleManager *v17; // rax
  __int64 v18; // r13
  CDOTA_BaseNPC *v19; // r15
  CDOTA_ParticleManager *v20; // rax
  CDOTA_BaseNPC *v21; // r15
  CDOTA_ParticleManager *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  CDOTA_BaseNPC *v24; // r12
  CDOTA_ParticleManager *v25; // rax
  char *pAttachmentName; // [rsp+10h] [rbp-40h]
  char *pAttachmentNamea; // [rsp+10h] [rbp-40h]
  vec_t vecFallbackPosition; // [rsp+1Ch] [rbp-34h]
  Vector v29; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v30; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->attack_speed_per_instance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                        Ability,
                                        "attack_speed_per_instance",
                                        -1,
                                        0);
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
    {
LABEL_3:
      this->move_speed_per_instance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                        v5,
                                        "move_speed_per_instance",
                                        -1,
                                        0);
      goto LABEL_4;
    }
  }
  else
  {
    this->attack_speed_per_instance = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_3;
  }
  this->move_speed_per_instance = 0;
LABEL_4:
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "invoker_invoke", 0);
  m_nHashCode = AbilityByName[1].m_worldGroupId.m_nHashCode;
  v9 = g_orbAttachmentNames[m_nHashCode];
  AbilityByName[1].m_worldGroupId.m_nHashCode = (m_nHashCode + 1) % 3;
  this->m_pSlotName = v9;
  if ( RandomInt(0, 1) == 1 )
  {
    v10 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::StartGesture(v10, 1516, 0.1, 0.1, 9, 0, 1.0);
    v11 = CDOTA_Buff::GetCaster(this);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_invoker/invoker_wex_orb.vpcf",
                 2,
                 v11,
                 0,
                 0);
    v14 = "attach_attack1";
  }
  else
  {
    v23 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::StartGesture(v23, 1517, 0.1, 0.1, 9, 0, 1.0);
    v24 = CDOTA_Buff::GetCaster(this);
    v25 = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 v25,
                 "particles/units/heroes/hero_invoker/invoker_wex_orb.vpcf",
                 2,
                 v24,
                 0,
                 0);
    v14 = "attach_attack2";
  }
  v15 = Particle;
  pAttachmentName = v14;
  v16 = CDOTA_Buff::GetCaster(this);
  v17 = GetParticleManager();
  v18 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(v17, v15, 0, v16, 5, pAttachmentName, vec3_invalid, 1);
  pAttachmentNamea = this->m_pSlotName;
  v19 = CDOTA_Buff::GetCaster(this);
  v20 = GetParticleManager();
  *&v29.x = v18;
  v29.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v20, v15, 1, v19, 5, pAttachmentNamea, v29, 1);
  v21 = CDOTA_Buff::GetCaster(this);
  v22 = GetParticleManager();
  *&v30.x = v18;
  v30.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v22, v15, 2, v21, 1, 0, v30, 1);
  CDOTA_Buff::AddParticle(this, v15, 0, 0, -1, 0, 0);
  CDOTA_Modifier_Invoker_Instance::OnCreated(this, pKV);
}


// CDOTA_Modifier_Invoker_WexInstance::OnRefresh  (line 3169, @0x0000000002b6cff0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "attack_speed_per_instance", "move_speed_per_instance"
void __fastcall CDOTA_Modifier_Invoker_WexInstance::OnRefresh(
        CDOTA_Modifier_Invoker_WexInstance *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->attack_speed_per_instance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                        Ability,
                                        "attack_speed_per_instance",
                                        -1,
                                        0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->move_speed_per_instance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                        v4,
                                        "move_speed_per_instance",
                                        -1,
                                        0);
      return;
    }
  }
  else
  {
    this->attack_speed_per_instance = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->move_speed_per_instance = 0;
}


// CDOTA_Modifier_Invoker_WexInstance::OnDeath  (line 3177, @0x0000000002b44090, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::DestroyParticles
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Invoker_WexInstance::OnDeath(
        CDOTA_Modifier_Invoker_WexInstance *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[params->hunit.m_Index & 0x1FF];
  if ( v4 == 0 || m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC || CDOTA_Buff::GetParent(this) != m_pInstance )
    return 1uLL;
  CDOTA_Buff::DestroyParticles(this, 0);
  return 1uLL;
}


// CDOTA_Modifier_Invoker_WexInstance::OnRespawn  (line 3191, @0x0000000002b469a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle
// strings: "particles/units/heroes/hero_invoker/invoker_wex_orb.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Invoker_WexInstance::OnRespawn(
        CDOTA_Modifier_Invoker_WexInstance *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax
  const char *m_pSlotName; // r15
  CDOTA_BaseNPC *v12; // r14
  CDOTA_ParticleManager *v13; // rax
  __int64 v14; // r13
  const char *v15; // r15
  CDOTA_BaseNPC *v16; // r14
  CDOTA_ParticleManager *v17; // rax
  CDOTA_BaseNPC *v18; // r14
  CDOTA_ParticleManager *v19; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-34h]
  Vector v22; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v23; // 0:xmm0_8.8,8:xmm1_4.4

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
          Caster = CDOTA_Buff::GetCaster(this);
          ParticleManager = GetParticleManager();
          Particle = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_invoker/invoker_wex_orb.vpcf",
                       2,
                       Caster,
                       0,
                       0);
          m_pSlotName = this->m_pSlotName;
          LODWORD(Caster) = Particle;
          v12 = CDOTA_Buff::GetCaster(this);
          v13 = GetParticleManager();
          v14 = *&vec3_invalid.x;
          vecFallbackPosition = vec3_invalid.z;
          CDOTA_ParticleManager::SetParticleControlEnt(v13, Caster, 0, v12, 5, m_pSlotName, vec3_invalid, 1);
          v15 = this->m_pSlotName;
          v16 = CDOTA_Buff::GetCaster(this);
          v17 = GetParticleManager();
          *&v22.x = v14;
          v22.z = vecFallbackPosition;
          CDOTA_ParticleManager::SetParticleControlEnt(v17, Caster, 1, v16, 5, v15, v22, 1);
          v18 = CDOTA_Buff::GetCaster(this);
          v19 = GetParticleManager();
          *&v23.x = v14;
          v23.z = vecFallbackPosition;
          CDOTA_ParticleManager::SetParticleControlEnt(v19, Caster, 2, v18, 1, 0, v23, 1);
          CDOTA_Buff::AddParticle(this, Caster, 0, 0, -1, 0, 0);
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Invoker_ExortInstance::~CDOTA_Modifier_Invoker_ExortInstance  (line 3211, @0x0000000002b99e00, libserver.so)  // inlines: ~CDOTA_Modifier_Invoker_Instance
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Invoker_ExortInstance::~CDOTA_Modifier_Invoker_ExortInstance(
        CDOTA_Modifier_Invoker_ExortInstance *const this)
{
  this->_vptr_CDOTA_Buff = &off_45005B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Invoker_ExortInstance::~CDOTA_Modifier_Invoker_ExortInstance  (line 3211, @0x0000000002b99e20, libserver.so)  // inlines: ~CDOTA_Modifier_Invoker_ExortInstance, ~CDOTA_Modifier_Invoker_Instance
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Invoker_ExortInstance::~CDOTA_Modifier_Invoker_ExortInstance(
        CDOTA_Modifier_Invoker_ExortInstance *const this)
{
  this->_vptr_CDOTA_Buff = &off_45005B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Invoker_ExortInstance::GetType  (line 3224, @0x0000000002b91c10, libserver.so)
int __fastcall CDOTA_Modifier_Invoker_ExortInstance::GetType(CDOTA_Modifier_Invoker_ExortInstance *const this)
{
  return 2;
}


// CDOTA_Modifier_Invoker_ExortInstance::AllowIllusionDuplicate  (line 3225, @0x0000000002b91c20, libserver.so)
bool __fastcall CDOTA_Modifier_Invoker_ExortInstance::AllowIllusionDuplicate(
        CDOTA_Modifier_Invoker_ExortInstance *const this)
{
  return 1;
}


// CDOTA_Modifier_Invoker_ExortInstance::DeclareFunctions  (line 3240, @0x0000000002b35be0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Invoker_ExortInstance::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_Invoker_ExortInstance::OnDeath(CModifierParams const&), CDOTA_Modifier_Invoker_ExortInstance::OnRespawn(CModifierParams const&)
void __fastcall CDOTA_Modifier_Invoker_ExortInstance::DeclareFunctions(
        CDOTA_Modifier_Invoker_ExortInstance *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_Invoker_ExortInstance::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[138].__delta = 0;
  this->m_Functions[138].__pfn = CDOTA_Modifier_Invoker_ExortInstance::OnDeath;
  this->m_Functions[139].__pfn = CDOTA_Modifier_Invoker_ExortInstance::OnRespawn;
  this->m_Functions[139].__delta = 0;
}


// CDOTA_Modifier_Invoker_ExortInstance::GetModifierPreAttack_BonusDamage  (line 3250, @0x0000000002b35c40, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Invoker_ExortInstance::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Invoker_ExortInstance *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_damage_per_instance;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Invoker_ExortInstance::OnCreated  (line 3257, @0x0000000002b6f1b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetInvoke, GetLevelSpecialValueFor<int>, GetNextInstanceSlot
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, RandomInt, CDOTA_BaseNPC::StartGesture, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle, CDOTA_Modifier_Invoker_Instance::OnCreated
// strings: "bonus_damage_per_instance", "invoker_invoke", "particles/units/heroes/hero_invoker/invoker_exort_orb.vpcf", "attach_attack1", "attach_attack2"
// globals: g_orbAttachmentNames
void __fastcall CDOTA_Modifier_Invoker_ExortInstance::OnCreated(
        CDOTA_Modifier_Invoker_ExortInstance *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  uint32 m_nHashCode; // ecx
  const char *v8; // rdi
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax
  const char *v13; // r9
  int v14; // r12d
  CDOTA_BaseNPC *v15; // r15
  CDOTA_ParticleManager *v16; // rax
  __int64 v17; // r13
  CDOTA_BaseNPC *v18; // r15
  CDOTA_ParticleManager *v19; // rax
  CDOTA_BaseNPC *v20; // r15
  CDOTA_ParticleManager *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // r12
  CDOTA_ParticleManager *v24; // rax
  char *pAttachmentName; // [rsp+10h] [rbp-40h]
  char *pAttachmentNamea; // [rsp+10h] [rbp-40h]
  vec_t vecFallbackPosition; // [rsp+1Ch] [rbp-34h]
  Vector v28; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v29; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_damage_per_instance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                        Ability,
                                        "bonus_damage_per_instance",
                                        -1,
                                        0);
  else
    this->bonus_damage_per_instance = 0;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "invoker_invoke", 0);
  m_nHashCode = AbilityByName[1].m_worldGroupId.m_nHashCode;
  v8 = g_orbAttachmentNames[m_nHashCode];
  AbilityByName[1].m_worldGroupId.m_nHashCode = (m_nHashCode + 1) % 3;
  this->m_pSlotName = v8;
  if ( RandomInt(0, 1) == 1 )
  {
    v9 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::StartGesture(v9, 1516, 0.1, 0.1, 9, 0, 1.0);
    v10 = CDOTA_Buff::GetCaster(this);
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_invoker/invoker_exort_orb.vpcf",
                 2,
                 v10,
                 0,
                 0);
    v13 = "attach_attack1";
  }
  else
  {
    v22 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::StartGesture(v22, 1517, 0.1, 0.1, 9, 0, 1.0);
    v23 = CDOTA_Buff::GetCaster(this);
    v24 = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 v24,
                 "particles/units/heroes/hero_invoker/invoker_exort_orb.vpcf",
                 2,
                 v23,
                 0,
                 0);
    v13 = "attach_attack2";
  }
  v14 = Particle;
  pAttachmentName = v13;
  v15 = CDOTA_Buff::GetCaster(this);
  v16 = GetParticleManager();
  v17 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(v16, v14, 0, v15, 5, pAttachmentName, vec3_invalid, 1);
  pAttachmentNamea = this->m_pSlotName;
  v18 = CDOTA_Buff::GetCaster(this);
  v19 = GetParticleManager();
  *&v28.x = v17;
  v28.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v19, v14, 1, v18, 5, pAttachmentNamea, v28, 1);
  v20 = CDOTA_Buff::GetCaster(this);
  v21 = GetParticleManager();
  *&v29.x = v17;
  v29.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v21, v14, 2, v20, 1, 0, v29, 1);
  CDOTA_Buff::AddParticle(this, v14, 0, 0, -1, 0, 0);
  CDOTA_Modifier_Invoker_Instance::OnCreated(this, pKV);
}


// CDOTA_Modifier_Invoker_ExortInstance::OnRefresh  (line 3285, @0x0000000002b6c150, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_damage_per_instance"
void __fastcall CDOTA_Modifier_Invoker_ExortInstance::OnRefresh(
        CDOTA_Modifier_Invoker_ExortInstance *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_damage_per_instance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                        Ability,
                                        "bonus_damage_per_instance",
                                        -1,
                                        0);
  else
    this->bonus_damage_per_instance = 0;
}


// CDOTA_Modifier_Invoker_ExortInstance::OnDeath  (line 3292, @0x0000000002b44240, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::DestroyParticles
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Invoker_ExortInstance::OnDeath(
        CDOTA_Modifier_Invoker_ExortInstance *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1uLL;
  v4 = &v3[params->hunit.m_Index & 0x1FF];
  if ( v4 == 0 || m_Index != v4->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC || CDOTA_Buff::GetParent(this) != m_pInstance )
    return 1uLL;
  CDOTA_Buff::DestroyParticles(this, 0);
  return 1uLL;
}


// CDOTA_Modifier_Invoker_ExortInstance::OnRespawn  (line 3306, @0x0000000002b46b70, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle
// strings: "particles/units/heroes/hero_invoker/invoker_exort_orb.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Invoker_ExortInstance::OnRespawn(
        CDOTA_Modifier_Invoker_ExortInstance *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax
  const char *m_pSlotName; // r15
  CDOTA_BaseNPC *v12; // r14
  CDOTA_ParticleManager *v13; // rax
  __int64 v14; // r13
  const char *v15; // r15
  CDOTA_BaseNPC *v16; // r14
  CDOTA_ParticleManager *v17; // rax
  CDOTA_BaseNPC *v18; // r14
  CDOTA_ParticleManager *v19; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-34h]
  Vector v22; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v23; // 0:xmm0_8.8,8:xmm1_4.4

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
          Caster = CDOTA_Buff::GetCaster(this);
          ParticleManager = GetParticleManager();
          Particle = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_invoker/invoker_exort_orb.vpcf",
                       2,
                       Caster,
                       0,
                       0);
          m_pSlotName = this->m_pSlotName;
          LODWORD(Caster) = Particle;
          v12 = CDOTA_Buff::GetCaster(this);
          v13 = GetParticleManager();
          v14 = *&vec3_invalid.x;
          vecFallbackPosition = vec3_invalid.z;
          CDOTA_ParticleManager::SetParticleControlEnt(v13, Caster, 0, v12, 5, m_pSlotName, vec3_invalid, 1);
          v15 = this->m_pSlotName;
          v16 = CDOTA_Buff::GetCaster(this);
          v17 = GetParticleManager();
          *&v22.x = v14;
          v22.z = vecFallbackPosition;
          CDOTA_ParticleManager::SetParticleControlEnt(v17, Caster, 1, v16, 5, v15, v22, 1);
          v18 = CDOTA_Buff::GetCaster(this);
          v19 = GetParticleManager();
          *&v23.x = v14;
          v23.z = vecFallbackPosition;
          CDOTA_ParticleManager::SetParticleControlEnt(v19, Caster, 2, v18, 1, 0, v23, 1);
          CDOTA_Buff::AddParticle(this, Caster, 0, 0, -1, 0, 0);
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Ability_Invoker_Quas::~CDOTA_Ability_Invoker_Quas  (line 3328, @0x0000000002ba1780, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Invoker_Quas::~CDOTA_Ability_Invoker_Quas(CDOTA_Ability_Invoker_Quas *const this)
{
  this->_vptr_IHandleEntity = &off_4501270;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Invoker_Quas::~CDOTA_Ability_Invoker_Quas  (line 3328, @0x0000000002ba17a0, libserver.so)  // inlines: ~CDOTA_Ability_Invoker_Quas
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Invoker_Quas::~CDOTA_Ability_Invoker_Quas(CDOTA_Ability_Invoker_Quas *const this)
{
  this->_vptr_IHandleEntity = &off_4501270;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Invoker_Quas::Schema_DynamicBinding  (line 3330, @0x0000000002b91c30, libserver.so)
// globals: CDOTA_Ability_Invoker_Quas::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_Quas::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_Quas *const this)
{
  return CDOTA_Ability_Invoker_Quas::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_Quas::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 3330, @0x0000000002b91c40, libserver.so)
// globals: CDOTA_Ability_Invoker_Quas::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_Quas::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_Quas::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_Quas::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_Quas::CEntityInstanceEntityClass::DestructInstance  (line 3330, @0x0000000002b91c50, libserver.so)  // inlines: Destruct<CDOTA_Ability_Invoker_Quas>
void __fastcall CDOTA_Ability_Invoker_Quas::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Invoker_Quas::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Invoker_Quas::CEntityInstanceEntityClass::FreeInstance  (line 3330, @0x0000000002b91c70, libserver.so)
void __fastcall CDOTA_Ability_Invoker_Quas::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Invoker_Quas::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Invoker_Quas::CEntityInstanceEntityClass::CanAllocate  (line 3330, @0x0000000002b91c90, libserver.so)
bool __fastcall CDOTA_Ability_Invoker_Quas::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Invoker_Quas::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Invoker_Quas::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 3330, @0x0000000002b91ca0, libserver.so)
// globals: CDOTA_Ability_Invoker_Quas::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Invoker_Quas::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Invoker_Quas::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_Quas::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_Quas::CEntityInstanceEntityClass::AllocateInstance  (line 3330, @0x0000000002b983a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Invoker_Quas::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Invoker_Quas::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Invoker_Quas::CEntityInstanceEntityClass::ConstructInstance  (line 3330, @0x0000000002b9d640, libserver.so)  // inlines: CDOTA_Ability_Invoker_Quas, Construct<CDOTA_Ability_Invoker_Quas>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Invoker_Quas::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Invoker_Quas::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4501270;
  }
  return p;
}


// CDOTA_Ability_Invoker_Quas::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3330, @0x0000000002bab2e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Invoker_Quas::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_Quas::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Invoker_Quas::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3330, @0x0000000002bab300, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Invoker_Quas::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_Quas::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Invoker_Quas::GetEntityClassInternal  (line 3330, @0x0000000002bcabb0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "invoker_quas", "CDOTA_Ability_Invoker_Quas"
// globals: `guard variable for'CDOTA_Ability_Invoker_Quas::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_QuasClass, CDOTA_Ability_Invoker_Quas::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_QuasClass, __dso_handle, CDOTA_Ability_Invoker_Quas::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Invoker_Quas::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_QuasClassInfo, CDOTA_Ability_Invoker_Quas::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_QuasClassInfo
CEntityClass *__cdecl CDOTA_Ability_Invoker_Quas::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Invoker_Quas::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_QuasClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_Quas::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_QuasClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Invoker_Quas::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_QuasClass);
    CDOTA_Ability_Invoker_Quas::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_QuasClass._vptr_CEntityClass = off_45011F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_Quas::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_QuasClass);
    __cxa_atexit(
      CDOTA_Ability_Invoker_Quas::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Invoker_Quas::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_QuasClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Invoker_QuasClass != 0 )
    return &CDOTA_Ability_Invoker_Quas::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_QuasClass;
  if ( `guard variable for'CDOTA_Ability_Invoker_Quas::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_QuasClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_Quas::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_QuasClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Invoker_Quas::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_QuasClassInfo,
      "CDOTA_Ability_Invoker_Quas",
      "invoker_quas",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_Quas::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_QuasClassInfo);
  }
  CDOTA_Ability_Invoker_Quas::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_QuasClass.m_pClassInfo = &CDOTA_Ability_Invoker_Quas::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_QuasClassInfo;
  CDOTA_Ability_Invoker_Quas::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_QuasClass.m_pBaseClassInfo = CDOTA_Ability_Invoker_Quas::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_QuasClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Invoker_QuasClass = &CDOTA_Ability_Invoker_Quas::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_QuasClass;
  CDOTA_Ability_Invoker_Quas::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_QuasClassInfo.m_pClass = &CDOTA_Ability_Invoker_Quas::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_QuasClass;
  CDOTA_Ability_Invoker_Quas::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_QuasClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Invoker_QuasClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Invoker_Quas::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_QuasClass;
}


// CDOTA_Ability_Invoker_Quas::ProcsMagicStick  (line 3335, @0x0000000002b91cb0, libserver.so)
bool __fastcall CDOTA_Ability_Invoker_Quas::ProcsMagicStick(CDOTA_Ability_Invoker_Quas *const this)
{
  return 0;
}


// CDOTA_Ability_Invoker_Quas::IsStealable  (line 3337, @0x0000000002b91cc0, libserver.so)
bool __fastcall CDOTA_Ability_Invoker_Quas::IsStealable(CDOTA_Ability_Invoker_Quas *const this)
{
  return 0;
}


// CDOTA_Ability_Invoker_Quas::IsHiddenWhenStolen  (line 3338, @0x0000000002b91cd0, libserver.so)
bool __fastcall CDOTA_Ability_Invoker_Quas::IsHiddenWhenStolen(CDOTA_Ability_Invoker_Quas *const this)
{
  return 1;
}


// CDOTA_Ability_Invoker_Quas::OnSpellStart  (line 3345, @0x0000000002b38240, libserver.so)
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_invoker_quas_instance"
void __fastcall CDOTA_Ability_Invoker_Quas::OnSpellStart(CDOTA_Ability_Invoker_Quas *const this)
{
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v3; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-28h]

  v5 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_invoker_quas_instance");
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_invoker_quas_instance", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Invoker_Quas::OnUpgrade  (line 3355, @0x0000000002b580b0, libserver.so)  // inlines: GetInvoke
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_Invoker_Invoke::OnUpgradeElement, CDOTABaseAbility::OnUpgrade
// strings: "invoker_invoke"
void __fastcall CDOTA_Ability_Invoker_Quas::OnUpgrade(CDOTA_Ability_Invoker_Quas *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Ability_Invoker_Invoke *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "invoker_invoke", 0);
  if ( AbilityByName != 0 )
    CDOTA_Ability_Invoker_Invoke::OnUpgradeElement(AbilityByName, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Invoker_Wex::~CDOTA_Ability_Invoker_Wex  (line 3374, @0x0000000002ba17d0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Invoker_Wex::~CDOTA_Ability_Invoker_Wex(CDOTA_Ability_Invoker_Wex *const this)
{
  this->_vptr_IHandleEntity = &off_4501D70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Invoker_Wex::~CDOTA_Ability_Invoker_Wex  (line 3374, @0x0000000002ba17f0, libserver.so)  // inlines: ~CDOTA_Ability_Invoker_Wex
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Invoker_Wex::~CDOTA_Ability_Invoker_Wex(CDOTA_Ability_Invoker_Wex *const this)
{
  this->_vptr_IHandleEntity = &off_4501D70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Invoker_Wex::Schema_DynamicBinding  (line 3376, @0x0000000002b91ce0, libserver.so)
// globals: CDOTA_Ability_Invoker_Wex::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_Wex::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_Wex *const this)
{
  return CDOTA_Ability_Invoker_Wex::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_Wex::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 3376, @0x0000000002b91cf0, libserver.so)
// globals: CDOTA_Ability_Invoker_Wex::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_Wex::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_Wex::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_Wex::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_Wex::CEntityInstanceEntityClass::DestructInstance  (line 3376, @0x0000000002b91d00, libserver.so)  // inlines: Destruct<CDOTA_Ability_Invoker_Wex>
void __fastcall CDOTA_Ability_Invoker_Wex::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Invoker_Wex::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Invoker_Wex::CEntityInstanceEntityClass::FreeInstance  (line 3376, @0x0000000002b91d20, libserver.so)
void __fastcall CDOTA_Ability_Invoker_Wex::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Invoker_Wex::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Invoker_Wex::CEntityInstanceEntityClass::CanAllocate  (line 3376, @0x0000000002b91d40, libserver.so)
bool __fastcall CDOTA_Ability_Invoker_Wex::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Invoker_Wex::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Invoker_Wex::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 3376, @0x0000000002b91d50, libserver.so)
// globals: CDOTA_Ability_Invoker_Wex::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Invoker_Wex::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Invoker_Wex::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_Wex::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_Wex::CEntityInstanceEntityClass::AllocateInstance  (line 3376, @0x0000000002b983e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Invoker_Wex::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Invoker_Wex::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Invoker_Wex::CEntityInstanceEntityClass::ConstructInstance  (line 3376, @0x0000000002b9d670, libserver.so)  // inlines: CDOTA_Ability_Invoker_Wex, Construct<CDOTA_Ability_Invoker_Wex>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Invoker_Wex::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Invoker_Wex::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4501D70;
  }
  return p;
}


// CDOTA_Ability_Invoker_Wex::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3376, @0x0000000002bab330, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Invoker_Wex::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_Wex::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Invoker_Wex::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3376, @0x0000000002bab350, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Invoker_Wex::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_Wex::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Invoker_Wex::GetEntityClassInternal  (line 3376, @0x0000000002bcad00, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "invoker_wex", "CDOTA_Ability_Invoker_Wex"
// globals: `guard variable for'CDOTA_Ability_Invoker_Wex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_WexClass, CDOTA_Ability_Invoker_Wex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_WexClass, __dso_handle, CDOTA_Ability_Invoker_Wex::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Invoker_Wex::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_WexClassInfo, CDOTA_Ability_Invoker_Wex::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_WexClassInfo
CEntityClass *__cdecl CDOTA_Ability_Invoker_Wex::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Invoker_Wex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_WexClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_Wex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_WexClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Invoker_Wex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_WexClass);
    CDOTA_Ability_Invoker_Wex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_WexClass._vptr_CEntityClass = off_4501CF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_Wex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_WexClass);
    __cxa_atexit(
      CDOTA_Ability_Invoker_Wex::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Invoker_Wex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_WexClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Invoker_WexClass != 0 )
    return &CDOTA_Ability_Invoker_Wex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_WexClass;
  if ( `guard variable for'CDOTA_Ability_Invoker_Wex::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_WexClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_Wex::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_WexClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Invoker_Wex::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_WexClassInfo,
      "CDOTA_Ability_Invoker_Wex",
      "invoker_wex",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_Wex::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_WexClassInfo);
  }
  CDOTA_Ability_Invoker_Wex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_WexClass.m_pClassInfo = &CDOTA_Ability_Invoker_Wex::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_WexClassInfo;
  CDOTA_Ability_Invoker_Wex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_WexClass.m_pBaseClassInfo = CDOTA_Ability_Invoker_Wex::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_WexClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Invoker_WexClass = &CDOTA_Ability_Invoker_Wex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_WexClass;
  CDOTA_Ability_Invoker_Wex::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_WexClassInfo.m_pClass = &CDOTA_Ability_Invoker_Wex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_WexClass;
  CDOTA_Ability_Invoker_Wex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_WexClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Invoker_WexClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Invoker_Wex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_WexClass;
}


// CDOTA_Ability_Invoker_Wex::ProcsMagicStick  (line 3381, @0x0000000002b91d60, libserver.so)
bool __fastcall CDOTA_Ability_Invoker_Wex::ProcsMagicStick(CDOTA_Ability_Invoker_Wex *const this)
{
  return 0;
}


// CDOTA_Ability_Invoker_Wex::IsStealable  (line 3383, @0x0000000002b91d70, libserver.so)
bool __fastcall CDOTA_Ability_Invoker_Wex::IsStealable(CDOTA_Ability_Invoker_Wex *const this)
{
  return 0;
}


// CDOTA_Ability_Invoker_Wex::IsHiddenWhenStolen  (line 3384, @0x0000000002b91d80, libserver.so)
bool __fastcall CDOTA_Ability_Invoker_Wex::IsHiddenWhenStolen(CDOTA_Ability_Invoker_Wex *const this)
{
  return 1;
}


// CDOTA_Ability_Invoker_Wex::OnSpellStart  (line 3391, @0x0000000002b382e0, libserver.so)
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_invoker_wex_instance"
void __fastcall CDOTA_Ability_Invoker_Wex::OnSpellStart(CDOTA_Ability_Invoker_Wex *const this)
{
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v3; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-28h]

  v5 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_invoker_wex_instance");
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_invoker_wex_instance", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Invoker_Wex::OnUpgrade  (line 3401, @0x0000000002b580f0, libserver.so)  // inlines: GetInvoke
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_Invoker_Invoke::OnUpgradeElement, CDOTABaseAbility::OnUpgrade
// strings: "invoker_invoke"
void __fastcall CDOTA_Ability_Invoker_Wex::OnUpgrade(CDOTA_Ability_Invoker_Wex *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Ability_Invoker_Invoke *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "invoker_invoke", 0);
  if ( AbilityByName != 0 )
    CDOTA_Ability_Invoker_Invoke::OnUpgradeElement(AbilityByName, 1);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Invoker_Exort::~CDOTA_Ability_Invoker_Exort  (line 3420, @0x0000000002ba1820, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Invoker_Exort::~CDOTA_Ability_Invoker_Exort(CDOTA_Ability_Invoker_Exort *const this)
{
  this->_vptr_IHandleEntity = &off_4502870;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Invoker_Exort::~CDOTA_Ability_Invoker_Exort  (line 3420, @0x0000000002ba1840, libserver.so)  // inlines: ~CDOTA_Ability_Invoker_Exort
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Invoker_Exort::~CDOTA_Ability_Invoker_Exort(CDOTA_Ability_Invoker_Exort *const this)
{
  this->_vptr_IHandleEntity = &off_4502870;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Invoker_Exort::Schema_DynamicBinding  (line 3422, @0x0000000002b91d90, libserver.so)
// globals: CDOTA_Ability_Invoker_Exort::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_Exort::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_Exort *const this)
{
  return CDOTA_Ability_Invoker_Exort::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_Exort::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 3422, @0x0000000002b91da0, libserver.so)
// globals: CDOTA_Ability_Invoker_Exort::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_Exort::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_Exort::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_Exort::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_Exort::CEntityInstanceEntityClass::DestructInstance  (line 3422, @0x0000000002b91db0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Invoker_Exort>
void __fastcall CDOTA_Ability_Invoker_Exort::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Invoker_Exort::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Invoker_Exort::CEntityInstanceEntityClass::FreeInstance  (line 3422, @0x0000000002b91dd0, libserver.so)
void __fastcall CDOTA_Ability_Invoker_Exort::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Invoker_Exort::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Invoker_Exort::CEntityInstanceEntityClass::CanAllocate  (line 3422, @0x0000000002b91df0, libserver.so)
bool __fastcall CDOTA_Ability_Invoker_Exort::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Invoker_Exort::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Invoker_Exort::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 3422, @0x0000000002b91e00, libserver.so)
// globals: CDOTA_Ability_Invoker_Exort::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Invoker_Exort::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Invoker_Exort::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_Exort::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_Exort::CEntityInstanceEntityClass::AllocateInstance  (line 3422, @0x0000000002b98420, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Invoker_Exort::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Invoker_Exort::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Invoker_Exort::CEntityInstanceEntityClass::ConstructInstance  (line 3422, @0x0000000002b9d6a0, libserver.so)  // inlines: CDOTA_Ability_Invoker_Exort, Construct<CDOTA_Ability_Invoker_Exort>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Invoker_Exort::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Invoker_Exort::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4502870;
  }
  return p;
}


// CDOTA_Ability_Invoker_Exort::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3422, @0x0000000002bab380, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Invoker_Exort::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_Exort::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Invoker_Exort::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3422, @0x0000000002bab3a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Invoker_Exort::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_Exort::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Invoker_Exort::GetEntityClassInternal  (line 3422, @0x0000000002bcae50, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "invoker_exort", "CDOTA_Ability_Invoker_Exort"
// globals: `guard variable for'CDOTA_Ability_Invoker_Exort::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ExortClass, CDOTA_Ability_Invoker_Exort::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ExortClass, __dso_handle, CDOTA_Ability_Invoker_Exort::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Invoker_Exort::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ExortClassInfo, CDOTA_Ability_Invoker_Exort::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ExortClassInfo
CEntityClass *__cdecl CDOTA_Ability_Invoker_Exort::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Invoker_Exort::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ExortClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_Exort::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ExortClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Invoker_Exort::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ExortClass);
    CDOTA_Ability_Invoker_Exort::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ExortClass._vptr_CEntityClass = off_45027F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_Exort::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ExortClass);
    __cxa_atexit(
      CDOTA_Ability_Invoker_Exort::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Invoker_Exort::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ExortClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Invoker_ExortClass != 0 )
    return &CDOTA_Ability_Invoker_Exort::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ExortClass;
  if ( `guard variable for'CDOTA_Ability_Invoker_Exort::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ExortClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_Exort::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ExortClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Invoker_Exort::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ExortClassInfo,
      "CDOTA_Ability_Invoker_Exort",
      "invoker_exort",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_Exort::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ExortClassInfo);
  }
  CDOTA_Ability_Invoker_Exort::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ExortClass.m_pClassInfo = &CDOTA_Ability_Invoker_Exort::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ExortClassInfo;
  CDOTA_Ability_Invoker_Exort::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ExortClass.m_pBaseClassInfo = CDOTA_Ability_Invoker_Exort::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ExortClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Invoker_ExortClass = &CDOTA_Ability_Invoker_Exort::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ExortClass;
  CDOTA_Ability_Invoker_Exort::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_ExortClassInfo.m_pClass = &CDOTA_Ability_Invoker_Exort::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ExortClass;
  CDOTA_Ability_Invoker_Exort::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ExortClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Invoker_ExortClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Invoker_Exort::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_ExortClass;
}


// CDOTA_Ability_Invoker_Exort::ProcsMagicStick  (line 3427, @0x0000000002b91e10, libserver.so)
bool __fastcall CDOTA_Ability_Invoker_Exort::ProcsMagicStick(CDOTA_Ability_Invoker_Exort *const this)
{
  return 0;
}


// CDOTA_Ability_Invoker_Exort::IsStealable  (line 3429, @0x0000000002b91e20, libserver.so)
bool __fastcall CDOTA_Ability_Invoker_Exort::IsStealable(CDOTA_Ability_Invoker_Exort *const this)
{
  return 0;
}


// CDOTA_Ability_Invoker_Exort::IsHiddenWhenStolen  (line 3430, @0x0000000002b91e30, libserver.so)
bool __fastcall CDOTA_Ability_Invoker_Exort::IsHiddenWhenStolen(CDOTA_Ability_Invoker_Exort *const this)
{
  return 1;
}


// CDOTA_Ability_Invoker_Exort::OnSpellStart  (line 3437, @0x0000000002b38380, libserver.so)
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_invoker_exort_instance"
void __fastcall CDOTA_Ability_Invoker_Exort::OnSpellStart(CDOTA_Ability_Invoker_Exort *const this)
{
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v3; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-28h]

  v5 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_invoker_exort_instance");
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_invoker_exort_instance", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Invoker_Exort::OnUpgrade  (line 3447, @0x0000000002b58140, libserver.so)  // inlines: GetInvoke
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_Invoker_Invoke::OnUpgradeElement, CDOTABaseAbility::OnUpgrade
// strings: "invoker_invoke"
void __fastcall CDOTA_Ability_Invoker_Exort::OnUpgrade(CDOTA_Ability_Invoker_Exort *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Ability_Invoker_Invoke *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "invoker_invoke", 0);
  if ( AbilityByName != 0 )
    CDOTA_Ability_Invoker_Invoke::OnUpgradeElement(AbilityByName, 2);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Invoker_Empty1::~CDOTA_Ability_Invoker_Empty1  (line 3466, @0x0000000002ba1870, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Invoker_Empty1::~CDOTA_Ability_Invoker_Empty1(CDOTA_Ability_Invoker_Empty1 *const this)
{
  this->_vptr_IHandleEntity = &off_4503370;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Invoker_Empty1::~CDOTA_Ability_Invoker_Empty1  (line 3466, @0x0000000002ba1890, libserver.so)  // inlines: ~CDOTA_Ability_Invoker_Empty1
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Invoker_Empty1::~CDOTA_Ability_Invoker_Empty1(CDOTA_Ability_Invoker_Empty1 *const this)
{
  this->_vptr_IHandleEntity = &off_4503370;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Invoker_Empty1::Schema_DynamicBinding  (line 3468, @0x0000000002b91e40, libserver.so)
// globals: CDOTA_Ability_Invoker_Empty1::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_Empty1::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_Empty1 *const this)
{
  return CDOTA_Ability_Invoker_Empty1::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_Empty1::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 3468, @0x0000000002b91e50, libserver.so)
// globals: CDOTA_Ability_Invoker_Empty1::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_Empty1::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_Empty1::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_Empty1::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_Empty1::CEntityInstanceEntityClass::DestructInstance  (line 3468, @0x0000000002b91e60, libserver.so)  // inlines: Destruct<CDOTA_Ability_Invoker_Empty1>
void __fastcall CDOTA_Ability_Invoker_Empty1::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Invoker_Empty1::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Invoker_Empty1::CEntityInstanceEntityClass::FreeInstance  (line 3468, @0x0000000002b91e80, libserver.so)
void __fastcall CDOTA_Ability_Invoker_Empty1::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Invoker_Empty1::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Invoker_Empty1::CEntityInstanceEntityClass::CanAllocate  (line 3468, @0x0000000002b91ea0, libserver.so)
bool __fastcall CDOTA_Ability_Invoker_Empty1::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Invoker_Empty1::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Invoker_Empty1::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 3468, @0x0000000002b91eb0, libserver.so)
// globals: CDOTA_Ability_Invoker_Empty1::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Invoker_Empty1::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Invoker_Empty1::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_Empty1::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_Empty1::CEntityInstanceEntityClass::AllocateInstance  (line 3468, @0x0000000002b98460, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Invoker_Empty1::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Invoker_Empty1::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Invoker_Empty1::CEntityInstanceEntityClass::ConstructInstance  (line 3468, @0x0000000002b9d6d0, libserver.so)  // inlines: CDOTA_Ability_Invoker_Empty1, Construct<CDOTA_Ability_Invoker_Empty1>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Invoker_Empty1::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Invoker_Empty1::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4503370;
  }
  return p;
}


// CDOTA_Ability_Invoker_Empty1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3468, @0x0000000002bab3d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Invoker_Empty1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_Empty1::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Invoker_Empty1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3468, @0x0000000002bab3f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Invoker_Empty1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_Empty1::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Invoker_Empty1::GetEntityClassInternal  (line 3468, @0x0000000002bcafa0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "invoker_empty1", "CDOTA_Ability_Invoker_Empty1"
// globals: `guard variable for'CDOTA_Ability_Invoker_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty1Class, CDOTA_Ability_Invoker_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty1Class, __dso_handle, CDOTA_Ability_Invoker_Empty1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Invoker_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_Empty1ClassInfo, CDOTA_Ability_Invoker_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_Empty1ClassInfo
CEntityClass *__cdecl CDOTA_Ability_Invoker_Empty1::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Invoker_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty1Class == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty1Class) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Invoker_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty1Class);
    CDOTA_Ability_Invoker_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty1Class._vptr_CEntityClass = off_45032F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty1Class);
    __cxa_atexit(
      CDOTA_Ability_Invoker_Empty1::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Invoker_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty1Class,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Invoker_Empty1Class != 0 )
    return &CDOTA_Ability_Invoker_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty1Class;
  if ( `guard variable for'CDOTA_Ability_Invoker_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_Empty1ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_Empty1ClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Invoker_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_Empty1ClassInfo,
      "CDOTA_Ability_Invoker_Empty1",
      "invoker_empty1",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_Empty1ClassInfo);
  }
  CDOTA_Ability_Invoker_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty1Class.m_pClassInfo = &CDOTA_Ability_Invoker_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_Empty1ClassInfo;
  CDOTA_Ability_Invoker_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty1Class.m_pBaseClassInfo = CDOTA_Ability_Invoker_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_Empty1ClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Invoker_Empty1Class = &CDOTA_Ability_Invoker_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty1Class;
  CDOTA_Ability_Invoker_Empty1::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_Empty1ClassInfo.m_pClass = &CDOTA_Ability_Invoker_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty1Class;
  CDOTA_Ability_Invoker_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty1Class.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Invoker_Empty1Class->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Invoker_Empty1::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty1Class;
}


// CDOTA_Ability_Invoker_Empty2::~CDOTA_Ability_Invoker_Empty2  (line 3480, @0x0000000002ba18c0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Invoker_Empty2::~CDOTA_Ability_Invoker_Empty2(CDOTA_Ability_Invoker_Empty2 *const this)
{
  this->_vptr_IHandleEntity = &off_4503E70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Invoker_Empty2::~CDOTA_Ability_Invoker_Empty2  (line 3480, @0x0000000002ba18e0, libserver.so)  // inlines: ~CDOTA_Ability_Invoker_Empty2
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Invoker_Empty2::~CDOTA_Ability_Invoker_Empty2(CDOTA_Ability_Invoker_Empty2 *const this)
{
  this->_vptr_IHandleEntity = &off_4503E70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Invoker_Empty2::Schema_DynamicBinding  (line 3482, @0x0000000002b91ec0, libserver.so)
// globals: CDOTA_Ability_Invoker_Empty2::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_Empty2::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_Empty2 *const this)
{
  return CDOTA_Ability_Invoker_Empty2::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_Empty2::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 3482, @0x0000000002b91ed0, libserver.so)
// globals: CDOTA_Ability_Invoker_Empty2::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Invoker_Empty2::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Invoker_Empty2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_Empty2::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_Empty2::CEntityInstanceEntityClass::DestructInstance  (line 3482, @0x0000000002b91ee0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Invoker_Empty2>
void __fastcall CDOTA_Ability_Invoker_Empty2::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Invoker_Empty2::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Invoker_Empty2::CEntityInstanceEntityClass::FreeInstance  (line 3482, @0x0000000002b91f00, libserver.so)
void __fastcall CDOTA_Ability_Invoker_Empty2::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Invoker_Empty2::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Invoker_Empty2::CEntityInstanceEntityClass::CanAllocate  (line 3482, @0x0000000002b91f20, libserver.so)
bool __fastcall CDOTA_Ability_Invoker_Empty2::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Invoker_Empty2::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Invoker_Empty2::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 3482, @0x0000000002b91f30, libserver.so)
// globals: CDOTA_Ability_Invoker_Empty2::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Invoker_Empty2::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Invoker_Empty2::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Invoker_Empty2::s_pSchemaBinding;
}


// CDOTA_Ability_Invoker_Empty2::CEntityInstanceEntityClass::AllocateInstance  (line 3482, @0x0000000002b984a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Invoker_Empty2::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Invoker_Empty2::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Invoker_Empty2::CEntityInstanceEntityClass::ConstructInstance  (line 3482, @0x0000000002b9d700, libserver.so)  // inlines: CDOTA_Ability_Invoker_Empty2, Construct<CDOTA_Ability_Invoker_Empty2>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Invoker_Empty2::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Invoker_Empty2::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4503E70;
  }
  return p;
}


// CDOTA_Ability_Invoker_Empty2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3482, @0x0000000002bab420, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Invoker_Empty2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_Empty2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Invoker_Empty2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3482, @0x0000000002bab440, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Invoker_Empty2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Invoker_Empty2::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal  (line 3482, @0x0000000002bd0fe0, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "invoker_empty2", "CDOTA_Ability_Invoker_Empty2"
// globals: `guard variable for'CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class, CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Invoker_Empty2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Invoker_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_Empty2ClassInfo, CDOTA_Ability_Invoker_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_Empty2ClassInfo
CEntityClass *__cdecl CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class) != 0 )
  {
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_classInputs.m_Size = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_hNetworkSerializer = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_pBaseClassInfo = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_pClassInfo = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_flags = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_pScriptClassDesc = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_pInputs = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_nInputCount = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_pOutputs = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_nOutputCount = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_pGameClass = 0;
    CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class._vptr_CEntityClass = off_4503DF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class);
    __cxa_atexit(
      CDOTA_Ability_Invoker_Empty2::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Invoker_Empty2Class != 0 )
    return &CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class;
  if ( `guard variable for'CDOTA_Ability_Invoker_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_Empty2ClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Invoker_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_Empty2ClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Invoker_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_Empty2ClassInfo,
      "CDOTA_Ability_Invoker_Empty2",
      "invoker_empty2",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Invoker_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_Empty2ClassInfo);
  }
  CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_pClassInfo = &CDOTA_Ability_Invoker_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_Empty2ClassInfo;
  CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_pBaseClassInfo = CDOTA_Ability_Invoker_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_Empty2ClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Invoker_Empty2Class = &CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class;
  CDOTA_Ability_Invoker_Empty2::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Invoker_Empty2ClassInfo.m_pClass = &CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class;
  CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Invoker_Empty2Class->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Invoker_Empty2::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Invoker_Empty2Class;
}


// CDOTA_BaseNPC_Invoker_Forged_Spirit::~CDOTA_BaseNPC_Invoker_Forged_Spirit  (line 3489, @0x0000000002b99240, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC
void __fastcall CDOTA_BaseNPC_Invoker_Forged_Spirit::~CDOTA_BaseNPC_Invoker_Forged_Spirit(
        CDOTA_BaseNPC_Invoker_Forged_Spirit *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
}


// CDOTA_BaseNPC_Invoker_Forged_Spirit::~CDOTA_BaseNPC_Invoker_Forged_Spirit  (line 3489, @0x0000000002b99290, libserver.so)  // inlines: ~CDOTA_BaseNPC_Additive, ~CDOTA_BaseNPC_Creep, ~CDOTA_BaseNPC_Invoker_Forged_Spirit
// calls: CDOTA_BaseNPC::~CDOTA_BaseNPC, CBaseEntity::operator delete
void __fastcall CDOTA_BaseNPC_Invoker_Forged_Spirit::~CDOTA_BaseNPC_Invoker_Forged_Spirit(
        CDOTA_BaseNPC_Invoker_Forged_Spirit *const this)
{
  this->_vptr_IHandleEntity = &off_42D9310;
  this->_vptr_INextBotEventResponder = &off_42DA270;
  this->_vptr_CObstructionObject = &off_42DA5A0;
  CDOTA_BaseNPC::~CDOTA_BaseNPC(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_BaseNPC_Invoker_Forged_Spirit::Schema_DynamicBinding  (line 3491, @0x0000000002b91f40, libserver.so)
// globals: CDOTA_BaseNPC_Invoker_Forged_Spirit::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Invoker_Forged_Spirit::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Invoker_Forged_Spirit *const this)
{
  return CDOTA_BaseNPC_Invoker_Forged_Spirit::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 3491, @0x0000000002b91f70, libserver.so)
// globals: CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass::DestructInstance  (line 3491, @0x0000000002b91f80, libserver.so)  // inlines: Destruct<CDOTA_BaseNPC_Invoker_Forged_Spirit>
void __fastcall CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass::FreeInstance  (line 3491, @0x0000000002b91fa0, libserver.so)
void __fastcall CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass::CanAllocate  (line 3491, @0x0000000002b91fc0, libserver.so)
bool __fastcall CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 3491, @0x0000000002b91fd0, libserver.so)
// globals: CDOTA_BaseNPC_Invoker_Forged_Spirit::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass *const this)
{
  return CDOTA_BaseNPC_Invoker_Forged_Spirit::s_pSchemaBinding;
}


// CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass::AllocateInstance  (line 3491, @0x0000000002b984e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 4512);
  memset(v1, 0, 0x11A0u);
  return v1;
}


// CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass::ConstructInstance  (line 3491, @0x0000000002b98f90, libserver.so)  // inlines: CDOTA_BaseNPC_Invoker_Forged_Spirit, Construct<CDOTA_BaseNPC_Invoker_Forged_Spirit>
// calls: CDOTA_BaseNPC_Creep::CDOTA_BaseNPC_Creep
CEntityInstance *__fastcall CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Creep::CDOTA_BaseNPC_Creep(p);
    *p = &off_4504970;
    *(p + 236) = &off_45058D0;
    *(p + 257) = &off_4505C00;
  }
  return p;
}


// CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3491, @0x0000000002bac030, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 3491, @0x0000000002bac460, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_BaseNPC_Invoker_Forged_Spirit::GetEntityClassInternal  (line 3491, @0x0000000002bcd9a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC::InitScriptDesc, CDOTA_BaseNPC_Creep::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "npc_dota_invoker_forged_spirit", "CDOTA_BaseNPC_Invoker_Forged_Spirit"
// globals: `guard variable for'CDOTA_BaseNPC_Invoker_Forged_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Invoker_Forged_SpiritClass, CDOTA_BaseNPC_Invoker_Forged_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Invoker_Forged_SpiritClass, __dso_handle, CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_BaseNPC_Invoker_Forged_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Invoker_Forged_SpiritClassInfo, CDOTA_BaseNPC_Invoker_Forged_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Invoker_Forged_SpiritClassInfo
CEntityClass *__cdecl CDOTA_BaseNPC_Invoker_Forged_Spirit::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_BaseNPC_Invoker_Forged_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Invoker_Forged_SpiritClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Invoker_Forged_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Invoker_Forged_SpiritClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_BaseNPC_Invoker_Forged_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Invoker_Forged_SpiritClass);
    CDOTA_BaseNPC_Invoker_Forged_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Invoker_Forged_SpiritClass._vptr_CEntityClass = off_45048F0;
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Invoker_Forged_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Invoker_Forged_SpiritClass);
    __cxa_atexit(
      CDOTA_BaseNPC_Invoker_Forged_Spirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_BaseNPC_Invoker_Forged_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Invoker_Forged_SpiritClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_BaseNPC_Invoker_Forged_SpiritClass != 0 )
    return &CDOTA_BaseNPC_Invoker_Forged_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Invoker_Forged_SpiritClass;
  if ( `guard variable for'CDOTA_BaseNPC_Invoker_Forged_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Invoker_Forged_SpiritClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_BaseNPC_Invoker_Forged_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Invoker_Forged_SpiritClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Creep::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_BaseNPC_Invoker_Forged_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Invoker_Forged_SpiritClassInfo,
      "CDOTA_BaseNPC_Invoker_Forged_Spirit",
      "npc_dota_invoker_forged_spirit",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_BaseNPC_Invoker_Forged_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Invoker_Forged_SpiritClassInfo);
  }
  CDOTA_BaseNPC_Invoker_Forged_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Invoker_Forged_SpiritClass.m_pClassInfo = &CDOTA_BaseNPC_Invoker_Forged_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Invoker_Forged_SpiritClassInfo;
  CDOTA_BaseNPC_Invoker_Forged_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Invoker_Forged_SpiritClass.m_pBaseClassInfo = CDOTA_BaseNPC_Invoker_Forged_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Invoker_Forged_SpiritClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_BaseNPC_Invoker_Forged_SpiritClass = &CDOTA_BaseNPC_Invoker_Forged_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Invoker_Forged_SpiritClass;
  CDOTA_BaseNPC_Invoker_Forged_Spirit::GetEntityClassInfo(void)::g_EntityCDOTA_BaseNPC_Invoker_Forged_SpiritClassInfo.m_pClass = &CDOTA_BaseNPC_Invoker_Forged_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Invoker_Forged_SpiritClass;
  CDOTA_BaseNPC_Invoker_Forged_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Invoker_Forged_SpiritClass.m_pScriptClassDesc = CDOTA_BaseNPC::InitScriptDesc();
  g_pEntityCDOTA_BaseNPC_Invoker_Forged_SpiritClass->m_pComponentOverrides = 0;
  return &CDOTA_BaseNPC_Invoker_Forged_Spirit::GetEntityClassInternal(void)::g_EntityCDOTA_BaseNPC_Invoker_Forged_SpiritClass;
}


// CDOTA_BaseNPC_Invoker_Forged_Spirit::YouForgotToImplementOrDeclareServerClass  (line 3499, @0x0000000002b35c60, libserver.so)
int __fastcall CDOTA_BaseNPC_Invoker_Forged_Spirit::YouForgotToImplementOrDeclareServerClass(
        CDOTA_BaseNPC_Invoker_Forged_Spirit *const this)
{
  return 0;
}


// CDOTA_BaseNPC_Invoker_Forged_Spirit::GetServerClass  (line 3499, @0x0000000002b4c8a0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_BaseNPC_Invoker_Forged_Spirit::GetServerClass(
        CDOTA_BaseNPC_Invoker_Forged_Spirit *const this)
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


// CDOTA_BaseNPC_Invoker_Forged_Spirit::OnAlive  (line 3509, @0x0000000002b35c70, libserver.so)
void __fastcall CDOTA_BaseNPC_Invoker_Forged_Spirit::OnAlive(CDOTA_BaseNPC_Invoker_Forged_Spirit *const this)
{
  ;
}


// CDOTA_BaseNPC_Invoker_Forged_Spirit::OnDying  (line 3514, @0x0000000002b35c80, libserver.so)
void __fastcall CDOTA_BaseNPC_Invoker_Forged_Spirit::OnDying(CDOTA_BaseNPC_Invoker_Forged_Spirit *const this)
{
  ;
}


// CDOTA_Unit_Hero_Invoker::OnAlive  (line 3520, @0x0000000002b35c90, libserver.so)
void __fastcall CDOTA_Unit_Hero_Invoker::OnAlive(CDOTA_Unit_Hero_Invoker *const this)
{
  ;
}


// CDOTA_Unit_Hero_Invoker::OnDying  (line 3525, @0x0000000002b3c850, libserver.so)  // inlines: GetColor, Vector, operator=
// calls: CDOTA_BaseNPC::FindAbilityByName, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "invoker_invoke", "particles/units/heroes/hero_invoker/invoker_death.vpcf"
void __fastcall CDOTA_Unit_Hero_Invoker::OnDying(CDOTA_Unit_Hero_Invoker *const this)
{
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v5; // rax
  CDOTA_ParticleManager *v6; // rax
  double vecColor; // [rsp+0h] [rbp-20h]
  float vecColor_8; // [rsp+8h] [rbp-18h]

  if ( !this->m_bIsIllusion.m_Value )
  {
    vecColor = 3.799912751104e15;
    vecColor_8 = 100.0;
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "invoker_invoke", 0);
    if ( AbilityByName != 0 )
    {
      vecColor = *&AbilityByName[1].m_NetworkTransmitComponent.m_pTimerEvent;
      vecColor_8 = *&AbilityByName[1].m_NetworkTransmitComponent.m_PVSInfo.m_pClusters;
    }
    ParticleManager = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 ParticleManager,
                 "particles/units/heroes/hero_invoker/invoker_death.vpcf",
                 1,
                 this,
                 0,
                 0);
    v5 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v5, Particle, 1, vecColor, vecColor_8);
    v6 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v6, Particle);
  }
}


