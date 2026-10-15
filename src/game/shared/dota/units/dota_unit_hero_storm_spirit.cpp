// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_storm_spirit.cpp:34
class CDOTA_Unit_Hero_StormSpirit : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_StormSpirit(CDOTA_Unit_Hero_StormSpirit &);
	CDOTA_Unit_Hero_StormSpirit(CDOTA_Unit_Hero_StormSpirit &);
	CDOTA_Unit_Hero_StormSpirit();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDOTA_Unit_Hero_StormSpirit();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_storm_spirit.cpp:41
class C_CDOTA_Unit_Hero_StormSpirit_MapInstall {
	C_CDOTA_Unit_Hero_StormSpirit_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_storm_spirit.cpp:54
class CDOTA_Ability_StormSpirit_StaticRemnant : public CDOTABaseAbility {
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
	CDOTA_Ability_StormSpirit_StaticRemnant(CDOTA_Ability_StormSpirit_StaticRemnant &);
	CDOTA_Ability_StormSpirit_StaticRemnant(CDOTA_Ability_StormSpirit_StaticRemnant &);
	CDOTA_Ability_StormSpirit_StaticRemnant();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool ShouldSpeakAbilityConcept(int);
	virtual bool OnAbilityPhaseStart();
	virtual void OnSpellStart();
	void CreateRemnant(const Vector &);
	virtual const char * GetStolenActivityModifier();
	virtual float GetAOERadius();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_StormSpirit_StaticRemnant();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[298] ShouldSpeakAbilityConcept
	// vtable[264] OnAbilityPhaseStart
	// vtable[266] OnSpellStart
	// vtable[310] GetStolenActivityModifier
	// vtable[333] GetAOERadius
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 928
};

// src/game/shared/dota/units/dota_unit_hero_storm_spirit.cpp:76
class C_CDOTA_Ability_StormSpirit_StaticRemnant_MapInstall {
	C_CDOTA_Ability_StormSpirit_StaticRemnant_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_storm_spirit.cpp:149
class CDOTA_Modifier_StormSpirit_StaticRemnantThinker : public CDOTA_Buff {
public:

private:

	int static_remnant_radius;  // +0xba8
	int static_remnant_damage_radius;  // +0xbac
	int static_remnant_damage;  // +0xbb0
	float static_remnant_delay;  // +0xbb4
	int m_iSearchRadius;  // +0xbb8
	int m_iDamageRadius;  // +0xbbc
	CDOTA_Modifier_StormSpirit_StaticRemnantThinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t OnHeroKilled(const CModifierParams &);
	virtual ~CDOTA_Modifier_StormSpirit_StaticRemnantThinker();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[5] CheckState
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_storm_spirit.cpp:306
class CDOTA_Ability_StormSpirit_ElectricVortex : public CDOTABaseAbility {
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
	CDOTA_Ability_StormSpirit_ElectricVortex(CDOTA_Ability_StormSpirit_ElectricVortex &);
	CDOTA_Ability_StormSpirit_ElectricVortex(CDOTA_Ability_StormSpirit_ElectricVortex &);
	CDOTA_Ability_StormSpirit_ElectricVortex();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual void OnSpellStart();
	virtual int GetBehavior();
	virtual const char * GetStolenActivityModifier();
	void CastVortex(CDOTA_BaseNPC *, bool);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_StormSpirit_ElectricVortex();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[226] GetCastRange
	// vtable[266] OnSpellStart
	// vtable[251] GetBehavior
	// vtable[310] GetStolenActivityModifier
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_storm_spirit.cpp:325
class C_CDOTA_Ability_StormSpirit_ElectricVortex_MapInstall {
	C_CDOTA_Ability_StormSpirit_ElectricVortex_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_storm_spirit.cpp:417
class CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow : public CDOTA_Buff {
public:

private:

	int electric_vortex_self_slow;  // +0xba8
	CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual bool IsDebuff();
	virtual const char * GetTexture();
	virtual void OnCreated(KeyValues *);
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow();

	// vtable[65] DeclareFunctions
	// vtable[12] IsDebuff
	// vtable[32] GetTexture
	// vtable[57] OnCreated
	// vtable[67] GetEffectName
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_storm_spirit.cpp:455
class CDOTA_Modifier_StormSpirit_ElectricVortex_Pull : public CDOTA_Buff, public CHorizontalMotionController {
public:

private:

	int electric_vortex_pull_units_per_second;  // +0xbc0
	float electric_vortex_pull_tether_range;  // +0xbc4
	CDOTA_Modifier_StormSpirit_ElectricVortex_Pull();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsStunDebuff();
	virtual void CheckState(CDOTABuffState &);
	virtual void OnIntervalThink();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual bool IsHorizontalMotionValidToApply();
	virtual void DeclareFunctions();
	virtual bool IsMotionController();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	virtual ~CDOTA_Modifier_StormSpirit_ElectricVortex_Pull();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[16] IsStunDebuff
	// vtable[5] CheckState
	// vtable[56] OnIntervalThink
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] IsHorizontalMotionValidToApply
	// vtable[65] DeclareFunctions
	// vtable[21] IsMotionController
	// sizeof = 3024
};

// src/game/shared/dota/units/dota_unit_hero_storm_spirit.cpp:571
class CDOTA_Modifier_StormSpirit_ElectricVortex_NoStack : public CDOTA_Buff {
public:

	CDOTA_Modifier_StormSpirit_ElectricVortex_NoStack(CDOTA_Modifier_StormSpirit_ElectricVortex_NoStack &);
	CDOTA_Modifier_StormSpirit_ElectricVortex_NoStack(const CDOTA_Modifier_StormSpirit_ElectricVortex_NoStack &);
	CDOTA_Modifier_StormSpirit_ElectricVortex_NoStack();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_StormSpirit_ElectricVortex_NoStack();

	// vtable[14] IsPurgable
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_storm_spirit.cpp:591
class CDOTA_Ability_StormSpirit_Overload : public CDOTABaseAbility {
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
	CDOTA_Ability_StormSpirit_Overload(CDOTA_Ability_StormSpirit_Overload &);
	CDOTA_Ability_StormSpirit_Overload(CDOTA_Ability_StormSpirit_Overload &);
	CDOTA_Ability_StormSpirit_Overload();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_StormSpirit_Overload();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_storm_spirit.cpp:632
class CDOTA_Modifier_StormSpirit_Overload_Passive : public CDOTA_Buff {
public:

	CDOTA_Modifier_StormSpirit_Overload_Passive();
	virtual void DeclareFunctions();
	ModifierVariant_t OnAbilityExecuted(const CModifierParams &);
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_StormSpirit_Overload_Passive();

	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_storm_spirit.cpp:673
class CDOTA_Modifier_StormSpirit_Overload : public CDOTA_Buff {
public:

private:

