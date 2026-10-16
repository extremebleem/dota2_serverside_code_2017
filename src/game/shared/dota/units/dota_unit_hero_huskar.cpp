// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_huskar.cpp:31
class CDOTA_Unit_Hero_Huskar : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Huskar(CDOTA_Unit_Hero_Huskar &);
	CDOTA_Unit_Hero_Huskar(CDOTA_Unit_Hero_Huskar &);
	CDOTA_Unit_Hero_Huskar();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDOTA_Unit_Hero_Huskar();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_huskar.cpp:40
class C_CDOTA_Unit_Hero_Huskar_MapInstall {
	C_CDOTA_Unit_Hero_Huskar_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_huskar.cpp:53
class CDOTA_Ability_Huskar_Inner_Vitality : public CDOTABaseAbility {
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
	CDOTA_Ability_Huskar_Inner_Vitality(CDOTA_Ability_Huskar_Inner_Vitality &);
	CDOTA_Ability_Huskar_Inner_Vitality(CDOTA_Ability_Huskar_Inner_Vitality &);
	CDOTA_Ability_Huskar_Inner_Vitality();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Huskar_Inner_Vitality();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_huskar.cpp:86
class CDOTA_Modifier_Huskar_Inner_Vitality : public CDOTA_Buff {
public:

private:

	int heal;  // +0xba8
	float attrib_bonus;  // +0xbac
	float hurt_attrib_bonus;  // +0xbb0
	float hurt_percent;  // +0xbb4
	CDOTA_Modifier_Huskar_Inner_Vitality();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	virtual ~CDOTA_Modifier_Huskar_Inner_Vitality();

	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_huskar.cpp:169
class CDOTA_Orb_Huskar_Burning_Spear : public CDOTA_Orb {
public:

private:

	float duration;  // +0x18
	int health_cost;  // +0x1c
	CDOTA_Orb_Huskar_Burning_Spear(CDOTA_AttackRecord *, KeyValues *, CDOTA_BaseNPC *, CDOTABaseAbility *);
	virtual const char * GetProjectileName();
	virtual void OnOrbFire(const CModifierParams &);
	virtual void OnOrbImpact(const CModifierParams &);
	virtual ~CDOTA_Orb_Huskar_Burning_Spear();

	// vtable[3] GetProjectileName
	// vtable[6] OnOrbFire
	// vtable[8] OnOrbImpact
	// sizeof = 32
};

// src/game/shared/dota/units/dota_unit_hero_huskar.cpp:219
class CDOTA_Modifier_Huskar_Burning_Spear_Self : public CDOTA_Buff {
public:

private:

	int health_cost;  // +0xba8

	CDOTA_Modifier_Huskar_Burning_Spear_Self();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttack(const CModifierParams &);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	ModifierVariant_t OnAttackFail(const CModifierParams &);
	virtual ~CDOTA_Modifier_Huskar_Burning_Spear_Self();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_huskar.cpp:340
class CDOTA_Ability_Huskar_Burning_Spear : public CDOTABaseAbility {
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
	CDOTA_Ability_Huskar_Burning_Spear(CDOTA_Ability_Huskar_Burning_Spear &);
	CDOTA_Ability_Huskar_Burning_Spear(CDOTA_Ability_Huskar_Burning_Spear &);
	CDOTA_Ability_Huskar_Burning_Spear();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual bool ProcsMagicStick();
	virtual bool IsStealable();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Huskar_Burning_Spear();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[239] ProcsMagicStick
	// vtable[305] IsStealable
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_huskar.cpp:372
class CDOTA_Modifier_Huskar_Burning_Spear_Counter : public CDOTA_Buff {
public:

private:

	float duration;  // +0xba8
	CDOTA_Modifier_Huskar_Burning_Spear_Counter();
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual int StatusEffectPriority();
	virtual bool IsHidden();
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_Huskar_Burning_Spear_Counter();

	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[71] StatusEffectPriority
	// vtable[11] IsHidden
	// vtable[7] GetAttributes
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_huskar.cpp:433
class CDOTA_Modifier_Huskar_Burning_Spear_Debuff : public CDOTA_Buff {
public:

	CDOTA_Modifier_Huskar_Burning_Spear_Debuff();
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Huskar_Burning_Spear_Debuff();

	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[56] OnIntervalThink
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_huskar.cpp:473
class CDOTA_Ability_Huskar_Berserkers_Blood : public CDOTABaseAbility {
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
	CDOTA_Ability_Huskar_Berserkers_Blood(CDOTA_Ability_Huskar_Berserkers_Blood &);
	CDOTA_Ability_Huskar_Berserkers_Blood(CDOTA_Ability_Huskar_Berserkers_Blood &);
	CDOTA_Ability_Huskar_Berserkers_Blood();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Huskar_Berserkers_Blood();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_huskar.cpp:486
class CDOTA_Modifier_Huskar_Berserkers_Blood : public CDOTA_Buff {
public:

private:

