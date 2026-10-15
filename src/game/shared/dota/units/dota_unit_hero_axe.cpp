// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_axe.cpp:33
class CDOTA_Unit_Hero_Axe : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Axe(CDOTA_Unit_Hero_Axe &);
	CDOTA_Unit_Hero_Axe(CDOTA_Unit_Hero_Axe &);
	CDOTA_Unit_Hero_Axe();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDOTA_Unit_Hero_Axe();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_axe.cpp:40
class C_CDOTA_Unit_Hero_Axe_MapInstall {
	C_CDOTA_Unit_Hero_Axe_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_axe.cpp:53
class CDOTA_Ability_Axe_BerserkersCall : public CDOTABaseAbility {
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
	CDOTA_Ability_Axe_BerserkersCall(CDOTA_Ability_Axe_BerserkersCall &);
	CDOTA_Ability_Axe_BerserkersCall(CDOTA_Ability_Axe_BerserkersCall &);
	CDOTA_Ability_Axe_BerserkersCall();
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
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Axe_BerserkersCall();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// vtable[265] OnAbilityPhaseInterrupted
	// vtable[322] GetStunDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_axe.cpp:76
class C_CDOTA_Ability_Axe_BerserkersCall_MapInstall {
	C_CDOTA_Ability_Axe_BerserkersCall_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_axe.cpp:160
class CDOTA_Modifier_Axe_BerserkersCall : public CDOTA_Buff {
public:

private:

	EHANDLE m_hZombieTarget;  // +0xba8
	bool m_bDidSetAttackTarget;  // +0xbac
	CDOTA_Modifier_Axe_BerserkersCall();
	virtual void DeclareFunctions();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsPurgable();
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Axe_BerserkersCall();

	// vtable[65] DeclareFunctions
	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[14] IsPurgable
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_axe.cpp:290
class CDOTA_Modifier_Axe_BerserkersCallArmor : public CDOTA_Buff {
public:

private:

	int bonus_armor;  // +0xba8
	CDOTA_Modifier_Axe_BerserkersCallArmor();
	virtual void OnCreated(KeyValues *);
	virtual bool IsPurgable();
	virtual const char * GetHeroEffectName();
	virtual int HeroEffectPriority();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Axe_BerserkersCallArmor();

	// vtable[57] OnCreated
	// vtable[14] IsPurgable
	// vtable[72] GetHeroEffectName
	// vtable[73] HeroEffectPriority
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_axe.cpp:374
class CDOTA_Ability_Axe_BattleHunger : public CDOTABaseAbility {
public:

private:

	int damage_per_second;  // +0x390
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
	CDOTA_Ability_Axe_BattleHunger(CDOTA_Ability_Axe_BattleHunger &);
	CDOTA_Ability_Axe_BattleHunger(CDOTA_Ability_Axe_BattleHunger &);
	CDOTA_Ability_Axe_BattleHunger();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual void OnSpellStart();
	virtual bool OnAbilityPhaseStart();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Axe_BattleHunger();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_axe.cpp:472
class CDOTA_Modifier_Axe_BattleHunger : public CDOTA_Buff {
public:

