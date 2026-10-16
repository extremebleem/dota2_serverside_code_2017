// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_medusa.cpp:35
class CDOTA_Ability_Medusa_SplitShot : public CDOTABaseAbility {
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
	CDOTA_Ability_Medusa_SplitShot(CDOTA_Ability_Medusa_SplitShot &);
	CDOTA_Ability_Medusa_SplitShot(CDOTA_Ability_Medusa_SplitShot &);
	CDOTA_Ability_Medusa_SplitShot();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnToggle();
	virtual void OnUpgrade();
	virtual bool ResetToggleOnRespawn();
	virtual void OnUnStolen();
	virtual bool ProcsMagicStick();
	virtual ~CDOTA_Ability_Medusa_SplitShot();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[270] OnToggle
	// vtable[268] OnUpgrade
	// vtable[281] ResetToggleOnRespawn
	// vtable[308] OnUnStolen
	// vtable[239] ProcsMagicStick
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_medusa.cpp:54
class C_CDOTA_Ability_Medusa_SplitShot_MapInstall {
	C_CDOTA_Ability_Medusa_SplitShot_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_medusa.cpp:109
class CDOTA_Unit_Hero_Medusa : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Medusa(CDOTA_Unit_Hero_Medusa &);
	CDOTA_Unit_Hero_Medusa(CDOTA_Unit_Hero_Medusa &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	CDOTA_Unit_Hero_Medusa();
	virtual ~CDOTA_Unit_Hero_Medusa();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_medusa.cpp:120
class C_CDOTA_Unit_Hero_Medusa_MapInstall {
	C_CDOTA_Unit_Hero_Medusa_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_medusa.cpp:131
class CDOTA_Modifier_Medusa_SplitShot : public CDOTA_Buff {
public:

private:

	int damage_modifier;  // +0xba8
	int range;  // +0xbac
	int arrow_count;  // +0xbb0
	int projectile_speed;  // +0xbb4
	int m_nSplitShotBowFXIndex;  // +0xbb8
	CDOTA_Modifier_Medusa_SplitShot();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual bool AllowIllusionDuplicate();
	virtual void DeclareFunctions();
	virtual bool RemoveOnDeath();
	ModifierVariant_t OnAttack(const CModifierParams &);
	ModifierVariant_t GetModifierDamageOutgoing_Percentage(const CModifierParams &);
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	ModifierVariant_t GetAttackSound(const CModifierParams &);
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual ~CDOTA_Modifier_Medusa_SplitShot();

	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// vtable[18] AllowIllusionDuplicate
	// vtable[65] DeclareFunctions
	// vtable[54] RemoveOnDeath
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_medusa.cpp:280
class CDOTA_Ability_Medusa_MysticSnake : public CDOTABaseAbility {
public:

private:

	int radius;  // +0x390
	int snake_jumps;  // +0x394
	int snake_damage;  // +0x398
	int snake_mana_steal;  // +0x39c
	int snake_scale;  // +0x3a0
	int initial_speed;  // +0x3a4
	int return_speed;  // +0x3a8
	float jump_delay;  // +0x3ac
	int m_iCurJumpCount;  // +0x3b0
	int m_iTotalMana;  // +0x3b4
	float m_flDamage;  // +0x3b8
	float m_flMana;  // +0x3bc
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
	CDOTA_Ability_Medusa_MysticSnake(CDOTA_Ability_Medusa_MysticSnake &);
	CDOTA_Ability_Medusa_MysticSnake(CDOTA_Ability_Medusa_MysticSnake &);
	CDOTA_Ability_Medusa_MysticSnake();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	void LaunchNextProjectile(CDOTA_BaseNPC *);
	void LaunchReturnProjectile(CDOTA_BaseNPC *);
	virtual ~CDOTA_Ability_Medusa_MysticSnake();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 984
};

// src/game/shared/dota/units/dota_unit_hero_medusa.cpp:540
class CDOTA_Ability_Medusa_ManaShield : public CDOTABaseAbility {
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
	CDOTA_Ability_Medusa_ManaShield(CDOTA_Ability_Medusa_ManaShield &);
	CDOTA_Ability_Medusa_ManaShield(CDOTA_Ability_Medusa_ManaShield &);
	CDOTA_Ability_Medusa_ManaShield();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnToggle();
	virtual bool ResetToggleOnRespawn();
	virtual bool ProcsMagicStick();
	virtual void OwnerRespawned();
	virtual void OnOwnerDied();
	virtual ~CDOTA_Ability_Medusa_ManaShield();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[270] OnToggle
	// vtable[281] ResetToggleOnRespawn
	// vtable[239] ProcsMagicStick
	// vtable[207] OwnerRespawned
	// vtable[271] OnOwnerDied
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_medusa.cpp:619
class CDOTA_Modifier_Medusa_ManaShield : public CDOTA_Buff {
public:

private:

	float damage_per_mana;  // +0xba8
	CDOTA_Modifier_Medusa_ManaShield();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual bool RemoveOnDeath();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierPhysical_ConstantBlockUnavoidablePreArmor(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual ~CDOTA_Modifier_Medusa_ManaShield();

	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// vtable[54] RemoveOnDeath
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_medusa.cpp:722
class CDOTA_Ability_Medusa_StoneGaze : public CDOTABaseAbility {
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
	CDOTA_Ability_Medusa_StoneGaze(CDOTA_Ability_Medusa_StoneGaze &);
	CDOTA_Ability_Medusa_StoneGaze(CDOTA_Ability_Medusa_StoneGaze &);
	CDOTA_Ability_Medusa_StoneGaze();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual float GetSlowDuration();
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Medusa_StoneGaze();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[321] GetSlowDuration
	// vtable[322] GetStunDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_medusa.cpp:773
class CDOTA_Modifier_Medusa_StoneGaze : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	float vision_cone;  // +0xbac
	float duration;  // +0xbb0

	CDOTA_Modifier_Medusa_StoneGaze();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual int GetAttributes();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Medusa_StoneGaze();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[7] GetAttributes
	// vtable[14] IsPurgable
	// sizeof = 3032
};

// src/game/shared/dota/units/dota_unit_hero_medusa.cpp:898
class CDOTA_Modifier_Medusa_StoneGaze_Slow : public CDOTA_Buff {
public:

private:

	int slow;  // +0xba8
	CDOTA_Modifier_Medusa_StoneGaze_Slow();
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierTurnRate_Percentage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Medusa_StoneGaze_Slow();

	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_medusa.cpp:975
class CDOTA_Modifier_Medusa_StoneGaze_Facing : public CDOTA_Buff {
public:

private:

	float face_duration;  // +0xba8
	float stone_duration;  // +0xbac
	float vision_cone;  // +0xbb0
	float m_flAccumulatedTime;  // +0xbb4

	int m_nFXIndex;  // +0xbd0
	virtual bool IsDebuff();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	CDOTA_Modifier_Medusa_StoneGaze_Facing();
	virtual ~CDOTA_Modifier_Medusa_StoneGaze_Facing();

	// vtable[12] IsDebuff
	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// sizeof = 3032
};

// src/game/shared/dota/units/dota_unit_hero_medusa.cpp:1151
class CDOTA_Modifier_Medusa_StoneGaze_Stone : public CDOTA_Buff {
public:

private:

	int bonus_physical_damage;  // +0xba8
	CDOTA_Modifier_Medusa_StoneGaze_Stone();
	virtual bool IsDebuff();
	virtual bool IsStunDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual void CheckState(CDOTABuffState &);
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	ModifierVariant_t GetModifierIncomingPhysicalDamage_Percentage(const CModifierParams &);
	ModifierVariant_t GetAbsoluteNoDamageMagical(const CModifierParams &);
	ModifierVariant_t GetOverrideAnimationRate(const CModifierParams &);
	virtual ~CDOTA_Modifier_Medusa_StoneGaze_Stone();

	// vtable[12] IsDebuff
	// vtable[16] IsStunDebuff
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[5] CheckState
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Ability_Medusa_SplitShot::~CDOTA_Ability_Medusa_SplitShot  (line 35, @0x0000000002c98cc0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Medusa_SplitShot::~CDOTA_Ability_Medusa_SplitShot(
        CDOTA_Ability_Medusa_SplitShot *const this)
{
  this->_vptr_IHandleEntity = &off_45D27D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Medusa_SplitShot::~CDOTA_Ability_Medusa_SplitShot  (line 35, @0x0000000002c98ce0, libserver.so)  // inlines: ~CDOTA_Ability_Medusa_SplitShot
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Medusa_SplitShot::~CDOTA_Ability_Medusa_SplitShot(
        CDOTA_Ability_Medusa_SplitShot *const this)
{
  this->_vptr_IHandleEntity = &off_45D27D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Medusa_SplitShot::Schema_DynamicBinding  (line 37, @0x0000000002c8a2f0, libserver.so)
// globals: CDOTA_Ability_Medusa_SplitShot::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Medusa_SplitShot::Schema_DynamicBinding(
        const CDOTA_Ability_Medusa_SplitShot *const this)
{
  return CDOTA_Ability_Medusa_SplitShot::s_pSchemaBinding;
}


// CDOTA_Ability_Medusa_SplitShot::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 37, @0x0000000002c8a300, libserver.so)
// globals: CDOTA_Ability_Medusa_SplitShot::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Medusa_SplitShot::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Medusa_SplitShot::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Medusa_SplitShot::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Medusa_SplitShot::CEntityInstanceEntityClass::DestructInstance  (line 37, @0x0000000002c8a310, libserver.so)  // inlines: Destruct<CDOTA_Ability_Medusa_SplitShot>
void __fastcall CDOTA_Ability_Medusa_SplitShot::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Medusa_SplitShot::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Medusa_SplitShot::CEntityInstanceEntityClass::FreeInstance  (line 37, @0x0000000002c8a330, libserver.so)
void __fastcall CDOTA_Ability_Medusa_SplitShot::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Medusa_SplitShot::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Medusa_SplitShot::CEntityInstanceEntityClass::CanAllocate  (line 37, @0x0000000002c8a350, libserver.so)
bool __fastcall CDOTA_Ability_Medusa_SplitShot::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Medusa_SplitShot::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Medusa_SplitShot::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 37, @0x0000000002c8a360, libserver.so)
// globals: CDOTA_Ability_Medusa_SplitShot::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Medusa_SplitShot::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Medusa_SplitShot::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Medusa_SplitShot::s_pSchemaBinding;
}


// CDOTA_Ability_Medusa_SplitShot::CEntityInstanceEntityClass::AllocateInstance  (line 37, @0x0000000002c902a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Medusa_SplitShot::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Medusa_SplitShot::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Medusa_SplitShot::CEntityInstanceEntityClass::ConstructInstance  (line 37, @0x0000000002c94fe0, libserver.so)  // inlines: CDOTA_Ability_Medusa_SplitShot, Construct<CDOTA_Ability_Medusa_SplitShot>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Medusa_SplitShot::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Medusa_SplitShot::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45D27D0;
  }
  return p;
}


// CDOTA_Ability_Medusa_SplitShot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 37, @0x0000000002ca28e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Medusa_SplitShot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Medusa_SplitShot::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Medusa_SplitShot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 37, @0x0000000002ca2900, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Medusa_SplitShot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Medusa_SplitShot::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Medusa_SplitShot::GetEntityClassInternal  (line 37, @0x0000000002cbae30, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "CDOTA_Ability_Medusa_SplitShot"
// globals: `guard variable for'CDOTA_Ability_Medusa_SplitShot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_SplitShotClass, CDOTA_Ability_Medusa_SplitShot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_SplitShotClass, __dso_handle, CDOTA_Ability_Medusa_SplitShot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Medusa_SplitShot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_SplitShotClassInfo, CDOTA_Ability_Medusa_SplitShot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_SplitShotClassInfo
CEntityClass *__cdecl CDOTA_Ability_Medusa_SplitShot::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Medusa_SplitShot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_SplitShotClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Medusa_SplitShot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_SplitShotClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Medusa_SplitShot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_SplitShotClass);
    CDOTA_Ability_Medusa_SplitShot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_SplitShotClass._vptr_CEntityClass = off_45D2750;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Medusa_SplitShot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_SplitShotClass);
    __cxa_atexit(
      CDOTA_Ability_Medusa_SplitShot::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Medusa_SplitShot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_SplitShotClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Medusa_SplitShotClass != 0 )
    return &CDOTA_Ability_Medusa_SplitShot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_SplitShotClass;
  if ( `guard variable for'CDOTA_Ability_Medusa_SplitShot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_SplitShotClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Medusa_SplitShot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_SplitShotClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Medusa_SplitShot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_SplitShotClassInfo,
      "CDOTA_Ability_Medusa_SplitShot",
      "medusa_split_shot",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Medusa_SplitShot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_SplitShotClassInfo);
  }
  CDOTA_Ability_Medusa_SplitShot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_SplitShotClass.m_pClassInfo = &CDOTA_Ability_Medusa_SplitShot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_SplitShotClassInfo;
  CDOTA_Ability_Medusa_SplitShot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_SplitShotClass.m_pBaseClassInfo = CDOTA_Ability_Medusa_SplitShot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_SplitShotClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Medusa_SplitShotClass = &CDOTA_Ability_Medusa_SplitShot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_SplitShotClass;
  CDOTA_Ability_Medusa_SplitShot::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_SplitShotClassInfo.m_pClass = &CDOTA_Ability_Medusa_SplitShot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_SplitShotClass;
  CDOTA_Ability_Medusa_SplitShot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_SplitShotClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Medusa_SplitShotClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Medusa_SplitShot::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_SplitShotClass;
}


// CDOTA_Ability_Medusa_SplitShot::ResetToggleOnRespawn  (line 43, @0x0000000002c8a370, libserver.so)
bool __fastcall CDOTA_Ability_Medusa_SplitShot::ResetToggleOnRespawn(CDOTA_Ability_Medusa_SplitShot *const this)
{
  return 0;
}


// CDOTA_Ability_Medusa_SplitShot::ProcsMagicStick  (line 47, @0x0000000002c8a380, libserver.so)
bool __fastcall CDOTA_Ability_Medusa_SplitShot::ProcsMagicStick(CDOTA_Ability_Medusa_SplitShot *const this)
{
  return 0;
}


// CDOTA_Ability_Medusa_SplitShot::YouForgotToImplementOrDeclareServerClass  (line 54, @0x0000000002c1d050, libserver.so)
int __fastcall CDOTA_Ability_Medusa_SplitShot::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Medusa_SplitShot *const this)
{
  return 0;
}


// CDOTA_Ability_Medusa_SplitShot::GetServerClass  (line 54, @0x0000000002c34eb0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Medusa_SplitShot::GetServerClass(CDOTA_Ability_Medusa_SplitShot *const this)
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


// CDOTA_Ability_Medusa_SplitShot::OnToggle  (line 62, @0x0000000002c24300, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::GetLifeState, CDOTABaseAbility::OnToggle, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTA_BaseNPC::RemoveModifierByName, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_medusa_split_shot"
void __fastcall CDOTA_Ability_Medusa_SplitShot::OnToggle(CDOTA_Ability_Medusa_SplitShot *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // r13
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC *v5; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CBaseEntity::GetLifeState(Caster) != LifeState_t::LIFE_DYING )
  {
    CDOTABaseAbility::OnToggle(this);
    if ( this->m_bToggleState.m_Value )
    {
      KeyValues::KeyValues(&kv, "modifier_medusa_split_shot");
      v3 = CDOTABaseAbility::GetCaster(this);
      v4 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v4, v3, this, "modifier_medusa_split_shot", &kv, 0);
      KeyValues::~KeyValues(&kv);
    }
    else
    {
      v5 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::RemoveModifierByName(v5, "modifier_medusa_split_shot");
    }
  }
}


// CDOTA_Ability_Medusa_SplitShot::OnUpgrade  (line 83, @0x0000000002c21640, libserver.so)
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTABaseAbility::OnUpgrade, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_medusa_split_shot"
void __fastcall CDOTA_Ability_Medusa_SplitShot::OnUpgrade(CDOTA_Ability_Medusa_SplitShot *const this)
{
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v3; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-28h]

  v5 = __readfsqword(0x28u);
  if ( this->m_bToggleState.m_Value )
  {
    KeyValues::KeyValues(&kv, "modifier_medusa_split_shot");
    Caster = CDOTABaseAbility::GetCaster(this);
    v3 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_medusa_split_shot", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
  CDOTABaseAbility::OnUpgrade(this);
}


// CDOTA_Ability_Medusa_SplitShot::OnUnStolen  (line 95, @0x0000000002c21770, libserver.so)
// calls: CDOTABaseAbility::OnUnStolen, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_medusa_split_shot"
void __fastcall CDOTA_Ability_Medusa_SplitShot::OnUnStolen(CDOTA_Ability_Medusa_SplitShot *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  CDOTABaseAbility::OnUnStolen(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_medusa_split_shot");
}


// CDOTA_Unit_Hero_Medusa::~CDOTA_Unit_Hero_Medusa  (line 109, @0x0000000002c9a1d0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Medusa::~CDOTA_Unit_Hero_Medusa(CDOTA_Unit_Hero_Medusa *const this)
{
  this->_vptr_IHandleEntity = &off_45D32D0;
  this->_vptr_INextBotEventResponder = &off_45D42B0;
  this->_vptr_CObstructionObject = &off_45D45E0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Medusa::~CDOTA_Unit_Hero_Medusa  (line 109, @0x0000000002c9a210, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Medusa
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Medusa::~CDOTA_Unit_Hero_Medusa(CDOTA_Unit_Hero_Medusa *const this)
{
  this->_vptr_IHandleEntity = &off_45D32D0;
  this->_vptr_INextBotEventResponder = &off_45D42B0;
  this->_vptr_CObstructionObject = &off_45D45E0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Medusa::Schema_DynamicBinding  (line 111, @0x0000000002c8a390, libserver.so)
// globals: CDOTA_Unit_Hero_Medusa::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Medusa::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Medusa *const this)
{
  return CDOTA_Unit_Hero_Medusa::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Medusa::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 111, @0x0000000002c8a3c0, libserver.so)
// globals: CDOTA_Unit_Hero_Medusa::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Medusa::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Medusa::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Medusa::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Medusa::CEntityInstanceEntityClass::DestructInstance  (line 111, @0x0000000002c8a3d0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Medusa>
void __fastcall CDOTA_Unit_Hero_Medusa::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Medusa::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Medusa::CEntityInstanceEntityClass::FreeInstance  (line 111, @0x0000000002c8a3f0, libserver.so)
void __fastcall CDOTA_Unit_Hero_Medusa::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Medusa::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Medusa::CEntityInstanceEntityClass::CanAllocate  (line 111, @0x0000000002c8a410, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Medusa::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Medusa::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Medusa::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 111, @0x0000000002c8a420, libserver.so)
// globals: CDOTA_Unit_Hero_Medusa::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Medusa::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Medusa::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Medusa::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Medusa::CEntityInstanceEntityClass::AllocateInstance  (line 111, @0x0000000002c902e0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Medusa::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Medusa::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Medusa::CEntityInstanceEntityClass::ConstructInstance  (line 111, @0x0000000002c94140, libserver.so)  // inlines: CDOTA_Unit_Hero_Medusa, Construct<CDOTA_Unit_Hero_Medusa>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Medusa::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Medusa::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_45D32D0;
    *(p + 236) = &off_45D42B0;
    *(p + 257) = &off_45D45E0;
  }
  return p;
}


// CDOTA_Unit_Hero_Medusa::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 111, @0x0000000002ca36d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Medusa::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Medusa::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Medusa::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 111, @0x0000000002ca3ab0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Medusa::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Medusa::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Medusa::GetEntityClassInternal  (line 111, @0x0000000002cbdd70, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "npc_dota_hero_medusa", "CDOTA_Unit_Hero_Medusa"
// globals: `guard variable for'CDOTA_Unit_Hero_Medusa::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MedusaClass, CDOTA_Unit_Hero_Medusa::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MedusaClass, __dso_handle, CDOTA_Unit_Hero_Medusa::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Medusa::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MedusaClassInfo, CDOTA_Unit_Hero_Medusa::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MedusaClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Medusa::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Medusa::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MedusaClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Medusa::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MedusaClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Medusa::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MedusaClass);
    CDOTA_Unit_Hero_Medusa::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MedusaClass._vptr_CEntityClass = off_45D3250;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Medusa::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MedusaClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Medusa::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Medusa::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MedusaClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_MedusaClass != 0 )
    return &CDOTA_Unit_Hero_Medusa::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MedusaClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Medusa::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MedusaClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Medusa::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MedusaClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Medusa::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MedusaClassInfo,
      "CDOTA_Unit_Hero_Medusa",
      "npc_dota_hero_medusa",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Medusa::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MedusaClassInfo);
  }
  CDOTA_Unit_Hero_Medusa::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MedusaClass.m_pClassInfo = &CDOTA_Unit_Hero_Medusa::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MedusaClassInfo;
  CDOTA_Unit_Hero_Medusa::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MedusaClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Medusa::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MedusaClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_MedusaClass = &CDOTA_Unit_Hero_Medusa::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MedusaClass;
  CDOTA_Unit_Hero_Medusa::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_MedusaClassInfo.m_pClass = &CDOTA_Unit_Hero_Medusa::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MedusaClass;
  CDOTA_Unit_Hero_Medusa::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MedusaClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_MedusaClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Medusa::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_MedusaClass;
}


// CDOTA_Unit_Hero_Medusa::YouForgotToImplementOrDeclareServerClass  (line 120, @0x0000000002c1d060, libserver.so)
int __fastcall CDOTA_Unit_Hero_Medusa::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Medusa *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Medusa::GetServerClass  (line 120, @0x0000000002c356b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Medusa::GetServerClass(CDOTA_Unit_Hero_Medusa *const this)
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


// CDOTA_Modifier_Medusa_SplitShot::~CDOTA_Modifier_Medusa_SplitShot  (line 131, @0x0000000002c91ea0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Medusa_SplitShot::~CDOTA_Modifier_Medusa_SplitShot(
        CDOTA_Modifier_Medusa_SplitShot *const this)
{
  this->_vptr_CDOTA_Buff = &off_45D4670;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Medusa_SplitShot::~CDOTA_Modifier_Medusa_SplitShot  (line 131, @0x0000000002c91ec0, libserver.so)  // inlines: ~CDOTA_Modifier_Medusa_SplitShot
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Medusa_SplitShot::~CDOTA_Modifier_Medusa_SplitShot(
        CDOTA_Modifier_Medusa_SplitShot *const this)
{
  this->_vptr_CDOTA_Buff = &off_45D4670;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Medusa_SplitShot::IsPurgable  (line 136, @0x0000000002c8a430, libserver.so)
bool __fastcall CDOTA_Modifier_Medusa_SplitShot::IsPurgable(CDOTA_Modifier_Medusa_SplitShot *const this)
{
  return 0;
}


// CDOTA_Modifier_Medusa_SplitShot::IsHidden  (line 137, @0x0000000002c8a440, libserver.so)
bool __fastcall CDOTA_Modifier_Medusa_SplitShot::IsHidden(CDOTA_Modifier_Medusa_SplitShot *const this)
{
  return 1;
}


// CDOTA_Modifier_Medusa_SplitShot::AllowIllusionDuplicate  (line 138, @0x0000000002c8a450, libserver.so)
bool __fastcall CDOTA_Modifier_Medusa_SplitShot::AllowIllusionDuplicate(CDOTA_Modifier_Medusa_SplitShot *const this)
{
  return 1;
}


// CDOTA_Modifier_Medusa_SplitShot::RemoveOnDeath  (line 140, @0x0000000002c8a460, libserver.so)
bool __fastcall CDOTA_Modifier_Medusa_SplitShot::RemoveOnDeath(CDOTA_Modifier_Medusa_SplitShot *const this)
{
  return 0;
}


// CDOTA_Modifier_Medusa_SplitShot::OnCreated  (line 163, @0x0000000002c726c0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "damage_modifier", "arrow_count"
void __fastcall CDOTA_Modifier_Medusa_SplitShot::OnCreated(CDOTA_Modifier_Medusa_SplitShot *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage_modifier = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_modifier", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->damage_modifier = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "range", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
LABEL_9:
      this->arrow_count = 0;
      v6 = CDOTA_Buff::GetAbility(this);
      if ( v6 != 0 )
        goto LABEL_5;
LABEL_10:
      this->projectile_speed = 0;
      goto LABEL_6;
    }
  }
  this->range = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_9;
LABEL_4:
  this->arrow_count = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "arrow_count", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_10;
LABEL_5:
  this->projectile_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "projectile_speed", -1, 0);
LABEL_6:
  this->m_nSplitShotBowFXIndex = -1;
}


// CDOTA_Modifier_Medusa_SplitShot::OnRefresh  (line 181, @0x0000000002c71d50, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "damage_modifier", "arrow_count"
void __fastcall CDOTA_Modifier_Medusa_SplitShot::OnRefresh(CDOTA_Modifier_Medusa_SplitShot *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->damage_modifier = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "damage_modifier", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->range = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->damage_modifier = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "range", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->arrow_count = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "arrow_count", -1, 0);
    return;
  }
LABEL_7:
  this->arrow_count = 0;
}


