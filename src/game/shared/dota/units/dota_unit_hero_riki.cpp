// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_riki.cpp:39
class CDOTA_Unit_Hero_Riki : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Riki(CDOTA_Unit_Hero_Riki &);
	CDOTA_Unit_Hero_Riki(CDOTA_Unit_Hero_Riki &);
	CDOTA_Unit_Hero_Riki();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual void OnAlive();
	virtual bool HasFlyingVision();
	virtual ~CDOTA_Unit_Hero_Riki();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[6] Precache
	// vtable[471] OnAlive
	// vtable[445] HasFlyingVision
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_riki.cpp:59
class C_CDOTA_Unit_Hero_Riki_MapInstall {
	C_CDOTA_Unit_Hero_Riki_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_riki.cpp:121
class CDOTA_Ability_Riki_SmokeScreen : public CDOTABaseAbility {
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
	CDOTA_Ability_Riki_SmokeScreen(CDOTA_Ability_Riki_SmokeScreen &);
	CDOTA_Ability_Riki_SmokeScreen(CDOTA_Ability_Riki_SmokeScreen &);
	CDOTA_Ability_Riki_SmokeScreen();
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
	virtual float GetAOERadius();
	virtual float GetSlowDuration();
	virtual bool HasSilence();
	virtual ~CDOTA_Ability_Riki_SmokeScreen();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[242] GetCooldown
	// vtable[333] GetAOERadius
	// vtable[321] GetSlowDuration
	// vtable[325] HasSilence
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_riki.cpp:137
class C_CDOTA_Ability_Riki_SmokeScreen_MapInstall {
	C_CDOTA_Ability_Riki_SmokeScreen_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_riki.cpp:188
class CDOTA_Modifier_Riki_SmokeScreenThinker : public CDOTA_Buff {
public:

private:

	int radius;  // +0xba8
	CDOTA_Modifier_Riki_SmokeScreenThinker();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsAura();
	virtual const char * GetModifierAura();
	virtual int GetAuraSearchTeam();
	virtual int GetAuraSearchType();
	virtual int GetAuraRadius();
	virtual int GetNumAvoidLocations();
	virtual Vector GetAvoidLocation(int);
	virtual float AvoidStrength(CDOTA_Bot *);
	virtual float GetAvoidRadius(int);
	virtual bool IsAvoidMagical();
	virtual bool IsPersistentAvoidance();
	virtual ~CDOTA_Modifier_Riki_SmokeScreenThinker();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[35] IsAura
	// vtable[37] GetModifierAura
	// vtable[38] GetAuraSearchTeam
	// vtable[39] GetAuraSearchType
	// vtable[41] GetAuraRadius
	// vtable[74] GetNumAvoidLocations
	// vtable[75] GetAvoidLocation
	// vtable[77] AvoidStrength
	// vtable[78] GetAvoidRadius
	// vtable[79] IsAvoidMagical
	// vtable[81] IsPersistentAvoidance
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_riki.cpp:241
class CDOTA_Modifier_Riki_SmokeScreen : public CDOTA_Buff {
public:

private:

