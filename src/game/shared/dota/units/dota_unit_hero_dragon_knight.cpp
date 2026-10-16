// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_dragon_knight.cpp:37
class CDOTA_Unit_Hero_DragonKnight : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_DragonKnight(CDOTA_Unit_Hero_DragonKnight &);
	CDOTA_Unit_Hero_DragonKnight(CDOTA_Unit_Hero_DragonKnight &);
	CDOTA_Unit_Hero_DragonKnight();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual bool UsesConstantGesture(bool);
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void Spawn(const CEntityKeyValues *);
	virtual void Event_Killed(const CTakeDamageInfo &);
	virtual void ModifyOrAppendCriteria(CResponseCriteriaSet &);
	virtual bool UsedGestureBasedAttackAnimation();
	virtual ~CDOTA_Unit_Hero_DragonKnight();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[380] UsesConstantGesture
	// vtable[6] Precache
	// vtable[8] Spawn
	// vtable[92] Event_Killed
	// vtable[159] ModifyOrAppendCriteria
	// vtable[439] UsedGestureBasedAttackAnimation
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_dragon_knight.cpp:56
class C_CDOTA_Unit_Hero_DragonKnight_MapInstall {
	C_CDOTA_Unit_Hero_DragonKnight_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_dragon_knight.cpp:119
class CDOTA_Ability_DragonKnight_BreatheFire : public CDOTABaseAbility {
public:

private:

	int start_radius;  // +0x390
	int end_radius;  // +0x394
	float m_fStartTime;  // +0x3a4
	float m_fTotalTime;  // +0x3a8
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
	CDOTA_Ability_DragonKnight_BreatheFire(CDOTA_Ability_DragonKnight_BreatheFire &);
	CDOTA_Ability_DragonKnight_BreatheFire(CDOTA_Ability_DragonKnight_BreatheFire &);
	CDOTA_Ability_DragonKnight_BreatheFire();
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
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_DragonKnight_BreatheFire();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 944
};

// src/game/shared/dota/units/dota_unit_hero_dragon_knight.cpp:141
class C_CDOTA_Ability_DragonKnight_BreatheFire_MapInstall {
	C_CDOTA_Ability_DragonKnight_BreatheFire_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_dragon_knight.cpp:250
class CDOTA_Modifier_DragonKnight_BreatheFire_Reduction : public CDOTA_Buff {
public:

