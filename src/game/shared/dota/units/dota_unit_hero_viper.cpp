// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_viper.cpp:30
class CDOTA_Unit_Hero_Viper : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Viper(CDOTA_Unit_Hero_Viper &);
	CDOTA_Unit_Hero_Viper(CDOTA_Unit_Hero_Viper &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void CalculateActivityModifiers(Activity);
	virtual const char * GetDeathEffectName();
	virtual const char * GetOverrideAbilityForCastAttackAnimation();
	CDOTA_Unit_Hero_Viper();
	virtual ~CDOTA_Unit_Hero_Viper();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[442] CalculateActivityModifiers
	// vtable[502] GetDeathEffectName
	// vtable[440] GetOverrideAbilityForCastAttackAnimation
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_viper.cpp:76
class C_CDOTA_Unit_Hero_Viper_MapInstall {
	C_CDOTA_Unit_Hero_Viper_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_viper.cpp:89
class CDOTA_Ability_Viper_PoisonAttack : public CDOTABaseAbility {
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
	CDOTA_Ability_Viper_PoisonAttack(CDOTA_Ability_Viper_PoisonAttack &);
	CDOTA_Ability_Viper_PoisonAttack(CDOTA_Ability_Viper_PoisonAttack &);
	CDOTA_Ability_Viper_PoisonAttack();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual bool ProcsMagicStick();
	virtual bool IsStealable();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Viper_PoisonAttack();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// vtable[239] ProcsMagicStick
	// vtable[305] IsStealable
	// vtable[256] CastFilterResult
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_viper.cpp:106
class C_CDOTA_Ability_Viper_PoisonAttack_MapInstall {
	C_CDOTA_Ability_Viper_PoisonAttack_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_viper.cpp:153
class CDOTA_Modifier_Viper_PoisonAttack : public CDOTA_Buff {
public:

private:

	float duration;  // +0xba8

	CDOTA_Modifier_Viper_PoisonAttack();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttackStart(const CModifierParams &);
	ModifierVariant_t OnAttack(const CModifierParams &);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	ModifierVariant_t OnAttackFail(const CModifierParams &);
	virtual ~CDOTA_Modifier_Viper_PoisonAttack();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_viper.cpp:321
class CDOTA_Modifier_Viper_PoisonAttack_Slow : public CDOTA_Buff {
public:

private:

	int damage;  // +0xba8
	int bonus_movement_speed;  // +0xbac
	int bonus_attack_speed;  // +0xbb0
	CDOTA_Modifier_Viper_PoisonAttack_Slow();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_Viper_PoisonAttack_Slow();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_viper.cpp:419
class CDOTA_Ability_Viper_Nethertoxin : public CDOTABaseAbility {
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
	CDOTA_Ability_Viper_Nethertoxin(CDOTA_Ability_Viper_Nethertoxin &);
	CDOTA_Ability_Viper_Nethertoxin(CDOTA_Ability_Viper_Nethertoxin &);
	CDOTA_Ability_Viper_Nethertoxin();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Viper_Nethertoxin();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_viper.cpp:433
class CDOTA_Modifier_Viper_Nethertoxin : public CDOTA_Buff {
public:

private:

	float bonus_damage;  // +0xba8
	int non_hero_damage_pct;  // +0xbac
	CDOTA_Modifier_Viper_Nethertoxin();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Viper_Nethertoxin();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_viper.cpp:512
class CDOTA_Ability_Viper_CorrosiveSkin : public CDOTABaseAbility {
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
	CDOTA_Ability_Viper_CorrosiveSkin(CDOTA_Ability_Viper_CorrosiveSkin &);
	CDOTA_Ability_Viper_CorrosiveSkin(CDOTA_Ability_Viper_CorrosiveSkin &);
	CDOTA_Ability_Viper_CorrosiveSkin();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Viper_CorrosiveSkin();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_viper.cpp:525
class C_CDOTA_Ability_Viper_CorrosiveSkin_MapInstall {
	C_CDOTA_Ability_Viper_CorrosiveSkin_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_viper.cpp:536
class CDOTA_Modifier_Viper_CorrosiveSkin : public CDOTA_Buff {
public:

private:

	int bonus_magic_resistance;  // +0xba8
	CDOTA_Modifier_Viper_CorrosiveSkin();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual ModifierVariant_t GetModifierMagicalResistanceBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_Viper_CorrosiveSkin();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[89] OnTakeDamage
	// vtable[90] GetModifierMagicalResistanceBonus
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_viper.cpp:625
class CDOTA_Modifier_Viper_CorrosiveSkin_Slow : public CDOTA_Buff {
public:

private:

	int bonus_movement_speed;  // +0xba8
	int bonus_attack_speed;  // +0xbac
	int damage;  // +0xbb0
	CDOTA_Modifier_Viper_CorrosiveSkin_Slow();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_Viper_CorrosiveSkin_Slow();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeedBonus_Percentage
	// vtable[90] GetModifierAttackSpeedBonus_Constant
	// vtable[67] GetEffectName
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_viper.cpp:715
class CDOTA_Ability_Viper_ViperStrike : public CDOTABaseAbility {
public:

private:

	int m_nFXIndex;  // +0x390
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
	CDOTA_Ability_Viper_ViperStrike(CDOTA_Ability_Viper_ViperStrike &);
	CDOTA_Ability_Viper_ViperStrike(CDOTA_Ability_Viper_ViperStrike &);
	CDOTA_Ability_Viper_ViperStrike();
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
	virtual float GetCooldown(int);
	virtual int GetManaCost(int);
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual const char * GetStolenActivityModifier();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Viper_ViperStrike();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[264] OnAbilityPhaseStart
	// vtable[242] GetCooldown
	// vtable[273] GetManaCost
	// vtable[226] GetCastRange
	// vtable[289] OnProjectileHit
	// vtable[310] GetStolenActivityModifier
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_viper.cpp:737
class C_CDOTA_Ability_Viper_ViperStrike_MapInstall {
	C_CDOTA_Ability_Viper_ViperStrike_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_viper.cpp:844
class CDOTA_Modifier_Viper_ViperStrike_Slow : public CDOTA_Buff {
public:

private:

	int bonus_movement_speed;  // +0xba8
	int bonus_attack_speed;  // +0xbac
	int damage;  // +0xbb0
	CDOTA_Modifier_Viper_ViperStrike_Slow();
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Viper_ViperStrike_Slow();

	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeedBonus_Percentage
	// vtable[90] GetModifierAttackSpeedBonus_Constant
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 3000
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Viper::~CDOTA_Unit_Hero_Viper  (line 30, @0x0000000002b1d9f0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Viper::~CDOTA_Unit_Hero_Viper(CDOTA_Unit_Hero_Viper *const this)
{
  this->_vptr_IHandleEntity = &off_4448630;
  this->_vptr_INextBotEventResponder = &off_4449610;
  this->_vptr_CObstructionObject = &off_4449940;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Viper::~CDOTA_Unit_Hero_Viper  (line 30, @0x0000000002b1da30, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Viper
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Viper::~CDOTA_Unit_Hero_Viper(CDOTA_Unit_Hero_Viper *const this)
{
  this->_vptr_IHandleEntity = &off_4448630;
  this->_vptr_INextBotEventResponder = &off_4449610;
  this->_vptr_CObstructionObject = &off_4449940;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Viper::Schema_DynamicBinding  (line 32, @0x0000000002b149b0, libserver.so)
// globals: CDOTA_Unit_Hero_Viper::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Viper::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Viper *const this)
{
  return CDOTA_Unit_Hero_Viper::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Viper::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 32, @0x0000000002b149e0, libserver.so)
// globals: CDOTA_Unit_Hero_Viper::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Viper::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Viper::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Viper::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Viper::CEntityInstanceEntityClass::DestructInstance  (line 32, @0x0000000002b149f0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Viper>
void __fastcall CDOTA_Unit_Hero_Viper::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Viper::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Viper::CEntityInstanceEntityClass::FreeInstance  (line 32, @0x0000000002b14a10, libserver.so)
void __fastcall CDOTA_Unit_Hero_Viper::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Viper::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Viper::CEntityInstanceEntityClass::CanAllocate  (line 32, @0x0000000002b14a30, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Viper::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Viper::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Viper::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 32, @0x0000000002b14a40, libserver.so)
// globals: CDOTA_Unit_Hero_Viper::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Viper::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Viper::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Viper::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Viper::CEntityInstanceEntityClass::AllocateInstance  (line 32, @0x0000000002b18b30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Viper::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Viper::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Viper::CEntityInstanceEntityClass::ConstructInstance  (line 32, @0x0000000002b1b290, libserver.so)  // inlines: CDOTA_Unit_Hero_Viper, Construct<CDOTA_Unit_Hero_Viper>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Viper::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Viper::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_4448630;
    *(p + 236) = &off_4449610;
    *(p + 257) = &off_4449940;
  }
  return p;
}


// CDOTA_Unit_Hero_Viper::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x0000000002b22800, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Viper::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Viper::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Viper::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 32, @0x0000000002b229f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Viper::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Viper::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Viper::GetEntityClassInternal  (line 32, @0x0000000002b287f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "npc_dota_hero_viper", "CDOTA_Unit_Hero_Viper"
// globals: `guard variable for'CDOTA_Unit_Hero_Viper::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ViperClass, CDOTA_Unit_Hero_Viper::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ViperClass, __dso_handle, CDOTA_Unit_Hero_Viper::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Viper::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ViperClassInfo, CDOTA_Unit_Hero_Viper::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ViperClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Viper::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Viper::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ViperClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Viper::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ViperClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Viper::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ViperClass);
    CDOTA_Unit_Hero_Viper::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ViperClass._vptr_CEntityClass = off_44485B0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Viper::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ViperClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Viper::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Viper::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ViperClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_ViperClass != 0 )
    return &CDOTA_Unit_Hero_Viper::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ViperClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Viper::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ViperClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Viper::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ViperClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Viper::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ViperClassInfo,
      "CDOTA_Unit_Hero_Viper",
      "npc_dota_hero_viper",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Viper::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ViperClassInfo);
  }
  CDOTA_Unit_Hero_Viper::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ViperClass.m_pClassInfo = &CDOTA_Unit_Hero_Viper::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ViperClassInfo;
  CDOTA_Unit_Hero_Viper::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ViperClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Viper::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ViperClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_ViperClass = &CDOTA_Unit_Hero_Viper::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ViperClass;
  CDOTA_Unit_Hero_Viper::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_ViperClassInfo.m_pClass = &CDOTA_Unit_Hero_Viper::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ViperClass;
  CDOTA_Unit_Hero_Viper::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ViperClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_ViperClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Viper::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_ViperClass;
}


// CDOTA_Unit_Hero_Viper::CalculateActivityModifiers  (line 36, @0x0000000002b1bb60, libserver.so)
// calls: CDOTA_BaseNPC::CalculateActivityModifiers, CDOTA_BaseNPC::GetAttackSpeed, CDOTA_BaseNPC::AddActivityModifier
// strings: "fastest", "faster"
void __fastcall CDOTA_Unit_Hero_Viper::CalculateActivityModifiers(
        CDOTA_Unit_Hero_Viper *const this,
        Activity iActivity)
{
  float v3; // xmm0_4
  UtlSymId_t v4[16]; // [rsp+0h] [rbp-20h] BYREF

  CDOTA_BaseNPC::CalculateActivityModifiers(this, iActivity);
  v3 = CDOTA_BaseNPC::GetAttackSpeed(this) * 100.0;
  if ( v3 > 351.0 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "fastest");
  }
  else if ( v3 >= 275.0 && v3 <= 350.0 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "faster");
  }
  else if ( v3 >= 142.0 )
  {
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "fast");
  }
  if ( (*(this->_vptr_IHandleEntity + 386))(this) <= 375 )
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "walk");
  else
    CDOTA_BaseNPC::AddActivityModifier(v4, this, "run");
}


// CDOTA_Unit_Hero_Viper::GetDeathEffectName  (line 67, @0x0000000002b14a50, libserver.so)
// strings: "particles/units/heroes/hero_viper/viper_bloodpool.vpcf"
const char *__fastcall CDOTA_Unit_Hero_Viper::GetDeathEffectName(CDOTA_Unit_Hero_Viper *const this)
{
  return "particles/units/heroes/hero_viper/viper_bloodpool.vpcf";
}


// CDOTA_Unit_Hero_Viper::GetOverrideAbilityForCastAttackAnimation  (line 68, @0x0000000002b14a60, libserver.so)
const char *__fastcall CDOTA_Unit_Hero_Viper::GetOverrideAbilityForCastAttackAnimation(
        CDOTA_Unit_Hero_Viper *const this)
{
  return "viper_poison_attack";
}


// CDOTA_Unit_Hero_Viper::YouForgotToImplementOrDeclareServerClass  (line 76, @0x0000000002ae7510, libserver.so)
int __fastcall CDOTA_Unit_Hero_Viper::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Viper *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Viper::GetServerClass  (line 76, @0x0000000002af2b30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Viper::GetServerClass(CDOTA_Unit_Hero_Viper *const this)
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


// CDOTA_Ability_Viper_PoisonAttack::~CDOTA_Ability_Viper_PoisonAttack  (line 89, @0x0000000002b1be70, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Viper_PoisonAttack::~CDOTA_Ability_Viper_PoisonAttack(
        CDOTA_Ability_Viper_PoisonAttack *const this)
{
  this->_vptr_IHandleEntity = &off_4449A10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Viper_PoisonAttack::~CDOTA_Ability_Viper_PoisonAttack  (line 89, @0x0000000002b1be90, libserver.so)  // inlines: ~CDOTA_Ability_Viper_PoisonAttack
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Viper_PoisonAttack::~CDOTA_Ability_Viper_PoisonAttack(
        CDOTA_Ability_Viper_PoisonAttack *const this)
{
  this->_vptr_IHandleEntity = &off_4449A10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Viper_PoisonAttack::Schema_DynamicBinding  (line 91, @0x0000000002b14a70, libserver.so)
// globals: CDOTA_Ability_Viper_PoisonAttack::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Viper_PoisonAttack::Schema_DynamicBinding(
        const CDOTA_Ability_Viper_PoisonAttack *const this)
{
  return CDOTA_Ability_Viper_PoisonAttack::s_pSchemaBinding;
}


// CDOTA_Ability_Viper_PoisonAttack::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 91, @0x0000000002b14a80, libserver.so)
// globals: CDOTA_Ability_Viper_PoisonAttack::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Viper_PoisonAttack::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Viper_PoisonAttack::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Viper_PoisonAttack::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Viper_PoisonAttack::CEntityInstanceEntityClass::DestructInstance  (line 91, @0x0000000002b14a90, libserver.so)  // inlines: Destruct<CDOTA_Ability_Viper_PoisonAttack>
void __fastcall CDOTA_Ability_Viper_PoisonAttack::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Viper_PoisonAttack::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Viper_PoisonAttack::CEntityInstanceEntityClass::FreeInstance  (line 91, @0x0000000002b14ab0, libserver.so)
void __fastcall CDOTA_Ability_Viper_PoisonAttack::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Viper_PoisonAttack::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Viper_PoisonAttack::CEntityInstanceEntityClass::CanAllocate  (line 91, @0x0000000002b14ad0, libserver.so)
bool __fastcall CDOTA_Ability_Viper_PoisonAttack::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Viper_PoisonAttack::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Viper_PoisonAttack::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 91, @0x0000000002b14ae0, libserver.so)
// globals: CDOTA_Ability_Viper_PoisonAttack::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Viper_PoisonAttack::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Viper_PoisonAttack::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Viper_PoisonAttack::s_pSchemaBinding;
}


// CDOTA_Ability_Viper_PoisonAttack::CEntityInstanceEntityClass::AllocateInstance  (line 91, @0x0000000002b18b70, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Viper_PoisonAttack::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Viper_PoisonAttack::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Viper_PoisonAttack::CEntityInstanceEntityClass::ConstructInstance  (line 91, @0x0000000002b1b4f0, libserver.so)  // inlines: CDOTA_Ability_Viper_PoisonAttack, Construct<CDOTA_Ability_Viper_PoisonAttack>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Viper_PoisonAttack::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Viper_PoisonAttack::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4449A10;
  }
  return p;
}


// CDOTA_Ability_Viper_PoisonAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 91, @0x0000000002b21be0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Viper_PoisonAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Viper_PoisonAttack::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Viper_PoisonAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 91, @0x0000000002b21c00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Viper_PoisonAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Viper_PoisonAttack::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Viper_PoisonAttack::GetEntityClassInternal  (line 91, @0x0000000002b28940, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "CDOTA_Ability_Viper_PoisonAttack"
// globals: `guard variable for'CDOTA_Ability_Viper_PoisonAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_PoisonAttackClass, CDOTA_Ability_Viper_PoisonAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_PoisonAttackClass, __dso_handle, CDOTA_Ability_Viper_PoisonAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Viper_PoisonAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_PoisonAttackClassInfo, CDOTA_Ability_Viper_PoisonAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_PoisonAttackClassInfo
CEntityClass *__cdecl CDOTA_Ability_Viper_PoisonAttack::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Viper_PoisonAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_PoisonAttackClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Viper_PoisonAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_PoisonAttackClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Viper_PoisonAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_PoisonAttackClass);
    CDOTA_Ability_Viper_PoisonAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_PoisonAttackClass._vptr_CEntityClass = off_4449990;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Viper_PoisonAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_PoisonAttackClass);
    __cxa_atexit(
      CDOTA_Ability_Viper_PoisonAttack::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Viper_PoisonAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_PoisonAttackClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Viper_PoisonAttackClass != 0 )
    return &CDOTA_Ability_Viper_PoisonAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_PoisonAttackClass;
  if ( `guard variable for'CDOTA_Ability_Viper_PoisonAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_PoisonAttackClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Viper_PoisonAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_PoisonAttackClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Viper_PoisonAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_PoisonAttackClassInfo,
      "CDOTA_Ability_Viper_PoisonAttack",
      "viper_poison_attack",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Viper_PoisonAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_PoisonAttackClassInfo);
  }
  CDOTA_Ability_Viper_PoisonAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_PoisonAttackClass.m_pClassInfo = &CDOTA_Ability_Viper_PoisonAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_PoisonAttackClassInfo;
  CDOTA_Ability_Viper_PoisonAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_PoisonAttackClass.m_pBaseClassInfo = CDOTA_Ability_Viper_PoisonAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_PoisonAttackClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Viper_PoisonAttackClass = &CDOTA_Ability_Viper_PoisonAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_PoisonAttackClass;
  CDOTA_Ability_Viper_PoisonAttack::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_PoisonAttackClassInfo.m_pClass = &CDOTA_Ability_Viper_PoisonAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_PoisonAttackClass;
  CDOTA_Ability_Viper_PoisonAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_PoisonAttackClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Viper_PoisonAttackClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Viper_PoisonAttack::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_PoisonAttackClass;
}


// CDOTA_Ability_Viper_PoisonAttack::GetIntrinsicModifierName  (line 95, @0x0000000002b14af0, libserver.so)
// strings: "modifier_viper_poison_attack"
const char *__fastcall CDOTA_Ability_Viper_PoisonAttack::GetIntrinsicModifierName(
        CDOTA_Ability_Viper_PoisonAttack *const this)
{
  return "modifier_viper_poison_attack";
}


// CDOTA_Ability_Viper_PoisonAttack::ProcsMagicStick  (line 97, @0x0000000002b14b00, libserver.so)
bool __fastcall CDOTA_Ability_Viper_PoisonAttack::ProcsMagicStick(CDOTA_Ability_Viper_PoisonAttack *const this)
{
  return 0;
}


// CDOTA_Ability_Viper_PoisonAttack::IsStealable  (line 98, @0x0000000002b14b10, libserver.so)
bool __fastcall CDOTA_Ability_Viper_PoisonAttack::IsStealable(CDOTA_Ability_Viper_PoisonAttack *const this)
{
  return 0;
}


// CDOTA_Ability_Viper_PoisonAttack::YouForgotToImplementOrDeclareServerClass  (line 106, @0x0000000002ae7520, libserver.so)
int __fastcall CDOTA_Ability_Viper_PoisonAttack::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Viper_PoisonAttack *const this)
{
  return 0;
}


// CDOTA_Ability_Viper_PoisonAttack::GetServerClass  (line 106, @0x0000000002af2a30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Viper_PoisonAttack::GetServerClass(CDOTA_Ability_Viper_PoisonAttack *const this)
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


// CDOTA_Ability_Viper_PoisonAttack::CastFilterResult  (line 116, @0x0000000002ae9930, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, UnitFilter
// strings: "special_bonus_unique_viper_1"
int __fastcall CDOTA_Ability_Viper_PoisonAttack::CastFilterResult(
        CDOTA_Ability_Viper_PoisonAttack *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int v6; // r13d
  CDOTA_BaseNPC *v7; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_viper_1", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    v6 = 23;
  else
    v6 = 19;
  v7 = CDOTABaseAbility::GetCaster(this);
  return UnitFilter(pTarget, 2, v6, 0, v7->m_iTeamNum.m_Value);
}


// CDOTA_Ability_Viper_PoisonAttack::GetAbilityDamageToTargetOverInterval  (line 135, @0x0000000002b07b00, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Viper_PoisonAttack::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Viper_PoisonAttack *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r13d
  float v8; // [rsp-2Ch] [rbp-2Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
    v8 = LevelSpecialValue * CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * v8);
  }
  return result;
}


// CDOTA_Ability_Viper_PoisonAttack::GetSlowDuration  (line 145, @0x0000000002b03c00, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Viper_PoisonAttack::GetSlowDuration(CDOTA_Ability_Viper_PoisonAttack *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
}


// CDOTA_Modifier_Viper_PoisonAttack::~CDOTA_Modifier_Viper_PoisonAttack  (line 153, @0x0000000002b21420, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_Viper_PoisonAttack::~CDOTA_Modifier_Viper_PoisonAttack(
        CDOTA_Modifier_Viper_PoisonAttack *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_444A4D0;
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


// CDOTA_Modifier_Viper_PoisonAttack::~CDOTA_Modifier_Viper_PoisonAttack  (line 153, @0x0000000002b21490, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Modifier_Viper_PoisonAttack, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_Viper_PoisonAttack::~CDOTA_Modifier_Viper_PoisonAttack(
        CDOTA_Modifier_Viper_PoisonAttack *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_444A4D0;
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


// CDOTA_Modifier_Viper_PoisonAttack::IsHidden  (line 158, @0x0000000002b14b20, libserver.so)
bool __fastcall CDOTA_Modifier_Viper_PoisonAttack::IsHidden(CDOTA_Modifier_Viper_PoisonAttack *const this)
{
  return 1;
}


// CDOTA_Modifier_Viper_PoisonAttack::OnCreated  (line 177, @0x0000000002b045d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
void __fastcall CDOTA_Modifier_Viper_PoisonAttack::OnCreated(
        CDOTA_Modifier_Viper_PoisonAttack *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "duration", -1, 0);
  else
    this->duration = 0.0;
}


// CDOTA_Modifier_Viper_PoisonAttack::DeclareFunctions  (line 187, @0x0000000002ae7530, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Viper_PoisonAttack::OnAttackStart(CModifierParams const&), CDOTA_Modifier_Viper_PoisonAttack::OnAttack(CModifierParams const&), CDOTA_Modifier_Viper_PoisonAttack::OnAttackLanded(CModifierParams const&), CDOTA_Modifier_Viper_PoisonAttack::OnAttackFail(CModifierParams const&)
void __fastcall CDOTA_Modifier_Viper_PoisonAttack::DeclareFunctions(CDOTA_Modifier_Viper_PoisonAttack *const this)
{
  this->m_Functions[119].__pfn = CDOTA_Modifier_Viper_PoisonAttack::OnAttackStart;
  this->m_Functions[119].__delta = 0;
  this->m_Functions[120].__delta = 0;
  this->m_Functions[120].__pfn = CDOTA_Modifier_Viper_PoisonAttack::OnAttack;
  this->m_Functions[121].__pfn = CDOTA_Modifier_Viper_PoisonAttack::OnAttackLanded;
  this->m_Functions[121].__delta = 0;
  this->m_Functions[122].__pfn = CDOTA_Modifier_Viper_PoisonAttack::OnAttackFail;
  this->m_Functions[122].__delta = 0;
}


// CDOTA_Modifier_Viper_PoisonAttack::OnAttackStart  (line 197, @0x0000000002af1ce0, libserver.so)  // inlines: Attacker, AttackerNPC, Get, GetAutoCastState, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::GetCurrentActiveAbility, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex
// strings: "special_bonus_unique_viper_1"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Viper_PoisonAttack::OnAttackStart(
        CDOTA_Modifier_Viper_PoisonAttack *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // edx
  CDOTA_BaseNPC *m_pInstance; // rcx
  CDOTA_BaseNPC *v7; // r12
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  uint32 v11; // eax
  CEntityIdentity *v12; // rdx
  CEntityInstance *v13; // r14
  _BOOL4 v14; // r15d
  CEntityIdentity *v15; // rdx
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v19; // rdx
  int (**vptr_IHandleEntity)(...); // rax
  int v21; // ecx
  CDOTABaseAbility *v22; // rax
  int v23; // r12d
  CDOTA_BaseNPC *v24; // rcx
  __int64 iRecord; // rbx
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CEntityInstance *v27; // rax
  bool pAbility; // [rsp+8h] [rbp-38h]
  CDOTABaseAbility *pAbilitya; // [rsp+8h] [rbp-38h]
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
  if ( v7 != m_pInstance )
    goto LABEL_7;
  v11 = params->htarget.m_Index;
  if ( v11 + 2 > 1
    && (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) != 0 )
  {
    v13 = 0;
    LOBYTE(v14) = 1;
    v15 = &v12[params->htarget.m_Index & 0x1FF];
    if ( v15 != 0 && v11 == v15->m_EHandle.m_Index )
    {
      v27 = v15->m_pInstance;
      if ( v15->m_pInstance != 0 )
      {
        if ( BYTE3(v27[7]._vptr_IHandleEntity) != 0 )
          v13 = v15->m_pInstance;
        v14 = BYTE3(v27[7]._vptr_IHandleEntity) == 0;
      }
    }
  }
  else
  {
    LOBYTE(v14) = 1;
    v13 = 0;
  }
  if ( v7 != 0 )
  {
    if ( !v7->m_bIsDOTANPC )
    {
      LOBYTE(v14) = 1;
      v7 = 0;
    }
  }
  else
  {
    LOBYTE(v14) = 1;
  }
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_viper_1", 0);
  pAbility = AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0;
  Ability = CDOTA_Buff::GetAbility(this);
  v19 = Ability;
  if ( v14 )
    goto LABEL_7;
  if ( Ability == 0 )
    goto LABEL_7;
  if ( (v7->m_nUnitState64.m_Value & 8) != 0 )
    goto LABEL_7;
  vptr_IHandleEntity = v13[58]._vptr_IHandleEntity;
  if ( (BYTE1(vptr_IHandleEntity) & 2) != 0
    || LOBYTE(v13[71]._vptr_IHandleEntity) != 0
    || (BYTE1(vptr_IHandleEntity) & 1) != 0
    || (v13[43].m_iszPrivateVScripts.u.m_Id & 0x10) != 0 && !pAbility )
  {
    goto LABEL_7;
  }
  pAbilitya = v19;
  if ( v19 != CDOTA_BaseNPC::GetCurrentActiveAbility(v7) && !pAbilitya->m_bAutoCastState.m_Value )
    goto LABEL_7;
  v21 = (*(pAbilitya->_vptr_IHandleEntity + 256))(pAbilitya, v13);
  *&result.m_eType = 1;
  if ( v21 == 0 )
  {
    v22 = CDOTA_Buff::GetAbility(this);
    v23 = (*(v22->_vptr_IHandleEntity + 274))(v22, 0xFFFFFFFFLL);
    v24 = CDOTA_Buff::GetParent(this);
    *&result.m_eType = 1;
    if ( v23 <= v24->m_flMana.m_Value )
    {
      iRecord = params->iRecord;
      AttackRecordsManager = GetAttackRecordsManager();
      CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord)->m_bAutoCastAttack = pAbilitya->m_bAutoCastState.m_Value;
LABEL_7:
      *&result.m_eType = 1;
    }
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Viper_PoisonAttack::OnAttack  (line 233, @0x0000000002b0f450, libserver.so)  // inlines: AddToTail, Attacker, AttackerNPC, CopyConstruct<short int>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GrowMemory, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[]
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::GetCurrentActiveAbility, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, MakeEntitySystemString, CDOTA_BaseNPC::UnitEmitSound, CDOTA_BaseNPC::SpendMana, CUtlMemory<short int, int>::Grow
// strings: "special_bonus_unique_viper_1", "particles/units/heroes/hero_viper/viper_poison_attack.vpcf", "hero_viper.poisonAttack.Cast"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Viper_PoisonAttack::OnAttack(
        CDOTA_Modifier_Viper_PoisonAttack *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // edx
  CDOTA_BaseNPC *m_pInstance; // rcx
  CDOTA_BaseNPC *v7; // r12
  CEntityIdentity *v8; // rax
  CEntityIdentity *v9; // rax
  uint32 v11; // eax
  CEntityIdentity *v12; // rdx
  CEntityInstance *v13; // r14
  _BOOL4 v14; // r15d
  CEntityIdentity *v15; // rdx
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v19; // r8
  int (**vptr_IHandleEntity)(...); // rax
  CDOTABaseAbility *v21; // rax
  int v22; // r14d
  __int64 iRecord; // rbx
  CDOTA_AttackRecordManager *AttackRecordsManager; // rax
  CDOTA_AttackRecord *RecordByIndex; // r14
  CDOTABaseAbility *v26; // rbx
  int v27; // eax
  __int64 m_Size; // rbx
  int v29; // eax
  __int16 *v30; // rax
  CEntityInstance *v31; // rax
  bool pAbility; // [rsp+8h] [rbp-48h]
  CDOTABaseAbility *pAbilitya; // [rsp+8h] [rbp-48h]
  UtlSymLargeId_t v34; // [rsp+10h] [rbp-40h]
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
  if ( v7 != m_pInstance )
    goto LABEL_7;
  v11 = params->htarget.m_Index;
  if ( v11 + 2 > 1
    && (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) != 0 )
  {
    v13 = 0;
    LOBYTE(v14) = 1;
    v15 = &v12[params->htarget.m_Index & 0x1FF];
    if ( v15 != 0 && v11 == v15->m_EHandle.m_Index )
    {
      v31 = v15->m_pInstance;
      if ( v15->m_pInstance != 0 )
      {
        if ( BYTE3(v31[7]._vptr_IHandleEntity) != 0 )
          v13 = v15->m_pInstance;
        v14 = BYTE3(v31[7]._vptr_IHandleEntity) == 0;
      }
    }
  }
  else
  {
    LOBYTE(v14) = 1;
    v13 = 0;
  }
  if ( v7 != 0 )
  {
    if ( !v7->m_bIsDOTANPC )
    {
      LOBYTE(v14) = 1;
      v7 = 0;
    }
  }
  else
  {
    LOBYTE(v14) = 1;
  }
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_viper_1", 0);
  pAbility = AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0;
  Ability = CDOTA_Buff::GetAbility(this);
  v19 = Ability;
  if ( v14 )
    goto LABEL_7;
  if ( Ability == 0 )
    goto LABEL_7;
  if ( (v7->m_nUnitState64.m_Value & 8) != 0 )
    goto LABEL_7;
  vptr_IHandleEntity = v13[58]._vptr_IHandleEntity;
  if ( (BYTE1(vptr_IHandleEntity) & 2) != 0
    || LOBYTE(v13[71]._vptr_IHandleEntity) != 0
    || (BYTE1(vptr_IHandleEntity) & 1) != 0
    || (v13[43].m_iszPrivateVScripts.u.m_Id & 0x10) != 0 && !pAbility )
  {
    goto LABEL_7;
  }
  pAbilitya = v19;
  if ( v19 != CDOTA_BaseNPC::GetCurrentActiveAbility(v7) && !pAbilitya->m_bAutoCastState.m_Value )
    goto LABEL_7;
  LODWORD(result.m_szVal) = (*(pAbilitya->_vptr_IHandleEntity + 256))(pAbilitya, v13);
  *&result.m_eType = 1;
  if ( LODWORD(result.m_szVal) == 0 )
  {
    v21 = CDOTA_Buff::GetAbility(this);
    v22 = (*(v21->_vptr_IHandleEntity + 274))(v21, 0xFFFFFFFFLL);
    result.m_szVal = CDOTA_Buff::GetParent(this);
    *&result.m_eType = 1;
    if ( v22 <= *(result.m_szVal + 534) )
    {
      iRecord = params->iRecord;
      AttackRecordsManager = GetAttackRecordsManager();
      RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
      MakeEntitySystemString("particles/units/heroes/hero_viper/viper_poison_attack.vpcf");
      RecordByIndex->m_iszAutoAttackRangedParticle.u.m_Id = v34;
      CDOTA_BaseNPC::UnitEmitSound(v7, "hero_viper.poisonAttack.Cast", 0.0, 0, 0);
      v26 = CDOTA_Buff::GetAbility(this);
      v27 = (*(pAbilitya->_vptr_IHandleEntity + 274))(pAbilitya, 0xFFFFFFFFLL);
      CDOTA_BaseNPC::SpendMana(v7, v27, v26, 0);
      m_Size = this->m_InFlightAttackRecords.m_Size;
      v29 = this->m_InFlightAttackRecords.m_Size;
      if ( m_Size == this->m_InFlightAttackRecords.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<short,int>::Grow(&this->m_InFlightAttackRecords.m_Memory, 1);
        v29 = this->m_InFlightAttackRecords.m_Size;
      }
      this->m_InFlightAttackRecords.m_Size = v29 + 1;
      v30 = &this->m_InFlightAttackRecords.m_Memory.m_pMemory[m_Size];
      if ( v30 != 0 )
        *v30 = RecordByIndex->m_iRecord;
LABEL_7:
      *&result.m_eType = 1;
    }
  }
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Viper_PoisonAttack::OnAttackLanded  (line 274, @0x0000000002afc500, libserver.so)  // inlines: Attacker, AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CUtlVectorBase<short int, CUtlMemory<short int, int> >::FindAndFastRemove, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetAbility, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_viper_poison_attack_slow", "hero_viper.PoisonAttack.Target"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Viper_PoisonAttack::OnAttackLanded(
        CDOTA_Modifier_Viper_PoisonAttack *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // edx
  CDOTA_BaseNPC *m_pInstance; // rsi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  CEntityInstance *v10; // rax
  CDOTA_BaseNPC *v11; // r13
  CEntityInstance *v12; // rax
  CBaseEntity *v13; // rbx
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v15; // r14
  unsigned __int64 m_Value; // rax
  float v17; // xmm1_4
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-38h]
  ModifierVariant_t result; // 0:rax.16

  v19 = __readfsqword(0x28u);
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
  v10 = CEntityHandle::operator CEntityInstance *(&params->htarget);
  if ( v10 != 0 && BYTE3(v10[7]._vptr_IHandleEntity) != 0 )
    v11 = v10;
  else
    v11 = 0;
  v12 = CEntityHandle::operator CEntityInstance *(&params->hattacker);
  v13 = v12;
  if ( v12 == 0 || BYTE3(v12[7]._vptr_IHandleEntity) == 0 )
  {
    CDOTA_Buff::GetAbility(this);
LABEL_7:
    *&result.m_eType = 1;
    goto LABEL_8;
  }
  Ability = CDOTA_Buff::GetAbility(this);
  v15 = Ability;
  if ( v11 == 0 )
    goto LABEL_7;
  if ( Ability == 0 )
    goto LABEL_7;
  m_Value = v11->m_nUnitState64.m_Value;
  if ( (m_Value & 0x200) != 0 || v11->m_bIsWaitingToSpawn.m_Value || (m_Value & 0x100) != 0 )
    goto LABEL_7;
  LODWORD(result.m_szVal) = (*(v15->_vptr_IHandleEntity + 256))(v15, v11);
  *&result.m_eType = 1;
  if ( LODWORD(result.m_szVal) == 0 )
  {
    KeyValues::KeyValues(&kv, "modifier_viper_poison_attack_slow");
    KeyValues::SetFloat(&kv, "duration", v17);
    CDOTA_BaseNPC::AddNewModifier(v11, v13, v15, "modifier_viper_poison_attack_slow", &kv, 0);
    CDOTA_BaseNPC::UnitEmitSound(v11, "hero_viper.PoisonAttack.Target", 0.0, 0, 0);
    KeyValues::~KeyValues(&kv);
    *&result.m_eType = 1;
  }
LABEL_8:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Viper_PoisonAttack::OnAttackFail  (line 305, @0x0000000002afc720, libserver.so)  // inlines: Attacker, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CUtlVectorBase<short int, CUtlMemory<short int, int> >::FindAndFastRemove
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Viper_PoisonAttack::OnAttackFail(
        CDOTA_Modifier_Viper_PoisonAttack *const this,
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


// CDOTA_Modifier_Viper_PoisonAttack_Slow::~CDOTA_Modifier_Viper_PoisonAttack_Slow  (line 321, @0x0000000002b1af10, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Viper_PoisonAttack_Slow::~CDOTA_Modifier_Viper_PoisonAttack_Slow(
        CDOTA_Modifier_Viper_PoisonAttack_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_444A7F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Viper_PoisonAttack_Slow::~CDOTA_Modifier_Viper_PoisonAttack_Slow  (line 321, @0x0000000002b1af30, libserver.so)  // inlines: ~CDOTA_Modifier_Viper_PoisonAttack_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Viper_PoisonAttack_Slow::~CDOTA_Modifier_Viper_PoisonAttack_Slow(
        CDOTA_Modifier_Viper_PoisonAttack_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_444A7F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Viper_PoisonAttack_Slow::IsDebuff  (line 326, @0x0000000002b14b30, libserver.so)
bool __fastcall CDOTA_Modifier_Viper_PoisonAttack_Slow::IsDebuff(CDOTA_Modifier_Viper_PoisonAttack_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_Viper_PoisonAttack_Slow::GetEffectName  (line 337, @0x0000000002b14b40, libserver.so)
// strings: "particles/units/heroes/hero_viper/viper_poison_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Viper_PoisonAttack_Slow::GetEffectName(
        CDOTA_Modifier_Viper_PoisonAttack_Slow *const this)
{
  return "particles/units/heroes/hero_viper/viper_poison_debuff.vpcf";
}


// CDOTA_Modifier_Viper_PoisonAttack_Slow::OnCreated  (line 357, @0x0000000002b0ad30, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Viper_PoisonAttack_Slow::OnCreated(
        CDOTA_Modifier_Viper_PoisonAttack_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_7:
    this->bonus_movement_speed = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
LABEL_8:
    this->bonus_attack_speed = 0;
    goto LABEL_5;
  }
  this->damage = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_7;
LABEL_3:
  this->bonus_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_movement_speed", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_attack_speed", -1, 0);
LABEL_5:
  CDOTA_Buff::StartIntervalThink(this, 1.0, v6);
}


// CDOTA_Modifier_Viper_PoisonAttack_Slow::OnRefresh  (line 370, @0x0000000002b0b150, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound
// strings: "hero_viper.PoisonAttack.Target"
void __fastcall CDOTA_Modifier_Viper_PoisonAttack_Slow::OnRefresh(
        CDOTA_Modifier_Viper_PoisonAttack_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTA_BaseNPC *Parent; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_7:
    this->bonus_movement_speed = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
LABEL_8:
    this->bonus_attack_speed = 0;
    goto LABEL_5;
  }
  this->damage = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_7;
LABEL_3:
  this->bonus_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_movement_speed", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_attack_speed", -1, 0);
LABEL_5:
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(Parent, "hero_viper.PoisonAttack.Target", 0.0, 0, 0);
}


// CDOTA_Modifier_Viper_PoisonAttack_Slow::OnIntervalThink  (line 383, @0x0000000002ae9130, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage, SendOverheadEventMessage
void __fastcall CDOTA_Modifier_Viper_PoisonAttack_Slow::OnIntervalThink(
        CDOTA_Modifier_Viper_PoisonAttack_Slow *const this)
{
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // rax
  float flDamage; // [rsp+Ch] [rbp-24h]

  flDamage = this->damage;
  Ability = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, Ability, flDamage, 2, 0);
  LODWORD(Parent) = this->damage;
  v5 = CDOTA_Buff::GetParent(this);
  SendOverheadEventMessage(0, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BONUS_POISON_DAMAGE, v5, Parent, 0);
}


// CDOTA_Modifier_Viper_PoisonAttack_Slow::DeclareFunctions  (line 393, @0x0000000002ae75a0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Viper_PoisonAttack_Slow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Viper_PoisonAttack_Slow::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Viper_PoisonAttack_Slow::DeclareFunctions(
        CDOTA_Modifier_Viper_PoisonAttack_Slow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_Viper_PoisonAttack_Slow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Viper_PoisonAttack_Slow::GetModifierAttackSpeedBonus_Constant;
}


// CDOTA_Modifier_Viper_PoisonAttack_Slow::GetModifierMoveSpeedBonus_Percentage  (line 401, @0x0000000002ae75e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Viper_PoisonAttack_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Viper_PoisonAttack_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Viper_PoisonAttack_Slow::GetModifierAttackSpeedBonus_Constant  (line 408, @0x0000000002ae7600, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Viper_PoisonAttack_Slow::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Viper_PoisonAttack_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Viper_Nethertoxin::~CDOTA_Ability_Viper_Nethertoxin  (line 419, @0x0000000002b1bec0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Viper_Nethertoxin::~CDOTA_Ability_Viper_Nethertoxin(
        CDOTA_Ability_Viper_Nethertoxin *const this)
{
  this->_vptr_IHandleEntity = &off_444AB50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Viper_Nethertoxin::~CDOTA_Ability_Viper_Nethertoxin  (line 419, @0x0000000002b1bee0, libserver.so)  // inlines: ~CDOTA_Ability_Viper_Nethertoxin
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Viper_Nethertoxin::~CDOTA_Ability_Viper_Nethertoxin(
        CDOTA_Ability_Viper_Nethertoxin *const this)
{
  this->_vptr_IHandleEntity = &off_444AB50;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Viper_Nethertoxin::Schema_DynamicBinding  (line 421, @0x0000000002b14b50, libserver.so)
// globals: CDOTA_Ability_Viper_Nethertoxin::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Viper_Nethertoxin::Schema_DynamicBinding(
        const CDOTA_Ability_Viper_Nethertoxin *const this)
{
  return CDOTA_Ability_Viper_Nethertoxin::s_pSchemaBinding;
}


// CDOTA_Ability_Viper_Nethertoxin::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 421, @0x0000000002b14b60, libserver.so)
// globals: CDOTA_Ability_Viper_Nethertoxin::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Viper_Nethertoxin::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Viper_Nethertoxin::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Viper_Nethertoxin::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Viper_Nethertoxin::CEntityInstanceEntityClass::DestructInstance  (line 421, @0x0000000002b14b70, libserver.so)  // inlines: Destruct<CDOTA_Ability_Viper_Nethertoxin>
void __fastcall CDOTA_Ability_Viper_Nethertoxin::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Viper_Nethertoxin::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Viper_Nethertoxin::CEntityInstanceEntityClass::FreeInstance  (line 421, @0x0000000002b14b90, libserver.so)
void __fastcall CDOTA_Ability_Viper_Nethertoxin::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Viper_Nethertoxin::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Viper_Nethertoxin::CEntityInstanceEntityClass::CanAllocate  (line 421, @0x0000000002b14bb0, libserver.so)
bool __fastcall CDOTA_Ability_Viper_Nethertoxin::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Viper_Nethertoxin::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Viper_Nethertoxin::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 421, @0x0000000002b14bc0, libserver.so)
// globals: CDOTA_Ability_Viper_Nethertoxin::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Viper_Nethertoxin::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Viper_Nethertoxin::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Viper_Nethertoxin::s_pSchemaBinding;
}


// CDOTA_Ability_Viper_Nethertoxin::CEntityInstanceEntityClass::AllocateInstance  (line 421, @0x0000000002b18bb0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Viper_Nethertoxin::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Viper_Nethertoxin::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Viper_Nethertoxin::CEntityInstanceEntityClass::ConstructInstance  (line 421, @0x0000000002b1b520, libserver.so)  // inlines: CDOTA_Ability_Viper_Nethertoxin, Construct<CDOTA_Ability_Viper_Nethertoxin>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Viper_Nethertoxin::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Viper_Nethertoxin::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_444AB50;
  }
  return p;
}


// CDOTA_Ability_Viper_Nethertoxin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 421, @0x0000000002b21c30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Viper_Nethertoxin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Viper_Nethertoxin::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Viper_Nethertoxin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 421, @0x0000000002b21c50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Viper_Nethertoxin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Viper_Nethertoxin::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Viper_Nethertoxin::GetEntityClassInternal  (line 421, @0x0000000002b28a90, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "CDOTA_Ability_Viper_Nethertoxin"
// globals: `guard variable for'CDOTA_Ability_Viper_Nethertoxin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_NethertoxinClass, CDOTA_Ability_Viper_Nethertoxin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_NethertoxinClass, __dso_handle, CDOTA_Ability_Viper_Nethertoxin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Viper_Nethertoxin::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_NethertoxinClassInfo, CDOTA_Ability_Viper_Nethertoxin::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_NethertoxinClassInfo
CEntityClass *__cdecl CDOTA_Ability_Viper_Nethertoxin::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Viper_Nethertoxin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_NethertoxinClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Viper_Nethertoxin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_NethertoxinClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Viper_Nethertoxin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_NethertoxinClass);
    CDOTA_Ability_Viper_Nethertoxin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_NethertoxinClass._vptr_CEntityClass = off_444AAD0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Viper_Nethertoxin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_NethertoxinClass);
    __cxa_atexit(
      CDOTA_Ability_Viper_Nethertoxin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Viper_Nethertoxin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_NethertoxinClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Viper_NethertoxinClass != 0 )
    return &CDOTA_Ability_Viper_Nethertoxin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_NethertoxinClass;
  if ( `guard variable for'CDOTA_Ability_Viper_Nethertoxin::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_NethertoxinClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Viper_Nethertoxin::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_NethertoxinClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Viper_Nethertoxin::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_NethertoxinClassInfo,
      "CDOTA_Ability_Viper_Nethertoxin",
      "viper_nethertoxin",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Viper_Nethertoxin::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_NethertoxinClassInfo);
  }
  CDOTA_Ability_Viper_Nethertoxin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_NethertoxinClass.m_pClassInfo = &CDOTA_Ability_Viper_Nethertoxin::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_NethertoxinClassInfo;
  CDOTA_Ability_Viper_Nethertoxin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_NethertoxinClass.m_pBaseClassInfo = CDOTA_Ability_Viper_Nethertoxin::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_NethertoxinClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Viper_NethertoxinClass = &CDOTA_Ability_Viper_Nethertoxin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_NethertoxinClass;
  CDOTA_Ability_Viper_Nethertoxin::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_NethertoxinClassInfo.m_pClass = &CDOTA_Ability_Viper_Nethertoxin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_NethertoxinClass;
  CDOTA_Ability_Viper_Nethertoxin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_NethertoxinClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Viper_NethertoxinClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Viper_Nethertoxin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_NethertoxinClass;
}


// CDOTA_Ability_Viper_Nethertoxin::GetIntrinsicModifierName  (line 424, @0x0000000002b14bd0, libserver.so)
// strings: "modifier_viper_nethertoxin"
const char *__fastcall CDOTA_Ability_Viper_Nethertoxin::GetIntrinsicModifierName(
        CDOTA_Ability_Viper_Nethertoxin *const this)
{
  return "modifier_viper_nethertoxin";
}


// CDOTA_Modifier_Viper_Nethertoxin::~CDOTA_Modifier_Viper_Nethertoxin  (line 433, @0x0000000002b1aec0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Viper_Nethertoxin::~CDOTA_Modifier_Viper_Nethertoxin(
        CDOTA_Modifier_Viper_Nethertoxin *const this)
{
  this->_vptr_CDOTA_Buff = &off_444B610;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Viper_Nethertoxin::~CDOTA_Modifier_Viper_Nethertoxin  (line 433, @0x0000000002b1aee0, libserver.so)  // inlines: ~CDOTA_Modifier_Viper_Nethertoxin
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Viper_Nethertoxin::~CDOTA_Modifier_Viper_Nethertoxin(
        CDOTA_Modifier_Viper_Nethertoxin *const this)
{
  this->_vptr_CDOTA_Buff = &off_444B610;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Viper_Nethertoxin::IsHidden  (line 438, @0x0000000002b14be0, libserver.so)
bool __fastcall CDOTA_Modifier_Viper_Nethertoxin::IsHidden(CDOTA_Modifier_Viper_Nethertoxin *const this)
{
  return 1;
}


// CDOTA_Modifier_Viper_Nethertoxin::OnCreated  (line 456, @0x0000000002b09ff0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "non_hero_damage_pct"
void __fastcall CDOTA_Modifier_Viper_Nethertoxin::OnCreated(
        CDOTA_Modifier_Viper_Nethertoxin *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "bonus_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->non_hero_damage_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "non_hero_damage_pct", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_damage = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->non_hero_damage_pct = 0;
}


// CDOTA_Modifier_Viper_Nethertoxin::OnRefresh  (line 464, @0x0000000002b0a080, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "non_hero_damage_pct"
void __fastcall CDOTA_Modifier_Viper_Nethertoxin::OnRefresh(
        CDOTA_Modifier_Viper_Nethertoxin *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_damage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "bonus_damage", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->non_hero_damage_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "non_hero_damage_pct", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_damage = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->non_hero_damage_pct = 0;
}


// CDOTA_Modifier_Viper_Nethertoxin::DeclareFunctions  (line 472, @0x0000000002ae7620, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Viper_Nethertoxin::GetModifierPreAttack_BonusDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Viper_Nethertoxin::DeclareFunctions(CDOTA_Modifier_Viper_Nethertoxin *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_Viper_Nethertoxin::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
}


// CDOTA_Modifier_Viper_Nethertoxin::GetModifierPreAttack_BonusDamage  (line 479, @0x0000000002af0d30, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetHealthPercent, GetInstance, IndexToIdentity, IsValid, LookupEntity, Max<int>, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, powf
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Viper_Nethertoxin::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_Viper_Nethertoxin *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  __m128i v6; // xmm0
  CEntityInstance *m_pInstance; // rbx
  __int64 v9; // r13
  int v10; // eax
  __int64 v11; // rcx
  float fPower; // [rsp+8h] [rbp-28h]
  float fDamage; // [rsp+Ch] [rbp-24h]
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1
    || (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v5 = &v4[params->htarget.m_Index & 0x1FF]) == 0
    || m_Index != v5->m_EHandle.m_Index
    || (m_pInstance = v5->m_pInstance, v5->m_pInstance == 0)
    || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
  {
    if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
      goto LABEL_6;
LABEL_9:
    *&result.m_eType = 1;
    goto LABEL_8;
  }
  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) != 0 )
    goto LABEL_9;
  if ( LOBYTE(m_pInstance[71].m_pEntity) == 0
    && CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value != HIBYTE(m_pInstance[7].m_CScriptComponent) )
  {
    fDamage = this->bonus_damage;
    v9 = 100LL * CBaseEntity::GetHealth(m_pInstance);
    v10 = (*(m_pInstance->_vptr_IHandleEntity + 156))(m_pInstance);
    v11 = 1;
    if ( v10 > 0 )
      v11 = v10;
    fPower = ((v9 / v11 - 1) / -20 + 4);
    *v6.m128i_i32 = powf(2.0, fPower);
    if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
      *v6.m128i_i32 = (*v6.m128i_i32 * fDamage);
    else
      *v6.m128i_i32 = (((powf(2.0, fPower) * fDamage) * this->non_hero_damage_pct) / 100.0);
    goto LABEL_7;
  }
LABEL_6:
  v6 = 0;
LABEL_7:
  *&result.m_eType = (_mm_cvtsi128_si32(v6) << 32) | 1;
LABEL_8:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Ability_Viper_CorrosiveSkin::~CDOTA_Ability_Viper_CorrosiveSkin  (line 512, @0x0000000002b1bf10, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Viper_CorrosiveSkin::~CDOTA_Ability_Viper_CorrosiveSkin(
        CDOTA_Ability_Viper_CorrosiveSkin *const this)
{
  this->_vptr_IHandleEntity = &off_444B970;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Viper_CorrosiveSkin::~CDOTA_Ability_Viper_CorrosiveSkin  (line 512, @0x0000000002b1bf30, libserver.so)  // inlines: ~CDOTA_Ability_Viper_CorrosiveSkin
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Viper_CorrosiveSkin::~CDOTA_Ability_Viper_CorrosiveSkin(
        CDOTA_Ability_Viper_CorrosiveSkin *const this)
{
  this->_vptr_IHandleEntity = &off_444B970;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Viper_CorrosiveSkin::Schema_DynamicBinding  (line 514, @0x0000000002b14bf0, libserver.so)
// globals: CDOTA_Ability_Viper_CorrosiveSkin::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Viper_CorrosiveSkin::Schema_DynamicBinding(
        const CDOTA_Ability_Viper_CorrosiveSkin *const this)
{
  return CDOTA_Ability_Viper_CorrosiveSkin::s_pSchemaBinding;
}


// CDOTA_Ability_Viper_CorrosiveSkin::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 514, @0x0000000002b14c00, libserver.so)
// globals: CDOTA_Ability_Viper_CorrosiveSkin::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Viper_CorrosiveSkin::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Viper_CorrosiveSkin::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Viper_CorrosiveSkin::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Viper_CorrosiveSkin::CEntityInstanceEntityClass::DestructInstance  (line 514, @0x0000000002b14c10, libserver.so)  // inlines: Destruct<CDOTA_Ability_Viper_CorrosiveSkin>
void __fastcall CDOTA_Ability_Viper_CorrosiveSkin::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Viper_CorrosiveSkin::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Viper_CorrosiveSkin::CEntityInstanceEntityClass::FreeInstance  (line 514, @0x0000000002b14c30, libserver.so)
void __fastcall CDOTA_Ability_Viper_CorrosiveSkin::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Viper_CorrosiveSkin::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Viper_CorrosiveSkin::CEntityInstanceEntityClass::CanAllocate  (line 514, @0x0000000002b14c50, libserver.so)
bool __fastcall CDOTA_Ability_Viper_CorrosiveSkin::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Viper_CorrosiveSkin::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Viper_CorrosiveSkin::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 514, @0x0000000002b14c60, libserver.so)
// globals: CDOTA_Ability_Viper_CorrosiveSkin::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Viper_CorrosiveSkin::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Viper_CorrosiveSkin::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Viper_CorrosiveSkin::s_pSchemaBinding;
}


// CDOTA_Ability_Viper_CorrosiveSkin::CEntityInstanceEntityClass::AllocateInstance  (line 514, @0x0000000002b18bf0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Viper_CorrosiveSkin::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Viper_CorrosiveSkin::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Viper_CorrosiveSkin::CEntityInstanceEntityClass::ConstructInstance  (line 514, @0x0000000002b1b550, libserver.so)  // inlines: CDOTA_Ability_Viper_CorrosiveSkin, Construct<CDOTA_Ability_Viper_CorrosiveSkin>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Viper_CorrosiveSkin::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Viper_CorrosiveSkin::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_444B970;
  }
  return p;
}


// CDOTA_Ability_Viper_CorrosiveSkin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 514, @0x0000000002b21c80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Viper_CorrosiveSkin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Viper_CorrosiveSkin::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Viper_CorrosiveSkin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 514, @0x0000000002b21ca0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Viper_CorrosiveSkin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Viper_CorrosiveSkin::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Viper_CorrosiveSkin::GetEntityClassInternal  (line 514, @0x0000000002b28be0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "CDOTA_Ability_Viper_CorrosiveSkin"
// globals: `guard variable for'CDOTA_Ability_Viper_CorrosiveSkin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_CorrosiveSkinClass, CDOTA_Ability_Viper_CorrosiveSkin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_CorrosiveSkinClass, __dso_handle, CDOTA_Ability_Viper_CorrosiveSkin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Viper_CorrosiveSkin::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_CorrosiveSkinClassInfo, CDOTA_Ability_Viper_CorrosiveSkin::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_CorrosiveSkinClassInfo
CEntityClass *__cdecl CDOTA_Ability_Viper_CorrosiveSkin::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Viper_CorrosiveSkin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_CorrosiveSkinClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Viper_CorrosiveSkin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_CorrosiveSkinClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Viper_CorrosiveSkin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_CorrosiveSkinClass);
    CDOTA_Ability_Viper_CorrosiveSkin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_CorrosiveSkinClass._vptr_CEntityClass = off_444B8F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Viper_CorrosiveSkin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_CorrosiveSkinClass);
    __cxa_atexit(
      CDOTA_Ability_Viper_CorrosiveSkin::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Viper_CorrosiveSkin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_CorrosiveSkinClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Viper_CorrosiveSkinClass != 0 )
    return &CDOTA_Ability_Viper_CorrosiveSkin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_CorrosiveSkinClass;
  if ( `guard variable for'CDOTA_Ability_Viper_CorrosiveSkin::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_CorrosiveSkinClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Viper_CorrosiveSkin::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_CorrosiveSkinClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Viper_CorrosiveSkin::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_CorrosiveSkinClassInfo,
      "CDOTA_Ability_Viper_CorrosiveSkin",
      "viper_corrosive_skin",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Viper_CorrosiveSkin::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_CorrosiveSkinClassInfo);
  }
  CDOTA_Ability_Viper_CorrosiveSkin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_CorrosiveSkinClass.m_pClassInfo = &CDOTA_Ability_Viper_CorrosiveSkin::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_CorrosiveSkinClassInfo;
  CDOTA_Ability_Viper_CorrosiveSkin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_CorrosiveSkinClass.m_pBaseClassInfo = CDOTA_Ability_Viper_CorrosiveSkin::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_CorrosiveSkinClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Viper_CorrosiveSkinClass = &CDOTA_Ability_Viper_CorrosiveSkin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_CorrosiveSkinClass;
  CDOTA_Ability_Viper_CorrosiveSkin::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_CorrosiveSkinClassInfo.m_pClass = &CDOTA_Ability_Viper_CorrosiveSkin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_CorrosiveSkinClass;
  CDOTA_Ability_Viper_CorrosiveSkin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_CorrosiveSkinClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Viper_CorrosiveSkinClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Viper_CorrosiveSkin::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_CorrosiveSkinClass;
}


// CDOTA_Ability_Viper_CorrosiveSkin::GetIntrinsicModifierName  (line 518, @0x0000000002b14c70, libserver.so)
// strings: "modifier_viper_corrosive_skin"
const char *__fastcall CDOTA_Ability_Viper_CorrosiveSkin::GetIntrinsicModifierName(
        CDOTA_Ability_Viper_CorrosiveSkin *const this)
{
  return "modifier_viper_corrosive_skin";
}


// CDOTA_Ability_Viper_CorrosiveSkin::YouForgotToImplementOrDeclareServerClass  (line 525, @0x0000000002ae7640, libserver.so)
int __fastcall CDOTA_Ability_Viper_CorrosiveSkin::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Viper_CorrosiveSkin *const this)
{
  return 0;
}


// CDOTA_Ability_Viper_CorrosiveSkin::GetServerClass  (line 525, @0x0000000002af2c30, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Viper_CorrosiveSkin::GetServerClass(
        CDOTA_Ability_Viper_CorrosiveSkin *const this)
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


// CDOTA_Modifier_Viper_CorrosiveSkin::~CDOTA_Modifier_Viper_CorrosiveSkin  (line 536, @0x0000000002b1ae70, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Viper_CorrosiveSkin::~CDOTA_Modifier_Viper_CorrosiveSkin(
        CDOTA_Modifier_Viper_CorrosiveSkin *const this)
{
  this->_vptr_CDOTA_Buff = &off_444C430;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Viper_CorrosiveSkin::~CDOTA_Modifier_Viper_CorrosiveSkin  (line 536, @0x0000000002b1ae90, libserver.so)  // inlines: ~CDOTA_Modifier_Viper_CorrosiveSkin
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Viper_CorrosiveSkin::~CDOTA_Modifier_Viper_CorrosiveSkin(
        CDOTA_Modifier_Viper_CorrosiveSkin *const this)
{
  this->_vptr_CDOTA_Buff = &off_444C430;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Viper_CorrosiveSkin::IsHidden  (line 541, @0x0000000002b14c80, libserver.so)
bool __fastcall CDOTA_Modifier_Viper_CorrosiveSkin::IsHidden(CDOTA_Modifier_Viper_CorrosiveSkin *const this)
{
  return 1;
}


// CDOTA_Modifier_Viper_CorrosiveSkin::OnCreated  (line 559, @0x0000000002b09e40, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_magic_resistance"
void __fastcall CDOTA_Modifier_Viper_CorrosiveSkin::OnCreated(
        CDOTA_Modifier_Viper_CorrosiveSkin *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_magic_resistance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                     Ability,
                                     "bonus_magic_resistance",
                                     -1,
                                     0);
  else
    this->bonus_magic_resistance = 0;
}


// CDOTA_Modifier_Viper_CorrosiveSkin::OnRefresh  (line 566, @0x0000000002b09d20, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_magic_resistance"
void __fastcall CDOTA_Modifier_Viper_CorrosiveSkin::OnRefresh(
        CDOTA_Modifier_Viper_CorrosiveSkin *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_magic_resistance = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                     Ability,
                                     "bonus_magic_resistance",
                                     -1,
                                     0);
  else
    this->bonus_magic_resistance = 0;
}


// CDOTA_Modifier_Viper_CorrosiveSkin::DeclareFunctions  (line 573, @0x0000000002ae7650, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Viper_CorrosiveSkin::DeclareFunctions(CDOTA_Modifier_Viper_CorrosiveSkin *const this)
{
  this->m_Functions[134].__pfn = (&stru_10 + 697);
  this->m_Functions[134].__delta = 0;
  this->m_Functions[49].__pfn = (&stru_10 + 705);
  this->m_Functions[49].__delta = 0;
}


// CDOTA_Modifier_Viper_CorrosiveSkin::OnTakeDamage  (line 582, @0x0000000002b00a10, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, Unit, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::GetRangeToUnit, DotaRetrieveAbilityValue<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_viper_corrosive_skin_slow"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Viper_CorrosiveSkin::OnTakeDamage(
        CDOTA_Modifier_Viper_CorrosiveSkin *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  uint32 v9; // ecx
  CEntityIdentity *v10; // rax
  CEntityIdentity *v11; // rax
  CEntityInstance *v12; // rbx
  int m_Id; // eax
  CDOTA_BaseNPC *Parent; // rax
  float RangeToUnit; // xmm0_4
  CDOTABaseAbility *Ability; // rax
  float v17; // xmm1_4
  CDOTABaseAbility *v18; // r14
  CDOTA_BaseNPC *Caster; // rax
  float duration; // [rsp+Ch] [rbp-44h] BYREF
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-28h]
  ModifierVariant_t result; // 0:rax.16

  m_pInstance = 0;
  v22 = __readfsqword(0x28u);
  m_Index = params->hunit.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hunit.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[params->hunit.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance
    && CDOTA_Buff::GetAbility(this) != 0
    && (params->nDamageflags & 0x10) == 0 )
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
          if ( v11->m_pInstance != 0 && BYTE3(v12[7]._vptr_IHandleEntity) != 0 )
          {
            m_Id = v12[43].m_iszPrivateVScripts.u.m_Id;
            if ( (m_Id & 0x10) == 0
              && (BYTE1(v12[58]._vptr_IHandleEntity) & 2) == 0
              && (m_Id & 0x193) != 0
              && CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value != HIBYTE(v12[7].m_CScriptComponent) )
            {
              Parent = CDOTA_Buff::GetParent(this);
              RangeToUnit = CDOTA_BaseNPC::GetRangeToUnit(Parent, v12);
              *&result.m_eType = 1;
              if ( RangeToUnit > 1400.0 )
                goto LABEL_8;
              if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
              {
                Ability = CDOTA_Buff::GetAbility(this);
                DotaRetrieveAbilityValue<float>(Ability, &duration, "duration");
                KeyValues::KeyValues(&kv, "modifier_viper_corrosive_skin_slow");
                KeyValues::SetFloat(&kv, "duration", v17);
                v18 = CDOTA_Buff::GetAbility(this);
                Caster = CDOTA_Buff::GetCaster(this);
                CDOTA_BaseNPC::AddNewModifier(v12, Caster, v18, "modifier_viper_corrosive_skin_slow", &kv, 0);
                KeyValues::~KeyValues(&kv);
              }
            }
          }
        }
      }
    }
  }
  *&result.m_eType = 1;
LABEL_8:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Viper_CorrosiveSkin::GetModifierMagicalResistanceBonus  (line 613, @0x0000000002aec870, libserver.so)
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Viper_CorrosiveSkin::GetModifierMagicalResistanceBonus(
        CDOTA_Modifier_Viper_CorrosiveSkin *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) != 0 )
    return 1uLL;
  *v3.m128i_i32 = this->bonus_magic_resistance;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Viper_CorrosiveSkin_Slow::~CDOTA_Modifier_Viper_CorrosiveSkin_Slow  (line 625, @0x0000000002b1ae20, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Viper_CorrosiveSkin_Slow::~CDOTA_Modifier_Viper_CorrosiveSkin_Slow(
        CDOTA_Modifier_Viper_CorrosiveSkin_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_444C770;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Viper_CorrosiveSkin_Slow::~CDOTA_Modifier_Viper_CorrosiveSkin_Slow  (line 625, @0x0000000002b1ae40, libserver.so)  // inlines: ~CDOTA_Modifier_Viper_CorrosiveSkin_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Viper_CorrosiveSkin_Slow::~CDOTA_Modifier_Viper_CorrosiveSkin_Slow(
        CDOTA_Modifier_Viper_CorrosiveSkin_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_444C770;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Viper_CorrosiveSkin_Slow::IsDebuff  (line 630, @0x0000000002b14c90, libserver.so)
bool __fastcall CDOTA_Modifier_Viper_CorrosiveSkin_Slow::IsDebuff(CDOTA_Modifier_Viper_CorrosiveSkin_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_Viper_CorrosiveSkin_Slow::GetEffectName  (line 640, @0x0000000002b14ca0, libserver.so)
// strings: "particles/units/heroes/hero_viper/viper_poison_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Viper_CorrosiveSkin_Slow::GetEffectName(
        CDOTA_Modifier_Viper_CorrosiveSkin_Slow *const this)
{
  return "particles/units/heroes/hero_viper/viper_poison_debuff.vpcf";
}


// CDOTA_Modifier_Viper_CorrosiveSkin_Slow::OnCreated  (line 655, @0x0000000002b0ac50, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Viper_CorrosiveSkin_Slow::OnCreated(
        CDOTA_Modifier_Viper_CorrosiveSkin_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_movement_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_7:
    this->bonus_attack_speed = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
LABEL_8:
    this->damage = 0;
    goto LABEL_5;
  }
  this->bonus_movement_speed = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_7;
LABEL_3:
  this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_attack_speed", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "damage", -1, 0);
LABEL_5:
  CDOTA_Buff::StartIntervalThink(this, 1.0, v6);
}


// CDOTA_Modifier_Viper_CorrosiveSkin_Slow::OnRefresh  (line 670, @0x0000000002b0a790, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Viper_CorrosiveSkin_Slow::OnRefresh(
        CDOTA_Modifier_Viper_CorrosiveSkin_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_movement_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->bonus_attack_speed = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->bonus_movement_speed = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_attack_speed", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "damage", -1, 0);
    return;
  }
LABEL_7:
  this->damage = 0;
}


// CDOTA_Modifier_Viper_CorrosiveSkin_Slow::OnIntervalThink  (line 679, @0x0000000002ae91c0, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage, SendOverheadEventMessage
void __fastcall CDOTA_Modifier_Viper_CorrosiveSkin_Slow::OnIntervalThink(
        CDOTA_Modifier_Viper_CorrosiveSkin_Slow *const this)
{
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // rax
  float flDamage; // [rsp+Ch] [rbp-24h]

  flDamage = this->damage;
  Ability = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, Ability, flDamage, 2, 16);
  LODWORD(Parent) = this->damage;
  v5 = CDOTA_Buff::GetParent(this);
  SendOverheadEventMessage(0, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BONUS_SPELL_DAMAGE, v5, Parent, 0);
}


// CDOTA_Modifier_Viper_CorrosiveSkin_Slow::DeclareFunctions  (line 689, @0x0000000002ae7690, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Viper_CorrosiveSkin_Slow::DeclareFunctions(
        CDOTA_Modifier_Viper_CorrosiveSkin_Slow *const this)
{
  this->m_Functions[13].__pfn = (&stru_10 + 697);
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__pfn = (&stru_10 + 705);
  this->m_Functions[24].__delta = 0;
}


// CDOTA_Modifier_Viper_CorrosiveSkin_Slow::GetModifierMoveSpeedBonus_Percentage  (line 697, @0x0000000002ae76d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Viper_CorrosiveSkin_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Viper_CorrosiveSkin_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Viper_CorrosiveSkin_Slow::GetModifierAttackSpeedBonus_Constant  (line 704, @0x0000000002ae76f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Viper_CorrosiveSkin_Slow::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Viper_CorrosiveSkin_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Viper_ViperStrike::~CDOTA_Ability_Viper_ViperStrike  (line 715, @0x0000000002b1bf60, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Viper_ViperStrike::~CDOTA_Ability_Viper_ViperStrike(
        CDOTA_Ability_Viper_ViperStrike *const this)
{
  this->_vptr_IHandleEntity = &off_444CAF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Viper_ViperStrike::~CDOTA_Ability_Viper_ViperStrike  (line 715, @0x0000000002b1bf80, libserver.so)  // inlines: ~CDOTA_Ability_Viper_ViperStrike
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Viper_ViperStrike::~CDOTA_Ability_Viper_ViperStrike(
        CDOTA_Ability_Viper_ViperStrike *const this)
{
  this->_vptr_IHandleEntity = &off_444CAF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Viper_ViperStrike::Schema_DynamicBinding  (line 717, @0x0000000002b14cb0, libserver.so)
// globals: CDOTA_Ability_Viper_ViperStrike::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Viper_ViperStrike::Schema_DynamicBinding(
        const CDOTA_Ability_Viper_ViperStrike *const this)
{
  return CDOTA_Ability_Viper_ViperStrike::s_pSchemaBinding;
}


// CDOTA_Ability_Viper_ViperStrike::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 717, @0x0000000002b14cc0, libserver.so)
// globals: CDOTA_Ability_Viper_ViperStrike::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Viper_ViperStrike::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Viper_ViperStrike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Viper_ViperStrike::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Viper_ViperStrike::CEntityInstanceEntityClass::DestructInstance  (line 717, @0x0000000002b14cd0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Viper_ViperStrike>
void __fastcall CDOTA_Ability_Viper_ViperStrike::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Viper_ViperStrike::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Viper_ViperStrike::CEntityInstanceEntityClass::FreeInstance  (line 717, @0x0000000002b14cf0, libserver.so)
void __fastcall CDOTA_Ability_Viper_ViperStrike::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Viper_ViperStrike::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Viper_ViperStrike::CEntityInstanceEntityClass::CanAllocate  (line 717, @0x0000000002b14d10, libserver.so)
bool __fastcall CDOTA_Ability_Viper_ViperStrike::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Viper_ViperStrike::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Viper_ViperStrike::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 717, @0x0000000002b14d20, libserver.so)
// globals: CDOTA_Ability_Viper_ViperStrike::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Viper_ViperStrike::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Viper_ViperStrike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Viper_ViperStrike::s_pSchemaBinding;
}


// CDOTA_Ability_Viper_ViperStrike::CEntityInstanceEntityClass::AllocateInstance  (line 717, @0x0000000002b18c30, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Viper_ViperStrike::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Viper_ViperStrike::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Viper_ViperStrike::CEntityInstanceEntityClass::ConstructInstance  (line 717, @0x0000000002b1b580, libserver.so)  // inlines: CDOTA_Ability_Viper_ViperStrike, Construct<CDOTA_Ability_Viper_ViperStrike>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Viper_ViperStrike::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Viper_ViperStrike::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_444CAF0;
  }
  return p;
}


// CDOTA_Ability_Viper_ViperStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 717, @0x0000000002b21cd0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Viper_ViperStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Viper_ViperStrike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Viper_ViperStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 717, @0x0000000002b21cf0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Viper_ViperStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Viper_ViperStrike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Viper_ViperStrike::GetEntityClassInternal  (line 717, @0x0000000002b28d30, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_02.cpp
// strings: "CDOTA_Ability_Viper_ViperStrike"
// globals: `guard variable for'CDOTA_Ability_Viper_ViperStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_ViperStrikeClass, CDOTA_Ability_Viper_ViperStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_ViperStrikeClass, __dso_handle, CDOTA_Ability_Viper_ViperStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Viper_ViperStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_ViperStrikeClassInfo, CDOTA_Ability_Viper_ViperStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_ViperStrikeClassInfo
CEntityClass *__cdecl CDOTA_Ability_Viper_ViperStrike::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Viper_ViperStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_ViperStrikeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Viper_ViperStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_ViperStrikeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Viper_ViperStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_ViperStrikeClass);
    CDOTA_Ability_Viper_ViperStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_ViperStrikeClass._vptr_CEntityClass = off_444CA70;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Viper_ViperStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_ViperStrikeClass);
    __cxa_atexit(
      CDOTA_Ability_Viper_ViperStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Viper_ViperStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_ViperStrikeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Viper_ViperStrikeClass != 0 )
    return &CDOTA_Ability_Viper_ViperStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_ViperStrikeClass;
  if ( `guard variable for'CDOTA_Ability_Viper_ViperStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_ViperStrikeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Viper_ViperStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_ViperStrikeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Viper_ViperStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_ViperStrikeClassInfo,
      "CDOTA_Ability_Viper_ViperStrike",
      "viper_viper_strike",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Viper_ViperStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_ViperStrikeClassInfo);
  }
  CDOTA_Ability_Viper_ViperStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_ViperStrikeClass.m_pClassInfo = &CDOTA_Ability_Viper_ViperStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_ViperStrikeClassInfo;
  CDOTA_Ability_Viper_ViperStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_ViperStrikeClass.m_pBaseClassInfo = CDOTA_Ability_Viper_ViperStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_ViperStrikeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Viper_ViperStrikeClass = &CDOTA_Ability_Viper_ViperStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_ViperStrikeClass;
  CDOTA_Ability_Viper_ViperStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Viper_ViperStrikeClassInfo.m_pClass = &CDOTA_Ability_Viper_ViperStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_ViperStrikeClass;
  CDOTA_Ability_Viper_ViperStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_ViperStrikeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Viper_ViperStrikeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Viper_ViperStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Viper_ViperStrikeClass;
}


// CDOTA_Ability_Viper_ViperStrike::GetStolenActivityModifier  (line 729, @0x0000000002b14d30, libserver.so)
const char *__fastcall CDOTA_Ability_Viper_ViperStrike::GetStolenActivityModifier(
        CDOTA_Ability_Viper_ViperStrike *const this)
{
  return "viper_strike";
}


// CDOTA_Ability_Viper_ViperStrike::YouForgotToImplementOrDeclareServerClass  (line 737, @0x0000000002ae7710, libserver.so)
int __fastcall CDOTA_Ability_Viper_ViperStrike::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Viper_ViperStrike *const this)
{
  return 0;
}


// CDOTA_Ability_Viper_ViperStrike::GetServerClass  (line 737, @0x0000000002af27b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Viper_ViperStrike::GetServerClass(CDOTA_Ability_Viper_ViperStrike *const this)
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


// CDOTA_Ability_Viper_ViperStrike::OnAbilityPhaseStart  (line 744, @0x0000000002ae8880, libserver.so)
// calls: CDOTABaseAbility::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "particles/units/heroes/hero_viper/viper_viper_strike_warmup.vpcf", "attach_wing_barb_1", "attach_wing_barb_2", "attach_wing_barb_3", "attach_wing_barb_4"
bool __fastcall CDOTA_Ability_Viper_ViperStrike::OnAbilityPhaseStart(CDOTA_Ability_Viper_ViperStrike *const this)
{
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v4; // r14
  CDOTA_ParticleManager *v5; // rax
  __int64 v6; // r13
  vec_t v7; // r15d
  CDOTA_BaseNPC *v8; // r14
  CDOTA_ParticleManager *v9; // rax
  CDOTA_BaseNPC *v10; // r14
  CDOTA_ParticleManager *v11; // rax
  CDOTA_BaseNPC *v12; // r12
  CDOTA_ParticleManager *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  Vector v16; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v17; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v18; // 0:xmm0_8.8,8:xmm1_4.4

  Caster = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_viper/viper_viper_strike_warmup.vpcf",
                      1,
                      Caster,
                      0,
                      0);
  v4 = CDOTABaseAbility::GetCaster(this);
  v5 = GetParticleManager();
  v6 = *&vec3_invalid.x;
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(vec3_invalid.z)));
  CDOTA_ParticleManager::SetParticleControlEnt(v5, Caster, 1, v4, 5, "attach_wing_barb_1", vec3_invalid, 1);
  v8 = CDOTABaseAbility::GetCaster(this);
  v9 = GetParticleManager();
  *&v16.x = v6;
  v16.z = v7;
  CDOTA_ParticleManager::SetParticleControlEnt(v9, Caster, 2, v8, 5, "attach_wing_barb_2", v16, 1);
  v10 = CDOTABaseAbility::GetCaster(this);
  v11 = GetParticleManager();
  *&v17.x = v6;
  v17.z = v7;
  CDOTA_ParticleManager::SetParticleControlEnt(v11, Caster, 3, v10, 5, "attach_wing_barb_3", v17, 1);
  v12 = CDOTABaseAbility::GetCaster(this);
  v13 = GetParticleManager();
  *&v18.x = v6;
  v18.z = v7;
  CDOTA_ParticleManager::SetParticleControlEnt(v13, Caster, 4, v12, 5, "attach_wing_barb_4", v18, 1);
  v14 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v14, Caster);
  return 1;
}


// CDOTA_Ability_Viper_ViperStrike::OnSpellStart  (line 760, @0x0000000002b07b90, libserver.so)  // inlines: CEntityHandle, CHandle, Color, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, IndexToIdentity, IsValid, LookupEntity, Set, Vector, operator CBaseEntity*, operator CEntityInstance*, operator=, sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::UnitEmitSound, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCursorTarget, CDOTA_ProjectileManager::CreateTrackingProjectile, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, __stack_chk_fail
// strings: "hero_viper.viperStrike", "particles/units/heroes/hero_viper/viper_viper_strike_beam.vpcf", "attach_hitloc", "attach_wing_barb_1", "attach_wing_barb_2", "attach_wing_barb_3" (7 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Viper_ViperStrike::OnSpellStart(CDOTA_Ability_Viper_ViperStrike *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  vec_t y; // xmm0_4
  CDOTA_BaseNPC *v4; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v6; // cx
  CBaseEntity *CursorTarget; // rax
  CEntityIdentity *v8; // rdx
  __int16 v9; // cx
  const CBaseAnimating *m_pInstance; // r14
  CDOTA_BaseNPC *v11; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax
  CConcreteEntityList *v14; // rsi
  int v15; // r13d
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  CDOTA_ParticleManager *v18; // rax
  __int64 v19; // r12
  vec_t v20; // r15d
  CDOTA_BaseNPC *v21; // rax
  int m_nFXIndex; // r13d
  const CBaseAnimating *v23; // r14
  CDOTA_ParticleManager *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  int v26; // r13d
  const CBaseAnimating *v27; // r14
  CDOTA_ParticleManager *v28; // rax
  CDOTA_BaseNPC *v29; // rax
  int v30; // r13d
  const CBaseAnimating *v31; // r14
  CDOTA_ParticleManager *v32; // rax
  CDOTA_BaseNPC *v33; // rax
  int v34; // r13d
  const CBaseAnimating *v35; // r14
  CDOTA_ParticleManager *v36; // rax
  int v37; // ebx
  CDOTA_ParticleManager *v38; // rax
  unsigned int v39; // [rsp+10h] [rbp-B0h]
  sTrackingProjectileCreateInfo info; // [rsp+20h] [rbp-A0h] BYREF
  unsigned __int64 v41; // [rsp+88h] [rbp-38h]
  Vector v42; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v43; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v44; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v45; // 0:xmm0_8.8,8:xmm1_4.4

  v41 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(Caster, "hero_viper.viperStrike", 0.0, 0, 0);
  info.hTarget.m_Index = -1;
  info.colorGemColor = 0;
  info.hSource.m_Index = -1;
  info.bProvidesVision = 0;
  info.pszEffectName = 0;
  info.vSourceLoc.x = vec3_origin.x;
  y = vec3_origin.y;
  info.pAttackRecord = 0;
  info.vSourceLoc.y = y;
  info.vSourceLoc.z = vec3_origin.z;
  info.iSourceAttachment = 1;
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
  info.pAbility = this;
  info.iMoveSpeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "projectile_speed", -1, 0);
  v4 = CDOTABaseAbility::GetCaster(this);
  if ( v4 != 0 && (m_pEntity = v4->m_pEntity) != 0 )
  {
    v6 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v6 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v6 & 0x7FFF;
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    if ( CursorTarget == 0 )
      goto LABEL_18;
  }
  else
  {
    info.hSource.m_Index = -1;
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    if ( CursorTarget == 0 )
      goto LABEL_18;
  }
  v8 = CursorTarget->m_pEntity;
  if ( v8 != 0 )
  {
    if ( v8->m_EHandle.m_Index == -1 )
      v9 = 0x7FFF;
    else
      v9 = v8->m_EHandle.m_Index & 0x7FFF;
    info.hTarget.m_Index = (((v8->m_EHandle.m_Index >> 15) - (v8->m_flags & 1)) << 15) | v9 & 0x7FFF;
    goto LABEL_10;
  }
LABEL_18:
  info.hTarget.m_Index = -1;
LABEL_10:
  info.bDodgeable = 1;
  m_pInstance = 0;
  CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
  v11 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_viper/viper_viper_strike_beam.vpcf",
               1,
               v11,
               0,
               0);
  v14 = CEntityHandle::gm_pEntityList;
  v15 = Particle;
  this->m_nFXIndex = Particle;
  if ( info.hTarget.m_Index + 2 > 1 )
  {
    v16 = v14->m_pIdentityChunks[(LOWORD(info.hTarget.m_Index) >> 9) & 0x3F];
    if ( v16 != 0 )
    {
      v17 = &v16[info.hTarget.m_Index & 0x1FF];
      if ( v17 != 0 && info.hTarget.m_Index == v17->m_EHandle.m_Index )
        m_pInstance = v17->m_pInstance;
    }
  }
  v18 = GetParticleManager();
  v19 = *&vec3_invalid.x;
  v20 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(vec3_invalid.z)));
  CDOTA_ParticleManager::SetParticleControlEnt(v18, v15, 1, m_pInstance, 5, "attach_hitloc", vec3_invalid, 1);
  v21 = CDOTABaseAbility::GetCaster(this);
  m_nFXIndex = this->m_nFXIndex;
  v23 = v21;
  v24 = GetParticleManager();
  *&v42.x = v19;
  v42.z = v20;
  CDOTA_ParticleManager::SetParticleControlEnt(v24, m_nFXIndex, 2, v23, 5, "attach_wing_barb_1", v42, 1);
  v25 = CDOTABaseAbility::GetCaster(this);
  v26 = this->m_nFXIndex;
  v27 = v25;
  v28 = GetParticleManager();
  *&v43.x = v19;
  v43.z = v20;
  CDOTA_ParticleManager::SetParticleControlEnt(v28, v26, 3, v27, 5, "attach_wing_barb_2", v43, 1);
  v29 = CDOTABaseAbility::GetCaster(this);
  v30 = this->m_nFXIndex;
  v31 = v29;
  v32 = GetParticleManager();
  *&v44.x = v19;
  v44.z = v20;
  CDOTA_ParticleManager::SetParticleControlEnt(v32, v30, 4, v31, 5, "attach_wing_barb_3", v44, 1);
  v33 = CDOTABaseAbility::GetCaster(this);
  v34 = this->m_nFXIndex;
  v35 = v33;
  v36 = GetParticleManager();
  v45.z = v20;
  *&v45.x = v19;
  CDOTA_ParticleManager::SetParticleControlEnt(v36, v34, 5, v35, 5, "attach_wing_barb_4", v45, 1);
  v37 = this->m_nFXIndex;
  *&v39 = info.iMoveSpeed;
  v38 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v38, v37, 6, COERCE_DOUBLE(v39), 0.0);
}


// CDOTA_Ability_Viper_ViperStrike::OnProjectileHit  (line 789, @0x0000000002b02980, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, __stack_chk_fail, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_viper_viper_strike", "modifier_viper_viper_strike_slow"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Viper_ViperStrike::OnProjectileHit(
        CDOTA_Ability_Viper_ViperStrike *const this,
        _WORD *hTarget,
        const Vector *const vLocation)
{
  int m_nFXIndex; // r13d
  CDOTA_ParticleManager *ParticleManager; // rax
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CEntityInstance *m_pInstance; // r12
  float v11; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  m_nFXIndex = this->m_nFXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 0);
  if ( (*hTarget + 2) > 1 )
  {
    v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
    if ( v7 != 0 )
    {
      v8 = &v7[*hTarget & 0x1FF];
      if ( v8 != 0 && *hTarget == v8->m_EHandle.m_Index )
      {
        m_pInstance = v8->m_pInstance;
        if ( v8->m_pInstance != 0
          && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0
          && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 1) == 0
          && !CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, this, 1) )
        {
          CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
          KeyValues::KeyValues(&kv, "modifier_viper_viper_strike");
          KeyValues::SetFloat(&kv, "duration", v11);
          Caster = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(m_pInstance, Caster, this, "modifier_viper_viper_strike_slow", &kv, 0);
          KeyValues::~KeyValues(&kv);
        }
      }
    }
  }
  return 1;
}


// CDOTA_Ability_Viper_ViperStrike::GetCooldown  (line 811, @0x0000000002b03c20, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Viper_ViperStrike::GetCooldown(CDOTA_Ability_Viper_ViperStrike *const this, int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "cooldown_scepter", -1, 0);
  else
    return CDOTABaseAbility::GetCooldown(this, iLevel);
}


// CDOTA_Ability_Viper_ViperStrike::GetManaCost  (line 818, @0x0000000002b08030, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetManaCost, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "mana_cost_scepter"
int __fastcall CDOTA_Ability_Viper_ViperStrike::GetManaCost(CDOTA_Ability_Viper_ViperStrike *const this, int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "mana_cost_scepter", -1, 0);
  else
    return CDOTABaseAbility::GetManaCost(this, iLevel);
}


// CDOTA_Ability_Viper_ViperStrike::GetCastRange  (line 825, @0x0000000002b08080, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCastRange, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "cast_range_scepter"
int __fastcall CDOTA_Ability_Viper_ViperStrike::GetCastRange(
        CDOTA_Ability_Viper_ViperStrike *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "cast_range_scepter", -1, 0);
  else
    return CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
}


// CDOTA_Ability_Viper_ViperStrike::GetAbilityDamageToTargetOverInterval  (line 832, @0x0000000002b080e0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Viper_ViperStrike::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Viper_ViperStrike *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 0);
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Modifier_Viper_ViperStrike_Slow::~CDOTA_Modifier_Viper_ViperStrike_Slow  (line 844, @0x0000000002b1add0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Viper_ViperStrike_Slow::~CDOTA_Modifier_Viper_ViperStrike_Slow(
        CDOTA_Modifier_Viper_ViperStrike_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_444D5B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Viper_ViperStrike_Slow::~CDOTA_Modifier_Viper_ViperStrike_Slow  (line 844, @0x0000000002b1adf0, libserver.so)  // inlines: ~CDOTA_Modifier_Viper_ViperStrike_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Viper_ViperStrike_Slow::~CDOTA_Modifier_Viper_ViperStrike_Slow(
        CDOTA_Modifier_Viper_ViperStrike_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_444D5B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Viper_ViperStrike_Slow::IsDebuff  (line 849, @0x0000000002b14d40, libserver.so)
bool __fastcall CDOTA_Modifier_Viper_ViperStrike_Slow::IsDebuff(CDOTA_Modifier_Viper_ViperStrike_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_Viper_ViperStrike_Slow::IsPurgable  (line 850, @0x0000000002b14d50, libserver.so)
bool __fastcall CDOTA_Modifier_Viper_ViperStrike_Slow::IsPurgable(CDOTA_Modifier_Viper_ViperStrike_Slow *const this)
{
  return 0;
}


// CDOTA_Modifier_Viper_ViperStrike_Slow::GetEffectName  (line 859, @0x0000000002b14d60, libserver.so)
// strings: "particles/units/heroes/hero_viper/viper_viper_strike_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Viper_ViperStrike_Slow::GetEffectName(
        CDOTA_Modifier_Viper_ViperStrike_Slow *const this)
{
  return "particles/units/heroes/hero_viper/viper_viper_strike_debuff.vpcf";
}


// CDOTA_Modifier_Viper_ViperStrike_Slow::GetStatusEffectName  (line 860, @0x0000000002b14d70, libserver.so)
// strings: "particles/status_fx/status_effect_poison_viper.vpcf"
const char *__fastcall CDOTA_Modifier_Viper_ViperStrike_Slow::GetStatusEffectName(
        CDOTA_Modifier_Viper_ViperStrike_Slow *const this)
{
  return "particles/status_fx/status_effect_poison_viper.vpcf";
}


// CDOTA_Modifier_Viper_ViperStrike_Slow::StatusEffectPriority  (line 861, @0x0000000002b14d80, libserver.so)
int __fastcall CDOTA_Modifier_Viper_ViperStrike_Slow::StatusEffectPriority(
        CDOTA_Modifier_Viper_ViperStrike_Slow *const this)
{
  return 40;
}


// CDOTA_Modifier_Viper_ViperStrike_Slow::OnCreated  (line 874, @0x0000000002b0b580, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Buff::StartIntervalThink
// strings: "special_bonus_unique_viper_2"
void __fastcall CDOTA_Modifier_Viper_ViperStrike_Slow::OnCreated(
        CDOTA_Modifier_Viper_ViperStrike_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v8; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_movement_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_10:
    this->bonus_attack_speed = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
LABEL_11:
    this->damage = 0;
    goto LABEL_5;
  }
  this->bonus_movement_speed = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_10;
LABEL_3:
  this->bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_attack_speed", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_11;
LABEL_4:
  this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "damage", -1, 0);
LABEL_5:
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_viper_2", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->damage += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  CDOTA_Buff::StartIntervalThink(this, 1.0, v8);
}


// CDOTA_Modifier_Viper_ViperStrike_Slow::OnIntervalThink  (line 895, @0x0000000002ae9250, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage, SendOverheadEventMessage
void __fastcall CDOTA_Modifier_Viper_ViperStrike_Slow::OnIntervalThink(
        CDOTA_Modifier_Viper_ViperStrike_Slow *const this)
{
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // rax
  float flDamage; // [rsp+Ch] [rbp-24h]

  flDamage = this->damage;
  Ability = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, Ability, flDamage, 2, 0);
  LODWORD(Parent) = this->damage;
  v5 = CDOTA_Buff::GetParent(this);
  SendOverheadEventMessage(0, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BONUS_SPELL_DAMAGE, v5, Parent, 0);
}


// CDOTA_Modifier_Viper_ViperStrike_Slow::DeclareFunctions  (line 907, @0x0000000002ae7720, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Viper_ViperStrike_Slow::DeclareFunctions(
        CDOTA_Modifier_Viper_ViperStrike_Slow *const this)
{
  this->m_Functions[13].__pfn = (&stru_10 + 697);
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__pfn = (&stru_10 + 705);
  this->m_Functions[24].__delta = 0;
}


// CDOTA_Modifier_Viper_ViperStrike_Slow::GetModifierMoveSpeedBonus_Percentage  (line 915, @0x0000000002ae7760, libserver.so)  // inlines: DOTAGameRules, GetGameTime
ModifierVariant_t __fastcall CDOTA_Modifier_Viper_ViperStrike_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Viper_ViperStrike_Slow *const this,
        const CModifierParams *const params)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  float v5; // xmm0_4
  __int64 v6; // xmm1_8
  float bonus_movement_speed; // [rsp+Ch] [rbp-14h]
  unsigned int v9; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  bonus_movement_speed = this->bonus_movement_speed;
  (*(this->_vptr_CDOTA_Buff + 30))(this, params);
  v4 = 0.0;
  if ( g_pGameRules != 0 )
    v4 = *&g_pGameRules[18].m_szQuestName[20];
  *&v9 = bonus_movement_speed * (v3 - v4);
  v5 = (*(this->_vptr_CDOTA_Buff + 31))(this);
  v6 = v9;
  result.m_szVal = 0;
  *&v6 = *&v9 / v5;
  *&result.m_eType = (v6 << 32) | 1;
  return result;
}


// CDOTA_Modifier_Viper_ViperStrike_Slow::GetModifierAttackSpeedBonus_Constant  (line 922, @0x0000000002ae77e0, libserver.so)  // inlines: DOTAGameRules, GetGameTime
ModifierVariant_t __fastcall CDOTA_Modifier_Viper_ViperStrike_Slow::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Viper_ViperStrike_Slow *const this,
        const CModifierParams *const params)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  float v5; // xmm0_4
  __int64 v6; // xmm1_8
  float bonus_attack_speed; // [rsp+Ch] [rbp-14h]
  unsigned int v9; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  bonus_attack_speed = this->bonus_attack_speed;
  (*(this->_vptr_CDOTA_Buff + 30))(this, params);
  v4 = 0.0;
  if ( g_pGameRules != 0 )
    v4 = *&g_pGameRules[18].m_szQuestName[20];
  *&v9 = bonus_attack_speed * (v3 - v4);
  v5 = (*(this->_vptr_CDOTA_Buff + 31))(this);
  v6 = v9;
  result.m_szVal = 0;
  *&v6 = *&v9 / v5;
  *&result.m_eType = (v6 << 32) | 1;
  return result;
}