	int miss_rate;  // +0xba8
	int movement_speed_reduction;  // +0xbac
	CDOTA_Modifier_Riki_SmokeScreen();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierMiss_Percentage(const CModifierParams &);
	virtual ModifierVariant_t GetModifierMoveSpeedBonus_Percentage(const CModifierParams &);
	ModifierVariant_t OnHeroKilled(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual int GetEffectAttachType();
	virtual bool ShouldUseOverheadOffset();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Riki_SmokeScreen();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierMiss_Percentage
	// vtable[90] GetModifierMoveSpeedBonus_Percentage
	// vtable[67] GetEffectName
	// vtable[68] GetEffectAttachType
	// vtable[69] ShouldUseOverheadOffset
	// vtable[5] CheckState
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_riki.cpp:341
class CDOTA_Ability_Riki_BlinkStrike : public CDOTABaseAbility {
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
	CDOTA_Ability_Riki_BlinkStrike(CDOTA_Ability_Riki_BlinkStrike &);
	CDOTA_Ability_Riki_BlinkStrike(CDOTA_Ability_Riki_BlinkStrike &);
	CDOTA_Ability_Riki_BlinkStrike();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void OnSpellStart();
	virtual void DoBlinkStrike(CDOTA_BaseNPC *);
	virtual bool IsReflectionDelayed();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Riki_BlinkStrike();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[333] DoBlinkStrike
	// vtable[209] IsReflectionDelayed
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_riki.cpp:359
class C_CDOTA_Ability_Riki_BlinkStrike_MapInstall {
	C_CDOTA_Ability_Riki_BlinkStrike_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_riki.cpp:478
class CDOTA_Modifier_Riki_BlinkStrike : public CDOTA_Buff {
public:

	CDOTA_Modifier_Riki_BlinkStrike(CDOTA_Modifier_Riki_BlinkStrike &);
	CDOTA_Modifier_Riki_BlinkStrike(const CDOTA_Modifier_Riki_BlinkStrike &);
	CDOTA_Modifier_Riki_BlinkStrike();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Riki_BlinkStrike();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_riki.cpp:495
class CDOTA_Ability_Riki_Permanent_Invisibility : public CDOTABaseAbility {
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
	CDOTA_Ability_Riki_Permanent_Invisibility(CDOTA_Ability_Riki_Permanent_Invisibility &);
	CDOTA_Ability_Riki_Permanent_Invisibility(CDOTA_Ability_Riki_Permanent_Invisibility &);
	CDOTA_Ability_Riki_Permanent_Invisibility();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual const char * GetIntrinsicModifierName();
	virtual bool IsRefreshable();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual bool HasInvisibility();
	virtual ~CDOTA_Ability_Riki_Permanent_Invisibility();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[280] GetIntrinsicModifierName
	// vtable[217] IsRefreshable
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[326] HasInvisibility
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_riki.cpp:530
class CDOTA_Modifier_Riki_Permanent_Invisibility : public CDOTA_Modifier_PersistentInvisibility {
public:

private:

	int backstab_angle;  // +0xbb4
	float damage_multiplier;  // +0xbb8
	bool m_bBackstab;  // +0xbbc

	float fade_delay;  // +0xbc0
	CDOTA_Modifier_Riki_Permanent_Invisibility();
	virtual bool IsHidden();
	virtual bool IsPurgable();
	virtual bool IsPermanent();
	virtual bool DestroyOnExpire();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t OnAbilityExecuted(const CModifierParams &);
	virtual ModifierVariant_t OnBreakInvisibility(const CModifierParams &);
	virtual ModifierVariant_t GetModifierProcAttack_BonusDamage_Physical(const CModifierParams &);
	virtual ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	virtual ModifierVariant_t GetModifierPreAttack(const CModifierParams &);
	virtual ModifierVariant_t OnAttack(const CModifierParams &);
	virtual ~CDOTA_Modifier_Riki_Permanent_Invisibility();

	// vtable[11] IsHidden
	// vtable[14] IsPurgable
	// vtable[23] IsPermanent
	// vtable[61] DestroyOnExpire
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[89] OnAbilityExecuted
	// vtable[91] OnBreakInvisibility
	// vtable[93] GetModifierProcAttack_BonusDamage_Physical
	// vtable[94] GetActivityTranslationModifiers
	// vtable[95] GetModifierPreAttack
	// vtable[90] OnAttack
	// sizeof = 3016
};

// src/game/shared/dota/units/dota_unit_hero_riki.cpp:774
class CDOTA_Ability_Riki_TricksOfTheTrade : public CDOTABaseAbility {
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
	CDOTA_Ability_Riki_TricksOfTheTrade(CDOTA_Ability_Riki_TricksOfTheTrade &);
	CDOTA_Ability_Riki_TricksOfTheTrade(CDOTA_Ability_Riki_TricksOfTheTrade &);
	CDOTA_Ability_Riki_TricksOfTheTrade();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual float GetChannelTime();
	virtual int GetBehavior();
	virtual void OnSpellStart();
	virtual ~CDOTA_Ability_Riki_TricksOfTheTrade();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[225] GetChannelTime
	// vtable[251] GetBehavior
	// vtable[266] OnSpellStart
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_riki.cpp:796
class C_CDOTA_Ability_Riki_TricksOfTheTrade_MapInstall {
	C_CDOTA_Ability_Riki_TricksOfTheTrade_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_riki.cpp:863
class CDOTA_Modifier_Riki_TricksOfTheTrade_Phase : public CDOTA_Buff {
public:

private:

	bool m_bFirstHit;  // +0xba8

	int m_nFxIndex;  // +0xbac
	EHANDLE m_hTarget;  // +0xbb0

	CDOTA_Modifier_Riki_TricksOfTheTrade_Phase();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t GetModifierInvisibilityLevel(const CModifierParams &);
	virtual ModifierVariant_t OnOrder(const CModifierParams &);
	virtual ModifierVariant_t GetDisableAutoAttack(const CModifierParams &);
	virtual void OnIntervalThink();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Riki_TricksOfTheTrade_Phase();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[89] GetModifierInvisibilityLevel
	// vtable[90] OnOrder
	// vtable[91] GetDisableAutoAttack
	// vtable[56] OnIntervalThink
	// vtable[5] CheckState
	// sizeof = 3024
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Riki::~CDOTA_Unit_Hero_Riki  (line 39, @0x0000000002ac6ad0, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Riki::~CDOTA_Unit_Hero_Riki(CDOTA_Unit_Hero_Riki *const this)
{
  this->_vptr_IHandleEntity = &off_4419B30;
  this->_vptr_INextBotEventResponder = &off_441AB10;
  this->_vptr_CObstructionObject = &off_441AE40;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Riki::~CDOTA_Unit_Hero_Riki  (line 39, @0x0000000002ac6b10, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Riki
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Riki::~CDOTA_Unit_Hero_Riki(CDOTA_Unit_Hero_Riki *const this)
{
  this->_vptr_IHandleEntity = &off_4419B30;
  this->_vptr_INextBotEventResponder = &off_441AB10;
  this->_vptr_CObstructionObject = &off_441AE40;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Riki::Schema_DynamicBinding  (line 41, @0x0000000002aba820, libserver.so)
// globals: CDOTA_Unit_Hero_Riki::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Riki::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Riki *const this)
{
  return CDOTA_Unit_Hero_Riki::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Riki::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 41, @0x0000000002aba850, libserver.so)
// globals: CDOTA_Unit_Hero_Riki::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Riki::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Riki::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Riki::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Riki::CEntityInstanceEntityClass::DestructInstance  (line 41, @0x0000000002aba860, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Riki>
void __fastcall CDOTA_Unit_Hero_Riki::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Riki::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Riki::CEntityInstanceEntityClass::FreeInstance  (line 41, @0x0000000002aba880, libserver.so)
void __fastcall CDOTA_Unit_Hero_Riki::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Riki::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Riki::CEntityInstanceEntityClass::CanAllocate  (line 41, @0x0000000002aba8a0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Riki::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Riki::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Riki::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 41, @0x0000000002aba8b0, libserver.so)
// globals: CDOTA_Unit_Hero_Riki::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Riki::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Riki::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Riki::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Riki::CEntityInstanceEntityClass::AllocateInstance  (line 41, @0x0000000002abf580, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Riki::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Riki::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Riki::CEntityInstanceEntityClass::ConstructInstance  (line 41, @0x0000000002ac4a90, libserver.so)  // inlines: CDOTA_Unit_Hero_Riki, Construct<CDOTA_Unit_Hero_Riki>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Riki::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Riki::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_4419B30;
    *(p + 236) = &off_441AB10;
    *(p + 257) = &off_441AE40;
  }
  return p;
}


// CDOTA_Unit_Hero_Riki::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002acd0f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Riki::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Riki::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Riki::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 41, @0x0000000002acd380, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Riki::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Riki::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Riki::GetEntityClassInternal  (line 41, @0x0000000002ae0dd0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "npc_dota_hero_riki", "CDOTA_Unit_Hero_Riki"
// globals: `guard variable for'CDOTA_Unit_Hero_Riki::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RikiClass, CDOTA_Unit_Hero_Riki::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RikiClass, __dso_handle, CDOTA_Unit_Hero_Riki::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Riki::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RikiClassInfo, CDOTA_Unit_Hero_Riki::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RikiClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Riki::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Riki::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RikiClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Riki::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RikiClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Riki::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RikiClass);
    CDOTA_Unit_Hero_Riki::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RikiClass._vptr_CEntityClass = off_4419AB0;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Riki::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RikiClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Riki::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Riki::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RikiClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_RikiClass != 0 )
    return &CDOTA_Unit_Hero_Riki::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RikiClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Riki::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RikiClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Riki::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RikiClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Riki::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RikiClassInfo,
      "CDOTA_Unit_Hero_Riki",
      "npc_dota_hero_riki",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Riki::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RikiClassInfo);
  }
  CDOTA_Unit_Hero_Riki::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RikiClass.m_pClassInfo = &CDOTA_Unit_Hero_Riki::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RikiClassInfo;
  CDOTA_Unit_Hero_Riki::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RikiClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Riki::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RikiClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_RikiClass = &CDOTA_Unit_Hero_Riki::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RikiClass;
  CDOTA_Unit_Hero_Riki::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_RikiClassInfo.m_pClass = &CDOTA_Unit_Hero_Riki::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RikiClass;
  CDOTA_Unit_Hero_Riki::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RikiClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_RikiClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Riki::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_RikiClass;
}


// CDOTA_Unit_Hero_Riki::HasFlyingVision  (line 47, @0x0000000002aba8c0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Riki::HasFlyingVision(CDOTA_Unit_Hero_Riki *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Riki::YouForgotToImplementOrDeclareServerClass  (line 59, @0x0000000002a78760, libserver.so)
int __fastcall CDOTA_Unit_Hero_Riki::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Riki *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Riki::GetServerClass  (line 59, @0x0000000002a899b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Riki::GetServerClass(CDOTA_Unit_Hero_Riki *const this)
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


// CDOTA_Unit_Hero_Riki::Precache  (line 68, @0x0000000002a7b260, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Precache
void __fastcall CDOTA_Unit_Hero_Riki::Precache(
        CDOTA_Unit_Hero_Riki *const this,
        const CEntityPrecacheContext *pContext)
{
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
}


// CDOTA_Unit_Hero_Riki::OnAlive  (line 76, @0x0000000002a7c660, libserver.so)
// calls: CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::ForceRefresh
// strings: "modifier_riki_permanent_invisibility"
void __fastcall CDOTA_Unit_Hero_Riki::OnAlive(CDOTA_Unit_Hero_Riki *const this)
{
  CDOTA_Buff *ModifierByName; // rax

  ModifierByName = CDOTA_BaseNPC::FindModifierByName(this, "modifier_riki_permanent_invisibility", 0);
  if ( ModifierByName != 0 )
    CDOTA_Buff::ForceRefresh(ModifierByName);
}


// CDOTA_Ability_Riki_SmokeScreen::~CDOTA_Ability_Riki_SmokeScreen  (line 121, @0x0000000002ac5cf0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Riki_SmokeScreen::~CDOTA_Ability_Riki_SmokeScreen(
        CDOTA_Ability_Riki_SmokeScreen *const this)
{
  this->_vptr_IHandleEntity = &off_441AF10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Riki_SmokeScreen::~CDOTA_Ability_Riki_SmokeScreen  (line 121, @0x0000000002ac5d10, libserver.so)  // inlines: ~CDOTA_Ability_Riki_SmokeScreen
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Riki_SmokeScreen::~CDOTA_Ability_Riki_SmokeScreen(
        CDOTA_Ability_Riki_SmokeScreen *const this)
{
  this->_vptr_IHandleEntity = &off_441AF10;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Riki_SmokeScreen::Schema_DynamicBinding  (line 123, @0x0000000002aba8d0, libserver.so)
// globals: CDOTA_Ability_Riki_SmokeScreen::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Riki_SmokeScreen::Schema_DynamicBinding(
        const CDOTA_Ability_Riki_SmokeScreen *const this)
{
  return CDOTA_Ability_Riki_SmokeScreen::s_pSchemaBinding;
}


// CDOTA_Ability_Riki_SmokeScreen::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 123, @0x0000000002aba8e0, libserver.so)
// globals: CDOTA_Ability_Riki_SmokeScreen::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Riki_SmokeScreen::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Riki_SmokeScreen::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Riki_SmokeScreen::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Riki_SmokeScreen::CEntityInstanceEntityClass::DestructInstance  (line 123, @0x0000000002aba8f0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Riki_SmokeScreen>
void __fastcall CDOTA_Ability_Riki_SmokeScreen::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Riki_SmokeScreen::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Riki_SmokeScreen::CEntityInstanceEntityClass::FreeInstance  (line 123, @0x0000000002aba910, libserver.so)
void __fastcall CDOTA_Ability_Riki_SmokeScreen::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Riki_SmokeScreen::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Riki_SmokeScreen::CEntityInstanceEntityClass::CanAllocate  (line 123, @0x0000000002aba930, libserver.so)
bool __fastcall CDOTA_Ability_Riki_SmokeScreen::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Riki_SmokeScreen::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Riki_SmokeScreen::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 123, @0x0000000002aba940, libserver.so)
// globals: CDOTA_Ability_Riki_SmokeScreen::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Riki_SmokeScreen::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Riki_SmokeScreen::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Riki_SmokeScreen::s_pSchemaBinding;
}


// CDOTA_Ability_Riki_SmokeScreen::CEntityInstanceEntityClass::AllocateInstance  (line 123, @0x0000000002abf5c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Riki_SmokeScreen::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Riki_SmokeScreen::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Riki_SmokeScreen::CEntityInstanceEntityClass::ConstructInstance  (line 123, @0x0000000002ac2f10, libserver.so)  // inlines: CDOTA_Ability_Riki_SmokeScreen, Construct<CDOTA_Ability_Riki_SmokeScreen>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Riki_SmokeScreen::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Riki_SmokeScreen::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_441AF10;
  }
  return p;
}


// CDOTA_Ability_Riki_SmokeScreen::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 123, @0x0000000002acc6f0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Riki_SmokeScreen::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Riki_SmokeScreen::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Riki_SmokeScreen::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 123, @0x0000000002acc710, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Riki_SmokeScreen::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Riki_SmokeScreen::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Riki_SmokeScreen::GetEntityClassInternal  (line 123, @0x0000000002ae0f20, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "CDOTA_Ability_Riki_SmokeScreen"
// globals: `guard variable for'CDOTA_Ability_Riki_SmokeScreen::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_SmokeScreenClass, CDOTA_Ability_Riki_SmokeScreen::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_SmokeScreenClass, __dso_handle, CDOTA_Ability_Riki_SmokeScreen::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Riki_SmokeScreen::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_SmokeScreenClassInfo, CDOTA_Ability_Riki_SmokeScreen::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_SmokeScreenClassInfo
CEntityClass *__cdecl CDOTA_Ability_Riki_SmokeScreen::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Riki_SmokeScreen::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_SmokeScreenClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Riki_SmokeScreen::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_SmokeScreenClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Riki_SmokeScreen::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_SmokeScreenClass);
    CDOTA_Ability_Riki_SmokeScreen::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_SmokeScreenClass._vptr_CEntityClass = off_441AE90;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Riki_SmokeScreen::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_SmokeScreenClass);
    __cxa_atexit(
      CDOTA_Ability_Riki_SmokeScreen::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Riki_SmokeScreen::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_SmokeScreenClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Riki_SmokeScreenClass != 0 )
    return &CDOTA_Ability_Riki_SmokeScreen::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_SmokeScreenClass;
  if ( `guard variable for'CDOTA_Ability_Riki_SmokeScreen::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_SmokeScreenClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Riki_SmokeScreen::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_SmokeScreenClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Riki_SmokeScreen::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_SmokeScreenClassInfo,
      "CDOTA_Ability_Riki_SmokeScreen",
      "riki_smoke_screen",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Riki_SmokeScreen::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_SmokeScreenClassInfo);
  }
  CDOTA_Ability_Riki_SmokeScreen::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_SmokeScreenClass.m_pClassInfo = &CDOTA_Ability_Riki_SmokeScreen::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_SmokeScreenClassInfo;
  CDOTA_Ability_Riki_SmokeScreen::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_SmokeScreenClass.m_pBaseClassInfo = CDOTA_Ability_Riki_SmokeScreen::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_SmokeScreenClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Riki_SmokeScreenClass = &CDOTA_Ability_Riki_SmokeScreen::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_SmokeScreenClass;
  CDOTA_Ability_Riki_SmokeScreen::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_SmokeScreenClassInfo.m_pClass = &CDOTA_Ability_Riki_SmokeScreen::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_SmokeScreenClass;
  CDOTA_Ability_Riki_SmokeScreen::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_SmokeScreenClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Riki_SmokeScreenClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Riki_SmokeScreen::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_SmokeScreenClass;
}


// CDOTA_Ability_Riki_SmokeScreen::GetAOERadius  (line 130, @0x0000000002ae66f0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_Riki_SmokeScreen::GetAOERadius(CDOTA_Ability_Riki_SmokeScreen *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
}


// CDOTA_Ability_Riki_SmokeScreen::HasSilence  (line 133, @0x0000000002aba950, libserver.so)
bool __fastcall CDOTA_Ability_Riki_SmokeScreen::HasSilence(CDOTA_Ability_Riki_SmokeScreen *const this)
{
  return 1;
}


// CDOTA_Ability_Riki_SmokeScreen::YouForgotToImplementOrDeclareServerClass  (line 137, @0x0000000002a78770, libserver.so)
int __fastcall CDOTA_Ability_Riki_SmokeScreen::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Riki_SmokeScreen *const this)
{
  return 0;
}


// CDOTA_Ability_Riki_SmokeScreen::GetServerClass  (line 137, @0x0000000002a89db0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Riki_SmokeScreen::GetServerClass(CDOTA_Ability_Riki_SmokeScreen *const this)
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


// CDOTA_Ability_Riki_SmokeScreen::GetCooldown  (line 147, @0x0000000002aa20c0, libserver.so)
// calls: CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_riki_2"
float __fastcall CDOTA_Ability_Riki_SmokeScreen::GetCooldown(CDOTA_Ability_Riki_SmokeScreen *const this, int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float result; // xmm0_4
  float flCooldown; // [rsp+Ch] [rbp-14h]

  flCooldown = CDOTABaseAbility::GetCooldown(this, iLevel);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_riki_2", 0);
  result = flCooldown;
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    return flCooldown - CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  return result;
}


// CDOTA_Ability_Riki_SmokeScreen::OnSpellStart  (line 162, @0x0000000002a7b890, libserver.so)  // inlines: GetTeamNumber
// calls: KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, Thinker_Create, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_riki_smoke_screen_thinker"
void __fastcall CDOTA_Ability_Riki_SmokeScreen::OnSpellStart(CDOTA_Ability_Riki_SmokeScreen *const this)
{
  float v2; // xmm1_4
  int m_Value; // r13d
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v6; // [rsp+38h] [rbp-28h]
  Vector CursorPosition; // 0:kr00_12.12

  v6 = __readfsqword(0x28u);
  KeyValues::KeyValues(&kv, "modifier_riki_smoke_screen_thinker");
  CDOTABaseAbility::GetDuration(this);
  KeyValues::SetFloat(&kv, "duration", v2);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(Caster, this, "modifier_riki_smoke_screen_thinker", &kv, CursorPosition, m_Value, 0, 1, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Riki_SmokeScreen::GetSlowDuration  (line 173, @0x0000000002a9bc90, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetDuration
// strings: "movement_speed_reduction"
float __fastcall CDOTA_Ability_Riki_SmokeScreen::GetSlowDuration(CDOTA_Ability_Riki_SmokeScreen *const this)
{
  float fMoveSpeedReduction; // [rsp+Ch] [rbp-14h]
  float fMoveSpeedReductiona; // [rsp+Ch] [rbp-14h]

  fMoveSpeedReduction = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "movement_speed_reduction", -1, 1);
  fMoveSpeedReductiona = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "radius", -1, 1)
                       / ((1.0 - fMoveSpeedReduction) * 400.0);
  return fminf(CDOTABaseAbility::GetDuration(this), fMoveSpeedReductiona);
}


// CDOTA_Modifier_Riki_SmokeScreenThinker::~CDOTA_Modifier_Riki_SmokeScreenThinker  (line 188, @0x0000000002ac0ec0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Riki_SmokeScreenThinker::~CDOTA_Modifier_Riki_SmokeScreenThinker(
        CDOTA_Modifier_Riki_SmokeScreenThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_441B9D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Riki_SmokeScreenThinker::~CDOTA_Modifier_Riki_SmokeScreenThinker  (line 188, @0x0000000002ac0ee0, libserver.so)  // inlines: ~CDOTA_Modifier_Riki_SmokeScreenThinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Riki_SmokeScreenThinker::~CDOTA_Modifier_Riki_SmokeScreenThinker(
        CDOTA_Modifier_Riki_SmokeScreenThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_441B9D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Riki_SmokeScreenThinker::IsAura  (line 196, @0x0000000002aba960, libserver.so)
bool __fastcall CDOTA_Modifier_Riki_SmokeScreenThinker::IsAura(CDOTA_Modifier_Riki_SmokeScreenThinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Riki_SmokeScreenThinker::GetModifierAura  (line 197, @0x0000000002aba970, libserver.so)
// strings: "modifier_riki_smoke_screen"
const char *__fastcall CDOTA_Modifier_Riki_SmokeScreenThinker::GetModifierAura(
        CDOTA_Modifier_Riki_SmokeScreenThinker *const this)
{
  return "modifier_riki_smoke_screen";
}


// CDOTA_Modifier_Riki_SmokeScreenThinker::GetAuraSearchTeam  (line 198, @0x0000000002aba980, libserver.so)
int __fastcall CDOTA_Modifier_Riki_SmokeScreenThinker::GetAuraSearchTeam(
        CDOTA_Modifier_Riki_SmokeScreenThinker *const this)
{
  return 2;
}


// CDOTA_Modifier_Riki_SmokeScreenThinker::GetAuraSearchType  (line 199, @0x0000000002aba990, libserver.so)
int __fastcall CDOTA_Modifier_Riki_SmokeScreenThinker::GetAuraSearchType(
        CDOTA_Modifier_Riki_SmokeScreenThinker *const this)
{
  return 19;
}


// CDOTA_Modifier_Riki_SmokeScreenThinker::GetAuraRadius  (line 200, @0x0000000002aba9a0, libserver.so)
int __fastcall CDOTA_Modifier_Riki_SmokeScreenThinker::GetAuraRadius(
        CDOTA_Modifier_Riki_SmokeScreenThinker *const this)
{
  return this->radius;
}


// CDOTA_Modifier_Riki_SmokeScreenThinker::GetNumAvoidLocations  (line 203, @0x0000000002aba9b0, libserver.so)
int __fastcall CDOTA_Modifier_Riki_SmokeScreenThinker::GetNumAvoidLocations(
        CDOTA_Modifier_Riki_SmokeScreenThinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Riki_SmokeScreenThinker::GetAvoidLocation  (line 204, @0x0000000002ac23f0, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin
Vector __fastcall CDOTA_Modifier_Riki_SmokeScreenThinker::GetAvoidLocation(
        CDOTA_Modifier_Riki_SmokeScreenThinker *const this,
        int iAvoid)
{
  CDOTA_BaseNPC *Parent; // rax
  const Vector *AbsOrigin; // rax
  Vector result; // 0:xmm0_8.8,8:xmm1_4.4

  Parent = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Parent);
  *&result.x = *&AbsOrigin->x;
  result.z = AbsOrigin->z;
  return result;
}


// CDOTA_Modifier_Riki_SmokeScreenThinker::AvoidStrength  (line 205, @0x0000000002ac7110, libserver.so)
// calls: CDOTA_Bot::WantsToCast, CDOTA_Bot::WantsToAttack
float __fastcall CDOTA_Modifier_Riki_SmokeScreenThinker::AvoidStrength(
        CDOTA_Modifier_Riki_SmokeScreenThinker *const this,
        CDOTA_Bot *pBot)
{
  bool v3; // al
  float result; // xmm0_4
  bool v5; // al

  v3 = CDOTA_Bot::WantsToCast(pBot);
  result = 0.80000001;
  if ( !v3 )
  {
    v5 = CDOTA_Bot::WantsToAttack(pBot);
    result = 0.80000001;
    if ( !v5 )
      return 0.60000002;
  }
  return result;
}


// CDOTA_Modifier_Riki_SmokeScreenThinker::GetAvoidRadius  (line 206, @0x0000000002aba9c0, libserver.so)
float __fastcall CDOTA_Modifier_Riki_SmokeScreenThinker::GetAvoidRadius(
        CDOTA_Modifier_Riki_SmokeScreenThinker *const this,
        int iAvoid)
{
  return this->radius + 100.0;
}


// CDOTA_Modifier_Riki_SmokeScreenThinker::IsAvoidMagical  (line 207, @0x0000000002aba9e0, libserver.so)
bool __fastcall CDOTA_Modifier_Riki_SmokeScreenThinker::IsAvoidMagical(
        CDOTA_Modifier_Riki_SmokeScreenThinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Riki_SmokeScreenThinker::IsPersistentAvoidance  (line 208, @0x0000000002aba9f0, libserver.so)
bool __fastcall CDOTA_Modifier_Riki_SmokeScreenThinker::IsPersistentAvoidance(
        CDOTA_Modifier_Riki_SmokeScreenThinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Riki_SmokeScreenThinker::OnCreated  (line 220, @0x0000000002aa9c80, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
void __fastcall CDOTA_Modifier_Riki_SmokeScreenThinker::OnCreated(
        CDOTA_Modifier_Riki_SmokeScreenThinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "radius", -1, 0);
  else
    this->radius = 0;
}


// CDOTA_Modifier_Riki_SmokeScreenThinker::OnDestroy  (line 231, @0x0000000002a7a680, libserver.so)
// calls: CDOTA_Buff::GetParent, UTIL_Remove
void __fastcall CDOTA_Modifier_Riki_SmokeScreenThinker::OnDestroy(CDOTA_Modifier_Riki_SmokeScreenThinker *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  UTIL_Remove(Parent);
}


// CDOTA_Modifier_Riki_SmokeScreen::~CDOTA_Modifier_Riki_SmokeScreen  (line 241, @0x0000000002ac0e70, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Riki_SmokeScreen::~CDOTA_Modifier_Riki_SmokeScreen(
        CDOTA_Modifier_Riki_SmokeScreen *const this)
{
  this->_vptr_CDOTA_Buff = &off_441BCF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Riki_SmokeScreen::~CDOTA_Modifier_Riki_SmokeScreen  (line 241, @0x0000000002ac0e90, libserver.so)  // inlines: ~CDOTA_Modifier_Riki_SmokeScreen
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Riki_SmokeScreen::~CDOTA_Modifier_Riki_SmokeScreen(
        CDOTA_Modifier_Riki_SmokeScreen *const this)
{
  this->_vptr_CDOTA_Buff = &off_441BCF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Riki_SmokeScreen::IsDebuff  (line 246, @0x0000000002abaa00, libserver.so)
bool __fastcall CDOTA_Modifier_Riki_SmokeScreen::IsDebuff(CDOTA_Modifier_Riki_SmokeScreen *const this)
{
  return 1;
}


// CDOTA_Modifier_Riki_SmokeScreen::GetEffectName  (line 258, @0x0000000002ac2450, libserver.so)
// calls: CDOTA_Buff::GetParent
// strings: "particles/generic_gameplay/generic_silenced_lanecreeps.vpcf", "particles/generic_gameplay/generic_silenced.vpcf"
const char *__fastcall CDOTA_Modifier_Riki_SmokeScreen::GetEffectName(CDOTA_Modifier_Riki_SmokeScreen *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  const char *v2; // rdx

  Parent = CDOTA_Buff::GetParent(this);
  v2 = "particles/generic_gameplay/generic_silenced_lanecreeps.vpcf";
  if ( SLOBYTE(Parent->m_iUnitType) >= 0 )
    return "particles/generic_gameplay/generic_silenced.vpcf";
  return v2;
}


// CDOTA_Modifier_Riki_SmokeScreen::GetEffectAttachType  (line 259, @0x0000000002abaa10, libserver.so)
int __fastcall CDOTA_Modifier_Riki_SmokeScreen::GetEffectAttachType(CDOTA_Modifier_Riki_SmokeScreen *const this)
{
  return 7;
}


// CDOTA_Modifier_Riki_SmokeScreen::ShouldUseOverheadOffset  (line 260, @0x0000000002abaa20, libserver.so)
bool __fastcall CDOTA_Modifier_Riki_SmokeScreen::ShouldUseOverheadOffset(CDOTA_Modifier_Riki_SmokeScreen *const this)
{
  return 1;
}


// CDOTA_Modifier_Riki_SmokeScreen::OnCreated  (line 274, @0x0000000002aaaa60, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "miss_rate", "movement_speed_reduction"
void __fastcall CDOTA_Modifier_Riki_SmokeScreen::OnCreated(CDOTA_Modifier_Riki_SmokeScreen *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->miss_rate = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "miss_rate", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->movement_speed_reduction = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                         v4,
                                         "movement_speed_reduction",
                                         -1,
                                         0);
      return;
    }
  }
  else
  {
    this->miss_rate = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  this->movement_speed_reduction = 0;
}


// CDOTA_Modifier_Riki_SmokeScreen::DeclareFunctions  (line 282, @0x0000000002a78780, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Riki_SmokeScreen::OnHeroKilled(CModifierParams const&)
void __fastcall CDOTA_Modifier_Riki_SmokeScreen::DeclareFunctions(CDOTA_Modifier_Riki_SmokeScreen *const this)
{
  this->m_Functions[44].__pfn = (&stru_10 + 697);
  this->m_Functions[44].__delta = 0;
  this->m_Functions[13].__pfn = (&stru_10 + 705);
  this->m_Functions[13].__delta = 0;
  this->m_Functions[147].__pfn = CDOTA_Modifier_Riki_SmokeScreen::OnHeroKilled;
  this->m_Functions[147].__delta = 0;
}


// CDOTA_Modifier_Riki_SmokeScreen::GetModifierMiss_Percentage  (line 295, @0x0000000002a819b0, libserver.so)  // inlines: InState, IsInvulnerable
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Riki_SmokeScreen::GetModifierMiss_Percentage(
        CDOTA_Modifier_Riki_SmokeScreen *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  __m128i v5; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x200) != 0 )
    return 1uLL;
  Parent = CDOTA_Buff::GetParent(this);
  if ( Parent->m_bIsWaitingToSpawn.m_Value || (Parent->m_nUnitState64.m_Value & 0x100) != 0 )
    return 1uLL;
  *v5.m128i_i32 = this->miss_rate;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v5) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Riki_SmokeScreen::GetModifierMoveSpeedBonus_Percentage  (line 305, @0x0000000002a81a20, libserver.so)  // inlines: InState, IsInvulnerable
// calls: CDOTA_Buff::GetParent
ModifierVariant_t __fastcall CDOTA_Modifier_Riki_SmokeScreen::GetModifierMoveSpeedBonus_Percentage(
        CDOTA_Modifier_Riki_SmokeScreen *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *Parent; // rax
  __m128i v5; // xmm0
  ModifierVariant_t result; // 0:rax.16

  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x200) != 0 )
    return 1uLL;
  Parent = CDOTA_Buff::GetParent(this);
  if ( Parent->m_bIsWaitingToSpawn.m_Value || (Parent->m_nUnitState64.m_Value & 0x100) != 0 )
    return 1uLL;
  result.m_szVal = 0;
  *v5.m128i_i32 = -this->movement_speed_reduction;
  *&result.m_eType = (_mm_cvtsi128_si32(v5) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Riki_SmokeScreen::OnHeroKilled  (line 316, @0x0000000002a8a6b0, libserver.so)  // inlines: Attacker, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Target, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetCaster, EconEntity_OnOwnerKillEaterEvent
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
ModifierVariant_t __fastcall CDOTA_Modifier_Riki_SmokeScreen::OnHeroKilled(
        CDOTA_Modifier_Riki_SmokeScreen *const this,
        const CModifierParams *const params)
{
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 m_Index; // eax
  CEntityIdentity *v6; // rdx
  CEntityIdentity *v7; // rdx
  CDOTA_BaseNPC *v9; // r13
  uint32 v10; // ecx
  CEntityIdentity *v11; // rax
  CEntityIdentity *v12; // rax
  CEntityInstance *v13; // rsi
  uint32 v14; // eax
  CEntityIdentity *v15; // rdx
  CEntityIdentity *v16; // rdx
  CEntityInstance *v17; // rdi

  m_pInstance = 0;
  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v6 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
    if ( v6 != 0 )
    {
      v7 = &v6[params->htarget.m_Index & 0x1FF];
      if ( v7 != 0 && m_Index == v7->m_EHandle.m_Index )
        m_pInstance = v7->m_pInstance;
    }
  }
  if ( CDOTA_Buff::GetParent(this) == m_pInstance )
  {
    v9 = CEntityHandle::operator CEntityInstance *(&params->hattacker);
    if ( CDOTA_Buff::GetCaster(this) == v9 )
    {
      v10 = params->htarget.m_Index;
      if ( v10 + 2 <= 1
        || (v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F]) == 0
        || (v12 = &v11[params->htarget.m_Index & 0x1FF]) == 0
        || v10 != v12->m_EHandle.m_Index
        || (v13 = v12->m_pInstance, v12->m_pInstance == 0)
        || BYTE3(v13[7]._vptr_IHandleEntity) == 0
        || (v13[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
      {
        v13 = 0;
      }
      v14 = params->hattacker.m_Index;
      if ( v14 + 2 <= 1
        || (v15 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
        || (v16 = &v15[params->hattacker.m_Index & 0x1FF]) == 0
        || v14 != v16->m_EHandle.m_Index
        || (v17 = v16->m_pInstance, v16->m_pInstance == 0)
        || BYTE3(v17[7]._vptr_IHandleEntity) == 0
        || (v17[43].m_iszPrivateVScripts.u.m_Id & 1) == 0 )
      {
        v17 = 0;
      }
      EconEntity_OnOwnerKillEaterEvent(
        v17,
        v13,
        kill_eater_event_t::kKillEaterEventType_Riki_SmokedHeroKills,
        1,
        INVALID_ITEM_DEF_INDEX);
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Riki_SmokeScreen::CheckState  (line 328, @0x0000000002a787d0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Riki_SmokeScreen::CheckState(
        CDOTA_Modifier_Riki_SmokeScreen *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 8uLL;
  buffState->m_nDisabledStateMask &= ~8uLL;
}


// CDOTA_Ability_Riki_BlinkStrike::~CDOTA_Ability_Riki_BlinkStrike  (line 341, @0x0000000002ac5d40, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Riki_BlinkStrike::~CDOTA_Ability_Riki_BlinkStrike(
        CDOTA_Ability_Riki_BlinkStrike *const this)
{
  this->_vptr_IHandleEntity = &off_441C070;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Riki_BlinkStrike::~CDOTA_Ability_Riki_BlinkStrike  (line 341, @0x0000000002ac5d60, libserver.so)  // inlines: ~CDOTA_Ability_Riki_BlinkStrike
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Riki_BlinkStrike::~CDOTA_Ability_Riki_BlinkStrike(
        CDOTA_Ability_Riki_BlinkStrike *const this)
{
  this->_vptr_IHandleEntity = &off_441C070;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Riki_BlinkStrike::Schema_DynamicBinding  (line 343, @0x0000000002abaa30, libserver.so)
// globals: CDOTA_Ability_Riki_BlinkStrike::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Riki_BlinkStrike::Schema_DynamicBinding(
        const CDOTA_Ability_Riki_BlinkStrike *const this)
{
  return CDOTA_Ability_Riki_BlinkStrike::s_pSchemaBinding;
}


// CDOTA_Ability_Riki_BlinkStrike::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 343, @0x0000000002abaa40, libserver.so)
// globals: CDOTA_Ability_Riki_BlinkStrike::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Riki_BlinkStrike::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Riki_BlinkStrike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Riki_BlinkStrike::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Riki_BlinkStrike::CEntityInstanceEntityClass::DestructInstance  (line 343, @0x0000000002abaa50, libserver.so)  // inlines: Destruct<CDOTA_Ability_Riki_BlinkStrike>
void __fastcall CDOTA_Ability_Riki_BlinkStrike::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Riki_BlinkStrike::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Riki_BlinkStrike::CEntityInstanceEntityClass::FreeInstance  (line 343, @0x0000000002abaa70, libserver.so)
void __fastcall CDOTA_Ability_Riki_BlinkStrike::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Riki_BlinkStrike::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Riki_BlinkStrike::CEntityInstanceEntityClass::CanAllocate  (line 343, @0x0000000002abaa90, libserver.so)
bool __fastcall CDOTA_Ability_Riki_BlinkStrike::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Riki_BlinkStrike::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Riki_BlinkStrike::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 343, @0x0000000002abaaa0, libserver.so)
// globals: CDOTA_Ability_Riki_BlinkStrike::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Riki_BlinkStrike::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Riki_BlinkStrike::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Riki_BlinkStrike::s_pSchemaBinding;
}


// CDOTA_Ability_Riki_BlinkStrike::CEntityInstanceEntityClass::AllocateInstance  (line 343, @0x0000000002abf600, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Riki_BlinkStrike::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Riki_BlinkStrike::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Riki_BlinkStrike::CEntityInstanceEntityClass::ConstructInstance  (line 343, @0x0000000002ac2f40, libserver.so)  // inlines: CDOTA_Ability_Riki_BlinkStrike, Construct<CDOTA_Ability_Riki_BlinkStrike>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Riki_BlinkStrike::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Riki_BlinkStrike::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_441C070;
  }
  return p;
}


// CDOTA_Ability_Riki_BlinkStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 343, @0x0000000002acc740, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Riki_BlinkStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Riki_BlinkStrike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Riki_BlinkStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 343, @0x0000000002acc760, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Riki_BlinkStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Riki_BlinkStrike::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Riki_BlinkStrike::GetEntityClassInternal  (line 343, @0x0000000002ae1070, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "riki_blink_strike", "CDOTA_Ability_Riki_BlinkStrike"
// globals: `guard variable for'CDOTA_Ability_Riki_BlinkStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_BlinkStrikeClass, CDOTA_Ability_Riki_BlinkStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_BlinkStrikeClass, __dso_handle, CDOTA_Ability_Riki_BlinkStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Riki_BlinkStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_BlinkStrikeClassInfo, CDOTA_Ability_Riki_BlinkStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_BlinkStrikeClassInfo
CEntityClass *__cdecl CDOTA_Ability_Riki_BlinkStrike::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Riki_BlinkStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_BlinkStrikeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Riki_BlinkStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_BlinkStrikeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Riki_BlinkStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_BlinkStrikeClass);
    CDOTA_Ability_Riki_BlinkStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_BlinkStrikeClass._vptr_CEntityClass = off_441BFF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Riki_BlinkStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_BlinkStrikeClass);
    __cxa_atexit(
      CDOTA_Ability_Riki_BlinkStrike::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Riki_BlinkStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_BlinkStrikeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Riki_BlinkStrikeClass != 0 )
    return &CDOTA_Ability_Riki_BlinkStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_BlinkStrikeClass;
  if ( `guard variable for'CDOTA_Ability_Riki_BlinkStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_BlinkStrikeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Riki_BlinkStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_BlinkStrikeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Riki_BlinkStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_BlinkStrikeClassInfo,
      "CDOTA_Ability_Riki_BlinkStrike",
      "riki_blink_strike",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Riki_BlinkStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_BlinkStrikeClassInfo);
  }
  CDOTA_Ability_Riki_BlinkStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_BlinkStrikeClass.m_pClassInfo = &CDOTA_Ability_Riki_BlinkStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_BlinkStrikeClassInfo;
  CDOTA_Ability_Riki_BlinkStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_BlinkStrikeClass.m_pBaseClassInfo = CDOTA_Ability_Riki_BlinkStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_BlinkStrikeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Riki_BlinkStrikeClass = &CDOTA_Ability_Riki_BlinkStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_BlinkStrikeClass;
  CDOTA_Ability_Riki_BlinkStrike::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_BlinkStrikeClassInfo.m_pClass = &CDOTA_Ability_Riki_BlinkStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_BlinkStrikeClass;
  CDOTA_Ability_Riki_BlinkStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_BlinkStrikeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Riki_BlinkStrikeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Riki_BlinkStrike::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_BlinkStrikeClass;
}


// CDOTA_Ability_Riki_BlinkStrike::IsReflectionDelayed  (line 350, @0x0000000002abaab0, libserver.so)
bool __fastcall CDOTA_Ability_Riki_BlinkStrike::IsReflectionDelayed(CDOTA_Ability_Riki_BlinkStrike *const this)
{
  return 1;
}


// CDOTA_Ability_Riki_BlinkStrike::YouForgotToImplementOrDeclareServerClass  (line 359, @0x0000000002a787e0, libserver.so)
int __fastcall CDOTA_Ability_Riki_BlinkStrike::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Riki_BlinkStrike *const this)
{
  return 0;
}


// CDOTA_Ability_Riki_BlinkStrike::GetServerClass  (line 359, @0x0000000002a898b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Riki_BlinkStrike::GetServerClass(CDOTA_Ability_Riki_BlinkStrike *const this)
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


// CDOTA_Ability_Riki_BlinkStrike::DoBlinkStrike  (line 369, @0x0000000002ab20e0, libserver.so)  // inlines: AddToTail, CCopyableUtlVector, CUnitOrders, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CEntityIndex>, Element, GetLevelSpecialValueFor<int>, GetTeamNumber, GrowMemory, NormalizeInPlace, Purge, RemoveAll, Reset, VectorSubtract, entindex, operator-, operator=, operator[], ~CCopyableUtlVector, ~CUnitOrders, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_BaseNPC::TriggerSpellAbsorb, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, FindSpaceBehindOrNearUnit, VectorNormalize, VectorAngles, CBaseEntity::SetAbsAngles, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex (29 total)
// strings: "particles/units/heroes/hero_riki/riki_blink_strike.vpcf", "attach_hitloc", "modifier_riki_blinkstrike", "Hero_Riki.Blink_Strike"
void __fastcall CDOTA_Ability_Riki_BlinkStrike::DoBlinkStrike(
        CDOTA_Ability_Riki_BlinkStrike *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  const Vector *v7; // r13
  const Vector *v8; // rax
  vec_t v9; // xmm1_4
  vec_t v10; // xmm0_4
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  const Vector *v16; // r14
  CDOTA_BaseNPC *v17; // r15
  CDOTA_ParticleManager *v18; // rax
  const Vector *v19; // r14
  CDOTA_ParticleManager *v20; // rax
  const Vector *v21; // r14
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  float v24; // xmm1_4
  CDOTA_BaseNPC *v25; // r14
  CDOTA_BaseNPC *v26; // rax
  __m128i v27; // xmm2
  CDOTA_BaseNPC *v28; // rax
  double v29; // xmm0_8
  int v30; // eax
  vec_t y; // xmm0_4
  CDOTA_BaseNPC *v32; // rax
  CEntityIndex v33; // eax
  __int64 m_Size; // r15
  int v35; // eax
  CEntityIndex *v36; // rax
  CDOTA_BaseNPC *v37; // rax
  Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v39; // rax
  int32 m_Data; // [rsp+Ch] [rbp-C4h]
  const Vector vStartLoc; // [rsp+10h] [rbp-C0h]
  Vector vToTarget; // [rsp+20h] [rbp-B0h] BYREF
  QAngle faceTargetAngles; // [rsp+30h] [rbp-A0h] BYREF
  CUnitOrders attackOrder; // [rsp+40h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+80h] [rbp-50h] BYREF
  unsigned __int64 v46; // [rsp+98h] [rbp-38h]

  v46 = __readfsqword(0x28u);
  if ( pTarget != 0 && !CDOTA_BaseNPC::TriggerSpellAbsorb(pTarget, this, 1) )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    vStartLoc = *CBaseEntity::GetAbsOrigin(Caster);
    v5 = CDOTABaseAbility::GetCaster(this);
    if ( !FindSpaceBehindOrNearUnit(pTarget, v5) )
    {
      AbsOrigin = CBaseEntity::GetAbsOrigin(pTarget);
      v39 = CDOTABaseAbility::GetCaster(this);
      FindClearSpaceForUnit(v39, *AbsOrigin, 1);
    }
    v6 = CDOTABaseAbility::GetCaster(this);
    v7 = CBaseEntity::GetAbsOrigin(v6);
    v8 = CBaseEntity::GetAbsOrigin(pTarget);
    v9 = v8->x - v7->x;
    v10 = v8->y - v7->y;
    vToTarget.z = 0.0;
    vToTarget.x = v9;
    vToTarget.y = v10;
    if ( VectorNormalize(&vToTarget) < 0.001 )
    {
      vToTarget.x = 1.0;
      vToTarget.y = 0.0;
      vToTarget.z = 0.0;
    }
    VectorAngles(&vToTarget, &faceTargetAngles);
    v11 = CDOTABaseAbility::GetCaster(this);
    CBaseEntity::SetAbsAngles(v11, &faceTargetAngles);
    v12 = CDOTABaseAbility::GetCaster(this);
    ParticleManager = GetParticleManager();
    LODWORD(v12) = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/units/heroes/hero_riki/riki_blink_strike.vpcf",
                     2,
                     0,
                     0,
                     v12);
    v14 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v14, v12, 0, *&vStartLoc.x, vStartLoc.z);
    v15 = CDOTABaseAbility::GetCaster(this);
    v16 = CBaseEntity::GetAbsOrigin(v15);
    v17 = CDOTABaseAbility::GetCaster(this);
    v18 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v18, v12, 1, v17, 1, 0, *v16, 1);
    v19 = CBaseEntity::GetAbsOrigin(pTarget);
    v20 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v20, v12, 2, pTarget, 5, "attach_hitloc", *v19, 1);
    v21 = CBaseEntity::GetAbsOrigin(pTarget);
    v22 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v22, v12, 3, pTarget, 1, 0, *v21, 1);
    v23 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v23, v12);
    LOBYTE(v12) = pTarget->m_iTeamNum.m_Value;
    if ( v12 != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
    {
      KeyValues::KeyValues(&kv, "modifier_riki_blinkstrike");
      KeyValues::SetFloat(&kv, "duration", v24);
      KeyValues::SetPtr(&kv, "target", pTarget);
      v25 = CDOTABaseAbility::GetCaster(this);
      v26 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v26, v25, this, "modifier_riki_blinkstrike", &kv, 0);
      *v27.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "bonus_damage", -1, 0);
      LODWORD(v25) = _mm_cvtsi128_si32(v27);
      v28 = CDOTABaseAbility::GetCaster(this);
      v29 = ApplyDamage(v28, pTarget, this, *&v25, 2, 0);
      v30 = (*(this->_vptr_IHandleEntity + 247))(this, v29);
      SendOverheadEventMessage(0, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_CRITICAL, pTarget, v30, 0);
      attackOrder.m_bQueue = 0;
      memset(&attackOrder.m_nUnits.m_Memory, 0, 28);
      attackOrder.m_nUnits.m_Size = 0;
      attackOrder.m_nOrderSequenceNumber = 0;
      attackOrder.m_vPosition.x = vec3_origin.x;
      y = vec3_origin.y;
      attackOrder.m_nIssuerPlayerIndex = -1;
      attackOrder.m_vPosition.y = y;
      attackOrder.m_vPosition.z = vec3_origin.z;
      v32 = CDOTABaseAbility::GetCaster(this);
      v33.m_Data = CEntityInstance::GetEntityIndex(v32).m_Data;
      m_Size = attackOrder.m_nUnits.m_Size;
      m_Data = v33.m_Data;
      v35 = attackOrder.m_nUnits.m_Size;
      if ( attackOrder.m_nUnits.m_Size == attackOrder.m_nUnits.m_Memory.m_nAllocationCount )
      {
        CUtlMemory<CEntityIndex,int>::Grow(&attackOrder.m_nUnits.m_Memory, 1);
        v35 = attackOrder.m_nUnits.m_Size;
      }
      attackOrder.m_nUnits.m_Size = v35 + 1;
      v36 = &attackOrder.m_nUnits.m_Memory.m_pMemory[m_Size];
      if ( v36 != 0 )
        v36->m_Data = m_Data;
      attackOrder.m_nOrderType = 4;
      attackOrder.m_nTargetIndex = CEntityInstance::GetEntityIndex(pTarget);
      DOTA_ExecuteOrders(&attackOrder, 0, 0, 0);
      attackOrder.m_nUnits.m_Size = 0;
      if ( (attackOrder.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CEntityIndex,int>::Purge(&attackOrder.m_nUnits.m_Memory);
        if ( (attackOrder.m_nUnits.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CEntityIndex,int>::Purge(&attackOrder.m_nUnits.m_Memory);
      }
      KeyValues::~KeyValues(&kv);
    }
    v37 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v37, "Hero_Riki.Blink_Strike", 0.0, 0, 0);
  }
}


// CDOTA_Ability_Riki_BlinkStrike::OnSpellStart  (line 432, @0x0000000002a79950, libserver.so)  // inlines: ToDOTABaseNPC
// calls: CDOTABaseAbility::GetCursorTarget
void __fastcall CDOTA_Ability_Riki_BlinkStrike::OnSpellStart(CDOTA_Ability_Riki_BlinkStrike *const this)
{
  CBaseEntity *CursorTarget; // rax

  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
    (*(this->_vptr_IHandleEntity + 333))(this, CursorTarget);
}


// CDOTA_Ability_Riki_BlinkStrike::CastFilterResult  (line 446, @0x0000000002a7b780, libserver.so)
// calls: CDOTABaseAbility::GetCaster, UnitFilter
int __fastcall CDOTA_Ability_Riki_BlinkStrike::CastFilterResult(
        CDOTA_Ability_Riki_BlinkStrike *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  int v5; // ebx

  Caster = CDOTABaseAbility::GetCaster(this);
  v5 = UnitFilter(pTarget, 3, 19, 0, Caster->m_iTeamNum.m_Value);
  if ( v5 == 0 && pTarget == CDOTABaseAbility::GetCaster(this) )
    return 23;
  return v5;
}


// CDOTA_Ability_Riki_BlinkStrike::GetCustomCastError  (line 460, @0x0000000002a787f0, libserver.so)
// strings: "#dota_hud_error_cant_cast_on_self"
const char *__fastcall CDOTA_Ability_Riki_BlinkStrike::GetCustomCastError(
        CDOTA_Ability_Riki_BlinkStrike *const this,
        CDOTA_BaseNPC *pTarget)
{
  return "#dota_hud_error_cant_cast_on_self";
}


// CDOTA_Ability_Riki_BlinkStrike::GetAbilityDamageToTargetOverInterval  (line 467, @0x0000000002a7c920, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Riki_BlinkStrike::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Riki_BlinkStrike *const this,
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


// CDOTA_Modifier_Riki_BlinkStrike::~CDOTA_Modifier_Riki_BlinkStrike  (line 478, @0x0000000002ac22b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Riki_BlinkStrike::~CDOTA_Modifier_Riki_BlinkStrike(
        CDOTA_Modifier_Riki_BlinkStrike *const this)
{
  this->_vptr_CDOTA_Buff = &off_441CAF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Riki_BlinkStrike::~CDOTA_Modifier_Riki_BlinkStrike  (line 478, @0x0000000002ac22d0, libserver.so)  // inlines: ~CDOTA_Modifier_Riki_BlinkStrike
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Riki_BlinkStrike::~CDOTA_Modifier_Riki_BlinkStrike(
        CDOTA_Modifier_Riki_BlinkStrike *const this)
{
  this->_vptr_CDOTA_Buff = &off_441CAF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Riki_BlinkStrike::IsHidden  (line 483, @0x0000000002abaac0, libserver.so)
bool __fastcall CDOTA_Modifier_Riki_BlinkStrike::IsHidden(CDOTA_Modifier_Riki_BlinkStrike *const this)
{
  return 1;
}


// CDOTA_Modifier_Riki_BlinkStrike::IsPurgable  (line 484, @0x0000000002abaad0, libserver.so)
bool __fastcall CDOTA_Modifier_Riki_BlinkStrike::IsPurgable(CDOTA_Modifier_Riki_BlinkStrike *const this)
{
  return 0;
}


// CDOTA_Ability_Riki_Permanent_Invisibility::~CDOTA_Ability_Riki_Permanent_Invisibility  (line 495, @0x0000000002ac5d90, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Riki_Permanent_Invisibility::~CDOTA_Ability_Riki_Permanent_Invisibility(
        CDOTA_Ability_Riki_Permanent_Invisibility *const this)
{
  this->_vptr_IHandleEntity = &off_441CE90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Riki_Permanent_Invisibility::~CDOTA_Ability_Riki_Permanent_Invisibility  (line 495, @0x0000000002ac5db0, libserver.so)  // inlines: ~CDOTA_Ability_Riki_Permanent_Invisibility
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Riki_Permanent_Invisibility::~CDOTA_Ability_Riki_Permanent_Invisibility(
        CDOTA_Ability_Riki_Permanent_Invisibility *const this)
{
  this->_vptr_IHandleEntity = &off_441CE90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Riki_Permanent_Invisibility::Schema_DynamicBinding  (line 497, @0x0000000002abaae0, libserver.so)
// globals: CDOTA_Ability_Riki_Permanent_Invisibility::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Riki_Permanent_Invisibility::Schema_DynamicBinding(
        const CDOTA_Ability_Riki_Permanent_Invisibility *const this)
{
  return CDOTA_Ability_Riki_Permanent_Invisibility::s_pSchemaBinding;
}


// CDOTA_Ability_Riki_Permanent_Invisibility::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 497, @0x0000000002abaaf0, libserver.so)
// globals: CDOTA_Ability_Riki_Permanent_Invisibility::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Riki_Permanent_Invisibility::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Riki_Permanent_Invisibility::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Riki_Permanent_Invisibility::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Riki_Permanent_Invisibility::CEntityInstanceEntityClass::DestructInstance  (line 497, @0x0000000002abab00, libserver.so)  // inlines: Destruct<CDOTA_Ability_Riki_Permanent_Invisibility>
void __fastcall CDOTA_Ability_Riki_Permanent_Invisibility::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Riki_Permanent_Invisibility::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Riki_Permanent_Invisibility::CEntityInstanceEntityClass::FreeInstance  (line 497, @0x0000000002abab20, libserver.so)
void __fastcall CDOTA_Ability_Riki_Permanent_Invisibility::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Riki_Permanent_Invisibility::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Riki_Permanent_Invisibility::CEntityInstanceEntityClass::CanAllocate  (line 497, @0x0000000002abab40, libserver.so)
bool __fastcall CDOTA_Ability_Riki_Permanent_Invisibility::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Riki_Permanent_Invisibility::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Riki_Permanent_Invisibility::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 497, @0x0000000002abab50, libserver.so)
// globals: CDOTA_Ability_Riki_Permanent_Invisibility::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Riki_Permanent_Invisibility::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Riki_Permanent_Invisibility::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Riki_Permanent_Invisibility::s_pSchemaBinding;
}


// CDOTA_Ability_Riki_Permanent_Invisibility::CEntityInstanceEntityClass::AllocateInstance  (line 497, @0x0000000002abf640, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Riki_Permanent_Invisibility::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Riki_Permanent_Invisibility::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Riki_Permanent_Invisibility::CEntityInstanceEntityClass::ConstructInstance  (line 497, @0x0000000002ac2f70, libserver.so)  // inlines: CDOTA_Ability_Riki_Permanent_Invisibility, Construct<CDOTA_Ability_Riki_Permanent_Invisibility>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Riki_Permanent_Invisibility::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Riki_Permanent_Invisibility::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_441CE90;
  }
  return p;
}


// CDOTA_Ability_Riki_Permanent_Invisibility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 497, @0x0000000002acc790, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Riki_Permanent_Invisibility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Riki_Permanent_Invisibility::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Riki_Permanent_Invisibility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 497, @0x0000000002acc7b0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Riki_Permanent_Invisibility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Riki_Permanent_Invisibility::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Riki_Permanent_Invisibility::GetEntityClassInternal  (line 497, @0x0000000002ae11c0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "riki_permanent_invisibility", "CDOTA_Ability_Riki_Permanent_Invisibility"
// globals: `guard variable for'CDOTA_Ability_Riki_Permanent_Invisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_Permanent_InvisibilityClass, CDOTA_Ability_Riki_Permanent_Invisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_Permanent_InvisibilityClass, __dso_handle, CDOTA_Ability_Riki_Permanent_Invisibility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Riki_Permanent_Invisibility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_Permanent_InvisibilityClassInfo, CDOTA_Ability_Riki_Permanent_Invisibility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_Permanent_InvisibilityClassInfo
CEntityClass *__cdecl CDOTA_Ability_Riki_Permanent_Invisibility::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Riki_Permanent_Invisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_Permanent_InvisibilityClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Riki_Permanent_Invisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_Permanent_InvisibilityClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Riki_Permanent_Invisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_Permanent_InvisibilityClass);
    CDOTA_Ability_Riki_Permanent_Invisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_Permanent_InvisibilityClass._vptr_CEntityClass = off_441CE10;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Riki_Permanent_Invisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_Permanent_InvisibilityClass);
    __cxa_atexit(
      CDOTA_Ability_Riki_Permanent_Invisibility::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Riki_Permanent_Invisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_Permanent_InvisibilityClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Riki_Permanent_InvisibilityClass != 0 )
    return &CDOTA_Ability_Riki_Permanent_Invisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_Permanent_InvisibilityClass;
  if ( `guard variable for'CDOTA_Ability_Riki_Permanent_Invisibility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_Permanent_InvisibilityClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Riki_Permanent_Invisibility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_Permanent_InvisibilityClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Riki_Permanent_Invisibility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_Permanent_InvisibilityClassInfo,
      "CDOTA_Ability_Riki_Permanent_Invisibility",
      "riki_permanent_invisibility",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Riki_Permanent_Invisibility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_Permanent_InvisibilityClassInfo);
  }
  CDOTA_Ability_Riki_Permanent_Invisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_Permanent_InvisibilityClass.m_pClassInfo = &CDOTA_Ability_Riki_Permanent_Invisibility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_Permanent_InvisibilityClassInfo;
  CDOTA_Ability_Riki_Permanent_Invisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_Permanent_InvisibilityClass.m_pBaseClassInfo = CDOTA_Ability_Riki_Permanent_Invisibility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_Permanent_InvisibilityClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Riki_Permanent_InvisibilityClass = &CDOTA_Ability_Riki_Permanent_Invisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_Permanent_InvisibilityClass;
  CDOTA_Ability_Riki_Permanent_Invisibility::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_Permanent_InvisibilityClassInfo.m_pClass = &CDOTA_Ability_Riki_Permanent_Invisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_Permanent_InvisibilityClass;
  CDOTA_Ability_Riki_Permanent_Invisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_Permanent_InvisibilityClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Riki_Permanent_InvisibilityClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Riki_Permanent_Invisibility::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_Permanent_InvisibilityClass;
}


// CDOTA_Ability_Riki_Permanent_Invisibility::GetIntrinsicModifierName  (line 500, @0x0000000002abab60, libserver.so)
// strings: "modifier_riki_permanent_invisibility"
const char *__fastcall CDOTA_Ability_Riki_Permanent_Invisibility::GetIntrinsicModifierName(
        CDOTA_Ability_Riki_Permanent_Invisibility *const this)
{
  return "modifier_riki_permanent_invisibility";
}


// CDOTA_Ability_Riki_Permanent_Invisibility::IsRefreshable  (line 501, @0x0000000002abab70, libserver.so)
bool __fastcall CDOTA_Ability_Riki_Permanent_Invisibility::IsRefreshable(
        CDOTA_Ability_Riki_Permanent_Invisibility *const this)
{
  return 0;
}


// CDOTA_Ability_Riki_Permanent_Invisibility::HasInvisibility  (line 504, @0x0000000002abab80, libserver.so)
bool __fastcall CDOTA_Ability_Riki_Permanent_Invisibility::HasInvisibility(
        CDOTA_Ability_Riki_Permanent_Invisibility *const this)
{
  return 1;
}


// CDOTA_Ability_Riki_Permanent_Invisibility::GetAbilityDamageToTargetOverInterval  (line 512, @0x0000000002a9bd10, libserver.so)  // inlines: ToDOTABaseNPCHero
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::GetSecondsPerAttack, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "damage_multiplier"
__int64 __fastcall CDOTA_Ability_Riki_Permanent_Invisibility::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Riki_Permanent_Invisibility *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  unsigned int v4; // ebx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v9; // r14
  CDOTA_BaseNPC *v10; // rax
  float v11; // [rsp+8h] [rbp-28h]
  float fIntervalb; // [rsp+Ch] [rbp-24h]
  float fIntervalc; // [rsp+Ch] [rbp-24h]
  float fIntervald; // [rsp+Ch] [rbp-24h]

  v4 = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PHYSICAL )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    v9 = Caster;
    if ( Caster != 0 && (Caster->m_iUnitType & 1) != 0 )
    {
      v11 = fInterval;
      v10 = CDOTABaseAbility::GetCaster(this);
      fIntervalb = CDOTA_BaseNPC::GetSecondsPerAttack(v10);
      fIntervalc = (v11 / fIntervalb) * (*(v9->_vptr_IHandleEntity + 497))(v9);
      fIntervald = fIntervalc * CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage_multiplier", -1, 0);
      return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 1)) * fIntervald);
    }
  }
  return v4;
}


// CDOTA_Modifier_Riki_Permanent_Invisibility::~CDOTA_Modifier_Riki_Permanent_Invisibility  (line 530, @0x0000000002ac0e20, libserver.so)  // inlines: ~CDOTA_Modifier_PersistentInvisibility
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Riki_Permanent_Invisibility::~CDOTA_Modifier_Riki_Permanent_Invisibility(
        CDOTA_Modifier_Riki_Permanent_Invisibility *const this)
{
  this->_vptr_CDOTA_Buff = &off_411D6D0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Riki_Permanent_Invisibility::~CDOTA_Modifier_Riki_Permanent_Invisibility  (line 530, @0x0000000002ac0e40, libserver.so)  // inlines: ~CDOTA_Modifier_PersistentInvisibility, ~CDOTA_Modifier_Riki_Permanent_Invisibility
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Riki_Permanent_Invisibility::~CDOTA_Modifier_Riki_Permanent_Invisibility(
        CDOTA_Modifier_Riki_Permanent_Invisibility *const this)
{
  this->_vptr_CDOTA_Buff = &off_411D6D0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Riki_Permanent_Invisibility::IsHidden  (line 535, @0x0000000002abab90, libserver.so)
bool __fastcall CDOTA_Modifier_Riki_Permanent_Invisibility::IsHidden(
        CDOTA_Modifier_Riki_Permanent_Invisibility *const this)
{
  return 1;
}


// CDOTA_Modifier_Riki_Permanent_Invisibility::IsPurgable  (line 536, @0x0000000002ababa0, libserver.so)
bool __fastcall CDOTA_Modifier_Riki_Permanent_Invisibility::IsPurgable(
        CDOTA_Modifier_Riki_Permanent_Invisibility *const this)
{
  return 0;
}


// CDOTA_Modifier_Riki_Permanent_Invisibility::IsPermanent  (line 537, @0x0000000002ababb0, libserver.so)
bool __fastcall CDOTA_Modifier_Riki_Permanent_Invisibility::IsPermanent(
        CDOTA_Modifier_Riki_Permanent_Invisibility *const this)
{
  return 1;
}


// CDOTA_Modifier_Riki_Permanent_Invisibility::DestroyOnExpire  (line 538, @0x0000000002ababc0, libserver.so)
bool __fastcall CDOTA_Modifier_Riki_Permanent_Invisibility::DestroyOnExpire(
        CDOTA_Modifier_Riki_Permanent_Invisibility *const this)
{
  return 0;
}


// CDOTA_Modifier_Riki_Permanent_Invisibility::OnCreated  (line 565, @0x0000000002aaca90, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Modifier_PersistentInvisibility::OnCreated
// strings: "fadetime", "backstab_angle", "damage_multiplier", "fade_delay"
void __fastcall CDOTA_Modifier_Riki_Permanent_Invisibility::OnCreated(
        CDOTA_Modifier_Riki_Permanent_Invisibility *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v5; // xmm1_4
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax

  this->m_bBackstab = 0;
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "fade_time", -1, 0);
  KeyValues::SetFloat(pKV, "fadetime", v5);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
    this->backstab_angle = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "backstab_angle", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_5;
LABEL_9:
    this->damage_multiplier = 0.0;
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_6;
LABEL_10:
    this->fade_delay = 0.0;
    goto LABEL_7;
  }
  this->backstab_angle = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
    goto LABEL_9;
LABEL_5:
  this->damage_multiplier = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "damage_multiplier", -1, 0);
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 == 0 )
    goto LABEL_10;
LABEL_6:
  this->fade_delay = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8, "fade_delay", -1, 0);
LABEL_7:
  v9 = CDOTA_Buff::GetAbility(this);
  (*(v9->_vptr_IHandleEntity + 241))(v9, this->fade_delay);
  CDOTA_Modifier_PersistentInvisibility::OnCreated(this, pKV);
}


// CDOTA_Modifier_Riki_Permanent_Invisibility::OnRefresh  (line 586, @0x0000000002aac340, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::SetFloat, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Modifier_PersistentInvisibility::OnRefresh
// strings: "fadetime", "backstab_angle", "damage_multiplier", "fade_delay"
void __fastcall CDOTA_Modifier_Riki_Permanent_Invisibility::OnRefresh(
        CDOTA_Modifier_Riki_Permanent_Invisibility *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  float v5; // xmm1_4
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "fade_time", -1, 0);
  KeyValues::SetFloat(pKV, "fadetime", v5);
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
    this->backstab_angle = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "backstab_angle", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_5;
LABEL_8:
    this->damage_multiplier = 0.0;
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_6;
    goto LABEL_9;
  }
  this->backstab_angle = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 == 0 )
    goto LABEL_8;
LABEL_5:
  this->damage_multiplier = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v7, "damage_multiplier", -1, 0);
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 != 0 )
  {
LABEL_6:
    this->fade_delay = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v8, "fade_delay", -1, 0);
    CDOTA_Modifier_PersistentInvisibility::OnRefresh(this, pKV);
    return;
  }
LABEL_9:
  this->fade_delay = 0.0;
  CDOTA_Modifier_PersistentInvisibility::OnRefresh(this, pKV);
}


// CDOTA_Modifier_Riki_Permanent_Invisibility::OnIntervalThink  (line 602, @0x0000000002a7c690, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::RemoveModifierByName, CDOTA_Modifier_PersistentInvisibility::OnIntervalThink
// strings: "modifier_invisible"
void __fastcall CDOTA_Modifier_Riki_Permanent_Invisibility::OnIntervalThink(
        CDOTA_Modifier_Riki_Permanent_Invisibility *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  if ( CDOTA_Buff::GetParent(this) != 0 && (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) != 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::RemoveModifierByName(Parent, "modifier_invisible");
  }
  else
  {
    CDOTA_Modifier_PersistentInvisibility::OnIntervalThink(this);
  }
}


// CDOTA_Modifier_Riki_Permanent_Invisibility::DeclareFunctions  (line 617, @0x0000000002a78800, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Riki_Permanent_Invisibility::DeclareFunctions(
        CDOTA_Modifier_Riki_Permanent_Invisibility *const this)
{
  this->m_Functions[4].__pfn = (&stru_10 + 729);
  this->m_Functions[4].__delta = 0;
  this->m_Functions[155].__pfn = (&stru_10 + 737);
  this->m_Functions[155].__delta = 0;
  this->m_Functions[8].__pfn = (&stru_10 + 745);
  this->m_Functions[8].__delta = 0;
  this->m_Functions[128].__pfn = (&stru_10 + 697);
  this->m_Functions[128].__delta = 0;
  this->m_Functions[130].__pfn = (&stru_10 + 713);
  this->m_Functions[130].__delta = 0;
  this->m_Functions[120].__pfn = (&stru_10 + 705);
  this->m_Functions[120].__delta = 0;
  this->m_Functions[10].__pfn = (&stru_10 + 721);
  this->m_Functions[10].__delta = 0;
}


// CDOTA_Modifier_Riki_Permanent_Invisibility::OnAbilityExecuted  (line 631, @0x0000000002a788a0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Riki_Permanent_Invisibility::OnAbilityExecuted(
        CDOTA_Modifier_Riki_Permanent_Invisibility *const this,
        const CModifierParams *const params)
{
  return 1uLL;
}


// CDOTA_Modifier_Riki_Permanent_Invisibility::OnBreakInvisibility  (line 638, @0x0000000002a788b0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Riki_Permanent_Invisibility::OnBreakInvisibility(
        CDOTA_Modifier_Riki_Permanent_Invisibility *const this,
        const CModifierParams *const params)
{
  return 1uLL;
}


// CDOTA_Modifier_Riki_Permanent_Invisibility::GetModifierPreAttack  (line 646, @0x0000000002a84720, libserver.so)  // inlines: DEG2RAD, DotProduct, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, VectorNormalize2D, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator-
// calls: CDOTA_Buff::GetParent, cosf, CBaseEntity::GetAbsAngles, AngleVectors, VectorNormalize, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_BaseNPC::FindModifierByName, CDOTA_Buff::Destroy
// strings: "modifier_riki_blinkstrike", "modifier_riki_tricks_of_the_trade_phase"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Riki_Permanent_Invisibility::GetModifierPreAttack(
        CDOTA_Modifier_Riki_Permanent_Invisibility *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r12
  const QAngle *AbsAngles; // rax
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r13
  const Vector *v12; // rax
  vec_t v13; // xmm1_4
  vec_t v14; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_Buff *ModifierByName; // rax
  CDOTA_BaseNPC *v17; // rax
  float fDotThreshold; // [rsp+Ch] [rbp-44h]
  Vector vTargetForward; // [rsp+10h] [rbp-40h] BYREF
  Vector vCasterForward; // [rsp+20h] [rbp-30h] BYREF

  this->m_bBackstab = 0;
  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
  {
    m_Index = params->htarget.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[params->htarget.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0
            && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
            && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0 )
          {
            fDotThreshold = cosf(this->backstab_angle * 0.017453292);
            AbsAngles = CBaseEntity::GetAbsAngles(m_pInstance);
            AngleVectors(AbsAngles, &vTargetForward, 0, 0);
            vTargetForward.z = 0.0;
            VectorNormalize(&vTargetForward);
            Caster = CDOTA_Buff::GetCaster(this);
            AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
            v12 = CBaseEntity::GetAbsOrigin(m_pInstance);
            v13 = v12->x - AbsOrigin->x;
            v14 = v12->y - AbsOrigin->y;
            vCasterForward.z = 0.0;
            vCasterForward.x = v13;
            vCasterForward.y = v14;
            VectorNormalize(&vCasterForward);
            Parent = CDOTA_Buff::GetParent(this);
            ModifierByName = CDOTA_BaseNPC::FindModifierByName(Parent, "modifier_riki_blinkstrike", 0);
            if ( ModifierByName != 0 )
            {
              CDOTA_Buff::Destroy(ModifierByName, 0, 0, 0);
              this->m_bBackstab = 1;
            }
            else
            {
              v17 = CDOTA_Buff::GetParent(this);
              this->m_bBackstab = CDOTA_BaseNPC::FindModifierByName(v17, "modifier_riki_tricks_of_the_trade_phase", 0) != 0
                               || (((vTargetForward.x * vCasterForward.x) + (vTargetForward.y * vCasterForward.y))
                                 + (vTargetForward.z * vCasterForward.z)) > fDotThreshold;
            }
          }
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Riki_Permanent_Invisibility::OnAttack  (line 695, @0x0000000002a83840, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Modifier_PersistentInvisibility::OnAttack, CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Riki_Permanent_Invisibility::OnAttack(
        CDOTA_Modifier_Riki_Permanent_Invisibility *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *Ability; // rax
  const CModifierParams *paramsa; // [rsp+8h] [rbp-18h]

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
          paramsa = params;
          Parent = CDOTA_Buff::GetParent(this);
          params = paramsa;
          if ( Parent == m_pInstance )
          {
            Ability = CDOTA_Buff::GetAbility(this);
            (*(Ability->_vptr_IHandleEntity + 241))(Ability, this->fade_delay);
            params = paramsa;
          }
        }
      }
    }
  }
  return CDOTA_Modifier_PersistentInvisibility::OnAttack(this, params);
}


// CDOTA_Modifier_Riki_Permanent_Invisibility::GetModifierProcAttack_BonusDamage_Physical  (line 708, @0x0000000002aa2130, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, ToDOTABaseNPCHero, operator CBaseEntity*, operator CEntityInstance*
// calls: GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_Buff::GetCaster, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "particles/units/heroes/hero_riki/riki_backstab.vpcf", "attach_hitloc", "special_bonus_unique_riki_1"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Riki_Permanent_Invisibility::GetModifierProcAttack_BonusDamage_Physical(
        CDOTA_Modifier_Riki_Permanent_Invisibility *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CEntityInstance *m_pInstance; // r13
  int m_Id; // eax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // r14d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  uint32 v16; // edx
  CEntityIdentity *v17; // rax
  CEntityIdentity *v18; // rax
  CEntityInstance *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  CDOTA_BaseNPC *v21; // r12
  CDOTA_BaseNPC *v22; // rax
  CDOTABaseAbility *AbilityByName; // rax
  double v24; // xmm0_8
  float flTotalMultiplier; // [rsp+Ch] [rbp-34h]
  ModifierVariant_t result; // 0:rax.16

  if ( !this->m_bBackstab )
    goto LABEL_7;
  m_Index = params->htarget.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->htarget.m_Index) >> 9) & 0x3F];
    if ( v5 != 0 )
    {
      v6 = &v5[params->htarget.m_Index & 0x1FF];
      if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
      {
        m_pInstance = v6->m_pInstance;
        if ( v6->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
        {
          m_Id = m_pInstance[43].m_iszPrivateVScripts.u.m_Id;
          if ( (m_Id & 0x10) == 0 && (m_Id & 0x193) != 0 )
          {
            ParticleManager = GetParticleManager();
            Particle = CDOTA_ParticleManager::CreateParticle(
                         ParticleManager,
                         "particles/units/heroes/hero_riki/riki_backstab.vpcf",
                         2,
                         0,
                         0,
                         0);
            Caster = CDOTA_Buff::GetCaster(this);
            AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
            v14 = GetParticleManager();
            CDOTA_ParticleManager::SetParticleControlEnt(
              v14,
              Particle,
              0,
              m_pInstance,
              5,
              "attach_hitloc",
              *AbsOrigin,
              1);
            v15 = GetParticleManager();
            CDOTA_ParticleManager::ReleaseParticleIndex(v15, Particle);
            v16 = params->hattacker.m_Index;
            if ( v16 + 2 > 1 )
            {
              v17 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
              if ( v17 != 0 )
              {
                v18 = &v17[params->hattacker.m_Index & 0x1FF];
                if ( v18 != 0 && v16 == v18->m_EHandle.m_Index )
                {
                  v19 = v18->m_pInstance;
                  if ( v19 != 0 && BYTE3(v19[7]._vptr_IHandleEntity) != 0 )
                  {
                    v20 = CDOTA_Buff::GetCaster(this);
                    v21 = v20;
                    if ( v20 != 0 && (v20->m_iUnitType & 1) != 0 )
                    {
                      flTotalMultiplier = this->damage_multiplier;
                      v22 = CDOTA_Buff::GetCaster(this);
                      AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v22, "special_bonus_unique_riki_1", 0);
                      if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
                        flTotalMultiplier = (CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                               AbilityByName,
                                               "value",
                                               1,
                                               1)
                                           / 100.0)
                                          + flTotalMultiplier;
                      v24 = (*(v21->_vptr_IHandleEntity + 497))(v21);
                      *&v24 = *&v24 * flTotalMultiplier;
                      *&result.m_eType = (*&v24 << 32) | 1LL;
LABEL_8:
                      result.m_szVal = 0;
                      return result;
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
  this->m_bBackstab = 0;
LABEL_7:
  *&result.m_eType = 1;
  goto LABEL_8;
}


// CDOTA_Modifier_Riki_Permanent_Invisibility::GetActivityTranslationModifiers  (line 747, @0x0000000002a7cc40, libserver.so)
// strings: "backstab"
ModifierVariant_t __fastcall CDOTA_Modifier_Riki_Permanent_Invisibility::GetActivityTranslationModifiers(
        CDOTA_Modifier_Riki_Permanent_Invisibility *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  *&result.m_eType = 2;
  if ( !this->m_bBackstab || (result.m_szVal = "backstab", params->nActivity != 1503) )
    result.m_szVal = 0;
  return result;
}


// CDOTA_Ability_Riki_TricksOfTheTrade::~CDOTA_Ability_Riki_TricksOfTheTrade  (line 774, @0x0000000002ac5de0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Riki_TricksOfTheTrade::~CDOTA_Ability_Riki_TricksOfTheTrade(
        CDOTA_Ability_Riki_TricksOfTheTrade *const this)
{
  this->_vptr_IHandleEntity = &off_441DCF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Riki_TricksOfTheTrade::~CDOTA_Ability_Riki_TricksOfTheTrade  (line 774, @0x0000000002ac5e00, libserver.so)  // inlines: ~CDOTA_Ability_Riki_TricksOfTheTrade
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Riki_TricksOfTheTrade::~CDOTA_Ability_Riki_TricksOfTheTrade(
        CDOTA_Ability_Riki_TricksOfTheTrade *const this)
{
  this->_vptr_IHandleEntity = &off_441DCF0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Riki_TricksOfTheTrade::Schema_DynamicBinding  (line 776, @0x0000000002ababd0, libserver.so)
// globals: CDOTA_Ability_Riki_TricksOfTheTrade::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Riki_TricksOfTheTrade::Schema_DynamicBinding(
        const CDOTA_Ability_Riki_TricksOfTheTrade *const this)
{
  return CDOTA_Ability_Riki_TricksOfTheTrade::s_pSchemaBinding;
}


// CDOTA_Ability_Riki_TricksOfTheTrade::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 776, @0x0000000002ababe0, libserver.so)
// globals: CDOTA_Ability_Riki_TricksOfTheTrade::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Riki_TricksOfTheTrade::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Riki_TricksOfTheTrade::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Riki_TricksOfTheTrade::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Riki_TricksOfTheTrade::CEntityInstanceEntityClass::DestructInstance  (line 776, @0x0000000002ababf0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Riki_TricksOfTheTrade>
void __fastcall CDOTA_Ability_Riki_TricksOfTheTrade::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Riki_TricksOfTheTrade::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Riki_TricksOfTheTrade::CEntityInstanceEntityClass::FreeInstance  (line 776, @0x0000000002abac10, libserver.so)
void __fastcall CDOTA_Ability_Riki_TricksOfTheTrade::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Riki_TricksOfTheTrade::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Riki_TricksOfTheTrade::CEntityInstanceEntityClass::CanAllocate  (line 776, @0x0000000002abac30, libserver.so)
bool __fastcall CDOTA_Ability_Riki_TricksOfTheTrade::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Riki_TricksOfTheTrade::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Riki_TricksOfTheTrade::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 776, @0x0000000002abac40, libserver.so)
// globals: CDOTA_Ability_Riki_TricksOfTheTrade::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Riki_TricksOfTheTrade::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Riki_TricksOfTheTrade::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Riki_TricksOfTheTrade::s_pSchemaBinding;
}


// CDOTA_Ability_Riki_TricksOfTheTrade::CEntityInstanceEntityClass::AllocateInstance  (line 776, @0x0000000002abf680, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Riki_TricksOfTheTrade::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Riki_TricksOfTheTrade::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Riki_TricksOfTheTrade::CEntityInstanceEntityClass::ConstructInstance  (line 776, @0x0000000002ac2fa0, libserver.so)  // inlines: CDOTA_Ability_Riki_TricksOfTheTrade, Construct<CDOTA_Ability_Riki_TricksOfTheTrade>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Riki_TricksOfTheTrade::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Riki_TricksOfTheTrade::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_441DCF0;
  }
  return p;
}


// CDOTA_Ability_Riki_TricksOfTheTrade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 776, @0x0000000002acc7e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Riki_TricksOfTheTrade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Riki_TricksOfTheTrade::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Riki_TricksOfTheTrade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 776, @0x0000000002acc800, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Riki_TricksOfTheTrade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Riki_TricksOfTheTrade::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Riki_TricksOfTheTrade::GetEntityClassInternal  (line 776, @0x0000000002ae1310, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "riki_tricks_of_the_trade", "CDOTA_Ability_Riki_TricksOfTheTrade"
// globals: `guard variable for'CDOTA_Ability_Riki_TricksOfTheTrade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_TricksOfTheTradeClass, CDOTA_Ability_Riki_TricksOfTheTrade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_TricksOfTheTradeClass, __dso_handle, CDOTA_Ability_Riki_TricksOfTheTrade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Riki_TricksOfTheTrade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_TricksOfTheTradeClassInfo, CDOTA_Ability_Riki_TricksOfTheTrade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_TricksOfTheTradeClassInfo
CEntityClass *__cdecl CDOTA_Ability_Riki_TricksOfTheTrade::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Riki_TricksOfTheTrade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_TricksOfTheTradeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Riki_TricksOfTheTrade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_TricksOfTheTradeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Riki_TricksOfTheTrade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_TricksOfTheTradeClass);
    CDOTA_Ability_Riki_TricksOfTheTrade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_TricksOfTheTradeClass._vptr_CEntityClass = off_441DC70;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Riki_TricksOfTheTrade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_TricksOfTheTradeClass);
    __cxa_atexit(
      CDOTA_Ability_Riki_TricksOfTheTrade::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Riki_TricksOfTheTrade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_TricksOfTheTradeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Riki_TricksOfTheTradeClass != 0 )
    return &CDOTA_Ability_Riki_TricksOfTheTrade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_TricksOfTheTradeClass;
  if ( `guard variable for'CDOTA_Ability_Riki_TricksOfTheTrade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_TricksOfTheTradeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Riki_TricksOfTheTrade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_TricksOfTheTradeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Riki_TricksOfTheTrade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_TricksOfTheTradeClassInfo,
      "CDOTA_Ability_Riki_TricksOfTheTrade",
      "riki_tricks_of_the_trade",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Riki_TricksOfTheTrade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_TricksOfTheTradeClassInfo);
  }
  CDOTA_Ability_Riki_TricksOfTheTrade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_TricksOfTheTradeClass.m_pClassInfo = &CDOTA_Ability_Riki_TricksOfTheTrade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_TricksOfTheTradeClassInfo;
  CDOTA_Ability_Riki_TricksOfTheTrade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_TricksOfTheTradeClass.m_pBaseClassInfo = CDOTA_Ability_Riki_TricksOfTheTrade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_TricksOfTheTradeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Riki_TricksOfTheTradeClass = &CDOTA_Ability_Riki_TricksOfTheTrade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_TricksOfTheTradeClass;
  CDOTA_Ability_Riki_TricksOfTheTrade::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Riki_TricksOfTheTradeClassInfo.m_pClass = &CDOTA_Ability_Riki_TricksOfTheTrade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_TricksOfTheTradeClass;
  CDOTA_Ability_Riki_TricksOfTheTrade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_TricksOfTheTradeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Riki_TricksOfTheTradeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Riki_TricksOfTheTrade::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Riki_TricksOfTheTradeClass;
}


// CDOTA_Ability_Riki_TricksOfTheTrade::YouForgotToImplementOrDeclareServerClass  (line 796, @0x0000000002a788c0, libserver.so)
int __fastcall CDOTA_Ability_Riki_TricksOfTheTrade::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Riki_TricksOfTheTrade *const this)
{
  return 0;
}


// CDOTA_Ability_Riki_TricksOfTheTrade::GetServerClass  (line 796, @0x0000000002a89cb0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Riki_TricksOfTheTrade::GetServerClass(
        CDOTA_Ability_Riki_TricksOfTheTrade *const this)
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


// CDOTA_Ability_Riki_TricksOfTheTrade::GetBehavior  (line 806, @0x0000000002a7ae10, libserver.so)  // inlines: GetAbilityData, GetBehavior
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::LoadAbilityData
int __fastcall CDOTA_Ability_Riki_TricksOfTheTrade::GetBehavior(CDOTA_Ability_Riki_TricksOfTheTrade *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return 34341000;
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  return m_pAbilityData->m_iAbilityBehavior;
}


// CDOTA_Ability_Riki_TricksOfTheTrade::GetChannelTime  (line 818, @0x0000000002aa0410, libserver.so)  // inlines: GetLevelSpecialValueFor<int>
// calls: CDOTABaseAbility::GetChannelTime, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "scepter_bonus"
float __fastcall CDOTA_Ability_Riki_TricksOfTheTrade::GetChannelTime(CDOTA_Ability_Riki_TricksOfTheTrade *const this)
{
  int ChannelTime; // r12d
  CDOTA_BaseNPC *Caster; // rax

  ChannelTime = CDOTABaseAbility::GetChannelTime(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    ChannelTime += CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "scepter_bonus", -1, 0);
  return ChannelTime;
}


// CDOTA_Ability_Riki_TricksOfTheTrade::OnSpellStart  (line 835, @0x0000000002aa0460, libserver.so)  // inlines: CEntityHandle, CHandle, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, Set
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTAFogOfWarSystem::AddTempViewer, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCursorTarget, KeyValues::SetPtr, CDOTA_BaseNPC::AddNewModifier, CDOTA_ProjectileManager::ProjectileDodge, GetParticleManager, CDOTA_ParticleManager::CreateParticle (17 total)
// strings: "modifier_riki_tricks_of_the_trade_phase", "particles/units/heroes/hero_riki/riki_tricks_cast.vpcf"
void __fastcall CDOTA_Ability_Riki_TricksOfTheTrade::OnSpellStart(CDOTA_Ability_Riki_TricksOfTheTrade *const this)
{
  int LevelSpecialValue; // r13d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v5; // rax
  float v6; // xmm1_4
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v8; // r13
  CDOTA_BaseNPC *v9; // rax
  CDOTA_BaseNPC *v10; // rax
  CEntityIdentity *m_pEntity; // rdx
  __int16 v12; // cx
  CDOTA_BaseNPC *v13; // rax
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v16; // rax
  CDOTA_ParticleManager *v17; // rax
  float flDuration; // [rsp+Ch] [rbp-54h]
  Vector vPos; // [rsp+10h] [rbp-50h] BYREF
  KeyValues kv; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-28h]

  v21 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "range", -1, 0);
  flDuration = (*(this->_vptr_IHandleEntity + 225))(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  v5 = CDOTABaseAbility::GetCaster(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_MANTASTYLE,
    v5->m_iTeamNum.m_Value,
    AbsOrigin,
    LevelSpecialValue,
    flDuration,
    1);
  KeyValues::KeyValues(&kv, "modifier_riki_tricks_of_the_trade_phase");
  (*(this->_vptr_IHandleEntity + 225))(this);
  KeyValues::SetFloat(&kv, "duration", v6);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  KeyValues::SetPtr(&kv, "target", CursorTarget);
  v8 = CDOTABaseAbility::GetCaster(this);
  v9 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v9, v8, this, "modifier_riki_tricks_of_the_trade_phase", &kv, 0);
  v10 = CDOTABaseAbility::GetCaster(this);
  vPos.x = NAN;
  if ( v10 != 0 )
  {
    m_pEntity = v10->m_pEntity;
    if ( m_pEntity != 0 )
    {
      v12 = 0x7FFF;
      if ( m_pEntity->m_EHandle.m_Index != -1 )
        v12 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
      LODWORD(vPos.x) = (((m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1)) << 15) | v12 & 0x7FFF;
    }
  }
  CDOTA_ProjectileManager::ProjectileDodge(&g_DOTAProjectileManager, &vPos, 0);
  v13 = CDOTABaseAbility::GetCaster(this);
  vPos = *CBaseEntity::GetAbsOrigin(v13);
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_riki/riki_tricks_cast.vpcf",
               8,
               0,
               0,
               0);
  v16 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v16, Particle, 0, *&vPos.x, vPos.z);
  v17 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v17, Particle);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Modifier_Riki_TricksOfTheTrade_Phase::~CDOTA_Modifier_Riki_TricksOfTheTrade_Phase  (line 863, @0x0000000002ac0dd0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Riki_TricksOfTheTrade_Phase::~CDOTA_Modifier_Riki_TricksOfTheTrade_Phase(
        CDOTA_Modifier_Riki_TricksOfTheTrade_Phase *const this)
{
  this->_vptr_CDOTA_Buff = &off_441E7B0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Riki_TricksOfTheTrade_Phase::~CDOTA_Modifier_Riki_TricksOfTheTrade_Phase  (line 863, @0x0000000002ac0df0, libserver.so)  // inlines: ~CDOTA_Modifier_Riki_TricksOfTheTrade_Phase
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Riki_TricksOfTheTrade_Phase::~CDOTA_Modifier_Riki_TricksOfTheTrade_Phase(
        CDOTA_Modifier_Riki_TricksOfTheTrade_Phase *const this)
{
  this->_vptr_CDOTA_Buff = &off_441E7B0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Riki_TricksOfTheTrade_Phase::IsHidden  (line 868, @0x0000000002abac50, libserver.so)
bool __fastcall CDOTA_Modifier_Riki_TricksOfTheTrade_Phase::IsHidden(
        CDOTA_Modifier_Riki_TricksOfTheTrade_Phase *const this)
{
  return 1;
}


// CDOTA_Modifier_Riki_TricksOfTheTrade_Phase::IsPurgable  (line 872, @0x0000000002abac60, libserver.so)
bool __fastcall CDOTA_Modifier_Riki_TricksOfTheTrade_Phase::IsPurgable(
        CDOTA_Modifier_Riki_TricksOfTheTrade_Phase *const this)
{
  return 0;
}


// CDOTA_Modifier_Riki_TricksOfTheTrade_Phase::OnCreated  (line 893, @0x0000000002a9ce50, libserver.so)  // inlines: GetEHandle, GetEntryIndex, GetSerialNumber, NetworkStateChanged, Set, Start, ToDOTABaseNPC, Vector, VectorAdd, operator+, operator=, operator=<float>
// calls: CDOTA_Buff::GetParent, CBaseEntity::AddEffects, CountdownTimer::Now, CDOTA_Buff::StartIntervalThink, KeyValues::GetPtr, CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CBaseEntity::GetAbsOrigin, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::AddParticle (14 total)
// strings: "particles/units/heroes/hero_riki/riki_tricks.vpcf", "Hero_Riki.TricksOfTheTrade.Cast", "Hero_Riki.TricksOfTheTrade"
void __fastcall CDOTA_Modifier_Riki_TricksOfTheTrade_Phase::OnCreated(
        CDOTA_Modifier_Riki_TricksOfTheTrade_Phase *const this,
        KeyValues *pKV)
{
  CountdownTimer *p_m_Timer; // r12
  CDOTA_BaseNPC *Parent; // rax
  float v6; // xmm0_4
  float v7; // xmm1_4
  _BYTE *Ptr; // rax
  __int64 v9; // rdx
  int v10; // eax
  __int16 v11; // cx
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *v13; // rax
  const Vector *AbsOrigin; // rax
  vec_t v15; // xmm1_4
  vec_t v16; // xmm0_4
  CDOTA_ParticleManager *ParticleManager; // rax
  int Particle; // eax
  int v19; // r12d
  CDOTA_ParticleManager *v20; // rax
  int m_nFxIndex; // r12d
  CDOTA_ParticleManager *v22; // rax
  CDOTABaseAbility *v23; // rax
  __m128i v24; // xmm0
  int v25; // r12d
  CDOTABaseAbility *v26; // rax
  __m128i v27; // xmm0
  int v28; // r13d
  CDOTABaseAbility *v29; // rax
  unsigned int v30; // xmm0_4
  int v31; // r12d
  CDOTA_ParticleManager *v32; // rax
  CDOTA_BaseNPC *v33; // rax
  float v34; // [rsp+Ch] [rbp-54h]
  int range; // [rsp+1Ch] [rbp-44h] BYREF
  Vector vPos; // [rsp+20h] [rbp-40h] BYREF
  double v37; // [rsp+30h] [rbp-30h]
  float v38; // [rsp+38h] [rbp-28h]

  p_m_Timer = &this->m_Timer;
  Parent = CDOTA_Buff::GetParent(this);
  CBaseEntity::AddEffects(Parent, 32);
  this->m_bFirstHit = 1;
  v6 = CountdownTimer::Now(p_m_Timer) + 0.0;
  if ( v6 != this->m_Timer.m_timestamp.m_Value )
  {
    v34 = v6;
    (*(this->m_Timer._vptr_CountdownTimer + 2))(p_m_Timer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_Timer.m_timestamp.m_Value = v34;
  }
  if ( this->m_Timer.m_duration.m_Value != 0.0 )
  {
    (*(this->m_Timer._vptr_CountdownTimer + 2))(p_m_Timer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
    this->m_Timer.m_duration.m_Value = 0.0;
  }
  CDOTA_Buff::StartIntervalThink(this, 0.0, v7);
  Ptr = KeyValues::GetPtr(pKV, "target", 0);
  if ( Ptr != 0 && Ptr[339] != 0 && (v9 = *(Ptr + 1)) != 0 )
  {
    v10 = (*(v9 + 16) >> 15) - (*(v9 + 48) & 1);
    if ( *(v9 + 16) == -1 )
      v11 = 0x7FFF;
    else
      v11 = *(v9 + 16) & 0x7FFF;
    LOWORD(this->m_hTarget.m_Index) = v11 | this->m_hTarget.m_Index & 0x8000;
    this->m_hTarget.m_Index = (v10 << 15) | this->m_hTarget.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hTarget.m_Index = -1;
  }
  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &range, "range");
  v13 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v13);
  v15 = AbsOrigin->x + 0.0;
  v16 = AbsOrigin->z + 10.0;
  vPos.y = AbsOrigin->y + 0.0;
  vPos.x = v15;
  vPos.z = v16;
  ParticleManager = GetParticleManager();
  Particle = CDOTA_ParticleManager::CreateParticle(
               ParticleManager,
               "particles/units/heroes/hero_riki/riki_tricks.vpcf",
               8,
               0,
               0,
               0);
  this->m_nFxIndex = Particle;
  v19 = Particle;
  v20 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v20, v19, 0, *&vPos.x, vPos.z);
  m_nFxIndex = this->m_nFxIndex;
  *&v37 = range;
  *(&v37 + 1) = range;
  v38 = range;
  v22 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v22, m_nFxIndex, 1, v37, v38);
  v23 = CDOTA_Buff::GetAbility(this);
  *v24.m128i_i64 = (*(v23->_vptr_IHandleEntity + 225))(v23);
  *&v25 = COERCE_FLOAT(_mm_cvtsi128_si32(v24));
  v26 = CDOTA_Buff::GetAbility(this);
  *v27.m128i_i64 = (*(v26->_vptr_IHandleEntity + 225))(v26);
  v28 = _mm_cvtsi128_si32(v27);
  v29 = CDOTA_Buff::GetAbility(this);
  *&v30 = (*(v29->_vptr_IHandleEntity + 225))(v29);
  v38 = *&v25;
  v31 = this->m_nFxIndex;
  v37 = COERCE_DOUBLE(__PAIR64__(v28, v30));
  v32 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v32, v31, 2, v37, v38);
  CDOTA_Buff::AddParticle(this, this->m_nFxIndex, 0, 0, -1, 0, 0);
  DOTA_EmitSoundLocation(&vPos, "Hero_Riki.TricksOfTheTrade.Cast", 0);
  v33 = CDOTA_Buff::GetParent(this);
  DOTA_EmitSound(2, "Hero_Riki.TricksOfTheTrade", v33);
}


// CDOTA_Modifier_Riki_TricksOfTheTrade_Phase::OnDestroy  (line 922, @0x0000000002aacda0, libserver.so)  // inlines: DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>, MarkPVSInformationDirty, RemoveEffects
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetParent, CBaseEntity::DispatchUpdateTransmitState, GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CBaseEntity::StopSound, CDOTA_BaseNPC::StartGesture, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex
// strings: "Hero_Riki.TricksOfTheTrade", "particles/units/heroes/hero_riki/riki_tricks_end.vpcf"
void __fastcall CDOTA_Modifier_Riki_TricksOfTheTrade_Phase::OnDestroy(
        CDOTA_Modifier_Riki_TricksOfTheTrade_Phase *const this)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Parent; // rbx
  int m_nFxIndex; // ebx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rax
  CDOTA_BaseNPC *v9; // rax
  CDOTA_ParticleManager *v10; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v12; // rax
  CDOTA_ParticleManager *v13; // rax
  Vector vPos; // 0:^0.12

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "range", -1, 0);
  Parent = CDOTA_Buff::GetParent(this);
  (*(Parent->_vptr_IHandleEntity + 188))(Parent, Parent->m_fEffects.m_Value & 0xFFFFFFDF);
  Parent->m_NetworkTransmitComponent.m_nStateFlags |= 0x60u;
  CBaseEntity::DispatchUpdateTransmitState(Parent);
  m_nFxIndex = this->m_nFxIndex;
  if ( m_nFxIndex != -1 )
  {
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, m_nFxIndex, 0);
  }
  v6 = CDOTA_Buff::GetParent(this);
  CBaseEntity::StopSound(v6, "Hero_Riki.TricksOfTheTrade");
  v7 = CDOTA_Buff::GetParent(this);
  if ( (*(v7->_vptr_IHandleEntity + 408))(v7) != 0 )
  {
    v8 = CDOTA_Buff::GetParent(this);
    CDOTA_BaseNPC::StartGesture(v8, 1713, 0.1, 0.1, 9, 0, 1.0);
    v9 = CDOTA_Buff::GetParent(this);
    vPos = *CBaseEntity::GetAbsOrigin(v9);
    v10 = GetParticleManager();
    Particle = CDOTA_ParticleManager::CreateParticle(
                 v10,
                 "particles/units/heroes/hero_riki/riki_tricks_end.vpcf",
                 8,
                 0,
                 0,
                 0);
    v12 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v12, Particle, 0, *&vPos.x, vPos.z);
    v13 = GetParticleManager();
    CDOTA_ParticleManager::ReleaseParticleIndex(v13, Particle);
  }
}


// CDOTA_Modifier_Riki_TricksOfTheTrade_Phase::OnIntervalThink  (line 948, @0x0000000002a9ecd0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, InState, IndexToIdentity, IsElapsed, IsInvulnerable, IsRealHero, IsValid, LookupEntity, NetworkStateChanged, NormalizeInPlace, Set, Start, ToDOTABaseNPC, VectorAdd, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator+, operator-, operator->, operator=, operator=<float>, operator[], ~CUtlVector
// calls: CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter, CountdownTimer::Now, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetParent, FindClearSpaceForUnit, GetParticleManager, CDOTA_ParticleManager::SetParticleControl, CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, FindUnitsInRadius (23 total)
// strings: "modifier_bane_nightmare", "Hero_Riki.Backstab", "scepter_bonus"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Riki_TricksOfTheTrade_Phase::OnIntervalThink(
        CDOTA_Modifier_Riki_TricksOfTheTrade_Phase *const this)
{
  EHANDLE *p_m_hTarget; // rbx
  CDOTA_BaseNPC *Caster; // rax
  const CBaseEntity *v4; // rax
  Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v7; // rax
  const Vector *v8; // rax
  unsigned int v9; // xmm2_4
  unsigned int v10; // xmm1_4
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *v13; // rax
  CDOTABaseAbility *v14; // rax
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  CDOTABaseAbility *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  const Vector *v21; // rax
  __m128i v22; // xmm4
  __int64 v23; // rdx
  float v24; // r13d
  CDOTA_BaseNPC *v25; // r12
  CDOTA_BaseNPC *v26; // rax
  const Vector *v27; // rbx
  CDOTA_BaseNPC *v28; // rax
  __int64 v29; // r12
  int v30; // ebx
  unsigned __int16 *v31; // rdx
  int v32; // eax
  __int16 v33; // cx
  CEntityIdentity *v34; // rdx
  CEntityIdentity *v35; // rdx
  CEntityInstance *m_pInstance; // r13
  CDOTA_BaseNPC *v37; // rax
  int (**vptr_IHandleEntity)(...); // rax
  CDOTA_BaseNPC *v39; // rax
  CDOTA_BaseNPC *v40; // rax
  Vector *v41; // r15
  CDOTA_BaseNPC *v42; // rax
  CDOTA_BaseNPC *v43; // rax
  const Vector *v44; // r15
  const Vector *v45; // rax
  vec_t v46; // xmm1_4
  vec_t v47; // xmm0_4
  CDOTA_BaseNPC *v48; // rax
  CDOTA_BaseNPC *v49; // rax
  CDOTA_AttackRecord *AttackRecord; // r15
  CDOTA_BaseNPC *v51; // rax
  CDOTA_BaseNPC *v52; // rax
  CDOTABaseAbility *v53; // rax
  float angles; // [rsp+20h] [rbp-A0h]
  float attack_rate; // [rsp+28h] [rbp-98h]
  float attack_ratea; // [rsp+28h] [rbp-98h]
  int attack_count; // [rsp+38h] [rbp-88h] BYREF
  int range; // [rsp+3Ch] [rbp-84h] BYREF
  Vector vOriginalPosition; // [rsp+40h] [rbp-80h]
  Vector vToTarget; // [rsp+50h] [rbp-70h] BYREF
  QAngle faceTargetAngles; // [rsp+60h] [rbp-60h] BYREF
  double scepter_bonus; // [rsp+70h] [rbp-50h] BYREF
  __int64 v63; // [rsp+78h] [rbp-48h]
  int v64; // [rsp+80h] [rbp-40h]
  int v65; // [rsp+84h] [rbp-3Ch]

  p_m_hTarget = &this->m_hTarget;
  if ( CEntityHandle::operator CEntityInstance *(&this->m_hTarget) != 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(Caster) )
    {
      v4 = CEntityHandle::operator CEntityInstance *(p_m_hTarget);
      AbsOrigin = CBaseEntity::GetAbsOrigin(v4);
      Parent = CDOTA_Buff::GetParent(this);
      FindClearSpaceForUnit(Parent, *AbsOrigin, 0);
      v7 = CDOTA_Buff::GetParent(this);
      v8 = CBaseEntity::GetAbsOrigin(v7);
      *&v9 = v8->y + 0.0;
      LODWORD(AbsOrigin) = this->m_nFxIndex;
      *&v10 = v8->x + 0.0;
      *&v63 = v8->z + 10.0;
      scepter_bonus = COERCE_DOUBLE(__PAIR64__(v9, v10));
      ParticleManager = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(ParticleManager, AbsOrigin, 0, scepter_bonus, *&v63);
    }
  }
  if ( CountdownTimer::Now(&this->m_Timer) >= this->m_Timer.m_timestamp.m_Value )
  {
    Ability = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(Ability, &attack_count, "attack_count");
    v13 = CDOTA_Buff::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(v13) )
    {
      v53 = CDOTA_Buff::GetAbility(this);
      DotaRetrieveAbilityValue<int>(v53, &scepter_bonus, "scepter_bonus");
      attack_count += LODWORD(scepter_bonus);
    }
    v14 = CDOTA_Buff::GetAbility(this);
    v15 = (*(v14->_vptr_IHandleEntity + 225))(v14);
    attack_rate = (v15 - gpGlobals->interval_per_tick) / (attack_count - 1);
    v16 = CountdownTimer::Now(&this->m_Timer);
    v17 = attack_rate;
    v18 = v16 + attack_rate;
    if ( v18 != this->m_Timer.m_timestamp.m_Value )
    {
      angles = v18;
      (*(this->m_Timer._vptr_CountdownTimer + 2))(&this->m_Timer, 12, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      v17 = attack_rate;
      this->m_Timer.m_timestamp.m_Value = angles;
    }
    if ( v17 != this->m_Timer.m_duration.m_Value )
    {
      attack_ratea = v17;
      (*(this->m_Timer._vptr_CountdownTimer + 2))(&this->m_Timer, 8, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
      this->m_Timer.m_duration.m_Value = attack_ratea;
    }
    v19 = CDOTA_Buff::GetAbility(this);
    DotaRetrieveAbilityValue<int>(v19, &range, "range");
    v20 = CDOTA_Buff::GetCaster(this);
    v21 = CBaseEntity::GetAbsOrigin(v20);
    *v22.m128i_i32 = range;
    v23 = *&v21->x;
    *&v21 = v21->z;
    LODWORD(scepter_bonus) = 0;
    v63 = 0;
    v64 = 0;
    v24 = COERCE_FLOAT(_mm_cvtsi128_si32(v22));
    *&vOriginalPosition.x = v23;
    LODWORD(vOriginalPosition.z) = v21;
    v65 = 0;
    v25 = CDOTA_Buff::GetCaster(this);
    v26 = CDOTA_Buff::GetCaster(this);
    v27 = CBaseEntity::GetAbsOrigin(v26);
    v28 = CDOTA_Buff::GetCaster(this);
    FindUnitsInRadius(v28->m_iTeamNum.m_Value, v27, v25, v24, &scepter_bonus, 2, 19, 16, 0, 0);
    if ( SLODWORD(scepter_bonus) > 0 )
    {
      v29 = 0;
      v30 = 0;
      do
      {
        while ( 1 )
        {
          v31 = (v63 + v29);
          v32 = *(v63 + v29);
          if ( (v32 + 2) > 1 )
          {
            v33 = *v31;
            v34 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(*v31 >> 9) & 0x3F];
            if ( v34 != 0 )
            {
              v35 = &v34[v33 & 0x1FF];
              if ( v35 != 0 && v32 == v35->m_EHandle.m_Index )
              {
                m_pInstance = v35->m_pInstance;
                if ( v35->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
                {
                  v37 = CDOTA_Buff::GetCaster(this);
                  if ( !CDOTA_BaseNPC::IsInvisibleTo(m_pInstance, v37)
                    && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0 )
                  {
                    vptr_IHandleEntity = m_pInstance[58]._vptr_IHandleEntity;
                    if ( (BYTE1(vptr_IHandleEntity) & 1) == 0
                      && (vptr_IHandleEntity & 4) == 0
                      && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
                      && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
                    {
                      break;
                    }
                  }
                }
              }
            }
          }
          ++v30;
          v29 += 4;
          if ( SLODWORD(scepter_bonus) <= v30 )
            goto LABEL_33;
        }
        v39 = CDOTA_Buff::GetCaster(this);
        CBaseEntity::GetAbsOrigin(v39);
        v40 = CDOTA_Buff::GetCaster(this);
        if ( !FindSpaceBehindOrNearUnit(m_pInstance, v40) )
        {
          v41 = CBaseEntity::GetAbsOrigin(m_pInstance);
          v42 = CDOTA_Buff::GetCaster(this);
          FindClearSpaceForUnit(v42, *v41, 1);
        }
        v43 = CDOTA_Buff::GetCaster(this);
        v44 = CBaseEntity::GetAbsOrigin(v43);
        v45 = CBaseEntity::GetAbsOrigin(m_pInstance);
        v46 = v45->x - v44->x;
        v47 = v45->y - v44->y;
        vToTarget.z = 0.0;
        vToTarget.x = v46;
        vToTarget.y = v47;
        if ( VectorNormalize(&vToTarget) < 0.001 )
        {
          vToTarget.x = 1.0;
          vToTarget.y = 0.0;
          vToTarget.z = 0.0;
        }
        VectorAngles(&vToTarget, &faceTargetAngles);
        v48 = CDOTA_Buff::GetCaster(this);
        CBaseEntity::SetAbsAngles(v48, &faceTargetAngles);
        if ( (BYTE1(m_pInstance[58]._vptr_IHandleEntity) & 8) != 0 )
          CDOTA_BaseNPC::RemoveModifierByName(m_pInstance, "modifier_bane_nightmare");
        DOTA_EmitSound(2, "Hero_Riki.Backstab", m_pInstance);
        v49 = CDOTA_Buff::GetCaster(this);
        AttackRecord = CDOTA_BaseNPC::CreateAttackRecord(v49, m_pInstance, 0, 1, 0, 0, 0);
        v51 = CDOTA_Buff::GetCaster(this);
        CDOTA_BaseNPC::PerformAttack(v51, AttackRecord, m_pInstance, 1, 1, 1, 0);
        ++v30;
        v29 += 4;
      }
      while ( SLODWORD(scepter_bonus) > v30 );
    }
LABEL_33:
    v52 = CDOTA_Buff::GetCaster(this);
    FindClearSpaceForUnit(v52, vOriginalPosition, 1);
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&scepter_bonus);
  }
}


// CDOTA_Modifier_Riki_TricksOfTheTrade_Phase::DeclareFunctions  (line 1034, @0x0000000002a788d0, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Riki_TricksOfTheTrade_Phase::DeclareFunctions(
        CDOTA_Modifier_Riki_TricksOfTheTrade_Phase *const this)
{
  this->m_Functions[9].__pfn = (&stru_10 + 697);
  this->m_Functions[9].__delta = 0;
  this->m_Functions[125].__pfn = (&stru_10 + 705);
  this->m_Functions[125].__delta = 0;
  this->m_Functions[95].__pfn = (&stru_10 + 713);
  this->m_Functions[95].__delta = 0;
}


// CDOTA_Modifier_Riki_TricksOfTheTrade_Phase::OnOrder  (line 1044, @0x0000000002a83500, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, ToDOTABaseNPC, UnitNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::Destroy
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Riki_TricksOfTheTrade_Phase::OnOrder(
        CDOTA_Modifier_Riki_TricksOfTheTrade_Phase *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  unsigned int v9; // ecx

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
          v9 = params->nOrdertype - 11;
          if ( v9 > 0x10 || ((1LL << v9) & 0x141E1) == 0 )
            CDOTA_Buff::Destroy(this, 0, 0, 0);
        }
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Riki_TricksOfTheTrade_Phase::GetModifierInvisibilityLevel  (line 1071, @0x0000000002a78920, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Riki_TricksOfTheTrade_Phase::GetModifierInvisibilityLevel(
        CDOTA_Modifier_Riki_TricksOfTheTrade_Phase *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Riki_TricksOfTheTrade_Phase::GetDisableAutoAttack  (line 1078, @0x0000000002a78940, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Riki_TricksOfTheTrade_Phase::GetDisableAutoAttack(
        CDOTA_Modifier_Riki_TricksOfTheTrade_Phase *const this,
        const CModifierParams *const params)
{
  return 0x3F80000000000001uLL;
}


// CDOTA_Modifier_Riki_TricksOfTheTrade_Phase::CheckState  (line 1085, @0x0000000002a78960, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Riki_TricksOfTheTrade_Phase::CheckState(
        CDOTA_Modifier_Riki_TricksOfTheTrade_Phase *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x82804104uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFF7D7FBEFBLL;
}


