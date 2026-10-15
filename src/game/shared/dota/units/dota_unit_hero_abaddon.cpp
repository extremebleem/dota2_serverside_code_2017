// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_abaddon.cpp:37
class CDOTA_Unit_Hero_Abaddon : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Abaddon(CDOTA_Unit_Hero_Abaddon &);
	CDOTA_Unit_Hero_Abaddon(CDOTA_Unit_Hero_Abaddon &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual const char * GetDeathEffectName();
	virtual void OnAlive();
	virtual void OnDeath();
	virtual void OnAggressiveStanceUpdated(bool);
	virtual void CalculateActivityModifiers(Activity);
	CDOTA_Unit_Hero_Abaddon();
	virtual ~CDOTA_Unit_Hero_Abaddon();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[502] GetDeathEffectName
	// vtable[471] OnAlive
	// vtable[470] OnDeath
	// vtable[446] OnAggressiveStanceUpdated
	// vtable[442] CalculateActivityModifiers
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_abaddon.cpp:76
class C_CDOTA_Unit_Hero_Abaddon_MapInstall {
	C_CDOTA_Unit_Hero_Abaddon_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_abaddon.cpp:180
class CDOTA_Ability_Abaddon_DeathCoil : public CDOTABaseAbility {
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
	CDOTA_Ability_Abaddon_DeathCoil(CDOTA_Ability_Abaddon_DeathCoil &);
	CDOTA_Ability_Abaddon_DeathCoil(CDOTA_Ability_Abaddon_DeathCoil &);
	CDOTA_Ability_Abaddon_DeathCoil();
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
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Abaddon_DeathCoil();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_abaddon.cpp:195
class C_CDOTA_Ability_Abaddon_DeathCoil_MapInstall {
	C_CDOTA_Ability_Abaddon_DeathCoil_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_abaddon.cpp:307
class CDOTA_Ability_Abaddon_AphoticShield : public CDOTABaseAbility {
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
	CDOTA_Ability_Abaddon_AphoticShield(CDOTA_Ability_Abaddon_AphoticShield &);
	CDOTA_Ability_Abaddon_AphoticShield(CDOTA_Ability_Abaddon_AphoticShield &);
	CDOTA_Ability_Abaddon_AphoticShield();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Abaddon_AphoticShield();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_abaddon.cpp:346
class CDOTA_Modifier_Abaddon_AphoticShield : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	float damage_absorb;  // +0xbac
	int m_flDamageAbsorbed;  // +0xbb0
	CDOTA_Modifier_Abaddon_AphoticShield();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	virtual void OnIntervalThink();
	ModifierVariant_t GetModifierTotal_ConstantBlock(const CModifierParams &);
	virtual ~CDOTA_Modifier_Abaddon_AphoticShield();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[56] OnIntervalThink
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_abaddon.cpp:509
class CDOTA_Ability_Abaddon_Frostmourne : public CDOTABaseAbility {
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
	CDOTA_Ability_Abaddon_Frostmourne(CDOTA_Ability_Abaddon_Frostmourne &);
	CDOTA_Ability_Abaddon_Frostmourne(CDOTA_Ability_Abaddon_Frostmourne &);
	CDOTA_Ability_Abaddon_Frostmourne();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Abaddon_Frostmourne();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_abaddon.cpp:532
class CDOTA_Modifier_Abaddon_Frostmourne : public CDOTA_Buff {
public:

private:

	float debuff_duration;  // +0xba8
	float buff_duration;  // +0xbac
	CDOTA_Modifier_Abaddon_Frostmourne();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnAttackStart(const CModifierParams &);
	virtual ModifierVariant_t OnAttackLanded(const CModifierParams &);
	virtual ~CDOTA_Modifier_Abaddon_Frostmourne();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[89] OnAttackStart
	// vtable[90] OnAttackLanded
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_abaddon.cpp:625
class CDOTA_Modifier_Abaddon_Frostmourne_Debuff : public CDOTA_Buff {
public:

private:

	float buff_duration;  // +0xba8
	int slow_pct;  // +0xbac
	CDOTA_Modifier_Abaddon_Frostmourne_Debuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnAttackStart(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Abaddon_Frostmourne_Debuff();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_abaddon.cpp:714
class CDOTA_Modifier_Abaddon_Frostmourne_Buff : public CDOTA_Buff {
public:

private:

	int attack_speed;  // +0xba8
	int move_speed_pct;  // +0xbac
	CDOTA_Modifier_Abaddon_Frostmourne_Buff();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual ~CDOTA_Modifier_Abaddon_Frostmourne_Buff();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[67] GetEffectName
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_abaddon.cpp:781
class CDOTA_Ability_Abaddon_BorrowedTime : public CDOTABaseAbility {
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
	CDOTA_Ability_Abaddon_BorrowedTime(CDOTA_Ability_Abaddon_BorrowedTime &);
	CDOTA_Ability_Abaddon_BorrowedTime(CDOTA_Ability_Abaddon_BorrowedTime &);
	CDOTA_Ability_Abaddon_BorrowedTime();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Abaddon_BorrowedTime();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_abaddon.cpp:828
class CDOTA_Modifier_Abaddon_BorrowedTime : public CDOTA_Buff {
public:

	int m_iTotalDamageAbsorbed;  // +0xba8
	CDOTA_Modifier_Abaddon_BorrowedTime();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	virtual bool IsPurgable();
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	ModifierVariant_t GetModifierAvoidDamage(const CModifierParams &);
	virtual int GetPriority();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraRadius();
	virtual float GetAuraDuration();
	virtual ~CDOTA_Modifier_Abaddon_BorrowedTime();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[14] IsPurgable
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// vtable[6] GetPriority
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[41] GetAuraRadius
	// vtable[83] GetAuraDuration
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_abaddon.cpp:951
class CDOTA_Modifier_Abaddon_BorrowedTime_Passive : public CDOTA_Buff {
public:

private:

	int hp_threshold;  // +0xba8
	CDOTA_Modifier_Abaddon_BorrowedTime_Passive();
	virtual void OnCreated(KeyValues *);
	virtual bool IsPermanent();
	virtual bool IsPurgable();
	virtual bool IsHidden();
	virtual void DeclareFunctions();
	ModifierVariant_t OnTakeDamage(const CModifierParams &);
	virtual ~CDOTA_Modifier_Abaddon_BorrowedTime_Passive();

	// vtable[57] OnCreated
	// vtable[23] IsPermanent
	// vtable[14] IsPurgable
	// vtable[11] IsHidden
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_abaddon.cpp:1019
class CDOTA_Modifier_Abaddon_Borrowed_Time_Damage_Redirect : public CDOTA_Buff {
public:

private:

	float redirect;  // +0xba8
	CDOTA_Modifier_Abaddon_Borrowed_Time_Damage_Redirect();
	virtual void OnCreated(KeyValues *);
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierTotal_ConstantBlock(const CModifierParams &);
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Abaddon_Borrowed_Time_Damage_Redirect();

	// vtable[57] OnCreated
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierTotal_ConstantBlock
	// vtable[71] StatusEffectPriority
	// sizeof = 2992
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Abaddon::~CDOTA_Unit_Hero_Abaddon  (line 37, @0x0000000002c999b0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Abaddon::~CDOTA_Unit_Hero_Abaddon(CDOTA_Unit_Hero_Abaddon *const this)
{
  this->_vptr_IHandleEntity = &off_4578610;
  this->_vptr_INextBotEventResponder = &off_45795F0;
  this->_vptr_CObstructionObject = &off_4579920;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Abaddon::~CDOTA_Unit_Hero_Abaddon  (line 37, @0x0000000002c999f0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Abaddon
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Abaddon::~CDOTA_Unit_Hero_Abaddon(CDOTA_Unit_Hero_Abaddon *const this)
{
  this->_vptr_IHandleEntity = &off_4578610;
  this->_vptr_INextBotEventResponder = &off_45795F0;
  this->_vptr_CObstructionObject = &off_4579920;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Abaddon::Schema_DynamicBinding  (line 39, @0x0000000002c86320, libserver.so)
// globals: CDOTA_Unit_Hero_Abaddon::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Abaddon::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Abaddon *const this)
{
  return CDOTA_Unit_Hero_Abaddon::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Abaddon::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 39, @0x0000000002c86350, libserver.so)
// globals: CDOTA_Unit_Hero_Abaddon::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Abaddon::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Abaddon::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Abaddon::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Abaddon::CEntityInstanceEntityClass::DestructInstance  (line 39, @0x0000000002c86360, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Abaddon>
void __fastcall CDOTA_Unit_Hero_Abaddon::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Abaddon::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Abaddon::CEntityInstanceEntityClass::FreeInstance  (line 39, @0x0000000002c86380, libserver.so)
void __fastcall CDOTA_Unit_Hero_Abaddon::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Abaddon::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Abaddon::CEntityInstanceEntityClass::CanAllocate  (line 39, @0x0000000002c863a0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Abaddon::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Abaddon::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Abaddon::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 39, @0x0000000002c863b0, libserver.so)
// globals: CDOTA_Unit_Hero_Abaddon::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Abaddon::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Abaddon::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Abaddon::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Abaddon::CEntityInstanceEntityClass::AllocateInstance  (line 39, @0x0000000002c8ee60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Abaddon::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Abaddon::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Abaddon::CEntityInstanceEntityClass::ConstructInstance  (line 39, @0x0000000002c93d10, libserver.so)  // inlines: CDOTA_Unit_Hero_Abaddon, Construct<CDOTA_Unit_Hero_Abaddon>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Abaddon::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Abaddon::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_4578610;
    *(p + 236) = &off_45795F0;
    *(p + 257) = &off_4579920;
  }
  return p;
}


// CDOTA_Unit_Hero_Abaddon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002ca3590, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Abaddon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Abaddon::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Abaddon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002ca37b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Abaddon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Abaddon::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Abaddon::GetEntityClassInternal  (line 39, @0x0000000002cbcb10, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "npc_dota_hero_abaddon", "CDOTA_Unit_Hero_Abaddon"
// globals: `guard variable for'CDOTA_Unit_Hero_Abaddon::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AbaddonClass, CDOTA_Unit_Hero_Abaddon::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AbaddonClass, __dso_handle, CDOTA_Unit_Hero_Abaddon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Abaddon::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AbaddonClassInfo, CDOTA_Unit_Hero_Abaddon::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AbaddonClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Abaddon::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Abaddon::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AbaddonClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Abaddon::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AbaddonClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Abaddon::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AbaddonClass);
    CDOTA_Unit_Hero_Abaddon::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AbaddonClass._vptr_CEntityClass = off_4578590;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Abaddon::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AbaddonClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Abaddon::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Abaddon::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AbaddonClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_AbaddonClass != 0 )
    return &CDOTA_Unit_Hero_Abaddon::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AbaddonClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Abaddon::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AbaddonClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Abaddon::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AbaddonClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Abaddon::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AbaddonClassInfo,
      "CDOTA_Unit_Hero_Abaddon",
      "npc_dota_hero_abaddon",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Abaddon::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AbaddonClassInfo);
  }
  CDOTA_Unit_Hero_Abaddon::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AbaddonClass.m_pClassInfo = &CDOTA_Unit_Hero_Abaddon::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AbaddonClassInfo;
  CDOTA_Unit_Hero_Abaddon::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AbaddonClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Abaddon::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AbaddonClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_AbaddonClass = &CDOTA_Unit_Hero_Abaddon::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AbaddonClass;
  CDOTA_Unit_Hero_Abaddon::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_AbaddonClassInfo.m_pClass = &CDOTA_Unit_Hero_Abaddon::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AbaddonClass;
  CDOTA_Unit_Hero_Abaddon::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AbaddonClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_AbaddonClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Abaddon::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_AbaddonClass;
}


// CDOTA_Unit_Hero_Abaddon::GetDeathEffectName  (line 44, @0x0000000002c863c0, libserver.so)
// strings: "particles/units/heroes/hero_abaddon/abaddon_death.vpcf"
const char *__fastcall CDOTA_Unit_Hero_Abaddon::GetDeathEffectName(CDOTA_Unit_Hero_Abaddon *const this)
{
  return "particles/units/heroes/hero_abaddon/abaddon_death.vpcf";
}


// CDOTA_Unit_Hero_Abaddon::CalculateActivityModifiers  (line 55, @0x0000000002c94340, libserver.so)
// calls: CDOTA_BaseNPC::CalculateActivityModifiers, CDOTA_BaseNPC::AddActivityModifier
void __fastcall CDOTA_Unit_Hero_Abaddon::CalculateActivityModifiers(
        CDOTA_Unit_Hero_Abaddon *const this,
        Activity iActivity)
{
  UtlSymId_t v3[16]; // [rsp+0h] [rbp-20h] BYREF

  CDOTA_BaseNPC::CalculateActivityModifiers(this, iActivity);
  if ( (*(this->_vptr_IHandleEntity + 386))(this) <= 350 )
    CDOTA_BaseNPC::AddActivityModifier(v3, this, "walk");
}


// CDOTA_Unit_Hero_Abaddon::YouForgotToImplementOrDeclareServerClass  (line 76, @0x0000000002c1b3a0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Abaddon::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Abaddon *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Abaddon::GetServerClass  (line 76, @0x0000000002c34d70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Abaddon::GetServerClass(CDOTA_Unit_Hero_Abaddon *const this)
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


// CDOTA_Unit_Hero_Abaddon::Spawn  (line 85, @0x0000000002c1e800, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Spawn, CDOTA_BaseNPC_Hero::CacheTogglableWearable
void __fastcall CDOTA_Unit_Hero_Abaddon::Spawn(CDOTA_Unit_Hero_Abaddon *const this, const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
  CDOTA_BaseNPC_Hero::CacheTogglableWearable(this, 0);
}


// CDOTA_Unit_Hero_Abaddon::OnAlive  (line 93, @0x0000000002c1e830, libserver.so)  // inlines: GetTogglableWearable
// calls: CDOTA_BaseNPC_Hero::CacheTogglableWearable, CBaseEntity::AddEffects
void __fastcall CDOTA_Unit_Hero_Abaddon::OnAlive(CDOTA_Unit_Hero_Abaddon *const this)
{
  CEconWearable *v2; // rdi

  CDOTA_BaseNPC_Hero::CacheTogglableWearable(this, 0);
  v2 = this->m_pTogglableWearable[0];
  if ( v2 != 0 )
  {
    CBaseEntity::AddEffects(v2, 32);
    (*(this->m_pTogglableWearable[0]->_vptr_IHandleEntity + 213))(this->m_pTogglableWearable[0]);
  }
}


// CDOTA_Unit_Hero_Abaddon::OnDeath  (line 124, @0x0000000002c1e880, libserver.so)
// calls: CBaseEntity::AddEffects
void __fastcall CDOTA_Unit_Hero_Abaddon::OnDeath(CDOTA_Unit_Hero_Abaddon *const this)
{
  if ( !this->m_bCustomKillEffect.m_Value )
    CBaseEntity::AddEffects(this, 32);
}


// CDOTA_Unit_Hero_Abaddon::OnAggressiveStanceUpdated  (line 145, @0x0000000002c2b6f0, libserver.so)  // inlines: GetTogglableWearable, MarkPVSInformationDirty, RemoveEffects
// calls: CDOTA_BaseNPC::StartGesture, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CBaseEntity::AddEffects, CBaseEntity::DispatchUpdateTransmitState
// strings: "particles/units/heroes/hero_abaddon/abaddon_weapon_destroy.vpcf", "attach_attack1", "particles/units/heroes/hero_abaddon/abaddon_weapon_create.vpcf"
void __fastcall CDOTA_Unit_Hero_Abaddon::OnAggressiveStanceUpdated(
        CDOTA_Unit_Hero_Abaddon *const this,
        bool bAggressive)
{
  CDOTA_ParticleManager *v3; // rax
  int v4; // r12d
  CDOTA_ParticleManager *v5; // rax
  CDOTA_ParticleManager *v6; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_ParticleManager *v9; // rax
  CDOTA_ParticleManager *v10; // rax
  CEconWearable *v11; // r12

  if ( this->m_pTogglableWearable[0] != 0 )
  {
    if ( bAggressive )
    {
      CDOTA_BaseNPC::StartGesture(this, 1610, 0.5, 0.5, 9, 0, 1.0);
      ParticleManager = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_abaddon/abaddon_weapon_create.vpcf",
                   1,
                   this,
                   0,
                   0);
      v9 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v9, Particle, 0, this, 5, "attach_attack1", vec3_invalid, 1);
      v10 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v10, Particle);
      v11 = this->m_pTogglableWearable[0];
      (*(v11->_vptr_IHandleEntity + 188))(v11, v11->m_fEffects.m_Value & 0xFFFFFFDF);
      v11->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
      CBaseEntity::DispatchUpdateTransmitState(v11);
    }
    else
    {
      CDOTA_BaseNPC::StartGesture(this, 1608, 0.5, 0.5, 9, 0, 1.0);
      v3 = GetParticleManager();
      v4 = CDOTA_ParticleManager::CreateParticle(
             v3,
             "particles/units/heroes/hero_abaddon/abaddon_weapon_destroy.vpcf",
             1,
             this,
             0,
             0);
      v5 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v5, v4, 0, this, 5, "attach_attack1", vec3_invalid, 1);
      v6 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v6, v4);
      CBaseEntity::AddEffects(this->m_pTogglableWearable[0], 32);
    }
    (*(this->m_pTogglableWearable[0]->_vptr_IHandleEntity + 213))(this->m_pTogglableWearable[0]);
  }
}


// CDOTA_Ability_Abaddon_DeathCoil::~CDOTA_Ability_Abaddon_DeathCoil  (line 180, @0x0000000002c979d0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Abaddon_DeathCoil::~CDOTA_Ability_Abaddon_DeathCoil(
        CDOTA_Ability_Abaddon_DeathCoil *const this)
{
  this->_vptr_IHandleEntity = &off_45799F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Abaddon_DeathCoil::~CDOTA_Ability_Abaddon_DeathCoil  (line 180, @0x0000000002c979f0, libserver.so)  // inlines: ~CDOTA_Ability_Abaddon_DeathCoil
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Abaddon_DeathCoil::~CDOTA_Ability_Abaddon_DeathCoil(
        CDOTA_Ability_Abaddon_DeathCoil *const this)
{
  this->_vptr_IHandleEntity = &off_45799F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Abaddon_DeathCoil::Schema_DynamicBinding  (line 182, @0x0000000002c863d0, libserver.so)
// globals: CDOTA_Ability_Abaddon_DeathCoil::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Abaddon_DeathCoil::Schema_DynamicBinding(
        const CDOTA_Ability_Abaddon_DeathCoil *const this)
{
  return CDOTA_Ability_Abaddon_DeathCoil::s_pSchemaBinding;
}


// CDOTA_Ability_Abaddon_DeathCoil::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 182, @0x0000000002c863e0, libserver.so)
// globals: CDOTA_Ability_Abaddon_DeathCoil::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Abaddon_DeathCoil::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Abaddon_DeathCoil::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Abaddon_DeathCoil::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Abaddon_DeathCoil::CEntityInstanceEntityClass::DestructInstance  (line 182, @0x0000000002c863f0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Abaddon_DeathCoil>
void __fastcall CDOTA_Ability_Abaddon_DeathCoil::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Abaddon_DeathCoil::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Abaddon_DeathCoil::CEntityInstanceEntityClass::FreeInstance  (line 182, @0x0000000002c86410, libserver.so)
void __fastcall CDOTA_Ability_Abaddon_DeathCoil::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Abaddon_DeathCoil::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Abaddon_DeathCoil::CEntityInstanceEntityClass::CanAllocate  (line 182, @0x0000000002c86430, libserver.so)
bool __fastcall CDOTA_Ability_Abaddon_DeathCoil::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Abaddon_DeathCoil::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Abaddon_DeathCoil::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 182, @0x0000000002c86440, libserver.so)
// globals: CDOTA_Ability_Abaddon_DeathCoil::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Abaddon_DeathCoil::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Abaddon_DeathCoil::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Abaddon_DeathCoil::s_pSchemaBinding;
}


// CDOTA_Ability_Abaddon_DeathCoil::CEntityInstanceEntityClass::AllocateInstance  (line 182, @0x0000000002c8eea0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Abaddon_DeathCoil::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Abaddon_DeathCoil::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Abaddon_DeathCoil::CEntityInstanceEntityClass::ConstructInstance  (line 182, @0x0000000002c94390, libserver.so)  // inlines: CDOTA_Ability_Abaddon_DeathCoil, Construct<CDOTA_Ability_Abaddon_DeathCoil>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Abaddon_DeathCoil::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Abaddon_DeathCoil::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_45799F0;
  }
  return p;
}


// CDOTA_Ability_Abaddon_DeathCoil::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 182, @0x0000000002ca1440, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Abaddon_DeathCoil::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Abaddon_DeathCoil::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Abaddon_DeathCoil::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 182, @0x0000000002ca1460, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Abaddon_DeathCoil::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Abaddon_DeathCoil::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Abaddon_DeathCoil::GetEntityClassInternal  (line 182, @0x0000000002cb7ef0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "abaddon_death_coil", "CDOTA_Ability_Abaddon_DeathCoil"
// globals: `guard variable for'CDOTA_Ability_Abaddon_DeathCoil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_DeathCoilClass, CDOTA_Ability_Abaddon_DeathCoil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_DeathCoilClass, __dso_handle, CDOTA_Ability_Abaddon_DeathCoil::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Abaddon_DeathCoil::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_DeathCoilClassInfo, CDOTA_Ability_Abaddon_DeathCoil::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_DeathCoilClassInfo
CEntityClass *__cdecl CDOTA_Ability_Abaddon_DeathCoil::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Abaddon_DeathCoil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_DeathCoilClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Abaddon_DeathCoil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_DeathCoilClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Abaddon_DeathCoil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_DeathCoilClass);
    CDOTA_Ability_Abaddon_DeathCoil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_DeathCoilClass._vptr_CEntityClass = off_4579970;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Abaddon_DeathCoil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_DeathCoilClass);
    __cxa_atexit(
      CDOTA_Ability_Abaddon_DeathCoil::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Abaddon_DeathCoil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_DeathCoilClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Abaddon_DeathCoilClass != 0 )
    return &CDOTA_Ability_Abaddon_DeathCoil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_DeathCoilClass;
  if ( `guard variable for'CDOTA_Ability_Abaddon_DeathCoil::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_DeathCoilClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Abaddon_DeathCoil::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_DeathCoilClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Abaddon_DeathCoil::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_DeathCoilClassInfo,
      "CDOTA_Ability_Abaddon_DeathCoil",
      "abaddon_death_coil",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Abaddon_DeathCoil::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_DeathCoilClassInfo);
  }
  CDOTA_Ability_Abaddon_DeathCoil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_DeathCoilClass.m_pClassInfo = &CDOTA_Ability_Abaddon_DeathCoil::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_DeathCoilClassInfo;
  CDOTA_Ability_Abaddon_DeathCoil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_DeathCoilClass.m_pBaseClassInfo = CDOTA_Ability_Abaddon_DeathCoil::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_DeathCoilClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Abaddon_DeathCoilClass = &CDOTA_Ability_Abaddon_DeathCoil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_DeathCoilClass;
  CDOTA_Ability_Abaddon_DeathCoil::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_DeathCoilClassInfo.m_pClass = &CDOTA_Ability_Abaddon_DeathCoil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_DeathCoilClass;
  CDOTA_Ability_Abaddon_DeathCoil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_DeathCoilClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Abaddon_DeathCoilClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Abaddon_DeathCoil::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_DeathCoilClass;
}


// CDOTA_Ability_Abaddon_DeathCoil::YouForgotToImplementOrDeclareServerClass  (line 195, @0x0000000002c1b3b0, libserver.so)
int __fastcall CDOTA_Ability_Abaddon_DeathCoil::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Abaddon_DeathCoil *const this)
{
  return 0;
}


// CDOTA_Ability_Abaddon_DeathCoil::GetServerClass  (line 195, @0x0000000002c34df0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Abaddon_DeathCoil::GetServerClass(CDOTA_Ability_Abaddon_DeathCoil *const this)
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


// CDOTA_Ability_Abaddon_DeathCoil::OnSpellStart  (line 205, @0x0000000002c64d10, libserver.so)  // inlines: CEntityHandle, CHandle, Color, GetEHandle, GetEntryIndex, GetSerialNumber, Set, ToDOTABaseNPC, operator=, sTrackingProjectileCreateInfo
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CDOTA_ProjectileManager::CreateTrackingProjectile, CDOTABaseAbility::GetLevelSpecialValueFor<float>, ApplyDamage, DOTA_EmitSound, __stack_chk_fail
// strings: "particles/units/heroes/hero_abaddon/abaddon_death_coil.vpcf", "self_damage", "Hero_Abaddon.DeathCoil.Cast"
void __fastcall CDOTA_Ability_Abaddon_DeathCoil::OnSpellStart(CDOTA_Ability_Abaddon_DeathCoil *const this)
{
  CBaseEntity *CursorTarget; // rax
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v7; // cx
  CBaseEntity *v8; // rax
  CEntityIdentity *v9; // rdx
  __int16 v10; // cx
  CDOTA_BaseNPC *v11; // r12
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  float flDamage; // [rsp+Ch] [rbp-84h]
  sTrackingProjectileCreateInfo info; // [rsp+10h] [rbp-80h] BYREF
  unsigned __int64 v16; // [rsp+78h] [rbp-18h]

  v16 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    info.bProvidesVision = 0;
    info.hSource.m_Index = -1;
    info.hTarget.m_Index = -1;
    info.colorGemColor = 0;
    info.pAttackRecord = 0;
    info.vSourceLoc.x = vec3_origin.x;
    y = vec3_origin.y;
    info.iMoveSpeed = 0;
    info.vSourceLoc.y = y;
    z = vec3_origin.z;
    info.iSourceAttachment = 1;
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
    info.pszEffectName = "particles/units/heroes/hero_abaddon/abaddon_death_coil.vpcf";
    info.pAbility = this;
    info.iMoveSpeed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "missile_speed", -1, 0);
    Caster = CDOTABaseAbility::GetCaster(this);
    if ( Caster != 0 && (m_pEntity = Caster->m_pEntity) != 0 )
    {
      v7 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v7 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      info.hSource.m_Index = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v7 & 0x7FFF;
      v8 = CDOTABaseAbility::GetCursorTarget(this);
      if ( v8 == 0 )
        goto LABEL_15;
    }
    else
    {
      info.hSource.m_Index = -1;
      v8 = CDOTABaseAbility::GetCursorTarget(this);
      if ( v8 == 0 )
        goto LABEL_15;
    }
    v9 = v8->m_pEntity;
    if ( v9 != 0 )
    {
      v10 = 0x7FFF;
      if ( v9->m_EHandle.m_Index != -1 )
        v10 = v9->m_EHandle.m_Index & 0x7FFF;
      info.hTarget.m_Index = (((v9->m_EHandle.m_Index >> 15) - (v9->m_flags & 1)) << 15) | v10 & 0x7FFF;
      goto LABEL_12;
    }
LABEL_15:
    info.hTarget.m_Index = -1;
LABEL_12:
    info.iSourceAttachment = 1;
    CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
  }
  flDamage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "self_damage", -1, 0);
  v11 = CDOTABaseAbility::GetCaster(this);
  v12 = CDOTABaseAbility::GetCaster(this);
  ApplyDamage(v12, v11, this, flDamage, 4, 0);
  v13 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Abaddon.DeathCoil.Cast", v13);
}


// CDOTA_Ability_Abaddon_DeathCoil::OnProjectileHit  (line 238, @0x0000000002c64fa0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsRealHero, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, DOTA_EmitSound, CBaseEntity::GetHealth, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::Heal, EconEntity_OnOwnerKillEaterEvent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetLevelSpecialValueFor<float>, ApplyDamage
// strings: "Hero_Abaddon.DeathCoil.Target", "particles/generic_gameplay/generic_lifesteal.vpcf", "target_damage"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
__int64 __fastcall CDOTA_Ability_Abaddon_DeathCoil::OnProjectileHit(
        CDOTA_Ability_Abaddon_DeathCoil *const this,
        unsigned __int16 *hTarget,
        const Vector *const vLocation)
{
  int v4; // eax
  unsigned __int64 v5; // rsi
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CEntityInstance *m_pInstance; // rbx
  char m_CScriptComponent_high; // r13
  int (**vptr_IHandleEntity)(...); // rax
  int Health; // r14d
  int LevelSpecialValue; // eax
  int v14; // r13d
  CDOTA_BaseNPC_Hero *v15; // r14
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC_Hero *v17; // rdi
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r12d
  CDOTA_ParticleManager *v20; // rax
  CDOTA_BaseNPC *v21; // rax
  double v22; // xmm0_8
  CDOTA_BaseNPC_Hero *v23; // r13
  CDOTA_BaseNPC *v24; // rax
  CDOTA_BaseNPC_Hero *v25; // rdi
  float flDamage; // [rsp+Ch] [rbp-24h]

  v4 = *hTarget;
  if ( (*hTarget + 2) > 1 )
  {
    v5 = *hTarget;
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v5 >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[v5 & 0x1FF];
      if ( v7 != 0 && v4 == v7->m_EHandle.m_Index )
      {
        m_pInstance = v7->m_pInstance;
        if ( v7->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
        {
          m_CScriptComponent_high = HIBYTE(m_pInstance[7].m_CScriptComponent);
          if ( m_CScriptComponent_high == CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
          {
            Health = CBaseEntity::GetHealth(m_pInstance);
            LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "heal_amount", -1, 0);
            CDOTA_BaseNPC::Heal(m_pInstance, LevelSpecialValue, this, 0, 1);
            v14 = CBaseEntity::GetHealth(m_pInstance) - Health;
            if ( v14 > 0 )
            {
              v15 = 0;
              if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
              {
                v15 = m_pInstance;
              }
              Caster = CDOTABaseAbility::GetCaster(this);
              if ( Caster == 0
                || !Caster->m_bIsDOTANPC
                || (Caster->m_iUnitType & 1) == 0
                || (v17 = Caster, Caster->m_bIsIllusion.m_Value) )
              {
                v17 = 0;
              }
              EconEntity_OnOwnerKillEaterEvent(
                v17,
                v15,
                kill_eater_event_t::kKillEaterEventType_Abaddon_MistCoilHealed,
                v14,
                INVALID_ITEM_DEF_INDEX);
            }
            ParticleManager = GetParticleManager();
            Particle = CDOTA_ParticleManager::CreateParticle(
                         ParticleManager,
                         "particles/generic_gameplay/generic_lifesteal.vpcf",
                         1,
                         m_pInstance,
                         0,
                         0);
            v20 = GetParticleManager();
            CDOTA_ParticleManager::ReleaseParticleIndex(v20, Particle);
          }
          else if ( LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0 )
          {
            vptr_IHandleEntity = m_pInstance[58]._vptr_IHandleEntity;
            if ( (BYTE1(vptr_IHandleEntity) & 1) == 0
              && (BYTE1(vptr_IHandleEntity) & 2) == 0
              && !CDOTA_BaseNPC::TriggerSpellAbsorb(m_pInstance, this, 1) )
            {
              flDamage = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "target_damage", -1, 0);
              v21 = CDOTABaseAbility::GetCaster(this);
              v22 = ApplyDamage(v21, m_pInstance, this, flDamage, 2, 0);
              if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                && LOBYTE(m_pInstance[71].m_pEntity) == 0
                && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance, v22) == 0 )
              {
                v23 = 0;
                if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
                  && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                  && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
                {
                  v23 = m_pInstance;
                }
                v24 = CDOTABaseAbility::GetCaster(this);
                v25 = 0;
                if ( v24 != 0 && v24->m_bIsDOTANPC && (v24->m_iUnitType & 1) != 0 && !v24->m_bIsIllusion.m_Value )
                  v25 = v24;
                EconEntity_OnOwnerKillEaterEvent(
                  v25,
                  v23,
                  kill_eater_event_t::kKillEaterEventType_Abaddon_MistCoilKills,
                  1,
                  INVALID_ITEM_DEF_INDEX);
              }
            }
          }
          DOTA_EmitSound(10, "Hero_Abaddon.DeathCoil.Target", m_pInstance);
        }
      }
    }
  }
  return 1;
}


// CDOTA_Ability_Abaddon_DeathCoil::CastFilterResult  (line 274, @0x0000000002c1ea50, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTABaseAbility::CastFilterResult
int __fastcall CDOTA_Ability_Abaddon_DeathCoil::CastFilterResult(
        CDOTA_Ability_Abaddon_DeathCoil *const this,
        CDOTA_BaseNPC *pTarget)
{
  if ( CDOTABaseAbility::GetCaster(this) == pTarget )
    return 23;
  else
    return CDOTABaseAbility::CastFilterResult(this, pTarget);
}


// CDOTA_Ability_Abaddon_DeathCoil::GetCustomCastError  (line 285, @0x0000000002c1e8e0, libserver.so)
// calls: CDOTABaseAbility::GetCaster
// strings: "#dota_hud_error_cant_cast_on_self"
const char *__fastcall CDOTA_Ability_Abaddon_DeathCoil::GetCustomCastError(
        CDOTA_Ability_Abaddon_DeathCoil *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  const char *v4; // rdx

  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = "#dota_hud_error_cant_cast_on_self";
  if ( Caster != pTarget )
    return "";
  return v4;
}


// CDOTA_Ability_Abaddon_DeathCoil::GetAbilityDamageToTargetOverInterval  (line 295, @0x0000000002c5ae10, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "target_damage"
__int64 __fastcall CDOTA_Ability_Abaddon_DeathCoil::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Abaddon_DeathCoil *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r12d

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "target_damage", -1, 0);
    return (LevelSpecialValue * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


// CDOTA_Ability_Abaddon_AphoticShield::~CDOTA_Ability_Abaddon_AphoticShield  (line 307, @0x0000000002c97a20, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Abaddon_AphoticShield::~CDOTA_Ability_Abaddon_AphoticShield(
        CDOTA_Ability_Abaddon_AphoticShield *const this)
{
  this->_vptr_IHandleEntity = &off_457A4F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Abaddon_AphoticShield::~CDOTA_Ability_Abaddon_AphoticShield  (line 307, @0x0000000002c97a40, libserver.so)  // inlines: ~CDOTA_Ability_Abaddon_AphoticShield
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Abaddon_AphoticShield::~CDOTA_Ability_Abaddon_AphoticShield(
        CDOTA_Ability_Abaddon_AphoticShield *const this)
{
  this->_vptr_IHandleEntity = &off_457A4F0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Abaddon_AphoticShield::Schema_DynamicBinding  (line 309, @0x0000000002c86450, libserver.so)
// globals: CDOTA_Ability_Abaddon_AphoticShield::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Abaddon_AphoticShield::Schema_DynamicBinding(
        const CDOTA_Ability_Abaddon_AphoticShield *const this)
{
  return CDOTA_Ability_Abaddon_AphoticShield::s_pSchemaBinding;
}


// CDOTA_Ability_Abaddon_AphoticShield::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 309, @0x0000000002c86460, libserver.so)
// globals: CDOTA_Ability_Abaddon_AphoticShield::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Abaddon_AphoticShield::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Abaddon_AphoticShield::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Abaddon_AphoticShield::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Abaddon_AphoticShield::CEntityInstanceEntityClass::DestructInstance  (line 309, @0x0000000002c86470, libserver.so)  // inlines: Destruct<CDOTA_Ability_Abaddon_AphoticShield>
void __fastcall CDOTA_Ability_Abaddon_AphoticShield::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Abaddon_AphoticShield::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Abaddon_AphoticShield::CEntityInstanceEntityClass::FreeInstance  (line 309, @0x0000000002c86490, libserver.so)
void __fastcall CDOTA_Ability_Abaddon_AphoticShield::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Abaddon_AphoticShield::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Abaddon_AphoticShield::CEntityInstanceEntityClass::CanAllocate  (line 309, @0x0000000002c864b0, libserver.so)
bool __fastcall CDOTA_Ability_Abaddon_AphoticShield::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Abaddon_AphoticShield::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Abaddon_AphoticShield::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 309, @0x0000000002c864c0, libserver.so)
// globals: CDOTA_Ability_Abaddon_AphoticShield::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Abaddon_AphoticShield::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Abaddon_AphoticShield::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Abaddon_AphoticShield::s_pSchemaBinding;
}


// CDOTA_Ability_Abaddon_AphoticShield::CEntityInstanceEntityClass::AllocateInstance  (line 309, @0x0000000002c8eee0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Abaddon_AphoticShield::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Abaddon_AphoticShield::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Abaddon_AphoticShield::CEntityInstanceEntityClass::ConstructInstance  (line 309, @0x0000000002c943c0, libserver.so)  // inlines: CDOTA_Ability_Abaddon_AphoticShield, Construct<CDOTA_Ability_Abaddon_AphoticShield>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Abaddon_AphoticShield::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Abaddon_AphoticShield::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_457A4F0;
  }
  return p;
}


// CDOTA_Ability_Abaddon_AphoticShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 309, @0x0000000002ca1490, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Abaddon_AphoticShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Abaddon_AphoticShield::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Abaddon_AphoticShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 309, @0x0000000002ca14b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Abaddon_AphoticShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Abaddon_AphoticShield::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal  (line 309, @0x0000000002cc4610, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "abaddon_aphotic_shield", "CDOTA_Ability_Abaddon_AphoticShield"
// globals: `guard variable for'CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass, CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Abaddon_AphoticShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClassInfo, CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClassInfo
CEntityClass *__cdecl CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass) != 0 )
  {
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_pClassInfo = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_flags = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_pInputs = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_nInputCount = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_pOutputs = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_nOutputCount = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_pGameClass = 0;
    CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass._vptr_CEntityClass = off_457A470;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass);
    __cxa_atexit(
      CDOTA_Ability_Abaddon_AphoticShield::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Abaddon_AphoticShieldClass != 0 )
    return &CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass;
  if ( `guard variable for'CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClassInfo,
      "CDOTA_Ability_Abaddon_AphoticShield",
      "abaddon_aphotic_shield",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClassInfo);
  }
  CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_pClassInfo = &CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClassInfo;
  CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_pBaseClassInfo = CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Abaddon_AphoticShieldClass = &CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass;
  CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClassInfo.m_pClass = &CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass;
  CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Abaddon_AphoticShieldClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Abaddon_AphoticShield::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_AphoticShieldClass;
}


// CDOTA_Ability_Abaddon_AphoticShield::OnSpellStart  (line 319, @0x0000000002c524b0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::RemoveModifierByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, Purge, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_abaddon_aphotic_shield", "Hero_Abaddon.AphoticShield.Cast", "Hero_Abaddon.AphoticShield.Loop"
void __fastcall CDOTA_Ability_Abaddon_AphoticShield::OnSpellStart(CDOTA_Ability_Abaddon_AphoticShield *const this)
{
  CDOTA_BaseNPC *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  float v4; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-28h]

  v7 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    CDOTA_BaseNPC::RemoveModifierByName(CursorTarget, "modifier_abaddon_aphotic_shield");
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
    KeyValues::KeyValues(&kv, "modifier_abaddon_aphotic_shield");
    KeyValues::SetFloat(&kv, "duration", v4);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_abaddon_aphotic_shield", &kv, 0);
    Purge(v3, this, 28);
    DOTA_EmitSound(10, "Hero_Abaddon.AphoticShield.Cast", v3);
    DOTA_EmitSound(10, "Hero_Abaddon.AphoticShield.Loop", v3);
    KeyValues::~KeyValues(&kv);
  }
}


// CDOTA_Modifier_Abaddon_AphoticShield::~CDOTA_Modifier_Abaddon_AphoticShield  (line 346, @0x0000000002c93a50, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Abaddon_AphoticShield::~CDOTA_Modifier_Abaddon_AphoticShield(
        CDOTA_Modifier_Abaddon_AphoticShield *const this)
{
  this->_vptr_CDOTA_Buff = &off_457AFB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Abaddon_AphoticShield::~CDOTA_Modifier_Abaddon_AphoticShield  (line 346, @0x0000000002c93a70, libserver.so)  // inlines: ~CDOTA_Modifier_Abaddon_AphoticShield
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Abaddon_AphoticShield::~CDOTA_Modifier_Abaddon_AphoticShield(
        CDOTA_Modifier_Abaddon_AphoticShield *const this)
{
  this->_vptr_CDOTA_Buff = &off_457AFB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Abaddon_AphoticShield::OnCreated  (line 375, @0x0000000002c72230, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_Buff::StartIntervalThink
// strings: "damage_absorb", "special_bonus_unique_abaddon"
void __fastcall CDOTA_Modifier_Abaddon_AphoticShield::OnCreated(
        CDOTA_Modifier_Abaddon_AphoticShield *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v7; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability == 0 )
  {
    this->damage_absorb = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_9:
    this->radius = 0;
    goto LABEL_4;
  }
  this->damage_absorb = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "damage_absorb", -1, 0);
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_9;
LABEL_3:
  this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "radius", -1, 0);
LABEL_4:
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_abaddon", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->damage_absorb = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1)
                        + this->damage_absorb;
  this->m_flDamageAbsorbed = 0;
  CDOTA_Buff::StartIntervalThink(this, 0.1, v7);
}


// CDOTA_Modifier_Abaddon_AphoticShield::OnRefresh  (line 406, @0x0000000002c65270, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "damage_absorb", "special_bonus_unique_abaddon"
void __fastcall CDOTA_Modifier_Abaddon_AphoticShield::OnRefresh(
        CDOTA_Modifier_Abaddon_AphoticShield *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->damage_absorb = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "damage_absorb", -1, 0);
  else
    this->damage_absorb = 0.0;
  Caster = CDOTA_Buff::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_abaddon", 0);
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    this->damage_absorb = CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1)
                        + this->damage_absorb;
  this->m_flDamageAbsorbed = 0;
}


// CDOTA_Modifier_Abaddon_AphoticShield::DeclareFunctions  (line 421, @0x0000000002c1b3c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Abaddon_AphoticShield::GetModifierTotal_ConstantBlock(CModifierParams const&)
void __fastcall CDOTA_Modifier_Abaddon_AphoticShield::DeclareFunctions(
        CDOTA_Modifier_Abaddon_AphoticShield *const this)
{
  this->m_Functions[89].__pfn = CDOTA_Modifier_Abaddon_AphoticShield::GetModifierTotal_ConstantBlock;
  this->m_Functions[89].__delta = 0;
}


// CDOTA_Modifier_Abaddon_AphoticShield::GetModifierTotal_ConstantBlock  (line 428, @0x0000000002c2a620, libserver.so)  // inlines: CWeakHandle, Init, Vector
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::FindModifierByName, CBaseEntity::GetModel, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_Buff::GetCaster, CDOTA_CombatLog::AddPhysicalDamagePreventedEvent
// strings: "modifier_abaddon_borrowed_time", "particles/units/heroes/hero_abaddon/abaddon_aphotic_shield_hit.vpcf", "attach_hitloc"
ModifierVariant_t __fastcall CDOTA_Modifier_Abaddon_AphoticShield::GetModifierTotal_ConstantBlock(
        CDOTA_Modifier_Abaddon_AphoticShield *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_Buff *ModifierByName; // rax
  __m128i fDamage_low; // xmm0
  vec_t z; // eax
  CDOTA_BaseNPC *v9; // rax
  unsigned __int8 (__fastcall *v10)(IGameModelInfo *, const ResourceBindingBase_t **); // rax
  CDOTA_BaseNPC *v11; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v13; // r14
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  CDOTA_ParticleManager *v16; // rax
  int v17; // eax
  float damage_absorb; // xmm0_4
  float v19; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  int v21; // eax
  void (__fastcall *v22)(IGameModelInfo *, const ResourceBindingBase_t **, Vector *, Vector *); // rax
  float flDamageToAbsorb; // [rsp+Ch] [rbp-64h]
  float flDamageToAbsorba; // [rsp+Ch] [rbp-64h]
  HModel mod; // [rsp+10h] [rbp-60h] BYREF
  Vector vecMins; // [rsp+20h] [rbp-50h] BYREF
  Vector vecMaxs; // [rsp+30h] [rbp-40h] BYREF
  const ResourceBindingBase_t *m_pBinding; // [rsp+40h] [rbp-30h] BYREF
  float v29; // [rsp+48h] [rbp-28h]
  ModifierVariant_t result; // 0:rax.16

  if ( (params->nDamageflags & 0x20) != 0 || params->fDamage <= 0.0 )
    return 1uLL;
  Parent = CDOTA_Buff::GetParent(this);
  ModifierByName = CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_abaddon_borrowed_time", 0);
  fDamage_low = 0;
  if ( ModifierByName == 0 )
  {
    z = vec3_origin.z;
    *&vecMaxs.x = *&vec3_origin.x;
    vecMaxs.z = z;
    v9 = CDOTA_Buff::GetParent(this);
    CBaseEntity::GetModel(&mod, v9);
    v10 = *(modelinfo->_vptr_IAppSystem + 14);
    m_pBinding = mod.m_pBinding;
    if ( v10(modelinfo, &m_pBinding) != 0 )
    {
      v22 = *(modelinfo->_vptr_IAppSystem + 16);
      m_pBinding = mod.m_pBinding;
      v22(modelinfo, &m_pBinding, &vecMins, &vecMaxs);
    }
    flDamageToAbsorb = (vecMaxs.z - vecMins.z) / 2.75;
    v11 = CDOTA_Buff::GetParent(this);
    ParticleManager = GetParticleManager();
    LODWORD(v11) = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/units/heroes/hero_abaddon/abaddon_aphotic_shield_hit.vpcf",
                     2,
                     v11,
                     0,
                     0);
    v13 = CDOTA_Buff::GetParent(this);
    v14 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v14, v11, 0, v13, 5, "attach_hitloc", vec3_invalid, 1);
    *&m_pBinding = flDamageToAbsorb;
    *(&m_pBinding + 1) = flDamageToAbsorb;
    v29 = flDamageToAbsorb;
    v15 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v15, v11, 1, *&m_pBinding, v29);
    v16 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v16, v11);
    v17 = (this->m_flDamageAbsorbed + params->fDamage);
    damage_absorb = this->damage_absorb;
    this->m_flDamageAbsorbed = v17;
    if ( v17 <= damage_absorb )
    {
      fDamage_low = LODWORD(params->fDamage);
    }
    else
    {
      v19 = v17 - damage_absorb;
      fDamage_low = LODWORD(params->fDamage);
      *fDamage_low.m128i_i32 = *fDamage_low.m128i_i32 - v19;
    }
    if ( params->nDamageType == 1 )
    {
      flDamageToAbsorba = *fDamage_low.m128i_i32;
      Caster = CDOTA_Buff::GetCaster(this);
      v21 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
      CDOTA_CombatLog::AddPhysicalDamagePreventedEvent(&g_DOTACombatLog, v21, flDamageToAbsorba);
      fDamage_low = LODWORD(flDamageToAbsorba);
    }
  }
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(fDamage_low) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Abaddon_AphoticShield::OnIntervalThink  (line 468, @0x0000000002c25a70, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Abaddon_AphoticShield::OnIntervalThink(CDOTA_Modifier_Abaddon_AphoticShield *const this)
{
  if ( this->m_flDamageAbsorbed > this->damage_absorb )
    CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Abaddon_AphoticShield::OnDestroy  (line 480, @0x0000000002c4e260, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsRealHero, IsValid, LookupEntity, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, FindUnitsInRadius, CDOTA_Buff::GetAbility, ApplyDamage, EconEntity_OnOwnerKillEaterEvent, DOTA_EmitSound, CBaseEntity::StopSound, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// strings: "Hero_Abaddon.AphoticShield.Destroy", "Hero_Abaddon.AphoticShield.Loop"
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_Abaddon_AphoticShield::OnDestroy(CDOTA_Modifier_Abaddon_AphoticShield *const this)
{
  __m128i v1; // xmm2
  float v3; // r14d
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *Caster; // rax
  __int64 v8; // rbx
  CHandle<CBaseEntity> *v9; // rdx
  uint32 m_Index; // eax
  __int16 v11; // cx
  CEntityIdentity *v12; // rdx
  CEntityIdentity *v13; // rdx
  CEntityInstance *m_pInstance; // r12
  int (**vptr_IHandleEntity)(...); // rax
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *v17; // rax
  double v18; // xmm0_8
  CDOTA_BaseNPC_Hero *v19; // r14
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC_Hero *v21; // rdi
  CDOTA_BaseNPC *v22; // rax
  CDOTA_BaseNPC *v23; // rax
  float flDamage; // [rsp+1Ch] [rbp-54h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > hEntities; // [rsp+20h] [rbp-50h] BYREF

  hEntities.m_Size = 0;
  *v1.m128i_i32 = this->radius;
  hEntities.m_Memory.m_pMemory = 0;
  hEntities.m_Memory.m_nAllocationCount = 0;
  hEntities.m_Memory.m_nGrowSize = 0;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  Parent = CDOTA_Buff::GetParent(this);
  v5 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  Caster = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(Caster->m_iTeamNum.m_Value, AbsOrigin, Parent, v3, &hEntities, 2, 3, 384, 0, 0);
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
              if ( v13->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
              {
                vptr_IHandleEntity = m_pInstance[58]._vptr_IHandleEntity;
                if ( (BYTE1(vptr_IHandleEntity) & 2) == 0
                  && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0
                  && (BYTE1(vptr_IHandleEntity) & 1) == 0 )
                {
                  flDamage = this->damage_absorb;
                  Ability = CDOTA_Buff::GetAbility(this);
                  v17 = CDOTA_Buff::GetCaster(this);
                  v18 = ApplyDamage(v17, m_pInstance, Ability, flDamage, 2, 0);
                  if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                    && LOBYTE(m_pInstance[71].m_pEntity) == 0
                    && (*(m_pInstance->_vptr_IHandleEntity + 408))(m_pInstance, v18) == 0 )
                  {
                    break;
                  }
                }
              }
            }
          }
        }
        if ( hEntities.m_Size <= ++v8 )
          goto LABEL_25;
      }
      v19 = 0;
      if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
        && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
        && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
      {
        v19 = m_pInstance;
      }
      v20 = CDOTA_Buff::GetCaster(this);
      if ( v20 == 0 || !v20->m_bIsDOTANPC || (v20->m_iUnitType & 1) == 0 || (v21 = v20, v20->m_bIsIllusion.m_Value) )
        v21 = 0;
      EconEntity_OnOwnerKillEaterEvent(
        v21,
        v19,
        kill_eater_event_t::kKillEaterEventType_Abaddon_AphoticShieldKills,
        1,
        INVALID_ITEM_DEF_INDEX);
      ++v8;
    }
    while ( hEntities.m_Size > v8 );
  }
LABEL_25:
  v22 = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(10, "Hero_Abaddon.AphoticShield.Destroy", v22);
  v23 = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(v23, "Hero_Abaddon.AphoticShield.Loop");
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&hEntities);
}


// CDOTA_Ability_Abaddon_Frostmourne::~CDOTA_Ability_Abaddon_Frostmourne  (line 509, @0x0000000002c97a70, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Abaddon_Frostmourne::~CDOTA_Ability_Abaddon_Frostmourne(
        CDOTA_Ability_Abaddon_Frostmourne *const this)
{
  this->_vptr_IHandleEntity = &off_457B310;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Abaddon_Frostmourne::~CDOTA_Ability_Abaddon_Frostmourne  (line 509, @0x0000000002c97a90, libserver.so)  // inlines: ~CDOTA_Ability_Abaddon_Frostmourne
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Abaddon_Frostmourne::~CDOTA_Ability_Abaddon_Frostmourne(
        CDOTA_Ability_Abaddon_Frostmourne *const this)
{
  this->_vptr_IHandleEntity = &off_457B310;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Abaddon_Frostmourne::Schema_DynamicBinding  (line 511, @0x0000000002c864d0, libserver.so)
// globals: CDOTA_Ability_Abaddon_Frostmourne::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Abaddon_Frostmourne::Schema_DynamicBinding(
        const CDOTA_Ability_Abaddon_Frostmourne *const this)
{
  return CDOTA_Ability_Abaddon_Frostmourne::s_pSchemaBinding;
}


// CDOTA_Ability_Abaddon_Frostmourne::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 511, @0x0000000002c864e0, libserver.so)
// globals: CDOTA_Ability_Abaddon_Frostmourne::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Abaddon_Frostmourne::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Abaddon_Frostmourne::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Abaddon_Frostmourne::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Abaddon_Frostmourne::CEntityInstanceEntityClass::DestructInstance  (line 511, @0x0000000002c864f0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Abaddon_Frostmourne>
void __fastcall CDOTA_Ability_Abaddon_Frostmourne::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Abaddon_Frostmourne::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Abaddon_Frostmourne::CEntityInstanceEntityClass::FreeInstance  (line 511, @0x0000000002c86510, libserver.so)
void __fastcall CDOTA_Ability_Abaddon_Frostmourne::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Abaddon_Frostmourne::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Abaddon_Frostmourne::CEntityInstanceEntityClass::CanAllocate  (line 511, @0x0000000002c86530, libserver.so)
bool __fastcall CDOTA_Ability_Abaddon_Frostmourne::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Abaddon_Frostmourne::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Abaddon_Frostmourne::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 511, @0x0000000002c86540, libserver.so)
// globals: CDOTA_Ability_Abaddon_Frostmourne::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Abaddon_Frostmourne::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Abaddon_Frostmourne::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Abaddon_Frostmourne::s_pSchemaBinding;
}


// CDOTA_Ability_Abaddon_Frostmourne::CEntityInstanceEntityClass::AllocateInstance  (line 511, @0x0000000002c8ef20, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Abaddon_Frostmourne::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Abaddon_Frostmourne::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Abaddon_Frostmourne::CEntityInstanceEntityClass::ConstructInstance  (line 511, @0x0000000002c943f0, libserver.so)  // inlines: CDOTA_Ability_Abaddon_Frostmourne, Construct<CDOTA_Ability_Abaddon_Frostmourne>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Abaddon_Frostmourne::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Abaddon_Frostmourne::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_457B310;
  }
  return p;
}


// CDOTA_Ability_Abaddon_Frostmourne::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 511, @0x0000000002ca14e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Abaddon_Frostmourne::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Abaddon_Frostmourne::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Abaddon_Frostmourne::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 511, @0x0000000002ca1500, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Abaddon_Frostmourne::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Abaddon_Frostmourne::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal  (line 511, @0x0000000002cc2840, libserver.so)  // inlines: CEntityClass, CEntityHandle, CEntityInstanceEntityClass, CUtlMemory, CUtlNonTSHashPreHashedKeys, CUtlSymbolLarge, CUtlVector, CUtlVectorBase, ComponentUnserializerClassInfo_t, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides, ~CUtlVector
// calls: __cxa_guard_acquire, CUtlTSHashBase<ComponentUnserializerFieldInfo_t, 16, unsigned int, CUtlTSHashPreHashedKeyMethod<unsigned int>, CThreadNullMutex>::CUtlTSHashBase, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, CUtlVectorBase<CEntityClass::ComponentHelper_t, CUtlMemory<CEntityClass::ComponentHelper_t, int> >::~CUtlVectorBase, CUtlVectorBase<CEntityClass::ComponentOffsets_t, CUtlMemory<CEntityClass::ComponentOffsets_t, int> >::~CUtlVectorBase, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "CDOTA_Ability_Abaddon_Frostmourne"
// globals: `guard variable for'CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass, CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass, CEntityClass::GetGlobalList(void)::g_pEntityClassList, __dso_handle, CDOTA_Ability_Abaddon_Frostmourne::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClassInfo, CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClassInfo
CEntityClass *__cdecl CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass) != 0 )
  {
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_designerName.u.m_Id = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass._vptr_CEntityClass = off_3F79390;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_ComponentOffsets.m_Size = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_ComponentOffsets.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_ComponentOffsets.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_ComponentOffsets.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_AllHelpers.m_Size = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_AllHelpers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_AllHelpers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_AllHelpers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_instanceUnserializer.m_pBaseClassUnserializer = -1LL;
    CUtlTSHashBase<ComponentUnserializerFieldInfo_t,16,unsigned int,CUtlTSHashPreHashedKeyMethod<unsigned int>,CThreadNullMutex>::CUtlTSHashBase(
      &CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_instanceUnserializer.m_atomicFields,
      4);
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_instanceUnserializer.m_ptrFields.m_Size = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_instanceUnserializer.m_ptrFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_pNextClass = CEntityClass::GetGlobalList(void)::g_pEntityClassList;
    CEntityClass::GetGlobalList(void)::g_pEntityClassList = &CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Size = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_instanceUnserializer.m_postUnserializeHandlers.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_instanceUnserializer.m_outputFields.m_Size = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_instanceUnserializer.m_outputFields.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_instanceUnserializer.m_outputFields.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_classInputs.m_Size = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_classInputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_classInputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_classInputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_classOutputs.m_Size = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_classOutputs.m_Memory.m_pMemory = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_classOutputs.m_Memory.m_nAllocationCount = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_classOutputs.m_Memory.m_nGrowSize = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_requiredEHandle.m_Index = -1;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_hNetworkSerializer = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_pBaseClassInfo = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_pClassInfo = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_flags = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_nAllHelpersFlags = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_pScriptClassDesc = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_pInputs = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_nInputCount = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_pOutputs = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_nOutputCount = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_pGameClass = 0;
    CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass._vptr_CEntityClass = off_457B290;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass);
    __cxa_atexit(
      CDOTA_Ability_Abaddon_Frostmourne::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Abaddon_FrostmourneClass != 0 )
    return &CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass;
  if ( `guard variable for'CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClassInfo,
      "CDOTA_Ability_Abaddon_Frostmourne",
      "abaddon_frostmourne",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClassInfo);
  }
  CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_pClassInfo = &CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClassInfo;
  CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_pBaseClassInfo = CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Abaddon_FrostmourneClass = &CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass;
  CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClassInfo.m_pClass = &CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass;
  CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Abaddon_FrostmourneClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Abaddon_Frostmourne::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_FrostmourneClass;
}


// CDOTA_Ability_Abaddon_Frostmourne::GetIntrinsicModifierName  (line 514, @0x0000000002c86550, libserver.so)
// strings: "modifier_abaddon_frostmourne"
const char *__fastcall CDOTA_Ability_Abaddon_Frostmourne::GetIntrinsicModifierName(
        CDOTA_Ability_Abaddon_Frostmourne *const this)
{
  return "modifier_abaddon_frostmourne";
}


// CDOTA_Ability_Abaddon_Frostmourne::GetSlowDuration  (line 523, @0x0000000002c55ed0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Abaddon_Frostmourne::GetSlowDuration(CDOTA_Ability_Abaddon_Frostmourne *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "debuff_duration", -1, 1);
}


// CDOTA_Modifier_Abaddon_Frostmourne::~CDOTA_Modifier_Abaddon_Frostmourne  (line 532, @0x0000000002c93a00, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Abaddon_Frostmourne::~CDOTA_Modifier_Abaddon_Frostmourne(
        CDOTA_Modifier_Abaddon_Frostmourne *const this)
{
  this->_vptr_CDOTA_Buff = &off_457BDD0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Abaddon_Frostmourne::~CDOTA_Modifier_Abaddon_Frostmourne  (line 532, @0x0000000002c93a20, libserver.so)  // inlines: ~CDOTA_Modifier_Abaddon_Frostmourne
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Abaddon_Frostmourne::~CDOTA_Modifier_Abaddon_Frostmourne(
        CDOTA_Modifier_Abaddon_Frostmourne *const this)
{
  this->_vptr_CDOTA_Buff = &off_457BDD0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Abaddon_Frostmourne::IsHidden  (line 537, @0x0000000002c86560, libserver.so)
bool __fastcall CDOTA_Modifier_Abaddon_Frostmourne::IsHidden(CDOTA_Modifier_Abaddon_Frostmourne *const this)
{
  return 1;
}


// CDOTA_Modifier_Abaddon_Frostmourne::OnCreated  (line 554, @0x0000000002c59700, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
void __fastcall CDOTA_Modifier_Abaddon_Frostmourne::OnCreated(
        CDOTA_Modifier_Abaddon_Frostmourne *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->debuff_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "debuff_duration", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->buff_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "buff_duration", -1, 0);
      return;
    }
  }
  else
  {
    this->debuff_duration = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->buff_duration = 0.0;
}


// CDOTA_Modifier_Abaddon_Frostmourne::DeclareFunctions  (line 562, @0x0000000002c1b3e0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Abaddon_Frostmourne::DeclareFunctions(CDOTA_Modifier_Abaddon_Frostmourne *const this)
{
  this->m_Functions[119].__pfn = (&stru_10 + 697);
  this->m_Functions[119].__delta = 0;
  this->m_Functions[121].__pfn = (&stru_10 + 705);
  this->m_Functions[121].__delta = 0;
}


// CDOTA_Modifier_Abaddon_Frostmourne::OnAttackStart  (line 570, @0x0000000002c30960, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_abaddon_frostmourne_buff"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Abaddon_Frostmourne::OnAttackStart(
        CDOTA_Modifier_Abaddon_Frostmourne *const this,
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
  uint32 v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CEntityInstance *v16; // rbx
  int m_Id; // eax
  float v18; // xmm1_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v21; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v23; // [rsp+18h] [rbp-28h]

  v23 = __readfsqword(0x28u);
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
          v13 = params->hattacker.m_Index;
          if ( v13 + 2 <= 1
            || (v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
            || (v15 = &v14[params->hattacker.m_Index & 0x1FF]) == 0
            || v13 != v15->m_EHandle.m_Index
            || (v16 = v15->m_pInstance, v15->m_pInstance == 0)
            || BYTE3(v16[7]._vptr_IHandleEntity) == 0 )
          {
            v16 = 0;
          }
          if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) == 0
            && v12 != 0
            && LOBYTE(v12[71]._vptr_IHandleEntity) == 0
            && (BYTE1(v12[58]._vptr_IHandleEntity) & 1) == 0 )
          {
            m_Id = v12[43].m_iszPrivateVScripts.u.m_Id;
            if ( (m_Id & 0x193) != 0
              && v16 != 0
              && HIBYTE(v16[7].m_CScriptComponent) != HIBYTE(v12[7].m_CScriptComponent)
              && (m_Id & 0x10) == 0 )
            {
              KeyValues::KeyValues(&kv, "modifier_abaddon_frostmourne_buff");
              KeyValues::SetFloat(&kv, "duration", v18);
              Ability = CDOTA_Buff::GetAbility(this);
              Caster = CDOTA_Buff::GetCaster(this);
              v21 = CDOTA_Buff::GetCaster(this);
              CDOTA_BaseNPC::AddNewModifier(v21, Caster, Ability, "modifier_abaddon_frostmourne_buff", &kv, 0);
              KeyValues::~KeyValues(&kv);
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Abaddon_Frostmourne::OnAttackLanded  (line 598, @0x0000000002c30eb0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_abaddon_frostmourne_debuff"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Abaddon_Frostmourne::OnAttackLanded(
        CDOTA_Modifier_Abaddon_Frostmourne *const this,
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
  uint32 v13; // eax
  CEntityIdentity *v14; // rdx
  CEntityIdentity *v15; // rdx
  CEntityInstance *v16; // rbx
  float v17; // xmm1_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv2; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+18h] [rbp-28h]

  v21 = __readfsqword(0x28u);
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
          v13 = params->hattacker.m_Index;
          if ( v13 + 2 <= 1
            || (v14 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
            || (v15 = &v14[params->hattacker.m_Index & 0x1FF]) == 0
            || v13 != v15->m_EHandle.m_Index
            || (v16 = v15->m_pInstance, v15->m_pInstance == 0)
            || BYTE3(v16[7]._vptr_IHandleEntity) == 0 )
          {
            v16 = 0;
          }
          if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) == 0
            && v12 != 0
            && LOBYTE(v12[71]._vptr_IHandleEntity) == 0
            && (BYTE1(v12[58]._vptr_IHandleEntity) & 1) == 0
            && (v12[43].m_iszPrivateVScripts.u.m_Id & 0x193) != 0
            && v16 != 0
            && LOBYTE(v16[71].m_pEntity) == 0
            && HIBYTE(v16[7].m_CScriptComponent) != HIBYTE(v12[7].m_CScriptComponent) )
          {
            KeyValues::KeyValues(&kv2, "modifier_abaddon_frostmourne_debuff");
            KeyValues::SetFloat(&kv2, "duration", v17);
            Ability = CDOTA_Buff::GetAbility(this);
            Caster = CDOTA_Buff::GetCaster(this);
            CDOTA_BaseNPC::AddNewModifier(v12, Caster, Ability, "modifier_abaddon_frostmourne_debuff", &kv2, 0);
            KeyValues::~KeyValues(&kv2);
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Abaddon_Frostmourne_Debuff::~CDOTA_Modifier_Abaddon_Frostmourne_Debuff  (line 625, @0x0000000002c939b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Abaddon_Frostmourne_Debuff::~CDOTA_Modifier_Abaddon_Frostmourne_Debuff(
        CDOTA_Modifier_Abaddon_Frostmourne_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_457C110;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Abaddon_Frostmourne_Debuff::~CDOTA_Modifier_Abaddon_Frostmourne_Debuff  (line 625, @0x0000000002c939d0, libserver.so)  // inlines: ~CDOTA_Modifier_Abaddon_Frostmourne_Debuff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Abaddon_Frostmourne_Debuff::~CDOTA_Modifier_Abaddon_Frostmourne_Debuff(
        CDOTA_Modifier_Abaddon_Frostmourne_Debuff *const this)
{
  this->_vptr_CDOTA_Buff = &off_457C110;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Abaddon_Frostmourne_Debuff::GetEffectName  (line 639, @0x0000000002c86570, libserver.so)
// strings: "particles/units/heroes/hero_abaddon/abaddon_frost_slow.vpcf"
const char *__fastcall CDOTA_Modifier_Abaddon_Frostmourne_Debuff::GetEffectName(
        CDOTA_Modifier_Abaddon_Frostmourne_Debuff *const this)
{
  return "particles/units/heroes/hero_abaddon/abaddon_frost_slow.vpcf";
}


// CDOTA_Modifier_Abaddon_Frostmourne_Debuff::GetStatusEffectName  (line 640, @0x0000000002c86580, libserver.so)
// strings: "particles/status_fx/status_effect_frost.vpcf"
const char *__fastcall CDOTA_Modifier_Abaddon_Frostmourne_Debuff::GetStatusEffectName(
        CDOTA_Modifier_Abaddon_Frostmourne_Debuff *const this)
{
  return "particles/status_fx/status_effect_frost.vpcf";
}


// CDOTA_Modifier_Abaddon_Frostmourne_Debuff::StatusEffectPriority  (line 641, @0x0000000002c86590, libserver.so)
int __fastcall CDOTA_Modifier_Abaddon_Frostmourne_Debuff::StatusEffectPriority(
        CDOTA_Modifier_Abaddon_Frostmourne_Debuff *const this)
{
  return 10;
}


// CDOTA_Modifier_Abaddon_Frostmourne_Debuff::OnCreated  (line 654, @0x0000000002c71210, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Abaddon_Frostmourne_Debuff::OnCreated(
        CDOTA_Modifier_Abaddon_Frostmourne_Debuff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->buff_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "buff_duration", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->slow_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "slow_pct", -1, 0);
      return;
    }
  }
  else
  {
    this->buff_duration = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->slow_pct = 0;
}


// CDOTA_Modifier_Abaddon_Frostmourne_Debuff::OnRefresh  (line 662, @0x0000000002c71330, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Abaddon_Frostmourne_Debuff::OnRefresh(
        CDOTA_Modifier_Abaddon_Frostmourne_Debuff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->buff_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "buff_duration", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->slow_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "slow_pct", -1, 0);
      return;
    }
  }
  else
  {
    this->buff_duration = 0.0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->slow_pct = 0;
}


// CDOTA_Modifier_Abaddon_Frostmourne_Debuff::DeclareFunctions  (line 671, @0x0000000002c1b420, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Abaddon_Frostmourne_Debuff::OnAttackStart(CModifierParams const&), CDOTA_Modifier_Abaddon_Frostmourne_Debuff::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_Abaddon_Frostmourne_Debuff::GetModifierAttackSpeedBonus_Constant(CModifierParams const&)
void __fastcall CDOTA_Modifier_Abaddon_Frostmourne_Debuff::DeclareFunctions(
        CDOTA_Modifier_Abaddon_Frostmourne_Debuff *const this)
{
  this->m_Functions[119].__pfn = CDOTA_Modifier_Abaddon_Frostmourne_Debuff::OnAttackStart;
  this->m_Functions[119].__delta = 0;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[13].__pfn = CDOTA_Modifier_Abaddon_Frostmourne_Debuff::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[24].__pfn = CDOTA_Modifier_Abaddon_Frostmourne_Debuff::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
}


// CDOTA_Modifier_Abaddon_Frostmourne_Debuff::OnAttackStart  (line 680, @0x0000000002c2f2b0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, _Unwind_Resume
// strings: "modifier_abaddon_frostmourne_buff"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Abaddon_Frostmourne_Debuff::OnAttackStart(
        CDOTA_Modifier_Abaddon_Frostmourne_Debuff *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  uint32 v8; // edi
  CEntityIdentity *v9; // rax
  CEntityIdentity *v10; // rax
  CDOTA_BaseNPC *v11; // r13
  uint32 m_iUnitType; // eax
  unsigned __int8 m_Value; // r13
  float v14; // xmm1_4
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-28h]

  v18 = __readfsqword(0x28u);
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
        if ( v5->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
        {
          v8 = params->htarget.m_Index;
          if ( v8 + 2 > 1 )
          {
            v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
            if ( v9 != 0 )
            {
              v10 = &v9[params->htarget.m_Index & 0x1FF];
              if ( v10 != 0 && v8 == v10->m_EHandle.m_Index )
              {
                v11 = v10->m_pInstance;
                if ( v10->m_pInstance != 0 && v11->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == v11 )
                {
                  m_iUnitType = m_pInstance->m_iUnitType;
                  if ( (m_iUnitType & 0x10) == 0 && (m_iUnitType & 0x193) != 0 )
                  {
                    m_Value = m_pInstance->m_iTeamNum.m_Value;
                    if ( m_Value == CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value )
                    {
                      KeyValues::KeyValues(&kv, "modifier_abaddon_frostmourne_buff");
                      KeyValues::SetFloat(&kv, "duration", v14);
                      Ability = CDOTA_Buff::GetAbility(this);
                      Caster = CDOTA_Buff::GetCaster(this);
                      CDOTA_BaseNPC::AddNewModifier(
                        m_pInstance,
                        Caster,
                        Ability,
                        "modifier_abaddon_frostmourne_buff",
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
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Abaddon_Frostmourne_Debuff::GetModifierMoveSpeedBonus_Percentage  (line 698, @0x0000000002c1b480, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Abaddon_Frostmourne_Debuff::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Abaddon_Frostmourne_Debuff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->slow_pct;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Abaddon_Frostmourne_Debuff::GetModifierAttackSpeedBonus_Constant  (line 705, @0x0000000002c1b4a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Abaddon_Frostmourne_Debuff::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Abaddon_Frostmourne_Debuff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *v2.m128i_i32 = -this->slow_pct;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Abaddon_Frostmourne_Buff::~CDOTA_Modifier_Abaddon_Frostmourne_Buff  (line 714, @0x0000000002c93960, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Abaddon_Frostmourne_Buff::~CDOTA_Modifier_Abaddon_Frostmourne_Buff(
        CDOTA_Modifier_Abaddon_Frostmourne_Buff *const this)
{
  this->_vptr_CDOTA_Buff = &off_457C430;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Abaddon_Frostmourne_Buff::~CDOTA_Modifier_Abaddon_Frostmourne_Buff  (line 714, @0x0000000002c93980, libserver.so)  // inlines: ~CDOTA_Modifier_Abaddon_Frostmourne_Buff
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Abaddon_Frostmourne_Buff::~CDOTA_Modifier_Abaddon_Frostmourne_Buff(
        CDOTA_Modifier_Abaddon_Frostmourne_Buff *const this)
{
  this->_vptr_CDOTA_Buff = &off_457C430;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Abaddon_Frostmourne_Buff::GetEffectName  (line 727, @0x0000000002c865a0, libserver.so)
// strings: "particles/units/heroes/hero_abaddon/abaddon_frost_buff.vpcf"
const char *__fastcall CDOTA_Modifier_Abaddon_Frostmourne_Buff::GetEffectName(
        CDOTA_Modifier_Abaddon_Frostmourne_Buff *const this)
{
  return "particles/units/heroes/hero_abaddon/abaddon_frost_buff.vpcf";
}


// CDOTA_Modifier_Abaddon_Frostmourne_Buff::OnCreated  (line 740, @0x0000000002c71690, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Abaddon_Frostmourne_Buff::OnCreated(
        CDOTA_Modifier_Abaddon_Frostmourne_Buff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "attack_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->move_speed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "move_speed_pct", -1, 0);
      return;
    }
  }
  else
  {
    this->attack_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->move_speed_pct = 0;
}


// CDOTA_Modifier_Abaddon_Frostmourne_Buff::OnRefresh  (line 748, @0x0000000002c71840, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Abaddon_Frostmourne_Buff::OnRefresh(
        CDOTA_Modifier_Abaddon_Frostmourne_Buff *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->attack_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "attack_speed", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->move_speed_pct = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "move_speed_pct", -1, 0);
      return;
    }
  }
  else
  {
    this->attack_speed = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->move_speed_pct = 0;
}


// CDOTA_Modifier_Abaddon_Frostmourne_Buff::DeclareFunctions  (line 757, @0x0000000002c1b4c0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Abaddon_Frostmourne_Buff::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_Abaddon_Frostmourne_Buff::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Abaddon_Frostmourne_Buff::DeclareFunctions(
        CDOTA_Modifier_Abaddon_Frostmourne_Buff *const this)
{
  this->m_Functions[24].__pfn = CDOTA_Modifier_Abaddon_Frostmourne_Buff::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[13].__pfn = CDOTA_Modifier_Abaddon_Frostmourne_Buff::GetModifierMoveSpeedBonus_Percentage;
}


// CDOTA_Modifier_Abaddon_Frostmourne_Buff::GetModifierAttackSpeedBonus_Constant  (line 765, @0x0000000002c1b500, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Abaddon_Frostmourne_Buff::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_Abaddon_Frostmourne_Buff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->attack_speed;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Abaddon_Frostmourne_Buff::GetModifierMoveSpeedBonus_Percentage  (line 772, @0x0000000002c1b520, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Abaddon_Frostmourne_Buff::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Abaddon_Frostmourne_Buff *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->move_speed_pct;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_Abaddon_BorrowedTime::~CDOTA_Ability_Abaddon_BorrowedTime  (line 781, @0x0000000002c97ac0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Abaddon_BorrowedTime::~CDOTA_Ability_Abaddon_BorrowedTime(
        CDOTA_Ability_Abaddon_BorrowedTime *const this)
{
  this->_vptr_IHandleEntity = &off_457C790;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Abaddon_BorrowedTime::~CDOTA_Ability_Abaddon_BorrowedTime  (line 781, @0x0000000002c97ae0, libserver.so)  // inlines: ~CDOTA_Ability_Abaddon_BorrowedTime
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Abaddon_BorrowedTime::~CDOTA_Ability_Abaddon_BorrowedTime(
        CDOTA_Ability_Abaddon_BorrowedTime *const this)
{
  this->_vptr_IHandleEntity = &off_457C790;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Abaddon_BorrowedTime::Schema_DynamicBinding  (line 783, @0x0000000002c865b0, libserver.so)
// globals: CDOTA_Ability_Abaddon_BorrowedTime::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Abaddon_BorrowedTime::Schema_DynamicBinding(
        const CDOTA_Ability_Abaddon_BorrowedTime *const this)
{
  return CDOTA_Ability_Abaddon_BorrowedTime::s_pSchemaBinding;
}


// CDOTA_Ability_Abaddon_BorrowedTime::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 783, @0x0000000002c865c0, libserver.so)
// globals: CDOTA_Ability_Abaddon_BorrowedTime::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Abaddon_BorrowedTime::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Abaddon_BorrowedTime::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Abaddon_BorrowedTime::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Abaddon_BorrowedTime::CEntityInstanceEntityClass::DestructInstance  (line 783, @0x0000000002c865d0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Abaddon_BorrowedTime>
void __fastcall CDOTA_Ability_Abaddon_BorrowedTime::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Abaddon_BorrowedTime::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Abaddon_BorrowedTime::CEntityInstanceEntityClass::FreeInstance  (line 783, @0x0000000002c865f0, libserver.so)
void __fastcall CDOTA_Ability_Abaddon_BorrowedTime::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Abaddon_BorrowedTime::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Abaddon_BorrowedTime::CEntityInstanceEntityClass::CanAllocate  (line 783, @0x0000000002c86610, libserver.so)
bool __fastcall CDOTA_Ability_Abaddon_BorrowedTime::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Abaddon_BorrowedTime::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Abaddon_BorrowedTime::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 783, @0x0000000002c86620, libserver.so)
// globals: CDOTA_Ability_Abaddon_BorrowedTime::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Abaddon_BorrowedTime::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Abaddon_BorrowedTime::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Abaddon_BorrowedTime::s_pSchemaBinding;
}


// CDOTA_Ability_Abaddon_BorrowedTime::CEntityInstanceEntityClass::AllocateInstance  (line 783, @0x0000000002c8ef60, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Abaddon_BorrowedTime::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Abaddon_BorrowedTime::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Abaddon_BorrowedTime::CEntityInstanceEntityClass::ConstructInstance  (line 783, @0x0000000002c94420, libserver.so)  // inlines: CDOTA_Ability_Abaddon_BorrowedTime, Construct<CDOTA_Ability_Abaddon_BorrowedTime>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Abaddon_BorrowedTime::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Abaddon_BorrowedTime::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_457C790;
  }
  return p;
}


// CDOTA_Ability_Abaddon_BorrowedTime::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 783, @0x0000000002ca1530, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Abaddon_BorrowedTime::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Abaddon_BorrowedTime::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Abaddon_BorrowedTime::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 783, @0x0000000002ca1550, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Abaddon_BorrowedTime::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Abaddon_BorrowedTime::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Abaddon_BorrowedTime::GetEntityClassInternal  (line 783, @0x0000000002cb8040, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes4_01.cpp
// strings: "abaddon_borrowed_time", "CDOTA_Ability_Abaddon_BorrowedTime"
// globals: `guard variable for'CDOTA_Ability_Abaddon_BorrowedTime::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_BorrowedTimeClass, CDOTA_Ability_Abaddon_BorrowedTime::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_BorrowedTimeClass, __dso_handle, CDOTA_Ability_Abaddon_BorrowedTime::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Abaddon_BorrowedTime::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_BorrowedTimeClassInfo, CDOTA_Ability_Abaddon_BorrowedTime::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_BorrowedTimeClassInfo
CEntityClass *__cdecl CDOTA_Ability_Abaddon_BorrowedTime::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Abaddon_BorrowedTime::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_BorrowedTimeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Abaddon_BorrowedTime::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_BorrowedTimeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Abaddon_BorrowedTime::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_BorrowedTimeClass);
    CDOTA_Ability_Abaddon_BorrowedTime::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_BorrowedTimeClass._vptr_CEntityClass = off_457C710;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Abaddon_BorrowedTime::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_BorrowedTimeClass);
    __cxa_atexit(
      CDOTA_Ability_Abaddon_BorrowedTime::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Abaddon_BorrowedTime::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_BorrowedTimeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Abaddon_BorrowedTimeClass != 0 )
    return &CDOTA_Ability_Abaddon_BorrowedTime::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_BorrowedTimeClass;
  if ( `guard variable for'CDOTA_Ability_Abaddon_BorrowedTime::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_BorrowedTimeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Abaddon_BorrowedTime::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_BorrowedTimeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Abaddon_BorrowedTime::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_BorrowedTimeClassInfo,
      "CDOTA_Ability_Abaddon_BorrowedTime",
      "abaddon_borrowed_time",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Abaddon_BorrowedTime::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_BorrowedTimeClassInfo);
  }
  CDOTA_Ability_Abaddon_BorrowedTime::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_BorrowedTimeClass.m_pClassInfo = &CDOTA_Ability_Abaddon_BorrowedTime::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_BorrowedTimeClassInfo;
  CDOTA_Ability_Abaddon_BorrowedTime::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_BorrowedTimeClass.m_pBaseClassInfo = CDOTA_Ability_Abaddon_BorrowedTime::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_BorrowedTimeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Abaddon_BorrowedTimeClass = &CDOTA_Ability_Abaddon_BorrowedTime::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_BorrowedTimeClass;
  CDOTA_Ability_Abaddon_BorrowedTime::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Abaddon_BorrowedTimeClassInfo.m_pClass = &CDOTA_Ability_Abaddon_BorrowedTime::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_BorrowedTimeClass;
  CDOTA_Ability_Abaddon_BorrowedTime::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_BorrowedTimeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Abaddon_BorrowedTimeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Abaddon_BorrowedTime::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Abaddon_BorrowedTimeClass;
}


// CDOTA_Ability_Abaddon_BorrowedTime::GetIntrinsicModifierName  (line 788, @0x0000000002c86630, libserver.so)
// strings: "modifier_abaddon_borrowed_time_passive"
const char *__fastcall CDOTA_Ability_Abaddon_BorrowedTime::GetIntrinsicModifierName(
        CDOTA_Ability_Abaddon_BorrowedTime *const this)
{
  return "modifier_abaddon_borrowed_time_passive";
}


// CDOTA_Ability_Abaddon_BorrowedTime::OnSpellStart  (line 796, @0x0000000002c53530, libserver.so)  // inlines: GetAbilityData, GetLevelSpecialValueFor<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, Purge, DOTA_EmitSound, CDOTABaseAbility::GetCursorPosition, CDOTAGamerules::SendProjectionAbilityMessage, KeyValues::~KeyValues, CDOTABaseAbility::LoadAbilityData (14 total)
// strings: "modifier_abaddon_borrowed_time", "Hero_Abaddon.BorrowedTime"
void __fastcall CDOTA_Ability_Abaddon_BorrowedTime::OnSpellStart(CDOTA_Ability_Abaddon_BorrowedTime *const this)
{
  __m128i v2; // xmm0
  float v3; // r14d
  CDOTA_BaseNPC *Caster; // rax
  float v5; // xmm1_4
  CDOTA_BaseNPC *v6; // r13
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r13d
  CDOTA_BaseNPC *v12; // rax
  float v13; // xmm3_4
  KeyValues kv; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-28h]
  Vector CursorPosition; // 0:kr00_12.12

  v15 = __readfsqword(0x28u);
  *v2.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration_scepter", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::HasScepter(Caster);
  KeyValues::KeyValues(&kv, "modifier_abaddon_borrowed_time");
  KeyValues::SetFloat(&kv, "duration", v5);
  v6 = CDOTABaseAbility::GetCaster(this);
  v7 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v7, v6, this, "modifier_abaddon_borrowed_time", &kv, 0);
  v8 = CDOTABaseAbility::GetCaster(this);
  Purge(v8, this, 28);
  v9 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(10, "Hero_Abaddon.BorrowedTime", v9);
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  v12 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(
    g_pGameRules,
    v12,
    1,
    m_iAbilityID,
    0,
    0,
    *&CursorPosition.x,
    CursorPosition.z,
    v3,
    v13);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Abaddon_BorrowedTime::~CDOTA_Modifier_Abaddon_BorrowedTime  (line 828, @0x0000000002c93910, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Abaddon_BorrowedTime::~CDOTA_Modifier_Abaddon_BorrowedTime(
        CDOTA_Modifier_Abaddon_BorrowedTime *const this)
{
  this->_vptr_CDOTA_Buff = &off_457D250;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Abaddon_BorrowedTime::~CDOTA_Modifier_Abaddon_BorrowedTime  (line 828, @0x0000000002c93930, libserver.so)  // inlines: ~CDOTA_Modifier_Abaddon_BorrowedTime
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Abaddon_BorrowedTime::~CDOTA_Modifier_Abaddon_BorrowedTime(
        CDOTA_Modifier_Abaddon_BorrowedTime *const this)
{
  this->_vptr_CDOTA_Buff = &off_457D250;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Abaddon_BorrowedTime::IsPurgable  (line 836, @0x0000000002c86640, libserver.so)
bool __fastcall CDOTA_Modifier_Abaddon_BorrowedTime::IsPurgable(CDOTA_Modifier_Abaddon_BorrowedTime *const this)
{
  return 0;
}


// CDOTA_Modifier_Abaddon_BorrowedTime::GetEffectName  (line 838, @0x0000000002c86650, libserver.so)
// strings: "particles/units/heroes/hero_abaddon/abaddon_borrowed_time.vpcf"
const char *__fastcall CDOTA_Modifier_Abaddon_BorrowedTime::GetEffectName(
        CDOTA_Modifier_Abaddon_BorrowedTime *const this)
{
  return "particles/units/heroes/hero_abaddon/abaddon_borrowed_time.vpcf";
}


// CDOTA_Modifier_Abaddon_BorrowedTime::GetStatusEffectName  (line 840, @0x0000000002c86660, libserver.so)
// strings: "particles/status_fx/status_effect_abaddon_borrowed_time.vpcf"
const char *__fastcall CDOTA_Modifier_Abaddon_BorrowedTime::GetStatusEffectName(
        CDOTA_Modifier_Abaddon_BorrowedTime *const this)
{
  return "particles/status_fx/status_effect_abaddon_borrowed_time.vpcf";
}


// CDOTA_Modifier_Abaddon_BorrowedTime::StatusEffectPriority  (line 841, @0x0000000002c86670, libserver.so)
int __fastcall CDOTA_Modifier_Abaddon_BorrowedTime::StatusEffectPriority(
        CDOTA_Modifier_Abaddon_BorrowedTime *const this)
{
  return 1200;
}


// CDOTA_Modifier_Abaddon_BorrowedTime::GetPriority  (line 845, @0x0000000002c86680, libserver.so)
int __fastcall CDOTA_Modifier_Abaddon_BorrowedTime::GetPriority(CDOTA_Modifier_Abaddon_BorrowedTime *const this)
{
  return 2;
}


// CDOTA_Modifier_Abaddon_BorrowedTime::IsAura  (line 847, @0x0000000002c975e0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::HasScepter
bool __fastcall CDOTA_Modifier_Abaddon_BorrowedTime::IsAura(CDOTA_Modifier_Abaddon_BorrowedTime *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  return CDOTA_BaseNPC::HasScepter(Parent);
}


// CDOTA_Modifier_Abaddon_BorrowedTime::GetModifierAura  (line 848, @0x0000000002c86690, libserver.so)
// strings: "modifier_abaddon_borrowed_time_damage_redirect"
const char *__fastcall CDOTA_Modifier_Abaddon_BorrowedTime::GetModifierAura(
        CDOTA_Modifier_Abaddon_BorrowedTime *const this)
{
  return "modifier_abaddon_borrowed_time_damage_redirect";
}


// CDOTA_Modifier_Abaddon_BorrowedTime::GetAuraSearchTeam  (line 849, @0x0000000002c866a0, libserver.so)
int __fastcall CDOTA_Modifier_Abaddon_BorrowedTime::GetAuraSearchTeam(CDOTA_Modifier_Abaddon_BorrowedTime *const this)
{
  return 1;
}


// CDOTA_Modifier_Abaddon_BorrowedTime::GetAuraSearchType  (line 850, @0x0000000002c866b0, libserver.so)
int __fastcall CDOTA_Modifier_Abaddon_BorrowedTime::GetAuraSearchType(CDOTA_Modifier_Abaddon_BorrowedTime *const this)
{
  return 1;
}


// CDOTA_Modifier_Abaddon_BorrowedTime::GetAuraRadius  (line 851, @0x0000000002c866c0, libserver.so)
int __fastcall CDOTA_Modifier_Abaddon_BorrowedTime::GetAuraRadius(CDOTA_Modifier_Abaddon_BorrowedTime *const this)
{
  return 900;
}


// CDOTA_Modifier_Abaddon_BorrowedTime::GetAuraDuration  (line 852, @0x0000000002c866d0, libserver.so)
float __fastcall CDOTA_Modifier_Abaddon_BorrowedTime::GetAuraDuration(CDOTA_Modifier_Abaddon_BorrowedTime *const this)
{
  return 0.0099999998;
}


// CDOTA_Modifier_Abaddon_BorrowedTime::OnCreated  (line 862, @0x0000000002c1f2b0, libserver.so)
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::GetParent, CDOTA_BaseNPC::StartGesture
void __fastcall CDOTA_Modifier_Abaddon_BorrowedTime::OnCreated(
        CDOTA_Modifier_Abaddon_BorrowedTime *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax

  this->m_iTotalDamageAbsorbed = 0;
  if ( !CDOTA_Buff::GetAbility(this)->m_bStolen.m_Value )
  {
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::StartGesture(Parent, 1513, 0.34999999, 0.34999999, 0, 0, 1.0);
  }
}


// CDOTA_Modifier_Abaddon_BorrowedTime::OnDestroy  (line 889, @0x0000000002c2c480, libserver.so)  // inlines: GetAbilityData, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero
// calls: CDOTA_Buff::GetParent, EconEntity_OnOwnerKillEaterEvent, CDOTA_Buff::GetAbility, CDOTAGamerules::SendProjectionAbilityEndChannelMessage, CDOTABaseAbility::LoadAbilityData
// globals: INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Modifier_Abaddon_BorrowedTime::OnDestroy(CDOTA_Modifier_Abaddon_BorrowedTime *const this)
{
  CDOTA_BaseNPC *v1; // r12
  CDOTA_BaseNPC *Parent; // rax
  int m_iTotalDamageAbsorbed; // ecx
  CDOTABaseAbility *Ability; // rax
  DOTAAbilityData_t *m_pAbilityData; // rdx
  CDOTABaseAbility *v7; // [rsp+8h] [rbp-18h]

  v1 = 0;
  Parent = CDOTA_Buff::GetParent(this);
  if ( Parent != 0 && Parent->m_bIsDOTANPC && (Parent->m_iUnitType & 1) != 0 && !Parent->m_bIsIllusion.m_Value )
  {
    m_iTotalDamageAbsorbed = this->m_iTotalDamageAbsorbed;
    v1 = Parent;
    if ( m_iTotalDamageAbsorbed > 0 )
      EconEntity_OnOwnerKillEaterEvent(
        Parent,
        0,
        kill_eater_event_t::kKillEaterEventType_Abaddon_BorrowedTimeDamageAbsorbed,
        m_iTotalDamageAbsorbed,
        INVALID_ITEM_DEF_INDEX);
  }
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
    CDOTAGamerules::SendProjectionAbilityEndChannelMessage(g_pGameRules, v1, m_pAbilityData->m_iAbilityID);
  }
}


// CDOTA_Modifier_Abaddon_BorrowedTime::DeclareFunctions  (line 921, @0x0000000002c1b540, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Abaddon_BorrowedTime::GetModifierAvoidDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Abaddon_BorrowedTime::DeclareFunctions(CDOTA_Modifier_Abaddon_BorrowedTime *const this)
{
  this->m_Functions[42].__pfn = CDOTA_Modifier_Abaddon_BorrowedTime::GetModifierAvoidDamage;
  this->m_Functions[42].__delta = 0;
}


// CDOTA_Modifier_Abaddon_BorrowedTime::GetModifierAvoidDamage  (line 928, @0x0000000002c31bd0, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_BaseNPC::Heal, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "particles/units/heroes/hero_abaddon/abaddon_borrowed_time_heal.vpcf", "attach_hitloc"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Abaddon_BorrowedTime::GetModifierAvoidDamage(
        CDOTA_Modifier_Abaddon_BorrowedTime *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // r13
  CDOTABaseAbility *Ability; // rax
  CConcreteEntityList *v6; // rsi
  uint32 m_Index; // eax
  CEntityIdentity *v8; // rdx
  CEntityIdentity *v9; // rdx
  const CBaseAnimating *m_pInstance; // r13
  CDOTA_BaseNPC *v11; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v13; // r14
  CDOTA_ParticleManager *v14; // rax
  __int64 v15; // rbx
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  vec_t vecFallbackPosition; // [rsp+Ch] [rbp-24h]
  Vector v21; // 0:xmm0_8.8,8:xmm1_4.4

  Parent = CDOTA_Buff::GetParent(this);
  Ability = CDOTA_Buff::GetAbility(this);
  CDOTA_BaseNPC::Heal(Parent, params->fDamage, Ability, 0, 1);
  v6 = CEntityHandle::gm_pEntityList;
  this->m_iTotalDamageAbsorbed = (this->m_iTotalDamageAbsorbed + params->fDamage);
  m_Index = params->hattacker.m_Index;
  if ( m_Index + 2 <= 1
    || (v8 = v6->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v9 = &v8[params->hattacker.m_Index & 0x1FF]) == 0
    || m_Index != v9->m_EHandle.m_Index
    || (m_pInstance = v9->m_pInstance, v9->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v11 = CDOTA_Buff::GetParent(this);
  ParticleManager = GetParticleManager();
  LODWORD(v11) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_abaddon/abaddon_borrowed_time_heal.vpcf",
                   2,
                   v11,
                   0,
                   0);
  v13 = CDOTA_Buff::GetParent(this);
  v14 = GetParticleManager();
  v15 = *&vec3_invalid.x;
  vecFallbackPosition = vec3_invalid.z;
  CDOTA_ParticleManager::SetParticleControlEnt(v14, v11, 0, v13, 5, "attach_hitloc", vec3_invalid, 1);
  v16 = GetParticleManager();
  *&v21.x = v15;
  v21.z = vecFallbackPosition;
  CDOTA_ParticleManager::SetParticleControlEnt(v16, v11, 1, m_pInstance, 1, 0, v21, 1);
  v17 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v17, v11);
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Abaddon_BorrowedTime_Passive::~CDOTA_Modifier_Abaddon_BorrowedTime_Passive  (line 951, @0x0000000002c938c0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Abaddon_BorrowedTime_Passive::~CDOTA_Modifier_Abaddon_BorrowedTime_Passive(
        CDOTA_Modifier_Abaddon_BorrowedTime_Passive *const this)
{
  this->_vptr_CDOTA_Buff = &off_457D570;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Abaddon_BorrowedTime_Passive::~CDOTA_Modifier_Abaddon_BorrowedTime_Passive  (line 951, @0x0000000002c938e0, libserver.so)  // inlines: ~CDOTA_Modifier_Abaddon_BorrowedTime_Passive
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Abaddon_BorrowedTime_Passive::~CDOTA_Modifier_Abaddon_BorrowedTime_Passive(
        CDOTA_Modifier_Abaddon_BorrowedTime_Passive *const this)
{
  this->_vptr_CDOTA_Buff = &off_457D570;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Abaddon_BorrowedTime_Passive::IsPermanent  (line 957, @0x0000000002c866e0, libserver.so)
bool __fastcall CDOTA_Modifier_Abaddon_BorrowedTime_Passive::IsPermanent(
        CDOTA_Modifier_Abaddon_BorrowedTime_Passive *const this)
{
  return 1;
}


// CDOTA_Modifier_Abaddon_BorrowedTime_Passive::IsPurgable  (line 958, @0x0000000002c866f0, libserver.so)
bool __fastcall CDOTA_Modifier_Abaddon_BorrowedTime_Passive::IsPurgable(
        CDOTA_Modifier_Abaddon_BorrowedTime_Passive *const this)
{
  return 0;
}


// CDOTA_Modifier_Abaddon_BorrowedTime_Passive::IsHidden  (line 959, @0x0000000002c86700, libserver.so)
bool __fastcall CDOTA_Modifier_Abaddon_BorrowedTime_Passive::IsHidden(
        CDOTA_Modifier_Abaddon_BorrowedTime_Passive *const this)
{
  return 1;
}


// CDOTA_Modifier_Abaddon_BorrowedTime_Passive::OnCreated  (line 975, @0x0000000002c70890, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "hp_threshold"
void __fastcall CDOTA_Modifier_Abaddon_BorrowedTime_Passive::OnCreated(
        CDOTA_Modifier_Abaddon_BorrowedTime_Passive *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->hp_threshold = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "hp_threshold", -1, 0);
  else
    this->hp_threshold = 0;
}


// CDOTA_Modifier_Abaddon_BorrowedTime_Passive::DeclareFunctions  (line 982, @0x0000000002c1b560, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Abaddon_BorrowedTime_Passive::OnTakeDamage(CModifierParams const&)
void __fastcall CDOTA_Modifier_Abaddon_BorrowedTime_Passive::DeclareFunctions(
        CDOTA_Modifier_Abaddon_BorrowedTime_Passive *const this)
{
  this->m_Functions[134].__pfn = CDOTA_Modifier_Abaddon_BorrowedTime_Passive::OnTakeDamage;
  this->m_Functions[134].__delta = 0;
}


// CDOTA_Modifier_Abaddon_BorrowedTime_Passive::OnTakeDamage  (line 989, @0x0000000002c2dfe0, libserver.so)  // inlines: Get, GetBool, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetHealth, CDOTA_Buff::GetAbility
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Abaddon_BorrowedTime_Passive::OnTakeDamage(
        CDOTA_Modifier_Abaddon_BorrowedTime_Passive *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v9; // r12
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v11; // rax
  CDOTABaseAbility *v12; // rax

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
          v9 = Parent;
          if ( Parent == m_pInstance
            && !Parent->m_bIsIllusion.m_Value
            && CBaseEntity::GetHealth(Parent) < this->hp_threshold
            && (*(v9->_vptr_IHandleEntity + 408))(v9) != 0 )
          {
            Ability = CDOTA_Buff::GetAbility(this);
            if ( (*(Ability->_vptr_IHandleEntity + 245))(Ability) != 0 && (v9->m_nUnitState64.m_Value & 0x10000000) == 0 )
            {
              v11 = CDOTA_Buff::GetAbility(this);
              (*(v11->_vptr_IHandleEntity + 266))(v11);
              if ( dota_ability_debug.m_pParent->m_Value.m_nValue == 0 )
              {
                v12 = CDOTA_Buff::GetAbility(this);
                (*(v12->_vptr_IHandleEntity + 241))(v12, -1.0);
              }
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Abaddon_Borrowed_Time_Damage_Redirect::~CDOTA_Modifier_Abaddon_Borrowed_Time_Damage_Redirect  (line 1019, @0x0000000002c93870, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Abaddon_Borrowed_Time_Damage_Redirect::~CDOTA_Modifier_Abaddon_Borrowed_Time_Damage_Redirect(
        CDOTA_Modifier_Abaddon_Borrowed_Time_Damage_Redirect *const this)
{
  this->_vptr_CDOTA_Buff = &off_457D890;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Abaddon_Borrowed_Time_Damage_Redirect::~CDOTA_Modifier_Abaddon_Borrowed_Time_Damage_Redirect  (line 1019, @0x0000000002c93890, libserver.so)  // inlines: ~CDOTA_Modifier_Abaddon_Borrowed_Time_Damage_Redirect
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Abaddon_Borrowed_Time_Damage_Redirect::~CDOTA_Modifier_Abaddon_Borrowed_Time_Damage_Redirect(
        CDOTA_Modifier_Abaddon_Borrowed_Time_Damage_Redirect *const this)
{
  this->_vptr_CDOTA_Buff = &off_457D890;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Abaddon_Borrowed_Time_Damage_Redirect::IsPurgable  (line 1025, @0x0000000002c86710, libserver.so)
bool __fastcall CDOTA_Modifier_Abaddon_Borrowed_Time_Damage_Redirect::IsPurgable(
        CDOTA_Modifier_Abaddon_Borrowed_Time_Damage_Redirect *const this)
{
  return 0;
}


// CDOTA_Modifier_Abaddon_Borrowed_Time_Damage_Redirect::StatusEffectPriority  (line 1030, @0x0000000002c86720, libserver.so)
int __fastcall CDOTA_Modifier_Abaddon_Borrowed_Time_Damage_Redirect::StatusEffectPriority(
        CDOTA_Modifier_Abaddon_Borrowed_Time_Damage_Redirect *const this)
{
  return 8;
}


// CDOTA_Modifier_Abaddon_Borrowed_Time_Damage_Redirect::OnCreated  (line 1041, @0x0000000002c59660, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "redirect"
void __fastcall CDOTA_Modifier_Abaddon_Borrowed_Time_Damage_Redirect::OnCreated(
        CDOTA_Modifier_Abaddon_Borrowed_Time_Damage_Redirect *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->redirect = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "redirect", -1, 0);
  else
    this->redirect = 0.0;
}


// CDOTA_Modifier_Abaddon_Borrowed_Time_Damage_Redirect::DeclareFunctions  (line 1048, @0x0000000002c1b580, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Abaddon_Borrowed_Time_Damage_Redirect::DeclareFunctions(
        CDOTA_Modifier_Abaddon_Borrowed_Time_Damage_Redirect *const this)
{
  this->m_Functions[89].__pfn = (&stru_10 + 697);
  this->m_Functions[89].__delta = 0;
}


// CDOTA_Modifier_Abaddon_Borrowed_Time_Damage_Redirect::GetModifierTotal_ConstantBlock  (line 1055, @0x0000000002c1f1d0, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetCaster, CDOTA_Buff::GetAbility, ApplyDamage
ModifierVariant_t __fastcall CDOTA_Modifier_Abaddon_Borrowed_Time_Damage_Redirect::GetModifierTotal_ConstantBlock(
        CDOTA_Modifier_Abaddon_Borrowed_Time_Damage_Redirect *const this,
        const CModifierParams *const params)
{
  float v3; // r14d
  CDOTA_BaseNPC *Parent; // r12
  __m128i v5; // xmm3
  float v7; // r12d
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_BaseNPC *v10; // rax
  float redirect; // [rsp+Ch] [rbp-24h]
  ModifierVariant_t result; // 0:rax.16

  redirect = this->redirect;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(LODWORD(params->fDamage)));
  Parent = CDOTA_Buff::GetParent(this);
  if ( Parent == CDOTA_Buff::GetCaster(this) || CDOTA_Buff::GetParent(this)->m_bIsIllusion.m_Value )
    return 1uLL;
  *v5.m128i_i32 = (v3 * redirect);
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
  Ability = CDOTA_Buff::GetAbility(this);
  Caster = CDOTA_Buff::GetCaster(this);
  v10 = CDOTA_Buff::GetParent(this);
  ApplyDamage(v10, Caster, Ability, v7, 4, 608);
  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(v7) << 32) | 1;
  return result;
}