// CDOTA_Modifier_Medusa_SplitShot::DeclareFunctions  (line 190, @0x0000000002c1d070, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Medusa_SplitShot::OnAttack(CModifierParams const&), CDOTA_Modifier_Medusa_SplitShot::GetModifierDamageOutgoing_Percentage(CModifierParams const&), CDOTA_Modifier_Medusa_SplitShot::GetActivityTranslationModifiers(CModifierParams const&), CDOTA_Modifier_Medusa_SplitShot::GetAttackSound(CModifierParams const&)
void __fastcall CDOTA_Modifier_Medusa_SplitShot::DeclareFunctions(CDOTA_Modifier_Medusa_SplitShot *const this)
{
  this->m_Functions[120].__pfn = CDOTA_Modifier_Medusa_SplitShot::OnAttack;
  this->m_Functions[120].__delta = 0;
  this->m_Functions[28].__delta = 0;
  this->m_Functions[28].__pfn = CDOTA_Modifier_Medusa_SplitShot::GetModifierDamageOutgoing_Percentage;
  this->m_Functions[155].__pfn = CDOTA_Modifier_Medusa_SplitShot::GetActivityTranslationModifiers;
  this->m_Functions[155].__delta = 0;
  this->m_Functions[156].__pfn = CDOTA_Modifier_Medusa_SplitShot::GetAttackSound;
  this->m_Functions[156].__delta = 0;
}


// CDOTA_Modifier_Medusa_SplitShot::OnAttack  (line 199, @0x0000000002c76b30, libserver.so)  // inlines: AttackerNPC, CEntityHandle, CHandle, CUtlMemory, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetRangedProjectileName, GetSerialNumber, GetTeamNumber, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, Set, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::FindAndRemove, CDOTA_BaseNPC::CreateAttackRecord, CDOTA_BaseNPC::PerformAttack, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Medusa_SplitShot::OnAttack(
        CDOTA_Modifier_Medusa_SplitShot *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *v4; // rax
  __m128i v6; // xmm2
  __m128i v7; // xmm1
  float v8; // ebx
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_BaseNPC *v10; // rax
  const Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v12; // rax
  CEntityIdentity *m_pEntity; // rax
  __int16 v14; // cx
  __int64 v15; // r15
  int v16; // ebx
  CHandle<CBaseEntity> *v17; // rax
  uint32 m_Index; // ecx
  __int16 v19; // dx
  CEntityIdentity *v20; // rax
  CBaseEntity *v21; // r14
  CEntityIdentity *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  CDOTA_AttackRecord *AttackRecord; // r13
  CDOTA_BaseNPC *v25; // rax
  CDOTA_BaseNPC *m_pInstance; // rax
  CDOTA_BaseNPC *pTarget; // [rsp+20h] [rbp-70h]
  CHandle<CBaseEntity> src; // [rsp+30h] [rbp-60h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-50h] BYREF

  v4 = CEntityHandle::operator CEntityInstance *(&params->hattacker);
  if ( v4 != 0 && v4->m_bIsDOTANPC && v4 == CDOTA_Buff::GetParent(this) && !params->bNoCooldown )
  {
    pTarget = CEntityHandle::operator CEntityInstance *(&params->htarget);
    if ( pTarget != 0 && pTarget->m_bIsDOTANPC )
    {
      entities.m_Size = 0;
      *v6.m128i_i32 = this->range;
      entities.m_Memory.m_pMemory = 0;
      entities.m_Memory.m_nAllocationCount = 0;
      entities.m_Memory.m_nGrowSize = 0;
      v7 = v6;
      *v7.m128i_i32 = *v6.m128i_i32 + 24.0;
      v8 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
      Caster = CDOTA_Buff::GetCaster(this);
      v10 = CDOTA_Buff::GetCaster(this);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
      v12 = CDOTA_Buff::GetCaster(this);
      FindUnitsInRadius(v12->m_iTeamNum.m_Value, AbsOrigin, Caster, v8, &entities, 2, 19, 541072, 1, 0);
      src.m_Index = -1;
      m_pEntity = pTarget->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v14 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        src.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v14 & 0x7FFF;
      }
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::FindAndRemove(&entities, &src);
      if ( this->arrow_count > 0 && entities.m_Size > 0 )
      {
        v15 = 0;
        v16 = 0;
        while ( 1 )
        {
          v17 = &entities.m_Memory.m_pMemory[v15];
          m_Index = entities.m_Memory.m_pMemory[v15].m_Index;
          if ( m_Index + 2 <= 1 )
            break;
          v19 = v17->m_Index;
          v20 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v17->m_Index) >> 9) & 0x3F];
          if ( v20 == 0 )
            break;
          v21 = 0;
          v22 = &v20[v19 & 0x1FF];
          if ( v22 == 0 )
            goto LABEL_20;
          if ( m_Index != v22->m_EHandle.m_Index )
            goto LABEL_20;
          m_pInstance = v22->m_pInstance;
          if ( m_pInstance == 0 || !m_pInstance->m_bIsDOTANPC )
            goto LABEL_20;
          if ( pTarget != m_pInstance )
          {
            v21 = m_pInstance;
LABEL_20:
            v23 = CDOTA_Buff::GetCaster(this);
            AttackRecord = CDOTA_BaseNPC::CreateAttackRecord(v23, v21, 0, 0, 0, 0, 0);
            if ( AttackRecord != 0 )
            {
              AttackRecord->m_iProjectileSpeed = this->projectile_speed;
              AttackRecord->m_iszAutoAttackRangedParticle.u.m_Id = CDOTA_Buff::GetCaster(this)->m_iszAutoAttackRangedParticle.u.m_Id;
              v25 = CDOTA_Buff::GetCaster(this);
              CDOTA_BaseNPC::PerformAttack(v25, AttackRecord, v21, 1, 0, 1, 0);
            }
          }
          if ( this->arrow_count > ++v16 )
          {
            ++v15;
            if ( entities.m_Size > v16 )
              continue;
          }
          goto LABEL_23;
        }
        v21 = 0;
        goto LABEL_20;
      }
