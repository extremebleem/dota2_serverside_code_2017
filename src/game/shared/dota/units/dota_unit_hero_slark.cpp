// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_slark.cpp:39
class CDOTA_Unit_Hero_Slark : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Slark(CDOTA_Unit_Hero_Slark &);
	CDOTA_Unit_Hero_Slark(CDOTA_Unit_Hero_Slark &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnIllusionPostSpawn(CDOTA_BaseNPC *);
	CDOTA_Unit_Hero_Slark();
	virtual ~CDOTA_Unit_Hero_Slark();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[491] OnIllusionPostSpawn
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_slark.cpp:105
class C_CDOTA_Unit_Hero_Slark_MapInstall {
	C_CDOTA_Unit_Hero_Slark_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_slark.cpp:140
class CDOTA_Ability_Slark_DarkPact : public CDOTABaseAbility {
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
	CDOTA_Ability_Slark_DarkPact(CDOTA_Ability_Slark_DarkPact &);
	CDOTA_Ability_Slark_DarkPact(CDOTA_Ability_Slark_DarkPact &);
	CDOTA_Ability_Slark_DarkPact();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Slark_DarkPact();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_slark.cpp:189
class CDOTA_Modifier_Slark_DarkPact : public CDOTA_Buff {
public:

	CDOTA_Modifier_Slark_DarkPact();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_Slark_DarkPact();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[60] OnDestroy
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_slark.cpp:213
class CDOTA_Modifier_Slark_DarkPact_Pulses : public CDOTA_Buff {
public:

private:

	int m_iPulseCount;  // +0xba8
	int radius;  // +0xbac
	int total_damage;  // +0xbb0
	int total_pulses;  // +0xbb4
	float pulse_interval;  // +0xbb8
	CDOTA_Modifier_Slark_DarkPact_Pulses();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Slark_DarkPact_Pulses();

	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_slark.cpp:304
class CDOTA_Ability_Slark_Pounce : public CDOTABaseAbility {
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
	CDOTA_Ability_Slark_Pounce(CDOTA_Ability_Slark_Pounce &);
	CDOTA_Ability_Slark_Pounce(CDOTA_Ability_Slark_Pounce &);
	CDOTA_Ability_Slark_Pounce();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual bool PlaysDefaultAnimWhenStolen();
	virtual const char * GetStolenActivityModifier();
	virtual float GetAOERadius();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Slark_Pounce();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[309] PlaysDefaultAnimWhenStolen
	// vtable[310] GetStolenActivityModifier
	// vtable[333] GetAOERadius
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_slark.cpp:321
class C_CDOTA_Ability_Slark_Pounce_MapInstall {
	C_CDOTA_Ability_Slark_Pounce_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_slark.cpp:366
class CDOTA_Modifier_Slark_Pounce : public CDOTA_Buff, public CHorizontalMotionController, public CVerticalMotionController {
public:

private:

	float m_flTotalTime;  // +0xbc4
	float m_flInitialVelocity;  // +0xbc8
	float m_flCurrentTimeHoriz;  // +0xbe4
	float m_flCurrentTimeVert;  // +0xbe8
	bool m_bInterrupted;  // +0xbec

	int pounce_distance;  // +0xbf0
	float pounce_speed;  // +0xbf4
	float pounce_acceleration;  // +0xbf8
	int pounce_radius;  // +0xbfc
	int pounce_damage;  // +0xc00
	float leash_duration;  // +0xc04
	CDOTA_Modifier_Slark_Pounce();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void CheckState(CDOTABuffState &);
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void UpdateVerticalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual void OnVerticalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsVerticalMotionValidToApply();
	virtual bool IsMotionController();
	virtual ~CDOTA_Modifier_Slark_Pounce();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[5] CheckState
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] UpdateVerticalMotion
	// vtable[91] OnHorizontalMotionInterrupted
	// vtable[92] OnVerticalMotionInterrupted
	// vtable[93] IsHorizontalMotionValidToApply
	// vtable[94] IsVerticalMotionValidToApply
	// vtable[21] IsMotionController
	// sizeof = 3080
};

// src/game/shared/dota/units/dota_unit_hero_slark.cpp:634
class CDOTA_Modifier_Slark_Pounce_Leash : public CDOTA_Buff {
public:

private:

	int leash_radius;  // +0xba8
	bool m_bEscaped;  // +0xbb8
	CDOTA_Modifier_Slark_Pounce_Leash();
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeed_Limit(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Slark_Pounce_Leash();

	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_slark.cpp:792
class CDOTA_Ability_Slark_EssenceShift : public CDOTABaseAbility {
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
	CDOTA_Ability_Slark_EssenceShift(CDOTA_Ability_Slark_EssenceShift &);
	CDOTA_Ability_Slark_EssenceShift(CDOTA_Ability_Slark_EssenceShift &);
	CDOTA_Ability_Slark_EssenceShift();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Slark_EssenceShift();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_slark.cpp:802
class C_CDOTA_Ability_Slark_EssenceShift_MapInstall {
	C_CDOTA_Ability_Slark_EssenceShift_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_slark.cpp:812
class CDOTA_Modifier_Slark_EssenceShift : public CDOTA_Buff {
public:

private:

	int agi_gain;  // +0xba8
	float duration;  // +0xbac
	CDOTA_Modifier_Slark_EssenceShift();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual bool DestroyOnExpire();
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	ModifierVariant_t GetModifierBonusStats_Agility(const CModifierParams &);
	ModifierVariant_t OnDeath(const CModifierParams &);
	virtual ~CDOTA_Modifier_Slark_EssenceShift();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[61] DestroyOnExpire
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_slark.cpp:956
class CDOTA_Modifier_Slark_EssenceShift_DebuffCounter : public CDOTA_Buff {
public:

	CDOTA_Modifier_Slark_EssenceShift_DebuffCounter();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnTooltip(const CModifierParams &);
	virtual ~CDOTA_Modifier_Slark_EssenceShift_DebuffCounter();

	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_slark.cpp:1005
class CDOTA_Modifier_Slark_EssenceShift_Debuff : public CDOTA_Buff {
public:

private:

	int stat_loss;  // +0xba8
	CDOTA_Modifier_Slark_EssenceShift_Debuff();
	virtual int GetAttributes();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnDurationExpired();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBonusStats_All(const CModifierParams &);
	virtual ~CDOTA_Modifier_Slark_EssenceShift_Debuff();

	// vtable[7] GetAttributes
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[55] OnDurationExpired
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_slark.cpp:1071
class CDOTA_Modifier_Slark_EssenceShift_Buff : public CDOTA_Buff {
public:

	CDOTA_Modifier_Slark_EssenceShift_Buff();
	virtual int GetAttributes();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnDurationExpired();
	virtual ~CDOTA_Modifier_Slark_EssenceShift_Buff();

	// vtable[7] GetAttributes
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[55] OnDurationExpired
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_slark.cpp:1108
class CDOTA_Ability_Slark_ShadowDance : public CDOTABaseAbility {
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
	CDOTA_Ability_Slark_ShadowDance(CDOTA_Ability_Slark_ShadowDance &);
	CDOTA_Ability_Slark_ShadowDance(CDOTA_Ability_Slark_ShadowDance &);
	CDOTA_Ability_Slark_ShadowDance();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual bool HasInvisibility();
	virtual float GetCooldown(int);
	virtual ~CDOTA_Ability_Slark_ShadowDance();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// vtable[326] HasInvisibility
	// vtable[242] GetCooldown
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_slark.cpp:1121
class C_CDOTA_Ability_Slark_ShadowDance_MapInstall {
	C_CDOTA_Ability_Slark_ShadowDance_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_slark.cpp:1166
class CDOTA_Modifier_Slark_ShadowDance_Aura : public CDOTA_Buff {
public:

private:

	int scepter_aoe;  // +0xba8
	CDOTA_Modifier_Slark_ShadowDance_Aura();
	virtual void OnCreated(KeyValues *);
	virtual bool IsHidden();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraRadius();
	virtual bool GetAuraEntityReject(CDOTA_BaseNPC *);
	virtual ~CDOTA_Modifier_Slark_ShadowDance_Aura();

	// vtable[57] OnCreated
	// vtable[11] IsHidden
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[41] GetAuraRadius
	// vtable[42] GetAuraEntityReject
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_slark.cpp:1210
class CDOTA_Modifier_Slark_ShadowDance_Passive : public CDOTA_Buff {
public:

private:

	float activation_delay;  // +0xba8
	float neutral_disable;  // +0xbac
	bool m_bPendingRefresh;  // +0xbb0

	float m_fPendingStateChangeTime;  // +0xbb4
	CDOTA_Modifier_Slark_ShadowDance_Passive();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Slark_ShadowDance_Passive();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// sizeof = 3024
};

// src/game/shared/dota/units/dota_unit_hero_slark.cpp:1354
class CDOTA_Modifier_Slark_ShadowDance_PassiveRegen : public CDOTA_Buff {
public:

private:

	int bonus_movement_speed;  // +0xba8
	int bonus_regen_pct;  // +0xbac
	CDOTA_Modifier_Slark_ShadowDance_PassiveRegen();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierHealthRegenPercentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Slark_ShadowDance_PassiveRegen();

	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_slark.cpp:1429
class CDOTA_Modifier_Slark_ShadowDance : public CDOTA_Modifier_Invisible {
public:

private:

	EHANDLE m_hVisibleEntity;  // +0xbb4
	int m_nFXIndex;  // +0xbb8
	CDOTA_Modifier_Slark_ShadowDance();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnAbilityExecuted(const CModifierParams &);
	virtual ModifierVariant_t OnAttack(const CModifierParams &);
	virtual ModifierVariant_t OnBreakInvisibility(const CModifierParams &);
	ModifierVariant_t GetModifierPersistentInvisibility(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual int GetPriority();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Slark_ShadowDance();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[90] OnAbilityExecuted
	// vtable[91] OnAttack
	// vtable[92] OnBreakInvisibility
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[6] GetPriority
	// vtable[5] CheckState
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_slark.cpp:1590
class CDOTA_Modifier_Slark_ShadowDance_Visual : public CDOTA_Buff {
public:

	bool m_bScepter;  // +0xba8
	CDOTA_Modifier_Slark_ShadowDance_Visual();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void CheckState(CDOTABuffState &);
	virtual void AddCustomTransmiterData(CDOTAModifierBuffTableEntry &);
	virtual ~CDOTA_Modifier_Slark_ShadowDance_Visual();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[5] CheckState
	// vtable[10] AddCustomTransmiterData
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Slark::~CDOTA_Unit_Hero_Slark  (line 39, @0x0000000002d2d100, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Slark::~CDOTA_Unit_Hero_Slark(CDOTA_Unit_Hero_Slark *const this)
{
  this->_vptr_IHandleEntity = &off_4629AF0;
  this->_vptr_INextBotEventResponder = &off_462AAD0;
  this->_vptr_CObstructionObject = &off_462AE00;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Slark::~CDOTA_Unit_Hero_Slark  (line 39, @0x0000000002d2d140, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Slark
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Slark::~CDOTA_Unit_Hero_Slark(CDOTA_Unit_Hero_Slark *const this)
{
  this->_vptr_IHandleEntity = &off_4629AF0;
  this->_vptr_INextBotEventResponder = &off_462AAD0;
  this->_vptr_CObstructionObject = &off_462AE00;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Slark::Schema_DynamicBinding  (line 41, @0x0000000002d1e010, libserver.so)
// globals: CDOTA_Unit_Hero_Slark::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Slark::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Slark *const this)
{
  return CDOTA_Unit_Hero_Slark::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Slark::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002d1e040, libserver.so)
// globals: CDOTA_Unit_Hero_Slark::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Slark::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Slark::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Slark::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Slark::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002d1e050, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Slark>
void __fastcall CDOTA_Unit_Hero_Slark::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Slark::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Slark::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002d1e070, libserver.so)
void __fastcall CDOTA_Unit_Hero_Slark::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Slark::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Slark::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002d1e090, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Slark::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Slark::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Slark::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002d1e0a0, libserver.so)
// globals: CDOTA_Unit_Hero_Slark::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Slark::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Slark::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Slark::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Slark::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002d24890, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Slark::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Slark::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Slark::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002d28830, libserver.so)  // inlines: CDOTA_Unit_Hero_Slark, Construct<CDOTA_Unit_Hero_Slark>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Slark::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Slark::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_4629AF0;
    *(p + 236) = &off_462AAD0;
    *(p + 257) = &off_462AE00;
  }
  return p;
}


// CDOTA_Unit_Hero_Slark::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002d35590, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Slark::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Slark::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Slark::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002d356c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Slark::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Slark::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Slark::GetEntityClassInternal  (line 41, @0x0000000002d4d210, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "npc_dota_hero_slark", "CDOTA_Unit_Hero_Slark"
// globals: `guard variable for'CDOTA_Unit_Hero_Slark::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SlarkClass, CDOTA_Unit_Hero_Slark::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SlarkClass, __dso_handle, CDOTA_Unit_Hero_Slark::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Slark::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SlarkClassInfo, CDOTA_Unit_Hero_Slark::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SlarkClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Slark::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Slark::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SlarkClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Slark::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SlarkClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Slark::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SlarkClass);
    CDOTA_Unit_Hero_Slark::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SlarkClass._vptr_CEntityClass = off_4629A70;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Slark::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SlarkClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Slark::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Slark::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SlarkClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_SlarkClass != 0 )
    return &CDOTA_Unit_Hero_Slark::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SlarkClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Slark::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SlarkClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Slark::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SlarkClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Slark::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SlarkClassInfo,
      "CDOTA_Unit_Hero_Slark",
      "npc_dota_hero_slark",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Slark::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SlarkClassInfo);
  }
  CDOTA_Unit_Hero_Slark::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SlarkClass.m_pClassInfo = &CDOTA_Unit_Hero_Slark::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SlarkClassInfo;
  CDOTA_Unit_Hero_Slark::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SlarkClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Slark::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SlarkClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_SlarkClass = &CDOTA_Unit_Hero_Slark::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SlarkClass;
  CDOTA_Unit_Hero_Slark::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_SlarkClassInfo.m_pClass = &CDOTA_Unit_Hero_Slark::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SlarkClass;
  CDOTA_Unit_Hero_Slark::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SlarkClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_SlarkClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Slark::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_SlarkClass;
}


// CDOTA_Unit_Hero_Slark::YouForgotToImplementOrDeclareServerClass  (line 105, @0x0000000002cc9110, libserver.so)
int __fastcall CDOTA_Unit_Hero_Slark::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Slark *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Slark::GetServerClass  (line 105, @0x0000000002cdeaf0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Slark::GetServerClass(CDOTA_Unit_Hero_Slark *const this)
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


// CDOTA_Unit_Hero_Slark::OnIllusionPostSpawn  (line 113, @0x0000000002ccc130, libserver.so)  // inlines: ToDOTABaseNPCHero
// calls: CDOTA_BaseNPC::FindModifierByName, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_slark_essence_shift"
void __fastcall CDOTA_Unit_Hero_Slark::OnIllusionPostSpawn(CDOTA_Unit_Hero_Slark *const this, CDOTA_BaseNPC *pOriginal)
{
  CDOTA_Buff *ModifierByName; // r13
  CDOTA_Buff *v4; // rax
  CDOTA_Buff *v5; // r12
  void (__fastcall *v6)(CDOTA_Buff *, _QWORD); // r14
  unsigned int v7; // eax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  if ( pOriginal != 0 && (pOriginal->m_iUnitType & 1) != 0 )
  {
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(pOriginal, "modifier_slark_essence_shift", 0);
    if ( ModifierByName != 0 )
    {
      KeyValues::KeyValues(&kv, "modifier_slark_essence_shift");
      v4 = CDOTA_BaseNPC::AddNewModifier(this, this, 0, "modifier_slark_essence_shift", &kv, 0);
      v5 = v4;
      if ( v4 != 0 )
      {
        v6 = *(v4->_vptr_CDOTA_Buff + 28);
        v7 = (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName);
        v6(v5, v7);
      }
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Ability_Slark_DarkPact::~CDOTA_Ability_Slark_DarkPact  (line 140, @0x0000000002d2bd20, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Slark_DarkPact::~CDOTA_Ability_Slark_DarkPact(CDOTA_Ability_Slark_DarkPact *const this)
{
  this->_vptr_IHandleEntity = &off_462AED0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Slark_DarkPact::~CDOTA_Ability_Slark_DarkPact  (line 140, @0x0000000002d2bd40, libserver.so)  // inlines: ~CDOTA_Ability_Slark_DarkPact
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Slark_DarkPact::~CDOTA_Ability_Slark_DarkPact(CDOTA_Ability_Slark_DarkPact *const this)
{
  this->_vptr_IHandleEntity = &off_462AED0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Slark_DarkPact::Schema_DynamicBinding  (line 142, @0x0000000002d1e0b0, libserver.so)
// globals: CDOTA_Ability_Slark_DarkPact::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Slark_DarkPact::Schema_DynamicBinding(
        const CDOTA_Ability_Slark_DarkPact *const this)
{
  return CDOTA_Ability_Slark_DarkPact::s_pSchemaBinding;
}


// CDOTA_Ability_Slark_DarkPact::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 142, @0x0000000002d1e0c0, libserver.so)
// globals: CDOTA_Ability_Slark_DarkPact::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Slark_DarkPact::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Slark_DarkPact::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Slark_DarkPact::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Slark_DarkPact::CEntityInstanceEntityClass::DestructInstance  (line 142, @0x0000000002d1e0d0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Slark_DarkPact>
void __fastcall CDOTA_Ability_Slark_DarkPact::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Slark_DarkPact::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Slark_DarkPact::CEntityInstanceEntityClass::FreeInstance  (line 142, @0x0000000002d1e0f0, libserver.so)
void __fastcall CDOTA_Ability_Slark_DarkPact::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Slark_DarkPact::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Slark_DarkPact::CEntityInstanceEntityClass::CanAllocate  (line 142, @0x0000000002d1e110, libserver.so)
bool __fastcall CDOTA_Ability_Slark_DarkPact::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Slark_DarkPact::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Slark_DarkPact::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 142, @0x0000000002d1e120, libserver.so)
// globals: CDOTA_Ability_Slark_DarkPact::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Slark_DarkPact::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Slark_DarkPact::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Slark_DarkPact::s_pSchemaBinding;
}


// CDOTA_Ability_Slark_DarkPact::CEntityInstanceEntityClass::AllocateInstance  (line 142, @0x0000000002d248d0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Slark_DarkPact::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Slark_DarkPact::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Slark_DarkPact::CEntityInstanceEntityClass::ConstructInstance  (line 142, @0x0000000002d29100, libserver.so)  // inlines: CDOTA_Ability_Slark_DarkPact, Construct<CDOTA_Ability_Slark_DarkPact>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Slark_DarkPact::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Slark_DarkPact::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_462AED0;
  }
  return p;
}


// CDOTA_Ability_Slark_DarkPact::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 142, @0x0000000002d341d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Slark_DarkPact::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Slark_DarkPact::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Slark_DarkPact::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 142, @0x0000000002d341f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Slark_DarkPact::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Slark_DarkPact::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Slark_DarkPact::GetEntityClassInternal  (line 142, @0x0000000002d485f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "CDOTA_Ability_Slark_DarkPact"
// globals: `guard variable for'CDOTA_Ability_Slark_DarkPact::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_DarkPactClass, CDOTA_Ability_Slark_DarkPact::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_DarkPactClass, __dso_handle, CDOTA_Ability_Slark_DarkPact::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Slark_DarkPact::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_DarkPactClassInfo, CDOTA_Ability_Slark_DarkPact::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_DarkPactClassInfo
CEntityClass *__cdecl CDOTA_Ability_Slark_DarkPact::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Slark_DarkPact::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_DarkPactClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Slark_DarkPact::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_DarkPactClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Slark_DarkPact::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_DarkPactClass);
    CDOTA_Ability_Slark_DarkPact::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_DarkPactClass._vptr_CEntityClass = off_462AE50;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Slark_DarkPact::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_DarkPactClass);
    __cxa_atexit(
      CDOTA_Ability_Slark_DarkPact::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Slark_DarkPact::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_DarkPactClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Slark_DarkPactClass != 0 )
    return &CDOTA_Ability_Slark_DarkPact::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_DarkPactClass;
  if ( `guard variable for'CDOTA_Ability_Slark_DarkPact::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_DarkPactClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Slark_DarkPact::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_DarkPactClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Slark_DarkPact::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_DarkPactClassInfo,
      "CDOTA_Ability_Slark_DarkPact",
      "slark_dark_pact",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Slark_DarkPact::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_DarkPactClassInfo);
  }
  CDOTA_Ability_Slark_DarkPact::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_DarkPactClass.m_pClassInfo = &CDOTA_Ability_Slark_DarkPact::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_DarkPactClassInfo;
  CDOTA_Ability_Slark_DarkPact::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_DarkPactClass.m_pBaseClassInfo = CDOTA_Ability_Slark_DarkPact::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_DarkPactClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Slark_DarkPactClass = &CDOTA_Ability_Slark_DarkPact::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_DarkPactClass;
  CDOTA_Ability_Slark_DarkPact::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_DarkPactClassInfo.m_pClass = &CDOTA_Ability_Slark_DarkPact::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_DarkPactClass;
  CDOTA_Ability_Slark_DarkPact::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_DarkPactClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Slark_DarkPactClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Slark_DarkPact::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_DarkPactClass;
}


// CDOTA_Ability_Slark_DarkPact::OnSpellStart  (line 154, @0x0000000002cf4330, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, GetLevelSpecialValueFor<float>, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CDOTA_BaseNPC::GetOpposingTeamNumber, GetGlobalTeam, CRecipientFilter::RemoveRecipientsByTeam, CRecipientFilter::AddRecipientsByTeam (22 total)
// strings: "modifier_slark_dark_pact", "particles/units/heroes/hero_slark/slark_dark_pact_start.vpcf", "attach_hitloc", "Hero_Slark.DarkPact.PreCast"
void __fastcall CDOTA_Ability_Slark_DarkPact::OnSpellStart(CDOTA_Ability_Slark_DarkPact *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  int OpposingTeamNumber; // eax
  CTeam *GlobalTeam; // rax
  CTeam *v8; // rax
  CDOTA_BaseNPC *v9; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v11; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_ParticleManager *v13; // rax
  CDOTA_BaseNPC *v14; // r15
  CDOTA_ParticleManager *v15; // rax
  CDOTA_ParticleManager *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *delay; // [rsp+8h] [rbp-198h]
  KeyValues kv; // [rsp+10h] [rbp-190h] BYREF
  CReliableBroadcastRecipientFilter filter; // [rsp+30h] [rbp-170h] BYREF
  unsigned __int64 v21; // [rsp+168h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "delay", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_slark_dark_pact");
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_slark_dark_pact", &kv, 0);
  CRecipientFilter::CRecipientFilter(&filter);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::AddAllPlayers(&filter);
  filter._vptr_IRecipientFilter = &off_3FCB130;
  CRecipientFilter::MakeReliable(&filter);
  v5 = CDOTABaseAbility::GetCaster(this);
  OpposingTeamNumber = CDOTA_BaseNPC::GetOpposingTeamNumber(v5);
  GlobalTeam = GetGlobalTeam(OpposingTeamNumber);
  CRecipientFilter::RemoveRecipientsByTeam(&filter, GlobalTeam);
  v8 = GetGlobalTeam(1);
  CRecipientFilter::AddRecipientsByTeam(&filter, v8);
  v9 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v9) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_slark/slark_dark_pact_start.vpcf",
                  2,
                  v9,
                  &filter,
                  0);
  v11 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
  delay = CDOTABaseAbility::GetCaster(this);
  v13 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v13, v9, 0, delay, 5, "attach_hitloc", *AbsOrigin, 1);
  v14 = CDOTABaseAbility::GetCaster(this);
  v15 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v15, v9, 1, v14, 1, 0, vec3_invalid, 1);
  v16 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v16, v9);
  v17 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(4, "Hero_Slark.DarkPact.PreCast", v17);
  filter._vptr_IRecipientFilter = &off_3FB63F0;
  CRecipientFilter::~CRecipientFilter(&filter);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Slark_DarkPact::GetAbilityDamageToTargetOverInterval  (line 179, @0x0000000002cfea80, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "total_damage"
__int64 __fastcall CDOTA_Ability_Slark_DarkPact::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Slark_DarkPact *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "total_damage", -1, 0);
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Modifier_Slark_DarkPact::~CDOTA_Modifier_Slark_DarkPact  (line 189, @0x0000000002d27ee0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Slark_DarkPact::~CDOTA_Modifier_Slark_DarkPact(
        CDOTA_Modifier_Slark_DarkPact *const this)
{
  this->_vptr_CDOTA_Buff = &off_462B990;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Slark_DarkPact::~CDOTA_Modifier_Slark_DarkPact  (line 189, @0x0000000002d27f00, libserver.so)  // inlines: ~CDOTA_Modifier_Slark_DarkPact
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Slark_DarkPact::~CDOTA_Modifier_Slark_DarkPact(
        CDOTA_Modifier_Slark_DarkPact *const this)
{
  this->_vptr_CDOTA_Buff = &off_462B990;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Slark_DarkPact::IsHidden  (line 194, @0x0000000002d1e130, libserver.so)
bool __fastcall CDOTA_Modifier_Slark_DarkPact::IsHidden(CDOTA_Modifier_Slark_DarkPact *const this)
{
  return 1;
}


// CDOTA_Modifier_Slark_DarkPact::IsPurgable  (line 195, @0x0000000002d1e140, libserver.so)
bool __fastcall CDOTA_Modifier_Slark_DarkPact::IsPurgable(CDOTA_Modifier_Slark_DarkPact *const this)
{
  return 0;
}


// CDOTA_Modifier_Slark_DarkPact::OnDestroy  (line 203, @0x0000000002ccc6e0, libserver.so)
// calls: KeyValues::KeyValues, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_slark_dark_pact_pulses"
void __fastcall CDOTA_Modifier_Slark_DarkPact::OnDestroy(CDOTA_Modifier_Slark_DarkPact *const this)
{
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_slark_dark_pact_pulses");
  Ability = CDOTA_Buff::GetAbility(this);
  Caster = CDOTA_Buff::GetCaster(this);
  v4 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, Ability, "modifier_slark_dark_pact_pulses", &kv, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Slark_DarkPact_Pulses::~CDOTA_Modifier_Slark_DarkPact_Pulses  (line 213, @0x0000000002d27e90, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Slark_DarkPact_Pulses::~CDOTA_Modifier_Slark_DarkPact_Pulses(
        CDOTA_Modifier_Slark_DarkPact_Pulses *const this)
{
  this->_vptr_CDOTA_Buff = &off_462BCB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Slark_DarkPact_Pulses::~CDOTA_Modifier_Slark_DarkPact_Pulses  (line 213, @0x0000000002d27eb0, libserver.so)  // inlines: ~CDOTA_Modifier_Slark_DarkPact_Pulses
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Slark_DarkPact_Pulses::~CDOTA_Modifier_Slark_DarkPact_Pulses(
        CDOTA_Modifier_Slark_DarkPact_Pulses *const this)
{
  this->_vptr_CDOTA_Buff = &off_462BCB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Slark_DarkPact_Pulses::IsPurgable  (line 218, @0x0000000002d1e150, libserver.so)
bool __fastcall CDOTA_Modifier_Slark_DarkPact_Pulses::IsPurgable(CDOTA_Modifier_Slark_DarkPact_Pulses *const this)
{
  return 0;
}


// CDOTA_Modifier_Slark_DarkPact_Pulses::IsHidden  (line 219, @0x0000000002d1e160, libserver.so)
bool __fastcall CDOTA_Modifier_Slark_DarkPact_Pulses::IsHidden(CDOTA_Modifier_Slark_DarkPact_Pulses *const this)
{
  return 1;
}


// CDOTA_Modifier_Slark_DarkPact_Pulses::OnCreated  (line 242, @0x0000000002cfb200, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, Vector
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_Buff::GetParent, CDOTA_BaseNPC::StartGesture (14 total)
// strings: "total_damage", "total_pulses", "pulse_interval", "particles/units/heroes/hero_slark/slark_dark_pact_pulses.vpcf", "attach_hitloc", "particles/units/heroes/hero_slark/slark_dark_pact_pulses_body.vpcf" (7 total)
void __fastcall CDOTA_Modifier_Slark_DarkPact_Pulses::OnCreated(
        CDOTA_Modifier_Slark_DarkPact_Pulses *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v11; // r14
  CDOTA_ParticleManager *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  const Vector *v14; // r13
  CDOTA_BaseNPC *v15; // r14
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  CDOTA_BaseNPC *v19; // r12
  CDOTA_ParticleManager *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  const Vector *v22; // r13
  CDOTA_BaseNPC *v23; // r14
  CDOTA_ParticleManager *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  const Vector *v26; // r13
  CDOTA_BaseNPC *v27; // r14
  CDOTA_ParticleManager *v28; // rax
  CDOTA_ParticleManager *v29; // rax
  CDOTA_ParticleManager *v30; // rax
  CDOTA_BaseNPC *Parent; // rax
  float v32; // xmm1_4
  CDOTA_BaseNPC *v33; // rax
  double v34; // [rsp+10h] [rbp-30h]

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->radius, "radius");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->total_damage, "total_damage");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->total_pulses, "total_pulses");
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
    this->pulse_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "pulse_interval", -1, 0);
  else
    this->pulse_interval = 0.0;
  this->m_iPulseCount = 0;
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_slark/slark_dark_pact_pulses.vpcf",
               2,
               0,
               0,
               0);
  Caster = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  v11 = CDOTA_Buff::GetCaster(this);
  v12 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v12, Particle, 0, v11, 5, "attach_hitloc", *AbsOrigin, 1);
  v13 = CDOTA_Buff::GetCaster(this);
  v14 = CBaseEntity::GetAbsOrigin(v13);
  v15 = CDOTA_Buff::GetCaster(this);
  v16 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v16, Particle, 1, v15, 1, 0, *v14, 1);
  *&v34 = this->radius;
  *(&v34 + 1) = *&v34;
  v17 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v17, Particle, 2, v34, *&v34);
  v18 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v18, Particle);
  v19 = CDOTA_Buff::GetCaster(this);
  v20 = GetParticleManager();
  LODWORD(v19) = CDOTA_ParticleManager::CreateParticle(
                   v20,
                   "particles/units/heroes/hero_slark/slark_dark_pact_pulses_body.vpcf",
                   2,
                   v19,
                   0,
                   0);
  v21 = CDOTA_Buff::GetCaster(this);
  v22 = CBaseEntity::GetAbsOrigin(v21);
  v23 = CDOTA_Buff::GetCaster(this);
  v24 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v24, v19, 0, v23, 5, "attach_hitloc", *v22, 1);
  v25 = CDOTA_Buff::GetCaster(this);
  v26 = CBaseEntity::GetAbsOrigin(v25);
  v27 = CDOTA_Buff::GetCaster(this);
  v28 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v28, v19, 1, v27, 1, 0, *v26, 1);
  *&v34 = this->radius;
  *(&v34 + 1) = *&v34;
  v29 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v29, v19, 2, v34, *&v34);
  v30 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v30, v19);
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::StartGesture(Parent, 1510, 0.1, 0.1, 9, 0, 1.0);
  CDOTA_Buff::StartIntervalThink(this, this->pulse_interval, v32);
  (*(this->_vptr_CDOTA_Buff + 56))(this);
  v33 = CDOTA_Buff::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Slark.DarkPact.Cast", v33);
}


// CDOTA_Modifier_Slark_DarkPact_Pulses::OnIntervalThink  (line 273, @0x0000000002cf0680, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, Purge, EconEntity_OnOwnerKillEaterEvent, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, ApplyDamage, CDOTA_Buff::Destroy, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: INVALID_ITEM_DEF_INDEX, CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Slark_DarkPact_Pulses::OnIntervalThink(CDOTA_Modifier_Slark_DarkPact_Pulses *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *Ability; // r12
  CDOTA_BaseNPC *v4; // rax
  int v5; // r12d
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC_Hero *v7; // rdi
  __m128i v8; // xmm2
  float v9; // r14d
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *v11; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v13; // rax
  __m128i v14; // xmm3
  __int64 i; // r12
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_BaseNPC *v17; // rax
  CDOTABaseAbility *v18; // r14
  CHandle<CBaseEntity> *v19; // rdx
  uint32 m_Index; // eax
  __int16 v21; // cx
  CEntityIdentity *v22; // rdx
  CEntityIdentity *v23; // rdx
  float v24; // r14d
  CDOTABaseAbility *v25; // r13
  CDOTA_BaseNPC *v26; // r12
  CDOTA_BaseNPC *v27; // rax
  int v28; // eax
  bool v29; // cc
  float flDamage; // [rsp+1Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+20h] [rbp-50h] BYREF

  Caster = CDOTA_Buff::GetCaster(this);
  if ( (*(Caster->_vptr_IHandleEntity + 408))(Caster) != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    v4 = CDOTA_Buff::GetCaster(this);
    v5 = Purge(v4, Ability, 28);
    v6 = CDOTA_Buff::GetCaster(this);
    if ( v6 != 0 && (v6->m_iUnitType & 1) != 0 )
      v7 = v6;
    else
      v7 = 0;
    EconEntity_OnOwnerKillEaterEvent(
      v7,
      0,
      kill_eater_event_t::kKillEaterEventType_Slark_DebuffsPurged,
      v5,
      INVALID_ITEM_DEF_INDEX);
    *v8.m128i_i32 = this->radius;
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    v9 = COERCE_FLOAT(_mm_cvtsi128_si32(v8));
    Parent = CDOTA_Buff::GetParent(this);
    v11 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
    v13 = CDOTA_Buff::GetParent(this);
    FindUnitsInRadius(v13->m_iTeamNum.m_Value, AbsOrigin, Parent, v9, &entities, 2, 19, 0, 0, 0);
    for ( i = 0; entities.m_Size > i; ++i )
    {
      flDamage = (this->total_damage / this->total_pulses);
      v18 = CDOTA_Buff::GetAbility(this);
      v19 = &entities.m_Memory.m_pMemory[i];
      m_Index = v19->m_Index;
      if ( v19->m_Index + 2 <= 1
        || (v21 = v19->m_Index,
            (v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v19->m_Index) >> 9) & 0x3F]) == 0)
        || (v23 = &v22[v21 & 0x1FF]) == 0
        || m_Index != v23->m_EHandle.m_Index
        || (m_pInstance = v23->m_pInstance, v23->m_pInstance == 0)
        || !m_pInstance->m_bIsDOTANPC )
      {
        m_pInstance = 0;
      }
      v17 = CDOTA_Buff::GetParent(this);
      ApplyDamage(v17, m_pInstance, v18, flDamage, 2, 0);
    }
    *v14.m128i_i32 = (this->total_damage / this->total_pulses / 2);
    v24 = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
    v25 = CDOTA_Buff::GetAbility(this);
    v26 = CDOTA_Buff::GetCaster(this);
    v27 = CDOTA_Buff::GetParent(this);
    ApplyDamage(v27, v26, v25, v24, 2, 128);
    v28 = this->m_iPulseCount + 1;
    v29 = v28 < this->total_pulses;
    this->m_iPulseCount = v28;
    if ( !v29 )
      CDOTA_Buff::Destroy(this, 0, 0, 0);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
}


// CDOTA_Ability_Slark_Pounce::~CDOTA_Ability_Slark_Pounce  (line 304, @0x0000000002d2bd70, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Slark_Pounce::~CDOTA_Ability_Slark_Pounce(CDOTA_Ability_Slark_Pounce *const this)
{
  this->_vptr_IHandleEntity = &off_462C010;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Slark_Pounce::~CDOTA_Ability_Slark_Pounce  (line 304, @0x0000000002d2bd90, libserver.so)  // inlines: ~CDOTA_Ability_Slark_Pounce
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Slark_Pounce::~CDOTA_Ability_Slark_Pounce(CDOTA_Ability_Slark_Pounce *const this)
{
  this->_vptr_IHandleEntity = &off_462C010;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Slark_Pounce::Schema_DynamicBinding  (line 306, @0x0000000002d1e170, libserver.so)
// globals: CDOTA_Ability_Slark_Pounce::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Slark_Pounce::Schema_DynamicBinding(
        const CDOTA_Ability_Slark_Pounce *const this)
{
  return CDOTA_Ability_Slark_Pounce::s_pSchemaBinding;
}


// CDOTA_Ability_Slark_Pounce::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 306, @0x0000000002d1e180, libserver.so)
// globals: CDOTA_Ability_Slark_Pounce::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Slark_Pounce::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Slark_Pounce::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Slark_Pounce::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Slark_Pounce::CEntityInstanceEntityClass::DestructInstance  (line 306, @0x0000000002d1e190, libserver.so)  // inlines: Destruct<CDOTA_Ability_Slark_Pounce>
void __fastcall CDOTA_Ability_Slark_Pounce::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Slark_Pounce::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Slark_Pounce::CEntityInstanceEntityClass::FreeInstance  (line 306, @0x0000000002d1e1b0, libserver.so)
void __fastcall CDOTA_Ability_Slark_Pounce::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Slark_Pounce::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Slark_Pounce::CEntityInstanceEntityClass::CanAllocate  (line 306, @0x0000000002d1e1d0, libserver.so)
bool __fastcall CDOTA_Ability_Slark_Pounce::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Slark_Pounce::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Slark_Pounce::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 306, @0x0000000002d1e1e0, libserver.so)
// globals: CDOTA_Ability_Slark_Pounce::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Slark_Pounce::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Slark_Pounce::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Slark_Pounce::s_pSchemaBinding;
}


// CDOTA_Ability_Slark_Pounce::CEntityInstanceEntityClass::AllocateInstance  (line 306, @0x0000000002d24910, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Slark_Pounce::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Slark_Pounce::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Slark_Pounce::CEntityInstanceEntityClass::ConstructInstance  (line 306, @0x0000000002d29130, libserver.so)  // inlines: CDOTA_Ability_Slark_Pounce, Construct<CDOTA_Ability_Slark_Pounce>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Slark_Pounce::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Slark_Pounce::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_462C010;
  }
  return p;
}


// CDOTA_Ability_Slark_Pounce::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 306, @0x0000000002d34220, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Slark_Pounce::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Slark_Pounce::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Slark_Pounce::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 306, @0x0000000002d34240, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Slark_Pounce::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Slark_Pounce::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Slark_Pounce::GetEntityClassInternal  (line 306, @0x0000000002d48740, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "CDOTA_Ability_Slark_Pounce"
// globals: `guard variable for'CDOTA_Ability_Slark_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_PounceClass, CDOTA_Ability_Slark_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_PounceClass, __dso_handle, CDOTA_Ability_Slark_Pounce::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Slark_Pounce::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_PounceClassInfo, CDOTA_Ability_Slark_Pounce::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_PounceClassInfo
CEntityClass *__cdecl CDOTA_Ability_Slark_Pounce::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Slark_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_PounceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Slark_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_PounceClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Slark_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_PounceClass);
    CDOTA_Ability_Slark_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_PounceClass._vptr_CEntityClass = off_462BF90;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Slark_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_PounceClass);
    __cxa_atexit(
      CDOTA_Ability_Slark_Pounce::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Slark_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_PounceClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Slark_PounceClass != 0 )
    return &CDOTA_Ability_Slark_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_PounceClass;
  if ( `guard variable for'CDOTA_Ability_Slark_Pounce::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_PounceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Slark_Pounce::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_PounceClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Slark_Pounce::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_PounceClassInfo,
      "CDOTA_Ability_Slark_Pounce",
      "slark_pounce",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Slark_Pounce::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_PounceClassInfo);
  }
  CDOTA_Ability_Slark_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_PounceClass.m_pClassInfo = &CDOTA_Ability_Slark_Pounce::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_PounceClassInfo;
  CDOTA_Ability_Slark_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_PounceClass.m_pBaseClassInfo = CDOTA_Ability_Slark_Pounce::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_PounceClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Slark_PounceClass = &CDOTA_Ability_Slark_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_PounceClass;
  CDOTA_Ability_Slark_Pounce::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_PounceClassInfo.m_pClass = &CDOTA_Ability_Slark_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_PounceClass;
  CDOTA_Ability_Slark_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_PounceClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Slark_PounceClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Slark_Pounce::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_PounceClass;
}


// CDOTA_Ability_Slark_Pounce::PlaysDefaultAnimWhenStolen  (line 312, @0x0000000002d1e1f0, libserver.so)
bool __fastcall CDOTA_Ability_Slark_Pounce::PlaysDefaultAnimWhenStolen(CDOTA_Ability_Slark_Pounce *const this)
{
  return 0;
}


// CDOTA_Ability_Slark_Pounce::GetStolenActivityModifier  (line 313, @0x0000000002d1e200, libserver.so)
const char *__fastcall CDOTA_Ability_Slark_Pounce::GetStolenActivityModifier(CDOTA_Ability_Slark_Pounce *const this)
{
  return "leap";
}


// CDOTA_Ability_Slark_Pounce::GetAOERadius  (line 315, @0x0000000002d470b0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "pounce_distance"
float __fastcall CDOTA_Ability_Slark_Pounce::GetAOERadius(CDOTA_Ability_Slark_Pounce *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "pounce_distance", -1, 0);
}


// CDOTA_Ability_Slark_Pounce::YouForgotToImplementOrDeclareServerClass  (line 321, @0x0000000002cc9120, libserver.so)
int __fastcall CDOTA_Ability_Slark_Pounce::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Slark_Pounce *const this)
{
  return 0;
}


// CDOTA_Ability_Slark_Pounce::GetServerClass  (line 321, @0x0000000002cde9b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Slark_Pounce::GetServerClass(CDOTA_Ability_Slark_Pounce *const this)
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


// CDOTA_Ability_Slark_Pounce::OnSpellStart  (line 330, @0x0000000002cce310, libserver.so)
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_slark_pounce", "particles/units/heroes/hero_slark/slark_pounce_start.vpcf", "Hero_Slark.Pounce.Cast"
void __fastcall CDOTA_Ability_Slark_Pounce::OnSpellStart(CDOTA_Ability_Slark_Pounce *const this)
{
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v7; // rax
  CDOTA_ParticleManager *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-28h]
  Vector vPos; // 0:^0.12

  v11 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_slark_pounce");
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_slark_pounce", &kv, 0);
  v4 = CDOTABaseAbility::GetCaster(this);
  vPos = *CBaseEntity::GetAbsOrigin(v4);
  v5 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v5) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_slark/slark_pounce_start.vpcf",
                  8,
                  0,
                  0,
                  v5);
  v7 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v7, v5, 0, *&vPos.x, vPos.z);
  v8 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v8, v5);
  v9 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Slark.Pounce.Cast", v9);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Slark_Pounce::GetAbilityDamageToTargetOverInterval  (line 347, @0x0000000002cfeae0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "pounce_damage"
__int64 __fastcall CDOTA_Ability_Slark_Pounce::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Slark_Pounce *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "pounce_damage", -1, 0);
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Ability_Slark_Pounce::GetSlowDuration  (line 357, @0x0000000002cfeb40, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "leash_duration"
float __fastcall CDOTA_Ability_Slark_Pounce::GetSlowDuration(CDOTA_Ability_Slark_Pounce *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "leash_duration", -1, 0);
}


// CDOTA_Modifier_Slark_Pounce::~CDOTA_Modifier_Slark_Pounce  (line 366, @0x0000000002d27e10, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Slark_Pounce::~CDOTA_Modifier_Slark_Pounce(CDOTA_Modifier_Slark_Pounce *const this)
{
  this->_vptr_CDOTA_Buff = &off_462CAD0;
  this->_vptr_CHorizontalMotionController = &off_462CDD8;
  this->_vptr_CVerticalMotionController = &off_462CE18;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Slark_Pounce::~CDOTA_Modifier_Slark_Pounce  (line 366, @0x0000000002d27e40, libserver.so)  // inlines: ~CDOTA_Modifier_Slark_Pounce
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Slark_Pounce::~CDOTA_Modifier_Slark_Pounce(CDOTA_Modifier_Slark_Pounce *const this)
{
  this->_vptr_CDOTA_Buff = &off_462CAD0;
  this->_vptr_CHorizontalMotionController = &off_462CDD8;
  this->_vptr_CVerticalMotionController = &off_462CE18;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Slark_Pounce::IsHidden  (line 376, @0x0000000002d1e210, libserver.so)
bool __fastcall CDOTA_Modifier_Slark_Pounce::IsHidden(CDOTA_Modifier_Slark_Pounce *const this)
{
  return 1;
}


// CDOTA_Modifier_Slark_Pounce::IsPurgable  (line 377, @0x0000000002d1e220, libserver.so)
bool __fastcall CDOTA_Modifier_Slark_Pounce::IsPurgable(CDOTA_Modifier_Slark_Pounce *const this)
{
  return 0;
}


// CDOTA_Modifier_Slark_Pounce::IsHorizontalMotionValidToApply  (line 388, @0x0000000002d1e230, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Slark_Pounce::IsHorizontalMotionValidToApply(CDOTA_Modifier_Slark_Pounce *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Slark_Pounce::IsVerticalMotionValidToApply  (line 389, @0x0000000002d1e260, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Slark_Pounce::IsVerticalMotionValidToApply(CDOTA_Modifier_Slark_Pounce *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Slark_Pounce::IsMotionController  (line 391, @0x0000000002d1e290, libserver.so)
bool __fastcall CDOTA_Modifier_Slark_Pounce::IsMotionController(CDOTA_Modifier_Slark_Pounce *const this)
{
  return 1;
}


// CDOTA_Modifier_Slark_Pounce::OnCreated  (line 420, @0x0000000002cfb550, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, VectorAdd, VectorMultiply, operator*, operator+, operator=
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, CDOTA_BaseNPC::StartGesture, CBaseEntity::GetAbsOrigin, GetPositionOnGround, CDOTALocomotor::ApplyHorizontalMotionController, CDOTA_Buff::Destroy, CDOTALocomotor::ApplyVerticalMotionController, CGridNavBase::ClampToWorldEdge, GetGroundHeight (16 total)
// strings: "pounce_distance", "pounce_speed", "pounce_acceleration", "pounce_radius", "pounce_damage", "leash_duration" (10 total)
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_Modifier_Slark_Pounce::OnCreated(CDOTA_Modifier_Slark_Pounce *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v10; // r12
  CDOTA_BaseNPC *v11; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  CDOTALocomotor *v15; // rax
  CDOTA_BaseNPC *v16; // rax
  CDOTALocomotor *v17; // rax
  float pounce_distance; // xmm2_4
  float y; // xmm1_4
  float v20; // xmm0_4
  CDOTA_BaseNPC *v21; // rax
  float v22; // xmm1_4
  __int64 v23; // xmm0_8
  CDOTA_BaseNPC *v24; // rax
  float v25; // xmm0_4
  float v26; // xmm2_4
  CDOTA_BaseNPC *v27; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v29; // r13
  CDOTA_ParticleManager *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  const Vector *v32; // r13
  CDOTA_BaseNPC *v33; // r14
  CDOTA_ParticleManager *v34; // rax
  CDOTA_BaseNPC *v35; // rax
  const Vector *v36; // r13
  CDOTA_BaseNPC *v37; // r14
  CDOTA_ParticleManager *v38; // rax
  CDOTA_BaseNPC *v39; // rax
  const Vector *v40; // r13
  CDOTA_BaseNPC *v41; // r14
  CDOTA_ParticleManager *v42; // rax
  float flPounceDist; // [rsp+Ch] [rbp-44h]
  _BYTE v44[24]; // [rsp+10h] [rbp-40h] OVERLAPPED BYREF
  vec_t z; // [rsp+28h] [rbp-28h]
  Vector PositionOnGround; // 0:kr00_12.12

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->pounce_distance, "pounce_distance");
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    this->pounce_speed = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "pounce_speed", -1, 0);
  else
    this->pounce_speed = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
    this->pounce_acceleration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "pounce_acceleration", -1, 0);
  else
    this->pounce_acceleration = 0.0;
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->pounce_radius, "pounce_radius");
  v7 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v7, &this->pounce_damage, "pounce_damage");
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 != 0 )
    this->leash_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8, "leash_duration", -1, 0);
  else
    this->leash_duration = 0.0;
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::StartGesture(Parent, 1604, 0.0, 0.5, 9, 0, 1.0);
  v10 = CDOTA_Buff::GetParent(this);
  v11 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
  PositionOnGround = GetPositionOnGround(AbsOrigin, v10);
  *&v44[16] = *&PositionOnGround.x;
  this->m_vStartPosition.z = PositionOnGround.z;
  z = PositionOnGround.z;
  this->m_vStartPosition.x = PositionOnGround.x;
  this->m_vStartPosition.y = *&v44[20];
  v13 = CDOTA_Buff::GetParent(this);
  (*(v13->_vptr_IHandleEntity + 61))(v13, &this->m_vTargetHorizontalDirection, 0, 0);
  v14 = CDOTA_Buff::GetParent(this);
  v15 = (*(v14->_vptr_IHandleEntity + 376))(v14);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v15, &this->CHorizontalMotionController, 0)
    && (v16 = CDOTA_Buff::GetParent(this),
        v17 = (*(v16->_vptr_IHandleEntity + 376))(v16),
        CDOTALocomotor::ApplyVerticalMotionController(v17, &this->CVerticalMotionController, 0)) )
  {
    pounce_distance = this->pounce_distance;
    this->m_flCurrentTimeHoriz = 0.0;
    y = this->m_vTargetHorizontalDirection.y;
    this->m_flCurrentTimeVert = 0.0;
    v20 = this->m_vTargetHorizontalDirection.z;
    this->m_bInterrupted = 0;
    flPounceDist = pounce_distance;
    *&v44[4] = (y * pounce_distance) + this->m_vStartPosition.y;
    *&v44[8] = (v20 * pounce_distance) + this->m_vStartPosition.z;
    *v44 = (pounce_distance * this->m_vTargetHorizontalDirection.x) + this->m_vStartPosition.x;
    v21 = CDOTA_Buff::GetParent(this);
    CGridNavBase::ClampToWorldEdge(&g_GridNav, v21, *v44);
    z = v22;
    *&v44[16] = v23;
    v24 = CDOTA_Buff::GetParent(this);
    v25 = GetGroundHeight(&v44[16], v24) - this->m_vStartPosition.z;
    v26 = flPounceDist / this->pounce_speed;
    this->m_flTotalTime = v26;
    this->m_flInitialVelocity = (v25 / v26) + ((0.5 * this->pounce_acceleration) * v26);
    v27 = CDOTA_Buff::GetParent(this);
    ParticleManager = GetParticleManager();
    LODWORD(v27) = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/units/heroes/hero_slark/slark_pounce_trail.vpcf",
                     2,
                     v27,
                     0,
                     0);
    v29 = CDOTA_Buff::GetParent(this);
    v30 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v30, v27, 0, v29, 1, 0, vec3_invalid, 1);
    v31 = CDOTA_Buff::GetParent(this);
    v32 = CBaseEntity::GetAbsOrigin(v31);
    v33 = CDOTA_Buff::GetParent(this);
    v34 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v34, v27, 1, v33, 5, "attach_hitloc", *v32, 1);
    v35 = CDOTA_Buff::GetParent(this);
    v36 = CBaseEntity::GetAbsOrigin(v35);
    v37 = CDOTA_Buff::GetParent(this);
    v38 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v38, v27, 2, v37, 5, "attach_attack1", *v36, 1);
    v39 = CDOTA_Buff::GetParent(this);
    v40 = CBaseEntity::GetAbsOrigin(v39);
    v41 = CDOTA_Buff::GetParent(this);
    v42 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v42, v27, 3, v41, 5, "attach_attack2", *v40, 1);
    CDOTA_Buff::AddParticle(this, v27, 0, 0, -1, 0, 0);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Slark_Pounce::UpdateHorizontalMotion  (line 474, @0x0000000002d181f0, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Purge, Reset, SpeakConcept, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, VectorAdd, VectorMultiply, entindex, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::IsLeashedMovementPrevented, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, EconEntity_OnOwnerKillEaterEvent (34 total)
// strings: "special_bonus_unique_slark", "modifier_slark_pounce_leash", "pouncehithero", "Hero_Slark.Pounce.Cast", "Hero_Slark.Pounce.Impact"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_Slark_Pounce::UpdateHorizontalMotion(
        CDOTA_Modifier_Slark_Pounce *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  float v6; // xmm0_4
  float m_flTotalTime; // xmm1_4
  float pounce_speed; // xmm1_4
  unsigned int v9; // xmm3_4
  vec_t v10; // xmm2_4
  unsigned int v11; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v13; // rax
  __m128i v14; // xmm4
  float v15; // r15d
  CDOTA_BaseNPC *v16; // r14
  CDOTA_BaseNPC *v17; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v19; // rax
  CHandle<CBaseEntity> *m_pMemory; // rax
  CEntityIdentity *v21; // rcx
  CEntityIdentity *v22; // rcx
  CEntityInstance *m_pInstance; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v26; // xmm1_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *v28; // rax
  CDOTA_BaseNPC_Hero *v29; // r14
  CDOTA_BaseNPC *v30; // rax
  CDOTA_BaseNPC_Hero *v31; // rdi
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTABaseAbility *v33; // r14
  CDOTA_BaseNPC *v34; // rax
  CDOTA_BaseNPC *v35; // rax
  CDOTA_BaseNPC *v36; // rax
  float v37; // xmm3_4
  CDOTA_BaseNPC *v38; // rax
  CDOTA_BaseNPC *v39; // rax
  vec_t y; // xmm0_4
  CDOTA_BaseNPC *v41; // rax
  int m_Size; // eax
  CEntityIndex *v43; // rax
  CEntityIndex v44; // [rsp+20h] [rbp-110h]
  float flDamagea; // [rsp+24h] [rbp-10Ch]
  float flDamageb; // [rsp+24h] [rbp-10Ch]
  int flDamage; // [rsp+24h] [rbp-10Ch]
  Vector vNewLocation; // [rsp+30h] [rbp-100h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-F0h] BYREF
  CResponseCriteriaSet criteria; // [rsp+60h] [rbp-D0h] BYREF
  CUnitOrders attackOrder; // [rsp+A0h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+E0h] [rbp-50h] BYREF
  unsigned __int64 v53; // [rsp+F8h] [rbp-38h]
  Vector v54; // 0:xmm0_8.8,8:xmm1_4.4

  v53 = __readfsqword(0x28u);
  v6 = a3 + this->m_flCurrentTimeHoriz;
  m_flTotalTime = this->m_flTotalTime;
  this->m_flCurrentTimeHoriz = v6;
  if ( v6 > m_flTotalTime )
  {
    this->m_flCurrentTimeHoriz = m_flTotalTime;
    v6 = m_flTotalTime;
  }
  pounce_speed = this->pounce_speed;
  *&v9 = ((this->m_vTargetHorizontalDirection.y * pounce_speed) * v6) + this->m_vStartPosition.y;
  v10 = ((this->m_vTargetHorizontalDirection.z * pounce_speed) * v6) + this->m_vStartPosition.z;
  *&v11 = ((pounce_speed * this->m_vTargetHorizontalDirection.x) * v6) + this->m_vStartPosition.x;
  vNewLocation.z = v10;
  *&vNewLocation.x = __PAIR64__(v9, v11);
  Parent = CDOTA_Buff::GetParent(this);
  v13 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  if ( !CDOTALocomotor::IsLeashedMovementPrevented(v13, *&vNewLocation.x) )
    CBaseEntity::SetAbsOrigin(me, &vNewLocation);
  *v14.m128i_i32 = this->pounce_radius;
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v15 = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
  v16 = CDOTA_Buff::GetParent(this);
  v17 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v17);
  v19 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v19->m_iTeamNum.m_Value, AbsOrigin, v16, v15, &entities, 2, 1, 0, 1, 0);
  if ( entities.m_Size > 0 )
  {
    m_pMemory = entities.m_Memory.m_pMemory;
    while ( 1 )
    {
      if ( m_pMemory->m_Index + 2 > 1 )
      {
        v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(m_pMemory->m_Index) >> 9) & 0x3F];
        if ( v21 != 0 )
        {
          v22 = &v21[m_pMemory->m_Index & 0x1FF];
          if ( v22 != 0 && m_pMemory->m_Index == v22->m_EHandle.m_Index )
          {
            m_pInstance = v22->m_pInstance;
            if ( v22->m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
              && LOBYTE(m_pInstance[71].m_pEntity) == 0
              && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) == 0 )
            {
              break;
            }
          }
        }
      }
      if ( ++m_pMemory == &entities.m_Memory.m_pMemory[entities.m_Size - 1 + 1] )
        goto LABEL_35;
    }
    Caster = CDOTA_Buff::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_slark", 0);
    if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
      CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
    KeyValues::KeyValues(&kv, "modifier_slark_pounce_leash");
    KeyValues::SetFloat(&kv, "duration", v26);
    Ability = CDOTA_Buff::GetAbility(this);
    v28 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::AddNewModifier(m_pInstance, v28, Ability, "modifier_slark_pounce_leash", &kv, 0);
    if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0
      || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0
      || (v29 = m_pInstance, LOBYTE(m_pInstance[71].m_pEntity) != 0) )
    {
      v29 = 0;
    }
    v30 = CDOTA_Buff::GetParent(this);
    if ( v30 != 0 && (v30->m_iUnitType & 1) != 0 )
      v31 = v30;
    else
      v31 = 0;
    EconEntity_OnOwnerKillEaterEvent(
      v31,
      v29,
      kill_eater_event_t::kKillEaterEventType_Slark_LeashedEnemies,
      1,
      INVALID_ITEM_DEF_INDEX);
    CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
    CResponseCriteriaSet::AppendCriteria(&criteria, "pouncehithero", "yes", 1.0);
    m_pSpeech = CDOTA_Buff::GetCaster(this)->m_Speech.m_pSpeech;
    if ( m_pSpeech != 0 )
      CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 4, 0, 0, 0, 0);
    flDamagea = this->pounce_damage;
    v33 = CDOTA_Buff::GetAbility(this);
    v34 = CDOTA_Buff::GetCaster(this);
    ApplyDamage(v34, m_pInstance, v33, flDamagea, 2, 0);
    v35 = CDOTA_Buff::GetCaster(this);
    LODWORD(v33) = (*(v35->_vptr_IHandleEntity + 414))(v35);
    flDamageb = this->pounce_radius;
    v36 = CDOTA_Buff::GetCaster(this);
    v54 = *CBaseEntity::GetAbsOrigin(v36);
    CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v33, v54, flDamageb, v37);
    v38 = CDOTA_Buff::GetParent(this);
    CBaseEntity::StopSound(v38, "Hero_Slark.Pounce.Cast");
    v39 = CDOTA_Buff::GetParent(this);
    DOTA_EmitSound(10, "Hero_Slark.Pounce.Impact", v39);
    attackOrder.m_bQueue = 0;
    memset(&attackOrder.m_nUnits.m_Memory, 0, 28);
    attackOrder.m_nUnits.m_Size = 0;
    attackOrder.m_nOrderSequenceNumber = 0;
    attackOrder.m_vPosition.x = vec3_origin.x;
    y = vec3_origin.y;
    attackOrder.m_nIssuerPlayerIndex = -1;
    attackOrder.m_vPosition.y = y;
    attackOrder.m_vPosition.z = vec3_origin.z;
    v41 = CDOTA_Buff::GetCaster(this);
    v44.m_Data = CEntityInstance::GetEntityIndex(v41).m_Data;
    m_Size = attackOrder.m_nUnits.m_Size;
    flDamage = attackOrder.m_nUnits.m_Size;
    if ( attackOrder.m_nUnits.m_Size == attackOrder.m_nUnits.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<CEntityIndex,int>::Grow(&attackOrder.m_nUnits.m_Memory, 1);
      m_Size = attackOrder.m_nUnits.m_Size;
    }
    attackOrder.m_nUnits.m_Size = m_Size + 1;
    v43 = &attackOrder.m_nUnits.m_Memory.m_pMemory[flDamage];
    if ( v43 != 0 )
      v43->m_Data = v44.m_Data;
    attackOrder.m_nOrderType = 4;
    attackOrder.m_nTargetIndex = CEntityInstance::GetEntityIndex(m_pInstance);
    DOTA_ExecuteOrders(&attackOrder, 0, 0, 0);
    CDOTA_Buff::Destroy(this, 0, 0, 0);
    CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::RemoveAll(&attackOrder.m_nUnits);
    if ( (attackOrder.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CEntityIndex,int>::Purge(&attackOrder.m_nUnits.m_Memory);
      if ( (attackOrder.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CEntityIndex,int>::Purge(&attackOrder.m_nUnits.m_Memory);
    }
    CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
    KeyValues::~KeyValues(&kv);
  }
LABEL_35:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
  if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
  }
}


// CDOTA_Modifier_Slark_Pounce::UpdateVerticalMotion  (line 546, @0x0000000002ccd960, libserver.so)  // inlines: Square<float>
// calls: CBaseEntity::GetAbsOrigin, CBaseEntity::SetAbsOrigin, CDOTA_Buff::Destroy, CDOTA_Buff::GetCaster, CGridNav::DestroyTreesAroundPoint, CDOTA_Buff::GetParent, GetGroundHeight
void __fastcall CDOTA_Modifier_Slark_Pounce::UpdateVerticalMotion(
        CDOTA_Modifier_Slark_Pounce *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  bool v6; // zf
  float v7; // xmm0_4
  float m_flTotalTime; // xmm1_4
  char v9; // r13
  const Vector *AbsOrigin; // rax
  float m_flCurrentTimeVert; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v16; // r12d
  CDOTA_BaseNPC *v17; // rax
  float v18; // xmm3_4
  const Vector *v19; // rax
  float v20; // xmm1_4
  float pounce_acceleration; // xmm3_4
  float m_flInitialVelocity; // xmm2_4
  CDOTA_BaseNPC *Parent; // rax
  float GroundHeight; // xmm0_4
  CDOTA_BaseNPC *v25; // rax
  unsigned int v26; // r14d
  CDOTA_BaseNPC *v27; // rax
  float v28; // xmm3_4
  float pounce_radius; // [rsp+Ch] [rbp-34h]
  float v30; // [rsp+Ch] [rbp-34h]
  Vector vNewPos; // [rsp+10h] [rbp-30h] BYREF
  Vector v32; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v33; // 0:xmm0_8.8,8:xmm1_4.4

  v6 = !this->m_bInterrupted;
  v7 = a3 + this->m_flCurrentTimeVert;
  this->m_flCurrentTimeVert = v7;
  if ( v6 )
  {
    m_flTotalTime = this->m_flTotalTime;
    v9 = 0;
    if ( v7 >= m_flTotalTime )
    {
      this->m_flCurrentTimeVert = m_flTotalTime;
      v9 = 1;
    }
    AbsOrigin = CBaseEntity::GetAbsOrigin(me);
    m_flCurrentTimeVert = this->m_flCurrentTimeVert;
    v12 = m_flCurrentTimeVert * m_flCurrentTimeVert;
    v13 = -0.5 * this->pounce_acceleration;
    v14 = m_flCurrentTimeVert * this->m_flInitialVelocity;
    *&vNewPos.x = *&AbsOrigin->x;
    vNewPos.z = (((v13 * v12) + v14) / 3.0) + this->m_vStartPosition.z;
    CBaseEntity::SetAbsOrigin(me, &vNewPos);
    if ( v9 != 0 )
    {
      CDOTA_Buff::Destroy(this, 0, 0, 0);
      Caster = CDOTA_Buff::GetCaster(this);
      v16 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
      pounce_radius = this->pounce_radius;
      v17 = CDOTA_Buff::GetCaster(this);
      v32 = *CBaseEntity::GetAbsOrigin(v17);
      CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v16, v32, pounce_radius, v18);
    }
  }
  else
  {
    v19 = CBaseEntity::GetAbsOrigin(me);
    v20 = this->m_flCurrentTimeVert;
    pounce_acceleration = this->pounce_acceleration;
    m_flInitialVelocity = this->m_flInitialVelocity;
    *&vNewPos.x = *&v19->x;
    vNewPos.z = ((((-0.5 * pounce_acceleration) * (v20 * v20)) + this->m_vStartPosition.z) + (v20 * m_flInitialVelocity))
              / 3.0;
    if ( (m_flInitialVelocity - (v20 * pounce_acceleration)) < 0.0 )
    {
      Parent = CDOTA_Buff::GetParent(this);
      GroundHeight = GetGroundHeight(&vNewPos, Parent);
      if ( GroundHeight >= vNewPos.z )
      {
        vNewPos.z = GroundHeight;
        v25 = CDOTA_Buff::GetCaster(this);
        v26 = (*(v25->_vptr_IHandleEntity + 414))(v25);
        v30 = this->pounce_radius;
        v27 = CDOTA_Buff::GetCaster(this);
        v33 = *CBaseEntity::GetAbsOrigin(v27);
        CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v26, v33, v30, v28);
        CDOTA_Buff::Destroy(this, 0, 0, 0);
      }
    }
    CBaseEntity::SetAbsOrigin(me, &vNewPos);
  }
}


// CDOTA_Modifier_Slark_Pounce::OnHorizontalMotionInterrupted  (line 597, @0x0000000002cc9130, libserver.so)
void __fastcall CDOTA_Modifier_Slark_Pounce::OnHorizontalMotionInterrupted(CDOTA_Modifier_Slark_Pounce *const this)
{
  this->m_bInterrupted = 1;
}


// CDOTA_Modifier_Slark_Pounce::OnVerticalMotionInterrupted  (line 606, @0x0000000002ccc3a0, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Slark_Pounce::OnVerticalMotionInterrupted(CDOTA_Modifier_Slark_Pounce *const this)
{
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Slark_Pounce::OnDestroy  (line 615, @0x0000000002ccf430, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController, CDOTALocomotor::RemoveVerticalMotionController
void __fastcall CDOTA_Modifier_Slark_Pounce::OnDestroy(CDOTA_Modifier_Slark_Pounce *const this)
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


// CDOTA_Modifier_Slark_Pounce::CheckState  (line 625, @0x0000000002cc9150, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Slark_Pounce::CheckState(
        CDOTA_Modifier_Slark_Pounce *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 2uLL;
  buffState->m_nDisabledStateMask &= ~2uLL;
}


// CDOTA_Modifier_Slark_Pounce_Leash::~CDOTA_Modifier_Slark_Pounce_Leash  (line 634, @0x0000000002d27dc0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Slark_Pounce_Leash::~CDOTA_Modifier_Slark_Pounce_Leash(
        CDOTA_Modifier_Slark_Pounce_Leash *const this)
{
  this->_vptr_CDOTA_Buff = &off_462CE90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Slark_Pounce_Leash::~CDOTA_Modifier_Slark_Pounce_Leash  (line 634, @0x0000000002d27de0, libserver.so)  // inlines: ~CDOTA_Modifier_Slark_Pounce_Leash
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Slark_Pounce_Leash::~CDOTA_Modifier_Slark_Pounce_Leash(
        CDOTA_Modifier_Slark_Pounce_Leash *const this)
{
  this->_vptr_CDOTA_Buff = &off_462CE90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Slark_Pounce_Leash::IsDebuff  (line 639, @0x0000000002d1e2a0, libserver.so)
bool __fastcall CDOTA_Modifier_Slark_Pounce_Leash::IsDebuff(CDOTA_Modifier_Slark_Pounce_Leash *const this)
{
  return 1;
}


// CDOTA_Modifier_Slark_Pounce_Leash::IsPurgable  (line 640, @0x0000000002d1e2b0, libserver.so)
bool __fastcall CDOTA_Modifier_Slark_Pounce_Leash::IsPurgable(CDOTA_Modifier_Slark_Pounce_Leash *const this)
{
  return 0;
}


// CDOTA_Modifier_Slark_Pounce_Leash::GetStatusEffectName  (line 650, @0x0000000002d1e2c0, libserver.so)
// strings: "particles/status_fx/status_effect_iceblast_half.vpcf"
const char *__fastcall CDOTA_Modifier_Slark_Pounce_Leash::GetStatusEffectName(
        CDOTA_Modifier_Slark_Pounce_Leash *const this)
{
  return "particles/status_fx/status_effect_iceblast_half.vpcf";
}


// CDOTA_Modifier_Slark_Pounce_Leash::StatusEffectPriority  (line 651, @0x0000000002d1e2d0, libserver.so)
int __fastcall CDOTA_Modifier_Slark_Pounce_Leash::StatusEffectPriority(CDOTA_Modifier_Slark_Pounce_Leash *const this)
{
  return 41;
}


// CDOTA_Modifier_Slark_Pounce_Leash::OnCreated  (line 663, @0x0000000002cf8ef0, libserver.so)  // inlines: Vector, operator=
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::AddParticle, CDOTA_BaseNPC::FindReplacementSound, CDOTA_BaseNPC::UnitEmitSound
// strings: "leash_radius", "particles/units/heroes/hero_slark/slark_pounce_leash.vpcf", "attach_hitloc", "particles/units/heroes/hero_slark/slark_pounce_ground.vpcf", "Hero_Slark.Pounce.Leash"
void __fastcall CDOTA_Modifier_Slark_Pounce_Leash::OnCreated(
        CDOTA_Modifier_Slark_Pounce_Leash *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v8; // r14
  CDOTA_ParticleManager *v9; // rax
  __int64 v10; // r13
  CDOTA_BaseNPC *v11; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v13; // r15
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // r14
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  CDOTA_ParticleManager *v18; // rax
  CDOTA_BaseNPC *v19; // r12
  CDOTA_ParticleManager *v20; // rax
  CDOTA_BaseNPC *v21; // r14
  CDOTA_ParticleManager *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  const Vector *v24; // r14
  CDOTA_BaseNPC *v25; // r15
  CDOTA_ParticleManager *v26; // rax
  CDOTA_BaseNPC *v27; // r14
  CDOTA_ParticleManager *v28; // rax
  CDOTA_ParticleManager *v29; // rax
  CDOTA_ParticleManager *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  const char *ReplacementSound; // r12
  CDOTA_BaseNPC *v33; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-44h]
  double v35; // [rsp+10h] [rbp-40h]
  Vector v36; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v37; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v38; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->leash_radius, "leash_radius");
  Caster = CDOTA_Buff::GetCaster(this);
  this->vLeashLocation = *CBaseEntity::GetAbsOrigin(Caster);
  v5 = CDOTA_Buff::GetCaster(this);
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_slark/slark_pounce_leash.vpcf",
                      2,
                      Parent,
                      0,
                      v5);
  v8 = CDOTA_Buff::GetCaster(this);
  v9 = GetParticleManager();
  v10 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(v9, Parent, 0, v8, 0, 0, vec3_invalid, 1);
  v11 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
  v13 = CDOTA_Buff::GetParent(this);
  v14 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v14, Parent, 1, v13, 5, "attach_hitloc", *AbsOrigin, 1);
  v15 = CDOTA_Buff::GetParent(this);
  v16 = GetParticleManager();
  v36.z = vecFallbackPosition;
  *&v36.x = v10;
  CDOTA_ParticleManager::SetParticleControlEnt(v16, Parent, 2, v15, 1, 0, v36, 1);
  v17 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v17, Parent, 3, *&this->vLeashLocation.x, this->vLeashLocation.z);
  *&v35 = this->leash_radius;
  *(&v35 + 1) = *&v35;
  v18 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v18, Parent, 4, v35, *&v35);
  CDOTA_Buff::AddParticle(this, Parent, 0, 0, -1, 0, 0);
  v19 = CDOTA_Buff::GetCaster(this);
  v20 = GetParticleManager();
  LODWORD(v19) = CDOTA_ParticleManager::CreateParticle(
                   v20,
                   "particles/units/heroes/hero_slark/slark_pounce_ground.vpcf",
                   2,
                   0,
                   0,
                   v19);
  v21 = CDOTA_Buff::GetCaster(this);
  v22 = GetParticleManager();
  v37.z = vecFallbackPosition;
  *&v37.x = v10;
  CDOTA_ParticleManager::SetParticleControlEnt(v22, v19, 0, v21, 0, 0, v37, 1);
  v23 = CDOTA_Buff::GetParent(this);
  v24 = CBaseEntity::GetAbsOrigin(v23);
  v25 = CDOTA_Buff::GetParent(this);
  v26 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v26, v19, 1, v25, 5, "attach_hitloc", *v24, 1);
  v27 = CDOTA_Buff::GetParent(this);
  v28 = GetParticleManager();
  v38.z = vecFallbackPosition;
  *&v38.x = v10;
  CDOTA_ParticleManager::SetParticleControlEnt(v28, v19, 2, v27, 1, 0, v38, 1);
  v29 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v29, v19, 3, *&this->vLeashLocation.x, this->vLeashLocation.z);
  *&v35 = this->leash_radius;
  *(&v35 + 1) = *&v35;
  v30 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v30, v19, 4, v35, *&v35);
  CDOTA_Buff::AddParticle(this, v19, 0, 0, -1, 0, 0);
  v31 = CDOTA_Buff::GetCaster(this);
  ReplacementSound = CDOTA_BaseNPC::FindReplacementSound(v31, "Hero_Slark.Pounce.Leash");
  v33 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v33, ReplacementSound, 0.0, 0, 0);
  this->m_bEscaped = 0;
}


// CDOTA_Modifier_Slark_Pounce_Leash::OnDestroy  (line 693, @0x0000000002cd7390, libserver.so)  // inlines: InState, IsInvulnerable, SetLeash, operator=
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, CDOTALocomotor::InterruptHorizontalMotionController
// strings: "modifier_batrider_flaming_lasso", "modifier_rubick_telekinesis"
void __fastcall CDOTA_Modifier_Slark_Pounce_Leash::OnDestroy(CDOTA_Modifier_Slark_Pounce_Leash *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  __int64 v3; // rbx
  vec_t y; // xmm1_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  if ( v3 != 0 )
  {
    *(v3 + 1264) = 0;
    *(v3 + 1268) = 0;
    y = vec3_origin.y;
    z = vec3_origin.z;
    *(v3 + 1272) = vec3_origin.x;
    *(v3 + 1276) = y;
    *(v3 + 1280) = z;
    if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x200) == 0 )
    {
      v6 = CDOTA_Buff::GetParent(this);
      if ( !v6->m_bIsWaitingToSpawn.m_Value && (v6->m_nUnitState64.m_Value & 0x100) == 0 && !this->m_bEscaped )
      {
        v7 = CDOTA_Buff::GetParent(this);
        if ( CDOTA_BaseNPC::FindModifierByName(v7, "modifier_batrider_flaming_lasso", 0) == 0 )
        {
          v8 = CDOTA_Buff::GetParent(this);
          if ( CDOTA_BaseNPC::FindModifierByName(v8, "modifier_rubick_telekinesis", 0) == 0 )
            CDOTALocomotor::InterruptHorizontalMotionController(v3, 1);
        }
      }
    }
  }
}


// CDOTA_Modifier_Slark_Pounce_Leash::DeclareFunctions  (line 727, @0x0000000002cc9160, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Slark_Pounce_Leash::GetModifierMoveSpeed_Limit(CModifierParams const&), CDOTA_Modifier_Slark_Pounce_Leash::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_Slark_Pounce_Leash::DeclareFunctions(CDOTA_Modifier_Slark_Pounce_Leash *const this)
{
  this->m_Functions[20].__pfn = CDOTA_Modifier_Slark_Pounce_Leash::GetModifierMoveSpeed_Limit;
  this->m_Functions[20].__delta = 0;
  this->m_Functions[138].__delta = 0;
  this->m_Functions[138].__pfn = CDOTA_Modifier_Slark_Pounce_Leash::OnDeath;
}


// CDOTA_Modifier_Slark_Pounce_Leash::GetModifierMoveSpeed_Limit  (line 735, @0x0000000002cd0230, libserver.so)  // inlines: Dot, DotProduct, SetLeash, VectorNormalize2D, VectorSubtract, operator-, operator=
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, VectorNormalize, CDOTALocomotor::GetCurrentTargetVelocity, CDOTA_Buff::Destroy
ModifierVariant_t __fastcall CDOTA_Modifier_Slark_Pounce_Leash::GetModifierMoveSpeed_Limit(
        CDOTA_Modifier_Slark_Pounce_Leash *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  vec_t v5; // xmm0_4
  vec_t v6; // xmm1_4
  CDOTA_BaseNPC *v7; // rax
  CDOTALocomotor *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  __int64 v10; // rax
  float leash_radius; // xmm4_4
  vec_t v12; // xmm3_4
  vec_t v13; // xmm1_4
  vec_t v14; // xmm0_4
  float v15; // xmm0_4
  __int64 v17; // xmm0_8
  float v18; // [rsp+4h] [rbp-4Ch]
  float z; // [rsp+8h] [rbp-48h]
  float v20; // [rsp+Ch] [rbp-44h]
  float y; // [rsp+10h] [rbp-40h]
  float v22; // [rsp+14h] [rbp-3Ch]
  float x; // [rsp+18h] [rbp-38h]
  float flDist; // [rsp+1Ch] [rbp-34h]
  Vector vToCenter; // [rsp+20h] [rbp-30h] BYREF
  Vector vDirection; // [rsp+30h] [rbp-20h] BYREF
  ModifierVariant_t result; // 0:rax.16

  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v5 = this->vLeashLocation.y - AbsOrigin->y;
  v6 = this->vLeashLocation.x - AbsOrigin->x;
  vToCenter.z = 0.0;
  vToCenter.y = v5;
  vToCenter.x = v6;
  flDist = VectorNormalize(&vToCenter);
  v7 = CDOTA_Buff::GetParent(this);
  v8 = (*(v7->_vptr_IHandleEntity + 376))(v7);
  v17 = *&CDOTALocomotor::GetCurrentTargetVelocity(v8).x;
  vDirection.z = 0.0;
  *&vDirection.x = v17;
  VectorNormalize(&vDirection);
  x = vToCenter.x;
  v22 = vDirection.x;
  y = vToCenter.y;
  v20 = vDirection.y;
  z = vToCenter.z;
  v18 = vDirection.z;
  v9 = CDOTA_Buff::GetParent(this);
  v10 = (*(v9->_vptr_IHandleEntity + 376))(v9);
  if ( v10 != 0 )
  {
    leash_radius = this->leash_radius;
    v12 = this->vLeashLocation.x;
    v13 = this->vLeashLocation.y;
    v14 = this->vLeashLocation.z;
    *(v10 + 1264) = 1;
    *(v10 + 1268) = leash_radius;
    *(v10 + 1272) = v12;
    *(v10 + 1276) = v13;
    *(v10 + 1280) = v14;
  }
  v15 = this->leash_radius;
  if ( flDist <= (0.89999998 * v15) || v15 <= flDist || (((x * v22) + (y * v20)) + (z * v18)) > 0.0 )
  {
    if ( flDist > v15 )
    {
      this->m_bEscaped = 1;
      CDOTA_Buff::Destroy(this, 0, 0, 0);
    }
    *&result.m_eType = 1;
  }
  else
  {
    *&result.m_eType = (COERCE_UNSIGNED_INT(fmaxf(0.1, ((v15 - flDist) - 5.0) * 4.0)) << 32) | 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Slark_Pounce_Leash::OnDeath  (line 773, @0x0000000002cd89a0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Slark_Pounce_Leash::OnDeath(
        CDOTA_Modifier_Slark_Pounce_Leash *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // rbx

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
  if ( CDOTA_Buff::GetParent(this) == m_pInstance )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


// CDOTA_Ability_Slark_EssenceShift::~CDOTA_Ability_Slark_EssenceShift  (line 792, @0x0000000002d2bdc0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Slark_EssenceShift::~CDOTA_Ability_Slark_EssenceShift(
        CDOTA_Ability_Slark_EssenceShift *const this)
{
  this->_vptr_IHandleEntity = &off_462D1F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Slark_EssenceShift::~CDOTA_Ability_Slark_EssenceShift  (line 792, @0x0000000002d2bde0, libserver.so)  // inlines: ~CDOTA_Ability_Slark_EssenceShift
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Slark_EssenceShift::~CDOTA_Ability_Slark_EssenceShift(
        CDOTA_Ability_Slark_EssenceShift *const this)
{
  this->_vptr_IHandleEntity = &off_462D1F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Slark_EssenceShift::Schema_DynamicBinding  (line 794, @0x0000000002d1e2e0, libserver.so)
// globals: CDOTA_Ability_Slark_EssenceShift::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Slark_EssenceShift::Schema_DynamicBinding(
        const CDOTA_Ability_Slark_EssenceShift *const this)
{
  return CDOTA_Ability_Slark_EssenceShift::s_pSchemaBinding;
}


// CDOTA_Ability_Slark_EssenceShift::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 794, @0x0000000002d1e2f0, libserver.so)
// globals: CDOTA_Ability_Slark_EssenceShift::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Slark_EssenceShift::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Slark_EssenceShift::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Slark_EssenceShift::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Slark_EssenceShift::CEntityInstanceEntityClass::DestructInstance  (line 794, @0x0000000002d1e300, libserver.so)  // inlines: Destruct<CDOTA_Ability_Slark_EssenceShift>
void __fastcall CDOTA_Ability_Slark_EssenceShift::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Slark_EssenceShift::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Slark_EssenceShift::CEntityInstanceEntityClass::FreeInstance  (line 794, @0x0000000002d1e320, libserver.so)
void __fastcall CDOTA_Ability_Slark_EssenceShift::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Slark_EssenceShift::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Slark_EssenceShift::CEntityInstanceEntityClass::CanAllocate  (line 794, @0x0000000002d1e340, libserver.so)
bool __fastcall CDOTA_Ability_Slark_EssenceShift::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Slark_EssenceShift::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Slark_EssenceShift::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 794, @0x0000000002d1e350, libserver.so)
// globals: CDOTA_Ability_Slark_EssenceShift::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Slark_EssenceShift::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Slark_EssenceShift::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Slark_EssenceShift::s_pSchemaBinding;
}


// CDOTA_Ability_Slark_EssenceShift::CEntityInstanceEntityClass::AllocateInstance  (line 794, @0x0000000002d24950, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Slark_EssenceShift::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Slark_EssenceShift::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Slark_EssenceShift::CEntityInstanceEntityClass::ConstructInstance  (line 794, @0x0000000002d29160, libserver.so)  // inlines: CDOTA_Ability_Slark_EssenceShift, Construct<CDOTA_Ability_Slark_EssenceShift>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Slark_EssenceShift::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Slark_EssenceShift::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_462D1F0;
  }
  return p;
}


// CDOTA_Ability_Slark_EssenceShift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 794, @0x0000000002d34270, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Slark_EssenceShift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Slark_EssenceShift::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Slark_EssenceShift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 794, @0x0000000002d34290, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Slark_EssenceShift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Slark_EssenceShift::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Slark_EssenceShift::GetEntityClassInternal  (line 794, @0x0000000002d48890, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "CDOTA_Ability_Slark_EssenceShift"
// globals: `guard variable for'CDOTA_Ability_Slark_EssenceShift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_EssenceShiftClass, CDOTA_Ability_Slark_EssenceShift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_EssenceShiftClass, __dso_handle, CDOTA_Ability_Slark_EssenceShift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Slark_EssenceShift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_EssenceShiftClassInfo, CDOTA_Ability_Slark_EssenceShift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_EssenceShiftClassInfo
CEntityClass *__cdecl CDOTA_Ability_Slark_EssenceShift::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Slark_EssenceShift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_EssenceShiftClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Slark_EssenceShift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_EssenceShiftClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Slark_EssenceShift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_EssenceShiftClass);
    CDOTA_Ability_Slark_EssenceShift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_EssenceShiftClass._vptr_CEntityClass = off_462D170;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Slark_EssenceShift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_EssenceShiftClass);
    __cxa_atexit(
      CDOTA_Ability_Slark_EssenceShift::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Slark_EssenceShift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_EssenceShiftClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Slark_EssenceShiftClass != 0 )
    return &CDOTA_Ability_Slark_EssenceShift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_EssenceShiftClass;
  if ( `guard variable for'CDOTA_Ability_Slark_EssenceShift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_EssenceShiftClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Slark_EssenceShift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_EssenceShiftClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Slark_EssenceShift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_EssenceShiftClassInfo,
      "CDOTA_Ability_Slark_EssenceShift",
      "slark_essence_shift",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Slark_EssenceShift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_EssenceShiftClassInfo);
  }
  CDOTA_Ability_Slark_EssenceShift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_EssenceShiftClass.m_pClassInfo = &CDOTA_Ability_Slark_EssenceShift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_EssenceShiftClassInfo;
  CDOTA_Ability_Slark_EssenceShift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_EssenceShiftClass.m_pBaseClassInfo = CDOTA_Ability_Slark_EssenceShift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_EssenceShiftClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Slark_EssenceShiftClass = &CDOTA_Ability_Slark_EssenceShift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_EssenceShiftClass;
  CDOTA_Ability_Slark_EssenceShift::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_EssenceShiftClassInfo.m_pClass = &CDOTA_Ability_Slark_EssenceShift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_EssenceShiftClass;
  CDOTA_Ability_Slark_EssenceShift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_EssenceShiftClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Slark_EssenceShiftClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Slark_EssenceShift::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_EssenceShiftClass;
}


// CDOTA_Ability_Slark_EssenceShift::GetIntrinsicModifierName  (line 799, @0x0000000002d1e360, libserver.so)
// strings: "modifier_slark_essence_shift"
const char *__fastcall CDOTA_Ability_Slark_EssenceShift::GetIntrinsicModifierName(
        CDOTA_Ability_Slark_EssenceShift *const this)
{
  return "modifier_slark_essence_shift";
}


// CDOTA_Ability_Slark_EssenceShift::YouForgotToImplementOrDeclareServerClass  (line 802, @0x0000000002cc91a0, libserver.so)
int __fastcall CDOTA_Ability_Slark_EssenceShift::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Slark_EssenceShift *const this)
{
  return 0;
}


// CDOTA_Ability_Slark_EssenceShift::GetServerClass  (line 802, @0x0000000002cdebf0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Slark_EssenceShift::GetServerClass(CDOTA_Ability_Slark_EssenceShift *const this)
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


// CDOTA_Modifier_Slark_EssenceShift::~CDOTA_Modifier_Slark_EssenceShift  (line 812, @0x0000000002d27d70, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Slark_EssenceShift::~CDOTA_Modifier_Slark_EssenceShift(
        CDOTA_Modifier_Slark_EssenceShift *const this)
{
  this->_vptr_CDOTA_Buff = &off_462DCB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Slark_EssenceShift::~CDOTA_Modifier_Slark_EssenceShift  (line 812, @0x0000000002d27d90, libserver.so)  // inlines: ~CDOTA_Modifier_Slark_EssenceShift
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Slark_EssenceShift::~CDOTA_Modifier_Slark_EssenceShift(
        CDOTA_Modifier_Slark_EssenceShift *const this)
{
  this->_vptr_CDOTA_Buff = &off_462DCB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Slark_EssenceShift::IsHidden  (line 817, @0x0000000002d1e370, libserver.so)
bool __fastcall CDOTA_Modifier_Slark_EssenceShift::IsHidden(CDOTA_Modifier_Slark_EssenceShift *const this)
{
  return (*(this->_vptr_CDOTA_Buff + 27))(this) == 0;
}


// CDOTA_Modifier_Slark_EssenceShift::IsPurgable  (line 818, @0x0000000002d1e390, libserver.so)
bool __fastcall CDOTA_Modifier_Slark_EssenceShift::IsPurgable(CDOTA_Modifier_Slark_EssenceShift *const this)
{
  return 0;
}


// CDOTA_Modifier_Slark_EssenceShift::DestroyOnExpire  (line 823, @0x0000000002d1e3a0, libserver.so)
bool __fastcall CDOTA_Modifier_Slark_EssenceShift::DestroyOnExpire(CDOTA_Modifier_Slark_EssenceShift *const this)
{
  return 0;
}


// CDOTA_Modifier_Slark_EssenceShift::OnCreated  (line 841, @0x0000000002d09e30, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "agi_gain"
void __fastcall CDOTA_Modifier_Slark_EssenceShift::OnCreated(
        CDOTA_Modifier_Slark_EssenceShift *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->agi_gain = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->duration = 0.0;
    goto LABEL_4;
  }
  this->agi_gain = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "agi_gain", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "duration", -1, 0);
LABEL_4:
  (*(this->_vptr_CDOTA_Buff + 28))(this, 0);
}


// CDOTA_Modifier_Slark_EssenceShift::OnRefresh  (line 850, @0x0000000002d097f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "agi_gain"
void __fastcall CDOTA_Modifier_Slark_EssenceShift::OnRefresh(
        CDOTA_Modifier_Slark_EssenceShift *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->agi_gain = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "agi_gain", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "duration", -1, 0);
      return;
    }
  }
  else
  {
    this->agi_gain = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->duration = 0.0;
}


// CDOTA_Modifier_Slark_EssenceShift::DeclareFunctions  (line 859, @0x0000000002cc91b0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Slark_EssenceShift::OnAttackLanded(CModifierParams const&), CDOTA_Modifier_Slark_EssenceShift::GetModifierBonusStats_Agility(CModifierParams const&), CDOTA_Modifier_Slark_EssenceShift::OnDeath(CModifierParams const&)
void __fastcall CDOTA_Modifier_Slark_EssenceShift::DeclareFunctions(CDOTA_Modifier_Slark_EssenceShift *const this)
{
  this->m_Functions[121].__pfn = CDOTA_Modifier_Slark_EssenceShift::OnAttackLanded;
  this->m_Functions[121].__delta = 0;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Slark_EssenceShift::GetModifierBonusStats_Agility;
  this->m_Functions[138].__pfn = CDOTA_Modifier_Slark_EssenceShift::OnDeath;
  this->m_Functions[138].__delta = 0;
}


// CDOTA_Modifier_Slark_EssenceShift::OnAttackLanded  (line 868, @0x0000000002cdc270, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsRealHero, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::FindModifierByName, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_Buff::GetCaster, CDOTA_CombatLog::AddModifierEvent, EconEntity_OnOwnerKillEaterEvent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin (17 total)
// strings: "modifier_slark_essence_shift_debuff_counter", "modifier_slark_essence_shift_debuff", "modifier_slark_essence_shift_buff", "particles/units/heroes/hero_slark/slark_essence_shift.vpcf", "attach_hitloc"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
ModifierVariant_t __fastcall CDOTA_Modifier_Slark_EssenceShift::OnAttackLanded(
        CDOTA_Modifier_Slark_EssenceShift *const this,
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
  CEntityInstance *v12; // rbx
  uint32 v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CDOTA_BaseNPC *v17; // r15
  CDOTABaseAbility *Ability; // rax
  CDOTA_Buff *ModifierByName; // r15
  float v20; // xmm1_4
  CDOTABaseAbility *v21; // rax
  float v22; // xmm1_4
  CDOTABaseAbility *v23; // r15
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v25; // r15
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *v27; // rax
  CDOTA_BaseNPC_Hero *v28; // r15
  CDOTA_BaseNPC *v29; // rax
  CDOTA_BaseNPC_Hero *v30; // rdi
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  const Vector *AbsOrigin; // r15
  CDOTA_ParticleManager *v34; // rax
  const Vector *v35; // r15
  CDOTA_ParticleManager *v36; // rax
  CDOTA_ParticleManager *v37; // rax
  CDOTA_ParticleManager *v38; // rax
  CDOTA_ParticleManager *v39; // rax
  CDOTABaseAbility *v40; // rax
  float flEffectiveDuration; // [rsp+1Ch] [rbp-74h]
  KeyValues kv; // [rsp+20h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v44; // [rsp+58h] [rbp-38h]

  v44 = __readfsqword(0x28u);
  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1
    || (m_Index_low = LOWORD(params->htarget.m_Index),
        (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v7 = &v6[m_Index_low & 0x1FF]) == 0
    || m_Index != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    m_pInstance = 0;
  }
  v9 = params->hattacker.m_Index;
  if ( v9 + 2 <= 1
    || (v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v11 = &v10[params->hattacker.m_Index & 0x1FF]) == 0
    || v9 != v11->m_EHandle.m_Index
    || (v12 = v11->m_pInstance, v11->m_pInstance == 0)
    || BYTE3(v12[7]._vptr_IHandleEntity) == 0 )
  {
    v12 = 0;
  }
  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
  {
    v13 = params->hattacker.m_Index;
    if ( v13 + 2 > 1 )
    {
      v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
      if ( v14 != 0 )
      {
        v15 = &v14[params->hattacker.m_Index & 0x1FF];
        if ( v15 != 0 && v13 == v15->m_EHandle.m_Index )
        {
          v17 = v15->m_pInstance;
          if ( v15->m_pInstance != 0
            && v17->m_bIsDOTANPC
            && CDOTA_Buff::GetParent(this) == v17
            && params->nDamageCategory == 1
            && v12 != 0
            && m_pInstance != 0
            && LOBYTE(v12[71].m_pEntity) == 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
            && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
          {
            Ability = CDOTA_Buff::GetAbility(this);
            if ( (*(Ability->_vptr_IHandleEntity + 245))(Ability) != 0 )
            {
              ModifierByName = CDOTA_BaseNPC::FindModifierByName(
                                 m_pInstance,
                                 "modifier_slark_essence_shift_debuff_counter",
                                 0);
              if ( ModifierByName != 0 )
              {
                (*(ModifierByName->_vptr_CDOTA_Buff + 25))(ModifierByName);
                flEffectiveDuration = this->duration;
              }
              else
              {
                KeyValues::KeyValues(&kv2, "modifier_slark_essence_shift_debuff_counter");
                v40 = CDOTA_Buff::GetAbility(this);
                ModifierByName = CDOTA_BaseNPC::AddNewModifier(
                                   m_pInstance,
                                   v12,
                                   v40,
                                   "modifier_slark_essence_shift_debuff_counter",
                                   &kv2,
                                   0);
                KeyValues::~KeyValues(&kv2);
                flEffectiveDuration = this->duration;
                if ( ModifierByName == 0 )
                {
LABEL_33:
                  KeyValues::KeyValues(&kv, "modifier_slark_essence_shift_debuff");
                  KeyValues::SetFloat(&kv, "duration", v20);
                  v21 = CDOTA_Buff::GetAbility(this);
                  CDOTA_BaseNPC::AddNewModifier(m_pInstance, v12, v21, "modifier_slark_essence_shift_debuff", &kv, 0);
                  KeyValues::KeyValues(&kv2, "modifier_slark_essence_shift_buff");
                  KeyValues::SetFloat(&kv2, "duration", v22);
                  v23 = CDOTA_Buff::GetAbility(this);
                  Caster = CDOTA_Buff::GetCaster(this);
                  CDOTA_BaseNPC::AddNewModifier(Caster, v12, v23, "modifier_slark_essence_shift_buff", &kv2, 0);
                  (*(this->_vptr_CDOTA_Buff + 25))(this);
                  v25 = CDOTA_Buff::GetCaster(this);
                  Parent = CDOTA_Buff::GetParent(this);
                  CDOTA_CombatLog::AddModifierEvent(&g_DOTACombatLog, 19, Parent, v25, this, 0, 0, 0);
                  (*(this->_vptr_CDOTA_Buff + 63))(this, 1, flEffectiveDuration);
                  v27 = CDOTA_Buff::GetAbility(this);
                  (*(v27->_vptr_IHandleEntity + 241))(v27, -1.0);
                  v28 = 0;
                  if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                    && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                    && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
                  {
                    v28 = m_pInstance;
                  }
                  v29 = CDOTA_Buff::GetParent(this);
                  if ( v29 != 0 && (v29->m_iUnitType & 1) != 0 )
                    v30 = v29;
                  else
                    v30 = 0;
                  EconEntity_OnOwnerKillEaterEvent(
                    v30,
                    v28,
                    kill_eater_event_t::kKillEaterEventType_Slark_EssenceStolen,
                    1,
                    INVALID_ITEM_DEF_INDEX);
                  ParticleManager = GetParticleManager();
                  Particle = CDOTA_ParticleManager::CreateParticle(
                               ParticleManager,
                               "particles/units/heroes/hero_slark/slark_essence_shift.vpcf",
                               2,
                               0,
                               0,
                               v12);
                  AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
                  v34 = GetParticleManager();
                  CDOTA_ParticleManager::SetParticleControlEnt(
                    v34,
                    Particle,
                    0,
                    m_pInstance,
                    5,
                    "attach_hitloc",
                    *AbsOrigin,
                    1);
                  v35 = CBaseEntity::GetAbsOrigin(v12);
                  v36 = GetParticleManager();
                  CDOTA_ParticleManager::SetParticleControlEnt(v36, Particle, 1, v12, 5, "attach_hitloc", *v35, 1);
                  v37 = GetParticleManager();
                  CDOTA_ParticleManager::SetParticleControlEnt(v37, Particle, 2, m_pInstance, 1, 0, vec3_invalid, 1);
                  v38 = GetParticleManager();
                  CDOTA_ParticleManager::SetParticleControlEnt(v38, Particle, 3, v12, 1, 0, vec3_invalid, 1);
                  v39 = GetParticleManager();
                  CDOTA_ParticleManager::ReleaseParticleIndex(v39, Particle);
                  KeyValues::~KeyValues(&kv2);
                  KeyValues::~KeyValues(&kv);
                  return 1uLL;
                }
              }
              (*(ModifierByName->_vptr_CDOTA_Buff + 63))(ModifierByName, 1, flEffectiveDuration);
              goto LABEL_33;
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Slark_EssenceShift::GetModifierBonusStats_Agility  (line 933, @0x0000000002cc9210, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Slark_EssenceShift::GetModifierBonusStats_Agility(
        CDOTA_Modifier_Slark_EssenceShift *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  int v4; // eax
  ModifierVariant_t result; // 0:rax.16

  v3 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v3.m128i_i32 = (this->agi_gain * v4);
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Slark_EssenceShift::OnDeath  (line 940, @0x0000000002cd8dc0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Slark_EssenceShift::OnDeath(
        CDOTA_Modifier_Slark_EssenceShift *const this,
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
  (*(this->_vptr_CDOTA_Buff + 28))(this, 0);
  return 1uLL;
}


// CDOTA_Modifier_Slark_EssenceShift_DebuffCounter::~CDOTA_Modifier_Slark_EssenceShift_DebuffCounter  (line 956, @0x0000000002d27d20, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Slark_EssenceShift_DebuffCounter::~CDOTA_Modifier_Slark_EssenceShift_DebuffCounter(
        CDOTA_Modifier_Slark_EssenceShift_DebuffCounter *const this)
{
  this->_vptr_CDOTA_Buff = &off_462DFD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Slark_EssenceShift_DebuffCounter::~CDOTA_Modifier_Slark_EssenceShift_DebuffCounter  (line 956, @0x0000000002d27d40, libserver.so)  // inlines: ~CDOTA_Modifier_Slark_EssenceShift_DebuffCounter
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Slark_EssenceShift_DebuffCounter::~CDOTA_Modifier_Slark_EssenceShift_DebuffCounter(
        CDOTA_Modifier_Slark_EssenceShift_DebuffCounter *const this)
{
  this->_vptr_CDOTA_Buff = &off_462DFD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Slark_EssenceShift_DebuffCounter::IsPurgable  (line 961, @0x0000000002d1e3b0, libserver.so)
bool __fastcall CDOTA_Modifier_Slark_EssenceShift_DebuffCounter::IsPurgable(
        CDOTA_Modifier_Slark_EssenceShift_DebuffCounter *const this)
{
  return 0;
}


// CDOTA_Modifier_Slark_EssenceShift_DebuffCounter::IsHidden  (line 962, @0x0000000002d2b220, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_slark_essence_shift_debuff"
bool __fastcall CDOTA_Modifier_Slark_EssenceShift_DebuffCounter::IsHidden(
        CDOTA_Modifier_Slark_EssenceShift_DebuffCounter *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  if ( (*(this->_vptr_CDOTA_Buff + 27))(this) > 0 )
    return 0;
  Parent = CDOTA_Buff::GetParent(this);
  return CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_slark_essence_shift_debuff", 0) == 0;
}


// CDOTA_Modifier_Slark_EssenceShift_DebuffCounter::OnCreated  (line 984, @0x0000000002cc9250, libserver.so)
void __fastcall CDOTA_Modifier_Slark_EssenceShift_DebuffCounter::OnCreated(
        CDOTA_Modifier_Slark_EssenceShift_DebuffCounter *const this,
        KeyValues *pKV)
{
  (*(this->_vptr_CDOTA_Buff + 28))(this, 1);
}


// CDOTA_Modifier_Slark_EssenceShift_DebuffCounter::DeclareFunctions  (line 991, @0x0000000002cc9270, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Slark_EssenceShift_DebuffCounter::OnTooltip(CModifierParams const&)
void __fastcall CDOTA_Modifier_Slark_EssenceShift_DebuffCounter::DeclareFunctions(
        CDOTA_Modifier_Slark_EssenceShift_DebuffCounter *const this)
{
  this->m_Functions[151].__pfn = CDOTA_Modifier_Slark_EssenceShift_DebuffCounter::OnTooltip;
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_Slark_EssenceShift_DebuffCounter::OnTooltip  (line 997, @0x0000000002cc9290, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Slark_EssenceShift_DebuffCounter::OnTooltip(
        CDOTA_Modifier_Slark_EssenceShift_DebuffCounter *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  int v3; // eax
  ModifierVariant_t result; // 0:rax.16

  v2 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v2.m128i_i32 = v3;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Slark_EssenceShift_Debuff::~CDOTA_Modifier_Slark_EssenceShift_Debuff  (line 1005, @0x0000000002d27cd0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Slark_EssenceShift_Debuff::~CDOTA_Modifier_Slark_EssenceShift_Debuff(
        CDOTA_Modifier_Slark_EssenceShift_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_462E2F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Slark_EssenceShift_Debuff::~CDOTA_Modifier_Slark_EssenceShift_Debuff  (line 1005, @0x0000000002d27cf0, libserver.so)  // inlines: ~CDOTA_Modifier_Slark_EssenceShift_Debuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Slark_EssenceShift_Debuff::~CDOTA_Modifier_Slark_EssenceShift_Debuff(
        CDOTA_Modifier_Slark_EssenceShift_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_462E2F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Slark_EssenceShift_Debuff::GetAttributes  (line 1010, @0x0000000002d286d0, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_Slark_EssenceShift_Debuff::GetAttributes(
        CDOTA_Modifier_Slark_EssenceShift_Debuff *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 2;
}


// CDOTA_Modifier_Slark_EssenceShift_Debuff::IsHidden  (line 1012, @0x0000000002d1e3c0, libserver.so)
bool __fastcall CDOTA_Modifier_Slark_EssenceShift_Debuff::IsHidden(
        CDOTA_Modifier_Slark_EssenceShift_Debuff *const this)
{
  return 1;
}


// CDOTA_Modifier_Slark_EssenceShift_Debuff::IsPurgable  (line 1013, @0x0000000002d1e3d0, libserver.so)
bool __fastcall CDOTA_Modifier_Slark_EssenceShift_Debuff::IsPurgable(
        CDOTA_Modifier_Slark_EssenceShift_Debuff *const this)
{
  return 0;
}


// CDOTA_Modifier_Slark_EssenceShift_Debuff::OnCreated  (line 1031, @0x0000000002d08f20, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "stat_loss"
void __fastcall CDOTA_Modifier_Slark_EssenceShift_Debuff::OnCreated(
        CDOTA_Modifier_Slark_EssenceShift_Debuff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->stat_loss = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "stat_loss", -1, 0);
  else
    this->stat_loss = 0;
}


// CDOTA_Modifier_Slark_EssenceShift_Debuff::DeclareFunctions  (line 1038, @0x0000000002cc92c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Slark_EssenceShift_Debuff::GetModifierBonusStats_All(CModifierParams const&)
void __fastcall CDOTA_Modifier_Slark_EssenceShift_Debuff::DeclareFunctions(
        CDOTA_Modifier_Slark_EssenceShift_Debuff *const this)
{
  this->m_Functions[64].__pfn = CDOTA_Modifier_Slark_EssenceShift_Debuff::GetModifierBonusStats_All;
  this->m_Functions[64].__delta = 0;
  this->m_Functions[65].__pfn = CDOTA_Modifier_Slark_EssenceShift_Debuff::GetModifierBonusStats_All;
  this->m_Functions[65].__delta = 0;
  this->m_Functions[66].__pfn = CDOTA_Modifier_Slark_EssenceShift_Debuff::GetModifierBonusStats_All;
  this->m_Functions[66].__delta = 0;
}


// CDOTA_Modifier_Slark_EssenceShift_Debuff::GetModifierBonusStats_All  (line 1047, @0x0000000002cc9310, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Slark_EssenceShift_Debuff::GetModifierBonusStats_All(
        CDOTA_Modifier_Slark_EssenceShift_Debuff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->stat_loss;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Slark_EssenceShift_Debuff::OnDurationExpired  (line 1054, @0x0000000002ccc540, libserver.so)  // inlines: IsUnitMyParent
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_slark_essence_shift_debuff_counter"
void __fastcall CDOTA_Modifier_Slark_EssenceShift_Debuff::OnDurationExpired(
        CDOTA_Modifier_Slark_EssenceShift_Debuff *const this)
{
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v4; // r13
  CDOTA_BaseNPC *v5; // r12

  Parent = CDOTA_Buff::GetParent(this);
  if ( Parent != 0 && Parent == CDOTA_Buff::GetParent(this) )
  {
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_slark_essence_shift_debuff_counter", 0);
    v4 = ModifierByName;
    if ( ModifierByName != 0 )
    {
      v5 = CDOTA_Buff::GetParent(ModifierByName);
      if ( v5 == CDOTA_Buff::GetParent(this) && (*(v4->_vptr_CDOTA_Buff + 27))(v4) > 0 )
        (*(v4->_vptr_CDOTA_Buff + 26))(v4);
    }
  }
}


// CDOTA_Modifier_Slark_EssenceShift_Buff::~CDOTA_Modifier_Slark_EssenceShift_Buff  (line 1071, @0x0000000002d27c80, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Slark_EssenceShift_Buff::~CDOTA_Modifier_Slark_EssenceShift_Buff(
        CDOTA_Modifier_Slark_EssenceShift_Buff *const this)
{
  this->_vptr_CDOTA_Buff = &off_462E610;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Slark_EssenceShift_Buff::~CDOTA_Modifier_Slark_EssenceShift_Buff  (line 1071, @0x0000000002d27ca0, libserver.so)  // inlines: ~CDOTA_Modifier_Slark_EssenceShift_Buff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Slark_EssenceShift_Buff::~CDOTA_Modifier_Slark_EssenceShift_Buff(
        CDOTA_Modifier_Slark_EssenceShift_Buff *const this)
{
  this->_vptr_CDOTA_Buff = &off_462E610;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Slark_EssenceShift_Buff::GetAttributes  (line 1076, @0x0000000002d286e0, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_Slark_EssenceShift_Buff::GetAttributes(
        CDOTA_Modifier_Slark_EssenceShift_Buff *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 2;
}


// CDOTA_Modifier_Slark_EssenceShift_Buff::IsHidden  (line 1078, @0x0000000002d1e3e0, libserver.so)
bool __fastcall CDOTA_Modifier_Slark_EssenceShift_Buff::IsHidden(CDOTA_Modifier_Slark_EssenceShift_Buff *const this)
{
  return 1;
}


// CDOTA_Modifier_Slark_EssenceShift_Buff::IsPurgable  (line 1079, @0x0000000002d1e3f0, libserver.so)
bool __fastcall CDOTA_Modifier_Slark_EssenceShift_Buff::IsPurgable(CDOTA_Modifier_Slark_EssenceShift_Buff *const this)
{
  return 0;
}


// CDOTA_Modifier_Slark_EssenceShift_Buff::OnDurationExpired  (line 1088, @0x0000000002ccc790, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_slark_essence_shift"
void __fastcall CDOTA_Modifier_Slark_EssenceShift_Buff::OnDurationExpired(
        CDOTA_Modifier_Slark_EssenceShift_Buff *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v3; // rbx

  Caster = CDOTA_Buff::GetCaster(this);
  if ( Caster != 0 )
  {
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_slark_essence_shift", 0);
    v3 = ModifierByName;
    if ( ModifierByName != 0 && (*(ModifierByName->_vptr_CDOTA_Buff + 27))(ModifierByName) > 0 )
      (*(v3->_vptr_CDOTA_Buff + 26))(v3);
  }
}


// CDOTA_Ability_Slark_ShadowDance::~CDOTA_Ability_Slark_ShadowDance  (line 1108, @0x0000000002d2be10, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Slark_ShadowDance::~CDOTA_Ability_Slark_ShadowDance(
        CDOTA_Ability_Slark_ShadowDance *const this)
{
  this->_vptr_IHandleEntity = &off_462E970;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Slark_ShadowDance::~CDOTA_Ability_Slark_ShadowDance  (line 1108, @0x0000000002d2be30, libserver.so)  // inlines: ~CDOTA_Ability_Slark_ShadowDance
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Slark_ShadowDance::~CDOTA_Ability_Slark_ShadowDance(
        CDOTA_Ability_Slark_ShadowDance *const this)
{
  this->_vptr_IHandleEntity = &off_462E970;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Slark_ShadowDance::Schema_DynamicBinding  (line 1110, @0x0000000002d1e400, libserver.so)
// globals: CDOTA_Ability_Slark_ShadowDance::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Slark_ShadowDance::Schema_DynamicBinding(
        const CDOTA_Ability_Slark_ShadowDance *const this)
{
  return CDOTA_Ability_Slark_ShadowDance::s_pSchemaBinding;
}


// CDOTA_Ability_Slark_ShadowDance::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1110, @0x0000000002d1e410, libserver.so)
// globals: CDOTA_Ability_Slark_ShadowDance::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Slark_ShadowDance::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Slark_ShadowDance::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Slark_ShadowDance::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Slark_ShadowDance::CEntityInstanceEntityClass::DestructInstance  (line 1110, @0x0000000002d1e420, libserver.so)  // inlines: Destruct<CDOTA_Ability_Slark_ShadowDance>
void __fastcall CDOTA_Ability_Slark_ShadowDance::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Slark_ShadowDance::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Slark_ShadowDance::CEntityInstanceEntityClass::FreeInstance  (line 1110, @0x0000000002d1e440, libserver.so)
void __fastcall CDOTA_Ability_Slark_ShadowDance::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Slark_ShadowDance::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Slark_ShadowDance::CEntityInstanceEntityClass::CanAllocate  (line 1110, @0x0000000002d1e460, libserver.so)
bool __fastcall CDOTA_Ability_Slark_ShadowDance::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Slark_ShadowDance::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Slark_ShadowDance::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1110, @0x0000000002d1e470, libserver.so)
// globals: CDOTA_Ability_Slark_ShadowDance::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Slark_ShadowDance::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Slark_ShadowDance::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Slark_ShadowDance::s_pSchemaBinding;
}


// CDOTA_Ability_Slark_ShadowDance::CEntityInstanceEntityClass::AllocateInstance  (line 1110, @0x0000000002d24990, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Slark_ShadowDance::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Slark_ShadowDance::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Slark_ShadowDance::CEntityInstanceEntityClass::ConstructInstance  (line 1110, @0x0000000002d29190, libserver.so)  // inlines: CDOTA_Ability_Slark_ShadowDance, Construct<CDOTA_Ability_Slark_ShadowDance>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Slark_ShadowDance::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Slark_ShadowDance::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_462E970;
  }
  return p;
}


// CDOTA_Ability_Slark_ShadowDance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1110, @0x0000000002d342c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Slark_ShadowDance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Slark_ShadowDance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Slark_ShadowDance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1110, @0x0000000002d342e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Slark_ShadowDance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Slark_ShadowDance::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Slark_ShadowDance::GetEntityClassInternal  (line 1110, @0x0000000002d489e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_02.cpp
// strings: "CDOTA_Ability_Slark_ShadowDance"
// globals: `guard variable for'CDOTA_Ability_Slark_ShadowDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_ShadowDanceClass, CDOTA_Ability_Slark_ShadowDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_ShadowDanceClass, __dso_handle, CDOTA_Ability_Slark_ShadowDance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Slark_ShadowDance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_ShadowDanceClassInfo, CDOTA_Ability_Slark_ShadowDance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_ShadowDanceClassInfo
CEntityClass *__cdecl CDOTA_Ability_Slark_ShadowDance::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Slark_ShadowDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_ShadowDanceClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Slark_ShadowDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_ShadowDanceClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Slark_ShadowDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_ShadowDanceClass);
    CDOTA_Ability_Slark_ShadowDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_ShadowDanceClass._vptr_CEntityClass = off_462E8F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Slark_ShadowDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_ShadowDanceClass);
    __cxa_atexit(
      CDOTA_Ability_Slark_ShadowDance::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Slark_ShadowDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_ShadowDanceClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Slark_ShadowDanceClass != 0 )
    return &CDOTA_Ability_Slark_ShadowDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_ShadowDanceClass;
  if ( `guard variable for'CDOTA_Ability_Slark_ShadowDance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_ShadowDanceClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Slark_ShadowDance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_ShadowDanceClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Slark_ShadowDance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_ShadowDanceClassInfo,
      "CDOTA_Ability_Slark_ShadowDance",
      "slark_shadow_dance",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Slark_ShadowDance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_ShadowDanceClassInfo);
  }
  CDOTA_Ability_Slark_ShadowDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_ShadowDanceClass.m_pClassInfo = &CDOTA_Ability_Slark_ShadowDance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_ShadowDanceClassInfo;
  CDOTA_Ability_Slark_ShadowDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_ShadowDanceClass.m_pBaseClassInfo = CDOTA_Ability_Slark_ShadowDance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_ShadowDanceClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Slark_ShadowDanceClass = &CDOTA_Ability_Slark_ShadowDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_ShadowDanceClass;
  CDOTA_Ability_Slark_ShadowDance::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Slark_ShadowDanceClassInfo.m_pClass = &CDOTA_Ability_Slark_ShadowDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_ShadowDanceClass;
  CDOTA_Ability_Slark_ShadowDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_ShadowDanceClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Slark_ShadowDanceClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Slark_ShadowDance::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Slark_ShadowDanceClass;
}


// CDOTA_Ability_Slark_ShadowDance::GetIntrinsicModifierName  (line 1114, @0x0000000002d1e480, libserver.so)
// strings: "modifier_slark_shadow_dance_passive"
const char *__fastcall CDOTA_Ability_Slark_ShadowDance::GetIntrinsicModifierName(
        CDOTA_Ability_Slark_ShadowDance *const this)
{
  return "modifier_slark_shadow_dance_passive";
}


// CDOTA_Ability_Slark_ShadowDance::HasInvisibility  (line 1117, @0x0000000002d1e490, libserver.so)
bool __fastcall CDOTA_Ability_Slark_ShadowDance::HasInvisibility(CDOTA_Ability_Slark_ShadowDance *const this)
{
  return 1;
}


// CDOTA_Ability_Slark_ShadowDance::YouForgotToImplementOrDeclareServerClass  (line 1121, @0x0000000002cc9330, libserver.so)
int __fastcall CDOTA_Ability_Slark_ShadowDance::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Slark_ShadowDance *const this)
{
  return 0;
}


// CDOTA_Ability_Slark_ShadowDance::GetServerClass  (line 1121, @0x0000000002cde730, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Slark_ShadowDance::GetServerClass(CDOTA_Ability_Slark_ShadowDance *const this)
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


// CDOTA_Ability_Slark_ShadowDance::GetCooldown  (line 1132, @0x0000000002cf6530, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Slark_ShadowDance::GetCooldown(CDOTA_Ability_Slark_ShadowDance *const this, int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "cooldown_scepter", iLevel, 0);
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_Slark_ShadowDance::OnSpellStart  (line 1144, @0x0000000002cf45c0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_slark_shadow_dance_aura", "Hero_Slark.ShadowDance"
void __fastcall CDOTA_Ability_Slark_ShadowDance::OnSpellStart(CDOTA_Ability_Slark_ShadowDance *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "fade_time", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_slark_shadow_dance_aura");
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_slark_shadow_dance_aura", &kv, 0);
  v5 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Slark.ShadowDance", v5);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Slark_ShadowDance_Aura::~CDOTA_Modifier_Slark_ShadowDance_Aura  (line 1166, @0x0000000002d27c30, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Slark_ShadowDance_Aura::~CDOTA_Modifier_Slark_ShadowDance_Aura(
        CDOTA_Modifier_Slark_ShadowDance_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_462F430;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Slark_ShadowDance_Aura::~CDOTA_Modifier_Slark_ShadowDance_Aura  (line 1166, @0x0000000002d27c50, libserver.so)  // inlines: ~CDOTA_Modifier_Slark_ShadowDance_Aura
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Slark_ShadowDance_Aura::~CDOTA_Modifier_Slark_ShadowDance_Aura(
        CDOTA_Modifier_Slark_ShadowDance_Aura *const this)
{
  this->_vptr_CDOTA_Buff = &off_462F430;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Slark_ShadowDance_Aura::IsHidden  (line 1172, @0x0000000002d1e4a0, libserver.so)
bool __fastcall CDOTA_Modifier_Slark_ShadowDance_Aura::IsHidden(CDOTA_Modifier_Slark_ShadowDance_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Slark_ShadowDance_Aura::IsAura  (line 1174, @0x0000000002d1e4b0, libserver.so)
bool __fastcall CDOTA_Modifier_Slark_ShadowDance_Aura::IsAura(CDOTA_Modifier_Slark_ShadowDance_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Slark_ShadowDance_Aura::GetModifierAura  (line 1175, @0x0000000002d1e4c0, libserver.so)
// strings: "modifier_slark_shadow_dance"
const char *__fastcall CDOTA_Modifier_Slark_ShadowDance_Aura::GetModifierAura(
        CDOTA_Modifier_Slark_ShadowDance_Aura *const this)
{
  return "modifier_slark_shadow_dance";
}


// CDOTA_Modifier_Slark_ShadowDance_Aura::GetAuraSearchTeam  (line 1177, @0x0000000002d1e4d0, libserver.so)
int __fastcall CDOTA_Modifier_Slark_ShadowDance_Aura::GetAuraSearchTeam(
        CDOTA_Modifier_Slark_ShadowDance_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Slark_ShadowDance_Aura::GetAuraSearchType  (line 1178, @0x0000000002d1e4e0, libserver.so)
int __fastcall CDOTA_Modifier_Slark_ShadowDance_Aura::GetAuraSearchType(
        CDOTA_Modifier_Slark_ShadowDance_Aura *const this)
{
  return 1;
}


// CDOTA_Modifier_Slark_ShadowDance_Aura::GetAuraRadius  (line 1179, @0x0000000002d1e4f0, libserver.so)
int __fastcall CDOTA_Modifier_Slark_ShadowDance_Aura::GetAuraRadius(CDOTA_Modifier_Slark_ShadowDance_Aura *const this)
{
  return this->scepter_aoe;
}


// CDOTA_Modifier_Slark_ShadowDance_Aura::GetAuraEntityReject  (line 1180, @0x0000000002d2b420, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter
bool __fastcall CDOTA_Modifier_Slark_ShadowDance_Aura::GetAuraEntityReject(
        CDOTA_Modifier_Slark_ShadowDance_Aura *const this,
        CDOTA_BaseNPC *pNPC)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  return !CDOTA_BaseNPC::HasScepter(Caster) && CDOTA_Buff::GetCaster(this) != pNPC;
}


// CDOTA_Modifier_Slark_ShadowDance_Aura::OnCreated  (line 1201, @0x0000000002d091c0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "scepter_aoe"
void __fastcall CDOTA_Modifier_Slark_ShadowDance_Aura::OnCreated(
        CDOTA_Modifier_Slark_ShadowDance_Aura *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->scepter_aoe = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "scepter_aoe", -1, 0);
  else
    this->scepter_aoe = 0;
}


// CDOTA_Modifier_Slark_ShadowDance_Passive::~CDOTA_Modifier_Slark_ShadowDance_Passive  (line 1210, @0x0000000002d27be0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Slark_ShadowDance_Passive::~CDOTA_Modifier_Slark_ShadowDance_Passive(
        CDOTA_Modifier_Slark_ShadowDance_Passive *const this)
{
  this->_vptr_CDOTA_Buff = &off_462F750;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Slark_ShadowDance_Passive::~CDOTA_Modifier_Slark_ShadowDance_Passive  (line 1210, @0x0000000002d27c00, libserver.so)  // inlines: ~CDOTA_Modifier_Slark_ShadowDance_Passive
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Slark_ShadowDance_Passive::~CDOTA_Modifier_Slark_ShadowDance_Passive(
        CDOTA_Modifier_Slark_ShadowDance_Passive *const this)
{
  this->_vptr_CDOTA_Buff = &off_462F750;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Slark_ShadowDance_Passive::IsHidden  (line 1215, @0x0000000002d1e500, libserver.so)
bool __fastcall CDOTA_Modifier_Slark_ShadowDance_Passive::IsHidden(
        CDOTA_Modifier_Slark_ShadowDance_Passive *const this)
{
  return 1;
}


// CDOTA_Modifier_Slark_ShadowDance_Passive::IsPurgable  (line 1216, @0x0000000002d1e510, libserver.so)
bool __fastcall CDOTA_Modifier_Slark_ShadowDance_Passive::IsPurgable(
        CDOTA_Modifier_Slark_ShadowDance_Passive *const this)
{
  return 0;
}


// CDOTA_Modifier_Slark_ShadowDance_Passive::OnCreated  (line 1240, @0x0000000002cf7460, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "activation_delay", "neutral_disable"
void __fastcall CDOTA_Modifier_Slark_ShadowDance_Passive::OnCreated(
        CDOTA_Modifier_Slark_ShadowDance_Passive *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->activation_delay = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->neutral_disable = 0.0;
    goto LABEL_4;
  }
  this->activation_delay = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "activation_delay", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->neutral_disable = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "neutral_disable", -1, 0);
LABEL_4:
  this->m_fPendingStateChangeTime = -1.0;
  this->m_bPendingRefresh = 0;
  CDOTA_Buff::StartIntervalThink(this, 0.1, v5);
}


// CDOTA_Modifier_Slark_ShadowDance_Passive::OnRefresh  (line 1254, @0x0000000002cc9340, libserver.so)
void __fastcall CDOTA_Modifier_Slark_ShadowDance_Passive::OnRefresh(
        CDOTA_Modifier_Slark_ShadowDance_Passive *const this,
        KeyValues *pKV)
{
  this->m_bPendingRefresh = 1;
}


// CDOTA_Modifier_Slark_ShadowDance_Passive::OnDestroy  (line 1261, @0x0000000002ccc7f0, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_slark_shadow_dance_passive_regen"
void __fastcall CDOTA_Modifier_Slark_ShadowDance_Passive::OnDestroy(
        CDOTA_Modifier_Slark_ShadowDance_Passive *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_slark_shadow_dance_passive_regen");
}


// CDOTA_Modifier_Slark_ShadowDance_Passive::OnIntervalThink  (line 1271, @0x0000000002cd0410, libserver.so)  // inlines: DOTAGameRules, GetGameTime, IsElapsed
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName, CountdownTimer::Now, CDOTA_BaseNPC::CanBeSeenByAnyOpposingTeam, KeyValues::KeyValues, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTA_BaseNPC::RemoveModifierByName, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_slark_shadow_dance_passive_regen"
void __fastcall CDOTA_Modifier_Slark_ShadowDance_Passive::OnIntervalThink(
        CDOTA_Modifier_Slark_ShadowDance_Passive *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  bool v3; // r12
  CDOTA_BaseNPC *v4; // rax
  char v5; // al
  float m_fPendingStateChangeTime; // xmm0_4
  float v7; // xmm1_4
  CDOTABaseAbility *v8; // r13
  CDOTA_BaseNPC *v9; // r14
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  float v13; // xmm1_4
  CDOTA_BaseNPC *v14; // rax
  float v15; // xmm0_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *v17; // r13
  CDOTA_BaseNPC *v18; // rax
  float v19; // xmm0_4
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+18h] [rbp-28h]

  v21 = __readfsqword(0x28u);
  Caster = CDOTA_Buff::GetCaster(this);
  v3 = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_slark_shadow_dance_passive_regen", 0) != 0;
  if ( this->m_NeutralHitTimer.m_timestamp.m_Value <= 0.0
    || CountdownTimer::Now(&this->m_NeutralHitTimer) >= this->m_NeutralHitTimer.m_timestamp.m_Value )
  {
    v4 = CDOTA_Buff::GetCaster(this);
    if ( CDOTA_BaseNPC::CanBeSeenByAnyOpposingTeam(v4)
      || (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x10000000) != 0 )
    {
      v5 = 0;
    }
    else
    {
      v12 = CDOTA_Buff::GetCaster(this);
      v5 = (*(v12->_vptr_IHandleEntity + 408))(v12);
    }
    m_fPendingStateChangeTime = this->m_fPendingStateChangeTime;
    if ( v3 )
    {
      if ( m_fPendingStateChangeTime <= 0.0 )
        goto LABEL_28;
      v13 = 0.0;
      if ( g_pGameRules != 0 )
        v13 = *&g_pGameRules[18].m_szQuestName[20];
      if ( v13 <= m_fPendingStateChangeTime )
      {
LABEL_28:
        if ( v5 != 0 || m_fPendingStateChangeTime >= 0.0 )
        {
          if ( this->m_bPendingRefresh )
          {
            KeyValues::KeyValues(&kv, "modifier_slark_shadow_dance_passive_regen");
            Ability = CDOTA_Buff::GetAbility(this);
            v17 = CDOTA_Buff::GetCaster(this);
            v18 = CDOTA_Buff::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(v18, v17, Ability, "modifier_slark_shadow_dance_passive_regen", &kv, 0);
            KeyValues::~KeyValues(&kv);
          }
        }
        else
        {
          v19 = 0.0;
          if ( g_pGameRules != 0 )
            v19 = *&g_pGameRules[18].m_szQuestName[20];
          this->m_fPendingStateChangeTime = v19 + this->activation_delay;
        }
      }
      else
      {
        v14 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::RemoveModifierByName(v14, "modifier_slark_shadow_dance_passive_regen");
        this->m_fPendingStateChangeTime = -1.0;
      }
      this->m_bPendingRefresh = 0;
    }
    else
    {
      if ( m_fPendingStateChangeTime <= 0.0 )
        goto LABEL_23;
      v7 = 0.0;
      if ( g_pGameRules != 0 )
        v7 = *&g_pGameRules[18].m_szQuestName[20];
      if ( v7 <= m_fPendingStateChangeTime )
      {
LABEL_23:
        if ( v5 != 0 && m_fPendingStateChangeTime < 0.0 )
        {
          v15 = 0.0;
          if ( g_pGameRules != 0 )
            v15 = *&g_pGameRules[18].m_szQuestName[20];
          this->m_fPendingStateChangeTime = v15 + this->activation_delay;
        }
      }
      else
      {
        KeyValues::KeyValues(&kv, "modifier_slark_shadow_dance_passive_regen");
        v8 = CDOTA_Buff::GetAbility(this);
        v9 = CDOTA_Buff::GetCaster(this);
        v10 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v10, v9, v8, "modifier_slark_shadow_dance_passive_regen", &kv, 0);
        this->m_fPendingStateChangeTime = -1.0;
        KeyValues::~KeyValues(&kv);
      }
    }
  }
  else if ( v3 )
  {
    v11 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::RemoveModifierByName(v11, "modifier_slark_shadow_dance_passive_regen");
  }
}


// CDOTA_Modifier_Slark_ShadowDance_Passive::DeclareFunctions  (line 1326, @0x0000000002cc9350, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Slark_ShadowDance_Passive::OnTakeDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Slark_ShadowDance_Passive::DeclareFunctions(
        CDOTA_Modifier_Slark_ShadowDance_Passive *const this)
{
  this->m_Functions[134].__pfn = CDOTA_Modifier_Slark_ShadowDance_Passive::OnTakeDamage;
  this->m_Functions[134].__delta = 0;
}


// CDOTA_Modifier_Slark_ShadowDance_Passive::OnTakeDamage  (line 1333, @0x0000000002cda2c0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, NetworkStateChanged, Set, Start, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*, operator=<float>
// calls: CDOTA_Buff::GetParent, CountdownTimer::Now
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Slark_ShadowDance_Passive::OnTakeDamage(
        CDOTA_Modifier_Slark_ShadowDance_Passive *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CEntityInstance *v12; // rax
  double v13; // xmm0_8
  float v14; // [rsp+8h] [rbp-28h]
  float neutral_disable; // [rsp+Ch] [rbp-24h]

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
                if ( v12 != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 && HIBYTE(v12[7].m_CScriptComponent) == 4 )
                {
                  neutral_disable = this->neutral_disable;
                  *&v13 = CountdownTimer::Now(&this->m_NeutralHitTimer) + neutral_disable;
                  if ( *&v13 != this->m_NeutralHitTimer.m_timestamp.m_Value )
                  {
                    v14 = *&v13;
                    (*(this->m_NeutralHitTimer._vptr_CountdownTimer + 2))(
                      &this->m_NeutralHitTimer,
                      12,
                      0xFFFFFFFFLL,
                      0xFFFFFFFFLL);
                    *&v13 = LODWORD(v14);
                    this->m_NeutralHitTimer.m_timestamp.m_Value = v14;
                  }
                  if ( neutral_disable != this->m_NeutralHitTimer.m_duration.m_Value )
                  {
                    (*(this->m_NeutralHitTimer._vptr_CountdownTimer + 2))(
                      &this->m_NeutralHitTimer,
                      8,
                      0xFFFFFFFFLL,
                      0xFFFFFFFFLL,
                      v13,
                      neutral_disable);
                    this->m_NeutralHitTimer.m_duration.m_Value = neutral_disable;
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


// CDOTA_Modifier_Slark_ShadowDance_PassiveRegen::~CDOTA_Modifier_Slark_ShadowDance_PassiveRegen  (line 1354, @0x0000000002d27b90, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Slark_ShadowDance_PassiveRegen::~CDOTA_Modifier_Slark_ShadowDance_PassiveRegen(
        CDOTA_Modifier_Slark_ShadowDance_PassiveRegen *const this)
{
  this->_vptr_CDOTA_Buff = &off_462FA70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Slark_ShadowDance_PassiveRegen::~CDOTA_Modifier_Slark_ShadowDance_PassiveRegen  (line 1354, @0x0000000002d27bb0, libserver.so)  // inlines: ~CDOTA_Modifier_Slark_ShadowDance_PassiveRegen
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Slark_ShadowDance_PassiveRegen::~CDOTA_Modifier_Slark_ShadowDance_PassiveRegen(
        CDOTA_Modifier_Slark_ShadowDance_PassiveRegen *const this)
{
  this->_vptr_CDOTA_Buff = &off_462FA70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Slark_ShadowDance_PassiveRegen::IsPurgable  (line 1359, @0x0000000002d1e520, libserver.so)
bool __fastcall CDOTA_Modifier_Slark_ShadowDance_PassiveRegen::IsPurgable(
        CDOTA_Modifier_Slark_ShadowDance_PassiveRegen *const this)
{
  return 0;
}


// CDOTA_Modifier_Slark_ShadowDance_PassiveRegen::OnCreated  (line 1377, @0x0000000002d09b50, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_regen_pct"
void __fastcall CDOTA_Modifier_Slark_ShadowDance_PassiveRegen::OnCreated(
        CDOTA_Modifier_Slark_ShadowDance_PassiveRegen *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_movement_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_regen_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_regen_pct", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_movement_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_regen_pct = 0;
}


// CDOTA_Modifier_Slark_ShadowDance_PassiveRegen::OnRefresh  (line 1391, @0x0000000002d09760, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_regen_pct"
void __fastcall CDOTA_Modifier_Slark_ShadowDance_PassiveRegen::OnRefresh(
        CDOTA_Modifier_Slark_ShadowDance_PassiveRegen *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_movement_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_regen_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_regen_pct", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_movement_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_regen_pct = 0;
}


// CDOTA_Modifier_Slark_ShadowDance_PassiveRegen::DeclareFunctions  (line 1399, @0x0000000002cc9370, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Slark_ShadowDance_PassiveRegen::GetModifierHealthRegenPercentage(CModifierParams const&), CDOTA_Modifier_Slark_ShadowDance_PassiveRegen::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Slark_ShadowDance_PassiveRegen::DeclareFunctions(
        CDOTA_Modifier_Slark_ShadowDance_PassiveRegen *const this)
{
  this->m_Functions[57].__pfn = CDOTA_Modifier_Slark_ShadowDance_PassiveRegen::GetModifierHealthRegenPercentage;
  this->m_Functions[57].__delta = 0;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[13].__pfn = CDOTA_Modifier_Slark_ShadowDance_PassiveRegen::GetModifierMoveSpeedBonus_Percentage;
}


// CDOTA_Modifier_Slark_ShadowDance_PassiveRegen::GetModifierMoveSpeedBonus_Percentage  (line 1407, @0x0000000002cd2580, libserver.so)
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Slark_ShadowDance_PassiveRegen::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Slark_ShadowDance_PassiveRegen *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value )
    return 1uLL;
  *v3.m128i_i32 = this->bonus_movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Slark_ShadowDance_PassiveRegen::GetModifierHealthRegenPercentage  (line 1417, @0x0000000002cd25d0, libserver.so)
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Slark_ShadowDance_PassiveRegen::GetModifierHealthRegenPercentage(
        CDOTA_Modifier_Slark_ShadowDance_PassiveRegen *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value )
    return 1uLL;
  *v3.m128i_i32 = this->bonus_regen_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Slark_ShadowDance::~CDOTA_Modifier_Slark_ShadowDance  (line 1429, @0x0000000002d27520, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Slark_ShadowDance::~CDOTA_Modifier_Slark_ShadowDance(
        CDOTA_Modifier_Slark_ShadowDance *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Slark_ShadowDance::~CDOTA_Modifier_Slark_ShadowDance  (line 1429, @0x0000000002d27540, libserver.so)  // inlines: ~CDOTA_Modifier_Invisible, ~CDOTA_Modifier_Slark_ShadowDance
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Slark_ShadowDance::~CDOTA_Modifier_Slark_ShadowDance(
        CDOTA_Modifier_Slark_ShadowDance *const this)
{
  this->_vptr_CDOTA_Buff = &off_411DA10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Slark_ShadowDance::GetStatusEffectName  (line 1445, @0x0000000002d1e530, libserver.so)
// strings: "particles/status_fx/status_effect_slark_shadow_dance.vpcf"
const char *__fastcall CDOTA_Modifier_Slark_ShadowDance::GetStatusEffectName(
        CDOTA_Modifier_Slark_ShadowDance *const this)
{
  return "particles/status_fx/status_effect_slark_shadow_dance.vpcf";
}


// CDOTA_Modifier_Slark_ShadowDance::StatusEffectPriority  (line 1446, @0x0000000002d1e540, libserver.so)
int __fastcall CDOTA_Modifier_Slark_ShadowDance::StatusEffectPriority(CDOTA_Modifier_Slark_ShadowDance *const this)
{
  return 100;
}


// CDOTA_Modifier_Slark_ShadowDance::GetPriority  (line 1447, @0x0000000002d1e550, libserver.so)
int __fastcall CDOTA_Modifier_Slark_ShadowDance::GetPriority(CDOTA_Modifier_Slark_ShadowDance *const this)
{
  return 3;
}


// CDOTA_Modifier_Slark_ShadowDance::CheckState  (line 1449, @0x0000000002d2cd40, libserver.so)  // inlines: Enable
// calls: CDOTA_Modifier_Invisible::CheckState
void __fastcall CDOTA_Modifier_Slark_ShadowDance::CheckState(
        CDOTA_Modifier_Slark_ShadowDance *const this,
        CDOTABuffState *const buffState)
{
  CDOTA_Modifier_Invisible::CheckState(this, buffState);
  buffState->m_nEnabledStateMask |= 0x400000000uLL;
  buffState->m_nDisabledStateMask &= ~0x400000000uLL;
}


// CDOTA_Modifier_Slark_ShadowDance::OnCreated  (line 1465, @0x0000000002cf7790, libserver.so)  // inlines: DotaRetrieveAbilityValue<float>, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetSerialNumber, GetTeamNumber, Set, SetBool, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, KeyValues::SetInt, CDOTA_Modifier_Invisible::OnCreated, CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, DOTA_CreateUnitByName, CDOTAFogOfWarSystem::AddFOWEntity, KeyValues::KeyValues, CDOTA_BaseNPC::HasScepter (18 total)
// strings: "fadetime", "subtle", "cancelattack", "npc_dota_slark_visual", "modifier_slark_shadow_dance_visual"
void __fastcall CDOTA_Modifier_Slark_ShadowDance::OnCreated(
        CDOTA_Modifier_Slark_ShadowDance *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v5; // xmm1_4
  CDOTA_BaseNPC *Caster; // r12
  int m_Value; // r14d
  CDOTA_BaseNPC *v8; // r13
  CDOTA_BaseNPC *v9; // r12
  CDOTA_BaseNPC *v10; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *UnitByName; // rax
  float v13; // xmm1_4
  CDOTA_BaseNPC *v14; // r12
  CDOTA_BaseNPC *v15; // rax
  bool HasScepter; // al
  CDOTABaseAbility *v17; // r14
  CDOTA_BaseNPC *v18; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v20; // eax
  __int16 v21; // cx
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v23; // [rsp+18h] [rbp-28h]

  v23 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "fade_time", -1, 0);
  KeyValues::SetFloat(pKV, "fadetime", v5);
  KeyValues::SetInt(pKV, "subtle", 1);
  KeyValues::SetInt(pKV, "cancelattack", 0);
  CDOTA_Modifier_Invisible::OnCreated(this, pKV);
  Caster = CDOTA_Buff::GetCaster(this);
  if ( Caster == CDOTA_Buff::GetParent(this) )
  {
    m_Value = CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value;
    v8 = CDOTA_Buff::GetCaster(this);
    v9 = CDOTA_Buff::GetCaster(this);
    v10 = CDOTA_Buff::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
    UnitByName = DOTA_CreateUnitByName("npc_dota_slark_visual", AbsOrigin, 0, v9, v8, m_Value);
    v14 = UnitByName;
    if ( UnitByName != 0 )
    {
      CDOTAFogOfWarSystem::AddFOWEntity(&g_DOTAFogOfWarSystem, UnitByName);
      KeyValues::KeyValues(&kv, "modifier_slark_shadow_dance_visual");
      v15 = CDOTA_Buff::GetCaster(this);
      HasScepter = CDOTA_BaseNPC::HasScepter(v15);
      KeyValues::AddInt(&kv, "scepter", HasScepter);
      v17 = CDOTA_Buff::GetAbility(this);
      v18 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v14, v18, v17, "modifier_slark_shadow_dance_visual", &kv, 0);
      m_pEntity = v14->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v20 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v21 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v21 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(this->m_hVisibleEntity.m_Index) = v21 | this->m_hVisibleEntity.m_Index & 0x8000;
        this->m_hVisibleEntity.m_Index = (v20 << 15) | this->m_hVisibleEntity.m_Index & 0x7FFF;
      }
      else
      {
        this->m_hVisibleEntity.m_Index = -1;
      }
      KeyValues::~KeyValues(&kv);
    }
    CDOTA_Buff::StartIntervalThink(this, 0.0, v13);
  }
}


// CDOTA_Modifier_Slark_ShadowDance::OnDestroy  (line 1517, @0x0000000002cd8000, libserver.so)  // inlines: GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*
// calls: UTIL_Remove
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Slark_ShadowDance::OnDestroy(CDOTA_Modifier_Slark_ShadowDance *const this)
{
  uint32 m_Index; // eax
  CEntityInstance *m_pInstance; // rdi
  unsigned __int16 v4; // cx
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx

  m_Index = this->m_hVisibleEntity.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v4 = this->m_hVisibleEntity.m_Index;
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v4 >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[v4 & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  UTIL_Remove(m_pInstance);
}


// CDOTA_Modifier_Slark_ShadowDance::OnIntervalThink  (line 1526, @0x0000000002cd9b10, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CEntityInstance*, operator!=<CBaseEntity>, operator->
// calls: CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CBaseEntity::SetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Slark_ShadowDance::OnIntervalThink(CDOTA_Modifier_Slark_ShadowDance *const this)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  uint32 v7; // edx
  CBaseEntity *m_pInstance; // rdi
  CEntityIdentity *v9; // rcx
  CEntityIdentity *v10; // rcx

  m_Index = this->m_hVisibleEntity.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hVisibleEntity.m_Index) >> 9) & 0x3F];
    if ( v3 != 0 )
    {
      v4 = &v3[this->m_hVisibleEntity.m_Index & 0x1FF];
      if ( v4 != 0 && m_Index == v4->m_EHandle.m_Index && v4->m_pInstance != 0 )
      {
        Caster = CDOTA_Buff::GetCaster(this);
        AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
        v7 = this->m_hVisibleEntity.m_Index;
        m_pInstance = 0;
        if ( v7 + 2 > 1 )
        {
          v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hVisibleEntity.m_Index) >> 9) & 0x3F];
          if ( v9 != 0 )
          {
            v10 = &v9[this->m_hVisibleEntity.m_Index & 0x1FF];
            if ( v10 != 0 && v7 == v10->m_EHandle.m_Index )
              m_pInstance = v10->m_pInstance;
          }
        }
        CBaseEntity::SetAbsOrigin(m_pInstance, AbsOrigin);
      }
    }
  }
}


// CDOTA_Modifier_Slark_ShadowDance::DeclareFunctions  (line 1538, @0x0000000002cc93b0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Slark_ShadowDance::GetModifierPersistentInvisibility(CModifierParams const&), CDOTA_Modifier_Slark_ShadowDance::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_Slark_ShadowDance::DeclareFunctions(CDOTA_Modifier_Slark_ShadowDance *const this)
{
  this->m_Functions[10].__pfn = CDOTA_Modifier_Slark_ShadowDance::GetModifierPersistentInvisibility;
  this->m_Functions[9].__pfn = (&stru_10 + 697);
  this->m_Functions[9].__delta = 0;
  this->m_Functions[130].__pfn = (&stru_10 + 721);
  this->m_Functions[130].__delta = 0;
  this->m_Functions[10].__delta = 0;
  this->m_Functions[128].__pfn = (&stru_10 + 705);
  this->m_Functions[128].__delta = 0;
  this->m_Functions[120].__pfn = (&stru_10 + 713);
  this->m_Functions[120].__delta = 0;
  this->m_Functions[155].__pfn = CDOTA_Modifier_Slark_ShadowDance::GetActivityTranslationModifiers;
  this->m_Functions[155].__delta = 0;
}


// CDOTA_Modifier_Slark_ShadowDance::OnAttack  (line 1551, @0x0000000002cc9440, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Slark_ShadowDance::OnAttack(
        CDOTA_Modifier_Slark_ShadowDance *const this,
        const CModifierParams *const params)
{
  return 1uLL;
}


// CDOTA_Modifier_Slark_ShadowDance::OnAbilityExecuted  (line 1559, @0x0000000002cc9450, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Slark_ShadowDance::OnAbilityExecuted(
        CDOTA_Modifier_Slark_ShadowDance *const this,
        const CModifierParams *const params)
{
  return 1uLL;
}


// CDOTA_Modifier_Slark_ShadowDance::GetModifierPersistentInvisibility  (line 1567, @0x0000000002cc9460, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Slark_ShadowDance::GetModifierPersistentInvisibility(
        CDOTA_Modifier_Slark_ShadowDance *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Slark_ShadowDance::OnBreakInvisibility  (line 1574, @0x0000000002cc9480, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Slark_ShadowDance::OnBreakInvisibility(
        CDOTA_Modifier_Slark_ShadowDance *const this,
        const CModifierParams *const params)
{
  return 1uLL;
}


// CDOTA_Modifier_Slark_ShadowDance::GetActivityTranslationModifiers  (line 1582, @0x0000000002cc9490, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Slark_ShadowDance::GetActivityTranslationModifiers(
        CDOTA_Modifier_Slark_ShadowDance *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "shadow_dance";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_Slark_ShadowDance_Visual::~CDOTA_Modifier_Slark_ShadowDance_Visual  (line 1590, @0x0000000002d27b40, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Slark_ShadowDance_Visual::~CDOTA_Modifier_Slark_ShadowDance_Visual(
        CDOTA_Modifier_Slark_ShadowDance_Visual *const this)
{
  this->_vptr_CDOTA_Buff = &off_46300D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Slark_ShadowDance_Visual::~CDOTA_Modifier_Slark_ShadowDance_Visual  (line 1590, @0x0000000002d27b60, libserver.so)  // inlines: ~CDOTA_Modifier_Slark_ShadowDance_Visual
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Slark_ShadowDance_Visual::~CDOTA_Modifier_Slark_ShadowDance_Visual(
        CDOTA_Modifier_Slark_ShadowDance_Visual *const this)
{
  this->_vptr_CDOTA_Buff = &off_46300D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Slark_ShadowDance_Visual::IsHidden  (line 1595, @0x0000000002d1e560, libserver.so)
bool __fastcall CDOTA_Modifier_Slark_ShadowDance_Visual::IsHidden(CDOTA_Modifier_Slark_ShadowDance_Visual *const this)
{
  return 1;
}


// CDOTA_Modifier_Slark_ShadowDance_Visual::IsPurgable  (line 1596, @0x0000000002d1e570, libserver.so)
bool __fastcall CDOTA_Modifier_Slark_ShadowDance_Visual::IsPurgable(
        CDOTA_Modifier_Slark_ShadowDance_Visual *const this)
{
  return 0;
}


// CDOTA_Modifier_Slark_ShadowDance_Visual::AddCustomTransmiterData  (line 1604, @0x0000000002d1e580, libserver.so)  // inlines: set_active, set_has_active
void __fastcall CDOTA_Modifier_Slark_ShadowDance_Visual::AddCustomTransmiterData(
        CDOTA_Modifier_Slark_ShadowDance_Visual *const this,
        CDOTAModifierBuffTableEntry *const entry)
{
  bool m_bScepter; // al

  m_bScepter = this->m_bScepter;
  *(entry + 4) |= 0x20000000u;
  *(entry + 134) = m_bScepter;
}


// CDOTA_Modifier_Slark_ShadowDance_Visual::OnCreated  (line 1624, @0x0000000002ccb730, libserver.so)
// calls: KeyValues::GetInt
void __fastcall CDOTA_Modifier_Slark_ShadowDance_Visual::OnCreated(
        CDOTA_Modifier_Slark_ShadowDance_Visual *const this,
        KeyValues *pKV)
{
  this->m_bScepter = KeyValues::GetInt(pKV, "scepter", 0) != 0;
}


// CDOTA_Modifier_Slark_ShadowDance_Visual::CheckState  (line 1652, @0x0000000002cc94b0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Slark_ShadowDance_Visual::CheckState(
        CDOTA_Modifier_Slark_ShadowDance_Visual *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x2804100uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFD7FBEFFLL;
}


