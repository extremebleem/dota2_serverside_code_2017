// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_night_stalker.cpp:28
class CDOTA_Unit_Hero_NightStalker : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_NightStalker(CDOTA_Unit_Hero_NightStalker &);
	CDOTA_Unit_Hero_NightStalker(CDOTA_Unit_Hero_NightStalker &);
	CDOTA_Unit_Hero_NightStalker();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Spawn(const CEntityKeyValues *);
	virtual void UpdateOnModelChange(bool);
	virtual bool HasFlyingVision();
	virtual ~CDOTA_Unit_Hero_NightStalker();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[8] Spawn
	// vtable[473] UpdateOnModelChange
	// vtable[445] HasFlyingVision
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_night_stalker.cpp:44
class C_CDOTA_Unit_Hero_NightStalker_MapInstall {
	C_CDOTA_Unit_Hero_NightStalker_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_night_stalker.cpp:127
class CDOTA_Ability_NightStalker_Void : public CDOTABaseAbility {
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
	CDOTA_Ability_NightStalker_Void(CDOTA_Ability_NightStalker_Void &);
	CDOTA_Ability_NightStalker_Void(CDOTA_Ability_NightStalker_Void &);
	CDOTA_Ability_NightStalker_Void();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual int GetConceptRecipientType();
	virtual const char * GetStolenActivityModifier();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_NightStalker_Void();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[299] GetConceptRecipientType
	// vtable[310] GetStolenActivityModifier
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_night_stalker.cpp:191
class CDOTA_Modifier_NightStalker_Void : public CDOTA_Buff {
public:

private:

	int movespeed_slow;  // +0xba8
	int attackspeed_slow;  // +0xbac
	CDOTA_Modifier_NightStalker_Void();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual const char * GetEffectName();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant_Secondary(const CModifierParams &);
	virtual ~CDOTA_Modifier_NightStalker_Void();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[67] GetEffectName
	// vtable[65] DeclareFunctions
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_night_stalker.cpp:257
class CDOTA_Ability_NightStalker_CripplingFear : public CDOTABaseAbility {
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
	CDOTA_Ability_NightStalker_CripplingFear(CDOTA_Ability_NightStalker_CripplingFear &);
	CDOTA_Ability_NightStalker_CripplingFear(CDOTA_Ability_NightStalker_CripplingFear &);
	CDOTA_Ability_NightStalker_CripplingFear();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual int GetConceptRecipientType();
	virtual const char * GetStolenActivityModifier();
	virtual bool HasSilence();
	virtual float GetCooldown(int);
	virtual ~CDOTA_Ability_NightStalker_CripplingFear();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[299] GetConceptRecipientType
	// vtable[310] GetStolenActivityModifier
	// vtable[325] HasSilence
	// vtable[242] GetCooldown
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_night_stalker.cpp:273
class C_CDOTA_Ability_NightStalker_CripplingFear_MapInstall {
	C_CDOTA_Ability_NightStalker_CripplingFear_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_night_stalker.cpp:316
class CDOTA_Modifier_NightStalker_CripplingFear : public CDOTA_Buff {
public:

private:

	int nMissRate;  // +0xba8
	CDOTA_Modifier_NightStalker_CripplingFear();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMiss_Percentage(const CModifierParams &);
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_NightStalker_CripplingFear();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMiss_Percentage
	// vtable[5] CheckState
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_night_stalker.cpp:408
class CDOTA_Ability_NightStalker_HunterInTheNight : public CDOTABaseAbility {
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
	CDOTA_Ability_NightStalker_HunterInTheNight(CDOTA_Ability_NightStalker_HunterInTheNight &);
	CDOTA_Ability_NightStalker_HunterInTheNight(CDOTA_Ability_NightStalker_HunterInTheNight &);
	CDOTA_Ability_NightStalker_HunterInTheNight();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_NightStalker_HunterInTheNight();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_night_stalker.cpp:422
class CDOTA_Modifier_NightStalker_HunterInTheNight : public CDOTA_Buff {
public:

private:

	int bonus_movement_speed_pct_night;  // +0xba8
	int bonus_attack_speed_night;  // +0xbac
	int m_nFXIndex;  // +0xbb0
	bool m_bIsDay;  // +0xbb4
	CDOTA_Modifier_NightStalker_HunterInTheNight();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual bool IsHidden();
	virtual int GetPriority();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t GetModifierAttackSpeedBonus_Constant(const CModifierParams &);
	ModifierVariant_t GetModifierModelChange(const CModifierParams &);
	ModifierVariant_t GetModifierPreserveParticlesOnModelChange(const CModifierParams &);
	virtual const char * GetHeroEffectName();
	virtual int HeroEffectPriority();
	virtual ~CDOTA_Modifier_NightStalker_HunterInTheNight();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[11] IsHidden
	// vtable[6] GetPriority
	// vtable[65] DeclareFunctions
	// vtable[72] GetHeroEffectName
	// vtable[73] HeroEffectPriority
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_night_stalker.cpp:571
class CDOTA_Ability_NightStalker_Darkness : public CDOTABaseAbility {
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
	CDOTA_Ability_NightStalker_Darkness(CDOTA_Ability_NightStalker_Darkness &);
	CDOTA_Ability_NightStalker_Darkness(CDOTA_Ability_NightStalker_Darkness &);
	CDOTA_Ability_NightStalker_Darkness();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual const char * GetStolenActivityModifier();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_NightStalker_Darkness();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[310] GetStolenActivityModifier
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_night_stalker.cpp:641
class CDOTA_Modifier_Nighstalker_Darkness_Thinker : public CDOTA_Buff {
public:

	CDOTA_Modifier_Nighstalker_Darkness_Thinker(CDOTA_Modifier_Nighstalker_Darkness_Thinker &);
	CDOTA_Modifier_Nighstalker_Darkness_Thinker(const CDOTA_Modifier_Nighstalker_Darkness_Thinker &);
	CDOTA_Modifier_Nighstalker_Darkness_Thinker();
	virtual bool IsHidden();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraSearchFlags();
	virtual int GetAuraRadius();
	virtual bool GetAuraEntityReject(CDOTA_BaseNPC *);
	virtual ~CDOTA_Modifier_Nighstalker_Darkness_Thinker();

	// vtable[11] IsHidden
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[40] GetAuraSearchFlags
	// vtable[41] GetAuraRadius
	// vtable[42] GetAuraEntityReject
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_night_stalker.cpp:667
class CDOTA_Modifier_Nighstalker_Darkness_Blind : public CDOTA_Buff {
public:

private:

	int fixed_vision;  // +0xba8
	CDOTA_Modifier_Nighstalker_Darkness_Blind();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t GetFixedDayVision(const CModifierParams &);
	ModifierVariant_t GetFixedNightVision(const CModifierParams &);
	virtual int GetAttributes();
	virtual ~CDOTA_Modifier_Nighstalker_Darkness_Blind();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[7] GetAttributes
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_night_stalker.cpp:727
class CDOTA_Modifier_NightStalker_Darkness : public CDOTA_Buff {
public:

	CDOTA_Modifier_NightStalker_Darkness(CDOTA_Modifier_NightStalker_Darkness &);
	CDOTA_Modifier_NightStalker_Darkness(const CDOTA_Modifier_NightStalker_Darkness &);
	CDOTA_Modifier_NightStalker_Darkness();
	virtual bool IsDebuff();
	virtual bool IsPurgable();
	virtual bool RemoveOnDeath();
	virtual ~CDOTA_Modifier_NightStalker_Darkness();