LABEL_23:
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Medusa_SplitShot::GetActivityTranslationModifiers  (line 239, @0x0000000002c1d0e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Medusa_SplitShot::GetActivityTranslationModifiers(
        CDOTA_Modifier_Medusa_SplitShot *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "split_shot";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_Medusa_SplitShot::GetModifierDamageOutgoing_Percentage  (line 245, @0x0000000002c1d100, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Medusa_SplitShot::GetModifierDamageOutgoing_Percentage(
        CDOTA_Modifier_Medusa_SplitShot *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->damage_modifier;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Medusa_SplitShot::GetAttackSound  (line 252, @0x0000000002c2d070, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster
// strings: "Hero_Medusa.AttackSplit"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Medusa_SplitShot::GetAttackSound(
        CDOTA_Modifier_Medusa_SplitShot *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v3; // rdx
  CEntityIdentity *v4; // rdx
  CEntityInstance *m_pInstance; // rax
  char m_CScriptComponent_high; // bl
  bool v8; // zf
  ModifierVariant_t result; // 0:rax.16

  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 <= 1 )
    return 2uLL;
  v3 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
  if ( v3 == 0 )
    return 2uLL;
  v4 = &v3[params->htarget.m_Index & 0x1FF];
  if ( v4 == 0 )
    return 2uLL;
  if ( m_Index != v4->m_EHandle.m_Index )
    return 2uLL;
  m_pInstance = v4->m_pInstance;
  if ( v4->m_pInstance == 0 || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
    return 2uLL;
  m_CScriptComponent_high = HIBYTE(m_pInstance[7].m_CScriptComponent);
  v8 = m_CScriptComponent_high == CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value;
  *&result.m_eType = 2;
  if ( v8 )
    result.m_szVal = 0;
  else
    result.m_szVal = "Hero_Medusa.AttackSplit";
  return result;
}


// CDOTA_Modifier_Medusa_SplitShot::OnDestroy  (line 263, @0x0000000002c1d120, libserver.so)
void __fastcall CDOTA_Modifier_Medusa_SplitShot::OnDestroy(CDOTA_Modifier_Medusa_SplitShot *const this)
{
  ;
}


// CDOTA_Ability_Medusa_MysticSnake::~CDOTA_Ability_Medusa_MysticSnake  (line 280, @0x0000000002cb6c60, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Medusa_MysticSnake::~CDOTA_Ability_Medusa_MysticSnake(
        CDOTA_Ability_Medusa_MysticSnake *const this)
{
  this->_vptr_IHandleEntity = &off_45D49D0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory),
        (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
    CDOTABaseAbility::~CDOTABaseAbility(this);
  }
}


// CDOTA_Ability_Medusa_MysticSnake::~CDOTA_Ability_Medusa_MysticSnake  (line 280, @0x0000000002cb70d0, libserver.so)  // inlines: Purge, ~CDOTA_Ability_Medusa_MysticSnake, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Ability_Medusa_MysticSnake::~CDOTA_Ability_Medusa_MysticSnake(
        CDOTA_Ability_Medusa_MysticSnake *const this)
{
  this->_vptr_IHandleEntity = &off_45D49D0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
    if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
  }
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Medusa_MysticSnake::Schema_DynamicBinding  (line 282, @0x0000000002c8a470, libserver.so)
// globals: CDOTA_Ability_Medusa_MysticSnake::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Medusa_MysticSnake::Schema_DynamicBinding(
        const CDOTA_Ability_Medusa_MysticSnake *const this)
{
  return CDOTA_Ability_Medusa_MysticSnake::s_pSchemaBinding;
}


// CDOTA_Ability_Medusa_MysticSnake::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 282, @0x0000000002c8a480, libserver.so)
// globals: CDOTA_Ability_Medusa_MysticSnake::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Medusa_MysticSnake::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Medusa_MysticSnake::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Medusa_MysticSnake::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Medusa_MysticSnake::CEntityInstanceEntityClass::DestructInstance  (line 282, @0x0000000002c8a490, libserver.so)  // inlines: Destruct<CDOTA_Ability_Medusa_MysticSnake>
void __fastcall CDOTA_Ability_Medusa_MysticSnake::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Medusa_MysticSnake::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Medusa_MysticSnake::CEntityInstanceEntityClass::FreeInstance  (line 282, @0x0000000002c8a4b0, libserver.so)
void __fastcall CDOTA_Ability_Medusa_MysticSnake::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Medusa_MysticSnake::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Medusa_MysticSnake::CEntityInstanceEntityClass::CanAllocate  (line 282, @0x0000000002c8a4d0, libserver.so)
bool __fastcall CDOTA_Ability_Medusa_MysticSnake::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Medusa_MysticSnake::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Medusa_MysticSnake::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 282, @0x0000000002c8a4e0, libserver.so)
// globals: CDOTA_Ability_Medusa_MysticSnake::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Medusa_MysticSnake::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Medusa_MysticSnake::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Medusa_MysticSnake::s_pSchemaBinding;
}


// CDOTA_Ability_Medusa_MysticSnake::CEntityInstanceEntityClass::AllocateInstance  (line 282, @0x0000000002c90320, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Medusa_MysticSnake::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Medusa_MysticSnake::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 984);
  memset(v1, 0, 0x3D8u);
  return v1;
}


// CDOTA_Ability_Medusa_MysticSnake::CEntityInstanceEntityClass::ConstructInstance  (line 282, @0x0000000002ca0090, libserver.so)  // inlines: CDOTA_Ability_Medusa_MysticSnake, CUtlMemory, CUtlVector, CUtlVectorBase, Construct<CDOTA_Ability_Medusa_MysticSnake>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Medusa_MysticSnake::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Medusa_MysticSnake::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 240) = 0;
    *p = &off_45D49D0;
    *(p + 121) = 0;
    *(p + 244) = 0;
    *(p + 245) = 0;
  }
  return p;
}