	int damage_per_second;  // +0xba8
	int slow;  // +0xbac
	CDOTA_Modifier_Axe_BattleHunger();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	ModifierVariant_t OnDeath(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual bool ShouldUseOverheadOffset();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Axe_BattleHunger();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[69] ShouldUseOverheadOffset
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_axe.cpp:596
class CDOTA_Modifier_Axe_BatleHunger_Self : public CDOTA_Buff {
public:

private:

	int speed_bonus;  // +0xba8
	CDOTA_Modifier_Axe_BatleHunger_Self();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Axe_BatleHunger_Self();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_axe.cpp:649
class CDOTA_Ability_Axe_CounterHelix : public CDOTABaseAbility {
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
	CDOTA_Ability_Axe_CounterHelix(CDOTA_Ability_Axe_CounterHelix &);
	CDOTA_Ability_Axe_CounterHelix(CDOTA_Ability_Axe_CounterHelix &);
	CDOTA_Ability_Axe_CounterHelix();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Axe_CounterHelix();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_axe.cpp:669
class C_CDOTA_Ability_Axe_CounterHelix_MapInstall {
	C_CDOTA_Ability_Axe_CounterHelix_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_axe.cpp:679
class CDOTA_Modifier_Axe_CounterHelix : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	int trigger_chance;  // +0xbac
	float m_fLastProc;  // +0xbb0
	CDOTA_Modifier_Axe_CounterHelix();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	virtual ~CDOTA_Modifier_Axe_CounterHelix();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_axe.cpp:773
class CDOTA_Ability_Axe_CullingBlade : public CDOTABaseAbility {
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

	CDOTA_Ability_Axe_CullingBlade(CDOTA_Ability_Axe_CullingBlade &);
	CDOTA_Ability_Axe_CullingBlade(CDOTA_Ability_Axe_CullingBlade &);
	CDOTA_Ability_Axe_CullingBlade();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual float GetCooldown(int);
	virtual const char * GetStolenActivityModifier();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Axe_CullingBlade();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[242] GetCooldown
	// vtable[310] GetStolenActivityModifier
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_axe.cpp:788
class C_CDOTA_Ability_Axe_CullingBlade_MapInstall {
	C_CDOTA_Ability_Axe_CullingBlade_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_axe.cpp:931
class CDOTA_Modifier_Axe_CullingBlade_Boost : public CDOTA_Buff {
public:

private:

	int speed_bonus;  // +0xba8
	CDOTA_Modifier_Axe_CullingBlade_Boost();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual const char * GetEffectName();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual ~CDOTA_Modifier_Axe_CullingBlade_Boost();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_axe.cpp:980
class CDOTA_Ability_Holdout_CullingBlade : public CDOTA_Ability_Axe_CullingBlade {
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
	CDOTA_Ability_Holdout_CullingBlade(CDOTA_Ability_Holdout_CullingBlade &);
	CDOTA_Ability_Holdout_CullingBlade(CDOTA_Ability_Holdout_CullingBlade &);
	CDOTA_Ability_Holdout_CullingBlade();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	void DoChop();
	virtual ~CDOTA_Ability_Holdout_CullingBlade();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_axe.cpp:1001
class C_CDOTA_Ability_Holdout_CullingBlade_MapInstall {
	C_CDOTA_Ability_Holdout_CullingBlade_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_axe.cpp:1135
class CDOTA_Modifier_HoldoutCullingBlade : public CDOTA_Buff, public CHorizontalMotionController, public CVerticalMotionController {
public:

private:

	float m_flTotalTime;  // +0xbc4
	float m_flInitialVelocity;  // +0xbc8
	float m_flCurrentTimeHoriz;  // +0xbe4
	float m_flCurrentTimeVert;  // +0xbe8
	bool m_bInterrupted;  // +0xbec

	int leap_distance;  // +0xbf0
	int leap_radius;  // +0xbf4
	float leap_speed;  // +0xbf8
	float leap_acceleration;  // +0xbfc
	CDOTA_Modifier_HoldoutCullingBlade();
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
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_HoldoutCullingBlade();

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
	// vtable[67] GetEffectName
	// sizeof = 3072
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Axe::~CDOTA_Unit_Hero_Axe  (line 33, @0x0000000002a184d0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Axe::~CDOTA_Unit_Hero_Axe(CDOTA_Unit_Hero_Axe *const this)
{
  this->_vptr_IHandleEntity = &off_4317F70;
  this->_vptr_INextBotEventResponder = &off_4318F50;
  this->_vptr_CObstructionObject = &off_4319280;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Axe::~CDOTA_Unit_Hero_Axe  (line 33, @0x0000000002a18510, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Axe
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Axe::~CDOTA_Unit_Hero_Axe(CDOTA_Unit_Hero_Axe *const this)
{
  this->_vptr_IHandleEntity = &off_4317F70;
  this->_vptr_INextBotEventResponder = &off_4318F50;
  this->_vptr_CObstructionObject = &off_4319280;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Axe::Schema_DynamicBinding  (line 35, @0x0000000002a072c0, libserver.so)
// globals: CDOTA_Unit_Hero_Axe::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Axe::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Axe *const this)
{
  return CDOTA_Unit_Hero_Axe::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 35, @0x0000000002a072f0, libserver.so)
// globals: CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass::DestructInstance  (line 35, @0x0000000002a07300, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Axe>
void __fastcall CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass::FreeInstance  (line 35, @0x0000000002a07320, libserver.so)
void __fastcall CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass::CanAllocate  (line 35, @0x0000000002a07340, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 35, @0x0000000002a07350, libserver.so)
// globals: CDOTA_Unit_Hero_Axe::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Axe::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass::AllocateInstance  (line 35, @0x0000000002a0edc0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass::ConstructInstance  (line 35, @0x0000000002a132a0, libserver.so)  // inlines: CDOTA_Unit_Hero_Axe, Construct<CDOTA_Unit_Hero_Axe>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_4317F70;
    *(p + 236) = &off_4318F50;
    *(p + 257) = &off_4319280;
  }
  return p;
}


// CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 35, @0x0000000002a206b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 35, @0x0000000002a208e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Axe::GetEntityClassInternal  (line 35, @0x0000000002a3b510, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "npc_dota_hero_axe", "CDOTA_Unit_Hero_Axe"
// globals: `guard variable for'CDOTA_Unit_Hero_Axe::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AxeClass, CDOTA_Unit_Hero_Axe::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AxeClass, __dso_handle, CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Axe::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AxeClassInfo, CDOTA_Unit_Hero_Axe::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AxeClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Axe::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Axe::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AxeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Axe::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AxeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Axe::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AxeClass);
    CDOTA_Unit_Hero_Axe::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AxeClass._vptr_CEntityClass = off_4317EF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Axe::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AxeClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Axe::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Axe::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AxeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_AxeClass != 0 )
    return &CDOTA_Unit_Hero_Axe::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AxeClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Axe::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AxeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Axe::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AxeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Axe::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AxeClassInfo,
      "CDOTA_Unit_Hero_Axe",
      "npc_dota_hero_axe",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Axe::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AxeClassInfo);
  }
  CDOTA_Unit_Hero_Axe::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AxeClass.m_pClassInfo = &CDOTA_Unit_Hero_Axe::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AxeClassInfo;
  CDOTA_Unit_Hero_Axe::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AxeClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Axe::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AxeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_AxeClass = &CDOTA_Unit_Hero_Axe::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AxeClass;
  CDOTA_Unit_Hero_Axe::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AxeClassInfo.m_pClass = &CDOTA_Unit_Hero_Axe::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AxeClass;
  CDOTA_Unit_Hero_Axe::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AxeClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_AxeClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Axe::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AxeClass;
}


// CDOTA_Unit_Hero_Axe::YouForgotToImplementOrDeclareServerClass  (line 40, @0x00000000029b4060, libserver.so)
int __fastcall CDOTA_Unit_Hero_Axe::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Axe *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Axe::GetServerClass  (line 40, @0x00000000029c9670, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Axe::GetServerClass(CDOTA_Unit_Hero_Axe *const this)
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


// CDOTA_Ability_Axe_BerserkersCall::~CDOTA_Ability_Axe_BerserkersCall  (line 53, @0x0000000002a16700, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Axe_BerserkersCall::~CDOTA_Ability_Axe_BerserkersCall(
        CDOTA_Ability_Axe_BerserkersCall *const this)
{
  this->_vptr_IHandleEntity = &off_4319350;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Axe_BerserkersCall::~CDOTA_Ability_Axe_BerserkersCall  (line 53, @0x0000000002a16720, libserver.so)  // inlines: ~CDOTA_Ability_Axe_BerserkersCall
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Axe_BerserkersCall::~CDOTA_Ability_Axe_BerserkersCall(
        CDOTA_Ability_Axe_BerserkersCall *const this)
{
  this->_vptr_IHandleEntity = &off_4319350;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Axe_BerserkersCall::Schema_DynamicBinding  (line 55, @0x0000000002a07360, libserver.so)
// globals: CDOTA_Ability_Axe_BerserkersCall::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Axe_BerserkersCall::Schema_DynamicBinding(
        const CDOTA_Ability_Axe_BerserkersCall *const this)
{
  return CDOTA_Ability_Axe_BerserkersCall::s_pSchemaBinding;
}


// CDOTA_Ability_Axe_BerserkersCall::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 55, @0x0000000002a07370, libserver.so)
// globals: CDOTA_Ability_Axe_BerserkersCall::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Axe_BerserkersCall::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Axe_BerserkersCall::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Axe_BerserkersCall::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Axe_BerserkersCall::CEntityInstanceEntityClass::DestructInstance  (line 55, @0x0000000002a07380, libserver.so)  // inlines: Destruct<CDOTA_Ability_Axe_BerserkersCall>
void __fastcall CDOTA_Ability_Axe_BerserkersCall::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Axe_BerserkersCall::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Axe_BerserkersCall::CEntityInstanceEntityClass::FreeInstance  (line 55, @0x0000000002a073a0, libserver.so)
void __fastcall CDOTA_Ability_Axe_BerserkersCall::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Axe_BerserkersCall::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Axe_BerserkersCall::CEntityInstanceEntityClass::CanAllocate  (line 55, @0x0000000002a073c0, libserver.so)
bool __fastcall CDOTA_Ability_Axe_BerserkersCall::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Axe_BerserkersCall::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Axe_BerserkersCall::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 55, @0x0000000002a073d0, libserver.so)
// globals: CDOTA_Ability_Axe_BerserkersCall::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Axe_BerserkersCall::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Axe_BerserkersCall::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Axe_BerserkersCall::s_pSchemaBinding;
}


// CDOTA_Ability_Axe_BerserkersCall::CEntityInstanceEntityClass::AllocateInstance  (line 55, @0x0000000002a0ee00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Axe_BerserkersCall::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Axe_BerserkersCall::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Axe_BerserkersCall::CEntityInstanceEntityClass::ConstructInstance  (line 55, @0x0000000002a13a60, libserver.so)  // inlines: CDOTA_Ability_Axe_BerserkersCall, Construct<CDOTA_Ability_Axe_BerserkersCall>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Axe_BerserkersCall::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Axe_BerserkersCall::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4319350;
  }
  return p;
}


// CDOTA_Ability_Axe_BerserkersCall::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 55, @0x0000000002a1eaa0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Axe_BerserkersCall::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Axe_BerserkersCall::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Axe_BerserkersCall::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 55, @0x0000000002a1eac0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Axe_BerserkersCall::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Axe_BerserkersCall::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Axe_BerserkersCall::GetEntityClassInternal  (line 55, @0x0000000002a34820, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_Axe_BerserkersCall"
// globals: `guard variable for'CDOTA_Ability_Axe_BerserkersCall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_BerserkersCallClass, CDOTA_Ability_Axe_BerserkersCall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_BerserkersCallClass, __dso_handle, CDOTA_Ability_Axe_BerserkersCall::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Axe_BerserkersCall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_BerserkersCallClassInfo, CDOTA_Ability_Axe_BerserkersCall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_BerserkersCallClassInfo
CEntityClass *__cdecl CDOTA_Ability_Axe_BerserkersCall::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Axe_BerserkersCall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_BerserkersCallClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Axe_BerserkersCall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_BerserkersCallClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Axe_BerserkersCall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_BerserkersCallClass);
    CDOTA_Ability_Axe_BerserkersCall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_BerserkersCallClass._vptr_CEntityClass = off_43192D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Axe_BerserkersCall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_BerserkersCallClass);
    __cxa_atexit(
      CDOTA_Ability_Axe_BerserkersCall::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Axe_BerserkersCall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_BerserkersCallClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Axe_BerserkersCallClass != 0 )
    return &CDOTA_Ability_Axe_BerserkersCall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_BerserkersCallClass;
  if ( `guard variable for'CDOTA_Ability_Axe_BerserkersCall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_BerserkersCallClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Axe_BerserkersCall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_BerserkersCallClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Axe_BerserkersCall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_BerserkersCallClassInfo,
      "CDOTA_Ability_Axe_BerserkersCall",
      "axe_berserkers_call",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Axe_BerserkersCall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_BerserkersCallClassInfo);
  }
  CDOTA_Ability_Axe_BerserkersCall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_BerserkersCallClass.m_pClassInfo = &CDOTA_Ability_Axe_BerserkersCall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_BerserkersCallClassInfo;
  CDOTA_Ability_Axe_BerserkersCall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_BerserkersCallClass.m_pBaseClassInfo = CDOTA_Ability_Axe_BerserkersCall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_BerserkersCallClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Axe_BerserkersCallClass = &CDOTA_Ability_Axe_BerserkersCall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_BerserkersCallClass;
  CDOTA_Ability_Axe_BerserkersCall::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_BerserkersCallClassInfo.m_pClass = &CDOTA_Ability_Axe_BerserkersCall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_BerserkersCallClass;
  CDOTA_Ability_Axe_BerserkersCall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_BerserkersCallClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Axe_BerserkersCallClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Axe_BerserkersCall::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_BerserkersCallClass;
}


// CDOTA_Ability_Axe_BerserkersCall::YouForgotToImplementOrDeclareServerClass  (line 76, @0x00000000029b4070, libserver.so)
int __fastcall CDOTA_Ability_Axe_BerserkersCall::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Axe_BerserkersCall *const this)
{
  return 0;
}


// CDOTA_Ability_Axe_BerserkersCall::GetServerClass  (line 76, @0x00000000029c9470, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Axe_BerserkersCall::GetServerClass(CDOTA_Ability_Axe_BerserkersCall *const this)
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


// CDOTA_Ability_Axe_BerserkersCall::OnSpellStart  (line 86, @0x00000000029ef720, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, SpeakConcept, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTABaseAbility::CreateAbilityParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, KeyValues::KeyValues, KeyValues::SetFloat (24 total)
// strings: "particles/units/heroes/hero_axe/axe_beserkers_call_owner.vpcf", "attach_mouth", "modifier_axe_berserkers_call", "modifier_axe_berserkers_armor", "modifier_axe_berserkers_call_armor", "berserker_targets" (7 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Axe_BerserkersCall::OnSpellStart(CDOTA_Ability_Axe_BerserkersCall *const this)
{
  int LevelSpecialValue; // ebx
  CDOTA_BaseNPC *Caster; // rax
  int AbilityParticleEffect; // r12d
  CDOTA_BaseNPC *v5; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  __m128i v7; // xmm2
  float v8; // ebx
  CDOTA_ParticleManager *v9; // rax
  CDOTA_ParticleManager *v10; // rax
  CDOTA_BaseNPC *v11; // r14
  CDOTA_BaseNPC *v12; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v14; // rax
  float v15; // xmm1_4
  __int64 v16; // rbx
  CDOTA_BaseNPC *i; // r14
  CHandle<CBaseEntity> *v18; // rdx
  uint32 m_Index; // eax
  __int16 v20; // cx
  CEntityIdentity *v21; // rdx
  CEntityIdentity *v22; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *v24; // rax
  float v25; // xmm1_4
  CDOTA_BaseNPC *v26; // r12
  CDOTA_BaseNPC *v27; // rax
  float v28; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_BaseNPC *v30; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+30h] [rbp-D0h] BYREF
  CResponseCriteriaSet criteria; // [rsp+50h] [rbp-B0h] BYREF
  KeyValues kv; // [rsp+90h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v35; // [rsp+C8h] [rbp-38h]

  v35 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                            this,
                            "particles/units/heroes/hero_axe/axe_beserkers_call_owner.vpcf",
                            1,
                            Caster,
                            0);
  v5 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(
    ParticleManager,
    AbilityParticleEffect,
    1,
    v5,
    5,
    "attach_mouth",
    vec3_invalid,
    1);
  *v7.m128i_i32 = LevelSpecialValue;
  v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
  LODWORD(criteria._vptr_CResponseCriteriaSet) = v7.m128i_i32[0];
  HIDWORD(criteria._vptr_CResponseCriteriaSet) = v7.m128i_i32[0];
  LODWORD(criteria.m_Lookup.m_LessFunc) = v7.m128i_i32[0];
  v9 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(
    v9,
    AbilityParticleEffect,
    2,
    *&criteria._vptr_CResponseCriteriaSet,
    *&criteria.m_Lookup.m_LessFunc);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v10, AbilityParticleEffect);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  entities.m_Size = 0;
  entities.m_Memory.m_pMemory = 0;
  entities.m_Memory.m_nAllocationCount = 0;
  entities.m_Memory.m_nGrowSize = 0;
  v11 = CDOTABaseAbility::GetCaster(this);
  v12 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v12);
  v14 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v14->m_iTeamNum.m_Value, AbsOrigin, v11, v8, &entities, 2, 3, 16, 0, 0);
  KeyValues::KeyValues(&kv, "modifier_axe_berserkers_call");
  KeyValues::SetFloat(&kv, "duration", v15);
  v16 = 0;
  for ( i = CDOTABaseAbility::GetCaster(this); entities.m_Size > v16; ++v16 )
  {
    while ( 1 )
    {
      v18 = &entities.m_Memory.m_pMemory[v16];
      m_Index = v18->m_Index;
      if ( v18->m_Index + 2 > 1 )
      {
        v20 = v18->m_Index;
        v21 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v18->m_Index) >> 9) & 0x3F];
        if ( v21 != 0 )
        {
          v22 = &v21[v20 & 0x1FF];
          if ( v22 != 0 && m_Index == v22->m_EHandle.m_Index )
          {
            m_pInstance = v22->m_pInstance;
            if ( v22->m_pInstance != 0
              && m_pInstance->m_bIsDOTANPC
              && (*(m_pInstance->_vptr_IHandleEntity + 391))(v22->m_pInstance, i) != 0 )
            {
              break;
            }
          }
        }
      }
      if ( entities.m_Size <= ++v16 )
        goto LABEL_12;
    }
    v24 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(m_pInstance, v24, this, "modifier_axe_berserkers_call", &kv, 0);
  }
LABEL_12:
  KeyValues::KeyValues(&kv2, "modifier_axe_berserkers_armor");
  KeyValues::SetFloat(&kv2, "duration", v25);
  v26 = CDOTABaseAbility::GetCaster(this);
  v27 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v27, v26, this, "modifier_axe_berserkers_call_armor", &kv2, 0);
  CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
  CResponseCriteriaSet::AppendCriteria(&criteria, "berserker_targets", 1.0, v28);
  m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
  if ( m_pSpeech != 0 )
    CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 4, 0, 0, 0, 0);
  v30 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v30, "Hero_Axe.Berserkers_Call", 0.0, 0, 0);
  CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  KeyValues::~KeyValues(&kv2);
  KeyValues::~KeyValues(&kv);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
  if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
  }
}


// CDOTA_Ability_Axe_BerserkersCall::OnAbilityPhaseStart  (line 134, @0x00000000029b8fe0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::StartGesture, DOTA_EmitSound
// strings: "Hero_Axe.BerserkersCall.Start"
bool __fastcall CDOTA_Ability_Axe_BerserkersCall::OnAbilityPhaseStart(CDOTA_Ability_Axe_BerserkersCall *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(Caster, 1516, 0.1, 0.1, 9, 0, 1.0);
  v3 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Axe.BerserkersCall.Start", v3);
  return 1;
}


// CDOTA_Ability_Axe_BerserkersCall::OnAbilityPhaseInterrupted  (line 144, @0x00000000029b7a60, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::StopSound
// strings: "Hero_Axe.BerserkersCall.Start", "Hero_Axe.BerserkersCall.Item.Shoutmask"
void __fastcall CDOTA_Ability_Axe_BerserkersCall::OnAbilityPhaseInterrupted(
        CDOTA_Ability_Axe_BerserkersCall *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::StopSound(Caster, "Hero_Axe.BerserkersCall.Start");
  v3 = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::StopSound(v3, "Hero_Axe.BerserkersCall.Item.Shoutmask");
}


// CDOTA_Ability_Axe_BerserkersCall::GetStunDuration  (line 152, @0x00000000029de750, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Axe_BerserkersCall::GetStunDuration(CDOTA_Ability_Axe_BerserkersCall *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 1);
}


// CDOTA_Modifier_Axe_BerserkersCall::~CDOTA_Modifier_Axe_BerserkersCall  (line 160, @0x0000000002a12c20, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Axe_BerserkersCall::~CDOTA_Modifier_Axe_BerserkersCall(
        CDOTA_Modifier_Axe_BerserkersCall *const this)
{
  this->_vptr_CDOTA_Buff = &off_4319E10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Axe_BerserkersCall::~CDOTA_Modifier_Axe_BerserkersCall  (line 160, @0x0000000002a12c40, libserver.so)  // inlines: ~CDOTA_Modifier_Axe_BerserkersCall
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Axe_BerserkersCall::~CDOTA_Modifier_Axe_BerserkersCall(
        CDOTA_Modifier_Axe_BerserkersCall *const this)
{
  this->_vptr_CDOTA_Buff = &off_4319E10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Axe_BerserkersCall::IsDebuff  (line 166, @0x0000000002a073e0, libserver.so)
bool __fastcall CDOTA_Modifier_Axe_BerserkersCall::IsDebuff(CDOTA_Modifier_Axe_BerserkersCall *const this)
{
  return 1;
}


// CDOTA_Modifier_Axe_BerserkersCall::IsPurgable  (line 172, @0x0000000002a073f0, libserver.so)
bool __fastcall CDOTA_Modifier_Axe_BerserkersCall::IsPurgable(CDOTA_Modifier_Axe_BerserkersCall *const this)
{
  return 0;
}


// CDOTA_Modifier_Axe_BerserkersCall::GetEffectName  (line 174, @0x0000000002a07400, libserver.so)
// strings: "particles/units/heroes/hero_axe/axe_beserkers_call.vpcf"
const char *__fastcall CDOTA_Modifier_Axe_BerserkersCall::GetEffectName(CDOTA_Modifier_Axe_BerserkersCall *const this)
{
  return "particles/units/heroes/hero_axe/axe_beserkers_call.vpcf";
}


// CDOTA_Modifier_Axe_BerserkersCall::GetStatusEffectName  (line 175, @0x0000000002a07410, libserver.so)
// strings: "particles/status_fx/status_effect_beserkers_call.vpcf"
const char *__fastcall CDOTA_Modifier_Axe_BerserkersCall::GetStatusEffectName(
        CDOTA_Modifier_Axe_BerserkersCall *const this)
{
  return "particles/status_fx/status_effect_beserkers_call.vpcf";
}


// CDOTA_Modifier_Axe_BerserkersCall::StatusEffectPriority  (line 176, @0x0000000002a07420, libserver.so)
int __fastcall CDOTA_Modifier_Axe_BerserkersCall::StatusEffectPriority(CDOTA_Modifier_Axe_BerserkersCall *const this)
{
  return 15;
}


// CDOTA_Modifier_Axe_BerserkersCall::DeclareFunctions  (line 190, @0x00000000029b4080, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Axe_BerserkersCall::OnTakeDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Axe_BerserkersCall::DeclareFunctions(CDOTA_Modifier_Axe_BerserkersCall *const this)
{
  this->m_Functions[134].__pfn = CDOTA_Modifier_Axe_BerserkersCall::OnTakeDamage;
  this->m_Functions[134].__delta = 0;
}


// CDOTA_Modifier_Axe_BerserkersCall::OnCreated  (line 197, @0x00000000029c7f20, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetForceAttackTarget, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, SetForceAttackTarget, SetIdleAcquire, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CDOTA_BaseNPC::Interrupt, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::UpdatePseudoQueuedOrder
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Axe_BerserkersCall::OnCreated(
        CDOTA_Modifier_Axe_BerserkersCall *const this,
        KeyValues *pKV)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  uint32 v7; // edx
  unsigned __int16 v8; // cx
  CEntityIdentity *v9; // rax
  CEntityIdentity *v10; // rax
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v12; // rax
  CEntityIdentity *v13; // rcx
  int v14; // edx
  __int16 v15; // si
  CDOTA_BaseNPC *v16; // rax
  uint32 m_Index; // edx
  unsigned __int16 v18; // cx
  CEntityIdentity *v19; // rax
  CEntityIdentity *v20; // rax
  CEntityInstance *v21; // rax
  CEntityInstance *m_pInstance; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v24; // eax
  __int16 v25; // cx

  CDOTA_Buff::StartIntervalThink(this, 0.0, v2);
  Parent = CDOTA_Buff::GetParent(this);
  if ( (*(Parent->_vptr_IHandleEntity + 405))(Parent) != 0 )
  {
    v16 = CDOTA_Buff::GetParent(this);
    m_Index = v16->m_hForceAttackTarget.m_Index;
    if ( m_Index + 2 > 1
      && (v18 = v16->m_hForceAttackTarget.m_Index,
          (v19 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v18 >> 9) & 0x3F]) != 0)
      && (v20 = &v19[v18 & 0x1FF]) != 0
      && m_Index == v20->m_EHandle.m_Index
      && (m_pInstance = v20->m_pInstance) != 0
      && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
      && (m_pEntity = m_pInstance->m_pEntity) != 0 )
    {
      v24 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      v25 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v25 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(this->m_hZombieTarget.m_Index) = v25 | this->m_hZombieTarget.m_Index & 0x8000;
      this->m_hZombieTarget.m_Index = (v24 << 15) | this->m_hZombieTarget.m_Index & 0x7FFF;
    }
    else
    {
      this->m_hZombieTarget.m_Index = -1;
    }
  }
  v5 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::Interrupt(v5);
  CDOTA_Buff::GetParent(this)->m_bIdleAcquire = 1;
  this->m_bDidSetAttackTarget = 0;
  v6 = CDOTA_Buff::GetParent(this);
  v7 = v6->m_hForceAttackTarget.m_Index;
  if ( v7 + 2 <= 1
    || (v8 = v6->m_hForceAttackTarget.m_Index,
        (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v8 >> 9) & 0x3F]) == 0)
    || (v10 = &v9[v8 & 0x1FF]) == 0
    || v7 != v10->m_EHandle.m_Index
    || (v21 = v10->m_pInstance) == 0
    || BYTE3(v21[7]._vptr_IHandleEntity) == 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    v12 = CDOTA_Buff::GetParent(this);
    if ( Caster != 0 && (v13 = Caster->m_pEntity) != 0 )
    {
      v14 = (v13->m_EHandle.m_Index >> 15) - (v13->m_flags & 1);
      if ( v13->m_EHandle.m_Index == -1 )
        v15 = 0x7FFF;
      else
        v15 = v13->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v12->m_hForceAttackTarget.m_Index) = v15 | v12->m_hForceAttackTarget.m_Index & 0x8000;
      v12->m_hForceAttackTarget.m_Index = (v14 << 15) | v12->m_hForceAttackTarget.m_Index & 0x7FFF;
    }
    else
    {
      v12->m_hForceAttackTarget.m_Index = -1;
    }
    v12->m_bAllowAllyForceAttack = 0;
    CDOTA_BaseNPC::UpdatePseudoQueuedOrder(v12, 1);
    this->m_bDidSetAttackTarget = 1;
  }
}


// CDOTA_Modifier_Axe_BerserkersCall::OnRefresh  (line 219, @0x00000000029c0c00, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, Set, SetForceAttackTarget, operator=
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CDOTA_BaseNPC::UpdatePseudoQueuedOrder
void __fastcall CDOTA_Modifier_Axe_BerserkersCall::OnRefresh(
        CDOTA_Modifier_Axe_BerserkersCall *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v5; // rdi
  CEntityIdentity *m_pEntity; // rdx
  int v7; // eax
  __int16 v8; // cx

  if ( this->m_bDidSetAttackTarget )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    Parent = CDOTA_Buff::GetParent(this);
    v5 = Parent;
    if ( Caster != 0 && (m_pEntity = Caster->m_pEntity) != 0 )
    {
      v7 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v8 = 0x7FFF;
      else
        v8 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v5->m_hForceAttackTarget.m_Index) = v8 | v5->m_hForceAttackTarget.m_Index & 0x8000;
      v5->m_hForceAttackTarget.m_Index = (v7 << 15) | v5->m_hForceAttackTarget.m_Index & 0x7FFF;
    }
    else
    {
      Parent->m_hForceAttackTarget.m_Index = -1;
    }
    v5->m_bAllowAllyForceAttack = 0;
    CDOTA_BaseNPC::UpdatePseudoQueuedOrder(v5, 1);
  }
}


// CDOTA_Modifier_Axe_BerserkersCall::OnDestroy  (line 231, @0x00000000029c7b80, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetForceAttackTarget, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, SetForceAttackTarget, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator bool, operator=
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::UpdatePseudoQueuedOrder
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Axe_BerserkersCall::OnDestroy(CDOTA_Modifier_Axe_BerserkersCall *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 v3; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *v6; // rax
  uint32 m_Index; // edx
  unsigned __int16 v8; // cx
  CEntityIdentity *v9; // rax
  CEntityIdentity *v10; // rax
  CDOTA_BaseNPC *m_pInstance; // r12
  CEntityInstance *v12; // r12
  CDOTA_BaseNPC *v13; // rax
  CEntityIdentity *m_pEntity; // rdx
  CDOTA_BaseNPC *v15; // rdi
  int v16; // eax
  __int16 v17; // cx
  CDOTA_BaseNPC *v18; // rax

  Parent = CDOTA_Buff::GetParent(this);
  if ( (*(Parent->_vptr_IHandleEntity + 405))(Parent) != 0
    && (v3 = this->m_hZombieTarget.m_Index) + 2 > 1
    && (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hZombieTarget.m_Index) >> 9) & 0x3F]) != 0
    && (v5 = &v4[this->m_hZombieTarget.m_Index & 0x1FF]) != 0
    && v3 == v5->m_EHandle.m_Index
    && (v12 = v5->m_pInstance, v5->m_pInstance != 0)
    && BYTE3(v12[7]._vptr_IHandleEntity) != 0 )
  {
    v13 = CDOTA_Buff::GetParent(this);
    m_pEntity = v12->m_pEntity;
    v15 = v13;
    if ( m_pEntity != 0 )
    {
      v16 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v17 = 0x7FFF;
      else
        v17 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v15->m_hForceAttackTarget.m_Index) = v17 | v15->m_hForceAttackTarget.m_Index & 0x8000;
      v15->m_hForceAttackTarget.m_Index = (v16 << 15) | v15->m_hForceAttackTarget.m_Index & 0x7FFF;
    }
    else
    {
      v13->m_hForceAttackTarget.m_Index = -1;
    }
    v15->m_bAllowAllyForceAttack = 0;
    CDOTA_BaseNPC::UpdatePseudoQueuedOrder(v15, 1);
  }
  else
  {
    v6 = CDOTA_Buff::GetParent(this);
    m_Index = v6->m_hForceAttackTarget.m_Index;
    if ( m_Index + 2 <= 1
      || (v8 = v6->m_hForceAttackTarget.m_Index,
          (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v8 >> 9) & 0x3F]) == 0)
      || (v10 = &v9[v8 & 0x1FF]) == 0
      || m_Index != v10->m_EHandle.m_Index
      || (m_pInstance = v10->m_pInstance, v10->m_pInstance == 0)
      || !m_pInstance->m_bIsDOTANPC )
    {
      m_pInstance = 0;
    }
    if ( CDOTA_Buff::GetCaster(this) == m_pInstance )
    {
      v18 = CDOTA_Buff::GetParent(this);
      v18->m_hForceAttackTarget.m_Index = -1;
      v18->m_bAllowAllyForceAttack = 0;
      CDOTA_BaseNPC::UpdatePseudoQueuedOrder(v18, 1);
    }
  }
}


// CDOTA_Modifier_Axe_BerserkersCall::OnIntervalThink  (line 249, @0x00000000029c3f50, libserver.so)  // inlines: Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetForceAttackTarget, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, SetForceAttackTarget, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::UpdatePseudoQueuedOrder, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Axe_BerserkersCall::OnIntervalThink(CDOTA_Modifier_Axe_BerserkersCall *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // edx
  unsigned __int16 v4; // cx
  CEntityIdentity *v5; // rax
  CEntityIdentity *v6; // rax
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v8; // rax
  CEntityIdentity *m_pEntity; // rcx
  int v10; // edx
  __int16 v11; // si
  CDOTA_BaseNPC *v12; // rax
  CEntityInstance *m_pInstance; // rax

  Parent = CDOTA_Buff::GetParent(this);
  m_Index = Parent->m_hForceAttackTarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = Parent->m_hForceAttackTarget.m_Index,
        (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v4 >> 9) & 0x3F]) == 0)
    || (v6 = &v5[v4 & 0x1FF]) == 0
    || m_Index != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance) == 0
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    v8 = CDOTA_Buff::GetParent(this);
    if ( Caster != 0 && (m_pEntity = Caster->m_pEntity) != 0 )
    {
      v10 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
      if ( m_pEntity->m_EHandle.m_Index == -1 )
        v11 = 0x7FFF;
      else
        v11 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LOWORD(v8->m_hForceAttackTarget.m_Index) = v11 | v8->m_hForceAttackTarget.m_Index & 0x8000;
      v8->m_hForceAttackTarget.m_Index = (v10 << 15) | v8->m_hForceAttackTarget.m_Index & 0x7FFF;
    }
    else
    {
      v8->m_hForceAttackTarget.m_Index = -1;
    }
    v8->m_bAllowAllyForceAttack = 0;
    CDOTA_BaseNPC::UpdatePseudoQueuedOrder(v8, 1);
  }
  v12 = CDOTA_Buff::GetCaster(this);
  if ( (*(v12->_vptr_IHandleEntity + 408))(v12) == 0 )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Axe_BerserkersCall::OnTakeDamage  (line 267, @0x00000000029c58a0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsRealHero, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ceilf, EconEntity_OnOwnerKillEaterEvent
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
ModifierVariant_t __fastcall CDOTA_Modifier_Axe_BerserkersCall::OnTakeDamage(
        CDOTA_Modifier_Axe_BerserkersCall *const this,
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
  CDOTA_BaseNPC *Caster; // rax
  float v14; // xmm0_4
  CDOTA_BaseNPC_Hero *pKiller; // [rsp+8h] [rbp-28h]

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
                if ( v11->m_pInstance != 0 && v12->m_bIsDOTANPC )
                {
                  Caster = CDOTA_Buff::GetCaster(this);
                  if ( Caster == v12 && (Caster->m_iUnitType & 1) != 0 && !Caster->m_bIsIllusion.m_Value )
                  {
                    pKiller = Caster;
                    v14 = ceilf(params->fDamage);
                    EconEntity_OnOwnerKillEaterEvent(
                      pKiller,
                      0,
                      kill_eater_event_t::kKillEaterEventType_Axe_CalledDamageDone,
                      v14,
                      INVALID_ITEM_DEF_INDEX);
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


// CDOTA_Modifier_Axe_BerserkersCallArmor::~CDOTA_Modifier_Axe_BerserkersCallArmor  (line 290, @0x0000000002a12bd0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Axe_BerserkersCallArmor::~CDOTA_Modifier_Axe_BerserkersCallArmor(
        CDOTA_Modifier_Axe_BerserkersCallArmor *const this)
{
  this->_vptr_CDOTA_Buff = &off_431A130;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Axe_BerserkersCallArmor::~CDOTA_Modifier_Axe_BerserkersCallArmor  (line 290, @0x0000000002a12bf0, libserver.so)  // inlines: ~CDOTA_Modifier_Axe_BerserkersCallArmor
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Axe_BerserkersCallArmor::~CDOTA_Modifier_Axe_BerserkersCallArmor(
        CDOTA_Modifier_Axe_BerserkersCallArmor *const this)
{
  this->_vptr_CDOTA_Buff = &off_431A130;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Axe_BerserkersCallArmor::IsPurgable  (line 296, @0x0000000002a07430, libserver.so)
bool __fastcall CDOTA_Modifier_Axe_BerserkersCallArmor::IsPurgable(CDOTA_Modifier_Axe_BerserkersCallArmor *const this)
{
  return 0;
}


// CDOTA_Modifier_Axe_BerserkersCallArmor::GetHeroEffectName  (line 298, @0x0000000002a07440, libserver.so)
// strings: "particles/units/heroes/hero_axe/axe_beserkers_call_hero_effect.vpcf"
const char *__fastcall CDOTA_Modifier_Axe_BerserkersCallArmor::GetHeroEffectName(
        CDOTA_Modifier_Axe_BerserkersCallArmor *const this)
{
  return "particles/units/heroes/hero_axe/axe_beserkers_call_hero_effect.vpcf";
}


// CDOTA_Modifier_Axe_BerserkersCallArmor::HeroEffectPriority  (line 299, @0x0000000002a07450, libserver.so)
int __fastcall CDOTA_Modifier_Axe_BerserkersCallArmor::HeroEffectPriority(
        CDOTA_Modifier_Axe_BerserkersCallArmor *const this)
{
  return 100;
}


// CDOTA_Modifier_Axe_BerserkersCallArmor::OnCreated  (line 315, @0x00000000029f6c80, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Axe_BerserkersCallArmor::OnCreated(
        CDOTA_Modifier_Axe_BerserkersCallArmor *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_armor", -1, 0);
  else
    this->bonus_armor = 0;
}


// CDOTA_Modifier_Axe_BerserkersCallArmor::DeclareFunctions  (line 335, @0x00000000029b40a0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Axe_BerserkersCallArmor::GetModifierPhysicalArmorBonus(CModifierParams const&), CDOTA_Modifier_Axe_BerserkersCallArmor::OnTakeDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Axe_BerserkersCallArmor::DeclareFunctions(
        CDOTA_Modifier_Axe_BerserkersCallArmor *const this)
{
  this->m_Functions[45].__pfn = CDOTA_Modifier_Axe_BerserkersCallArmor::GetModifierPhysicalArmorBonus;
  this->m_Functions[45].__delta = 0;
  this->m_Functions[134].__delta = 0;
  this->m_Functions[134].__pfn = CDOTA_Modifier_Axe_BerserkersCallArmor::OnTakeDamage;
}


// CDOTA_Modifier_Axe_BerserkersCallArmor::GetModifierPhysicalArmorBonus  (line 343, @0x00000000029b40e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Axe_BerserkersCallArmor::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_Axe_BerserkersCallArmor *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_armor;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Axe_BerserkersCallArmor::OnTakeDamage  (line 350, @0x00000000029c2f80, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsRealHero, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, ceilf, CDOTA_Buff::GetCaster, EconEntity_OnOwnerKillEaterEvent
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
ModifierVariant_t __fastcall CDOTA_Modifier_Axe_BerserkersCallArmor::OnTakeDamage(
        CDOTA_Modifier_Axe_BerserkersCallArmor *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_BaseNPC *Parent; // rax
  int v10; // ebx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC_Hero *v12; // rdi

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
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          Parent = CDOTA_Buff::GetParent(this);
          if ( Parent == m_pInstance && (Parent->m_iUnitType & 1) != 0 && !Parent->m_bIsIllusion.m_Value )
          {
            v10 = ceilf(params->fDamage);
            Caster = CDOTA_Buff::GetCaster(this);
            if ( Caster == 0 || (v12 = Caster, (Caster->m_iUnitType & 1) == 0) )
              v12 = 0;
            EconEntity_OnOwnerKillEaterEvent(
              v12,
              0,
              kill_eater_event_t::kKillEaterEventType_Axe_CalledDamageTaken,
              v10,
              INVALID_ITEM_DEF_INDEX);
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Ability_Axe_BattleHunger::~CDOTA_Ability_Axe_BattleHunger  (line 374, @0x0000000002a16750, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Axe_BattleHunger::~CDOTA_Ability_Axe_BattleHunger(
        CDOTA_Ability_Axe_BattleHunger *const this)
{
  this->_vptr_IHandleEntity = &off_431A490;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Axe_BattleHunger::~CDOTA_Ability_Axe_BattleHunger  (line 374, @0x0000000002a16770, libserver.so)  // inlines: ~CDOTA_Ability_Axe_BattleHunger
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Axe_BattleHunger::~CDOTA_Ability_Axe_BattleHunger(
        CDOTA_Ability_Axe_BattleHunger *const this)
{
  this->_vptr_IHandleEntity = &off_431A490;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Axe_BattleHunger::Schema_DynamicBinding  (line 376, @0x0000000002a07460, libserver.so)
// globals: CDOTA_Ability_Axe_BattleHunger::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Axe_BattleHunger::Schema_DynamicBinding(
        const CDOTA_Ability_Axe_BattleHunger *const this)
{
  return CDOTA_Ability_Axe_BattleHunger::s_pSchemaBinding;
}


// CDOTA_Ability_Axe_BattleHunger::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 376, @0x0000000002a07470, libserver.so)
// globals: CDOTA_Ability_Axe_BattleHunger::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Axe_BattleHunger::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Axe_BattleHunger::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Axe_BattleHunger::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Axe_BattleHunger::CEntityInstanceEntityClass::DestructInstance  (line 376, @0x0000000002a07480, libserver.so)  // inlines: Destruct<CDOTA_Ability_Axe_BattleHunger>
void __fastcall CDOTA_Ability_Axe_BattleHunger::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Axe_BattleHunger::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Axe_BattleHunger::CEntityInstanceEntityClass::FreeInstance  (line 376, @0x0000000002a074a0, libserver.so)
void __fastcall CDOTA_Ability_Axe_BattleHunger::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Axe_BattleHunger::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Axe_BattleHunger::CEntityInstanceEntityClass::CanAllocate  (line 376, @0x0000000002a074c0, libserver.so)
bool __fastcall CDOTA_Ability_Axe_BattleHunger::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Axe_BattleHunger::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Axe_BattleHunger::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 376, @0x0000000002a074d0, libserver.so)
// globals: CDOTA_Ability_Axe_BattleHunger::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Axe_BattleHunger::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Axe_BattleHunger::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Axe_BattleHunger::s_pSchemaBinding;
}


// CDOTA_Ability_Axe_BattleHunger::CEntityInstanceEntityClass::AllocateInstance  (line 376, @0x0000000002a0ee40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Axe_BattleHunger::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Axe_BattleHunger::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Axe_BattleHunger::CEntityInstanceEntityClass::ConstructInstance  (line 376, @0x0000000002a13a90, libserver.so)  // inlines: CDOTA_Ability_Axe_BattleHunger, Construct<CDOTA_Ability_Axe_BattleHunger>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Axe_BattleHunger::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Axe_BattleHunger::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_431A490;
  }
  return p;
}


// CDOTA_Ability_Axe_BattleHunger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 376, @0x0000000002a1eaf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Axe_BattleHunger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Axe_BattleHunger::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Axe_BattleHunger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 376, @0x0000000002a1eb10, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Axe_BattleHunger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Axe_BattleHunger::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Axe_BattleHunger::GetEntityClassInternal  (line 376, @0x0000000002a34970, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_Axe_BattleHunger"
// globals: `guard variable for'CDOTA_Ability_Axe_BattleHunger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_BattleHungerClass, CDOTA_Ability_Axe_BattleHunger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_BattleHungerClass, __dso_handle, CDOTA_Ability_Axe_BattleHunger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Axe_BattleHunger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_BattleHungerClassInfo, CDOTA_Ability_Axe_BattleHunger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_BattleHungerClassInfo
CEntityClass *__cdecl CDOTA_Ability_Axe_BattleHunger::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Axe_BattleHunger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_BattleHungerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Axe_BattleHunger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_BattleHungerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Axe_BattleHunger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_BattleHungerClass);
    CDOTA_Ability_Axe_BattleHunger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_BattleHungerClass._vptr_CEntityClass = off_431A410;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Axe_BattleHunger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_BattleHungerClass);
    __cxa_atexit(
      CDOTA_Ability_Axe_BattleHunger::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Axe_BattleHunger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_BattleHungerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Axe_BattleHungerClass != 0 )
    return &CDOTA_Ability_Axe_BattleHunger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_BattleHungerClass;
  if ( `guard variable for'CDOTA_Ability_Axe_BattleHunger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_BattleHungerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Axe_BattleHunger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_BattleHungerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Axe_BattleHunger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_BattleHungerClassInfo,
      "CDOTA_Ability_Axe_BattleHunger",
      "axe_battle_hunger",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Axe_BattleHunger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_BattleHungerClassInfo);
  }
  CDOTA_Ability_Axe_BattleHunger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_BattleHungerClass.m_pClassInfo = &CDOTA_Ability_Axe_BattleHunger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_BattleHungerClassInfo;
  CDOTA_Ability_Axe_BattleHunger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_BattleHungerClass.m_pBaseClassInfo = CDOTA_Ability_Axe_BattleHunger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_BattleHungerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Axe_BattleHungerClass = &CDOTA_Ability_Axe_BattleHunger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_BattleHungerClass;
  CDOTA_Ability_Axe_BattleHunger::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_BattleHungerClassInfo.m_pClass = &CDOTA_Ability_Axe_BattleHunger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_BattleHungerClass;
  CDOTA_Ability_Axe_BattleHunger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_BattleHungerClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Axe_BattleHungerClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Axe_BattleHunger::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_BattleHungerClass;
}


// CDOTA_Ability_Axe_BattleHunger::GetIntrinsicModifierName  (line 379, @0x0000000002a074e0, libserver.so)
// strings: "modifier_axe_battle_hunger_self"
const char *__fastcall CDOTA_Ability_Axe_BattleHunger::GetIntrinsicModifierName(
        CDOTA_Ability_Axe_BattleHunger *const this)
{
  return "modifier_axe_battle_hunger_self";
}


// CDOTA_Ability_Axe_BattleHunger::OnAbilityPhaseStart  (line 394, @0x00000000029b9040, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::CreateAbilityParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::StartGesture
// strings: "particles/units/heroes/hero_axe/axe_battle_hunger_cast.vpcf", "attach_attack1"
bool __fastcall CDOTA_Ability_Axe_BattleHunger::OnAbilityPhaseStart(CDOTA_Ability_Axe_BattleHunger *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  int AbilityParticleEffect; // r12d
  CDOTA_BaseNPC *v4; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v6; // rax
  CDOTA_BaseNPC *v7; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                            this,
                            "particles/units/heroes/hero_axe/axe_battle_hunger_cast.vpcf",
                            1,
                            Caster,
                            0);
  v4 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(
    ParticleManager,
    AbilityParticleEffect,
    0,
    v4,
    5,
    "attach_attack1",
    vec3_invalid,
    1);
  v6 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v6, AbilityParticleEffect);
  v7 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v7, 1517, 0.1, 0.1, 9, 0, 1.0);
  return 1;
}


// CDOTA_Ability_Axe_BattleHunger::OnSpellStart  (line 408, @0x00000000029dd130, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::GetCaster, CDOTABaseAbility::GetCaster, CDOTA_Buff::Destroy, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues (14 total)
// strings: "modifier_axe_battle_hunger", "Hero_Axe.Battle_Hunger", "modifier_axe_battle_hunger_self"
void __fastcall CDOTA_Ability_Axe_BattleHunger::OnSpellStart(CDOTA_Ability_Axe_BattleHunger *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  float v4; // xmm1_4
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v6; // r13
  CDOTA_BaseNPC *Caster; // r15
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_Buff *v10; // rax
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-38h]

  v12 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 2) == 0
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_axe_battle_hunger");
    KeyValues::SetFloat(&kv, "duration", v4);
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(v3, "modifier_axe_battle_hunger", 0);
    v6 = ModifierByName;
    if ( ModifierByName != 0 )
    {
      Caster = CDOTA_Buff::GetCaster(ModifierByName);
      if ( Caster != CDOTABaseAbility::GetCaster(this) )
      {
        CDOTA_Buff::Destroy(v6, 0, 0, 0);
        v6 = 0;
      }
    }
    v8 = CDOTABaseAbility::GetCaster(this);
    if ( CDOTA_BaseNPC::AddNewModifier(v3, v8, this, "modifier_axe_battle_hunger", &kv, 0) != 0 )
    {
      if ( v6 == 0 )
      {
        v9 = CDOTABaseAbility::GetCaster(this);
        v10 = CDOTA_BaseNPC::FindModifierByName(v9, "modifier_axe_battle_hunger_self", 0);
        if ( v10 != 0 )
          (*(v10->_vptr_CDOTA_Buff + 25))(v10);
      }
      CDOTA_BaseNPC::UnitEmitSound(v3, "Hero_Axe.Battle_Hunger", 0.0, 0, 0);
    }
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Axe_BattleHunger::GetAbilityDamageToTargetOverInterval  (line 451, @0x00000000029ee7f0, libserver.so)  // inlines: GetLevelSpecialValueFor<int>, Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Axe_BattleHunger::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Axe_BattleHunger *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // eax
  float v9; // [rsp+4h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage_per_second", -1, 0);
    this->damage_per_second = LevelSpecialValue;
    v9 = fminf(CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 1), fInterval) * LevelSpecialValue;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * v9);
  }
  return result;
}


// CDOTA_Ability_Axe_BattleHunger::GetSlowDuration  (line 464, @0x00000000029de770, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Axe_BattleHunger::GetSlowDuration(CDOTA_Ability_Axe_BattleHunger *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 1);
}


// CDOTA_Modifier_Axe_BattleHunger::~CDOTA_Modifier_Axe_BattleHunger  (line 472, @0x0000000002a12b80, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Axe_BattleHunger::~CDOTA_Modifier_Axe_BattleHunger(
        CDOTA_Modifier_Axe_BattleHunger *const this)
{
  this->_vptr_CDOTA_Buff = &off_431AF50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Axe_BattleHunger::~CDOTA_Modifier_Axe_BattleHunger  (line 472, @0x0000000002a12ba0, libserver.so)  // inlines: ~CDOTA_Modifier_Axe_BattleHunger
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Axe_BattleHunger::~CDOTA_Modifier_Axe_BattleHunger(
        CDOTA_Modifier_Axe_BattleHunger *const this)
{
  this->_vptr_CDOTA_Buff = &off_431AF50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Axe_BattleHunger::IsDebuff  (line 477, @0x0000000002a074f0, libserver.so)
bool __fastcall CDOTA_Modifier_Axe_BattleHunger::IsDebuff(CDOTA_Modifier_Axe_BattleHunger *const this)
{
  return 1;
}


// CDOTA_Modifier_Axe_BattleHunger::GetEffectName  (line 488, @0x0000000002a07500, libserver.so)
// strings: "particles/units/heroes/hero_axe/axe_battle_hunger.vpcf"
const char *__fastcall CDOTA_Modifier_Axe_BattleHunger::GetEffectName(CDOTA_Modifier_Axe_BattleHunger *const this)
{
  return "particles/units/heroes/hero_axe/axe_battle_hunger.vpcf";
}


// CDOTA_Modifier_Axe_BattleHunger::GetEffectAttachType  (line 489, @0x0000000002a07510, libserver.so)
int __fastcall CDOTA_Modifier_Axe_BattleHunger::GetEffectAttachType(CDOTA_Modifier_Axe_BattleHunger *const this)
{
  return 7;
}


// CDOTA_Modifier_Axe_BattleHunger::ShouldUseOverheadOffset  (line 490, @0x0000000002a07520, libserver.so)
bool __fastcall CDOTA_Modifier_Axe_BattleHunger::ShouldUseOverheadOffset(CDOTA_Modifier_Axe_BattleHunger *const this)
{
  return 1;
}


// CDOTA_Modifier_Axe_BattleHunger::GetStatusEffectName  (line 491, @0x0000000002a07530, libserver.so)
// strings: "particles/status_fx/status_effect_battle_hunger.vpcf"
const char *__fastcall CDOTA_Modifier_Axe_BattleHunger::GetStatusEffectName(
        CDOTA_Modifier_Axe_BattleHunger *const this)
{
  return "particles/status_fx/status_effect_battle_hunger.vpcf";
}


// CDOTA_Modifier_Axe_BattleHunger::StatusEffectPriority  (line 492, @0x0000000002a07540, libserver.so)
int __fastcall CDOTA_Modifier_Axe_BattleHunger::StatusEffectPriority(CDOTA_Modifier_Axe_BattleHunger *const this)
{
  return 16;
}


// CDOTA_Modifier_Axe_BattleHunger::OnCreated  (line 502, @0x00000000029f81d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Axe_BattleHunger::OnCreated(CDOTA_Modifier_Axe_BattleHunger *const this, KeyValues *pKV)
{
  float v2; // xmm1_4
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax

  CDOTA_Buff::StartIntervalThink(this, 1.0, v2);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "slow", -1, 0);
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
    {
LABEL_3:
      this->damage_per_second = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "damage_per_second", -1, 0);
      return;
    }
  }
  else
  {
    this->slow = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_3;
  }
  this->damage_per_second = 0;
}


// CDOTA_Modifier_Axe_BattleHunger::OnDestroy  (line 513, @0x00000000029b6e50, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_axe_battle_hunger_self"
void __fastcall CDOTA_Modifier_Axe_BattleHunger::OnDestroy(CDOTA_Modifier_Axe_BattleHunger *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_Buff *ModifierByName; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_axe_battle_hunger_self", 0);
  if ( ModifierByName != 0 )
    (*(ModifierByName->_vptr_CDOTA_Buff + 26))(ModifierByName);
}


// CDOTA_Modifier_Axe_BattleHunger::OnIntervalThink  (line 528, @0x00000000029e5050, libserver.so)  // inlines: IsRealHero, ToDOTABaseNPCHero
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetAbility, ApplyDamage, EconEntity_OnOwnerKillEaterEvent
// strings: "special_bonus_unique_axe"
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_Axe_BattleHunger::OnIntervalThink(CDOTA_Modifier_Axe_BattleHunger *const this)
{
  char v1; // r13
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v4; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  double v7; // xmm0_8
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC_Hero *v11; // rdi
  CDOTA_BaseNPC_Hero *v12; // rsi
  float flDamage; // [rsp+Ch] [rbp-24h]

  v1 = 0;
  Parent = CDOTA_Buff::GetParent(this);
  v4 = Parent;
  if ( Parent != 0 )
    v1 = (*(Parent->_vptr_IHandleEntity + 408))(Parent);
  flDamage = this->damage_per_second;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_axe", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    flDamage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1) + flDamage;
  if ( CDOTA_Buff::GetAbility(this) != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    v9 = CDOTA_Buff::GetCaster(this);
    v7 = ApplyDamage(v9, v4, Ability, flDamage, 2, 0);
  }
  if ( v1 != 0
    && (*(v4->_vptr_IHandleEntity + 408))(v4, v7) == 0
    && (v4->m_iUnitType & 1) != 0
    && !v4->m_bIsIllusion.m_Value )
  {
    v10 = CDOTA_Buff::GetCaster(this);
    if ( v10 == 0 || (v11 = v10, (v10->m_iUnitType & 1) == 0) )
      v11 = 0;
    v12 = 0;
    if ( (v4->m_iUnitType & 1) != 0 )
      v12 = v4;
    EconEntity_OnOwnerKillEaterEvent(
      v11,
      v12,
      kill_eater_event_t::kKillEaterEventType_Axe_BattleHungerKills,
      1,
      INVALID_ITEM_DEF_INDEX);
  }
}


// CDOTA_Modifier_Axe_BattleHunger::DeclareFunctions  (line 561, @0x00000000029b4100, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Axe_BattleHunger::OnDeath(CModifierParams const&), CDOTA_Modifier_Axe_BattleHunger::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Axe_BattleHunger::DeclareFunctions(CDOTA_Modifier_Axe_BattleHunger *const this)
{
  this->m_Functions[138].__pfn = CDOTA_Modifier_Axe_BattleHunger::OnDeath;
  this->m_Functions[138].__delta = 0;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[13].__pfn = CDOTA_Modifier_Axe_BattleHunger::GetModifierMoveSpeedBonus_Percentage;
}


// CDOTA_Modifier_Axe_BattleHunger::OnDeath  (line 570, @0x00000000029c7a00, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetModifier_Constant_First, IndexToIdentity, IsListeningToEvent, IsSpecialIllusion, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_ModifierManager::GetModifier_Constant_First_Internal, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Axe_BattleHunger::OnDeath(
        CDOTA_Modifier_Axe_BattleHunger *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityInstance *v12; // rdi
  __int64 v13; // rax

  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1
    || (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v6 = &v5[params->hattacker.m_Index & 0x1FF]) == 0
    || m_Index != v6->m_EHandle.m_Index
    || (m_pInstance = v6->m_pInstance, v6->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance )
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
          v12 = v11->m_pInstance;
          if ( v11->m_pInstance != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 && LOBYTE(v12[71].m_pEntity) == 0 )
          {
            v13 = BYTE4(v12[68].m_pEntity);
            if ( v13 == 0xFF
              || *(*&v12[65].m_worldGroupId.m_nHashCode + 24 * v13) <= 0
              || CDOTA_ModifierManager::GetModifier_Constant_First_Internal(
                   &v12[64].m_worldGroupId,
                   modifierfunction::MODIFIER_PROPERTY_SUPER_ILLUSION,
                   &CModifierParams::s_Default) != 1.0 )
            {
              CDOTA_Buff::Destroy(this, 0, 0, 0);
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Axe_BattleHunger::GetModifierMoveSpeedBonus_Percentage  (line 586, @0x00000000029b4140, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Axe_BattleHunger::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Axe_BattleHunger *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->slow;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Axe_BatleHunger_Self::~CDOTA_Modifier_Axe_BatleHunger_Self  (line 596, @0x0000000002a12b30, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Axe_BatleHunger_Self::~CDOTA_Modifier_Axe_BatleHunger_Self(
        CDOTA_Modifier_Axe_BatleHunger_Self *const this)
{
  this->_vptr_CDOTA_Buff = &off_431B270;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Axe_BatleHunger_Self::~CDOTA_Modifier_Axe_BatleHunger_Self  (line 596, @0x0000000002a12b50, libserver.so)  // inlines: ~CDOTA_Modifier_Axe_BatleHunger_Self
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Axe_BatleHunger_Self::~CDOTA_Modifier_Axe_BatleHunger_Self(
        CDOTA_Modifier_Axe_BatleHunger_Self *const this)
{
  this->_vptr_CDOTA_Buff = &off_431B270;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Axe_BatleHunger_Self::DeclareFunctions  (line 617, @0x00000000029b4160, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Axe_BatleHunger_Self::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Axe_BatleHunger_Self::DeclareFunctions(CDOTA_Modifier_Axe_BatleHunger_Self *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Axe_BatleHunger_Self::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
}


// CDOTA_Modifier_Axe_BatleHunger_Self::OnCreated  (line 622, @0x00000000029f6ce0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Axe_BatleHunger_Self::OnCreated(
        CDOTA_Modifier_Axe_BatleHunger_Self *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->speed_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "speed_bonus", -1, 0);
  else
    this->speed_bonus = 0;
}


// CDOTA_Modifier_Axe_BatleHunger_Self::GetModifierMoveSpeedBonus_Percentage  (line 627, @0x00000000029b4180, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Axe_BatleHunger_Self::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Axe_BatleHunger_Self *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  int v4; // eax
  ModifierVariant_t result; // 0:rax.16

  v3 = (*(this->_vptr_CDOTA_Buff + 27))(this, params);
  result.m_szVal = 0;
  *v3.m128i_i32 = (this->speed_bonus * v4);
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Ability_Axe_CounterHelix::~CDOTA_Ability_Axe_CounterHelix  (line 649, @0x0000000002a167a0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Axe_CounterHelix::~CDOTA_Ability_Axe_CounterHelix(
        CDOTA_Ability_Axe_CounterHelix *const this)
{
  this->_vptr_IHandleEntity = &off_431B5D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Axe_CounterHelix::~CDOTA_Ability_Axe_CounterHelix  (line 649, @0x0000000002a167c0, libserver.so)  // inlines: ~CDOTA_Ability_Axe_CounterHelix
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Axe_CounterHelix::~CDOTA_Ability_Axe_CounterHelix(
        CDOTA_Ability_Axe_CounterHelix *const this)
{
  this->_vptr_IHandleEntity = &off_431B5D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Axe_CounterHelix::Schema_DynamicBinding  (line 651, @0x0000000002a07550, libserver.so)
// globals: CDOTA_Ability_Axe_CounterHelix::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Axe_CounterHelix::Schema_DynamicBinding(
        const CDOTA_Ability_Axe_CounterHelix *const this)
{
  return CDOTA_Ability_Axe_CounterHelix::s_pSchemaBinding;
}


// CDOTA_Ability_Axe_CounterHelix::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 651, @0x0000000002a07560, libserver.so)
// globals: CDOTA_Ability_Axe_CounterHelix::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Axe_CounterHelix::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Axe_CounterHelix::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Axe_CounterHelix::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Axe_CounterHelix::CEntityInstanceEntityClass::DestructInstance  (line 651, @0x0000000002a07570, libserver.so)  // inlines: Destruct<CDOTA_Ability_Axe_CounterHelix>
void __fastcall CDOTA_Ability_Axe_CounterHelix::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Axe_CounterHelix::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Axe_CounterHelix::CEntityInstanceEntityClass::FreeInstance  (line 651, @0x0000000002a07590, libserver.so)
void __fastcall CDOTA_Ability_Axe_CounterHelix::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Axe_CounterHelix::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Axe_CounterHelix::CEntityInstanceEntityClass::CanAllocate  (line 651, @0x0000000002a075b0, libserver.so)
bool __fastcall CDOTA_Ability_Axe_CounterHelix::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Axe_CounterHelix::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Axe_CounterHelix::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 651, @0x0000000002a075c0, libserver.so)
// globals: CDOTA_Ability_Axe_CounterHelix::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Axe_CounterHelix::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Axe_CounterHelix::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Axe_CounterHelix::s_pSchemaBinding;
}


// CDOTA_Ability_Axe_CounterHelix::CEntityInstanceEntityClass::AllocateInstance  (line 651, @0x0000000002a0ee80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Axe_CounterHelix::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Axe_CounterHelix::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Axe_CounterHelix::CEntityInstanceEntityClass::ConstructInstance  (line 651, @0x0000000002a13ac0, libserver.so)  // inlines: CDOTA_Ability_Axe_CounterHelix, Construct<CDOTA_Ability_Axe_CounterHelix>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Axe_CounterHelix::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Axe_CounterHelix::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_431B5D0;
  }
  return p;
}


// CDOTA_Ability_Axe_CounterHelix::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 651, @0x0000000002a1eb40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Axe_CounterHelix::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Axe_CounterHelix::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Axe_CounterHelix::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 651, @0x0000000002a1eb60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Axe_CounterHelix::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Axe_CounterHelix::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Axe_CounterHelix::GetEntityClassInternal  (line 651, @0x0000000002a34ac0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_Axe_CounterHelix"
// globals: `guard variable for'CDOTA_Ability_Axe_CounterHelix::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CounterHelixClass, CDOTA_Ability_Axe_CounterHelix::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CounterHelixClass, __dso_handle, CDOTA_Ability_Axe_CounterHelix::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Axe_CounterHelix::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_CounterHelixClassInfo, CDOTA_Ability_Axe_CounterHelix::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_CounterHelixClassInfo
CEntityClass *__cdecl CDOTA_Ability_Axe_CounterHelix::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Axe_CounterHelix::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CounterHelixClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Axe_CounterHelix::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CounterHelixClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Axe_CounterHelix::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CounterHelixClass);
    CDOTA_Ability_Axe_CounterHelix::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CounterHelixClass._vptr_CEntityClass = off_431B550;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Axe_CounterHelix::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CounterHelixClass);
    __cxa_atexit(
      CDOTA_Ability_Axe_CounterHelix::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Axe_CounterHelix::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CounterHelixClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Axe_CounterHelixClass != 0 )
    return &CDOTA_Ability_Axe_CounterHelix::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CounterHelixClass;
  if ( `guard variable for'CDOTA_Ability_Axe_CounterHelix::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_CounterHelixClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Axe_CounterHelix::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_CounterHelixClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Axe_CounterHelix::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_CounterHelixClassInfo,
      "CDOTA_Ability_Axe_CounterHelix",
      "axe_counter_helix",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Axe_CounterHelix::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_CounterHelixClassInfo);
  }
  CDOTA_Ability_Axe_CounterHelix::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CounterHelixClass.m_pClassInfo = &CDOTA_Ability_Axe_CounterHelix::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_CounterHelixClassInfo;
  CDOTA_Ability_Axe_CounterHelix::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CounterHelixClass.m_pBaseClassInfo = CDOTA_Ability_Axe_CounterHelix::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_CounterHelixClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Axe_CounterHelixClass = &CDOTA_Ability_Axe_CounterHelix::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CounterHelixClass;
  CDOTA_Ability_Axe_CounterHelix::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_CounterHelixClassInfo.m_pClass = &CDOTA_Ability_Axe_CounterHelix::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CounterHelixClass;
  CDOTA_Ability_Axe_CounterHelix::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CounterHelixClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Axe_CounterHelixClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Axe_CounterHelix::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CounterHelixClass;
}


// CDOTA_Ability_Axe_CounterHelix::GetIntrinsicModifierName  (line 666, @0x0000000002a075d0, libserver.so)
// strings: "modifier_axe_counter_helix"
const char *__fastcall CDOTA_Ability_Axe_CounterHelix::GetIntrinsicModifierName(
        CDOTA_Ability_Axe_CounterHelix *const this)
{
  return "modifier_axe_counter_helix";
}


// CDOTA_Ability_Axe_CounterHelix::YouForgotToImplementOrDeclareServerClass  (line 669, @0x00000000029b41c0, libserver.so)
int __fastcall CDOTA_Ability_Axe_CounterHelix::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Axe_CounterHelix *const this)
{
  return 0;
}


// CDOTA_Ability_Axe_CounterHelix::GetServerClass  (line 669, @0x00000000029c9870, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Axe_CounterHelix::GetServerClass(CDOTA_Ability_Axe_CounterHelix *const this)
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


// CDOTA_Modifier_Axe_CounterHelix::~CDOTA_Modifier_Axe_CounterHelix  (line 679, @0x0000000002a12ae0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Axe_CounterHelix::~CDOTA_Modifier_Axe_CounterHelix(
        CDOTA_Modifier_Axe_CounterHelix *const this)
{
  this->_vptr_CDOTA_Buff = &off_431C090;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Axe_CounterHelix::~CDOTA_Modifier_Axe_CounterHelix  (line 679, @0x0000000002a12b00, libserver.so)  // inlines: ~CDOTA_Modifier_Axe_CounterHelix
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Axe_CounterHelix::~CDOTA_Modifier_Axe_CounterHelix(
        CDOTA_Modifier_Axe_CounterHelix *const this)
{
  this->_vptr_CDOTA_Buff = &off_431C090;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Axe_CounterHelix::IsHidden  (line 684, @0x0000000002a075e0, libserver.so)
bool __fastcall CDOTA_Modifier_Axe_CounterHelix::IsHidden(CDOTA_Modifier_Axe_CounterHelix *const this)
{
  return 1;
}


// CDOTA_Modifier_Axe_CounterHelix::OnCreated  (line 703, @0x00000000029f8030, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "trigger_chance"
void __fastcall CDOTA_Modifier_Axe_CounterHelix::OnCreated(CDOTA_Modifier_Axe_CounterHelix *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  this->m_fLastProc = 0.0;
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->trigger_chance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "trigger_chance", -1, 0);
      return;
    }
  }
  else
  {
    this->radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->trigger_chance = 0;
}


// CDOTA_Modifier_Axe_CounterHelix::DeclareFunctions  (line 713, @0x00000000029b41d0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Axe_CounterHelix::OnAttackLanded(CModifierParams const&)
void __fastcall CDOTA_Modifier_Axe_CounterHelix::DeclareFunctions(CDOTA_Modifier_Axe_CounterHelix *const this)
{
  this->m_Functions[121].__pfn = CDOTA_Modifier_Axe_CounterHelix::OnAttackLanded;
  this->m_Functions[121].__delta = 0;
}


// CDOTA_Modifier_Axe_CounterHelix::OnAttackLanded  (line 720, @0x00000000029e0670, libserver.so)  // inlines: AttackerNPC, DOTAGameRules, DotaRetrieveAbilityValue<float>, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetLevelSpecialValueFor<float>, GetTeamNumber, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, CEntityHandle::operator CEntityInstance*, RollPseudoRandomPercentage, CDOTA_BaseNPC::CreateAbilityTriggerRecord, CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>, 64ul>::CUtlVectorFixedGrowableCompat, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_Buff::GetCaster, ApplyDamage, CDOTA_Buff::CreateBuffParticleEffect (19 total)
// strings: "particles/units/heroes/hero_axe/axe_counterhelix.vpcf", "Hero_Axe.CounterHelix"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Axe_CounterHelix::OnAttackLanded(
        CDOTA_Modifier_Axe_CounterHelix *const this,
        const CModifierParams *const params)
{
  CDOTABaseAbility *Ability; // rax
  float LevelSpecialValue; // xmm0_4
  float v6; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax
  CEntityInstance *v9; // rax
  CDOTA_BaseNPC *v10; // r13
  CDOTA_BaseNPC *v11; // rax
  uint32 m_iUnitType; // eax
  unsigned __int8 m_Value; // r12
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // r14
  CDOTABaseAbility *v16; // r12
  CDOTA_BaseNPC *v17; // rax
  __m128i v18; // xmm4
  CDOTA_BaseNPC *v19; // r13
  CDOTA_BaseNPC *v20; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v22; // rax
  __int64 v23; // r13
  int v24; // r12d
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *v27; // rax
  CDOTABaseAbility *v28; // r15
  CHandle<CBaseEntity> *v29; // rdx
  uint32 m_Index; // eax
  __int16 v31; // cx
  CEntityIdentity *v32; // rdx
  CEntityIdentity *v33; // rdx
  float v34; // xmm0_4
  CDOTA_BaseNPC *v35; // rax
  int BuffParticleEffect; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v38; // rax
  CDOTA_BaseNPC *v39; // rax
  float flDamage; // [rsp+2Ch] [rbp-154h]
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> entities; // [rsp+30h] [rbp-150h] BYREF
  unsigned __int64 v42; // [rsp+148h] [rbp-38h]
  ModifierVariant_t result; // 0:rax.16

  v42 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  LevelSpecialValue = 0.0;
  if ( Ability != 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "cooldown", -1, 0);
  v6 = 0.0;
  if ( g_pGameRules != 0 )
    v6 = *&g_pGameRules[18].m_szQuestName[20];
  *&result.m_eType = 1;
  if ( (LevelSpecialValue + this->m_fLastProc) <= v6 )
  {
    if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
    {
      Parent = CDOTA_Buff::GetParent(this);
      if ( (*(Parent->_vptr_IHandleEntity + 408))(Parent) != 0 )
      {
        v9 = CEntityHandle::operator CEntityInstance *(&params->hattacker);
        if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 )
          v10 = v9;
        else
          v10 = 0;
        v11 = CEntityHandle::operator CEntityInstance *(&params->htarget);
        if ( v11 != 0 && v11->m_bIsDOTANPC && v11 == CDOTA_Buff::GetParent(this) )
        {
          m_iUnitType = v10->m_iUnitType;
          if ( (m_iUnitType & 0x10) == 0 && (m_iUnitType & 0x193) != 0 )
          {
            m_Value = v10->m_iTeamNum.m_Value;
            if ( m_Value != CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value )
            {
              v14 = CDOTA_Buff::GetParent(this);
              if ( RollPseudoRandomPercentage(
                     this->trigger_chance,
                     DotaPseudoRandomType::DOTA_PSEUDO_RANDOM_AXE_HELIX,
                     v14) )
              {
                v15 = CDOTA_Buff::GetParent(this);
                v16 = CDOTA_Buff::GetAbility(this);
                v17 = CDOTA_Buff::GetParent(this);
                CDOTA_BaseNPC::CreateAbilityTriggerRecord(v17, v16, v10, v15);
                CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul>::CUtlVectorFixedGrowableCompat(&entities, 0);
                *v18.m128i_i32 = this->radius;
                LODWORD(v15) = _mm_cvtsi128_si32(v18);
                v19 = CDOTA_Buff::GetParent(this);
                v20 = CDOTA_Buff::GetParent(this);
                AbsOrigin = CBaseEntity::GetAbsOrigin(v20);
                v22 = CDOTA_Buff::GetParent(this);
                FindUnitsInRadius(v22->m_iTeamNum.m_Value, AbsOrigin, v19, *&v15, &entities, 2, 19, 16, 0, 0);
                if ( entities.m_Size > 0 )
                {
                  v23 = 0;
                  v24 = 0;
                  do
                  {
                    v27 = CDOTA_Buff::GetAbility(this);
                    flDamage = (*(v27->_vptr_IHandleEntity + 247))(v27);
                    v28 = CDOTA_Buff::GetAbility(this);
                    v29 = &entities.m_Memory.m_pMemory[v23];
                    m_Index = entities.m_Memory.m_pMemory[v23].m_Index;
                    if ( m_Index + 2 <= 1
                      || (v31 = v29->m_Index,
                          (v32 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v29->m_Index) >> 9) & 0x3F]) == 0)
                      || (v33 = &v32[v31 & 0x1FF]) == 0
                      || m_Index != v33->m_EHandle.m_Index
                      || (m_pInstance = v33->m_pInstance, v33->m_pInstance == 0)
                      || !m_pInstance->m_bIsDOTANPC )
                    {
                      m_pInstance = 0;
                    }
                    Caster = CDOTA_Buff::GetCaster(this);
                    ApplyDamage(Caster, m_pInstance, v28, flDamage, 4, 0);
                    ++v24;
                    ++v23;
                  }
                  while ( entities.m_Size > v24 );
                }
                v34 = 0.0;
                if ( g_pGameRules != 0 )
                  v34 = *&g_pGameRules[18].m_szQuestName[20];
                this->m_fLastProc = v34;
                v35 = CDOTA_Buff::GetCaster(this);
                BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                                       this,
                                       "particles/units/heroes/hero_axe/axe_counterhelix.vpcf",
                                       1,
                                       v35,
                                       0);
                ParticleManager = GetParticleManager();
                CDOTA_ParticleManager::ReleaseParticleIndex(ParticleManager, BuffParticleEffect);
                if ( !CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value )
                {
                  v38 = CDOTA_Buff::GetParent(this);
                  CDOTA_BaseNPC::StartGesture(v38, 1512, 0.2, 0.2, 0, 0, 1.0);
                }
                v39 = CDOTA_Buff::GetParent(this);
                CDOTA_BaseNPC::UnitEmitSound(v39, "Hero_Axe.CounterHelix", 0.0, 0, 0);
                CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
              }
            }
          }
        }
      }
    }
    *&result.m_eType = 1;
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Ability_Axe_CullingBlade::~CDOTA_Ability_Axe_CullingBlade  (line 773, @0x0000000002a167f0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Axe_CullingBlade::~CDOTA_Ability_Axe_CullingBlade(
        CDOTA_Ability_Axe_CullingBlade *const this)
{
  this->_vptr_IHandleEntity = &off_431C3F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Axe_CullingBlade::~CDOTA_Ability_Axe_CullingBlade  (line 773, @0x0000000002a16810, libserver.so)  // inlines: ~CDOTA_Ability_Axe_CullingBlade
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Axe_CullingBlade::~CDOTA_Ability_Axe_CullingBlade(
        CDOTA_Ability_Axe_CullingBlade *const this)
{
  this->_vptr_IHandleEntity = &off_431C3F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Axe_CullingBlade::Schema_DynamicBinding  (line 775, @0x0000000002a075f0, libserver.so)
// globals: CDOTA_Ability_Axe_CullingBlade::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Axe_CullingBlade::Schema_DynamicBinding(
        const CDOTA_Ability_Axe_CullingBlade *const this)
{
  return CDOTA_Ability_Axe_CullingBlade::s_pSchemaBinding;
}


// CDOTA_Ability_Axe_CullingBlade::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 775, @0x0000000002a07600, libserver.so)
// globals: CDOTA_Ability_Axe_CullingBlade::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Axe_CullingBlade::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Axe_CullingBlade::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Axe_CullingBlade::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Axe_CullingBlade::CEntityInstanceEntityClass::DestructInstance  (line 775, @0x0000000002a07610, libserver.so)  // inlines: Destruct<CDOTA_Ability_Axe_CullingBlade>
void __fastcall CDOTA_Ability_Axe_CullingBlade::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Axe_CullingBlade::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Axe_CullingBlade::CEntityInstanceEntityClass::FreeInstance  (line 775, @0x0000000002a07630, libserver.so)
void __fastcall CDOTA_Ability_Axe_CullingBlade::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Axe_CullingBlade::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Axe_CullingBlade::CEntityInstanceEntityClass::CanAllocate  (line 775, @0x0000000002a07650, libserver.so)
bool __fastcall CDOTA_Ability_Axe_CullingBlade::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Axe_CullingBlade::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Axe_CullingBlade::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 775, @0x0000000002a07660, libserver.so)
// globals: CDOTA_Ability_Axe_CullingBlade::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Axe_CullingBlade::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Axe_CullingBlade::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Axe_CullingBlade::s_pSchemaBinding;
}


// CDOTA_Ability_Axe_CullingBlade::CEntityInstanceEntityClass::AllocateInstance  (line 775, @0x0000000002a0eec0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Axe_CullingBlade::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Axe_CullingBlade::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Axe_CullingBlade::CEntityInstanceEntityClass::ConstructInstance  (line 775, @0x0000000002a13af0, libserver.so)  // inlines: CDOTA_Ability_Axe_CullingBlade, Construct<CDOTA_Ability_Axe_CullingBlade>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Axe_CullingBlade::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Axe_CullingBlade::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_431C3F0;
  }
  return p;
}


// CDOTA_Ability_Axe_CullingBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 775, @0x0000000002a1eb90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Axe_CullingBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Axe_CullingBlade::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Axe_CullingBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 775, @0x0000000002a1ebb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Axe_CullingBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Axe_CullingBlade::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Axe_CullingBlade::GetEntityClassInfo  (line 775, @0x0000000002a2b660, libserver.so)  // inlines: GetEntityClassInfo
// calls: __cxa_guard_acquire, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_release
// callers: CDOTA_Ability_Holdout_CullingBlade::GetEntityClassInternal
// strings: "axe_culling_blade", "CDOTA_Ability_Axe_CullingBlade", "dota_base_ability", "CDOTABaseAbility", "CBaseEntity", "CGameEntity"
// globals: `guard variable for'CDOTA_Ability_Axe_CullingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClassInfo, CDOTA_Ability_Axe_CullingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClassInfo, `guard variable for'CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo, `guard variable for'CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, CBaseEntity::GetEntityClassInfo(void)::g_EntityCBaseEntityClassInfo, `guard variable for'CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo, CGameEntity::GetEntityClassInfo(void)::g_EntityCGameEntityClassInfo
CEntityClassInfo *__cdecl CDOTA_Ability_Axe_CullingBlade::GetEntityClassInfo()
{
  if ( `guard variable for'CDOTA_Ability_Axe_CullingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClassInfo != 0 )
    return &CDOTA_Ability_Axe_CullingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClassInfo;
  if ( __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Axe_CullingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClassInfo) == 0 )
    return &CDOTA_Ability_Axe_CullingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClassInfo;
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
    &CDOTA_Ability_Axe_CullingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClassInfo,
    "CDOTA_Ability_Axe_CullingBlade",
    "axe_culling_blade",
    0,
    &CDOTABaseAbility::GetEntityClassInfo(void)::g_EntityCDOTABaseAbilityClassInfo);
  __cxa_guard_release(&`guard variable for'CDOTA_Ability_Axe_CullingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClassInfo);
  return &CDOTA_Ability_Axe_CullingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClassInfo;
}


// CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal  (line 775, @0x0000000002a3d000, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "axe_culling_blade", "CDOTA_Ability_Axe_CullingBlade"
// globals: `guard variable for'CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass, CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Axe_CullingBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Axe_CullingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClassInfo, CDOTA_Ability_Axe_CullingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClassInfo
CEntityClass *__cdecl CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass) != 0 )
  {
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_pClassInfo = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_flags = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_pInputs = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_nInputCount = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_pOutputs = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_nOutputCount = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_pGameClass = 0;
    CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass._vptr_CEntityClass = off_431C370;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass);
    __cxa_atexit(
      CDOTA_Ability_Axe_CullingBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Axe_CullingBladeClass != 0 )
    return &CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass;
  if ( `guard variable for'CDOTA_Ability_Axe_CullingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Axe_CullingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Axe_CullingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClassInfo,
      "CDOTA_Ability_Axe_CullingBlade",
      "axe_culling_blade",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Axe_CullingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClassInfo);
  }
  CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_pClassInfo = &CDOTA_Ability_Axe_CullingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClassInfo;
  CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_pBaseClassInfo = CDOTA_Ability_Axe_CullingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Axe_CullingBladeClass = &CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass;
  CDOTA_Ability_Axe_CullingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClassInfo.m_pClass = &CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass;
  CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Axe_CullingBladeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Axe_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Axe_CullingBladeClass;
}


// CDOTA_Ability_Axe_CullingBlade::GetStolenActivityModifier  (line 782, @0x0000000002a07670, libserver.so)
const char *__fastcall CDOTA_Ability_Axe_CullingBlade::GetStolenActivityModifier(
        CDOTA_Ability_Axe_CullingBlade *const this)
{
  return "culling_blade";
}


// CDOTA_Ability_Axe_CullingBlade::YouForgotToImplementOrDeclareServerClass  (line 788, @0x00000000029b41f0, libserver.so)
int __fastcall CDOTA_Ability_Axe_CullingBlade::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Axe_CullingBlade *const this)
{
  return 0;
}


// CDOTA_Ability_Axe_CullingBlade::GetServerClass  (line 788, @0x00000000029c90b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Axe_CullingBlade::GetServerClass(CDOTA_Ability_Axe_CullingBlade *const this)
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


// CDOTA_Ability_Axe_CullingBlade::OnSpellStart  (line 797, @0x00000000029f4a70, libserver.so)  // inlines: CEntityHandle, CHandle, CModifierParams, CUtlMemory, CUtlVector, CUtlVectorBase, CUtlVectorFixedGrowableCompat, Get, GetAbilityData, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsRealHero, IsValid, LookupEntity, Set, SetAttacker, SetTarget, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlVector, ~CUtlVectorFixedGrowableCompat
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CBaseEntity::GetHealth, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier (30 total)
// strings: "kill_threshold", "kill_threshold_scepter", "speed_duration_scepter", "speed_aoe", "modifier_axe_culling_blade_boost", "particles/units/heroes/hero_axe/axe_culling_blade_boost.vpcf" (12 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Axe_CullingBlade::OnSpellStart(CDOTA_Ability_Axe_CullingBlade *const this)
{
  CBaseEntity *CursorTarget; // rax
  int LevelSpecialValue; // r12d
  int v4; // r14d
  int v5; // ebx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v7; // r12
  CDOTA_BaseNPC *v8; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  float v12; // xmm1_4
  __int64 v13; // r14
  int v14; // r13d
  CHandle<CBaseEntity> *v15; // rdx
  uint32 m_Index; // eax
  __int16 v17; // cx
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  int v23; // ebx
  CDOTA_ParticleManager *v24; // rax
  CDOTA_ParticleManager *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v30; // cx
  CEntityIdentity *v31; // rax
  __int16 v32; // cx
  CDOTA_BaseNPC *v33; // rax
  CEntityIdentity *v34; // rdx
  __int16 v35; // cx
  __m128i v36; // xmm5
  float v37; // ebx
  CDOTA_BaseNPC *v38; // rax
  CDOTA_BaseNPC *v39; // rax
  int v40; // r12d
  CDOTA_BaseNPC *v41; // r13
  CDOTA_ParticleManager *v42; // rax
  CDOTA_ParticleManager *v43; // rax
  CDOTA_ParticleManager *v44; // rax
  CDOTA_BaseNPC *v45; // rax
  CDOTA_BaseNPC_Hero *v46; // rdi
  CDOTA_BaseNPC_Hero *v47; // rsi
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // ebx
  const Vector *v50; // r12
  CDOTA_BaseNPC *v51; // rax
  float v52; // xmm3_4
  CDOTA_BaseNPC *v53; // rax
  int AbilityParticleEffect; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *pTarget; // [rsp+20h] [rbp-220h]
  int kill_threshold; // [rsp+30h] [rbp-210h]
  float flRadius; // [rsp+34h] [rbp-20Ch]
  const Vector *v59; // [rsp+38h] [rbp-208h]
  CModifierParams params; // [rsp+40h] [rbp-200h] BYREF
  KeyValues kv; // [rsp+D0h] [rbp-170h] BYREF
  CUtlVectorFixedGrowableCompat<CHandle<CBaseEntity>,64ul> entities; // [rsp+F0h] [rbp-150h] BYREF
  unsigned __int64 v63; // [rsp+208h] [rbp-38h]

  v63 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  pTarget = CursorTarget;
  if ( CursorTarget != 0
    && CursorTarget->m_bIsDOTANPC
    && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0
    && (BYTE1(CursorTarget[3].m_vecVelocity.m_Value.x) & 1) == 0
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(CursorTarget, this, 1) )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "kill_threshold", -1, 0);
    v4 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "kill_threshold_scepter", -1, 0);
    v5 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
    Caster = CDOTABaseAbility::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(Caster) )
      LevelSpecialValue = v4;
    kill_threshold = LevelSpecialValue;
    if ( CBaseEntity::GetHealth(pTarget) >= LevelSpecialValue )
    {
      CDOTA_BaseNPC::UnitEmitSound(pTarget, "Hero_Axe.Culling_Blade_Fail", 0.0, 0, 0);
      v53 = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(v53, pTarget, this, v5, 2, 0);
      AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                                this,
                                "particles/units/heroes/hero_axe/axe_culling_blade.vpcf",
                                1,
                                pTarget,
                                0);
      ParticleManager = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(ParticleManager, AbilityParticleEffect);
    }
    else
    {
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "speed_duration", -1, 0);
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "speed_duration_scepter", -1, 0);
      entities.m_Size = 0;
      entities.m_Memory.m_nAllocationCount = 64;
      entities.m_Memory.m_nGrowSize = 0x80000000;
      entities.m_Memory.m_pMemory = &entities.m_FixedMemory;
      flRadius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed_aoe", -1, 0);
      v7 = CDOTABaseAbility::GetCaster(this);
      v8 = CDOTABaseAbility::GetCaster(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
      v10 = CDOTABaseAbility::GetCaster(this);
      FindUnitsInRadius(v10->m_iTeamNum.m_Value, AbsOrigin, v7, flRadius, &entities, 1, 3, 0, 0, 0);
      KeyValues::KeyValues(&kv, "modifier_axe_culling_blade_boost");
      v11 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::HasScepter(v11);
      KeyValues::SetFloat(&kv, "duration", v12);
      if ( entities.m_Size > 0 )
      {
        v13 = 0;
        v14 = 0;
        do
        {
          v15 = &entities.m_Memory.m_pMemory[v13];
          m_Index = entities.m_Memory.m_pMemory[v13].m_Index;
          if ( m_Index + 2 > 1 )
          {
            v17 = v15->m_Index;
            v18 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v15->m_Index) >> 9) & 0x3F];
            if ( v18 != 0 )
            {
              v19 = &v18[v17 & 0x1FF];
              if ( v19 != 0 && m_Index == v19->m_EHandle.m_Index )
              {
                m_pInstance = v19->m_pInstance;
                if ( v19->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                {
                  v21 = CDOTABaseAbility::GetCaster(this);
                  CDOTA_BaseNPC::AddNewModifier(m_pInstance, v21, this, "modifier_axe_culling_blade_boost", &kv, 0);
                  v22 = CDOTABaseAbility::GetCaster(this);
                  v23 = CDOTABaseAbility::CreateAbilityParticleEffect(
                          this,
                          "particles/units/heroes/hero_axe/axe_culling_blade_boost.vpcf",
                          2,
                          v22,
                          0);
                  v59 = CBaseEntity::GetAbsOrigin(m_pInstance);
                  v24 = GetParticleManager();
                  CDOTA_ParticleManager::SetParticleControlEnt(v24, v23, 0, m_pInstance, 5, "attach_hitloc", *v59, 1);
                  v25 = GetParticleManager();
                  CDOTA_ParticleManager::SetParticleControlEnt(v25, v23, 1, m_pInstance, 1, 0, vec3_invalid, 1);
                  *&params.ability.m_Index = flRadius;
                  params.fDamage = flRadius;
                  params.fOriginalDamage = flRadius;
                  v26 = GetParticleManager();
                  CDOTA_ParticleManager::SetParticleControl(v26, v23, 2, *&params.ability.m_Index, flRadius);
                  v27 = GetParticleManager();
                  CDOTA_ParticleManager::ReleaseParticleIndex(v27, v23);
                }
              }
            }
          }
          ++v14;
          ++v13;
        }
        while ( entities.m_Size > v14 );
      }
      CDOTA_ModifierManager::RemoveModifierByName(&pTarget->m_ModifierManager, "modifier_dazzle_shallow_grave");
      params.ability.m_Index = -1;
      params.fDamage = 0.0;
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
      v28 = CDOTABaseAbility::GetCaster(this);
      if ( v28 != 0 && (m_pEntity = v28->m_pEntity) != 0 )
      {
        v30 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v30 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        params.hattacker.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15)
                                 | v30 & 0x7FFF;
      }
      else
      {
        params.hattacker.m_Index = -1;
      }
      v31 = pTarget->m_pEntity;
      if ( v31 != 0 )
      {
        v32 = 0x7FFF;
        if ( v31->m_EHandle.m_Index != -1 )
          v32 = v31->m_EHandle.m_Index & 0x7FFF;
        params.htarget.m_Index = (((v31->m_EHandle.m_Index >> 15) - (v31->m_flags & 1)) << 15) | v32 & 0x7FFF;
      }
      else
      {
        params.htarget.m_Index = -1;
      }
      params.fDamage = (CBaseEntity::GetHealth(pTarget) + 1000);
      v33 = CDOTABaseAbility::GetCaster(this);
      if ( v33 != 0 && (v34 = v33->m_pEntity) != 0 )
      {
        v35 = 0x7FFF;
        if ( v34->m_EHandle.m_Index != -1 )
          v35 = v34->m_EHandle.m_Index & 0x7FFF;
        params.inflictor.m_Index = (((v34->m_EHandle.m_Index >> 15) - (v34->m_flags & 1)) << 15) | v35 & 0x7FFF;
      }
      else
      {
        params.inflictor.m_Index = -1;
      }
      params.nDamageType = 1;
      params.nDamageCategory = 0;
      params.nDamageflags = 0;
      params.iFailType = 0;
      params.iRecord = -1;
      params.bRangedAttack = 0;
      params.bProcessProcs = 0;
      FireModifierEvent(modifierfunction::MODIFIER_EVENT_ON_TAKEDAMAGE_KILLCREDIT, &params);
      *v36.m128i_i32 = kill_threshold;
      v37 = COERCE_FLOAT(_mm_cvtsi128_si32(v36));
      v38 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::Kill(pTarget, this, v38, v37, 0);
      if ( (pTarget->m_iUnitType & 1) != 0 )
        CDOTABaseAbility::EndCooldown(this);
      v39 = CDOTABaseAbility::GetCaster(this);
      v40 = CDOTABaseAbility::CreateAbilityParticleEffect(
              this,
              "particles/units/heroes/hero_axe/axe_culling_blade_kill.vpcf",
              2,
              v39,
              0);
      v41 = CDOTABaseAbility::GetCaster(this);
      v42 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v42, v40, 3, v41, 1, 0, vec3_invalid, 1);
      v43 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v43, v40, 4, pTarget, 1, 0, vec3_invalid, 1);
      v44 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v44, v40);
      CDOTA_BaseNPC::UnitEmitSound(pTarget, "Hero_Axe.Culling_Blade_Success", 0.0, 0, 0);
      if ( (pTarget->m_iUnitType & 1) != 0 && !pTarget->m_bIsIllusion.m_Value )
      {
        v45 = CDOTABaseAbility::GetCaster(this);
        if ( v45 != 0 && (v45->m_iUnitType & 1) != 0 )
          v46 = v45;
        else
          v46 = 0;
        v47 = 0;
        if ( (pTarget->m_iUnitType & 1) != 0 )
          v47 = pTarget;
        EconEntity_OnOwnerKillEaterEvent(
          v46,
          v47,
          kill_eater_event_t::kKillEaterEventType_Axe_Culls,
          1,
          INVALID_ITEM_DEF_INDEX);
      }
      m_pAbilityData = this->m_pAbilityData;
      if ( m_pAbilityData == 0 )
      {
        CDOTABaseAbility::LoadAbilityData(this, 0);
        m_pAbilityData = this->m_pAbilityData;
      }
      m_iAbilityID = m_pAbilityData->m_iAbilityID;
      v50 = CBaseEntity::GetAbsOrigin(pTarget);
      v51 = CDOTABaseAbility::GetCaster(this);
      CDOTAGamerules::SendProjectionAbilityMessage(
        g_pGameRules,
        v51,
        0,
        m_iAbilityID,
        0,
        0,
        *&v50->x,
        v50->z,
        -1.0,
        v52);
      KeyValues::~KeyValues(&kv);
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
    }
  }
}


// CDOTA_Ability_Axe_CullingBlade::GetCooldown  (line 901, @0x00000000029e51b0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_Axe_CullingBlade::GetCooldown(CDOTA_Ability_Axe_CullingBlade *const this, int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "cooldown_scepter", iLevel, 0);
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_Axe_CullingBlade::GetAbilityDamageToTargetOverInterval  (line 913, @0x00000000029e5200, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CBaseEntity::GetHealth, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "kill_threshold_scepter", "kill_threshold"
int __fastcall CDOTA_Ability_Axe_CullingBlade::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Axe_CullingBlade *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  const char *v7; // rbx
  CDOTA_BaseNPC *Caster; // rax
  int Health; // r14d
  bool v10; // al
  int v12; // ebx

  v7 = "kill_threshold_scepter";
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( !CDOTA_BaseNPC::HasScepter(Caster) )
    v7 = "kill_threshold";
  Health = CBaseEntity::GetHealth(pTarget);
  v10 = Health <= CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, v7, -1, 1);
  if ( v10 && eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PURE )
    return CBaseEntity::GetHealth(pTarget);
  if ( v10 || eDamageType != DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
    return 0;
  v12 = (*(this->_vptr_IHandleEntity + 247))(this);
  return (v12 * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
}


// CDOTA_Modifier_Axe_CullingBlade_Boost::~CDOTA_Modifier_Axe_CullingBlade_Boost  (line 931, @0x0000000002a12a90, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Axe_CullingBlade_Boost::~CDOTA_Modifier_Axe_CullingBlade_Boost(
        CDOTA_Modifier_Axe_CullingBlade_Boost *const this)
{
  this->_vptr_CDOTA_Buff = &off_431CEB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Axe_CullingBlade_Boost::~CDOTA_Modifier_Axe_CullingBlade_Boost  (line 931, @0x0000000002a12ab0, libserver.so)  // inlines: ~CDOTA_Modifier_Axe_CullingBlade_Boost
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Axe_CullingBlade_Boost::~CDOTA_Modifier_Axe_CullingBlade_Boost(
        CDOTA_Modifier_Axe_CullingBlade_Boost *const this)
{
  this->_vptr_CDOTA_Buff = &off_431CEB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Axe_CullingBlade_Boost::GetEffectName  (line 938, @0x0000000002a07680, libserver.so)
// strings: "particles/units/heroes/hero_axe/axe_cullingblade_sprint.vpcf"
const char *__fastcall CDOTA_Modifier_Axe_CullingBlade_Boost::GetEffectName(
        CDOTA_Modifier_Axe_CullingBlade_Boost *const this)
{
  return "particles/units/heroes/hero_axe/axe_cullingblade_sprint.vpcf";
}


// CDOTA_Modifier_Axe_CullingBlade_Boost::DeclareFunctions  (line 949, @0x00000000029b4200, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Axe_CullingBlade_Boost::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Axe_CullingBlade_Boost::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Axe_CullingBlade_Boost::DeclareFunctions(
        CDOTA_Modifier_Axe_CullingBlade_Boost *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Axe_CullingBlade_Boost::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Axe_CullingBlade_Boost::GetModifierAttackSpeedBonus_Constant;
}


// CDOTA_Modifier_Axe_CullingBlade_Boost::OnCreated  (line 955, @0x00000000029f6d40, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Axe_CullingBlade_Boost::OnCreated(
        CDOTA_Modifier_Axe_CullingBlade_Boost *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->speed_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "speed_bonus", -1, 0);
  else
    this->speed_bonus = 0;
}


// CDOTA_Modifier_Axe_CullingBlade_Boost::GetModifierMoveSpeedBonus_Percentage  (line 961, @0x00000000029b4240, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Axe_CullingBlade_Boost::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Axe_CullingBlade_Boost *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->speed_bonus;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Axe_CullingBlade_Boost::GetModifierAttackSpeedBonus_Constant  (line 967, @0x00000000029b4260, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Axe_CullingBlade_Boost::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Axe_CullingBlade_Boost *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->speed_bonus;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Holdout_CullingBlade::~CDOTA_Ability_Holdout_CullingBlade  (line 980, @0x0000000002a16840, libserver.so)  // inlines: ~CDOTA_Ability_Axe_CullingBlade
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Holdout_CullingBlade::~CDOTA_Ability_Holdout_CullingBlade(
        CDOTA_Ability_Holdout_CullingBlade *const this)
{
  this->_vptr_IHandleEntity = &off_431C3F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Holdout_CullingBlade::~CDOTA_Ability_Holdout_CullingBlade  (line 980, @0x0000000002a16860, libserver.so)  // inlines: ~CDOTA_Ability_Axe_CullingBlade, ~CDOTA_Ability_Holdout_CullingBlade
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Holdout_CullingBlade::~CDOTA_Ability_Holdout_CullingBlade(
        CDOTA_Ability_Holdout_CullingBlade *const this)
{
  this->_vptr_IHandleEntity = &off_431C3F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Holdout_CullingBlade::Schema_DynamicBinding  (line 982, @0x0000000002a07690, libserver.so)
// globals: CDOTA_Ability_Holdout_CullingBlade::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Holdout_CullingBlade::Schema_DynamicBinding(
        const CDOTA_Ability_Holdout_CullingBlade *const this)
{
  return CDOTA_Ability_Holdout_CullingBlade::s_pSchemaBinding;
}


// CDOTA_Ability_Holdout_CullingBlade::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 982, @0x0000000002a076a0, libserver.so)
// globals: CDOTA_Ability_Holdout_CullingBlade::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Holdout_CullingBlade::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Holdout_CullingBlade::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Holdout_CullingBlade::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Holdout_CullingBlade::CEntityInstanceEntityClass::DestructInstance  (line 982, @0x0000000002a076b0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Holdout_CullingBlade>
void __fastcall CDOTA_Ability_Holdout_CullingBlade::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Holdout_CullingBlade::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Holdout_CullingBlade::CEntityInstanceEntityClass::FreeInstance  (line 982, @0x0000000002a076d0, libserver.so)
void __fastcall CDOTA_Ability_Holdout_CullingBlade::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Holdout_CullingBlade::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Holdout_CullingBlade::CEntityInstanceEntityClass::CanAllocate  (line 982, @0x0000000002a076f0, libserver.so)
bool __fastcall CDOTA_Ability_Holdout_CullingBlade::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Holdout_CullingBlade::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Holdout_CullingBlade::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 982, @0x0000000002a07700, libserver.so)
// globals: CDOTA_Ability_Holdout_CullingBlade::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Holdout_CullingBlade::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Holdout_CullingBlade::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Holdout_CullingBlade::s_pSchemaBinding;
}


// CDOTA_Ability_Holdout_CullingBlade::CEntityInstanceEntityClass::AllocateInstance  (line 982, @0x0000000002a0ef00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Holdout_CullingBlade::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Holdout_CullingBlade::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Holdout_CullingBlade::CEntityInstanceEntityClass::ConstructInstance  (line 982, @0x0000000002a13b20, libserver.so)  // inlines: CDOTA_Ability_Axe_CullingBlade, CDOTA_Ability_Holdout_CullingBlade, Construct<CDOTA_Ability_Holdout_CullingBlade>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Holdout_CullingBlade::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Holdout_CullingBlade::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_431D210;
  }
  return p;
}


// CDOTA_Ability_Holdout_CullingBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 982, @0x0000000002a1ebe0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Holdout_CullingBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Holdout_CullingBlade::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Holdout_CullingBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 982, @0x0000000002a1ec00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Holdout_CullingBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Holdout_CullingBlade::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Holdout_CullingBlade::GetEntityClassInternal  (line 982, @0x0000000002a34c10, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTA_Ability_Axe_CullingBlade::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "holdout_culling_blade", "CDOTA_Ability_Holdout_CullingBlade"
// globals: `guard variable for'CDOTA_Ability_Holdout_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_CullingBladeClass, CDOTA_Ability_Holdout_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_CullingBladeClass, __dso_handle, CDOTA_Ability_Holdout_CullingBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Holdout_CullingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_CullingBladeClassInfo, CDOTA_Ability_Holdout_CullingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_CullingBladeClassInfo
CEntityClass *__cdecl CDOTA_Ability_Holdout_CullingBlade::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Holdout_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_CullingBladeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Holdout_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_CullingBladeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Holdout_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_CullingBladeClass);
    CDOTA_Ability_Holdout_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_CullingBladeClass._vptr_CEntityClass = off_431D190;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Holdout_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_CullingBladeClass);
    __cxa_atexit(
      CDOTA_Ability_Holdout_CullingBlade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Holdout_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_CullingBladeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Holdout_CullingBladeClass != 0 )
    return &CDOTA_Ability_Holdout_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_CullingBladeClass;
  if ( `guard variable for'CDOTA_Ability_Holdout_CullingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_CullingBladeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Holdout_CullingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_CullingBladeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_Ability_Axe_CullingBlade::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Holdout_CullingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_CullingBladeClassInfo,
      "CDOTA_Ability_Holdout_CullingBlade",
      "holdout_culling_blade",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Holdout_CullingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_CullingBladeClassInfo);
  }
  CDOTA_Ability_Holdout_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_CullingBladeClass.m_pClassInfo = &CDOTA_Ability_Holdout_CullingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_CullingBladeClassInfo;
  CDOTA_Ability_Holdout_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_CullingBladeClass.m_pBaseClassInfo = CDOTA_Ability_Holdout_CullingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_CullingBladeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Holdout_CullingBladeClass = &CDOTA_Ability_Holdout_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_CullingBladeClass;
  CDOTA_Ability_Holdout_CullingBlade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Holdout_CullingBladeClassInfo.m_pClass = &CDOTA_Ability_Holdout_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_CullingBladeClass;
  CDOTA_Ability_Holdout_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_CullingBladeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Holdout_CullingBladeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Holdout_CullingBlade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Holdout_CullingBladeClass;
}


// CDOTA_Ability_Holdout_CullingBlade::YouForgotToImplementOrDeclareServerClass  (line 1001, @0x00000000029b4280, libserver.so)
int __fastcall CDOTA_Ability_Holdout_CullingBlade::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Holdout_CullingBlade *const this)
{
  return 0;
}


// CDOTA_Ability_Holdout_CullingBlade::GetServerClass  (line 1001, @0x00000000029c95f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Holdout_CullingBlade::GetServerClass(
        CDOTA_Ability_Holdout_CullingBlade *const this)
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


// CDOTA_Ability_Holdout_CullingBlade::OnSpellStart  (line 1011, @0x00000000029b9190, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetSerialNumber, Set
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetCursorPosition, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_ProjectileManager::ProjectileDodge, CDOTA_BaseNPC::UnitEmitSound, CDOTA_BaseNPC::StartGesture, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_holdout_culling_blade", "Hero_Axe.Battle_Hunger"
void __fastcall CDOTA_Ability_Holdout_CullingBlade::OnSpellStart(CDOTA_Ability_Holdout_CullingBlade *const this)
{
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v3; // rax
  CDOTA_BaseNPC *v4; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v6; // cx
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  EHANDLE hTarget; // [rsp+0h] [rbp-80h] BYREF
  Vector CursorPosition; // [rsp+10h] [rbp-70h]
  Vector v11; // [rsp+20h] [rbp-60h]
  Vector v12; // [rsp+30h] [rbp-50h]
  KeyValues kv; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_holdout_culling_blade");
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  KeyValues::SetFloat(&kv, "x", CursorPosition.z);
  v11 = CDOTABaseAbility::GetCursorPosition(this);
  KeyValues::SetFloat(&kv, "y", v11.z);
  v12 = CDOTABaseAbility::GetCursorPosition(this);
  KeyValues::SetFloat(&kv, "z", v12.z);
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_holdout_culling_blade", &kv, 0);
  v4 = CDOTABaseAbility::GetCaster(this);
  hTarget.m_Index = -1;
  if ( v4 != 0 )
  {
    m_pEntity = v4->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v6 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      hTarget.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
    }
  }
  CDOTA_ProjectileManager::ProjectileDodge(&g_DOTAProjectileManager, &hTarget, 0);
  v7 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v7, "Hero_Axe.Battle_Hunger", 0.0, 0, 0);
  v8 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v8, 1513, 0.30000001, 0.0, 0, 0, 1.0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Holdout_CullingBlade::DoChop  (line 1031, @0x00000000029efbd0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsRealHero, IsValid, LookupEntity, SpeakConcept, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CResponseCriteriaSet::CResponseCriteriaSet, CResponseCriteriaSet::AppendCriteria, CDOTA_Speech::SpeakConcept, CDOTA_BaseNPC::HasScepter, CBaseEntity::GetHealth, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat (29 total)
// callers: CDOTA_Modifier_HoldoutCullingBlade::UpdateVerticalMotion
// strings: "leap_radius", "berserker_targets", "kill_threshold", "kill_threshold_scepter", "speed_duration_scepter", "speed_aoe" (14 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Holdout_CullingBlade::DoChop(CDOTA_Ability_Holdout_CullingBlade *const this)
{
  __m128i v2; // xmm5
  float v3; // r13d
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v7; // rax
  float v8; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  CHandle<CBaseEntity> *v10; // rdx
  uint32 m_Index; // eax
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  int LevelSpecialValue; // r12d
  int v16; // ebx
  int v17; // r13d
  CDOTA_BaseNPC *v18; // rax
  int v19; // eax
  CDOTA_BaseNPC *v20; // r12
  CDOTA_BaseNPC *v21; // rax
  const Vector *v22; // rbx
  CDOTA_BaseNPC *v23; // rax
  CDOTA_BaseNPC *v24; // rax
  float v25; // xmm1_4
  __int64 v26; // r14
  int v27; // r13d
  CHandle<CBaseEntity> *v28; // rdx
  uint32 v29; // eax
  __int16 v30; // cx
  CEntityIdentity *v31; // rdx
  CEntityIdentity *v32; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *v34; // rax
  CDOTA_BaseNPC *v35; // rax
  int v36; // ebx
  CDOTA_ParticleManager *v37; // rax
  CDOTA_ParticleManager *v38; // rax
  CDOTA_ParticleManager *v39; // rax
  CDOTA_ParticleManager *v40; // rax
  CDOTA_BaseNPC *v41; // rax
  CDOTA_BaseNPC *v42; // rax
  int v43; // r12d
  CDOTA_BaseNPC *v44; // r13
  CDOTA_ParticleManager *v45; // rax
  CDOTA_ParticleManager *v46; // rax
  CDOTA_ParticleManager *v47; // rax
  CDOTA_BaseNPC *v48; // rax
  CDOTA_BaseNPC *v49; // rax
  CDOTA_BaseNPC_Hero *v50; // rdi
  CDOTA_BaseNPC_Hero *v51; // rsi
  CDOTA_BaseNPC *v52; // rax
  __m128i v53; // xmm4
  float v54; // r13d
  CDOTA_BaseNPC *v55; // rax
  int AbilityParticleEffect; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  CBaseEntity *pEnt; // [rsp+38h] [rbp-108h]
  __int64 v59; // [rsp+40h] [rbp-100h]
  int j; // [rsp+50h] [rbp-F0h]
  float flRadius; // [rsp+54h] [rbp-ECh]
  const Vector *v62; // [rsp+58h] [rbp-E8h]
  double v63; // [rsp+60h] [rbp-E0h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > leap_entities; // [rsp+70h] [rbp-D0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+90h] [rbp-B0h] BYREF
  CResponseCriteriaSet criteria; // [rsp+B0h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+F0h] [rbp-50h] BYREF
  unsigned __int64 v68; // [rsp+108h] [rbp-38h]

  v68 = __readfsqword(0x28u);
  leap_entities.m_Size = 0;
  leap_entities.m_Memory.m_pMemory = 0;
  *v2.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "leap_radius", -1, 0);
  leap_entities.m_Memory.m_nAllocationCount = 0;
  leap_entities.m_Memory.m_nGrowSize = 0;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, Caster, v3, &leap_entities, 2, 3, 16, 0, 0);
  CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
  CResponseCriteriaSet::AppendCriteria(&criteria, "berserker_targets", 1.0, v8);
  m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
  if ( m_pSpeech != 0 )
    CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 4, 0, 0, 0, 0);
  if ( leap_entities.m_Size > 0 )
  {
    v59 = 0;
    j = 0;
    do
    {
      v10 = &leap_entities.m_Memory.m_pMemory[v59];
      m_Index = leap_entities.m_Memory.m_pMemory[v59].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v12 = v10->m_Index;
        v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Index) >> 9) & 0x3F];
        if ( v13 != 0 )
        {
          v14 = &v13[v12 & 0x1FF];
          if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
          {
            pEnt = v14->m_pInstance;
            if ( v14->m_pInstance != 0
              && BYTE3(v14->m_pInstance[7]._vptr_IHandleEntity) != 0
              && LOBYTE(pEnt[4].m_pfnMoveDone.__pfn) == 0
              && (BYTE1(pEnt[3].m_vecVelocity.m_Value.x) & 1) == 0 )
            {
              LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "kill_threshold", -1, 0);
              v16 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "kill_threshold_scepter", -1, 0);
              v17 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
              v18 = CDOTABaseAbility::GetCaster(this);
              if ( !CDOTA_BaseNPC::HasScepter(v18) )
                v16 = LevelSpecialValue;
              if ( CBaseEntity::GetHealth(pEnt) >= v16 )
              {
                v52 = CDOTABaseAbility::GetCaster(this);
                CDOTA_BaseNPC::UnitEmitSound(v52, "Hero_Axe.Holdout.Culling_Blade_Fail", 0.0, 0, 0);
                *v53.m128i_i32 = v17;
                v54 = COERCE_FLOAT(_mm_cvtsi128_si32(v53));
                v55 = CDOTABaseAbility::GetCaster(this);
                ApplyDamage(v55, pEnt, this, v54, 2, 0);
                AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(
                                          this,
                                          "particles/units/heroes/hero_axe/axe_culling_blade.vpcf",
                                          1,
                                          pEnt,
                                          0);
                ParticleManager = GetParticleManager();
                CDOTA_ParticleManager::ReleaseParticleIndex(ParticleManager, AbilityParticleEffect);
              }
              else
              {
                CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "speed_duration", -1, 0);
                CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "speed_duration_scepter", -1, 0);
                v19 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed_aoe", -1, 0);
                entities.m_Size = 0;
                entities.m_Memory.m_pMemory = 0;
                entities.m_Memory.m_nAllocationCount = 0;
                entities.m_Memory.m_nGrowSize = 0;
                flRadius = v19;
                v20 = CDOTABaseAbility::GetCaster(this);
                v21 = CDOTABaseAbility::GetCaster(this);
                v22 = CBaseEntity::GetAbsOrigin(v21);
                v23 = CDOTABaseAbility::GetCaster(this);
                FindUnitsInRadius(v23->m_iTeamNum.m_Value, v22, v20, flRadius, &entities, 1, 3, 0, 0, 0);
                KeyValues::KeyValues(&kv, "modifier_axe_culling_blade_boost");
                v24 = CDOTABaseAbility::GetCaster(this);
                CDOTA_BaseNPC::HasScepter(v24);
                KeyValues::SetFloat(&kv, "duration", v25);
                if ( entities.m_Size > 0 )
                {
                  v26 = 0;
                  v27 = 0;
                  do
                  {
                    v28 = &entities.m_Memory.m_pMemory[v26];
                    v29 = entities.m_Memory.m_pMemory[v26].m_Index;
                    if ( v29 + 2 > 1 )
                    {
                      v30 = v28->m_Index;
                      v31 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v28->m_Index) >> 9) & 0x3F];
                      if ( v31 != 0 )
                      {
                        v32 = &v31[v30 & 0x1FF];
                        if ( v32 != 0 && v29 == v32->m_EHandle.m_Index )
                        {
                          m_pInstance = v32->m_pInstance;
                          if ( v32->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                          {
                            v34 = CDOTABaseAbility::GetCaster(this);
                            CDOTA_BaseNPC::AddNewModifier(
                              m_pInstance,
                              v34,
                              this,
                              "modifier_axe_culling_blade_boost",
                              &kv,
                              0);
                            v35 = CDOTABaseAbility::GetCaster(this);
                            v36 = CDOTABaseAbility::CreateAbilityParticleEffect(
                                    this,
                                    "particles/units/heroes/hero_axe/axe_culling_blade_boost.vpcf",
                                    2,
                                    v35,
                                    0);
                            v62 = CBaseEntity::GetAbsOrigin(m_pInstance);
                            v37 = GetParticleManager();
                            CDOTA_ParticleManager::SetParticleControlEnt(
                              v37,
                              v36,
                              0,
                              m_pInstance,
                              5,
                              "attach_hitloc",
                              *v62,
                              1);
                            v38 = GetParticleManager();
                            CDOTA_ParticleManager::SetParticleControlEnt(
                              v38,
                              v36,
                              1,
                              m_pInstance,
                              1,
                              0,
                              vec3_invalid,
                              1);
                            *&v63 = flRadius;
                            *(&v63 + 1) = flRadius;
                            v39 = GetParticleManager();
                            CDOTA_ParticleManager::SetParticleControl(v39, v36, 2, v63, flRadius);
                            v40 = GetParticleManager();
                            CDOTA_ParticleManager::ReleaseParticleIndex(v40, v36);
                          }
                        }
                      }
                    }
                    ++v27;
                    ++v26;
                  }
                  while ( entities.m_Size > v27 );
                }
                CDOTA_ModifierManager::RemoveModifierByName(&pEnt[4], "modifier_dazzle_shallow_grave");
                v41 = CDOTABaseAbility::GetCaster(this);
                CDOTA_BaseNPC::Kill(pEnt, this, v41, 0.0, 0);
                if ( (pEnt[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 )
                  CDOTABaseAbility::EndCooldown(this);
                v42 = CDOTABaseAbility::GetCaster(this);
                v43 = CDOTABaseAbility::CreateAbilityParticleEffect(
                        this,
                        "particles/units/heroes/hero_axe/axe_culling_blade_kill.vpcf",
                        2,
                        v42,
                        0);
                v44 = CDOTABaseAbility::GetCaster(this);
                v45 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(v45, v43, 3, v44, 1, 0, vec3_invalid, 1);
                v46 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControlEnt(v46, v43, 4, pEnt, 1, 0, vec3_invalid, 1);
                v47 = GetParticleManager();
                CDOTA_ParticleManager::ReleaseParticleIndex(v47, v43);
                v48 = CDOTABaseAbility::GetCaster(this);
                CDOTA_BaseNPC::UnitEmitSound(v48, "Hero_Axe.Holdout.Culling_Blade_Success", 0.0, 0, 0);
                if ( (pEnt[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 && LOBYTE(pEnt[4].m_pfnMoveDone.__delta) == 0 )
                {
                  v49 = CDOTABaseAbility::GetCaster(this);
                  if ( v49 != 0 && (v49->m_iUnitType & 1) != 0 )
                    v50 = v49;
                  else
                    v50 = 0;
                  v51 = 0;
                  if ( (pEnt[2].m_hEffectEntity.m_Value.m_Index & 1) != 0 )
                    v51 = pEnt;
                  EconEntity_OnOwnerKillEaterEvent(
                    v50,
                    v51,
                    kill_eater_event_t::kKillEaterEventType_Axe_Culls,
                    1,
                    INVALID_ITEM_DEF_INDEX);
                }
                KeyValues::~KeyValues(&kv);
                CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
              }
            }
          }
        }
      }
      ++j;
      ++v59;
    }
    while ( leap_entities.m_Size > j );
  }
  CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&leap_entities);
}


// CDOTA_Modifier_HoldoutCullingBlade::~CDOTA_Modifier_HoldoutCullingBlade  (line 1135, @0x0000000002a12a10, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_HoldoutCullingBlade::~CDOTA_Modifier_HoldoutCullingBlade(
        CDOTA_Modifier_HoldoutCullingBlade *const this)
{
  this->_vptr_CDOTA_Buff = &off_431DCD0;
  this->_vptr_CHorizontalMotionController = &off_431DFD8;
  this->_vptr_CVerticalMotionController = &off_431E018;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_HoldoutCullingBlade::~CDOTA_Modifier_HoldoutCullingBlade  (line 1135, @0x0000000002a12a40, libserver.so)  // inlines: ~CDOTA_Modifier_HoldoutCullingBlade
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_HoldoutCullingBlade::~CDOTA_Modifier_HoldoutCullingBlade(
        CDOTA_Modifier_HoldoutCullingBlade *const this)
{
  this->_vptr_CDOTA_Buff = &off_431DCD0;
  this->_vptr_CHorizontalMotionController = &off_431DFD8;
  this->_vptr_CVerticalMotionController = &off_431E018;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_HoldoutCullingBlade::IsHidden  (line 1145, @0x0000000002a07710, libserver.so)
bool __fastcall CDOTA_Modifier_HoldoutCullingBlade::IsHidden(CDOTA_Modifier_HoldoutCullingBlade *const this)
{
  return 1;
}


// CDOTA_Modifier_HoldoutCullingBlade::IsPurgable  (line 1146, @0x0000000002a07720, libserver.so)
bool __fastcall CDOTA_Modifier_HoldoutCullingBlade::IsPurgable(CDOTA_Modifier_HoldoutCullingBlade *const this)
{
  return 0;
}


// CDOTA_Modifier_HoldoutCullingBlade::IsHorizontalMotionValidToApply  (line 1157, @0x0000000002a07730, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_HoldoutCullingBlade::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_HoldoutCullingBlade *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_HoldoutCullingBlade::IsVerticalMotionValidToApply  (line 1158, @0x0000000002a07760, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_HoldoutCullingBlade::IsVerticalMotionValidToApply(
        CDOTA_Modifier_HoldoutCullingBlade *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_HoldoutCullingBlade::IsMotionController  (line 1160, @0x0000000002a07790, libserver.so)
bool __fastcall CDOTA_Modifier_HoldoutCullingBlade::IsMotionController(CDOTA_Modifier_HoldoutCullingBlade *const this)
{
  return 1;
}


// CDOTA_Modifier_HoldoutCullingBlade::GetEffectName  (line 1162, @0x0000000002a077a0, libserver.so)
// strings: "particles/units/heroes/hero_axe/axe_cullingblade_sprint.vpcf"
const char *__fastcall CDOTA_Modifier_HoldoutCullingBlade::GetEffectName(
        CDOTA_Modifier_HoldoutCullingBlade *const this)
{
  return "particles/units/heroes/hero_axe/axe_cullingblade_sprint.vpcf";
}


// CDOTA_Modifier_HoldoutCullingBlade::OnCreated  (line 1186, @0x00000000029e1ca0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, FastSqrt, GetLevelSpecialValueFor<float>, Length2D, NormalizeInPlace, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator-, operator=
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, GetPositionOnGround, KeyValues::GetFloat, VectorAngles, CBaseEntity::SetAbsAngles, VectorNormalize, CDOTALocomotor::ApplyHorizontalMotionController, CDOTA_Buff::Destroy (15 total)
// strings: "leap_distance", "leap_acceleration", "leap_radius"
void __fastcall CDOTA_Modifier_HoldoutCullingBlade::OnCreated(
        CDOTA_Modifier_HoldoutCullingBlade *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_BaseNPC *v9; // rax
  const Vector *AbsOrigin; // rax
  float v11; // xmm1_4
  CDOTA_BaseNPC *v12; // rax
  vec_t v13; // xmm2_4
  vec_t v14; // xmm0_4
  CDOTA_BaseNPC *v15; // rax
  CDOTALocomotor *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  CDOTALocomotor *v18; // rax
  float x; // xmm0_4
  float y; // xmm1_4
  CDOTA_BaseNPC *v21; // rax
  vec_t v22; // xmm1_4
  __int64 v23; // xmm0_8
  CDOTA_BaseNPC *v24; // rax
  float v25; // xmm0_4
  float v26; // xmm2_4
  float flPounceDist; // [rsp+0h] [rbp-60h]
  Vector vTargetPosition; // [rsp+10h] [rbp-50h] BYREF
  QAngle faceTargetAngles; // [rsp+20h] [rbp-40h] BYREF
  Vector vEdgePos; // [rsp+30h] [rbp-30h] BYREF
  Vector PositionOnGround; // 0:kr00_12.12

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->leap_distance, "leap_distance");
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
    this->leap_speed = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "leap_speed", -1, 0);
  else
    this->leap_speed = 0.0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
    this->leap_acceleration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "leap_acceleration", -1, 0);
  else
    this->leap_acceleration = 0.0;
  v7 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v7, &this->leap_radius, "leap_radius");
  Parent = CDOTA_Buff::GetParent(this);
  v9 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
  PositionOnGround = GetPositionOnGround(AbsOrigin, Parent);
  *&vEdgePos.x = *&PositionOnGround.x;
  this->m_vStartPosition.z = PositionOnGround.z;
  vEdgePos.z = PositionOnGround.z;
  this->m_vStartPosition.x = PositionOnGround.x;
  this->m_vStartPosition.y = vEdgePos.y;
  vTargetPosition.x = KeyValues::GetFloat(pKV, "x", PositionOnGround.z);
  vTargetPosition.z = 0.0;
  vTargetPosition.y = KeyValues::GetFloat(pKV, "y", v11);
  VectorAngles(&vTargetPosition, &faceTargetAngles);
  v12 = CDOTA_Buff::GetParent(this);
  CBaseEntity::SetAbsAngles(v12, &faceTargetAngles);
  v13 = vTargetPosition.x - this->m_vStartPosition.x;
  v14 = vTargetPosition.z - this->m_vStartPosition.z;
  this->m_vTargetHorizontalDirection.y = vTargetPosition.y - this->m_vStartPosition.y;
  this->m_vTargetHorizontalDirection.x = v13;
  this->m_vTargetHorizontalDirection.z = v14;
  VectorNormalize(&this->m_vTargetHorizontalDirection);
  v15 = CDOTA_Buff::GetParent(this);
  v16 = (*(v15->_vptr_IHandleEntity + 376))(v15);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v16, &this->CHorizontalMotionController, 0)
    && (v17 = CDOTA_Buff::GetParent(this),
        v18 = (*(v17->_vptr_IHandleEntity + 376))(v17),
        CDOTALocomotor::ApplyVerticalMotionController(v18, &this->CVerticalMotionController, 0)) )
  {
    x = this->m_vStartPosition.x;
    this->m_bInterrupted = 0;
    y = this->m_vStartPosition.y;
    this->m_flCurrentTimeHoriz = 0.0;
    this->m_flCurrentTimeVert = 0.0;
    flPounceDist = fsqrt(
                     ((x - vTargetPosition.x) * (x - vTargetPosition.x))
                   + ((y - vTargetPosition.y) * (y - vTargetPosition.y)));
    v21 = CDOTA_Buff::GetParent(this);
    CGridNavBase::ClampToWorldEdge(&g_GridNav, v21, vTargetPosition);
    vEdgePos.z = v22;
    *&vEdgePos.x = v23;
    v24 = CDOTA_Buff::GetParent(this);
    v25 = GetGroundHeight(&vEdgePos, v24) - this->m_vStartPosition.z;
    v26 = flPounceDist / this->leap_speed;
    this->m_flTotalTime = v26;
    this->m_flInitialVelocity = (v25 / v26) + ((0.5 * this->leap_acceleration) * v26);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_HoldoutCullingBlade::UpdateHorizontalMotion  (line 1236, @0x00000000029b9530, libserver.so)  // inlines: VectorAdd, VectorMultiply, operator*, operator+
// calls: CBaseEntity::SetAbsOrigin
void __fastcall CDOTA_Modifier_HoldoutCullingBlade::UpdateHorizontalMotion(
        CDOTA_Modifier_HoldoutCullingBlade *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  float v4; // xmm0_4
  float m_flTotalTime; // xmm1_4
  float leap_speed; // xmm1_4
  vec_t v7; // xmm3_4
  vec_t v8; // xmm2_4
  vec_t v9; // xmm1_4
  Vector vNewLocation; // [rsp+0h] [rbp-10h] BYREF

  v4 = a3 + this->m_flCurrentTimeHoriz;
  m_flTotalTime = this->m_flTotalTime;
  this->m_flCurrentTimeHoriz = v4;
  if ( v4 > m_flTotalTime )
  {
    this->m_flCurrentTimeHoriz = m_flTotalTime;
    v4 = m_flTotalTime;
  }
  leap_speed = this->leap_speed;
  v7 = ((this->m_vTargetHorizontalDirection.y * leap_speed) * v4) + this->m_vStartPosition.y;
  v8 = ((this->m_vTargetHorizontalDirection.z * leap_speed) * v4) + this->m_vStartPosition.z;
  v9 = ((leap_speed * this->m_vTargetHorizontalDirection.x) * v4) + this->m_vStartPosition.x;
  vNewLocation.y = v7;
  vNewLocation.z = v8;
  vNewLocation.x = v9;
  CBaseEntity::SetAbsOrigin(me, &vNewLocation);
}


// CDOTA_Modifier_HoldoutCullingBlade::UpdateVerticalMotion  (line 1253, @0x00000000029f04b0, libserver.so)  // inlines: Square<float>
// calls: CBaseEntity::GetAbsOrigin, CBaseEntity::SetAbsOrigin, CDOTA_Buff::GetAbility, CDOTA_Ability_Holdout_CullingBlade::DoChop, CDOTA_Buff::Destroy, CDOTA_Buff::GetCaster, CGridNav::DestroyTreesAroundPoint, CDOTA_Buff::GetParent, GetGroundHeight
void __fastcall CDOTA_Modifier_HoldoutCullingBlade::UpdateVerticalMotion(
        CDOTA_Modifier_HoldoutCullingBlade *const this,
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
  CDOTA_Ability_Holdout_CullingBlade *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v17; // r12d
  CDOTA_BaseNPC *v18; // rax
  float v19; // xmm3_4
  const Vector *v20; // rax
  float v21; // xmm1_4
  float leap_acceleration; // xmm3_4
  float m_flInitialVelocity; // xmm2_4
  CDOTA_BaseNPC *Parent; // rax
  float GroundHeight; // xmm0_4
  CDOTA_BaseNPC *v26; // rax
  unsigned int v27; // r14d
  CDOTA_BaseNPC *v28; // rax
  float v29; // xmm3_4
  float leap_radius; // [rsp+Ch] [rbp-34h]
  float v31; // [rsp+Ch] [rbp-34h]
  Vector vNewPos; // [rsp+10h] [rbp-30h] BYREF
  Vector v33; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v34; // 0:xmm0_8.8,8:xmm1_4.4

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
    v13 = -0.5 * this->leap_acceleration;
    v14 = m_flCurrentTimeVert * this->m_flInitialVelocity;
    *&vNewPos.x = *&AbsOrigin->x;
    vNewPos.z = (((v13 * v12) + v14) / 3.0) + this->m_vStartPosition.z;
    CBaseEntity::SetAbsOrigin(me, &vNewPos);
    if ( v9 != 0 )
    {
      Ability = CDOTA_Buff::GetAbility(this);
      if ( Ability != 0 )
        CDOTA_Ability_Holdout_CullingBlade::DoChop(Ability);
      CDOTA_Buff::Destroy(this, 0, 0, 0);
      Caster = CDOTA_Buff::GetCaster(this);
      v17 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
      leap_radius = this->leap_radius;
      v18 = CDOTA_Buff::GetCaster(this);
      v33 = *CBaseEntity::GetAbsOrigin(v18);
      CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v17, v33, leap_radius, v19);
    }
  }
  else
  {
    v20 = CBaseEntity::GetAbsOrigin(me);
    v21 = this->m_flCurrentTimeVert;
    leap_acceleration = this->leap_acceleration;
    m_flInitialVelocity = this->m_flInitialVelocity;
    *&vNewPos.x = *&v20->x;
    vNewPos.z = ((((-0.5 * leap_acceleration) * (v21 * v21)) + this->m_vStartPosition.z) + (v21 * m_flInitialVelocity))
              / 3.0;
    if ( (m_flInitialVelocity - (v21 * leap_acceleration)) < 0.0 )
    {
      Parent = CDOTA_Buff::GetParent(this);
      GroundHeight = GetGroundHeight(&vNewPos, Parent);
      if ( GroundHeight >= vNewPos.z )
      {
        vNewPos.z = GroundHeight;
        v26 = CDOTA_Buff::GetCaster(this);
        v27 = (*(v26->_vptr_IHandleEntity + 414))(v26);
        v31 = this->leap_radius;
        v28 = CDOTA_Buff::GetCaster(this);
        v34 = *CBaseEntity::GetAbsOrigin(v28);
        CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v27, v34, v31, v29);
        CDOTA_Buff::Destroy(this, 0, 0, 0);
      }
    }
    CBaseEntity::SetAbsOrigin(me, &vNewPos);
  }
}


// CDOTA_Modifier_HoldoutCullingBlade::OnHorizontalMotionInterrupted  (line 1309, @0x00000000029b4290, libserver.so)
void __fastcall CDOTA_Modifier_HoldoutCullingBlade::OnHorizontalMotionInterrupted(
        CDOTA_Modifier_HoldoutCullingBlade *const this)
{
  this->m_bInterrupted = 1;
}


// CDOTA_Modifier_HoldoutCullingBlade::OnVerticalMotionInterrupted  (line 1318, @0x00000000029b7bd0, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_HoldoutCullingBlade::OnVerticalMotionInterrupted(
        CDOTA_Modifier_HoldoutCullingBlade *const this)
{
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_HoldoutCullingBlade::OnDestroy  (line 1327, @0x00000000029b9af0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController, CDOTALocomotor::RemoveVerticalMotionController
void __fastcall CDOTA_Modifier_HoldoutCullingBlade::OnDestroy(CDOTA_Modifier_HoldoutCullingBlade *const this)
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


// CDOTA_Modifier_HoldoutCullingBlade::CheckState  (line 1337, @0x00000000029b42b0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_HoldoutCullingBlade::CheckState(
        CDOTA_Modifier_HoldoutCullingBlade *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 2uLL;
  buffState->m_nDisabledStateMask &= ~2uLL;
}


