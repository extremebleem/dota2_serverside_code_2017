// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_ancient_apparition.cpp:33
class CDOTA_Unit_Hero_AncientApparition : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_AncientApparition(CDOTA_Unit_Hero_AncientApparition &);
	CDOTA_Unit_Hero_AncientApparition(CDOTA_Unit_Hero_AncientApparition &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnDying();
	virtual const char * GetDeathEffectName();
	CDOTA_Unit_Hero_AncientApparition();
	virtual bool OnLoadState(KeyValues *);
	virtual ~CDOTA_Unit_Hero_AncientApparition();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[469] OnDying
	// vtable[502] GetDeathEffectName
	// vtable[467] OnLoadState
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_ancient_apparition.cpp:49
class C_CDOTA_Unit_Hero_AncientApparition_MapInstall {
	C_CDOTA_Unit_Hero_AncientApparition_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_ancient_apparition.cpp:77
class CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter : public CDOTA_Buff {
public:

private:

	int max_charges;  // +0xba8
	float charge_restore_time;  // +0xbac
	bool m_bIsThinking;  // +0xbb0
	CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual bool IsPermanent();
	virtual bool DestroyOnExpire();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	void SetThinking(bool);
	bool IsThinking();
	virtual ~CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[23] IsPermanent
	// vtable[61] DestroyOnExpire
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_ancient_apparition.cpp:172
class CDOTA_Ability_AncientApparition_ColdFeet : public CDOTABaseAbility {
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
	CDOTA_Ability_AncientApparition_ColdFeet(CDOTA_Ability_AncientApparition_ColdFeet &);
	CDOTA_Ability_AncientApparition_ColdFeet(CDOTA_Ability_AncientApparition_ColdFeet &);
	CDOTA_Ability_AncientApparition_ColdFeet();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual const char * GetIntrinsicModifierName();
	virtual bool IsRefreshable();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual float GetCooldown(int);
	virtual Activity GetGestureBasedActivity();
	virtual int GetConceptRecipientType();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual ~CDOTA_Ability_AncientApparition_ColdFeet();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[280] GetIntrinsicModifierName
	// vtable[217] IsRefreshable
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[242] GetCooldown
	// vtable[211] GetGestureBasedActivity
	// vtable[299] GetConceptRecipientType
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// vtable[304] GetAssociatedSecondaryAbilities
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_ancient_apparition.cpp:218
class C_CDOTA_Ability_AncientApparition_ColdFeet_MapInstall {
	C_CDOTA_Ability_AncientApparition_ColdFeet_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_ancient_apparition.cpp:345
class CDOTA_Modifier_AncientApparition_ColdFeet : public CDOTA_Buff {
public:

private:

	int m_nCurrentTick;  // +0xbb4
	float damage;  // +0xbb8
	int break_distance;  // +0xbbc
	float stun_duration;  // +0xbc0
	CDOTA_Modifier_AncientApparition_ColdFeet();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsPurgable();
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual int GetNumAvoidLocations();
	virtual Vector GetAvoidLocation(int);
	virtual float AvoidStrength(CDOTA_Bot *);
	virtual bool AvoidFilter(CDOTA_BaseNPC *);
	virtual float GetAvoidRadius(int);
	virtual bool IsAvoidMagical();
	virtual bool IsPersistentAvoidance();
	virtual ~CDOTA_Modifier_AncientApparition_ColdFeet();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[14] IsPurgable
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[74] GetNumAvoidLocations
	// vtable[75] GetAvoidLocation
	// vtable[77] AvoidStrength
	// vtable[76] AvoidFilter
	// vtable[78] GetAvoidRadius
	// vtable[79] IsAvoidMagical
	// vtable[81] IsPersistentAvoidance
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_ancient_apparition.cpp:448
class CDOTA_Modifier_AncientApparition_ColdFeet_Freeze : public CDOTA_Modifier_Stunned {
public:

	CDOTA_Modifier_AncientApparition_ColdFeet_Freeze();
	virtual bool IsDebuff();
	virtual bool IsStunDebuff();
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual bool ShouldUseOverheadOffset();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_AncientApparition_ColdFeet_Freeze();

	// vtable[12] IsDebuff
	// vtable[16] IsStunDebuff
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[69] ShouldUseOverheadOffset
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_ancient_apparition.cpp:481
class CDOTA_Ability_AncientApparition_IceVortex : public CDOTABaseAbility {
public:

private:

	int vision_aoe;  // +0x390
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
	CDOTA_Ability_AncientApparition_IceVortex(CDOTA_Ability_AncientApparition_IceVortex &);
	CDOTA_Ability_AncientApparition_IceVortex(CDOTA_Ability_AncientApparition_IceVortex &);
	CDOTA_Ability_AncientApparition_IceVortex();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual float GetSlowDuration();
	virtual Activity GetGestureBasedActivity();
	virtual ~CDOTA_Ability_AncientApparition_IceVortex();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[321] GetSlowDuration
	// vtable[211] GetGestureBasedActivity
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_ancient_apparition.cpp:508
class C_CDOTA_Ability_AncientApparition_IceVortex_MapInstall {
	C_CDOTA_Ability_AncientApparition_IceVortex_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_ancient_apparition.cpp:543
class CDOTA_Modifier_AncientApparition_IceVortexThinker : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	int movement_speed_pct;  // +0xbac
	int spell_resist_pct;  // +0xbb0
	int m_nFXIndex;  // +0xbb4
	CDOTA_Modifier_AncientApparition_IceVortexThinker();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraRadius();
	virtual ~CDOTA_Modifier_AncientApparition_IceVortexThinker();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[41] GetAuraRadius
	// sizeof = 3024
};

// src/game/shared/dota/units/dota_unit_hero_ancient_apparition.cpp:598
class CDOTA_Modifier_AncientApparition_IceVortex : public CDOTA_Buff {
public:

private:

	int movement_speed_pct;  // +0xba8
	int spell_resist_pct;  // +0xbac
	CDOTA_Modifier_AncientApparition_IceVortex();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierMagicalResistanceBonus(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_AncientApparition_IceVortex();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_ancient_apparition.cpp:666
class CDOTA_Ability_AncientApparition_ChillingTouch : public CDOTABaseAbility {
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
	CDOTA_Ability_AncientApparition_ChillingTouch(CDOTA_Ability_AncientApparition_ChillingTouch &);
	CDOTA_Ability_AncientApparition_ChillingTouch(CDOTA_Ability_AncientApparition_ChillingTouch &);
	CDOTA_Ability_AncientApparition_ChillingTouch();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual Activity GetGestureBasedActivity();
	virtual ~CDOTA_Ability_AncientApparition_ChillingTouch();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[211] GetGestureBasedActivity
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_ancient_apparition.cpp:694
class C_CDOTA_Ability_AncientApparition_ChillingTouch_MapInstall {
	C_CDOTA_Ability_AncientApparition_ChillingTouch_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_ancient_apparition.cpp:741
class CDOTA_Modifier_AncientApparition_ChillingTouch : public CDOTA_Buff {
public:

private:

	int bonus_damage;  // +0xba8
	int attack_speed_pct;  // +0xbac
	CDOTA_Modifier_AncientApparition_ChillingTouch();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool CanBeManuallyRemoved();
	virtual const char * GetEffectName();
	ModifierVariant_t OnAttacked(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual ~CDOTA_Modifier_AncientApparition_ChillingTouch();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[19] CanBeManuallyRemoved
	// vtable[67] GetEffectName
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_ancient_apparition.cpp:848
class CDOTA_Ability_AncientApparition_IceBlast : public CDOTABaseAbility {
public:

private:

	int m_iTrackerProjectile;  // +0x3cc
	int path_radius;  // +0x3d0
	int radius_min;  // +0x3d4
	int radius_max;  // +0x3d8
	float radius_grow;  // +0x3dc
	float frostbite_duration;  // +0x3e0
	float frostbite_duration_scepter;  // +0x3e4
	int target_sight_radius;  // +0x3e8

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
	CDOTA_Ability_AncientApparition_IceBlast(CDOTA_Ability_AncientApparition_IceBlast &);
	CDOTA_Ability_AncientApparition_IceBlast(CDOTA_Ability_AncientApparition_IceBlast &);
	CDOTA_Ability_AncientApparition_IceBlast();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	Vector GetTrackerLocation();
	bool IsTrackerAlive();
	void DestroyTracker();
	virtual void Spawn(const CEntityKeyValues *);
	void DebuffNearbyUnits(const Vector &, int);
	virtual void OnUpgrade();
	virtual void OnSpellStart();
	virtual bool OnProjectileHit_ExtraData(EHANDLE, const Vector &, KeyValues *);
	virtual void OnProjectileThink_ExtraData(const Vector &, KeyValues *);
	virtual bool ShouldSpeakAbilityConcept(int);
	virtual void OnUnStolen();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual ~CDOTA_Ability_AncientApparition_IceBlast();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[268] OnUpgrade
	// vtable[266] OnSpellStart
	// vtable[290] OnProjectileHit_ExtraData
	// vtable[294] OnProjectileThink_ExtraData
	// vtable[298] ShouldSpeakAbilityConcept
	// vtable[308] OnUnStolen
	// vtable[304] GetAssociatedSecondaryAbilities
	// sizeof = 1032
};

// src/game/shared/dota/units/dota_unit_hero_ancient_apparition.cpp:893
class C_CDOTA_Ability_AncientApparition_IceBlast_MapInstall {
	C_CDOTA_Ability_AncientApparition_IceBlast_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_ancient_apparition.cpp:1210
class CDOTA_Ability_AncientApparition_IceBlast_Release : public CDOTABaseAbility {
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
	CDOTA_Ability_AncientApparition_IceBlast_Release(CDOTA_Ability_AncientApparition_IceBlast_Release &);
	CDOTA_Ability_AncientApparition_IceBlast_Release(CDOTA_Ability_AncientApparition_IceBlast_Release &);
	CDOTA_Ability_AncientApparition_IceBlast_Release();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnUpgrade();
	virtual void OnSpellStart();
	virtual bool ProcsMagicStick();
	virtual bool IsHiddenWhenStolen();
	virtual const char * GetAssociatedPrimaryAbilities();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_AncientApparition_IceBlast_Release();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[268] OnUpgrade
	// vtable[266] OnSpellStart
	// vtable[239] ProcsMagicStick
	// vtable[306] IsHiddenWhenStolen
	// vtable[303] GetAssociatedPrimaryAbilities
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_ancient_apparition.cpp:1280
class CDOTA_Modifier_AncientApparition_IceBlast : public CDOTA_Buff {
public:

private:

	float dot_damage;  // +0xba8
	float kill_pct;  // +0xbac
	EHANDLE m_hFracturingEntity;  // +0xbb0
	CDOTA_Modifier_AncientApparition_IceBlast();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsPurgable();
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	ModifierVariant_t GetDisableHealing(const CModifierParams &);
	virtual void DeclareFunctions();
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_AncientApparition_IceBlast();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[14] IsPurgable
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[65] DeclareFunctions
	// vtable[7] GetAttributes
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_AncientApparition::~CDOTA_Unit_Hero_AncientApparition  (line 33, @0x0000000002a18390, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_AncientApparition::~CDOTA_Unit_Hero_AncientApparition(
        CDOTA_Unit_Hero_AncientApparition *const this)
{
  this->_vptr_IHandleEntity = &off_430CA70;
  this->_vptr_INextBotEventResponder = &off_430DA50;
  this->_vptr_CObstructionObject = &off_430DD80;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_AncientApparition::~CDOTA_Unit_Hero_AncientApparition  (line 33, @0x0000000002a183d0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_AncientApparition
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_AncientApparition::~CDOTA_Unit_Hero_AncientApparition(
        CDOTA_Unit_Hero_AncientApparition *const this)
{
  this->_vptr_IHandleEntity = &off_430CA70;
  this->_vptr_INextBotEventResponder = &off_430DA50;
  this->_vptr_CObstructionObject = &off_430DD80;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_AncientApparition::Schema_DynamicBinding  (line 35, @0x0000000002a06960, libserver.so)
// globals: CDOTA_Unit_Hero_AncientApparition::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_AncientApparition::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_AncientApparition *const this)
{
  return CDOTA_Unit_Hero_AncientApparition::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 35, @0x0000000002a06990, libserver.so)
// globals: CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass::DestructInstance  (line 35, @0x0000000002a069a0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_AncientApparition>
void __fastcall CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass::FreeInstance  (line 35, @0x0000000002a069c0, libserver.so)
void __fastcall CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass::CanAllocate  (line 35, @0x0000000002a069e0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 35, @0x0000000002a069f0, libserver.so)
// globals: CDOTA_Unit_Hero_AncientApparition::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_AncientApparition::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass::AllocateInstance  (line 35, @0x0000000002a0eb00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass::ConstructInstance  (line 35, @0x0000000002a13200, libserver.so)  // inlines: CDOTA_Unit_Hero_AncientApparition, Construct<CDOTA_Unit_Hero_AncientApparition>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_430CA70;
    *(p + 236) = &off_430DA50;
    *(p + 257) = &off_430DD80;
  }
  return p;
}


// CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 35, @0x0000000002a206f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 35, @0x0000000002a20940, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_AncientApparition::GetEntityClassInternal  (line 35, @0x0000000002a3b660, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "npc_dota_hero_ancient_apparition", "CDOTA_Unit_Hero_AncientApparition"
// globals: `guard variable for'CDOTA_Unit_Hero_AncientApparition::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AncientApparitionClass, CDOTA_Unit_Hero_AncientApparition::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AncientApparitionClass, __dso_handle, CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_AncientApparition::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AncientApparitionClassInfo, CDOTA_Unit_Hero_AncientApparition::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AncientApparitionClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_AncientApparition::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_AncientApparition::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AncientApparitionClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_AncientApparition::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AncientApparitionClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_AncientApparition::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AncientApparitionClass);
    CDOTA_Unit_Hero_AncientApparition::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AncientApparitionClass._vptr_CEntityClass = off_430C9F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_AncientApparition::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AncientApparitionClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_AncientApparition::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_AncientApparition::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AncientApparitionClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_AncientApparitionClass != 0 )
    return &CDOTA_Unit_Hero_AncientApparition::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AncientApparitionClass;
  if ( `guard variable for'CDOTA_Unit_Hero_AncientApparition::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AncientApparitionClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_AncientApparition::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AncientApparitionClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_AncientApparition::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AncientApparitionClassInfo,
      "CDOTA_Unit_Hero_AncientApparition",
      "npc_dota_hero_ancient_apparition",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_AncientApparition::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AncientApparitionClassInfo);
  }
  CDOTA_Unit_Hero_AncientApparition::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AncientApparitionClass.m_pClassInfo = &CDOTA_Unit_Hero_AncientApparition::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AncientApparitionClassInfo;
  CDOTA_Unit_Hero_AncientApparition::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AncientApparitionClass.m_pBaseClassInfo = CDOTA_Unit_Hero_AncientApparition::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AncientApparitionClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_AncientApparitionClass = &CDOTA_Unit_Hero_AncientApparition::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AncientApparitionClass;
  CDOTA_Unit_Hero_AncientApparition::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AncientApparitionClassInfo.m_pClass = &CDOTA_Unit_Hero_AncientApparition::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AncientApparitionClass;
  CDOTA_Unit_Hero_AncientApparition::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AncientApparitionClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_AncientApparitionClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_AncientApparition::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AncientApparitionClass;
}


// CDOTA_Unit_Hero_AncientApparition::GetDeathEffectName  (line 40, @0x0000000002a06a00, libserver.so)
const char *__fastcall CDOTA_Unit_Hero_AncientApparition::GetDeathEffectName(
        CDOTA_Unit_Hero_AncientApparition *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_AncientApparition::YouForgotToImplementOrDeclareServerClass  (line 49, @0x00000000029b3de0, libserver.so)
int __fastcall CDOTA_Unit_Hero_AncientApparition::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_AncientApparition *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_AncientApparition::GetServerClass  (line 49, @0x00000000029c9030, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_AncientApparition::GetServerClass(
        CDOTA_Unit_Hero_AncientApparition *const this)
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


// CDOTA_Unit_Hero_AncientApparition::OnLoadState  (line 58, @0x00000000029b6650, libserver.so)
// calls: CDOTA_BaseNPC_Hero::OnLoadState, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::SwapAbilities
// strings: "ancient_apparition_ice_blast", "ancient_apparition_ice_blast_release"
bool __fastcall CDOTA_Unit_Hero_AncientApparition::OnLoadState(
        CDOTA_Unit_Hero_AncientApparition *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *AbilityByName; // rax

  CDOTA_BaseNPC_Hero::OnLoadState(this, pKV);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "ancient_apparition_ice_blast", 0);
  if ( AbilityByName != 0 && AbilityByName->m_bHidden.m_Value )
    CDOTA_BaseNPC::SwapAbilities(this, "ancient_apparition_ice_blast", "ancient_apparition_ice_blast_release", 1, 0);
  return 1;
}


// CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter::~CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter  (line 77, @0x0000000002a12e50, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter::~CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter(
        CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter *const this)
{
  this->_vptr_CDOTA_Buff = &off_430DE10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter::~CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter  (line 77, @0x0000000002a12e70, libserver.so)  // inlines: ~CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter::~CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter(
        CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter *const this)
{
  this->_vptr_CDOTA_Buff = &off_430DE10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter::IsHidden  (line 82, @0x0000000002a13860, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName
// strings: "special_bonus_unique_ancient_apparition_1"
bool __fastcall CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter::IsHidden(
        CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_ancient_apparition_1", 0);
  return AbilityByName == 0 || AbilityByName->m_iLevel.m_Value <= 0;
}


// CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter::IsPurgable  (line 91, @0x0000000002a06a10, libserver.so)
bool __fastcall CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter::IsPurgable(
        CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter *const this)
{
  return 0;
}


// CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter::IsPermanent  (line 92, @0x0000000002a06a20, libserver.so)
bool __fastcall CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter::IsPermanent(
        CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter *const this)
{
  return 1;
}


// CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter::DestroyOnExpire  (line 93, @0x0000000002a06a30, libserver.so)
bool __fastcall CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter::DestroyOnExpire(
        CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter *const this)
{
  return 0;
}


// CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter::OnCreated  (line 115, @0x00000000029e7490, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "special_bonus_unique_ancient_apparition_1", "charge_restore_time"
void __fastcall CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter::OnCreated(
        CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *Ability; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_ancient_apparition_1", 0);
  if ( AbilityByName != 0 )
    this->max_charges = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->charge_restore_time = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "charge_restore_time", -1, 0);
  else
    this->charge_restore_time = 0.0;
  (*(this->_vptr_CDOTA_Buff + 28))(this, this->max_charges);
  this->m_bIsThinking = 0;
}


// CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter::OnRefresh  (line 133, @0x00000000029e1460, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_ancient_apparition_1"
void __fastcall CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter::OnRefresh(
        CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_ancient_apparition_1", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->max_charges = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
}


// CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter::OnIntervalThink  (line 143, @0x00000000029b68a0, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter::OnIntervalThink(
        CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter *const this)
{
  float v2; // xmm1_4
  void (__fastcall *v3)(CDOTA_Modifier_Ancient_Apparition_ColdFeet_ChargeCounter *const, __int64, float); // r12
  CDOTABaseAbility *Ability; // rax
  float v5; // xmm0_4
  CDOTABaseAbility *v6; // rax
  float v7; // xmm0_4
  float v8; // xmm1_4
  float charge_restore_time; // [rsp+Ch] [rbp-14h]
  float v10; // [rsp+Ch] [rbp-14h]

  if ( (*(this->_vptr_CDOTA_Buff + 27))(this) >= this->max_charges
    || ((*(this->_vptr_CDOTA_Buff + 25))(this), (*(this->_vptr_CDOTA_Buff + 27))(this) == this->max_charges) )
  {
    CDOTA_Buff::StartIntervalThink(this, -1.0, v2);
    this->m_bIsThinking = 0;
  }
  else
  {
    charge_restore_time = this->charge_restore_time;
    v3 = *(this->_vptr_CDOTA_Buff + 63);
    Ability = CDOTA_Buff::GetAbility(this);
    v5 = (*(Ability->_vptr_IHandleEntity + 243))(Ability, 0xFFFFFFFFLL);
    v3(this, 1, v5 * charge_restore_time);
    v10 = this->charge_restore_time;
    v6 = CDOTA_Buff::GetAbility(this);
    v7 = (*(v6->_vptr_IHandleEntity + 243))(v6, 0xFFFFFFFFLL);
    CDOTA_Buff::StartIntervalThink(this, v7 * v10, v8);
  }
}


// CDOTA_Ability_AncientApparition_ColdFeet::~CDOTA_Ability_AncientApparition_ColdFeet  (line 172, @0x0000000002a16480, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_AncientApparition_ColdFeet::~CDOTA_Ability_AncientApparition_ColdFeet(
        CDOTA_Ability_AncientApparition_ColdFeet *const this)
{
  this->_vptr_IHandleEntity = &off_430E170;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_AncientApparition_ColdFeet::~CDOTA_Ability_AncientApparition_ColdFeet  (line 172, @0x0000000002a164a0, libserver.so)  // inlines: ~CDOTA_Ability_AncientApparition_ColdFeet
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_AncientApparition_ColdFeet::~CDOTA_Ability_AncientApparition_ColdFeet(
        CDOTA_Ability_AncientApparition_ColdFeet *const this)
{
  this->_vptr_IHandleEntity = &off_430E170;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_AncientApparition_ColdFeet::Schema_DynamicBinding  (line 174, @0x0000000002a06a40, libserver.so)
// globals: CDOTA_Ability_AncientApparition_ColdFeet::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_AncientApparition_ColdFeet::Schema_DynamicBinding(
        const CDOTA_Ability_AncientApparition_ColdFeet *const this)
{
  return CDOTA_Ability_AncientApparition_ColdFeet::s_pSchemaBinding;
}


// CDOTA_Ability_AncientApparition_ColdFeet::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 174, @0x0000000002a06a50, libserver.so)
// globals: CDOTA_Ability_AncientApparition_ColdFeet::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_AncientApparition_ColdFeet::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_AncientApparition_ColdFeet::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_AncientApparition_ColdFeet::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_AncientApparition_ColdFeet::CEntityInstanceEntityClass::DestructInstance  (line 174, @0x0000000002a06a60, libserver.so)  // inlines: Destruct<CDOTA_Ability_AncientApparition_ColdFeet>
void __fastcall CDOTA_Ability_AncientApparition_ColdFeet::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_AncientApparition_ColdFeet::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_AncientApparition_ColdFeet::CEntityInstanceEntityClass::FreeInstance  (line 174, @0x0000000002a06a80, libserver.so)
void __fastcall CDOTA_Ability_AncientApparition_ColdFeet::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_AncientApparition_ColdFeet::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_AncientApparition_ColdFeet::CEntityInstanceEntityClass::CanAllocate  (line 174, @0x0000000002a06aa0, libserver.so)
bool __fastcall CDOTA_Ability_AncientApparition_ColdFeet::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_AncientApparition_ColdFeet::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_AncientApparition_ColdFeet::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 174, @0x0000000002a06ab0, libserver.so)
// globals: CDOTA_Ability_AncientApparition_ColdFeet::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_AncientApparition_ColdFeet::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_AncientApparition_ColdFeet::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_AncientApparition_ColdFeet::s_pSchemaBinding;
}


// CDOTA_Ability_AncientApparition_ColdFeet::CEntityInstanceEntityClass::AllocateInstance  (line 174, @0x0000000002a0eb40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_AncientApparition_ColdFeet::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_AncientApparition_ColdFeet::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_AncientApparition_ColdFeet::CEntityInstanceEntityClass::ConstructInstance  (line 174, @0x0000000002a138e0, libserver.so)  // inlines: CDOTA_Ability_AncientApparition_ColdFeet, Construct<CDOTA_Ability_AncientApparition_ColdFeet>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_AncientApparition_ColdFeet::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_AncientApparition_ColdFeet::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_430E170;
  }
  return p;
}


// CDOTA_Ability_AncientApparition_ColdFeet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 174, @0x0000000002a1e7d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_AncientApparition_ColdFeet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_AncientApparition_ColdFeet::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_AncientApparition_ColdFeet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 174, @0x0000000002a1e7f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_AncientApparition_ColdFeet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_AncientApparition_ColdFeet::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_AncientApparition_ColdFeet::GetEntityClassInternal  (line 174, @0x0000000002a33ef0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "ancient_apparition_cold_feet", "CDOTA_Ability_AncientApparition_ColdFeet"
// globals: `guard variable for'CDOTA_Ability_AncientApparition_ColdFeet::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_ColdFeetClass, CDOTA_Ability_AncientApparition_ColdFeet::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_ColdFeetClass, __dso_handle, CDOTA_Ability_AncientApparition_ColdFeet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_AncientApparition_ColdFeet::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_ColdFeetClassInfo, CDOTA_Ability_AncientApparition_ColdFeet::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_ColdFeetClassInfo
CEntityClass *__cdecl CDOTA_Ability_AncientApparition_ColdFeet::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_AncientApparition_ColdFeet::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_ColdFeetClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_AncientApparition_ColdFeet::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_ColdFeetClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_AncientApparition_ColdFeet::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_ColdFeetClass);
    CDOTA_Ability_AncientApparition_ColdFeet::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_ColdFeetClass._vptr_CEntityClass = off_430E0F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_AncientApparition_ColdFeet::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_ColdFeetClass);
    __cxa_atexit(
      CDOTA_Ability_AncientApparition_ColdFeet::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_AncientApparition_ColdFeet::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_ColdFeetClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_AncientApparition_ColdFeetClass != 0 )
    return &CDOTA_Ability_AncientApparition_ColdFeet::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_ColdFeetClass;
  if ( `guard variable for'CDOTA_Ability_AncientApparition_ColdFeet::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_ColdFeetClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_AncientApparition_ColdFeet::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_ColdFeetClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_AncientApparition_ColdFeet::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_ColdFeetClassInfo,
      "CDOTA_Ability_AncientApparition_ColdFeet",
      "ancient_apparition_cold_feet",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_AncientApparition_ColdFeet::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_ColdFeetClassInfo);
  }
  CDOTA_Ability_AncientApparition_ColdFeet::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_ColdFeetClass.m_pClassInfo = &CDOTA_Ability_AncientApparition_ColdFeet::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_ColdFeetClassInfo;
  CDOTA_Ability_AncientApparition_ColdFeet::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_ColdFeetClass.m_pBaseClassInfo = CDOTA_Ability_AncientApparition_ColdFeet::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_ColdFeetClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_AncientApparition_ColdFeetClass = &CDOTA_Ability_AncientApparition_ColdFeet::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_ColdFeetClass;
  CDOTA_Ability_AncientApparition_ColdFeet::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_ColdFeetClassInfo.m_pClass = &CDOTA_Ability_AncientApparition_ColdFeet::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_ColdFeetClass;
  CDOTA_Ability_AncientApparition_ColdFeet::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_ColdFeetClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_AncientApparition_ColdFeetClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_AncientApparition_ColdFeet::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_ColdFeetClass;
}


// CDOTA_Ability_AncientApparition_ColdFeet::GetIntrinsicModifierName  (line 180, @0x0000000002a06ac0, libserver.so)
// strings: "modifier_ancient_apparition_cold_feet_charge_counter"
const char *__fastcall CDOTA_Ability_AncientApparition_ColdFeet::GetIntrinsicModifierName(
        CDOTA_Ability_AncientApparition_ColdFeet *const this)
{
  const char *result; // rax

  result = 0;
  if ( !this->m_bReflection )
    return "modifier_ancient_apparition_cold_feet_charge_counter";
  return result;
}


// CDOTA_Ability_AncientApparition_ColdFeet::IsRefreshable  (line 182, @0x0000000002a138a0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName
// strings: "special_bonus_unique_ancient_apparition_1"
bool __fastcall CDOTA_Ability_AncientApparition_ColdFeet::IsRefreshable(
        CDOTA_Ability_AncientApparition_ColdFeet *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_ancient_apparition_1", 0);
  return AbilityByName == 0 || AbilityByName->m_iLevel.m_Value <= 0;
}


// CDOTA_Ability_AncientApparition_ColdFeet::GetGestureBasedActivity  (line 207, @0x0000000002a06ae0, libserver.so)
Activity __fastcall CDOTA_Ability_AncientApparition_ColdFeet::GetGestureBasedActivity(
        CDOTA_Ability_AncientApparition_ColdFeet *const this)
{
  return 1671;
}


// CDOTA_Ability_AncientApparition_ColdFeet::GetConceptRecipientType  (line 210, @0x0000000002a06af0, libserver.so)
int __fastcall CDOTA_Ability_AncientApparition_ColdFeet::GetConceptRecipientType(
        CDOTA_Ability_AncientApparition_ColdFeet *const this)
{
  return 4;
}


// CDOTA_Ability_AncientApparition_ColdFeet::GetAssociatedSecondaryAbilities  (line 215, @0x0000000002a06b00, libserver.so)
// strings: "special_bonus_unique_ancient_apparition_1"
const char *__fastcall CDOTA_Ability_AncientApparition_ColdFeet::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_AncientApparition_ColdFeet *const this)
{
  return "special_bonus_unique_ancient_apparition_1";
}


// CDOTA_Ability_AncientApparition_ColdFeet::YouForgotToImplementOrDeclareServerClass  (line 218, @0x00000000029b3df0, libserver.so)
int __fastcall CDOTA_Ability_AncientApparition_ColdFeet::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_AncientApparition_ColdFeet *const this)
{
  return 0;
}


// CDOTA_Ability_AncientApparition_ColdFeet::GetServerClass  (line 218, @0x00000000029c9230, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_AncientApparition_ColdFeet::GetServerClass(
        CDOTA_Ability_AncientApparition_ColdFeet *const this)
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


// CDOTA_Ability_AncientApparition_ColdFeet::GetCooldown  (line 227, @0x00000000029b6db0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetCooldown
// strings: "special_bonus_unique_ancient_apparition_1"
float __fastcall CDOTA_Ability_AncientApparition_ColdFeet::GetCooldown(
        CDOTA_Ability_AncientApparition_ColdFeet *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_ancient_apparition_1", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    return 0.0;
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_AncientApparition_ColdFeet::CastFilterResult  (line 240, @0x00000000029b6e90, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::CastFilterResult
// strings: "modifier_ancient_apparition_cold_feet_charge_counter_1", "modifier_ancientapparition_coldfeet_freeze", "modifier_cold_feet"
int __fastcall CDOTA_Ability_AncientApparition_ColdFeet::CastFilterResult(
        CDOTA_Ability_AncientApparition_ColdFeet *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(
                     Caster,
                     "modifier_ancient_apparition_cold_feet_charge_counter_1",
                     0);
  if ( ModifierByName != 0 && (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName) == 0
    || CDOTA_BaseNPC::FindModifierByName(pTarget, "modifier_ancientapparition_coldfeet_freeze", 0) != 0
    || CDOTA_BaseNPC::FindModifierByName(pTarget, "modifier_cold_feet", 0) != 0 )
  {
    return 23;
  }
  else
  {
    return CDOTABaseAbility::CastFilterResult(this, pTarget);
  }
}


// CDOTA_Ability_AncientApparition_ColdFeet::GetCustomCastError  (line 261, @0x00000000029b6e00, libserver.so)
// calls: CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_ancientapparition_coldfeet_freeze", "dota_hud_error_cold_feet_same_target", "modifier_cold_feet", "dota_hud_error_cold_feet_no_charges"
const char *__fastcall CDOTA_Ability_AncientApparition_ColdFeet::GetCustomCastError(
        CDOTA_Ability_AncientApparition_ColdFeet *const this,
        CDOTA_BaseNPC *pTarget)
{
  if ( CDOTA_BaseNPC::FindModifierByName(pTarget, "modifier_ancientapparition_coldfeet_freeze", 0) != 0
    || CDOTA_BaseNPC::FindModifierByName(pTarget, "modifier_cold_feet", 0) != 0 )
  {
    return "dota_hud_error_cold_feet_same_target";
  }
  else
  {
    return "dota_hud_error_cold_feet_no_charges";
  }
}


// CDOTA_Ability_AncientApparition_ColdFeet::OnSpellStart  (line 273, @0x00000000029e14c0, libserver.so)  // inlines: GetLevelSpecialValueFor<int>, InState, IsInvulnerable, SetThinking, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::TriggerSpellAbsorb, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink, __stack_chk_fail (13 total)
// strings: "special_bonus_unique_ancient_apparition_1", "modifier_ancient_apparition_cold_feet_charge_counter", "modifier_cold_feet", "Hero_Ancient_Apparition.ColdFeetCast", "charge_restore_time"
void __fastcall CDOTA_Ability_AncientApparition_ColdFeet::OnSpellStart(
        CDOTA_Ability_AncientApparition_ColdFeet *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  CDOTA_BaseNPC *v4; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v8; // r12
  __int64 v9; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  int (**vptr_CDOTA_Buff)(...); // rax
  void (__fastcall *v14)(CDOTA_Ability_AncientApparition_ColdFeet *const); // r13
  float LevelSpecialValue; // [rsp+Ch] [rbp-44h]
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-28h]

  v17 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0 )
  {
    v9 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
    if ( (v9 & 0x100) == 0 && (v9 & 0x200) == 0 && !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1) )
    {
      KeyValues::KeyValues(&kv, "modifier_cold_feet");
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_cold_feet", &kv, 0);
      v11 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::UnitEmitSound(v11, "Hero_Ancient_Apparition.ColdFeetCast", 0.0, 0, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
  v4 = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v4, "special_bonus_unique_ancient_apparition_1", 0);
  if ( AbilityByName == 0 || AbilityByName->m_iLevel.m_Value <= 0 )
  {
    v12 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::FindModifierByName(v12, "modifier_ancient_apparition_cold_feet_charge_counter", 0);
    return;
  }
  v6 = CDOTABaseAbility::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(v6, "modifier_ancient_apparition_cold_feet_charge_counter", 0);
  v8 = ModifierByName;
  if ( ModifierByName != 0 )
  {
    (*(ModifierByName->_vptr_CDOTA_Buff + 26))(ModifierByName);
    if ( (*(v8->_vptr_CDOTA_Buff + 27))(v8) != 0 )
    {
      if ( LOBYTE(v8[1].m_References.m_pHead) != 0 )
        return;
LABEL_15:
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "charge_restore_time", -1, 0);
      CDOTA_Buff::StartIntervalThink(v8, LevelSpecialValue, LevelSpecialValue);
      vptr_CDOTA_Buff = v8->_vptr_CDOTA_Buff;
      LOBYTE(v8[1].m_References.m_pHead) = 1;
      vptr_CDOTA_Buff[63](v8, 1, LevelSpecialValue);
      return;
    }
    v14 = *(this->_vptr_IHandleEntity + 241);
    (*(v8->_vptr_CDOTA_Buff + 33))(v8);
    v14(this);
    if ( LOBYTE(v8[1].m_References.m_pHead) == 0 )
      goto LABEL_15;
  }
}


// CDOTA_Ability_AncientApparition_ColdFeet::GetAbilityDamageToTargetOverInterval  (line 324, @0x00000000029e4b70, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetDuration, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_AncientApparition_ColdFeet::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_AncientApparition_ColdFeet *const this,
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
    fIntervala = fminf(fInterval, CDOTABaseAbility::GetDuration(this));
    fIntervalb = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 1) * fIntervala;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalb);
  }
  return result;
}


// CDOTA_Ability_AncientApparition_ColdFeet::GetStunDuration  (line 337, @0x00000000029de610, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_AncientApparition_ColdFeet::GetStunDuration(
        CDOTA_Ability_AncientApparition_ColdFeet *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 1);
}


// CDOTA_Modifier_AncientApparition_ColdFeet::~CDOTA_Modifier_AncientApparition_ColdFeet  (line 345, @0x0000000002a12e00, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_AncientApparition_ColdFeet::~CDOTA_Modifier_AncientApparition_ColdFeet(
        CDOTA_Modifier_AncientApparition_ColdFeet *const this)
{
  this->_vptr_CDOTA_Buff = &off_430EC30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_AncientApparition_ColdFeet::~CDOTA_Modifier_AncientApparition_ColdFeet  (line 345, @0x0000000002a12e20, libserver.so)  // inlines: ~CDOTA_Modifier_AncientApparition_ColdFeet
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_AncientApparition_ColdFeet::~CDOTA_Modifier_AncientApparition_ColdFeet(
        CDOTA_Modifier_AncientApparition_ColdFeet *const this)
{
  this->_vptr_CDOTA_Buff = &off_430EC30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_AncientApparition_ColdFeet::IsPurgable  (line 353, @0x0000000002a06b10, libserver.so)
bool __fastcall CDOTA_Modifier_AncientApparition_ColdFeet::IsPurgable(
        CDOTA_Modifier_AncientApparition_ColdFeet *const this)
{
  return 1;
}


// CDOTA_Modifier_AncientApparition_ColdFeet::GetEffectName  (line 355, @0x0000000002a06b20, libserver.so)
// strings: "particles/units/heroes/hero_ancient_apparition/ancient_apparition_cold_feet.vpcf"
const char *__fastcall CDOTA_Modifier_AncientApparition_ColdFeet::GetEffectName(
        CDOTA_Modifier_AncientApparition_ColdFeet *const this)
{
  return "particles/units/heroes/hero_ancient_apparition/ancient_apparition_cold_feet.vpcf";
}


// CDOTA_Modifier_AncientApparition_ColdFeet::GetEffectAttachType  (line 356, @0x0000000002a06b30, libserver.so)
int __fastcall CDOTA_Modifier_AncientApparition_ColdFeet::GetEffectAttachType(
        CDOTA_Modifier_AncientApparition_ColdFeet *const this)
{
  return 7;
}


// CDOTA_Modifier_AncientApparition_ColdFeet::GetNumAvoidLocations  (line 359, @0x0000000002a06b40, libserver.so)
int __fastcall CDOTA_Modifier_AncientApparition_ColdFeet::GetNumAvoidLocations(
        CDOTA_Modifier_AncientApparition_ColdFeet *const this)
{
  return 1;
}


// CDOTA_Modifier_AncientApparition_ColdFeet::GetAvoidLocation  (line 360, @0x0000000002a06b50, libserver.so)
Vector __fastcall CDOTA_Modifier_AncientApparition_ColdFeet::GetAvoidLocation(
        CDOTA_Modifier_AncientApparition_ColdFeet *const this,
        int iAvoid)
{
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  *&result.x = *&this->m_vecStartPosition.x;
  result.z = this->m_vecStartPosition.z;
  return result;
}


// CDOTA_Modifier_AncientApparition_ColdFeet::AvoidStrength  (line 361, @0x0000000002a06b70, libserver.so)
float __fastcall CDOTA_Modifier_AncientApparition_ColdFeet::AvoidStrength(
        CDOTA_Modifier_AncientApparition_ColdFeet *const this,
        CDOTA_Bot *pBot)
{
  return 0.89999998;
}


// CDOTA_Modifier_AncientApparition_ColdFeet::AvoidFilter  (line 362, @0x0000000002a14a20, libserver.so)
// calls: CDOTA_Buff::GetParent
bool __fastcall CDOTA_Modifier_AncientApparition_ColdFeet::AvoidFilter(
        CDOTA_Modifier_AncientApparition_ColdFeet *const this,
        CDOTA_BaseNPC *pEntity)
{
  return CDOTA_Buff::GetParent(this) == pEntity;
}


// CDOTA_Modifier_AncientApparition_ColdFeet::GetAvoidRadius  (line 363, @0x0000000002a06b80, libserver.so)
float __fastcall CDOTA_Modifier_AncientApparition_ColdFeet::GetAvoidRadius(
        CDOTA_Modifier_AncientApparition_ColdFeet *const this,
        int iAvoid)
{
  return this->break_distance + 100.0;
}


// CDOTA_Modifier_AncientApparition_ColdFeet::IsAvoidMagical  (line 364, @0x0000000002a06ba0, libserver.so)
bool __fastcall CDOTA_Modifier_AncientApparition_ColdFeet::IsAvoidMagical(
        CDOTA_Modifier_AncientApparition_ColdFeet *const this)
{
  return 1;
}


// CDOTA_Modifier_AncientApparition_ColdFeet::IsPersistentAvoidance  (line 365, @0x0000000002a06bb0, libserver.so)
bool __fastcall CDOTA_Modifier_AncientApparition_ColdFeet::IsPersistentAvoidance(
        CDOTA_Modifier_AncientApparition_ColdFeet *const this)
{
  return 0;
}


// CDOTA_Modifier_AncientApparition_ColdFeet::OnCreated  (line 381, @0x00000000029fc0f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, operator=
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::AddParticle, CDOTA_Buff::GetCaster, ApplyDamage, SendOverheadEventMessage (14 total)
// strings: "break_distance", "particles/units/heroes/hero_ancient_apparition/ancient_apparition_cold_feet_marker.vpcf", "Hero_Ancient_Apparition.ColdFeetTick"
void __fastcall CDOTA_Modifier_AncientApparition_ColdFeet::OnCreated(
        CDOTA_Modifier_AncientApparition_ColdFeet *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  int BuffParticleEffect; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTABaseAbility *v9; // r13
  CDOTA_BaseNPC *v10; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  float v14; // xmm1_4
  float flDamage; // [rsp+Ch] [rbp-24h]

  Parent = CDOTA_Buff::GetParent(this);
  this->m_vecStartPosition = *CBaseEntity::GetAbsOrigin(Parent);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "damage", -1, 0);
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_3;
LABEL_7:
    this->break_distance = 0;
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_4;
LABEL_8:
    this->stun_duration = 0.0;
    goto LABEL_5;
  }
  this->damage = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_7;
LABEL_3:
  this->break_distance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "break_distance", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_8;
LABEL_4:
  this->stun_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "stun_duration", -1, 0);
LABEL_5:
  this->m_nCurrentTick = 0;
  BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                         this,
                         "particles/units/heroes/hero_ancient_apparition/ancient_apparition_cold_feet_marker.vpcf",
                         2,
                         0,
                         0);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(
    ParticleManager,
    BuffParticleEffect,
    0,
    *&this->m_vecStartPosition.x,
    this->m_vecStartPosition.z);
  CDOTA_Buff::AddParticle(this, BuffParticleEffect, 0, 0, -1, 0, 0);
  flDamage = this->damage;
  v9 = CDOTA_Buff::GetAbility(this);
  v10 = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, v10, v9, flDamage, 2, 0);
  LODWORD(v10) = this->damage;
  v12 = CDOTA_Buff::GetParent(this);
  SendOverheadEventMessage(0, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BONUS_SPELL_DAMAGE, v12, v10, 0);
  v13 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v13, "Hero_Ancient_Apparition.ColdFeetTick", 0.0, 0, 0);
  CDOTA_Buff::StartIntervalThink(this, 0.1, v14);
}


// CDOTA_Modifier_AncientApparition_ColdFeet::OnIntervalThink  (line 405, @0x00000000029b7710, libserver.so)  // inlines: LengthSqr, QueueConcept, VectorSubtract, operator-
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, ApplyDamage, SendOverheadEventMessage, CDOTA_BaseNPC::UnitEmitSound, CDOTA_BaseNPC::RemoveModifierByName, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CResponseCriteriaSet::CResponseCriteriaSet (18 total)
// strings: "Hero_Ancient_Apparition.ColdFeetTick", "modifier_cold_feet", "modifier_stunned", "modifier_ancientapparition_coldfeet_freeze", "coldfeet", "Hero_Ancient_Apparition.ColdFeetFreeze"
void __fastcall CDOTA_Modifier_AncientApparition_ColdFeet::OnIntervalThink(
        CDOTA_Modifier_AncientApparition_ColdFeet *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  int v4; // eax
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *v6; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  float v11; // xmm1_4
  CDOTABaseAbility *v12; // r14
  CDOTA_BaseNPC *v13; // r13
  CDOTA_BaseNPC *v14; // rax
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  float flDamage; // [rsp+1Ch] [rbp-84h]
  CResponseCriteriaSet criteria; // [rsp+20h] [rbp-80h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp-28h]

  v21 = __readfsqword(0x28u);
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  if ( ((((this->m_vecStartPosition.x - AbsOrigin->x) * (this->m_vecStartPosition.x - AbsOrigin->x))
       + ((this->m_vecStartPosition.y - AbsOrigin->y) * (this->m_vecStartPosition.y - AbsOrigin->y)))
      + ((this->m_vecStartPosition.z - AbsOrigin->z) * (this->m_vecStartPosition.z - AbsOrigin->z))) > (this->break_distance * this->break_distance) )
  {
    v17 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::RemoveModifierByName(v17, "modifier_cold_feet");
  }
  else
  {
    v4 = this->m_nCurrentTick + 1;
    this->m_nCurrentTick = v4;
    if ( v4 == 10 || v4 == 20 || v4 == 30 )
    {
      flDamage = this->damage;
      Ability = CDOTA_Buff::GetAbility(this);
      v6 = CDOTA_Buff::GetParent(this);
      Caster = CDOTA_Buff::GetCaster(this);
      ApplyDamage(Caster, v6, Ability, flDamage, 2, 0);
      LODWORD(v6) = this->damage;
      v8 = CDOTA_Buff::GetParent(this);
      SendOverheadEventMessage(0, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BONUS_SPELL_DAMAGE, v8, v6, 0);
      v9 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::UnitEmitSound(v9, "Hero_Ancient_Apparition.ColdFeetTick", 0.0, 0, 0);
    }
    else if ( v4 == 40 )
    {
      v10 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::RemoveModifierByName(v10, "modifier_cold_feet");
      KeyValues::KeyValues(&kv, "modifier_stunned");
      KeyValues::SetFloat(&kv, "duration", v11);
      if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x200) == 0 )
      {
        v12 = CDOTA_Buff::GetAbility(this);
        v13 = CDOTA_Buff::GetCaster(this);
        v14 = CDOTA_Buff::GetParent(this);
        CDOTA_BaseNPC::AddNewModifier(v14, v13, v12, "modifier_ancientapparition_coldfeet_freeze", &kv, 0);
        CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
        CResponseCriteriaSet::AppendCriteria(&criteria, "coldfeet", "1", 1.0);
        m_pSpeech = CDOTA_Buff::GetCaster(this)->m_Speech.m_pSpeech;
        if ( m_pSpeech != 0 )
          CDOTA_Speech::QueueConcept(m_pSpeech, 18, 0.25, &criteria, 0, 1, 0, 0, 0);
        CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
      }
      v16 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::UnitEmitSound(v16, "Hero_Ancient_Apparition.ColdFeetFreeze", 0.0, 0, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Modifier_AncientApparition_ColdFeet_Freeze::~CDOTA_Modifier_AncientApparition_ColdFeet_Freeze  (line 448, @0x0000000002a10870, libserver.so)  // inlines: ~CDOTA_Modifier_Stunned
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_AncientApparition_ColdFeet_Freeze::~CDOTA_Modifier_AncientApparition_ColdFeet_Freeze(
        CDOTA_Modifier_AncientApparition_ColdFeet_Freeze *const this)
{
  this->_vptr_CDOTA_Buff = &off_411CD70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_AncientApparition_ColdFeet_Freeze::~CDOTA_Modifier_AncientApparition_ColdFeet_Freeze  (line 448, @0x0000000002a10890, libserver.so)  // inlines: ~CDOTA_Modifier_AncientApparition_ColdFeet_Freeze, ~CDOTA_Modifier_Stunned
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_AncientApparition_ColdFeet_Freeze::~CDOTA_Modifier_AncientApparition_ColdFeet_Freeze(
        CDOTA_Modifier_AncientApparition_ColdFeet_Freeze *const this)
{
  this->_vptr_CDOTA_Buff = &off_411CD70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_AncientApparition_ColdFeet_Freeze::IsDebuff  (line 453, @0x0000000002a06bc0, libserver.so)
bool __fastcall CDOTA_Modifier_AncientApparition_ColdFeet_Freeze::IsDebuff(
        CDOTA_Modifier_AncientApparition_ColdFeet_Freeze *const this)
{
  return 1;
}


// CDOTA_Modifier_AncientApparition_ColdFeet_Freeze::IsStunDebuff  (line 454, @0x0000000002a06bd0, libserver.so)
bool __fastcall CDOTA_Modifier_AncientApparition_ColdFeet_Freeze::IsStunDebuff(
        CDOTA_Modifier_AncientApparition_ColdFeet_Freeze *const this)
{
  return 1;
}


// CDOTA_Modifier_AncientApparition_ColdFeet_Freeze::GetEffectName  (line 455, @0x0000000002a06be0, libserver.so)
// strings: "particles/units/heroes/hero_ancient_apparition/ancient_apparition_cold_feet_frozen.vpcf"
const char *__fastcall CDOTA_Modifier_AncientApparition_ColdFeet_Freeze::GetEffectName(
        CDOTA_Modifier_AncientApparition_ColdFeet_Freeze *const this)
{
  return "particles/units/heroes/hero_ancient_apparition/ancient_apparition_cold_feet_frozen.vpcf";
}


// CDOTA_Modifier_AncientApparition_ColdFeet_Freeze::GetEffectAttachType  (line 456, @0x0000000002a06bf0, libserver.so)
int __fastcall CDOTA_Modifier_AncientApparition_ColdFeet_Freeze::GetEffectAttachType(
        CDOTA_Modifier_AncientApparition_ColdFeet_Freeze *const this)
{
  return 7;
}


// CDOTA_Modifier_AncientApparition_ColdFeet_Freeze::ShouldUseOverheadOffset  (line 457, @0x0000000002a06c00, libserver.so)
bool __fastcall CDOTA_Modifier_AncientApparition_ColdFeet_Freeze::ShouldUseOverheadOffset(
        CDOTA_Modifier_AncientApparition_ColdFeet_Freeze *const this)
{
  return 1;
}


// CDOTA_Modifier_AncientApparition_ColdFeet_Freeze::GetStatusEffectName  (line 458, @0x0000000002a06c10, libserver.so)
// strings: "particles/status_fx/status_effect_frost.vpcf"
const char *__fastcall CDOTA_Modifier_AncientApparition_ColdFeet_Freeze::GetStatusEffectName(
        CDOTA_Modifier_AncientApparition_ColdFeet_Freeze *const this)
{
  return "particles/status_fx/status_effect_frost.vpcf";
}


// CDOTA_Modifier_AncientApparition_ColdFeet_Freeze::StatusEffectPriority  (line 459, @0x0000000002a06c20, libserver.so)
int __fastcall CDOTA_Modifier_AncientApparition_ColdFeet_Freeze::StatusEffectPriority(
        CDOTA_Modifier_AncientApparition_ColdFeet_Freeze *const this)
{
  return 40;
}


// CDOTA_Modifier_AncientApparition_ColdFeet_Freeze::CheckState  (line 469, @0x00000000029b7a00, libserver.so)  // inlines: Enable
// calls: CDOTA_Modifier_Stunned::CheckState
void __fastcall CDOTA_Modifier_AncientApparition_ColdFeet_Freeze::CheckState(
        CDOTA_Modifier_AncientApparition_ColdFeet_Freeze *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  CDOTA_Modifier_Stunned::CheckState(this, buffState);
  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x40020uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFBFFDFLL;
}


// CDOTA_Ability_AncientApparition_IceVortex::~CDOTA_Ability_AncientApparition_IceVortex  (line 481, @0x0000000002a164d0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_AncientApparition_IceVortex::~CDOTA_Ability_AncientApparition_IceVortex(
        CDOTA_Ability_AncientApparition_IceVortex *const this)
{
  this->_vptr_IHandleEntity = &off_430F2B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_AncientApparition_IceVortex::~CDOTA_Ability_AncientApparition_IceVortex  (line 481, @0x0000000002a164f0, libserver.so)  // inlines: ~CDOTA_Ability_AncientApparition_IceVortex
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_AncientApparition_IceVortex::~CDOTA_Ability_AncientApparition_IceVortex(
        CDOTA_Ability_AncientApparition_IceVortex *const this)
{
  this->_vptr_IHandleEntity = &off_430F2B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_AncientApparition_IceVortex::Schema_DynamicBinding  (line 483, @0x0000000002a06c30, libserver.so)
// globals: CDOTA_Ability_AncientApparition_IceVortex::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_AncientApparition_IceVortex::Schema_DynamicBinding(
        const CDOTA_Ability_AncientApparition_IceVortex *const this)
{
  return CDOTA_Ability_AncientApparition_IceVortex::s_pSchemaBinding;
}


// CDOTA_Ability_AncientApparition_IceVortex::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 483, @0x0000000002a06c40, libserver.so)
// globals: CDOTA_Ability_AncientApparition_IceVortex::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_AncientApparition_IceVortex::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_AncientApparition_IceVortex::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_AncientApparition_IceVortex::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_AncientApparition_IceVortex::CEntityInstanceEntityClass::DestructInstance  (line 483, @0x0000000002a06c50, libserver.so)  // inlines: Destruct<CDOTA_Ability_AncientApparition_IceVortex>
void __fastcall CDOTA_Ability_AncientApparition_IceVortex::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_AncientApparition_IceVortex::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_AncientApparition_IceVortex::CEntityInstanceEntityClass::FreeInstance  (line 483, @0x0000000002a06c70, libserver.so)
void __fastcall CDOTA_Ability_AncientApparition_IceVortex::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_AncientApparition_IceVortex::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_AncientApparition_IceVortex::CEntityInstanceEntityClass::CanAllocate  (line 483, @0x0000000002a06c90, libserver.so)
bool __fastcall CDOTA_Ability_AncientApparition_IceVortex::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_AncientApparition_IceVortex::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_AncientApparition_IceVortex::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 483, @0x0000000002a06ca0, libserver.so)
// globals: CDOTA_Ability_AncientApparition_IceVortex::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_AncientApparition_IceVortex::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_AncientApparition_IceVortex::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_AncientApparition_IceVortex::s_pSchemaBinding;
}


// CDOTA_Ability_AncientApparition_IceVortex::CEntityInstanceEntityClass::AllocateInstance  (line 483, @0x0000000002a0eb80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_AncientApparition_IceVortex::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_AncientApparition_IceVortex::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_AncientApparition_IceVortex::CEntityInstanceEntityClass::ConstructInstance  (line 483, @0x0000000002a13910, libserver.so)  // inlines: CDOTA_Ability_AncientApparition_IceVortex, Construct<CDOTA_Ability_AncientApparition_IceVortex>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_AncientApparition_IceVortex::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_AncientApparition_IceVortex::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_430F2B0;
  }
  return p;
}


// CDOTA_Ability_AncientApparition_IceVortex::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 483, @0x0000000002a1e820, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_AncientApparition_IceVortex::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_AncientApparition_IceVortex::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_AncientApparition_IceVortex::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 483, @0x0000000002a1e840, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_AncientApparition_IceVortex::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_AncientApparition_IceVortex::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_AncientApparition_IceVortex::GetEntityClassInternal  (line 483, @0x0000000002a34040, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "ancient_apparition_ice_vortex", "CDOTA_Ability_AncientApparition_IceVortex"
// globals: `guard variable for'CDOTA_Ability_AncientApparition_IceVortex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceVortexClass, CDOTA_Ability_AncientApparition_IceVortex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceVortexClass, __dso_handle, CDOTA_Ability_AncientApparition_IceVortex::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_AncientApparition_IceVortex::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_IceVortexClassInfo, CDOTA_Ability_AncientApparition_IceVortex::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_IceVortexClassInfo
CEntityClass *__cdecl CDOTA_Ability_AncientApparition_IceVortex::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_AncientApparition_IceVortex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceVortexClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_AncientApparition_IceVortex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceVortexClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_AncientApparition_IceVortex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceVortexClass);
    CDOTA_Ability_AncientApparition_IceVortex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceVortexClass._vptr_CEntityClass = off_430F230;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_AncientApparition_IceVortex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceVortexClass);
    __cxa_atexit(
      CDOTA_Ability_AncientApparition_IceVortex::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_AncientApparition_IceVortex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceVortexClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_AncientApparition_IceVortexClass != 0 )
    return &CDOTA_Ability_AncientApparition_IceVortex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceVortexClass;
  if ( `guard variable for'CDOTA_Ability_AncientApparition_IceVortex::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_IceVortexClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_AncientApparition_IceVortex::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_IceVortexClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_AncientApparition_IceVortex::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_IceVortexClassInfo,
      "CDOTA_Ability_AncientApparition_IceVortex",
      "ancient_apparition_ice_vortex",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_AncientApparition_IceVortex::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_IceVortexClassInfo);
  }
  CDOTA_Ability_AncientApparition_IceVortex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceVortexClass.m_pClassInfo = &CDOTA_Ability_AncientApparition_IceVortex::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_IceVortexClassInfo;
  CDOTA_Ability_AncientApparition_IceVortex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceVortexClass.m_pBaseClassInfo = CDOTA_Ability_AncientApparition_IceVortex::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_IceVortexClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_AncientApparition_IceVortexClass = &CDOTA_Ability_AncientApparition_IceVortex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceVortexClass;
  CDOTA_Ability_AncientApparition_IceVortex::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_IceVortexClassInfo.m_pClass = &CDOTA_Ability_AncientApparition_IceVortex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceVortexClass;
  CDOTA_Ability_AncientApparition_IceVortex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceVortexClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_AncientApparition_IceVortexClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_AncientApparition_IceVortex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceVortexClass;
}


// CDOTA_Ability_AncientApparition_IceVortex::GetGestureBasedActivity  (line 501, @0x0000000002a06cb0, libserver.so)
Activity __fastcall CDOTA_Ability_AncientApparition_IceVortex::GetGestureBasedActivity(
        CDOTA_Ability_AncientApparition_IceVortex *const this)
{
  return 1672;
}


// CDOTA_Ability_AncientApparition_IceVortex::YouForgotToImplementOrDeclareServerClass  (line 508, @0x00000000029b3e00, libserver.so)
int __fastcall CDOTA_Ability_AncientApparition_IceVortex::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_AncientApparition_IceVortex *const this)
{
  return 0;
}


// CDOTA_Ability_AncientApparition_IceVortex::GetServerClass  (line 508, @0x00000000029c9130, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_AncientApparition_IceVortex::GetServerClass(
        CDOTA_Ability_AncientApparition_IceVortex *const this)
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


// CDOTA_Ability_AncientApparition_IceVortex::OnSpellStart  (line 517, @0x00000000029e34d0, libserver.so)  // inlines: GetLevelSpecialValueFor<int>, GetTeamNumber
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, Thinker_Create, CDOTAFogOfWarSystem::AddTempViewer, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "vision_aoe", "modifier_ancient_apparition_ice_vortex_thinker", "Hero_Ancient_Apparition.IceVortexCast"
void __fastcall CDOTA_Ability_AncientApparition_IceVortex::OnSpellStart(
        CDOTA_Ability_AncientApparition_IceVortex *const this)
{
  float v2; // xmm1_4
  int m_Value; // r13d
  CDOTA_BaseNPC *Caster; // rax
  __m128i v5; // xmm0
  float v6; // r13d
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  float flRadius; // [rsp+1Ch] [rbp-64h]
  Vector vLocation; // [rsp+20h] [rbp-60h] BYREF
  Vector vOrigin; // [rsp+30h] [rbp-50h]
  KeyValues kv; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp-28h]

  v13 = __readfsqword(0x28u);
  this->vision_aoe = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "vision_aoe", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_ancient_apparition_ice_vortex_thinker");
  CDOTABaseAbility::GetDuration(this);
  KeyValues::SetFloat(&kv, "duration", v2);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  vOrigin = CDOTABaseAbility::GetCursorPosition(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(Caster, this, "modifier_ancient_apparition_ice_vortex_thinker", &kv, vOrigin, m_Value, 0, 0, 0);
  *v5.m128i_i32 = CDOTABaseAbility::GetDuration(this);
  v6 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
  flRadius = this->vision_aoe;
  vLocation = CDOTABaseAbility::GetCursorPosition(this);
  v7 = CDOTABaseAbility::GetCaster(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_ICEVORTEX,
    v7->m_iTeamNum.m_Value,
    &vLocation,
    flRadius,
    v6,
    0);
  v8 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v8, "Hero_Ancient_Apparition.IceVortexCast", 0.0, 0, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_AncientApparition_IceVortex::GetSlowDuration  (line 534, @0x00000000029b7020, libserver.so)
// calls: CDOTABaseAbility::GetDuration
float __fastcall CDOTA_Ability_AncientApparition_IceVortex::GetSlowDuration(
        CDOTA_Ability_AncientApparition_IceVortex *const this)
{
  return CDOTABaseAbility::GetDuration(this);
}


// CDOTA_Modifier_AncientApparition_IceVortexThinker::~CDOTA_Modifier_AncientApparition_IceVortexThinker  (line 543, @0x0000000002a331f0, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_AncientApparition_IceVortexThinker::~CDOTA_Modifier_AncientApparition_IceVortexThinker(
        CDOTA_Modifier_AncientApparition_IceVortexThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_430FD70;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hChilledEntities);
  if ( (this->m_hChilledEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hChilledEntities.m_Memory),
        (this->m_hChilledEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hChilledEntities.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_AncientApparition_IceVortexThinker::~CDOTA_Modifier_AncientApparition_IceVortexThinker  (line 543, @0x0000000002a335e0, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_AncientApparition_IceVortexThinker, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_AncientApparition_IceVortexThinker::~CDOTA_Modifier_AncientApparition_IceVortexThinker(
        CDOTA_Modifier_AncientApparition_IceVortexThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_430FD70;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hChilledEntities);
  if ( (this->m_hChilledEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hChilledEntities.m_Memory);
    if ( (this->m_hChilledEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hChilledEntities.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_AncientApparition_IceVortexThinker::IsHidden  (line 548, @0x0000000002a06cc0, libserver.so)
bool __fastcall CDOTA_Modifier_AncientApparition_IceVortexThinker::IsHidden(
        CDOTA_Modifier_AncientApparition_IceVortexThinker *const this)
{
  return 1;
}


// CDOTA_Modifier_AncientApparition_IceVortexThinker::IsAura  (line 553, @0x0000000002a06cd0, libserver.so)
bool __fastcall CDOTA_Modifier_AncientApparition_IceVortexThinker::IsAura(
        CDOTA_Modifier_AncientApparition_IceVortexThinker *const this)
{
  return 1;
}


// CDOTA_Modifier_AncientApparition_IceVortexThinker::GetModifierAura  (line 554, @0x0000000002a06ce0, libserver.so)
// strings: "modifier_ice_vortex"
const char *__fastcall CDOTA_Modifier_AncientApparition_IceVortexThinker::GetModifierAura(
        CDOTA_Modifier_AncientApparition_IceVortexThinker *const this)
{
  return "modifier_ice_vortex";
}


// CDOTA_Modifier_AncientApparition_IceVortexThinker::GetAuraSearchTeam  (line 555, @0x0000000002a06cf0, libserver.so)
int __fastcall CDOTA_Modifier_AncientApparition_IceVortexThinker::GetAuraSearchTeam(
        CDOTA_Modifier_AncientApparition_IceVortexThinker *const this)
{
  return 2;
}


// CDOTA_Modifier_AncientApparition_IceVortexThinker::GetAuraSearchType  (line 556, @0x0000000002a06d00, libserver.so)
int __fastcall CDOTA_Modifier_AncientApparition_IceVortexThinker::GetAuraSearchType(
        CDOTA_Modifier_AncientApparition_IceVortexThinker *const this)
{
  return 19;
}


// CDOTA_Modifier_AncientApparition_IceVortexThinker::GetAuraRadius  (line 557, @0x0000000002a06d10, libserver.so)
int __fastcall CDOTA_Modifier_AncientApparition_IceVortexThinker::GetAuraRadius(
        CDOTA_Modifier_AncientApparition_IceVortexThinker *const this)
{
  return this->radius;
}


// CDOTA_Modifier_AncientApparition_IceVortexThinker::OnCreated  (line 573, @0x00000000029fb8b0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>, Vector, VectorAdd, operator+
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::CreateBuffParticleEffect, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_BaseNPC::UnitEmitSound
// strings: "spell_resist_pct", "particles/units/heroes/hero_ancient_apparition/ancient_ice_vortex.vpcf", "Hero_Ancient_Apparition.IceVortex"
void __fastcall CDOTA_Modifier_AncientApparition_IceVortexThinker::OnCreated(
        CDOTA_Modifier_AncientApparition_IceVortexThinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  int v10; // r12d
  CDOTA_ParticleManager *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  double v13; // [rsp+10h] [rbp-30h]
  double v14; // [rsp+20h] [rbp-20h]
  float v15; // [rsp+28h] [rbp-18h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_7:
    this->movement_speed_pct = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
LABEL_8:
    this->spell_resist_pct = 0;
    goto LABEL_5;
  }
  this->radius = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_7;
LABEL_3:
  this->movement_speed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "movement_speed_pct", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->spell_resist_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "spell_resist_pct", -1, 0);
LABEL_5:
  this->m_nFXIndex = CDOTA_Buff::CreateBuffParticleEffect(
                       this,
                       "particles/units/heroes/hero_ancient_apparition/ancient_ice_vortex.vpcf",
                       2,
                       0,
                       0);
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  m_nFXIndex = this->m_nFXIndex;
  *&v14 = AbsOrigin->x + 0.0;
  *(&v14 + 1) = AbsOrigin->y + 0.0;
  v15 = AbsOrigin->z + 64.0;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, m_nFXIndex, 0, v14, v15);
  v10 = this->m_nFXIndex;
  *&v13 = this->radius;
  *(&v13 + 1) = *&v13;
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v11, v10, 5, v13, *&v13);
  v12 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v12, "Hero_Ancient_Apparition.IceVortex", 0.0, 0, 0);
}


// CDOTA_Modifier_AncientApparition_IceVortexThinker::OnDestroy  (line 588, @0x00000000029b7b40, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_Buff::GetParent, CBaseEntity::StopSound, UTIL_Remove
// strings: "Hero_Ancient_Apparition.IceVortex"
void __fastcall CDOTA_Modifier_AncientApparition_IceVortexThinker::OnDestroy(
        CDOTA_Modifier_AncientApparition_IceVortexThinker *const this)
{
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v5; // rax

  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 0);
  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(Parent, "Hero_Ancient_Apparition.IceVortex");
  v5 = CDOTA_Buff::GetParent(this);
  UTIL_Remove(v5);
}


// CDOTA_Modifier_AncientApparition_IceVortex::~CDOTA_Modifier_AncientApparition_IceVortex  (line 598, @0x0000000002a12db0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_AncientApparition_IceVortex::~CDOTA_Modifier_AncientApparition_IceVortex(
        CDOTA_Modifier_AncientApparition_IceVortex *const this)
{
  this->_vptr_CDOTA_Buff = &off_4310090;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_AncientApparition_IceVortex::~CDOTA_Modifier_AncientApparition_IceVortex  (line 598, @0x0000000002a12dd0, libserver.so)  // inlines: ~CDOTA_Modifier_AncientApparition_IceVortex
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_AncientApparition_IceVortex::~CDOTA_Modifier_AncientApparition_IceVortex(
        CDOTA_Modifier_AncientApparition_IceVortex *const this)
{
  this->_vptr_CDOTA_Buff = &off_4310090;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_AncientApparition_IceVortex::GetEffectName  (line 606, @0x0000000002a06d20, libserver.so)
// strings: "particles/generic_gameplay/generic_slowed_cold.vpcf"
const char *__fastcall CDOTA_Modifier_AncientApparition_IceVortex::GetEffectName(
        CDOTA_Modifier_AncientApparition_IceVortex *const this)
{
  return "particles/generic_gameplay/generic_slowed_cold.vpcf";
}


// CDOTA_Modifier_AncientApparition_IceVortex::GetStatusEffectName  (line 608, @0x0000000002a06d30, libserver.so)
// strings: "particles/status_fx/status_effect_frost.vpcf"
const char *__fastcall CDOTA_Modifier_AncientApparition_IceVortex::GetStatusEffectName(
        CDOTA_Modifier_AncientApparition_IceVortex *const this)
{
  return "particles/status_fx/status_effect_frost.vpcf";
}


// CDOTA_Modifier_AncientApparition_IceVortex::StatusEffectPriority  (line 609, @0x0000000002a06d40, libserver.so)
int __fastcall CDOTA_Modifier_AncientApparition_IceVortex::StatusEffectPriority(
        CDOTA_Modifier_AncientApparition_IceVortex *const this)
{
  return 41;
}


// CDOTA_Modifier_AncientApparition_IceVortex::IsPurgable  (line 615, @0x0000000002a06d50, libserver.so)
bool __fastcall CDOTA_Modifier_AncientApparition_IceVortex::IsPurgable(
        CDOTA_Modifier_AncientApparition_IceVortex *const this)
{
  return 0;
}


// CDOTA_Modifier_AncientApparition_IceVortex::OnCreated  (line 626, @0x00000000029f7c30, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "spell_resist_pct"
void __fastcall CDOTA_Modifier_AncientApparition_IceVortex::OnCreated(
        CDOTA_Modifier_AncientApparition_IceVortex *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->movement_speed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movement_speed_pct", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->spell_resist_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "spell_resist_pct", -1, 0);
      return;
    }
  }
  else
  {
    this->movement_speed_pct = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->spell_resist_pct = 0;
}


// CDOTA_Modifier_AncientApparition_IceVortex::OnRefresh  (line 634, @0x00000000029f7e70, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "spell_resist_pct"
void __fastcall CDOTA_Modifier_AncientApparition_IceVortex::OnRefresh(
        CDOTA_Modifier_AncientApparition_IceVortex *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->movement_speed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movement_speed_pct", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->spell_resist_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "spell_resist_pct", -1, 0);
      return;
    }
  }
  else
  {
    this->movement_speed_pct = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->spell_resist_pct = 0;
}


// CDOTA_Modifier_AncientApparition_IceVortex::DeclareFunctions  (line 642, @0x00000000029b3e10, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_AncientApparition_IceVortex::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_AncientApparition_IceVortex::GetModifierMagicalResistanceBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_AncientApparition_IceVortex::DeclareFunctions(
        CDOTA_Modifier_AncientApparition_IceVortex *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_AncientApparition_IceVortex::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[49].__delta = 0;
  this->m_Functions[49].__pfn = CDOTA_Modifier_AncientApparition_IceVortex::GetModifierMagicalResistanceBonus;
}


// CDOTA_Modifier_AncientApparition_IceVortex::GetModifierMoveSpeedBonus_Percentage  (line 650, @0x00000000029b3e50, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_AncientApparition_IceVortex::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_AncientApparition_IceVortex *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->movement_speed_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_AncientApparition_IceVortex::GetModifierMagicalResistanceBonus  (line 657, @0x00000000029b3e70, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_AncientApparition_IceVortex::GetModifierMagicalResistanceBonus(
        CDOTA_Modifier_AncientApparition_IceVortex *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->spell_resist_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_AncientApparition_ChillingTouch::~CDOTA_Ability_AncientApparition_ChillingTouch  (line 666, @0x0000000002a16520, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_AncientApparition_ChillingTouch::~CDOTA_Ability_AncientApparition_ChillingTouch(
        CDOTA_Ability_AncientApparition_ChillingTouch *const this)
{
  this->_vptr_IHandleEntity = &off_43103F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_AncientApparition_ChillingTouch::~CDOTA_Ability_AncientApparition_ChillingTouch  (line 666, @0x0000000002a16540, libserver.so)  // inlines: ~CDOTA_Ability_AncientApparition_ChillingTouch
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_AncientApparition_ChillingTouch::~CDOTA_Ability_AncientApparition_ChillingTouch(
        CDOTA_Ability_AncientApparition_ChillingTouch *const this)
{
  this->_vptr_IHandleEntity = &off_43103F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_AncientApparition_ChillingTouch::Schema_DynamicBinding  (line 668, @0x0000000002a06d60, libserver.so)
// globals: CDOTA_Ability_AncientApparition_ChillingTouch::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_AncientApparition_ChillingTouch::Schema_DynamicBinding(
        const CDOTA_Ability_AncientApparition_ChillingTouch *const this)
{
  return CDOTA_Ability_AncientApparition_ChillingTouch::s_pSchemaBinding;
}


// CDOTA_Ability_AncientApparition_ChillingTouch::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 668, @0x0000000002a06d70, libserver.so)
// globals: CDOTA_Ability_AncientApparition_ChillingTouch::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_AncientApparition_ChillingTouch::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_AncientApparition_ChillingTouch::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_AncientApparition_ChillingTouch::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_AncientApparition_ChillingTouch::CEntityInstanceEntityClass::DestructInstance  (line 668, @0x0000000002a06d80, libserver.so)  // inlines: Destruct<CDOTA_Ability_AncientApparition_ChillingTouch>
void __fastcall CDOTA_Ability_AncientApparition_ChillingTouch::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_AncientApparition_ChillingTouch::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_AncientApparition_ChillingTouch::CEntityInstanceEntityClass::FreeInstance  (line 668, @0x0000000002a06da0, libserver.so)
void __fastcall CDOTA_Ability_AncientApparition_ChillingTouch::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_AncientApparition_ChillingTouch::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_AncientApparition_ChillingTouch::CEntityInstanceEntityClass::CanAllocate  (line 668, @0x0000000002a06dc0, libserver.so)
bool __fastcall CDOTA_Ability_AncientApparition_ChillingTouch::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_AncientApparition_ChillingTouch::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_AncientApparition_ChillingTouch::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 668, @0x0000000002a06dd0, libserver.so)
// globals: CDOTA_Ability_AncientApparition_ChillingTouch::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_AncientApparition_ChillingTouch::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_AncientApparition_ChillingTouch::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_AncientApparition_ChillingTouch::s_pSchemaBinding;
}


// CDOTA_Ability_AncientApparition_ChillingTouch::CEntityInstanceEntityClass::AllocateInstance  (line 668, @0x0000000002a0ebc0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_AncientApparition_ChillingTouch::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_AncientApparition_ChillingTouch::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_AncientApparition_ChillingTouch::CEntityInstanceEntityClass::ConstructInstance  (line 668, @0x0000000002a13940, libserver.so)  // inlines: CDOTA_Ability_AncientApparition_ChillingTouch, Construct<CDOTA_Ability_AncientApparition_ChillingTouch>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_AncientApparition_ChillingTouch::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_AncientApparition_ChillingTouch::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43103F0;
  }
  return p;
}


// CDOTA_Ability_AncientApparition_ChillingTouch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 668, @0x0000000002a1e870, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_AncientApparition_ChillingTouch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_AncientApparition_ChillingTouch::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_AncientApparition_ChillingTouch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 668, @0x0000000002a1e890, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_AncientApparition_ChillingTouch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_AncientApparition_ChillingTouch::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_AncientApparition_ChillingTouch::GetEntityClassInternal  (line 668, @0x0000000002a34190, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "ancient_apparition_chilling_touch", "CDOTA_Ability_AncientApparition_ChillingTouch"
// globals: `guard variable for'CDOTA_Ability_AncientApparition_ChillingTouch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_ChillingTouchClass, CDOTA_Ability_AncientApparition_ChillingTouch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_ChillingTouchClass, __dso_handle, CDOTA_Ability_AncientApparition_ChillingTouch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_AncientApparition_ChillingTouch::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_ChillingTouchClassInfo, CDOTA_Ability_AncientApparition_ChillingTouch::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_ChillingTouchClassInfo
CEntityClass *__cdecl CDOTA_Ability_AncientApparition_ChillingTouch::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_AncientApparition_ChillingTouch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_ChillingTouchClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_AncientApparition_ChillingTouch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_ChillingTouchClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_AncientApparition_ChillingTouch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_ChillingTouchClass);
    CDOTA_Ability_AncientApparition_ChillingTouch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_ChillingTouchClass._vptr_CEntityClass = off_4310370;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_AncientApparition_ChillingTouch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_ChillingTouchClass);
    __cxa_atexit(
      CDOTA_Ability_AncientApparition_ChillingTouch::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_AncientApparition_ChillingTouch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_ChillingTouchClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_AncientApparition_ChillingTouchClass != 0 )
    return &CDOTA_Ability_AncientApparition_ChillingTouch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_ChillingTouchClass;
  if ( `guard variable for'CDOTA_Ability_AncientApparition_ChillingTouch::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_ChillingTouchClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_AncientApparition_ChillingTouch::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_ChillingTouchClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_AncientApparition_ChillingTouch::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_ChillingTouchClassInfo,
      "CDOTA_Ability_AncientApparition_ChillingTouch",
      "ancient_apparition_chilling_touch",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_AncientApparition_ChillingTouch::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_ChillingTouchClassInfo);
  }
  CDOTA_Ability_AncientApparition_ChillingTouch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_ChillingTouchClass.m_pClassInfo = &CDOTA_Ability_AncientApparition_ChillingTouch::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_ChillingTouchClassInfo;
  CDOTA_Ability_AncientApparition_ChillingTouch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_ChillingTouchClass.m_pBaseClassInfo = CDOTA_Ability_AncientApparition_ChillingTouch::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_ChillingTouchClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_AncientApparition_ChillingTouchClass = &CDOTA_Ability_AncientApparition_ChillingTouch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_ChillingTouchClass;
  CDOTA_Ability_AncientApparition_ChillingTouch::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_ChillingTouchClassInfo.m_pClass = &CDOTA_Ability_AncientApparition_ChillingTouch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_ChillingTouchClass;
  CDOTA_Ability_AncientApparition_ChillingTouch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_ChillingTouchClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_AncientApparition_ChillingTouchClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_AncientApparition_ChillingTouch::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_ChillingTouchClass;
}


// CDOTA_Ability_AncientApparition_ChillingTouch::GetGestureBasedActivity  (line 687, @0x0000000002a06de0, libserver.so)
Activity __fastcall CDOTA_Ability_AncientApparition_ChillingTouch::GetGestureBasedActivity(
        CDOTA_Ability_AncientApparition_ChillingTouch *const this)
{
  return 1673;
}


// CDOTA_Ability_AncientApparition_ChillingTouch::YouForgotToImplementOrDeclareServerClass  (line 694, @0x00000000029b3e90, libserver.so)
int __fastcall CDOTA_Ability_AncientApparition_ChillingTouch::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_AncientApparition_ChillingTouch *const this)
{
  return 0;
}


// CDOTA_Ability_AncientApparition_ChillingTouch::GetServerClass  (line 694, @0x00000000029c9330, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_AncientApparition_ChillingTouch::GetServerClass(
        CDOTA_Ability_AncientApparition_ChillingTouch *const this)
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


// CDOTA_Ability_AncientApparition_ChillingTouch::OnSpellStart  (line 703, @0x00000000029eef50, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, FindUnitsInRadius, CDOTABaseAbility::CreateAbilityParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, KeyValues::KeyValues, CDOTABaseAbility::GetDuration (17 total)
// strings: "particles/units/heroes/hero_ancient_apparition/ancient_apparition_chilling_touch.vpcf", "Hero_Ancient_Apparition.ChillingTouchCast", "modifier_chilling_touch"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_AncientApparition_ChillingTouch::OnSpellStart(
        CDOTA_Ability_AncientApparition_ChillingTouch *const this)
{
  int LevelSpecialValue; // eax
  __m128i v3; // xmm2
  float v4; // r12d
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_BaseNPC *v6; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v8; // rax
  CDOTA_ParticleManager *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  __int64 v11; // r13
  int v12; // r12d
  float v13; // xmm1_4
  CHandle<CBaseEntity> *v14; // rdx
  uint32 m_Index; // eax
  __int16 v16; // cx
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  CDOTA_BaseNPC *m_pInstance; // r15
  CDOTA_BaseNPC *v20; // rax
  float v21; // xmm1_4
  CDOTA_BaseNPC *v22; // r12
  CDOTA_BaseNPC *v23; // rax
  double v24; // [rsp+20h] [rbp-90h]
  Vector vPosition; // [rsp+30h] [rbp-80h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+78h] [rbp-38h]

  v28 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  entities.m_Size = 0;
  *v3.m128i_i32 = LevelSpecialValue;
  this->radius = LevelSpecialValue;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  Caster = CDOTABaseAbility::GetCaster(this);
  vPosition = CDOTABaseAbility::GetCursorPosition(this);
  v6 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v6->m_iTeamNum.m_Value, &vPosition, Caster, v4, &entities, 1, 1, 139264, 0, 0);
  LODWORD(Caster) = CDOTABaseAbility::CreateAbilityParticleEffect(
                      this,
                      "particles/units/heroes/hero_ancient_apparition/ancient_apparition_chilling_touch.vpcf",
                      2,
                      0,
                      0);
  vPosition = CDOTABaseAbility::GetCursorPosition(this);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, Caster, 0, *&vPosition.x, vPosition.z);
  *&v24 = this->radius;
  *(&v24 + 1) = *&v24;
  v8 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v8, Caster, 1, v24, *&v24);
  v9 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v9, Caster);
  v10 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v10, "Hero_Ancient_Apparition.ChillingTouchCast", 0.0, 0, 0);
  if ( entities.m_Size > 0 )
  {
    v11 = 0;
    v12 = 0;
    do
    {
      KeyValues::KeyValues(&kv, "modifier_chilling_touch");
      CDOTABaseAbility::GetDuration(this);
      KeyValues::SetFloat(&kv, "duration", v13);
      v14 = &entities.m_Memory.m_pMemory[v11];
      m_Index = entities.m_Memory.m_pMemory[v11].m_Index;
      if ( m_Index + 2 > 1 )
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
              v20 = CDOTABaseAbility::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(m_pInstance, v20, this, "modifier_chilling_touch", &kv, 0);
            }
          }
        }
      }
      ++v12;
      ++v11;
      KeyValues::~KeyValues(&kv);
    }
    while ( entities.m_Size > v12 );
  }
  KeyValues::KeyValues(&kv, "modifier_chilling_touch");
  CDOTABaseAbility::GetDuration(this);
  KeyValues::SetFloat(&kv, "duration", v21);
  v22 = CDOTABaseAbility::GetCaster(this);
  v23 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v23, v22, this, "modifier_chilling_touch", &kv, 0);
  KeyValues::~KeyValues(&kv);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Modifier_AncientApparition_ChillingTouch::~CDOTA_Modifier_AncientApparition_ChillingTouch  (line 741, @0x0000000002a12d60, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_AncientApparition_ChillingTouch::~CDOTA_Modifier_AncientApparition_ChillingTouch(
        CDOTA_Modifier_AncientApparition_ChillingTouch *const this)
{
  this->_vptr_CDOTA_Buff = &off_4310EB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_AncientApparition_ChillingTouch::~CDOTA_Modifier_AncientApparition_ChillingTouch  (line 741, @0x0000000002a12d80, libserver.so)  // inlines: ~CDOTA_Modifier_AncientApparition_ChillingTouch
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_AncientApparition_ChillingTouch::~CDOTA_Modifier_AncientApparition_ChillingTouch(
        CDOTA_Modifier_AncientApparition_ChillingTouch *const this)
{
  this->_vptr_CDOTA_Buff = &off_4310EB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_AncientApparition_ChillingTouch::CanBeManuallyRemoved  (line 749, @0x0000000002a06df0, libserver.so)
bool __fastcall CDOTA_Modifier_AncientApparition_ChillingTouch::CanBeManuallyRemoved(
        CDOTA_Modifier_AncientApparition_ChillingTouch *const this)
{
  return 1;
}


// CDOTA_Modifier_AncientApparition_ChillingTouch::GetEffectName  (line 751, @0x0000000002a06e00, libserver.so)
// strings: "particles/units/heroes/hero_ancient_apparition/ancient_apparition_chilling_touch_buff.vpc
const char *__fastcall CDOTA_Modifier_AncientApparition_ChillingTouch::GetEffectName(
        CDOTA_Modifier_AncientApparition_ChillingTouch *const this)
{
  return "particles/units/heroes/hero_ancient_apparition/ancient_apparition_chilling_touch_buff.vpcf";
}


// CDOTA_Modifier_AncientApparition_ChillingTouch::OnCreated  (line 767, @0x00000000029f9bd0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName
// strings: "special_bonus_unique_ancient_apparition_2", "max_attacks"
void __fastcall CDOTA_Modifier_AncientApparition_ChillingTouch::OnCreated(
        CDOTA_Modifier_AncientApparition_ChillingTouch *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v7; // rax
  __int64 LevelSpecialValue; // rsi

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->bonus_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_11:
    this->attack_speed_pct = 0;
    goto LABEL_4;
  }
  this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_11;
LABEL_3:
  this->attack_speed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "attack_speed_pct", -1, 0);
LABEL_4:
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_ancient_apparition_2", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->bonus_damage += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  v7 = CDOTA_Buff::GetAbility(this);
  LevelSpecialValue = 0;
  if ( v7 != 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "max_attacks", -1, 0);
  (*(this->_vptr_CDOTA_Buff + 28))(this, LevelSpecialValue);
}


// CDOTA_Modifier_AncientApparition_ChillingTouch::OnRefresh  (line 787, @0x00000000029f9cf0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName
// strings: "special_bonus_unique_ancient_apparition_2", "max_attacks"
void __fastcall CDOTA_Modifier_AncientApparition_ChillingTouch::OnRefresh(
        CDOTA_Modifier_AncientApparition_ChillingTouch *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v7; // rax
  __int64 LevelSpecialValue; // rsi

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->bonus_damage = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_11:
    this->attack_speed_pct = 0;
    goto LABEL_4;
  }
  this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_damage", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_11;
LABEL_3:
  this->attack_speed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "attack_speed_pct", -1, 0);
LABEL_4:
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_ancient_apparition_2", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->bonus_damage += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  v7 = CDOTA_Buff::GetAbility(this);
  LevelSpecialValue = 0;
  if ( v7 != 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "max_attacks", -1, 0);
  (*(this->_vptr_CDOTA_Buff + 28))(this, LevelSpecialValue);
}


// CDOTA_Modifier_AncientApparition_ChillingTouch::DeclareFunctions  (line 807, @0x00000000029b3ea0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_AncientApparition_ChillingTouch::OnAttacked(CModifierParams const&), CDOTA_Modifier_AncientApparition_ChillingTouch::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_AncientApparition_ChillingTouch::DeclareFunctions(
        CDOTA_Modifier_AncientApparition_ChillingTouch *const this)
{
  this->m_Functions[137].__pfn = CDOTA_Modifier_AncientApparition_ChillingTouch::OnAttacked;
  this->m_Functions[137].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_AncientApparition_ChillingTouch::GetModifierAttackSpeedBonus_Constant;
}


// CDOTA_Modifier_AncientApparition_ChillingTouch::GetModifierAttackSpeedBonus_Constant  (line 815, @0x00000000029b3ee0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_AncientApparition_ChillingTouch::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_AncientApparition_ChillingTouch *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->attack_speed_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_AncientApparition_ChillingTouch::OnAttacked  (line 822, @0x00000000029c63e0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy, SendOverheadEventMessage, CDOTA_Buff::GetAbility, ApplyDamage
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_AncientApparition_ChillingTouch::OnAttacked(
        CDOTA_Modifier_AncientApparition_ChillingTouch *const this,
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
  CDOTABaseAbility *Ability; // rbx
  CDOTA_BaseNPC *Parent; // rax
  float flDamage; // [rsp+Ch] [rbp-24h]

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
                  && (v12[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0
                  && params->bProcessProcs )
                {
                  (*(this->_vptr_CDOTA_Buff + 26))(this);
                  if ( (*(this->_vptr_CDOTA_Buff + 27))(this) == 0 )
                    CDOTA_Buff::Destroy(this, 0, 0, 0);
                  SendOverheadEventMessage(
                    0,
                    DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BONUS_SPELL_DAMAGE,
                    v12,
                    this->bonus_damage,
                    0);
                  flDamage = this->bonus_damage;
                  Ability = CDOTA_Buff::GetAbility(this);
                  Parent = CDOTA_Buff::GetParent(this);
                  ApplyDamage(Parent, v12, Ability, flDamage, 2, 0);
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


// CDOTA_Ability_AncientApparition_IceBlast::~CDOTA_Ability_AncientApparition_IceBlast  (line 848, @0x0000000002a33110, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_AncientApparition_IceBlast::~CDOTA_Ability_AncientApparition_IceBlast(
        CDOTA_Ability_AncientApparition_IceBlast *const this)
{
  this->_vptr_IHandleEntity = &off_4311210;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hFrostbittenEntities);
  if ( (this->m_hFrostbittenEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hFrostbittenEntities.m_Memory),
        (this->m_hFrostbittenEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hFrostbittenEntities.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_AncientApparition_IceBlast::~CDOTA_Ability_AncientApparition_IceBlast  (line 848, @0x0000000002a33500, libserver.so)  // inlines: Purge, ~CDOTA_Ability_AncientApparition_IceBlast, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_AncientApparition_IceBlast::~CDOTA_Ability_AncientApparition_IceBlast(
        CDOTA_Ability_AncientApparition_IceBlast *const this)
{
  this->_vptr_IHandleEntity = &off_4311210;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hFrostbittenEntities);
  if ( (this->m_hFrostbittenEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hFrostbittenEntities.m_Memory);
    if ( (this->m_hFrostbittenEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hFrostbittenEntities.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_AncientApparition_IceBlast::Schema_DynamicBinding  (line 850, @0x0000000002a06e10, libserver.so)
// globals: CDOTA_Ability_AncientApparition_IceBlast::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_AncientApparition_IceBlast::Schema_DynamicBinding(
        const CDOTA_Ability_AncientApparition_IceBlast *const this)
{
  return CDOTA_Ability_AncientApparition_IceBlast::s_pSchemaBinding;
}


// CDOTA_Ability_AncientApparition_IceBlast::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 850, @0x0000000002a06e20, libserver.so)
// globals: CDOTA_Ability_AncientApparition_IceBlast::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_AncientApparition_IceBlast::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_AncientApparition_IceBlast::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_AncientApparition_IceBlast::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_AncientApparition_IceBlast::CEntityInstanceEntityClass::DestructInstance  (line 850, @0x0000000002a06e30, libserver.so)  // inlines: Destruct<CDOTA_Ability_AncientApparition_IceBlast>
void __fastcall CDOTA_Ability_AncientApparition_IceBlast::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_AncientApparition_IceBlast::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_AncientApparition_IceBlast::CEntityInstanceEntityClass::FreeInstance  (line 850, @0x0000000002a06e50, libserver.so)
void __fastcall CDOTA_Ability_AncientApparition_IceBlast::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_AncientApparition_IceBlast::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_AncientApparition_IceBlast::CEntityInstanceEntityClass::CanAllocate  (line 850, @0x0000000002a06e70, libserver.so)
bool __fastcall CDOTA_Ability_AncientApparition_IceBlast::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_AncientApparition_IceBlast::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_AncientApparition_IceBlast::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 850, @0x0000000002a06e80, libserver.so)
// globals: CDOTA_Ability_AncientApparition_IceBlast::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_AncientApparition_IceBlast::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_AncientApparition_IceBlast::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_AncientApparition_IceBlast::s_pSchemaBinding;
}


// CDOTA_Ability_AncientApparition_IceBlast::CEntityInstanceEntityClass::AllocateInstance  (line 850, @0x0000000002a0ec00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_AncientApparition_IceBlast::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_AncientApparition_IceBlast::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 1032);
  memset(v1, 0, 0x408u);
  return v1;
}


// CDOTA_Ability_AncientApparition_IceBlast::CEntityInstanceEntityClass::ConstructInstance  (line 850, @0x0000000002a1e370, libserver.so)  // inlines: CDOTA_Ability_AncientApparition_IceBlast, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_AncientApparition_IceBlast>
// calls: CDOTABaseAbility::CDOTABaseAbility, CountdownTimer::CountdownTimer, CDOTABaseAbility::~CDOTABaseAbility, _Unwind_Resume
CEntityInstance *__fastcall CDOTA_Ability_AncientApparition_IceBlast::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_AncientApparition_IceBlast::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4311210;
    CountdownTimer::CountdownTimer(p + 38);
    *(p + 252) = 0;
    *(p + 127) = 0;
    *(p + 256) = 0;
    *(p + 257) = 0;
  }
  return p;
}


// CDOTA_Ability_AncientApparition_IceBlast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 850, @0x0000000002a1e8c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_AncientApparition_IceBlast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_AncientApparition_IceBlast::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_AncientApparition_IceBlast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 850, @0x0000000002a1e8e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_AncientApparition_IceBlast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_AncientApparition_IceBlast::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_AncientApparition_IceBlast::GetEntityClassInternal  (line 850, @0x0000000002a342e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "ancient_apparition_ice_blast", "CDOTA_Ability_AncientApparition_IceBlast"
// globals: `guard variable for'CDOTA_Ability_AncientApparition_IceBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlastClass, CDOTA_Ability_AncientApparition_IceBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlastClass, __dso_handle, CDOTA_Ability_AncientApparition_IceBlast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_AncientApparition_IceBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlastClassInfo, CDOTA_Ability_AncientApparition_IceBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlastClassInfo
CEntityClass *__cdecl CDOTA_Ability_AncientApparition_IceBlast::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_AncientApparition_IceBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlastClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_AncientApparition_IceBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlastClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_AncientApparition_IceBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlastClass);
    CDOTA_Ability_AncientApparition_IceBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlastClass._vptr_CEntityClass = off_4311190;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_AncientApparition_IceBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlastClass);
    __cxa_atexit(
      CDOTA_Ability_AncientApparition_IceBlast::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_AncientApparition_IceBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlastClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_AncientApparition_IceBlastClass != 0 )
    return &CDOTA_Ability_AncientApparition_IceBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlastClass;
  if ( `guard variable for'CDOTA_Ability_AncientApparition_IceBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlastClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_AncientApparition_IceBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlastClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_AncientApparition_IceBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlastClassInfo,
      "CDOTA_Ability_AncientApparition_IceBlast",
      "ancient_apparition_ice_blast",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_AncientApparition_IceBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlastClassInfo);
  }
  CDOTA_Ability_AncientApparition_IceBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlastClass.m_pClassInfo = &CDOTA_Ability_AncientApparition_IceBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlastClassInfo;
  CDOTA_Ability_AncientApparition_IceBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlastClass.m_pBaseClassInfo = CDOTA_Ability_AncientApparition_IceBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlastClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_AncientApparition_IceBlastClass = &CDOTA_Ability_AncientApparition_IceBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlastClass;
  CDOTA_Ability_AncientApparition_IceBlast::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlastClassInfo.m_pClass = &CDOTA_Ability_AncientApparition_IceBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlastClass;
  CDOTA_Ability_AncientApparition_IceBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlastClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_AncientApparition_IceBlastClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_AncientApparition_IceBlast::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlastClass;
}


// CDOTA_Ability_AncientApparition_IceBlast::ShouldSpeakAbilityConcept  (line 866, @0x0000000002a06e90, libserver.so)
bool __fastcall CDOTA_Ability_AncientApparition_IceBlast::ShouldSpeakAbilityConcept(
        CDOTA_Ability_AncientApparition_IceBlast *const this,
        int iConcept)
{
  return 0;
}


// CDOTA_Ability_AncientApparition_IceBlast::GetAssociatedSecondaryAbilities  (line 869, @0x0000000002a06ea0, libserver.so)
// strings: "ancient_apparition_ice_blast_release"
const char *__fastcall CDOTA_Ability_AncientApparition_IceBlast::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_AncientApparition_IceBlast *const this)
{
  return "ancient_apparition_ice_blast_release";
}


// CDOTA_Ability_AncientApparition_IceBlast::YouForgotToImplementOrDeclareServerClass  (line 893, @0x00000000029b3f00, libserver.so)
int __fastcall CDOTA_Ability_AncientApparition_IceBlast::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_AncientApparition_IceBlast *const this)
{
  return 0;
}


// CDOTA_Ability_AncientApparition_IceBlast::GetServerClass  (line 893, @0x00000000029c8fb0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_AncientApparition_IceBlast::GetServerClass(
        CDOTA_Ability_AncientApparition_IceBlast *const this)
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


// CDOTA_Ability_AncientApparition_IceBlast::Spawn  (line 902, @0x00000000029b7c30, libserver.so)
// calls: CDOTABaseAbility::Spawn
void __fastcall CDOTA_Ability_AncientApparition_IceBlast::Spawn(
        CDOTA_Ability_AncientApparition_IceBlast *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTABaseAbility::Spawn(this, pKeyValues);
  this->m_iTrackerProjectile = -1;
}


// CDOTA_Ability_AncientApparition_IceBlast::OnUpgrade  (line 912, @0x00000000029b7c60, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "ancient_apparition_ice_blast_release"
void __fastcall CDOTA_Ability_AncientApparition_IceBlast::OnUpgrade(
        CDOTA_Ability_AncientApparition_IceBlast *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "ancient_apparition_ice_blast_release", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value == 0 )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_AncientApparition_IceBlast::OnSpellStart  (line 926, @0x00000000029e7d10, libserver.so)  // inlines: CEntityHandle, CGameTrace, CHandle, EnableInteractsWith, GetEHandle, GetEntryIndex, GetFloat, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, Init, LengthSqr, Ray_t, RnCollisionAttr_t, Set, SetBool, TraceRay, UTIL_TraceLine, UTIL_TraceSphere, VectorAdd, VectorAligned, VectorClear, VectorCopy, VectorMultiply, VectorNormalize2D, VectorSubtract, operator*, operator+, operator-, operator=, sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetInt, CDOTABaseAbility::GetCursorPosition, CGameTrace::Init, CTraceFilterSimple::CTraceFilterSimple, CGamePhysicsQueryInterface::TraceRay, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, VectorNormalize, CBaseEntity::GetAbsAngles (19 total)
// strings: "path_radius", "radius_min", "radius_max", "radius_grow", "frostbite_duration", "frostbite_duration_scepter" (12 total)
void __fastcall CDOTA_Ability_AncientApparition_IceBlast::OnSpellStart(
        CDOTA_Ability_AncientApparition_IceBlast *const this)
{
  int LevelSpecialValue; // r13d
  float x; // xmm4_4
  float y; // xmm3_4
  vec_t v5; // xmm4_4
  float z; // xmm2_4
  vec_t v7; // xmm3_4
  float m_fValue; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  vec_t v11; // xmm0_4
  vec_t v12; // xmm1_4
  CDOTA_BaseNPC *v13; // rax
  const QAngle *AbsAngles; // rax
  CDOTA_BaseNPC *v15; // rax
  const Vector *v16; // rax
  vec_t v17; // xmm2_4
  vec_t v18; // xmm0_4
  vec_t v19; // xmm1_4
  vec_t v20; // xmm0_4
  CDOTA_BaseNPC *v21; // rax
  const Vector *v22; // rax
  vec_t v23; // xmm0_4
  CDOTA_BaseNPC *v24; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v26; // eax
  __int16 v27; // cx
  int path_radius; // eax
  int m_Value; // eax
  CDOTA_BaseNPC *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  Vector vDirection; // [rsp+10h] [rbp-220h] BYREF
  CTraceFilterSimple v33; // [rsp+20h] [rbp-210h] BYREF
  Ray_t ray; // [rsp+60h] [rbp-1D0h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+B0h] [rbp-180h] BYREF
  trace_t tr; // [rsp+130h] [rbp-100h] BYREF
  KeyValues kv; // [rsp+1E0h] [rbp-50h] BYREF
  unsigned __int64 v38; // [rsp+1F8h] [rbp-38h]
  Vector CursorPosition; // 0:kr00_12.12

  v38 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
  this->path_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "path_radius", -1, 0);
  this->radius_min = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius_min", -1, 0);
  this->radius_max = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius_max", -1, 0);
  this->radius_grow = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "radius_grow", -1, 0);
  this->frostbite_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "frostbite_duration", -1, 0);
  this->frostbite_duration_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                       this,
                                       "frostbite_duration_scepter",
                                       -1,
                                       0);
  this->target_sight_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "target_sight_radius", -1, 0);
  KeyValues::KeyValues(&kv, "ice_blast");
  KeyValues::SetInt(&kv, "is_tracker", 1);
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  tr.m_ShapeAttributes.m_nHierarchyId = 0;
  this->m_vTarget = CursorPosition;
  memset(&tr.m_ShapeAttributes, 0, 28);
  tr.m_ShapeAttributes.m_nCollisionGroup = 0;
  tr.m_ShapeAttributes.m_nCollisionFunctionMask = 7;
  CGameTrace::Init(&tr);
  x = this->m_vTarget.x;
  ray.m_Start.w = 0.0;
  y = this->m_vTarget.y;
  memset(&ray.m_Delta.w, 0, 36);
  v5 = x + 0.0;
  z = this->m_vTarget.z;
  v7 = y + 0.0;
  m_fValue = phys_traceline_radius.m_pParent->m_Value.m_fValue;
  ray.m_IsRay = 1;
  ray.m_flRadius = m_fValue;
  ray.m_Delta.y = v7 - v7;
  ray.m_Delta.x = v5 - v5;
  ray.m_Delta.z = (z - 256.0) - (z + 1024.0);
  ray.m_Start.x = v5;
  ray.m_Start.y = v7;
  ray.m_Start.z = z + 1024.0;
  ray.m_IsSwept = (((ray.m_Delta.x * ray.m_Delta.x) + (ray.m_Delta.y * ray.m_Delta.y)) + (ray.m_Delta.z * ray.m_Delta.z)) != 0.0;
  CTraceFilterSimple::CTraceFilterSimple(&v33, 0, 4, 0);
  v33.m_attr.m_nInteractsWith |= 0x7001uLL;
  CGamePhysicsQueryInterface::TraceRay(g_pPhysicsQuery, &ray, &v33, &tr);
  this->m_vTarget = tr.endpos;
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  v11 = this->m_vTarget.y - AbsOrigin->y;
  v12 = this->m_vTarget.x - AbsOrigin->x;
  vDirection.z = 0.0;
  vDirection.y = v11;
  vDirection.x = v12;
  if ( VectorNormalize(&vDirection) < 0.0099999998 )
  {
    v13 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v13);
    AngleVectors(AbsAngles, &vDirection, 0, 0);
  }
  v15 = CDOTABaseAbility::GetCaster(this);
  v16 = CBaseEntity::GetAbsOrigin(v15);
  this->m_vStartPos.x = v16->x;
  this->m_vStartPos.y = v16->y;
  v17 = vec3_origin.x;
  v18 = v16->z;
  info.hSource.m_Index = -1;
  v19 = vec3_origin.y;
  info.vSpawnOrigin.x = vec3_origin.x;
  this->m_vStartPos.z = v18;
  v20 = vec3_origin.z;
  info.vSpawnOrigin.y = v19;
  info.vSpawnOrigin.z = v20;
  info.vVelocity.x = v17;
  info.vVelocity.y = v19;
  info.vVelocity.z = v20;
  info.vAcceleration.x = v17;
  info.vAcceleration.y = v19;
  info.vAcceleration.z = v20;
  info.fDistance = 0.0;
  info.fStartRadius = 0.0;
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
  info.bStickyFoWReveal = 0;
  info.pKVExtraData = 0;
  info.fExpireTime = 0.0;
  info.fMaxSpeed = 0.0;
  info.pszEffectName = "particles/units/heroes/hero_ancient_apparition/ancient_apparition_ice_blast_initial.vpcf";
  info.pAbility = this;
  v21 = CDOTABaseAbility::GetCaster(this);
  v22 = CBaseEntity::GetAbsOrigin(v21);
  info.vSpawnOrigin.x = v22->x;
  info.vSpawnOrigin.y = v22->y;
  v23 = v22->z;
  info.fDistance = 100000.0;
  info.vSpawnOrigin.z = v23;
  info.vVelocity.y = vDirection.y * LevelSpecialValue;
  info.vVelocity.z = vDirection.z * LevelSpecialValue;
  info.vVelocity.x = LevelSpecialValue * vDirection.x;
  v24 = CDOTABaseAbility::GetCaster(this);
  if ( v24 != 0 && (m_pEntity = v24->m_pEntity) != 0 )
  {
    v26 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v27 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v27 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(info.hSource.m_Index) = v27 | info.hSource.m_Index & 0x8000;
    info.hSource.m_Index = (v26 << 15) | info.hSource.m_Index & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  path_radius = this->path_radius;
  info.bProvidesVision = 1;
  info.iVisionRadius = 2 * path_radius;
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  info.bVisibleToEnemies = 0;
  info.bDrawsOnMinimap = 1;
  info.pKVExtraData = &kv;
  info.iVisionTeamNumber = m_Value;
  this->m_iTrackerProjectile = CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  v30 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::SwapAbilities(v30, "ancient_apparition_ice_blast_release", "ancient_apparition_ice_blast", 1, 0);
  v31 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(1, "Hero_Ancient_Apparition.IceBlast.Tracker", v31);
  this->m_vLastTempViewer.x = this->m_vStartPos.x;
  this->m_vLastTempViewer.y = this->m_vStartPos.y;
  this->m_vLastTempViewer.z = this->m_vStartPos.z;
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_AncientApparition_IceBlast::IsTrackerAlive  (line 983, @0x00000000029cb270, libserver.so)
bool __fastcall CDOTA_Ability_AncientApparition_IceBlast::IsTrackerAlive(
        CDOTA_Ability_AncientApparition_IceBlast *const this)
{
  return this->m_iTrackerProjectile != -1;
}


// CDOTA_Ability_AncientApparition_IceBlast::GetTrackerLocation  (line 988, @0x00000000029cb280, libserver.so)  // inlines: IsTrackerAlive
// calls: CDOTA_ProjectileManager::GetLinearProjectileLocation
// callers: CDOTA_Ability_AncientApparition_IceBlast::DestroyTracker
Vector __fastcall CDOTA_Ability_AncientApparition_IceBlast::GetTrackerLocation(
        CDOTA_Ability_AncientApparition_IceBlast *const this)
{
  int m_iTrackerProjectile; // esi
  Vector vRet; // [rsp+10h] [rbp-20h] BYREF
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  m_iTrackerProjectile = this->m_iTrackerProjectile;
  if ( m_iTrackerProjectile == -1 )
  {
    *&result.x = *&vec3_origin.x;
    result.z = vec3_origin.z;
  }
  else
  {
    CDOTA_ProjectileManager::GetLinearProjectileLocation(&g_DOTAProjectileManager, m_iTrackerProjectile, &vRet);
    *&result.x = *&vRet.x;
    result.z = vRet.z;
  }
  return result;
}


// CDOTA_Ability_AncientApparition_IceBlast::DestroyTracker  (line 1004, @0x00000000029cb2f0, libserver.so)  // inlines: CBroadcastRecipientFilter, CEntityHandle, CHandle, CReliableBroadcastRecipientFilter, FastSqrt, GetEHandle, GetEntryIndex, GetParent, GetSerialNumber, GetSpawnGroupHandle, GetTeamNumber, Length2D, Set, SetBool, Vector, VectorMultiply, VectorNormalize2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator-, operator=, sLinearProjectileCreateInfo, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CDOTA_Ability_AncientApparition_IceBlast::GetTrackerLocation, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, VectorNormalize, CDOTAFogOfWarSystem::AddTempViewer, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTA_BaseNPC::GetOpposingTeamNumber, GetGlobalTeam, CRecipientFilter::RemoveRecipientsByTeam, CRecipientFilter::AddRecipientsByTeam (28 total)
// callers: CDOTA_Ability_AncientApparition_IceBlast::OnUnStolen, CDOTA_Ability_AncientApparition_IceBlast_Release::OnSpellStart, CDOTA_Unit_Hero_AncientApparition::OnDying
// strings: "particles/units/heroes/hero_ancient_apparition/ancient_apparition_ice_blast_marker.vpcf", "is_tracker", "fx_index", "particles/units/heroes/hero_ancient_apparition/ancient_apparition_ice_blast_final.vpcf"
void __fastcall CDOTA_Ability_AncientApparition_IceBlast::DestroyTracker(
        CDOTA_Ability_AncientApparition_IceBlast *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  vec_t v4; // xmm0_4
  vec_t v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  float radius_max; // xmm1_4
  int v10; // r14d
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  int OpposingTeamNumber; // eax
  CTeam *GlobalTeam; // rax
  CTeam *v15; // rax
  __m128i y_low; // xmm7
  __m128i v17; // xmm0
  float v18; // r15d
  float v19; // r13d
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  CEntityIdentity *m_pEntity; // rax
  SpawnGroupHandle_t m_hSpawnGroup; // edi
  int v24; // r13d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v26; // rax
  vec_t y; // xmm1_4
  vec_t v28; // xmm0_4
  CDOTA_BaseNPC *v29; // rax
  const Vector *v30; // rax
  vec_t v31; // xmm0_4
  CDOTA_BaseNPC *v32; // rax
  CEntityIdentity *v33; // rdx
  int v34; // eax
  __int16 v35; // cx
  int AbilityParticleEffect; // r13d
  CDOTA_BaseNPC *v37; // rax
  const Vector *v38; // r15
  CDOTA_ParticleManager *v39; // rax
  CDOTA_ParticleManager *v40; // rax
  CDOTA_ParticleManager *v41; // rax
  CDOTA_ParticleManager *v42; // rax
  CDOTA_BaseNPC *v43; // rax
  const QAngle *AbsAngles; // rax
  float startsolidval; // [rsp+Ch] [rbp-274h]
  float x; // [rsp+10h] [rbp-270h]
  float flRadius; // [rsp+14h] [rbp-26Ch]
  vec_t flRadiusa; // [rsp+14h] [rbp-26Ch]
  float fDist; // [rsp+18h] [rbp-268h]
  float fSpeed; // [rsp+1Ch] [rbp-264h]
  float fSpeeda; // [rsp+1Ch] [rbp-264h]
  Vector vDirection; // [rsp+20h] [rbp-260h] BYREF
  unsigned __int64 v53; // [rsp+30h] [rbp-250h]
  vec_t z; // [rsp+38h] [rbp-248h]
  Vector vecNormal; // [rsp+40h] [rbp-240h] BYREF
  double v56[2]; // [rsp+50h] [rbp-230h]
  double v57; // [rsp+60h] [rbp-220h]
  float v58; // [rsp+68h] [rbp-218h]
  sLinearProjectileCreateInfo info; // [rsp+70h] [rbp-210h] BYREF
  KeyValues kv; // [rsp+F0h] [rbp-190h] BYREF
  CReliableBroadcastRecipientFilter filter; // [rsp+110h] [rbp-170h] BYREF
  unsigned __int64 v62; // [rsp+248h] [rbp-38h]
  Vector TrackerLocation; // 0:kr00_12.12

  v62 = __readfsqword(0x28u);
  if ( this->m_iTrackerProjectile != -1 )
  {
    TrackerLocation = CDOTA_Ability_AncientApparition_IceBlast::GetTrackerLocation(this);
    info.pszEffectName = *&TrackerLocation.x;
    this->m_vTarget.z = TrackerLocation.z;
    *&info.pAbility = TrackerLocation.z;
    this->m_vTarget.x = TrackerLocation.x;
    this->m_vTarget.y = *(&info.pszEffectName + 1);
    Caster = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
    v4 = this->m_vTarget.y - AbsOrigin->y;
    v5 = this->m_vTarget.x - AbsOrigin->x;
    vDirection.z = 0.0;
    vDirection.y = v4;
    vDirection.x = v5;
    fDist = VectorNormalize(&vDirection);
    v6 = this->m_vTarget.x - this->m_vStartPos.x;
    v7 = fsqrt((v6 * v6) + ((this->m_vTarget.y - this->m_vStartPos.y) * (this->m_vTarget.y - this->m_vStartPos.y)));
    if ( fDist < 0.0099999998 )
    {
      fSpeeda = v7;
      v43 = CDOTABaseAbility::GetCaster(this);
      AbsAngles = CBaseEntity::GetAbsAngles(v43);
      AngleVectors(AbsAngles, &vDirection, 0, 0);
      v7 = fSpeeda;
    }
    fSpeed = 750.0;
    if ( fDist >= 1500.0 )
      fSpeed = fDist * 0.5;
    v8 = this->radius_min + ((v7 / 1500.0) * this->radius_grow);
    radius_max = this->radius_max;
    if ( radius_max > v8 )
      v10 = v8;
    else
      v10 = radius_max;
    flRadius = this->target_sight_radius * 1.5;
    v11 = CDOTABaseAbility::GetCaster(this);
    CDOTAFogOfWarSystem::AddTempViewer(
      &g_DOTAFogOfWarSystem,
      FoWViewerType_t::FOWVIEWERTYPE_ICEBLAST_DESTROY,
      v11->m_iTeamNum.m_Value,
      &this->m_vTarget,
      flRadius,
      4.0,
      0);
    CRecipientFilter::CRecipientFilter(&filter);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&filter);
    filter._vptr_IRecipientFilter = &off_3FCB130;
    CRecipientFilter::MakeReliable(&filter);
    v12 = CDOTABaseAbility::GetCaster(this);
    OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v12);
    GlobalTeam = GetGlobalTeam(OpposingTeamNumber);
    CRecipientFilter::RemoveRecipientsByTeam(&filter, GlobalTeam);
    v15 = GetGlobalTeam(1);
    CRecipientFilter::AddRecipientsByTeam(&filter, v15);
    y_low = LODWORD(this->m_vTarget.y);
    v17 = 0x45000000u;
    startsolidval = this->m_vTarget.z;
    v53 = *&this->m_vTarget.x;
    LODWORD(v18) = _mm_cvtsi128_si32(y_low);
    *v17.m128i_i32 = startsolidval + 2048.0;
    x = this->m_vTarget.x;
    z = this->m_vTarget.z;
    v19 = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
    m_pParent = this->m_pGameSceneNode->m_pParent;
    if ( m_pParent != 0 )
      OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    else
      OwnerEntity = 0;
    m_pEntity = OwnerEntity->m_pEntity;
    if ( m_pEntity != 0 )
      m_hSpawnGroup = m_pEntity->m_hSpawnGroup;
    else
      m_hSpawnGroup = 0;
    flRadiusa = UTIL_TraceRayVerticalGroundHeight(
                  m_hSpawnGroup,
                  x,
                  v18,
                  v19,
                  startsolidval - 2048.0,
                  startsolidval,
                  &vecNormal,
                  0x7021u)
              + 60.0;
    v24 = CDOTABaseAbility::CreateAbilityParticleEffect(
            this,
            "particles/units/heroes/hero_ancient_apparition/ancient_apparition_ice_blast_marker.vpcf",
            2,
            0,
            &filter);
    ParticleManager = GetParticleManager();
    v53 = __PAIR64__(LODWORD(v18), LODWORD(x));
    z = flRadiusa;
    CDOTA_ParticleManager::SetParticleControl(
      ParticleManager,
      v24,
      0,
      COERCE_DOUBLE(__PAIR64__(LODWORD(v18), LODWORD(x))),
      flRadiusa);
    *(&info.pszEffectName + 4) = 0x3F8000003F800000LL;
    *&info.pszEffectName = v10;
    v26 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v26, v24, 1, *&info.pszEffectName, *&info.pAbility);
    KeyValues::KeyValues(&kv, "ice_blast");
    KeyValues::SetInt(&kv, "is_tracker", 0);
    KeyValues::SetInt(&kv, "fx_index", v24);
    info.hSource.m_Index = -1;
    info.pszEffectName = 0;
    info.fDistance = 0.0;
    info.fStartRadius = 0.0;
    info.bHasFrontalCone = 1;
    y = vec3_origin.y;
    info.fEndRadius = 0.0;
    v28 = vec3_origin.z;
    info.vSpawnOrigin.x = vec3_origin.x;
    info.vSpawnOrigin.y = y;
    info.vSpawnOrigin.z = v28;
    info.vVelocity.x = vec3_origin.x;
    info.vVelocity.y = y;
    info.vVelocity.z = v28;
    info.vAcceleration.x = vec3_origin.x;
    info.vAcceleration.y = y;
    info.vAcceleration.z = v28;
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
    info.bStickyFoWReveal = 0;
    info.pKVExtraData = 0;
    info.fExpireTime = 0.0;
    info.fMaxSpeed = 0.0;
    info.pAbility = this;
    v29 = CDOTABaseAbility::GetCaster(this);
    v30 = CBaseEntity::GetAbsOrigin(v29);
    info.vSpawnOrigin.x = v30->x;
    info.vSpawnOrigin.y = v30->y;
    v31 = v30->z;
    info.fDistance = fDist;
    info.vSpawnOrigin.z = v31;
    info.vVelocity.y = vDirection.y * fSpeed;
    info.vVelocity.z = vDirection.z * fSpeed;
    info.vVelocity.x = fSpeed * vDirection.x;
    v32 = CDOTABaseAbility::GetCaster(this);
    if ( v32 != 0 && (v33 = v32->m_pEntity) != 0 )
    {
      v34 = (v33->m_EHandle.m_Index >> 15) - (v33->m_flags & 1);
      v35 = 0x7FFF;
      if ( v33->m_EHandle.m_Index != -1 )
        v35 = v33->m_EHandle.m_Index & 0x7FFF;
      LOWORD(info.hSource.m_Index) = v35 | info.hSource.m_Index & 0x8000;
      info.hSource.m_Index = (v34 << 15) | info.hSource.m_Index & 0x7FFF;
    }
    else
    {
      info.hSource.m_Index = -1;
    }
    info.pKVExtraData = &kv;
    AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                              this,
                              "particles/units/heroes/hero_ancient_apparition/ancient_apparition_ice_blast_final.vpcf",
                              2,
                              0,
                              0);
    v37 = CDOTABaseAbility::GetCaster(this);
    v38 = CBaseEntity::GetAbsOrigin(v37);
    v39 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v39, AbilityParticleEffect, 0, *&v38->x, v38->z);
    *(&v57 + 1) = vDirection.y * fSpeed;
    v58 = vDirection.z * fSpeed;
    *&v57 = vDirection.x * fSpeed;
    v40 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v40, AbilityParticleEffect, 1, v57, v58);
    *(v56 + 4) = 0.0;
    *v56 = fDist / fSpeed;
    v41 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v41, AbilityParticleEffect, 5, v56[0], *&v56[1]);
    v42 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v42, AbilityParticleEffect);
    CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
    CDOTA_ProjectileManager::DestroyLinearProjectile(&g_DOTAProjectileManager, this->m_iTrackerProjectile);
    this->m_iTrackerProjectile = -1;
    KeyValues::~KeyValues(&kv);
    filter._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&filter);
  }
}


// CDOTA_Ability_AncientApparition_IceBlast::OnProjectileHit_ExtraData  (line 1071, @0x00000000029dc4a0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetAbilityData, GetBool, GetClassNameAsCStr, GetClassname, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, GetSpawnGroupHandle, GetTeamNumber, IndexToIdentity, IsValid, Length2D, LookupEntity, String, ToDOTABaseNPC, VectorAdd, VectorNormalize2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator+, operator-, operator[], ~CUtlVector
// calls: KeyValues::GetInt, VectorNormalize, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::DestroyParticleEffect, CGameSceneNode::GetOwnerEntity, UTIL_TraceRayVerticalGroundHeight, CDOTABaseAbility::CreateAbilityParticleEffect, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_Ability_AncientApparition_IceBlast::DebuffNearbyUnits, CDOTABaseAbility::GetCaster, FindUnitsInRadius (23 total)
// strings: "is_tracker", "fx_index", "particles/units/heroes/hero_ancient_apparition/ancient_apparition_ice_blast_explode.vpcf", "abilityname", "Hero_Ancient_Apparition.IceBlast.Target", "ancient_apparition_ice_blast_release" (7 total)
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_AncientApparition_IceBlast::OnProjectileHit_ExtraData(
        CDOTA_Ability_AncientApparition_IceBlast *const this,
        EHANDLE hTarget,
        const Vector *const vLocation,
        KeyValues *pExtraData)
{
  float y; // xmm0_4
  vec_t v7; // xmm1_4
  float v8; // xmm1_4
  float radius_max; // xmm0_4
  int v10; // r12d
  int Int; // ebx
  unsigned int v12; // xmm2_4
  unsigned int v13; // xmm1_4
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v15; // rax
  float z; // xmm4_4
  float x; // r15d
  float v18; // xmm3_4
  float v19; // r13d
  float v20; // xmm2_4
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rax
  CEntityIdentity *m_pEntity; // rax
  SpawnGroupHandle_t m_hSpawnGroup; // edi
  int AbilityParticleEffect; // ebx
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  CDOTA_ParticleManager *v28; // rax
  __m128i v29; // xmm6
  float v30; // r12d
  CDOTA_BaseNPC *v31; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // ebx
  CDOTA_BaseNPC *v34; // rax
  float v35; // xmm3_4
  __int64 v36; // r13
  int v37; // r12d
  char v38; // r15
  CHandle<CBaseEntity> *v39; // rdx
  uint32 m_Index; // eax
  __int16 v41; // cx
  CEntityIdentity *v42; // rdx
  CEntityIdentity *v43; // rdx
  CEntityInstance *m_pInstance; // rbx
  CDOTA_BaseNPC *v45; // rax
  double v46; // xmm0_8
  CEntityIdentity *v47; // rax
  const char *m_pAsString; // rdx
  float v49; // xmm2_4
  CDOTA_BaseNPC_Hero *v50; // rax
  CDOTA_BaseNPC *Caster; // rax
  float startsolidval; // [rsp+18h] [rbp-E8h]
  float z0; // [rsp+20h] [rbp-E0h]
  float z1; // [rsp+2Ch] [rbp-D4h]
  float z1a; // [rsp+2Ch] [rbp-D4h]
  float z1b; // [rsp+2Ch] [rbp-D4h]
  Vector vDirection; // [rsp+30h] [rbp-D0h] BYREF
  double v59; // [rsp+40h] [rbp-C0h]
  float v60; // [rsp+48h] [rbp-B8h]
  Vector vecNormal; // [rsp+50h] [rbp-B0h] BYREF
  double v62; // [rsp+60h] [rbp-A0h]
  float v63; // [rsp+68h] [rbp-98h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+70h] [rbp-90h] BYREF
  CResponseCriteriaSet criteria; // [rsp+90h] [rbp-70h] BYREF

  if ( KeyValues::GetInt(pExtraData, "is_tracker", 0) != 0 )
  {
    this->m_iTrackerProjectile = -1;
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::SwapAbilities(Caster, "ancient_apparition_ice_blast", "ancient_apparition_ice_blast_release", 1, 0);
  }
  else
  {
    y = this->m_vTarget.y;
    vDirection.z = 0.0;
    v7 = this->m_vTarget.x - this->m_vStartPos.x;
    vDirection.y = y - this->m_vStartPos.y;
    vDirection.x = v7;
    v8 = this->radius_min + ((VectorNormalize(&vDirection) / 1500.0) * this->radius_grow);
    radius_max = this->radius_max;
    if ( radius_max > v8 )
      v10 = v8;
    else
      v10 = radius_max;
    Int = KeyValues::GetInt(pExtraData, "fx_index", 0);
    *&v12 = this->m_vTarget.y + 0.0;
    *&v13 = this->m_vTarget.x + 0.0;
    v63 = this->m_vTarget.z + 120.0;
    v62 = COERCE_DOUBLE(__PAIR64__(v12, v13));
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(ParticleManager, Int, 3, v62, v63);
    v15 = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(v15, Int, 0);
    z = this->m_vTarget.z;
    x = this->m_vTarget.x;
    v59 = *&this->m_vTarget.x;
    v18 = z - 2048.0;
    v19 = this->m_vTarget.y;
    v20 = z + 2048.0;
    v60 = this->m_vTarget.z;
    m_pParent = this->m_pGameSceneNode->m_pParent;
    OwnerEntity = 0;
    if ( m_pParent != 0 )
    {
      startsolidval = z;
      z0 = z + 2048.0;
      z1 = z - 2048.0;
      OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
      z = startsolidval;
      v20 = z0;
      v18 = z1;
    }
    m_pEntity = OwnerEntity->m_pEntity;
    if ( m_pEntity != 0 )
      m_hSpawnGroup = m_pEntity->m_hSpawnGroup;
    else
      m_hSpawnGroup = 0;
    z1a = UTIL_TraceRayVerticalGroundHeight(m_hSpawnGroup, x, v19, v20, v18, z, &vecNormal, 0x7021u);
    AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                              this,
                              "particles/units/heroes/hero_ancient_apparition/ancient_apparition_ice_blast_explode.vpcf",
                              2,
                              0,
                              0);
    v26 = GetParticleManager();
    v59 = COERCE_DOUBLE(__PAIR64__(LODWORD(v19), LODWORD(x)));
    v60 = z1a + 60.0;
    CDOTA_ParticleManager::SetParticleControl(
      v26,
      AbilityParticleEffect,
      0,
      COERCE_DOUBLE(__PAIR64__(LODWORD(v19), LODWORD(x))),
      z1a + 60.0);
    v27 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v27, AbilityParticleEffect, 3, v59, v60);
    v28 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v28, AbilityParticleEffect);
    CDOTA_Ability_AncientApparition_IceBlast::DebuffNearbyUnits(this, &this->m_vTarget, v10);
    *v29.m128i_i32 = v10;
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    v30 = COERCE_FLOAT(_mm_cvtsi128_si32(v29));
    v31 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v31->m_iTeamNum.m_Value, &this->m_vTarget, 0, v30, &entities, 2, 3, 0, 0, 0);
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      CDOTABaseAbility::LoadAbilityData(this, 0);
      m_pAbilityData = this->m_pAbilityData;
    }
    m_iAbilityID = m_pAbilityData->m_iAbilityID;
    v34 = CDOTABaseAbility::GetCaster(this);
    CDOTAGamerules::SendProjectionAbilityMessage(
      g_pGameRules,
      v34,
      0,
      m_iAbilityID,
      0,
      0,
      *&this->m_vTarget.x,
      this->m_vTarget.z,
      -1.0,
      v35);
    if ( entities.m_Size > 0 )
    {
      v36 = 0;
      v37 = 0;
      v38 = 0;
      do
      {
        v39 = &entities.m_Memory.m_pMemory[v36];
        m_Index = entities.m_Memory.m_pMemory[v36].m_Index;
        if ( m_Index + 2 > 1 )
        {
          v41 = v39->m_Index;
          v42 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v39->m_Index) >> 9) & 0x3F];
          if ( v42 != 0 )
          {
            v43 = &v42[v41 & 0x1FF];
            if ( v43 != 0 && m_Index == v43->m_EHandle.m_Index )
            {
              m_pInstance = v43->m_pInstance;
              if ( v43->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
              {
                z1b = (*(this->_vptr_IHandleEntity + 247))(this);
                v45 = CDOTABaseAbility::GetCaster(this);
                v46 = ApplyDamage(v45, m_pInstance, this, z1b, 2, 0);
                if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance, v46) == 0
                  && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                {
                  v38 = 1;
                }
              }
            }
          }
        }
        ++v37;
        ++v36;
      }
      while ( entities.m_Size > v37 );
      if ( v38 != 0 )
      {
        CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
        v47 = this->m_pEntity;
        m_pAsString = "";
        if ( v47->m_designerName.u.m_Id != 0 )
          m_pAsString = v47->m_designerName.u.m_pAsString;
        CResponseCriteriaSet::AppendCriteria(&criteria, "abilityname", m_pAsString, 1.0);
        CResponseCriteriaSet::AppendCriteria(&criteria, "traveldist", 1.0, v49);
        v50 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC_Hero::SetKillCriteria(v50, &criteria);
        CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
      }
    }
    DOTA_EmitSoundLocation(&this->m_vTarget, "Hero_Ancient_Apparition.IceBlast.Target", 1);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
  return 1;
}


// CDOTA_Ability_AncientApparition_IceBlast::OnProjectileThink_ExtraData  (line 1152, @0x00000000029dcab0, libserver.so)  // inlines: FastSqrt, GetBool, GetTeamNumber, IsElapsed, Length2D, NetworkStateChanged, Set, Start, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator=, operator=<float>
// calls: KeyValues::GetInt, CountdownTimer::Now, CDOTA_Ability_AncientApparition_IceBlast::DebuffNearbyUnits, CDOTABaseAbility::GetCaster, CDOTAFogOfWarSystem::AddTempViewer
// strings: "is_tracker"
void __fastcall CDOTA_Ability_AncientApparition_IceBlast::OnProjectileThink_ExtraData(
        CDOTA_Ability_AncientApparition_IceBlast *const this,
        const Vector *const vLocation,
        KeyValues *pExtraData)
{
  float v5; // xmm0_4
  float v6; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  float flRadiusa; // [rsp+Ch] [rbp-24h]
  float flRadius; // [rsp+Ch] [rbp-24h]

  if ( KeyValues::GetInt(pExtraData, "is_tracker", 0) == 0
    && CountdownTimer::Now(&this->m_PathTimer) >= this->m_PathTimer.m_timestamp.m_Value )
  {
    CDOTA_Ability_AncientApparition_IceBlast::DebuffNearbyUnits(this, vLocation, this->path_radius);
    v5 = CountdownTimer::Now(&this->m_PathTimer) + 0.02;
    if ( v5 != this->m_PathTimer.m_timestamp.m_Value )
    {
      flRadius = v5;
      (*(this->m_PathTimer._vptr_CountdownTimer + 2))(&this->m_PathTimer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_PathTimer.m_timestamp.m_Value = flRadius;
    }
    if ( this->m_PathTimer.m_duration.m_Value != 0.02 )
    {
      (*(this->m_PathTimer._vptr_CountdownTimer + 2))(&this->m_PathTimer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_PathTimer.m_duration.m_Value = 0.02;
    }
    v6 = this->m_vLastTempViewer.y - vLocation->y;
    if ( fsqrt(((this->m_vLastTempViewer.x - vLocation->x) * (this->m_vLastTempViewer.x - vLocation->x)) + (v6 * v6)) > (0.5 * this->target_sight_radius) )
    {
      flRadiusa = this->target_sight_radius;
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTAFogOfWarSystem::AddTempViewer(
        &g_DOTAFogOfWarSystem,
        FoWViewerType_t::FOWVIEWERTYPE_ICEBLAST_THINK,
        Caster->m_iTeamNum.m_Value,
        vLocation,
        flRadiusa,
        3.3399999,
        0);
      this->m_vLastTempViewer.x = vLocation->x;
      this->m_vLastTempViewer.y = vLocation->y;
      this->m_vLastTempViewer.z = vLocation->z;
    }
  }
}


// CDOTA_Ability_AncientApparition_IceBlast::OnUnStolen  (line 1172, @0x00000000029cbb60, libserver.so)
// calls: CDOTABaseAbility::OnUnStolen, CDOTA_Ability_AncientApparition_IceBlast::DestroyTracker, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::SwapAbilities
// strings: "ancient_apparition_ice_blast_release", "ancient_apparition_ice_blast"
void __fastcall CDOTA_Ability_AncientApparition_IceBlast::OnUnStolen(
        CDOTA_Ability_AncientApparition_IceBlast *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  CDOTABaseAbility::OnUnStolen(this);
  CDOTA_Ability_AncientApparition_IceBlast::DestroyTracker(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::SwapAbilities(Caster, "ancient_apparition_ice_blast", "ancient_apparition_ice_blast_release", 1, 0);
}


// CDOTA_Ability_AncientApparition_IceBlast::DebuffNearbyUnits  (line 1184, @0x00000000029dc1f0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, HasElement, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetCaster, FindUnitsInRadius, KeyValues::~KeyValues, KeyValues::KeyValues, CDOTA_BaseNPC::HasScepter, KeyValues::SetFloat, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTA_BaseNPC::AddNewModifier, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume, __stack_chk_fail
// callers: CDOTA_Ability_AncientApparition_IceBlast::OnProjectileHit_ExtraData, CDOTA_Ability_AncientApparition_IceBlast::OnProjectileThink_ExtraData
// strings: "modifier_ice_blast"
// globals: CEntityHandle::gm_pEntityList
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_Ability_AncientApparition_IceBlast::DebuffNearbyUnits(
        CDOTA_Ability_AncientApparition_IceBlast *const this,
        const Vector *const vLocation,
        int nRadius)
{
  __m128i v3; // xmm2
  float v4; // r13d
  CDOTA_BaseNPC *Caster; // rax
  __int64 v8; // rbx
  CDOTA_BaseNPC *v9; // rax
  unsigned __int16 *v10; // rdx
  int v11; // eax
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTA_BaseNPC *v16; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v18; // eax
  __int16 v19; // cx
  CHandle<CBaseEntity> v20; // [rsp+30h] [rbp-88h] BYREF
  int v21; // [rsp+40h] [rbp-78h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+48h] [rbp-70h]
  __int64 v23; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 kv_16; // [rsp+78h] [rbp-40h] OVERLAPPED

  *v3.m128i_i32 = nRadius;
  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  v21 = 0;
  kv_16 = __readfsqword(0x28u);
  *&entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(Caster->m_iTeamNum.m_Value, vLocation, 0, v4, &v21, 2, 1, 8272, 0, 0);
  if ( v21 > 0 )
  {
    v8 = 0;
    do
    {
      KeyValues::KeyValues(&v23, "modifier_ice_blast");
      v9 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::HasScepter(v9);
      KeyValues::SetFloat(&v23, "duration", this->frostbite_duration_scepter);
      v10 = (*&entities.m_Size + 4 * v8);
      v11 = *v10;
      if ( (*v10 + 2) > 1
        && (v12 = *v10, (v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v10 >> 9) & 0x3F]) != 0)
        && (v14 = &v13[v12 & 0x1FF]) != 0
        && v11 == v14->m_EHandle.m_Index
        && (m_pInstance = v14->m_pInstance, v14->m_pInstance != 0)
        && m_pInstance->m_bIsDOTANPC )
      {
        m_pEntity = m_pInstance->m_pEntity;
        v20.m_Index = -1;
        if ( m_pEntity != 0 )
        {
          v18 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
          v19 = 0x7FFF;
          if ( m_pEntity->m_EHandle.m_Index != -1 )
            v19 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
          LOWORD(v20.m_Index) = v19 | v20.m_Index & 0x8000;
          v20.m_Index = (v18 << 15) | v20.m_Index & 0x7FFF;
        }
      }
      else
      {
        v20.m_Index = -1;
        m_pInstance = 0;
      }
      if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
             &this->m_hFrostbittenEntities,
             &v20) < 0 )
      {
        v16 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(m_pInstance, v16, this, "modifier_ice_blast", &v23, 0);
      }
      KeyValues::~KeyValues(&v23);
      ++v8;
    }
    while ( v21 > v8 );
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&v21);
}


// CDOTA_Ability_AncientApparition_IceBlast_Release::~CDOTA_Ability_AncientApparition_IceBlast_Release  (line 1210, @0x0000000002a16570, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_AncientApparition_IceBlast_Release::~CDOTA_Ability_AncientApparition_IceBlast_Release(
        CDOTA_Ability_AncientApparition_IceBlast_Release *const this)
{
  this->_vptr_IHandleEntity = &off_4311D10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_AncientApparition_IceBlast_Release::~CDOTA_Ability_AncientApparition_IceBlast_Release  (line 1210, @0x0000000002a16590, libserver.so)  // inlines: ~CDOTA_Ability_AncientApparition_IceBlast_Release
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_AncientApparition_IceBlast_Release::~CDOTA_Ability_AncientApparition_IceBlast_Release(
        CDOTA_Ability_AncientApparition_IceBlast_Release *const this)
{
  this->_vptr_IHandleEntity = &off_4311D10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_AncientApparition_IceBlast_Release::Schema_DynamicBinding  (line 1212, @0x0000000002a06eb0, libserver.so)
// globals: CDOTA_Ability_AncientApparition_IceBlast_Release::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_AncientApparition_IceBlast_Release::Schema_DynamicBinding(
        const CDOTA_Ability_AncientApparition_IceBlast_Release *const this)
{
  return CDOTA_Ability_AncientApparition_IceBlast_Release::s_pSchemaBinding;
}


// CDOTA_Ability_AncientApparition_IceBlast_Release::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1212, @0x0000000002a06ec0, libserver.so)
// globals: CDOTA_Ability_AncientApparition_IceBlast_Release::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_AncientApparition_IceBlast_Release::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_AncientApparition_IceBlast_Release::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_AncientApparition_IceBlast_Release::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_AncientApparition_IceBlast_Release::CEntityInstanceEntityClass::DestructInstance  (line 1212, @0x0000000002a06ed0, libserver.so)  // inlines: Destruct<CDOTA_Ability_AncientApparition_IceBlast_Release>
void __fastcall CDOTA_Ability_AncientApparition_IceBlast_Release::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_AncientApparition_IceBlast_Release::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_AncientApparition_IceBlast_Release::CEntityInstanceEntityClass::FreeInstance  (line 1212, @0x0000000002a06ef0, libserver.so)
void __fastcall CDOTA_Ability_AncientApparition_IceBlast_Release::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_AncientApparition_IceBlast_Release::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_AncientApparition_IceBlast_Release::CEntityInstanceEntityClass::CanAllocate  (line 1212, @0x0000000002a06f10, libserver.so)
bool __fastcall CDOTA_Ability_AncientApparition_IceBlast_Release::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_AncientApparition_IceBlast_Release::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_AncientApparition_IceBlast_Release::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1212, @0x0000000002a06f20, libserver.so)
// globals: CDOTA_Ability_AncientApparition_IceBlast_Release::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_AncientApparition_IceBlast_Release::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_AncientApparition_IceBlast_Release::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_AncientApparition_IceBlast_Release::s_pSchemaBinding;
}


// CDOTA_Ability_AncientApparition_IceBlast_Release::CEntityInstanceEntityClass::AllocateInstance  (line 1212, @0x0000000002a0ec40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_AncientApparition_IceBlast_Release::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_AncientApparition_IceBlast_Release::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_AncientApparition_IceBlast_Release::CEntityInstanceEntityClass::ConstructInstance  (line 1212, @0x0000000002a13970, libserver.so)  // inlines: CDOTA_Ability_AncientApparition_IceBlast_Release, Construct<CDOTA_Ability_AncientApparition_IceBlast_Release>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_AncientApparition_IceBlast_Release::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_AncientApparition_IceBlast_Release::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4311D10;
  }
  return p;
}


// CDOTA_Ability_AncientApparition_IceBlast_Release::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1212, @0x0000000002a1e910, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_AncientApparition_IceBlast_Release::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_AncientApparition_IceBlast_Release::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_AncientApparition_IceBlast_Release::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1212, @0x0000000002a1e930, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_AncientApparition_IceBlast_Release::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_AncientApparition_IceBlast_Release::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal  (line 1212, @0x0000000002a3d350, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "ancient_apparition_ice_blast_release", "CDOTA_Ability_AncientApparition_IceBlast_Release"
// globals: `guard variable for'CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClas, CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_AncientApparition_IceBlast_Release::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClassInf, CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClassInfo
CEntityClass *__cdecl CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass) != 0 )
  {
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_pClassInfo = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_flags = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_pInputs = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_nInputCount = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_pOutputs = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_nOutputCount = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_pGameClass = 0;
    CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass._vptr_CEntityClass = off_4311C90;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass);
    __cxa_atexit(
      CDOTA_Ability_AncientApparition_IceBlast_Release::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass != 0 )
    return &CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass;
  if ( `guard variable for'CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClassInfo,
      "CDOTA_Ability_AncientApparition_IceBlast_Release",
      "ancient_apparition_ice_blast_release",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClassInfo);
  }
  CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_pClassInfo = &CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClassInfo;
  CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_pBaseClassInfo = CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass = &CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass;
  CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClassInfo.m_pClass = &CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass;
  CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_AncientApparition_IceBlast_Release::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_AncientApparition_IceBlast_ReleaseClass;
}


// CDOTA_Ability_AncientApparition_IceBlast_Release::ProcsMagicStick  (line 1218, @0x0000000002a06f30, libserver.so)
bool __fastcall CDOTA_Ability_AncientApparition_IceBlast_Release::ProcsMagicStick(
        CDOTA_Ability_AncientApparition_IceBlast_Release *const this)
{
  return 0;
}


// CDOTA_Ability_AncientApparition_IceBlast_Release::IsHiddenWhenStolen  (line 1220, @0x0000000002a06f40, libserver.so)
bool __fastcall CDOTA_Ability_AncientApparition_IceBlast_Release::IsHiddenWhenStolen(
        CDOTA_Ability_AncientApparition_IceBlast_Release *const this)
{
  return 1;
}


// CDOTA_Ability_AncientApparition_IceBlast_Release::GetAssociatedPrimaryAbilities  (line 1221, @0x0000000002a06f50, libserver.so)
// strings: "ancient_apparition_ice_blast"
const char *__fastcall CDOTA_Ability_AncientApparition_IceBlast_Release::GetAssociatedPrimaryAbilities(
        CDOTA_Ability_AncientApparition_IceBlast_Release *const this)
{
  return "ancient_apparition_ice_blast";
}


// CDOTA_Ability_AncientApparition_IceBlast_Release::OnUpgrade  (line 1231, @0x00000000029b7cb0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::UpgradeAbility, CDOTABaseAbility::OnUpgrade
// strings: "ancient_apparition_ice_blast"
void __fastcall CDOTA_Ability_AncientApparition_IceBlast_Release::OnUpgrade(
        CDOTA_Ability_AncientApparition_IceBlast_Release *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "ancient_apparition_ice_blast", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value == 0 )
    CDOTABaseAbility::UpgradeAbility(AbilityByName, 0);
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_AncientApparition_IceBlast_Release::OnSpellStart  (line 1245, @0x00000000029cbbb0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_AncientApparition_IceBlast::DestroyTracker, CDOTA_BaseNPC::SwapAbilities, DOTA_EmitSound
// strings: "ancient_apparition_ice_blast", "ancient_apparition_ice_blast_release", "Hero_Ancient_Apparition.IceBlastRelease.Cast", "Hero_Ancient_Apparition.IceBlastRelease.Cast.Self"
void __fastcall CDOTA_Ability_AncientApparition_IceBlast_Release::OnSpellStart(
        CDOTA_Ability_AncientApparition_IceBlast_Release *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Ability_AncientApparition_IceBlast *AbilityByName; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "ancient_apparition_ice_blast", 0);
  if ( AbilityByName != 0 )
    CDOTA_Ability_AncientApparition_IceBlast::DestroyTracker(AbilityByName);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::SwapAbilities(v4, "ancient_apparition_ice_blast", "ancient_apparition_ice_blast_release", 1, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(24, "Hero_Ancient_Apparition.IceBlastRelease.Cast", v5);
  v6 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(1, "Hero_Ancient_Apparition.IceBlastRelease.Cast.Self", v6);
}


// CDOTA_Ability_AncientApparition_IceBlast_Release::GetAbilityDamageToTargetOverInterval  (line 1263, @0x00000000029de630, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "frostbite_duration"
__int64 __fastcall CDOTA_Ability_AncientApparition_IceBlast_Release::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_AncientApparition_IceBlast_Release *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int v7; // r13d
  float fIntervala; // [rsp+0h] [rbp-2Ch]
  float fIntervalb; // [rsp+0h] [rbp-2Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    fIntervala = fminf(fInterval, CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "frostbite_duration", -1, 1));
    v7 = (*(this->_vptr_IHandleEntity + 247))(this);
    fIntervalb = v7 + (CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "dot_damage", -1, 1) * fIntervala);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalb);
  }
  return result;
}


// CDOTA_Modifier_AncientApparition_IceBlast::~CDOTA_Modifier_AncientApparition_IceBlast  (line 1280, @0x0000000002a12d10, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_AncientApparition_IceBlast::~CDOTA_Modifier_AncientApparition_IceBlast(
        CDOTA_Modifier_AncientApparition_IceBlast *const this)
{
  this->_vptr_CDOTA_Buff = &off_43127D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_AncientApparition_IceBlast::~CDOTA_Modifier_AncientApparition_IceBlast  (line 1280, @0x0000000002a12d30, libserver.so)  // inlines: ~CDOTA_Modifier_AncientApparition_IceBlast
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_AncientApparition_IceBlast::~CDOTA_Modifier_AncientApparition_IceBlast(
        CDOTA_Modifier_AncientApparition_IceBlast *const this)
{
  this->_vptr_CDOTA_Buff = &off_43127D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_AncientApparition_IceBlast::IsPurgable  (line 1288, @0x0000000002a06f60, libserver.so)
bool __fastcall CDOTA_Modifier_AncientApparition_IceBlast::IsPurgable(
        CDOTA_Modifier_AncientApparition_IceBlast *const this)
{
  return 0;
}


// CDOTA_Modifier_AncientApparition_IceBlast::GetEffectName  (line 1290, @0x0000000002a06f70, libserver.so)
// strings: "particles/units/heroes/hero_ancient_apparition/ancient_apparition_ice_blast_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_AncientApparition_IceBlast::GetEffectName(
        CDOTA_Modifier_AncientApparition_IceBlast *const this)
{
  return "particles/units/heroes/hero_ancient_apparition/ancient_apparition_ice_blast_debuff.vpcf";
}


// CDOTA_Modifier_AncientApparition_IceBlast::GetStatusEffectName  (line 1291, @0x0000000002a06f80, libserver.so)
// strings: "particles/status_fx/status_effect_iceblast.vpcf"
const char *__fastcall CDOTA_Modifier_AncientApparition_IceBlast::GetStatusEffectName(
        CDOTA_Modifier_AncientApparition_IceBlast *const this)
{
  return "particles/status_fx/status_effect_iceblast.vpcf";
}


// CDOTA_Modifier_AncientApparition_IceBlast::StatusEffectPriority  (line 1292, @0x0000000002a06f90, libserver.so)
int __fastcall CDOTA_Modifier_AncientApparition_IceBlast::StatusEffectPriority(
        CDOTA_Modifier_AncientApparition_IceBlast *const this)
{
  return 61;
}


// CDOTA_Modifier_AncientApparition_IceBlast::GetAttributes  (line 1298, @0x0000000002a06fa0, libserver.so)
int __fastcall CDOTA_Modifier_AncientApparition_IceBlast::GetAttributes(
        CDOTA_Modifier_AncientApparition_IceBlast *const this)
{
  return 4;
}


// CDOTA_Modifier_AncientApparition_IceBlast::OnCreated  (line 1311, @0x00000000029e05c0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, Set, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "kill_pct"
void __fastcall CDOTA_Modifier_AncientApparition_IceBlast::OnCreated(
        CDOTA_Modifier_AncientApparition_IceBlast *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->dot_damage = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->kill_pct = 0.0;
    goto LABEL_4;
  }
  this->dot_damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "dot_damage", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->kill_pct = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "kill_pct", -1, 0);
LABEL_4:
  this->m_hFracturingEntity.m_Index = -1;
  CDOTA_Buff::StartIntervalThink(this, 1.0, v5);
}


// CDOTA_Modifier_AncientApparition_IceBlast::OnRefresh  (line 1325, @0x00000000029e03e0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "kill_pct"
void __fastcall CDOTA_Modifier_AncientApparition_IceBlast::OnRefresh(
        CDOTA_Modifier_AncientApparition_IceBlast *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->dot_damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "dot_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->kill_pct = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "kill_pct", -1, 0);
      return;
    }
  }
  else
  {
    this->dot_damage = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->kill_pct = 0.0;
}


// CDOTA_Modifier_AncientApparition_IceBlast::OnIntervalThink  (line 1335, @0x00000000029c6f30, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetModifier_Constant_Lowest, GetSerialNumber, IndexToIdentity, IsListeningToEvent, IsValid, LookupEntity, Set, SetAttacker, SetTarget, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTA_Buff::GetParent, CDOTA_ModifierManager::GetModifier_Constant_Lowest_Internal, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, ApplyDamage, SendOverheadEventMessage, CDOTA_BaseNPC::FindModifierByName, CBaseEntity::GetHealth, FireModifierEvent, CDOTA_BaseNPC::Kill, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager (15 total)
// strings: "modifier_skeleton_king_reincarnation_scepter", "particles/units/heroes/hero_ancient_apparition/ancient_apparition_ice_blast_death.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_AncientApparition_IceBlast::OnIntervalThink(
        CDOTA_Modifier_AncientApparition_IceBlast *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  float Modifier_Constant_Lowest_Internal; // xmm0_4
  __int64 v4; // rdx
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTABaseAbility *v8; // r13
  CDOTA_BaseNPC *v9; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *v13; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v15; // cx
  CDOTA_BaseNPC *v16; // rax
  CEntityIdentity *v17; // rdx
  __int16 v18; // cx
  CDOTA_BaseNPC *v19; // rax
  float v20; // xmm0_4
  CEntityIdentity *v21; // rax
  __int16 v22; // cx
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  int BuffParticleEffect; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  float v28; // xmm1_4
  CDOTA_BaseNPC *v29; // rax
  float flDamage; // [rsp+Ch] [rbp-B4h]
  CModifierParams params; // [rsp+10h] [rbp-B0h] BYREF

  Parent = CDOTA_Buff::GetParent(this);
  Modifier_Constant_Lowest_Internal = 0.0;
  v4 = Parent->m_ModifierManager.m_buffsForModifiers[102];
  if ( v4 != 0xFF && Parent->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v4].m_Size > 0 )
    Modifier_Constant_Lowest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Lowest_Internal(
                                          &Parent->m_ModifierManager,
                                          modifierfunction::MODIFIER_PROPERTY_MIN_HEALTH,
                                          &CModifierParams::s_Default);
  m_Index = this->m_hFracturingEntity.m_Index;
  if ( m_Index + 2 > 1
    && (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hFracturingEntity.m_Index) >> 9) & 0x3F]) != 0
    && (v7 = &v6[this->m_hFracturingEntity.m_Index & 0x1FF]) != 0
    && m_Index == v7->m_EHandle.m_Index
    && (m_pInstance = v7->m_pInstance, v7->m_pInstance != 0)
    && m_pInstance->m_bIsDOTANPC
    && Modifier_Constant_Lowest_Internal == 0.0 )
  {
    v13 = CDOTA_Buff::GetParent(this);
    if ( CDOTA_BaseNPC::FindModifierByName(v13, "modifier_skeleton_king_reincarnation_scepter", 0) == 0 )
    {
      v29 = CDOTA_Buff::GetParent(this);
      CDOTA_ModifierManager::RemoveAllModifiers(&v29->m_ModifierManager, 0, 1, 0, 1);
    }
    params.fOriginalDamage = 0.0;
    params.nActivity = -1;
    params.bTooltip = 0;
    params.nTooltipParam = 0;
    params.bIgnoreInvis = 0;
    params.bNoCooldown = 0;
    params.bReincarnate = 0;
    params.bDoNotConsume = 0;
    params.fDistance = 0.0;
    params.inflictor.m_Index = -1;
    params.nDamageflags = 0;
    params.nDamageCategory = 0;
    memset(&params.pOrb, 0, 24);
    params.bCraniumBasherTested = 0;
    params.bHeartRegenApplied = 0;
    params.bDiffusalApplied = 0;
    params.bChainLightningConsidered = 0;
    params.bSuppressDamage = 0;
    params.bRangedAttack = 0;
    params.nPlayerids_stick = 0;
    params.hattacker.m_Index = -1;
    params.htarget.m_Index = -1;
    params.hunit.m_Index = -1;
    params.ability.m_Index = -1;
    m_pEntity = m_pInstance->m_pEntity;
    params.fDamage = 0.0;
    if ( m_pEntity != 0 )
    {
      v15 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v15 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      params.hattacker.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                               | v15 & 0x7FFF;
    }
    v16 = CDOTA_Buff::GetParent(this);
    if ( v16 != 0 && (v17 = v16->m_pEntity) != 0 )
    {
      v18 = 0x7FFF;
      if ( v17->m_EHandle.m_Index != -1 )
        v18 = v17->m_EHandle.m_Index & 0x7FFF;
      params.htarget.m_Index = (((v17->m_EHandle.m_Index >> 15) - (v17->m_flags & 1)) << 15) | v18 & 0x7FFF;
    }
    else
    {
      params.htarget.m_Index = -1;
    }
    v19 = CDOTA_Buff::GetParent(this);
    v20 = (CBaseEntity::GetHealth(v19) + 1000);
    v21 = m_pInstance->m_pEntity;
    params.fDamage = v20;
    if ( v21 != 0 )
    {
      v22 = 0x7FFF;
      if ( v21->m_EHandle.m_Index != -1 )
        v22 = v21->m_EHandle.m_Index & 0x7FFF;
      params.inflictor.m_Index = (((v21->m_EHandle.m_Index >> 15) - (v21->m_flags & 1)) << 15) | v22 & 0x7FFF;
    }
    else
    {
      params.inflictor.m_Index = -1;
    }
    params.bRangedAttack = 0;
    params.iRecord = -1;
    params.nDamageType = 1;
    params.nDamageCategory = 0;
    params.nDamageflags = 0;
    params.iFailType = 0;
    params.bProcessProcs = 0;
    FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_TAKEDAMAGE_KILLCREDIT, &params);
    Ability = CDOTA_Buff::GetAbility(this);
    v24 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::Kill(v24, Ability, m_pInstance, 0.0, 0);
    v25 = CDOTA_Buff::GetParent(this);
    BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                           this,
                           "particles/units/heroes/hero_ancient_apparition/ancient_apparition_ice_blast_death.vpcf",
                           0,
                           v25,
                           0);
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(ParticleManager, BuffParticleEffect);
    CDOTA_Buff::StartIntervalThink(this, -1.0, v28);
  }
  else
  {
    flDamage = this->dot_damage;
    v8 = CDOTA_Buff::GetAbility(this);
    v9 = CDOTA_Buff::GetParent(this);
    Caster = CDOTA_Buff::GetCaster(this);
    ApplyDamage(Caster, v9, v8, flDamage, 2, 0);
    LODWORD(v9) = this->dot_damage;
    v11 = CDOTA_Buff::GetParent(this);
    SendOverheadEventMessage(0, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BONUS_SPELL_DAMAGE, v11, v9, 0);
  }
}


// CDOTA_Modifier_AncientApparition_IceBlast::DeclareFunctions  (line 1381, @0x00000000029b3f10, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_AncientApparition_IceBlast::OnTakeDamage(CModifierParams const&), CDOTA_Modifier_AncientApparition_IceBlast::GetDisableHealing(CModifierParams const&)
void __fastcall CDOTA_Modifier_AncientApparition_IceBlast::DeclareFunctions(
        CDOTA_Modifier_AncientApparition_IceBlast *const this)
{
  this->m_Functions[134].__pfn = CDOTA_Modifier_AncientApparition_IceBlast::OnTakeDamage;
  this->m_Functions[134].__delta = 0;
  this->m_Functions[111].__delta = 0;
  this->m_Functions[111].__pfn = CDOTA_Modifier_AncientApparition_IceBlast::GetDisableHealing;
}


// CDOTA_Modifier_AncientApparition_IceBlast::GetDisableHealing  (line 1389, @0x00000000029b3f50, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_AncientApparition_IceBlast::GetDisableHealing(
        CDOTA_Modifier_AncientApparition_IceBlast *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_AncientApparition_IceBlast::OnTakeDamage  (line 1396, @0x00000000029c8440, libserver.so)  // inlines: AttackerNPC, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetHealthPercent, GetInstance, GetModifier_Constant_Lowest, GetSerialNumber, InState, IndexToIdentity, IsInvulnerable, IsListeningToEvent, IsValid, LookupEntity, Set, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound, CDOTA_ModifierManager::GetModifier_Constant_Lowest_Internal, CBaseEntity::GetHealth, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetCaster
// strings: "Hero_Ancient_Apparition.IceBlastRelease.Tick"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_AncientApparition_IceBlast::OnTakeDamage(
        CDOTA_Modifier_AncientApparition_IceBlast *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *Parent; // r14
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CDOTA_BaseNPC *v13; // rbx
  __int64 v14; // rax
  float Modifier_Constant_Lowest_Internal; // xmm0_4
  __int64 v16; // r12
  int v17; // eax
  __int64 v18; // rcx
  float v19; // xmm1_4
  CEntityIdentity *m_pEntity; // rdx
  int v21; // eax
  __int16 v22; // cx
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *v24; // rdx
  int v25; // eax
  __int16 v26; // cx
  float v27; // [rsp+Ch] [rbp-24h]

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1
    || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F]) == 0
    || (v6 = &v5[params->hunit.m_Index & 0x1FF]) == 0
    || m_Index != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  Parent = CDOTA_Buff::GetParent(this);
  if ( Parent == m_pInstance )
  {
    v10 = params->hattacker.m_Index;
    if ( v10 + 2 > 1 )
    {
      v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
      if ( v11 != 0 )
      {
        v12 = &v11[params->hattacker.m_Index & 0x1FF];
        if ( v12 != 0 && v10 == v12->m_EHandle.m_Index )
        {
          v13 = v12->m_pInstance;
          if ( v12->m_pInstance != 0 && v13->m_bIsDOTANPC && m_pInstance != 0 && !m_pInstance->m_bIsIllusion.m_Value )
          {
            v14 = m_pInstance->m_ModifierManager.m_buffsForModifiers[102];
            Modifier_Constant_Lowest_Internal = 0.0;
            if ( v14 != 0xFF )
            {
              Modifier_Constant_Lowest_Internal = 0.0;
              if ( Parent->m_ModifierManager.m_buffModifiers.m_Memory.m_pMemory[v14].m_Size > 0 )
                Modifier_Constant_Lowest_Internal = CDOTA_ModifierManager::GetModifier_Constant_Lowest_Internal(
                                                      &Parent->m_ModifierManager,
                                                      modifierfunction::MODIFIER_PROPERTY_MIN_HEALTH,
                                                      &CModifierParams::s_Default);
            }
            v27 = Modifier_Constant_Lowest_Internal;
            v16 = 100LL * CBaseEntity::GetHealth(Parent);
            v17 = (*(Parent->_vptr_IHandleEntity + 156))(Parent);
            v18 = 1;
            if ( v17 > 0 )
              v18 = v17;
            v19 = (v16 / v18);
            if ( this->kill_pct > v19
              && v27 == 0.0
              && !Parent->m_bIsWaitingToSpawn.m_Value
              && (Parent->m_nUnitState64.m_Value & 0x100) == 0 )
            {
              m_pEntity = v13->m_pEntity;
              if ( m_pEntity != 0 )
              {
                v21 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                v22 = 0x7FFF;
                if ( m_pEntity->m_EHandle.m_Index != -1 )
                  v22 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                LOWORD(this->m_hFracturingEntity.m_Index) = v22 | this->m_hFracturingEntity.m_Index & 0x8000;
                this->m_hFracturingEntity.m_Index = (v21 << 15) | this->m_hFracturingEntity.m_Index & 0x7FFF;
              }
              else
              {
                this->m_hFracturingEntity.m_Index = -1;
              }
              if ( Parent == v13 && CDOTA_Buff::GetCaster(this) != 0 )
              {
                Caster = CDOTA_Buff::GetCaster(this);
                if ( Caster != 0 && (v24 = Caster->m_pEntity) != 0 )
                {
                  v25 = (v24->m_EHandle.m_Index >> 15) - (v24->m_flags & 1);
                  v26 = 0x7FFF;
                  if ( v24->m_EHandle.m_Index != -1 )
                    v26 = v24->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(this->m_hFracturingEntity.m_Index) = v26 | this->m_hFracturingEntity.m_Index & 0x8000;
                  this->m_hFracturingEntity.m_Index = (v25 << 15) | this->m_hFracturingEntity.m_Index & 0x7FFF;
                }
                else
                {
                  this->m_hFracturingEntity.m_Index = -1;
                }
              }
              CDOTA_Buff::StartIntervalThink(this, 0.0, v19);
            }
          }
        }
      }
    }
    CDOTA_BaseNPC::UnitEmitSound(Parent, "Hero_Ancient_Apparition.IceBlastRelease.Tick", 0.0, 0, 0);
  }
  return 1uLL;
}


// CDOTA_Unit_Hero_AncientApparition::OnDying  (line 1429, @0x00000000029cbc50, libserver.so)
// calls: CDOTA_BaseNPC::FindAbilityByName, CDOTA_Ability_AncientApparition_IceBlast::DestroyTracker, CDOTA_BaseNPC::SwapAbilities, CDOTA_BaseNPC::UnitEmitSound
// strings: "ancient_apparition_ice_blast", "ancient_apparition_ice_blast_release", "Hero_Ancient_Apparition.IceBlastRelease.Cast"
void __fastcall CDOTA_Unit_Hero_AncientApparition::OnDying(CDOTA_Unit_Hero_AncientApparition *const this)
{
  CDOTA_Ability_AncientApparition_IceBlast *AbilityByName; // rax

  if ( !this->m_bIsIllusion.m_Value )
  {
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(this, "ancient_apparition_ice_blast", 0);
    if ( AbilityByName != 0 && AbilityByName->m_iTrackerProjectile != -1 )
    {
      CDOTA_Ability_AncientApparition_IceBlast::DestroyTracker(AbilityByName);
      CDOTA_BaseNPC::SwapAbilities(this, "ancient_apparition_ice_blast", "ancient_apparition_ice_blast_release", 1, 0);
      CDOTA_BaseNPC::UnitEmitSound(this, "Hero_Ancient_Apparition.IceBlastRelease.Cast", 0.0, 0, 0);
    }
  }
}