	// vtable[12] IsDebuff
	// vtable[14] IsPurgable
	// vtable[54] RemoveOnDeath
	// sizeof = 2984
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_NightStalker::~CDOTA_Unit_Hero_NightStalker  (line 28, @0x0000000002c06f10, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_NightStalker::~CDOTA_Unit_Hero_NightStalker(CDOTA_Unit_Hero_NightStalker *const this)
{
  this->_vptr_IHandleEntity = &off_453BE90;
  this->_vptr_INextBotEventResponder = &off_453CE70;
  this->_vptr_CObstructionObject = &off_453D1A0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_NightStalker::~CDOTA_Unit_Hero_NightStalker  (line 28, @0x0000000002c06f50, libserver.so)  // inlines: ~CDOTA_Unit_Hero_NightStalker
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_NightStalker::~CDOTA_Unit_Hero_NightStalker(CDOTA_Unit_Hero_NightStalker *const this)
{
  this->_vptr_IHandleEntity = &off_453BE90;
  this->_vptr_INextBotEventResponder = &off_453CE70;
  this->_vptr_CObstructionObject = &off_453D1A0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_NightStalker::Schema_DynamicBinding  (line 30, @0x0000000002bfe320, libserver.so)
// globals: CDOTA_Unit_Hero_NightStalker::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_NightStalker::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_NightStalker *const this)
{
  return CDOTA_Unit_Hero_NightStalker::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_NightStalker::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 30, @0x0000000002bfe350, libserver.so)
// globals: CDOTA_Unit_Hero_NightStalker::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_NightStalker::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_NightStalker::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_NightStalker::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_NightStalker::CEntityInstanceEntityClass::DestructInstance  (line 30, @0x0000000002bfe360, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_NightStalker>
void __fastcall CDOTA_Unit_Hero_NightStalker::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_NightStalker::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_NightStalker::CEntityInstanceEntityClass::FreeInstance  (line 30, @0x0000000002bfe380, libserver.so)
void __fastcall CDOTA_Unit_Hero_NightStalker::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_NightStalker::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_NightStalker::CEntityInstanceEntityClass::CanAllocate  (line 30, @0x0000000002bfe3a0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_NightStalker::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_NightStalker::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_NightStalker::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 30, @0x0000000002bfe3b0, libserver.so)
// globals: CDOTA_Unit_Hero_NightStalker::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_NightStalker::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_NightStalker::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_NightStalker::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_NightStalker::CEntityInstanceEntityClass::AllocateInstance  (line 30, @0x0000000002c020f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_NightStalker::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_NightStalker::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_NightStalker::CEntityInstanceEntityClass::ConstructInstance  (line 30, @0x0000000002c044b0, libserver.so)  // inlines: CDOTA_Unit_Hero_NightStalker, Construct<CDOTA_Unit_Hero_NightStalker>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_NightStalker::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_NightStalker::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_453BE90;
    *(p + 236) = &off_453CE70;
    *(p + 257) = &off_453D1A0;
  }
  return p;
}


// CDOTA_Unit_Hero_NightStalker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002c0b440, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_NightStalker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_NightStalker::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_NightStalker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002c0b640, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_NightStalker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_NightStalker::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_NightStalker::GetEntityClassInternal  (line 30, @0x0000000002c12010, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "npc_dota_hero_night_stalker", "CDOTA_Unit_Hero_NightStalker"
// globals: `guard variable for'CDOTA_Unit_Hero_NightStalker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NightStalkerClass, CDOTA_Unit_Hero_NightStalker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NightStalkerClass, __dso_handle, CDOTA_Unit_Hero_NightStalker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_NightStalker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_NightStalkerClassInfo, CDOTA_Unit_Hero_NightStalker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_NightStalkerClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_NightStalker::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_NightStalker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NightStalkerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_NightStalker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NightStalkerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_NightStalker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NightStalkerClass);
    CDOTA_Unit_Hero_NightStalker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NightStalkerClass._vptr_CEntityClass = off_453BE10;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_NightStalker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NightStalkerClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_NightStalker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_NightStalker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NightStalkerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_NightStalkerClass != 0 )
    return &CDOTA_Unit_Hero_NightStalker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NightStalkerClass;
  if ( `guard variable for'CDOTA_Unit_Hero_NightStalker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_NightStalkerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_NightStalker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_NightStalkerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_NightStalker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_NightStalkerClassInfo,
      "CDOTA_Unit_Hero_NightStalker",
      "npc_dota_hero_night_stalker",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_NightStalker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_NightStalkerClassInfo);
  }
  CDOTA_Unit_Hero_NightStalker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NightStalkerClass.m_pClassInfo = &CDOTA_Unit_Hero_NightStalker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_NightStalkerClassInfo;
  CDOTA_Unit_Hero_NightStalker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NightStalkerClass.m_pBaseClassInfo = CDOTA_Unit_Hero_NightStalker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_NightStalkerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_NightStalkerClass = &CDOTA_Unit_Hero_NightStalker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NightStalkerClass;
  CDOTA_Unit_Hero_NightStalker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_NightStalkerClassInfo.m_pClass = &CDOTA_Unit_Hero_NightStalker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NightStalkerClass;
  CDOTA_Unit_Hero_NightStalker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NightStalkerClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_NightStalkerClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_NightStalker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_NightStalkerClass;
}


// CDOTA_Unit_Hero_NightStalker::YouForgotToImplementOrDeclareServerClass  (line 44, @0x0000000002bd30f0, libserver.so)
int __fastcall CDOTA_Unit_Hero_NightStalker::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_NightStalker *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_NightStalker::GetServerClass  (line 44, @0x0000000002bdcb70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_NightStalker::GetServerClass(CDOTA_Unit_Hero_NightStalker *const this)
{
  CEntityClass *m_pClass; // rdx
  ServerClass *result; // rax
  CEntityClassInfo *m_pBaseClassInfo; // rdx
  CEntityClass *v4; // rdx
  CEntityClassInfo *v5; // rdx

  m_pClass = this->m_pEntity->m_pClass;
  result = m_pClass->m_pGameClass;
  if ( result == 0 )
  {
    m_pBaseClassInfo = m_pClass->m_pBaseClassInfo;
    if ( m_pBaseClassInfo != 0 )
    {
      v4 = m_pBaseClassInfo->m_pClass;
      result = v4->m_pGameClass;
      if ( result == 0 )
      {
        v5 = v4->m_pBaseClassInfo;
        if ( v5 != 0 )
          return CEntityClass::GetGameClass(v5->m_pClass, 0);
      }
    }
  }
  return result;
}


// CDOTA_Unit_Hero_NightStalker::Spawn  (line 53, @0x0000000002bd54b0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Spawn
void __fastcall CDOTA_Unit_Hero_NightStalker::Spawn(
        CDOTA_Unit_Hero_NightStalker *const this,
        const CEntityKeyValues *pKeyValues)
{
  CDOTA_BaseNPC_Hero::Spawn(this, pKeyValues);
}


// CDOTA_Unit_Hero_NightStalker::UpdateOnModelChange  (line 58, @0x0000000002bd54c0, libserver.so)  // inlines: CWeakHandle, FromUntypedHandleUnchecked, SetOriginalModel, StaticInvalidHandle, String, ToCStr, V_isempty, _V_strstr, operator=, strstr
// calls: CDOTA_BaseNPC::UpdateOnModelChange, CBaseEntity::GetModelName, strstr, V_stricmp_fast, CDOTA_BaseNPC_Hero::SetWearableModelIndex, MakeEntitySystemString
// strings: "models/heroes/nightstalker/nightstalker.vmdl", "models/heroes/nightstalker/nightstalker_night.vmdl"
void __fastcall CDOTA_Unit_Hero_NightStalker::UpdateOnModelChange(
        CDOTA_Unit_Hero_NightStalker *const this,
        bool bOriginalModel)
{
  const char *m_pAsString; // r13
  const ResourceBindingBase_t *m_pBinding; // rax
  const char *v5; // r12
  HModel nModelIndexDay; // [rsp+0h] [rbp-60h] BYREF
  HModel nModelIndexNight; // [rsp+10h] [rbp-50h] BYREF
  HModel nBaseModelIndex; // [rsp+20h] [rbp-40h] BYREF

  m_pAsString = "";
  CDOTA_BaseNPC::UpdateOnModelChange(this, bOriginalModel);
  CBaseEntity::GetModelName(&nBaseModelIndex, this);
  m_pBinding = nBaseModelIndex.m_pBinding;
  if ( nBaseModelIndex.m_pBinding == 0 )
    m_pBinding = "";
  v5 = m_pBinding;
  if ( LOBYTE(m_pBinding->m_pData) != 0 )
  {
    (*(modelinfo->_vptr_IAppSystem + 13))(&nModelIndexDay, modelinfo, "models/heroes/nightstalker/nightstalker.vmdl");
    (*(modelinfo->_vptr_IAppSystem + 13))(
      &nModelIndexNight,
      modelinfo,
      "models/heroes/nightstalker/nightstalker_night.vmdl");
    if ( this->m_iszOriginalModel.u.m_Id != 0 )
      m_pAsString = this->m_iszOriginalModel.u.m_pAsString;
    if ( strstr(v5, "models/heroes/nightstalker/nightstalker.vmdl") != 0
      && V_stricmp_fast(m_pAsString, "models/heroes/nightstalker/nightstalker.vmdl") != 0 )
    {
      nBaseModelIndex.m_pBinding = 0;
      CDOTA_BaseNPC_Hero::SetWearableModelIndex(this, 0, &nBaseModelIndex);
      MakeEntitySystemString("models/heroes/nightstalker/nightstalker.vmdl");
      this->m_iszOriginalModel.u.m_Id = nBaseModelIndex.m_pBinding;
    }
    else if ( strstr(v5, "models/heroes/nightstalker/nightstalker_night.vmdl") != 0
           && V_stricmp_fast(m_pAsString, "models/heroes/nightstalker/nightstalker_night.vmdl") != 0 )
    {
      nBaseModelIndex.m_pBinding = 0;
      CDOTA_BaseNPC_Hero::SetWearableModelIndex(this, 1u, &nBaseModelIndex);
      MakeEntitySystemString("models/heroes/nightstalker/nightstalker_night.vmdl");
      this->m_iszOriginalModel.u.m_Id = nBaseModelIndex.m_pBinding;
    }
  }
}


// CDOTA_Unit_Hero_NightStalker::HasFlyingVision  (line 116, @0x0000000002bd9780, libserver.so)  // inlines: DOTAGameRules, GetTimeOfDay, IsDaytime, RemapValClamped, clamp<float, float>
// calls: CDOTA_BaseNPC::HasScepter
bool __fastcall CDOTA_Unit_Hero_NightStalker::HasFlyingVision(CDOTA_Unit_Hero_NightStalker *const this)
{
  bool HasScepter; // dl
  bool result; // al
  float v4; // xmm0_4

  HasScepter = CDOTA_BaseNPC::HasScepter(this);
  result = 0;
  if ( HasScepter )
  {
    if ( LOBYTE(g_pGameRules[14].m_nQuestPhase) != 0 )
      return !this->m_bIsIllusion.m_Value;
    if ( BYTE1(g_pGameRules[14].m_nQuestPhase) != 0 )
      return !this->m_bIsIllusion.m_Value;
    v4 = *&g_pGameRules[18].m_szQuestName[28] / 65535.0;
    if ( v4 < 0.0 || v4 > 1.0 || (v4 + 0.0) < 0.25 || (v4 + 0.0) > 0.75 )
      return !this->m_bIsIllusion.m_Value;
  }
  return result;
}


// CDOTA_Ability_NightStalker_Void::~CDOTA_Ability_NightStalker_Void  (line 127, @0x0000000002c05260, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_NightStalker_Void::~CDOTA_Ability_NightStalker_Void(
        CDOTA_Ability_NightStalker_Void *const this)
{
  this->_vptr_IHandleEntity = &off_453D270;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_NightStalker_Void::~CDOTA_Ability_NightStalker_Void  (line 127, @0x0000000002c05280, libserver.so)  // inlines: ~CDOTA_Ability_NightStalker_Void
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_NightStalker_Void::~CDOTA_Ability_NightStalker_Void(
        CDOTA_Ability_NightStalker_Void *const this)
{
  this->_vptr_IHandleEntity = &off_453D270;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_NightStalker_Void::Schema_DynamicBinding  (line 129, @0x0000000002bfe3c0, libserver.so)
// globals: CDOTA_Ability_NightStalker_Void::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_NightStalker_Void::Schema_DynamicBinding(
        const CDOTA_Ability_NightStalker_Void *const this)
{
  return CDOTA_Ability_NightStalker_Void::s_pSchemaBinding;
}


// CDOTA_Ability_NightStalker_Void::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 129, @0x0000000002bfe3d0, libserver.so)
// globals: CDOTA_Ability_NightStalker_Void::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_NightStalker_Void::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_NightStalker_Void::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_NightStalker_Void::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_NightStalker_Void::CEntityInstanceEntityClass::DestructInstance  (line 129, @0x0000000002bfe3e0, libserver.so)  // inlines: Destruct<CDOTA_Ability_NightStalker_Void>
void __fastcall CDOTA_Ability_NightStalker_Void::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_NightStalker_Void::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_NightStalker_Void::CEntityInstanceEntityClass::FreeInstance  (line 129, @0x0000000002bfe400, libserver.so)
void __fastcall CDOTA_Ability_NightStalker_Void::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_NightStalker_Void::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_NightStalker_Void::CEntityInstanceEntityClass::CanAllocate  (line 129, @0x0000000002bfe420, libserver.so)
bool __fastcall CDOTA_Ability_NightStalker_Void::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_NightStalker_Void::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_NightStalker_Void::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 129, @0x0000000002bfe430, libserver.so)
// globals: CDOTA_Ability_NightStalker_Void::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_NightStalker_Void::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_NightStalker_Void::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_NightStalker_Void::s_pSchemaBinding;
}


// CDOTA_Ability_NightStalker_Void::CEntityInstanceEntityClass::AllocateInstance  (line 129, @0x0000000002c02130, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_NightStalker_Void::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_NightStalker_Void::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_NightStalker_Void::CEntityInstanceEntityClass::ConstructInstance  (line 129, @0x0000000002c04900, libserver.so)  // inlines: CDOTA_Ability_NightStalker_Void, Construct<CDOTA_Ability_NightStalker_Void>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_NightStalker_Void::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_NightStalker_Void::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_453D270;
  }
  return p;
}


// CDOTA_Ability_NightStalker_Void::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 129, @0x0000000002c0a820, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_NightStalker_Void::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_NightStalker_Void::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_NightStalker_Void::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 129, @0x0000000002c0a840, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_NightStalker_Void::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_NightStalker_Void::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_NightStalker_Void::GetEntityClassInternal  (line 129, @0x0000000002c12160, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "CDOTA_Ability_NightStalker_Void"
// globals: `guard variable for'CDOTA_Ability_NightStalker_Void::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_VoidClass, CDOTA_Ability_NightStalker_Void::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_VoidClass, __dso_handle, CDOTA_Ability_NightStalker_Void::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_NightStalker_Void::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_VoidClassInfo, CDOTA_Ability_NightStalker_Void::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_VoidClassInfo
CEntityClass *__cdecl CDOTA_Ability_NightStalker_Void::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_NightStalker_Void::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_VoidClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_NightStalker_Void::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_VoidClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_NightStalker_Void::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_VoidClass);
    CDOTA_Ability_NightStalker_Void::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_VoidClass._vptr_CEntityClass = off_453D1F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_NightStalker_Void::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_VoidClass);
    __cxa_atexit(
      CDOTA_Ability_NightStalker_Void::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_NightStalker_Void::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_VoidClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_NightStalker_VoidClass != 0 )
    return &CDOTA_Ability_NightStalker_Void::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_VoidClass;
  if ( `guard variable for'CDOTA_Ability_NightStalker_Void::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_VoidClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_NightStalker_Void::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_VoidClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_NightStalker_Void::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_VoidClassInfo,
      "CDOTA_Ability_NightStalker_Void",
      "night_stalker_void",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_NightStalker_Void::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_VoidClassInfo);
  }
  CDOTA_Ability_NightStalker_Void::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_VoidClass.m_pClassInfo = &CDOTA_Ability_NightStalker_Void::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_VoidClassInfo;
  CDOTA_Ability_NightStalker_Void::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_VoidClass.m_pBaseClassInfo = CDOTA_Ability_NightStalker_Void::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_VoidClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_NightStalker_VoidClass = &CDOTA_Ability_NightStalker_Void::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_VoidClass;
  CDOTA_Ability_NightStalker_Void::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_VoidClassInfo.m_pClass = &CDOTA_Ability_NightStalker_Void::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_VoidClass;
  CDOTA_Ability_NightStalker_Void::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_VoidClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_NightStalker_VoidClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_NightStalker_Void::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_VoidClass;
}


// CDOTA_Ability_NightStalker_Void::GetConceptRecipientType  (line 133, @0x0000000002bfe440, libserver.so)
int __fastcall CDOTA_Ability_NightStalker_Void::GetConceptRecipientType(CDOTA_Ability_NightStalker_Void *const this)
{
  return 4;
}


// CDOTA_Ability_NightStalker_Void::GetStolenActivityModifier  (line 135, @0x0000000002bfe450, libserver.so)
const char *__fastcall CDOTA_Ability_NightStalker_Void::GetStolenActivityModifier(
        CDOTA_Ability_NightStalker_Void *const this)
{
  return "void";
}


// CDOTA_Ability_NightStalker_Void::OnSpellStart  (line 146, @0x0000000002bef3f0, libserver.so)  // inlines: DOTAGameRules, GetTimeOfDay, InState, IsDaytime, IsInvulnerable, RemapValClamped, ToDOTABaseNPC, clamp<float, float>
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, ApplyDamage, CDOTA_BaseNPC::FindReplacementSound (16 total)
// strings: "modifier_night_stalker_void", "duration_night", "particles/units/heroes/hero_night_stalker/nightstalker_void_hit.vpcf", "Hero_Nightstalker.Void", "modifier_stunned", "duration_day"
void __fastcall CDOTA_Ability_NightStalker_Void::OnSpellStart(CDOTA_Ability_NightStalker_Void *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // r12
  __int64 v4; // rax
  const char *v5; // rsi
  float v6; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v8; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  const char *ReplacementSound; // rax
  float v14; // xmm1_4
  CDOTA_BaseNPC *v15; // rax
  float v16; // xmm0_4
  float flDamage; // [rsp+Ch] [rbp-44h]
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-28h]

  v19 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0 )
  {
    v4 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
    if ( (v4 & 0x100) == 0 && (v4 & 0x200) == 0 && !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1) )
    {
      KeyValues::KeyValues(&kv, "modifier_night_stalker_void");
      if ( LOBYTE(g_pGameRules[14].m_nQuestPhase) != 0
        || BYTE1(g_pGameRules[14].m_nQuestPhase) != 0
        || (v16 = *&g_pGameRules[18].m_szQuestName[28] / 65535.0) < 0.0
        || v16 > 1.0
        || (v16 + 0.0) < 0.25
        || (v5 = "duration_day", (v16 + 0.0) > 0.75) )
      {
        v5 = "duration_night";
      }
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, v5, -1, 0);
      KeyValues::SetFloat(&kv, "duration", v6);
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_night_stalker_void", &kv, 0);
      v8 = CDOTABaseAbility::GetCaster(this);
      ParticleManager = GetParticleManager();
      LODWORD(v8) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_night_stalker/nightstalker_void_hit.vpcf",
                      1,
                      v3,
                      0,
                      v8);
      v10 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v10, v8);
      flDamage = (*(this->_vptr_IHandleEntity + 247))(this);
      v11 = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(v11, v3, this, flDamage, 2, 0);
      v12 = CDOTABaseAbility::GetCaster(this);
      ReplacementSound = CDOTA_BaseNPC::FindReplacementSound(v12, "Hero_Nightstalker.Void");
      CDOTA_BaseNPC::UnitEmitSound(v3, ReplacementSound, 0.0, 0, 0);
      KeyValues::SetFloat(&kv, "duration", v14);
      v15 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, v15, this, "modifier_stunned", &kv, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Ability_NightStalker_Void::GetAbilityDamageToTargetOverInterval  (line 172, @0x0000000002bd6440, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_NightStalker_Void::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_NightStalker_Void *const this,
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


// CDOTA_Ability_NightStalker_Void::GetSlowDuration  (line 182, @0x0000000002bef660, libserver.so)  // inlines: DOTAGameRules, GetTimeOfDay, IsDaytime, RemapValClamped, clamp<float, float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "duration_night", "duration_day"
float __fastcall CDOTA_Ability_NightStalker_Void::GetSlowDuration(CDOTA_Ability_NightStalker_Void *const this)
{
  const char *v1; // rsi
  float v3; // xmm0_4

  if ( LOBYTE(g_pGameRules[14].m_nQuestPhase) != 0
    || BYTE1(g_pGameRules[14].m_nQuestPhase) != 0
    || (v3 = *&g_pGameRules[18].m_szQuestName[28] / 65535.0) < 0.0
    || v3 > 1.0
    || (v3 + 0.0) < 0.25
    || (v1 = "duration_day", (v3 + 0.0) > 0.75) )
  {
    v1 = "duration_night";
  }
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, v1, -1, 0);
}


// CDOTA_Modifier_NightStalker_Void::~CDOTA_Modifier_NightStalker_Void  (line 191, @0x0000000002c03d80, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_NightStalker_Void::~CDOTA_Modifier_NightStalker_Void(
        CDOTA_Modifier_NightStalker_Void *const this)
{
  this->_vptr_CDOTA_Buff = &off_453DD30;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_NightStalker_Void::~CDOTA_Modifier_NightStalker_Void  (line 191, @0x0000000002c03da0, libserver.so)  // inlines: ~CDOTA_Modifier_NightStalker_Void
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_NightStalker_Void::~CDOTA_Modifier_NightStalker_Void(
        CDOTA_Modifier_NightStalker_Void *const this)
{
  this->_vptr_CDOTA_Buff = &off_453DD30;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_NightStalker_Void::IsDebuff  (line 196, @0x0000000002bfe460, libserver.so)
bool __fastcall CDOTA_Modifier_NightStalker_Void::IsDebuff(CDOTA_Modifier_NightStalker_Void *const this)
{
  return 1;
}


// CDOTA_Modifier_NightStalker_Void::GetEffectName  (line 201, @0x0000000002bfe470, libserver.so)
// strings: "particles/units/heroes/hero_night_stalker/nightstalker_void.vpcf"
const char *__fastcall CDOTA_Modifier_NightStalker_Void::GetEffectName(CDOTA_Modifier_NightStalker_Void *const this)
{
  return "particles/units/heroes/hero_night_stalker/nightstalker_void.vpcf";
}


// CDOTA_Modifier_NightStalker_Void::OnCreated  (line 216, @0x0000000002beb8d0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "movespeed_slow", "attackspeed_slow"
void __fastcall CDOTA_Modifier_NightStalker_Void::OnCreated(
        CDOTA_Modifier_NightStalker_Void *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->movespeed_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "movespeed_slow", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->attackspeed_slow = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "attackspeed_slow", -1, 0);
      return;
    }
  }
  else
  {
    this->movespeed_slow = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->attackspeed_slow = 0;
}


// CDOTA_Modifier_NightStalker_Void::OnDestroy  (line 224, @0x0000000002bd5630, libserver.so)
// calls: CDOTA_Buff::GetCaster, CDOTA_BaseNPC::FindReplacementSound, CDOTA_Buff::GetParent, CBaseEntity::StopSound
// strings: "Hero_Nightstalker.Void"
void __fastcall CDOTA_Modifier_NightStalker_Void::OnDestroy(CDOTA_Modifier_NightStalker_Void *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  const char *ReplacementSound; // r12
  CDOTA_BaseNPC *Parent; // rax

  Caster = CDOTA_Buff::GetCaster(this);
  ReplacementSound = CDOTA_BaseNPC::FindReplacementSound(Caster, "Hero_Nightstalker.Void");
  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(Parent, ReplacementSound);
}


// CDOTA_Modifier_NightStalker_Void::DeclareFunctions  (line 233, @0x0000000002bd3100, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_NightStalker_Void::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_NightStalker_Void::GetModifierAttackSpeedBonus_Constant_Secondary(CModifierParams const&)
void __fastcall CDOTA_Modifier_NightStalker_Void::DeclareFunctions(CDOTA_Modifier_NightStalker_Void *const this)
{
  this->m_Functions[13].__pfn = CDOTA_Modifier_NightStalker_Void::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_NightStalker_Void::GetModifierAttackSpeedBonus_Constant_Secondary;
}


// CDOTA_Modifier_NightStalker_Void::GetModifierMoveSpeedBonus_Percentage  (line 239, @0x0000000002bd3140, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_NightStalker_Void::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_NightStalker_Void *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->movespeed_slow;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_NightStalker_Void::GetModifierAttackSpeedBonus_Constant_Secondary  (line 246, @0x0000000002bd3160, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_NightStalker_Void::GetModifierAttackSpeedBonus_Constant_Secondary(
        CDOTA_Modifier_NightStalker_Void *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->attackspeed_slow;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Ability_NightStalker_CripplingFear::~CDOTA_Ability_NightStalker_CripplingFear  (line 257, @0x0000000002c052b0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_NightStalker_CripplingFear::~CDOTA_Ability_NightStalker_CripplingFear(
        CDOTA_Ability_NightStalker_CripplingFear *const this)
{
  this->_vptr_IHandleEntity = &off_453E090;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_NightStalker_CripplingFear::~CDOTA_Ability_NightStalker_CripplingFear  (line 257, @0x0000000002c052d0, libserver.so)  // inlines: ~CDOTA_Ability_NightStalker_CripplingFear
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_NightStalker_CripplingFear::~CDOTA_Ability_NightStalker_CripplingFear(
        CDOTA_Ability_NightStalker_CripplingFear *const this)
{
  this->_vptr_IHandleEntity = &off_453E090;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_NightStalker_CripplingFear::Schema_DynamicBinding  (line 259, @0x0000000002bfe480, libserver.so)
// globals: CDOTA_Ability_NightStalker_CripplingFear::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_NightStalker_CripplingFear::Schema_DynamicBinding(
        const CDOTA_Ability_NightStalker_CripplingFear *const this)
{
  return CDOTA_Ability_NightStalker_CripplingFear::s_pSchemaBinding;
}


// CDOTA_Ability_NightStalker_CripplingFear::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 259, @0x0000000002bfe490, libserver.so)
// globals: CDOTA_Ability_NightStalker_CripplingFear::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_NightStalker_CripplingFear::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_NightStalker_CripplingFear::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_NightStalker_CripplingFear::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_NightStalker_CripplingFear::CEntityInstanceEntityClass::DestructInstance  (line 259, @0x0000000002bfe4a0, libserver.so)  // inlines: Destruct<CDOTA_Ability_NightStalker_CripplingFear>
void __fastcall CDOTA_Ability_NightStalker_CripplingFear::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_NightStalker_CripplingFear::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_NightStalker_CripplingFear::CEntityInstanceEntityClass::FreeInstance  (line 259, @0x0000000002bfe4c0, libserver.so)
void __fastcall CDOTA_Ability_NightStalker_CripplingFear::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_NightStalker_CripplingFear::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_NightStalker_CripplingFear::CEntityInstanceEntityClass::CanAllocate  (line 259, @0x0000000002bfe4e0, libserver.so)
bool __fastcall CDOTA_Ability_NightStalker_CripplingFear::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_NightStalker_CripplingFear::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_NightStalker_CripplingFear::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 259, @0x0000000002bfe4f0, libserver.so)
// globals: CDOTA_Ability_NightStalker_CripplingFear::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_NightStalker_CripplingFear::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_NightStalker_CripplingFear::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_NightStalker_CripplingFear::s_pSchemaBinding;
}


// CDOTA_Ability_NightStalker_CripplingFear::CEntityInstanceEntityClass::AllocateInstance  (line 259, @0x0000000002c02170, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_NightStalker_CripplingFear::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_NightStalker_CripplingFear::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_NightStalker_CripplingFear::CEntityInstanceEntityClass::ConstructInstance  (line 259, @0x0000000002c04930, libserver.so)  // inlines: CDOTA_Ability_NightStalker_CripplingFear, Construct<CDOTA_Ability_NightStalker_CripplingFear>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_NightStalker_CripplingFear::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_NightStalker_CripplingFear::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_453E090;
  }
  return p;
}


// CDOTA_Ability_NightStalker_CripplingFear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 259, @0x0000000002c0a870, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_NightStalker_CripplingFear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_NightStalker_CripplingFear::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_NightStalker_CripplingFear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 259, @0x0000000002c0a890, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_NightStalker_CripplingFear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_NightStalker_CripplingFear::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_NightStalker_CripplingFear::GetEntityClassInternal  (line 259, @0x0000000002c122b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "night_stalker_crippling_fear", "CDOTA_Ability_NightStalker_CripplingFear"
// globals: `guard variable for'CDOTA_Ability_NightStalker_CripplingFear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_CripplingFearClass, CDOTA_Ability_NightStalker_CripplingFear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_CripplingFearClass, __dso_handle, CDOTA_Ability_NightStalker_CripplingFear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_NightStalker_CripplingFear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_CripplingFearClassInfo, CDOTA_Ability_NightStalker_CripplingFear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_CripplingFearClassInfo
CEntityClass *__cdecl CDOTA_Ability_NightStalker_CripplingFear::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_NightStalker_CripplingFear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_CripplingFearClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_NightStalker_CripplingFear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_CripplingFearClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_NightStalker_CripplingFear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_CripplingFearClass);
    CDOTA_Ability_NightStalker_CripplingFear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_CripplingFearClass._vptr_CEntityClass = off_453E010;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_NightStalker_CripplingFear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_CripplingFearClass);
    __cxa_atexit(
      CDOTA_Ability_NightStalker_CripplingFear::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_NightStalker_CripplingFear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_CripplingFearClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_NightStalker_CripplingFearClass != 0 )
    return &CDOTA_Ability_NightStalker_CripplingFear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_CripplingFearClass;
  if ( `guard variable for'CDOTA_Ability_NightStalker_CripplingFear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_CripplingFearClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_NightStalker_CripplingFear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_CripplingFearClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_NightStalker_CripplingFear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_CripplingFearClassInfo,
      "CDOTA_Ability_NightStalker_CripplingFear",
      "night_stalker_crippling_fear",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_NightStalker_CripplingFear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_CripplingFearClassInfo);
  }
  CDOTA_Ability_NightStalker_CripplingFear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_CripplingFearClass.m_pClassInfo = &CDOTA_Ability_NightStalker_CripplingFear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_CripplingFearClassInfo;
  CDOTA_Ability_NightStalker_CripplingFear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_CripplingFearClass.m_pBaseClassInfo = CDOTA_Ability_NightStalker_CripplingFear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_CripplingFearClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_NightStalker_CripplingFearClass = &CDOTA_Ability_NightStalker_CripplingFear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_CripplingFearClass;
  CDOTA_Ability_NightStalker_CripplingFear::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_CripplingFearClassInfo.m_pClass = &CDOTA_Ability_NightStalker_CripplingFear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_CripplingFearClass;
  CDOTA_Ability_NightStalker_CripplingFear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_CripplingFearClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_NightStalker_CripplingFearClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_NightStalker_CripplingFear::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_CripplingFearClass;
}


// CDOTA_Ability_NightStalker_CripplingFear::GetConceptRecipientType  (line 264, @0x0000000002bfe500, libserver.so)
int __fastcall CDOTA_Ability_NightStalker_CripplingFear::GetConceptRecipientType(
        CDOTA_Ability_NightStalker_CripplingFear *const this)
{
  return 4;
}


// CDOTA_Ability_NightStalker_CripplingFear::GetStolenActivityModifier  (line 266, @0x0000000002bfe510, libserver.so)
const char *__fastcall CDOTA_Ability_NightStalker_CripplingFear::GetStolenActivityModifier(
        CDOTA_Ability_NightStalker_CripplingFear *const this)
{
  return "fear";
}


// CDOTA_Ability_NightStalker_CripplingFear::HasSilence  (line 268, @0x0000000002bfe520, libserver.so)
bool __fastcall CDOTA_Ability_NightStalker_CripplingFear::HasSilence(
        CDOTA_Ability_NightStalker_CripplingFear *const this)
{
  return 1;
}


// CDOTA_Ability_NightStalker_CripplingFear::YouForgotToImplementOrDeclareServerClass  (line 273, @0x0000000002bd3180, libserver.so)
int __fastcall CDOTA_Ability_NightStalker_CripplingFear::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_NightStalker_CripplingFear *const this)
{
  return 0;
}


// CDOTA_Ability_NightStalker_CripplingFear::GetServerClass  (line 273, @0x0000000002bdc530, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_NightStalker_CripplingFear::GetServerClass(
        CDOTA_Ability_NightStalker_CripplingFear *const this)
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


// CDOTA_Ability_NightStalker_CripplingFear::GetCooldown  (line 283, @0x0000000002be9030, libserver.so)
// calls: CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_night_stalker"
float __fastcall CDOTA_Ability_NightStalker_CripplingFear::GetCooldown(
        CDOTA_Ability_NightStalker_CripplingFear *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float result; // xmm0_4
  float flCooldown; // [rsp+Ch] [rbp-14h]

  flCooldown = CDOTABaseAbility::GetCooldown(this, iLevel);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_night_stalker", 0);
  result = flCooldown;
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    return flCooldown - CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  return result;
}


// CDOTA_Ability_NightStalker_CripplingFear::OnSpellStart  (line 296, @0x0000000002bef6e0, libserver.so)  // inlines: DOTAGameRules, GetTimeOfDay, InState, IsDaytime, IsInvulnerable, RemapValClamped, ToDOTABaseNPC, clamp<float, float>
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, KeyValues::KeyValues, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, DOTA_EmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_night_stalker_crippling_fear", "duration_night", "Hero_Nightstalker.Trickling_Fear", "duration_day"
void __fastcall CDOTA_Ability_NightStalker_CripplingFear::OnSpellStart(
        CDOTA_Ability_NightStalker_CripplingFear *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  __int64 v4; // rax
  const char *v5; // rsi
  float v6; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  float v8; // xmm0_4
  KeyValues kv; // [rsp+0h] [rbp-40h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-28h]

  v10 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0 )
  {
    v4 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
    if ( (v4 & 0x100) == 0 && (v4 & 0x200) == 0 && !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1) )
    {
      KeyValues::KeyValues(&kv, "modifier_night_stalker_crippling_fear");
      if ( LOBYTE(g_pGameRules[14].m_nQuestPhase) != 0
        || BYTE1(g_pGameRules[14].m_nQuestPhase) != 0
        || (v8 = *&g_pGameRules[18].m_szQuestName[28] / 65535.0) < 0.0
        || v8 > 1.0
        || (v8 + 0.0) < 0.25
        || (v5 = "duration_day", (v8 + 0.0) > 0.75) )
      {
        v5 = "duration_night";
      }
      CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, v5, -1, 0);
      KeyValues::SetFloat(&kv, "duration", v6);
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_night_stalker_crippling_fear", &kv, 0);
      DOTA_EmitSound(10, "Hero_Nightstalker.Trickling_Fear", v3);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Modifier_NightStalker_CripplingFear::~CDOTA_Modifier_NightStalker_CripplingFear  (line 316, @0x0000000002c03d30, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_NightStalker_CripplingFear::~CDOTA_Modifier_NightStalker_CripplingFear(
        CDOTA_Modifier_NightStalker_CripplingFear *const this)
{
  this->_vptr_CDOTA_Buff = &off_453EB50;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_NightStalker_CripplingFear::~CDOTA_Modifier_NightStalker_CripplingFear  (line 316, @0x0000000002c03d50, libserver.so)  // inlines: ~CDOTA_Modifier_NightStalker_CripplingFear
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_NightStalker_CripplingFear::~CDOTA_Modifier_NightStalker_CripplingFear(
        CDOTA_Modifier_NightStalker_CripplingFear *const this)
{
  this->_vptr_CDOTA_Buff = &off_453EB50;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_NightStalker_CripplingFear::IsDebuff  (line 326, @0x0000000002bfe530, libserver.so)
bool __fastcall CDOTA_Modifier_NightStalker_CripplingFear::IsDebuff(
        CDOTA_Modifier_NightStalker_CripplingFear *const this)
{
  return 1;
}


// CDOTA_Modifier_NightStalker_CripplingFear::GetEffectName  (line 331, @0x0000000002bfe540, libserver.so)
// strings: "particles/units/heroes/hero_night_stalker/nightstalker_crippling_fear.vpcf"
const char *__fastcall CDOTA_Modifier_NightStalker_CripplingFear::GetEffectName(
        CDOTA_Modifier_NightStalker_CripplingFear *const this)
{
  return "particles/units/heroes/hero_night_stalker/nightstalker_crippling_fear.vpcf";
}


// CDOTA_Modifier_NightStalker_CripplingFear::GetEffectAttachType  (line 332, @0x0000000002bfe550, libserver.so)
int __fastcall CDOTA_Modifier_NightStalker_CripplingFear::GetEffectAttachType(
        CDOTA_Modifier_NightStalker_CripplingFear *const this)
{
  return 7;
}


// CDOTA_Modifier_NightStalker_CripplingFear::OnCreated  (line 349, @0x0000000002beba80, libserver.so)  // inlines: DOTAGameRules, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>, GetTimeOfDay, IsDaytime, RemapValClamped, clamp<float, float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "miss_rate_day", "miss_rate_night"
void __fastcall CDOTA_Modifier_NightStalker_CripplingFear::OnCreated(
        CDOTA_Modifier_NightStalker_CripplingFear *const this,
        KeyValues *pKV)
{
  int LevelSpecialValue; // r12d
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax
  int v6; // edx
  float v7; // xmm0_4

  LevelSpecialValue = 0;
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "miss_rate_day", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  v6 = 0;
  if ( v5 != 0 )
    v6 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "miss_rate_night", -1, 0);
  if ( LOBYTE(g_pGameRules[14].m_nQuestPhase) != 0
    || BYTE1(g_pGameRules[14].m_nQuestPhase) != 0
    || (v7 = *&g_pGameRules[18].m_szQuestName[28] / 65535.0) < 0.0
    || v7 > 1.0
    || (v7 + 0.0) < 0.25 )
  {
    this->nMissRate = v6;
  }
  else
  {
    if ( (v7 + 0.0) <= 0.75 )
      v6 = LevelSpecialValue;
    this->nMissRate = v6;
  }
}


// CDOTA_Modifier_NightStalker_CripplingFear::OnDestroy  (line 367, @0x0000000002bd4fb0, libserver.so)
// calls: CDOTA_Buff::GetParent, DOTA_EmitSound
// strings: "Hero_Nightstalker.Trickling_Fear_end"
void __fastcall CDOTA_Modifier_NightStalker_CripplingFear::OnDestroy(
        CDOTA_Modifier_NightStalker_CripplingFear *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(1, "Hero_Nightstalker.Trickling_Fear_end", Parent);
}


// CDOTA_Modifier_NightStalker_CripplingFear::DeclareFunctions  (line 381, @0x0000000002bd3190, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_NightStalker_CripplingFear::DeclareFunctions(
        CDOTA_Modifier_NightStalker_CripplingFear *const this)
{
  this->m_Functions[44].__pfn = (&stru_10 + 697);
  this->m_Functions[44].__delta = 0;
}


// CDOTA_Modifier_NightStalker_CripplingFear::GetModifierMiss_Percentage  (line 388, @0x0000000002bd31b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_NightStalker_CripplingFear::GetModifierMiss_Percentage(
        CDOTA_Modifier_NightStalker_CripplingFear *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->nMissRate;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_NightStalker_CripplingFear::CheckState  (line 395, @0x0000000002bd31d0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_NightStalker_CripplingFear::CheckState(
        CDOTA_Modifier_NightStalker_CripplingFear *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 8uLL;
  buffState->m_nDisabledStateMask &= ~8uLL;
}


// CDOTA_Ability_NightStalker_HunterInTheNight::~CDOTA_Ability_NightStalker_HunterInTheNight  (line 408, @0x0000000002c05300, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_NightStalker_HunterInTheNight::~CDOTA_Ability_NightStalker_HunterInTheNight(
        CDOTA_Ability_NightStalker_HunterInTheNight *const this)
{
  this->_vptr_IHandleEntity = &off_453EEB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_NightStalker_HunterInTheNight::~CDOTA_Ability_NightStalker_HunterInTheNight  (line 408, @0x0000000002c05320, libserver.so)  // inlines: ~CDOTA_Ability_NightStalker_HunterInTheNight
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_NightStalker_HunterInTheNight::~CDOTA_Ability_NightStalker_HunterInTheNight(
        CDOTA_Ability_NightStalker_HunterInTheNight *const this)
{
  this->_vptr_IHandleEntity = &off_453EEB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_NightStalker_HunterInTheNight::Schema_DynamicBinding  (line 410, @0x0000000002bfe560, libserver.so)
// globals: CDOTA_Ability_NightStalker_HunterInTheNight::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_NightStalker_HunterInTheNight::Schema_DynamicBinding(
        const CDOTA_Ability_NightStalker_HunterInTheNight *const this)
{
  return CDOTA_Ability_NightStalker_HunterInTheNight::s_pSchemaBinding;
}


// CDOTA_Ability_NightStalker_HunterInTheNight::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 410, @0x0000000002bfe570, libserver.so)
// globals: CDOTA_Ability_NightStalker_HunterInTheNight::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_NightStalker_HunterInTheNight::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_NightStalker_HunterInTheNight::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_NightStalker_HunterInTheNight::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_NightStalker_HunterInTheNight::CEntityInstanceEntityClass::DestructInstance  (line 410, @0x0000000002bfe580, libserver.so)  // inlines: Destruct<CDOTA_Ability_NightStalker_HunterInTheNight>
void __fastcall CDOTA_Ability_NightStalker_HunterInTheNight::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_NightStalker_HunterInTheNight::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_NightStalker_HunterInTheNight::CEntityInstanceEntityClass::FreeInstance  (line 410, @0x0000000002bfe5a0, libserver.so)
void __fastcall CDOTA_Ability_NightStalker_HunterInTheNight::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_NightStalker_HunterInTheNight::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_NightStalker_HunterInTheNight::CEntityInstanceEntityClass::CanAllocate  (line 410, @0x0000000002bfe5c0, libserver.so)
bool __fastcall CDOTA_Ability_NightStalker_HunterInTheNight::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_NightStalker_HunterInTheNight::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_NightStalker_HunterInTheNight::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 410, @0x0000000002bfe5d0, libserver.so)
// globals: CDOTA_Ability_NightStalker_HunterInTheNight::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_NightStalker_HunterInTheNight::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_NightStalker_HunterInTheNight::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_NightStalker_HunterInTheNight::s_pSchemaBinding;
}


// CDOTA_Ability_NightStalker_HunterInTheNight::CEntityInstanceEntityClass::AllocateInstance  (line 410, @0x0000000002c021b0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_NightStalker_HunterInTheNight::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_NightStalker_HunterInTheNight::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_NightStalker_HunterInTheNight::CEntityInstanceEntityClass::ConstructInstance  (line 410, @0x0000000002c04960, libserver.so)  // inlines: CDOTA_Ability_NightStalker_HunterInTheNight, Construct<CDOTA_Ability_NightStalker_HunterInTheNight>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_NightStalker_HunterInTheNight::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_NightStalker_HunterInTheNight::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_453EEB0;
  }
  return p;
}


// CDOTA_Ability_NightStalker_HunterInTheNight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 410, @0x0000000002c0a8c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_NightStalker_HunterInTheNight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_NightStalker_HunterInTheNight::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_NightStalker_HunterInTheNight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 410, @0x0000000002c0a8e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_NightStalker_HunterInTheNight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_NightStalker_HunterInTheNight::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_NightStalker_HunterInTheNight::GetEntityClassInternal  (line 410, @0x0000000002c12400, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "night_stalker_hunter_in_the_night", "CDOTA_Ability_NightStalker_HunterInTheNight"
// globals: `guard variable for'CDOTA_Ability_NightStalker_HunterInTheNight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_HunterInTheNightClass, CDOTA_Ability_NightStalker_HunterInTheNight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_HunterInTheNightClass, __dso_handle, CDOTA_Ability_NightStalker_HunterInTheNight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_NightStalker_HunterInTheNight::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_HunterInTheNightClassInfo, CDOTA_Ability_NightStalker_HunterInTheNight::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_HunterInTheNightClassInfo
CEntityClass *__cdecl CDOTA_Ability_NightStalker_HunterInTheNight::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_NightStalker_HunterInTheNight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_HunterInTheNightClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_NightStalker_HunterInTheNight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_HunterInTheNightClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_NightStalker_HunterInTheNight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_HunterInTheNightClass);
    CDOTA_Ability_NightStalker_HunterInTheNight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_HunterInTheNightClass._vptr_CEntityClass = off_453EE30;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_NightStalker_HunterInTheNight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_HunterInTheNightClass);
    __cxa_atexit(
      CDOTA_Ability_NightStalker_HunterInTheNight::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_NightStalker_HunterInTheNight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_HunterInTheNightClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_NightStalker_HunterInTheNightClass != 0 )
    return &CDOTA_Ability_NightStalker_HunterInTheNight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_HunterInTheNightClass;
  if ( `guard variable for'CDOTA_Ability_NightStalker_HunterInTheNight::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_HunterInTheNightClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_NightStalker_HunterInTheNight::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_HunterInTheNightClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_NightStalker_HunterInTheNight::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_HunterInTheNightClassInfo,
      "CDOTA_Ability_NightStalker_HunterInTheNight",
      "night_stalker_hunter_in_the_night",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_NightStalker_HunterInTheNight::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_HunterInTheNightClassInfo);
  }
  CDOTA_Ability_NightStalker_HunterInTheNight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_HunterInTheNightClass.m_pClassInfo = &CDOTA_Ability_NightStalker_HunterInTheNight::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_HunterInTheNightClassInfo;
  CDOTA_Ability_NightStalker_HunterInTheNight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_HunterInTheNightClass.m_pBaseClassInfo = CDOTA_Ability_NightStalker_HunterInTheNight::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_HunterInTheNightClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_NightStalker_HunterInTheNightClass = &CDOTA_Ability_NightStalker_HunterInTheNight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_HunterInTheNightClass;
  CDOTA_Ability_NightStalker_HunterInTheNight::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_HunterInTheNightClassInfo.m_pClass = &CDOTA_Ability_NightStalker_HunterInTheNight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_HunterInTheNightClass;
  CDOTA_Ability_NightStalker_HunterInTheNight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_HunterInTheNightClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_NightStalker_HunterInTheNightClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_NightStalker_HunterInTheNight::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_HunterInTheNightClass;
}


// CDOTA_Ability_NightStalker_HunterInTheNight::GetIntrinsicModifierName  (line 413, @0x0000000002bfe5e0, libserver.so)
// strings: "modifier_night_stalker_hunter_in_the_night"
const char *__fastcall CDOTA_Ability_NightStalker_HunterInTheNight::GetIntrinsicModifierName(
        CDOTA_Ability_NightStalker_HunterInTheNight *const this)
{
  return "modifier_night_stalker_hunter_in_the_night";
}


// CDOTA_Modifier_NightStalker_HunterInTheNight::~CDOTA_Modifier_NightStalker_HunterInTheNight  (line 422, @0x0000000002c03ce0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_NightStalker_HunterInTheNight::~CDOTA_Modifier_NightStalker_HunterInTheNight(
        CDOTA_Modifier_NightStalker_HunterInTheNight *const this)
{
  this->_vptr_CDOTA_Buff = &off_453F970;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_NightStalker_HunterInTheNight::~CDOTA_Modifier_NightStalker_HunterInTheNight  (line 422, @0x0000000002c03d00, libserver.so)  // inlines: ~CDOTA_Modifier_NightStalker_HunterInTheNight
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_NightStalker_HunterInTheNight::~CDOTA_Modifier_NightStalker_HunterInTheNight(
        CDOTA_Modifier_NightStalker_HunterInTheNight *const this)
{
  this->_vptr_CDOTA_Buff = &off_453F970;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_NightStalker_HunterInTheNight::IsHidden  (line 430, @0x0000000002bfe5f0, libserver.so)
bool __fastcall CDOTA_Modifier_NightStalker_HunterInTheNight::IsHidden(
        CDOTA_Modifier_NightStalker_HunterInTheNight *const this)
{
  return 1;
}


// CDOTA_Modifier_NightStalker_HunterInTheNight::GetHeroEffectName  (line 439, @0x0000000002bfe600, libserver.so)
// strings: "particles/units/heroes/hero_night_stalker/nightstalker_darkness_hero_effect.vpcf"
const char *__fastcall CDOTA_Modifier_NightStalker_HunterInTheNight::GetHeroEffectName(
        CDOTA_Modifier_NightStalker_HunterInTheNight *const this)
{
  return "particles/units/heroes/hero_night_stalker/nightstalker_darkness_hero_effect.vpcf";
}


// CDOTA_Modifier_NightStalker_HunterInTheNight::HeroEffectPriority  (line 440, @0x0000000002bfe610, libserver.so)
int __fastcall CDOTA_Modifier_NightStalker_HunterInTheNight::HeroEffectPriority(
        CDOTA_Modifier_NightStalker_HunterInTheNight *const this)
{
  return 100;
}


// CDOTA_Modifier_NightStalker_HunterInTheNight::OnCreated  (line 456, @0x0000000002bec6d0, libserver.so)  // inlines: AssignTo, DOTAGameRules, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>, GetTimeOfDay, IsDaytime, RemapValClamped, Vector, clamp<float, float>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::AddParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::StartIntervalThink
// strings: "bonus_movement_speed_pct_night", "bonus_attack_speed_night", "particles/units/heroes/hero_night_stalker/nightstalker_night_buff.vpcf"
void __fastcall CDOTA_Modifier_NightStalker_HunterInTheNight::OnCreated(
        CDOTA_Modifier_NightStalker_HunterInTheNight *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  bool v5; // dl
  CDOTA_BaseNPC *Caster; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax
  int m_nFXIndex; // r12d
  CDOTA_ParticleManager *v10; // rax
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm0_4
  const Vector vecFXAmount; // [rsp+10h] [rbp-30h]

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->bonus_movement_speed_pct_night = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                             Ability,
                                             "bonus_movement_speed_pct_night",
                                             -1,
                                             0);
  else
    this->bonus_movement_speed_pct_night = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 != 0 )
    this->bonus_attack_speed_night = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                       v4,
                                       "bonus_attack_speed_night",
                                       -1,
                                       0);
  else
    this->bonus_attack_speed_night = 0;
  v5 = 0;
  if ( LOBYTE(g_pGameRules[14].m_nQuestPhase) == 0 && BYTE1(g_pGameRules[14].m_nQuestPhase) == 0 )
  {
    v13 = *&g_pGameRules[18].m_szQuestName[28] / 65535.0;
    if ( v13 >= 0.0 && v13 <= 1.0 && (v13 + 0.0) >= 0.25 )
      v5 = (v13 + 0.0) <= 0.75;
  }
  this->m_bIsDay = v5;
  Caster = CDOTA_Buff::GetCaster(this);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_night_stalker/nightstalker_night_buff.vpcf",
               1,
               Caster,
               0,
               0);
  this->m_nFXIndex = Particle;
  CDOTA_Buff::AddParticle(this, Particle, 0, 0, -1, 0, 0);
  if ( LOBYTE(g_pGameRules[14].m_nQuestPhase) != 0
    || BYTE1(g_pGameRules[14].m_nQuestPhase) != 0
    || (v12 = *&g_pGameRules[18].m_szQuestName[28] / 65535.0) < 0.0
    || v12 > 1.0
    || (v12 + 0.0) < 0.25
    || (v12 + 0.0) > 0.75 )
  {
    *&vecFXAmount.x = 1065353216;
    vecFXAmount.z = 0.0;
  }
  else
  {
    vecFXAmount = vec3_origin;
  }
  m_nFXIndex = this->m_nFXIndex;
  v10 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v10, m_nFXIndex, 1, *&vecFXAmount.x, vecFXAmount.z);
  CDOTA_Buff::StartIntervalThink(this, 0.0, v11);
}


// CDOTA_Modifier_NightStalker_HunterInTheNight::OnRefresh  (line 476, @0x0000000002beb690, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "bonus_movement_speed_pct_night", "bonus_attack_speed_night"
void __fastcall CDOTA_Modifier_NightStalker_HunterInTheNight::OnRefresh(
        CDOTA_Modifier_NightStalker_HunterInTheNight *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->bonus_movement_speed_pct_night = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                             Ability,
                                             "bonus_movement_speed_pct_night",
                                             -1,
                                             0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->bonus_attack_speed_night = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                         v4,
                                         "bonus_attack_speed_night",
                                         -1,
                                         0);
      return;
    }
  }
  else
  {
    this->bonus_movement_speed_pct_night = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->bonus_attack_speed_night = 0;
}


// CDOTA_Modifier_NightStalker_HunterInTheNight::OnIntervalThink  (line 484, @0x0000000002bd9a30, libserver.so)  // inlines: DOTAGameRules, GetTimeOfDay, IsDaytime, IsNightstalkerNight, QueueConcept, RemapValClamped, Vector, clamp<float, float>
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::ManageModelChanges, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::StartGesture, CResponseCriteriaSet::CResponseCriteriaSet, CDOTA_Speech::QueueConcept, CResponseCriteriaSet::~CResponseCriteriaSet, CDOTA_ParticleManager::SetParticleControl, _Unwind_Resume
// strings: "particles/units/heroes/hero_night_stalker/nightstalker_change.vpcf"
void __fastcall CDOTA_Modifier_NightStalker_HunterInTheNight::OnIntervalThink(
        CDOTA_Modifier_NightStalker_HunterInTheNight *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  bool v3; // al
  CGameRules *v4; // rdx
  char m_nQuestPhase; // cl
  float v6; // xmm0_4
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CDOTA_Speech *m_pSpeech; // rdi
  int m_nFXIndex; // ebx
  CDOTA_ParticleManager *v14; // rax
  float v15; // xmm0_4
  vec_t z; // eax
  int v17; // ebx
  CDOTA_ParticleManager *v18; // rax
  CResponseCriteriaSet criteria; // [rsp+10h] [rbp-60h] BYREF

  Parent = CDOTA_Buff::GetParent(this);
  if ( (*(Parent->_vptr_IHandleEntity + 408))(Parent) != 0 )
  {
    v3 = 0;
    v4 = g_pGameRules;
    m_nQuestPhase = g_pGameRules[14].m_nQuestPhase;
    if ( m_nQuestPhase == 0 )
    {
      v3 = 0;
      if ( BYTE1(g_pGameRules[14].m_nQuestPhase) == 0 )
      {
        v6 = *&g_pGameRules[18].m_szQuestName[28] / 65535.0;
        if ( v6 >= 0.0 && v6 <= 1.0 )
        {
          v3 = 0;
          if ( (v6 + 0.0) >= 0.25 )
            v3 = (v6 + 0.0) <= 0.75;
        }
      }
    }
    if ( this->m_bIsDay != v3 )
    {
      this->m_bIsDay = v3;
      v7 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::ManageModelChanges(v7);
      v8 = CDOTA_Buff::GetParent(this);
      ParticleManager = GetParticleManager();
      LODWORD(v8) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_night_stalker/nightstalker_change.vpcf",
                      1,
                      v8,
                      0,
                      0);
      v10 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v10, v8);
      v11 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::StartGesture(v11, 1565, 0.1, 0.1, 9, 0, 1.0);
      CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
      m_pSpeech = CDOTA_Buff::GetParent(this)->m_Speech.m_pSpeech;
      if ( m_pSpeech != 0 )
        CDOTA_Speech::QueueConcept(m_pSpeech, 18, 0.75, &criteria, 0, 1, 0, 0, 0);
      CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
      v4 = g_pGameRules;
      m_nQuestPhase = g_pGameRules[14].m_nQuestPhase;
    }
    if ( m_nQuestPhase != 0
      || BYTE1(v4[14].m_nQuestPhase) != 0
      || (v15 = *&v4[18].m_szQuestName[28] / 65535.0) < 0.0
      || v15 > 1.0
      || (v15 + 0.0) < 0.25
      || (v15 + 0.0) > 0.75 )
    {
      criteria._vptr_CResponseCriteriaSet = 1065353216;
      LODWORD(criteria.m_Lookup.m_LessFunc) = 0;
    }
    else
    {
      z = vec3_origin.z;
      criteria._vptr_CResponseCriteriaSet = *&vec3_origin.x;
      *&criteria.m_Lookup.m_LessFunc = z;
    }
    m_nFXIndex = this->m_nFXIndex;
    v14 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(
      v14,
      m_nFXIndex,
      1,
      *&criteria._vptr_CResponseCriteriaSet,
      *&criteria.m_Lookup.m_LessFunc);
  }
  else
  {
    v17 = this->m_nFXIndex;
    v18 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v18, v17, 1, *&vec3_origin.x, vec3_origin.z);
  }
}


// CDOTA_Modifier_NightStalker_HunterInTheNight::DeclareFunctions  (line 514, @0x0000000002bd6870, libserver.so)  // inlines: FStrEq, GetUnitName, SetFunction, String, ToCStr, _V_strcmp
// calls: CDOTA_Buff::GetCaster
// strings: "npc_dota_hero_night_stalker"
// globals: CDOTA_Modifier_NightStalker_HunterInTheNight::GetModifierMoveSpeedBonus_Percentage(CModifierParams const&), CDOTA_Modifier_NightStalker_HunterInTheNight::GetModifierAttackSpeedBonus_Constant(CModifierParams const&), CDOTA_Modifier_NightStalker_HunterInTheNight::GetModifierModelChange(CModifierParams const&), CDOTA_Modifier_NightStalker_HunterInTheNight::GetModifierPreserveParticlesOnModelChange(CModifierParams const&)
void __fastcall CDOTA_Modifier_NightStalker_HunterInTheNight::DeclareFunctions(
        CDOTA_Modifier_NightStalker_HunterInTheNight *const this)
{
  const char *m_pAsString; // rsi

  this->m_Functions[13].__pfn = CDOTA_Modifier_NightStalker_HunterInTheNight::GetModifierMoveSpeedBonus_Percentage;
  this->m_Functions[13].__delta = 0;
  this->m_Functions[24].__pfn = CDOTA_Modifier_NightStalker_HunterInTheNight::GetModifierAttackSpeedBonus_Constant;
  this->m_Functions[24].__delta = 0;
  m_pAsString = CDOTA_Buff::GetCaster(this)->m_iszUnitName.m_Value.u.m_pAsString;
  if ( m_pAsString != 0
    && (m_pAsString == "npc_dota_hero_night_stalker" || strcmp(m_pAsString, "npc_dota_hero_night_stalker") == 0) )
  {
    this->m_Functions[152].__delta = 0;
    this->m_Functions[152].__pfn = CDOTA_Modifier_NightStalker_HunterInTheNight::GetModifierModelChange;
    this->m_Functions[167].__pfn = CDOTA_Modifier_NightStalker_HunterInTheNight::GetModifierPreserveParticlesOnModelChange;
    this->m_Functions[167].__delta = 0;
  }
}


// CDOTA_Modifier_NightStalker_HunterInTheNight::GetModifierMoveSpeedBonus_Percentage  (line 528, @0x0000000002bd9980, libserver.so)  // inlines: DOTAGameRules, GetTimeOfDay, IsDaytime, RemapValClamped, clamp<float, float>
// calls: CDOTA_Buff::GetCaster
ModifierVariant_t __fastcall CDOTA_Modifier_NightStalker_HunterInTheNight::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_NightStalker_HunterInTheNight *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  float v5; // xmm1_4
  float v6; // xmm1_4
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x10000000) != 0 )
    return 1uLL;
  if ( LOBYTE(g_pGameRules[14].m_nQuestPhase) != 0
    || BYTE1(g_pGameRules[14].m_nQuestPhase) != 0
    || (v3 = 0, (v5 = *&g_pGameRules[18].m_szQuestName[28] / 65535.0) < 0.0)
    || v5 > 1.0
    || (v6 = v5 + 0.0) < 0.25
    || v6 > 0.75 )
  {
    *v3.m128i_i32 = this->bonus_movement_speed_pct_night;
  }
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_NightStalker_HunterInTheNight::GetModifierAttackSpeedBonus_Constant  (line 538, @0x0000000002bd98d0, libserver.so)  // inlines: DOTAGameRules, GetTimeOfDay, IsDaytime, RemapValClamped, clamp<float, float>
// calls: CDOTA_Buff::GetCaster
ModifierVariant_t __fastcall CDOTA_Modifier_NightStalker_HunterInTheNight::GetModifierAttackSpeedBonus_Constant(
        CDOTA_Modifier_NightStalker_HunterInTheNight *const this,
        const CModifierParams *const params)
{
  __m128i v3; // xmm0
  float v5; // xmm1_4
  float v6; // xmm1_4
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x10000000) != 0 )
    return 1uLL;
  if ( LOBYTE(g_pGameRules[14].m_nQuestPhase) != 0
    || BYTE1(g_pGameRules[14].m_nQuestPhase) != 0
    || (v3 = 0, (v5 = *&g_pGameRules[18].m_szQuestName[28] / 65535.0) < 0.0)
    || v5 > 1.0
    || (v6 = v5 + 0.0) < 0.25
    || v6 > 0.75 )
  {
    *v3.m128i_i32 = this->bonus_attack_speed_night;
  }
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v3) << 32) | 1;
  return result;
}


// CDOTA_Modifier_NightStalker_HunterInTheNight::GetModifierModelChange  (line 548, @0x0000000002bd9520, libserver.so)  // inlines: DOTAGameRules, GetTimeOfDay, IsDaytime, RemapValClamped, clamp<float, float>
// strings: "models/heroes/nightstalker/nightstalker_night.vmdl", "models/heroes/nightstalker/nightstalker.vmdl"
ModifierVariant_t __fastcall CDOTA_Modifier_NightStalker_HunterInTheNight::GetModifierModelChange(
        CDOTA_Modifier_NightStalker_HunterInTheNight *const this,
        const CModifierParams *const params)
{
  float v3; // xmm0_4
  ModifierVariant_t result; // 0:rax.16

  if ( LOBYTE(g_pGameRules[14].m_nQuestPhase) != 0
    || BYTE1(g_pGameRules[14].m_nQuestPhase) != 0
    || (v3 = *&g_pGameRules[18].m_szQuestName[28] / 65535.0) < 0.0
    || v3 > 1.0
    || (v3 + 0.0) < 0.25
    || (result.m_szVal = "models/heroes/nightstalker/nightstalker.vmdl", (v3 + 0.0) > 0.75) )
  {
    result.m_szVal = "models/heroes/nightstalker/nightstalker_night.vmdl";
  }
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_NightStalker_HunterInTheNight::GetModifierPreserveParticlesOnModelChange  (line 553, @0x0000000002bd31e0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_NightStalker_HunterInTheNight::GetModifierPreserveParticlesOnModelChange(
        CDOTA_Modifier_NightStalker_HunterInTheNight *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_NightStalker_HunterInTheNight::GetPriority  (line 560, @0x0000000002bd3200, libserver.so)
int __fastcall CDOTA_Modifier_NightStalker_HunterInTheNight::GetPriority(
        CDOTA_Modifier_NightStalker_HunterInTheNight *const this)
{
  return 0;
}


// CDOTA_Ability_NightStalker_Darkness::~CDOTA_Ability_NightStalker_Darkness  (line 571, @0x0000000002c05350, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_NightStalker_Darkness::~CDOTA_Ability_NightStalker_Darkness(
        CDOTA_Ability_NightStalker_Darkness *const this)
{
  this->_vptr_IHandleEntity = &off_453FCD0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_NightStalker_Darkness::~CDOTA_Ability_NightStalker_Darkness  (line 571, @0x0000000002c05370, libserver.so)  // inlines: ~CDOTA_Ability_NightStalker_Darkness
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_NightStalker_Darkness::~CDOTA_Ability_NightStalker_Darkness(
        CDOTA_Ability_NightStalker_Darkness *const this)
{
  this->_vptr_IHandleEntity = &off_453FCD0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_NightStalker_Darkness::Schema_DynamicBinding  (line 573, @0x0000000002bfe620, libserver.so)
// globals: CDOTA_Ability_NightStalker_Darkness::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_NightStalker_Darkness::Schema_DynamicBinding(
        const CDOTA_Ability_NightStalker_Darkness *const this)
{
  return CDOTA_Ability_NightStalker_Darkness::s_pSchemaBinding;
}


// CDOTA_Ability_NightStalker_Darkness::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 573, @0x0000000002bfe630, libserver.so)
// globals: CDOTA_Ability_NightStalker_Darkness::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_NightStalker_Darkness::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_NightStalker_Darkness::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_NightStalker_Darkness::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_NightStalker_Darkness::CEntityInstanceEntityClass::DestructInstance  (line 573, @0x0000000002bfe640, libserver.so)  // inlines: Destruct<CDOTA_Ability_NightStalker_Darkness>
void __fastcall CDOTA_Ability_NightStalker_Darkness::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_NightStalker_Darkness::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_NightStalker_Darkness::CEntityInstanceEntityClass::FreeInstance  (line 573, @0x0000000002bfe660, libserver.so)
void __fastcall CDOTA_Ability_NightStalker_Darkness::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_NightStalker_Darkness::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_NightStalker_Darkness::CEntityInstanceEntityClass::CanAllocate  (line 573, @0x0000000002bfe680, libserver.so)
bool __fastcall CDOTA_Ability_NightStalker_Darkness::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_NightStalker_Darkness::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_NightStalker_Darkness::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 573, @0x0000000002bfe690, libserver.so)
// globals: CDOTA_Ability_NightStalker_Darkness::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_NightStalker_Darkness::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_NightStalker_Darkness::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_NightStalker_Darkness::s_pSchemaBinding;
}


// CDOTA_Ability_NightStalker_Darkness::CEntityInstanceEntityClass::AllocateInstance  (line 573, @0x0000000002c021f0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_NightStalker_Darkness::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_NightStalker_Darkness::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_NightStalker_Darkness::CEntityInstanceEntityClass::ConstructInstance  (line 573, @0x0000000002c04990, libserver.so)  // inlines: CDOTA_Ability_NightStalker_Darkness, Construct<CDOTA_Ability_NightStalker_Darkness>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_NightStalker_Darkness::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_NightStalker_Darkness::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_453FCD0;
  }
  return p;
}


// CDOTA_Ability_NightStalker_Darkness::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 573, @0x0000000002c0a910, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_NightStalker_Darkness::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_NightStalker_Darkness::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_NightStalker_Darkness::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 573, @0x0000000002c0a930, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_NightStalker_Darkness::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_NightStalker_Darkness::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_NightStalker_Darkness::GetEntityClassInternal  (line 573, @0x0000000002c12550, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes3_02.cpp
// strings: "night_stalker_darkness", "CDOTA_Ability_NightStalker_Darkness"
// globals: `guard variable for'CDOTA_Ability_NightStalker_Darkness::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_DarknessClass, CDOTA_Ability_NightStalker_Darkness::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_DarknessClass, __dso_handle, CDOTA_Ability_NightStalker_Darkness::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_NightStalker_Darkness::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_DarknessClassInfo, CDOTA_Ability_NightStalker_Darkness::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_DarknessClassInfo
CEntityClass *__cdecl CDOTA_Ability_NightStalker_Darkness::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_NightStalker_Darkness::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_DarknessClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_NightStalker_Darkness::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_DarknessClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_NightStalker_Darkness::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_DarknessClass);
    CDOTA_Ability_NightStalker_Darkness::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_DarknessClass._vptr_CEntityClass = off_453FC50;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_NightStalker_Darkness::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_DarknessClass);
    __cxa_atexit(
      CDOTA_Ability_NightStalker_Darkness::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_NightStalker_Darkness::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_DarknessClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_NightStalker_DarknessClass != 0 )
    return &CDOTA_Ability_NightStalker_Darkness::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_DarknessClass;
  if ( `guard variable for'CDOTA_Ability_NightStalker_Darkness::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_DarknessClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_NightStalker_Darkness::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_DarknessClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_NightStalker_Darkness::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_DarknessClassInfo,
      "CDOTA_Ability_NightStalker_Darkness",
      "night_stalker_darkness",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_NightStalker_Darkness::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_DarknessClassInfo);
  }
  CDOTA_Ability_NightStalker_Darkness::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_DarknessClass.m_pClassInfo = &CDOTA_Ability_NightStalker_Darkness::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_DarknessClassInfo;
  CDOTA_Ability_NightStalker_Darkness::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_DarknessClass.m_pBaseClassInfo = CDOTA_Ability_NightStalker_Darkness::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_DarknessClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_NightStalker_DarknessClass = &CDOTA_Ability_NightStalker_Darkness::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_DarknessClass;
  CDOTA_Ability_NightStalker_Darkness::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_NightStalker_DarknessClassInfo.m_pClass = &CDOTA_Ability_NightStalker_Darkness::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_DarknessClass;
  CDOTA_Ability_NightStalker_Darkness::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_DarknessClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_NightStalker_DarknessClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_NightStalker_Darkness::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_NightStalker_DarknessClass;
}


// CDOTA_Ability_NightStalker_Darkness::GetStolenActivityModifier  (line 578, @0x0000000002bfe6a0, libserver.so)
const char *__fastcall CDOTA_Ability_NightStalker_Darkness::GetStolenActivityModifier(
        CDOTA_Ability_NightStalker_Darkness *const this)
{
  return "darkness";
}


// CDOTA_Ability_NightStalker_Darkness::OnSpellStart  (line 587, @0x0000000002bed0e0, libserver.so)  // inlines: BeginNightstalkerNight, DOTAGameRules, GetAbilityData, GetLevelSpecialValueFor<float>, GetRemainingTime, GetTeamNumber, NetworkStateChanged, Set, Start, operator=<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CountdownTimer::Now, CDOTABaseAbility::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::ReleaseParticleIndex, DOTA_EmitSound, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CBaseEntity::GetAbsOrigin, Thinker_Create (17 total)
// strings: "particles/units/heroes/hero_night_stalker/nightstalker_ulti.vpcf", "Hero_Nightstalker.Darkness", "Hero_Nightstalker.Darkness.Team", "modifier_night_stalker_darkness", "modifier_nightstalker_darkness_thinker"
void __fastcall CDOTA_Ability_NightStalker_Darkness::OnSpellStart(CDOTA_Ability_NightStalker_Darkness *const this)
{
  CGameRules *v2; // r12
  float v3; // r14d
  const CountdownTimer *v4; // r13
  double v5; // xmm0_8
  double v6; // xmm1_8
  double v7; // xmm2_8
  double v8; // xmm3_8
  CDOTA_BaseNPC *Caster; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  CDOTA_BaseNPC *v13; // rax
  float v14; // xmm1_4
  CDOTA_BaseNPC *v15; // r13
  CDOTA_BaseNPC *v16; // rax
  float v17; // xmm1_4
  int m_Value; // r15d
  CDOTA_BaseNPC *v19; // rax
  Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v21; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r15d
  CDOTA_BaseNPC *v24; // rax
  const Vector *v25; // r14
  CDOTA_BaseNPC *v26; // rax
  float v27; // xmm3_4
  unsigned int v28; // [rsp+14h] [rbp-7Ch]
  float v29; // [rsp+18h] [rbp-78h]
  float v30; // [rsp+18h] [rbp-78h]
  float duration; // [rsp+1Ch] [rbp-74h]
  KeyValues kv; // [rsp+20h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  v2 = g_pGameRules;
  v3 = *&g_pGameRules[61].m_szQuestName[76];
  v4 = &g_pGameRules[61].m_szQuestName[64];
  if ( (v3 - CountdownTimer::Now(&g_pGameRules[61].m_szQuestName[64])) > duration )
  {
    v30 = *&v2[61].m_szQuestName[76];
    v29 = v30 - CountdownTimer::Now(v4);
  }
  else
  {
    v29 = duration;
  }
  *&v5 = CountdownTimer::Now(v4) + v29;
  if ( *&v5 != *&v2[61].m_szQuestName[76] )
  {
    v28 = LODWORD(v5);
    (*(*&v2[61].m_szQuestName[64] + 16LL))(v4, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    *&v5 = v28;
    *&v2[61].m_szQuestName[76] = v28;
  }
  if ( v29 != *&v2[61].m_szQuestName[72] )
  {
    (*(*&v2[61].m_szQuestName[64] + 16LL))(v4, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v5, v6, v7, v8, v29);
    *&v2[61].m_szQuestName[72] = v29;
  }
  Caster = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(Caster) = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_night_stalker/nightstalker_ulti.vpcf",
                      1,
                      Caster,
                      0,
                      0);
  v11 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v11, Caster);
  v12 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(34, "Hero_Nightstalker.Darkness", v12);
  v13 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSound(4, "Hero_Nightstalker.Darkness.Team", v13);
  KeyValues::KeyValues(&kv, "modifier_night_stalker_darkness");
  KeyValues::SetFloat(&kv, "duration", v14);
  v15 = CDOTABaseAbility::GetCaster(this);
  v16 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v16, v15, this, "modifier_night_stalker_darkness", &kv, 0);
  KeyValues::KeyValues(&kv2, "modifier_nightstalker_darkness_thinker");
  KeyValues::SetFloat(&kv2, "duration", v17);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  v19 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v19);
  v21 = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(v21, this, "modifier_nightstalker_darkness_thinker", &kv2, *AbsOrigin, m_Value, 0, 1, 0);
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  v24 = CDOTABaseAbility::GetCaster(this);
  v25 = CBaseEntity::GetAbsOrigin(v24);
  v26 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(g_pGameRules, v26, 0, m_iAbilityID, 1, 0, *&v25->x, v25->z, -1.0, v27);
  KeyValues::~KeyValues(&kv2);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_NightStalker_Darkness::GetAbilityDamageToTargetOverInterval  (line 615, @0x0000000002be90b0, libserver.so)  // inlines: RemapVal
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTA_BaseNPC::GetAttackSpeed, CDOTA_BaseNPC::GetAttacksPerSecond, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::GetAverageTrueAttackDamage, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "night_stalker_hunter_in_the_night", "bonus_attack_speed_night"
__int64 __fastcall CDOTA_Ability_NightStalker_Darkness::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_NightStalker_Darkness *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  float v10; // xmm2_4
  float v11; // xmm2_4
  CDOTA_BaseNPC *v12; // rax
  __m128 v13; // xmm2
  float fBaseAttackSpeed; // [rsp+4h] [rbp-2Ch]
  float fBaseAttackSpeeda; // [rsp+4h] [rbp-2Ch]
  float fIntervalb; // [rsp+8h] [rbp-28h]
  float fBaseAPS; // [rsp+Ch] [rbp-24h]
  float fBaseAPSa; // [rsp+Ch] [rbp-24h]

  if ( eDamageType != DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
    return 0;
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::FindAbilityByName(Caster, "night_stalker_hunter_in_the_night", 0) == 0 )
    return 0;
  v8 = CDOTABaseAbility::GetCaster(this);
  fBaseAttackSpeed = CDOTA_BaseNPC::GetAttackSpeed(v8);
  v9 = CDOTABaseAbility::GetCaster(this);
  fBaseAPS = CDOTA_BaseNPC::GetAttacksPerSecond(v9);
  v10 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bonus_attack_speed_night", -1, 0) + fBaseAttackSpeed;
  if ( fBaseAttackSpeed == 0.0 )
  {
    v13.m128_f32[0] = v10 - fBaseAttackSpeed;
    LODWORD(v11) = _mm_cmple_ss(0LL, v13).m128_u32[0] & LODWORD(fBaseAPS);
  }
  else
  {
    v11 = ((v10 * fBaseAPS) / fBaseAttackSpeed) + 0.0;
  }
  fBaseAttackSpeeda = fInterval;
  fIntervalb = v11;
  v12 = CDOTABaseAbility::GetCaster(this);
  fBaseAPSa = (CDOTA_BaseNPC::GetAverageTrueAttackDamage(v12, pTarget) * fBaseAttackSpeeda) * (fIntervalb - fBaseAPS);
  return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)) * fBaseAPSa);
}


// CDOTA_Modifier_Nighstalker_Darkness_Thinker::~CDOTA_Modifier_Nighstalker_Darkness_Thinker  (line 641, @0x0000000002c04320, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nighstalker_Darkness_Thinker::~CDOTA_Modifier_Nighstalker_Darkness_Thinker(
        CDOTA_Modifier_Nighstalker_Darkness_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4540750;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nighstalker_Darkness_Thinker::~CDOTA_Modifier_Nighstalker_Darkness_Thinker  (line 641, @0x0000000002c04340, libserver.so)  // inlines: ~CDOTA_Modifier_Nighstalker_Darkness_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nighstalker_Darkness_Thinker::~CDOTA_Modifier_Nighstalker_Darkness_Thinker(
        CDOTA_Modifier_Nighstalker_Darkness_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_4540750;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nighstalker_Darkness_Thinker::IsHidden  (line 646, @0x0000000002bfe6b0, libserver.so)
bool __fastcall CDOTA_Modifier_Nighstalker_Darkness_Thinker::IsHidden(
        CDOTA_Modifier_Nighstalker_Darkness_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Nighstalker_Darkness_Thinker::IsAura  (line 647, @0x0000000002bfe6c0, libserver.so)
bool __fastcall CDOTA_Modifier_Nighstalker_Darkness_Thinker::IsAura(
        CDOTA_Modifier_Nighstalker_Darkness_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Nighstalker_Darkness_Thinker::GetModifierAura  (line 648, @0x0000000002bfe6d0, libserver.so)
// strings: "modifier_nightstalker_darkness_blind"
const char *__fastcall CDOTA_Modifier_Nighstalker_Darkness_Thinker::GetModifierAura(
        CDOTA_Modifier_Nighstalker_Darkness_Thinker *const this)
{
  return "modifier_nightstalker_darkness_blind";
}


// CDOTA_Modifier_Nighstalker_Darkness_Thinker::GetAuraSearchTeam  (line 650, @0x0000000002bfe6e0, libserver.so)
int __fastcall CDOTA_Modifier_Nighstalker_Darkness_Thinker::GetAuraSearchTeam(
        CDOTA_Modifier_Nighstalker_Darkness_Thinker *const this)
{
  return 2;
}


// CDOTA_Modifier_Nighstalker_Darkness_Thinker::GetAuraSearchType  (line 651, @0x0000000002bfe6f0, libserver.so)
int __fastcall CDOTA_Modifier_Nighstalker_Darkness_Thinker::GetAuraSearchType(
        CDOTA_Modifier_Nighstalker_Darkness_Thinker *const this)
{
  return 39;
}


// CDOTA_Modifier_Nighstalker_Darkness_Thinker::GetAuraSearchFlags  (line 652, @0x0000000002bfe700, libserver.so)
int __fastcall CDOTA_Modifier_Nighstalker_Darkness_Thinker::GetAuraSearchFlags(
        CDOTA_Modifier_Nighstalker_Darkness_Thinker *const this)
{
  return &stru_40050;
}


// CDOTA_Modifier_Nighstalker_Darkness_Thinker::GetAuraRadius  (line 653, @0x0000000002bfe710, libserver.so)
int __fastcall CDOTA_Modifier_Nighstalker_Darkness_Thinker::GetAuraRadius(
        CDOTA_Modifier_Nighstalker_Darkness_Thinker *const this)
{
  return -1;
}


// CDOTA_Modifier_Nighstalker_Darkness_Thinker::GetAuraEntityReject  (line 655, @0x0000000002bfe720, libserver.so)
bool __fastcall CDOTA_Modifier_Nighstalker_Darkness_Thinker::GetAuraEntityReject(
        CDOTA_Modifier_Nighstalker_Darkness_Thinker *const this,
        CDOTA_BaseNPC *pNPC)
{
  return (*(pNPC->_vptr_IHandleEntity + 406))(pNPC);
}


// CDOTA_Modifier_Nighstalker_Darkness_Blind::~CDOTA_Modifier_Nighstalker_Darkness_Blind  (line 667, @0x0000000002c03c90, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Nighstalker_Darkness_Blind::~CDOTA_Modifier_Nighstalker_Darkness_Blind(
        CDOTA_Modifier_Nighstalker_Darkness_Blind *const this)
{
  this->_vptr_CDOTA_Buff = &off_4540AB0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Nighstalker_Darkness_Blind::~CDOTA_Modifier_Nighstalker_Darkness_Blind  (line 667, @0x0000000002c03cb0, libserver.so)  // inlines: ~CDOTA_Modifier_Nighstalker_Darkness_Blind
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Nighstalker_Darkness_Blind::~CDOTA_Modifier_Nighstalker_Darkness_Blind(
        CDOTA_Modifier_Nighstalker_Darkness_Blind *const this)
{
  this->_vptr_CDOTA_Buff = &off_4540AB0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Nighstalker_Darkness_Blind::GetAttributes  (line 678, @0x0000000002c043f0, libserver.so)
// calls: CDOTA_Buff::GetAttributes
int __fastcall CDOTA_Modifier_Nighstalker_Darkness_Blind::GetAttributes(
        CDOTA_Modifier_Nighstalker_Darkness_Blind *const this)
{
  return CDOTA_Buff::GetAttributes(this) | 4;
}


// CDOTA_Modifier_Nighstalker_Darkness_Blind::OnCreated  (line 689, @0x0000000002beafe0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "fixed_vision"
void __fastcall CDOTA_Modifier_Nighstalker_Darkness_Blind::OnCreated(
        CDOTA_Modifier_Nighstalker_Darkness_Blind *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->fixed_vision = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "fixed_vision", -1, 0);
  else
    this->fixed_vision = 0;
}


// CDOTA_Modifier_Nighstalker_Darkness_Blind::OnRefresh  (line 696, @0x0000000002beb040, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "fixed_vision"
void __fastcall CDOTA_Modifier_Nighstalker_Darkness_Blind::OnRefresh(
        CDOTA_Modifier_Nighstalker_Darkness_Blind *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->fixed_vision = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "fixed_vision", -1, 0);
  else
    this->fixed_vision = 0;
}


// CDOTA_Modifier_Nighstalker_Darkness_Blind::DeclareFunctions  (line 703, @0x0000000002bd3210, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Nighstalker_Darkness_Blind::GetFixedDayVision(CModifierParams const&), CDOTA_Modifier_Nighstalker_Darkness_Blind::GetFixedNightVision(CModifierParams const&)
void __fastcall CDOTA_Modifier_Nighstalker_Darkness_Blind::DeclareFunctions(
        CDOTA_Modifier_Nighstalker_Darkness_Blind *const this)
{
  this->m_Functions[100].__pfn = CDOTA_Modifier_Nighstalker_Darkness_Blind::GetFixedDayVision;
  this->m_Functions[100].__delta = 0;
  this->m_Functions[101].__delta = 0;
  this->m_Functions[101].__pfn = CDOTA_Modifier_Nighstalker_Darkness_Blind::GetFixedNightVision;
}


// CDOTA_Modifier_Nighstalker_Darkness_Blind::GetFixedDayVision  (line 711, @0x0000000002bd3250, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Nighstalker_Darkness_Blind::GetFixedDayVision(
        CDOTA_Modifier_Nighstalker_Darkness_Blind *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->fixed_vision;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Nighstalker_Darkness_Blind::GetFixedNightVision  (line 718, @0x0000000002bd3270, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Nighstalker_Darkness_Blind::GetFixedNightVision(
        CDOTA_Modifier_Nighstalker_Darkness_Blind *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->fixed_vision;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_NightStalker_Darkness::~CDOTA_Modifier_NightStalker_Darkness  (line 727, @0x0000000002c042d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_NightStalker_Darkness::~CDOTA_Modifier_NightStalker_Darkness(
        CDOTA_Modifier_NightStalker_Darkness *const this)
{
  this->_vptr_CDOTA_Buff = &off_4540D90;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_NightStalker_Darkness::~CDOTA_Modifier_NightStalker_Darkness  (line 727, @0x0000000002c042f0, libserver.so)  // inlines: ~CDOTA_Modifier_NightStalker_Darkness
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_NightStalker_Darkness::~CDOTA_Modifier_NightStalker_Darkness(
        CDOTA_Modifier_NightStalker_Darkness *const this)
{
  this->_vptr_CDOTA_Buff = &off_4540D90;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_NightStalker_Darkness::IsDebuff  (line 732, @0x0000000002bfe740, libserver.so)
bool __fastcall CDOTA_Modifier_NightStalker_Darkness::IsDebuff(CDOTA_Modifier_NightStalker_Darkness *const this)
{
  return 0;
}


// CDOTA_Modifier_NightStalker_Darkness::IsPurgable  (line 733, @0x0000000002bfe750, libserver.so)
bool __fastcall CDOTA_Modifier_NightStalker_Darkness::IsPurgable(CDOTA_Modifier_NightStalker_Darkness *const this)
{
  return 0;
}


// CDOTA_Modifier_NightStalker_Darkness::RemoveOnDeath  (line 734, @0x0000000002bfe760, libserver.so)
bool __fastcall CDOTA_Modifier_NightStalker_Darkness::RemoveOnDeath(CDOTA_Modifier_NightStalker_Darkness *const this)
{
  return 0;
}