	int maximum_resistance;  // +0xba8
	int maximum_attack_speed;  // +0xbac
	int hp_threshold_max;  // +0xbb0
	CDOTA_Modifier_Huskar_Berserkers_Blood();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	ModifierVariant_t GetModifierMagicalResistanceBonus(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual void DeclareFunctions();
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	ModifierVariant_t ModelScale(const CModifierParams &);
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Huskar_Berserkers_Blood();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[56] OnIntervalThink
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_huskar.cpp:636
class CDOTA_Ability_Huskar_Life_Break : public CDOTABaseAbility, public CHorizontalMotionController {
public:

private:

	EHANDLE m_hTarget;  // +0x3a8
	bool m_bInterrupted;  // +0x3ac
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
	CDOTA_Ability_Huskar_Life_Break(CDOTA_Ability_Huskar_Life_Break &);
	CDOTA_Ability_Huskar_Life_Break(CDOTA_Ability_Huskar_Life_Break &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Ability_Huskar_Life_Break();
	virtual float GetCooldown(int);
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual void OnProjectileThink(const Vector &);
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Huskar_Life_Break();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[242] GetCooldown
	// vtable[226] GetCastRange
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[291] OnProjectileThink
	// vtable[333] UpdateHorizontalMotion
	// vtable[334] OnHorizontalMotionInterrupted
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// sizeof = 944
};

// src/game/shared/dota/units/dota_unit_hero_huskar.cpp:683
class C_CDOTA_Ability_Huskar_Life_Break_MapInstall {
	C_CDOTA_Ability_Huskar_Life_Break_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_huskar.cpp:894
class CDOTA_Modifier_Huskar_Life_Break_Charge : public CDOTA_Modifier_MagicImmune {
public:

	CDOTA_Modifier_Huskar_Life_Break_Charge();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void CheckState(CDOTABuffState &);
	virtual void DeclareFunctions();
	virtual void OnDestroy();
	ModifierVariant_t OnStateChanged(const CModifierParams &);
	virtual ~CDOTA_Modifier_Huskar_Life_Break_Charge();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[5] CheckState
	// vtable[65] DeclareFunctions
	// vtable[60] OnDestroy
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_huskar.cpp:954
class CDOTA_Modifier_Huskar_Life_Break : public CDOTA_Modifier_MoveSpeed_Percentage {
public:

	CDOTA_Modifier_Huskar_Life_Break(CDOTA_Modifier_Huskar_Life_Break &);
	CDOTA_Modifier_Huskar_Life_Break(const CDOTA_Modifier_Huskar_Life_Break &);
	CDOTA_Modifier_Huskar_Life_Break();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Huskar_Life_Break();

	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Huskar::~CDOTA_Unit_Hero_Huskar  (line 31, @0x0000000002ba2c40, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Huskar::~CDOTA_Unit_Hero_Huskar(CDOTA_Unit_Hero_Huskar *const this)
{
  this->_vptr_IHandleEntity = &off_44EC130;
  this->_vptr_INextBotEventResponder = &off_44ED110;
  this->_vptr_CObstructionObject = &off_44ED440;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Huskar::~CDOTA_Unit_Hero_Huskar  (line 31, @0x0000000002ba2c80, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Huskar
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Huskar::~CDOTA_Unit_Hero_Huskar(CDOTA_Unit_Hero_Huskar *const this)
{
  this->_vptr_IHandleEntity = &off_44EC130;
  this->_vptr_INextBotEventResponder = &off_44ED110;
  this->_vptr_CObstructionObject = &off_44ED440;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Huskar::Schema_DynamicBinding  (line 33, @0x0000000002b90a90, libserver.so)
// globals: CDOTA_Unit_Hero_Huskar::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Huskar::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Huskar *const this)
{
  return CDOTA_Unit_Hero_Huskar::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Huskar::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 33, @0x0000000002b90ac0, libserver.so)
// globals: CDOTA_Unit_Hero_Huskar::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Huskar::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Huskar::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Huskar::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Huskar::CEntityInstanceEntityClass::DestructInstance  (line 33, @0x0000000002b90ad0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Huskar>
void __fastcall CDOTA_Unit_Hero_Huskar::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Huskar::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Huskar::CEntityInstanceEntityClass::FreeInstance  (line 33, @0x0000000002b90af0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Huskar::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Huskar::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Huskar::CEntityInstanceEntityClass::CanAllocate  (line 33, @0x0000000002b90b10, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Huskar::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Huskar::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Huskar::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 33, @0x0000000002b90b20, libserver.so)
// globals: CDOTA_Unit_Hero_Huskar::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Huskar::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Huskar::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Huskar::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Huskar::CEntityInstanceEntityClass::AllocateInstance  (line 33, @0x0000000002b97ea0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Huskar::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Huskar::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Huskar::CEntityInstanceEntityClass::ConstructInstance  (line 33, @0x0000000002b9c700, libserver.so)  // inlines: CDOTA_Unit_Hero_Huskar, Construct<CDOTA_Unit_Hero_Huskar>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Huskar::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Huskar::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_44EC130;
    *(p + 236) = &off_44ED110;
    *(p + 257) = &off_44ED440;
  }
  return p;
}


// CDOTA_Unit_Hero_Huskar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 33, @0x0000000002babf50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Huskar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Huskar::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Huskar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 33, @0x0000000002bac5b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Huskar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Huskar::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Huskar::GetEntityClassInternal  (line 33, @0x0000000002bce570, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "npc_dota_hero_huskar", "CDOTA_Unit_Hero_Huskar"
// globals: `guard variable for'CDOTA_Unit_Hero_Huskar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_HuskarClass, CDOTA_Unit_Hero_Huskar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_HuskarClass, __dso_handle, CDOTA_Unit_Hero_Huskar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Huskar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_HuskarClassInfo, CDOTA_Unit_Hero_Huskar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_HuskarClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Huskar::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Huskar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_HuskarClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Huskar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_HuskarClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Huskar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_HuskarClass);
    CDOTA_Unit_Hero_Huskar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_HuskarClass._vptr_CEntityClass = off_44EC0B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Huskar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_HuskarClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Huskar::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Huskar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_HuskarClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_HuskarClass != 0 )
    return &CDOTA_Unit_Hero_Huskar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_HuskarClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Huskar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_HuskarClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Huskar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_HuskarClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Huskar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_HuskarClassInfo,
      "CDOTA_Unit_Hero_Huskar",
      "npc_dota_hero_huskar",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Huskar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_HuskarClassInfo);
  }
  CDOTA_Unit_Hero_Huskar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_HuskarClass.m_pClassInfo = &CDOTA_Unit_Hero_Huskar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_HuskarClassInfo;
  CDOTA_Unit_Hero_Huskar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_HuskarClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Huskar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_HuskarClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_HuskarClass = &CDOTA_Unit_Hero_Huskar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_HuskarClass;
  CDOTA_Unit_Hero_Huskar::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_HuskarClassInfo.m_pClass = &CDOTA_Unit_Hero_Huskar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_HuskarClass;
  CDOTA_Unit_Hero_Huskar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_HuskarClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_HuskarClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Huskar::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_HuskarClass;
}


// CDOTA_Unit_Hero_Huskar::YouForgotToImplementOrDeclareServerClass  (line 40, @0x0000000002b35660, libserver.so)
int __fastcall CDOTA_Unit_Hero_Huskar::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Huskar *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Huskar::GetServerClass  (line 40, @0x0000000002b4cc60, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Huskar::GetServerClass(CDOTA_Unit_Hero_Huskar *const this)
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


// CDOTA_Ability_Huskar_Inner_Vitality::~CDOTA_Ability_Huskar_Inner_Vitality  (line 53, @0x0000000002ba1530, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Huskar_Inner_Vitality::~CDOTA_Ability_Huskar_Inner_Vitality(
        CDOTA_Ability_Huskar_Inner_Vitality *const this)
{
  this->_vptr_IHandleEntity = &off_44ED510;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Huskar_Inner_Vitality::~CDOTA_Ability_Huskar_Inner_Vitality  (line 53, @0x0000000002ba1550, libserver.so)  // inlines: ~CDOTA_Ability_Huskar_Inner_Vitality
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Huskar_Inner_Vitality::~CDOTA_Ability_Huskar_Inner_Vitality(
        CDOTA_Ability_Huskar_Inner_Vitality *const this)
{
  this->_vptr_IHandleEntity = &off_44ED510;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Huskar_Inner_Vitality::Schema_DynamicBinding  (line 55, @0x0000000002b90b30, libserver.so)
// globals: CDOTA_Ability_Huskar_Inner_Vitality::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Huskar_Inner_Vitality::Schema_DynamicBinding(
        const CDOTA_Ability_Huskar_Inner_Vitality *const this)
{
  return CDOTA_Ability_Huskar_Inner_Vitality::s_pSchemaBinding;
}


// CDOTA_Ability_Huskar_Inner_Vitality::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 55, @0x0000000002b90b40, libserver.so)
// globals: CDOTA_Ability_Huskar_Inner_Vitality::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Huskar_Inner_Vitality::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Huskar_Inner_Vitality::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Huskar_Inner_Vitality::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Huskar_Inner_Vitality::CEntityInstanceEntityClass::DestructInstance  (line 55, @0x0000000002b90b50, libserver.so)  // inlines: Destruct<CDOTA_Ability_Huskar_Inner_Vitality>
void __fastcall CDOTA_Ability_Huskar_Inner_Vitality::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Huskar_Inner_Vitality::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Huskar_Inner_Vitality::CEntityInstanceEntityClass::FreeInstance  (line 55, @0x0000000002b90b70, libserver.so)
void __fastcall CDOTA_Ability_Huskar_Inner_Vitality::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Huskar_Inner_Vitality::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Huskar_Inner_Vitality::CEntityInstanceEntityClass::CanAllocate  (line 55, @0x0000000002b90b90, libserver.so)
bool __fastcall CDOTA_Ability_Huskar_Inner_Vitality::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Huskar_Inner_Vitality::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Huskar_Inner_Vitality::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 55, @0x0000000002b90ba0, libserver.so)
// globals: CDOTA_Ability_Huskar_Inner_Vitality::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Huskar_Inner_Vitality::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Huskar_Inner_Vitality::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Huskar_Inner_Vitality::s_pSchemaBinding;
}


// CDOTA_Ability_Huskar_Inner_Vitality::CEntityInstanceEntityClass::AllocateInstance  (line 55, @0x0000000002b97ee0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Huskar_Inner_Vitality::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Huskar_Inner_Vitality::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Huskar_Inner_Vitality::CEntityInstanceEntityClass::ConstructInstance  (line 55, @0x0000000002b9d500, libserver.so)  // inlines: CDOTA_Ability_Huskar_Inner_Vitality, Construct<CDOTA_Ability_Huskar_Inner_Vitality>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Huskar_Inner_Vitality::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Huskar_Inner_Vitality::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44ED510;
  }
  return p;
}


// CDOTA_Ability_Huskar_Inner_Vitality::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 55, @0x0000000002baad40, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Huskar_Inner_Vitality::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Huskar_Inner_Vitality::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Huskar_Inner_Vitality::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 55, @0x0000000002baad60, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Huskar_Inner_Vitality::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Huskar_Inner_Vitality::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Huskar_Inner_Vitality::GetEntityClassInternal  (line 55, @0x0000000002bc9800, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "huskar_inner_vitality", "CDOTA_Ability_Huskar_Inner_Vitality"
// globals: `guard variable for'CDOTA_Ability_Huskar_Inner_Vitality::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Inner_VitalityClass, CDOTA_Ability_Huskar_Inner_Vitality::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Inner_VitalityClass, __dso_handle, CDOTA_Ability_Huskar_Inner_Vitality::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Huskar_Inner_Vitality::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Inner_VitalityClassInfo, CDOTA_Ability_Huskar_Inner_Vitality::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Inner_VitalityClassInfo
CEntityClass *__cdecl CDOTA_Ability_Huskar_Inner_Vitality::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Huskar_Inner_Vitality::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Inner_VitalityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Huskar_Inner_Vitality::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Inner_VitalityClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Huskar_Inner_Vitality::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Inner_VitalityClass);
    CDOTA_Ability_Huskar_Inner_Vitality::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Inner_VitalityClass._vptr_CEntityClass = off_44ED490;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Huskar_Inner_Vitality::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Inner_VitalityClass);
    __cxa_atexit(
      CDOTA_Ability_Huskar_Inner_Vitality::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Huskar_Inner_Vitality::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Inner_VitalityClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Huskar_Inner_VitalityClass != 0 )
    return &CDOTA_Ability_Huskar_Inner_Vitality::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Inner_VitalityClass;
  if ( `guard variable for'CDOTA_Ability_Huskar_Inner_Vitality::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Inner_VitalityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Huskar_Inner_Vitality::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Inner_VitalityClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Huskar_Inner_Vitality::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Inner_VitalityClassInfo,
      "CDOTA_Ability_Huskar_Inner_Vitality",
      "huskar_inner_vitality",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Huskar_Inner_Vitality::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Inner_VitalityClassInfo);
  }
  CDOTA_Ability_Huskar_Inner_Vitality::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Inner_VitalityClass.m_pClassInfo = &CDOTA_Ability_Huskar_Inner_Vitality::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Inner_VitalityClassInfo;
  CDOTA_Ability_Huskar_Inner_Vitality::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Inner_VitalityClass.m_pBaseClassInfo = CDOTA_Ability_Huskar_Inner_Vitality::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Inner_VitalityClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Huskar_Inner_VitalityClass = &CDOTA_Ability_Huskar_Inner_Vitality::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Inner_VitalityClass;
  CDOTA_Ability_Huskar_Inner_Vitality::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Inner_VitalityClassInfo.m_pClass = &CDOTA_Ability_Huskar_Inner_Vitality::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Inner_VitalityClass;
  CDOTA_Ability_Huskar_Inner_Vitality::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Inner_VitalityClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Huskar_Inner_VitalityClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Huskar_Inner_Vitality::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Inner_VitalityClass;
}


// CDOTA_Ability_Huskar_Inner_Vitality::OnSpellStart  (line 64, @0x0000000002b3ab80, libserver.so)  // inlines: ToDOTABaseNPC
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetInt, CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_huskar_inner_vitality", "Hero_Huskar.Inner_Vitality"
void __fastcall CDOTA_Ability_Huskar_Inner_Vitality::OnSpellStart(CDOTA_Ability_Huskar_Inner_Vitality *const this)
{
  float Duration; // xmm0_4
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v4; // r12
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_huskar_inner_vitality");
  Duration = CDOTABaseAbility::GetDuration(this);
  KeyValues::SetInt(&kv, "duration", Duration);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v4 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_huskar_inner_vitality", &kv, 0);
    CDOTA_BaseNPC::UnitEmitSound(v4, "Hero_Huskar.Inner_Vitality", 0.0, 0, 0);
  }
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Huskar_Inner_Vitality::~CDOTA_Modifier_Huskar_Inner_Vitality  (line 86, @0x0000000002b9a760, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Huskar_Inner_Vitality::~CDOTA_Modifier_Huskar_Inner_Vitality(
        CDOTA_Modifier_Huskar_Inner_Vitality *const this)
{
  this->_vptr_CDOTA_Buff = &off_44EDFD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Huskar_Inner_Vitality::~CDOTA_Modifier_Huskar_Inner_Vitality  (line 86, @0x0000000002b9a780, libserver.so)  // inlines: ~CDOTA_Modifier_Huskar_Inner_Vitality
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Huskar_Inner_Vitality::~CDOTA_Modifier_Huskar_Inner_Vitality(
        CDOTA_Modifier_Huskar_Inner_Vitality *const this)
{
  this->_vptr_CDOTA_Buff = &off_44EDFD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Huskar_Inner_Vitality::DeclareFunctions  (line 107, @0x0000000002b35670, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Huskar_Inner_Vitality::GetModifierConstantHealthRegen(CModifierParams const&)
void __fastcall CDOTA_Modifier_Huskar_Inner_Vitality::DeclareFunctions(
        CDOTA_Modifier_Huskar_Inner_Vitality *const this)
{
  this->m_Functions[56].__pfn = CDOTA_Modifier_Huskar_Inner_Vitality::GetModifierConstantHealthRegen;
  this->m_Functions[56].__delta = 0;
}


// CDOTA_Modifier_Huskar_Inner_Vitality::OnCreated  (line 114, @0x0000000002b7ee10, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "hurt_attrib_bonus", "hurt_percent"
void __fastcall CDOTA_Modifier_Huskar_Inner_Vitality::OnCreated(
        CDOTA_Modifier_Huskar_Inner_Vitality *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->heal = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "heal", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->heal = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->hurt_attrib_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "hurt_attrib_bonus", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->hurt_percent = 0.0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->hurt_attrib_bonus = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->hurt_percent = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "hurt_percent", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->attrib_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "attrib_bonus", -1, 0);
    return;
  }
LABEL_9:
  this->attrib_bonus = 0.0;
}


// CDOTA_Modifier_Huskar_Inner_Vitality::OnRefresh  (line 135, @0x0000000002b7ef40, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "hurt_attrib_bonus", "hurt_percent"
void __fastcall CDOTA_Modifier_Huskar_Inner_Vitality::OnRefresh(
        CDOTA_Modifier_Huskar_Inner_Vitality *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->heal = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "heal", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->heal = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->hurt_attrib_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "hurt_attrib_bonus", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_8:
      this->hurt_percent = 0.0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  this->hurt_attrib_bonus = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->hurt_percent = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "hurt_percent", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->attrib_bonus = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "attrib_bonus", -1, 0);
    return;
  }
LABEL_9:
  this->attrib_bonus = 0.0;
}


// CDOTA_Modifier_Huskar_Inner_Vitality::GetModifierConstantHealthRegen  (line 145, @0x0000000002b3c550, libserver.so)  // inlines: ToDOTABaseNPCHero
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC_Hero::GetPrimaryStatValue, CDOTA_BaseNPC::HealthFraction
ModifierVariant_t __fastcall CDOTA_Modifier_Huskar_Inner_Vitality::GetModifierConstantHealthRegen(
        CDOTA_Modifier_Huskar_Inner_Vitality *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  __m128i v4; // xmm2
  CDOTA_BaseNPC_Hero *v5; // r12
  __int64 v6; // xmm3_8
  __int64 v7; // xmm0_8
  float PrimaryStatValue; // [rsp+8h] [rbp-18h]
  float attrib_bonus; // [rsp+Ch] [rbp-14h]
  float hurt_attrib_bonus; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  Parent = CDOTA_Buff::GetParent(this);
  v5 = Parent;
  if ( Parent != 0 && (Parent->m_iUnitType & 1) != 0 )
  {
    attrib_bonus = this->attrib_bonus;
    PrimaryStatValue = CDOTA_BaseNPC_Hero::GetPrimaryStatValue(Parent);
    if ( this->hurt_percent >= CDOTA_BaseNPC::HealthFraction(v5) )
    {
      hurt_attrib_bonus = this->hurt_attrib_bonus;
      *&v7 = CDOTA_BaseNPC_Hero::GetPrimaryStatValue(v5) * hurt_attrib_bonus;
    }
    else
    {
      v6 = LODWORD(attrib_bonus);
      *&v6 = attrib_bonus * PrimaryStatValue;
      v7 = v6;
    }
    result.m_szVal = 0;
    *&v7 = *&v7 + this->heal;
    *&result.m_eType = (v7 << 32) | 1;
  }
  else
  {
    *v4.m128i_i32 = this->heal;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v4) << 32) | 1;
  }
  return result;
}


// CDOTA_Modifier_Huskar_Burning_Spear_Self::~CDOTA_Modifier_Huskar_Burning_Spear_Self  (line 219, @0x0000000002ba94a0, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_Huskar_Burning_Spear_Self::~CDOTA_Modifier_Huskar_Burning_Spear_Self(
        CDOTA_Modifier_Huskar_Burning_Spear_Self *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_44EE2F0;
  this->m_InFlightAttackRecords.m_Size = 0;
  if ( !v2
    || (p_m_Memory = &this->m_InFlightAttackRecords.m_Memory,
        CUtlMemory<short,int>::Purge(&this->m_InFlightAttackRecords.m_Memory),
        (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<short,int>::Purge(p_m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Huskar_Burning_Spear_Self::~CDOTA_Modifier_Huskar_Burning_Spear_Self  (line 219, @0x0000000002ba95f0, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Modifier_Huskar_Burning_Spear_Self, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_Huskar_Burning_Spear_Self::~CDOTA_Modifier_Huskar_Burning_Spear_Self(
        CDOTA_Modifier_Huskar_Burning_Spear_Self *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_44EE2F0;
  this->m_InFlightAttackRecords.m_Size = 0;
  if ( v2 )
  {
    p_m_Memory = &this->m_InFlightAttackRecords.m_Memory;
    CUtlMemory<short,int>::Purge(&this->m_InFlightAttackRecords.m_Memory);
    if ( (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<short,int>::Purge(p_m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Huskar_Burning_Spear_Self::IsHidden  (line 224, @0x0000000002b90bb0, libserver.so)
bool __fastcall CDOTA_Modifier_Huskar_Burning_Spear_Self::IsHidden(
        CDOTA_Modifier_Huskar_Burning_Spear_Self *const this)
{
  return 1;
}


// CDOTA_Modifier_Huskar_Burning_Spear_Self::OnCreated  (line 244, @0x0000000002b6c5d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "health_cost"
void __fastcall CDOTA_Modifier_Huskar_Burning_Spear_Self::OnCreated(
        CDOTA_Modifier_Huskar_Burning_Spear_Self *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->health_cost = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "health_cost", -1, 0);
  else
    this->health_cost = 0;
}


// CDOTA_Modifier_Huskar_Burning_Spear_Self::OnRefresh  (line 252, @0x0000000002b6c330, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "health_cost"
void __fastcall CDOTA_Modifier_Huskar_Burning_Spear_Self::OnRefresh(
        CDOTA_Modifier_Huskar_Burning_Spear_Self *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->health_cost = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "health_cost", -1, 0);
  else
    this->health_cost = 0;
}


// CDOTA_Modifier_Huskar_Burning_Spear_Self::DeclareFunctions  (line 260, @0x0000000002b35690, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Huskar_Burning_Spear_Self::OnAttack(CModifierParams const&), CDOTA_Modifier_Huskar_Burning_Spear_Self::OnAttackLanded(CModifierParams const&), CDOTA_Modifier_Huskar_Burning_Spear_Self::OnAttackFail(CModifierParams const&)
void __fastcall CDOTA_Modifier_Huskar_Burning_Spear_Self::DeclareFunctions(
        CDOTA_Modifier_Huskar_Burning_Spear_Self *const this)
{
  this->m_Functions[120].__pfn = CDOTA_Modifier_Huskar_Burning_Spear_Self::OnAttack;
  this->m_Functions[120].__delta = 0;
  this->m_Functions[121].__delta = 0;
  this->m_Functions[121].__pfn = CDOTA_Modifier_Huskar_Burning_Spear_Self::OnAttackLanded;
  this->m_Functions[122].__pfn = CDOTA_Modifier_Huskar_Burning_Spear_Self::OnAttackFail;
  this->m_Functions[122].__delta = 0;
}


// CDOTA_Modifier_Huskar_Burning_Spear_Self::OnAttack  (line 269, @0x0000000002b8ba60, libserver.so)  // inlines: Attacker, AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::IsInvulnerable, CDOTA_BaseNPC::GetCurrentActiveAbility, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, MakeEntitySystemString, CDOTA_BaseNPC::UnitEmitSound, CBaseEntity::GetHealth, CDOTA_BaseNPC::ModifyHealth, CUtlVectorBase<short int, CUtlMemory<short int, int> >::AddToTail
// strings: "particles/units/heroes/hero_huskar/huskar_burning_spear.vpcf", "Hero_Huskar.Burning_Spear.Cast"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Huskar_Burning_Spear_Self::OnAttack(
        CDOTA_Modifier_Huskar_Burning_Spear_Self *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // edx
  CDOTA_BaseNPC *m_pInstance; // rsi
  CDOTA_BaseNPC *v7; // r13
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  uint32 v11; // eax
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityInstance *v14; // r14
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v16; // r15
  __int64 iRecord; // rbx
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // rbx
  int Health; // eax
  UtlSymLargeId_t v21; // [rsp+0h] [rbp-40h]
  ModifierVariant_t result; // 0:rax.16

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
        && (v7->m_nUnitState64.m_Value & 8) == 0
        && (BYTE1(v14[58]._vptr_IHandleEntity) & 2) == 0
        && LOBYTE(v14[71]._vptr_IHandleEntity) == 0
        && !CDOTA_BaseNPC::IsInvulnerable(v14)
        && (v16 == CDOTA_BaseNPC::GetCurrentActiveAbility(v7) || v16->m_bAutoCastState.m_Value) )
      {
        LODWORD(result.m_szVal) = (*(v16->_vptr_IHandleEntity + 256))(v16, v14);
        *&result.m_eType = 1;
        if ( LODWORD(result.m_szVal) != 0 )
          goto LABEL_8;
        iRecord = params->iRecord;
        AttackRecordsManager = GetAttackRecordsManager();
        RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
        MakeEntitySystemString("particles/units/heroes/hero_huskar/huskar_burning_spear.vpcf");
        RecordByIndex->m_iszAutoAttackRangedParticle.u.m_Id = v21;
        CDOTA_BaseNPC::UnitEmitSound(v7, "Hero_Huskar.Burning_Spear.Cast", 0.0, 0, 0);
        Health = CBaseEntity::GetHealth(v7);
        CDOTA_BaseNPC::ModifyHealth(v7, Health - this->health_cost, v16, 0, 0);
        CUtlVectorBase<short,CUtlMemory<short,int>>::AddToTail(
          &this->m_InFlightAttackRecords,
          &RecordByIndex->m_iRecord);
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


// CDOTA_Modifier_Huskar_Burning_Spear_Self::OnAttackLanded  (line 298, @0x0000000002b62af0, libserver.so)  // inlines: Attacker, AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CUtlVectorBase<short int, CUtlMemory<short int, int> >::FindAndFastRemove, CDOTA_Buff::GetAbility, __stack_chk_fail, CDOTA_BaseNPC::IsInvulnerable, KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_huskar_burning_spear_counter"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Huskar_Burning_Spear_Self::OnAttackLanded(
        CDOTA_Modifier_Huskar_Burning_Spear_Self *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // edx
  CDOTA_BaseNPC *m_pInstance; // rsi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  uint32 v10; // eax
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CEntityInstance *v13; // r13
  uint32 v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CBaseEntity *v17; // r14
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v19; // rbx
  float v20; // xmm1_4
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-28h]
  ModifierVariant_t result; // 0:rax.16

  v22 = __readfsqword(0x28u);
  Parent = CDOTA_Buff::GetParent(this);
  m_Index = params->hattacker.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[params->hattacker.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  if ( Parent != m_pInstance
    || !CUtlVectorBase<short,CUtlMemory<short,int>>::FindAndFastRemove(&this->m_InFlightAttackRecords, &params->iRecord) )
  {
    goto LABEL_7;
  }
  v10 = params->htarget.m_Index;
  if ( v10 + 2 <= 1
    || (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v12 = &v11[params->htarget.m_Index & 0x1FF]) == 0
    || v10 != v12->m_EHandle.m_Index
    || (v13 = v12->m_pInstance, v12->m_pInstance == 0)
    || BYTE3(v13[7]._vptr_IHandleEntity) == 0 )
  {
    v13 = 0;
  }
  v14 = params->hattacker.m_Index;
  if ( v14 + 2 <= 1
    || (v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v16 = &v15[params->hattacker.m_Index & 0x1FF]) == 0
    || v14 != v16->m_EHandle.m_Index
    || (v17 = v16->m_pInstance, v16->m_pInstance == 0)
    || !v17->m_bIsDOTANPC )
  {
    CDOTA_Buff::GetAbility(this);
LABEL_7:
    *&result.m_eType = 1;
    goto LABEL_8;
  }
  Ability = CDOTA_Buff::GetAbility(this);
  v19 = Ability;
  if ( v13 == 0
    || Ability == 0
    || (BYTE1(v13[58]._vptr_IHandleEntity) & 2) != 0
    || LOBYTE(v13[71]._vptr_IHandleEntity) != 0
    || CDOTA_BaseNPC::IsInvulnerable(v13) )
  {
    goto LABEL_7;
  }
  LODWORD(result.m_szVal) = (*(v19->_vptr_IHandleEntity + 256))(v19, v13);
  *&result.m_eType = 1;
  if ( LODWORD(result.m_szVal) == 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_huskar_burning_spear_counter");
    CDOTABaseAbility::GetDuration(v19);
    KeyValues::SetFloat(&kv, "duration", v20);
    CDOTA_BaseNPC::AddNewModifier(v13, v17, v19, "modifier_huskar_burning_spear_counter", &kv, 0);
    KeyValues::~KeyValues(&kv);
    *&result.m_eType = 1;
  }
LABEL_8:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Huskar_Burning_Spear_Self::OnAttackFail  (line 327, @0x0000000002b62d70, libserver.so)  // inlines: Attacker, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CUtlVectorBase<short int, CUtlMemory<short int, int> >::FindAndFastRemove
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Huskar_Burning_Spear_Self::OnAttackFail(
        CDOTA_Modifier_Huskar_Burning_Spear_Self *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // edx
  CDOTA_BaseNPC *m_pInstance; // rsi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx

  Parent = CDOTA_Buff::GetParent(this);
  m_Index = params->hattacker.m_Index;
  m_pInstance = 0;
  if ( m_Index + 2 > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[params->hattacker.m_Index & 0x1FF];
      if ( v8 != 0 && m_Index == v8->m_EHandle.m_Index )
        m_pInstance = v8->m_pInstance;
    }
  }
  if ( Parent == m_pInstance )
    CUtlVectorBase<short,CUtlMemory<short,int>>::FindAndFastRemove(&this->m_InFlightAttackRecords, &params->iRecord);
  return 1uLL;
}


// CDOTA_Ability_Huskar_Burning_Spear::~CDOTA_Ability_Huskar_Burning_Spear  (line 340, @0x0000000002ba1580, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Huskar_Burning_Spear::~CDOTA_Ability_Huskar_Burning_Spear(
        CDOTA_Ability_Huskar_Burning_Spear *const this)
{
  this->_vptr_IHandleEntity = &off_44EE650;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Huskar_Burning_Spear::~CDOTA_Ability_Huskar_Burning_Spear  (line 340, @0x0000000002ba15a0, libserver.so)  // inlines: ~CDOTA_Ability_Huskar_Burning_Spear
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Huskar_Burning_Spear::~CDOTA_Ability_Huskar_Burning_Spear(
        CDOTA_Ability_Huskar_Burning_Spear *const this)
{
  this->_vptr_IHandleEntity = &off_44EE650;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Huskar_Burning_Spear::Schema_DynamicBinding  (line 342, @0x0000000002b90bc0, libserver.so)
// globals: CDOTA_Ability_Huskar_Burning_Spear::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Huskar_Burning_Spear::Schema_DynamicBinding(
        const CDOTA_Ability_Huskar_Burning_Spear *const this)
{
  return CDOTA_Ability_Huskar_Burning_Spear::s_pSchemaBinding;
}


// CDOTA_Ability_Huskar_Burning_Spear::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 342, @0x0000000002b90bd0, libserver.so)
// globals: CDOTA_Ability_Huskar_Burning_Spear::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Huskar_Burning_Spear::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Huskar_Burning_Spear::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Huskar_Burning_Spear::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Huskar_Burning_Spear::CEntityInstanceEntityClass::DestructInstance  (line 342, @0x0000000002b90be0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Huskar_Burning_Spear>
void __fastcall CDOTA_Ability_Huskar_Burning_Spear::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Huskar_Burning_Spear::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Huskar_Burning_Spear::CEntityInstanceEntityClass::FreeInstance  (line 342, @0x0000000002b90c00, libserver.so)
void __fastcall CDOTA_Ability_Huskar_Burning_Spear::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Huskar_Burning_Spear::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Huskar_Burning_Spear::CEntityInstanceEntityClass::CanAllocate  (line 342, @0x0000000002b90c20, libserver.so)
bool __fastcall CDOTA_Ability_Huskar_Burning_Spear::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Huskar_Burning_Spear::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Huskar_Burning_Spear::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 342, @0x0000000002b90c30, libserver.so)
// globals: CDOTA_Ability_Huskar_Burning_Spear::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Huskar_Burning_Spear::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Huskar_Burning_Spear::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Huskar_Burning_Spear::s_pSchemaBinding;
}


// CDOTA_Ability_Huskar_Burning_Spear::CEntityInstanceEntityClass::AllocateInstance  (line 342, @0x0000000002b97f20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Huskar_Burning_Spear::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Huskar_Burning_Spear::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Huskar_Burning_Spear::CEntityInstanceEntityClass::ConstructInstance  (line 342, @0x0000000002b9d530, libserver.so)  // inlines: CDOTA_Ability_Huskar_Burning_Spear, Construct<CDOTA_Ability_Huskar_Burning_Spear>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Huskar_Burning_Spear::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Huskar_Burning_Spear::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44EE650;
  }
  return p;
}


// CDOTA_Ability_Huskar_Burning_Spear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 342, @0x0000000002baad90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Huskar_Burning_Spear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Huskar_Burning_Spear::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Huskar_Burning_Spear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 342, @0x0000000002baadb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Huskar_Burning_Spear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Huskar_Burning_Spear::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Huskar_Burning_Spear::GetEntityClassInternal  (line 342, @0x0000000002bc9950, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "huskar_burning_spear", "CDOTA_Ability_Huskar_Burning_Spear"
// globals: `guard variable for'CDOTA_Ability_Huskar_Burning_Spear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Burning_SpearClass, CDOTA_Ability_Huskar_Burning_Spear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Burning_SpearClass, __dso_handle, CDOTA_Ability_Huskar_Burning_Spear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Huskar_Burning_Spear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Burning_SpearClassInfo, CDOTA_Ability_Huskar_Burning_Spear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Burning_SpearClassInfo
CEntityClass *__cdecl CDOTA_Ability_Huskar_Burning_Spear::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Huskar_Burning_Spear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Burning_SpearClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Huskar_Burning_Spear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Burning_SpearClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Huskar_Burning_Spear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Burning_SpearClass);
    CDOTA_Ability_Huskar_Burning_Spear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Burning_SpearClass._vptr_CEntityClass = off_44EE5D0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Huskar_Burning_Spear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Burning_SpearClass);
    __cxa_atexit(
      CDOTA_Ability_Huskar_Burning_Spear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Huskar_Burning_Spear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Burning_SpearClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Huskar_Burning_SpearClass != 0 )
    return &CDOTA_Ability_Huskar_Burning_Spear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Burning_SpearClass;
  if ( `guard variable for'CDOTA_Ability_Huskar_Burning_Spear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Burning_SpearClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Huskar_Burning_Spear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Burning_SpearClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Huskar_Burning_Spear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Burning_SpearClassInfo,
      "CDOTA_Ability_Huskar_Burning_Spear",
      "huskar_burning_spear",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Huskar_Burning_Spear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Burning_SpearClassInfo);
  }
  CDOTA_Ability_Huskar_Burning_Spear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Burning_SpearClass.m_pClassInfo = &CDOTA_Ability_Huskar_Burning_Spear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Burning_SpearClassInfo;
  CDOTA_Ability_Huskar_Burning_Spear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Burning_SpearClass.m_pBaseClassInfo = CDOTA_Ability_Huskar_Burning_Spear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Burning_SpearClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Huskar_Burning_SpearClass = &CDOTA_Ability_Huskar_Burning_Spear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Burning_SpearClass;
  CDOTA_Ability_Huskar_Burning_Spear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Burning_SpearClassInfo.m_pClass = &CDOTA_Ability_Huskar_Burning_Spear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Burning_SpearClass;
  CDOTA_Ability_Huskar_Burning_Spear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Burning_SpearClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Huskar_Burning_SpearClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Huskar_Burning_Spear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Burning_SpearClass;
}


// CDOTA_Ability_Huskar_Burning_Spear::GetIntrinsicModifierName  (line 345, @0x0000000002b90c40, libserver.so)
// strings: "modifier_huskar_burning_spear_self"
const char *__fastcall CDOTA_Ability_Huskar_Burning_Spear::GetIntrinsicModifierName(
        CDOTA_Ability_Huskar_Burning_Spear *const this)
{
  return "modifier_huskar_burning_spear_self";
}


// CDOTA_Ability_Huskar_Burning_Spear::ProcsMagicStick  (line 346, @0x0000000002b90c50, libserver.so)
bool __fastcall CDOTA_Ability_Huskar_Burning_Spear::ProcsMagicStick(CDOTA_Ability_Huskar_Burning_Spear *const this)
{
  return 0;
}


// CDOTA_Ability_Huskar_Burning_Spear::IsStealable  (line 347, @0x0000000002b90c60, libserver.so)
bool __fastcall CDOTA_Ability_Huskar_Burning_Spear::IsStealable(CDOTA_Ability_Huskar_Burning_Spear *const this)
{
  return 0;
}


// CDOTA_Ability_Huskar_Burning_Spear::GetAbilityDamageToTargetOverInterval  (line 359, @0x0000000002b3c6b0, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetDuration, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Huskar_Burning_Spear::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Huskar_Burning_Spear *const this,
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
    fIntervalb = (*(this->_vptr_IHandleEntity + 247))(this) * fIntervala;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalb);
  }
  return result;
}


// CDOTA_Modifier_Huskar_Burning_Spear_Counter::~CDOTA_Modifier_Huskar_Burning_Spear_Counter  (line 372, @0x0000000002b9a710, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Huskar_Burning_Spear_Counter::~CDOTA_Modifier_Huskar_Burning_Spear_Counter(
        CDOTA_Modifier_Huskar_Burning_Spear_Counter *const this)
{
  this->_vptr_CDOTA_Buff = &off_44EF110;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Huskar_Burning_Spear_Counter::~CDOTA_Modifier_Huskar_Burning_Spear_Counter  (line 372, @0x0000000002b9a730, libserver.so)  // inlines: ~CDOTA_Modifier_Huskar_Burning_Spear_Counter
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Huskar_Burning_Spear_Counter::~CDOTA_Modifier_Huskar_Burning_Spear_Counter(
        CDOTA_Modifier_Huskar_Burning_Spear_Counter *const this)
{
  this->_vptr_CDOTA_Buff = &off_44EF110;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Huskar_Burning_Spear_Counter::IsDebuff  (line 377, @0x0000000002b90c70, libserver.so)
bool __fastcall CDOTA_Modifier_Huskar_Burning_Spear_Counter::IsDebuff(
        CDOTA_Modifier_Huskar_Burning_Spear_Counter *const this)
{
  return 1;
}


// CDOTA_Modifier_Huskar_Burning_Spear_Counter::IsPurgable  (line 378, @0x0000000002b90c80, libserver.so)
bool __fastcall CDOTA_Modifier_Huskar_Burning_Spear_Counter::IsPurgable(
        CDOTA_Modifier_Huskar_Burning_Spear_Counter *const this)
{
  return 0;
}


// CDOTA_Modifier_Huskar_Burning_Spear_Counter::StatusEffectPriority  (line 382, @0x0000000002b90c90, libserver.so)
int __fastcall CDOTA_Modifier_Huskar_Burning_Spear_Counter::StatusEffectPriority(
        CDOTA_Modifier_Huskar_Burning_Spear_Counter *const this)
{
  return 10;
}


// CDOTA_Modifier_Huskar_Burning_Spear_Counter::IsHidden  (line 384, @0x0000000002b90ca0, libserver.so)
bool __fastcall CDOTA_Modifier_Huskar_Burning_Spear_Counter::IsHidden(
        CDOTA_Modifier_Huskar_Burning_Spear_Counter *const this)
{
  return 1;
}


// CDOTA_Modifier_Huskar_Burning_Spear_Counter::GetAttributes  (line 387, @0x0000000002b90cb0, libserver.so)
int __fastcall CDOTA_Modifier_Huskar_Burning_Spear_Counter::GetAttributes(
        CDOTA_Modifier_Huskar_Burning_Spear_Counter *const this)
{
  return 2;
}


// CDOTA_Modifier_Huskar_Burning_Spear_Counter::OnCreated  (line 396, @0x0000000002b3a870, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetDuration, CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, CDOTA_BaseNPC::UnitEmitSound, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_huskar_burning_spear_debuff", "Hero_Huskar.Burning_Spear"
void __fastcall CDOTA_Modifier_Huskar_Burning_Spear_Counter::OnCreated(
        CDOTA_Modifier_Huskar_Burning_Spear_Counter *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_Buff *v6; // r12
  CDOTA_BaseNPC *v7; // rax
  float v8; // xmm1_4
  CDOTABaseAbility *v9; // r14
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v11; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-28h]

  v13 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  this->duration = CDOTABaseAbility::GetDuration(Ability);
  Parent = CDOTA_Buff::GetParent(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_huskar_burning_spear_debuff", 0);
  v6 = ModifierByName;
  if ( ModifierByName != 0 )
  {
    (*(ModifierByName->_vptr_CDOTA_Buff + 63))(ModifierByName, 0, this->duration);
    (*(v6->_vptr_CDOTA_Buff + 25))(v6);
  }
  else
  {
    KeyValues::KeyValues(&kv, "modifier_huskar_burning_spear_debuff");
    KeyValues::SetFloat(&kv, "duration", v8);
    v9 = CDOTA_Buff::GetAbility(this);
    Caster = CDOTA_Buff::GetCaster(this);
    v11 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::AddNewModifier(v11, Caster, v9, "modifier_huskar_burning_spear_debuff", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
  v7 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v7, "Hero_Huskar.Burning_Spear", 0.0, 0, 0);
}


// CDOTA_Modifier_Huskar_Burning_Spear_Counter::OnDestroy  (line 417, @0x0000000002b37470, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, CBaseEntity::StopSound
// strings: "modifier_huskar_burning_spear_debuff", "Hero_Huskar.Burning_Spear"
void __fastcall CDOTA_Modifier_Huskar_Burning_Spear_Counter::OnDestroy(
        CDOTA_Modifier_Huskar_Burning_Spear_Counter *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_BaseNPC *v4; // rax

  Parent = CDOTA_Buff::GetParent(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_huskar_burning_spear_debuff", 0);
  if ( ModifierByName != 0 )
    (*(ModifierByName->_vptr_CDOTA_Buff + 26))(ModifierByName);
  v4 = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(v4, "Hero_Huskar.Burning_Spear");
}


// CDOTA_Modifier_Huskar_Burning_Spear_Debuff::~CDOTA_Modifier_Huskar_Burning_Spear_Debuff  (line 433, @0x0000000002b9a6c0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Huskar_Burning_Spear_Debuff::~CDOTA_Modifier_Huskar_Burning_Spear_Debuff(
        CDOTA_Modifier_Huskar_Burning_Spear_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_44EF430;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Huskar_Burning_Spear_Debuff::~CDOTA_Modifier_Huskar_Burning_Spear_Debuff  (line 433, @0x0000000002b9a6e0, libserver.so)  // inlines: ~CDOTA_Modifier_Huskar_Burning_Spear_Debuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Huskar_Burning_Spear_Debuff::~CDOTA_Modifier_Huskar_Burning_Spear_Debuff(
        CDOTA_Modifier_Huskar_Burning_Spear_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_44EF430;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Huskar_Burning_Spear_Debuff::IsDebuff  (line 438, @0x0000000002b90cc0, libserver.so)
bool __fastcall CDOTA_Modifier_Huskar_Burning_Spear_Debuff::IsDebuff(
        CDOTA_Modifier_Huskar_Burning_Spear_Debuff *const this)
{
  return 1;
}


// CDOTA_Modifier_Huskar_Burning_Spear_Debuff::IsPurgable  (line 439, @0x0000000002b90cd0, libserver.so)
bool __fastcall CDOTA_Modifier_Huskar_Burning_Spear_Debuff::IsPurgable(
        CDOTA_Modifier_Huskar_Burning_Spear_Debuff *const this)
{
  return 0;
}


// CDOTA_Modifier_Huskar_Burning_Spear_Debuff::GetEffectName  (line 442, @0x0000000002b90ce0, libserver.so)
// strings: "particles/units/heroes/hero_huskar/huskar_burning_spear_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Huskar_Burning_Spear_Debuff::GetEffectName(
        CDOTA_Modifier_Huskar_Burning_Spear_Debuff *const this)
{
  return "particles/units/heroes/hero_huskar/huskar_burning_spear_debuff.vpcf";
}


// CDOTA_Modifier_Huskar_Burning_Spear_Debuff::GetStatusEffectName  (line 443, @0x0000000002b90cf0, libserver.so)
// strings: "particles/status_fx/status_effect_life_stealer_open_wounds.vpcf"
const char *__fastcall CDOTA_Modifier_Huskar_Burning_Spear_Debuff::GetStatusEffectName(
        CDOTA_Modifier_Huskar_Burning_Spear_Debuff *const this)
{
  return "particles/status_fx/status_effect_life_stealer_open_wounds.vpcf";
}


// CDOTA_Modifier_Huskar_Burning_Spear_Debuff::StatusEffectPriority  (line 444, @0x0000000002b90d00, libserver.so)
int __fastcall CDOTA_Modifier_Huskar_Burning_Spear_Debuff::StatusEffectPriority(
        CDOTA_Modifier_Huskar_Burning_Spear_Debuff *const this)
{
  return 10;
}


// CDOTA_Modifier_Huskar_Burning_Spear_Debuff::OnCreated  (line 453, @0x0000000002b37090, libserver.so)
// calls: CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Huskar_Burning_Spear_Debuff::OnCreated(
        CDOTA_Modifier_Huskar_Burning_Spear_Debuff *const this,
        KeyValues *pKV)
{
  float v3; // xmm1_4

  (*(this->_vptr_CDOTA_Buff + 28))(this, 1);
  CDOTA_Buff::StartIntervalThink(this, 1.0, v3);
}


// CDOTA_Modifier_Huskar_Burning_Spear_Debuff::OnIntervalThink  (line 459, @0x0000000002b379c0, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage
void __fastcall CDOTA_Modifier_Huskar_Burning_Spear_Debuff::OnIntervalThink(
        CDOTA_Modifier_Huskar_Burning_Spear_Debuff *const this)
{
  CDOTABaseAbility *Ability; // rax
  int v3; // r13d
  int v4; // r12d
  CDOTABaseAbility *v5; // r15
  CDOTA_BaseNPC *Parent; // r14
  CDOTA_BaseNPC *Caster; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  v3 = (*(Ability->_vptr_IHandleEntity + 247))(Ability);
  v4 = (*(this->_vptr_CDOTA_Buff + 27))(this);
  v5 = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, v5, (v3 * v4), 2, 0);
}


// CDOTA_Ability_Huskar_Berserkers_Blood::~CDOTA_Ability_Huskar_Berserkers_Blood  (line 473, @0x0000000002ba15d0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Huskar_Berserkers_Blood::~CDOTA_Ability_Huskar_Berserkers_Blood(
        CDOTA_Ability_Huskar_Berserkers_Blood *const this)
{
  this->_vptr_IHandleEntity = &off_44EF790;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Huskar_Berserkers_Blood::~CDOTA_Ability_Huskar_Berserkers_Blood  (line 473, @0x0000000002ba15f0, libserver.so)  // inlines: ~CDOTA_Ability_Huskar_Berserkers_Blood
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Huskar_Berserkers_Blood::~CDOTA_Ability_Huskar_Berserkers_Blood(
        CDOTA_Ability_Huskar_Berserkers_Blood *const this)
{
  this->_vptr_IHandleEntity = &off_44EF790;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Huskar_Berserkers_Blood::Schema_DynamicBinding  (line 475, @0x0000000002b90d10, libserver.so)
// globals: CDOTA_Ability_Huskar_Berserkers_Blood::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Huskar_Berserkers_Blood::Schema_DynamicBinding(
        const CDOTA_Ability_Huskar_Berserkers_Blood *const this)
{
  return CDOTA_Ability_Huskar_Berserkers_Blood::s_pSchemaBinding;
}


// CDOTA_Ability_Huskar_Berserkers_Blood::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 475, @0x0000000002b90d20, libserver.so)
// globals: CDOTA_Ability_Huskar_Berserkers_Blood::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Huskar_Berserkers_Blood::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Huskar_Berserkers_Blood::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Huskar_Berserkers_Blood::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Huskar_Berserkers_Blood::CEntityInstanceEntityClass::DestructInstance  (line 475, @0x0000000002b90d30, libserver.so)  // inlines: Destruct<CDOTA_Ability_Huskar_Berserkers_Blood>
void __fastcall CDOTA_Ability_Huskar_Berserkers_Blood::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Huskar_Berserkers_Blood::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Huskar_Berserkers_Blood::CEntityInstanceEntityClass::FreeInstance  (line 475, @0x0000000002b90d50, libserver.so)
void __fastcall CDOTA_Ability_Huskar_Berserkers_Blood::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Huskar_Berserkers_Blood::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Huskar_Berserkers_Blood::CEntityInstanceEntityClass::CanAllocate  (line 475, @0x0000000002b90d70, libserver.so)
bool __fastcall CDOTA_Ability_Huskar_Berserkers_Blood::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Huskar_Berserkers_Blood::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Huskar_Berserkers_Blood::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 475, @0x0000000002b90d80, libserver.so)
// globals: CDOTA_Ability_Huskar_Berserkers_Blood::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Huskar_Berserkers_Blood::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Huskar_Berserkers_Blood::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Huskar_Berserkers_Blood::s_pSchemaBinding;
}


// CDOTA_Ability_Huskar_Berserkers_Blood::CEntityInstanceEntityClass::AllocateInstance  (line 475, @0x0000000002b97f60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Huskar_Berserkers_Blood::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Huskar_Berserkers_Blood::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Huskar_Berserkers_Blood::CEntityInstanceEntityClass::ConstructInstance  (line 475, @0x0000000002b9d560, libserver.so)  // inlines: CDOTA_Ability_Huskar_Berserkers_Blood, Construct<CDOTA_Ability_Huskar_Berserkers_Blood>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Huskar_Berserkers_Blood::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Huskar_Berserkers_Blood::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44EF790;
  }
  return p;
}


// CDOTA_Ability_Huskar_Berserkers_Blood::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 475, @0x0000000002baade0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Huskar_Berserkers_Blood::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Huskar_Berserkers_Blood::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Huskar_Berserkers_Blood::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 475, @0x0000000002baae00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Huskar_Berserkers_Blood::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Huskar_Berserkers_Blood::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal  (line 475, @0x0000000002bd0940, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "huskar_berserkers_blood", "CDOTA_Ability_Huskar_Berserkers_Blood"
// globals: `guard variable for'CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass, CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Huskar_Berserkers_Blood::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClassInfo, CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClassInfo
CEntityClass *__cdecl CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass) != 0 )
  {
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_pClassInfo = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_flags = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_pInputs = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_nInputCount = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_pOutputs = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_nOutputCount = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_pGameClass = 0;
    CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass._vptr_CEntityClass = off_44EF710;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass);
    __cxa_atexit(
      CDOTA_Ability_Huskar_Berserkers_Blood::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Huskar_Berserkers_BloodClass != 0 )
    return &CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass;
  if ( `guard variable for'CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClassInfo,
      "CDOTA_Ability_Huskar_Berserkers_Blood",
      "huskar_berserkers_blood",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClassInfo);
  }
  CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_pClassInfo = &CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClassInfo;
  CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_pBaseClassInfo = CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Huskar_Berserkers_BloodClass = &CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass;
  CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClassInfo.m_pClass = &CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass;
  CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Huskar_Berserkers_BloodClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Huskar_Berserkers_Blood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Berserkers_BloodClass;
}


// CDOTA_Ability_Huskar_Berserkers_Blood::GetIntrinsicModifierName  (line 478, @0x0000000002b90d90, libserver.so)
// strings: "modifier_huskar_berserkers_blood"
const char *__fastcall CDOTA_Ability_Huskar_Berserkers_Blood::GetIntrinsicModifierName(
        CDOTA_Ability_Huskar_Berserkers_Blood *const this)
{
  return "modifier_huskar_berserkers_blood";
}


// CDOTA_Modifier_Huskar_Berserkers_Blood::~CDOTA_Modifier_Huskar_Berserkers_Blood  (line 486, @0x0000000002b9a670, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Huskar_Berserkers_Blood::~CDOTA_Modifier_Huskar_Berserkers_Blood(
        CDOTA_Modifier_Huskar_Berserkers_Blood *const this)
{
  this->_vptr_CDOTA_Buff = &off_44F0250;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Huskar_Berserkers_Blood::~CDOTA_Modifier_Huskar_Berserkers_Blood  (line 486, @0x0000000002b9a690, libserver.so)  // inlines: ~CDOTA_Modifier_Huskar_Berserkers_Blood
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Huskar_Berserkers_Blood::~CDOTA_Modifier_Huskar_Berserkers_Blood(
        CDOTA_Modifier_Huskar_Berserkers_Blood *const this)
{
  this->_vptr_CDOTA_Buff = &off_44F0250;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Huskar_Berserkers_Blood::IsHidden  (line 491, @0x0000000002b90da0, libserver.so)
bool __fastcall CDOTA_Modifier_Huskar_Berserkers_Blood::IsHidden(CDOTA_Modifier_Huskar_Berserkers_Blood *const this)
{
  return (*(this->_vptr_CDOTA_Buff + 27))(this) == 0;
}


// CDOTA_Modifier_Huskar_Berserkers_Blood::OnCreated  (line 520, @0x0000000002b6e270, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
// strings: "maximum_resistance", "maximum_attack_speed", "hp_threshold_max"
void __fastcall CDOTA_Modifier_Huskar_Berserkers_Blood::OnCreated(
        CDOTA_Modifier_Huskar_Berserkers_Blood *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->maximum_resistance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "maximum_resistance", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_7:
    this->maximum_attack_speed = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
LABEL_8:
    this->hp_threshold_max = 0;
    goto LABEL_5;
  }
  this->maximum_resistance = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_7;
LABEL_3:
  this->maximum_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "maximum_attack_speed", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->hp_threshold_max = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "hp_threshold_max", -1, 0);
LABEL_5:
  CDOTA_Buff::StartIntervalThink(this, 0.1, v6);
}


// CDOTA_Modifier_Huskar_Berserkers_Blood::OnRefresh  (line 541, @0x0000000002b6dc00, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "maximum_resistance", "maximum_attack_speed", "hp_threshold_max"
void __fastcall CDOTA_Modifier_Huskar_Berserkers_Blood::OnRefresh(
        CDOTA_Modifier_Huskar_Berserkers_Blood *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->maximum_resistance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "maximum_resistance", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->maximum_attack_speed = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->maximum_resistance = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->maximum_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "maximum_attack_speed", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->hp_threshold_max = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "hp_threshold_max", -1, 0);
    return;
  }
LABEL_7:
  this->hp_threshold_max = 0;
}


// CDOTA_Modifier_Huskar_Berserkers_Blood::DeclareFunctions  (line 550, @0x0000000002b356f0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Huskar_Berserkers_Blood::GetModifierMagicalResistanceBonus(CModifierParams const&), CDOTA_Modifier_Huskar_Berserkers_Blood::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Huskar_Berserkers_Blood::GetActivityTranslationModifiers(CModifierParams const&), CDOTA_Modifier_Huskar_Berserkers_Blood::ModelScale(CModifierParams const&)
void __fastcall CDOTA_Modifier_Huskar_Berserkers_Blood::DeclareFunctions(
        CDOTA_Modifier_Huskar_Berserkers_Blood *const this)
{
  this->m_Functions[49].__pfn = CDOTA_Modifier_Huskar_Berserkers_Blood::GetModifierMagicalResistanceBonus;
  this->m_Functions[49].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Huskar_Berserkers_Blood::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[155].__pfn = CDOTA_Modifier_Huskar_Berserkers_Blood::GetActivityTranslationModifiers;
  this->m_Functions[155].__delta = 0;
  this->m_Functions[153].__pfn = CDOTA_Modifier_Huskar_Berserkers_Blood::ModelScale;
  this->m_Functions[153].__delta = 0;
}


// CDOTA_Modifier_Huskar_Berserkers_Blood::GetActivityTranslationModifiers  (line 560, @0x0000000002b3c260, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CBaseEntity::GetHealth
ModifierVariant_t __fastcall CDOTA_Modifier_Huskar_Berserkers_Blood::GetActivityTranslationModifiers(
        CDOTA_Modifier_Huskar_Berserkers_Blood *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  int Health; // r12d
  CDOTA_BaseNPC *v7; // rax
  int v8; // eax
  double v9; // xmm0_8
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetAbility(this) == 0 )
    return 2uLL;
  if ( params->nActivity != 1503 )
    return 2uLL;
  Parent = CDOTA_Buff::GetParent(this);
  Health = CBaseEntity::GetHealth(Parent);
  v7 = CDOTA_Buff::GetParent(this);
  v8 = (*(v7->_vptr_IHandleEntity + 156))(v7);
  result.m_szVal = "berserkers_blood";
  v9 = (Health / v8);
  *&result.m_eType = 2;
  if ( v9 >= 0.35 )
    return 2uLL;
  return result;
}


// CDOTA_Modifier_Huskar_Berserkers_Blood::OnIntervalThink  (line 575, @0x0000000002b35760, libserver.so)
void __fastcall CDOTA_Modifier_Huskar_Berserkers_Blood::OnIntervalThink(
        CDOTA_Modifier_Huskar_Berserkers_Blood *const this)
{
  ;
}


// CDOTA_Modifier_Huskar_Berserkers_Blood::GetModifierMagicalResistanceBonus  (line 596, @0x0000000002b420d0, libserver.so)  // inlines: RemapValClamped, clamp<float, float>
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth
ModifierVariant_t __fastcall CDOTA_Modifier_Huskar_Berserkers_Blood::GetModifierMagicalResistanceBonus(
        CDOTA_Modifier_Huskar_Berserkers_Blood *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  float Health; // xmm2_4
  __m128 v8; // xmm2
  unsigned __int64 v9; // xmm0_8
  float v10; // xmm2_4
  float v11; // [rsp+8h] [rbp-18h]
  float v12; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) != 0 )
    return 1uLL;
  Parent = CDOTA_Buff::GetParent(this);
  v11 = (this->hp_threshold_max * (*(Parent->_vptr_IHandleEntity + 156))(Parent)) / 100.0;
  v5 = CDOTA_Buff::GetParent(this);
  v12 = (*(v5->_vptr_IHandleEntity + 156))(v5);
  v6 = CDOTA_Buff::GetParent(this);
  Health = CBaseEntity::GetHealth(v6);
  if ( v11 == v12 )
  {
    v8.m128_f32[0] = Health - v11;
    v9 = _mm_cmple_ss(0LL, v8).m128_u64[0] & 0x3F800000;
  }
  else
  {
    v10 = (Health - v12) / (v11 - v12);
    v9 = 0;
    if ( v10 >= 0.0 )
    {
      v9 = 1065353216;
      if ( v10 <= 1.0 )
      {
        HIDWORD(v9) = 0;
        *&v9 = v10 + 0.0;
      }
    }
  }
  result.m_szVal = 0;
  *&v9 = *&v9 * this->maximum_resistance;
  *&result.m_eType = (v9 << 32) | 1;
  return result;
}


// CDOTA_Modifier_Huskar_Berserkers_Blood::GetModifierAttackSpeedBonus_Constant  (line 608, @0x0000000002b421e0, libserver.so)  // inlines: RemapValClamped, clamp<float, float>
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth
ModifierVariant_t __fastcall CDOTA_Modifier_Huskar_Berserkers_Blood::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Huskar_Berserkers_Blood *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  float Health; // xmm2_4
  __m128 v8; // xmm2
  unsigned __int64 v9; // xmm0_8
  float v10; // xmm2_4
  float v11; // [rsp+8h] [rbp-18h]
  float v12; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) != 0 )
  {
    *&result.m_eType = 1;
LABEL_3:
    result.m_szVal = 0;
    return result;
  }
  result.m_szVal = CDOTA_Buff::GetParent(this);
  *&result.m_eType = 1;
  if ( *(result.m_szVal + 3416) != 0 )
    goto LABEL_3;
  Parent = CDOTA_Buff::GetParent(this);
  v11 = (this->hp_threshold_max * (*(Parent->_vptr_IHandleEntity + 156))(Parent)) / 100.0;
  v5 = CDOTA_Buff::GetParent(this);
  v12 = (*(v5->_vptr_IHandleEntity + 156))(v5);
  v6 = CDOTA_Buff::GetParent(this);
  Health = CBaseEntity::GetHealth(v6);
  if ( v11 == v12 )
  {
    v8.m128_f32[0] = Health - v11;
    v9 = _mm_cmple_ss(0LL, v8).m128_u64[0] & 0x3F800000;
  }
  else
  {
    v10 = (Health - v12) / (v11 - v12);
    v9 = 0;
    if ( v10 >= 0.0 )
    {
      v9 = 1065353216;
      if ( v10 <= 1.0 )
      {
        HIDWORD(v9) = 0;
        *&v9 = v10 + 0.0;
      }
    }
  }
  result.m_szVal = 0;
  *&v9 = *&v9 * this->maximum_attack_speed;
  *&result.m_eType = (v9 << 32) | 1;
  return result;
}


// CDOTA_Modifier_Huskar_Berserkers_Blood::ModelScale  (line 622, @0x0000000002b38ff0, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth
ModifierVariant_t __fastcall CDOTA_Modifier_Huskar_Berserkers_Blood::ModelScale(
        CDOTA_Modifier_Huskar_Berserkers_Blood *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  int Health; // r12d
  CDOTA_BaseNPC *v5; // rax
  int v6; // eax
  __m128i v7; // xmm2
  ModifierVariant_t result; // 0:rax.16

  Parent = CDOTA_Buff::GetParent(this);
  Health = CBaseEntity::GetHealth(Parent);
  v5 = CDOTA_Buff::GetParent(this);
  v6 = (*(v5->_vptr_IHandleEntity + 156))(v5);
  result.m_szVal = 0;
  *v7.m128i_i32 = ((1.0 - (Health / v6)) * 40.0);
  *&result.m_eType = (_mm_cvtsi128_si32(v7) << 32) | 1;
  return result;
}


// CDOTA_Ability_Huskar_Life_Break::~CDOTA_Ability_Huskar_Life_Break  (line 636, @0x0000000002ba1620, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Huskar_Life_Break::~CDOTA_Ability_Huskar_Life_Break(
        CDOTA_Ability_Huskar_Life_Break *const this)
{
  this->_vptr_IHandleEntity = &off_44F05B0;
  this->_vptr_CHorizontalMotionController = &off_44F1038;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Huskar_Life_Break::~CDOTA_Ability_Huskar_Life_Break  (line 636, @0x0000000002ba1650, libserver.so)  // inlines: ~CDOTA_Ability_Huskar_Life_Break
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Huskar_Life_Break::~CDOTA_Ability_Huskar_Life_Break(
        CDOTA_Ability_Huskar_Life_Break *const this)
{
  this->_vptr_IHandleEntity = &off_44F05B0;
  this->_vptr_CHorizontalMotionController = &off_44F1038;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Huskar_Life_Break::Schema_DynamicBinding  (line 638, @0x0000000002b90dc0, libserver.so)
// globals: CDOTA_Ability_Huskar_Life_Break::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Huskar_Life_Break::Schema_DynamicBinding(
        const CDOTA_Ability_Huskar_Life_Break *const this)
{
  return CDOTA_Ability_Huskar_Life_Break::s_pSchemaBinding;
}


// CDOTA_Ability_Huskar_Life_Break::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 638, @0x0000000002b90de0, libserver.so)
// globals: CDOTA_Ability_Huskar_Life_Break::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Huskar_Life_Break::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Huskar_Life_Break::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Huskar_Life_Break::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Huskar_Life_Break::CEntityInstanceEntityClass::DestructInstance  (line 638, @0x0000000002b90df0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Huskar_Life_Break>
void __fastcall CDOTA_Ability_Huskar_Life_Break::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Huskar_Life_Break::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Huskar_Life_Break::CEntityInstanceEntityClass::FreeInstance  (line 638, @0x0000000002b90e10, libserver.so)
void __fastcall CDOTA_Ability_Huskar_Life_Break::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Huskar_Life_Break::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Huskar_Life_Break::CEntityInstanceEntityClass::CanAllocate  (line 638, @0x0000000002b90e30, libserver.so)
bool __fastcall CDOTA_Ability_Huskar_Life_Break::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Huskar_Life_Break::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Huskar_Life_Break::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 638, @0x0000000002b90e40, libserver.so)
// globals: CDOTA_Ability_Huskar_Life_Break::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Huskar_Life_Break::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Huskar_Life_Break::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Huskar_Life_Break::s_pSchemaBinding;
}


// CDOTA_Ability_Huskar_Life_Break::CEntityInstanceEntityClass::AllocateInstance  (line 638, @0x0000000002b97fa0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Huskar_Life_Break::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Huskar_Life_Break::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 944);
  memset(v1, 0, 0x3B0u);
  return v1;
}


// CDOTA_Ability_Huskar_Life_Break::CEntityInstanceEntityClass::ConstructInstance  (line 638, @0x0000000002b9d590, libserver.so)  // inlines: CDOTA_Ability_Huskar_Life_Break, CEntityHandle, CHandle, CHorizontalMotionController, Construct<CDOTA_Ability_Huskar_Life_Break>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Huskar_Life_Break::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Huskar_Life_Break::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 230) = 2;
    *p = &off_44F05B0;
    *(p + 114) = &off_44F1038;
    *(p + 234) = -1;
  }
  return p;
}


// CDOTA_Ability_Huskar_Life_Break::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 638, @0x0000000002baae30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Huskar_Life_Break::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Huskar_Life_Break::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Huskar_Life_Break::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 638, @0x0000000002baae50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Huskar_Life_Break::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Huskar_Life_Break::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Huskar_Life_Break::GetEntityClassInternal  (line 638, @0x0000000002bc9aa0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "huskar_life_break", "CDOTA_Ability_Huskar_Life_Break"
// globals: `guard variable for'CDOTA_Ability_Huskar_Life_Break::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Life_BreakClass, CDOTA_Ability_Huskar_Life_Break::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Life_BreakClass, __dso_handle, CDOTA_Ability_Huskar_Life_Break::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Huskar_Life_Break::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Life_BreakClassInfo, CDOTA_Ability_Huskar_Life_Break::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Life_BreakClassInfo
CEntityClass *__cdecl CDOTA_Ability_Huskar_Life_Break::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Huskar_Life_Break::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Life_BreakClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Huskar_Life_Break::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Life_BreakClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Huskar_Life_Break::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Life_BreakClass);
    CDOTA_Ability_Huskar_Life_Break::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Life_BreakClass._vptr_CEntityClass = off_44F0530;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Huskar_Life_Break::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Life_BreakClass);
    __cxa_atexit(
      CDOTA_Ability_Huskar_Life_Break::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Huskar_Life_Break::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Life_BreakClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Huskar_Life_BreakClass != 0 )
    return &CDOTA_Ability_Huskar_Life_Break::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Life_BreakClass;
  if ( `guard variable for'CDOTA_Ability_Huskar_Life_Break::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Life_BreakClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Huskar_Life_Break::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Life_BreakClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Huskar_Life_Break::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Life_BreakClassInfo,
      "CDOTA_Ability_Huskar_Life_Break",
      "huskar_life_break",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Huskar_Life_Break::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Life_BreakClassInfo);
  }
  CDOTA_Ability_Huskar_Life_Break::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Life_BreakClass.m_pClassInfo = &CDOTA_Ability_Huskar_Life_Break::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Life_BreakClassInfo;
  CDOTA_Ability_Huskar_Life_Break::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Life_BreakClass.m_pBaseClassInfo = CDOTA_Ability_Huskar_Life_Break::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Life_BreakClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Huskar_Life_BreakClass = &CDOTA_Ability_Huskar_Life_Break::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Life_BreakClass;
  CDOTA_Ability_Huskar_Life_Break::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Huskar_Life_BreakClassInfo.m_pClass = &CDOTA_Ability_Huskar_Life_Break::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Life_BreakClass;
  CDOTA_Ability_Huskar_Life_Break::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Life_BreakClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Huskar_Life_BreakClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Huskar_Life_Break::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Huskar_Life_BreakClass;
}


// CDOTA_Ability_Huskar_Life_Break::GetCastRange  (line 649, @0x0000000002bc4320, libserver.so)
// calls: CDOTABaseAbility::GetCastRange, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_huskar"
int __fastcall CDOTA_Ability_Huskar_Life_Break::GetCastRange(
        CDOTA_Ability_Huskar_Life_Break *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  int CastRange; // eax
  float v6; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float flRange; // [rsp+Ch] [rbp-14h]

  CastRange = CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
  v6 = CastRange;
  if ( pTarget != 0 )
  {
    flRange = CastRange;
    Caster = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_huskar", 0);
    v6 = flRange;
    if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
      return (flRange + CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1));
  }
  return v6;
}


// CDOTA_Ability_Huskar_Life_Break::YouForgotToImplementOrDeclareServerClass  (line 683, @0x0000000002b35770, libserver.so)
int __fastcall CDOTA_Ability_Huskar_Life_Break::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Huskar_Life_Break *const this)
{
  return 0;
}


// CDOTA_Ability_Huskar_Life_Break::GetServerClass  (line 683, @0x0000000002b4ca60, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Huskar_Life_Break::GetServerClass(CDOTA_Ability_Huskar_Life_Break *const this)
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


// CDOTA_Ability_Huskar_Life_Break::GetCooldown  (line 692, @0x0000000002b75d40, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Huskar_Life_Break::GetCooldown(CDOTA_Ability_Huskar_Life_Break *const this, int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "cooldown_scepter", iLevel, 0);
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_Huskar_Life_Break::OnSpellStart  (line 704, @0x0000000002b67dd0, libserver.so)  // inlines: CEntityHandle, CHandle, Color, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<int>, GetSerialNumber, Set, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorNormalize2D, VectorSubtract, operator*, operator+, operator-, operator=, sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetCaster, CDOTALocomotor::ApplyHorizontalMotionController, CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CBaseEntity::GetAbsOrigin, VectorNormalize, CBaseEntity::GetAbsAngles, AngleVectors, CDOTA_ProjectileManager::CreateTrackingProjectile, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier (25 total)
// strings: "charge_speed", "modifier_huskar_life_break_charge", "modifier_heavens_halberd_debuff", "modifier_silencer_curse_of_the_silent", "modifier_invoker_deafening_blast_disarm", "modifier_slark_pounce_leash" (10 total)
void __fastcall CDOTA_Ability_Huskar_Life_Break::OnSpellStart(CDOTA_Ability_Huskar_Life_Break *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTALocomotor *v3; // rax
  CBaseEntity *CursorTarget; // rax
  const CBaseEntity *v5; // r12
  int LevelSpecialValue; // r13d
  CDOTA_BaseNPC *v7; // rax
  const Vector *AbsOrigin; // r14
  const Vector *v9; // rax
  vec_t v10; // xmm1_4
  vec_t v11; // xmm0_4
  CDOTA_BaseNPC *v12; // rax
  const QAngle *AbsAngles; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v15; // eax
  __int16 v16; // cx
  CDOTA_BaseNPC *v17; // rax
  const Vector *v18; // rax
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  vec_t v21; // xmm0_4
  vec_t v22; // xmm0_4
  CDOTA_BaseNPC *v23; // rax
  CEntityIdentity *v24; // rax
  int v25; // edx
  __int16 v26; // cx
  float v27; // xmm1_4
  CDOTA_BaseNPC *v28; // r13
  CDOTA_BaseNPC *v29; // rax
  CDOTA_BaseNPC *v30; // rax
  CDOTA_BaseNPC *v31; // rax
  CDOTA_BaseNPC *v32; // rax
  CDOTA_BaseNPC *v33; // rax
  CDOTA_BaseNPC *v34; // rax
  CDOTA_BaseNPC *v35; // rax
  CDOTA_BaseNPC *v36; // rax
  float v37; // xmm0_4
  __m128i x_low; // xmm4
  CDOTA_BaseNPC *v39; // rax
  const Vector *v40; // rax
  vec_t v41; // xmm0_4
  vec_t v42; // xmm2_4
  CDOTA_BaseNPC *v43; // rax
  Vector *v44; // r13
  CDOTA_BaseNPC *v45; // rax
  CDOTA_BaseNPC *v46; // rax
  CDOTA_BaseNPC *v47; // rax
  CDOTA_BaseNPC *v48; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v50; // rax
  const Vector *v51; // r14
  CDOTA_BaseNPC *v52; // rbx
  CDOTA_ParticleManager *v53; // rax
  CDOTA_ParticleManager *v54; // rax
  float v55; // [rsp+8h] [rbp-D8h]
  float fLength; // [rsp+Ch] [rbp-D4h]
  float fLengtha; // [rsp+Ch] [rbp-D4h]
  Vector vDir; // [rsp+10h] [rbp-D0h] BYREF
  Vector vTeleportEnd; // [rsp+20h] [rbp-C0h]
  KeyValues kv; // [rsp+30h] [rbp-B0h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+50h] [rbp-90h] BYREF
  unsigned __int64 v62; // [rsp+B8h] [rbp-28h]

  v62 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  v3 = (*(Caster->_vptr_IHandleEntity + 376))(Caster);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v3, &this->CHorizontalMotionController, 0) )
  {
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    v5 = CursorTarget;
    if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
    {
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "charge_speed", -1, 0);
      v7 = CDOTABaseAbility::GetCaster(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v7);
      v9 = CBaseEntity::GetAbsOrigin(v5);
      v10 = v9->x - AbsOrigin->x;
      v11 = v9->y - AbsOrigin->y;
      vDir.z = 0.0;
      vDir.x = v10;
      vDir.y = v11;
      fLength = VectorNormalize(&vDir);
      if ( fLength < 0.0099999998 )
      {
        v12 = CDOTABaseAbility::GetCaster(this);
        AbsAngles = CBaseEntity::GetAbsAngles(v12);
        AngleVectors(AbsAngles, &vDir, 0, 0);
      }
      m_pEntity = v5->m_pEntity;
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
      v18 = CBaseEntity::GetAbsOrigin(v17);
      this->m_vProjectileLocation.x = v18->x;
      y = v18->y;
      info.pszEffectName = 0;
      this->m_vProjectileLocation.y = y;
      z = v18->z;
      info.hSource.m_Index = -1;
      info.hTarget.m_Index = -1;
      this->m_vProjectileLocation.z = z;
      info.colorGemColor = 0;
      info.pAttackRecord = 0;
      info.iSourceAttachment = 1;
      info.bProvidesVision = 0;
      info.vSourceLoc.x = vec3_origin.x;
      v21 = vec3_origin.y;
      info.iVisionTeamNumber = -1;
      info.vSourceLoc.y = v21;
      v22 = vec3_origin.z;
      info.iVisionRadius = 0;
      info.vSourceLoc.z = v22;
      info.bDrawsOnMinimap = 0;
      info.bDodgeable = 1;
      info.bIsAttack = 0;
      info.bVisibleToEnemies = 1;
      info.pKVExtraData = 0;
      info.bReplaceExisting = 0;
      info.flExpireTime = 0.0;
      info.flMaxImpactTime = 0.0;
      info.bServerOnly = 0;
      info.pAbility = this;
      info.iMoveSpeed = LevelSpecialValue;
      v23 = CDOTABaseAbility::GetCaster(this);
      info.vSourceLoc = *CBaseEntity::GetAbsOrigin(v23);
      v24 = v5->m_pEntity;
      if ( v24 != 0 )
      {
        v25 = (v24->m_EHandle.m_Index >> 15) - (v24->m_flags & 1);
        v26 = 0x7FFF;
        if ( v24->m_EHandle.m_Index != -1 )
          v26 = v24->m_EHandle.m_Index & 0x7FFF;
        LOWORD(info.hTarget.m_Index) = v26 | info.hTarget.m_Index & 0x8000;
        info.hTarget.m_Index = (v25 << 15) | info.hTarget.m_Index & 0x7FFF;
      }
      else
      {
        info.hTarget.m_Index = -1;
      }
      info.bDodgeable = 0;
      CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
      KeyValues::KeyValues(&kv, "modifier_huskar_life_break_charge");
      KeyValues::SetFloat(&kv, "duration", v27);
      v28 = CDOTABaseAbility::GetCaster(this);
      v29 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v29, v28, this, "modifier_huskar_life_break_charge", &kv, 0);
      v30 = CDOTABaseAbility::GetCaster(this);
      Purge(v30, this, 4);
      v31 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::RemoveModifierByName(v31, "modifier_heavens_halberd_debuff");
      v32 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::RemoveModifierByName(v32, "modifier_silencer_curse_of_the_silent");
      v33 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::RemoveModifierByName(v33, "modifier_invoker_deafening_blast_disarm");
      v34 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::RemoveModifierByName(v34, "modifier_slark_pounce_leash");
      v35 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::RemoveModifierByName(v35, "modifier_oracle_fates_edict");
      v36 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::PrimeResumePreviousMovement(v36);
      v37 = fLength;
      x_low = LODWORD(vDir.x);
      *x_low.m128i_i32 = vDir.x * fLength;
      LODWORD(v28) = _mm_cvtsi128_si32(x_low);
      fLengtha = vDir.y * fLength;
      v55 = vDir.z * v37;
      v39 = CDOTABaseAbility::GetCaster(this);
      v40 = CBaseEntity::GetAbsOrigin(v39);
      v41 = v55 + v40->z;
      v42 = *&v28 + v40->x;
      vTeleportEnd.y = fLengtha + v40->y;
      vTeleportEnd.z = v41;
      vTeleportEnd.x = v42;
      v43 = CDOTABaseAbility::GetCaster(this);
      v44 = CBaseEntity::GetAbsOrigin(v43);
      v45 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::UpdateResumePreviousMovement(v45, *v44, vTeleportEnd);
      this->m_bInterrupted = 0;
      v46 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::StartGesture(v46, 1563, 0.0, 0.0, 9, 0, 1.0);
      v47 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::UnitEmitSound(v47, "Hero_Huskar.Life_Break", 0.0, 0, 0);
      v48 = CDOTABaseAbility::GetCaster(this);
      ParticleManager = GetParticleManager();
      LODWORD(v48) = CDOTA_ParticleManager::CreateParticle(
                       ParticleManager,
                       "particles/units/heroes/hero_huskar/huskar_life_break_spellstart.vpcf",
                       1,
                       v48,
                       0,
                       0);
      v50 = CDOTABaseAbility::GetCaster(this);
      v51 = CBaseEntity::GetAbsOrigin(v50);
      v52 = CDOTABaseAbility::GetCaster(this);
      v53 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v53, v48, 0, v52, 5, "attach_hitloc", *v51, 1);
      v54 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v54, v48);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Ability_Huskar_Life_Break::OnProjectileHit  (line 769, @0x0000000002b89da0, libserver.so)  // inlines: AddToTail, CopyConstruct<CEntityIndex>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GrowMemory, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, RemoveAll, Reset, ToDOTABaseNPC, entindex, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlVector
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName, CDOTALocomotor::RemoveHorizontalMotionController, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTA_BaseNPC::StartGesture, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CBaseEntity::GetHealth, ApplyDamage, CDOTA_BaseNPC::UnitEmitSound, CDOTA_BaseNPC::IsInvulnerable, KeyValues::KeyValues, CDOTABaseAbility::GetDuration (27 total)
// strings: "modifier_huskar_life_break_charge", "health_cost_percent", "Hero_Huskar.Life_Break.Impact", "modifier_huskar_life_break_slow", "particles/units/heroes/hero_huskar/huskar_life_break.vpcf", "particles/units/heroes/hero_huskar/huskar_life_break_cast.vpcf" (8 total)
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Huskar_Life_Break::OnProjectileHit(
        CDOTA_Ability_Huskar_Life_Break *const this,
        _WORD *hTarget,
        const Vector *const vLocation)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTALocomotor *v8; // rax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *m_pInstance; // r12
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // r13
  CDOTA_BaseNPC *v15; // rax
  float v16; // xmm1_4
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r15d
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTA_BaseNPC *v23; // r15
  CDOTA_ParticleManager *v24; // rax
  CDOTA_ParticleManager *v25; // rax
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  vec_t y; // xmm0_4
  CDOTA_BaseNPC *v29; // rax
  CEntityIndex v30; // eax
  __int64 m_Size; // rbx
  int32 m_Data; // r15d
  int v33; // eax
  CEntityIndex *v34; // rax
  CDOTA_BaseNPC *v35; // rax
  CDOTA_BaseNPC *v36; // rax
  float fDamagea; // [rsp+8h] [rbp-98h]
  float fDamageb; // [rsp+8h] [rbp-98h]
  CDOTA_BaseNPC *fDamagec; // [rsp+8h] [rbp-98h]
  float fDamage; // [rsp+8h] [rbp-98h]
  float fDamaged; // [rsp+8h] [rbp-98h]
  CUnitOrders attackOrder; // [rsp+10h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+50h] [rbp-50h] BYREF
  unsigned __int64 v44; // [rsp+68h] [rbp-38h]

  v44 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_huskar_life_break_charge");
  if ( !this->m_bInterrupted )
  {
    v7 = CDOTABaseAbility::GetCaster(this);
    v8 = (*(v7->_vptr_IHandleEntity + 376))(v7);
    CDOTALocomotor::RemoveHorizontalMotionController(v8, &this->CHorizontalMotionController);
    if ( (*hTarget + 2) > 1 )
    {
      v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
      if ( v9 != 0 )
      {
        v10 = &v9[*hTarget & 0x1FF];
        if ( v10 != 0 && *hTarget == v10->m_EHandle.m_Index )
        {
          m_pInstance = v10->m_pInstance;
          if ( v10->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && !CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, this, 1) )
          {
            v12 = CDOTABaseAbility::GetCaster(this);
            CDOTA_BaseNPC::StartGesture(v12, 1564, 0.0, 0.2, 9, 0, 1.0);
            if ( (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) == 0 )
            {
              v35 = CDOTABaseAbility::GetCaster(this);
              if ( CDOTA_BaseNPC::HasScepter(v35) )
                fDamage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "health_damage_scepter", -1, 0);
              else
                fDamage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "health_damage", -1, 0);
              fDamaged = CBaseEntity::GetHealth(m_pInstance) * fDamage;
              v36 = CDOTABaseAbility::GetCaster(this);
              ApplyDamage(v36, m_pInstance, this, fDamaged, 2, 0);
            }
            fDamagea = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "health_cost_percent", -1, 0);
            v13 = CDOTABaseAbility::GetCaster(this);
            fDamageb = CBaseEntity::GetHealth(v13) * fDamagea;
            v14 = CDOTABaseAbility::GetCaster(this);
            v15 = CDOTABaseAbility::GetCaster(this);
            ApplyDamage(v15, v14, this, fDamageb, 2, 128);
            CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_Huskar.Life_Break.Impact", 0.0, 0, 0);
            if ( LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0 && !CDOTA_BaseNPC::IsInvulnerable(m_pInstance) )
            {
              KeyValues::KeyValues(&kv, "modifier_huskar_life_break_slow");
              CDOTABaseAbility::GetDuration(this);
              KeyValues::SetFloat(&kv, "duration", v16);
              v17 = CDOTABaseAbility::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(m_pInstance, v17, this, "modifier_huskar_life_break_slow", &kv, 0);
              v18 = CDOTABaseAbility::GetCaster(this);
              ParticleManager = GetParticleManager();
              Particle = CDOTA_ParticleManager::CreateParticle(
                           ParticleManager,
                           "particles/units/heroes/hero_huskar/huskar_life_break.vpcf",
                           1,
                           m_pInstance,
                           0,
                           v18);
              v21 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControlEnt(v21, Particle, 1, m_pInstance, 1, 0, vec3_invalid, 1);
              v22 = GetParticleManager();
              CDOTA_ParticleManager::ReleaseParticleIndex(v22, Particle);
              v23 = CDOTABaseAbility::GetCaster(this);
              v24 = GetParticleManager();
              LODWORD(v23) = CDOTA_ParticleManager::CreateParticle(
                               v24,
                               "particles/units/heroes/hero_huskar/huskar_life_break_cast.vpcf",
                               1,
                               m_pInstance,
                               0,
                               v23);
              fDamagec = CDOTABaseAbility::GetCaster(this);
              v25 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControlEnt(v25, v23, 1, fDamagec, 1, 0, vec3_invalid, 1);
              v26 = GetParticleManager();
              CDOTA_ParticleManager::SetParticleControlEnt(v26, v23, 2, m_pInstance, 1, 0, vec3_invalid, 1);
              v27 = GetParticleManager();
              CDOTA_ParticleManager::ReleaseParticleIndex(v27, v23);
              if ( CDOTABaseAbility::GetCaster(this)->m_PseudoQueuedOrders.m_nOrderType == 0 )
              {
                CUnitOrders::CUnitOrders(&attackOrder);
                attackOrder.m_nUnits.m_Size = 0;
                attackOrder.m_nOrderType = 0;
                attackOrder.m_nTargetIndex.m_Data = 0;
                attackOrder.m_nAbilityIndex.m_Data = 0;
                attackOrder.m_bQueue = 0;
                attackOrder.m_vPosition.x = vec3_origin.x;
                y = vec3_origin.y;
                attackOrder.m_nIssuerPlayerIndex = -1;
                attackOrder.m_vPosition.y = y;
                attackOrder.m_vPosition.z = vec3_origin.z;
                v29 = CDOTABaseAbility::GetCaster(this);
                v30.m_Data = CEntityInstance::GetEntityIndex(v29).m_Data;
                m_Size = attackOrder.m_nUnits.m_Size;
                m_Data = v30.m_Data;
                v33 = attackOrder.m_nUnits.m_Size;
                if ( attackOrder.m_nUnits.m_Size == attackOrder.m_nUnits.m_Memory.m_nAllocationCount )
                {
                  CUtlMemory<CEntityIndex,int>::Grow(&attackOrder.m_nUnits.m_Memory, 1);
                  v33 = attackOrder.m_nUnits.m_Size;
                }
                attackOrder.m_nUnits.m_Size = v33 + 1;
                v34 = &attackOrder.m_nUnits.m_Memory.m_pMemory[m_Size];
                if ( v34 != 0 )
                  v34->m_Data = m_Data;
                attackOrder.m_nOrderType = 4;
                attackOrder.m_nTargetIndex = CEntityInstance::GetEntityIndex(m_pInstance);
                DOTA_ExecuteOrders(&attackOrder, 0, 0, 0);
                CUtlVectorBase<CEntityIndex,CUtlMemory<CEntityIndex,int>>::~CUtlVectorBase(&attackOrder.m_nUnits);
              }
              KeyValues::~KeyValues(&kv);
            }
          }
        }
      }
    }
  }
  return 0;
}


// CDOTA_Ability_Huskar_Life_Break::OnProjectileThink  (line 839, @0x0000000002b459f0, libserver.so)  // inlines: FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, Length2D, LookupEntity, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-, operator=
// calls: CDOTABaseAbility::GetCaster, CDOTALocomotor::InterruptHorizontalMotionController, CBaseEntity::GetAbsOrigin
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Huskar_Life_Break::OnProjectileThink(
        CDOTA_Ability_Huskar_Life_Break *const this,
        const Vector *const vLocation)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *Caster; // rax
  CDOTALocomotor *v8; // rax
  vec_t x; // xmm0_4
  const CBaseEntity *m_pInstance; // rdi
  const Vector *AbsOrigin; // rax

  if ( !this->m_bInterrupted )
  {
    m_Index = this->m_hTarget.m_Index;
    if ( m_Index + 2 > 1
      && (v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hTarget.m_Index) >> 9) & 0x3F]) != 0
      && (v6 = &v5[this->m_hTarget.m_Index & 0x1FF]) != 0
      && m_Index == v6->m_EHandle.m_Index
      && (m_pInstance = v6->m_pInstance, v6->m_pInstance != 0)
      && m_pInstance->m_bIsDOTANPC
      && (AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance),
          fsqrt(
            ((AbsOrigin->x - vLocation->x) * (AbsOrigin->x - vLocation->x))
          + ((AbsOrigin->y - vLocation->y) * (AbsOrigin->y - vLocation->y))) <= 1400.0) )
    {
      x = vLocation->x;
    }
    else
    {
      Caster = CDOTABaseAbility::GetCaster(this);
      v8 = (*(Caster->_vptr_IHandleEntity + 376))(Caster);
      CDOTALocomotor::InterruptHorizontalMotionController(v8, 1);
      x = vLocation->x;
    }
    this->m_vProjectileLocation.x = x;
    this->m_vProjectileLocation.y = vLocation->y;
    this->m_vProjectileLocation.z = vLocation->z;
  }
}


// CDOTA_Ability_Huskar_Life_Break::UpdateHorizontalMotion  (line 856, @0x0000000002b39790, libserver.so)
// calls: CBaseEntity::SetAbsOrigin
void __fastcall CDOTA_Ability_Huskar_Life_Break::UpdateHorizontalMotion(
        CDOTA_Ability_Huskar_Life_Break *const this,
        CDOTA_BaseNPC *me,
        double a3,
        float dt)
{
  CBaseEntity::SetAbsOrigin(me, &this->m_vProjectileLocation);
}


// CDOTA_Ability_Huskar_Life_Break::OnHorizontalMotionInterrupted  (line 865, @0x0000000002b38460, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_huskar_life_break_charge"
void __fastcall CDOTA_Ability_Huskar_Life_Break::OnHorizontalMotionInterrupted(
        CDOTA_Ability_Huskar_Life_Break *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_huskar_life_break_charge");
  this->m_bInterrupted = 1;
}


// CDOTA_Ability_Huskar_Life_Break::GetAbilityDamageToTargetOverInterval  (line 875, @0x0000000002b75d90, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CBaseEntity::GetHealth, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "health_damage_scepter", "health_damage"
__int64 __fastcall CDOTA_Ability_Huskar_Life_Break::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Huskar_Life_Break *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  CDOTA_BaseNPC *Caster; // rax
  bool HasScepter; // al
  const char *v9; // rsi
  float LevelSpecialValue; // [rsp-1Ch] [rbp-1Ch]
  float v11; // [rsp-1Ch] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    HasScepter = CDOTA_BaseNPC::HasScepter(Caster);
    v9 = "health_damage_scepter";
    if ( !HasScepter )
      v9 = "health_damage";
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, v9, -1, 0);
    v11 = LevelSpecialValue * CBaseEntity::GetHealth(pTarget);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * v11);
  }
  return result;
}


// CDOTA_Ability_Huskar_Life_Break::GetSlowDuration  (line 885, @0x0000000002b3a9c0, libserver.so)
// calls: CDOTABaseAbility::GetDuration
float __fastcall CDOTA_Ability_Huskar_Life_Break::GetSlowDuration(CDOTA_Ability_Huskar_Life_Break *const this)
{
  return CDOTABaseAbility::GetDuration(this);
}


// CDOTA_Modifier_Huskar_Life_Break_Charge::~CDOTA_Modifier_Huskar_Life_Break_Charge  (line 894, @0x0000000002b9a5d0, libserver.so)  // inlines: ~CDOTA_Modifier_MagicImmune
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Huskar_Life_Break_Charge::~CDOTA_Modifier_Huskar_Life_Break_Charge(
        CDOTA_Modifier_Huskar_Life_Break_Charge *const this)
{
  this->_vptr_CDOTA_Buff = &off_411B710;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Huskar_Life_Break_Charge::~CDOTA_Modifier_Huskar_Life_Break_Charge  (line 894, @0x0000000002b9a5f0, libserver.so)  // inlines: ~CDOTA_Modifier_Huskar_Life_Break_Charge, ~CDOTA_Modifier_MagicImmune
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Huskar_Life_Break_Charge::~CDOTA_Modifier_Huskar_Life_Break_Charge(
        CDOTA_Modifier_Huskar_Life_Break_Charge *const this)
{
  this->_vptr_CDOTA_Buff = &off_411B710;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Huskar_Life_Break_Charge::IsHidden  (line 899, @0x0000000002b90e50, libserver.so)
bool __fastcall CDOTA_Modifier_Huskar_Life_Break_Charge::IsHidden(CDOTA_Modifier_Huskar_Life_Break_Charge *const this)
{
  return 1;
}


// CDOTA_Modifier_Huskar_Life_Break_Charge::IsPurgable  (line 900, @0x0000000002b90e60, libserver.so)
bool __fastcall CDOTA_Modifier_Huskar_Life_Break_Charge::IsPurgable(
        CDOTA_Modifier_Huskar_Life_Break_Charge *const this)
{
  return 0;
}


// CDOTA_Modifier_Huskar_Life_Break_Charge::CheckState  (line 914, @0x0000000002b3b2b0, libserver.so)  // inlines: Enable
// calls: CDOTA_Modifier_MagicImmune::CheckState
void __fastcall CDOTA_Modifier_Huskar_Life_Break_Charge::CheckState(
        CDOTA_Modifier_Huskar_Life_Break_Charge *const this,
        CDOTABuffState *const buffState)
{
  CDOTA_Modifier_MagicImmune::CheckState(this, buffState);
  buffState->m_nEnabledStateMask |= 2uLL;
  buffState->m_nDisabledStateMask &= ~2uLL;
}


// CDOTA_Modifier_Huskar_Life_Break_Charge::OnDestroy  (line 922, @0x0000000002b38680, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveGesture
void __fastcall CDOTA_Modifier_Huskar_Life_Break_Charge::OnDestroy(CDOTA_Modifier_Huskar_Life_Break_Charge *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::RemoveGesture(Parent, 1563);
}


// CDOTA_Modifier_Huskar_Life_Break_Charge::DeclareFunctions  (line 930, @0x0000000002b35780, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Huskar_Life_Break_Charge::OnStateChanged(CModifierParams const&)
void __fastcall CDOTA_Modifier_Huskar_Life_Break_Charge::DeclareFunctions(
        CDOTA_Modifier_Huskar_Life_Break_Charge *const this)
{
  this->m_Functions[135].__pfn = CDOTA_Modifier_Huskar_Life_Break_Charge::OnStateChanged;
  this->m_Functions[135].__delta = 0;
}


// CDOTA_Modifier_Huskar_Life_Break_Charge::OnStateChanged  (line 937, @0x0000000002b44ea0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::InterruptHorizontalMotionController, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Huskar_Life_Break_Charge::OnStateChanged(
        CDOTA_Modifier_Huskar_Life_Break_Charge *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v9; // rax

  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 <= 1 )
    return 1uLL;
  v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
  if ( v4 == 0 )
    return 1uLL;
  v5 = &v4[params->hunit.m_Index & 0x1FF];
  if ( v5 == 0 )
    return 1uLL;
  if ( m_Index != v5->m_EHandle.m_Index )
    return 1uLL;
  m_pInstance = v5->m_pInstance;
  if ( v5->m_pInstance == 0
    || !m_pInstance->m_bIsDOTANPC
    || CDOTA_Buff::GetParent(this) != m_pInstance
    || (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x20) == 0 )
  {
    return 1uLL;
  }
  Parent = CDOTA_Buff::GetParent(this);
  v9 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::InterruptHorizontalMotionController(v9, 1);
  CDOTA_Buff::Destroy(this, 0, 0, 0);
  return 1uLL;
}


// CDOTA_Modifier_Huskar_Life_Break::~CDOTA_Modifier_Huskar_Life_Break  (line 954, @0x0000000002b9c130, libserver.so)  // inlines: ~CDOTA_Modifier_MoveSpeed_Percentage
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Huskar_Life_Break::~CDOTA_Modifier_Huskar_Life_Break(
        CDOTA_Modifier_Huskar_Life_Break *const this)
{
  this->_vptr_CDOTA_Buff = &off_411BDD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Huskar_Life_Break::~CDOTA_Modifier_Huskar_Life_Break  (line 954, @0x0000000002b9c150, libserver.so)  // inlines: ~CDOTA_Modifier_Huskar_Life_Break, ~CDOTA_Modifier_MoveSpeed_Percentage
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Huskar_Life_Break::~CDOTA_Modifier_Huskar_Life_Break(
        CDOTA_Modifier_Huskar_Life_Break *const this)
{
  this->_vptr_CDOTA_Buff = &off_411BDD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Huskar_Life_Break::GetStatusEffectName  (line 959, @0x0000000002b90e70, libserver.so)
// strings: "particles/status_fx/status_effect_huskar_lifebreak.vpcf"
const char *__fastcall CDOTA_Modifier_Huskar_Life_Break::GetStatusEffectName(
        CDOTA_Modifier_Huskar_Life_Break *const this)
{
  return "particles/status_fx/status_effect_huskar_lifebreak.vpcf";
}


// CDOTA_Modifier_Huskar_Life_Break::StatusEffectPriority  (line 960, @0x0000000002b90e80, libserver.so)
int __fastcall CDOTA_Modifier_Huskar_Life_Break::StatusEffectPriority(CDOTA_Modifier_Huskar_Life_Break *const this)
{
  return 14;
}