// CDOTA_Ability_Medusa_MysticSnake::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 282, @0x0000000002ca2930, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Medusa_MysticSnake::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Medusa_MysticSnake::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Medusa_MysticSnake::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 282, @0x0000000002ca2950, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Medusa_MysticSnake::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Medusa_MysticSnake::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal  (line 282, @0x0000000002cc3f70, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "medusa_mystic_snake", "CDOTA_Ability_Medusa_MysticSnake"
// globals: `guard variable for'CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass, CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Medusa_MysticSnake::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClassInfo, CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClassInfo
CEntityClass *__cdecl CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass) != 0 )
  {
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_pClassInfo = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_flags = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_pInputs = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_nInputCount = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_pOutputs = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_nOutputCount = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_pGameClass = 0;
    CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass._vptr_CEntityClass = off_45D4950;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass);
    __cxa_atexit(
      CDOTA_Ability_Medusa_MysticSnake::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Medusa_MysticSnakeClass != 0 )
    return &CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass;
  if ( `guard variable for'CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClassInfo,
      "CDOTA_Ability_Medusa_MysticSnake",
      "medusa_mystic_snake",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClassInfo);
  }
  CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_pClassInfo = &CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClassInfo;
  CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_pBaseClassInfo = CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Medusa_MysticSnakeClass = &CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass;
  CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClassInfo.m_pClass = &CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass;
  CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Medusa_MysticSnakeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Medusa_MysticSnake::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_MysticSnakeClass;
}


// CDOTA_Ability_Medusa_MysticSnake::OnSpellStart  (line 317, @0x0000000002c60bf0, libserver.so)  // inlines: CEntityHandle, CHandle, Color, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, Set, operator=, sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorTarget, CDOTA_ProjectileManager::CreateTrackingProjectile, DOTA_EmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, __stack_chk_fail
// strings: "initial_speed", "snake_damage", "snake_mana_steal", "snake_scale", "snake_jumps", "return_speed" (11 total)
void __fastcall CDOTA_Ability_Medusa_MysticSnake::OnSpellStart(CDOTA_Ability_Medusa_MysticSnake *const this)
{
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  int initial_speed; // eax
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v7; // cx
  CBaseEntity *CursorTarget; // rax
  CEntityIdentity *v9; // rdx
  __int16 v10; // cx
  int m_Value; // eax
  CDOTA_BaseNPC *v12; // rax
  float snake_damage; // xmm0_4
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_BaseNPC *v16; // r14
  CDOTA_ParticleManager *v17; // rax
  __int64 v18; // r13
  CDOTA_BaseNPC *v19; // rbx
  CDOTA_ParticleManager *v20; // rax
  CDOTA_ParticleManager *v21; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-94h]
  sTrackingProjectileCreateInfo info; // [rsp+10h] [rbp-90h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-28h]
  Vector v25; // 0:xmm0_8.8,8:xmm1_4.4

  v24 = __readfsqword(0x28u);
  this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
  this->initial_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "initial_speed", -1, 0);
  this->snake_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "snake_damage", -1, 0);
  this->snake_mana_steal = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "snake_mana_steal", -1, 0);
  this->snake_scale = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "snake_scale", -1, 0);
  this->snake_jumps = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "snake_jumps", -1, 0);
  info.hSource.m_Index = -1;
  this->return_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "return_speed", -1, 0);
  info.hTarget.m_Index = -1;
  info.colorGemColor = 0;
  info.pAttackRecord = 0;
  info.iSourceAttachment = 1;
  info.bProvidesVision = 0;
  info.vSourceLoc.x = vec3_origin.x;
  y = vec3_origin.y;
  info.iVisionTeamNumber = -1;
  info.vSourceLoc.y = y;
  z = vec3_origin.z;
  info.pszEffectName = "particles/units/heroes/hero_medusa/medusa_mystic_snake_projectile_initial.vpcf";
  initial_speed = this->initial_speed;
  info.vSourceLoc.z = z;
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
  info.iMoveSpeed = initial_speed;
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( Caster != 0 && (m_pEntity = Caster->m_pEntity) != 0 )
  {
    v7 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v7 & 0x7FFF;
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    if ( CursorTarget == 0 )
      goto LABEL_13;
  }
  else
  {
    info.hSource.m_Index = -1;
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    if ( CursorTarget == 0 )
      goto LABEL_13;
  }
  v9 = CursorTarget->m_pEntity;
  if ( v9 == 0 )
  {
LABEL_13:
    info.hTarget.m_Index = -1;
    goto LABEL_10;
  }
  if ( v9->m_EHandle.m_Index == -1 )
    v10 = 0x7FFF;
  else
    v10 = v9->m_EHandle.m_Index & 0x7FFF;
  info.hTarget.m_Index = (((v9->m_EHandle.m_Index >> 15) - (v9->m_flags & 1)) << 15) | v10 & 0x7FFF;
LABEL_10:
  info.bDodgeable = 0;
  info.iSourceAttachment = 2;
  info.bProvidesVision = 1;
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  info.iVisionRadius = 300;
  info.iVisionTeamNumber = m_Value;
  CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
  v12 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Medusa.MysticSnake.Cast", v12);
  snake_damage = this->snake_damage;
  this->m_iCurJumpCount = 0;
  this->m_iTotalMana = 0;
  this->m_flDamage = snake_damage;
  this->m_flMana = this->snake_mana_steal;
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_medusa/medusa_mystic_snake_cast.vpcf",
               2,
               0,
               0,
               0);
  v16 = CDOTABaseAbility::GetCaster(this);
  v17 = GetParticleManager();
  v18 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(v17, Particle, 0, v16, 5, "attach_attack1", vec3_invalid, 1);
  v19 = CDOTABaseAbility::GetCaster(this);
  v20 = GetParticleManager();
  *&v25.x = v18;
  v25.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v20, Particle, 1, v19, 5, "attach_attack2", v25, 1);
  v21 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v21, Particle);
}


// CDOTA_Ability_Medusa_MysticSnake::OnProjectileHit  (line 358, @0x0000000002c7c6d0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CopyConstruct<CHandle<CBaseEntity> >, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetMana, GetSerialNumber, GrowMemory, InState, IndexToIdentity, IsInvulnerable, IsValid, LookupEntity, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*, operator[]
// calls: CDOTABaseAbility::GetCaster, CDOTA_Ability_Medusa_MysticSnake::LaunchNextProjectile, EconEntity_OnOwnerKillEaterEvent, CDOTA_BaseNPC::GiveMana, SendOverheadEventMessage, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, DOTA_EmitSound, CDOTA_BaseNPC::IsInvisibleTo, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTA_BaseNPC::ReduceMana, CDOTA_CombatLog::AddManaDamageEvent, CDOTA_BaseNPC::FindModifierByName (15 total)
// strings: "Hero_Medusa.MysticSnake.Return", "modifier_medusa_stone_gaze_stone", "Hero_Medusa.MysticSnake.Target"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_Medusa_MysticSnake::OnProjectileHit(
        CDOTA_Ability_Medusa_MysticSnake *const this,
        _DWORD *hTarget,
        const Vector *const vLocation)
{
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v7; // r12
  int m_iTotalMana; // r13d
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC_Hero *v11; // rdi
  int v12; // r13d
  CDOTA_BaseNPC *v13; // rax
  CDOTAPlayer *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  CEntityInstance *m_pInstance; // r12
  CDOTA_BaseNPC *v17; // rax
  float v18; // xmm1_4
  int v19; // r13d
  CDOTA_BaseNPC *v20; // rax
  int snake_damage; // ecx
  CEntityIdentity *m_pEntity; // rax
  __int16 v23; // cx
  __int64 m_Size; // r13
  int v25; // eax
  CHandle<CBaseEntity> *v26; // rax
  float flManaSteal; // [rsp+Ch] [rbp-34h]
  float flManaSteala; // [rsp+Ch] [rbp-34h]
  int v29; // [rsp+10h] [rbp-30h]

  if ( (*hTarget + 2) > 1
    && (v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*hTarget >> 9) & 0x3F]) != 0
    && (v5 = &v4[*hTarget & 0x1FF]) != 0
    && *hTarget == v5->m_EHandle.m_Index
    && (m_pInstance = v5->m_pInstance, v5->m_pInstance != 0)
    && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
  {
    if ( LOBYTE(m_pInstance[71]._vptr_IHandleEntity) != 0 || (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 1) != 0 )
    {
LABEL_36:
      Caster = m_pInstance;
      goto LABEL_6;
    }
    Caster = CDOTABaseAbility::GetCaster(this);
    if ( Caster != m_pInstance )
    {
      v17 = CDOTABaseAbility::GetCaster(this);
      if ( CDOTA_BaseNPC::IsInvisibleTo(m_pInstance, v17) )
      {
        CDOTA_Ability_Medusa_MysticSnake::LaunchNextProjectile(this, m_pInstance);
        return 1;
      }
      if ( CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, this, this->m_iCurJumpCount == 0) )
      {
        CDOTA_Ability_Medusa_MysticSnake::LaunchReturnProjectile(this, m_pInstance);
        return 1;
      }
      if ( *&m_pInstance[44].m_worldGroupId.m_nHashCode > 0.0
        && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance) != 0
        && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
      {
        v18 = (this->snake_mana_steal * *&m_pInstance[44].m_worldGroupId.m_nHashCode) / 100.0;
        flManaSteal = fminf(*&m_pInstance[44].m_iszPrivateVScripts.u.m_Id, v18);
        CDOTA_BaseNPC::ReduceMana(m_pInstance, flManaSteal, v18);
        CDOTA_CombatLog::AddManaDamageEvent(&g_DOTACombatLog, this, m_pInstance, flManaSteal);
        this->m_iTotalMana = (this->m_iTotalMana + flManaSteal);
      }
      v19 = -(CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_medusa_stone_gaze_stone", 0) == 0);
      flManaSteala = this->m_flDamage;
      v20 = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(v20, m_pInstance, this, flManaSteala, (v19 & 0xFFFFFFFE) + 4, 0);
      snake_damage = this->snake_damage;
      ++this->m_iCurJumpCount;
      v29 = -1;
      this->m_flDamage = (this->snake_scale * snake_damage / 100) + this->m_flDamage;
      m_pEntity = m_pInstance->m_pEntity;
      if ( m_pEntity != 0 )
      {
        v23 = 0x7FFF;
        if ( m_pEntity->m_EHandle.m_Index != -1 )
          v23 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
        v29 = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v23 & 0x7FFF;
      }
      m_Size = this->m_hHitEntities.m_Size;
      v25 = this->m_hHitEntities.m_Size;
      if ( m_Size == this->m_hHitEntities.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hHitEntities.m_Memory, 1);
        v25 = this->m_hHitEntities.m_Size;
      }
      this->m_hHitEntities.m_Size = v25 + 1;
      v26 = &this->m_hHitEntities.m_Memory.m_pMemory[m_Size];
      if ( v26 != 0 )
        v26->m_Index = v29;
      DOTA_EmitSound(8, "Hero_Medusa.MysticSnake.Target", m_pInstance);
      goto LABEL_36;
    }
  }
  else
  {
    Caster = 0;
  }
LABEL_6:
  v7 = CDOTABaseAbility::GetCaster(this);
  if ( v7 != Caster )
  {
    CDOTA_Ability_Medusa_MysticSnake::LaunchNextProjectile(this, Caster);
    return 1;
  }
  m_iTotalMana = this->m_iTotalMana;
  if ( m_iTotalMana > 0 )
  {
    v10 = CDOTABaseAbility::GetCaster(this);
    if ( v10 != 0 && (v10->m_iUnitType & 1) != 0 )
      v11 = v10;
    else
      v11 = 0;
    EconEntity_OnOwnerKillEaterEvent(
      v11,
      0,
      kill_eater_event_t::kKillEaterEventType_Medusa_MysticSnakeManaStolen,
      m_iTotalMana,
      INVALID_ITEM_DEF_INDEX);
    m_iTotalMana = this->m_iTotalMana;
  }
  CDOTA_BaseNPC::GiveMana(v7, m_iTotalMana, 0, 1);
  v12 = this->m_iTotalMana;
  v13 = CDOTABaseAbility::GetCaster(this);
  v14 = (*(v13->_vptr_IHandleEntity + 413))(v13);
  SendOverheadEventMessage(v14, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_MANA_ADD, v7, v12, 0);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  v15 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(8, "Hero_Medusa.MysticSnake.Return", v15);
  return 1;
}


// CDOTA_Ability_Medusa_MysticSnake::LaunchNextProjectile  (line 429, @0x0000000002c78e50, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Color, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, HasElement, IndexToIdentity, IsValid, LookupEntity, Purge, Set, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=, sTrackingProjectileCreateInfo, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Ability_Medusa_MysticSnake::LaunchReturnProjectile, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Remove, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, CDOTA_ProjectileManager::CreateTrackingProjectile, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, __stack_chk_fail, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// callers: CDOTA_Ability_Medusa_MysticSnake::OnProjectileHit
// strings: "particles/units/heroes/hero_medusa/medusa_mystic_snake_projectile.vpcf", "particles/units/heroes/hero_medusa/medusa_mystic_snake_projectile_return.vpcf"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Medusa_MysticSnake::LaunchNextProjectile(
        CDOTA_Ability_Medusa_MysticSnake *const this,
        CDOTA_BaseNPC *pTarget)
{
  float radius; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  const Vector *AbsOrigin; // r15
  CDOTA_BaseNPC *v7; // rax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  CEntityInstance *m_pInstance; // r13
  CEntityIdentity *m_pEntity; // rdx
  int v12; // eax
  __int16 v13; // cx
  CEntityIdentity *v14; // rdx
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  int initial_speed; // eax
  int v18; // eax
  __int16 v19; // cx
  CEntityIdentity *v20; // rax
  int v21; // edx
  __int16 v22; // cx
  int m_Value; // eax
  CEntityIdentity *v24; // rdx
  vec_t v25; // xmm0_4
  vec_t v26; // xmm0_4
  int return_speed; // eax
  int v28; // eax
  __int16 v29; // cx
  CDOTA_BaseNPC *v30; // rax
  CEntityIdentity *v31; // rdx
  int v32; // eax
  __int16 v33; // cx
  float flRadius; // [rsp+18h] [rbp-D8h]
  CHandle<CBaseEntity> src; // [rsp+20h] [rbp-D0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+30h] [rbp-C0h] BYREF
  sTrackingProjectileCreateInfo info; // [rsp+50h] [rbp-A0h] BYREF
  unsigned __int64 v38; // [rsp+B8h] [rbp-38h]

  v38 = __readfsqword(0x28u);
  if ( pTarget != 0 && this->m_iCurJumpCount < this->snake_jumps )
  {
    radius = this->radius;
    hEntities.m_Size = 0;
    hEntities.m_Memory.m_pMemory = 0;
    hEntities.m_Memory.m_nAllocationCount = 0;
    hEntities.m_Memory.m_nGrowSize = 0;
    flRadius = radius;
    Caster = CDOTABaseAbility::GetCaster(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(pTarget);
    v7 = CDOTABaseAbility::GetCaster(this);
    FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, Caster, flRadius, &hEntities, 2, 19, 272, 1, 0);
    while ( hEntities.m_Size > 0 )
    {
      if ( hEntities.m_Memory.m_pMemory->m_Index + 2 > 1 )
      {
        v8 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(hEntities.m_Memory.m_pMemory->m_Index >> 9) & 0x3F];
        if ( v8 != 0 )
        {
          v9 = &v8[hEntities.m_Memory.m_pMemory->m_Index & 0x1FF];
          if ( v9 != 0 && hEntities.m_Memory.m_pMemory->m_Index == v9->m_EHandle.m_Index )
          {
            m_pInstance = v9->m_pInstance;
            if ( v9->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
            {
              src.m_Index = -1;
              m_pEntity = m_pInstance->m_pEntity;
              if ( m_pEntity != 0 )
              {
                v12 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                v13 = 0x7FFF;
                if ( m_pEntity->m_EHandle.m_Index != -1 )
                  v13 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                LOWORD(src.m_Index) = v13 | src.m_Index & 0x8000;
                src.m_Index = (v12 << 15) | src.m_Index & 0x7FFF;
              }
              if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                     &this->m_hHitEntities,
                     &src) < 0 )
              {
                info.bProvidesVision = 0;
                v14 = pTarget->m_pEntity;
                info.hTarget.m_Index = -1;
                info.hSource.m_Index = -1;
                info.colorGemColor = 0;
                info.iSourceAttachment = 1;
                info.iVisionTeamNumber = -1;
                info.vSourceLoc.x = vec3_origin.x;
                y = vec3_origin.y;
                info.pAttackRecord = 0;
                info.vSourceLoc.y = y;
                z = vec3_origin.z;
                info.pszEffectName = "particles/units/heroes/hero_medusa/medusa_mystic_snake_projectile.vpcf";
                initial_speed = this->initial_speed;
                info.vSourceLoc.z = z;
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
                info.iMoveSpeed = initial_speed;
                if ( v14 != 0 )
                {
                  v18 = (v14->m_EHandle.m_Index >> 15) - (v14->m_flags & 1);
                  v19 = 0x7FFF;
                  if ( v14->m_EHandle.m_Index != -1 )
                    v19 = v14->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(info.hSource.m_Index) = v19 | info.hSource.m_Index & 0x8000;
                  info.hSource.m_Index = (v18 << 15) | info.hSource.m_Index & 0x7FFF;
                }
                v20 = m_pInstance->m_pEntity;
                if ( v20 != 0 )
                {
                  v21 = (v20->m_EHandle.m_Index >> 15) - (v20->m_flags & 1);
                  v22 = 0x7FFF;
                  if ( v20->m_EHandle.m_Index != -1 )
                    v22 = v20->m_EHandle.m_Index & 0x7FFF;
                  LOWORD(info.hTarget.m_Index) = v22 | info.hTarget.m_Index & 0x8000;
                  info.hTarget.m_Index = (v21 << 15) | info.hTarget.m_Index & 0x7FFF;
                }
                goto LABEL_27;
              }
            }
          }
        }
      }
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Remove(&hEntities, 0);
    }
    if ( hEntities.m_Size != 0 )
    {
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
      goto LABEL_3;
    }
    info.bProvidesVision = 0;
    v24 = pTarget->m_pEntity;
    info.hTarget.m_Index = -1;
    info.hSource.m_Index = -1;
    info.colorGemColor = 0;
    info.iSourceAttachment = 1;
    info.iVisionTeamNumber = -1;
    info.vSourceLoc.x = vec3_origin.x;
    v25 = vec3_origin.y;
    info.pAttackRecord = 0;
    info.vSourceLoc.y = v25;
    v26 = vec3_origin.z;
    info.pszEffectName = "particles/units/heroes/hero_medusa/medusa_mystic_snake_projectile_return.vpcf";
    return_speed = this->return_speed;
    info.vSourceLoc.z = v26;
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
    info.iMoveSpeed = return_speed;
    if ( v24 != 0 )
    {
      v28 = (v24->m_EHandle.m_Index >> 15) - (v24->m_flags & 1);
      v29 = 0x7FFF;
      if ( v24->m_EHandle.m_Index != -1 )
        v29 = v24->m_EHandle.m_Index & 0x7FFF;
      LOWORD(info.hSource.m_Index) = v29 | info.hSource.m_Index & 0x8000;
      info.hSource.m_Index = (v28 << 15) | info.hSource.m_Index & 0x7FFF;
    }
    v30 = CDOTABaseAbility::GetCaster(this);
    if ( v30 != 0 && (v31 = v30->m_pEntity) != 0 )
    {
      v32 = (v31->m_EHandle.m_Index >> 15) - (v31->m_flags & 1);
      v33 = 0x7FFF;
      if ( v31->m_EHandle.m_Index != -1 )
        v33 = v31->m_EHandle.m_Index & 0x7FFF;
      LOWORD(info.hTarget.m_Index) = v33 | info.hTarget.m_Index & 0x8000;
      info.hTarget.m_Index = (v32 << 15) | info.hTarget.m_Index & 0x7FFF;
    }
    else
    {
      info.hTarget.m_Index = -1;
    }
LABEL_27:
    info.bDodgeable = 0;
    info.iSourceAttachment = 3;
    info.bProvidesVision = 1;
    m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
    info.iVisionRadius = 300;
    info.iVisionTeamNumber = m_Value;
    CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEntities);
    if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
    {
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
      if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
    }
  }
  else
  {
LABEL_3:
    CDOTA_Ability_Medusa_MysticSnake::LaunchReturnProjectile(this, pTarget);
  }
}


// CDOTA_Ability_Medusa_MysticSnake::LaunchReturnProjectile  (line 505, @0x0000000002c44a00, libserver.so)  // inlines: CEntityHandle, CHandle, Color, GetEHandle, GetEntryIndex, GetSerialNumber, GetTeamNumber, Set, operator=, sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetCaster, CDOTA_ProjectileManager::CreateTrackingProjectile, __stack_chk_fail
// callers: CDOTA_Ability_Medusa_MysticSnake::LaunchNextProjectile, CDOTA_Ability_Medusa_MysticSnake::OnProjectileHit
// strings: "particles/units/heroes/hero_medusa/medusa_mystic_snake_projectile_return.vpcf"
void __fastcall CDOTA_Ability_Medusa_MysticSnake::LaunchReturnProjectile(
        CDOTA_Ability_Medusa_MysticSnake *const this,
        CDOTA_BaseNPC *pSource)
{
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  int return_speed; // eax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v7; // cx
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *v9; // rdx
  __int16 v10; // cx
  int m_Value; // eax
  sTrackingProjectileCreateInfo info; // [rsp+0h] [rbp-80h] BYREF
  unsigned __int64 v13; // [rsp+68h] [rbp-18h]

  info.hSource.m_Index = -1;
  v13 = __readfsqword(0x28u);
  info.bProvidesVision = 0;
  info.hTarget.m_Index = -1;
  info.colorGemColor = 0;
  info.pAttackRecord = 0;
  info.iSourceAttachment = 1;
  info.iVisionTeamNumber = -1;
  info.iVisionRadius = 0;
  info.vSourceLoc.x = vec3_origin.x;
  y = vec3_origin.y;
  info.bDrawsOnMinimap = 0;
  info.vSourceLoc.y = y;
  z = vec3_origin.z;
  info.pszEffectName = "particles/units/heroes/hero_medusa/medusa_mystic_snake_projectile_return.vpcf";
  return_speed = this->return_speed;
  info.vSourceLoc.z = z;
  info.bDodgeable = 1;
  info.bIsAttack = 0;
  info.bVisibleToEnemies = 1;
  info.pKVExtraData = 0;
  info.bReplaceExisting = 0;
  info.flExpireTime = 0.0;
  info.flMaxImpactTime = 0.0;
  info.bServerOnly = 0;
  info.pAbility = this;
  info.iMoveSpeed = return_speed;
  if ( pSource != 0 )
  {
    m_pEntity = pSource->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v7 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v7 & 0x7FFF;
    }
  }
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( Caster != 0 && (v9 = Caster->m_pEntity) != 0 )
  {
    if ( v9->m_EHandle.m_Index == -1 )
      v10 = 0x7FFF;
    else
      v10 = v9->m_EHandle.m_Index & 0x7FFF;
    info.hTarget.m_Index = (((v9->m_EHandle.m_Index >> 15) - (v9->m_flags & 1)) << 15) | v10 & 0x7FFF;
  }
  else
  {
    info.hTarget.m_Index = -1;
  }
  info.bDodgeable = 0;
  info.iSourceAttachment = 3;
  info.bProvidesVision = 1;
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  info.iVisionRadius = 300;
  info.iVisionTeamNumber = m_Value;
  CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
}


// CDOTA_Ability_Medusa_MysticSnake::GetAbilityDamageToTargetOverInterval  (line 526, @0x0000000002c633c0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "snake_damage"
__int64 __fastcall CDOTA_Ability_Medusa_MysticSnake::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Medusa_MysticSnake *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "snake_damage", -1, 0);
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Ability_Medusa_ManaShield::~CDOTA_Ability_Medusa_ManaShield  (line 540, @0x0000000002c98d10, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Medusa_ManaShield::~CDOTA_Ability_Medusa_ManaShield(
        CDOTA_Ability_Medusa_ManaShield *const this)
{
  this->_vptr_IHandleEntity = &off_45D54D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Medusa_ManaShield::~CDOTA_Ability_Medusa_ManaShield  (line 540, @0x0000000002c98d30, libserver.so)  // inlines: ~CDOTA_Ability_Medusa_ManaShield
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Medusa_ManaShield::~CDOTA_Ability_Medusa_ManaShield(
        CDOTA_Ability_Medusa_ManaShield *const this)
{
  this->_vptr_IHandleEntity = &off_45D54D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Medusa_ManaShield::Schema_DynamicBinding  (line 542, @0x0000000002c8a4f0, libserver.so)
// globals: CDOTA_Ability_Medusa_ManaShield::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Medusa_ManaShield::Schema_DynamicBinding(
        const CDOTA_Ability_Medusa_ManaShield *const this)
{
  return CDOTA_Ability_Medusa_ManaShield::s_pSchemaBinding;
}


// CDOTA_Ability_Medusa_ManaShield::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 542, @0x0000000002c8a500, libserver.so)
// globals: CDOTA_Ability_Medusa_ManaShield::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Medusa_ManaShield::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Medusa_ManaShield::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Medusa_ManaShield::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Medusa_ManaShield::CEntityInstanceEntityClass::DestructInstance  (line 542, @0x0000000002c8a510, libserver.so)  // inlines: Destruct<CDOTA_Ability_Medusa_ManaShield>
void __fastcall CDOTA_Ability_Medusa_ManaShield::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Medusa_ManaShield::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Medusa_ManaShield::CEntityInstanceEntityClass::FreeInstance  (line 542, @0x0000000002c8a530, libserver.so)
void __fastcall CDOTA_Ability_Medusa_ManaShield::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Medusa_ManaShield::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Medusa_ManaShield::CEntityInstanceEntityClass::CanAllocate  (line 542, @0x0000000002c8a550, libserver.so)
bool __fastcall CDOTA_Ability_Medusa_ManaShield::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Medusa_ManaShield::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Medusa_ManaShield::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 542, @0x0000000002c8a560, libserver.so)
// globals: CDOTA_Ability_Medusa_ManaShield::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Medusa_ManaShield::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Medusa_ManaShield::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Medusa_ManaShield::s_pSchemaBinding;
}


// CDOTA_Ability_Medusa_ManaShield::CEntityInstanceEntityClass::AllocateInstance  (line 542, @0x0000000002c90360, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Medusa_ManaShield::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Medusa_ManaShield::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Medusa_ManaShield::CEntityInstanceEntityClass::ConstructInstance  (line 542, @0x0000000002c95010, libserver.so)  // inlines: CDOTA_Ability_Medusa_ManaShield, Construct<CDOTA_Ability_Medusa_ManaShield>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Medusa_ManaShield::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Medusa_ManaShield::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45D54D0;
  }
  return p;
}


// CDOTA_Ability_Medusa_ManaShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 542, @0x0000000002ca2980, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Medusa_ManaShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Medusa_ManaShield::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Medusa_ManaShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 542, @0x0000000002ca29a0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Medusa_ManaShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Medusa_ManaShield::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Medusa_ManaShield::GetEntityClassInternal  (line 542, @0x0000000002cbaf80, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "CDOTA_Ability_Medusa_ManaShield"
// globals: `guard variable for'CDOTA_Ability_Medusa_ManaShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_ManaShieldClass, CDOTA_Ability_Medusa_ManaShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_ManaShieldClass, __dso_handle, CDOTA_Ability_Medusa_ManaShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Medusa_ManaShield::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_ManaShieldClassInfo, CDOTA_Ability_Medusa_ManaShield::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_ManaShieldClassInfo
CEntityClass *__cdecl CDOTA_Ability_Medusa_ManaShield::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Medusa_ManaShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_ManaShieldClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Medusa_ManaShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_ManaShieldClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Medusa_ManaShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_ManaShieldClass);
    CDOTA_Ability_Medusa_ManaShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_ManaShieldClass._vptr_CEntityClass = off_45D5450;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Medusa_ManaShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_ManaShieldClass);
    __cxa_atexit(
      CDOTA_Ability_Medusa_ManaShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Medusa_ManaShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_ManaShieldClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Medusa_ManaShieldClass != 0 )
    return &CDOTA_Ability_Medusa_ManaShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_ManaShieldClass;
  if ( `guard variable for'CDOTA_Ability_Medusa_ManaShield::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_ManaShieldClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Medusa_ManaShield::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_ManaShieldClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Medusa_ManaShield::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_ManaShieldClassInfo,
      "CDOTA_Ability_Medusa_ManaShield",
      "medusa_mana_shield",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Medusa_ManaShield::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_ManaShieldClassInfo);
  }
  CDOTA_Ability_Medusa_ManaShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_ManaShieldClass.m_pClassInfo = &CDOTA_Ability_Medusa_ManaShield::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_ManaShieldClassInfo;
  CDOTA_Ability_Medusa_ManaShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_ManaShieldClass.m_pBaseClassInfo = CDOTA_Ability_Medusa_ManaShield::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_ManaShieldClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Medusa_ManaShieldClass = &CDOTA_Ability_Medusa_ManaShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_ManaShieldClass;
  CDOTA_Ability_Medusa_ManaShield::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_ManaShieldClassInfo.m_pClass = &CDOTA_Ability_Medusa_ManaShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_ManaShieldClass;
  CDOTA_Ability_Medusa_ManaShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_ManaShieldClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Medusa_ManaShieldClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Medusa_ManaShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_ManaShieldClass;
}


// CDOTA_Ability_Medusa_ManaShield::ResetToggleOnRespawn  (line 546, @0x0000000002c8a570, libserver.so)
bool __fastcall CDOTA_Ability_Medusa_ManaShield::ResetToggleOnRespawn(CDOTA_Ability_Medusa_ManaShield *const this)
{
  return 0;
}


// CDOTA_Ability_Medusa_ManaShield::ProcsMagicStick  (line 548, @0x0000000002c8a580, libserver.so)
bool __fastcall CDOTA_Ability_Medusa_ManaShield::ProcsMagicStick(CDOTA_Ability_Medusa_ManaShield *const this)
{
  return 0;
}


// CDOTA_Ability_Medusa_ManaShield::OnToggle  (line 560, @0x0000000002c243e0, libserver.so)  // inlines: GetParent
// calls: CDOTABaseAbility::GetCaster, CBaseEntity::GetLifeState, CDOTABaseAbility::OnToggle, KeyValues::KeyValues, CDOTA_BaseNPC::AddNewModifier, CGameSceneNode::GetOwnerEntity, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound, KeyValues::~KeyValues (15 total)
// strings: "modifier_medusa_mana_shield", "particles/units/heroes/hero_medusa/medusa_mana_shield_cast.vpcf", "attach_hitloc", "Hero_Medusa.ManaShield.On", "particles/units/heroes/hero_medusa/medusa_mana_shield_end.vpcf", "Hero_Medusa.ManaShield.Off"
void __fastcall CDOTA_Ability_Medusa_ManaShield::OnToggle(CDOTA_Ability_Medusa_ManaShield *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v3; // r13
  CDOTA_BaseNPC *v4; // rax
  CGameSceneNode *m_pParent; // rdi
  CBaseEntity *OwnerEntity; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r13d
  CGameSceneNode *v9; // rdi
  const CBaseAnimating *v10; // r14
  CDOTA_ParticleManager *v11; // rax
  CDOTA_ParticleManager *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  CBaseEntity *v14; // r12
  CDOTA_BaseNPC *v15; // rax
  CGameSceneNode *v16; // rdi
  CDOTA_ParticleManager *v17; // rax
  const CBaseAnimating *v18; // r13
  int v19; // r12d
  CGameSceneNode *v20; // rdi
  CDOTA_ParticleManager *v21; // rax
  CDOTA_ParticleManager *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-28h]

  v25 = __readfsqword(0x28u);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CBaseEntity::GetLifeState(Caster) != LifeState_t::LIFE_DYING )
  {
    CDOTABaseAbility::OnToggle(this);
    if ( this->m_bToggleState.m_Value )
    {
      KeyValues::KeyValues(&kv, "modifier_medusa_mana_shield");
      v3 = CDOTABaseAbility::GetCaster(this);
      v4 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v4, v3, this, "modifier_medusa_mana_shield", &kv, 0);
      m_pParent = this->m_pGameSceneNode->m_pParent;
      if ( m_pParent != 0 )
        OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
      else
        OwnerEntity = 0;
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_medusa/medusa_mana_shield_cast.vpcf",
                   2,
                   OwnerEntity,
                   0,
                   0);
      v9 = this->m_pGameSceneNode->m_pParent;
      if ( v9 != 0 )
        v10 = CGameSceneNode::GetOwnerEntity(v9);
      else
        v10 = 0;
      v11 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v11, Particle, 0, v10, 5, "attach_hitloc", vec3_invalid, 1);
      v12 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v12, Particle);
      v13 = CDOTABaseAbility::GetCaster(this);
      DOTA_EmitSound(10, "Hero_Medusa.ManaShield.On", v13);
      KeyValues::~KeyValues(&kv);
    }
    else
    {
      v14 = 0;
      v15 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::RemoveModifierByName(v15, "modifier_medusa_mana_shield");
      v16 = this->m_pGameSceneNode->m_pParent;
      if ( v16 != 0 )
        v14 = CGameSceneNode::GetOwnerEntity(v16);
      v17 = GetParticleManager();
      v18 = 0;
      v19 = CDOTA_ParticleManager::CreateParticle(
              v17,
              "particles/units/heroes/hero_medusa/medusa_mana_shield_end.vpcf",
              2,
              v14,
              0,
              0);
      v20 = this->m_pGameSceneNode->m_pParent;
      if ( v20 != 0 )
        v18 = CGameSceneNode::GetOwnerEntity(v20);
      v21 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v21, v19, 0, v18, 5, "attach_hitloc", vec3_invalid, 1);
      v22 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v22, v19);
      v23 = CDOTABaseAbility::GetCaster(this);
      DOTA_EmitSound(10, "Hero_Medusa.ManaShield.Off", v23);
    }
  }
}


// CDOTA_Ability_Medusa_ManaShield::OwnerRespawned  (line 593, @0x0000000002c21040, libserver.so)
// calls: CDOTABaseAbility::OwnerRespawned, KeyValues::KeyValues, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_medusa_mana_shield"
void __fastcall CDOTA_Ability_Medusa_ManaShield::OwnerRespawned(CDOTA_Ability_Medusa_ManaShield *const this)
{
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v3; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-28h]

  v5 = __readfsqword(0x28u);
  CDOTABaseAbility::OwnerRespawned(this);
  if ( this->m_bToggleState.m_Value )
  {
    KeyValues::KeyValues(&kv, "modifier_medusa_mana_shield");
    Caster = CDOTABaseAbility::GetCaster(this);
    v3 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_medusa_mana_shield", &kv, 0);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Ability_Medusa_ManaShield::OnOwnerDied  (line 605, @0x0000000002c216f0, libserver.so)
// calls: CDOTABaseAbility::OnOwnerDied, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::RemoveModifierByName
// strings: "modifier_medusa_mana_shield"
void __fastcall CDOTA_Ability_Medusa_ManaShield::OnOwnerDied(CDOTA_Ability_Medusa_ManaShield *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  CDOTABaseAbility::OnOwnerDied(this);
  if ( this->m_bToggleState.m_Value )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::RemoveModifierByName(Caster, "modifier_medusa_mana_shield");
  }
}


// CDOTA_Modifier_Medusa_ManaShield::~CDOTA_Modifier_Medusa_ManaShield  (line 619, @0x0000000002c91e50, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Medusa_ManaShield::~CDOTA_Modifier_Medusa_ManaShield(
        CDOTA_Modifier_Medusa_ManaShield *const this)
{
  this->_vptr_CDOTA_Buff = &off_45D5F90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Medusa_ManaShield::~CDOTA_Modifier_Medusa_ManaShield  (line 619, @0x0000000002c91e70, libserver.so)  // inlines: ~CDOTA_Modifier_Medusa_ManaShield
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Medusa_ManaShield::~CDOTA_Modifier_Medusa_ManaShield(
        CDOTA_Modifier_Medusa_ManaShield *const this)
{
  this->_vptr_CDOTA_Buff = &off_45D5F90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Medusa_ManaShield::IsPurgable  (line 624, @0x0000000002c8a590, libserver.so)
bool __fastcall CDOTA_Modifier_Medusa_ManaShield::IsPurgable(CDOTA_Modifier_Medusa_ManaShield *const this)
{
  return 0;
}


// CDOTA_Modifier_Medusa_ManaShield::IsHidden  (line 625, @0x0000000002c8a5a0, libserver.so)
bool __fastcall CDOTA_Modifier_Medusa_ManaShield::IsHidden(CDOTA_Modifier_Medusa_ManaShield *const this)
{
  return 0;
}


// CDOTA_Modifier_Medusa_ManaShield::RemoveOnDeath  (line 626, @0x0000000002c8a5b0, libserver.so)
bool __fastcall CDOTA_Modifier_Medusa_ManaShield::RemoveOnDeath(CDOTA_Modifier_Medusa_ManaShield *const this)
{
  return 0;
}


// CDOTA_Modifier_Medusa_ManaShield::GetEffectName  (line 632, @0x0000000002c8a5c0, libserver.so)
// strings: "particles/units/heroes/hero_medusa/medusa_mana_shield.vpcf"
const char *__fastcall CDOTA_Modifier_Medusa_ManaShield::GetEffectName(CDOTA_Modifier_Medusa_ManaShield *const this)
{
  return "particles/units/heroes/hero_medusa/medusa_mana_shield.vpcf";
}


// CDOTA_Modifier_Medusa_ManaShield::OnCreated  (line 645, @0x0000000002c595a0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
void __fastcall CDOTA_Modifier_Medusa_ManaShield::OnCreated(
        CDOTA_Modifier_Medusa_ManaShield *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->damage_per_mana = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "damage_per_mana", -1, 0);
  else
    this->damage_per_mana = 0.0;
}


// CDOTA_Modifier_Medusa_ManaShield::OnRefresh  (line 652, @0x0000000002c59600, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
void __fastcall CDOTA_Modifier_Medusa_ManaShield::OnRefresh(
        CDOTA_Modifier_Medusa_ManaShield *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->damage_per_mana = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "damage_per_mana", -1, 0);
  else
    this->damage_per_mana = 0.0;
}


// CDOTA_Modifier_Medusa_ManaShield::DeclareFunctions  (line 659, @0x0000000002c1d130, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Medusa_ManaShield::GetModifierPhysical_ConstantBlockUnavoidablePreArmor(CModifierParams const&)
void __fastcall CDOTA_Modifier_Medusa_ManaShield::DeclareFunctions(CDOTA_Modifier_Medusa_ManaShield *const this)
{
  this->m_Functions[88].__pfn = CDOTA_Modifier_Medusa_ManaShield::GetModifierPhysical_ConstantBlockUnavoidablePreArmor;
  this->m_Functions[88].__delta = 0;
}


// CDOTA_Modifier_Medusa_ManaShield::GetModifierPhysical_ConstantBlockUnavoidablePreArmor  (line 666, @0x0000000002c23a50, libserver.so)  // inlines: GetMana, Vector
// calls: CDOTA_Buff::GetParent, DOTA_EmitSound, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::ReduceMana
// strings: "Hero_Medusa.ManaShield.Proc", "particles/units/heroes/hero_medusa/medusa_mana_shield_impact.vpcf"
ModifierVariant_t __fastcall CDOTA_Modifier_Medusa_ManaShield::GetModifierPhysical_ConstantBlockUnavoidablePreArmor(
        CDOTA_Modifier_Medusa_ManaShield *const this,
        const CModifierParams *const params)
{
  float fDamage; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax
  __m128i v6; // xmm3
  float v7; // r12d
  CDOTA_BaseNPC *v8; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v10; // rax
  CDOTA_ParticleManager *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  float v13; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  float v16; // xmm1_4
  float fCurrentMana; // [rsp+4h] [rbp-3Ch]
  float fTotalBlockCapable; // [rsp+8h] [rbp-38h]
  float fDamageTaken; // [rsp+Ch] [rbp-34h]
  ModifierVariant_t result; // 0:rax.16

  if ( (params->nDamageflags & 0x20) != 0 )
    return 1uLL;
  fDamage = params->fDamage;
  if ( fDamage <= 0.0 )
    return 1uLL;
  fDamageTaken = fDamage * 0.60000002;
  fCurrentMana = CDOTA_Buff::GetParent(this)->m_flMana.m_Value;
  fTotalBlockCapable = fCurrentMana * this->damage_per_mana;
  Parent = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(10, "Hero_Medusa.ManaShield.Proc", Parent);
  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x200) != 0 && params->nDamageType == 2 )
    return 1uLL;
  if ( fDamageTaken >= fTotalBlockCapable )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::ReduceMana(Caster, fCurrentMana, v16);
    result.m_szVal = 0;
    *&result.m_eType = (LODWORD(fTotalBlockCapable) << 32) | 1;
  }
  else
  {
    v6 = LODWORD(fDamageTaken);
    *v6.m128i_i32 = fDamageTaken / this->damage_per_mana;
    v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
    v8 = CDOTA_Buff::GetParent(this);
    ParticleManager = GetParticleManager();
    LODWORD(v8) = CDOTA_ParticleManager::CreateParticle(
                    ParticleManager,
                    "particles/units/heroes/hero_medusa/medusa_mana_shield_impact.vpcf",
                    1,
                    v8,
                    0,
                    0);
    v10 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v10, v8, 1, COERCE_DOUBLE(LODWORD(v7)), 0.0);
    v11 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v11, v8);
    v12 = CDOTA_Buff::GetCaster(this);
    CDOTA_BaseNPC::ReduceMana(v12, v7, v13);
    result.m_szVal = 0;
    *&result.m_eType = (LODWORD(fDamageTaken) << 32) | 1;
  }
  return result;
}


// CDOTA_Ability_Medusa_StoneGaze::~CDOTA_Ability_Medusa_StoneGaze  (line 722, @0x0000000002c98d60, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Medusa_StoneGaze::~CDOTA_Ability_Medusa_StoneGaze(
        CDOTA_Ability_Medusa_StoneGaze *const this)
{
  this->_vptr_IHandleEntity = &off_45D62F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Medusa_StoneGaze::~CDOTA_Ability_Medusa_StoneGaze  (line 722, @0x0000000002c98d80, libserver.so)  // inlines: ~CDOTA_Ability_Medusa_StoneGaze
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Medusa_StoneGaze::~CDOTA_Ability_Medusa_StoneGaze(
        CDOTA_Ability_Medusa_StoneGaze *const this)
{
  this->_vptr_IHandleEntity = &off_45D62F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Medusa_StoneGaze::Schema_DynamicBinding  (line 724, @0x0000000002c8a5d0, libserver.so)
// globals: CDOTA_Ability_Medusa_StoneGaze::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Medusa_StoneGaze::Schema_DynamicBinding(
        const CDOTA_Ability_Medusa_StoneGaze *const this)
{
  return CDOTA_Ability_Medusa_StoneGaze::s_pSchemaBinding;
}


// CDOTA_Ability_Medusa_StoneGaze::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 724, @0x0000000002c8a5e0, libserver.so)
// globals: CDOTA_Ability_Medusa_StoneGaze::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Medusa_StoneGaze::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Medusa_StoneGaze::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Medusa_StoneGaze::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Medusa_StoneGaze::CEntityInstanceEntityClass::DestructInstance  (line 724, @0x0000000002c8a5f0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Medusa_StoneGaze>
void __fastcall CDOTA_Ability_Medusa_StoneGaze::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Medusa_StoneGaze::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Medusa_StoneGaze::CEntityInstanceEntityClass::FreeInstance  (line 724, @0x0000000002c8a610, libserver.so)
void __fastcall CDOTA_Ability_Medusa_StoneGaze::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Medusa_StoneGaze::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Medusa_StoneGaze::CEntityInstanceEntityClass::CanAllocate  (line 724, @0x0000000002c8a630, libserver.so)
bool __fastcall CDOTA_Ability_Medusa_StoneGaze::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Medusa_StoneGaze::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Medusa_StoneGaze::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 724, @0x0000000002c8a640, libserver.so)
// globals: CDOTA_Ability_Medusa_StoneGaze::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Medusa_StoneGaze::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Medusa_StoneGaze::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Medusa_StoneGaze::s_pSchemaBinding;
}


// CDOTA_Ability_Medusa_StoneGaze::CEntityInstanceEntityClass::AllocateInstance  (line 724, @0x0000000002c903a0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Medusa_StoneGaze::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Medusa_StoneGaze::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Medusa_StoneGaze::CEntityInstanceEntityClass::ConstructInstance  (line 724, @0x0000000002c95040, libserver.so)  // inlines: CDOTA_Ability_Medusa_StoneGaze, Construct<CDOTA_Ability_Medusa_StoneGaze>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Medusa_StoneGaze::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Medusa_StoneGaze::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45D62F0;
  }
  return p;
}


// CDOTA_Ability_Medusa_StoneGaze::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 724, @0x0000000002ca29d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Medusa_StoneGaze::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Medusa_StoneGaze::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Medusa_StoneGaze::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 724, @0x0000000002ca29f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Medusa_StoneGaze::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Medusa_StoneGaze::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal  (line 724, @0x0000000002cc3230, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "CDOTA_Ability_Medusa_StoneGaze"
// globals: `guard variable for'CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass, CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Medusa_StoneGaze::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClassInfo, CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClassInfo
CEntityClass *__cdecl CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass) != 0 )
  {
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_pClassInfo = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_flags = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_pInputs = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_nInputCount = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_pOutputs = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_nOutputCount = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_pGameClass = 0;
    CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass._vptr_CEntityClass = off_45D6270;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass);
    __cxa_atexit(
      CDOTA_Ability_Medusa_StoneGaze::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Medusa_StoneGazeClass != 0 )
    return &CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass;
  if ( `guard variable for'CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClassInfo,
      "CDOTA_Ability_Medusa_StoneGaze",
      "medusa_stone_gaze",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClassInfo);
  }
  CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_pClassInfo = &CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClassInfo;
  CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_pBaseClassInfo = CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Medusa_StoneGazeClass = &CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass;
  CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClassInfo.m_pClass = &CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass;
  CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Medusa_StoneGazeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Medusa_StoneGaze::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Medusa_StoneGazeClass;
}


// CDOTA_Ability_Medusa_StoneGaze::OnSpellStart  (line 738, @0x0000000002c55170, libserver.so)  // inlines: GetAbilityData, GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTAGamerules::SendProjectionAbilityMessage, KeyValues::~KeyValues, CDOTABaseAbility::LoadAbilityData, __stack_chk_fail (13 total)
// strings: "modifier_medusa_stone_gaze", "particles/units/heroes/hero_medusa/medusa_stone_gaze_cast.vpcf"
void __fastcall CDOTA_Ability_Medusa_StoneGaze::OnSpellStart(CDOTA_Ability_Medusa_StoneGaze *const this)
{
  __m128i v2; // xmm0
  float v3; // r14d
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v9; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r13d
  CDOTA_BaseNPC *v12; // rax
  float v13; // xmm3_4
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-28h]

  v15 = __readfsqword(0x28u);
  *v2.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  KeyValues::KeyValues(&kv, "modifier_medusa_stone_gaze");
  KeyValues::SetFloat(&kv, "duration", v4);
  Caster = CDOTABaseAbility::GetCaster(this);
  v6 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v6, Caster, this, "modifier_medusa_stone_gaze", &kv, 0);
  v7 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v7) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_medusa/medusa_stone_gaze_cast.vpcf",
                  1,
                  v7,
                  0,
                  0);
  v9 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v9, v7);
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  v12 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(
    g_pGameRules,
    v12,
    1,
    m_iAbilityID,
    0,
    0,
    *&vec3_origin.x,
    vec3_origin.z,
    v3,
    v13);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Medusa_StoneGaze::GetSlowDuration  (line 757, @0x0000000002c56880, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Medusa_StoneGaze::GetSlowDuration(CDOTA_Ability_Medusa_StoneGaze *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
}


// CDOTA_Ability_Medusa_StoneGaze::GetStunDuration  (line 764, @0x0000000002c568a0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "stone_duration"
float __fastcall CDOTA_Ability_Medusa_StoneGaze::GetStunDuration(CDOTA_Ability_Medusa_StoneGaze *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stone_duration", -1, 0);
}


// CDOTA_Modifier_Medusa_StoneGaze::~CDOTA_Modifier_Medusa_StoneGaze  (line 773, @0x0000000002cb6950, libserver.so)  // inlines: Purge, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Medusa_StoneGaze::~CDOTA_Modifier_Medusa_StoneGaze(
        CDOTA_Modifier_Medusa_StoneGaze *const this)
{
  this->_vptr_CDOTA_Buff = &off_45D6DB0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0
    || (CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory),
        (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) != 0) )
  {
    CDOTA_Buff::~CDOTA_Buff(this);
  }
  else
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
    CDOTA_Buff::~CDOTA_Buff(this);
  }
}


// CDOTA_Modifier_Medusa_StoneGaze::~CDOTA_Modifier_Medusa_StoneGaze  (line 773, @0x0000000002cb74c0, libserver.so)  // inlines: Purge, ~CDOTA_Modifier_Medusa_StoneGaze, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTA_Buff::~CDOTA_Buff, operator delete, CUtlMemory<CHandle<CBaseEntity>, int>::Purge
void __fastcall CDOTA_Modifier_Medusa_StoneGaze::~CDOTA_Modifier_Medusa_StoneGaze(
        CDOTA_Modifier_Medusa_StoneGaze *const this)
{
  this->_vptr_CDOTA_Buff = &off_45D6DB0;
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&this->m_hHitEntities);
  if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
    if ( (this->m_hHitEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&this->m_hHitEntities.m_Memory);
  }
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Medusa_StoneGaze::GetAttributes  (line 784, @0x0000000002c93cf0, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_Medusa_StoneGaze::GetAttributes(CDOTA_Modifier_Medusa_StoneGaze *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 2;
}


// CDOTA_Modifier_Medusa_StoneGaze::IsPurgable  (line 786, @0x0000000002c8a650, libserver.so)
bool __fastcall CDOTA_Modifier_Medusa_StoneGaze::IsPurgable(CDOTA_Modifier_Medusa_StoneGaze *const this)
{
  return 0;
}


// CDOTA_Modifier_Medusa_StoneGaze::OnCreated  (line 804, @0x0000000002c75490, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::GetParent, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle, CDOTA_BaseNPC::StartGesture, DOTA_EmitSound
// strings: "vision_cone", "particles/units/heroes/hero_medusa/medusa_stone_gaze_active.vpcf", "attach_head", "Hero_Medusa.StoneGaze.Cast"
void __fastcall CDOTA_Modifier_Medusa_StoneGaze::OnCreated(CDOTA_Modifier_Medusa_StoneGaze *const this, KeyValues *pKV)
{
  float v2; // xmm1_4
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Parent; // r13
  CDOTA_ParticleManager *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax

  CDOTA_Buff::StartIntervalThink(this, 0.050000001, v2);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_3;
LABEL_7:
    this->vision_cone = 0.0;
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_4;
LABEL_8:
    this->duration = 0.0;
    goto LABEL_5;
  }
  this->radius = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_7;
LABEL_3:
  this->vision_cone = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "vision_cone", -1, 0);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 == 0 )
    goto LABEL_8;
LABEL_4:
  this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v6, "duration", -1, 0);
LABEL_5:
  Caster = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_medusa/medusa_stone_gaze_active.vpcf",
                      1,
                      Caster,
                      0,
                      0);
  Parent = CDOTA_Buff::GetParent(this);
  v10 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v10, Caster, 1, Parent, 5, "attach_head", vec3_invalid, 1);
  CDOTA_Buff::AddParticle(this, Caster, 0, 0, -1, 0, 0);
  v11 = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v11, 1607, 0.2, 0.2, 9, 0, 1.0);
  v12 = CDOTA_Buff::GetCaster(this);
  this->m_nStoneGazeSound = DOTA_EmitSound(2, "Hero_Medusa.StoneGaze.Cast", v12);
}


// CDOTA_Modifier_Medusa_StoneGaze::OnRefresh  (line 824, @0x0000000002c71c80, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "vision_cone"
void __fastcall CDOTA_Modifier_Medusa_StoneGaze::OnRefresh(CDOTA_Modifier_Medusa_StoneGaze *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_6:
    this->vision_cone = 0.0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
    goto LABEL_7;
  }
  this->radius = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_6;
LABEL_3:
  this->vision_cone = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "vision_cone", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "duration", -1, 0);
    return;
  }
LABEL_7:
  this->duration = 0.0;
}


// CDOTA_Modifier_Medusa_StoneGaze::OnDestroy  (line 833, @0x0000000002c395f0, libserver.so)  // inlines: GetAbilityData
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FadeGesture, CDOTA_Buff::GetAbility, CDOTAGamerules::SendProjectionAbilityEndChannelMessage, CSoundOpGameSystem::StopSoundEvent, CDOTABaseAbility::LoadAbilityData
void __fastcall CDOTA_Modifier_Medusa_StoneGaze::OnDestroy(CDOTA_Modifier_Medusa_StoneGaze *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *Ability; // rax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  int m_iAbilityID; // r12d
  CDOTA_BaseNPC *v6; // rax
  CDOTABaseAbility *v7; // [rsp+8h] [rbp-18h]

  Caster = CDOTA_Buff::GetCaster(this);
  CDOTA_BaseNPC::FadeGesture(Caster, 1607);
  if ( CDOTA_Buff::GetAbility(this) != 0 )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    m_pAbilityData = Ability->m_pAbilityData;
    if ( m_pAbilityData == 0 )
    {
      v7 = Ability;
      CDOTABaseAbility::LoadAbilityData(Ability, 0);
      m_pAbilityData = v7->m_pAbilityData;
    }
    m_iAbilityID = m_pAbilityData->m_iAbilityID;
    v6 = CDOTA_Buff::GetCaster(this);
    CDOTAGamerules::SendProjectionAbilityEndChannelMessage(g_pGameRules, v6, m_iAbilityID);
    CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, &this->m_nStoneGazeSound);
  }
}


// CDOTA_Modifier_Medusa_StoneGaze::OnIntervalThink  (line 847, @0x0000000002c7f9c0, libserver.so)  // inlines: AddToTail, CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CHandle<CBaseEntity> >, Dot, DotProduct, Element, Get, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetSerialNumber, GetTeamNumber, GrowMemory, HasElement, IndexToIdentity, IsValid, LookupEntity, Set, ToDOTABaseNPC, VectorNormalize2D, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator-, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CBaseModelEntity::CanBeSeenByTeam, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::Find, VectorNormalize, CBaseEntity::GetAbsAngles, AngleVectors, CDOTA_Buff::GetAbility, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier (17 total)
// strings: "modifier_medusa_stone_gaze_facing", "modifier_medusa_stone_gaze_slow"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Medusa_StoneGaze::OnIntervalThink(CDOTA_Modifier_Medusa_StoneGaze *const this)
{
  __m128i v1; // xmm3
  float v3; // r14d
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v7; // rax
  __int64 v8; // rbx
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  int m_Value; // r14d
  CDOTA_BaseNPC *v16; // rax
  CEntityIdentity *m_pEntity; // rax
  int v18; // edx
  __int16 v19; // cx
  const Vector *v20; // r14
  CDOTA_BaseNPC *v21; // rax
  const Vector *v22; // rax
  vec_t v23; // xmm1_4
  vec_t v24; // xmm0_4
  const QAngle *AbsAngles; // rax
  float v26; // xmm1_4
  CDOTA_BaseNPC *v27; // rax
  float v28; // xmm1_4
  CDOTA_BaseNPC *v29; // rax
  CEntityIdentity *v30; // rax
  __int16 v31; // cx
  __int64 m_Size; // r12
  int v33; // eax
  CHandle<CBaseEntity> *v34; // rax
  float pAbility; // [rsp+38h] [rbp-C8h]
  CDOTABaseAbility *pAbilitya; // [rsp+38h] [rbp-C8h]
  int v37; // [rsp+40h] [rbp-C0h]
  Vector vToCaster; // [rsp+50h] [rbp-B0h] BYREF
  Vector vFacing; // [rsp+60h] [rbp-A0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+70h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+90h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v43; // [rsp+C8h] [rbp-38h]

  hEntities.m_Memory.m_nAllocationCount = 0;
  *v1.m128i_i32 = this->radius;
  hEntities.m_Size = 0;
  v43 = __readfsqword(0x28u);
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  Caster = CDOTA_Buff::GetCaster(this);
  v5 = CDOTA_Buff::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  v7 = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(v7->m_iTeamNum.m_Value, AbsOrigin, Caster, v3, &hEntities, 2, 19, 16, 0, 0);
  if ( hEntities.m_Size > 0 )
  {
    v8 = 0;
    do
    {
      while ( 1 )
      {
        v9 = &hEntities.m_Memory.m_pMemory[v8];
        m_Index = v9->m_Index;
        if ( v9->m_Index + 2 > 1 )
        {
          v11 = v9->m_Index;
          v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v9->m_Index) >> 9) & 0x3F];
          if ( v12 != 0 )
          {
            v13 = &v12[v11 & 0x1FF];
            if ( v13 != 0 && m_Index == v13->m_EHandle.m_Index )
            {
              m_pInstance = v13->m_pInstance;
              if ( v13->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
              {
                m_Value = m_pInstance->m_iTeamNum.m_Value;
                v16 = CDOTA_Buff::GetCaster(this);
                if ( CBaseModelEntity::CanBeSeenByTeam(v16, m_Value) )
                {
                  vFacing.x = NAN;
                  m_pEntity = m_pInstance->m_pEntity;
                  if ( m_pEntity != 0 )
                  {
                    v18 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                    v19 = 0x7FFF;
                    if ( m_pEntity->m_EHandle.m_Index != -1 )
                      v19 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                    LOWORD(vFacing.x) = v19 | LOWORD(vFacing.x) & 0x8000;
                    LODWORD(vFacing.x) = (v18 << 15) | LOWORD(vFacing.x) & 0x7FFF;
                  }
                  if ( CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::Find(
                         &this->m_hHitEntities,
                         &vFacing) < 0 )
                  {
                    v20 = CBaseEntity::GetAbsOrigin(m_pInstance);
                    v21 = CDOTA_Buff::GetCaster(this);
                    v22 = CBaseEntity::GetAbsOrigin(v21);
                    v23 = v22->x - v20->x;
                    v24 = v22->y - v20->y;
                    vToCaster.z = 0.0;
                    vToCaster.x = v23;
                    vToCaster.y = v24;
                    pAbility = VectorNormalize(&vToCaster);
                    AbsAngles = CBaseEntity::GetAbsAngles(m_pInstance);
                    AngleVectors(AbsAngles, &vFacing, 0, 0);
                    if ( pAbility < 0.0099999998
                      || (((vFacing.x * vToCaster.x) + (vFacing.y * vToCaster.y)) + (vFacing.z * vToCaster.z)) > this->vision_cone )
                    {
                      break;
                    }
                  }
                }
              }
            }
          }
        }
        if ( hEntities.m_Size <= ++v8 )
          goto LABEL_26;
      }
      pAbilitya = CDOTA_Buff::GetAbility(this);
      KeyValues::KeyValues(&kv, "modifier_medusa_stone_gaze_facing");
      KeyValues::SetFloat(&kv, "duration", v26);
      v27 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v27, pAbilitya, "modifier_medusa_stone_gaze_facing", &kv, 0);
      KeyValues::KeyValues(&kv2, "modifier_medusa_stone_gaze_slow");
      KeyValues::SetFloat(&kv2, "duration", v28);
      v29 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(m_pInstance, v29, pAbilitya, "modifier_medusa_stone_gaze_slow", &kv2, 0);
      v37 = -1;
      v30 = m_pInstance->m_pEntity;
      if ( v30 != 0 )
      {
        v31 = 0x7FFF;
        if ( v30->m_EHandle.m_Index != -1 )
          v31 = v30->m_EHandle.m_Index & 0x7FFF;
        v37 = (((v30->m_EHandle.m_Index >> 15) - (v30->m_flags & 1)) << 15) | v31 & 0x7FFF;
      }
      m_Size = this->m_hHitEntities.m_Size;
      v33 = this->m_hHitEntities.m_Size;
      if ( m_Size == this->m_hHitEntities.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Grow(&this->m_hHitEntities.m_Memory, 1);
        v33 = this->m_hHitEntities.m_Size;
      }
      this->m_hHitEntities.m_Size = v33 + 1;
      v34 = &this->m_hHitEntities.m_Memory.m_pMemory[m_Size];
      if ( v34 != 0 )
        v34->m_Index = v37;
      KeyValues::~KeyValues(&kv2);
      KeyValues::~KeyValues(&kv);
      ++v8;
    }
    while ( hEntities.m_Size > v8 );
  }
LABEL_26:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
}


// CDOTA_Modifier_Medusa_StoneGaze_Slow::~CDOTA_Modifier_Medusa_StoneGaze_Slow  (line 898, @0x0000000002c91e00, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Medusa_StoneGaze_Slow::~CDOTA_Modifier_Medusa_StoneGaze_Slow(
        CDOTA_Modifier_Medusa_StoneGaze_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_45D70D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Medusa_StoneGaze_Slow::~CDOTA_Modifier_Medusa_StoneGaze_Slow  (line 898, @0x0000000002c91e20, libserver.so)  // inlines: ~CDOTA_Modifier_Medusa_StoneGaze_Slow
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Medusa_StoneGaze_Slow::~CDOTA_Modifier_Medusa_StoneGaze_Slow(
        CDOTA_Modifier_Medusa_StoneGaze_Slow *const this)
{
  this->_vptr_CDOTA_Buff = &off_45D70D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Medusa_StoneGaze_Slow::IsDebuff  (line 903, @0x0000000002c8a660, libserver.so)
bool __fastcall CDOTA_Modifier_Medusa_StoneGaze_Slow::IsDebuff(CDOTA_Modifier_Medusa_StoneGaze_Slow *const this)
{
  return 1;
}


// CDOTA_Modifier_Medusa_StoneGaze_Slow::IsPurgable  (line 904, @0x0000000002c8a670, libserver.so)
bool __fastcall CDOTA_Modifier_Medusa_StoneGaze_Slow::IsPurgable(CDOTA_Modifier_Medusa_StoneGaze_Slow *const this)
{
  return 0;
}


// CDOTA_Modifier_Medusa_StoneGaze_Slow::OnCreated  (line 924, @0x0000000002c74180, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::GetCaster, CDOTA_Buff::AddParticle, DOTA_EmitSound
// strings: "particles/units/heroes/hero_medusa/medusa_stone_gaze_debuff.vpcf", "Hero_Medusa.StoneGaze.Target"
void __fastcall CDOTA_Modifier_Medusa_StoneGaze_Slow::OnCreated(
        CDOTA_Modifier_Medusa_StoneGaze_Slow *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v6; // r14
  CDOTA_ParticleManager *v7; // rax
  __int64 v8; // r13
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_ParticleManager *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-24h]
  Vector v13; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "slow", -1, 0);
  else
    this->slow = 0;
  Parent = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_medusa/medusa_stone_gaze_debuff.vpcf",
                      3,
                      Parent,
                      0,
                      0);
  v6 = CDOTA_Buff::GetParent(this);
  v7 = GetParticleManager();
  v8 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(v7, Parent, 0, v6, 1, 0, vec3_invalid, 1);
  Caster = CDOTA_Buff::GetCaster(this);
  v10 = GetParticleManager();
  *&v13.x = v8;
  v13.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v10, Parent, 1, Caster, 1, 0, v13, 1);
  CDOTA_Buff::AddParticle(this, Parent, 0, 0, -1, 0, 0);
  v11 = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(1, "Hero_Medusa.StoneGaze.Target", v11);
}


// CDOTA_Modifier_Medusa_StoneGaze_Slow::DeclareFunctions  (line 940, @0x0000000002c1d150, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Medusa_StoneGaze_Slow::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Medusa_StoneGaze_Slow::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Medusa_StoneGaze_Slow::GetModifierTurnRate_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Medusa_StoneGaze_Slow::DeclareFunctions(
        CDOTA_Modifier_Medusa_StoneGaze_Slow *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_Medusa_StoneGaze_Slow::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[13].__pfn = CDOTA_Modifier_Medusa_StoneGaze_Slow::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[110].__pfn = CDOTA_Modifier_Medusa_StoneGaze_Slow::GetModifierTurnRate_Percentage;
  this->m_Functions[110].__delta = 0;
}


// CDOTA_Modifier_Medusa_StoneGaze_Slow::GetModifierAttackSpeedBonus_Constant  (line 950, @0x0000000002c1d1b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Medusa_StoneGaze_Slow::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Medusa_StoneGaze_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->slow;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Medusa_StoneGaze_Slow::GetModifierMoveSpeedBonus_Percentage  (line 957, @0x0000000002c1d1d0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Medusa_StoneGaze_Slow::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Medusa_StoneGaze_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->slow;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Medusa_StoneGaze_Slow::GetModifierTurnRate_Percentage  (line 964, @0x0000000002c1d1f0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Medusa_StoneGaze_Slow::GetModifierTurnRate_Percentage(
        CDOTA_Modifier_Medusa_StoneGaze_Slow *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->slow;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Medusa_StoneGaze_Facing::~CDOTA_Modifier_Medusa_StoneGaze_Facing  (line 975, @0x0000000002c91db0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Medusa_StoneGaze_Facing::~CDOTA_Modifier_Medusa_StoneGaze_Facing(
        CDOTA_Modifier_Medusa_StoneGaze_Facing *const this)
{
  this->_vptr_CDOTA_Buff = &off_45D73F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Medusa_StoneGaze_Facing::~CDOTA_Modifier_Medusa_StoneGaze_Facing  (line 975, @0x0000000002c91dd0, libserver.so)  // inlines: ~CDOTA_Modifier_Medusa_StoneGaze_Facing
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Medusa_StoneGaze_Facing::~CDOTA_Modifier_Medusa_StoneGaze_Facing(
        CDOTA_Modifier_Medusa_StoneGaze_Facing *const this)
{
  this->_vptr_CDOTA_Buff = &off_45D73F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Medusa_StoneGaze_Facing::IsDebuff  (line 980, @0x0000000002c8a680, libserver.so)
bool __fastcall CDOTA_Modifier_Medusa_StoneGaze_Facing::IsDebuff(CDOTA_Modifier_Medusa_StoneGaze_Facing *const this)
{
  return 1;
}


// CDOTA_Modifier_Medusa_StoneGaze_Facing::IsHidden  (line 981, @0x0000000002c8a690, libserver.so)
bool __fastcall CDOTA_Modifier_Medusa_StoneGaze_Facing::IsHidden(CDOTA_Modifier_Medusa_StoneGaze_Facing *const this)
{
  return 1;
}


// CDOTA_Modifier_Medusa_StoneGaze_Facing::IsPurgable  (line 982, @0x0000000002c8a6a0, libserver.so)
bool __fastcall CDOTA_Modifier_Medusa_StoneGaze_Facing::IsPurgable(CDOTA_Modifier_Medusa_StoneGaze_Facing *const this)
{
  return 0;
}


// CDOTA_Modifier_Medusa_StoneGaze_Facing::OnCreated  (line 1011, @0x0000000002c59ea0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, Invalidate, NetworkStateChanged, Set, Start, operator=<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CountdownTimer::Now, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::GetCaster, CDOTA_ParticleManager::SetParticleControlEnt
// strings: "stone_duration", "face_duration", "vision_cone", "particles/units/heroes/hero_medusa/medusa_stone_gaze_facing.vpcf"
void __fastcall CDOTA_Modifier_Medusa_StoneGaze_Facing::OnCreated(
        CDOTA_Modifier_Medusa_StoneGaze_Facing *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  double v6; // xmm0_8
  double v7; // xmm1_8
  double v8; // xmm2_8
  double v9; // xmm3_8
  float v10; // xmm1_4
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Caster; // rax
  int m_nFXIndex; // ebx
  const CBaseAnimating *v15; // r12
  CDOTA_ParticleManager *v16; // rax
  float v17; // [rsp+8h] [rbp-18h]
  float face_duration; // [rsp+Ch] [rbp-14h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->stone_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "stone_duration", -1, 0);
  else
    this->stone_duration = 0.0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    this->face_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "face_duration", -1, 0);
  else
    this->face_duration = 0.0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
    this->vision_cone = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "vision_cone", -1, 0);
  else
    this->vision_cone = 0.0;
  this->m_flAccumulatedTime = 0.0;
  if ( this->ctFacing.m_timestamp.m_Value != -1.0 )
  {
    (*(this->ctFacing._vptr_CountdownTimer + 2))(&this->ctFacing, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->ctFacing.m_timestamp.m_Value = -1.0;
  }
  face_duration = this->face_duration;
  *&v6 = CountdownTimer::Now(&this->ctFacing) + face_duration;
  if ( *&v6 != this->ctFacing.m_timestamp.m_Value )
  {
    v17 = *&v6;
    (*(this->ctFacing._vptr_CountdownTimer + 2))(&this->ctFacing, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v6 = LODWORD(v17);
    this->ctFacing.m_timestamp.m_Value = v17;
  }
  *&v9 = LODWORD(face_duration);
  if ( face_duration != this->ctFacing.m_duration.m_Value )
  {
    (*(this->ctFacing._vptr_CountdownTimer + 2))(
      &this->ctFacing,
      8,
      0xFFFFFFFFLL,
      0xFFFFFFFFLL,
      v6,
      v7,
      v8,
      face_duration);
    this->ctFacing.m_duration.m_Value = face_duration;
  }
  (*(this->_vptr_CDOTA_Buff + 56))(this, v6, v7, v8, v9);
  CDOTA_Buff::StartIntervalThink(this, 0.1, v10);
  if ( this->m_nFXIndex == -1 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    ParticleManager = GetParticleManager();
    this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                         ParticleManager,
                         "particles/units/heroes/hero_medusa/medusa_stone_gaze_facing.vpcf",
                         1,
                         Parent,
                         0,
                         0);
    Caster = CDOTA_Buff::GetCaster(this);
    m_nFXIndex = this->m_nFXIndex;
    v15 = Caster;
    v16 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v16, m_nFXIndex, 1, v15, 1, 0, vec3_invalid, 1);
  }
}


// CDOTA_Modifier_Medusa_StoneGaze_Facing::OnIntervalThink  (line 1035, @0x0000000002c63420, libserver.so)  // inlines: Dot, DotProduct, GetElapsedTime, HasStarted, Invalidate, NetworkStateChanged, Set, Start, Vector, VectorNormalize2D, VectorSubtract, operator-, operator=<float>, operator><float>
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, VectorNormalize, CBaseEntity::GetAbsAngles, AngleVectors, CountdownTimer::Now, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::GetAbility, CDOTA_ParticleManager::DestroyParticleEffect (23 total)
// strings: "modifier_medusa_stone_gaze", "special_bonus_unique_medusa", "modifier_medusa_stone_gaze_stone", "modifier_medusa_stone_gaze_slow", "particles/units/heroes/hero_medusa/medusa_stone_gaze_facing.vpcf"
void __fastcall CDOTA_Modifier_Medusa_StoneGaze_Facing::OnIntervalThink(
        CDOTA_Modifier_Medusa_StoneGaze_Facing *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v5; // rax
  const Vector *v6; // rax
  vec_t v7; // xmm1_4
  vec_t v8; // xmm0_4
  bool v9; // r12
  CDOTA_BaseNPC *v10; // rax
  const QAngle *AbsAngles; // rax
  float m_Value; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  double v15; // xmm0_8
  double v16; // xmm1_8
  double v17; // xmm2_8
  double v18; // xmm3_8
  double v19; // xmm4_8
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *v21; // rax
  CDOTABaseAbility *Ability; // rax
  int v23; // r12d
  CDOTA_ParticleManager *v24; // rax
  CDOTA_BaseNPC *v25; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v27; // xmm1_4
  CDOTABaseAbility *v28; // r14
  CDOTA_BaseNPC *v29; // r13
  CDOTA_BaseNPC *v30; // rax
  int v31; // r13d
  CDOTA_ParticleManager *v32; // rax
  double v33; // xmm0_8
  double v34; // xmm1_8
  double v35; // xmm2_8
  double v36; // xmm3_8
  double v37; // xmm4_8
  double v38; // xmm5_8
  double v39; // xmm6_8
  CDOTA_BaseNPC *v40; // rax
  CDOTA_Buff *ModifierByName; // rax
  int v42; // r12d
  CDOTA_ParticleManager *v43; // rax
  CDOTA_BaseNPC *v44; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v46; // rax
  const CBaseAnimating *v47; // r13
  CDOTA_ParticleManager *v48; // rax
  float v49; // [rsp+8h] [rbp-78h]
  float v50; // [rsp+8h] [rbp-78h]
  float flDuration; // [rsp+Ch] [rbp-74h]
  float flDurationa; // [rsp+Ch] [rbp-74h]
  float flDurationb; // [rsp+Ch] [rbp-74h]
  Vector vToCaster; // [rsp+10h] [rbp-70h] BYREF
  Vector vFacing; // [rsp+20h] [rbp-60h] BYREF
  double v56; // [rsp+30h] [rbp-50h]
  float v57; // [rsp+38h] [rbp-48h]
  KeyValues kv; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v59; // [rsp+58h] [rbp-28h]

  v59 = __readfsqword(0x28u);
  Caster = CDOTA_Buff::GetCaster(this);
  if ( CDOTA_BaseNPC::FindModifierByName(Caster, "modifier_medusa_stone_gaze", 0) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
    v5 = CDOTA_Buff::GetCaster(this);
    v6 = CBaseEntity::GetAbsOrigin(v5);
    v7 = v6->x - AbsOrigin->x;
    v8 = v6->y - AbsOrigin->y;
    vToCaster.z = 0.0;
    v9 = 1;
    vToCaster.x = v7;
    vToCaster.y = v8;
    flDuration = VectorNormalize(&vToCaster);
    v10 = CDOTA_Buff::GetParent(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v10);
    AngleVectors(AbsAngles, &vFacing, 0, 0);
    if ( flDuration >= 0.0099999998 )
    {
      v9 = 0;
      Ability = CDOTA_Buff::GetAbility(this);
      if ( flDuration <= (*(Ability->_vptr_IHandleEntity + 226))(Ability, &vec3_origin, 0) )
        v9 = (((vFacing.x * vToCaster.x) + (vFacing.y * vToCaster.y)) + (vFacing.z * vToCaster.z)) > this->vision_cone;
    }
    m_Value = this->ctFacing.m_timestamp.m_Value;
    if ( m_Value > 0.0 )
    {
      v13 = CountdownTimer::Now(&this->ctFacing);
      v14 = this->ctFacing.m_timestamp.m_Value;
      this->m_flAccumulatedTime = ((v13 - v14) + this->ctFacing.m_duration.m_Value) + this->m_flAccumulatedTime;
      if ( v14 != -1.0 )
      {
        (*(this->ctFacing._vptr_CountdownTimer + 2))(&this->ctFacing, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->ctFacing.m_timestamp.m_Value = -1.0;
      }
      flDurationa = this->face_duration;
      *&v15 = CountdownTimer::Now(&this->ctFacing) + flDurationa;
      if ( *&v15 != this->ctFacing.m_timestamp.m_Value )
      {
        v49 = *&v15;
        (*(this->ctFacing._vptr_CountdownTimer + 2))(&this->ctFacing, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        *&v15 = LODWORD(v49);
        this->ctFacing.m_timestamp.m_Value = v49;
      }
      if ( flDurationa == this->ctFacing.m_duration.m_Value )
      {
        m_Value = this->ctFacing.m_timestamp.m_Value;
      }
      else
      {
        (*(this->ctFacing._vptr_CountdownTimer + 2))(
          &this->ctFacing,
          8,
          0xFFFFFFFFLL,
          0xFFFFFFFFLL,
          v15,
          v16,
          v17,
          v18,
          v19,
          flDurationa);
        m_Value = this->ctFacing.m_timestamp.m_Value;
        this->ctFacing.m_duration.m_Value = flDurationa;
      }
    }
    if ( v9 )
    {
      if ( m_Value <= 0.0 )
      {
        flDurationb = this->face_duration;
        *&v33 = CountdownTimer::Now(&this->ctFacing) + flDurationb;
        if ( *&v33 != this->ctFacing.m_timestamp.m_Value )
        {
          v50 = *&v33;
          (*(this->ctFacing._vptr_CountdownTimer + 2))(&this->ctFacing, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
          *&v33 = LODWORD(v50);
          this->ctFacing.m_timestamp.m_Value = v50;
        }
        if ( flDurationb != this->ctFacing.m_duration.m_Value )
        {
          (*(this->ctFacing._vptr_CountdownTimer + 2))(
            &this->ctFacing,
            8,
            0xFFFFFFFFLL,
            0xFFFFFFFFLL,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            flDurationb);
          this->ctFacing.m_duration.m_Value = flDurationb;
        }
      }
      m_nFXIndex = this->m_nFXIndex;
      if ( m_nFXIndex == -1 )
      {
        v44 = CDOTA_Buff::GetParent(this);
        ParticleManager = GetParticleManager();
        this->m_nFXIndex = CDOTA_ParticleManager::CreateParticle(
                             ParticleManager,
                             "particles/units/heroes/hero_medusa/medusa_stone_gaze_facing.vpcf",
                             1,
                             v44,
                             0,
                             0);
        v46 = CDOTA_Buff::GetCaster(this);
        LODWORD(v44) = this->m_nFXIndex;
        v47 = v46;
        v48 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControlEnt(v48, v44, 1, v47, 1, 0, vec3_invalid, 1);
        m_nFXIndex = this->m_nFXIndex;
      }
      *&v56 = this->m_flAccumulatedTime;
      HIDWORD(v56) = LODWORD(v56);
      v57 = *&v56;
      v21 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v21, m_nFXIndex, 2, v56, v57);
    }
    else
    {
      if ( m_Value != -1.0 )
      {
        (*(this->ctFacing._vptr_CountdownTimer + 2))(&this->ctFacing, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
        this->ctFacing.m_timestamp.m_Value = -1.0;
      }
      v23 = this->m_nFXIndex;
      if ( v23 != -1 )
      {
        v24 = GetParticleManager();
        CDOTA_ParticleManager::DestroyParticleEffect(v24, v23, 0);
        this->m_nFXIndex = -1;
      }
    }
    if ( this->m_flAccumulatedTime > this->face_duration )
    {
      v25 = CDOTA_Buff::GetCaster(this);
      AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v25, "special_bonus_unique_medusa", 0);
      if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
        CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
      KeyValues::KeyValues(&kv, "modifier_medusa_stone_gaze_stone");
      KeyValues::SetFloat(&kv, "duration", v27);
      v28 = CDOTA_Buff::GetAbility(this);
      v29 = CDOTA_Buff::GetCaster(this);
      v30 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::AddNewModifier(v30, v29, v28, "modifier_medusa_stone_gaze_stone", &kv, 0);
      v31 = this->m_nFXIndex;
      if ( v31 != -1 )
      {
        v32 = GetParticleManager();
        CDOTA_ParticleManager::DestroyParticleEffect(v32, v31, 0);
        this->m_nFXIndex = -1;
      }
      CDOTA_Buff::Destroy(this, 0, 0, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
  else
  {
    v40 = CDOTA_Buff::GetParent(this);
    ModifierByName = CDOTA_BaseNPC::FindModifierByName(v40, "modifier_medusa_stone_gaze_slow", 0);
    if ( ModifierByName != 0 )
      CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
    v42 = this->m_nFXIndex;
    if ( v42 != -1 )
    {
      v43 = GetParticleManager();
      CDOTA_ParticleManager::DestroyParticleEffect(v43, v42, 0);
      this->m_nFXIndex = -1;
    }
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Medusa_StoneGaze_Facing::OnDestroy  (line 1135, @0x0000000002c20270, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect
void __fastcall CDOTA_Modifier_Medusa_StoneGaze_Facing::OnDestroy(CDOTA_Modifier_Medusa_StoneGaze_Facing *const this)
{
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax

  m_nFXIndex = this->m_nFXIndex;
  if ( m_nFXIndex != -1 )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFXIndex, 0);
    this->m_nFXIndex = -1;
  }
}


// CDOTA_Modifier_Medusa_StoneGaze_Stone::~CDOTA_Modifier_Medusa_StoneGaze_Stone  (line 1151, @0x0000000002c91d60, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Medusa_StoneGaze_Stone::~CDOTA_Modifier_Medusa_StoneGaze_Stone(
        CDOTA_Modifier_Medusa_StoneGaze_Stone *const this)
{
  this->_vptr_CDOTA_Buff = &off_45D7710;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Medusa_StoneGaze_Stone::~CDOTA_Modifier_Medusa_StoneGaze_Stone  (line 1151, @0x0000000002c91d80, libserver.so)  // inlines: ~CDOTA_Modifier_Medusa_StoneGaze_Stone
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Medusa_StoneGaze_Stone::~CDOTA_Modifier_Medusa_StoneGaze_Stone(
        CDOTA_Modifier_Medusa_StoneGaze_Stone *const this)
{
  this->_vptr_CDOTA_Buff = &off_45D7710;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Medusa_StoneGaze_Stone::IsDebuff  (line 1156, @0x0000000002c8a6b0, libserver.so)
bool __fastcall CDOTA_Modifier_Medusa_StoneGaze_Stone::IsDebuff(CDOTA_Modifier_Medusa_StoneGaze_Stone *const this)
{
  return 1;
}


// CDOTA_Modifier_Medusa_StoneGaze_Stone::IsStunDebuff  (line 1157, @0x0000000002c8a6c0, libserver.so)
bool __fastcall CDOTA_Modifier_Medusa_StoneGaze_Stone::IsStunDebuff(CDOTA_Modifier_Medusa_StoneGaze_Stone *const this)
{
  return 1;
}


// CDOTA_Modifier_Medusa_StoneGaze_Stone::GetStatusEffectName  (line 1164, @0x0000000002c8a6d0, libserver.so)
// strings: "particles/status_fx/status_effect_medusa_stone_gaze.vpcf"
const char *__fastcall CDOTA_Modifier_Medusa_StoneGaze_Stone::GetStatusEffectName(
        CDOTA_Modifier_Medusa_StoneGaze_Stone *const this)
{
  return "particles/status_fx/status_effect_medusa_stone_gaze.vpcf";
}


// CDOTA_Modifier_Medusa_StoneGaze_Stone::StatusEffectPriority  (line 1165, @0x0000000002c8a6e0, libserver.so)
int __fastcall CDOTA_Modifier_Medusa_StoneGaze_Stone::StatusEffectPriority(
        CDOTA_Modifier_Medusa_StoneGaze_Stone *const this)
{
  return 420;
}


// CDOTA_Modifier_Medusa_StoneGaze_Stone::OnCreated  (line 1182, @0x0000000002c74f90, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, FStrEq, GetLevelSpecialValueFor<int>, GetUnitName, String, ToCStr, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, _V_strcmp
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, EconEntity_OnOwnerKillEaterEvent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_Buff::AddParticle, DOTA_EmitSound, CDOTA_BaseNPC::Kill
// strings: "bonus_physical_damage", "particles/units/heroes/hero_medusa/medusa_stone_gaze_debuff_stoned.vpcf", "npc_dota_hero_wisp", "Hero_Medusa.StoneGaze.Stun", "particles/units/heroes/hero_medusa/medusa_gaze_wisp.vpcf", "attach_hitloc"
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_Medusa_StoneGaze_Stone::OnCreated(
        CDOTA_Modifier_Medusa_StoneGaze_Stone *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTA_BaseNPC_Hero *v5; // r12
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC_Hero *v7; // rdi
  CDOTA_BaseNPC *v8; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v10; // r15
  CDOTA_ParticleManager *v11; // rax
  __int64 v12; // r14
  CDOTA_BaseNPC *v13; // r15
  CDOTA_ParticleManager *v14; // rax
  const char *m_pAsString; // rsi
  CDOTA_BaseNPC *v16; // rax
  CDOTA_BaseNPC *Caster; // r13
  CDOTABaseAbility *v18; // r12
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v20; // r12
  CDOTA_ParticleManager *v21; // rax
  CDOTA_BaseNPC *v22; // r14
  CDOTA_ParticleManager *v23; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-34h]
  Vector v25; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_physical_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                    Ability,
                                    "bonus_physical_damage",
                                    -1,
                                    0);
  else
    this->bonus_physical_damage = 0;
  if ( CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    v18 = CDOTA_Buff::GetAbility(this);
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::Kill(Parent, v18, Caster, 0.0, 0);
  }
  else
  {
    v4 = CDOTA_Buff::GetParent(this);
    v5 = 0;
    if ( v4 != 0 && v4->m_bIsDOTANPC && (v4->m_iUnitType & 1) != 0 && !v4->m_bIsIllusion.m_Value )
      v5 = v4;
    v6 = CDOTA_Buff::GetCaster(this);
    if ( v6 != 0 && (v6->m_iUnitType & 1) != 0 )
      v7 = v6;
    else
      v7 = 0;
    EconEntity_OnOwnerKillEaterEvent(
      v7,
      v5,
      kill_eater_event_t::kKillEaterEventType_Medusa_EnemiesPetrified,
      1,
      INVALID_ITEM_DEF_INDEX);
    v8 = CDOTA_Buff::GetParent(this);
    ParticleManager = GetParticleManager();
    LODWORD(v8) = CDOTA_ParticleManager::CreateParticle(
                    ParticleManager,
                    "particles/units/heroes/hero_medusa/medusa_stone_gaze_debuff_stoned.vpcf",
                    3,
                    v8,
                    0,
                    0);
    v10 = CDOTA_Buff::GetParent(this);
    v11 = GetParticleManager();
    v12 = *&vec3_invalid.x;
    vecFallbackPosition = vec3_invalid.z;
    CDOTA_ParticleManager::SetParticleControlEnt(v11, v8, 0, v10, 1, 0, vec3_invalid, 1);
    v13 = CDOTA_Buff::GetCaster(this);
    v14 = GetParticleManager();
    *&v25.x = v12;
    v25.z = vecFallbackPosition;
    CDOTA_ParticleManager::SetParticleControlEnt(v14, v8, 1, v13, 1, 0, v25, 1);
    CDOTA_Buff::AddParticle(this, v8, 0, 0, -1, 0, 0);
    m_pAsString = CDOTA_Buff::GetParent(this)->m_iszUnitName.m_Value.u.m_pAsString;
    if ( m_pAsString != 0 && (m_pAsString == "npc_dota_hero_wisp" || strcmp(m_pAsString, "npc_dota_hero_wisp") == 0) )
    {
      v20 = CDOTA_Buff::GetParent(this);
      v21 = GetParticleManager();
      LODWORD(v20) = CDOTA_ParticleManager::CreateParticle(
                       v21,
                       "particles/units/heroes/hero_medusa/medusa_gaze_wisp.vpcf",
                       3,
                       v20,
                       0,
                       0);
      v22 = CDOTA_Buff::GetParent(this);
      v23 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v23, v20, 0, v22, 5, "attach_hitloc", vec3_invalid, 1);
      CDOTA_Buff::AddParticle(this, v20, 0, 0, -1, 0, 0);
    }
    v16 = CDOTA_Buff::GetParent(this);
    DOTA_EmitSound(1, "Hero_Medusa.StoneGaze.Stun", v16);
  }
}


// CDOTA_Modifier_Medusa_StoneGaze_Stone::DeclareFunctions  (line 1213, @0x0000000002c1d210, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Medusa_StoneGaze_Stone::GetModifierIncomingPhysicalDamage_Percentage(CModifierParams const&), CDOTA_Modifier_Medusa_StoneGaze_Stone::GetAbsoluteNoDamageMagical(CModifierParams const&), CDOTA_Modifier_Medusa_StoneGaze_Stone::GetOverrideAnimationRate(CModifierParams const&)
void __fastcall CDOTA_Modifier_Medusa_StoneGaze_Stone::DeclareFunctions(
        CDOTA_Modifier_Medusa_StoneGaze_Stone *const this)
{
  this->m_Functions[37].__pfn = CDOTA_Modifier_Medusa_StoneGaze_Stone::GetModifierIncomingPhysicalDamage_Percentage;
  this->m_Functions[37].__delta = 0;
  this->m_Functions[104].__delta = 0;
  this->m_Functions[104].__pfn = CDOTA_Modifier_Medusa_StoneGaze_Stone::GetAbsoluteNoDamageMagical;
  this->m_Functions[92].__pfn = CDOTA_Modifier_Medusa_StoneGaze_Stone::GetOverrideAnimationRate;
  this->m_Functions[92].__delta = 0;
}


// CDOTA_Modifier_Medusa_StoneGaze_Stone::GetModifierIncomingPhysicalDamage_Percentage  (line 1222, @0x0000000002c1d270, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Medusa_StoneGaze_Stone::GetModifierIncomingPhysicalDamage_Percentage(
        CDOTA_Modifier_Medusa_StoneGaze_Stone *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->bonus_physical_damage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Medusa_StoneGaze_Stone::GetAbsoluteNoDamageMagical  (line 1229, @0x0000000002c1d290, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Medusa_StoneGaze_Stone::GetAbsoluteNoDamageMagical(
        CDOTA_Modifier_Medusa_StoneGaze_Stone *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Medusa_StoneGaze_Stone::GetOverrideAnimationRate  (line 1236, @0x0000000002c1d2b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Medusa_StoneGaze_Stone::GetOverrideAnimationRate(
        CDOTA_Modifier_Medusa_StoneGaze_Stone *const this,
        const CModifierParams *const params)
{
  return 1uLL;
}


// CDOTA_Modifier_Medusa_StoneGaze_Stone::CheckState  (line 1243, @0x0000000002c1d2c0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Medusa_StoneGaze_Stone::CheckState(
        CDOTA_Modifier_Medusa_StoneGaze_Stone *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x40020uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFBFFDFLL;
}