	int overload_aoe;  // +0xba8
	CDOTA_Modifier_StormSpirit_Overload();
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttacked(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_StormSpirit_Overload();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_storm_spirit.cpp:766
class CDOTA_Modifier_StormSpirit_OverloadSlow : public CDOTA_Buff {
public:

private:

	int overload_move_slow;  // +0xba8
	int overload_attack_slow;  // +0xbac
	CDOTA_Modifier_StormSpirit_OverloadSlow();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual const char * GetTexture();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_StormSpirit_OverloadSlow();

	// vtable[65] DeclareFunctions
	// vtable[32] GetTexture
	// vtable[57] OnCreated
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_storm_spirit.cpp:815
class CDOTA_Ability_StormSpirit_BallLightning : public CDOTABaseAbility, public CHorizontalMotionController {
public:

private:

	int ball_lightning_initial_mana_base;  // +0x39c
	int ball_lightning_initial_mana_percentage;  // +0x3a0
	int ball_lightning_travel_cost_base;  // +0x3a4
	float ball_lightning_travel_cost_percent;  // +0x3a8
	int m_iProjectileID;  // +0x3ac
	float m_fDistanceAccumulator;  // +0x3c8
	int scepter_remnant_interval;  // +0x3cc
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
	CDOTA_Ability_StormSpirit_BallLightning(CDOTA_Ability_StormSpirit_BallLightning &);
	CDOTA_Ability_StormSpirit_BallLightning(CDOTA_Ability_StormSpirit_BallLightning &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Ability_StormSpirit_BallLightning();
	virtual void OnSpellStart();
	virtual void OnProjectileThink(const Vector &);
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual int GetManaCost(int);
	float GetTravelManaCost();
	virtual const char * GetStolenActivityModifier();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_StormSpirit_BallLightning();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[291] OnProjectileThink
	// vtable[289] OnProjectileHit
	// vtable[333] UpdateHorizontalMotion
	// vtable[334] OnHorizontalMotionInterrupted
	// vtable[273] GetManaCost
	// vtable[310] GetStolenActivityModifier
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 976
};

// src/game/shared/dota/units/dota_unit_hero_storm_spirit.cpp:858
class C_CDOTA_Ability_StormSpirit_BallLightning_MapInstall {
	C_CDOTA_Ability_StormSpirit_BallLightning_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_storm_spirit.cpp:1063
class CDOTA_Modifier_StormSpirit_BallLightning : public CDOTA_Buff {
public:

	CDOTA_Modifier_StormSpirit_BallLightning();
	virtual const char * GetTexture();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	ModifierVariant_t GetForceDrawOnMinimap(const CModifierParams &);
	virtual ~CDOTA_Modifier_StormSpirit_BallLightning();

	// vtable[32] GetTexture
	// vtable[5] CheckState
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_storm_spirit.cpp:1152
class CDOTA_Modifier_Holdout_StaticRemnantThinker : public CDOTA_Buff {
public:

private:

	int static_remnant_radius;  // +0xba8
	int static_remnant_damage_radius;  // +0xbac
	int static_remnant_damage;  // +0xbb0
	float static_remnant_delay;  // +0xbb4
	float overload_duration;  // +0xbb8
	CDOTA_Modifier_Holdout_StaticRemnantThinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Holdout_StaticRemnantThinker();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[5] CheckState
	// vtable[11] IsHidden
	// sizeof = 3008
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_StormSpirit::~CDOTA_Unit_Hero_StormSpirit  (line 34, @0x0000000002a67ec0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_StormSpirit::~CDOTA_Unit_Hero_StormSpirit(CDOTA_Unit_Hero_StormSpirit *const this)
{
  this->_vptr_IHandleEntity = &off_439B6B0;
  this->_vptr_INextBotEventResponder = &off_439C690;
  this->_vptr_CObstructionObject = &off_439C9C0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_StormSpirit::~CDOTA_Unit_Hero_StormSpirit  (line 34, @0x0000000002a67f00, libserver.so)  // inlines: ~CDOTA_Unit_Hero_StormSpirit
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_StormSpirit::~CDOTA_Unit_Hero_StormSpirit(CDOTA_Unit_Hero_StormSpirit *const this)
{
  this->_vptr_IHandleEntity = &off_439B6B0;
  this->_vptr_INextBotEventResponder = &off_439C690;
  this->_vptr_CObstructionObject = &off_439C9C0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_StormSpirit::Schema_DynamicBinding  (line 36, @0x0000000002a60ba0, libserver.so)
// globals: CDOTA_Unit_Hero_StormSpirit::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_StormSpirit::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_StormSpirit *const this)
{
  return CDOTA_Unit_Hero_StormSpirit::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_StormSpirit::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 36, @0x0000000002a60bd0, libserver.so)
// globals: CDOTA_Unit_Hero_StormSpirit::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_StormSpirit::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_StormSpirit::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_StormSpirit::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_StormSpirit::CEntityInstanceEntityClass::DestructInstance  (line 36, @0x0000000002a60be0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_StormSpirit>
void __fastcall CDOTA_Unit_Hero_StormSpirit::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_StormSpirit::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_StormSpirit::CEntityInstanceEntityClass::FreeInstance  (line 36, @0x0000000002a60c00, libserver.so)
void __fastcall CDOTA_Unit_Hero_StormSpirit::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_StormSpirit::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_StormSpirit::CEntityInstanceEntityClass::CanAllocate  (line 36, @0x0000000002a60c20, libserver.so)
bool __fastcall CDOTA_Unit_Hero_StormSpirit::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_StormSpirit::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_StormSpirit::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 36, @0x0000000002a60c30, libserver.so)
// globals: CDOTA_Unit_Hero_StormSpirit::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_StormSpirit::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_StormSpirit::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_StormSpirit::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_StormSpirit::CEntityInstanceEntityClass::AllocateInstance  (line 36, @0x0000000002a63db0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_StormSpirit::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_StormSpirit::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_StormSpirit::CEntityInstanceEntityClass::ConstructInstance  (line 36, @0x0000000002a65c80, libserver.so)  // inlines: CDOTA_Unit_Hero_StormSpirit, Construct<CDOTA_Unit_Hero_StormSpirit>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_StormSpirit::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_StormSpirit::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_439B6B0;
    *(p + 236) = &off_439C690;
    *(p + 257) = &off_439C9C0;
  }
  return p;
}


// CDOTA_Unit_Hero_StormSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 36, @0x0000000002a6b5c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_StormSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_StormSpirit::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_StormSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 36, @0x0000000002a6b750, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_StormSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_StormSpirit::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_StormSpirit::GetEntityClassInternal  (line 36, @0x0000000002a71250, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "npc_dota_hero_storm_spirit", "CDOTA_Unit_Hero_StormSpirit"
// globals: `guard variable for'CDOTA_Unit_Hero_StormSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_StormSpiritClass, CDOTA_Unit_Hero_StormSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_StormSpiritClass, __dso_handle, CDOTA_Unit_Hero_StormSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_StormSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_StormSpiritClassInfo, CDOTA_Unit_Hero_StormSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_StormSpiritClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_StormSpirit::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_StormSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_StormSpiritClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_StormSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_StormSpiritClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_StormSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_StormSpiritClass);
    CDOTA_Unit_Hero_StormSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_StormSpiritClass._vptr_CEntityClass = off_439B630;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_StormSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_StormSpiritClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_StormSpirit::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_StormSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_StormSpiritClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_StormSpiritClass != 0 )
    return &CDOTA_Unit_Hero_StormSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_StormSpiritClass;
  if ( `guard variable for'CDOTA_Unit_Hero_StormSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_StormSpiritClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_StormSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_StormSpiritClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_StormSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_StormSpiritClassInfo,
      "CDOTA_Unit_Hero_StormSpirit",
      "npc_dota_hero_storm_spirit",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_StormSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_StormSpiritClassInfo);
  }
  CDOTA_Unit_Hero_StormSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_StormSpiritClass.m_pClassInfo = &CDOTA_Unit_Hero_StormSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_StormSpiritClassInfo;
  CDOTA_Unit_Hero_StormSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_StormSpiritClass.m_pBaseClassInfo = CDOTA_Unit_Hero_StormSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_StormSpiritClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_StormSpiritClass = &CDOTA_Unit_Hero_StormSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_StormSpiritClass;
  CDOTA_Unit_Hero_StormSpirit::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_StormSpiritClassInfo.m_pClass = &CDOTA_Unit_Hero_StormSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_StormSpiritClass;
  CDOTA_Unit_Hero_StormSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_StormSpiritClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_StormSpiritClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_StormSpirit::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_StormSpiritClass;
}


// CDOTA_Unit_Hero_StormSpirit::YouForgotToImplementOrDeclareServerClass  (line 41, @0x0000000002a3f180, libserver.so)
int __fastcall CDOTA_Unit_Hero_StormSpirit::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_StormSpirit *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_StormSpirit::GetServerClass  (line 41, @0x0000000002a48670, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_StormSpirit::GetServerClass(CDOTA_Unit_Hero_StormSpirit *const this)
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


// CDOTA_Ability_StormSpirit_StaticRemnant::~CDOTA_Ability_StormSpirit_StaticRemnant  (line 54, @0x0000000002a67350, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_StormSpirit_StaticRemnant::~CDOTA_Ability_StormSpirit_StaticRemnant(
        CDOTA_Ability_StormSpirit_StaticRemnant *const this)
{
  this->_vptr_IHandleEntity = &off_439CA90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_StormSpirit_StaticRemnant::~CDOTA_Ability_StormSpirit_StaticRemnant  (line 54, @0x0000000002a67370, libserver.so)  // inlines: ~CDOTA_Ability_StormSpirit_StaticRemnant
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_StormSpirit_StaticRemnant::~CDOTA_Ability_StormSpirit_StaticRemnant(
        CDOTA_Ability_StormSpirit_StaticRemnant *const this)
{
  this->_vptr_IHandleEntity = &off_439CA90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_StormSpirit_StaticRemnant::Schema_DynamicBinding  (line 56, @0x0000000002a60c40, libserver.so)
// globals: CDOTA_Ability_StormSpirit_StaticRemnant::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_StormSpirit_StaticRemnant::Schema_DynamicBinding(
        const CDOTA_Ability_StormSpirit_StaticRemnant *const this)
{
  return CDOTA_Ability_StormSpirit_StaticRemnant::s_pSchemaBinding;
}


// CDOTA_Ability_StormSpirit_StaticRemnant::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 56, @0x0000000002a60c50, libserver.so)
// globals: CDOTA_Ability_StormSpirit_StaticRemnant::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_StormSpirit_StaticRemnant::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_StormSpirit_StaticRemnant::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_StormSpirit_StaticRemnant::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_StormSpirit_StaticRemnant::CEntityInstanceEntityClass::DestructInstance  (line 56, @0x0000000002a60c60, libserver.so)  // inlines: Destruct<CDOTA_Ability_StormSpirit_StaticRemnant>
void __fastcall CDOTA_Ability_StormSpirit_StaticRemnant::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_StormSpirit_StaticRemnant::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_StormSpirit_StaticRemnant::CEntityInstanceEntityClass::FreeInstance  (line 56, @0x0000000002a60c80, libserver.so)
void __fastcall CDOTA_Ability_StormSpirit_StaticRemnant::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_StormSpirit_StaticRemnant::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_StormSpirit_StaticRemnant::CEntityInstanceEntityClass::CanAllocate  (line 56, @0x0000000002a60ca0, libserver.so)
bool __fastcall CDOTA_Ability_StormSpirit_StaticRemnant::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_StormSpirit_StaticRemnant::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_StormSpirit_StaticRemnant::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 56, @0x0000000002a60cb0, libserver.so)
// globals: CDOTA_Ability_StormSpirit_StaticRemnant::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_StormSpirit_StaticRemnant::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_StormSpirit_StaticRemnant::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_StormSpirit_StaticRemnant::s_pSchemaBinding;
}


// CDOTA_Ability_StormSpirit_StaticRemnant::CEntityInstanceEntityClass::AllocateInstance  (line 56, @0x0000000002a63df0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_StormSpirit_StaticRemnant::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_StormSpirit_StaticRemnant::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_StormSpirit_StaticRemnant::CEntityInstanceEntityClass::ConstructInstance  (line 56, @0x0000000002a66000, libserver.so)  // inlines: CDOTA_Ability_StormSpirit_StaticRemnant, Construct<CDOTA_Ability_StormSpirit_StaticRemnant>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_StormSpirit_StaticRemnant::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_StormSpirit_StaticRemnant::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_439CA90;
  }
  return p;
}


// CDOTA_Ability_StormSpirit_StaticRemnant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 56, @0x0000000002a6aac0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_StormSpirit_StaticRemnant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_StormSpirit_StaticRemnant::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_StormSpirit_StaticRemnant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 56, @0x0000000002a6aae0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_StormSpirit_StaticRemnant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_StormSpirit_StaticRemnant::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_StormSpirit_StaticRemnant::GetEntityClassInternal  (line 56, @0x0000000002a713a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "storm_spirit_static_remnant", "CDOTA_Ability_StormSpirit_StaticRemnant"
// globals: `guard variable for'CDOTA_Ability_StormSpirit_StaticRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_StaticRemnantClass, CDOTA_Ability_StormSpirit_StaticRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_StaticRemnantClass, __dso_handle, CDOTA_Ability_StormSpirit_StaticRemnant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_StormSpirit_StaticRemnant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_StaticRemnantClassInfo, CDOTA_Ability_StormSpirit_StaticRemnant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_StaticRemnantClassInfo
CEntityClass *__cdecl CDOTA_Ability_StormSpirit_StaticRemnant::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_StormSpirit_StaticRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_StaticRemnantClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_StormSpirit_StaticRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_StaticRemnantClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_StormSpirit_StaticRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_StaticRemnantClass);
    CDOTA_Ability_StormSpirit_StaticRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_StaticRemnantClass._vptr_CEntityClass = off_439CA10;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_StormSpirit_StaticRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_StaticRemnantClass);
    __cxa_atexit(
      CDOTA_Ability_StormSpirit_StaticRemnant::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_StormSpirit_StaticRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_StaticRemnantClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_StormSpirit_StaticRemnantClass != 0 )
    return &CDOTA_Ability_StormSpirit_StaticRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_StaticRemnantClass;
  if ( `guard variable for'CDOTA_Ability_StormSpirit_StaticRemnant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_StaticRemnantClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_StormSpirit_StaticRemnant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_StaticRemnantClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_StormSpirit_StaticRemnant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_StaticRemnantClassInfo,
      "CDOTA_Ability_StormSpirit_StaticRemnant",
      "storm_spirit_static_remnant",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_StormSpirit_StaticRemnant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_StaticRemnantClassInfo);
  }
  CDOTA_Ability_StormSpirit_StaticRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_StaticRemnantClass.m_pClassInfo = &CDOTA_Ability_StormSpirit_StaticRemnant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_StaticRemnantClassInfo;
  CDOTA_Ability_StormSpirit_StaticRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_StaticRemnantClass.m_pBaseClassInfo = CDOTA_Ability_StormSpirit_StaticRemnant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_StaticRemnantClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_StormSpirit_StaticRemnantClass = &CDOTA_Ability_StormSpirit_StaticRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_StaticRemnantClass;
  CDOTA_Ability_StormSpirit_StaticRemnant::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_StaticRemnantClassInfo.m_pClass = &CDOTA_Ability_StormSpirit_StaticRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_StaticRemnantClass;
  CDOTA_Ability_StormSpirit_StaticRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_StaticRemnantClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_StormSpirit_StaticRemnantClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_StormSpirit_StaticRemnant::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_StaticRemnantClass;
}


// CDOTA_Ability_StormSpirit_StaticRemnant::ShouldSpeakAbilityConcept  (line 60, @0x0000000002a60cc0, libserver.so)
bool __fastcall CDOTA_Ability_StormSpirit_StaticRemnant::ShouldSpeakAbilityConcept(
        CDOTA_Ability_StormSpirit_StaticRemnant *const this,
        int iConcept)
{
  return 0;
}


// CDOTA_Ability_StormSpirit_StaticRemnant::GetStolenActivityModifier  (line 66, @0x0000000002a60cd0, libserver.so)
const char *__fastcall CDOTA_Ability_StormSpirit_StaticRemnant::GetStolenActivityModifier(
        CDOTA_Ability_StormSpirit_StaticRemnant *const this)
{
  return "remnant";
}


// CDOTA_Ability_StormSpirit_StaticRemnant::GetAOERadius  (line 68, @0x0000000002a77100, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "static_remnant_radius"
float __fastcall CDOTA_Ability_StormSpirit_StaticRemnant::GetAOERadius(
        CDOTA_Ability_StormSpirit_StaticRemnant *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "static_remnant_radius", -1, 0);
}


// CDOTA_Ability_StormSpirit_StaticRemnant::YouForgotToImplementOrDeclareServerClass  (line 76, @0x0000000002a3f190, libserver.so)
int __fastcall CDOTA_Ability_StormSpirit_StaticRemnant::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_StormSpirit_StaticRemnant *const this)
{
  return 0;
}


// CDOTA_Ability_StormSpirit_StaticRemnant::GetServerClass  (line 76, @0x0000000002a48570, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_StormSpirit_StaticRemnant::GetServerClass(
        CDOTA_Ability_StormSpirit_StaticRemnant *const this)
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


// CDOTA_Ability_StormSpirit_StaticRemnant::OnAbilityPhaseStart  (line 84, @0x0000000002a3ff60, libserver.so)  // inlines: operator=
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin
bool __fastcall CDOTA_Ability_StormSpirit_StaticRemnant::OnAbilityPhaseStart(
        CDOTA_Ability_StormSpirit_StaticRemnant *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rax
  vec_t z; // xmm0_4

  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  this->m_vecCastPos.x = AbsOrigin->x;
  this->m_vecCastPos.y = AbsOrigin->y;
  z = AbsOrigin->z;
  this->m_vecCastPos.z = z;
  return 1;
}


// CDOTA_Ability_StormSpirit_StaticRemnant::CreateRemnant  (line 94, @0x0000000002a59240, libserver.so)  // inlines: GetParent, GetTeamNumber, QueueConcept, SetBlockCreepSpawn
// calls: CDOTABaseAbility::GetCaster, DOTA_CreateUnitByName, CDOTAFogOfWarSystem::AddFOWEntity, KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::SetInt, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CGameSceneNode::GetOwnerEntity, CBaseEntity::GetAbsAngles, CBaseEntity::SetAbsAngles (21 total)
// callers: CDOTA_Ability_StormSpirit_StaticRemnant::OnSpellStart
// strings: "npc_dota_stormspirit_remnant", "modifier_storm_spirit_static_remnant_thinker", "static_remnant_radius", "static_remnant_damage_radius", "static_remnant_delay", "Hero_StormSpirit.StaticRemnantPlant" (8 total)
void __fastcall CDOTA_Ability_StormSpirit_StaticRemnant::CreateRemnant(
        CDOTA_Ability_StormSpirit_StaticRemnant *const this,
        const Vector *const vLocation)
{
  int m_Value; // r13d
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *UnitByName; // rax
  CDOTA_BaseNPC *v8; // r12
  int LevelSpecialValue; // eax
  int v10; // eax
  float v11; // xmm1_4
  CDOTA_BaseNPC *v12; // rax
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // rdi
  const QAngle *AbsAngles; // rax
  CDOTA_BaseNPC *v16; // rax
  CDOTA_Speech *m_pSpeech; // rdi
  CResponseCriteriaSet criteria; // [rsp+10h] [rbp-80h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+68h] [rbp-28h]

  v20 = __readfsqword(0x28u);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  Caster = CDOTABaseAbility::GetCaster(this);
  v6 = CDOTABaseAbility::GetCaster(this);
  UnitByName = DOTA_CreateUnitByName("npc_dota_stormspirit_remnant", vLocation, 0, v6, Caster, m_Value);
  v8 = UnitByName;
  if ( UnitByName != 0 )
  {
    UnitByName->m_bBlocksCreepSpawn = 0;
    CDOTAFogOfWarSystem::AddFOWEntity(&g_DOTAFogOfWarSystem, UnitByName);
    KeyValues::KeyValues(&kv, "modifier_storm_spirit_static_remnant_thinker");
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "static_remnant_radius", -1, 0);
    KeyValues::SetInt(&kv, "static_remnant_radius", LevelSpecialValue);
    v10 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "static_remnant_damage_radius", -1, 0);
    KeyValues::SetInt(&kv, "static_remnant_damage_radius", v10);
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "static_remnant_delay", -1, 0);
    KeyValues::SetFloat(&kv, "static_remnant_delay", v11);
    v12 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v8, v12, this, "modifier_storm_spirit_static_remnant_thinker", &kv, 0);
    m_pParent = this->m_pGameSceneNode->m_pParent;
    if ( m_pParent != 0 )
      OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
    else
      OwnerEntity = 0;
    AbsAngles = CBaseEntity::GetAbsAngles(OwnerEntity);
    CBaseEntity::SetAbsAngles(v8, AbsAngles);
    FindClearSpaceForUnit(v8, *vLocation, 0);
    v16 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v16, "Hero_StormSpirit.StaticRemnantPlant", 0.0, 0, 0);
    CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
    CResponseCriteriaSet::AppendCriteria(&criteria, "abilityname", "storm_spirit_static_remnant", 1.0);
    m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
    if ( m_pSpeech != 0 )
      CDOTA_Speech::QueueConcept(m_pSpeech, 18, 0.5, &criteria, 0, 1, 0, 0, 0);
    CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_StormSpirit_StaticRemnant::OnSpellStart  (line 126, @0x0000000002a594a0, libserver.so)
// calls: CDOTA_Ability_StormSpirit_StaticRemnant::CreateRemnant
void __fastcall CDOTA_Ability_StormSpirit_StaticRemnant::OnSpellStart(
        CDOTA_Ability_StormSpirit_StaticRemnant *const this)
{
  CDOTA_Ability_StormSpirit_StaticRemnant::CreateRemnant(this, &this->m_vecCastPos);
}


// CDOTA_Ability_StormSpirit_StaticRemnant::GetAbilityDamageToTargetOverInterval  (line 138, @0x0000000002a53460, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "static_remnant_damage"
__int64 __fastcall CDOTA_Ability_StormSpirit_StaticRemnant::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_StormSpirit_StaticRemnant *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "static_remnant_damage", -1, 0);
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Modifier_StormSpirit_StaticRemnantThinker::~CDOTA_Modifier_StormSpirit_StaticRemnantThinker  (line 149, @0x0000000002a65630, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_StormSpirit_StaticRemnantThinker::~CDOTA_Modifier_StormSpirit_StaticRemnantThinker(
        CDOTA_Modifier_StormSpirit_StaticRemnantThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_439D550;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_StormSpirit_StaticRemnantThinker::~CDOTA_Modifier_StormSpirit_StaticRemnantThinker  (line 149, @0x0000000002a65650, libserver.so)  // inlines: ~CDOTA_Modifier_StormSpirit_StaticRemnantThinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_StormSpirit_StaticRemnantThinker::~CDOTA_Modifier_StormSpirit_StaticRemnantThinker(
        CDOTA_Modifier_StormSpirit_StaticRemnantThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_439D550;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_StormSpirit_StaticRemnantThinker::IsHidden  (line 158, @0x0000000002a60ce0, libserver.so)
bool __fastcall CDOTA_Modifier_StormSpirit_StaticRemnantThinker::IsHidden(
        CDOTA_Modifier_StormSpirit_StaticRemnantThinker *const this)
{
  return 1;
}


// CDOTA_Modifier_StormSpirit_StaticRemnantThinker::OnCreated  (line 180, @0x0000000002a5d5d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "static_remnant_radius", "static_remnant_damage_radius", "static_remnant_delay", "static_remnant_damage"
void __fastcall CDOTA_Modifier_StormSpirit_StaticRemnantThinker::OnCreated(
        CDOTA_Modifier_StormSpirit_StaticRemnantThinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  float v7; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->static_remnant_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                    Ability,
                                    "static_remnant_radius",
                                    -1,
                                    0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->static_remnant_radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->static_remnant_damage_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                             v4,
                                             "static_remnant_damage_radius",
                                             -1,
                                             0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_9:
      this->static_remnant_delay = 0.0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
LABEL_10:
      this->static_remnant_damage = 0;
      goto LABEL_6;
    }
  }
  this->static_remnant_damage_radius = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_9;
LABEL_4:
  this->static_remnant_delay = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "static_remnant_delay", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_10;
LABEL_5:
  this->static_remnant_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "static_remnant_damage", -1, 0);
LABEL_6:
  CDOTA_Buff::StartIntervalThink(this, this->static_remnant_delay, v7);
}


// CDOTA_Modifier_StormSpirit_StaticRemnantThinker::CheckState  (line 205, @0x0000000002a3f1a0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_StormSpirit_StaticRemnantThinker::CheckState(
        CDOTA_Modifier_StormSpirit_StaticRemnantThinker *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x2804100uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFD7FBEFFLL;
}


// CDOTA_Modifier_StormSpirit_StaticRemnantThinker::OnIntervalThink  (line 215, @0x0000000002a50110, libserver.so)  // inlines: CEntityHandle, CUtlMemory, CUtlVector, CUtlVectorBase, DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, GetTeamNumber, IndexToIdentity, Init, IsRealHero, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::GetAbility, ApplyDamage, CDOTA_Buff::GetCaster, EconEntity_OnOwnerKillEaterEvent, CDOTA_BaseNPC::UnitEmitSound, CDOTABaseAbility::GetDuration, UTIL_Remove, CDOTA_Buff::StartIntervalThink (14 total)
// strings: "Hero_StormSpirit.StaticRemnantExplode"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_StormSpirit_StaticRemnantThinker::OnIntervalThink(
        CDOTA_Modifier_StormSpirit_StaticRemnantThinker *const this)
{
  __m128i v1; // xmm2
  float v3; // r13d
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v7; // rax
  __m128i v8; // xmm4
  float v9; // r13d
  CDOTA_BaseNPC *v10; // r12
  CDOTA_BaseNPC *v11; // rax
  const Vector *v12; // rbx
  CDOTA_BaseNPC *v13; // rax
  __int64 v14; // rbx
  int v15; // r12d
  CHandle<CBaseEntity> *v16; // rdx
  uint32 m_Index; // eax
  __int16 v18; // cx
  CEntityIdentity *v19; // rdx
  CEntityIdentity *v20; // rdx
  CEntityInstance *m_pInstance; // r13
  CDOTA_BaseNPC *v22; // rax
  unsigned __int16 v23; // dx
  int v24; // esi
  int v25; // eax
  CEntityIdentity *v26; // rdx
  CEntityIdentity *v27; // rdx
  CDOTA_BaseNPC *v28; // r14
  CDOTABaseAbility *Ability; // rax
  double v30; // xmm0_8
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC_Hero *v32; // rdi
  CDOTA_BaseNPC *v33; // rax
  char v34; // bl
  __m128i v35; // xmm0
  float v36; // r12d
  CDOTABaseAbility *v37; // rax
  float v38; // xmm1_4
  CDOTA_BaseNPC *v39; // rax
  CDOTA_BaseNPC *v40; // rax
  int nHeroesKilled; // [rsp+28h] [rbp-68h]
  float flDamage; // [rsp+2Ch] [rbp-64h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-50h] BYREF

  entities.m_Size = 0;
  *v1.m128i_i32 = this->static_remnant_radius;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  Parent = CDOTA_Buff::GetParent(this);
  v5 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTA_Buff::GetParent(this);
  FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, Parent, v3, &entities, 2, 19, 16, 0, 0);
  if ( entities.m_Size <= 0 )
  {
    v34 = 0;
  }
  else
  {
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
    *v8.m128i_i32 = this->static_remnant_damage_radius;
    v9 = COERCE_FLOAT(_mm_cvtsi128_si32(v8));
    v10 = CDOTA_Buff::GetParent(this);
    v11 = CDOTA_Buff::GetParent(this);
    v12 = CBaseEntity::GetAbsOrigin(v11);
    v13 = CDOTA_Buff::GetParent(this);
    FindUnitsInRadius(v13->m_iTeamNum.m_Value, v12, v10, v9, &entities, 2, 19, 0, 0, 0);
    if ( entities.m_Size > 0 )
    {
      v14 = 0;
      v15 = 0;
      nHeroesKilled = 0;
      do
      {
        while ( 1 )
        {
          v16 = &entities.m_Memory.m_pMemory[v14];
          m_Index = entities.m_Memory.m_pMemory[v14].m_Index;
          if ( m_Index + 2 > 1 )
          {
            v18 = v16->m_Index;
            v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v16->m_Index) >> 9) & 0x3F];
            if ( v19 != 0 )
            {
              v20 = &v19[v18 & 0x1FF];
              if ( v20 != 0 && m_Index == v20->m_EHandle.m_Index )
              {
                m_pInstance = v20->m_pInstance;
                if ( v20->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                {
                  v22 = CDOTA_Buff::GetParent(this);
                  if ( v22->m_hOwnerEntity.m_Value.m_Index == -1 )
                  {
                    v23 = 0x7FFF;
                    v24 = 0x7FFF;
                  }
                  else
                  {
                    v23 = v22->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
                    v24 = v23;
                  }
                  v25 = (v22->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v23 & 0x7FFF;
                  if ( (v25 + 2) > 1 )
                  {
                    v26 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v24 >> 9];
                    if ( v26 != 0 )
                    {
                      v27 = &v26[v24 & 0x1FF];
                      if ( v27 != 0 && v25 == v27->m_EHandle.m_Index )
                      {
                        v28 = v27->m_pInstance;
                        if ( v27->m_pInstance != 0 && v28->m_bIsDOTANPC )
                        {
                          flDamage = this->static_remnant_damage;
                          Ability = CDOTA_Buff::GetAbility(this);
                          v30 = ApplyDamage(v28, m_pInstance, Ability, flDamage, 2, 0);
                          if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance, v30) == 0
                            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
                          {
                            break;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          ++v15;
          ++v14;
          if ( entities.m_Size <= v15 )
            goto LABEL_22;
        }
        nHeroesKilled += LOBYTE(m_pInstance[71].m_pEntity) == 0;
        ++v15;
        ++v14;
      }
      while ( entities.m_Size > v15 );
LABEL_22:
      if ( nHeroesKilled > 1 )
      {
        Caster = CDOTA_Buff::GetCaster(this);
        if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
          v32 = Caster;
        else
          v32 = 0;
        EconEntity_OnOwnerKillEaterEvent(
          v32,
          0,
          kill_eater_event_t::kKillEaterEvent_StormSpirit_DoubleRemnantKills,
          1,
          INVALID_ITEM_DEF_INDEX);
      }
    }
    v33 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::UnitEmitSound(v33, "Hero_StormSpirit.StaticRemnantExplode", 0.0, 0, 0);
    v34 = 1;
  }
  if ( CDOTA_Buff::GetAbility(this) == 0 )
    goto LABEL_32;
  v35 = 0;
  if ( g_pGameRules != 0 )
    v35 = *&g_pGameRules[18].m_szQuestName[20];
  *v35.m128i_i32 = *v35.m128i_i32 - this->m_flCreationTime;
  v36 = COERCE_FLOAT(_mm_cvtsi128_si32(v35));
  v37 = CDOTA_Buff::GetAbility(this);
  if ( v36 >= CDOTABaseAbility::GetDuration(v37) || v34 != 0 )
  {
LABEL_32:
    v39 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::UnitEmitSound(v39, "Hero_StormSpirit.StaticRemnantExplode", 0.0, 0, 0);
    v40 = CDOTA_Buff::GetParent(this);
    UTIL_Remove(v40);
  }
  CDOTA_Buff::StartIntervalThink(this, 0.1, v38);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
}


// CDOTA_Modifier_StormSpirit_StaticRemnantThinker::DeclareFunctions  (line 275, @0x0000000002a3f1c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_StormSpirit_StaticRemnantThinker::OnHeroKilled(CModifierParams const&)
void __fastcall CDOTA_Modifier_StormSpirit_StaticRemnantThinker::DeclareFunctions(
        CDOTA_Modifier_StormSpirit_StaticRemnantThinker *const this)
{
  this->m_Functions[147].__pfn = CDOTA_Modifier_StormSpirit_StaticRemnantThinker::OnHeroKilled;
  this->m_Functions[147].__delta = 0;
}


// CDOTA_Modifier_StormSpirit_StaticRemnantThinker::OnHeroKilled  (line 285, @0x0000000002a46720, libserver.so)  // inlines: Attacker, Get, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsRealHero, IsValid, LookupEntity, Target, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTAGamerules::SendProjectionAbilityMessage, CDOTABaseAbility::LoadAbilityData
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_StormSpirit_StaticRemnantThinker::OnHeroKilled(
        CDOTA_Modifier_StormSpirit_StaticRemnantThinker *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  uint32 v9; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CEntityInstance *v12; // rax
  CDOTABaseAbility *Ability; // rax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  int m_iAbilityID; // r13d
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *Caster; // rax
  float v19; // xmm3_4
  CDOTABaseAbility *v20; // [rsp+8h] [rbp-28h]

  m_pInstance = 0;
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[params->hattacker.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetCaster(this) == m_pInstance && CDOTA_Buff::GetAbility(this) != 0 )
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
          if ( v12 != 0
            && BYTE3(v12[7]._vptr_IHandleEntity) != 0
            && (v12[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
            && LOBYTE(v12[71].m_pEntity) == 0 )
          {
            Ability = CDOTA_Buff::GetAbility(this);
            m_pAbilityData = Ability->m_pAbilityData;
            if ( m_pAbilityData == 0 )
            {
              v20 = Ability;
              CDOTABaseAbility::LoadAbilityData(Ability, 0);
              m_pAbilityData = v20->m_pAbilityData;
            }
            m_iAbilityID = m_pAbilityData->m_iAbilityID;
            Parent = CDOTA_Buff::GetParent(this);
            AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
            Caster = CDOTA_Buff::GetCaster(this);
            CDOTAGamerules::SendProjectionAbilityMessage(
              g_pGameRules,
              Caster,
              0,
              m_iAbilityID,
              0,
              0,
              *&AbsOrigin->x,
              AbsOrigin->z,
              -1.0,
              v19);
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Ability_StormSpirit_ElectricVortex::~CDOTA_Ability_StormSpirit_ElectricVortex  (line 306, @0x0000000002a673a0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_StormSpirit_ElectricVortex::~CDOTA_Ability_StormSpirit_ElectricVortex(
        CDOTA_Ability_StormSpirit_ElectricVortex *const this)
{
  this->_vptr_IHandleEntity = &off_439D8B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_StormSpirit_ElectricVortex::~CDOTA_Ability_StormSpirit_ElectricVortex  (line 306, @0x0000000002a673c0, libserver.so)  // inlines: ~CDOTA_Ability_StormSpirit_ElectricVortex
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_StormSpirit_ElectricVortex::~CDOTA_Ability_StormSpirit_ElectricVortex(
        CDOTA_Ability_StormSpirit_ElectricVortex *const this)
{
  this->_vptr_IHandleEntity = &off_439D8B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_StormSpirit_ElectricVortex::Schema_DynamicBinding  (line 308, @0x0000000002a60cf0, libserver.so)
// globals: CDOTA_Ability_StormSpirit_ElectricVortex::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_StormSpirit_ElectricVortex::Schema_DynamicBinding(
        const CDOTA_Ability_StormSpirit_ElectricVortex *const this)
{
  return CDOTA_Ability_StormSpirit_ElectricVortex::s_pSchemaBinding;
}


// CDOTA_Ability_StormSpirit_ElectricVortex::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 308, @0x0000000002a60d00, libserver.so)
// globals: CDOTA_Ability_StormSpirit_ElectricVortex::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_StormSpirit_ElectricVortex::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_StormSpirit_ElectricVortex::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_StormSpirit_ElectricVortex::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_StormSpirit_ElectricVortex::CEntityInstanceEntityClass::DestructInstance  (line 308, @0x0000000002a60d10, libserver.so)  // inlines: Destruct<CDOTA_Ability_StormSpirit_ElectricVortex>
void __fastcall CDOTA_Ability_StormSpirit_ElectricVortex::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_StormSpirit_ElectricVortex::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_StormSpirit_ElectricVortex::CEntityInstanceEntityClass::FreeInstance  (line 308, @0x0000000002a60d30, libserver.so)
void __fastcall CDOTA_Ability_StormSpirit_ElectricVortex::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_StormSpirit_ElectricVortex::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_StormSpirit_ElectricVortex::CEntityInstanceEntityClass::CanAllocate  (line 308, @0x0000000002a60d50, libserver.so)
bool __fastcall CDOTA_Ability_StormSpirit_ElectricVortex::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_StormSpirit_ElectricVortex::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_StormSpirit_ElectricVortex::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 308, @0x0000000002a60d60, libserver.so)
// globals: CDOTA_Ability_StormSpirit_ElectricVortex::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_StormSpirit_ElectricVortex::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_StormSpirit_ElectricVortex::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_StormSpirit_ElectricVortex::s_pSchemaBinding;
}


// CDOTA_Ability_StormSpirit_ElectricVortex::CEntityInstanceEntityClass::AllocateInstance  (line 308, @0x0000000002a63e30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_StormSpirit_ElectricVortex::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_StormSpirit_ElectricVortex::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_StormSpirit_ElectricVortex::CEntityInstanceEntityClass::ConstructInstance  (line 308, @0x0000000002a66030, libserver.so)  // inlines: CDOTA_Ability_StormSpirit_ElectricVortex, Construct<CDOTA_Ability_StormSpirit_ElectricVortex>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_StormSpirit_ElectricVortex::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_StormSpirit_ElectricVortex::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_439D8B0;
  }
  return p;
}


// CDOTA_Ability_StormSpirit_ElectricVortex::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 308, @0x0000000002a6ab10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_StormSpirit_ElectricVortex::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_StormSpirit_ElectricVortex::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_StormSpirit_ElectricVortex::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 308, @0x0000000002a6ab30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_StormSpirit_ElectricVortex::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_StormSpirit_ElectricVortex::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_StormSpirit_ElectricVortex::GetEntityClassInternal  (line 308, @0x0000000002a714f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "storm_spirit_electric_vortex", "CDOTA_Ability_StormSpirit_ElectricVortex"
// globals: `guard variable for'CDOTA_Ability_StormSpirit_ElectricVortex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_ElectricVortexClass, CDOTA_Ability_StormSpirit_ElectricVortex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_ElectricVortexClass, __dso_handle, CDOTA_Ability_StormSpirit_ElectricVortex::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_StormSpirit_ElectricVortex::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_ElectricVortexClassInfo, CDOTA_Ability_StormSpirit_ElectricVortex::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_ElectricVortexClassInfo
CEntityClass *__cdecl CDOTA_Ability_StormSpirit_ElectricVortex::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_StormSpirit_ElectricVortex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_ElectricVortexClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_StormSpirit_ElectricVortex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_ElectricVortexClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_StormSpirit_ElectricVortex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_ElectricVortexClass);
    CDOTA_Ability_StormSpirit_ElectricVortex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_ElectricVortexClass._vptr_CEntityClass = off_439D830;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_StormSpirit_ElectricVortex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_ElectricVortexClass);
    __cxa_atexit(
      CDOTA_Ability_StormSpirit_ElectricVortex::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_StormSpirit_ElectricVortex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_ElectricVortexClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_StormSpirit_ElectricVortexClass != 0 )
    return &CDOTA_Ability_StormSpirit_ElectricVortex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_ElectricVortexClass;
  if ( `guard variable for'CDOTA_Ability_StormSpirit_ElectricVortex::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_ElectricVortexClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_StormSpirit_ElectricVortex::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_ElectricVortexClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_StormSpirit_ElectricVortex::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_ElectricVortexClassInfo,
      "CDOTA_Ability_StormSpirit_ElectricVortex",
      "storm_spirit_electric_vortex",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_StormSpirit_ElectricVortex::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_ElectricVortexClassInfo);
  }
  CDOTA_Ability_StormSpirit_ElectricVortex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_ElectricVortexClass.m_pClassInfo = &CDOTA_Ability_StormSpirit_ElectricVortex::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_ElectricVortexClassInfo;
  CDOTA_Ability_StormSpirit_ElectricVortex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_ElectricVortexClass.m_pBaseClassInfo = CDOTA_Ability_StormSpirit_ElectricVortex::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_ElectricVortexClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_StormSpirit_ElectricVortexClass = &CDOTA_Ability_StormSpirit_ElectricVortex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_ElectricVortexClass;
  CDOTA_Ability_StormSpirit_ElectricVortex::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_ElectricVortexClassInfo.m_pClass = &CDOTA_Ability_StormSpirit_ElectricVortex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_ElectricVortexClass;
  CDOTA_Ability_StormSpirit_ElectricVortex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_ElectricVortexClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_StormSpirit_ElectricVortexClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_StormSpirit_ElectricVortex::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_ElectricVortexClass;
}


// CDOTA_Ability_StormSpirit_ElectricVortex::GetCastRange  (line 313, @0x0000000002a77120, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCastRange, CDOTABaseAbility::GetLevelSpecialValueFor<int>
int __fastcall CDOTA_Ability_StormSpirit_ElectricVortex::GetCastRange(
        CDOTA_Ability_StormSpirit_ElectricVortex *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius_scepter", -1, 0);
  else
    return CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
}


// CDOTA_Ability_StormSpirit_ElectricVortex::GetStolenActivityModifier  (line 318, @0x0000000002a60d70, libserver.so)
const char *__fastcall CDOTA_Ability_StormSpirit_ElectricVortex::GetStolenActivityModifier(
        CDOTA_Ability_StormSpirit_ElectricVortex *const this)
{
  return "vortex";
}


// CDOTA_Ability_StormSpirit_ElectricVortex::YouForgotToImplementOrDeclareServerClass  (line 325, @0x0000000002a3f1e0, libserver.so)
int __fastcall CDOTA_Ability_StormSpirit_ElectricVortex::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_StormSpirit_ElectricVortex *const this)
{
  return 0;
}


// CDOTA_Ability_StormSpirit_ElectricVortex::GetServerClass  (line 325, @0x0000000002a48770, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_StormSpirit_ElectricVortex::GetServerClass(
        CDOTA_Ability_StormSpirit_ElectricVortex *const this)
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


// CDOTA_Ability_StormSpirit_ElectricVortex::GetBehavior  (line 333, @0x0000000002a40630, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter
int __fastcall CDOTA_Ability_StormSpirit_ElectricVortex::GetBehavior(
        CDOTA_Ability_StormSpirit_ElectricVortex *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  return !CDOTA_BaseNPC::HasScepter(Caster) ? 8 : 33554436;
}


// CDOTA_Ability_StormSpirit_ElectricVortex::CastVortex  (line 343, @0x0000000002a594c0, libserver.so)
// calls: KeyValues::operator new, KeyValues::KeyValues, CDOTABaseAbility::GetDuration, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTABaseAbility::GetLevelSpecialValueFor<int>, KeyValues::SetInt, CDOTA_BaseNPC::UnitEmitSound, KeyValues::deleteThis (14 total)
// callers: CDOTA_Ability_StormSpirit_ElectricVortex::OnSpellStart
// strings: "modifier_storm_spirit_electric_vortex_pull", "special_bonus_unique_storm_spirit", "electric_vortex_self_slow_duration", "modifier_storm_spirit_electric_vortex_self_slow", "Hero_StormSpirit.ElectricVortexCast"
void __fastcall CDOTA_Ability_StormSpirit_ElectricVortex::CastVortex(
        CDOTA_Ability_StormSpirit_ElectricVortex *const this,
        CDOTA_BaseNPC *pTarget,
        bool bPlaySound)
{
  KeyValues *v6; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v9; // xmm1_4
  CDOTA_BaseNPC *v10; // rax
  int LevelSpecialValue; // eax
  CDOTA_BaseNPC *v12; // r13
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax

  v6 = KeyValues::operator new(0x14u);
  KeyValues::KeyValues(v6, "modifier_storm_spirit_electric_vortex_pull");
  CDOTABaseAbility::GetDuration(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_storm_spirit", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(AbilityByName, "value", 1, 1);
  KeyValues::SetFloat(v6, "duration", v9);
  v10 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(pTarget, v10, this, "modifier_storm_spirit_electric_vortex_pull", v6, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "electric_vortex_self_slow_duration", -1, 0);
  KeyValues::SetInt(v6, "duration", LevelSpecialValue);
  v12 = CDOTABaseAbility::GetCaster(this);
  v13 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v13, v12, this, "modifier_storm_spirit_electric_vortex_self_slow", v6, 0);
  if ( bPlaySound )
  {
    v14 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v14, "Hero_StormSpirit.ElectricVortexCast", 0.0, 0, 0);
  }
  KeyValues::deleteThis(v6);
}


// CDOTA_Ability_StormSpirit_ElectricVortex::OnSpellStart  (line 373, @0x0000000002a59630, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<int>, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, Purge, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Ability_StormSpirit_ElectricVortex::CastVortex, CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_StormSpirit_ElectricVortex::OnSpellStart(
        CDOTA_Ability_StormSpirit_ElectricVortex *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // r14
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v6; // rax
  __int64 v7; // rbx
  bool i; // dl
  CEntityInstance *m_pInstance; // rsi
  CHandle<CBaseEntity> *v10; // r8
  CEntityIdentity *v11; // rcx
  CEntityIdentity *v12; // rcx
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v14; // rbx
  __int64 v15; // rax
  float flRadius; // [rsp+1Ch] [rbp-44h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+20h] [rbp-40h] BYREF

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
  {
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    flRadius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius_scepter", -1, 0);
    v3 = CDOTABaseAbility::GetCaster(this);
    v4 = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
    v6 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v6->m_iTeamNum.m_Value, AbsOrigin, v3, flRadius, &entities, 2, 19, 384, 0, 0);
    v7 = 0;
    for ( i = 1; entities.m_Size > v7; ++v7 )
    {
      v10 = &entities.m_Memory.m_pMemory[v7];
      if ( v10->m_Index + 2 > 1 )
      {
        v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Index) >> 9) & 0x3F];
        if ( v11 != 0 )
        {
          v12 = &v11[v10->m_Index & 0x1FF];
          if ( v12 != 0 && v10->m_Index == v12->m_EHandle.m_Index )
          {
            m_pInstance = v12->m_pInstance;
            if ( v12->m_pInstance != 0
              && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0
              && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 1) == 0 )
            {
              CDOTA_Ability_StormSpirit_ElectricVortex::CastVortex(this, m_pInstance, i);
              i = 0;
            }
          }
        }
      }
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
      if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    }
  }
  else
  {
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    v14 = CursorTarget;
    if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0 )
    {
      v15 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
      if ( (v15 & 0x100) == 0 && (v15 & 0x200) == 0 && !CDOTA_BaseNPC::TriggerSpellAbsorb(v14, this, 1) )
        CDOTA_Ability_StormSpirit_ElectricVortex::CastVortex(this, v14, 1);
    }
  }
}


// CDOTA_Ability_StormSpirit_ElectricVortex::GetSlowDuration  (line 409, @0x0000000002a40f40, libserver.so)
// calls: CDOTABaseAbility::GetDuration
float __fastcall CDOTA_Ability_StormSpirit_ElectricVortex::GetSlowDuration(
        CDOTA_Ability_StormSpirit_ElectricVortex *const this)
{
  return CDOTABaseAbility::GetDuration(this);
}


// CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow::~CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow  (line 417, @0x0000000002a655e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow::~CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow(
        CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow *const this)
{
  this->_vptr_CDOTA_Buff = &off_439E370;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow::~CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow  (line 417, @0x0000000002a65600, libserver.so)  // inlines: ~CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow::~CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow(
        CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow *const this)
{
  this->_vptr_CDOTA_Buff = &off_439E370;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow::IsDebuff  (line 424, @0x0000000002a60d80, libserver.so)
bool __fastcall CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow::IsDebuff(
        CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow *const this)
{
  return 1;
}


// CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow::GetTexture  (line 425, @0x0000000002a60d90, libserver.so)
// strings: "storm_spirit_electric_vortex"
const char *__fastcall CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow::GetTexture(
        CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow *const this)
{
  return "storm_spirit_electric_vortex";
}


// CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow::GetEffectName  (line 428, @0x0000000002a60da0, libserver.so)
// strings: "particles/units/heroes/hero_stormspirit/stormspirit_electric_vortex_owner.vpcf"
const char *__fastcall CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow::GetEffectName(
        CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow *const this)
{
  return "particles/units/heroes/hero_stormspirit/stormspirit_electric_vortex_owner.vpcf";
}


// CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow::OnCreated  (line 437, @0x0000000002a551d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "electric_vortex_self_slow"
void __fastcall CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow::OnCreated(
        CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->electric_vortex_self_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                        Ability,
                                        "electric_vortex_self_slow",
                                        -1,
                                        0);
  else
    this->electric_vortex_self_slow = 0;
}


// CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow::DeclareFunctions  (line 442, @0x0000000002a3f1f0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow::DeclareFunctions(
        CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow::GetModifierMoveSpeedBonus_Percentage  (line 447, @0x0000000002a3f210, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_StormSpirit_ElectricVortex_SelfSlow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->electric_vortex_self_slow;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_StormSpirit_ElectricVortex_Pull::~CDOTA_Modifier_StormSpirit_ElectricVortex_Pull  (line 455, @0x0000000002a65570, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_StormSpirit_ElectricVortex_Pull::~CDOTA_Modifier_StormSpirit_ElectricVortex_Pull(
        CDOTA_Modifier_StormSpirit_ElectricVortex_Pull *const this)
{
  this->_vptr_CDOTA_Buff = &off_439E690;
  this->_vptr_CHorizontalMotionController = &off_439E978;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_StormSpirit_ElectricVortex_Pull::~CDOTA_Modifier_StormSpirit_ElectricVortex_Pull  (line 455, @0x0000000002a655a0, libserver.so)  // inlines: ~CDOTA_Modifier_StormSpirit_ElectricVortex_Pull
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_StormSpirit_ElectricVortex_Pull::~CDOTA_Modifier_StormSpirit_ElectricVortex_Pull(
        CDOTA_Modifier_StormSpirit_ElectricVortex_Pull *const this)
{
  this->_vptr_CDOTA_Buff = &off_439E690;
  this->_vptr_CHorizontalMotionController = &off_439E978;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_StormSpirit_ElectricVortex_Pull::IsStunDebuff  (line 466, @0x0000000002a60db0, libserver.so)
bool __fastcall CDOTA_Modifier_StormSpirit_ElectricVortex_Pull::IsStunDebuff(
        CDOTA_Modifier_StormSpirit_ElectricVortex_Pull *const this)
{
  return 1;
}


// CDOTA_Modifier_StormSpirit_ElectricVortex_Pull::IsHorizontalMotionValidToApply  (line 470, @0x0000000002a60dc0, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_StormSpirit_ElectricVortex_Pull::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_StormSpirit_ElectricVortex_Pull *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_StormSpirit_ElectricVortex_Pull::IsMotionController  (line 473, @0x0000000002a60df0, libserver.so)
bool __fastcall CDOTA_Modifier_StormSpirit_ElectricVortex_Pull::IsMotionController(
        CDOTA_Modifier_StormSpirit_ElectricVortex_Pull *const this)
{
  return 1;
}


// CDOTA_Modifier_StormSpirit_ElectricVortex_Pull::GetOverrideAnimation  (line 477, @0x0000000002a60e00, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_StormSpirit_ElectricVortex_Pull::GetOverrideAnimation(
        CDOTA_Modifier_StormSpirit_ElectricVortex_Pull *const this,
        const CModifierParams *const params)
{
  return 0x44BC800000000001uLL;
}


// CDOTA_Modifier_StormSpirit_ElectricVortex_Pull::DeclareFunctions  (line 495, @0x0000000002a3f230, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_StormSpirit_ElectricVortex_Pull::GetOverrideAnimation(CModifierParams const&)
void __fastcall CDOTA_Modifier_StormSpirit_ElectricVortex_Pull::DeclareFunctions(
        CDOTA_Modifier_StormSpirit_ElectricVortex_Pull *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_StormSpirit_ElectricVortex_Pull::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
}


// CDOTA_Modifier_StormSpirit_ElectricVortex_Pull::OnCreated  (line 501, @0x0000000002a5db30, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetParent, CDOTALocomotor::ApplyHorizontalMotionController, CDOTA_Buff::StartIntervalThink
// strings: "electric_vortex_pull_units_per_second", "electric_vortex_pull_tether_range"
void __fastcall CDOTA_Modifier_StormSpirit_ElectricVortex_Pull::OnCreated(
        CDOTA_Modifier_StormSpirit_ElectricVortex_Pull *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v7; // rax
  float v8; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->electric_vortex_pull_units_per_second = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->electric_vortex_pull_tether_range = 0.0;
    goto LABEL_4;
  }
  this->electric_vortex_pull_units_per_second = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                                  Ability,
                                                  "electric_vortex_pull_units_per_second",
                                                  -1,
                                                  0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->electric_vortex_pull_tether_range = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                              v4,
                                              "electric_vortex_pull_tether_range",
                                              -1,
                                              0);
LABEL_4:
  Caster = CDOTA_Buff::GetCaster(this);
  this->m_vDestination = *CBaseEntity::GetAbsOrigin(Caster);
  Parent = CDOTA_Buff::GetParent(this);
  v7 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::ApplyHorizontalMotionController(v7, &this->CHorizontalMotionController, 0);
  CDOTA_Buff::StartIntervalThink(this, 0.0, v8);
}


// CDOTA_Modifier_StormSpirit_ElectricVortex_Pull::OnDestroy  (line 524, @0x0000000002a4adb0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController, CSoundOpGameSystem::StopSoundEvent
void __fastcall CDOTA_Modifier_StormSpirit_ElectricVortex_Pull::OnDestroy(
        CDOTA_Modifier_StormSpirit_ElectricVortex_Pull *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveHorizontalMotionController(v3, &this->CHorizontalMotionController);
  CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, &this->m_nVortexSound);
}


// CDOTA_Modifier_StormSpirit_ElectricVortex_Pull::UpdateHorizontalMotion  (line 533, @0x0000000002a41400, libserver.so)  // inlines: VectorAdd, VectorMultiply, VectorNormalize2D, VectorSubtract, operator*, operator+, operator-
// calls: CBaseEntity::GetAbsOrigin, VectorNormalize, CBaseEntity::SetAbsOrigin
void __fastcall CDOTA_Modifier_StormSpirit_ElectricVortex_Pull::UpdateHorizontalMotion(
        CDOTA_Modifier_StormSpirit_ElectricVortex_Pull *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  const Vector *AbsOrigin; // rax
  vec_t v7; // xmm0_4
  vec_t v8; // xmm1_4
  float v9; // xmm0_4
  __m128i x_low; // xmm3
  float v11; // xmm0_4
  const Vector *v12; // rax
  vec_t v13; // xmm1_4
  vec_t v14; // xmm0_4
  float v15; // [rsp+8h] [rbp-38h]
  float dtb; // [rsp+Ch] [rbp-34h]
  Vector vPullDirection; // [rsp+10h] [rbp-30h] BYREF
  Vector vOrigin; // [rsp+20h] [rbp-20h] BYREF

  AbsOrigin = CBaseEntity::GetAbsOrigin(me);
  v7 = this->m_vDestination.y - AbsOrigin->y;
  v8 = this->m_vDestination.x - AbsOrigin->x;
  vPullDirection.z = 0.0;
  vPullDirection.y = v7;
  vPullDirection.x = v8;
  v9 = VectorNormalize(&vPullDirection);
  x_low = LODWORD(vPullDirection.x);
  v11 = fminf(v9, this->electric_vortex_pull_units_per_second * a3);
  *x_low.m128i_i32 = vPullDirection.x * v11;
  LODWORD(this) = _mm_cvtsi128_si32(x_low);
  v15 = vPullDirection.y * v11;
  dtb = v11 * vPullDirection.z;
  v12 = CBaseEntity::GetAbsOrigin(me);
  v13 = v15 + v12->y;
  v14 = dtb + v12->z;
  vOrigin.x = *&this + v12->x;
  vOrigin.y = v13;
  vOrigin.z = v14;
  CBaseEntity::SetAbsOrigin(me, &vOrigin);
}


// CDOTA_Modifier_StormSpirit_ElectricVortex_Pull::OnIntervalThink  (line 544, @0x0000000002a414f0, libserver.so)  // inlines: FastSqrt, Length2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::ApplyHorizontalMotionController, CBaseEntity::GetAbsOrigin, CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_StormSpirit_ElectricVortex_Pull::OnIntervalThink(
        CDOTA_Modifier_StormSpirit_ElectricVortex_Pull *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // rax

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::ApplyHorizontalMotionController(v3, &this->CHorizontalMotionController, 1);
  v4 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
  if ( fsqrt(
         ((AbsOrigin->x - this->m_vDestination.x) * (AbsOrigin->x - this->m_vDestination.x))
       + ((AbsOrigin->y - this->m_vDestination.y) * (AbsOrigin->y - this->m_vDestination.y))) > this->electric_vortex_pull_tether_range )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_StormSpirit_ElectricVortex_Pull::CheckState  (line 559, @0x0000000002a3f250, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_StormSpirit_ElectricVortex_Pull::CheckState(
        CDOTA_Modifier_StormSpirit_ElectricVortex_Pull *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x20uLL;
  buffState->m_nDisabledStateMask &= ~0x20uLL;
}


// CDOTA_Modifier_StormSpirit_ElectricVortex_NoStack::~CDOTA_Modifier_StormSpirit_ElectricVortex_NoStack  (line 571, @0x0000000002a65ae0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_StormSpirit_ElectricVortex_NoStack::~CDOTA_Modifier_StormSpirit_ElectricVortex_NoStack(
        CDOTA_Modifier_StormSpirit_ElectricVortex_NoStack *const this)
{
  this->_vptr_CDOTA_Buff = &off_439E9D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_StormSpirit_ElectricVortex_NoStack::~CDOTA_Modifier_StormSpirit_ElectricVortex_NoStack  (line 571, @0x0000000002a65b00, libserver.so)  // inlines: ~CDOTA_Modifier_StormSpirit_ElectricVortex_NoStack
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_StormSpirit_ElectricVortex_NoStack::~CDOTA_Modifier_StormSpirit_ElectricVortex_NoStack(
        CDOTA_Modifier_StormSpirit_ElectricVortex_NoStack *const this)
{
  this->_vptr_CDOTA_Buff = &off_439E9D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_StormSpirit_ElectricVortex_NoStack::IsPurgable  (line 576, @0x0000000002a60e20, libserver.so)
bool __fastcall CDOTA_Modifier_StormSpirit_ElectricVortex_NoStack::IsPurgable(
        CDOTA_Modifier_StormSpirit_ElectricVortex_NoStack *const this)
{
  return 0;
}


// CDOTA_Ability_StormSpirit_Overload::~CDOTA_Ability_StormSpirit_Overload  (line 591, @0x0000000002a673f0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_StormSpirit_Overload::~CDOTA_Ability_StormSpirit_Overload(
        CDOTA_Ability_StormSpirit_Overload *const this)
{
  this->_vptr_IHandleEntity = &off_439ED70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_StormSpirit_Overload::~CDOTA_Ability_StormSpirit_Overload  (line 591, @0x0000000002a67410, libserver.so)  // inlines: ~CDOTA_Ability_StormSpirit_Overload
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_StormSpirit_Overload::~CDOTA_Ability_StormSpirit_Overload(
        CDOTA_Ability_StormSpirit_Overload *const this)
{
  this->_vptr_IHandleEntity = &off_439ED70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_StormSpirit_Overload::Schema_DynamicBinding  (line 593, @0x0000000002a60e30, libserver.so)
// globals: CDOTA_Ability_StormSpirit_Overload::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_StormSpirit_Overload::Schema_DynamicBinding(
        const CDOTA_Ability_StormSpirit_Overload *const this)
{
  return CDOTA_Ability_StormSpirit_Overload::s_pSchemaBinding;
}


// CDOTA_Ability_StormSpirit_Overload::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 593, @0x0000000002a60e40, libserver.so)
// globals: CDOTA_Ability_StormSpirit_Overload::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_StormSpirit_Overload::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_StormSpirit_Overload::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_StormSpirit_Overload::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_StormSpirit_Overload::CEntityInstanceEntityClass::DestructInstance  (line 593, @0x0000000002a60e50, libserver.so)  // inlines: Destruct<CDOTA_Ability_StormSpirit_Overload>
void __fastcall CDOTA_Ability_StormSpirit_Overload::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_StormSpirit_Overload::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_StormSpirit_Overload::CEntityInstanceEntityClass::FreeInstance  (line 593, @0x0000000002a60e70, libserver.so)
void __fastcall CDOTA_Ability_StormSpirit_Overload::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_StormSpirit_Overload::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_StormSpirit_Overload::CEntityInstanceEntityClass::CanAllocate  (line 593, @0x0000000002a60e90, libserver.so)
bool __fastcall CDOTA_Ability_StormSpirit_Overload::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_StormSpirit_Overload::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_StormSpirit_Overload::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 593, @0x0000000002a60ea0, libserver.so)
// globals: CDOTA_Ability_StormSpirit_Overload::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_StormSpirit_Overload::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_StormSpirit_Overload::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_StormSpirit_Overload::s_pSchemaBinding;
}


// CDOTA_Ability_StormSpirit_Overload::CEntityInstanceEntityClass::AllocateInstance  (line 593, @0x0000000002a63e70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_StormSpirit_Overload::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_StormSpirit_Overload::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_StormSpirit_Overload::CEntityInstanceEntityClass::ConstructInstance  (line 593, @0x0000000002a66060, libserver.so)  // inlines: CDOTA_Ability_StormSpirit_Overload, Construct<CDOTA_Ability_StormSpirit_Overload>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_StormSpirit_Overload::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_StormSpirit_Overload::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_439ED70;
  }
  return p;
}


// CDOTA_Ability_StormSpirit_Overload::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 593, @0x0000000002a6ab60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_StormSpirit_Overload::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_StormSpirit_Overload::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_StormSpirit_Overload::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 593, @0x0000000002a6ab80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_StormSpirit_Overload::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_StormSpirit_Overload::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_StormSpirit_Overload::GetEntityClassInternal  (line 593, @0x0000000002a71640, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "storm_spirit_overload", "CDOTA_Ability_StormSpirit_Overload"
// globals: `guard variable for'CDOTA_Ability_StormSpirit_Overload::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_OverloadClass, CDOTA_Ability_StormSpirit_Overload::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_OverloadClass, __dso_handle, CDOTA_Ability_StormSpirit_Overload::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_StormSpirit_Overload::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_OverloadClassInfo, CDOTA_Ability_StormSpirit_Overload::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_OverloadClassInfo
CEntityClass *__cdecl CDOTA_Ability_StormSpirit_Overload::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_StormSpirit_Overload::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_OverloadClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_StormSpirit_Overload::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_OverloadClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_StormSpirit_Overload::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_OverloadClass);
    CDOTA_Ability_StormSpirit_Overload::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_OverloadClass._vptr_CEntityClass = off_439ECF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_StormSpirit_Overload::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_OverloadClass);
    __cxa_atexit(
      CDOTA_Ability_StormSpirit_Overload::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_StormSpirit_Overload::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_OverloadClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_StormSpirit_OverloadClass != 0 )
    return &CDOTA_Ability_StormSpirit_Overload::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_OverloadClass;
  if ( `guard variable for'CDOTA_Ability_StormSpirit_Overload::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_OverloadClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_StormSpirit_Overload::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_OverloadClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_StormSpirit_Overload::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_OverloadClassInfo,
      "CDOTA_Ability_StormSpirit_Overload",
      "storm_spirit_overload",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_StormSpirit_Overload::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_OverloadClassInfo);
  }
  CDOTA_Ability_StormSpirit_Overload::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_OverloadClass.m_pClassInfo = &CDOTA_Ability_StormSpirit_Overload::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_OverloadClassInfo;
  CDOTA_Ability_StormSpirit_Overload::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_OverloadClass.m_pBaseClassInfo = CDOTA_Ability_StormSpirit_Overload::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_OverloadClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_StormSpirit_OverloadClass = &CDOTA_Ability_StormSpirit_Overload::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_OverloadClass;
  CDOTA_Ability_StormSpirit_Overload::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_OverloadClassInfo.m_pClass = &CDOTA_Ability_StormSpirit_Overload::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_OverloadClass;
  CDOTA_Ability_StormSpirit_Overload::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_OverloadClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_StormSpirit_OverloadClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_StormSpirit_Overload::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_OverloadClass;
}


// CDOTA_Ability_StormSpirit_Overload::GetIntrinsicModifierName  (line 596, @0x0000000002a60eb0, libserver.so)
// strings: "modifier_storm_spirit_overload_passive"
const char *__fastcall CDOTA_Ability_StormSpirit_Overload::GetIntrinsicModifierName(
        CDOTA_Ability_StormSpirit_Overload *const this)
{
  return "modifier_storm_spirit_overload_passive";
}


// CDOTA_Ability_StormSpirit_Overload::GetAbilityDamageToTargetOverInterval  (line 609, @0x0000000002a42170, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "modifier_storm_spirit_overload"
__int64 __fastcall CDOTA_Ability_StormSpirit_Overload::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_StormSpirit_Overload *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  CDOTA_BaseNPC *Caster; // rax
  int v8; // ebx

  if ( eDamageType != DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
    return 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_storm_spirit_overload", 0) == 0 )
    return 0;
  v8 = (*(this->_vptr_IHandleEntity + 247))(this);
  return (v8 * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
}


// CDOTA_Ability_StormSpirit_Overload::GetSlowDuration  (line 624, @0x0000000002a40f50, libserver.so)
// calls: CDOTABaseAbility::GetDuration
float __fastcall CDOTA_Ability_StormSpirit_Overload::GetSlowDuration(CDOTA_Ability_StormSpirit_Overload *const this)
{
  return CDOTABaseAbility::GetDuration(this);
}


// CDOTA_Modifier_StormSpirit_Overload_Passive::~CDOTA_Modifier_StormSpirit_Overload_Passive  (line 632, @0x0000000002a65520, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_StormSpirit_Overload_Passive::~CDOTA_Modifier_StormSpirit_Overload_Passive(
        CDOTA_Modifier_StormSpirit_Overload_Passive *const this)
{
  this->_vptr_CDOTA_Buff = &off_439F830;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_StormSpirit_Overload_Passive::~CDOTA_Modifier_StormSpirit_Overload_Passive  (line 632, @0x0000000002a65540, libserver.so)  // inlines: ~CDOTA_Modifier_StormSpirit_Overload_Passive
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_StormSpirit_Overload_Passive::~CDOTA_Modifier_StormSpirit_Overload_Passive(
        CDOTA_Modifier_StormSpirit_Overload_Passive *const this)
{
  this->_vptr_CDOTA_Buff = &off_439F830;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_StormSpirit_Overload_Passive::IsPurgable  (line 639, @0x0000000002a60ec0, libserver.so)
bool __fastcall CDOTA_Modifier_StormSpirit_Overload_Passive::IsPurgable(
        CDOTA_Modifier_StormSpirit_Overload_Passive *const this)
{
  return 0;
}


// CDOTA_Modifier_StormSpirit_Overload_Passive::IsHidden  (line 641, @0x0000000002a60ed0, libserver.so)
bool __fastcall CDOTA_Modifier_StormSpirit_Overload_Passive::IsHidden(
        CDOTA_Modifier_StormSpirit_Overload_Passive *const this)
{
  return 1;
}


// CDOTA_Modifier_StormSpirit_Overload_Passive::DeclareFunctions  (line 646, @0x0000000002a3f260, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_StormSpirit_Overload_Passive::OnAbilityExecuted(CModifierParams const&)
void __fastcall CDOTA_Modifier_StormSpirit_Overload_Passive::DeclareFunctions(
        CDOTA_Modifier_StormSpirit_Overload_Passive *const this)
{
  this->m_Functions[128].__pfn = CDOTA_Modifier_StormSpirit_Overload_Passive::OnAbilityExecuted;
  this->m_Functions[128].__delta = 0;
}


// CDOTA_Modifier_StormSpirit_Overload_Passive::OnAbilityExecuted  (line 651, @0x0000000002a499b0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsAbilityAnItem, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CDOTABaseAbility*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, CEntityHandle::operator CEntityInstance*, KeyValues::KeyValues, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_storm_spirit_overload"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_StormSpirit_Overload_Passive::OnAbilityExecuted(
        CDOTA_Modifier_StormSpirit_Overload_Passive *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CEntityInstance *v9; // rax
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r14
  CDOTA_BaseNPC *v12; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-28h]
  ModifierVariant_t result; // 0:rax.16

  v14 = __readfsqword(0x28u);
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
          result.m_szVal = CDOTA_Buff::GetParent(this);
          *&result.m_eType = 1;
          if ( (result.m_szVal[2787] & 0x10) != 0 )
            goto LABEL_6;
          v9 = CEntityHandle::operator CEntityInstance *(&params->ability);
          if ( v9 == 0 || (*(v9->_vptr_IHandleEntity + 223))(v9) == 0 )
          {
            KeyValues::KeyValues(&kv, "modifier_storm_spirit_overload");
            Ability = CDOTA_Buff::GetAbility(this);
            Parent = CDOTA_Buff::GetParent(this);
            v12 = CDOTA_Buff::GetParent(this);
            CDOTA_BaseNPC::AddNewModifier(v12, Parent, Ability, "modifier_storm_spirit_overload", &kv, 0);
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


// CDOTA_Modifier_StormSpirit_Overload::~CDOTA_Modifier_StormSpirit_Overload  (line 673, @0x0000000002a654d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_StormSpirit_Overload::~CDOTA_Modifier_StormSpirit_Overload(
        CDOTA_Modifier_StormSpirit_Overload *const this)
{
  this->_vptr_CDOTA_Buff = &off_439FB50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_StormSpirit_Overload::~CDOTA_Modifier_StormSpirit_Overload  (line 673, @0x0000000002a654f0, libserver.so)  // inlines: ~CDOTA_Modifier_StormSpirit_Overload
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_StormSpirit_Overload::~CDOTA_Modifier_StormSpirit_Overload(
        CDOTA_Modifier_StormSpirit_Overload *const this)
{
  this->_vptr_CDOTA_Buff = &off_439FB50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_StormSpirit_Overload::OnCreated  (line 690, @0x0000000002a554d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "overload_aoe"
void __fastcall CDOTA_Modifier_StormSpirit_Overload::OnCreated(
        CDOTA_Modifier_StormSpirit_Overload *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->overload_aoe = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "overload_aoe", -1, 0);
  else
    this->overload_aoe = 0;
}


// CDOTA_Modifier_StormSpirit_Overload::DeclareFunctions  (line 702, @0x0000000002a3f280, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_StormSpirit_Overload::OnAttacked(CModifierParams const&), CDOTA_Modifier_StormSpirit_Overload::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_StormSpirit_Overload::DeclareFunctions(CDOTA_Modifier_StormSpirit_Overload *const this)
{
  this->m_Functions[137].__pfn = CDOTA_Modifier_StormSpirit_Overload::OnAttacked;
  this->m_Functions[137].__delta = 0;
  this->m_Functions[155].__delta = 0;
  this->m_Functions[155].__pfn = CDOTA_Modifier_StormSpirit_Overload::GetActivityTranslationModifiers;
}


// CDOTA_Modifier_StormSpirit_Overload::OnAttacked  (line 708, @0x0000000002a4f7f0, libserver.so)  // inlines: AttackerNPC, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, SpeakConcept, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, KeyValues::KeyValues, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier (23 total)
// strings: "particles/units/heroes/hero_stormspirit/stormspirit_overload_discharge.vpcf", "modifier_storm_spirit_overload_debuff", "overloadpop", "Hero_StormSpirit.Overload"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_StormSpirit_Overload::OnAttacked(
        CDOTA_Modifier_StormSpirit_Overload *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *v4; // rax
  CEntityInstance *v6; // rax
  CEntityInstance *v7; // rbx
  __m128i v8; // xmm3
  float v9; // r12d
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v14; // rax
  CDOTABaseAbility *Ability; // rax
  float v16; // xmm1_4
  __int64 v17; // r12
  int v18; // ebx
  CHandle<CBaseEntity> *v19; // rdx
  uint32 m_Index; // eax
  __int16 v21; // cx
  CEntityIdentity *v22; // rdx
  CEntityIdentity *v23; // rdx
  CEntityInstance *m_pInstance; // r14
  CDOTABaseAbility *v25; // r15
  CDOTA_BaseNPC *v26; // rax
  CDOTABaseAbility *v27; // rax
  CDOTABaseAbility *v28; // r15
  CDOTA_BaseNPC *v29; // rax
  float v30; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_BaseNPC *v32; // rax
  float flDamage; // [rsp+2Ch] [rbp-B4h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-B0h] BYREF
  CResponseCriteriaSet criteria; // [rsp+50h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+90h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+A8h] [rbp-38h]

  v37 = __readfsqword(0x28u);
  v4 = CEntityHandle::operator CEntityInstance *(&params->hattacker);
  if ( v4 != 0 && v4->m_bIsDOTANPC && v4 == CDOTA_Buff::GetParent(this) )
  {
    v6 = CEntityHandle::operator CEntityInstance *(&params->htarget);
    v7 = v6;
    if ( v6 != 0
      && BYTE3(v6[7]._vptr_IHandleEntity) != 0
      && (*(v6->_vptr_IHandleEntity + 408))(v6) != 0
      && (v7[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0
      && CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value != HIBYTE(v7[7].m_CScriptComponent) )
    {
      *v8.m128i_i32 = this->overload_aoe;
      entities.m_Size = 0;
      entities.m_Memory.m_pMemory = 0;
      entities.m_Memory.m_nAllocationCount = 0;
      entities.m_Memory.m_nGrowSize = 0;
      v9 = COERCE_FLOAT(_mm_cvtsi128_si32(v8));
      AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
      Parent = CDOTA_Buff::GetParent(this);
      FindUnitsInRadius(Parent->m_iTeamNum.m_Value, AbsOrigin, v7, v9, &entities, 2, 19, 0, 0, 0);
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_stormspirit/stormspirit_overload_discharge.vpcf",
                   0,
                   v7,
                   0,
                   0);
      v14 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v14, Particle);
      KeyValues::KeyValues(&kv, "modifier_storm_spirit_overload_debuff");
      Ability = CDOTA_Buff::GetAbility(this);
      CDOTABaseAbility::GetDuration(Ability);
      KeyValues::SetFloat(&kv, "duration", v16);
      if ( entities.m_Size > 0 )
      {
        v17 = 0;
        v18 = 0;
        do
        {
          v19 = &entities.m_Memory.m_pMemory[v17];
          m_Index = entities.m_Memory.m_pMemory[v17].m_Index;
          if ( m_Index + 2 > 1 )
          {
            v21 = v19->m_Index;
            v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v19->m_Index) >> 9) & 0x3F];
            if ( v22 != 0 )
            {
              v23 = &v22[v21 & 0x1FF];
              if ( v23 != 0 && m_Index == v23->m_EHandle.m_Index )
              {
                m_pInstance = v23->m_pInstance;
                if ( v23->m_pInstance != 0
                  && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                  && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) == 0 )
                {
                  v25 = CDOTA_Buff::GetAbility(this);
                  v26 = CDOTA_Buff::GetParent(this);
                  CDOTA_BaseNPC::AddNewModifier(m_pInstance, v26, v25, "modifier_storm_spirit_overload_debuff", &kv, 0);
                  v27 = CDOTA_Buff::GetAbility(this);
                  flDamage = (*(v27->_vptr_IHandleEntity + 247))(v27);
                  v28 = CDOTA_Buff::GetAbility(this);
                  v29 = CDOTA_Buff::GetParent(this);
                  ApplyDamage(v29, m_pInstance, v28, flDamage, 2, 0);
                }
              }
            }
          }
          ++v18;
          ++v17;
        }
        while ( entities.m_Size > v18 );
        if ( entities.m_Size > 0 )
        {
          CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
          CResponseCriteriaSet::AppendCriteria(&criteria, "overloadpop", 1.0, v30);
          m_pSpeech = CDOTA_Buff::GetParent(this)->m_Speech.m_pSpeech;
          if ( m_pSpeech != 0 )
            CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 4, 0, 0, 0, 0);
          CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
        }
      }
      v32 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::UnitEmitSound(v32, "Hero_StormSpirit.Overload", 0.0, 0, 0);
      CDOTA_Buff::Destroy(this, 0, 0, 0);
      KeyValues::~KeyValues(&kv);
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_StormSpirit_Overload::GetActivityTranslationModifiers  (line 756, @0x0000000002a3f2c0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_StormSpirit_Overload::GetActivityTranslationModifiers(
        CDOTA_Modifier_StormSpirit_Overload *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "overload";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_StormSpirit_OverloadSlow::~CDOTA_Modifier_StormSpirit_OverloadSlow  (line 766, @0x0000000002a65480, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_StormSpirit_OverloadSlow::~CDOTA_Modifier_StormSpirit_OverloadSlow(
        CDOTA_Modifier_StormSpirit_OverloadSlow *const this)
{
  this->_vptr_CDOTA_Buff = &off_439FE70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_StormSpirit_OverloadSlow::~CDOTA_Modifier_StormSpirit_OverloadSlow  (line 766, @0x0000000002a654a0, libserver.so)  // inlines: ~CDOTA_Modifier_StormSpirit_OverloadSlow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_StormSpirit_OverloadSlow::~CDOTA_Modifier_StormSpirit_OverloadSlow(
        CDOTA_Modifier_StormSpirit_OverloadSlow *const this)
{
  this->_vptr_CDOTA_Buff = &off_439FE70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_StormSpirit_OverloadSlow::GetTexture  (line 774, @0x0000000002a60ee0, libserver.so)
// strings: "storm_spirit_overload"
const char *__fastcall CDOTA_Modifier_StormSpirit_OverloadSlow::GetTexture(
        CDOTA_Modifier_StormSpirit_OverloadSlow *const this)
{
  return "storm_spirit_overload";
}


// CDOTA_Modifier_StormSpirit_OverloadSlow::OnCreated  (line 786, @0x0000000002a55980, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "overload_move_slow", "overload_attack_slow"
void __fastcall CDOTA_Modifier_StormSpirit_OverloadSlow::OnCreated(
        CDOTA_Modifier_StormSpirit_OverloadSlow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->overload_move_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "overload_move_slow", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->overload_attack_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "overload_attack_slow", -1, 0);
      return;
    }
  }
  else
  {
    this->overload_move_slow = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->overload_attack_slow = 0;
}


// CDOTA_Modifier_StormSpirit_OverloadSlow::DeclareFunctions  (line 792, @0x0000000002a3f2e0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_StormSpirit_OverloadSlow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_StormSpirit_OverloadSlow::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_StormSpirit_OverloadSlow::DeclareFunctions(
        CDOTA_Modifier_StormSpirit_OverloadSlow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_StormSpirit_OverloadSlow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_StormSpirit_OverloadSlow::GetModifierAttackSpeedBonus_Constant;
}


// CDOTA_Modifier_StormSpirit_OverloadSlow::GetModifierMoveSpeedBonus_Percentage  (line 798, @0x0000000002a3f320, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_StormSpirit_OverloadSlow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_StormSpirit_OverloadSlow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->overload_move_slow;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_StormSpirit_OverloadSlow::GetModifierAttackSpeedBonus_Constant  (line 803, @0x0000000002a3f340, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_StormSpirit_OverloadSlow::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_StormSpirit_OverloadSlow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->overload_attack_slow;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_StormSpirit_BallLightning::~CDOTA_Ability_StormSpirit_BallLightning  (line 815, @0x0000000002a67440, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_StormSpirit_BallLightning::~CDOTA_Ability_StormSpirit_BallLightning(
        CDOTA_Ability_StormSpirit_BallLightning *const this)
{
  this->_vptr_IHandleEntity = &off_43A01D0;
  this->_vptr_CHorizontalMotionController = &off_43A0C58;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_StormSpirit_BallLightning::~CDOTA_Ability_StormSpirit_BallLightning  (line 815, @0x0000000002a67470, libserver.so)  // inlines: ~CDOTA_Ability_StormSpirit_BallLightning
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_StormSpirit_BallLightning::~CDOTA_Ability_StormSpirit_BallLightning(
        CDOTA_Ability_StormSpirit_BallLightning *const this)
{
  this->_vptr_IHandleEntity = &off_43A01D0;
  this->_vptr_CHorizontalMotionController = &off_43A0C58;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_StormSpirit_BallLightning::Schema_DynamicBinding  (line 817, @0x0000000002a60ef0, libserver.so)
// globals: CDOTA_Ability_StormSpirit_BallLightning::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_StormSpirit_BallLightning::Schema_DynamicBinding(
        const CDOTA_Ability_StormSpirit_BallLightning *const this)
{
  return CDOTA_Ability_StormSpirit_BallLightning::s_pSchemaBinding;
}


// CDOTA_Ability_StormSpirit_BallLightning::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 817, @0x0000000002a60f10, libserver.so)
// globals: CDOTA_Ability_StormSpirit_BallLightning::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_StormSpirit_BallLightning::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_StormSpirit_BallLightning::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_StormSpirit_BallLightning::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_StormSpirit_BallLightning::CEntityInstanceEntityClass::DestructInstance  (line 817, @0x0000000002a60f20, libserver.so)  // inlines: Destruct<CDOTA_Ability_StormSpirit_BallLightning>
void __fastcall CDOTA_Ability_StormSpirit_BallLightning::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_StormSpirit_BallLightning::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_StormSpirit_BallLightning::CEntityInstanceEntityClass::FreeInstance  (line 817, @0x0000000002a60f40, libserver.so)
void __fastcall CDOTA_Ability_StormSpirit_BallLightning::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_StormSpirit_BallLightning::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_StormSpirit_BallLightning::CEntityInstanceEntityClass::CanAllocate  (line 817, @0x0000000002a60f60, libserver.so)
bool __fastcall CDOTA_Ability_StormSpirit_BallLightning::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_StormSpirit_BallLightning::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_StormSpirit_BallLightning::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 817, @0x0000000002a60f70, libserver.so)
// globals: CDOTA_Ability_StormSpirit_BallLightning::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_StormSpirit_BallLightning::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_StormSpirit_BallLightning::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_StormSpirit_BallLightning::s_pSchemaBinding;
}


// CDOTA_Ability_StormSpirit_BallLightning::CEntityInstanceEntityClass::AllocateInstance  (line 817, @0x0000000002a63eb0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_StormSpirit_BallLightning::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_StormSpirit_BallLightning::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 976);
  memset(v1, 0, 0x3D0u);
  return v1;
}


// CDOTA_Ability_StormSpirit_BallLightning::CEntityInstanceEntityClass::ConstructInstance  (line 817, @0x0000000002a66090, libserver.so)  // inlines: CDOTA_Ability_StormSpirit_BallLightning, CHorizontalMotionController, Construct<CDOTA_Ability_StormSpirit_BallLightning>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_StormSpirit_BallLightning::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_StormSpirit_BallLightning::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 230) = 2;
    *p = &off_43A01D0;
    *(p + 114) = &off_43A0C58;
    *(p + 235) = -1;
  }
  return p;
}


// CDOTA_Ability_StormSpirit_BallLightning::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 817, @0x0000000002a6abb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_StormSpirit_BallLightning::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_StormSpirit_BallLightning::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_StormSpirit_BallLightning::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 817, @0x0000000002a6abd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_StormSpirit_BallLightning::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_StormSpirit_BallLightning::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_StormSpirit_BallLightning::GetEntityClassInternal  (line 817, @0x0000000002a71790, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_02.cpp
// strings: "storm_spirit_ball_lightning", "CDOTA_Ability_StormSpirit_BallLightning"
// globals: `guard variable for'CDOTA_Ability_StormSpirit_BallLightning::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_BallLightningClass, CDOTA_Ability_StormSpirit_BallLightning::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_BallLightningClass, __dso_handle, CDOTA_Ability_StormSpirit_BallLightning::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_StormSpirit_BallLightning::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_BallLightningClassInfo, CDOTA_Ability_StormSpirit_BallLightning::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_BallLightningClassInfo
CEntityClass *__cdecl CDOTA_Ability_StormSpirit_BallLightning::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_StormSpirit_BallLightning::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_BallLightningClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_StormSpirit_BallLightning::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_BallLightningClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_StormSpirit_BallLightning::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_BallLightningClass);
    CDOTA_Ability_StormSpirit_BallLightning::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_BallLightningClass._vptr_CEntityClass = off_43A0150;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_StormSpirit_BallLightning::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_BallLightningClass);
    __cxa_atexit(
      CDOTA_Ability_StormSpirit_BallLightning::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_StormSpirit_BallLightning::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_BallLightningClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_StormSpirit_BallLightningClass != 0 )
    return &CDOTA_Ability_StormSpirit_BallLightning::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_BallLightningClass;
  if ( `guard variable for'CDOTA_Ability_StormSpirit_BallLightning::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_BallLightningClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_StormSpirit_BallLightning::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_BallLightningClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_StormSpirit_BallLightning::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_BallLightningClassInfo,
      "CDOTA_Ability_StormSpirit_BallLightning",
      "storm_spirit_ball_lightning",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_StormSpirit_BallLightning::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_BallLightningClassInfo);
  }
  CDOTA_Ability_StormSpirit_BallLightning::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_BallLightningClass.m_pClassInfo = &CDOTA_Ability_StormSpirit_BallLightning::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_BallLightningClassInfo;
  CDOTA_Ability_StormSpirit_BallLightning::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_BallLightningClass.m_pBaseClassInfo = CDOTA_Ability_StormSpirit_BallLightning::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_BallLightningClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_StormSpirit_BallLightningClass = &CDOTA_Ability_StormSpirit_BallLightning::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_BallLightningClass;
  CDOTA_Ability_StormSpirit_BallLightning::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_StormSpirit_BallLightningClassInfo.m_pClass = &CDOTA_Ability_StormSpirit_BallLightning::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_BallLightningClass;
  CDOTA_Ability_StormSpirit_BallLightning::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_BallLightningClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_StormSpirit_BallLightningClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_StormSpirit_BallLightning::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_StormSpirit_BallLightningClass;
}


// CDOTA_Ability_StormSpirit_BallLightning::GetStolenActivityModifier  (line 837, @0x0000000002a60f80, libserver.so)
const char *__fastcall CDOTA_Ability_StormSpirit_BallLightning::GetStolenActivityModifier(
        CDOTA_Ability_StormSpirit_BallLightning *const this)
{
  return "ball_lightning";
}


// CDOTA_Ability_StormSpirit_BallLightning::YouForgotToImplementOrDeclareServerClass  (line 858, @0x0000000002a3f360, libserver.so)
int __fastcall CDOTA_Ability_StormSpirit_BallLightning::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_StormSpirit_BallLightning *const this)
{
  return 0;
}


// CDOTA_Ability_StormSpirit_BallLightning::GetServerClass  (line 858, @0x0000000002a48470, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_StormSpirit_BallLightning::GetServerClass(
        CDOTA_Ability_StormSpirit_BallLightning *const this)
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


// CDOTA_Ability_StormSpirit_BallLightning::OnSpellStart  (line 867, @0x0000000002a57060, libserver.so)  // inlines: CEntityHandle, CHandle, FastSqrt, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetMana, GetMaxMana, GetSerialNumber, GetTeamNumber, Length, NormalizeInPlace, Set, VectorLength, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator*, operator-, operator=, sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetCaster, CDOTALocomotor::ApplyHorizontalMotionController, CDOTA_ProjectileManager::IsValidProjectile, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCursorTarget, CBaseEntity::GetAbsOrigin, VectorNormalize, CDOTA_ProjectileManager::CreateLinearProjectile, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound (21 total)
// strings: "ball_lightning_initial_mana_base", "ball_lightning_initial_mana_percentage", "ball_lightning_travel_cost_base", "ball_lightning_travel_cost_percent", "scepter_remnant_interval", "ball_lightning_move_speed" (10 total)
void __fastcall CDOTA_Ability_StormSpirit_BallLightning::OnSpellStart(
        CDOTA_Ability_StormSpirit_BallLightning *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTALocomotor *v3; // rax
  CBaseEntity *CursorTarget; // rax
  const Vector *AbsOrigin; // rax
  float x; // r13d
  float y; // r14d
  CDOTA_BaseNPC *v8; // rax
  const Vector *v9; // rax
  vec_t v10; // xmm0_4
  vec_t v11; // xmm1_4
  float v12; // xmm2_4
  CDOTA_BaseNPC *v13; // rax
  const Vector *v14; // rax
  vec_t z; // xmm0_4
  int LevelSpecialValue; // r15d
  int v17; // r14d
  int v18; // eax
  int v19; // r13d
  vec_t v20; // xmm0_4
  vec_t v21; // xmm1_4
  vec_t v22; // xmm0_4
  vec_t v23; // xmm0_4
  vec_t v24; // xmm0_4
  CDOTA_BaseNPC *v25; // rax
  CEntityIdentity *m_pEntity; // rax
  int v27; // edx
  __int16 v28; // cx
  CDOTA_BaseNPC *v29; // rax
  vec_t v30; // xmm0_4
  vec_t v31; // xmm0_4
  CDOTA_BaseNPC *v32; // r14
  CDOTA_BaseNPC *v33; // rax
  CDOTA_BaseNPC *v34; // rax
  CDOTA_BaseNPC *v35; // rax
  CEntityIdentity *v36; // rdx
  __int16 v37; // cx
  int (__fastcall *v38)(CDOTA_Ability_StormSpirit_BallLightning *const, _QWORD); // r12
  unsigned int EffectiveLevel; // eax
  float v40; // xmm0_4
  CDOTA_BaseNPC *v41; // rax
  float v42; // xmm1_4
  int (__fastcall *v43)(CDOTA_Ability_StormSpirit_BallLightning *const, _QWORD); // r12
  unsigned int v44; // eax
  CDOTA_BaseNPC *v45; // rax
  const QAngle *AbsAngles; // rax
  float m_Value; // [rsp+8h] [rbp-108h]
  float fLengtha; // [rsp+Ch] [rbp-104h]
  float fLengthb; // [rsp+Ch] [rbp-104h]
  float fLengthc; // [rsp+Ch] [rbp-104h]
  float fLengthd; // [rsp+Ch] [rbp-104h]
  float fLength; // [rsp+Ch] [rbp-104h]
  EHANDLE hTarget; // [rsp+10h] [rbp-100h] BYREF
  Vector CursorPosition; // [rsp+20h] [rbp-F0h]
  Vector vDirection; // [rsp+30h] [rbp-E0h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+40h] [rbp-D0h] BYREF
  KeyValues kv; // [rsp+C0h] [rbp-50h] BYREF
  unsigned __int64 v58; // [rsp+D8h] [rbp-38h]

  v58 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = (*(Caster->_vptr_IHandleEntity + 376))(Caster);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v3, &this->CHorizontalMotionController, 0) )
  {
    if ( CDOTA_ProjectileManager::IsValidProjectile(&g_DOTAProjectileManager, this->m_iProjectileID) )
    {
      fLengthb = CDOTABaseAbility::GetCaster(this)->m_flMaxMana.m_Value;
      m_Value = CDOTABaseAbility::GetCaster(this)->m_flMana.m_Value;
      v38 = *(this->_vptr_IHandleEntity + 274);
      EffectiveLevel = CDOTABaseAbility::GetEffectiveLevel(this);
      if ( (v38(this, EffectiveLevel) + m_Value) <= fLengthb )
      {
        fLengthd = CDOTABaseAbility::GetCaster(this)->m_flMana.m_Value;
        v43 = *(this->_vptr_IHandleEntity + 274);
        v44 = CDOTABaseAbility::GetEffectiveLevel(this);
        v40 = v43(this, v44) + fLengthd;
      }
      else
      {
        v40 = CDOTABaseAbility::GetCaster(this)->m_flMaxMana.m_Value;
      }
      fLengthc = v40;
      v41 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::SetMana(v41, fLengthc, v42);
    }
    else
    {
      this->ball_lightning_initial_mana_base = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                                 this,
                                                 "ball_lightning_initial_mana_base",
                                                 -1,
                                                 0);
      this->ball_lightning_initial_mana_percentage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                                       this,
                                                       "ball_lightning_initial_mana_percentage",
                                                       -1,
                                                       0);
      this->ball_lightning_travel_cost_base = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                                this,
                                                "ball_lightning_travel_cost_base",
                                                -1,
                                                0);
      this->ball_lightning_travel_cost_percent = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                                   this,
                                                   "ball_lightning_travel_cost_percent",
                                                   -1,
                                                   0);
      this->scepter_remnant_interval = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                         this,
                                         "scepter_remnant_interval",
                                         -1,
                                         0);
      if ( CDOTABaseAbility::GetCursorTarget(this) != 0 )
      {
        CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
        AbsOrigin = CBaseEntity::GetAbsOrigin(CursorTarget);
        x = AbsOrigin->x;
        y = AbsOrigin->y;
      }
      else
      {
        CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
        x = CursorPosition.x;
        y = CursorPosition.y;
      }
      v8 = CDOTABaseAbility::GetCaster(this);
      v9 = CBaseEntity::GetAbsOrigin(v8);
      v10 = x - v9->x;
      v11 = y - v9->y;
      vDirection.z = 0.0;
      vDirection.x = v10;
      vDirection.y = v11;
      v12 = fsqrt(((v10 * v10) + (v11 * v11)) + 0.0);
      if ( v12 < 0.0099999998 )
      {
        fLength = v12;
        v45 = CDOTABaseAbility::GetCaster(this);
        AbsAngles = CBaseEntity::GetAbsAngles(v45);
        AngleVectors(AbsAngles, &vDirection, 0, 0);
        v12 = fLength;
      }
      fLengtha = v12;
      VectorNormalize(&vDirection);
      v13 = CDOTABaseAbility::GetCaster(this);
      v14 = CBaseEntity::GetAbsOrigin(v13);
      this->m_vStartLocation.x = v14->x;
      this->m_vStartLocation.y = v14->y;
      z = v14->z;
      this->m_fDistanceAccumulator = 0.0;
      this->m_vStartLocation.z = z;
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "ball_lightning_move_speed", -1, 0);
      v17 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "ball_lightning_aoe", -1, 0);
      v18 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "ball_lightning_vision_radius", -1, 0);
      info.bProvidesVision = 0;
      info.hSource.m_Index = -1;
      v19 = v18;
      info.pszEffectName = 0;
      info.bHasFrontalCone = 1;
      v20 = vec3_origin.z;
      info.bCheckStartPosition = 0;
      v21 = vec3_origin.y;
      info.bDrawsOnMinimap = 0;
      info.vAcceleration.z = v20;
      v22 = this->m_vStartLocation.x;
      info.bVisibleToEnemies = 1;
      info.vAcceleration.y = v21;
      info.vSpawnOrigin.x = v22;
      v23 = this->m_vStartLocation.y;
      info.vAcceleration.x = vec3_origin.x;
      info.vSpawnOrigin.y = v23;
      v24 = this->m_vStartLocation.z;
      info.bIgnoreSource = 0;
      info.vSpawnOrigin.z = v24;
      info.iUnitTargetTeam = 0;
      info.iUnitTargetFlags = 0;
      info.iVisionTeamNumber = -1;
      info.iUnitTargetType = 0;
      info.iVisionRadius = -1;
      info.bStickyFoWReveal = 0;
      info.pKVExtraData = 0;
      info.fExpireTime = 0.0;
      info.fMaxSpeed = 0.0;
      info.pAbility = this;
      info.vVelocity.x = LevelSpecialValue * vDirection.x;
      info.vVelocity.z = vDirection.z * LevelSpecialValue;
      info.vVelocity.y = vDirection.y * LevelSpecialValue;
      info.fDistance = fLengtha;
      info.fStartRadius = v17;
      info.fEndRadius = v17;
      v25 = CDOTABaseAbility::GetCaster(this);
      if ( v25 != 0 && (m_pEntity = v25->m_pEntity) != 0 )
      {
        v27 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v28 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v28 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(info.hSource.m_Index) = v28 | info.hSource.m_Index & 0x8000;
        info.hSource.m_Index = (v27 << 15) | info.hSource.m_Index & 0x7FFF;
      }
      else
      {
        info.hSource.m_Index = -1;
      }
      info.bProvidesVision = 1;
      info.iUnitTargetTeam = 2;
      info.iUnitTargetType = 19;
      info.bHasFrontalCone = 0;
      v29 = CDOTABaseAbility::GetCaster(this);
      v30 = this->m_vStartLocation.x;
      LODWORD(v29) = v29->m_iTeamNum.m_Value;
      info.iVisionRadius = v19;
      this->m_vProjectileLocation.x = v30;
      this->m_vProjectileLocation.y = this->m_vStartLocation.y;
      v31 = this->m_vStartLocation.z;
      info.iVisionTeamNumber = v29;
      this->m_vProjectileLocation.z = v31;
      this->m_iProjectileID = CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
      KeyValues::KeyValues(&kv, "modifier_storm_spirit_ball_lightning");
      v32 = CDOTABaseAbility::GetCaster(this);
      v33 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v33, v32, this, "modifier_storm_spirit_ball_lightning", &kv, 0);
      v34 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::UnitEmitSound(v34, "Hero_StormSpirit.BallLightning", 0.0, 0, 0);
      v35 = CDOTABaseAbility::GetCaster(this);
      hTarget.m_Index = -1;
      if ( v35 != 0 )
      {
        v36 = v35->m_pEntity;
        if ( v36 != 0 )
        {
          v37 = 0x7FFF;
          if ( v36->m_EHandle.m_Index != -1 )
            v37 = v36->m_EHandle.m_Index & 0x7FFF;
          hTarget.m_Index = (((v36->m_EHandle.m_Index >> 15) - (v36->m_flags & 1)) << 15) | v37 & 0x7FFF;
        }
      }
      CDOTA_ProjectileManager::ProjectileDodge(&g_DOTAProjectileManager, &hTarget, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Ability_StormSpirit_BallLightning::OnProjectileThink  (line 942, @0x0000000002a4ae60, libserver.so)  // inlines: FastSqrt, GetBool, GetInt, Length2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator=
// calls: CDOTABaseAbility::GetCaster, CGridNav::DestroyTreesAroundPoint, CDOTA_Ability_StormSpirit_BallLightning::GetTravelManaCost, CDOTA_BaseNPC::SpendMana, CDOTA_ProjectileManager::DestroyLinearProjectile, CDOTALocomotor::RemoveHorizontalMotionController, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_storm_spirit_ball_lightning"
void __fastcall CDOTA_Ability_StormSpirit_BallLightning::OnProjectileThink(
        CDOTA_Ability_StormSpirit_BallLightning *const this,
        const Vector *const vLocation)
{
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v5; // r13d
  CDOTA_BaseNPC *v6; // rax
  float v7; // xmm3_4
  float m_fDistanceAccumulator; // xmm0_4
  float v9; // xmm1_4
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTALocomotor *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  float v15; // [rsp+8h] [rbp-28h]
  float flManaSpent; // [rsp+Ch] [rbp-24h]

  this->m_fDistanceAccumulator = fsqrt(
                                   ((vLocation->x - this->m_vProjectileLocation.x)
                                  * (vLocation->x - this->m_vProjectileLocation.x))
                                 + ((vLocation->y - this->m_vProjectileLocation.y)
                                  * (vLocation->y - this->m_vProjectileLocation.y)))
                               + this->m_fDistanceAccumulator;
  this->m_vProjectileLocation = *vLocation;
  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
  v6 = CDOTABaseAbility::GetCaster(this);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 1, v5, *vLocation, v6->m_flHullRadius, v7);
  m_fDistanceAccumulator = this->m_fDistanceAccumulator;
  if ( m_fDistanceAccumulator >= 100.0 )
  {
    v9 = 100.0;
    do
    {
      if ( dota_ability_debug.m_pParent->m_Value.m_nValue == 0 )
      {
        v15 = v9;
        flManaSpent = CDOTA_Ability_StormSpirit_BallLightning::GetTravelManaCost(this);
        v10 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::SpendMana(v10, flManaSpent, this, 0);
        m_fDistanceAccumulator = this->m_fDistanceAccumulator;
        v9 = v15;
      }
      m_fDistanceAccumulator = m_fDistanceAccumulator - v9;
      this->m_fDistanceAccumulator = m_fDistanceAccumulator;
    }
    while ( m_fDistanceAccumulator >= 100.0 );
  }
  if ( CDOTABaseAbility::GetCaster(this)->m_flMana.m_Value <= 2.0
    || (v14 = CDOTABaseAbility::GetCaster(this), (*(v14->_vptr_IHandleEntity + 408))(v14) == 0) )
  {
    CDOTA_ProjectileManager::DestroyLinearProjectile(&g_DOTAProjectileManager, this->m_iProjectileID);
    this->m_iProjectileID = -1;
    v11 = CDOTABaseAbility::GetCaster(this);
    v12 = (*(v11->_vptr_IHandleEntity + 376))(v11);
    CDOTALocomotor::RemoveHorizontalMotionController(v12, &this->CHorizontalMotionController);
    v13 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveModifierByName(v13, "modifier_storm_spirit_ball_lightning");
  }
}


// CDOTA_Ability_StormSpirit_BallLightning::OnProjectileHit  (line 972, @0x0000000002a46d80, libserver.so)  // inlines: FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsRealHero, IsValid, Length2D, LookupEntity, RoundFloatToInt, ToDOTABaseNPC, ToDOTABaseNPCHero, VectorSubtract, _mm_cvt_ss2si, _mm_cvtss_si32, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-
// calls: CDOTABaseAbility::GetCaster, CDOTALocomotor::RemoveHorizontalMotionController, CDOTA_BaseNPC::RemoveModifierByName, ApplyDamage, EconEntity_OnOwnerKillEaterEvent
// strings: "modifier_storm_spirit_ball_lightning"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_StormSpirit_BallLightning::OnProjectileHit(
        CDOTA_Ability_StormSpirit_BallLightning *const this,
        unsigned __int16 *hTarget,
        const Vector *const vLocation)
{
  int v4; // eax
  unsigned __int64 v5; // rsi
  CEntityIdentity *v6; // rcx
  CEntityIdentity *v7; // rcx
  CDOTA_BaseNPC *Caster; // rax
  CDOTALocomotor *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CEntityInstance *m_pInstance; // r12
  float v13; // xmm0_4
  CDOTA_BaseNPC *v14; // rax
  double v15; // xmm0_8
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC_Hero *v17; // rdi
  CDOTA_BaseNPC *v18; // rax
  CDOTA_BaseNPC_Hero *v19; // rdi
  float flDamage; // [rsp+0h] [rbp-30h]

  v4 = *hTarget;
  if ( (*hTarget + 2) <= 1
    || (v5 = *hTarget, (v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F]) == 0)
    || (v7 = &v6[v5 & 0x1FF]) == 0
    || v4 != v7->m_EHandle.m_Index
    || (m_pInstance = v7->m_pInstance, v7->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    v9 = (*(Caster->_vptr_IHandleEntity + 376))(Caster);
    CDOTALocomotor::RemoveHorizontalMotionController(v9, &this->CHorizontalMotionController);
    v10 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveModifierByName(v10, "modifier_storm_spirit_ball_lightning");
    this->m_iProjectileID = -1;
    return 0;
  }
  v13 = fsqrt(
          ((vLocation->x - this->m_vStartLocation.x) * (vLocation->x - this->m_vStartLocation.x))
        + ((vLocation->y - this->m_vStartLocation.y) * (vLocation->y - this->m_vStartLocation.y)));
  flDamage = ((*(this->_vptr_IHandleEntity + 247))(this) * v13) / 100.0;
  v14 = CDOTABaseAbility::GetCaster(this);
  v15 = ApplyDamage(v14, m_pInstance, this, flDamage, 2, 0);
  if ( flDamage > 0 )
  {
    v16 = CDOTABaseAbility::GetCaster(this);
    if ( v16 != 0 && (v16->m_iUnitType & 1) != 0 )
      v17 = v16;
    else
      v17 = 0;
    EconEntity_OnOwnerKillEaterEvent(
      v17,
      0,
      kill_eater_event_t::kKillEaterEvent_StormSpirit_BallDamage,
      flDamage,
      INVALID_ITEM_DEF_INDEX);
  }
  if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance, v15) != 0
    || (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) == 0
    || LOBYTE(m_pInstance[71].m_pEntity) != 0 )
  {
    return 0;
  }
  v18 = CDOTABaseAbility::GetCaster(this);
  if ( v18 != 0 && (v18->m_iUnitType & 1) != 0 )
    v19 = v18;
  else
    v19 = 0;
  EconEntity_OnOwnerKillEaterEvent(
    v19,
    m_pInstance,
    kill_eater_event_t::kKillEaterEvent_StormSpirit_BallKills,
    1,
    INVALID_ITEM_DEF_INDEX);
  return 0;
}


// CDOTA_Ability_StormSpirit_BallLightning::UpdateHorizontalMotion  (line 1005, @0x0000000002a42200, libserver.so)
// calls: CDOTA_ProjectileManager::IsValidProjectile, CDOTA_ProjectileManager::GetLinearProjectileLocation, CBaseEntity::SetAbsOrigin
void __fastcall CDOTA_Ability_StormSpirit_BallLightning::UpdateHorizontalMotion(
        CDOTA_Ability_StormSpirit_BallLightning *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  Vector vNewLocation; // [rsp+0h] [rbp-30h] BYREF

  if ( CDOTA_ProjectileManager::IsValidProjectile(&g_DOTAProjectileManager, this->m_iProjectileID) )
  {
    CDOTA_ProjectileManager::GetLinearProjectileLocation(&g_DOTAProjectileManager, this->m_iProjectileID, &vNewLocation);
    CBaseEntity::SetAbsOrigin(me, &vNewLocation);
  }
}


// CDOTA_Ability_StormSpirit_BallLightning::OnHorizontalMotionInterrupted  (line 1020, @0x0000000002a41590, libserver.so)
// calls: CDOTA_ProjectileManager::DestroyLinearProjectile, CDOTABaseAbility::GetCaster, CDOTALocomotor::RemoveHorizontalMotionController, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_storm_spirit_ball_lightning"
void __fastcall CDOTA_Ability_StormSpirit_BallLightning::OnHorizontalMotionInterrupted(
        CDOTA_Ability_StormSpirit_BallLightning *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTALocomotor *v3; // rax
  CDOTA_BaseNPC *v4; // rax

  CDOTA_ProjectileManager::DestroyLinearProjectile(&g_DOTAProjectileManager, this->m_iProjectileID);
  this->m_iProjectileID = -1;
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = (*(Caster->_vptr_IHandleEntity + 376))(Caster);
  CDOTALocomotor::RemoveHorizontalMotionController(v3, &this->CHorizontalMotionController);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(v4, "modifier_storm_spirit_ball_lightning");
}


// CDOTA_Ability_StormSpirit_BallLightning::GetManaCost  (line 1032, @0x0000000002a52390, libserver.so)  // inlines: GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster
// strings: "ball_lightning_initial_mana_base", "ball_lightning_initial_mana_percentage"
int __fastcall CDOTA_Ability_StormSpirit_BallLightning::GetManaCost(
        CDOTA_Ability_StormSpirit_BallLightning *const this,
        int iLevel)
{
  int LevelSpecialValue; // eax
  double ball_lightning_initial_mana_base; // xmm2_8

  this->ball_lightning_initial_mana_base = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                             this,
                                             "ball_lightning_initial_mana_base",
                                             -1,
                                             0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                        this,
                        "ball_lightning_initial_mana_percentage",
                        -1,
                        0);
  ball_lightning_initial_mana_base = this->ball_lightning_initial_mana_base;
  this->ball_lightning_initial_mana_percentage = LevelSpecialValue;
  return (CDOTABaseAbility::GetCaster(this)->m_flMaxMana.m_Value
        * (this->ball_lightning_initial_mana_percentage
         / 100.0)
        + ball_lightning_initial_mana_base);
}


// CDOTA_Ability_StormSpirit_BallLightning::GetTravelManaCost  (line 1042, @0x0000000002a4ae00, libserver.so)
// calls: CDOTABaseAbility::GetCaster
// callers: CDOTA_Ability_StormSpirit_BallLightning::OnProjectileThink
float __fastcall CDOTA_Ability_StormSpirit_BallLightning::GetTravelManaCost(
        CDOTA_Ability_StormSpirit_BallLightning *const this)
{
  double ball_lightning_travel_cost_base; // [rsp+8h] [rbp-18h]

  ball_lightning_travel_cost_base = this->ball_lightning_travel_cost_base;
  return CDOTABaseAbility::GetCaster(this)->m_flMaxMana.m_Value * (this->ball_lightning_travel_cost_percent / 100.0)
       + ball_lightning_travel_cost_base;
}


// CDOTA_Ability_StormSpirit_BallLightning::GetAbilityDamageToTargetOverInterval  (line 1049, @0x0000000002a42270, libserver.so)  // inlines: FastSqrt, Length2D, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-
// calls: CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_StormSpirit_BallLightning::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_StormSpirit_BallLightning *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *Caster; // rax
  const Vector *v9; // rax
  float v10; // [rsp-38h] [rbp-38h]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    AbsOrigin = CBaseEntity::GetAbsOrigin(pTarget);
    Caster = CDOTABaseAbility::GetCaster(this);
    v9 = CBaseEntity::GetAbsOrigin(Caster);
    v10 = (fsqrt(((v9->x - AbsOrigin->x) * (v9->x - AbsOrigin->x)) + ((v9->y - AbsOrigin->y) * (v9->y - AbsOrigin->y)))
         / 100.0)
        * (*(this->_vptr_IHandleEntity + 247))(this);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * v10);
  }
  return result;
}


// CDOTA_Modifier_StormSpirit_BallLightning::~CDOTA_Modifier_StormSpirit_BallLightning  (line 1063, @0x0000000002a65430, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_StormSpirit_BallLightning::~CDOTA_Modifier_StormSpirit_BallLightning(
        CDOTA_Modifier_StormSpirit_BallLightning *const this)
{
  this->_vptr_CDOTA_Buff = &off_43A0CF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_StormSpirit_BallLightning::~CDOTA_Modifier_StormSpirit_BallLightning  (line 1063, @0x0000000002a65450, libserver.so)  // inlines: ~CDOTA_Modifier_StormSpirit_BallLightning
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_StormSpirit_BallLightning::~CDOTA_Modifier_StormSpirit_BallLightning(
        CDOTA_Modifier_StormSpirit_BallLightning *const this)
{
  this->_vptr_CDOTA_Buff = &off_43A0CF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_StormSpirit_BallLightning::GetTexture  (line 1068, @0x0000000002a60f90, libserver.so)
// strings: "storm_spirit_ball_lightning"
const char *__fastcall CDOTA_Modifier_StormSpirit_BallLightning::GetTexture(
        CDOTA_Modifier_StormSpirit_BallLightning *const this)
{
  return "storm_spirit_ball_lightning";
}


// CDOTA_Modifier_StormSpirit_BallLightning::IsPurgable  (line 1070, @0x0000000002a60fa0, libserver.so)
bool __fastcall CDOTA_Modifier_StormSpirit_BallLightning::IsPurgable(
        CDOTA_Modifier_StormSpirit_BallLightning *const this)
{
  return 0;
}


// CDOTA_Modifier_StormSpirit_BallLightning::DeclareFunctions  (line 1087, @0x0000000002a3f370, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_StormSpirit_BallLightning::GetOverrideAnimation(CModifierParams const&), CDOTA_Modifier_StormSpirit_BallLightning::GetForceDrawOnMinimap(CModifierParams const&)
void __fastcall CDOTA_Modifier_StormSpirit_BallLightning::DeclareFunctions(
        CDOTA_Modifier_StormSpirit_BallLightning *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_StormSpirit_BallLightning::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
  this->m_Functions[160].__delta = 0;
  this->m_Functions[160].__pfn = CDOTA_Modifier_StormSpirit_BallLightning::GetForceDrawOnMinimap;
}


// CDOTA_Modifier_StormSpirit_BallLightning::GetOverrideAnimation  (line 1095, @0x0000000002a3f3b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_StormSpirit_BallLightning::GetOverrideAnimation(
        CDOTA_Modifier_StormSpirit_BallLightning *const this,
        const CModifierParams *const params)
{
  return 0x44BDE00000000001uLL;
}


// CDOTA_Modifier_StormSpirit_BallLightning::GetForceDrawOnMinimap  (line 1102, @0x0000000002a3f3d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_StormSpirit_BallLightning::GetForceDrawOnMinimap(
        CDOTA_Modifier_StormSpirit_BallLightning *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_StormSpirit_BallLightning::OnCreated  (line 1109, @0x0000000002a409f0, libserver.so)
// calls: CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle, CDOTA_BaseNPC::UnitEmitSound
// strings: "particles/units/heroes/hero_stormspirit/stormspirit_ball_lightning.vpcf", "attach_hitloc", "Hero_StormSpirit.BallLightning.Loop"
void __fastcall CDOTA_Modifier_StormSpirit_BallLightning::OnCreated(
        CDOTA_Modifier_StormSpirit_BallLightning *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v5; // r14
  CDOTA_ParticleManager *v6; // rax
  __int64 v7; // r13
  CDOTA_BaseNPC *v8; // r14
  CDOTA_ParticleManager *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-24h]
  Vector v12; // 0:xmm0_8.8,8:xmm1_4.4

  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_stormspirit/stormspirit_ball_lightning.vpcf",
                      2,
                      Parent,
                      0,
                      0);
  v5 = CDOTA_Buff::GetParent(this);
  v6 = GetParticleManager();
  v7 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(v6, Parent, 0, v5, 5, "attach_hitloc", vec3_invalid, 1);
  v8 = CDOTA_Buff::GetParent(this);
  v9 = GetParticleManager();
  *&v12.x = v7;
  v12.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v9, Parent, 1, v8, 1, 0, v12, 1);
  CDOTA_Buff::AddParticle(this, Parent, 0, 0, -1, 0, 0);
  v10 = CDOTA_Buff::GetParent(this);
  this->m_nBallLightingLoop = CDOTA_BaseNPC::UnitEmitSound(v10, "Hero_StormSpirit.BallLightning.Loop", 0.0, 0, 0);
}


// CDOTA_Modifier_StormSpirit_BallLightning::OnDestroy  (line 1122, @0x0000000002a44fb0, libserver.so)  // inlines: CBroadcastRecipientFilter, CReliableBroadcastRecipientFilter, InValidate, SpeakConcept, StopSoundEvent, ~CBroadcastRecipientFilter, ~CReliableBroadcastRecipientFilter
// calls: CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_Buff::GetParent, CDOTA_Speech::SpeakConcept, CResponseCriteriaSet::~CResponseCriteriaSet, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, CRecipientFilter::MakeReliable, CSoundOpGameSystem::StopSoundEvent, CRecipientFilter::~CRecipientFilter, __stack_chk_fail, _Unwind_Resume
// strings: "balllightning"
void __fastcall CDOTA_Modifier_StormSpirit_BallLightning::OnDestroy(
        CDOTA_Modifier_StormSpirit_BallLightning *const this)
{
  CDOTA_Speech *m_pSpeech; // rdi
  CSoundOpGameSystem *v3; // r14
  CResponseCriteriaSet criteria; // [rsp+10h] [rbp-1A0h] BYREF
  CRecipientFilter v5; // [rsp+50h] [rbp-160h] BYREF
  unsigned __int64 v6; // [rsp+188h] [rbp-28h]

  v6 = __readfsqword(0x28u);
  CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
  CResponseCriteriaSet::AppendCriteria(&criteria, "balllightning", "end", 1.0);
  m_pSpeech = CDOTA_Buff::GetParent(this)->m_Speech.m_pSpeech;
  if ( m_pSpeech != 0 )
    CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 4, 0, 0, 0, 0);
  v3 = g_pSoundOpGameSystem;
  if ( this->m_nBallLightingLoop.m_nGuid.m_Data != 0 )
  {
    CRecipientFilter::CRecipientFilter(&v5);
    v5._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&v5);
    v5._vptr_IRecipientFilter = &off_3FCB130;
    CRecipientFilter::MakeReliable(&v5);
    CSoundOpGameSystem::StopSoundEvent(v3, &v5, this->m_nBallLightingLoop);
    v5._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&v5);
    this->m_nBallLightingLoop.m_nGuid.m_Data = 0;
    this->m_nBallLightingLoop.m_hStackHash = -1;
  }
  CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
}


// CDOTA_Modifier_StormSpirit_BallLightning::CheckState  (line 1134, @0x0000000002a3f3f0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_StormSpirit_BallLightning::CheckState(
        CDOTA_Modifier_StormSpirit_BallLightning *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x800100uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFF7FFEFFLL;
}


// CDOTA_Modifier_Holdout_StaticRemnantThinker::~CDOTA_Modifier_Holdout_StaticRemnantThinker  (line 1152, @0x0000000002a653e0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Holdout_StaticRemnantThinker::~CDOTA_Modifier_Holdout_StaticRemnantThinker(
        CDOTA_Modifier_Holdout_StaticRemnantThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_43A1010;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Holdout_StaticRemnantThinker::~CDOTA_Modifier_Holdout_StaticRemnantThinker  (line 1152, @0x0000000002a65400, libserver.so)  // inlines: ~CDOTA_Modifier_Holdout_StaticRemnantThinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Holdout_StaticRemnantThinker::~CDOTA_Modifier_Holdout_StaticRemnantThinker(
        CDOTA_Modifier_Holdout_StaticRemnantThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_43A1010;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Holdout_StaticRemnantThinker::IsHidden  (line 1161, @0x0000000002a60fb0, libserver.so)
bool __fastcall CDOTA_Modifier_Holdout_StaticRemnantThinker::IsHidden(
        CDOTA_Modifier_Holdout_StaticRemnantThinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Holdout_StaticRemnantThinker::OnCreated  (line 1176, @0x0000000002a5dc40, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink
// strings: "static_remnant_radius", "static_remnant_damage_radius", "static_remnant_delay", "static_remnant_damage", "overload_duration"
void __fastcall CDOTA_Modifier_Holdout_StaticRemnantThinker::OnCreated(
        CDOTA_Modifier_Holdout_StaticRemnantThinker *const this,
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
    this->static_remnant_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                    Ability,
                                    "static_remnant_radius",
                                    -1,
                                    0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->static_remnant_radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->static_remnant_damage_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                             v4,
                                             "static_remnant_damage_radius",
                                             -1,
                                             0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_10;
    }
  }
  this->static_remnant_damage_radius = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->static_remnant_delay = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "static_remnant_delay", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
LABEL_11:
    this->static_remnant_damage = 0;
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
LABEL_12:
    this->overload_duration = 0.0;
    goto LABEL_7;
  }
LABEL_10:
  this->static_remnant_delay = 0.0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_11;
LABEL_5:
  this->static_remnant_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "static_remnant_damage", -1, 0);
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
    goto LABEL_12;
LABEL_6:
  this->overload_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "overload_duration", -1, 0);
LABEL_7:
  CDOTA_Buff::StartIntervalThink(this, this->static_remnant_delay, v8);
}


// CDOTA_Modifier_Holdout_StaticRemnantThinker::CheckState  (line 1199, @0x0000000002a3f410, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Holdout_StaticRemnantThinker::CheckState(
        CDOTA_Modifier_Holdout_StaticRemnantThinker *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x2804100uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFD7FBEFFLL;
}


// CDOTA_Modifier_Holdout_StaticRemnantThinker::OnIntervalThink  (line 1211, @0x0000000002a50570, libserver.so)  // inlines: CEntityHandle, CUtlMemory, CUtlVector, CUtlVectorBase, DOTAGameRules, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, GetTeamNumber, IndexToIdentity, Init, IsTrained, IsValid, LookupEntity, ToDOTABaseNPC, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::GetAbility, ApplyDamage, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetEffectiveLevel, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier (21 total)
// strings: "holdout_overload", "modifier_storm_spirit_overload_debuff", "Hero_StormSpirit.StaticRemnantExplode"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Holdout_StaticRemnantThinker::OnIntervalThink(
        CDOTA_Modifier_Holdout_StaticRemnantThinker *const this)
{
  int static_remnant_radius; // ebx
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v6; // rax
  __m128i v7; // xmm3
  float v8; // r14d
  CDOTA_BaseNPC *v9; // r13
  CDOTA_BaseNPC *v10; // rax
  const Vector *v11; // rbx
  CDOTA_BaseNPC *v12; // rax
  __int64 v13; // rbx
  CHandle<CBaseEntity> *v14; // rdx
  uint32 m_Index; // eax
  __int16 v16; // cx
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTA_BaseNPC *v20; // rax
  __m128i v21; // xmm1
  unsigned __int16 v22; // dx
  int v23; // esi
  int v24; // eax
  CEntityIdentity *v25; // rdx
  CEntityIdentity *v26; // rdx
  CDOTA_BaseNPC *v27; // r15
  float v28; // r13d
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v32; // r13
  float v33; // xmm1_4
  CDOTA_BaseNPC *v34; // rax
  char v35; // r13
  __m128i v36; // xmm0
  float v37; // ebx
  CDOTABaseAbility *v38; // rax
  float v39; // xmm1_4
  CDOTA_BaseNPC *v40; // rax
  CDOTA_BaseNPC *v41; // rax
  CDOTA_BaseNPC *v42; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v45; // [rsp+78h] [rbp-38h]

  v45 = __readfsqword(0x28u);
  if ( CDOTA_Buff::GetCaster(this) != 0 && CDOTA_Buff::GetParent(this) != 0 )
  {
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    static_remnant_radius = this->static_remnant_radius;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    Parent = CDOTA_Buff::GetParent(this);
    v4 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
    v6 = CDOTA_Buff::GetParent(this);
    FindUnitsInRadius(v6->m_iTeamNum.m_Value, AbsOrigin, Parent, static_remnant_radius, &entities, 2, 19, 16, 0, 0);
    if ( entities.m_Size <= 0 )
    {
      v35 = 0;
    }
    else
    {
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
      *v7.m128i_i32 = this->static_remnant_damage_radius;
      v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
      v9 = CDOTA_Buff::GetParent(this);
      v10 = CDOTA_Buff::GetParent(this);
      v11 = CBaseEntity::GetAbsOrigin(v10);
      v12 = CDOTA_Buff::GetParent(this);
      FindUnitsInRadius(v12->m_iTeamNum.m_Value, v11, v9, v8, &entities, 2, 19, 0, 0, 0);
      if ( entities.m_Size > 0 )
      {
        v13 = 0;
        do
        {
          while ( 1 )
          {
            v14 = &entities.m_Memory.m_pMemory[v13];
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
                    v20 = CDOTA_Buff::GetParent(this);
                    if ( v20->m_hOwnerEntity.m_Value.m_Index == -1 )
                    {
                      v22 = 0x7FFF;
                      v23 = 0x7FFF;
                    }
                    else
                    {
                      v22 = v20->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
                      v23 = v22;
                    }
                    v24 = (v20->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v22 & 0x7FFF;
                    if ( (v24 + 2) > 1 )
                    {
                      v25 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v23 >> 9];
                      if ( v25 != 0 )
                      {
                        v26 = &v25[v23 & 0x1FF];
                        if ( v26 != 0 && v24 == v26->m_EHandle.m_Index )
                        {
                          v27 = v26->m_pInstance;
                          if ( v26->m_pInstance != 0 && v27->m_bIsDOTANPC )
                          {
                            *v21.m128i_i32 = this->static_remnant_damage;
                            v28 = COERCE_FLOAT(_mm_cvtsi128_si32(v21));
                            Ability = CDOTA_Buff::GetAbility(this);
                            ApplyDamage(v27, m_pInstance, Ability, v28, 2, 0);
                            Caster = CDOTA_Buff::GetCaster(this);
                            AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "holdout_overload", 0);
                            v32 = AbilityByName;
                            if ( AbilityByName != 0 && CDOTABaseAbility::GetEffectiveLevel(AbilityByName) >= 0 )
                              break;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            if ( entities.m_Size <= ++v13 )
              goto LABEL_24;
          }
          KeyValues::KeyValues(&kv, "modifier_storm_spirit_overload_debuff");
          KeyValues::SetFloat(&kv, "duration", v33);
          CDOTA_BaseNPC::AddNewModifier(m_pInstance, v27, v32, "modifier_storm_spirit_overload_debuff", &kv, 0);
          KeyValues::~KeyValues(&kv);
          ++v13;
        }
        while ( entities.m_Size > v13 );
      }
LABEL_24:
      v34 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::UnitEmitSound(v34, "Hero_StormSpirit.StaticRemnantExplode", 0.0, 0, 0);
      v35 = 1;
    }
    v36 = 0;
    if ( g_pGameRules != 0 )
      v36 = *&g_pGameRules[18].m_szQuestName[20];
    *v36.m128i_i32 = *v36.m128i_i32 - this->m_flCreationTime;
    v37 = COERCE_FLOAT(_mm_cvtsi128_si32(v36));
    v38 = CDOTA_Buff::GetAbility(this);
    if ( v37 >= CDOTABaseAbility::GetDuration(v38) || v35 != 0 )
    {
      v40 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::UnitEmitSound(v40, "Hero_StormSpirit.StaticRemnantExplode", 0.0, 0, 0);
      v41 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::ForceKill(v41, 0);
      v42 = CDOTA_Buff::GetParent(this);
      UTIL_Remove(v42);
    }
    CDOTA_Buff::StartIntervalThink(this, 0.1, v39);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
  }
}