	int reduction;  // +0xba8
	CDOTA_Modifier_DragonKnight_BreatheFire_Reduction();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	virtual bool IsHidden();
	ModifierVariant_t GetModifierBaseDamageOutgoing_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_DragonKnight_BreatheFire_Reduction();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[11] IsHidden
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_dragon_knight.cpp:305
class CDOTA_Ability_DragonKnight_DragonTail : public CDOTABaseAbility {
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
	CDOTA_Ability_DragonKnight_DragonTail(CDOTA_Ability_DragonKnight_DragonTail &);
	CDOTA_Ability_DragonKnight_DragonTail(CDOTA_Ability_DragonKnight_DragonTail &);
	CDOTA_Ability_DragonKnight_DragonTail();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	void ApplyStun(CDOTA_BaseNPC *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_DragonKnight_DragonTail();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[226] GetCastRange
	// vtable[289] OnProjectileHit
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_dragon_knight.cpp:463
class CDOTA_Ability_DragonKnight_DragonBlood : public CDOTABaseAbility {
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
	CDOTA_Ability_DragonKnight_DragonBlood(CDOTA_Ability_DragonKnight_DragonBlood &);
	CDOTA_Ability_DragonKnight_DragonBlood(CDOTA_Ability_DragonKnight_DragonBlood &);
	CDOTA_Ability_DragonKnight_DragonBlood();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_DragonKnight_DragonBlood();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_dragon_knight.cpp:477
class CDOTA_Modifier_DragonKnight_DragonBlood : public CDOTA_Buff {
public:

private:

	int bonus_health_regen;  // +0xba8
	int bonus_armor;  // +0xbac
	CDOTA_Modifier_DragonKnight_DragonBlood();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierConstantHealthRegen(const CModifierParams &);
	ModifierVariant_t GetModifierPhysicalArmorBonus(const CModifierParams &);
	virtual ~CDOTA_Modifier_DragonKnight_DragonBlood();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_dragon_knight.cpp:565
class CDOTA_Ability_DragonKnight_ElderDragonForm : public CDOTABaseAbility {
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
	CDOTA_Ability_DragonKnight_ElderDragonForm(CDOTA_Ability_DragonKnight_ElderDragonForm &);
	CDOTA_Ability_DragonKnight_ElderDragonForm(CDOTA_Ability_DragonKnight_ElderDragonForm &);
	CDOTA_Ability_DragonKnight_ElderDragonForm();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_DragonKnight_ElderDragonForm();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_dragon_knight.cpp:619
class CDOTA_Modifier_DragonKnight_DragonForm : public CDOTA_Buff {
public:

private:

	int bonus_movement_speed;  // +0xba8
	int bonus_attack_damage;  // +0xbac
	int bonus_attack_range;  // +0xbb0
	int iLevel;  // +0xbb4
	int m_iOriginalAttackCapabilities;  // +0xbb8

	string_t m_iszRangedAttackEffect;  // +0xbc0
	CDOTA_Modifier_DragonKnight_DragonForm();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual bool AllowIllusionDuplicate();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual int GetPriority();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPreAttack_BonusDamage(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierAttackRangeBonus(const CModifierParams &);
	ModifierVariant_t GetModifierModelChange(const CModifierParams &);
	ModifierVariant_t GetAttackSound(const CModifierParams &);
	ModifierVariant_t OnHeroKilled(const CModifierParams &);
	virtual ~CDOTA_Modifier_DragonKnight_DragonForm();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[18] AllowIllusionDuplicate
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[6] GetPriority
	// vtable[65] DeclareFunctions
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_dragon_knight.cpp:885
class CDOTA_Modifier_DragonKnight_CorrosiveBreath : public CDOTA_Buff {
public:

private:

	float corrosive_breath_duration;  // +0xba8
	CDOTA_Modifier_DragonKnight_CorrosiveBreath();
	virtual void OnCreated(KeyValues *);
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttacked(const CModifierParams &);
	virtual ~CDOTA_Modifier_DragonKnight_CorrosiveBreath();

	// vtable[57] OnCreated
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_dragon_knight.cpp:941
class CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT : public CDOTA_Buff {
public:

private:

	int corrosive_breath_damage;  // +0xba8
	CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	ModifierVariant_t Tooltip(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_dragon_knight.cpp:1002
class CDOTA_Modifier_DragonKnight_SplashAttack : public CDOTA_Buff {
public:

private:

	int splash_radius[3];  // +0xba8
	int splash_damage_percent[3];  // +0xbb4
	CDOTA_Modifier_DragonKnight_SplashAttack();
	virtual void OnCreated(KeyValues *);
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	ModifierVariant_t OnAttackFailed(const CModifierParams &);
	virtual ~CDOTA_Modifier_DragonKnight_SplashAttack();

	// vtable[57] OnCreated
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_dragon_knight.cpp:1152
class CDOTA_Modifier_DragonKnight_FrostBreath : public CDOTA_Buff {
public:

private:

	float frost_duration;  // +0xba8
	float frost_aoe;  // +0xbac
	CDOTA_Modifier_DragonKnight_FrostBreath();
	virtual void OnCreated(KeyValues *);
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttackLanded(const CModifierParams &);
	virtual ~CDOTA_Modifier_DragonKnight_FrostBreath();

	// vtable[57] OnCreated
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_dragon_knight.cpp:1221
class CDOTA_Modifier_DragonKnight_FrostBreath_Slow : public CDOTA_Buff {
public:

private:

	int frost_bonus_movement_speed;  // +0xba8
	int frost_bonus_attack_speed;  // +0xbac
	CDOTA_Modifier_DragonKnight_FrostBreath_Slow();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_DragonKnight_FrostBreath_Slow();

	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_DragonKnight::~CDOTA_Unit_Hero_DragonKnight  (line 37, @0x0000000002ba29c0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_DragonKnight::~CDOTA_Unit_Hero_DragonKnight(CDOTA_Unit_Hero_DragonKnight *const this)
{
  this->_vptr_IHandleEntity = &off_44D56F0;
  this->_vptr_INextBotEventResponder = &off_44D66D0;
  this->_vptr_CObstructionObject = &off_44D6A00;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_DragonKnight::~CDOTA_Unit_Hero_DragonKnight  (line 37, @0x0000000002ba2a00, libserver.so)  // inlines: ~CDOTA_Unit_Hero_DragonKnight
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_DragonKnight::~CDOTA_Unit_Hero_DragonKnight(CDOTA_Unit_Hero_DragonKnight *const this)
{
  this->_vptr_IHandleEntity = &off_44D56F0;
  this->_vptr_INextBotEventResponder = &off_44D66D0;
  this->_vptr_CObstructionObject = &off_44D6A00;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_DragonKnight::Schema_DynamicBinding  (line 39, @0x0000000002b8fc00, libserver.so)
// globals: CDOTA_Unit_Hero_DragonKnight::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_DragonKnight::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_DragonKnight *const this)
{
  return CDOTA_Unit_Hero_DragonKnight::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_DragonKnight::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 39, @0x0000000002b8fc30, libserver.so)
// globals: CDOTA_Unit_Hero_DragonKnight::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_DragonKnight::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_DragonKnight::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_DragonKnight::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_DragonKnight::CEntityInstanceEntityClass::DestructInstance  (line 39, @0x0000000002b8fc40, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_DragonKnight>
void __fastcall CDOTA_Unit_Hero_DragonKnight::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_DragonKnight::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_DragonKnight::CEntityInstanceEntityClass::FreeInstance  (line 39, @0x0000000002b8fc60, libserver.so)
void __fastcall CDOTA_Unit_Hero_DragonKnight::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_DragonKnight::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_DragonKnight::CEntityInstanceEntityClass::CanAllocate  (line 39, @0x0000000002b8fc80, libserver.so)
bool __fastcall CDOTA_Unit_Hero_DragonKnight::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_DragonKnight::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_DragonKnight::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 39, @0x0000000002b8fc90, libserver.so)
// globals: CDOTA_Unit_Hero_DragonKnight::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_DragonKnight::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_DragonKnight::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_DragonKnight::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_DragonKnight::CEntityInstanceEntityClass::AllocateInstance  (line 39, @0x0000000002b979a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_DragonKnight::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_DragonKnight::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_DragonKnight::CEntityInstanceEntityClass::ConstructInstance  (line 39, @0x0000000002b9c5c0, libserver.so)  // inlines: CDOTA_Unit_Hero_DragonKnight, Construct<CDOTA_Unit_Hero_DragonKnight>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_DragonKnight::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_DragonKnight::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_44D56F0;
    *(p + 236) = &off_44D66D0;
    *(p + 257) = &off_44D6A00;
  }
  return p;
}


// CDOTA_Unit_Hero_DragonKnight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002babed0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_DragonKnight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_DragonKnight::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_DragonKnight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002bac550, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_DragonKnight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_DragonKnight::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_DragonKnight::GetEntityClassInternal  (line 39, @0x0000000002bce6c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "npc_dota_hero_dragon_knight", "CDOTA_Unit_Hero_DragonKnight"
// globals: `guard variable for'CDOTA_Unit_Hero_DragonKnight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DragonKnightClass, CDOTA_Unit_Hero_DragonKnight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DragonKnightClass, __dso_handle, CDOTA_Unit_Hero_DragonKnight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_DragonKnight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DragonKnightClassInfo, CDOTA_Unit_Hero_DragonKnight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DragonKnightClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_DragonKnight::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_DragonKnight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DragonKnightClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_DragonKnight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DragonKnightClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_DragonKnight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DragonKnightClass);
    CDOTA_Unit_Hero_DragonKnight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DragonKnightClass._vptr_CEntityClass = off_44D5670;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_DragonKnight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DragonKnightClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_DragonKnight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_DragonKnight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DragonKnightClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_DragonKnightClass != 0 )
    return &CDOTA_Unit_Hero_DragonKnight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DragonKnightClass;
  if ( `guard variable for'CDOTA_Unit_Hero_DragonKnight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DragonKnightClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_DragonKnight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DragonKnightClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_DragonKnight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DragonKnightClassInfo,
      "CDOTA_Unit_Hero_DragonKnight",
      "npc_dota_hero_dragon_knight",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_DragonKnight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DragonKnightClassInfo);
  }
  CDOTA_Unit_Hero_DragonKnight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DragonKnightClass.m_pClassInfo = &CDOTA_Unit_Hero_DragonKnight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DragonKnightClassInfo;
  CDOTA_Unit_Hero_DragonKnight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DragonKnightClass.m_pBaseClassInfo = CDOTA_Unit_Hero_DragonKnight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DragonKnightClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_DragonKnightClass = &CDOTA_Unit_Hero_DragonKnight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DragonKnightClass;
  CDOTA_Unit_Hero_DragonKnight::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_DragonKnightClassInfo.m_pClass = &CDOTA_Unit_Hero_DragonKnight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DragonKnightClass;
  CDOTA_Unit_Hero_DragonKnight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DragonKnightClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_DragonKnightClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_DragonKnight::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_DragonKnightClass;
}


// CDOTA_Unit_Hero_DragonKnight::UsesConstantGesture  (line 43, @0x0000000002b8fca0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_DragonKnight::UsesConstantGesture(
        CDOTA_Unit_Hero_DragonKnight *const this,
        bool bPortrait)
{
  return 1;
}


// CDOTA_Unit_Hero_DragonKnight::YouForgotToImplementOrDeclareServerClass  (line 56, @0x0000000002b34f50, libserver.so)
int __fastcall CDOTA_Unit_Hero_DragonKnight::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_DragonKnight *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_DragonKnight::GetServerClass  (line 56, @0x0000000002b4c0a0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_DragonKnight::GetServerClass(CDOTA_Unit_Hero_DragonKnight *const this)
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


// CDOTA_Unit_Hero_DragonKnight::Precache  (line 66, @0x0000000002b3ac90, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Precache, CBaseEntity::PrecacheModel
// strings: "models/heroes/dragon_knight/dragon_knight_dragon.vmdl"
void __fastcall CDOTA_Unit_Hero_DragonKnight::Precache(
        CDOTA_Unit_Hero_DragonKnight *const this,
        const CEntityPrecacheContext *pContext)
{
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
  CBaseEntity::PrecacheModel("models/heroes/dragon_knight/dragon_knight_dragon.vmdl", pContext);
}


// CDOTA_Unit_Hero_DragonKnight::Spawn  (line 75, @0x0000000002b3acc0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Spawn, CBaseAnimating::SetBodygroup
void __fastcall CDOTA_Unit_Hero_DragonKnight::Spawn(
        CDOTA_Unit_Hero_DragonKnight *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
  CBaseAnimating::SetBodygroup(this, 2, 2);
  CBaseAnimating::SetBodygroup(this, 1, 0);
}


// CDOTA_Unit_Hero_DragonKnight::Event_Killed  (line 86, @0x0000000002b3ad00, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Event_Killed, CBaseAnimating::SetBodygroup
void __fastcall CDOTA_Unit_Hero_DragonKnight::Event_Killed(
        CDOTA_Unit_Hero_DragonKnight *const this,
        const CTakeDamageInfo *const info)
{
  CDOTA_BaseNPC_Hero::Event_Killed(this, info);
  CBaseAnimating::SetBodygroup(this, 1, 1);
  CBaseAnimating::SetBodygroup(this, 2, 0);
}


// CDOTA_Unit_Hero_DragonKnight::UsedGestureBasedAttackAnimation  (line 96, @0x0000000002b36a40, libserver.so)
// calls: CDOTA_BaseNPC::FindModifierByName
// strings: "modifier_dragon_knight_dragon_form"
bool __fastcall CDOTA_Unit_Hero_DragonKnight::UsedGestureBasedAttackAnimation(CDOTA_Unit_Hero_DragonKnight *const this)
{
  return CDOTA_BaseNPC::FindModifierByName(this, "modifier_dragon_knight_dragon_form", 0) != 0;
}


// CDOTA_Unit_Hero_DragonKnight::ModifyOrAppendCriteria  (line 106, @0x0000000002b3adf0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria, CDOTA_BaseNPC::FindModifierByName, CResponseCriteriaSet::AppendCriteria
// strings: "modifier_dragon_knight_dragon_form", "dragonform"
void __fastcall CDOTA_Unit_Hero_DragonKnight::ModifyOrAppendCriteria(
        CDOTA_Unit_Hero_DragonKnight *const this,
        CResponseCriteriaSet *const set)
{
  float v4; // xmm2_4

  CDOTA_BaseNPC_Hero::ModifyOrAppendCriteria(this, set);
  CDOTA_BaseNPC::FindModifierByName(this, "modifier_dragon_knight_dragon_form", 0);
  CResponseCriteriaSet::AppendCriteria(set, "dragonform", 1.0, v4);
}


// CDOTA_Ability_DragonKnight_BreatheFire::~CDOTA_Ability_DragonKnight_BreatheFire  (line 119, @0x0000000002ba1030, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_DragonKnight_BreatheFire::~CDOTA_Ability_DragonKnight_BreatheFire(
        CDOTA_Ability_DragonKnight_BreatheFire *const this)
{
  this->_vptr_IHandleEntity = &off_44D6AD0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_DragonKnight_BreatheFire::~CDOTA_Ability_DragonKnight_BreatheFire  (line 119, @0x0000000002ba1050, libserver.so)  // inlines: ~CDOTA_Ability_DragonKnight_BreatheFire
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_DragonKnight_BreatheFire::~CDOTA_Ability_DragonKnight_BreatheFire(
        CDOTA_Ability_DragonKnight_BreatheFire *const this)
{
  this->_vptr_IHandleEntity = &off_44D6AD0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_DragonKnight_BreatheFire::Schema_DynamicBinding  (line 121, @0x0000000002b8fcb0, libserver.so)
// globals: CDOTA_Ability_DragonKnight_BreatheFire::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DragonKnight_BreatheFire::Schema_DynamicBinding(
        const CDOTA_Ability_DragonKnight_BreatheFire *const this)
{
  return CDOTA_Ability_DragonKnight_BreatheFire::s_pSchemaBinding;
}


// CDOTA_Ability_DragonKnight_BreatheFire::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 121, @0x0000000002b8fcc0, libserver.so)
// globals: CDOTA_Ability_DragonKnight_BreatheFire::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DragonKnight_BreatheFire::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_DragonKnight_BreatheFire::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DragonKnight_BreatheFire::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_DragonKnight_BreatheFire::CEntityInstanceEntityClass::DestructInstance  (line 121, @0x0000000002b8fcd0, libserver.so)  // inlines: Destruct<CDOTA_Ability_DragonKnight_BreatheFire>
void __fastcall CDOTA_Ability_DragonKnight_BreatheFire::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_DragonKnight_BreatheFire::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_DragonKnight_BreatheFire::CEntityInstanceEntityClass::FreeInstance  (line 121, @0x0000000002b8fcf0, libserver.so)
void __fastcall CDOTA_Ability_DragonKnight_BreatheFire::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_DragonKnight_BreatheFire::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_DragonKnight_BreatheFire::CEntityInstanceEntityClass::CanAllocate  (line 121, @0x0000000002b8fd10, libserver.so)
bool __fastcall CDOTA_Ability_DragonKnight_BreatheFire::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_DragonKnight_BreatheFire::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_DragonKnight_BreatheFire::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 121, @0x0000000002b8fd20, libserver.so)
// globals: CDOTA_Ability_DragonKnight_BreatheFire::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_DragonKnight_BreatheFire::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_DragonKnight_BreatheFire::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DragonKnight_BreatheFire::s_pSchemaBinding;
}


// CDOTA_Ability_DragonKnight_BreatheFire::CEntityInstanceEntityClass::AllocateInstance  (line 121, @0x0000000002b979e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_DragonKnight_BreatheFire::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_DragonKnight_BreatheFire::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 944);
  memset(v1, 0, 0x3B0u);
  return v1;
}


// CDOTA_Ability_DragonKnight_BreatheFire::CEntityInstanceEntityClass::ConstructInstance  (line 121, @0x0000000002b9d200, libserver.so)  // inlines: CDOTA_Ability_DragonKnight_BreatheFire, Construct<CDOTA_Ability_DragonKnight_BreatheFire>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_DragonKnight_BreatheFire::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_DragonKnight_BreatheFire::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44D6AD0;
  }
  return p;
}


// CDOTA_Ability_DragonKnight_BreatheFire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 121, @0x0000000002baa840, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_DragonKnight_BreatheFire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DragonKnight_BreatheFire::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_DragonKnight_BreatheFire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 121, @0x0000000002baa860, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_DragonKnight_BreatheFire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DragonKnight_BreatheFire::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_DragonKnight_BreatheFire::GetEntityClassInternal  (line 121, @0x0000000002bc8450, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "dragon_knight_breathe_fire", "CDOTA_Ability_DragonKnight_BreatheFire"
// globals: `guard variable for'CDOTA_Ability_DragonKnight_BreatheFire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_BreatheFireClass, CDOTA_Ability_DragonKnight_BreatheFire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_BreatheFireClass, __dso_handle, CDOTA_Ability_DragonKnight_BreatheFire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_DragonKnight_BreatheFire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_BreatheFireClassInfo, CDOTA_Ability_DragonKnight_BreatheFire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_BreatheFireClassInfo
CEntityClass *__cdecl CDOTA_Ability_DragonKnight_BreatheFire::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_DragonKnight_BreatheFire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_BreatheFireClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DragonKnight_BreatheFire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_BreatheFireClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_DragonKnight_BreatheFire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_BreatheFireClass);
    CDOTA_Ability_DragonKnight_BreatheFire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_BreatheFireClass._vptr_CEntityClass = off_44D6A50;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DragonKnight_BreatheFire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_BreatheFireClass);
    __cxa_atexit(
      CDOTA_Ability_DragonKnight_BreatheFire::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_DragonKnight_BreatheFire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_BreatheFireClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_DragonKnight_BreatheFireClass != 0 )
    return &CDOTA_Ability_DragonKnight_BreatheFire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_BreatheFireClass;
  if ( `guard variable for'CDOTA_Ability_DragonKnight_BreatheFire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_BreatheFireClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DragonKnight_BreatheFire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_BreatheFireClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_DragonKnight_BreatheFire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_BreatheFireClassInfo,
      "CDOTA_Ability_DragonKnight_BreatheFire",
      "dragon_knight_breathe_fire",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DragonKnight_BreatheFire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_BreatheFireClassInfo);
  }
  CDOTA_Ability_DragonKnight_BreatheFire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_BreatheFireClass.m_pClassInfo = &CDOTA_Ability_DragonKnight_BreatheFire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_BreatheFireClassInfo;
  CDOTA_Ability_DragonKnight_BreatheFire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_BreatheFireClass.m_pBaseClassInfo = CDOTA_Ability_DragonKnight_BreatheFire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_BreatheFireClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_DragonKnight_BreatheFireClass = &CDOTA_Ability_DragonKnight_BreatheFire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_BreatheFireClass;
  CDOTA_Ability_DragonKnight_BreatheFire::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_BreatheFireClassInfo.m_pClass = &CDOTA_Ability_DragonKnight_BreatheFire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_BreatheFireClass;
  CDOTA_Ability_DragonKnight_BreatheFire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_BreatheFireClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_DragonKnight_BreatheFireClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_DragonKnight_BreatheFire::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_BreatheFireClass;
}


// CDOTA_Ability_DragonKnight_BreatheFire::YouForgotToImplementOrDeclareServerClass  (line 141, @0x0000000002b34f60, libserver.so)
int __fastcall CDOTA_Ability_DragonKnight_BreatheFire::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_DragonKnight_BreatheFire *const this)
{
  return 0;
}


// CDOTA_Ability_DragonKnight_BreatheFire::GetServerClass  (line 141, @0x0000000002b4c4a0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_DragonKnight_BreatheFire::GetServerClass(
        CDOTA_Ability_DragonKnight_BreatheFire *const this)
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


// CDOTA_Ability_DragonKnight_BreatheFire::OnSpellStart  (line 149, @0x0000000002b66fd0, libserver.so)  // inlines: CEntityHandle, CHandle, DOTAGameRules, GetEHandle, GetEntryIndex, GetGameTime, GetLevelSpecialValueFor<int>, GetSerialNumber, NormalizeInPlace, Set, VectorMultiply, VectorSubtract, operator*, operator-, operator=, sLinearProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCursorTarget, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCaster, VectorNormalize, CBaseAnimating::GetAttachment, CDOTA_BaseNPC::FindModifierByName, CDOTA_ProjectileManager::CreateLinearProjectile, CDOTA_BaseNPC::UnitEmitSound, CDOTA_BaseNPC::StartGesture, CBaseEntity::GetAbsAngles, AngleVectors (13 total)
// strings: "start_radius", "end_radius", "attach_head", "modifier_dragon_knight_dragon_form", "particles/units/heroes/hero_dragon_knight/dragon_knight_breathe_fire.vpcf", "Hero_DragonKnight.BreathFire"
void __fastcall CDOTA_Ability_DragonKnight_BreatheFire::OnSpellStart(
        CDOTA_Ability_DragonKnight_BreatheFire *const this)
{
  int LevelSpecialValue; // r12d
  int v3; // r13d
  CBaseEntity *CursorTarget; // rax
  const Vector *AbsOrigin; // rax
  float v6; // r14d
  float v7; // r15d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *v9; // rax
  vec_t v10; // xmm1_4
  vec_t v11; // xmm0_4
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC *v14; // rax
  int v15; // eax
  int start_radius; // ecx
  int v17; // eax
  int v18; // esi
  float v19; // xmm0_4
  vec_t y; // xmm3_4
  vec_t v21; // xmm3_4
  CDOTA_BaseNPC *v22; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v24; // eax
  __int16 v25; // cx
  CDOTA_BaseNPC *v26; // rax
  CDOTA_BaseNPC *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  const QAngle *AbsAngles; // rax
  Vector vCastDir; // [rsp+10h] [rbp-C0h] BYREF
  sLinearProjectileCreateInfo info; // [rsp+20h] [rbp-B0h] BYREF
  Vector CursorPosition; // 0:kr00_12.12

  this->start_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "start_radius", -1, 0);
  this->end_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "end_radius", -1, 0);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "range", -1, 0);
  v3 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "speed", -1, 0);
  if ( CDOTABaseAbility::GetCursorTarget(this) != 0 )
  {
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(CursorTarget);
    v6 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(AbsOrigin->x)));
    v7 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(AbsOrigin->y)));
  }
  else
  {
    CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
    v6 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(CursorPosition.x)));
    v7 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(CursorPosition.y)));
  }
  Caster = CDOTABaseAbility::GetCaster(this);
  v9 = CBaseEntity::GetAbsOrigin(Caster);
  v10 = v6 - v9->x;
  v11 = v7 - v9->y;
  vCastDir.z = 0.0;
  vCastDir.x = v10;
  vCastDir.y = v11;
  if ( VectorNormalize(&vCastDir) < 0.0099999998 )
  {
    v28 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v28);
    AngleVectors(AbsAngles, &vCastDir, 0, 0);
  }
  this->m_vStartPos = vec3_invalid;
  v12 = CDOTABaseAbility::GetCaster(this);
  CBaseAnimating::GetAttachment(v12, "attach_head", &this->m_vStartPos);
  v13 = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::FindModifierByName(v13, "modifier_dragon_knight_dragon_form", 0) != 0 )
  {
    v14 = CDOTABaseAbility::GetCaster(this);
    this->m_vStartPos = *CBaseEntity::GetAbsOrigin(v14);
  }
  v15 = (*(this->_vptr_IHandleEntity + 228))(this);
  start_radius = this->start_radius;
  v17 = LevelSpecialValue + v15;
  v18 = (v3 * (LevelSpecialValue / (LevelSpecialValue - start_radius)));
  v19 = 0.0;
  if ( g_pGameRules != 0 )
    v19 = *&g_pGameRules[18].m_szQuestName[20];
  this->m_fStartTime = v19;
  info.bHasFrontalCone = 1;
  info.hSource.m_Index = -1;
  info.pszEffectName = "particles/units/heroes/hero_dragon_knight/dragon_knight_breathe_fire.vpcf";
  info.bCheckStartPosition = 0;
  y = vec3_origin.y;
  info.iUnitTargetTeam = 0;
  info.iUnitTargetType = 0;
  info.vAcceleration.y = y;
  info.vAcceleration.x = vec3_origin.x;
  v21 = vCastDir.y * v18;
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
  this->m_fTotalTime = v17 / v18;
  info.vAcceleration.z = vec3_origin.z;
  info.vSpawnOrigin = this->m_vStartPos;
  info.vVelocity.x = v18 * vCastDir.x;
  info.vVelocity.y = v21;
  info.vVelocity.z = vCastDir.z * v18;
  info.fDistance = v17;
  info.fStartRadius = start_radius;
  info.fEndRadius = this->end_radius;
  v22 = CDOTABaseAbility::GetCaster(this);
  if ( v22 != 0 && (m_pEntity = v22->m_pEntity) != 0 )
  {
    v24 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    if ( m_pEntity->m_EHandle.m_Index == -1 )
      v25 = 0x7FFF;
    else
      v25 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(info.hSource.m_Index) = v25 | info.hSource.m_Index & 0x8000;
    info.hSource.m_Index = (v24 << 15) | info.hSource.m_Index & 0x7FFF;
  }
  else
  {
    info.hSource.m_Index = -1;
  }
  info.iUnitTargetTeam = 2;
  info.iUnitTargetType = 19;
  CDOTA_ProjectileManager::CreateLinearProjectile(&g_DOTAProjectileManager, &info);
  v26 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::UnitEmitSound(v26, "Hero_DragonKnight.BreathFire", 0.0, 0, 0);
  v27 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v27, 1538, 0.1, 0.1, 9, 0, 1.0);
}


// CDOTA_Ability_DragonKnight_BreatheFire::OnProjectileHit  (line 210, @0x0000000002b738f0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTABaseAbility::GetCaster, ApplyDamage, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, EconEntity_OnOwnerKillEaterEvent, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_dragonknight_breathefire_reduction"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_DragonKnight_BreatheFire::OnProjectileHit(
        CDOTA_Ability_DragonKnight_BreatheFire *const this,
        _WORD *hTarget,
        const Vector *const vLocation)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CEntityInstance *m_pInstance; // r12
  int v8; // r13d
  CDOTA_BaseNPC *Caster; // rax
  float v10; // xmm1_4
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC_Hero *v12; // r14
  CDOTA_BaseNPC *v13; // rax
  CDOTA_BaseNPC_Hero *v14; // rdi
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-28h]

  v16 = __readfsqword(0x28u);
  if ( (*hTarget + 2) > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[*hTarget & 0x1FF];
      if ( v5 != 0 && *hTarget == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
        {
          v8 = (*(this->_vptr_IHandleEntity + 247))(this);
          Caster = CDOTABaseAbility::GetCaster(this);
          ApplyDamage(Caster, m_pInstance, this, v8, 2, 0);
          CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
          KeyValues::KeyValues(&kv, "modifier_dragonknight_breathefire_reduction");
          KeyValues::SetFloat(&kv, "duration", v10);
          v11 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(m_pInstance, v11, this, "modifier_dragonknight_breathefire_reduction", &kv, 0);
          if ( (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) == 0 )
          {
            v12 = 0;
            if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
              && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
            {
              v12 = m_pInstance;
            }
            v13 = CDOTABaseAbility::GetCaster(this);
            v14 = 0;
            if ( v13 != 0 && v13->m_bIsDOTANPC && (v13->m_iUnitType & 1) != 0 && !v13->m_bIsIllusion.m_Value )
              v14 = v13;
            EconEntity_OnOwnerKillEaterEvent(
              v14,
              v12,
              kill_eater_event_t::kKillEaterEventType_DragonKnight_BreatheFireKills,
              1,
              INVALID_ITEM_DEF_INDEX);
          }
          KeyValues::~KeyValues(&kv);
        }
      }
    }
  }
  return 0;
}


// CDOTA_Ability_DragonKnight_BreatheFire::GetAbilityDamageToTargetOverInterval  (line 238, @0x0000000002b3bea0, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_DragonKnight_BreatheFire::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_DragonKnight_BreatheFire *const this,
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


// CDOTA_Modifier_DragonKnight_BreatheFire_Reduction::~CDOTA_Modifier_DragonKnight_BreatheFire_Reduction  (line 250, @0x0000000002b9ae60, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_DragonKnight_BreatheFire_Reduction::~CDOTA_Modifier_DragonKnight_BreatheFire_Reduction(
        CDOTA_Modifier_DragonKnight_BreatheFire_Reduction *const this)
{
  this->_vptr_CDOTA_Buff = &off_44D7590;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_DragonKnight_BreatheFire_Reduction::~CDOTA_Modifier_DragonKnight_BreatheFire_Reduction  (line 250, @0x0000000002b9ae80, libserver.so)  // inlines: ~CDOTA_Modifier_DragonKnight_BreatheFire_Reduction
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_DragonKnight_BreatheFire_Reduction::~CDOTA_Modifier_DragonKnight_BreatheFire_Reduction(
        CDOTA_Modifier_DragonKnight_BreatheFire_Reduction *const this)
{
  this->_vptr_CDOTA_Buff = &off_44D7590;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DragonKnight_BreatheFire_Reduction::IsHidden  (line 260, @0x0000000002b8fd30, libserver.so)
bool __fastcall CDOTA_Modifier_DragonKnight_BreatheFire_Reduction::IsHidden(
        CDOTA_Modifier_DragonKnight_BreatheFire_Reduction *const this)
{
  return 0;
}


// CDOTA_Modifier_DragonKnight_BreatheFire_Reduction::OnCreated  (line 273, @0x0000000002b6c450, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_DragonKnight_BreatheFire_Reduction::OnCreated(
        CDOTA_Modifier_DragonKnight_BreatheFire_Reduction *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "reduction", -1, 0);
  else
    this->reduction = 0;
}


// CDOTA_Modifier_DragonKnight_BreatheFire_Reduction::OnRefresh  (line 280, @0x0000000002b6c510, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_DragonKnight_BreatheFire_Reduction::OnRefresh(
        CDOTA_Modifier_DragonKnight_BreatheFire_Reduction *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "reduction", -1, 0);
  else
    this->reduction = 0;
}


// CDOTA_Modifier_DragonKnight_BreatheFire_Reduction::DeclareFunctions  (line 287, @0x0000000002b34f70, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_DragonKnight_BreatheFire_Reduction::GetModifierBaseDamageOutgoing_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_DragonKnight_BreatheFire_Reduction::DeclareFunctions(
        CDOTA_Modifier_DragonKnight_BreatheFire_Reduction *const this)
{
  this->m_Functions[34].__pfn = CDOTA_Modifier_DragonKnight_BreatheFire_Reduction::GetModifierBaseDamageOutgoing_Percentage;
  this->m_Functions[34].__delta = 0;
}


// CDOTA_Modifier_DragonKnight_BreatheFire_Reduction::GetModifierBaseDamageOutgoing_Percentage  (line 294, @0x0000000002b34f90, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DragonKnight_BreatheFire_Reduction::GetModifierBaseDamageOutgoing_Percentage(
        CDOTA_Modifier_DragonKnight_BreatheFire_Reduction *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->reduction;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_DragonKnight_DragonTail::~CDOTA_Ability_DragonKnight_DragonTail  (line 305, @0x0000000002ba1080, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_DragonKnight_DragonTail::~CDOTA_Ability_DragonKnight_DragonTail(
        CDOTA_Ability_DragonKnight_DragonTail *const this)
{
  this->_vptr_IHandleEntity = &off_44D78F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_DragonKnight_DragonTail::~CDOTA_Ability_DragonKnight_DragonTail  (line 305, @0x0000000002ba10a0, libserver.so)  // inlines: ~CDOTA_Ability_DragonKnight_DragonTail
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_DragonKnight_DragonTail::~CDOTA_Ability_DragonKnight_DragonTail(
        CDOTA_Ability_DragonKnight_DragonTail *const this)
{
  this->_vptr_IHandleEntity = &off_44D78F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_DragonKnight_DragonTail::Schema_DynamicBinding  (line 307, @0x0000000002b8fd40, libserver.so)
// globals: CDOTA_Ability_DragonKnight_DragonTail::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DragonKnight_DragonTail::Schema_DynamicBinding(
        const CDOTA_Ability_DragonKnight_DragonTail *const this)
{
  return CDOTA_Ability_DragonKnight_DragonTail::s_pSchemaBinding;
}


// CDOTA_Ability_DragonKnight_DragonTail::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 307, @0x0000000002b8fd50, libserver.so)
// globals: CDOTA_Ability_DragonKnight_DragonTail::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DragonKnight_DragonTail::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_DragonKnight_DragonTail::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DragonKnight_DragonTail::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_DragonKnight_DragonTail::CEntityInstanceEntityClass::DestructInstance  (line 307, @0x0000000002b8fd60, libserver.so)  // inlines: Destruct<CDOTA_Ability_DragonKnight_DragonTail>
void __fastcall CDOTA_Ability_DragonKnight_DragonTail::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_DragonKnight_DragonTail::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_DragonKnight_DragonTail::CEntityInstanceEntityClass::FreeInstance  (line 307, @0x0000000002b8fd80, libserver.so)
void __fastcall CDOTA_Ability_DragonKnight_DragonTail::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_DragonKnight_DragonTail::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_DragonKnight_DragonTail::CEntityInstanceEntityClass::CanAllocate  (line 307, @0x0000000002b8fda0, libserver.so)
bool __fastcall CDOTA_Ability_DragonKnight_DragonTail::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_DragonKnight_DragonTail::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_DragonKnight_DragonTail::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 307, @0x0000000002b8fdb0, libserver.so)
// globals: CDOTA_Ability_DragonKnight_DragonTail::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_DragonKnight_DragonTail::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_DragonKnight_DragonTail::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DragonKnight_DragonTail::s_pSchemaBinding;
}


// CDOTA_Ability_DragonKnight_DragonTail::CEntityInstanceEntityClass::AllocateInstance  (line 307, @0x0000000002b97a20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_DragonKnight_DragonTail::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_DragonKnight_DragonTail::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_DragonKnight_DragonTail::CEntityInstanceEntityClass::ConstructInstance  (line 307, @0x0000000002b9d230, libserver.so)  // inlines: CDOTA_Ability_DragonKnight_DragonTail, Construct<CDOTA_Ability_DragonKnight_DragonTail>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_DragonKnight_DragonTail::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_DragonKnight_DragonTail::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44D78F0;
  }
  return p;
}


// CDOTA_Ability_DragonKnight_DragonTail::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 307, @0x0000000002baa890, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_DragonKnight_DragonTail::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DragonKnight_DragonTail::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_DragonKnight_DragonTail::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 307, @0x0000000002baa8b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_DragonKnight_DragonTail::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DragonKnight_DragonTail::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_DragonKnight_DragonTail::GetEntityClassInternal  (line 307, @0x0000000002bc85a0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "dragon_knight_dragon_tail", "CDOTA_Ability_DragonKnight_DragonTail"
// globals: `guard variable for'CDOTA_Ability_DragonKnight_DragonTail::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonTailClass, CDOTA_Ability_DragonKnight_DragonTail::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonTailClass, __dso_handle, CDOTA_Ability_DragonKnight_DragonTail::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_DragonKnight_DragonTail::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_DragonTailClassInfo, CDOTA_Ability_DragonKnight_DragonTail::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_DragonTailClassInfo
CEntityClass *__cdecl CDOTA_Ability_DragonKnight_DragonTail::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_DragonKnight_DragonTail::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonTailClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DragonKnight_DragonTail::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonTailClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_DragonKnight_DragonTail::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonTailClass);
    CDOTA_Ability_DragonKnight_DragonTail::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonTailClass._vptr_CEntityClass = off_44D7870;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DragonKnight_DragonTail::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonTailClass);
    __cxa_atexit(
      CDOTA_Ability_DragonKnight_DragonTail::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_DragonKnight_DragonTail::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonTailClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_DragonKnight_DragonTailClass != 0 )
    return &CDOTA_Ability_DragonKnight_DragonTail::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonTailClass;
  if ( `guard variable for'CDOTA_Ability_DragonKnight_DragonTail::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_DragonTailClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DragonKnight_DragonTail::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_DragonTailClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_DragonKnight_DragonTail::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_DragonTailClassInfo,
      "CDOTA_Ability_DragonKnight_DragonTail",
      "dragon_knight_dragon_tail",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DragonKnight_DragonTail::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_DragonTailClassInfo);
  }
  CDOTA_Ability_DragonKnight_DragonTail::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonTailClass.m_pClassInfo = &CDOTA_Ability_DragonKnight_DragonTail::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_DragonTailClassInfo;
  CDOTA_Ability_DragonKnight_DragonTail::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonTailClass.m_pBaseClassInfo = CDOTA_Ability_DragonKnight_DragonTail::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_DragonTailClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_DragonKnight_DragonTailClass = &CDOTA_Ability_DragonKnight_DragonTail::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonTailClass;
  CDOTA_Ability_DragonKnight_DragonTail::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_DragonTailClassInfo.m_pClass = &CDOTA_Ability_DragonKnight_DragonTail::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonTailClass;
  CDOTA_Ability_DragonKnight_DragonTail::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonTailClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_DragonKnight_DragonTailClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_DragonKnight_DragonTail::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonTailClass;
}


// CDOTA_Ability_DragonKnight_DragonTail::ApplyStun  (line 323, @0x0000000002b73ad0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero
// calls: CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetCaster, ApplyDamage, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, EconEntity_OnOwnerKillEaterEvent, CDOTA_BaseNPC::UnitEmitSound, CDOTA_BaseNPC::FindReplacementSound, KeyValues::~KeyValues, __stack_chk_fail (13 total)
// callers: CDOTA_Ability_DragonKnight_DragonTail::OnProjectileHit, CDOTA_Ability_DragonKnight_DragonTail::OnSpellStart
// strings: "modifier_stunned", "Hero_DragonKnight.DragonTail.Cast", "Hero_DragonKnight.DragonTail.Target"
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_DragonKnight_DragonTail::ApplyStun(
        CDOTA_Ability_DragonKnight_DragonTail *const this,
        CDOTA_BaseNPC *pTarget)
{
  int v4; // r13d
  CDOTA_BaseNPC *Caster; // rax
  float v6; // xmm1_4
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC_Hero *v8; // r14
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC_Hero *v10; // rdi
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  const char *ReplacementSound; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-28h]

  v15 = __readfsqword(0x28u);
  if ( pTarget != 0
    && (pTarget->m_nUnitState64.m_Value & 0x200) == 0
    && !CDOTA_BaseNPC::TriggerSpellAbsorb(pTarget, this, 1) )
  {
    v4 = (*(this->_vptr_IHandleEntity + 247))(this);
    Caster = CDOTABaseAbility::GetCaster(this);
    ApplyDamage(Caster, pTarget, this, v4, 2, 0);
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_stunned");
    KeyValues::SetFloat(&kv, "duration", v6);
    v7 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(pTarget, v7, this, "modifier_stunned", &kv, 0);
    if ( (pTarget->m_iUnitType & 1) != 0 )
    {
      v8 = 0;
      if ( pTarget->m_bIsDOTANPC && !pTarget->m_bIsIllusion.m_Value )
        v8 = pTarget;
      v9 = CDOTABaseAbility::GetCaster(this);
      v10 = 0;
      if ( v9 != 0 && v9->m_bIsDOTANPC && (v9->m_iUnitType & 1) != 0 && !v9->m_bIsIllusion.m_Value )
        v10 = v9;
      EconEntity_OnOwnerKillEaterEvent(
        v10,
        v8,
        kill_eater_event_t::kKillEaterEventType_DragonKnight_DragonTails,
        1,
        INVALID_ITEM_DEF_INDEX);
    }
    v11 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v11, "Hero_DragonKnight.DragonTail.Cast", 0.0, 0, 0);
    v12 = CDOTABaseAbility::GetCaster(this);
    ReplacementSound = CDOTA_BaseNPC::FindReplacementSound(v12, "Hero_DragonKnight.DragonTail.Target");
    CDOTA_BaseNPC::UnitEmitSound(pTarget, ReplacementSound, 0.0, 0, 0);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_DragonKnight_DragonTail::OnSpellStart  (line 351, @0x0000000002b73d20, libserver.so)  // inlines: CEntityHandle, CHandle, Color, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetSerialNumber, Set, ToDOTABaseNPC, VectorNormalize2D, VectorSubtract, operator-, operator=, sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorPosition, VectorNormalize, CBaseEntity::GetAbsAngles, AngleVectors, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::CreateAbilityParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl (18 total)
// strings: "modifier_dragon_knight_dragon_form", "particles/units/heroes/hero_dragon_knight/dragon_knight_dragon_tail_dragonform.vpcf", "particles/units/heroes/hero_dragon_knight/dragon_knight_dragon_tail_knightform.vpcf", "attach_attack2", "attach_hitloc", "attach_body" (8 total)
void __fastcall CDOTA_Ability_DragonKnight_DragonTail::OnSpellStart(CDOTA_Ability_DragonKnight_DragonTail *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r13
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r12
  vec_t v6; // xmm0_4
  vec_t v7; // xmm1_4
  CDOTA_BaseNPC *v8; // rax
  const QAngle *AbsAngles; // rax
  CDOTA_BaseNPC *v10; // rax
  CDOTA_Buff *ModifierByName; // rax
  const char *v12; // rsi
  int AbilityParticleEffect; // r12d
  CDOTA_BaseNPC *v14; // r15
  CDOTA_ParticleManager *ParticleManager; // rax
  __int64 v16; // r14
  CDOTA_ParticleManager *v17; // rax
  CDOTA_BaseNPC *v18; // r15
  CDOTA_ParticleManager *v19; // rax
  CDOTA_ParticleManager *v20; // rax
  CDOTA_ParticleManager *v21; // rax
  CDOTA_BaseNPC *v22; // r15
  CDOTA_ParticleManager *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  float LevelSpecialValue; // xmm0_4
  vec_t y; // xmm1_4
  vec_t z; // xmm1_4
  CDOTA_BaseNPC *v29; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v31; // eax
  __int16 v32; // cx
  CBaseEntity *v33; // rax
  CEntityIdentity *v34; // rdx
  int v35; // eax
  __int16 v36; // cx
  CDOTA_BaseNPC *v37; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-C4h]
  Vector vCastDir; // [rsp+10h] [rbp-C0h] BYREF
  Vector CursorPosition; // [rsp+20h] [rbp-B0h]
  sTrackingProjectileCreateInfo info; // [rsp+30h] [rbp-A0h] BYREF
  unsigned __int64 v42; // [rsp+98h] [rbp-38h]
  Vector v43; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v44; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v45; // 0:xmm0_8.8,8:xmm1_4.4
  Vector v46; // 0:xmm0_8.8,8:xmm1_4.4

  v42 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
    CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
    v6 = CursorPosition.y - AbsOrigin->y;
    v7 = CursorPosition.x - AbsOrigin->x;
    vCastDir.z = 0.0;
    vCastDir.y = v6;
    vCastDir.x = v7;
    if ( VectorNormalize(&vCastDir) < 0.0099999998 )
    {
      v8 = CDOTABaseAbility::GetCaster(this);
      AbsAngles = CBaseEntity::GetAbsAngles(v8);
      AngleVectors(AbsAngles, &vCastDir, 0, 0);
    }
    v10 = CDOTABaseAbility::GetCaster(this);
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(v10, "modifier_dragon_knight_dragon_form", 0);
    v12 = "particles/units/heroes/hero_dragon_knight/dragon_knight_dragon_tail_dragonform.vpcf";
    if ( ModifierByName == 0 )
      v12 = "particles/units/heroes/hero_dragon_knight/dragon_knight_dragon_tail_knightform.vpcf";
    AbilityParticleEffect = CDOTABaseAbility::CreateAbilityParticleEffect(this, v12, 2, 0, 0);
    v14 = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    v16 = *&vec3_invalid.x;
    vecFallbackPosition = vec3_invalid.z;
    CDOTA_ParticleManager::SetParticleControlEnt(ParticleManager, AbilityParticleEffect, 0, v14, 1, 0, vec3_invalid, 1);
    v17 = GetParticleManager();
    v43.z = vecFallbackPosition;
    *&v43.x = v16;
    CDOTA_ParticleManager::SetParticleControlEnt(v17, AbilityParticleEffect, 1, v3, 1, 0, v43, 1);
    v18 = CDOTABaseAbility::GetCaster(this);
    v19 = GetParticleManager();
    v44.z = vecFallbackPosition;
    *&v44.x = v16;
    CDOTA_ParticleManager::SetParticleControlEnt(v19, AbilityParticleEffect, 2, v18, 5, "attach_attack2", v44, 1);
    v20 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v20, AbilityParticleEffect, 3, *&vCastDir.x, vCastDir.z);
    v21 = GetParticleManager();
    v45.z = vecFallbackPosition;
    *&v45.x = v16;
    CDOTA_ParticleManager::SetParticleControlEnt(v21, AbilityParticleEffect, 4, v3, 5, "attach_hitloc", v45, 1);
    v22 = CDOTABaseAbility::GetCaster(this);
    v23 = GetParticleManager();
    v46.z = vecFallbackPosition;
    *&v46.x = v16;
    CDOTA_ParticleManager::SetParticleControlEnt(v23, AbilityParticleEffect, 5, v22, 5, "attach_body", v46, 1);
    v24 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v24, AbilityParticleEffect);
    v25 = CDOTABaseAbility::GetCaster(this);
    if ( CDOTA_BaseNPC::FindModifierByName(v25, "modifier_dragon_knight_dragon_form", 0) != 0 )
    {
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "projectile_speed", -1, 0);
      info.hSource.m_Index = -1;
      info.hTarget.m_Index = -1;
      info.colorGemColor = 0;
      info.iSourceAttachment = 1;
      info.pAttackRecord = 0;
      info.vSourceLoc.x = vec3_origin.x;
      y = vec3_origin.y;
      info.bProvidesVision = 0;
      info.vSourceLoc.y = y;
      z = vec3_origin.z;
      info.pszEffectName = "particles/units/heroes/hero_dragon_knight/dragon_knight_dragon_tail_dragonform_proj.vpcf";
      info.vSourceLoc.z = z;
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
      info.iMoveSpeed = LevelSpecialValue;
      v29 = CDOTABaseAbility::GetCaster(this);
      if ( v29 != 0 && (m_pEntity = v29->m_pEntity) != 0 )
      {
        v31 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
        v32 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v32 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        LOWORD(info.hSource.m_Index) = v32 | info.hSource.m_Index & 0x8000;
        info.hSource.m_Index = (v31 << 15) | info.hSource.m_Index & 0x7FFF;
      }
      else
      {
        info.hSource.m_Index = -1;
      }
      v33 = CDOTABaseAbility::GetCursorTarget(this);
      if ( v33 != 0 && (v34 = v33->m_pEntity) != 0 )
      {
        v35 = (v34->m_EHandle.m_Index >> 15) - (v34->m_flags & 1);
        v36 = 0x7FFF;
        if ( v34->m_EHandle.m_Index != -1 )
          v36 = v34->m_EHandle.m_Index & 0x7FFF;
        LOWORD(info.hTarget.m_Index) = v36 | info.hTarget.m_Index & 0x8000;
        info.hTarget.m_Index = (v35 << 15) | info.hTarget.m_Index & 0x7FFF;
      }
      else
      {
        info.hTarget.m_Index = -1;
      }
      info.iSourceAttachment = 2;
      CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
      v37 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::UnitEmitSound(v37, "Hero_DragonKnight.DragonTail.DragonFormCast", 0.0, 0, 0);
    }
    else
    {
      CDOTA_Ability_DragonKnight_DragonTail::ApplyStun(this, v3);
    }
  }
}


// CDOTA_Ability_DragonKnight_DragonTail::OnProjectileHit  (line 408, @0x0000000002b73cb0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Ability_DragonKnight_DragonTail::ApplyStun
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_DragonKnight_DragonTail::OnProjectileHit(
        CDOTA_Ability_DragonKnight_DragonTail *const this,
        _DWORD *hTarget,
        const Vector *const vLocation)
{
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CDOTA_BaseNPC *m_pInstance; // rsi

  if ( (*hTarget + 2) <= 1 )
    return 1;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F];
  if ( v3 == 0 )
    return 1;
  v4 = &v3[*hTarget & 0x1FF];
  if ( v4 == 0 )
    return 1;
  if ( *hTarget != v4->m_EHandle.m_Index )
    return 1;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC )
    return 1;
  CDOTA_Ability_DragonKnight_DragonTail::ApplyStun(this, m_pInstance);
  return 1;
}


// CDOTA_Ability_DragonKnight_DragonTail::GetCastRange  (line 423, @0x0000000002b69e00, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCastRange
// strings: "modifier_dragon_knight_dragon_form", "dragon_cast_range"
int __fastcall CDOTA_Ability_DragonKnight_DragonTail::GetCastRange(
        CDOTA_Ability_DragonKnight_DragonTail *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_dragon_knight_dragon_form", 0) != 0 )
    return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "dragon_cast_range", -1, 1);
  else
    return CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
}


// CDOTA_Ability_DragonKnight_DragonTail::GetAbilityDamageToTargetOverInterval  (line 442, @0x0000000002b3bf00, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_DragonKnight_DragonTail::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_DragonKnight_DragonTail *const this,
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


// CDOTA_Ability_DragonKnight_DragonTail::GetStunDuration  (line 452, @0x0000000002b75850, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_DragonKnight_DragonTail::GetStunDuration(
        CDOTA_Ability_DragonKnight_DragonTail *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 1);
}


// CDOTA_Ability_DragonKnight_DragonBlood::~CDOTA_Ability_DragonKnight_DragonBlood  (line 463, @0x0000000002ba10d0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_DragonKnight_DragonBlood::~CDOTA_Ability_DragonKnight_DragonBlood(
        CDOTA_Ability_DragonKnight_DragonBlood *const this)
{
  this->_vptr_IHandleEntity = &off_44D83F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_DragonKnight_DragonBlood::~CDOTA_Ability_DragonKnight_DragonBlood  (line 463, @0x0000000002ba10f0, libserver.so)  // inlines: ~CDOTA_Ability_DragonKnight_DragonBlood
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_DragonKnight_DragonBlood::~CDOTA_Ability_DragonKnight_DragonBlood(
        CDOTA_Ability_DragonKnight_DragonBlood *const this)
{
  this->_vptr_IHandleEntity = &off_44D83F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_DragonKnight_DragonBlood::Schema_DynamicBinding  (line 465, @0x0000000002b8fdc0, libserver.so)
// globals: CDOTA_Ability_DragonKnight_DragonBlood::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DragonKnight_DragonBlood::Schema_DynamicBinding(
        const CDOTA_Ability_DragonKnight_DragonBlood *const this)
{
  return CDOTA_Ability_DragonKnight_DragonBlood::s_pSchemaBinding;
}


// CDOTA_Ability_DragonKnight_DragonBlood::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 465, @0x0000000002b8fdd0, libserver.so)
// globals: CDOTA_Ability_DragonKnight_DragonBlood::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DragonKnight_DragonBlood::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_DragonKnight_DragonBlood::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DragonKnight_DragonBlood::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_DragonKnight_DragonBlood::CEntityInstanceEntityClass::DestructInstance  (line 465, @0x0000000002b8fde0, libserver.so)  // inlines: Destruct<CDOTA_Ability_DragonKnight_DragonBlood>
void __fastcall CDOTA_Ability_DragonKnight_DragonBlood::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_DragonKnight_DragonBlood::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_DragonKnight_DragonBlood::CEntityInstanceEntityClass::FreeInstance  (line 465, @0x0000000002b8fe00, libserver.so)
void __fastcall CDOTA_Ability_DragonKnight_DragonBlood::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_DragonKnight_DragonBlood::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_DragonKnight_DragonBlood::CEntityInstanceEntityClass::CanAllocate  (line 465, @0x0000000002b8fe20, libserver.so)
bool __fastcall CDOTA_Ability_DragonKnight_DragonBlood::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_DragonKnight_DragonBlood::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_DragonKnight_DragonBlood::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 465, @0x0000000002b8fe30, libserver.so)
// globals: CDOTA_Ability_DragonKnight_DragonBlood::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_DragonKnight_DragonBlood::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_DragonKnight_DragonBlood::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DragonKnight_DragonBlood::s_pSchemaBinding;
}


// CDOTA_Ability_DragonKnight_DragonBlood::CEntityInstanceEntityClass::AllocateInstance  (line 465, @0x0000000002b97a60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_DragonKnight_DragonBlood::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_DragonKnight_DragonBlood::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_DragonKnight_DragonBlood::CEntityInstanceEntityClass::ConstructInstance  (line 465, @0x0000000002b9d260, libserver.so)  // inlines: CDOTA_Ability_DragonKnight_DragonBlood, Construct<CDOTA_Ability_DragonKnight_DragonBlood>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_DragonKnight_DragonBlood::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_DragonKnight_DragonBlood::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44D83F0;
  }
  return p;
}


// CDOTA_Ability_DragonKnight_DragonBlood::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 465, @0x0000000002baa8e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_DragonKnight_DragonBlood::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DragonKnight_DragonBlood::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_DragonKnight_DragonBlood::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 465, @0x0000000002baa900, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_DragonKnight_DragonBlood::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DragonKnight_DragonBlood::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal  (line 465, @0x0000000002bd1330, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "dragon_knight_dragon_blood", "CDOTA_Ability_DragonKnight_DragonBlood"
// globals: `guard variable for'CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass, CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_DragonKnight_DragonBlood::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClassInfo, CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClassInfo
CEntityClass *__cdecl CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass) != 0 )
  {
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_pClassInfo = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_flags = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_pInputs = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_nInputCount = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_pOutputs = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_nOutputCount = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_pGameClass = 0;
    CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass._vptr_CEntityClass = off_44D8370;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass);
    __cxa_atexit(
      CDOTA_Ability_DragonKnight_DragonBlood::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_DragonKnight_DragonBloodClass != 0 )
    return &CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass;
  if ( `guard variable for'CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClassInfo,
      "CDOTA_Ability_DragonKnight_DragonBlood",
      "dragon_knight_dragon_blood",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClassInfo);
  }
  CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_pClassInfo = &CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClassInfo;
  CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_pBaseClassInfo = CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_DragonKnight_DragonBloodClass = &CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass;
  CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClassInfo.m_pClass = &CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass;
  CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_DragonKnight_DragonBloodClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_DragonKnight_DragonBlood::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_DragonBloodClass;
}


// CDOTA_Ability_DragonKnight_DragonBlood::GetIntrinsicModifierName  (line 468, @0x0000000002b8fe40, libserver.so)
// strings: "modifier_dragon_knight_dragon_blood"
const char *__fastcall CDOTA_Ability_DragonKnight_DragonBlood::GetIntrinsicModifierName(
        CDOTA_Ability_DragonKnight_DragonBlood *const this)
{
  return "modifier_dragon_knight_dragon_blood";
}


// CDOTA_Modifier_DragonKnight_DragonBlood::~CDOTA_Modifier_DragonKnight_DragonBlood  (line 477, @0x0000000002b9ae10, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_DragonKnight_DragonBlood::~CDOTA_Modifier_DragonKnight_DragonBlood(
        CDOTA_Modifier_DragonKnight_DragonBlood *const this)
{
  this->_vptr_CDOTA_Buff = &off_44D8EB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_DragonKnight_DragonBlood::~CDOTA_Modifier_DragonKnight_DragonBlood  (line 477, @0x0000000002b9ae30, libserver.so)  // inlines: ~CDOTA_Modifier_DragonKnight_DragonBlood
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_DragonKnight_DragonBlood::~CDOTA_Modifier_DragonKnight_DragonBlood(
        CDOTA_Modifier_DragonKnight_DragonBlood *const this)
{
  this->_vptr_CDOTA_Buff = &off_44D8EB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DragonKnight_DragonBlood::IsHidden  (line 482, @0x0000000002b8fe50, libserver.so)
bool __fastcall CDOTA_Modifier_DragonKnight_DragonBlood::IsHidden(CDOTA_Modifier_DragonKnight_DragonBlood *const this)
{
  return 1;
}


// CDOTA_Modifier_DragonKnight_DragonBlood::OnCreated  (line 501, @0x0000000002b6d1a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_health_regen"
void __fastcall CDOTA_Modifier_DragonKnight_DragonBlood::OnCreated(
        CDOTA_Modifier_DragonKnight_DragonBlood *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_health_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_health_regen", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_armor", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_health_regen = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_armor = 0;
}


// CDOTA_Modifier_DragonKnight_DragonBlood::OnRefresh  (line 509, @0x0000000002b6d110, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_health_regen"
void __fastcall CDOTA_Modifier_DragonKnight_DragonBlood::OnRefresh(
        CDOTA_Modifier_DragonKnight_DragonBlood *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_health_regen = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_health_regen", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_armor = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "bonus_armor", -1, 0);
      return;
    }
  }
  else
  {
    this->bonus_health_regen = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_armor = 0;
}


// CDOTA_Modifier_DragonKnight_DragonBlood::DeclareFunctions  (line 517, @0x0000000002b34fb0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_DragonKnight_DragonBlood::GetModifierConstantHealthRegen(CModifierParams const&), CDOTA_Modifier_DragonKnight_DragonBlood::GetModifierPhysicalArmorBonus(CModifierParams const&)
void __fastcall CDOTA_Modifier_DragonKnight_DragonBlood::DeclareFunctions(
        CDOTA_Modifier_DragonKnight_DragonBlood *const this)
{
  this->m_Functions[56].__pfn = CDOTA_Modifier_DragonKnight_DragonBlood::GetModifierConstantHealthRegen;
  this->m_Functions[56].__delta = 0;
  this->m_Functions[45].__delta = 0;
  this->m_Functions[45].__pfn = CDOTA_Modifier_DragonKnight_DragonBlood::GetModifierPhysicalArmorBonus;
}


// CDOTA_Modifier_DragonKnight_DragonBlood::GetModifierConstantHealthRegen  (line 525, @0x0000000002b69e70, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_dragon_knight"
ModifierVariant_t __fastcall CDOTA_Modifier_DragonKnight_DragonBlood::GetModifierConstantHealthRegen(
        CDOTA_Modifier_DragonKnight_DragonBlood *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  __m128i v6; // xmm0
  int LevelSpecialValue; // eax
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) != 0 )
    return 1uLL;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_dragon_knight", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  else
    LevelSpecialValue = 1;
  result.m_szVal = 0;
  *v6.m128i_i32 = (this->bonus_health_regen * LevelSpecialValue);
  *&result.m_eType = (_mm_cvtsi128_si32(v6) << 32) | 1;
  return result;
}


// CDOTA_Modifier_DragonKnight_DragonBlood::GetModifierPhysicalArmorBonus  (line 543, @0x0000000002b69f10, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_dragon_knight"
ModifierVariant_t __fastcall CDOTA_Modifier_DragonKnight_DragonBlood::GetModifierPhysicalArmorBonus(
        CDOTA_Modifier_DragonKnight_DragonBlood *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  __m128i v6; // xmm0
  int LevelSpecialValue; // eax
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) != 0 )
    return 1uLL;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_dragon_knight", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  else
    LevelSpecialValue = 1;
  result.m_szVal = 0;
  *v6.m128i_i32 = (this->bonus_armor * LevelSpecialValue);
  *&result.m_eType = (_mm_cvtsi128_si32(v6) << 32) | 1;
  return result;
}


// CDOTA_Ability_DragonKnight_ElderDragonForm::~CDOTA_Ability_DragonKnight_ElderDragonForm  (line 565, @0x0000000002ba1120, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_DragonKnight_ElderDragonForm::~CDOTA_Ability_DragonKnight_ElderDragonForm(
        CDOTA_Ability_DragonKnight_ElderDragonForm *const this)
{
  this->_vptr_IHandleEntity = &off_44D9210;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_DragonKnight_ElderDragonForm::~CDOTA_Ability_DragonKnight_ElderDragonForm  (line 565, @0x0000000002ba1140, libserver.so)  // inlines: ~CDOTA_Ability_DragonKnight_ElderDragonForm
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_DragonKnight_ElderDragonForm::~CDOTA_Ability_DragonKnight_ElderDragonForm(
        CDOTA_Ability_DragonKnight_ElderDragonForm *const this)
{
  this->_vptr_IHandleEntity = &off_44D9210;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_DragonKnight_ElderDragonForm::Schema_DynamicBinding  (line 567, @0x0000000002b8fe60, libserver.so)
// globals: CDOTA_Ability_DragonKnight_ElderDragonForm::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DragonKnight_ElderDragonForm::Schema_DynamicBinding(
        const CDOTA_Ability_DragonKnight_ElderDragonForm *const this)
{
  return CDOTA_Ability_DragonKnight_ElderDragonForm::s_pSchemaBinding;
}


// CDOTA_Ability_DragonKnight_ElderDragonForm::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 567, @0x0000000002b8fe70, libserver.so)
// globals: CDOTA_Ability_DragonKnight_ElderDragonForm::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_DragonKnight_ElderDragonForm::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_DragonKnight_ElderDragonForm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DragonKnight_ElderDragonForm::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_DragonKnight_ElderDragonForm::CEntityInstanceEntityClass::DestructInstance  (line 567, @0x0000000002b8fe80, libserver.so)  // inlines: Destruct<CDOTA_Ability_DragonKnight_ElderDragonForm>
void __fastcall CDOTA_Ability_DragonKnight_ElderDragonForm::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_DragonKnight_ElderDragonForm::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_DragonKnight_ElderDragonForm::CEntityInstanceEntityClass::FreeInstance  (line 567, @0x0000000002b8fea0, libserver.so)
void __fastcall CDOTA_Ability_DragonKnight_ElderDragonForm::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_DragonKnight_ElderDragonForm::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_DragonKnight_ElderDragonForm::CEntityInstanceEntityClass::CanAllocate  (line 567, @0x0000000002b8fec0, libserver.so)
bool __fastcall CDOTA_Ability_DragonKnight_ElderDragonForm::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_DragonKnight_ElderDragonForm::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_DragonKnight_ElderDragonForm::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 567, @0x0000000002b8fed0, libserver.so)
// globals: CDOTA_Ability_DragonKnight_ElderDragonForm::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_DragonKnight_ElderDragonForm::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_DragonKnight_ElderDragonForm::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_DragonKnight_ElderDragonForm::s_pSchemaBinding;
}


// CDOTA_Ability_DragonKnight_ElderDragonForm::CEntityInstanceEntityClass::AllocateInstance  (line 567, @0x0000000002b97aa0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_DragonKnight_ElderDragonForm::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_DragonKnight_ElderDragonForm::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_DragonKnight_ElderDragonForm::CEntityInstanceEntityClass::ConstructInstance  (line 567, @0x0000000002b9d290, libserver.so)  // inlines: CDOTA_Ability_DragonKnight_ElderDragonForm, Construct<CDOTA_Ability_DragonKnight_ElderDragonForm>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_DragonKnight_ElderDragonForm::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_DragonKnight_ElderDragonForm::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_44D9210;
  }
  return p;
}


// CDOTA_Ability_DragonKnight_ElderDragonForm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 567, @0x0000000002baa930, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_DragonKnight_ElderDragonForm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DragonKnight_ElderDragonForm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_DragonKnight_ElderDragonForm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 567, @0x0000000002baa950, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_DragonKnight_ElderDragonForm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_DragonKnight_ElderDragonForm::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_DragonKnight_ElderDragonForm::GetEntityClassInternal  (line 567, @0x0000000002bc86f0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_01.cpp
// strings: "dragon_knight_elder_dragon_form", "CDOTA_Ability_DragonKnight_ElderDragonForm"
// globals: `guard variable for'CDOTA_Ability_DragonKnight_ElderDragonForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_ElderDragonFormClass, CDOTA_Ability_DragonKnight_ElderDragonForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_ElderDragonFormClass, __dso_handle, CDOTA_Ability_DragonKnight_ElderDragonForm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_DragonKnight_ElderDragonForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_ElderDragonFormClassInfo, CDOTA_Ability_DragonKnight_ElderDragonForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_ElderDragonFormClassInfo
CEntityClass *__cdecl CDOTA_Ability_DragonKnight_ElderDragonForm::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_DragonKnight_ElderDragonForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_ElderDragonFormClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DragonKnight_ElderDragonForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_ElderDragonFormClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_DragonKnight_ElderDragonForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_ElderDragonFormClass);
    CDOTA_Ability_DragonKnight_ElderDragonForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_ElderDragonFormClass._vptr_CEntityClass = off_44D9190;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DragonKnight_ElderDragonForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_ElderDragonFormClass);
    __cxa_atexit(
      CDOTA_Ability_DragonKnight_ElderDragonForm::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_DragonKnight_ElderDragonForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_ElderDragonFormClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_DragonKnight_ElderDragonFormClass != 0 )
    return &CDOTA_Ability_DragonKnight_ElderDragonForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_ElderDragonFormClass;
  if ( `guard variable for'CDOTA_Ability_DragonKnight_ElderDragonForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_ElderDragonFormClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_DragonKnight_ElderDragonForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_ElderDragonFormClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_DragonKnight_ElderDragonForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_ElderDragonFormClassInfo,
      "CDOTA_Ability_DragonKnight_ElderDragonForm",
      "dragon_knight_elder_dragon_form",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_DragonKnight_ElderDragonForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_ElderDragonFormClassInfo);
  }
  CDOTA_Ability_DragonKnight_ElderDragonForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_ElderDragonFormClass.m_pClassInfo = &CDOTA_Ability_DragonKnight_ElderDragonForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_ElderDragonFormClassInfo;
  CDOTA_Ability_DragonKnight_ElderDragonForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_ElderDragonFormClass.m_pBaseClassInfo = CDOTA_Ability_DragonKnight_ElderDragonForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_ElderDragonFormClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_DragonKnight_ElderDragonFormClass = &CDOTA_Ability_DragonKnight_ElderDragonForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_ElderDragonFormClass;
  CDOTA_Ability_DragonKnight_ElderDragonForm::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_DragonKnight_ElderDragonFormClassInfo.m_pClass = &CDOTA_Ability_DragonKnight_ElderDragonForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_ElderDragonFormClass;
  CDOTA_Ability_DragonKnight_ElderDragonForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_ElderDragonFormClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_DragonKnight_ElderDragonFormClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_DragonKnight_ElderDragonForm::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_DragonKnight_ElderDragonFormClass;
}


// CDOTA_Ability_DragonKnight_ElderDragonForm::OnSpellStart  (line 587, @0x0000000002b74210, libserver.so)  // inlines: GetAbilityData, GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTABaseAbility::GetCursorPosition, CDOTAGamerules::SendProjectionAbilityMessage, KeyValues::~KeyValues, CDOTABaseAbility::LoadAbilityData, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_dragon_knight_dragon", "modifier_dragon_knight_dragon_form"
void __fastcall CDOTA_Ability_DragonKnight_ElderDragonForm::OnSpellStart(
        CDOTA_Ability_DragonKnight_ElderDragonForm *const this)
{
  float v2; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v4; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r13d
  CDOTA_BaseNPC *v7; // rax
  float v8; // xmm3_4
  KeyValues kv; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-28h]
  Vector CursorPosition; // 0:kr00_12.12

  v10 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_dragon_knight_dragon");
  KeyValues::SetFloat(&kv, "duration", v2);
  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v4, Caster, this, "modifier_dragon_knight_dragon_form", &kv, 0);
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  v7 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(
    g_pGameRules,
    v7,
    1,
    m_iAbilityID,
    0,
    0,
    *&CursorPosition.x,
    CursorPosition.z,
    -1.0,
    v8);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_DragonKnight_ElderDragonForm::GetAbilityDamageToTargetOverInterval  (line 604, @0x0000000002b79640, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "corrosive_breath_duration", "corrosive_breath_damage"
__int64 __fastcall CDOTA_Ability_DragonKnight_ElderDragonForm::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_DragonKnight_ElderDragonForm *const this,
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
    fIntervala = fminf(
                   fInterval,
                   CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "corrosive_breath_duration", -1, 1));
    fIntervalb = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "corrosive_breath_damage", -1, 1) * fIntervala;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fIntervalb);
  }
  return result;
}


// CDOTA_Modifier_DragonKnight_DragonForm::~CDOTA_Modifier_DragonKnight_DragonForm  (line 619, @0x0000000002b9adc0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_DragonKnight_DragonForm::~CDOTA_Modifier_DragonKnight_DragonForm(
        CDOTA_Modifier_DragonKnight_DragonForm *const this)
{
  this->_vptr_CDOTA_Buff = &off_44D9CD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_DragonKnight_DragonForm::~CDOTA_Modifier_DragonKnight_DragonForm  (line 619, @0x0000000002b9ade0, libserver.so)  // inlines: ~CDOTA_Modifier_DragonKnight_DragonForm
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_DragonKnight_DragonForm::~CDOTA_Modifier_DragonKnight_DragonForm(
        CDOTA_Modifier_DragonKnight_DragonForm *const this)
{
  this->_vptr_CDOTA_Buff = &off_44D9CD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DragonKnight_DragonForm::IsHidden  (line 624, @0x0000000002b8fee0, libserver.so)
bool __fastcall CDOTA_Modifier_DragonKnight_DragonForm::IsHidden(CDOTA_Modifier_DragonKnight_DragonForm *const this)
{
  return 1;
}


// CDOTA_Modifier_DragonKnight_DragonForm::IsPurgable  (line 625, @0x0000000002b8fef0, libserver.so)
bool __fastcall CDOTA_Modifier_DragonKnight_DragonForm::IsPurgable(CDOTA_Modifier_DragonKnight_DragonForm *const this)
{
  return 0;
}


// CDOTA_Modifier_DragonKnight_DragonForm::AllowIllusionDuplicate  (line 626, @0x0000000002b8ff00, libserver.so)
bool __fastcall CDOTA_Modifier_DragonKnight_DragonForm::AllowIllusionDuplicate(
        CDOTA_Modifier_DragonKnight_DragonForm *const this)
{
  return 1;
}


// CDOTA_Modifier_DragonKnight_DragonForm::GetPriority  (line 632, @0x0000000002b8ff10, libserver.so)
int __fastcall CDOTA_Modifier_DragonKnight_DragonForm::GetPriority(CDOTA_Modifier_DragonKnight_DragonForm *const this)
{
  return 0;
}


// CDOTA_Modifier_DragonKnight_DragonForm::OnCreated  (line 659, @0x0000000002b70030, libserver.so)  // inlines: AssignTo, CUtlSymbolLarge, DotaRetrieveAbilityValue<int>, GetLevel, GetLevelSpecialValueFor<int>, GetRangedProjectileName, NetworkStateChanged, Set, SetAttackCapability, SetRangedProjectileName, operator=
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::UnitEmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::AddNewModifier, MakeEntitySystemString, CDOTA_BaseNPC::ManageModelChanges, CBaseAnimating::SetSkin, CDOTA_BaseNPC::StartGesture
// strings: "bonus_attack_damage", "bonus_attack_range", "Hero_DragonKnight.ElderDragonForm", "particles/units/heroes/hero_dragon_knight/dragon_knight_transform_green.vpcf", "modifier_dragon_knight_corrosive_breath", "particles/units/heroes/hero_dragon_knight/dragon_knight_transform_blue.vpcf" (9 total)
// globals: pszDragonProjectileNames
void __fastcall CDOTA_Modifier_DragonKnight_DragonForm::OnCreated(
        CDOTA_Modifier_DragonKnight_DragonForm *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTA_BaseNPC *Caster; // rax
  int iLevel; // eax
  CDOTA_BaseNPC *v9; // r13
  CDOTA_ParticleManager *v10; // rax
  CDOTA_ParticleManager *v11; // rax
  CDOTABaseAbility *v12; // r14
  CDOTA_BaseNPC *v13; // r13
  CDOTA_BaseNPC *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  CDOTA_BaseNPC *v16; // r12
  const char *v17; // r12
  CDOTA_BaseNPC *v18; // r13
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  CDOTA_BaseNPC *v22; // r13
  CDOTA_ParticleManager *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  CDOTABaseAbility *v25; // r14
  CDOTA_BaseNPC *v26; // r13
  CDOTA_BaseNPC *v27; // rax
  CDOTABaseAbility *v28; // r14
  CDOTA_BaseNPC *v29; // r13
  CDOTA_BaseNPC *v30; // rax
  CDOTABaseAbility *v31; // r14
  CDOTA_BaseNPC *v32; // r13
  CDOTA_BaseNPC *v33; // rax
  CDOTA_BaseNPC *v34; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v36; // rax
  CDOTABaseAbility *v37; // r14
  CDOTA_BaseNPC *v38; // r13
  CDOTA_BaseNPC *v39; // rax
  CDOTABaseAbility *v40; // r14
  CDOTA_BaseNPC *v41; // r13
  CDOTA_BaseNPC *v42; // rax
  UtlSymLargeId_t v43; // [rsp+0h] [rbp-30h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "bonus_movement_speed", -1, 0);
  else
    this->bonus_movement_speed = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
    this->bonus_attack_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "bonus_attack_damage", -1, 0);
  else
    this->bonus_attack_damage = 0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
    this->bonus_attack_range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "bonus_attack_range", -1, 0);
  else
    this->bonus_attack_range = 0;
  this->iLevel = 1;
  if ( CDOTA_Buff::GetAbility(this) != 0 )
    this->iLevel = CDOTA_Buff::GetAbility(this)->m_iLevel.m_Value;
  if ( CDOTA_Buff::GetCaster(this) != 0 )
  {
    this->m_iOriginalAttackCapabilities = 1;
    if ( (CDOTA_Buff::GetCaster(this)->m_iAttackCapabilities.m_Value & 2) != 0 )
    {
      this->m_iOriginalAttackCapabilities = 2;
      this->m_iszRangedAttackEffect.u.m_Id = CDOTA_Buff::GetCaster(this)->m_iszAutoAttackRangedParticle.u.m_Id;
    }
    Caster = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(Caster, "Hero_DragonKnight.ElderDragonForm", 0.0, 0, 0);
    iLevel = this->iLevel;
    switch ( iLevel )
    {
      case 2:
        v34 = CDOTA_Buff::GetCaster(this);
        ParticleManager = GetParticleManager();
        LODWORD(v34) = CDOTA_ParticleManager::CreateParticle(
                         ParticleManager,
                         "particles/units/heroes/hero_dragon_knight/dragon_knight_transform_red.vpcf",
                         0,
                         v34,
                         0,
                         0);
        v36 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v36, v34);
        v37 = CDOTA_Buff::GetAbility(this);
        v38 = CDOTA_Buff::GetCaster(this);
        v39 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v39, v38, v37, "modifier_dragon_knight_corrosive_breath", pKV, 0);
        v40 = CDOTA_Buff::GetAbility(this);
        v41 = CDOTA_Buff::GetCaster(this);
        v42 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v42, v41, v40, "modifier_dragon_knight_splash_attack", pKV, 0);
        break;
      case 3:
        v22 = CDOTA_Buff::GetCaster(this);
        v23 = GetParticleManager();
        LODWORD(v22) = CDOTA_ParticleManager::CreateParticle(
                         v23,
                         "particles/units/heroes/hero_dragon_knight/dragon_knight_transform_blue.vpcf",
                         0,
                         v22,
                         0,
                         0);
        v24 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v24, v22);
        v25 = CDOTA_Buff::GetAbility(this);
        v26 = CDOTA_Buff::GetCaster(this);
        v27 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v27, v26, v25, "modifier_dragon_knight_corrosive_breath", pKV, 0);
        v28 = CDOTA_Buff::GetAbility(this);
        v29 = CDOTA_Buff::GetCaster(this);
        v30 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v30, v29, v28, "modifier_dragon_knight_splash_attack", pKV, 0);
        v31 = CDOTA_Buff::GetAbility(this);
        v32 = CDOTA_Buff::GetCaster(this);
        v33 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v33, v32, v31, "modifier_dragon_knight_frost_breath", pKV, 0);
        break;
      case 1:
        v9 = CDOTA_Buff::GetCaster(this);
        v10 = GetParticleManager();
        LODWORD(v9) = CDOTA_ParticleManager::CreateParticle(
                        v10,
                        "particles/units/heroes/hero_dragon_knight/dragon_knight_transform_green.vpcf",
                        0,
                        v9,
                        0,
                        0);
        v11 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v11, v9);
        v12 = CDOTA_Buff::GetAbility(this);
        v13 = CDOTA_Buff::GetCaster(this);
        v14 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(v14, v13, v12, "modifier_dragon_knight_corrosive_breath", pKV, 0);
        break;
      default:
        break;
    }
    v15 = CDOTA_Buff::GetCaster(this);
    v16 = v15;
    if ( v15->m_iAttackCapabilities.m_Value != 2 )
    {
      (*(v15->_vptr_IHandleEntity + 22))(v15, 2436, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v16->m_iAttackCapabilities.m_Value = 2;
    }
    v17 = &pszDragonProjectileNames[128 * (this->iLevel - 1)];
    v18 = CDOTA_Buff::GetCaster(this);
    MakeEntitySystemString(v17);
    v18->m_iszAutoAttackRangedParticle.u.m_Id = v43;
    v19 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::ManageModelChanges(v19);
    LODWORD(v17) = this->iLevel - 1;
    v20 = CDOTA_Buff::GetCaster(this);
    CBaseAnimating::SetSkin(v20, v17);
    if ( CDOTA_Buff::GetAbility(this) != 0 && !CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value )
    {
      v21 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::StartGesture(v21, 1513, 0.0, 0.1, 9, 0, 1.0);
    }
  }
}


// CDOTA_Modifier_DragonKnight_DragonForm::OnRefresh  (line 739, @0x0000000002b424b0, libserver.so)  // inlines: NetworkStateChanged, Set, SetAttackCapability
// calls: CDOTA_Buff::GetCaster
void __fastcall CDOTA_Modifier_DragonKnight_DragonForm::OnRefresh(
        CDOTA_Modifier_DragonKnight_DragonForm *const this,
        KeyValues *pKV)
{
  int m_iOriginalAttackCapabilities; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // r12

  m_iOriginalAttackCapabilities = this->m_iOriginalAttackCapabilities;
  Caster = CDOTA_Buff::GetCaster(this);
  v6 = Caster;
  if ( m_iOriginalAttackCapabilities != Caster->m_iAttackCapabilities.m_Value )
  {
    (*(Caster->_vptr_IHandleEntity + 22))(Caster, 2436, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    v6->m_iAttackCapabilities.m_Value = m_iOriginalAttackCapabilities;
  }
  (*(this->_vptr_CDOTA_Buff + 57))(this, pKV);
}


// CDOTA_Modifier_DragonKnight_DragonForm::OnDestroy  (line 749, @0x0000000002b42910, libserver.so)  // inlines: GetLevel, NetworkStateChanged, Set, SetAttackCapability, SetRangedProjectileName, String, ToCStr, operator=
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, MakeEntitySystemString
// strings: "Hero_DragonKnight.ElderDragonForm.Revert", "particles/units/heroes/hero_dragon_knight/dragon_knight_transform_green.vpcf", "particles/units/heroes/hero_dragon_knight/dragon_knight_transform_blue.vpcf", "particles/units/heroes/hero_dragon_knight/dragon_knight_transform_red.vpcf"
void __fastcall CDOTA_Modifier_DragonKnight_DragonForm::OnDestroy(CDOTA_Modifier_DragonKnight_DragonForm *const this)
{
  int m_iOriginalAttackCapabilities; // r13d
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *Parent; // rax
  int iLevel; // eax
  CDOTA_ParticleManager *ParticleManager; // rax
  const char *v8; // rsi
  int Particle; // r12d
  CDOTA_BaseNPC *v10; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  const char *m_pAsString; // r12
  CDOTA_BaseNPC *v15; // r13
  UtlSymLargeId_t v16; // [rsp+0h] [rbp-30h]

  if ( CDOTA_Buff::GetAbility(this) != 0 )
    this->iLevel = CDOTA_Buff::GetAbility(this)->m_iLevel.m_Value;
  if ( CDOTA_Buff::GetCaster(this) != 0 && CDOTA_Buff::GetParent(this) != 0 )
  {
    m_iOriginalAttackCapabilities = this->m_iOriginalAttackCapabilities;
    Caster = CDOTA_Buff::GetCaster(this);
    if ( m_iOriginalAttackCapabilities != Caster->m_iAttackCapabilities.m_Value )
    {
      (*(Caster->_vptr_IHandleEntity + 22))(Caster, 2436, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      Caster->m_iAttackCapabilities.m_Value = m_iOriginalAttackCapabilities;
    }
    if ( this->m_iOriginalAttackCapabilities == 2 )
    {
      m_pAsString = "";
      if ( this->m_iszRangedAttackEffect.u.m_Id != 0 )
        m_pAsString = this->m_iszRangedAttackEffect.u.m_pAsString;
      v15 = CDOTA_Buff::GetCaster(this);
      MakeEntitySystemString(m_pAsString);
      v15->m_iszAutoAttackRangedParticle.u.m_Id = v16;
    }
    v4 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v4, "Hero_DragonKnight.ElderDragonForm.Revert", 0.0, 0, 0);
    Parent = CDOTA_Buff::GetParent(this);
    if ( (*(Parent->_vptr_IHandleEntity + 408))(Parent) != 0 || !CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value )
    {
      iLevel = this->iLevel;
      switch ( iLevel )
      {
        case 2:
          ParticleManager = GetParticleManager();
          v8 = "particles/units/heroes/hero_dragon_knight/dragon_knight_transform_red.vpcf";
          break;
        case 3:
          ParticleManager = GetParticleManager();
          v8 = "particles/units/heroes/hero_dragon_knight/dragon_knight_transform_blue.vpcf";
          break;
        case 1:
          ParticleManager = GetParticleManager();
          v8 = "particles/units/heroes/hero_dragon_knight/dragon_knight_transform_green.vpcf";
          break;
        default:
          return;
      }
      Particle = CDOTA_ParticleManager::CreateParticle(ParticleManager, v8, 2, 0, 0, 0);
      v10 = CDOTA_Buff::GetCaster(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
      v12 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v12, Particle, 0, *&AbsOrigin->x, AbsOrigin->z);
      v13 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v13, Particle);
    }
  }
}


// CDOTA_Modifier_DragonKnight_DragonForm::DeclareFunctions  (line 800, @0x0000000002b34ff0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_DragonKnight_DragonForm::GetModifierPreAttack_BonusDamage(CModifierParams const&), CDOTA_Modifier_DragonKnight_DragonForm::GetModifierMoveSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_DragonKnight_DragonForm::GetModifierAttackRangeBonus(CModifierParams const&), CDOTA_Modifier_DragonKnight_DragonForm::GetModifierModelChange(CModifierParams const&), CDOTA_Modifier_DragonKnight_DragonForm::GetAttackSound(CModifierParams const&), CDOTA_Modifier_DragonKnight_DragonForm::OnHeroKilled(CModifierParams const&)
void __fastcall CDOTA_Modifier_DragonKnight_DragonForm::DeclareFunctions(
        CDOTA_Modifier_DragonKnight_DragonForm *const this)
{
  this->m_Functions[0].__pfn = CDOTA_Modifier_DragonKnight_DragonForm::GetModifierPreAttack_BonusDamage;
  this->m_Functions[0].__delta = 0;
  this->m_Functions[11].__delta = 0;
  this->m_Functions[11].__pfn = CDOTA_Modifier_DragonKnight_DragonForm::GetModifierMoveSpeedBonus_Constant;
  this->m_Functions[69].__pfn = CDOTA_Modifier_DragonKnight_DragonForm::GetModifierAttackRangeBonus;
  this->m_Functions[152].__pfn = CDOTA_Modifier_DragonKnight_DragonForm::GetModifierModelChange;
  this->m_Functions[156].__pfn = CDOTA_Modifier_DragonKnight_DragonForm::GetAttackSound;
  this->m_Functions[69].__delta = 0;
  this->m_Functions[152].__delta = 0;
  this->m_Functions[156].__delta = 0;
  this->m_Functions[147].__pfn = CDOTA_Modifier_DragonKnight_DragonForm::OnHeroKilled;
  this->m_Functions[147].__delta = 0;
}


// CDOTA_Modifier_DragonKnight_DragonForm::GetAttackSound  (line 815, @0x0000000002b3c1e0, libserver.so)
// strings: "Hero_DragonKnight.ElderDragonShoot1.Attack", "Hero_DragonKnight.ElderDragonShoot3.Attack", "Hero_DragonKnight.ElderDragonShoot2.Attack"
ModifierVariant_t __fastcall CDOTA_Modifier_DragonKnight_DragonForm::GetAttackSound(
        CDOTA_Modifier_DragonKnight_DragonForm *const this,
        const CModifierParams *const params)
{
  int iLevel; // ecx
  ModifierVariant_t result; // 0:rax.16

  iLevel = this->iLevel;
  if ( iLevel == 2 )
  {
    result.m_szVal = "Hero_DragonKnight.ElderDragonShoot2.Attack";
    *&result.m_eType = 2;
  }
  else
  {
    *&result.m_eType = 2;
    if ( iLevel == 3 )
      *&result.m_eType = 2;
    result.m_szVal = "Hero_DragonKnight.ElderDragonShoot1.Attack";
    if ( iLevel == 3 )
      result.m_szVal = "Hero_DragonKnight.ElderDragonShoot3.Attack";
  }
  return result;
}


// CDOTA_Modifier_DragonKnight_DragonForm::GetModifierModelChange  (line 839, @0x0000000002b35090, libserver.so)
// strings: "models/heroes/dragon_knight/dragon_knight_dragon.vmdl"
ModifierVariant_t __fastcall CDOTA_Modifier_DragonKnight_DragonForm::GetModifierModelChange(
        CDOTA_Modifier_DragonKnight_DragonForm *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "models/heroes/dragon_knight/dragon_knight_dragon.vmdl";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_DragonKnight_DragonForm::GetModifierMoveSpeedBonus_Constant  (line 846, @0x0000000002b350b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DragonKnight_DragonForm::GetModifierMoveSpeedBonus_Constant(
        CDOTA_Modifier_DragonKnight_DragonForm *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_movement_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_DragonKnight_DragonForm::GetModifierPreAttack_BonusDamage  (line 853, @0x0000000002b350d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DragonKnight_DragonForm::GetModifierPreAttack_BonusDamage(
        CDOTA_Modifier_DragonKnight_DragonForm *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_attack_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_DragonKnight_DragonForm::GetModifierAttackRangeBonus  (line 860, @0x0000000002b3cca0, libserver.so)  // inlines: GetGameMode
// calls: CDOTA_Buff::GetAbility
ModifierVariant_t __fastcall CDOTA_Modifier_DragonKnight_DragonForm::GetModifierAttackRangeBonus(
        CDOTA_Modifier_DragonKnight_DragonForm *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetAbility(this) != 0
    && CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value
    && (*&result.m_eType = 1, *&g_pGameRules[6].m_szQuestName[68] != 18) )
  {
    result.m_szVal = 0;
  }
  else
  {
    *v3.m128i_i32 = this->bonus_attack_range;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  }
  return result;
}


// CDOTA_Modifier_DragonKnight_DragonForm::OnHeroKilled  (line 871, @0x0000000002b49820, libserver.so)  // inlines: Attacker, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Target, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, EconEntity_OnOwnerKillEaterEvent
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
ModifierVariant_t __fastcall CDOTA_Modifier_DragonKnight_DragonForm::OnHeroKilled(
        CDOTA_Modifier_DragonKnight_DragonForm *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  uint32 v8; // eax
  CEntityIdentity *v9; // rdx
  CEntityIdentity *v10; // rdx
  CEntityInstance *v11; // rsi
  uint32 v12; // eax
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CEntityInstance *v15; // rdi

  m_pInstance = 0;
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[params->hattacker.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        m_pInstance = v6->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) != m_pInstance )
    return 1uLL;
  v8 = params->htarget.m_Index;
  if ( v8 + 2 <= 1
    || (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
    || (v10 = &v9[params->htarget.m_Index & 0x1FF]) == 0
    || v8 != v10->m_EHandle.m_Index
    || (v11 = v10->m_pInstance, v10->m_pInstance == 0)
    || BYTE3(v11[7]._vptr_IHandleEntity) == 0
    || (v11[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
  {
    v11 = 0;
  }
  v12 = params->hattacker.m_Index;
  if ( v12 + 2 <= 1
    || (v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v14 = &v13[params->hattacker.m_Index & 0x1FF]) == 0
    || v12 != v14->m_EHandle.m_Index
    || (v15 = v14->m_pInstance, v14->m_pInstance == 0)
    || BYTE3(v15[7]._vptr_IHandleEntity) == 0
    || (v15[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
  {
    v15 = 0;
  }
  EconEntity_OnOwnerKillEaterEvent(
    v15,
    v11,
    kill_eater_event_t::kKillEaterEventType_DragonKnight_KillsInDragonForm,
    1,
    INVALID_ITEM_DEF_INDEX);
  return 1uLL;
}


// CDOTA_Modifier_DragonKnight_CorrosiveBreath::~CDOTA_Modifier_DragonKnight_CorrosiveBreath  (line 885, @0x0000000002b9ad70, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_DragonKnight_CorrosiveBreath::~CDOTA_Modifier_DragonKnight_CorrosiveBreath(
        CDOTA_Modifier_DragonKnight_CorrosiveBreath *const this)
{
  this->_vptr_CDOTA_Buff = &off_44D9FF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_DragonKnight_CorrosiveBreath::~CDOTA_Modifier_DragonKnight_CorrosiveBreath  (line 885, @0x0000000002b9ad90, libserver.so)  // inlines: ~CDOTA_Modifier_DragonKnight_CorrosiveBreath
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_DragonKnight_CorrosiveBreath::~CDOTA_Modifier_DragonKnight_CorrosiveBreath(
        CDOTA_Modifier_DragonKnight_CorrosiveBreath *const this)
{
  this->_vptr_CDOTA_Buff = &off_44D9FF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DragonKnight_CorrosiveBreath::IsPurgable  (line 891, @0x0000000002b8ff20, libserver.so)
bool __fastcall CDOTA_Modifier_DragonKnight_CorrosiveBreath::IsPurgable(
        CDOTA_Modifier_DragonKnight_CorrosiveBreath *const this)
{
  return 0;
}


// CDOTA_Modifier_DragonKnight_CorrosiveBreath::OnCreated  (line 905, @0x0000000002b7d720, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "corrosive_breath_duration"
void __fastcall CDOTA_Modifier_DragonKnight_CorrosiveBreath::OnCreated(
        CDOTA_Modifier_DragonKnight_CorrosiveBreath *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->corrosive_breath_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(
                                        Ability,
                                        "corrosive_breath_duration",
                                        -1,
                                        0);
  else
    this->corrosive_breath_duration = 0.0;
}


// CDOTA_Modifier_DragonKnight_CorrosiveBreath::DeclareFunctions  (line 912, @0x0000000002b350f0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_DragonKnight_CorrosiveBreath::OnAttacked(CModifierParams const&)
void __fastcall CDOTA_Modifier_DragonKnight_CorrosiveBreath::DeclareFunctions(
        CDOTA_Modifier_DragonKnight_CorrosiveBreath *const this)
{
  this->m_Functions[137].__pfn = CDOTA_Modifier_DragonKnight_CorrosiveBreath::OnAttacked;
  this->m_Functions[137].__delta = 0;
}


// CDOTA_Modifier_DragonKnight_CorrosiveBreath::OnAttacked  (line 919, @0x0000000002b484a0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_dragon_knight_corrosive_breath_dot"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_DragonKnight_CorrosiveBreath::OnAttacked(
        CDOTA_Modifier_DragonKnight_CorrosiveBreath *const this,
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
  float v13; // xmm1_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+18h] [rbp-28h]

  v17 = __readfsqword(0x28u);
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
                if ( v11->m_pInstance != 0 && v12->m_bIsDOTANPC )
                {
                  KeyValues::KeyValues(&kv, "modifier_dragon_knight_corrosive_breath_dot");
                  KeyValues::SetFloat(&kv, "duration", v13);
                  Ability = CDOTA_Buff::GetAbility(this);
                  Caster = CDOTA_Buff::GetCaster(this);
                  CDOTA_BaseNPC::AddNewModifier(
                    v12,
                    Caster,
                    Ability,
                    "modifier_dragon_knight_corrosive_breath_dot",
                    &kv,
                    0);
                  KeyValues::~KeyValues(&kv);
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


// CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT::~CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT  (line 941, @0x0000000002b9ad20, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT::~CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT(
        CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT *const this)
{
  this->_vptr_CDOTA_Buff = &off_44DA310;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT::~CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT  (line 941, @0x0000000002b9ad40, libserver.so)  // inlines: ~CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT::~CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT(
        CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT *const this)
{
  this->_vptr_CDOTA_Buff = &off_44DA310;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT::IsDebuff  (line 946, @0x0000000002b8ff30, libserver.so)
bool __fastcall CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT::IsDebuff(
        CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT *const this)
{
  return 1;
}


// CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT::GetEffectName  (line 954, @0x0000000002b8ff40, libserver.so)
// strings: "particles/units/heroes/hero_dragon_knight/dragon_knight_corrosion_debuff.vpcf"
const char *__fastcall CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT::GetEffectName(
        CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT *const this)
{
  return "particles/units/heroes/hero_dragon_knight/dragon_knight_corrosion_debuff.vpcf";
}


// CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT::StatusEffectPriority  (line 955, @0x0000000002b8ff50, libserver.so)
int __fastcall CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT::StatusEffectPriority(
        CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT *const this)
{
  return 10;
}


// CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT::OnCreated  (line 966, @0x0000000002b6cc30, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
// strings: "corrosive_breath_damage"
void __fastcall CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT::OnCreated(
        CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v4; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->corrosive_breath_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                      Ability,
                                      "corrosive_breath_damage",
                                      -1,
                                      0);
  else
    this->corrosive_breath_damage = 0;
  CDOTA_Buff::StartIntervalThink(this, 1.0, v4);
}


// CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT::OnIntervalThink  (line 974, @0x0000000002b37b30, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, ApplyDamage
void __fastcall CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT::OnIntervalThink(
        CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT *const this)
{
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *Caster; // rax
  float corrosive_breath_damage; // [rsp+Ch] [rbp-24h]

  if ( CDOTA_Buff::GetCaster(this) != 0 && !CDOTA_Buff::GetCaster(this)->m_bIsIllusion.m_Value )
  {
    corrosive_breath_damage = this->corrosive_breath_damage;
    Ability = CDOTA_Buff::GetAbility(this);
    Parent = CDOTA_Buff::GetParent(this);
    Caster = CDOTA_Buff::GetCaster(this);
    ApplyDamage(Caster, Parent, Ability, corrosive_breath_damage, 2, 0);
  }
}


// CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT::DeclareFunctions  (line 986, @0x0000000002b35110, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT::Tooltip(CModifierParams const&)
void __fastcall CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT::DeclareFunctions(
        CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT *const this)
{
  this->m_Functions[151].__pfn = CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT::Tooltip;
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT::Tooltip  (line 993, @0x0000000002b35130, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT::Tooltip(
        CDOTA_Modifier_DragonKnight_CorrosiveBreathDoT *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->corrosive_breath_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_DragonKnight_SplashAttack::~CDOTA_Modifier_DragonKnight_SplashAttack  (line 1002, @0x0000000002b9acd0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_DragonKnight_SplashAttack::~CDOTA_Modifier_DragonKnight_SplashAttack(
        CDOTA_Modifier_DragonKnight_SplashAttack *const this)
{
  this->_vptr_CDOTA_Buff = &off_44DA630;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_DragonKnight_SplashAttack::~CDOTA_Modifier_DragonKnight_SplashAttack  (line 1002, @0x0000000002b9acf0, libserver.so)  // inlines: ~CDOTA_Modifier_DragonKnight_SplashAttack
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_DragonKnight_SplashAttack::~CDOTA_Modifier_DragonKnight_SplashAttack(
        CDOTA_Modifier_DragonKnight_SplashAttack *const this)
{
  this->_vptr_CDOTA_Buff = &off_44DA630;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DragonKnight_SplashAttack::IsPurgable  (line 1008, @0x0000000002b8ff60, libserver.so)
bool __fastcall CDOTA_Modifier_DragonKnight_SplashAttack::IsPurgable(
        CDOTA_Modifier_DragonKnight_SplashAttack *const this)
{
  return 0;
}


// CDOTA_Modifier_DragonKnight_SplashAttack::OnCreated  (line 1024, @0x0000000002b69fb0, libserver.so)  // inlines: V_memset, memset
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "splash_radius", "splash_damage_percent"
void __fastcall CDOTA_Modifier_DragonKnight_SplashAttack::OnCreated(
        CDOTA_Modifier_DragonKnight_SplashAttack *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax

  if ( CDOTA_Buff::GetAbility(this) != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    this->splash_radius[0] = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "splash_radius", 0, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    this->splash_radius[1] = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "splash_radius", 1, 0);
    v5 = CDOTA_Buff::GetAbility(this);
    this->splash_radius[2] = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "splash_radius", 2, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    this->splash_damage_percent[0] = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "splash_damage_percent", 0, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    this->splash_damage_percent[1] = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "splash_damage_percent", 1, 0);
    v8 = CDOTA_Buff::GetAbility(this);
    this->splash_damage_percent[2] = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "splash_damage_percent", 2, 0);
  }
  else
  {
    *this->splash_radius = 0;
    this->splash_radius[2] = 0;
    *this->splash_damage_percent = 0;
    this->splash_damage_percent[2] = 0;
  }
}


// CDOTA_Modifier_DragonKnight_SplashAttack::DeclareFunctions  (line 1045, @0x0000000002b35150, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_DragonKnight_SplashAttack::OnAttackLanded(CModifierParams const&), CDOTA_Modifier_DragonKnight_SplashAttack::OnAttackFailed(CModifierParams const&)
void __fastcall CDOTA_Modifier_DragonKnight_SplashAttack::DeclareFunctions(
        CDOTA_Modifier_DragonKnight_SplashAttack *const this)
{
  this->m_Functions[121].__pfn = CDOTA_Modifier_DragonKnight_SplashAttack::OnAttackLanded;
  this->m_Functions[121].__delta = 0;
  this->m_Functions[122].__delta = 0;
  this->m_Functions[122].__pfn = CDOTA_Modifier_DragonKnight_SplashAttack::OnAttackFailed;
}


// CDOTA_Modifier_DragonKnight_SplashAttack::OnAttackLanded  (line 1053, @0x0000000002b71790, libserver.so)  // inlines: AttackerNPC, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<float>, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, FindUnitsInRadius, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::GetRangeToUnit, ApplyDamage (17 total)
// strings: "corrosive_breath_duration", "modifier_dragon_knight_corrosive_breath_dot"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
ModifierVariant_t __fastcall CDOTA_Modifier_DragonKnight_SplashAttack::OnAttackLanded(
        CDOTA_Modifier_DragonKnight_SplashAttack *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *v3; // rax
  CDOTABaseAbility *Ability; // rax
  __m128i v6; // xmm5
  float v7; // ebx
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *Caster; // rax
  __int64 v10; // rbx
  int v11; // r12d
  CHandle<CBaseEntity> *v12; // rdx
  uint32 m_Index; // eax
  __int16 v14; // cx
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityInstance *m_pInstance; // r13
  float v18; // xmm1_4
  CDOTA_BaseNPC *v19; // rax
  float RangeToUnit; // xmm0_4
  CDOTABaseAbility *v21; // rax
  CDOTA_BaseNPC *v22; // rax
  double v23; // xmm0_8
  CDOTA_BaseNPC *v24; // rax
  CDOTA_BaseNPC_Hero *v25; // rdi
  CDOTABaseAbility *pInflictor; // [rsp+20h] [rbp-A0h]
  CDOTABaseAbility *pAbilityb; // [rsp+30h] [rbp-90h]
  float pAbility; // [rsp+30h] [rbp-90h]
  CDOTABaseAbility *pAbilitya; // [rsp+30h] [rbp-90h]
  CDOTA_BaseNPC *pTarget; // [rsp+38h] [rbp-88h]
  float corrosive_breath_duration; // [rsp+4Ch] [rbp-74h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+50h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v35; // [rsp+88h] [rbp-38h]

  v35 = __readfsqword(0x28u);
  v3 = CEntityHandle::operator CEntityInstance *(&params->hattacker);
  if ( v3 != 0 && v3->m_bIsDOTANPC && v3 == CDOTA_Buff::GetParent(this) )
  {
    pTarget = CEntityHandle::operator CEntityInstance *(&params->htarget);
    if ( pTarget != 0 && pTarget->m_bIsDOTANPC )
    {
      Ability = CDOTA_Buff::GetAbility(this);
      DotaRetrieveAbilityValue<float>(Ability, &corrosive_breath_duration, "corrosive_breath_duration");
      *v6.m128i_i32 = this->splash_radius[2];
      hEntities.m_Size = 0;
      hEntities.m_Memory.m_pMemory = 0;
      hEntities.m_Memory.m_nAllocationCount = 0;
      hEntities.m_Memory.m_nGrowSize = 0;
      v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
      AbsOrigin = CBaseEntity::GetAbsOrigin(pTarget);
      Caster = CDOTA_Buff::GetCaster(this);
      FindUnitsInRadius(Caster->m_iTeamNum.m_Value, AbsOrigin, pTarget, v7, &hEntities, 2, 19, 16, 0, 0);
      if ( hEntities.m_Size > 0 )
      {
        v10 = 0;
        v11 = 0;
        do
        {
          while ( 1 )
          {
            v12 = &hEntities.m_Memory.m_pMemory[v10];
            m_Index = hEntities.m_Memory.m_pMemory[v10].m_Index;
            if ( m_Index + 2 > 1 )
            {
              v14 = v12->m_Index;
              v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v12->m_Index) >> 9) & 0x3F];
              if ( v15 != 0 )
              {
                v16 = &v15[v14 & 0x1FF];
                if ( v16 != 0 && m_Index == v16->m_EHandle.m_Index )
                {
                  m_pInstance = v16->m_pInstance;
                  if ( v16->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 && pTarget != m_pInstance )
                    break;
                }
              }
            }
            ++v11;
            ++v10;
            if ( hEntities.m_Size <= v11 )
              goto LABEL_23;
          }
          KeyValues::KeyValues(&kv, "modifier_dragon_knight_corrosive_breath_dot");
          KeyValues::SetFloat(&kv, "duration", v18);
          pAbilityb = CDOTA_Buff::GetAbility(this);
          v19 = CDOTA_Buff::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(
            m_pInstance,
            v19,
            pAbilityb,
            "modifier_dragon_knight_corrosive_breath_dot",
            &kv,
            0);
          RangeToUnit = CDOTA_BaseNPC::GetRangeToUnit(pTarget, m_pInstance);
          if ( this->splash_radius[0] > RangeToUnit )
          {
            pAbility = (this->splash_damage_percent[0] * params->fDamage) / 100.0;
            v21 = CDOTA_Buff::GetAbility(this);
          }
          else
          {
            if ( this->splash_radius[1] <= RangeToUnit )
              pAbility = (this->splash_damage_percent[2] * params->fDamage) / 100.0;
            else
              pAbility = (this->splash_damage_percent[1] * params->fDamage) / 100.0;
            v21 = CDOTA_Buff::GetAbility(this);
          }
          pInflictor = v21;
          v22 = CDOTA_Buff::GetCaster(this);
          v23 = ApplyDamage(v22, m_pInstance, pInflictor, pAbility, 1, 0);
          if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
            && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance, v23) == 0 )
          {
            pAbilitya = 0;
            if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
              && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
            {
              if ( LOBYTE(m_pInstance[71].m_pEntity) != 0 )
                m_pInstance = 0;
              pAbilitya = m_pInstance;
            }
            v24 = CDOTA_Buff::GetCaster(this);
            if ( v24 == 0
              || !v24->m_bIsDOTANPC
              || (v24->m_iUnitType & 1) == 0
              || (v25 = v24, v24->m_bIsIllusion.m_Value) )
            {
              v25 = 0;
            }
            EconEntity_OnOwnerKillEaterEvent(
              v25,
              pAbilitya,
              kill_eater_event_t::kKillEaterEventType_DragonKnight_SplashKills,
              1,
              INVALID_ITEM_DEF_INDEX);
          }
          ++v11;
          ++v10;
          KeyValues::~KeyValues(&kv);
        }
        while ( hEntities.m_Size > v11 );
      }
LABEL_23:
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_DragonKnight_SplashAttack::OnAttackFailed  (line 1104, @0x0000000002b61cc0, libserver.so)  // inlines: AttackerNPC, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, Purge, TargetNPC, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, FindUnitsInRadius, CDOTA_BaseNPC::GetRangeToUnit, CDOTA_Buff::GetAbility, ApplyDamage, EconEntity_OnOwnerKillEaterEvent, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase (13 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
ModifierVariant_t __fastcall CDOTA_Modifier_DragonKnight_SplashAttack::OnAttackFailed(
        CDOTA_Modifier_DragonKnight_SplashAttack *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *v3; // rax
  const CBaseEntity *v5; // rax
  __m128i v6; // xmm5
  CDOTA_BaseNPC *v7; // r15
  float v8; // ebx
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *Caster; // rax
  __int64 v11; // rbx
  int v12; // r12d
  CHandle<CBaseEntity> *v13; // rdx
  uint32 m_Index; // eax
  __int16 v15; // cx
  CEntityIdentity *v16; // rdx
  CEntityIdentity *v17; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  float RangeToUnit; // xmm0_4
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *v21; // rax
  double v22; // xmm0_8
  CDOTA_BaseNPC *v23; // rax
  CDOTA_BaseNPC_Hero *v24; // rdi
  CDOTABaseAbility *pInflictor; // [rsp+28h] [rbp-68h]
  float flDamage; // [rsp+30h] [rbp-60h]
  CDOTA_BaseNPC_Hero *flDamagea; // [rsp+30h] [rbp-60h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+40h] [rbp-50h] BYREF

  v3 = CEntityHandle::operator CEntityInstance *(&params->hattacker);
  if ( v3 != 0 && v3->m_bIsDOTANPC && v3 == CDOTA_Buff::GetParent(this) )
  {
    v5 = CEntityHandle::operator CEntityInstance *(&params->htarget);
    v7 = v5;
    if ( v5 != 0 && v5->m_bIsDOTANPC )
    {
      *v6.m128i_i32 = this->splash_radius[2];
      hEntities.m_Size = 0;
      hEntities.m_Memory.m_pMemory = 0;
      hEntities.m_Memory.m_nAllocationCount = 0;
      hEntities.m_Memory.m_nGrowSize = 0;
      v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
      AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
      Caster = CDOTA_Buff::GetCaster(this);
      FindUnitsInRadius(Caster->m_iTeamNum.m_Value, AbsOrigin, v7, v8, &hEntities, 2, 19, 16, 0, 0);
      if ( hEntities.m_Size > 0 )
      {
        v11 = 0;
        v12 = 0;
        do
        {
          while ( 1 )
          {
            v13 = &hEntities.m_Memory.m_pMemory[v11];
            m_Index = hEntities.m_Memory.m_pMemory[v11].m_Index;
            if ( m_Index + 2 > 1 )
            {
              v15 = v13->m_Index;
              v16 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v13->m_Index) >> 9) & 0x3F];
              if ( v16 != 0 )
              {
                v17 = &v16[v15 & 0x1FF];
                if ( v17 != 0 && m_Index == v17->m_EHandle.m_Index )
                {
                  m_pInstance = v17->m_pInstance;
                  if ( v17->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && v7 != m_pInstance )
                  {
                    RangeToUnit = CDOTA_BaseNPC::GetRangeToUnit(v7, v17->m_pInstance);
                    if ( this->splash_radius[0] > RangeToUnit )
                    {
                      flDamage = (this->splash_damage_percent[0] * params->fDamage) / 200.0;
                      Ability = CDOTA_Buff::GetAbility(this);
                    }
                    else
                    {
                      flDamage = this->splash_radius[1] <= RangeToUnit
                               ? (this->splash_damage_percent[2] * params->fDamage) / 200.0
                               : (this->splash_damage_percent[1] * params->fDamage) / 200.0;
                      Ability = CDOTA_Buff::GetAbility(this);
                    }
                    pInflictor = Ability;
                    v21 = CDOTA_Buff::GetCaster(this);
                    v22 = ApplyDamage(v21, m_pInstance, pInflictor, flDamage, 1, 0);
                    if ( (m_pInstance->m_iUnitType & 1) != 0
                      && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance, v22) == 0 )
                    {
                      break;
                    }
                  }
                }
              }
            }
            ++v12;
            ++v11;
            if ( hEntities.m_Size <= v12 )
              goto LABEL_34;
          }
          flDamagea = 0;
          if ( m_pInstance->m_bIsDOTANPC && (m_pInstance->m_iUnitType & 1) != 0 )
          {
            if ( m_pInstance->m_bIsIllusion.m_Value )
              m_pInstance = 0;
            flDamagea = m_pInstance;
          }
          v23 = CDOTA_Buff::GetCaster(this);
          v24 = 0;
          if ( v23 != 0 && v23->m_bIsDOTANPC && (v23->m_iUnitType & 1) != 0 && !v23->m_bIsIllusion.m_Value )
            v24 = v23;
          EconEntity_OnOwnerKillEaterEvent(
            v24,
            flDamagea,
            kill_eater_event_t::kKillEaterEventType_DragonKnight_SplashKills,
            1,
            INVALID_ITEM_DEF_INDEX);
          ++v12;
          ++v11;
        }
        while ( hEntities.m_Size > v12 );
      }
LABEL_34:
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEntities);
      if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
        if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_DragonKnight_FrostBreath::~CDOTA_Modifier_DragonKnight_FrostBreath  (line 1152, @0x0000000002b9ac80, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_DragonKnight_FrostBreath::~CDOTA_Modifier_DragonKnight_FrostBreath(
        CDOTA_Modifier_DragonKnight_FrostBreath *const this)
{
  this->_vptr_CDOTA_Buff = &off_44DA950;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_DragonKnight_FrostBreath::~CDOTA_Modifier_DragonKnight_FrostBreath  (line 1152, @0x0000000002b9aca0, libserver.so)  // inlines: ~CDOTA_Modifier_DragonKnight_FrostBreath
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_DragonKnight_FrostBreath::~CDOTA_Modifier_DragonKnight_FrostBreath(
        CDOTA_Modifier_DragonKnight_FrostBreath *const this)
{
  this->_vptr_CDOTA_Buff = &off_44DA950;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DragonKnight_FrostBreath::IsPurgable  (line 1158, @0x0000000002b8ff70, libserver.so)
bool __fastcall CDOTA_Modifier_DragonKnight_FrostBreath::IsPurgable(
        CDOTA_Modifier_DragonKnight_FrostBreath *const this)
{
  return 0;
}


// CDOTA_Modifier_DragonKnight_FrostBreath::OnCreated  (line 1173, @0x0000000002b7d9d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "frost_duration", "frost_aoe"
void __fastcall CDOTA_Modifier_DragonKnight_FrostBreath::OnCreated(
        CDOTA_Modifier_DragonKnight_FrostBreath *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->frost_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "frost_duration", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->frost_aoe = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "frost_aoe", -1, 0);
      return;
    }
  }
  else
  {
    this->frost_duration = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->frost_aoe = 0.0;
}


// CDOTA_Modifier_DragonKnight_FrostBreath::DeclareFunctions  (line 1181, @0x0000000002b35190, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_DragonKnight_FrostBreath::OnAttackLanded(CModifierParams const&)
void __fastcall CDOTA_Modifier_DragonKnight_FrostBreath::DeclareFunctions(
        CDOTA_Modifier_DragonKnight_FrostBreath *const this)
{
  this->m_Functions[121].__pfn = CDOTA_Modifier_DragonKnight_FrostBreath::OnAttackLanded;
  this->m_Functions[121].__delta = 0;
}


// CDOTA_Modifier_DragonKnight_FrostBreath::OnAttackLanded  (line 1188, @0x0000000002b5f9c0, libserver.so)  // inlines: AttackerNPC, CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, FindUnitsInRadius, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, __stack_chk_fail (13 total)
// strings: "modifier_dragon_knight_frost_breath_slow"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_DragonKnight_FrostBreath::OnAttackLanded(
        CDOTA_Modifier_DragonKnight_FrostBreath *const this,
        const CModifierParams *const params)
{
  EHANDLE *p_hattacker; // r12
  CDOTA_BaseNPC *v5; // rax
  CEntityInstance *v7; // rax
  CDOTA_BaseNPC *v8; // rbx
  CEntityInstance *v9; // rax
  float frost_aoe; // r14d
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *Caster; // rax
  __int64 v13; // rbx
  CHandle<CBaseEntity> *v14; // rdx
  uint32 m_Index; // eax
  __int16 v16; // cx
  CEntityIdentity *v17; // rdx
  CEntityIdentity *v18; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  float v20; // xmm1_4
  CDOTABaseAbility *Ability; // r15
  CDOTA_BaseNPC *v22; // rax
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+20h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+58h] [rbp-38h]

  p_hattacker = &params->hattacker;
  v25 = __readfsqword(0x28u);
  v5 = CEntityHandle::operator CEntityInstance *(&params->hattacker);
  if ( v5 != 0 && v5->m_bIsDOTANPC && v5 == CDOTA_Buff::GetParent(this) )
  {
    v7 = CEntityHandle::operator CEntityInstance *(&params->htarget);
    if ( v7 == 0 || (v8 = v7, BYTE3(v7[7]._vptr_IHandleEntity) == 0) )
      v8 = 0;
    v9 = CEntityHandle::operator CEntityInstance *(p_hattacker);
    if ( v9 != 0 && BYTE3(v9[7]._vptr_IHandleEntity) != 0 && v8 != 0 )
    {
      hEntities.m_Size = 0;
      hEntities.m_Memory.m_pMemory = 0;
      frost_aoe = this->frost_aoe;
      hEntities.m_Memory.m_nAllocationCount = 0;
      hEntities.m_Memory.m_nGrowSize = 0;
      AbsOrigin = CBaseEntity::GetAbsOrigin(v8);
      Caster = CDOTA_Buff::GetCaster(this);
      FindUnitsInRadius(Caster->m_iTeamNum.m_Value, AbsOrigin, v8, frost_aoe, &hEntities, 2, 19, 16, 0, 0);
      if ( hEntities.m_Size > 0 )
      {
        v13 = 0;
        do
        {
          while ( 1 )
          {
            v14 = &hEntities.m_Memory.m_pMemory[v13];
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
                    break;
                }
              }
            }
            if ( ++v13 >= hEntities.m_Size )
              goto LABEL_20;
          }
          KeyValues::KeyValues(&kv, "modifier_dragon_knight_frost_breath_slow");
          KeyValues::SetFloat(&kv, "duration", v20);
          Ability = CDOTA_Buff::GetAbility(this);
          v22 = CDOTA_Buff::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(m_pInstance, v22, Ability, "modifier_dragon_knight_frost_breath_slow", &kv, 0);
          KeyValues::~KeyValues(&kv);
          ++v13;
        }
        while ( v13 < hEntities.m_Size );
      }
LABEL_20:
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_DragonKnight_FrostBreath_Slow::~CDOTA_Modifier_DragonKnight_FrostBreath_Slow  (line 1221, @0x0000000002b9ac30, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_DragonKnight_FrostBreath_Slow::~CDOTA_Modifier_DragonKnight_FrostBreath_Slow(
        CDOTA_Modifier_DragonKnight_FrostBreath_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_44DAC70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_DragonKnight_FrostBreath_Slow::~CDOTA_Modifier_DragonKnight_FrostBreath_Slow  (line 1221, @0x0000000002b9ac50, libserver.so)  // inlines: ~CDOTA_Modifier_DragonKnight_FrostBreath_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_DragonKnight_FrostBreath_Slow::~CDOTA_Modifier_DragonKnight_FrostBreath_Slow(
        CDOTA_Modifier_DragonKnight_FrostBreath_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_44DAC70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_DragonKnight_FrostBreath_Slow::GetEffectName  (line 1232, @0x0000000002b8ff80, libserver.so)
// strings: "particles/generic_gameplay/generic_slowed_cold.vpcf"
const char *__fastcall CDOTA_Modifier_DragonKnight_FrostBreath_Slow::GetEffectName(
        CDOTA_Modifier_DragonKnight_FrostBreath_Slow *const this)
{
  return "particles/generic_gameplay/generic_slowed_cold.vpcf";
}


// CDOTA_Modifier_DragonKnight_FrostBreath_Slow::GetStatusEffectName  (line 1233, @0x0000000002b8ff90, libserver.so)
// strings: "particles/status_fx/status_effect_frost.vpcf"
const char *__fastcall CDOTA_Modifier_DragonKnight_FrostBreath_Slow::GetStatusEffectName(
        CDOTA_Modifier_DragonKnight_FrostBreath_Slow *const this)
{
  return "particles/status_fx/status_effect_frost.vpcf";
}


// CDOTA_Modifier_DragonKnight_FrostBreath_Slow::StatusEffectPriority  (line 1234, @0x0000000002b8ffa0, libserver.so)
int __fastcall CDOTA_Modifier_DragonKnight_FrostBreath_Slow::StatusEffectPriority(
        CDOTA_Modifier_DragonKnight_FrostBreath_Slow *const this)
{
  return 10;
}


// CDOTA_Modifier_DragonKnight_FrostBreath_Slow::OnCreated  (line 1246, @0x0000000002b6cf60, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "frost_bonus_movement_speed", "frost_bonus_attack_speed"
void __fastcall CDOTA_Modifier_DragonKnight_FrostBreath_Slow::OnCreated(
        CDOTA_Modifier_DragonKnight_FrostBreath_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->frost_bonus_movement_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                         Ability,
                                         "frost_bonus_movement_speed",
                                         -1,
                                         0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->frost_bonus_attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                         v4,
                                         "frost_bonus_attack_speed",
                                         -1,
                                         0);
      return;
    }
  }
  else
  {
    this->frost_bonus_movement_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->frost_bonus_attack_speed = 0;
}


// CDOTA_Modifier_DragonKnight_FrostBreath_Slow::DeclareFunctions  (line 1254, @0x0000000002b351b0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_DragonKnight_FrostBreath_Slow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_DragonKnight_FrostBreath_Slow::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_DragonKnight_FrostBreath_Slow::DeclareFunctions(
        CDOTA_Modifier_DragonKnight_FrostBreath_Slow *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_DragonKnight_FrostBreath_Slow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_DragonKnight_FrostBreath_Slow::GetModifierAttackSpeedBonus_Constant;
}


// CDOTA_Modifier_DragonKnight_FrostBreath_Slow::GetModifierMoveSpeedBonus_Percentage  (line 1262, @0x0000000002b3c790, libserver.so)
// calls: CDOTA_Buff::GetCaster
ModifierVariant_t __fastcall CDOTA_Modifier_DragonKnight_FrostBreath_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_DragonKnight_FrostBreath_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetCaster(this) != 0
    && (result.m_szVal = CDOTA_Buff::GetCaster(this), *&result.m_eType = 1, *(result.m_szVal + 3416) != 0) )
  {
    result.m_szVal = 0;
  }
  else
  {
    *v3.m128i_i32 = this->frost_bonus_movement_speed;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  }
  return result;
}


// CDOTA_Modifier_DragonKnight_FrostBreath_Slow::GetModifierAttackSpeedBonus_Constant  (line 1275, @0x0000000002b3c7f0, libserver.so)
// calls: CDOTA_Buff::GetCaster
ModifierVariant_t __fastcall CDOTA_Modifier_DragonKnight_FrostBreath_Slow::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_DragonKnight_FrostBreath_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( CDOTA_Buff::GetCaster(this) != 0
    && (result.m_szVal = CDOTA_Buff::GetCaster(this), *&result.m_eType = 1, *(result.m_szVal + 3416) != 0) )
  {
    result.m_szVal = 0;
  }
  else
  {
    *v3.m128i_i32 = this->frost_bonus_attack_speed;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  }
  return result;
}


