// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_jakiro.cpp:44
class CDOTA_Unit_Hero_Jakiro : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Jakiro(CDOTA_Unit_Hero_Jakiro &);
	CDOTA_Unit_Hero_Jakiro(CDOTA_Unit_Hero_Jakiro &);
	CDOTA_Unit_Hero_Jakiro();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool UsedGestureBasedAttackAnimation();
	virtual ~CDOTA_Unit_Hero_Jakiro();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[439] UsedGestureBasedAttackAnimation
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_jakiro.cpp:59
class C_CDOTA_Unit_Hero_Jakiro_MapInstall {
	C_CDOTA_Unit_Hero_Jakiro_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_jakiro.cpp:76
class CDOTA_Ability_Jakiro_DualBreath : public CDOTABaseAbility {
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
	CDOTA_Ability_Jakiro_DualBreath(CDOTA_Ability_Jakiro_DualBreath &);
	CDOTA_Ability_Jakiro_DualBreath(CDOTA_Ability_Jakiro_DualBreath &);
	CDOTA_Ability_Jakiro_DualBreath();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual void OnProjectileThink_ExtraData(int, KeyValues *);
	virtual bool OnProjectileHit_ExtraData(EHANDLE, const Vector &, KeyValues *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Jakiro_DualBreath();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[293] OnProjectileThink_ExtraData
	// vtable[290] OnProjectileHit_ExtraData
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_jakiro.cpp:91
class C_CDOTA_Ability_Jakiro_DualBreath_MapInstall {
	C_CDOTA_Ability_Jakiro_DualBreath_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_jakiro.cpp:183
class CDOTA_Modifier_Jakiro_DualBreath_Thinker : public CDOTA_Buff {
public:

	int start_radius;  // +0xba8
	int end_radius;  // +0xbac
	float m_fStartTime;  // +0xbb0
	float m_fTotalTime;  // +0xbb4
private:

	CDOTA_Modifier_Jakiro_DualBreath_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsHidden();
	void CreateBreathAttack(bool);
	virtual ~CDOTA_Modifier_Jakiro_DualBreath_Thinker();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[11] IsHidden
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_jakiro.cpp:304
class CDOTA_Modifier_Jakiro_DualBreath_Slow : public CDOTA_Buff {
public:

private:

	int slow_movement_speed_pct;  // +0xba8
	int slow_attack_speed_pct;  // +0xbac
	CDOTA_Modifier_Jakiro_DualBreath_Slow();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual ~CDOTA_Modifier_Jakiro_DualBreath_Slow();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMoveSpeedBonus_Percentage
	// vtable[90] GetModifierAttackSpeedBonus_Constant
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_jakiro.cpp:372
class CDOTA_Modifier_Jakiro_DualBreath_Burn : public CDOTA_Buff {
public:

private:

	int burn_damage;  // +0xba8
	CDOTA_Modifier_Jakiro_DualBreath_Burn();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual const char * GetEffectName();
	virtual int StatusEffectPriority();
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Jakiro_DualBreath_Burn();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[67] GetEffectName
	// vtable[71] StatusEffectPriority
	// vtable[56] OnIntervalThink
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_jakiro.cpp:422
class CDOTA_Ability_Jakiro_IcePath : public CDOTABaseAbility {
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
	CDOTA_Ability_Jakiro_IcePath(CDOTA_Ability_Jakiro_IcePath &);
	CDOTA_Ability_Jakiro_IcePath(CDOTA_Ability_Jakiro_IcePath &);
	CDOTA_Ability_Jakiro_IcePath();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Jakiro_IcePath();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_jakiro.cpp:435
class C_CDOTA_Ability_Jakiro_IcePath_MapInstall {
	C_CDOTA_Ability_Jakiro_IcePath_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_jakiro.cpp:537
class CDOTA_Modifier_Jakiro_IcePath_Stun : public CDOTA_Modifier_Stunned {
public:

	CDOTA_Modifier_Jakiro_IcePath_Stun();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsStunDebuff();
	virtual void OnCreated(KeyValues *);
	virtual ~CDOTA_Modifier_Jakiro_IcePath_Stun();

	// vtable[5] CheckState
	// vtable[16] IsStunDebuff
	// vtable[57] OnCreated
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_jakiro.cpp:567
class CDOTA_Modifier_Jakiro_IcePath_Thinker : public CDOTA_Buff {
public:

private:

	float path_delay;  // +0xba8
	int path_radius;  // +0xbac
	int m_nDamage;  // +0xbb0
	float m_flRadius;  // +0xbb4
	float m_fStartTime;  // +0xbe8
	CDOTA_Modifier_Jakiro_IcePath_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool ShouldSendToClients();
	virtual bool IsHidden();
	virtual int GetNumAvoidLocations();
	virtual Vector GetAvoidLocation(int);
	virtual float AvoidStrength(CDOTA_Bot *);
	virtual float GetAvoidRadius(int);
	virtual bool IsAvoidMagical();
	virtual bool IsPersistentAvoidance();
	virtual ~CDOTA_Modifier_Jakiro_IcePath_Thinker();

	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[8] ShouldSendToClients
	// vtable[11] IsHidden
	// vtable[74] GetNumAvoidLocations
	// vtable[75] GetAvoidLocation
	// vtable[77] AvoidStrength
	// vtable[78] GetAvoidRadius
	// vtable[79] IsAvoidMagical
	// vtable[81] IsPersistentAvoidance
	// sizeof = 3064
};

// src/game/shared/dota/units/dota_unit_hero_jakiro.cpp:696
class CDOTA_Ability_Jakiro_Liquid_Fire : public CDOTABaseAbility {
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
	CDOTA_Ability_Jakiro_Liquid_Fire(CDOTA_Ability_Jakiro_Liquid_Fire &);
	CDOTA_Ability_Jakiro_Liquid_Fire(CDOTA_Ability_Jakiro_Liquid_Fire &);
	CDOTA_Ability_Jakiro_Liquid_Fire();
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
	virtual ~CDOTA_Ability_Jakiro_Liquid_Fire();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[239] ProcsMagicStick
	// vtable[305] IsStealable
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_jakiro.cpp:727
class CDOTA_Modifier_Jakiro_LiquidFire : public CDOTA_Buff {
public:

private:

	float duration;  // +0xba8

	int radius;  // +0xbc8
	int m_nFXIndex;  // +0xbcc
	CDOTA_Modifier_Jakiro_LiquidFire();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	ModifierVariant_t OnAttack(const CModifierParams &);
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	ModifierVariant_t OnAttackFail(const CModifierParams &);
	virtual ~CDOTA_Modifier_Jakiro_LiquidFire();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// sizeof = 3024
};

// src/game/shared/dota/units/dota_unit_hero_jakiro.cpp:929
class CDOTA_Modifier_Jakiro_LiquidFire_Burn : public CDOTA_Buff {
public:

private:

	int slow_attack_speed_pct;  // +0xba8
	int damage;  // +0xbac
	CDOTA_Modifier_Jakiro_LiquidFire_Burn();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Jakiro_LiquidFire_Burn();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierAttackSpeedBonus_Constant
	// vtable[67] GetEffectName
	// vtable[56] OnIntervalThink
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_jakiro.cpp:1006
class CDOTA_Ability_Jakiro_Macropyre : public CDOTABaseAbility {
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
	CDOTA_Ability_Jakiro_Macropyre(CDOTA_Ability_Jakiro_Macropyre &);
	CDOTA_Ability_Jakiro_Macropyre(CDOTA_Ability_Jakiro_Macropyre &);
	CDOTA_Ability_Jakiro_Macropyre();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Jakiro_Macropyre();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[226] GetCastRange
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_jakiro.cpp:1018
class C_CDOTA_Ability_Jakiro_Macropyre_MapInstall {
	C_CDOTA_Ability_Jakiro_Macropyre_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_jakiro.cpp:1116
class CDOTA_Modifier_Jakiro_Macropyre_Thinker : public CDOTA_Buff {
public:

private:

	float burn_interval;  // +0xbb4
	int path_radius;  // +0xbb8
	int damage_scepter;  // +0xbbc
	int damage;  // +0xbc0
	int cast_range;  // +0xbc4
	CDOTA_Modifier_Jakiro_Macropyre_Thinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool ShouldSendToClients();
	virtual void OnIntervalThink();
	virtual bool IsHidden();
	virtual int GetNumAvoidLocations();
	virtual Vector GetAvoidLocation(int);
	virtual float AvoidStrength(CDOTA_Bot *);
	virtual float GetAvoidRadius(int);
	virtual bool IsAvoidMagical();
	virtual bool IsPersistentAvoidance();
	virtual ~CDOTA_Modifier_Jakiro_Macropyre_Thinker();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[8] ShouldSendToClients
	// vtable[56] OnIntervalThink
	// vtable[11] IsHidden
	// vtable[74] GetNumAvoidLocations
	// vtable[75] GetAvoidLocation
	// vtable[77] AvoidStrength
	// vtable[78] GetAvoidRadius
	// vtable[79] IsAvoidMagical
	// vtable[81] IsPersistentAvoidance
	// sizeof = 3016
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Jakiro::~CDOTA_Unit_Hero_Jakiro  (line 44, @0x0000000002ba2d80, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Jakiro::~CDOTA_Unit_Hero_Jakiro(CDOTA_Unit_Hero_Jakiro *const this)
{
  this->_vptr_IHandleEntity = &off_4507710;
  this->_vptr_INextBotEventResponder = &off_45086F0;
  this->_vptr_CObstructionObject = &off_4508A20;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Jakiro::~CDOTA_Unit_Hero_Jakiro  (line 44, @0x0000000002ba2dc0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Jakiro
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Jakiro::~CDOTA_Unit_Hero_Jakiro(CDOTA_Unit_Hero_Jakiro *const this)
{
  this->_vptr_IHandleEntity = &off_4507710;
  this->_vptr_INextBotEventResponder = &off_45086F0;
  this->_vptr_CObstructionObject = &off_4508A20;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Jakiro::Schema_DynamicBinding  (line 46, @0x0000000002b91fe0, libserver.so)
// globals: CDOTA_Unit_Hero_Jakiro::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Jakiro::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Jakiro *const this)
{
  return CDOTA_Unit_Hero_Jakiro::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Jakiro::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 46, @0x0000000002b92010, libserver.so)
// globals: CDOTA_Unit_Hero_Jakiro::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Jakiro::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Jakiro::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Jakiro::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Jakiro::CEntityInstanceEntityClass::DestructInstance  (line 46, @0x0000000002b92020, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Jakiro>
void __fastcall CDOTA_Unit_Hero_Jakiro::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Jakiro::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Jakiro::CEntityInstanceEntityClass::FreeInstance  (line 46, @0x0000000002b92040, libserver.so)
void __fastcall CDOTA_Unit_Hero_Jakiro::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Jakiro::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Jakiro::CEntityInstanceEntityClass::CanAllocate  (line 46, @0x0000000002b92060, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Jakiro::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Jakiro::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Jakiro::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 46, @0x0000000002b92070, libserver.so)
// globals: CDOTA_Unit_Hero_Jakiro::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Jakiro::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Jakiro::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Jakiro::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Jakiro::CEntityInstanceEntityClass::AllocateInstance  (line 46, @0x0000000002b98520, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Jakiro::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Jakiro::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Jakiro::CEntityInstanceEntityClass::ConstructInstance  (line 46, @0x0000000002b9c7a0, libserver.so)  // inlines: CDOTA_Unit_Hero_Jakiro, Construct<CDOTA_Unit_Hero_Jakiro>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Jakiro::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Jakiro::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_4507710;
    *(p + 236) = &off_45086F0;
    *(p + 257) = &off_4508A20;
  }
  return p;
}


// CDOTA_Unit_Hero_Jakiro::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 46, @0x0000000002babe50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Jakiro::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Jakiro::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Jakiro::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 46, @0x0000000002bac3d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Jakiro::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Jakiro::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Jakiro::GetEntityClassInternal  (line 46, @0x0000000002bce030, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "npc_dota_hero_jakiro", "CDOTA_Unit_Hero_Jakiro"
// globals: `guard variable for'CDOTA_Unit_Hero_Jakiro::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_JakiroClass, CDOTA_Unit_Hero_Jakiro::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_JakiroClass, __dso_handle, CDOTA_Unit_Hero_Jakiro::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Jakiro::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_JakiroClassInfo, CDOTA_Unit_Hero_Jakiro::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_JakiroClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Jakiro::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Jakiro::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_JakiroClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Jakiro::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_JakiroClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Jakiro::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_JakiroClass);
    CDOTA_Unit_Hero_Jakiro::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_JakiroClass._vptr_CEntityClass = off_4507690;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Jakiro::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_JakiroClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Jakiro::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Jakiro::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_JakiroClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_JakiroClass != 0 )
    return &CDOTA_Unit_Hero_Jakiro::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_JakiroClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Jakiro::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_JakiroClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Jakiro::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_JakiroClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Jakiro::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_JakiroClassInfo,
      "CDOTA_Unit_Hero_Jakiro",
      "npc_dota_hero_jakiro",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Jakiro::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_JakiroClassInfo);
  }
  CDOTA_Unit_Hero_Jakiro::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_JakiroClass.m_pClassInfo = &CDOTA_Unit_Hero_Jakiro::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_JakiroClassInfo;
  CDOTA_Unit_Hero_Jakiro::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_JakiroClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Jakiro::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_JakiroClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_JakiroClass = &CDOTA_Unit_Hero_Jakiro::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_JakiroClass;
  CDOTA_Unit_Hero_Jakiro::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_JakiroClassInfo.m_pClass = &CDOTA_Unit_Hero_Jakiro::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_JakiroClass;
  CDOTA_Unit_Hero_Jakiro::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_JakiroClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_JakiroClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Jakiro::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_JakiroClass;
}


// CDOTA_Unit_Hero_Jakiro::UsedGestureBasedAttackAnimation  (line 50, @0x0000000002b92080, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Jakiro::UsedGestureBasedAttackAnimation(CDOTA_Unit_Hero_Jakiro *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Jakiro::YouForgotToImplementOrDeclareServerClass  (line 59, @0x0000000002b35ca0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Jakiro::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Jakiro *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Jakiro::GetServerClass  (line 59, @0x0000000002b4cd20, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Jakiro::GetServerClass(CDOTA_Unit_Hero_Jakiro *const this)
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


// CDOTA_Ability_Jakiro_DualBreath::~CDOTA_Ability_Jakiro_DualBreath  (line 76, @0x0000000002ba1910, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Jakiro_DualBreath::~CDOTA_Ability_Jakiro_DualBreath(
        CDOTA_Ability_Jakiro_DualBreath *const this)
{
  this->_vptr_IHandleEntity = &off_4508AF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Jakiro_DualBreath::~CDOTA_Ability_Jakiro_DualBreath  (line 76, @0x0000000002ba1930, libserver.so)  // inlines: ~CDOTA_Ability_Jakiro_DualBreath
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Jakiro_DualBreath::~CDOTA_Ability_Jakiro_DualBreath(
        CDOTA_Ability_Jakiro_DualBreath *const this)
{
  this->_vptr_IHandleEntity = &off_4508AF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Jakiro_DualBreath::Schema_DynamicBinding  (line 78, @0x0000000002b92090, libserver.so)
// globals: CDOTA_Ability_Jakiro_DualBreath::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Jakiro_DualBreath::Schema_DynamicBinding(
        const CDOTA_Ability_Jakiro_DualBreath *const this)
{
  return CDOTA_Ability_Jakiro_DualBreath::s_pSchemaBinding;
}


// CDOTA_Ability_Jakiro_DualBreath::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 78, @0x0000000002b920a0, libserver.so)
// globals: CDOTA_Ability_Jakiro_DualBreath::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Jakiro_DualBreath::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Jakiro_DualBreath::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Jakiro_DualBreath::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Jakiro_DualBreath::CEntityInstanceEntityClass::DestructInstance  (line 78, @0x0000000002b920b0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Jakiro_DualBreath>
void __fastcall CDOTA_Ability_Jakiro_DualBreath::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Jakiro_DualBreath::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Jakiro_DualBreath::CEntityInstanceEntityClass::FreeInstance  (line 78, @0x0000000002b920d0, libserver.so)
void __fastcall CDOTA_Ability_Jakiro_DualBreath::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Jakiro_DualBreath::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Jakiro_DualBreath::CEntityInstanceEntityClass::CanAllocate  (line 78, @0x0000000002b920f0, libserver.so)
bool __fastcall CDOTA_Ability_Jakiro_DualBreath::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Jakiro_DualBreath::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Jakiro_DualBreath::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 78, @0x0000000002b92100, libserver.so)
// globals: CDOTA_Ability_Jakiro_DualBreath::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Jakiro_DualBreath::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Jakiro_DualBreath::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Jakiro_DualBreath::s_pSchemaBinding;
}


// CDOTA_Ability_Jakiro_DualBreath::CEntityInstanceEntityClass::AllocateInstance  (line 78, @0x0000000002b98560, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Jakiro_DualBreath::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Jakiro_DualBreath::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Jakiro_DualBreath::CEntityInstanceEntityClass::ConstructInstance  (line 78, @0x0000000002b9d730, libserver.so)  // inlines: CDOTA_Ability_Jakiro_DualBreath, Construct<CDOTA_Ability_Jakiro_DualBreath>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Jakiro_DualBreath::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Jakiro_DualBreath::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4508AF0;
  }
  return p;
}


// CDOTA_Ability_Jakiro_DualBreath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 78, @0x0000000002bab470, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Jakiro_DualBreath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Jakiro_DualBreath::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Jakiro_DualBreath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 78, @0x0000000002bab490, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Jakiro_DualBreath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Jakiro_DualBreath::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Jakiro_DualBreath::GetEntityClassInternal  (line 78, @0x0000000002bcb0f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_Jakiro_DualBreath"
// globals: `guard variable for'CDOTA_Ability_Jakiro_DualBreath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_DualBreathClass, CDOTA_Ability_Jakiro_DualBreath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_DualBreathClass, __dso_handle, CDOTA_Ability_Jakiro_DualBreath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Jakiro_DualBreath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_DualBreathClassInfo, CDOTA_Ability_Jakiro_DualBreath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_DualBreathClassInfo
CEntityClass *__cdecl CDOTA_Ability_Jakiro_DualBreath::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Jakiro_DualBreath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_DualBreathClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Jakiro_DualBreath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_DualBreathClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Jakiro_DualBreath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_DualBreathClass);
    CDOTA_Ability_Jakiro_DualBreath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_DualBreathClass._vptr_CEntityClass = off_4508A70;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Jakiro_DualBreath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_DualBreathClass);
    __cxa_atexit(
      CDOTA_Ability_Jakiro_DualBreath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Jakiro_DualBreath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_DualBreathClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Jakiro_DualBreathClass != 0 )
    return &CDOTA_Ability_Jakiro_DualBreath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_DualBreathClass;
  if ( `guard variable for'CDOTA_Ability_Jakiro_DualBreath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_DualBreathClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Jakiro_DualBreath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_DualBreathClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Jakiro_DualBreath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_DualBreathClassInfo,
      "CDOTA_Ability_Jakiro_DualBreath",
      "jakiro_dual_breath",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Jakiro_DualBreath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_DualBreathClassInfo);
  }
  CDOTA_Ability_Jakiro_DualBreath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_DualBreathClass.m_pClassInfo = &CDOTA_Ability_Jakiro_DualBreath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_DualBreathClassInfo;
  CDOTA_Ability_Jakiro_DualBreath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_DualBreathClass.m_pBaseClassInfo = CDOTA_Ability_Jakiro_DualBreath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_DualBreathClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Jakiro_DualBreathClass = &CDOTA_Ability_Jakiro_DualBreath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_DualBreathClass;
  CDOTA_Ability_Jakiro_DualBreath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_DualBreathClassInfo.m_pClass = &CDOTA_Ability_Jakiro_DualBreath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_DualBreathClass;
  CDOTA_Ability_Jakiro_DualBreath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_DualBreathClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Jakiro_DualBreathClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Jakiro_DualBreath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_DualBreathClass;
}


// CDOTA_Ability_Jakiro_DualBreath::YouForgotToImplementOrDeclareServerClass  (line 91, @0x0000000002b35cb0, libserver.so)
int __fastcall CDOTA_Ability_Jakiro_DualBreath::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Jakiro_DualBreath *const this)
{
  return 0;
}


// CDOTA_Ability_Jakiro_DualBreath::GetServerClass  (line 91, @0x0000000002b4cb20, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Jakiro_DualBreath::GetServerClass(CDOTA_Ability_Jakiro_DualBreath *const this)
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


// CDOTA_Ability_Jakiro_DualBreath::OnSpellStart  (line 100, @0x0000000002b36d60, libserver.so)  // inlines: GetTeamNumber
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, Thinker_Create, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_jakiro_dual_breath"
void __fastcall CDOTA_Ability_Jakiro_DualBreath::OnSpellStart(CDOTA_Ability_Jakiro_DualBreath *const this)
{
  int m_Value; // r14d
  CDOTA_BaseNPC *Caster; // rax
  Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v5; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_jakiro_dual_breath");
  m_Value = this->m_iTeamNum.m_Value;
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  v5 = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(v5, this, "modifier_jakiro_dual_breath", &kv, *AbsOrigin, m_Value, 1, 0, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Jakiro_DualBreath::OnProjectileThink_ExtraData  (line 110, @0x0000000002b3b680, libserver.so)  // inlines: Vector
// calls: KeyValues::GetInt, CDOTA_ProjectileManager::GetLinearProjectileRadius, GetParticleManager, CDOTA_ParticleManager::SetParticleControl
void __fastcall CDOTA_Ability_Jakiro_DualBreath::OnProjectileThink_ExtraData(
        CDOTA_Ability_Jakiro_DualBreath *const this,
        int iProjectileIndex,
        KeyValues *pExtraData)
{
  int Int; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  double fRadius; // [rsp+0h] [rbp-20h]

  Int = KeyValues::GetInt(pExtraData, "effect", 0);
  LODWORD(fRadius) = CDOTA_ProjectileManager::GetLinearProjectileRadius(&g_DOTAProjectileManager, iProjectileIndex);
  HIDWORD(fRadius) = LODWORD(fRadius);
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(ParticleManager, Int, 2, fRadius, 0.0);
}


// CDOTA_Ability_Jakiro_DualBreath::OnProjectileHit_ExtraData  (line 121, @0x0000000002b47c20, libserver.so)  // inlines: Get, GetBool, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator==<CBaseEntity>
// calls: KeyValues::GetInt, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, __stack_chk_fail, CDOTABaseAbility::GetCaster, ApplyDamage, CDOTABaseAbility::GetDuration, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, _Unwind_Resume
// strings: "is_ice", "modifier_jakiro_dual_breath_slow", "modifier_jakiro_dual_breath_burn"
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Jakiro_DualBreath::OnProjectileHit_ExtraData(
        CDOTA_Ability_Jakiro_DualBreath *const this,
        unsigned __int16 *hTarget,
        const Vector *const vLocation,
        KeyValues *pExtraData)
{
  int v7; // eax
  unsigned int v8; // esi
  unsigned __int64 v9; // rdx
  CEntityIdentity *v10; // rcx
  CEntityIdentity *v11; // rsi
  CEntityIdentity *v12; // rcx
  int v13; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *m_pInstance; // r14
  int v17; // r15d
  CDOTA_BaseNPC *Caster; // rax
  int Int; // r15d
  float v20; // xmm1_4
  CDOTA_BaseNPC *v21; // rax
  float v22; // xmm1_4
  CDOTA_BaseNPC *v23; // rax
  KeyValues kv; // [rsp+10h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-38h]

  v25 = __readfsqword(0x28u);
  v7 = *hTarget;
  if ( (*hTarget + 2) <= 1 )
    goto LABEL_7;
  v8 = *hTarget;
  v9 = v8;
  LOWORD(v9) = v8 & 0x7FFF;
  v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v9 >> 9) & 0x3F];
  if ( v10 == 0 )
    goto LABEL_7;
  v11 = &v10[v8 & 0x1FF];
  if ( v11 != 0 && v7 == v11->m_EHandle.m_Index )
  {
    m_pInstance = v11->m_pInstance;
    if ( v11->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
    {
      v17 = (*(this->_vptr_IHandleEntity + 247))(this);
      Caster = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(Caster, m_pInstance, this, v17, 2, 0);
      Int = KeyValues::GetInt(pExtraData, "is_ice", 0);
      CDOTABaseAbility::GetDuration(this);
      if ( Int != 0 )
      {
        KeyValues::KeyValues(&kv, "modifier_jakiro_dual_breath_slow");
        KeyValues::SetFloat(&kv, "duration", v20);
        v21 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(m_pInstance, v21, this, "modifier_jakiro_dual_breath_slow", &kv, 0);
      }
      else
      {
        KeyValues::KeyValues(&kv, "modifier_jakiro_dual_breath_burn");
        KeyValues::SetFloat(&kv, "duration", v22);
        v23 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(m_pInstance, v23, this, "modifier_jakiro_dual_breath_burn", &kv, 0);
      }
      KeyValues::~KeyValues(&kv);
      v7 = *hTarget;
      if ( (*hTarget + 2) <= 1 )
        goto LABEL_7;
      LOWORD(v9) = *hTarget & 0x7FFF;
      v10 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[v9 >> 9];
      if ( v10 == 0 )
        goto LABEL_7;
    }
  }
  v12 = &v10[v9 & 0x1FF];
  if ( v12 == 0 || v7 != v12->m_EHandle.m_Index || v12->m_pInstance == 0 )
  {
LABEL_7:
    v13 = KeyValues::GetInt(pExtraData, "effect", 0);
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, v13, 0);
  }
  return 0;
}


// CDOTA_Ability_Jakiro_DualBreath::GetAbilityDamageToTargetOverInterval  (line 162, @0x0000000002b6a6f0, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetDuration, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "burn_damage"
__int64 __fastcall CDOTA_Ability_Jakiro_DualBreath::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Jakiro_DualBreath *const this,
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
    fIntervalb = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "burn_damage", -1, 1) * fIntervala;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalb);
  }
  return result;
}


// CDOTA_Ability_Jakiro_DualBreath::GetSlowDuration  (line 175, @0x0000000002b3a9d0, libserver.so)
// calls: CDOTABaseAbility::GetDuration
float __fastcall CDOTA_Ability_Jakiro_DualBreath::GetSlowDuration(CDOTA_Ability_Jakiro_DualBreath *const this)
{
  return CDOTABaseAbility::GetDuration(this);
}


// CDOTA_Modifier_Jakiro_DualBreath_Thinker::~CDOTA_Modifier_Jakiro_DualBreath_Thinker  (line 183, @0x0000000002b99d60, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Jakiro_DualBreath_Thinker::~CDOTA_Modifier_Jakiro_DualBreath_Thinker(
        CDOTA_Modifier_Jakiro_DualBreath_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_45095B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Jakiro_DualBreath_Thinker::~CDOTA_Modifier_Jakiro_DualBreath_Thinker  (line 183, @0x0000000002b99d80, libserver.so)  // inlines: ~CDOTA_Modifier_Jakiro_DualBreath_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Jakiro_DualBreath_Thinker::~CDOTA_Modifier_Jakiro_DualBreath_Thinker(
        CDOTA_Modifier_Jakiro_DualBreath_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_45095B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Jakiro_DualBreath_Thinker::IsHidden  (line 191, @0x0000000002b92110, libserver.so)
bool __fastcall CDOTA_Modifier_Jakiro_DualBreath_Thinker::IsHidden(
        CDOTA_Modifier_Jakiro_DualBreath_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Jakiro_DualBreath_Thinker::OnCreated  (line 212, @0x0000000002b7f3c0, libserver.so)  // inlines: DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCursorTarget, CBaseEntity::GetAbsOrigin, CDOTA_Modifier_Jakiro_DualBreath_Thinker::CreateBreathAttack, CDOTA_Buff::StartIntervalThink, CDOTABaseAbility::GetCursorPosition
// strings: "fire_delay"
void __fastcall CDOTA_Modifier_Jakiro_DualBreath_Thinker::OnCreated(
        CDOTA_Modifier_Jakiro_DualBreath_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  __m128i v4; // xmm0
  int v5; // r14d
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CBaseEntity *CursorTarget; // rax
  const Vector *AbsOrigin; // rax
  vec_t x; // xmm2_4
  vec_t y; // xmm0_4
  vec_t z; // xmm1_4
  float v13; // xmm1_4
  CDOTABaseAbility *v14; // rax
  Vector CursorPosition; // 0:kr00_12.12

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    *v4.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "fire_delay", -1, 0);
    v5 = _mm_cvtsi128_si32(v4);
  }
  else
  {
    v5 = _mm_cvtsi128_si32(0LL);
  }
  v6 = CDOTA_Buff::GetAbility(this);
  if ( CDOTABaseAbility::GetCursorTarget(v6) != 0 )
  {
    v7 = CDOTA_Buff::GetAbility(this);
    CursorTarget = CDOTABaseAbility::GetCursorTarget(v7);
    AbsOrigin = CBaseEntity::GetAbsOrigin(CursorTarget);
    x = AbsOrigin->x;
    y = AbsOrigin->y;
    z = AbsOrigin->z;
  }
  else
  {
    v14 = CDOTA_Buff::GetAbility(this);
    CursorPosition = CDOTABaseAbility::GetCursorPosition(v14);
    z = CursorPosition.z;
    x = CursorPosition.x;
    y = CursorPosition.y;
  }
  this->m_vCastPosition.y = y;
  this->m_vCastPosition.x = x;
  this->m_vCastPosition.z = z;
  CDOTA_Modifier_Jakiro_DualBreath_Thinker::CreateBreathAttack(this, 1);
  CDOTA_Buff::StartIntervalThink(this, *&v5, v13);
}


// CDOTA_Modifier_Jakiro_DualBreath_Thinker::OnIntervalThink  (line 227, @0x0000000002b65560, libserver.so)
// calls: CDOTA_Modifier_Jakiro_DualBreath_Thinker::CreateBreathAttack, CDOTA_Buff::GetParent, UTIL_Remove
void __fastcall CDOTA_Modifier_Jakiro_DualBreath_Thinker::OnIntervalThink(
        CDOTA_Modifier_Jakiro_DualBreath_Thinker *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  CDOTA_Modifier_Jakiro_DualBreath_Thinker::CreateBreathAttack(this, 0);
  Parent = CDOTA_Buff::GetParent(this);
  UTIL_Remove(Parent);
}


// CDOTA_Modifier_Jakiro_DualBreath_Thinker::CreateBreathAttack  (line 236, @0x0000000002b64dc0, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, GetEHandle, GetEntryIndex, GetGameTime, GetSerialNumber, Set, SetBool, Vector, VectorAdd, VectorMultiply, VectorNormalize2D, VectorSubtract, operator*, operator+, operator-, operator=, sLinearProjectileCreateInfo
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, VectorNormalize, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::GetCaster, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleFoWProperties, KeyValues::KeyValues (20 total)
// callers: CDOTA_Modifier_Jakiro_DualBreath_Thinker::OnIntervalThink, CDOTA_Modifier_Jakiro_DualBreath_Thinker::OnCreated
// strings: "start_radius", "end_radius", "speed_fire", "particles/units/heroes/hero_jakiro/jakiro_dual_breath_ice.vpcf", "particles/units/heroes/hero_jakiro/jakiro_dual_breath_fire.vpcf", "attach_attack2" (9 total)
void __fastcall CDOTA_Modifier_Jakiro_DualBreath_Thinker::CreateBreathAttack(
        CDOTA_Modifier_Jakiro_DualBreath_Thinker *const this,
        bool bIsIce)
{
  CDOTABaseAbility *Ability; // rax
  int v5; // r12d
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  vec_t v12; // xmm0_4
  vec_t v13; // xmm1_4
  int v14; // eax
  float v15; // xmm0_4
  const char *v16; // r12
  CDOTA_BaseNPC *v17; // rax
  const Vector *v18; // rax
  float y; // xmm6_4
  vec_t z; // xmm5_4
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_ParticleManager *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  float start_radius; // xmm0_4
  CDOTA_ParticleManager *v26; // rax
  CDOTA_ParticleManager *v27; // rax
  CDOTA_ParticleManager *v28; // rax
  const char *v29; // r9
  CDOTA_BaseNPC *v30; // r13
  CDOTA_ParticleManager *v31; // rax
  int end_radius; // eax
  CDOTA_ParticleManager *v33; // rax
  vec_t v34; // xmm1_4
  vec_t v35; // xmm0_4
  float v36; // xmm0_4
  CDOTA_BaseNPC *v37; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v39; // eax
  __int16 v40; // cx
  CDOTA_BaseNPC *v41; // rax
  CDOTA_BaseNPC *Caster; // rax
  const QAngle *AbsAngles; // rax
  char *pAttachmentName; // [rsp+8h] [rbp-138h]
  float pAttachmentNamea; // [rsp+8h] [rbp-138h]
  float v46; // [rsp+10h] [rbp-130h]
  float x; // [rsp+14h] [rbp-12Ch]
  float vecOrigin; // [rsp+18h] [rbp-128h]
  float vecOrigin_4; // [rsp+1Ch] [rbp-124h]
  int speed; // [rsp+28h] [rbp-118h] BYREF
  int speed_fire; // [rsp+2Ch] [rbp-114h] BYREF
  Vector vCastDir; // [rsp+30h] [rbp-110h] BYREF
  Vector vecFallbackPosition; // [rsp+40h] [rbp-100h]
  double v54; // [rsp+50h] [rbp-F0h]
  float v55; // [rsp+58h] [rbp-E8h]
  double v56; // [rsp+60h] [rbp-E0h]
  float v57; // [rsp+68h] [rbp-D8h]
  sLinearProjectileCreateInfo info; // [rsp+70h] [rbp-D0h] BYREF
  KeyValues kv; // [rsp+F0h] [rbp-50h] BYREF
  unsigned __int64 v60; // [rsp+108h] [rbp-38h]

  v60 = __readfsqword(0x28u);
  Ability = CDOTA_Buff::GetAbility(this);
  v5 = (*(Ability->_vptr_IHandleEntity + 229))(Ability, &vec3_origin, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->start_radius, "start_radius");
  v7 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v7, &this->end_radius, "end_radius");
  v8 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v8, &speed, "speed");
  v9 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v9, &speed_fire, "speed_fire");
  if ( !bIsIce )
    speed = speed_fire;
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v12 = this->m_vCastPosition.y - AbsOrigin->y;
  v13 = this->m_vCastPosition.x - AbsOrigin->x;
  vCastDir.z = 0.0;
  vCastDir.y = v12;
  vCastDir.x = v13;
  if ( VectorNormalize(&vCastDir) < 0.0099999998 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(Caster);
    AngleVectors(AbsAngles, &vCastDir, 0, 0);
  }
  vecOrigin_4 = v5;
  v14 = (speed * (v5 / (v5 - this->start_radius)));
  v15 = 0.0;
  speed = v14;
  if ( g_pGameRules != 0 )
    v15 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_fStartTime = v15;
  v16 = "particles/units/heroes/hero_jakiro/jakiro_dual_breath_ice.vpcf";
  this->m_fTotalTime = vecOrigin_4 / v14;
  v17 = CDOTA_Buff::GetParent(this);
  v18 = CBaseEntity::GetAbsOrigin(v17);
  y = v18->y;
  z = v18->z;
  x = v18->x;
  *&vecFallbackPosition.x = *&v18->x;
  if ( !bIsIce )
    v16 = "particles/units/heroes/hero_jakiro/jakiro_dual_breath_fire.vpcf";
  v46 = y;
  vecOrigin = z;
  vecFallbackPosition.z = v18->z;
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(ParticleManager, v16, 2, 0, 0, 0);
  v23 = GetParticleManager();
  *&vecFallbackPosition.x = __PAIR64__(LODWORD(v46), LODWORD(x));
  vecFallbackPosition.z = vecOrigin;
  CDOTA_ParticleManager::SetParticleControl(
    v23,
    Particle,
    0,
    COERCE_DOUBLE(__PAIR64__(LODWORD(v46), LODWORD(x))),
    vecOrigin);
  *(&v54 + 1) = vCastDir.y * speed;
  v55 = vCastDir.z * speed;
  *&v54 = speed * vCastDir.x;
  v24 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v24, Particle, 1, v54, v55);
  start_radius = this->start_radius;
  LODWORD(info.pAbility) = 0;
  *&info.pszEffectName = start_radius;
  *(&info.pszEffectName + 1) = start_radius;
  v26 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v26, Particle, 2, *&info.pszEffectName, *&info.pAbility);
  *(&v56 + 1) = (vCastDir.y * vecOrigin_4) + v46;
  v57 = (vCastDir.z * vecOrigin_4) + vecOrigin;
  *&v56 = (vCastDir.x * vecOrigin_4) + x;
  v27 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v27, Particle, 3, v56, v57);
  *(&info.pszEffectName + 4) = 0;
  *&info.pszEffectName = this->m_fTotalTime + 1.0;
  v28 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v28, Particle, 4, *&info.pszEffectName, *&info.pAbility);
  v29 = "attach_attack1";
  if ( !bIsIce )
    v29 = "attach_attack2";
  pAttachmentName = v29;
  v30 = CDOTA_Buff::GetCaster(this);
  v31 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v31, Particle, 9, v30, 5, pAttachmentName, vecFallbackPosition, 1);
  end_radius = this->start_radius;
  if ( this->end_radius >= end_radius )
    end_radius = this->end_radius;
  pAttachmentNamea = end_radius;
  v33 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleFoWProperties(v33, Particle, 0, 3, pAttachmentNamea);
  KeyValues::KeyValues(&kv, "dual_breath");
  KeyValues::SetInt(&kv, "is_ice", bIsIce);
  KeyValues::SetInt(&kv, "effect", Particle);
  info.bHasFrontalCone = 1;
  v34 = vec3_origin.y;
  info.bProvidesVision = 0;
  v35 = vec3_origin.z;
  info.bDrawsOnMinimap = 0;
  info.hSource.m_Index = -1;
  info.pszEffectName = 0;
  info.pAbility = 0;
  info.vSpawnOrigin.x = vec3_origin.x;
  info.vSpawnOrigin.y = v34;
  info.vSpawnOrigin.z = v35;
  info.vVelocity.x = vec3_origin.x;
  info.vVelocity.y = v34;
  info.vVelocity.z = v35;
  info.vAcceleration.x = vec3_origin.x;
  info.vAcceleration.y = v34;
  info.vAcceleration.z = v35;
  info.fDistance = 0.0;
  info.fStartRadius = 0.0;
  info.fEndRadius = 0.0;
  info.bCheckStartPosition = 0;
  info.iUnitTargetTeam = 0;
  info.iUnitTargetType = 0;
  info.iUnitTargetFlags = 0;
  info.iVisionTeamNumber = -1;
  info.iVisionRadius = -1;
  info.bVisibleToEnemies = 1;
  info.bIgnoreSource = 0;
  info.bStickyFoWReveal = 0;
  info.pKVExtraData = 0;
  info.fExpireTime = 0.0;
  info.fMaxSpeed = 0.0;
  info.pAbility = CDOTA_Buff::GetAbility(this);
  info.vSpawnOrigin.x = x;
  info.vSpawnOrigin.y = v46;
  info.vSpawnOrigin.z = vecOrigin;
  info.vVelocity.y = vCastDir.y * speed;
  info.vVelocity.z = vCastDir.z * speed;
  info.vVelocity.x = speed * vCastDir.x;
  v36 = this->start_radius;
  info.fDistance = vecOrigin_4;
  info.fStartRadius = v36;
  info.fEndRadius = this->end_radius;
  v37 = CDOTA_Buff::GetCaster(this);
  if ( v37 != 0 && (m_pEntity = v37->m_pEntity) != 0 )
  {
    v39 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v40 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v40 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(info.hSource.m_Index) = v40 | info.hSource.m_Index & 0x8000;
    info.hSource.m_Index = (v39 << 15) | info.hSource.m_Index & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  info.pKVExtraData = &kv;
  info.iUnitTargetTeam = 2;
  info.iUnitTargetType = 19;
  CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  v41 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v41, "Hero_Jakiro.DualBreath", 0.0, 0, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Jakiro_DualBreath_Slow::~CDOTA_Modifier_Jakiro_DualBreath_Slow  (line 304, @0x0000000002b99d10, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Jakiro_DualBreath_Slow::~CDOTA_Modifier_Jakiro_DualBreath_Slow(
        CDOTA_Modifier_Jakiro_DualBreath_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_45098D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Jakiro_DualBreath_Slow::~CDOTA_Modifier_Jakiro_DualBreath_Slow  (line 304, @0x0000000002b99d30, libserver.so)  // inlines: ~CDOTA_Modifier_Jakiro_DualBreath_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Jakiro_DualBreath_Slow::~CDOTA_Modifier_Jakiro_DualBreath_Slow(
        CDOTA_Modifier_Jakiro_DualBreath_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_45098D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Jakiro_DualBreath_Slow::IsDebuff  (line 309, @0x0000000002b92120, libserver.so)
bool __fastcall CDOTA_Modifier_Jakiro_DualBreath_Slow::IsDebuff(CDOTA_Modifier_Jakiro_DualBreath_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_Jakiro_DualBreath_Slow::OnCreated  (line 328, @0x0000000002b6ced0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "slow_movement_speed_pct", "slow_attack_speed_pct"
void __fastcall CDOTA_Modifier_Jakiro_DualBreath_Slow::OnCreated(
        CDOTA_Modifier_Jakiro_DualBreath_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->slow_movement_speed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                      Ability,
                                      "slow_movement_speed_pct",
                                      -1,
                                      0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->slow_attack_speed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "slow_attack_speed_pct", -1, 0);
      return;
    }
  }
  else
  {
    this->slow_movement_speed_pct = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->slow_attack_speed_pct = 0;
}


// CDOTA_Modifier_Jakiro_DualBreath_Slow::OnRefresh  (line 336, @0x0000000002b6d2c0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "slow_movement_speed_pct", "slow_attack_speed_pct"
void __fastcall CDOTA_Modifier_Jakiro_DualBreath_Slow::OnRefresh(
        CDOTA_Modifier_Jakiro_DualBreath_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->slow_movement_speed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                      Ability,
                                      "slow_movement_speed_pct",
                                      -1,
                                      0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->slow_attack_speed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "slow_attack_speed_pct", -1, 0);
      return;
    }
  }
  else
  {
    this->slow_movement_speed_pct = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->slow_attack_speed_pct = 0;
}


// CDOTA_Modifier_Jakiro_DualBreath_Slow::DeclareFunctions  (line 344, @0x0000000002b35cc0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Jakiro_DualBreath_Slow::DeclareFunctions(
        CDOTA_Modifier_Jakiro_DualBreath_Slow *const this)
{
  this->m_Functions[13].__pfn = (&stru_10 + 697);
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__pfn = (&stru_10 + 705);
  this->m_Functions[24].__delta = 0;
}


// CDOTA_Modifier_Jakiro_DualBreath_Slow::GetModifierMoveSpeedBonus_Percentage  (line 352, @0x0000000002b35d00, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Jakiro_DualBreath_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Jakiro_DualBreath_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->slow_movement_speed_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Jakiro_DualBreath_Slow::GetModifierAttackSpeedBonus_Constant  (line 359, @0x0000000002b35d20, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Jakiro_DualBreath_Slow::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Jakiro_DualBreath_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->slow_attack_speed_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Jakiro_DualBreath_Burn::~CDOTA_Modifier_Jakiro_DualBreath_Burn  (line 372, @0x0000000002b99cc0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Jakiro_DualBreath_Burn::~CDOTA_Modifier_Jakiro_DualBreath_Burn(
        CDOTA_Modifier_Jakiro_DualBreath_Burn *const this)
{
  this->_vptr_CDOTA_Buff = &off_4509C10;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Jakiro_DualBreath_Burn::~CDOTA_Modifier_Jakiro_DualBreath_Burn  (line 372, @0x0000000002b99ce0, libserver.so)  // inlines: ~CDOTA_Modifier_Jakiro_DualBreath_Burn
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Jakiro_DualBreath_Burn::~CDOTA_Modifier_Jakiro_DualBreath_Burn(
        CDOTA_Modifier_Jakiro_DualBreath_Burn *const this)
{
  this->_vptr_CDOTA_Buff = &off_4509C10;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Jakiro_DualBreath_Burn::IsDebuff  (line 377, @0x0000000002b92130, libserver.so)
bool __fastcall CDOTA_Modifier_Jakiro_DualBreath_Burn::IsDebuff(CDOTA_Modifier_Jakiro_DualBreath_Burn *const this)
{
  return 1;
}


// CDOTA_Modifier_Jakiro_DualBreath_Burn::GetEffectName  (line 380, @0x0000000002b92140, libserver.so)
// strings: "particles/units/heroes/hero_jakiro/jakiro_liquid_fire_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Jakiro_DualBreath_Burn::GetEffectName(
        CDOTA_Modifier_Jakiro_DualBreath_Burn *const this)
{
  return "particles/units/heroes/hero_jakiro/jakiro_liquid_fire_debuff.vpcf";
}


// CDOTA_Modifier_Jakiro_DualBreath_Burn::StatusEffectPriority  (line 381, @0x0000000002b92150, libserver.so)
int __fastcall CDOTA_Modifier_Jakiro_DualBreath_Burn::StatusEffectPriority(
        CDOTA_Modifier_Jakiro_DualBreath_Burn *const this)
{
  return 10;
}


// CDOTA_Modifier_Jakiro_DualBreath_Burn::OnCreated  (line 394, @0x0000000002b6d7f0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound
// strings: "burn_damage", "Hero_Jakiro.DualBreath.Burn"
void __fastcall CDOTA_Modifier_Jakiro_DualBreath_Burn::OnCreated(
        CDOTA_Modifier_Jakiro_DualBreath_Burn *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->burn_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "burn_damage", -1, 0);
  else
    this->burn_damage = 0;
  CDOTA_Buff::StartIntervalThink(this, 0.5, v4);
  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(Parent, "Hero_Jakiro.DualBreath.Burn", 0.0, 0, 0);
}


// CDOTA_Modifier_Jakiro_DualBreath_Burn::OnIntervalThink  (line 404, @0x0000000002b38eb0, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage, SendOverheadEventMessage
void __fastcall CDOTA_Modifier_Jakiro_DualBreath_Burn::OnIntervalThink(
        CDOTA_Modifier_Jakiro_DualBreath_Burn *const this)
{
  float v2; // xmm0_4
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // rax
  float flDamage; // [rsp+Ch] [rbp-24h]

  v2 = this->burn_damage * 0.5;
  flDamage = v2;
  Ability = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, Ability, flDamage, 2, 0);
  LODWORD(Parent) = (this->burn_damage * 0.5);
  v6 = CDOTA_Buff::GetParent(this);
  SendOverheadEventMessage(0, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BONUS_SPELL_DAMAGE, v6, Parent, 0);
}


// CDOTA_Ability_Jakiro_IcePath::~CDOTA_Ability_Jakiro_IcePath  (line 422, @0x0000000002ba1960, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Jakiro_IcePath::~CDOTA_Ability_Jakiro_IcePath(CDOTA_Ability_Jakiro_IcePath *const this)
{
  this->_vptr_IHandleEntity = &off_4509F70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Jakiro_IcePath::~CDOTA_Ability_Jakiro_IcePath  (line 422, @0x0000000002ba1980, libserver.so)  // inlines: ~CDOTA_Ability_Jakiro_IcePath
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Jakiro_IcePath::~CDOTA_Ability_Jakiro_IcePath(CDOTA_Ability_Jakiro_IcePath *const this)
{
  this->_vptr_IHandleEntity = &off_4509F70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Jakiro_IcePath::Schema_DynamicBinding  (line 424, @0x0000000002b92160, libserver.so)
// globals: CDOTA_Ability_Jakiro_IcePath::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Jakiro_IcePath::Schema_DynamicBinding(
        const CDOTA_Ability_Jakiro_IcePath *const this)
{
  return CDOTA_Ability_Jakiro_IcePath::s_pSchemaBinding;
}


// CDOTA_Ability_Jakiro_IcePath::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 424, @0x0000000002b92170, libserver.so)
// globals: CDOTA_Ability_Jakiro_IcePath::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Jakiro_IcePath::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Jakiro_IcePath::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Jakiro_IcePath::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Jakiro_IcePath::CEntityInstanceEntityClass::DestructInstance  (line 424, @0x0000000002b92180, libserver.so)  // inlines: Destruct<CDOTA_Ability_Jakiro_IcePath>
void __fastcall CDOTA_Ability_Jakiro_IcePath::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Jakiro_IcePath::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Jakiro_IcePath::CEntityInstanceEntityClass::FreeInstance  (line 424, @0x0000000002b921a0, libserver.so)
void __fastcall CDOTA_Ability_Jakiro_IcePath::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Jakiro_IcePath::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Jakiro_IcePath::CEntityInstanceEntityClass::CanAllocate  (line 424, @0x0000000002b921c0, libserver.so)
bool __fastcall CDOTA_Ability_Jakiro_IcePath::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Jakiro_IcePath::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Jakiro_IcePath::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 424, @0x0000000002b921d0, libserver.so)
// globals: CDOTA_Ability_Jakiro_IcePath::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Jakiro_IcePath::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Jakiro_IcePath::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Jakiro_IcePath::s_pSchemaBinding;
}


// CDOTA_Ability_Jakiro_IcePath::CEntityInstanceEntityClass::AllocateInstance  (line 424, @0x0000000002b985a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Jakiro_IcePath::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Jakiro_IcePath::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Jakiro_IcePath::CEntityInstanceEntityClass::ConstructInstance  (line 424, @0x0000000002b9d760, libserver.so)  // inlines: CDOTA_Ability_Jakiro_IcePath, Construct<CDOTA_Ability_Jakiro_IcePath>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Jakiro_IcePath::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Jakiro_IcePath::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4509F70;
  }
  return p;
}


// CDOTA_Ability_Jakiro_IcePath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 424, @0x0000000002bab4c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Jakiro_IcePath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Jakiro_IcePath::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Jakiro_IcePath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 424, @0x0000000002bab4e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Jakiro_IcePath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Jakiro_IcePath::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Jakiro_IcePath::GetEntityClassInternal  (line 424, @0x0000000002bcb240, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_Jakiro_IcePath"
// globals: `guard variable for'CDOTA_Ability_Jakiro_IcePath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_IcePathClass, CDOTA_Ability_Jakiro_IcePath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_IcePathClass, __dso_handle, CDOTA_Ability_Jakiro_IcePath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Jakiro_IcePath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_IcePathClassInfo, CDOTA_Ability_Jakiro_IcePath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_IcePathClassInfo
CEntityClass *__cdecl CDOTA_Ability_Jakiro_IcePath::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Jakiro_IcePath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_IcePathClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Jakiro_IcePath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_IcePathClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Jakiro_IcePath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_IcePathClass);
    CDOTA_Ability_Jakiro_IcePath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_IcePathClass._vptr_CEntityClass = off_4509EF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Jakiro_IcePath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_IcePathClass);
    __cxa_atexit(
      CDOTA_Ability_Jakiro_IcePath::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Jakiro_IcePath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_IcePathClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Jakiro_IcePathClass != 0 )
    return &CDOTA_Ability_Jakiro_IcePath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_IcePathClass;
  if ( `guard variable for'CDOTA_Ability_Jakiro_IcePath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_IcePathClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Jakiro_IcePath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_IcePathClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Jakiro_IcePath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_IcePathClassInfo,
      "CDOTA_Ability_Jakiro_IcePath",
      "jakiro_ice_path",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Jakiro_IcePath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_IcePathClassInfo);
  }
  CDOTA_Ability_Jakiro_IcePath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_IcePathClass.m_pClassInfo = &CDOTA_Ability_Jakiro_IcePath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_IcePathClassInfo;
  CDOTA_Ability_Jakiro_IcePath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_IcePathClass.m_pBaseClassInfo = CDOTA_Ability_Jakiro_IcePath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_IcePathClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Jakiro_IcePathClass = &CDOTA_Ability_Jakiro_IcePath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_IcePathClass;
  CDOTA_Ability_Jakiro_IcePath::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_IcePathClassInfo.m_pClass = &CDOTA_Ability_Jakiro_IcePath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_IcePathClass;
  CDOTA_Ability_Jakiro_IcePath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_IcePathClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Jakiro_IcePathClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Jakiro_IcePath::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_IcePathClass;
}


// CDOTA_Ability_Jakiro_IcePath::YouForgotToImplementOrDeclareServerClass  (line 435, @0x0000000002b35d40, libserver.so)
int __fastcall CDOTA_Ability_Jakiro_IcePath::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Jakiro_IcePath *const this)
{
  return 0;
}


// CDOTA_Ability_Jakiro_IcePath::GetServerClass  (line 435, @0x0000000002b4cf20, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Jakiro_IcePath::GetServerClass(CDOTA_Ability_Jakiro_IcePath *const this)
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


// CDOTA_Ability_Jakiro_IcePath::OnSpellStart  (line 444, @0x0000000002b781d0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetTeamNumber, NormalizeInPlace, Vector, VectorAdd, VectorMultiply, VectorSubtract, operator*, operator+, operator+=, operator-
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorTarget, VectorNormalize, CDOTA_BaseNPC::UnitEmitSound, DOTA_EmitSoundLocationWithCaster, CDOTABaseAbility::GetLevelSpecialValueFor<int>, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl (25 total)
// strings: "path_delay", "special_bonus_unique_jakiro", "Hero_Jakiro.IcePath.Cast", "Hero_Jakiro.IcePath", "path_radius", "particles/units/heroes/hero_jakiro/jakiro_ice_path.vpcf" (13 total)
void __fastcall CDOTA_Ability_Jakiro_IcePath::OnSpellStart(CDOTA_Ability_Jakiro_IcePath *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v4; // rax
  const Vector *AbsOrigin; // r12
  CBaseEntity *CursorTarget; // rax
  const Vector *v7; // rax
  float x; // xmm1_4
  float y; // xmm0_4
  vec_t v10; // xmm1_4
  vec_t v11; // xmm0_4
  float m_flHullRadius; // xmm0_4
  CDOTA_BaseNPC *v13; // rax
  const Vector *v14; // rax
  int v15; // eax
  __m128i x_low; // xmm3
  __m128i y_low; // xmm7
  float v18; // r12d
  float v19; // r14d
  CDOTA_BaseNPC *v20; // rax
  const Vector *v21; // rax
  vec_t v22; // xmm1_4
  vec_t v23; // xmm0_4
  CDOTA_BaseNPC *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  int LevelSpecialValue; // r14d
  int v27; // r12d
  int v28; // eax
  __m128i v29; // xmm3
  int v30; // eax
  __m128i v31; // xmm7
  float v32; // r13d
  float v33; // r15d
  CDOTA_BaseNPC *v34; // rax
  const Vector *v35; // rax
  vec_t v36; // xmm1_4
  vec_t v37; // xmm0_4
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  CDOTA_ParticleManager *v40; // rax
  CDOTA_ParticleManager *v41; // rax
  CDOTA_ParticleManager *v42; // rax
  CDOTA_BaseNPC *v43; // rax
  const Vector *v44; // r15
  CDOTA_ParticleManager *v45; // rax
  CDOTA_ParticleManager *v46; // rax
  CDOTA_ParticleManager *v47; // rax
  CDOTA_ParticleManager *v48; // rax
  int v49; // r13d
  CDOTA_ParticleManager *v50; // rax
  CDOTA_ParticleManager *v51; // rax
  CDOTA_ParticleManager *v52; // rax
  CDOTA_BaseNPC *v53; // rax
  const Vector *v54; // r15
  CDOTA_BaseNPC *v55; // r14
  CDOTA_ParticleManager *v56; // rax
  CDOTA_ParticleManager *v57; // rax
  CDOTA_ParticleManager *v58; // rax
  float v59; // xmm1_4
  float v60; // xmm1_4
  float v61; // xmm1_4
  float v62; // xmm1_4
  float v63; // xmm1_4
  CDOTA_BaseNPC *v64; // rax
  float z; // xmm0_4
  int v66; // r14d
  float v67; // xmm1_4
  float v68; // xmm2_4
  CDOTA_BaseNPC *v69; // rax
  CDOTA_BaseNPC *v70; // rax
  const QAngle *AbsAngles; // rax
  float vStartPosa; // [rsp+14h] [rbp-CCh]
  float vStartPos; // [rsp+14h] [rbp-CCh]
  float vStartPos_4a; // [rsp+18h] [rbp-C8h]
  float vStartPos_4; // [rsp+18h] [rbp-C8h]
  float vStartPos_8a; // [rsp+1Ch] [rbp-C4h]
  float vStartPos_8; // [rsp+1Ch] [rbp-C4h]
  float duration; // [rsp+20h] [rbp-C0h]
  CDOTA_BaseNPC *durationb; // [rsp+20h] [rbp-C0h]
  float durationa; // [rsp+20h] [rbp-C0h]
  float v81; // [rsp+28h] [rbp-B8h]
  float v82; // [rsp+28h] [rbp-B8h]
  vec_t v83; // [rsp+28h] [rbp-B8h]
  float v84; // [rsp+28h] [rbp-B8h]
  float path_delay; // [rsp+2Ch] [rbp-B4h]
  float path_delaya; // [rsp+2Ch] [rbp-B4h]
  Vector vPathDir; // [rsp+30h] [rbp-B0h] BYREF
  Vector CursorPosition; // [rsp+40h] [rbp-A0h]
  Vector vOrigin; // [rsp+50h] [rbp-90h]
  Vector vEndPos; // [rsp+60h] [rbp-80h] BYREF
  Vector vEndPosFX; // [rsp+70h] [rbp-70h]
  Vector vViewerLoc; // [rsp+80h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+90h] [rbp-50h] BYREF
  unsigned __int64 v94; // [rsp+A8h] [rbp-38h]

  v94 = __readfsqword(0x28u);
  path_delay = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "path_delay", -1, 0);
  duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_jakiro", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(AbilityByName, "value", 1, 1) + duration;
  v4 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
  if ( CDOTABaseAbility::GetCursorTarget(this) != 0 )
  {
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    v7 = CBaseEntity::GetAbsOrigin(CursorTarget);
    x = v7->x;
    y = v7->y;
  }
  else
  {
    CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
    y = CursorPosition.y;
    x = CursorPosition.x;
  }
  v10 = x - AbsOrigin->x;
  v11 = y - AbsOrigin->y;
  vPathDir.z = 0.0;
  vPathDir.x = v10;
  vPathDir.y = v11;
  if ( VectorNormalize(&vPathDir) < 0.0099999998 )
  {
    v70 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v70);
    AngleVectors(AbsAngles, &vPathDir, 0, 0);
  }
  m_flHullRadius = CDOTABaseAbility::GetCaster(this)->m_flHullRadius;
  vStartPos_8a = vPathDir.x * m_flHullRadius;
  vStartPos_4a = vPathDir.y * m_flHullRadius;
  vStartPosa = m_flHullRadius * vPathDir.z;
  v13 = CDOTABaseAbility::GetCaster(this);
  v14 = CBaseEntity::GetAbsOrigin(v13);
  vStartPos_8 = vStartPos_8a + v14->x;
  vStartPos_4 = vStartPos_4a + v14->y;
  vStartPos = vStartPosa + v14->z;
  v15 = (*(this->_vptr_IHandleEntity + 229))(this, &vec3_origin, 0);
  x_low = LODWORD(vPathDir.x);
  y_low = LODWORD(vPathDir.y);
  *x_low.m128i_i32 = vPathDir.x * v15;
  *y_low.m128i_i32 = vPathDir.y * v15;
  v18 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
  v19 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
  v81 = v15 * vPathDir.z;
  v20 = CDOTABaseAbility::GetCaster(this);
  v21 = CBaseEntity::GetAbsOrigin(v20);
  v22 = v19 + v21->y;
  v23 = v81 + v21->z;
  vEndPos.x = v18 + v21->x;
  vEndPos.y = v22;
  vEndPos.z = v23;
  v24 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v24, "Hero_Jakiro.IcePath.Cast", 0.0, 0, 0);
  v25 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSoundLocationWithCaster(&vEndPos, "Hero_Jakiro.IcePath", v25);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "path_radius", -1, 0);
  v27 = ((*(this->_vptr_IHandleEntity + 229))(this, &vec3_origin, 0) / 100.0);
  v28 = (*(this->_vptr_IHandleEntity + 229))(this, &vec3_origin, 0);
  v29 = LODWORD(vPathDir.x);
  v30 = LevelSpecialValue + v28;
  v31 = LODWORD(vPathDir.y);
  *v29.m128i_i32 = vPathDir.x * v30;
  *v31.m128i_i32 = vPathDir.y * v30;
  v32 = COERCE_FLOAT(_mm_cvtsi128_si32(v29));
  v33 = COERCE_FLOAT(_mm_cvtsi128_si32(v31));
  v82 = v30 * vPathDir.z;
  v34 = CDOTABaseAbility::GetCaster(this);
  v35 = CBaseEntity::GetAbsOrigin(v34);
  v36 = v33 + v35->y;
  v37 = v82 + v35->z;
  vEndPosFX.x = v32 + v35->x;
  vEndPosFX.y = v36;
  vEndPosFX.z = v37;
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_jakiro/jakiro_ice_path.vpcf",
               2,
               0,
               0,
               0);
  v40 = GetParticleManager();
  *&vOrigin.x = __PAIR64__(LODWORD(vStartPos_4), LODWORD(vStartPos_8));
  vOrigin.z = vStartPos;
  CDOTA_ParticleManager::SetParticleControl(
    v40,
    Particle,
    0,
    COERCE_DOUBLE(__PAIR64__(LODWORD(vStartPos_4), LODWORD(vStartPos_8))),
    vStartPos);
  v41 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v41, Particle, 1, *&vEndPosFX.x, vEndPosFX.z);
  vViewerLoc.z = path_delay;
  vViewerLoc.y = v27;
  vViewerLoc.x = duration + path_delay;
  v83 = duration + path_delay;
  v42 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v42, Particle, 2, *&vViewerLoc.x, vViewerLoc.z);
  v43 = CDOTABaseAbility::GetCaster(this);
  v44 = CBaseEntity::GetAbsOrigin(v43);
  durationb = CDOTABaseAbility::GetCaster(this);
  v45 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v45, Particle, 9, durationb, 5, "attach_attack1", *v44, 1);
  *&durationb = LevelSpecialValue;
  v46 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleFoWProperties(v46, Particle, 0, 1, LevelSpecialValue);
  v47 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v47, Particle);
  v48 = GetParticleManager();
  v49 = CDOTA_ParticleManager::CreateParticle(
          v48,
          "particles/units/heroes/hero_jakiro/jakiro_ice_path_b.vpcf",
          2,
          0,
          0,
          0);
  v50 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v50, v49, 0, *&vOrigin.x, vOrigin.z);
  v51 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v51, v49, 1, *&vEndPosFX.x, vEndPosFX.z);
  vViewerLoc.x = v83;
  vViewerLoc.y = v27;
  vViewerLoc.z = path_delay;
  v52 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v52, v49, 2, *&vViewerLoc.x, vViewerLoc.z);
  v53 = CDOTABaseAbility::GetCaster(this);
  v54 = CBaseEntity::GetAbsOrigin(v53);
  v55 = CDOTABaseAbility::GetCaster(this);
  v56 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v56, v49, 9, v55, 5, "attach_attack1", *v54, 1);
  v57 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleFoWProperties(v57, v49, 0, 1, *&durationb);
  v58 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v58, v49);
  KeyValues::KeyValues(&kv, "modifier_jakiro_ice_path");
  KeyValues::SetFloat(&kv, "duration", v59);
  KeyValues::SetFloat(&kv, "start_x", v60);
  KeyValues::SetFloat(&kv, "start_y", v61);
  KeyValues::SetFloat(&kv, "end_x", v62);
  KeyValues::SetFloat(&kv, "end_y", v63);
  LODWORD(v55) = this->m_iTeamNum.m_Value;
  v64 = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(v64, this, "modifier_jakiro_ice_path", &kv, vOrigin, v55, 0, 0, 0);
  path_delaya = 100.0 * vPathDir.x;
  durationa = 100.0 * vPathDir.y;
  vViewerLoc.y = vStartPos_4;
  vViewerLoc.x = vStartPos_8;
  v84 = 100.0 * vPathDir.z;
  vViewerLoc.z = vStartPos;
  if ( v27 > 0 )
  {
    z = vStartPos;
    v66 = 0;
    v67 = vStartPos_4;
    v68 = vStartPos_8;
    while ( 1 )
    {
      vViewerLoc.x = v68 + path_delaya;
      vViewerLoc.y = v67 + durationa;
      vViewerLoc.z = z + v84;
      v69 = CDOTABaseAbility::GetCaster(this);
      CDOTAFogOfWarSystem::AddTempViewer(
        &g_DOTAFogOfWarSystem,
        FoWViewerType_t::FOWVIEWERTYPE_ICEPATH,
        v69->m_iTeamNum.m_Value,
        &vViewerLoc,
        200.0,
        3.5,
        1);
      if ( ++v66 == v27 )
        break;
      v68 = vViewerLoc.x;
      v67 = vViewerLoc.y;
      z = vViewerLoc.z;
    }
  }
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Jakiro_IcePath::GetAbilityDamageToTargetOverInterval  (line 519, @0x0000000002b6a780, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Jakiro_IcePath::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Jakiro_IcePath *const this,
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


// CDOTA_Ability_Jakiro_IcePath::GetStunDuration  (line 529, @0x0000000002b76060, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Jakiro_IcePath::GetStunDuration(CDOTA_Ability_Jakiro_IcePath *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 1);
}


// CDOTA_Modifier_Jakiro_IcePath_Stun::~CDOTA_Modifier_Jakiro_IcePath_Stun  (line 537, @0x0000000002b99c20, libserver.so)  // inlines: ~CDOTA_Modifier_Stunned
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Jakiro_IcePath_Stun::~CDOTA_Modifier_Jakiro_IcePath_Stun(
        CDOTA_Modifier_Jakiro_IcePath_Stun *const this)
{
  this->_vptr_CDOTA_Buff = &off_411CD70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Jakiro_IcePath_Stun::~CDOTA_Modifier_Jakiro_IcePath_Stun  (line 537, @0x0000000002b99c40, libserver.so)  // inlines: ~CDOTA_Modifier_Jakiro_IcePath_Stun, ~CDOTA_Modifier_Stunned
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Jakiro_IcePath_Stun::~CDOTA_Modifier_Jakiro_IcePath_Stun(
        CDOTA_Modifier_Jakiro_IcePath_Stun *const this)
{
  this->_vptr_CDOTA_Buff = &off_411CD70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Jakiro_IcePath_Stun::IsStunDebuff  (line 542, @0x0000000002b921e0, libserver.so)
bool __fastcall CDOTA_Modifier_Jakiro_IcePath_Stun::IsStunDebuff(CDOTA_Modifier_Jakiro_IcePath_Stun *const this)
{
  return 1;
}


// CDOTA_Modifier_Jakiro_IcePath_Stun::OnCreated  (line 550, @0x0000000002b39060, libserver.so)
// calls: CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::AddParticle
// strings: "particles/units/heroes/hero_jakiro/jakiro_icepath_debuff.vpcf"
void __fastcall CDOTA_Modifier_Jakiro_IcePath_Stun::OnCreated(
        CDOTA_Modifier_Jakiro_IcePath_Stun *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax

  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_jakiro/jakiro_icepath_debuff.vpcf",
               1,
               Parent,
               0,
               0);
  CDOTA_Buff::AddParticle(this, Particle, 0, 0, -1, 0, 0);
}


// CDOTA_Modifier_Jakiro_IcePath_Stun::CheckState  (line 556, @0x0000000002b3b310, libserver.so)  // inlines: Enable
// calls: CDOTA_Modifier_Stunned::CheckState
void __fastcall CDOTA_Modifier_Jakiro_IcePath_Stun::CheckState(
        CDOTA_Modifier_Jakiro_IcePath_Stun *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  CDOTA_Modifier_Stunned::CheckState(this, buffState);
  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x40020uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFBFFDFLL;
}


// CDOTA_Modifier_Jakiro_IcePath_Thinker::~CDOTA_Modifier_Jakiro_IcePath_Thinker  (line 567, @0x0000000002bc3d30, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Jakiro_IcePath_Thinker::~CDOTA_Modifier_Jakiro_IcePath_Thinker(
        CDOTA_Modifier_Jakiro_IcePath_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_450AD50;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hUnitsHit);
  if ( (this->m_hUnitsHit.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hUnitsHit.m_Memory),
        (this->m_hUnitsHit.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hUnitsHit.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Jakiro_IcePath_Thinker::~CDOTA_Modifier_Jakiro_IcePath_Thinker  (line 567, @0x0000000002bc3ef0, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_Jakiro_IcePath_Thinker, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Jakiro_IcePath_Thinker::~CDOTA_Modifier_Jakiro_IcePath_Thinker(
        CDOTA_Modifier_Jakiro_IcePath_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_450AD50;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hUnitsHit);
  if ( (this->m_hUnitsHit.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hUnitsHit.m_Memory);
    if ( (this->m_hUnitsHit.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hUnitsHit.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Jakiro_IcePath_Thinker::ShouldSendToClients  (line 576, @0x0000000002b921f0, libserver.so)
bool __fastcall CDOTA_Modifier_Jakiro_IcePath_Thinker::ShouldSendToClients(
        CDOTA_Modifier_Jakiro_IcePath_Thinker *const this)
{
  return 0;
}


// CDOTA_Modifier_Jakiro_IcePath_Thinker::IsHidden  (line 577, @0x0000000002b92200, libserver.so)
bool __fastcall CDOTA_Modifier_Jakiro_IcePath_Thinker::IsHidden(CDOTA_Modifier_Jakiro_IcePath_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Jakiro_IcePath_Thinker::GetNumAvoidLocations  (line 580, @0x0000000002b92210, libserver.so)
int __fastcall CDOTA_Modifier_Jakiro_IcePath_Thinker::GetNumAvoidLocations(
        CDOTA_Modifier_Jakiro_IcePath_Thinker *const this)
{
  return 8;
}


// CDOTA_Modifier_Jakiro_IcePath_Thinker::GetAvoidLocation  (line 581, @0x0000000002b92220, libserver.so)  // inlines: InterpolateVector, operator[]
Vector __fastcall CDOTA_Modifier_Jakiro_IcePath_Thinker::GetAvoidLocation(
        CDOTA_Modifier_Jakiro_IcePath_Thinker *const this,
        int iAvoid)
{
  Vector *p_m_vPathEnd; // rcx
  Vector *p_m_vPathStart; // rdi
  __int64 i; // rax
  __int64 v7; // [rsp+0h] [rbp-8h] BYREF
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  p_m_vPathEnd = &this->m_vPathEnd;
  p_m_vPathStart = &this->m_vPathStart;
  for ( i = 0; i != 12; i += 4 )
    *(&v7 + i - 16) = ((*(&p_m_vPathEnd->x + i) - *(&p_m_vPathStart->x + i)) * (iAvoid / 7.0))
                    + *(&p_m_vPathStart->x + i);
  *&result.x = *(&v7 - 2);
  result.z = *(&v7 - 2);
  return result;
}


// CDOTA_Modifier_Jakiro_IcePath_Thinker::AvoidStrength  (line 582, @0x0000000002b92280, libserver.so)
float __fastcall CDOTA_Modifier_Jakiro_IcePath_Thinker::AvoidStrength(
        CDOTA_Modifier_Jakiro_IcePath_Thinker *const this,
        CDOTA_Bot *pBot)
{
  return 0.60000002;
}


// CDOTA_Modifier_Jakiro_IcePath_Thinker::GetAvoidRadius  (line 583, @0x0000000002b92290, libserver.so)
float __fastcall CDOTA_Modifier_Jakiro_IcePath_Thinker::GetAvoidRadius(
        CDOTA_Modifier_Jakiro_IcePath_Thinker *const this,
        int iAvoid)
{
  return this->path_radius + 100.0;
}


// CDOTA_Modifier_Jakiro_IcePath_Thinker::IsAvoidMagical  (line 584, @0x0000000002b922b0, libserver.so)
bool __fastcall CDOTA_Modifier_Jakiro_IcePath_Thinker::IsAvoidMagical(
        CDOTA_Modifier_Jakiro_IcePath_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Jakiro_IcePath_Thinker::IsPersistentAvoidance  (line 585, @0x0000000002b922c0, libserver.so)
bool __fastcall CDOTA_Modifier_Jakiro_IcePath_Thinker::IsPersistentAvoidance(
        CDOTA_Modifier_Jakiro_IcePath_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Jakiro_IcePath_Thinker::OnCreated  (line 611, @0x0000000002b7fc60, libserver.so)  // inlines: AssignTo, DOTAGameRules, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetGameTime, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink, KeyValues::GetFloat
// strings: "path_delay", "path_radius", "start_x", "start_y", "end_x", "end_y"
void __fastcall CDOTA_Modifier_Jakiro_IcePath_Thinker::OnCreated(
        CDOTA_Modifier_Jakiro_IcePath_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  vec_t Float; // xmm0_4
  float v12; // xmm0_4
  CDOTABaseAbility *v13; // rax
  CDOTABaseAbility *v14; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->path_delay = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "path_delay", -1, 0);
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
    {
LABEL_3:
      this->path_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "path_radius", -1, 0);
      goto LABEL_4;
    }
  }
  else
  {
    this->path_delay = 0.0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_3;
  }
  this->path_radius = 0;
LABEL_4:
  CDOTA_Buff::StartIntervalThink(this, 0.1, v6);
  this->m_vPathStart.x = KeyValues::GetFloat(pKV, "start_x", v7);
  this->m_vPathStart.y = KeyValues::GetFloat(pKV, "start_y", v8);
  this->m_vPathStart.z = 0.0;
  this->m_vPathEnd.x = KeyValues::GetFloat(pKV, "end_x", v9);
  Float = KeyValues::GetFloat(pKV, "end_y", v10);
  this->m_vPathEnd.z = 0.0;
  this->m_vPathEnd.y = Float;
  v12 = 0.0;
  if ( g_pGameRules != 0 )
    v12 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_fStartTime = v12;
  v13 = CDOTA_Buff::GetAbility(this);
  this->m_nDamage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v13, "damage", -1, 0);
  v14 = CDOTA_Buff::GetAbility(this);
  this->m_flRadius = ((*(v14->_vptr_IHandleEntity + 229))(v14, &vec3_origin, 0) * 0.5) + this->path_radius;
}


// CDOTA_Modifier_Jakiro_IcePath_Thinker::OnIntervalThink  (line 633, @0x0000000002b84500, libserver.so)  // inlines: AddToTail, AllocateData, CBroadcastRecipientFilter, CEntityHandle, CHandle, CSosFieldData, CSosFieldDataFloat3, CUtlMemory, CUtlVector, CUtlVectorBase, ClearData, CopyConstruct<CHandle<CBaseEntity> >, DOTAGameRules, Element, Get, GetDataPtr, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GrowMemory, HasElement, InState, IndexToIdentity, Init, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, Purge, SetValue, ToDOTABaseNPC, VectorAdd, VectorMultiply, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator[], ~CBroadcastRecipientFilter, ~CSosFieldData, ~CSosFieldDataFloat3, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, KeyValues::KeyValues, KeyValues::SetFloat, CRecipientFilter::CRecipientFilter, CRecipientFilter::AddAllPlayers, operator delete [], operator new [], CSoundOpGameSystem::SetSoundEventParam, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CBaseEntity::GetAbsOrigin (25 total)
// strings: "modifier_jakiro_ice_path_stun"
// globals: CEntityHandle::gm_pEntityList
// local variable allocation has failed, the output may be wrong!
void __fastcall CDOTA_Modifier_Jakiro_IcePath_Thinker::OnIntervalThink(
        CDOTA_Modifier_Jakiro_IcePath_Thinker *const this)
{
  float v1; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm1_4
  float v5; // xmm0_4
  int v6; // r14d
  float v7; // ebx
  float *v8; // rax
  float m_flRadius; // ebx
  CDOTA_BaseNPC *Parent; // rax
  __int64 v11; // rbx
  const CHandle<CBaseEntity> *v12; // rsi
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  unsigned __int64 m_Value; // rax
  __int64 v17; // rax
  __int64 m_Size; // r14
  uint32 *v19; // r15
  int v20; // eax
  CHandle<CBaseEntity> *v21; // rax
  __m128i v22; // xmm4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // rax
  float v25; // r15d
  CDOTABaseAbility *v26; // r14
  CDOTA_BaseNPC *v27; // rax
  float v28; // [rsp+60h] [rbp-1E8h] BYREF
  float v29; // [rsp+64h] [rbp-1E4h]
  __int128 vCenter; // [rsp+68h] [rbp-1E0h] OVERLAPPED BYREF
  __int128 vNPCLocation; // [rsp+78h] [rbp-1D0h] OVERLAPPED
  int v32; // [rsp+90h] [rbp-1B8h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hUnits; // [rsp+98h] [rbp-1B0h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-198h] BYREF
  IRecipientFilter v35; // [rsp+D0h] [rbp-178h] BYREF
  CBroadcastRecipientFilter filter; // [rsp+D8h] [rbp-170h]

  v1 = 0.0;
  *&filter.m_bUsingPredictionRules = __readfsqword(0x28u);
  if ( g_pGameRules != 0 )
    v1 = *&g_pGameRules[18].m_szQuestName[20];
  if ( this->path_delay <= (v1 - this->m_fStartTime)
    && CDOTA_Buff::GetParent(this) != 0
    && CDOTA_Buff::GetCaster(this) != 0 )
  {
    KeyValues::KeyValues(&v34, "modifier_jakiro_ice_path_stun");
    (*(this->_vptr_CDOTA_Buff + 30))(this);
    if ( g_pGameRules != 0 )
      v3 = *&g_pGameRules[18].m_szQuestName[20];
    else
      v3 = 0.0;
    KeyValues::SetFloat(&v34, "duration", v3);
    v4 = (this->m_vPathStart.z + this->m_vPathEnd.z) * 0.5;
    v5 = (this->m_vPathStart.x + this->m_vPathEnd.x) * 0.5;
    v29 = (this->m_vPathStart.y + this->m_vPathEnd.y) * 0.5;
    *&vCenter = v4;
    v28 = v5;
    CRecipientFilter::CRecipientFilter(&v35);
    v35._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::AddAllPlayers(&v35);
    BYTE8(vCenter) = -1;
    LODWORD(vNPCLocation) = 0;
    v6 = vCenter;
    *(&vNPCLocation + 1) = 0;
    v7 = v29;
    HIDWORD(vCenter) = (*(*g_pSoundOpSystem + 360LL))(g_pSoundOpSystem, 10);
    BYTE8(vCenter) = 10;
    v8 = operator new[](0xCu);
    *(&vNPCLocation + 1) = v8;
    LODWORD(vNPCLocation) = 12;
    *v8 = v28;
    v8[1] = v7;
    *(v8 + 2) = v6;
    CSoundOpGameSystem::SetSoundEventParam(
      g_pSoundOpGameSystem,
      &v35,
      this->m_SoundEventGuid,
      "position",
      (&vCenter + 8),
      0,
      0);
    if ( vNPCLocation > 8 && *(&vNPCLocation + 1) != 0 )
      operator delete[](*(&vNPCLocation + 1));
    v32 = 0;
    *&hUnits.m_Size = 0;
    m_flRadius = this->m_flRadius;
    hUnits.m_Memory.m_pMemory = 0;
    Parent = CDOTA_Buff::GetParent(this);
    FindUnitsInRadius(this->m_iTeam, &v28, Parent, m_flRadius, &v32, 2, 3, 0, 0, 0);
    if ( v32 > 0 )
    {
      v11 = 0;
      do
      {
        v12 = (*&hUnits.m_Size + 4 * v11);
        if ( v12->m_Index + 2 > 1 )
        {
          v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v12->m_Index) >> 9) & 0x3F];
          if ( v13 != 0 )
          {
            v14 = &v13[v12->m_Index & 0x1FF];
            if ( v14 != 0 && v12->m_Index == v14->m_EHandle.m_Index )
            {
              m_pInstance = v14->m_pInstance;
              if ( v14->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              {
                m_Value = m_pInstance->m_nUnitState64.m_Value;
                if ( (m_Value & 0x200) == 0
                  && !m_pInstance->m_bIsWaitingToSpawn.m_Value
                  && (m_Value & 0x100) == 0
                  && CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                       &this->m_hUnitsHit,
                       v12) < 0 )
                {
                  v17 = *&CBaseEntity::GetAbsOrigin(m_pInstance)->x;
                  LODWORD(vNPCLocation) = 0;
                  *(&vCenter + 1) = v17;
                  if ( this->path_radius > CalcDistanceToLine((&vCenter + 8), &this->m_vPathStart, &this->m_vPathEnd, 0) )
                  {
                    m_Size = this->m_hUnitsHit.m_Size;
                    v19 = (*&hUnits.m_Size + 4 * v11);
                    v20 = this->m_hUnitsHit.m_Size;
                    if ( m_Size == this->m_hUnitsHit.m_Memory.m_nAllocationCount )
                    {
                      CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hUnitsHit.m_Memory, 1);
                      v20 = this->m_hUnitsHit.m_Size;
                    }
                    this->m_hUnitsHit.m_Size = v20 + 1;
                    v21 = &this->m_hUnitsHit.m_Memory.m_pMemory[m_Size];
                    if ( v21 != 0 )
                      v21->m_Index = *v19;
                    if ( CDOTA_Buff::GetAbility(this) != 0 )
                    {
                      Ability = CDOTA_Buff::GetAbility(this);
                      Caster = CDOTA_Buff::GetCaster(this);
                      CDOTA_BaseNPC::AddNewModifier(
                        m_pInstance,
                        Caster,
                        Ability,
                        "modifier_jakiro_ice_path_stun",
                        &v34,
                        0);
                    }
                    *v22.m128i_i32 = this->m_nDamage;
                    v25 = COERCE_FLOAT(_mm_cvtsi128_si32(v22));
                    v26 = CDOTA_Buff::GetAbility(this);
                    v27 = CDOTA_Buff::GetCaster(this);
                    ApplyDamage(v27, m_pInstance, v26, v25, 2, 0);
                  }
                }
              }
            }
          }
        }
        ++v11;
      }
      while ( v32 > v11 );
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&v32);
    if ( (HIDWORD(hUnits.m_Memory.m_pMemory) & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hUnits);
      if ( (HIDWORD(hUnits.m_Memory.m_pMemory) & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hUnits);
    }
    v35._vptr_IRecipientFilter = &off_3FB63F0;
    CRecipientFilter::~CRecipientFilter(&v35);
    KeyValues::~KeyValues(&v34);
  }
}


// CDOTA_Ability_Jakiro_Liquid_Fire::~CDOTA_Ability_Jakiro_Liquid_Fire  (line 696, @0x0000000002ba19b0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Jakiro_Liquid_Fire::~CDOTA_Ability_Jakiro_Liquid_Fire(
        CDOTA_Ability_Jakiro_Liquid_Fire *const this)
{
  this->_vptr_IHandleEntity = &off_450B0B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Jakiro_Liquid_Fire::~CDOTA_Ability_Jakiro_Liquid_Fire  (line 696, @0x0000000002ba19d0, libserver.so)  // inlines: ~CDOTA_Ability_Jakiro_Liquid_Fire
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Jakiro_Liquid_Fire::~CDOTA_Ability_Jakiro_Liquid_Fire(
        CDOTA_Ability_Jakiro_Liquid_Fire *const this)
{
  this->_vptr_IHandleEntity = &off_450B0B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Jakiro_Liquid_Fire::Schema_DynamicBinding  (line 698, @0x0000000002b922d0, libserver.so)
// globals: CDOTA_Ability_Jakiro_Liquid_Fire::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Jakiro_Liquid_Fire::Schema_DynamicBinding(
        const CDOTA_Ability_Jakiro_Liquid_Fire *const this)
{
  return CDOTA_Ability_Jakiro_Liquid_Fire::s_pSchemaBinding;
}


// CDOTA_Ability_Jakiro_Liquid_Fire::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 698, @0x0000000002b922e0, libserver.so)
// globals: CDOTA_Ability_Jakiro_Liquid_Fire::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Jakiro_Liquid_Fire::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Jakiro_Liquid_Fire::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Jakiro_Liquid_Fire::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Jakiro_Liquid_Fire::CEntityInstanceEntityClass::DestructInstance  (line 698, @0x0000000002b922f0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Jakiro_Liquid_Fire>
void __fastcall CDOTA_Ability_Jakiro_Liquid_Fire::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Jakiro_Liquid_Fire::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Jakiro_Liquid_Fire::CEntityInstanceEntityClass::FreeInstance  (line 698, @0x0000000002b92310, libserver.so)
void __fastcall CDOTA_Ability_Jakiro_Liquid_Fire::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Jakiro_Liquid_Fire::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Jakiro_Liquid_Fire::CEntityInstanceEntityClass::CanAllocate  (line 698, @0x0000000002b92330, libserver.so)
bool __fastcall CDOTA_Ability_Jakiro_Liquid_Fire::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Jakiro_Liquid_Fire::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Jakiro_Liquid_Fire::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 698, @0x0000000002b92340, libserver.so)
// globals: CDOTA_Ability_Jakiro_Liquid_Fire::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Jakiro_Liquid_Fire::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Jakiro_Liquid_Fire::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Jakiro_Liquid_Fire::s_pSchemaBinding;
}


// CDOTA_Ability_Jakiro_Liquid_Fire::CEntityInstanceEntityClass::AllocateInstance  (line 698, @0x0000000002b985e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Jakiro_Liquid_Fire::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Jakiro_Liquid_Fire::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Jakiro_Liquid_Fire::CEntityInstanceEntityClass::ConstructInstance  (line 698, @0x0000000002b9d790, libserver.so)  // inlines: CDOTA_Ability_Jakiro_Liquid_Fire, Construct<CDOTA_Ability_Jakiro_Liquid_Fire>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Jakiro_Liquid_Fire::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Jakiro_Liquid_Fire::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_450B0B0;
  }
  return p;
}


// CDOTA_Ability_Jakiro_Liquid_Fire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 698, @0x0000000002bab510, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Jakiro_Liquid_Fire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Jakiro_Liquid_Fire::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Jakiro_Liquid_Fire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 698, @0x0000000002bab530, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Jakiro_Liquid_Fire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Jakiro_Liquid_Fire::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Jakiro_Liquid_Fire::GetEntityClassInternal  (line 698, @0x0000000002bcb390, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "jakiro_liquid_fire", "CDOTA_Ability_Jakiro_Liquid_Fire"
// globals: `guard variable for'CDOTA_Ability_Jakiro_Liquid_Fire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_Liquid_FireClass, CDOTA_Ability_Jakiro_Liquid_Fire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_Liquid_FireClass, __dso_handle, CDOTA_Ability_Jakiro_Liquid_Fire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Jakiro_Liquid_Fire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_Liquid_FireClassInfo, CDOTA_Ability_Jakiro_Liquid_Fire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_Liquid_FireClassInfo
CEntityClass *__cdecl CDOTA_Ability_Jakiro_Liquid_Fire::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Jakiro_Liquid_Fire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_Liquid_FireClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Jakiro_Liquid_Fire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_Liquid_FireClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Jakiro_Liquid_Fire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_Liquid_FireClass);
    CDOTA_Ability_Jakiro_Liquid_Fire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_Liquid_FireClass._vptr_CEntityClass = off_450B030;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Jakiro_Liquid_Fire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_Liquid_FireClass);
    __cxa_atexit(
      CDOTA_Ability_Jakiro_Liquid_Fire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Jakiro_Liquid_Fire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_Liquid_FireClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Jakiro_Liquid_FireClass != 0 )
    return &CDOTA_Ability_Jakiro_Liquid_Fire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_Liquid_FireClass;
  if ( `guard variable for'CDOTA_Ability_Jakiro_Liquid_Fire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_Liquid_FireClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Jakiro_Liquid_Fire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_Liquid_FireClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Jakiro_Liquid_Fire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_Liquid_FireClassInfo,
      "CDOTA_Ability_Jakiro_Liquid_Fire",
      "jakiro_liquid_fire",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Jakiro_Liquid_Fire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_Liquid_FireClassInfo);
  }
  CDOTA_Ability_Jakiro_Liquid_Fire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_Liquid_FireClass.m_pClassInfo = &CDOTA_Ability_Jakiro_Liquid_Fire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_Liquid_FireClassInfo;
  CDOTA_Ability_Jakiro_Liquid_Fire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_Liquid_FireClass.m_pBaseClassInfo = CDOTA_Ability_Jakiro_Liquid_Fire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_Liquid_FireClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Jakiro_Liquid_FireClass = &CDOTA_Ability_Jakiro_Liquid_Fire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_Liquid_FireClass;
  CDOTA_Ability_Jakiro_Liquid_Fire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_Liquid_FireClassInfo.m_pClass = &CDOTA_Ability_Jakiro_Liquid_Fire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_Liquid_FireClass;
  CDOTA_Ability_Jakiro_Liquid_Fire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_Liquid_FireClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Jakiro_Liquid_FireClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Jakiro_Liquid_Fire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_Liquid_FireClass;
}


// CDOTA_Ability_Jakiro_Liquid_Fire::GetIntrinsicModifierName  (line 701, @0x0000000002b92350, libserver.so)
// strings: "modifier_jakiro_liquidfire"
const char *__fastcall CDOTA_Ability_Jakiro_Liquid_Fire::GetIntrinsicModifierName(
        CDOTA_Ability_Jakiro_Liquid_Fire *const this)
{
  return "modifier_jakiro_liquidfire";
}


// CDOTA_Ability_Jakiro_Liquid_Fire::ProcsMagicStick  (line 703, @0x0000000002b92360, libserver.so)
bool __fastcall CDOTA_Ability_Jakiro_Liquid_Fire::ProcsMagicStick(CDOTA_Ability_Jakiro_Liquid_Fire *const this)
{
  return 0;
}


// CDOTA_Ability_Jakiro_Liquid_Fire::IsStealable  (line 704, @0x0000000002b92370, libserver.so)
bool __fastcall CDOTA_Ability_Jakiro_Liquid_Fire::IsStealable(CDOTA_Ability_Jakiro_Liquid_Fire *const this)
{
  return 0;
}


// CDOTA_Ability_Jakiro_Liquid_Fire::GetAbilityDamageToTargetOverInterval  (line 713, @0x0000000002b6a7e0, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetDuration, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Jakiro_Liquid_Fire::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Jakiro_Liquid_Fire *const this,
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


// CDOTA_Modifier_Jakiro_LiquidFire::~CDOTA_Modifier_Jakiro_LiquidFire  (line 727, @0x0000000002ba9430, libserver.so)  // inlines: Purge, RemoveAll, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_Jakiro_LiquidFire::~CDOTA_Modifier_Jakiro_LiquidFire(
        CDOTA_Modifier_Jakiro_LiquidFire *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_450BB70;
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


// CDOTA_Modifier_Jakiro_LiquidFire::~CDOTA_Modifier_Jakiro_LiquidFire  (line 727, @0x0000000002ba9660, libserver.so)  // inlines: Purge, RemoveAll, ~CDOTA_Modifier_Jakiro_LiquidFire, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<short int, int>::Purge
void __fastcall CDOTA_Modifier_Jakiro_LiquidFire::~CDOTA_Modifier_Jakiro_LiquidFire(
        CDOTA_Modifier_Jakiro_LiquidFire *const this)
{
  bool v2; // zf
  CUtlVectorBase<short int,CUtlMemory<short int,int> >::CAllocator *p_m_Memory; // r12

  v2 = (this->m_InFlightAttackRecords.m_Memory.m_nGrowSize & 0xC0000000) == 0;
  this->_vptr_CDOTA_Buff = &off_450BB70;
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


// CDOTA_Modifier_Jakiro_LiquidFire::IsHidden  (line 732, @0x0000000002b92380, libserver.so)
bool __fastcall CDOTA_Modifier_Jakiro_LiquidFire::IsHidden(CDOTA_Modifier_Jakiro_LiquidFire *const this)
{
  return 1;
}


// CDOTA_Modifier_Jakiro_LiquidFire::OnCreated  (line 754, @0x0000000002b7dcf0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
void __fastcall CDOTA_Modifier_Jakiro_LiquidFire::OnCreated(
        CDOTA_Modifier_Jakiro_LiquidFire *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->duration = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->radius = 0;
    goto LABEL_4;
  }
  this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "duration", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "radius", -1, 0);
LABEL_4:
  CDOTA_Buff::StartIntervalThink(this, 0.1, v5);
  this->m_nFXIndex = -1;
}


// CDOTA_Modifier_Jakiro_LiquidFire::OnIntervalThink  (line 767, @0x0000000002b37640, libserver.so)
// calls: CDOTA_Buff::GetAbility, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_Buff::GetCaster, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt
// strings: "particles/units/heroes/hero_jakiro/jakiro_liquid_fire_ready.vpcf", "attach_attack2"
void __fastcall CDOTA_Modifier_Jakiro_LiquidFire::OnIntervalThink(CDOTA_Modifier_Jakiro_LiquidFire *const this)
{
  CDOTABaseAbility *Ability; // rax
  int v3; // r12d
  CDOTA_ParticleManager *v4; // rax
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v7; // rax
  int m_nFXIndex; // ebx
  const CBaseAnimating *v9; // r12
  CDOTA_ParticleManager *v10; // rax

  if ( CDOTA_Buff::GetAbility(this) != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    if ( (*(Ability->_vptr_IHandleEntity + 245))(Ability) != 0 )
    {
      if ( this->m_nFXIndex == -1 )
      {
        Caster = CDOTA_Buff::GetCaster(this);
        ParticleManager = GetParticleManager();
        this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                             ParticleManager,
                             "particles/units/heroes/hero_jakiro/jakiro_liquid_fire_ready.vpcf",
                             2,
                             Caster,
                             0,
                             0);
        v7 = CDOTA_Buff::GetCaster(this);
        m_nFXIndex = this->m_nFXIndex;
        v9 = v7;
        v10 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v10, m_nFXIndex, 0, v9, 5, "attach_attack2", vec3_invalid, 1);
      }
    }
    else
    {
      v3 = this->m_nFXIndex;
      if ( v3 != -1 )
      {
        v4 = GetParticleManager();
        CDOTA_ParticleManager::DestroyParticleEffect(v4, v3, 0);
        this->m_nFXIndex = -1;
      }
    }
  }
}


// CDOTA_Modifier_Jakiro_LiquidFire::DeclareFunctions  (line 795, @0x0000000002b35d50, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Jakiro_LiquidFire::OnAttack(CModifierParams const&), CDOTA_Modifier_Jakiro_LiquidFire::OnAttackLanded(CModifierParams const&), CDOTA_Modifier_Jakiro_LiquidFire::OnAttackFail(CModifierParams const&), CDOTA_Modifier_Jakiro_LiquidFire::GetActivityTranslationModifiers(CModifierParams const&)
void __fastcall CDOTA_Modifier_Jakiro_LiquidFire::DeclareFunctions(CDOTA_Modifier_Jakiro_LiquidFire *const this)
{
  this->m_Functions[120].__pfn = CDOTA_Modifier_Jakiro_LiquidFire::OnAttack;
  this->m_Functions[120].__delta = 0;
  this->m_Functions[121].__delta = 0;
  this->m_Functions[121].__pfn = CDOTA_Modifier_Jakiro_LiquidFire::OnAttackLanded;
  this->m_Functions[122].__pfn = CDOTA_Modifier_Jakiro_LiquidFire::OnAttackFail;
  this->m_Functions[122].__delta = 0;
  this->m_Functions[155].__pfn = CDOTA_Modifier_Jakiro_LiquidFire::GetActivityTranslationModifiers;
  this->m_Functions[155].__delta = 0;
}


// CDOTA_Modifier_Jakiro_LiquidFire::GetActivityTranslationModifiers  (line 805, @0x0000000002b3a4d0, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::GetCurrentActiveAbility
ModifierVariant_t __fastcall CDOTA_Modifier_Jakiro_LiquidFire::GetActivityTranslationModifiers(
        CDOTA_Modifier_Jakiro_LiquidFire *const this,
        const CModifierParams *const params)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *CurrentActiveAbility; // r12
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetAbility(this) == 0 )
    return 2uLL;
  Ability = CDOTA_Buff::GetAbility(this);
  if ( (*(Ability->_vptr_IHandleEntity + 245))(Ability) == 0 || params->nActivity != 1503 )
    return 2uLL;
  if ( CDOTA_Buff::GetCaster(this) == 0
    || (Caster = CDOTA_Buff::GetCaster(this),
        (CurrentActiveAbility = CDOTA_BaseNPC::GetCurrentActiveAbility(Caster)) != CDOTA_Buff::GetAbility(this)) )
  {
    if ( !CDOTA_Buff::GetAbility(this)->m_bAutoCastState.m_Value )
      return 2uLL;
  }
  result.m_szVal = "liquid_fire";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_Jakiro_LiquidFire::OnAttack  (line 824, @0x0000000002b8bcb0, libserver.so)  // inlines: Attacker, AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::IsInvulnerable, CDOTA_BaseNPC::GetCurrentActiveAbility, GetAttackRecordsManager, CDOTA_AttackRecordManager::GetRecordByIndex, MakeEntitySystemString, CDOTA_BaseNPC::UnitEmitSound, CUtlVectorBase<short int, CUtlMemory<short int, int> >::AddToTail
// strings: "particles/units/heroes/hero_jakiro/jakiro_base_attack_fire.vpcf", "Hero_Jakiro.LiquidFire"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Jakiro_LiquidFire::OnAttack(
        CDOTA_Modifier_Jakiro_LiquidFire *const this,
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
  UtlSymLargeId_t v20; // [rsp+0h] [rbp-40h]
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
        if ( (*(v16->_vptr_IHandleEntity + 245))(v16) != 0 )
        {
          iRecord = params->iRecord;
          AttackRecordsManager = GetAttackRecordsManager();
          RecordByIndex = CDOTA_AttackRecordManager::GetRecordByIndex(AttackRecordsManager, iRecord);
          MakeEntitySystemString("particles/units/heroes/hero_jakiro/jakiro_base_attack_fire.vpcf");
          RecordByIndex->m_iszAutoAttackRangedParticle.u.m_Id = v20;
          CDOTA_BaseNPC::UnitEmitSound(v7, "Hero_Jakiro.LiquidFire", 0.0, 0, 0);
          CUtlVectorBase<short,CUtlMemory<short,int>>::AddToTail(
            &this->m_InFlightAttackRecords,
            &RecordByIndex->m_iRecord);
          (*(v16->_vptr_IHandleEntity + 241))(v16, -1.0);
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


// CDOTA_Modifier_Jakiro_LiquidFire::OnAttackLanded  (line 859, @0x0000000002b62eb0, libserver.so)  // inlines: Attacker, AttackerNPC, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetParent, CUtlVectorBase<short int, CUtlMemory<short int, int> >::FindAndFastRemove, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::IsInvulnerable, DOTA_EmitSound, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, FindUnitsInRadius, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt (22 total)
// strings: "Hero_Jakiro.LiquidFire", "particles/units/heroes/hero_jakiro/jakiro_liquid_fire_explosion.vpcf", "attach_hitloc", "modifier_jakiro_liquid_fire_burn"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Jakiro_LiquidFire::OnAttackLanded(
        CDOTA_Modifier_Jakiro_LiquidFire *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  uint32 m_Index; // edx
  CDOTA_BaseNPC *m_pInstance; // rsi
  CEntityIdentity *v7; // rcx
  CEntityIdentity *v8; // rcx
  CEntityInstance *v10; // rax
  CEntityInstance *v11; // r13
  CEntityInstance *v12; // rax
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v14; // r12
  __m128i v15; // xmm2
  float v16; // r14d
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v20; // rax
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTABaseAbility *v23; // rax
  float v24; // xmm1_4
  __int64 v25; // r14
  int i; // r13d
  CHandle<CBaseEntity> *v27; // rdx
  uint32 v28; // eax
  __int16 v29; // cx
  CEntityIdentity *v30; // rdx
  CEntityIdentity *v31; // rdx
  CEntityInstance *v32; // r12
  CDOTABaseAbility *v33; // r15
  CDOTA_BaseNPC *v34; // rax
  double v35; // [rsp+30h] [rbp-80h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v38; // [rsp+78h] [rbp-38h]
  ModifierVariant_t result; // 0:rax.16

  v38 = __readfsqword(0x28u);
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
  if ( v12 == 0 || BYTE3(v12[7]._vptr_IHandleEntity) == 0 )
  {
    CDOTA_Buff::GetAbility(this);
LABEL_7:
    *&result.m_eType = 1;
    goto LABEL_8;
  }
  Ability = CDOTA_Buff::GetAbility(this);
  v14 = Ability;
  if ( v11 == 0
    || Ability == 0
    || (BYTE1(v11[58]._vptr_IHandleEntity) & 2) != 0
    || LOBYTE(v11[71]._vptr_IHandleEntity) != 0
    || CDOTA_BaseNPC::IsInvulnerable(v11) )
  {
    goto LABEL_7;
  }
  LODWORD(result.m_szVal) = (*(v14->_vptr_IHandleEntity + 256))(v14, v11);
  *&result.m_eType = 1;
  if ( LODWORD(result.m_szVal) == 0 )
  {
    DOTA_EmitSound(10, "Hero_Jakiro.LiquidFire", v11);
    *v15.m128i_i32 = this->radius;
    entities.m_Size = 0;
    entities.m_Memory.m_pMemory = 0;
    entities.m_Memory.m_nAllocationCount = 0;
    entities.m_Memory.m_nGrowSize = 0;
    v16 = COERCE_FLOAT(_mm_cvtsi128_si32(v15));
    AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
    Caster = CDOTA_Buff::GetCaster(this);
    FindUnitsInRadius(Caster->m_iTeamNum.m_Value, AbsOrigin, v11, v16, &entities, 2, 23, 16, 0, 0);
    ParticleManager = GetParticleManager();
    LODWORD(AbsOrigin) = CDOTA_ParticleManager::CreateParticle(
                           ParticleManager,
                           "particles/units/heroes/hero_jakiro/jakiro_liquid_fire_explosion.vpcf",
                           2,
                           v11,
                           0,
                           0);
    v20 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v20, AbsOrigin, 0, v11, 5, "attach_hitloc", vec3_invalid, 1);
    *&v35 = this->radius;
    *(&v35 + 1) = *&v35;
    v21 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v21, AbsOrigin, 1, v35, *&v35);
    v22 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v22, AbsOrigin);
    KeyValues::KeyValues(&kv, "modifier_jakiro_liquid_fire_burn");
    v23 = CDOTA_Buff::GetAbility(this);
    CDOTABaseAbility::GetDuration(v23);
    KeyValues::SetFloat(&kv, "duration", v24);
    v25 = 0;
    for ( i = 0; entities.m_Size > i; ++v25 )
    {
      v27 = &entities.m_Memory.m_pMemory[v25];
      v28 = entities.m_Memory.m_pMemory[v25].m_Index;
      if ( v28 + 2 <= 1
        || (v29 = v27->m_Index,
            (v30 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v27->m_Index) >> 9) & 0x3F]) == 0)
        || (v31 = &v30[v29 & 0x1FF]) == 0
        || v28 != v31->m_EHandle.m_Index
        || (v32 = v31->m_pInstance, v31->m_pInstance == 0)
        || BYTE3(v32[7]._vptr_IHandleEntity) == 0 )
      {
        v32 = 0;
      }
      if ( (BYTE1(v32[58]._vptr_IHandleEntity) & 2) == 0 )
      {
        v33 = CDOTA_Buff::GetAbility(this);
        v34 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v32, v34, v33, "modifier_jakiro_liquid_fire_burn", &kv, 0);
      }
      ++i;
    }
    KeyValues::~KeyValues(&kv);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
    *&result.m_eType = 1;
  }
LABEL_8:
  result.m_szVal = 0;
  return result;
}


// CDOTA_Modifier_Jakiro_LiquidFire::OnAttackFail  (line 913, @0x0000000002b62e10, libserver.so)  // inlines: Attacker, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CUtlVectorBase<short int, CUtlMemory<short int, int> >::FindAndFastRemove
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Jakiro_LiquidFire::OnAttackFail(
        CDOTA_Modifier_Jakiro_LiquidFire *const this,
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


// CDOTA_Modifier_Jakiro_LiquidFire_Burn::~CDOTA_Modifier_Jakiro_LiquidFire_Burn  (line 929, @0x0000000002b99bd0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Jakiro_LiquidFire_Burn::~CDOTA_Modifier_Jakiro_LiquidFire_Burn(
        CDOTA_Modifier_Jakiro_LiquidFire_Burn *const this)
{
  this->_vptr_CDOTA_Buff = &off_450BE90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Jakiro_LiquidFire_Burn::~CDOTA_Modifier_Jakiro_LiquidFire_Burn  (line 929, @0x0000000002b99bf0, libserver.so)  // inlines: ~CDOTA_Modifier_Jakiro_LiquidFire_Burn
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Jakiro_LiquidFire_Burn::~CDOTA_Modifier_Jakiro_LiquidFire_Burn(
        CDOTA_Modifier_Jakiro_LiquidFire_Burn *const this)
{
  this->_vptr_CDOTA_Buff = &off_450BE90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Jakiro_LiquidFire_Burn::IsDebuff  (line 934, @0x0000000002b92390, libserver.so)
bool __fastcall CDOTA_Modifier_Jakiro_LiquidFire_Burn::IsDebuff(CDOTA_Modifier_Jakiro_LiquidFire_Burn *const this)
{
  return 1;
}


// CDOTA_Modifier_Jakiro_LiquidFire_Burn::GetEffectName  (line 942, @0x0000000002b923a0, libserver.so)
// strings: "particles/units/heroes/hero_jakiro/jakiro_liquid_fire_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_Jakiro_LiquidFire_Burn::GetEffectName(
        CDOTA_Modifier_Jakiro_LiquidFire_Burn *const this)
{
  return "particles/units/heroes/hero_jakiro/jakiro_liquid_fire_debuff.vpcf";
}


// CDOTA_Modifier_Jakiro_LiquidFire_Burn::OnCreated  (line 956, @0x0000000002b6d970, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
// strings: "slow_attack_speed_pct"
void __fastcall CDOTA_Modifier_Jakiro_LiquidFire_Burn::OnCreated(
        CDOTA_Modifier_Jakiro_LiquidFire_Burn *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  float v5; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->slow_attack_speed_pct = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->damage = 0;
    goto LABEL_4;
  }
  this->slow_attack_speed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "slow_attack_speed_pct", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "damage", -1, 0);
LABEL_4:
  CDOTA_Buff::StartIntervalThink(this, 0.5, v5);
}


// CDOTA_Modifier_Jakiro_LiquidFire_Burn::OnRefresh  (line 967, @0x0000000002b6c810, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "slow_attack_speed_pct"
void __fastcall CDOTA_Modifier_Jakiro_LiquidFire_Burn::OnRefresh(
        CDOTA_Modifier_Jakiro_LiquidFire_Burn *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->slow_attack_speed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                    Ability,
                                    "slow_attack_speed_pct",
                                    -1,
                                    0);
  else
    this->slow_attack_speed_pct = 0;
}


// CDOTA_Modifier_Jakiro_LiquidFire_Burn::OnIntervalThink  (line 972, @0x0000000002b38f50, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ApplyDamage, SendOverheadEventMessage
void __fastcall CDOTA_Modifier_Jakiro_LiquidFire_Burn::OnIntervalThink(
        CDOTA_Modifier_Jakiro_LiquidFire_Burn *const this)
{
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  int damage; // kr00_4
  CDOTA_BaseNPC *v6; // rax
  float flDamage; // [rsp+Ch] [rbp-24h]

  flDamage = (this->damage / 2);
  Ability = CDOTA_Buff::GetAbility(this);
  Parent = CDOTA_Buff::GetParent(this);
  Caster = CDOTA_Buff::GetCaster(this);
  ApplyDamage(Caster, Parent, Ability, flDamage, 2, 0);
  damage = this->damage;
  v6 = CDOTA_Buff::GetParent(this);
  SendOverheadEventMessage(0, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BONUS_SPELL_DAMAGE, v6, damage / 2, 0);
}


// CDOTA_Modifier_Jakiro_LiquidFire_Burn::DeclareFunctions  (line 982, @0x0000000002b35dc0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Jakiro_LiquidFire_Burn::DeclareFunctions(
        CDOTA_Modifier_Jakiro_LiquidFire_Burn *const this)
{
  this->m_Functions[24].__pfn = (&stru_10 + 697);
  this->m_Functions[24].__delta = 0;
}


// CDOTA_Modifier_Jakiro_LiquidFire_Burn::GetModifierAttackSpeedBonus_Constant  (line 989, @0x0000000002b35de0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Jakiro_LiquidFire_Burn::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Jakiro_LiquidFire_Burn *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->slow_attack_speed_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Jakiro_Macropyre::~CDOTA_Ability_Jakiro_Macropyre  (line 1006, @0x0000000002ba1a00, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Jakiro_Macropyre::~CDOTA_Ability_Jakiro_Macropyre(
        CDOTA_Ability_Jakiro_Macropyre *const this)
{
  this->_vptr_IHandleEntity = &off_450C1F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Jakiro_Macropyre::~CDOTA_Ability_Jakiro_Macropyre  (line 1006, @0x0000000002ba1a20, libserver.so)  // inlines: ~CDOTA_Ability_Jakiro_Macropyre
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Jakiro_Macropyre::~CDOTA_Ability_Jakiro_Macropyre(
        CDOTA_Ability_Jakiro_Macropyre *const this)
{
  this->_vptr_IHandleEntity = &off_450C1F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Jakiro_Macropyre::Schema_DynamicBinding  (line 1008, @0x0000000002b923b0, libserver.so)
// globals: CDOTA_Ability_Jakiro_Macropyre::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Jakiro_Macropyre::Schema_DynamicBinding(
        const CDOTA_Ability_Jakiro_Macropyre *const this)
{
  return CDOTA_Ability_Jakiro_Macropyre::s_pSchemaBinding;
}


// CDOTA_Ability_Jakiro_Macropyre::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1008, @0x0000000002b923c0, libserver.so)
// globals: CDOTA_Ability_Jakiro_Macropyre::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Jakiro_Macropyre::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Jakiro_Macropyre::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Jakiro_Macropyre::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Jakiro_Macropyre::CEntityInstanceEntityClass::DestructInstance  (line 1008, @0x0000000002b923d0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Jakiro_Macropyre>
void __fastcall CDOTA_Ability_Jakiro_Macropyre::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Jakiro_Macropyre::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Jakiro_Macropyre::CEntityInstanceEntityClass::FreeInstance  (line 1008, @0x0000000002b923f0, libserver.so)
void __fastcall CDOTA_Ability_Jakiro_Macropyre::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Jakiro_Macropyre::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Jakiro_Macropyre::CEntityInstanceEntityClass::CanAllocate  (line 1008, @0x0000000002b92410, libserver.so)
bool __fastcall CDOTA_Ability_Jakiro_Macropyre::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Jakiro_Macropyre::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Jakiro_Macropyre::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1008, @0x0000000002b92420, libserver.so)
// globals: CDOTA_Ability_Jakiro_Macropyre::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Jakiro_Macropyre::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Jakiro_Macropyre::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Jakiro_Macropyre::s_pSchemaBinding;
}


// CDOTA_Ability_Jakiro_Macropyre::CEntityInstanceEntityClass::AllocateInstance  (line 1008, @0x0000000002b98620, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Jakiro_Macropyre::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Jakiro_Macropyre::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Jakiro_Macropyre::CEntityInstanceEntityClass::ConstructInstance  (line 1008, @0x0000000002b9d7c0, libserver.so)  // inlines: CDOTA_Ability_Jakiro_Macropyre, Construct<CDOTA_Ability_Jakiro_Macropyre>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Jakiro_Macropyre::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Jakiro_Macropyre::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_450C1F0;
  }
  return p;
}


// CDOTA_Ability_Jakiro_Macropyre::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1008, @0x0000000002bab560, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Jakiro_Macropyre::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Jakiro_Macropyre::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Jakiro_Macropyre::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1008, @0x0000000002bab580, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Jakiro_Macropyre::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Jakiro_Macropyre::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Jakiro_Macropyre::GetEntityClassInternal  (line 1008, @0x0000000002bcb4e0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "CDOTA_Ability_Jakiro_Macropyre"
// globals: `guard variable for'CDOTA_Ability_Jakiro_Macropyre::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_MacropyreClass, CDOTA_Ability_Jakiro_Macropyre::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_MacropyreClass, __dso_handle, CDOTA_Ability_Jakiro_Macropyre::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Jakiro_Macropyre::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_MacropyreClassInfo, CDOTA_Ability_Jakiro_Macropyre::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_MacropyreClassInfo
CEntityClass *__cdecl CDOTA_Ability_Jakiro_Macropyre::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Jakiro_Macropyre::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_MacropyreClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Jakiro_Macropyre::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_MacropyreClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Jakiro_Macropyre::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_MacropyreClass);
    CDOTA_Ability_Jakiro_Macropyre::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_MacropyreClass._vptr_CEntityClass = off_450C170;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Jakiro_Macropyre::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_MacropyreClass);
    __cxa_atexit(
      CDOTA_Ability_Jakiro_Macropyre::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Jakiro_Macropyre::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_MacropyreClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Jakiro_MacropyreClass != 0 )
    return &CDOTA_Ability_Jakiro_Macropyre::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_MacropyreClass;
  if ( `guard variable for'CDOTA_Ability_Jakiro_Macropyre::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_MacropyreClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Jakiro_Macropyre::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_MacropyreClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Jakiro_Macropyre::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_MacropyreClassInfo,
      "CDOTA_Ability_Jakiro_Macropyre",
      "jakiro_macropyre",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Jakiro_Macropyre::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_MacropyreClassInfo);
  }
  CDOTA_Ability_Jakiro_Macropyre::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_MacropyreClass.m_pClassInfo = &CDOTA_Ability_Jakiro_Macropyre::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_MacropyreClassInfo;
  CDOTA_Ability_Jakiro_Macropyre::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_MacropyreClass.m_pBaseClassInfo = CDOTA_Ability_Jakiro_Macropyre::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_MacropyreClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Jakiro_MacropyreClass = &CDOTA_Ability_Jakiro_Macropyre::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_MacropyreClass;
  CDOTA_Ability_Jakiro_Macropyre::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Jakiro_MacropyreClassInfo.m_pClass = &CDOTA_Ability_Jakiro_Macropyre::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_MacropyreClass;
  CDOTA_Ability_Jakiro_Macropyre::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_MacropyreClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Jakiro_MacropyreClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Jakiro_Macropyre::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Jakiro_MacropyreClass;
}


// CDOTA_Ability_Jakiro_Macropyre::YouForgotToImplementOrDeclareServerClass  (line 1018, @0x0000000002b35e00, libserver.so)
int __fastcall CDOTA_Ability_Jakiro_Macropyre::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Jakiro_Macropyre *const this)
{
  return 0;
}


// CDOTA_Ability_Jakiro_Macropyre::GetServerClass  (line 1018, @0x0000000002b4c7a0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Jakiro_Macropyre::GetServerClass(CDOTA_Ability_Jakiro_Macropyre *const this)
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


// CDOTA_Ability_Jakiro_Macropyre::GetAbilityDamageToTargetOverInterval  (line 1027, @0x0000000002b7b340, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetDuration, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "burn_interval"
__int64 __fastcall CDOTA_Ability_Jakiro_Macropyre::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Jakiro_Macropyre *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  float fIntervala; // [rsp+0h] [rbp-1Ch]
  float fIntervalb; // [rsp+0h] [rbp-1Ch]
  float fIntervalc; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    fIntervala = fminf(fInterval, CDOTABaseAbility::GetDuration(this));
    fIntervalb = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "damage", -1, 1) * fIntervala;
    fIntervalc = fIntervalb / CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "burn_interval", -1, 1);
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalc);
  }
  return result;
}


// CDOTA_Ability_Jakiro_Macropyre::OnSpellStart  (line 1040, @0x0000000002b68960, libserver.so)  // inlines: GetAbilityData, GetLevelSpecialValueFor<int>, GetTeamNumber, NormalizeInPlace, Vector, VectorAdd, VectorDivide, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator/
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorTarget, VectorNormalize, CBaseEntity::GetModel, KeyValues::KeyValues, CDOTA_BaseNPC::HasScepter, KeyValues::SetFloat, ceilf, CGridNav::DestroyTreesAroundPoint, GetParticleManager (27 total)
// strings: "path_radius", "modifier_jakiro_macropyre", "particles/units/heroes/hero_jakiro/jakiro_macropyre.vpcf", "Hero_Jakiro.Macropyre.Cast", "Hero_Jakiro.Macropyre.Scepter", "Hero_Jakiro.Macropyre"
void __fastcall CDOTA_Ability_Jakiro_Macropyre::OnSpellStart(CDOTA_Ability_Jakiro_Macropyre *const this)
{
  int LevelSpecialValue; // ebx
  int v3; // r15d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r12
  CBaseEntity *CursorTarget; // rax
  const Vector *v7; // rax
  float x; // xmm1_4
  float y; // xmm0_4
  vec_t v10; // xmm1_4
  vec_t v11; // xmm0_4
  CDOTA_BaseNPC *v12; // rax
  __m128i x_low; // xmm6
  __m128i y_low; // xmm7
  float v15; // xmm0_4
  float v16; // r14d
  float v17; // r12d
  CDOTA_BaseNPC *v18; // rax
  const Vector *v19; // rax
  vec_t v20; // xmm2_4
  vec_t v21; // xmm1_4
  vec_t v22; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  int v24; // eax
  __m128i v25; // xmm6
  int v26; // eax
  float v27; // r14d
  CDOTA_BaseNPC *v28; // rax
  const Vector *v29; // rax
  vec_t v30; // xmm1_4
  vec_t v31; // xmm0_4
  CDOTA_BaseNPC *v32; // rax
  float v33; // xmm1_4
  float v34; // xmm1_4
  float v35; // xmm1_4
  float v36; // xmm1_4
  int v37; // eax
  float v38; // xmm7_4
  int v39; // ebx
  int v40; // r12d
  CDOTA_BaseNPC *v41; // rax
  unsigned int v42; // eax
  float v43; // xmm3_4
  CDOTA_BaseNPC *v44; // rax
  __m128i v45; // xmm6
  float v46; // r15d
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v49; // rax
  CDOTA_ParticleManager *v50; // rax
  CDOTA_ParticleManager *v51; // rax
  CDOTA_ParticleManager *v52; // rax
  CDOTA_ParticleManager *v53; // rax
  int m_Value; // r12d
  CDOTA_BaseNPC *v55; // rax
  Vector *v56; // rbx
  CDOTA_BaseNPC *v57; // rax
  CDOTA_BaseNPC *v58; // rax
  CDOTA_BaseNPC *v59; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // ebx
  CDOTA_BaseNPC *v62; // rax
  float v63; // xmm3_4
  CDOTA_BaseNPC *v64; // rax
  const QAngle *AbsAngles; // rax
  float v66; // [rsp+10h] [rbp-E0h]
  int duration; // [rsp+14h] [rbp-DCh]
  void (__fastcall *flFoWRadiusa)(IGameModelInfo *, __int64 *, Vector *, Vector *); // [rsp+18h] [rbp-D8h]
  float flFoWRadius; // [rsp+18h] [rbp-D8h]
  Vector vPathDir; // [rsp+20h] [rbp-D0h] BYREF
  Vector CursorPosition; // [rsp+30h] [rbp-C0h]
  Vector mins; // [rsp+40h] [rbp-B0h] BYREF
  Vector maxs; // [rsp+50h] [rbp-A0h] BYREF
  Vector vStartPos; // [rsp+60h] [rbp-90h] BYREF
  Vector vEndPos; // [rsp+70h] [rbp-80h] BYREF
  Vector vOrigin; // [rsp+80h] [rbp-70h] BYREF
  __int64 v77; // [rsp+90h] [rbp-60h] BYREF
  float z; // [rsp+98h] [rbp-58h]
  KeyValues kv; // [rsp+A0h] [rbp-50h] BYREF
  unsigned __int64 v80; // [rsp+B8h] [rbp-38h]
  Vector v81; // 0:xmm0_8.8,8:xmm1_4.4

  v80 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "path_radius", -1, 0);
  duration = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "duration", -1, 0);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "duration_scepter", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  if ( CDOTABaseAbility::GetCursorTarget(this) != 0 )
  {
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    v7 = CBaseEntity::GetAbsOrigin(CursorTarget);
    x = v7->x;
    y = v7->y;
  }
  else
  {
    CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
    y = CursorPosition.y;
    x = CursorPosition.x;
  }
  v10 = x - AbsOrigin->x;
  v11 = y - AbsOrigin->y;
  vPathDir.z = 0.0;
  vPathDir.x = v10;
  vPathDir.y = v11;
  if ( VectorNormalize(&vPathDir) < 0.0099999998 )
  {
    v64 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v64);
    AngleVectors(AbsAngles, &vPathDir, 0, 0);
  }
  flFoWRadiusa = *(modelinfo->_vptr_IAppSystem + 16);
  v12 = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::GetModel(&v77, v12);
  flFoWRadiusa(modelinfo, &v77, &mins, &maxs);
  x_low = LODWORD(vPathDir.x);
  y_low = LODWORD(vPathDir.y);
  v15 = (maxs.x - mins.x) * 0.34999999;
  *y_low.m128i_i32 = vPathDir.y * v15;
  *x_low.m128i_i32 = vPathDir.x * v15;
  v16 = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
  v17 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
  *&flFoWRadiusa = v15 * vPathDir.z;
  v18 = CDOTABaseAbility::GetCaster(this);
  v19 = CBaseEntity::GetAbsOrigin(v18);
  v20 = v17 + v19->x;
  v21 = v16 + v19->y;
  v22 = *&flFoWRadiusa + v19->z;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  vStartPos.x = v20;
  vStartPos.y = v21;
  vStartPos.z = v22;
  v24 = vptr_IHandleEntity[229](this, &vec3_origin, 0);
  v25 = LODWORD(vPathDir.x);
  v26 = LevelSpecialValue + v24;
  *v25.m128i_i32 = vPathDir.x * v26;
  v27 = COERCE_FLOAT(_mm_cvtsi128_si32(v25));
  v66 = vPathDir.y * v26;
  *&flFoWRadiusa = v26 * vPathDir.z;
  v28 = CDOTABaseAbility::GetCaster(this);
  v29 = CBaseEntity::GetAbsOrigin(v28);
  v30 = v66 + v29->y;
  v31 = *&flFoWRadiusa + v29->z;
  vEndPos.x = v27 + v29->x;
  vEndPos.y = v30;
  vEndPos.z = v31;
  KeyValues::KeyValues(&kv, "modifier_jakiro_macropyre");
  v32 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::HasScepter(v32);
  KeyValues::SetFloat(&kv, "duration", v33);
  KeyValues::SetFloat(&kv, "x", v34);
  KeyValues::SetFloat(&kv, "y", v35);
  KeyValues::SetFloat(&kv, "z", v36);
  v37 = (*(this->_vptr_IHandleEntity + 229))(this, &vec3_origin, 0);
  v38 = LevelSpecialValue;
  v39 = 0;
  flFoWRadius = v38;
  v40 = ceilf((v37 + v37) / v38);
  if ( v40 > 0 )
  {
    do
    {
      v41 = CDOTABaseAbility::GetCaster(this);
      v42 = (*(v41->_vptr_IHandleEntity + 414))(v41);
      v43 = 1.0 / v40;
      *(&v77 + 1) = (((vEndPos.y - vStartPos.y) * v39) * v43) + vStartPos.y;
      v81.z = (((vEndPos.z - vStartPos.z) * v39) * v43) + vStartPos.z;
      z = v81.z;
      *&v77 = (((vEndPos.x - vStartPos.x) * v39) * v43) + vStartPos.x;
      *&v81.x = v77;
      CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v42, v81, flFoWRadius, v43);
      ++v39;
    }
    while ( v39 != v40 );
  }
  v44 = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(v44) )
    *v45.m128i_i32 = v3;
  else
    *v45.m128i_i32 = duration;
  v46 = COERCE_FLOAT(_mm_cvtsi128_si32(v45));
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_jakiro/jakiro_macropyre.vpcf",
               8,
               0,
               0,
               0);
  v49 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v49, Particle, 0, *&vStartPos.x, vStartPos.z);
  v50 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v50, Particle, 1, *&vEndPos.x, vEndPos.z);
  *&vOrigin.x = LODWORD(v46);
  vOrigin.z = 0.0;
  v51 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v51, Particle, 2, *&vOrigin.x, vOrigin.z);
  v52 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleFoWProperties(v52, Particle, 0, 1, flFoWRadius);
  v53 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v53, Particle);
  m_Value = this->m_iTeamNum.m_Value;
  v55 = CDOTABaseAbility::GetCaster(this);
  v56 = CBaseEntity::GetAbsOrigin(v55);
  v57 = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(v57, this, "modifier_jakiro_macropyre", &kv, *v56, m_Value, 0, 0, 0);
  v58 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v58, "Hero_Jakiro.Macropyre.Cast", 0.0, 0, 0);
  v59 = CDOTABaseAbility::GetCaster(this);
  if ( !CDOTA_BaseNPC::HasScepter(v59) )
  {
    vOrigin.y = (vStartPos.y + vEndPos.y) * 0.5;
    vOrigin.z = (vStartPos.z + vEndPos.z) * 0.5;
    vOrigin.x = (vStartPos.x + vEndPos.x) * 0.5;
    DOTA_EmitSoundLocation(&vOrigin, "Hero_Jakiro.Macropyre", 0);
    m_pAbilityData = this->m_pAbilityData;
    if ( m_pAbilityData != 0 )
      goto LABEL_11;
LABEL_13:
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
    goto LABEL_11;
  }
  DOTA_EmitSoundLocation(&vStartPos, "Hero_Jakiro.Macropyre.Scepter", 0);
  DOTA_EmitSoundLocation(&vEndPos, "Hero_Jakiro.Macropyre.Scepter", 0);
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
    goto LABEL_13;
LABEL_11:
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  v62 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(
    g_pGameRules,
    v62,
    0,
    m_iAbilityID,
    0,
    0,
    *&vEndPos.x,
    vEndPos.z,
    v46,
    v63);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Jakiro_Macropyre::GetCastRange  (line 1107, @0x0000000002b6a870, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCastRange, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "cast_range_scepter"
int __fastcall CDOTA_Ability_Jakiro_Macropyre::GetCastRange(
        CDOTA_Ability_Jakiro_Macropyre *const this,
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


// CDOTA_Modifier_Jakiro_Macropyre_Thinker::~CDOTA_Modifier_Jakiro_Macropyre_Thinker  (line 1116, @0x0000000002b99b80, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Jakiro_Macropyre_Thinker::~CDOTA_Modifier_Jakiro_Macropyre_Thinker(
        CDOTA_Modifier_Jakiro_Macropyre_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_450CCB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Jakiro_Macropyre_Thinker::~CDOTA_Modifier_Jakiro_Macropyre_Thinker  (line 1116, @0x0000000002b99ba0, libserver.so)  // inlines: ~CDOTA_Modifier_Jakiro_Macropyre_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Jakiro_Macropyre_Thinker::~CDOTA_Modifier_Jakiro_Macropyre_Thinker(
        CDOTA_Modifier_Jakiro_Macropyre_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_450CCB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Jakiro_Macropyre_Thinker::ShouldSendToClients  (line 1123, @0x0000000002b92430, libserver.so)
bool __fastcall CDOTA_Modifier_Jakiro_Macropyre_Thinker::ShouldSendToClients(
        CDOTA_Modifier_Jakiro_Macropyre_Thinker *const this)
{
  return 0;
}


// CDOTA_Modifier_Jakiro_Macropyre_Thinker::IsHidden  (line 1127, @0x0000000002b92440, libserver.so)
bool __fastcall CDOTA_Modifier_Jakiro_Macropyre_Thinker::IsHidden(CDOTA_Modifier_Jakiro_Macropyre_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Jakiro_Macropyre_Thinker::GetNumAvoidLocations  (line 1130, @0x0000000002b92450, libserver.so)
int __fastcall CDOTA_Modifier_Jakiro_Macropyre_Thinker::GetNumAvoidLocations(
        CDOTA_Modifier_Jakiro_Macropyre_Thinker *const this)
{
  return 8;
}


// CDOTA_Modifier_Jakiro_Macropyre_Thinker::GetAvoidLocation  (line 1131, @0x0000000002b9de50, libserver.so)  // inlines: InterpolateVector, VectorAdd, VectorMultiply, operator*, operator+, operator[]
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin
Vector __fastcall CDOTA_Modifier_Jakiro_Macropyre_Thinker::GetAvoidLocation(
        CDOTA_Modifier_Jakiro_Macropyre_Thinker *const this,
        int iAvoid)
{
  float cast_range; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  CDOTA_BaseNPC *v7; // rax
  const Vector *v8; // rax
  float y; // xmm1_4
  float z; // xmm4_4
  float v11; // xmm3_4
  float v14; // [rsp+4h] [rbp-4Ch]
  float v15; // [rsp+8h] [rbp-48h]
  float v16; // [rsp+Ch] [rbp-44h]
  float v17; // [rsp+Ch] [rbp-44h]
  float v18; // [rsp+24h] [rbp-2Ch]
  float v19; // [rsp+28h] [rbp-28h]
  float v20[8]; // [rsp+30h] [rbp-20h]
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  cast_range = this->cast_range;
  v16 = this->m_vPathDir.x * cast_range;
  v14 = this->m_vPathDir.y * cast_range;
  v15 = cast_range * this->m_vPathDir.z;
  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  v17 = v16 + AbsOrigin->x;
  v19 = v15 + AbsOrigin->z;
  v18 = v14 + AbsOrigin->y;
  v7 = CDOTA_Buff::GetParent(this);
  v8 = CBaseEntity::GetAbsOrigin(v7);
  y = v8->y;
  z = v8->z;
  v11 = iAvoid / 7.0;
  v20[0] = ((v17 - v8->x) * v11) + v8->x;
  v20[1] = ((v18 - y) * v11) + y;
  *&result.x = *v20;
  result.z = ((v19 - z) * v11) + z;
  return result;
}


// CDOTA_Modifier_Jakiro_Macropyre_Thinker::AvoidStrength  (line 1132, @0x0000000002bad7e0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetUnit, IndexToIdentity, IsValid, LookupEntity, RemapValClamped, ToDOTABaseNPC, clamp<float, float>, operator CBaseEntity*, operator CEntityInstance*
// calls: CBaseEntity::GetHealth
// globals: CEntityHandle::gm_pEntityList
float __fastcall CDOTA_Modifier_Jakiro_Macropyre_Thinker::AvoidStrength(
        CDOTA_Modifier_Jakiro_Macropyre_Thinker *const this,
        CDOTA_Bot *pBot)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  const CBaseEntity *m_pInstance; // rdi
  float v6; // xmm1_4
  float result; // xmm0_4

  m_Index = pBot->m_hUnit.m_Index;
  if ( m_Index + 2 <= 1
    || (v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(pBot->m_hUnit.m_Index) >> 9) & 0x3F]) == 0
    || (v4 = &v3[pBot->m_hUnit.m_Index & 0x1FF]) == 0
    || m_Index != v4->m_EHandle.m_Index
    || (m_pInstance = v4->m_pInstance, v4->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v6 = (CBaseEntity::GetHealth(m_pInstance) - 200.0) / 1300.0;
  if ( v6 < 0.0 )
    return 1.0;
  result = 0.80000001;
  if ( v6 <= 1.0 )
    return (v6 * -0.19999999) + 1.0;
  return result;
}


// CDOTA_Modifier_Jakiro_Macropyre_Thinker::GetAvoidRadius  (line 1133, @0x0000000002b92460, libserver.so)
float __fastcall CDOTA_Modifier_Jakiro_Macropyre_Thinker::GetAvoidRadius(
        CDOTA_Modifier_Jakiro_Macropyre_Thinker *const this,
        int iAvoid)
{
  return this->path_radius + 100.0;
}


// CDOTA_Modifier_Jakiro_Macropyre_Thinker::IsAvoidMagical  (line 1134, @0x0000000002b92480, libserver.so)
bool __fastcall CDOTA_Modifier_Jakiro_Macropyre_Thinker::IsAvoidMagical(
        CDOTA_Modifier_Jakiro_Macropyre_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Jakiro_Macropyre_Thinker::IsPersistentAvoidance  (line 1135, @0x0000000002b92490, libserver.so)
bool __fastcall CDOTA_Modifier_Jakiro_Macropyre_Thinker::IsPersistentAvoidance(
        CDOTA_Modifier_Jakiro_Macropyre_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Jakiro_Macropyre_Thinker::OnCreated  (line 1151, @0x0000000002b80680, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter, KeyValues::GetFloat, CDOTA_Buff::StartIntervalThink
// strings: "burn_interval", "path_radius"
void __fastcall CDOTA_Modifier_Jakiro_Macropyre_Thinker::OnCreated(
        CDOTA_Modifier_Jakiro_Macropyre_Thinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  float v10; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->burn_interval = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "burn_interval", -1, 0);
  else
    this->burn_interval = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
    this->path_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "path_radius", -1, 0);
  else
    this->path_radius = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
    this->damage_scepter = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "damage_scepter", -1, 0);
  else
    this->damage_scepter = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
    this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "damage", -1, 0);
  else
    this->damage = 0;
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 != 0 )
    this->cast_range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "cast_range", -1, 0);
  else
    this->cast_range = 0;
  if ( CDOTA_Buff::GetAbility(this) != 0 )
  {
    v9 = CDOTA_Buff::GetAbility(this);
    this->cast_range = (*(v9->_vptr_IHandleEntity + 229))(v9, &vec3_origin, 0);
  }
  this->damage = (this->damage * this->burn_interval);
  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(Caster) )
      this->damage = (this->damage_scepter * this->burn_interval);
  }
  this->m_vPathDir.x = KeyValues::GetFloat(pKV, "x", v10);
  this->m_vPathDir.y = KeyValues::GetFloat(pKV, "y", v12);
  this->m_vPathDir.z = KeyValues::GetFloat(pKV, "z", v13);
  CDOTA_Buff::StartIntervalThink(this, this->burn_interval, v14);
}


// CDOTA_Modifier_Jakiro_Macropyre_Thinker::OnIntervalThink  (line 1181, @0x0000000002b88ce0, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CDOTA_BaseNPC*>, Element, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GrowMemory, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, ToDOTABaseNPC, VectorMultiply, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+=, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, ceilf, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CDOTA_BaseNPC*, CUtlMemory<CDOTA_BaseNPC*, int> >::Find, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CDOTA_BaseNPC*, int>::Purge, CDOTA_Buff::GetAbility, ApplyDamage, CUtlMemory<CDOTA_BaseNPC*, int>::Grow, CUtlMemory<CHandle<CBaseEntity>, int>::Purge (15 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Jakiro_Macropyre_Thinker::OnIntervalThink(
        CDOTA_Modifier_Jakiro_Macropyre_Thinker *const this)
{
  __m128i v2; // xmm7
  float path_radius; // xmm0_4
  float v4; // ebx
  __m128i v5; // xmm0
  float x; // r13d
  float v7; // r14d
  float y; // r12d
  CDOTA_BaseNPC *Parent; // rax
  __m128i v10; // xmm2
  float v11; // xmm3_4
  float v12; // r12d
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_BaseNPC *v14; // rax
  __int64 v15; // rbx
  CEntityInstance *m_pInstance; // r12
  CHandle<CBaseEntity> *v17; // rdx
  uint32 m_Index; // eax
  __int16 v19; // cx
  CEntityIdentity *v20; // rdx
  CEntityIdentity *v21; // rdx
  int m_Size; // eax
  CDOTA_BaseNPC **v23; // rax
  CDOTA_BaseNPC *v24; // rax
  float v25; // [rsp+28h] [rbp-C8h]
  float v26; // [rsp+2Ch] [rbp-C4h]
  float v27; // [rsp+30h] [rbp-C0h]
  int nSegments; // [rsp+34h] [rbp-BCh]
  CDOTABaseAbility *pInflictor; // [rsp+48h] [rbp-A8h]
  int i; // [rsp+50h] [rbp-A0h]
  int flDamage; // [rsp+54h] [rbp-9Ch]
  char flDamagea; // [rsp+54h] [rbp-9Ch]
  float flDamageb; // [rsp+54h] [rbp-9Ch]
  float src; // [rsp+58h] [rbp-98h]
  CDOTA_BaseNPC *pNPC; // [rsp+68h] [rbp-88h] BYREF
  Vector vStartPos; // [rsp+70h] [rbp-80h] BYREF
  CUtlVector<CDOTA_BaseNPC*,CUtlMemory<CDOTA_BaseNPC*,int> > hitEntities; // [rsp+80h] [rbp-70h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+A0h] [rbp-50h] BYREF

  if ( CDOTA_Buff::GetParent(this) != 0 && CDOTA_Buff::GetCaster(this) != 0 )
  {
    *v2.m128i_i32 = this->cast_range;
    hitEntities.m_Size = 0;
    path_radius = this->path_radius;
    hitEntities.m_Memory.m_pMemory = 0;
    hitEntities.m_Memory.m_nAllocationCount = 0;
    hitEntities.m_Memory.m_nGrowSize = 0;
    v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
    *v5.m128i_i32 = ceilf(*v2.m128i_i32 / path_radius);
    x = this->m_vPathDir.x;
    v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
    y = this->m_vPathDir.y;
    src = this->m_vPathDir.z;
    Parent = CDOTA_Buff::GetParent(this);
    vStartPos = *CBaseEntity::GetAbsOrigin(Parent);
    nSegments = v7;
    if ( v7 > 0 )
    {
      i = 0;
      v11 = v4 / nSegments;
      v27 = x * v11;
      v25 = v11 * src;
      v26 = y * v11;
      do
      {
        entities.m_Size = 0;
        *v10.m128i_i32 = this->path_radius;
        entities.m_Memory.m_pMemory = 0;
        entities.m_Memory.m_nAllocationCount = 0;
        entities.m_Memory.m_nGrowSize = 0;
        vStartPos.x = v27 + vStartPos.x;
        v12 = COERCE_FLOAT(_mm_cvtsi128_si32(v10));
        vStartPos.y = v26 + vStartPos.y;
        vStartPos.z = v25 + vStartPos.z;
        Caster = CDOTA_Buff::GetCaster(this);
        v14 = CDOTA_Buff::GetCaster(this);
        FindUnitsInRadius(v14->m_iTeamNum.m_Value, &vStartPos, Caster, v12, &entities, 3, 19, 16, 0, 0);
        if ( entities.m_Size > 0 )
        {
          v15 = 0;
          do
          {
            v17 = &entities.m_Memory.m_pMemory[v15];
            m_Index = v17->m_Index;
            if ( v17->m_Index + 2 <= 1
              || (v19 = v17->m_Index,
                  (v20 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v17->m_Index) >> 9) & 0x3F]) == 0)
              || (v21 = &v20[v19 & 0x1FF]) == 0
              || m_Index != v21->m_EHandle.m_Index
              || (m_pInstance = v21->m_pInstance, v21->m_pInstance == 0)
              || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
            {
              m_pInstance = 0;
            }
            pNPC = m_pInstance;
            if ( CDOTA_Buff::GetCaster(this) != m_pInstance
              && CUtlVectorBase<CDOTA_BaseNPC *,CUtlMemory<CDOTA_BaseNPC *,int>>::Find(&hitEntities, &pNPC) == -1 )
            {
              m_Size = hitEntities.m_Size;
              flDamage = hitEntities.m_Size;
              if ( hitEntities.m_Size == hitEntities.m_Memory.m_nAllocationCount )
              {
                CUtlMemory<CDOTA_BaseNPC *,int>::Grow(&hitEntities.m_Memory, 1);
                m_Size = hitEntities.m_Size;
              }
              hitEntities.m_Size = m_Size + 1;
              v23 = &hitEntities.m_Memory.m_pMemory[flDamage];
              if ( v23 != 0 )
                *v23 = m_pInstance;
              flDamagea = HIBYTE(m_pInstance[7].m_CScriptComponent);
              if ( flDamagea != CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value
                && (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 2) == 0 )
              {
                flDamageb = this->damage;
                pInflictor = CDOTA_Buff::GetAbility(this);
                v24 = CDOTA_Buff::GetCaster(this);
                ApplyDamage(v24, m_pInstance, pInflictor, flDamageb, 2, 0);
              }
            }
            ++v15;
          }
          while ( entities.m_Size > v15 );
        }
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
        if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        {
          CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
          if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
            CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
        }
        ++i;
      }
      while ( i != nSegments );
    }
    hitEntities.m_Size = 0;
    if ( (hitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&hitEntities.m_Memory);
      if ( (hitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&hitEntities.m_Memory);
    }
  }
}


// CDOTA_Modifier_Jakiro_Macropyre_Thinker::OnDestroy  (line 1227, @0x0000000002b37590, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::StopSound, UTIL_Remove
// strings: "Hero_Jakiro.Macropyre"
void __fastcall CDOTA_Modifier_Jakiro_Macropyre_Thinker::OnDestroy(CDOTA_Modifier_Jakiro_Macropyre_Thinker *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax

  if ( CDOTA_Buff::GetParent(this) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    CBaseEntity::StopSound(Parent, "Hero_Jakiro.Macropyre");
    v3 = CDOTA_Buff::GetParent(this);
    UTIL_Remove(v3);
  }
}


