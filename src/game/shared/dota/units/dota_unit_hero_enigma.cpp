// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_enigma.cpp:37
class CDOTA_Unit_Hero_Enigma : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Enigma(CDOTA_Unit_Hero_Enigma &);
	CDOTA_Unit_Hero_Enigma(CDOTA_Unit_Hero_Enigma &);
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual void Precache(const CEntityPrecacheContext *);
	virtual const char * GetDeathEffectName();
	CDOTA_Unit_Hero_Enigma();
	virtual ~CDOTA_Unit_Hero_Enigma();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[6] Precache
	// vtable[502] GetDeathEffectName
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_enigma.cpp:53
class C_CDOTA_Unit_Hero_Enigma_MapInstall {
	C_CDOTA_Unit_Hero_Enigma_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_enigma.cpp:86
class CDOTA_Ability_Enigma_Malefice : public CDOTABaseAbility {
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
	CDOTA_Ability_Enigma_Malefice(CDOTA_Ability_Enigma_Malefice &);
	CDOTA_Ability_Enigma_Malefice(CDOTA_Ability_Enigma_Malefice &);
	CDOTA_Ability_Enigma_Malefice();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetSlowDuration();
	virtual ~CDOTA_Ability_Enigma_Malefice();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[321] GetSlowDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_enigma.cpp:148
class CDOTA_Modifier_Enigma_Malefice : public CDOTA_Buff {
public:

private:

	float tick_rate;  // +0xba8
	float stun_duration;  // +0xbac
	int damage;  // +0xbb0
	float duration;  // +0xbb4
	CDOTA_Modifier_Enigma_Malefice();
	virtual bool IsDebuff();
	virtual void OnCreated(KeyValues *);
	virtual void OnIntervalThink();
	virtual void DeclareFunctions();
	virtual ModifierVariant_t Tooltip(const CModifierParams &);
	virtual const char * GetEffectName();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	virtual ~CDOTA_Modifier_Enigma_Malefice();

	// vtable[12] IsDebuff
	// vtable[57] OnCreated
	// vtable[56] OnIntervalThink
	// vtable[65] DeclareFunctions
	// vtable[89] Tooltip
	// vtable[67] GetEffectName
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_enigma.cpp:237
class CDOTA_Ability_Enigma_DemonicConversion : public CDOTABaseAbility {
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
	CDOTA_Ability_Enigma_DemonicConversion(CDOTA_Ability_Enigma_DemonicConversion &);
	CDOTA_Ability_Enigma_DemonicConversion(CDOTA_Ability_Enigma_DemonicConversion &);
	CDOTA_Ability_Enigma_DemonicConversion();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	void OnSpellStartSpawnCompletion(CDOTA_BaseNPC *, const CEntityKeyValues *);
	virtual void OnSpellStart();
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual ~CDOTA_Ability_Enigma_DemonicConversion();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_enigma.cpp:251
class C_CDOTA_Ability_Enigma_DemonicConversion_MapInstall {
	C_CDOTA_Ability_Enigma_DemonicConversion_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_enigma.cpp:341
class CDOTA_Modifier_Enigma_DemonicConversion : public CDOTA_Modifier_Kill {
public:

private:

	int m_iAttackCount;  // +0xba8
	int split_attack_count;  // +0xbac
	float life_extension;  // +0xbb0
	bool m_bAllowSplit;  // +0xbb4

	int m_nSpawnNum;  // +0xbb8
	CDOTA_Modifier_Enigma_DemonicConversion();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void DeclareFunctions();
	void OnAttackSpawnCompletion(CDOTA_BaseNPC *, const CEntityKeyValues *);
	ModifierVariant_t OnAttack(const CModifierParams &);
	ModifierVariant_t GetUnitLifetimeFraction(const CModifierParams &);
	virtual ~CDOTA_Modifier_Enigma_DemonicConversion();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[65] DeclareFunctions
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_enigma.cpp:445
class CDOTA_Ability_Enigma_MidnightPulse : public CDOTABaseAbility {
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
	CDOTA_Ability_Enigma_MidnightPulse(CDOTA_Ability_Enigma_MidnightPulse &);
	CDOTA_Ability_Enigma_MidnightPulse(CDOTA_Ability_Enigma_MidnightPulse &);
	CDOTA_Ability_Enigma_MidnightPulse();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual float GetAOERadius();
	virtual void OnSpellStart();
	virtual bool IsHiddenWhenStolen();
	virtual Activity GetGestureBasedActivity();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Enigma_MidnightPulse();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[333] GetAOERadius
	// vtable[266] OnSpellStart
	// vtable[306] IsHiddenWhenStolen
	// vtable[211] GetGestureBasedActivity
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_enigma.cpp:463
class C_CDOTA_Ability_Enigma_MidnightPulse_MapInstall {
	C_CDOTA_Ability_Enigma_MidnightPulse_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_enigma.cpp:505
class CDOTA_Modifier_Enigma_MidnightPulseThinker : public CDOTA_Buff {
public:

private:

	float damage_percent;  // +0xba8
	int radius;  // +0xbac
	int n_FXIndex;  // +0xbb0
	CDOTA_Modifier_Enigma_MidnightPulseThinker();
	virtual bool IsHidden();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual ~CDOTA_Modifier_Enigma_MidnightPulseThinker();

	// vtable[11] IsHidden
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_enigma.cpp:579
class CDOTA_Ability_Enigma_BlackHole : public CDOTABaseAbility {
public:

private:

	EHANDLE m_hThinker;  // +0x390
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
	CDOTA_Ability_Enigma_BlackHole(CDOTA_Ability_Enigma_BlackHole &);
	CDOTA_Ability_Enigma_BlackHole(CDOTA_Ability_Enigma_BlackHole &);
	CDOTA_Ability_Enigma_BlackHole();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	void OnSpellStartSpawnCompletion(CDOTA_BaseNPC *, const CEntityKeyValues *);
	virtual void OnSpellStart();
	virtual void OnChannelFinish(bool);
	virtual int GetConceptRecipientType();
	virtual const char * GetAssociatedSecondaryAbilities();
	virtual const char * GetStolenActivityModifier();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	CBaseEntity * GetThinker();
	virtual ~CDOTA_Ability_Enigma_BlackHole();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[266] OnSpellStart
	// vtable[267] OnChannelFinish
	// vtable[299] GetConceptRecipientType
	// vtable[304] GetAssociatedSecondaryAbilities
	// vtable[310] GetStolenActivityModifier
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 920
};

// src/game/shared/dota/units/dota_unit_hero_enigma.cpp:616
class C_CDOTA_Ability_Enigma_BlackHole_MapInstall {
	C_CDOTA_Ability_Enigma_BlackHole_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_enigma.cpp:701
class CDOTA_Modifier_Enigma_BlackHoleThinker : public CDOTA_Buff {
public:

private:

	int pull_radius;  // +0xba8
	int far_radius;  // +0xbac
	int near_radius;  // +0xbb0
	bool m_bFoundFive;  // +0xbb4

	CDOTA_Modifier_Enigma_BlackHoleThinker();
	virtual bool IsHidden();
	virtual void OnIntervalThink();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual int GetNumAvoidLocations();
	virtual Vector GetAvoidLocation(int);
	virtual float AvoidStrength(CDOTA_Bot *);
	virtual float GetAvoidRadius(int);
	virtual bool IsPersistentAvoidance();
	virtual ~CDOTA_Modifier_Enigma_BlackHoleThinker();

	// vtable[11] IsHidden
	// vtable[56] OnIntervalThink
	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[74] GetNumAvoidLocations
	// vtable[75] GetAvoidLocation
	// vtable[77] AvoidStrength
	// vtable[78] GetAvoidRadius
	// vtable[81] IsPersistentAvoidance
	// sizeof = 3008
};

// src/game/shared/dota/units/dota_unit_hero_enigma.cpp:824
class CDOTA_Modifier_Enigma_BlackHole_Pull : public CDOTA_Buff, public CHorizontalMotionController {
public:

private:

	int pull_radius;  // +0xbb4
	int pull_speed;  // +0xbb8
	int far_radius;  // +0xbbc
	int near_radius;  // +0xbc0
	int far_damage;  // +0xbc4
	int near_damage;  // +0xbc8
	float tick_rate;  // +0xbcc
	float pull_rotate_speed;  // +0xbd0
	float animation_rate;  // +0xbd4
	float m_flDamageTick;  // +0xbd8
	EHANDLE m_hThinker;  // +0xbdc
	CDOTA_Modifier_Enigma_BlackHole_Pull();
	virtual bool IsPurgable();
	virtual void DeclareFunctions();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void CheckState(CDOTABuffState &);
	virtual void OnDestroy();
	virtual void OnIntervalThink();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsMotionController();
	virtual const char * GetStatusEffectName();
	virtual int StatusEffectPriority();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	ModifierVariant_t GetOverrideAnimationRate(const CModifierParams &);
	virtual ~CDOTA_Modifier_Enigma_BlackHole_Pull();

	// vtable[14] IsPurgable
	// vtable[65] DeclareFunctions
	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[5] CheckState
	// vtable[60] OnDestroy
	// vtable[56] OnIntervalThink
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] IsHorizontalMotionValidToApply
	// vtable[21] IsMotionController
	// vtable[70] GetStatusEffectName
	// vtable[71] StatusEffectPriority
	// sizeof = 3040
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Enigma::~CDOTA_Unit_Hero_Enigma  (line 37, @0x0000000002ac6670, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Enigma::~CDOTA_Unit_Hero_Enigma(CDOTA_Unit_Hero_Enigma *const this)
{
  this->_vptr_IHandleEntity = &off_43EFA90;
  this->_vptr_INextBotEventResponder = &off_43F0A70;
  this->_vptr_CObstructionObject = &off_43F0DA0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Enigma::~CDOTA_Unit_Hero_Enigma  (line 37, @0x0000000002ac66b0, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Enigma
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Enigma::~CDOTA_Unit_Hero_Enigma(CDOTA_Unit_Hero_Enigma *const this)
{
  this->_vptr_IHandleEntity = &off_43EFA90;
  this->_vptr_INextBotEventResponder = &off_43F0A70;
  this->_vptr_CObstructionObject = &off_43F0DA0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Enigma::Schema_DynamicBinding  (line 39, @0x0000000002ab88b0, libserver.so)
// globals: CDOTA_Unit_Hero_Enigma::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Enigma::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Enigma *const this)
{
  return CDOTA_Unit_Hero_Enigma::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Enigma::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 39, @0x0000000002ab88e0, libserver.so)
// globals: CDOTA_Unit_Hero_Enigma::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Enigma::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Enigma::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Enigma::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Enigma::CEntityInstanceEntityClass::DestructInstance  (line 39, @0x0000000002ab88f0, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Enigma>
void __fastcall CDOTA_Unit_Hero_Enigma::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Enigma::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Enigma::CEntityInstanceEntityClass::FreeInstance  (line 39, @0x0000000002ab8910, libserver.so)
void __fastcall CDOTA_Unit_Hero_Enigma::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Enigma::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Enigma::CEntityInstanceEntityClass::CanAllocate  (line 39, @0x0000000002ab8930, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Enigma::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Enigma::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Enigma::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 39, @0x0000000002ab8940, libserver.so)
// globals: CDOTA_Unit_Hero_Enigma::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Enigma::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Enigma::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Enigma::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Enigma::CEntityInstanceEntityClass::AllocateInstance  (line 39, @0x0000000002abec00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Enigma::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Enigma::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Enigma::CEntityInstanceEntityClass::ConstructInstance  (line 39, @0x0000000002ac48a0, libserver.so)  // inlines: CDOTA_Unit_Hero_Enigma, Construct<CDOTA_Unit_Hero_Enigma>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Enigma::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Enigma::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_43EFA90;
    *(p + 236) = &off_43F0A70;
    *(p + 257) = &off_43F0DA0;
  }
  return p;
}


// CDOTA_Unit_Hero_Enigma::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002acd1d0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Enigma::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Enigma::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Enigma::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 39, @0x0000000002acd530, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Enigma::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Enigma::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Enigma::GetEntityClassInternal  (line 39, @0x0000000002adb130, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "npc_dota_hero_enigma", "CDOTA_Unit_Hero_Enigma"
// globals: `guard variable for'CDOTA_Unit_Hero_Enigma::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EnigmaClass, CDOTA_Unit_Hero_Enigma::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EnigmaClass, __dso_handle, CDOTA_Unit_Hero_Enigma::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Enigma::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EnigmaClassInfo, CDOTA_Unit_Hero_Enigma::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EnigmaClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Enigma::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Enigma::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EnigmaClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Enigma::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EnigmaClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Enigma::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EnigmaClass);
    CDOTA_Unit_Hero_Enigma::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EnigmaClass._vptr_CEntityClass = off_43EFA10;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Enigma::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EnigmaClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Enigma::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Enigma::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EnigmaClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_EnigmaClass != 0 )
    return &CDOTA_Unit_Hero_Enigma::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EnigmaClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Enigma::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EnigmaClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Enigma::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EnigmaClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Enigma::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EnigmaClassInfo,
      "CDOTA_Unit_Hero_Enigma",
      "npc_dota_hero_enigma",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Enigma::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EnigmaClassInfo);
  }
  CDOTA_Unit_Hero_Enigma::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EnigmaClass.m_pClassInfo = &CDOTA_Unit_Hero_Enigma::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EnigmaClassInfo;
  CDOTA_Unit_Hero_Enigma::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EnigmaClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Enigma::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EnigmaClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_EnigmaClass = &CDOTA_Unit_Hero_Enigma::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EnigmaClass;
  CDOTA_Unit_Hero_Enigma::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EnigmaClassInfo.m_pClass = &CDOTA_Unit_Hero_Enigma::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EnigmaClass;
  CDOTA_Unit_Hero_Enigma::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EnigmaClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_EnigmaClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Enigma::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EnigmaClass;
}


// CDOTA_Unit_Hero_Enigma::GetDeathEffectName  (line 44, @0x0000000002ab8950, libserver.so)
const char *__fastcall CDOTA_Unit_Hero_Enigma::GetDeathEffectName(CDOTA_Unit_Hero_Enigma *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Enigma::YouForgotToImplementOrDeclareServerClass  (line 53, @0x0000000002a77830, libserver.so)
int __fastcall CDOTA_Unit_Hero_Enigma::YouForgotToImplementOrDeclareServerClass(CDOTA_Unit_Hero_Enigma *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Enigma::GetServerClass  (line 53, @0x0000000002a8a430, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Enigma::GetServerClass(CDOTA_Unit_Hero_Enigma *const this)
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


// CDOTA_Unit_Hero_Enigma::Precache  (line 68, @0x0000000002a7b610, libserver.so)
// calls: CDOTA_BaseNPC_Hero::Precache, DOTA_PrecacheUnitByNameSync
// globals: CAnnouncerSharedThinker::sm_Factory, pszEidolonNames
void __fastcall CDOTA_Unit_Hero_Enigma::Precache(
        CDOTA_Unit_Hero_Enigma *const this,
        const CEntityPrecacheContext *pContext)
{
  IGameSystemFactory **v3; // rbx
  IGameSystemFactory *v4; // rdi

  v3 = pszEidolonNames;
  CDOTA_BaseNPC_Hero::Precache(this, pContext);
  do
  {
    v4 = *v3++;
    DOTA_PrecacheUnitByNameSync(v4, pContext->m_pManifest, -1);
  }
  while ( v3 != &CAnnouncerSharedThinker::sm_Factory );
}


// CDOTA_Ability_Enigma_Malefice::~CDOTA_Ability_Enigma_Malefice  (line 86, @0x0000000002ac53c0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Enigma_Malefice::~CDOTA_Ability_Enigma_Malefice(
        CDOTA_Ability_Enigma_Malefice *const this)
{
  this->_vptr_IHandleEntity = &off_43F0E70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Enigma_Malefice::~CDOTA_Ability_Enigma_Malefice  (line 86, @0x0000000002ac53e0, libserver.so)  // inlines: ~CDOTA_Ability_Enigma_Malefice
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Enigma_Malefice::~CDOTA_Ability_Enigma_Malefice(
        CDOTA_Ability_Enigma_Malefice *const this)
{
  this->_vptr_IHandleEntity = &off_43F0E70;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Enigma_Malefice::Schema_DynamicBinding  (line 88, @0x0000000002ab8960, libserver.so)
// globals: CDOTA_Ability_Enigma_Malefice::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Enigma_Malefice::Schema_DynamicBinding(
        const CDOTA_Ability_Enigma_Malefice *const this)
{
  return CDOTA_Ability_Enigma_Malefice::s_pSchemaBinding;
}


// CDOTA_Ability_Enigma_Malefice::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 88, @0x0000000002ab8970, libserver.so)
// globals: CDOTA_Ability_Enigma_Malefice::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Enigma_Malefice::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Enigma_Malefice::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Enigma_Malefice::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Enigma_Malefice::CEntityInstanceEntityClass::DestructInstance  (line 88, @0x0000000002ab8980, libserver.so)  // inlines: Destruct<CDOTA_Ability_Enigma_Malefice>
void __fastcall CDOTA_Ability_Enigma_Malefice::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Enigma_Malefice::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Enigma_Malefice::CEntityInstanceEntityClass::FreeInstance  (line 88, @0x0000000002ab89a0, libserver.so)
void __fastcall CDOTA_Ability_Enigma_Malefice::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Enigma_Malefice::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Enigma_Malefice::CEntityInstanceEntityClass::CanAllocate  (line 88, @0x0000000002ab89c0, libserver.so)
bool __fastcall CDOTA_Ability_Enigma_Malefice::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Enigma_Malefice::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Enigma_Malefice::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 88, @0x0000000002ab89d0, libserver.so)
// globals: CDOTA_Ability_Enigma_Malefice::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Enigma_Malefice::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Enigma_Malefice::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Enigma_Malefice::s_pSchemaBinding;
}


// CDOTA_Ability_Enigma_Malefice::CEntityInstanceEntityClass::AllocateInstance  (line 88, @0x0000000002abec40, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Enigma_Malefice::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Enigma_Malefice::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Enigma_Malefice::CEntityInstanceEntityClass::ConstructInstance  (line 88, @0x0000000002ac2960, libserver.so)  // inlines: CDOTA_Ability_Enigma_Malefice, Construct<CDOTA_Ability_Enigma_Malefice>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Enigma_Malefice::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Enigma_Malefice::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43F0E70;
  }
  return p;
}


// CDOTA_Ability_Enigma_Malefice::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 88, @0x0000000002acbd90, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Enigma_Malefice::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Enigma_Malefice::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Enigma_Malefice::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 88, @0x0000000002acbdb0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Enigma_Malefice::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Enigma_Malefice::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Enigma_Malefice::GetEntityClassInternal  (line 88, @0x0000000002adb280, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "CDOTA_Ability_Enigma_Malefice"
// globals: `guard variable for'CDOTA_Ability_Enigma_Malefice::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_MaleficeClass, CDOTA_Ability_Enigma_Malefice::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_MaleficeClass, __dso_handle, CDOTA_Ability_Enigma_Malefice::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Enigma_Malefice::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_MaleficeClassInfo, CDOTA_Ability_Enigma_Malefice::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_MaleficeClassInfo
CEntityClass *__cdecl CDOTA_Ability_Enigma_Malefice::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Enigma_Malefice::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_MaleficeClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Enigma_Malefice::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_MaleficeClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Enigma_Malefice::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_MaleficeClass);
    CDOTA_Ability_Enigma_Malefice::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_MaleficeClass._vptr_CEntityClass = off_43F0DF0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Enigma_Malefice::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_MaleficeClass);
    __cxa_atexit(
      CDOTA_Ability_Enigma_Malefice::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Enigma_Malefice::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_MaleficeClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Enigma_MaleficeClass != 0 )
    return &CDOTA_Ability_Enigma_Malefice::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_MaleficeClass;
  if ( `guard variable for'CDOTA_Ability_Enigma_Malefice::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_MaleficeClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Enigma_Malefice::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_MaleficeClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Enigma_Malefice::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_MaleficeClassInfo,
      "CDOTA_Ability_Enigma_Malefice",
      "enigma_malefice",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Enigma_Malefice::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_MaleficeClassInfo);
  }
  CDOTA_Ability_Enigma_Malefice::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_MaleficeClass.m_pClassInfo = &CDOTA_Ability_Enigma_Malefice::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_MaleficeClassInfo;
  CDOTA_Ability_Enigma_Malefice::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_MaleficeClass.m_pBaseClassInfo = CDOTA_Ability_Enigma_Malefice::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_MaleficeClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Enigma_MaleficeClass = &CDOTA_Ability_Enigma_Malefice::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_MaleficeClass;
  CDOTA_Ability_Enigma_Malefice::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_MaleficeClassInfo.m_pClass = &CDOTA_Ability_Enigma_Malefice::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_MaleficeClass;
  CDOTA_Ability_Enigma_Malefice::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_MaleficeClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Enigma_MaleficeClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Enigma_Malefice::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_MaleficeClass;
}


// CDOTA_Ability_Enigma_Malefice::OnSpellStart  (line 101, @0x0000000002a9a2f0, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, InState, IsInvulnerable, ToDOTABaseNPC
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::TriggerSpellAbsorb, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_enigma_malefice", "Hero_Enigma.Malefice"
void __fastcall CDOTA_Ability_Enigma_Malefice::OnSpellStart(CDOTA_Ability_Enigma_Malefice *const this)
{
  CBaseEntity *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  __int64 v4; // rax
  float v5; // xmm1_4
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-28h]

  v8 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC && LOBYTE(CursorTarget[4].m_pfnMoveDone.__pfn) == 0 )
  {
    v4 = *&CursorTarget[3].m_vecVelocity.m_Value.x;
    if ( (v4 & 0x100) == 0 && (v4 & 0x200) == 0 && !CDOTA_BaseNPC::TriggerSpellAbsorb(v3, this, 1) )
    {
      KeyValues::KeyValues(&kv, "modifier_enigma_malefice");
      KeyValues::SetFloat(&kv, "duration", v5);
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v3, Caster, this, "modifier_enigma_malefice", &kv, 0);
      CDOTA_BaseNPC::UnitEmitSound(v3, "Hero_Enigma.Malefice", 0.0, 0, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Ability_Enigma_Malefice::GetAbilityDamageToTargetOverInterval  (line 121, @0x0000000002a9b410, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_BaseNPC::GetArmorReductionForDamageType
// strings: "tick_rate"
__int64 __fastcall CDOTA_Ability_Enigma_Malefice::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Enigma_Malefice *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  float fTicks; // [rsp+0h] [rbp-1Ch]
  float fTicksa; // [rsp+0h] [rbp-1Ch]
  float fTicksb; // [rsp+0h] [rbp-1Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    fTicks = fminf(fInterval, CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0));
    fTicksa = fTicks / CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "tick_rate", -1, 0);
    fTicksb = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0) * fTicksa;
    return ((1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)) * fTicksb);
  }
  return result;
}


// CDOTA_Ability_Enigma_Malefice::GetSlowDuration  (line 138, @0x0000000002a9b4d0, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "tick_rate"
float __fastcall CDOTA_Ability_Enigma_Malefice::GetSlowDuration(CDOTA_Ability_Enigma_Malefice *const this)
{
  float fTicks; // [rsp+Ch] [rbp-14h]
  float fTicksa; // [rsp+Ch] [rbp-14h]

  fTicks = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  fTicksa = fTicks / CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "tick_rate", -1, 0);
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 0) * fTicksa;
}


// CDOTA_Modifier_Enigma_Malefice::~CDOTA_Modifier_Enigma_Malefice  (line 148, @0x0000000002ac1bb0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Enigma_Malefice::~CDOTA_Modifier_Enigma_Malefice(
        CDOTA_Modifier_Enigma_Malefice *const this)
{
  this->_vptr_CDOTA_Buff = &off_43F1930;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Enigma_Malefice::~CDOTA_Modifier_Enigma_Malefice  (line 148, @0x0000000002ac1bd0, libserver.so)  // inlines: ~CDOTA_Modifier_Enigma_Malefice
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Enigma_Malefice::~CDOTA_Modifier_Enigma_Malefice(
        CDOTA_Modifier_Enigma_Malefice *const this)
{
  this->_vptr_CDOTA_Buff = &off_43F1930;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Enigma_Malefice::IsDebuff  (line 153, @0x0000000002ab89e0, libserver.so)
bool __fastcall CDOTA_Modifier_Enigma_Malefice::IsDebuff(CDOTA_Modifier_Enigma_Malefice *const this)
{
  return 1;
}


// CDOTA_Modifier_Enigma_Malefice::GetEffectName  (line 161, @0x0000000002ab89f0, libserver.so)
// strings: "particles/units/heroes/hero_enigma/enigma_malefice.vpcf"
const char *__fastcall CDOTA_Modifier_Enigma_Malefice::GetEffectName(CDOTA_Modifier_Enigma_Malefice *const this)
{
  return "particles/units/heroes/hero_enigma/enigma_malefice.vpcf";
}


// CDOTA_Modifier_Enigma_Malefice::GetStatusEffectName  (line 162, @0x0000000002ab8a00, libserver.so)
// strings: "particles/status_fx/status_effect_enigma_malefice.vpcf"
const char *__fastcall CDOTA_Modifier_Enigma_Malefice::GetStatusEffectName(CDOTA_Modifier_Enigma_Malefice *const this)
{
  return "particles/status_fx/status_effect_enigma_malefice.vpcf";
}


// CDOTA_Modifier_Enigma_Malefice::StatusEffectPriority  (line 163, @0x0000000002ab8a10, libserver.so)
int __fastcall CDOTA_Modifier_Enigma_Malefice::StatusEffectPriority(CDOTA_Modifier_Enigma_Malefice *const this)
{
  return 15;
}


// CDOTA_Modifier_Enigma_Malefice::OnCreated  (line 178, @0x0000000002aac140, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
// strings: "tick_rate"
void __fastcall CDOTA_Modifier_Enigma_Malefice::OnCreated(CDOTA_Modifier_Enigma_Malefice *const this, KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->tick_rate = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "tick_rate", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_7:
    this->stun_duration = 0.0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
LABEL_8:
    this->damage = 0;
    goto LABEL_5;
  }
  this->tick_rate = 0.0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_7;
LABEL_3:
  this->stun_duration = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v4, "stun_duration", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "damage", -1, 0);
LABEL_5:
  (*(this->_vptr_CDOTA_Buff + 56))(this);
  CDOTA_Buff::StartIntervalThink(this, this->tick_rate, v6);
}


// CDOTA_Modifier_Enigma_Malefice::OnIntervalThink  (line 193, @0x0000000002a81c10, libserver.so)  // inlines: InState, IsInvulnerable
// calls: CDOTA_Buff::GetParent, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, ApplyDamage, SendOverheadEventMessage, KeyValues::KeyValues, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, CDOTA_BaseNPC::UnitEmitSound, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_stunned", "Hero_Enigma.MaleficeTick"
void __fastcall CDOTA_Modifier_Enigma_Malefice::OnIntervalThink(CDOTA_Modifier_Enigma_Malefice *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTABaseAbility *Ability; // r13
  CDOTA_BaseNPC *v4; // r12
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v6; // rax
  float v7; // xmm1_4
  CDOTABaseAbility *v8; // r14
  CDOTA_BaseNPC *v9; // r13
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  float flDamage; // [rsp+Ch] [rbp-44h]
  KeyValues kv; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-28h]

  v14 = __readfsqword(0x28u);
  if ( (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x200) == 0 )
  {
    Parent = CDOTA_Buff::GetParent(this);
    if ( !Parent->m_bIsWaitingToSpawn.m_Value && (Parent->m_nUnitState64.m_Value & 0x100) == 0 )
    {
      flDamage = this->damage;
      Ability = CDOTA_Buff::GetAbility(this);
      v4 = CDOTA_Buff::GetParent(this);
      Caster = CDOTA_Buff::GetCaster(this);
      ApplyDamage(Caster, v4, Ability, flDamage, 2, 0);
      LODWORD(v4) = this->damage;
      v6 = CDOTA_Buff::GetParent(this);
      SendOverheadEventMessage(0, DOTA_OVERHEAD_ALERT::OVERHEAD_ALERT_BONUS_SPELL_DAMAGE, v6, v4, 0);
      KeyValues::KeyValues(&kv, "modifier_stunned");
      KeyValues::SetFloat(&kv, "duration", v7);
      v8 = CDOTA_Buff::GetAbility(this);
      v9 = CDOTA_Buff::GetCaster(this);
      v10 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::AddNewModifier(v10, v9, v8, "modifier_stunned", &kv, 0);
      v11 = CDOTA_Buff::GetParent(this);
      CDOTA_BaseNPC::UnitEmitSound(v11, "Hero_Enigma.MaleficeTick", 0.0, 0, 0);
      KeyValues::~KeyValues(&kv);
    }
  }
}


// CDOTA_Modifier_Enigma_Malefice::DeclareFunctions  (line 212, @0x0000000002a77840, libserver.so)  // inlines: SetFunction
void __fastcall CDOTA_Modifier_Enigma_Malefice::DeclareFunctions(CDOTA_Modifier_Enigma_Malefice *const this)
{
  this->m_Functions[151].__pfn = (&stru_10 + 697);
  this->m_Functions[151].__delta = 0;
}


// CDOTA_Modifier_Enigma_Malefice::Tooltip  (line 219, @0x0000000002a7cd30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Enigma_Malefice::Tooltip(
        CDOTA_Modifier_Enigma_Malefice *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  int nTooltipParam; // eax
  ModifierVariant_t result; // 0:rax.16

  nTooltipParam = params->nTooltipParam;
  if ( nTooltipParam == 1 )
  {
    result.m_szVal = 0;
    *&result.m_eType = (LODWORD(this->stun_duration) << 32) | 1;
  }
  else if ( nTooltipParam == 2 )
  {
    result.m_szVal = 0;
    *&result.m_eType = (LODWORD(this->tick_rate) << 32) | 1;
  }
  else if ( nTooltipParam != 0 )
  {
    return 1uLL;
  }
  else
  {
    *v2.m128i_i32 = this->damage;
    result.m_szVal = 0;
    *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  }
  return result;
}


// CDOTA_Ability_Enigma_DemonicConversion::~CDOTA_Ability_Enigma_DemonicConversion  (line 237, @0x0000000002ac5410, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Enigma_DemonicConversion::~CDOTA_Ability_Enigma_DemonicConversion(
        CDOTA_Ability_Enigma_DemonicConversion *const this)
{
  this->_vptr_IHandleEntity = &off_43F1C90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Enigma_DemonicConversion::~CDOTA_Ability_Enigma_DemonicConversion  (line 237, @0x0000000002ac5430, libserver.so)  // inlines: ~CDOTA_Ability_Enigma_DemonicConversion
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Enigma_DemonicConversion::~CDOTA_Ability_Enigma_DemonicConversion(
        CDOTA_Ability_Enigma_DemonicConversion *const this)
{
  this->_vptr_IHandleEntity = &off_43F1C90;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Enigma_DemonicConversion::Schema_DynamicBinding  (line 239, @0x0000000002ab8a20, libserver.so)
// globals: CDOTA_Ability_Enigma_DemonicConversion::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Enigma_DemonicConversion::Schema_DynamicBinding(
        const CDOTA_Ability_Enigma_DemonicConversion *const this)
{
  return CDOTA_Ability_Enigma_DemonicConversion::s_pSchemaBinding;
}


// CDOTA_Ability_Enigma_DemonicConversion::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 239, @0x0000000002ab8a30, libserver.so)
// globals: CDOTA_Ability_Enigma_DemonicConversion::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Enigma_DemonicConversion::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Enigma_DemonicConversion::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Enigma_DemonicConversion::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Enigma_DemonicConversion::CEntityInstanceEntityClass::DestructInstance  (line 239, @0x0000000002ab8a40, libserver.so)  // inlines: Destruct<CDOTA_Ability_Enigma_DemonicConversion>
void __fastcall CDOTA_Ability_Enigma_DemonicConversion::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Enigma_DemonicConversion::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Enigma_DemonicConversion::CEntityInstanceEntityClass::FreeInstance  (line 239, @0x0000000002ab8a60, libserver.so)
void __fastcall CDOTA_Ability_Enigma_DemonicConversion::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Enigma_DemonicConversion::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Enigma_DemonicConversion::CEntityInstanceEntityClass::CanAllocate  (line 239, @0x0000000002ab8a80, libserver.so)
bool __fastcall CDOTA_Ability_Enigma_DemonicConversion::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Enigma_DemonicConversion::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Enigma_DemonicConversion::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 239, @0x0000000002ab8a90, libserver.so)
// globals: CDOTA_Ability_Enigma_DemonicConversion::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Enigma_DemonicConversion::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Enigma_DemonicConversion::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Enigma_DemonicConversion::s_pSchemaBinding;
}


// CDOTA_Ability_Enigma_DemonicConversion::CEntityInstanceEntityClass::AllocateInstance  (line 239, @0x0000000002abec80, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Enigma_DemonicConversion::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Enigma_DemonicConversion::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Enigma_DemonicConversion::CEntityInstanceEntityClass::ConstructInstance  (line 239, @0x0000000002ac2990, libserver.so)  // inlines: CDOTA_Ability_Enigma_DemonicConversion, Construct<CDOTA_Ability_Enigma_DemonicConversion>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Enigma_DemonicConversion::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Enigma_DemonicConversion::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43F1C90;
  }
  return p;
}


// CDOTA_Ability_Enigma_DemonicConversion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 239, @0x0000000002acbde0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Enigma_DemonicConversion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Enigma_DemonicConversion::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Enigma_DemonicConversion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 239, @0x0000000002acbe00, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Enigma_DemonicConversion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Enigma_DemonicConversion::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Enigma_DemonicConversion::GetEntityClassInternal  (line 239, @0x0000000002adb3d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "enigma_demonic_conversion", "CDOTA_Ability_Enigma_DemonicConversion"
// globals: `guard variable for'CDOTA_Ability_Enigma_DemonicConversion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_DemonicConversionClass, CDOTA_Ability_Enigma_DemonicConversion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_DemonicConversionClass, __dso_handle, CDOTA_Ability_Enigma_DemonicConversion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Enigma_DemonicConversion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_DemonicConversionClassInfo, CDOTA_Ability_Enigma_DemonicConversion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_DemonicConversionClassInfo
CEntityClass *__cdecl CDOTA_Ability_Enigma_DemonicConversion::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Enigma_DemonicConversion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_DemonicConversionClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Enigma_DemonicConversion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_DemonicConversionClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Enigma_DemonicConversion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_DemonicConversionClass);
    CDOTA_Ability_Enigma_DemonicConversion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_DemonicConversionClass._vptr_CEntityClass = off_43F1C10;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Enigma_DemonicConversion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_DemonicConversionClass);
    __cxa_atexit(
      CDOTA_Ability_Enigma_DemonicConversion::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Enigma_DemonicConversion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_DemonicConversionClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Enigma_DemonicConversionClass != 0 )
    return &CDOTA_Ability_Enigma_DemonicConversion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_DemonicConversionClass;
  if ( `guard variable for'CDOTA_Ability_Enigma_DemonicConversion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_DemonicConversionClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Enigma_DemonicConversion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_DemonicConversionClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Enigma_DemonicConversion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_DemonicConversionClassInfo,
      "CDOTA_Ability_Enigma_DemonicConversion",
      "enigma_demonic_conversion",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Enigma_DemonicConversion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_DemonicConversionClassInfo);
  }
  CDOTA_Ability_Enigma_DemonicConversion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_DemonicConversionClass.m_pClassInfo = &CDOTA_Ability_Enigma_DemonicConversion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_DemonicConversionClassInfo;
  CDOTA_Ability_Enigma_DemonicConversion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_DemonicConversionClass.m_pBaseClassInfo = CDOTA_Ability_Enigma_DemonicConversion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_DemonicConversionClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Enigma_DemonicConversionClass = &CDOTA_Ability_Enigma_DemonicConversion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_DemonicConversionClass;
  CDOTA_Ability_Enigma_DemonicConversion::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_DemonicConversionClassInfo.m_pClass = &CDOTA_Ability_Enigma_DemonicConversion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_DemonicConversionClass;
  CDOTA_Ability_Enigma_DemonicConversion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_DemonicConversionClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Enigma_DemonicConversionClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Enigma_DemonicConversion::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_DemonicConversionClass;
}


// CDOTA_Ability_Enigma_DemonicConversion::YouForgotToImplementOrDeclareServerClass  (line 251, @0x0000000002a77860, libserver.so)
int __fastcall CDOTA_Ability_Enigma_DemonicConversion::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Enigma_DemonicConversion *const this)
{
  return 0;
}


// CDOTA_Ability_Enigma_DemonicConversion::GetServerClass  (line 251, @0x0000000002a8a630, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Enigma_DemonicConversion::GetServerClass(
        CDOTA_Ability_Enigma_DemonicConversion *const this)
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


// CDOTA_Ability_Enigma_DemonicConversion::OnSpellStart  (line 260, @0x0000000002aa0a40, libserver.so)  // inlines: GetLevelSpecialValueFor<int>, GetTeamNumber, NetworkStateChanged, Set, SetBool, SetUnitLabelIndex, SpeakConcept, ToDOTABaseNPC, operator=<int>
// calls: CDOTABaseAbility::GetCursorTarget, CDOTA_BaseNPC::UnitEmitSound, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::Kill, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetEffectiveLevel, DOTA_Character_ScriptSpawn_Synchronous, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl (27 total)
// strings: "Hero_Enigma.Demonic_Conversion", "spawn_count", "special_bonus_unique_enigma", "particles/units/heroes/hero_enigma/enigma_demonic_conversion.vpcf", "modifier_demonic_conversion", "allowsplit" (7 total)
// globals: pszEidolonNames
void __fastcall CDOTA_Ability_Enigma_DemonicConversion::OnSpellStart(
        CDOTA_Ability_Enigma_DemonicConversion *const this)
{
  CDOTA_BaseNPC *CursorTarget; // rax
  CDOTA_BaseNPC *v3; // rbx
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v5; // rax
  CDOTABaseAbility *AbilityByName; // rax
  int v7; // r15d
  int v8; // r14d
  int m_Value; // ebx
  int EffectiveLevel; // eax
  CDOTA_BaseNPC *v11; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v13; // rax
  CDOTA_ParticleManager *v14; // rax
  CDOTA_BaseNPC *v15; // rax
  int v16; // eax
  float v17; // xmm1_4
  CDOTA_BaseNPC *v18; // rax
  float v19; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  int spawn_count; // [rsp+14h] [rbp-ACh]
  CDOTA_BaseNPC *nFXIndex; // [rsp+18h] [rbp-A8h]
  CDOTA_BaseNPC *nFXIndexa; // [rsp+18h] [rbp-A8h]
  Vector vTarget; // [rsp+20h] [rbp-A0h]
  CResponseCriteriaSet criteria; // [rsp+30h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+88h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    CDOTA_BaseNPC::UnitEmitSound(CursorTarget, "Hero_Enigma.Demonic_Conversion", 0.0, 0, 0);
    vTarget = *CBaseEntity::GetAbsOrigin(v3);
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::Kill(v3, this, Caster, 0.0, 0);
    spawn_count = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "spawn_count", -1, 0);
    v5 = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v5, "special_bonus_unique_enigma", 0);
    if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
      spawn_count += CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
    if ( spawn_count > 0 )
    {
      v7 = 0;
      v8 = 0;
      do
      {
        nFXIndex = CDOTABaseAbility::GetCaster(this);
        m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
        EffectiveLevel = CDOTABaseAbility::GetEffectiveLevel(this);
        v11 = DOTA_Character_ScriptSpawn_Synchronous(pszEidolonNames[EffectiveLevel], m_Value, nFXIndex, 0, 0, vTarget);
        if ( v11 != 0 )
        {
          ++v8;
          nFXIndexa = CDOTABaseAbility::GetCaster(this);
          ParticleManager = GetParticleManager();
          LODWORD(nFXIndexa) = CDOTA_ParticleManager::CreateParticle(
                                 ParticleManager,
                                 "particles/units/heroes/hero_enigma/enigma_demonic_conversion.vpcf",
                                 1,
                                 v11,
                                 0,
                                 nFXIndexa);
          v13 = GetParticleManager();
          CDOTA_ParticleManager::SetParticleControl(v13, nFXIndexa, 1, *&vTarget.x, vTarget.z);
          v14 = GetParticleManager();
          CDOTA_ParticleManager::ReleaseParticleIndex(v14, nFXIndexa);
          v15 = CDOTABaseAbility::GetCaster(this);
          v16 = (*(v15->_vptr_IHandleEntity + 414))(v15);
          CDOTA_BaseNPC::SetControllableByPlayer(v11, v16, 0);
          if ( v8 != v11->m_nUnitLabelIndex.m_Value )
          {
            (*(v11->_vptr_IHandleEntity + 22))(v11, 3417, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
            v11->m_nUnitLabelIndex.m_Value = v8;
          }
          FindClearSpaceForUnit(v11, vTarget, 1);
          KeyValues::KeyValues(&kv, "modifier_demonic_conversion");
          CDOTABaseAbility::GetDuration(this);
          KeyValues::SetFloat(&kv, "duration", v17);
          KeyValues::SetInt(&kv, "allowsplit", 1);
          KeyValues::SetInt(&kv, "spawncount", v8);
          v18 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(v11, v18, this, "modifier_demonic_conversion", &kv, 0);
          KeyValues::~KeyValues(&kv);
        }
        ++v7;
      }
      while ( v7 != spawn_count );
    }
    CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
    CResponseCriteriaSet::AppendCriteria(&criteria, "eidolons", 1.0, v19);
    m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
    if ( m_pSpeech != 0 )
      CDOTA_Speech::SpeakConcept(m_pSpeech, 18, &criteria, 0, 0, 0, 0, 0);
    CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  }
}


// CDOTA_Ability_Enigma_DemonicConversion::CastFilterResult  (line 315, @0x0000000002a7b7e0, libserver.so)
// calls: CDOTABaseAbility::GetCaster, UnitFilter
int __fastcall CDOTA_Ability_Enigma_DemonicConversion::CastFilterResult(
        CDOTA_Ability_Enigma_DemonicConversion *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  int result; // eax

  Caster = CDOTABaseAbility::GetCaster(this);
  result = UnitFilter(pTarget, 3, 2, 512, Caster->m_iTeamNum.m_Value);
  if ( result == 0 && pTarget->m_iCurrentLevel.m_Value >= 5 )
    return 23;
  return result;
}


// CDOTA_Ability_Enigma_DemonicConversion::GetCustomCastError  (line 329, @0x0000000002a77870, libserver.so)
// strings: "#dota_hud_error_cant_cast_creep_level"
const char *__fastcall CDOTA_Ability_Enigma_DemonicConversion::GetCustomCastError(
        CDOTA_Ability_Enigma_DemonicConversion *const this,
        CDOTA_BaseNPC *pTarget)
{
  const char *result; // rax

  result = "#dota_hud_error_cant_cast_creep_level";
  if ( pTarget->m_iCurrentLevel.m_Value < 5 )
    return "";
  return result;
}


// CDOTA_Modifier_Enigma_DemonicConversion::~CDOTA_Modifier_Enigma_DemonicConversion  (line 341, @0x0000000002ac1b60, libserver.so)  // inlines: ~CDOTA_Modifier_Kill
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Enigma_DemonicConversion::~CDOTA_Modifier_Enigma_DemonicConversion(
        CDOTA_Modifier_Enigma_DemonicConversion *const this)
{
  this->_vptr_CDOTA_Buff = &off_411C0F0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Enigma_DemonicConversion::~CDOTA_Modifier_Enigma_DemonicConversion  (line 341, @0x0000000002ac1b80, libserver.so)  // inlines: ~CDOTA_Modifier_Enigma_DemonicConversion, ~CDOTA_Modifier_Kill
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Enigma_DemonicConversion::~CDOTA_Modifier_Enigma_DemonicConversion(
        CDOTA_Modifier_Enigma_DemonicConversion *const this)
{
  this->_vptr_CDOTA_Buff = &off_411C0F0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Enigma_DemonicConversion::IsHidden  (line 346, @0x0000000002ab8aa0, libserver.so)
bool __fastcall CDOTA_Modifier_Enigma_DemonicConversion::IsHidden(CDOTA_Modifier_Enigma_DemonicConversion *const this)
{
  return 0;
}


// CDOTA_Modifier_Enigma_DemonicConversion::OnCreated  (line 369, @0x0000000002aab6c0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetBool, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: KeyValues::GetInt, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "allowsplit", "split_attack_count", "life_extension"
void __fastcall CDOTA_Modifier_Enigma_DemonicConversion::OnCreated(
        CDOTA_Modifier_Enigma_DemonicConversion *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v5; // rax

  this->m_bAllowSplit = KeyValues::GetInt(pKV, "allowsplit", 0) != 0;
  this->m_nSpawnNum = KeyValues::GetInt(pKV, "spawncount", 0);
  this->m_iAttackCount = 0;
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->split_attack_count = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "split_attack_count", -1, 0);
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
    {
LABEL_3:
      this->life_extension = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "life_extension", -1, 0);
      return;
    }
  }
  else
  {
    this->split_attack_count = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_3;
  }
  this->life_extension = 0.0;
}


// CDOTA_Modifier_Enigma_DemonicConversion::DeclareFunctions  (line 382, @0x0000000002a77890, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Enigma_DemonicConversion::OnAttack(CModifierParams const&)
void __fastcall CDOTA_Modifier_Enigma_DemonicConversion::DeclareFunctions(
        CDOTA_Modifier_Enigma_DemonicConversion *const this)
{
  this->m_Functions[120].__pfn = CDOTA_Modifier_Enigma_DemonicConversion::OnAttack;
  this->m_Functions[120].__delta = 0;
  this->m_Functions[157].__delta = 0;
  this->m_Functions[157].__pfn = CDOTA_Modifier_Kill::GetUnitLifetimeFraction;
}


// CDOTA_Modifier_Enigma_DemonicConversion::OnAttack  (line 390, @0x0000000002a86640, libserver.so)  // inlines: AttackerNPC, CEntityHandle, DOTAGameRules, FindModifierByName, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetHandleEntity, GetInstance, GetOwnerEntity, GetSerialNumber, GetTeamNumber, GetUnitName, IndexToIdentity, Init, IsUnitMyParent, IsValid, LookupEntity, NetworkStateChanged, Set, SetBool, SetUnitLabelIndex, String, TargetNPC, ToCStr, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator=<int>
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, DOTA_Character_ScriptSpawn_Synchronous, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_BaseNPC::SetControllableByPlayer, FindClearSpaceForUnit, KeyValues::KeyValues, KeyValues::SetFloat, KeyValues::SetInt (21 total)
// strings: "particles/units/heroes/hero_enigma/enigma_demonic_conversion.vpcf", "modifier_demonic_conversion", "allowsplit"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Enigma_DemonicConversion::OnAttack(
        CDOTA_Modifier_Enigma_DemonicConversion *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v5; // rdx
  CEntityIdentity *v6; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  uint32 v9; // eax
  CEntityIdentity *v10; // rdx
  CEntityIdentity *v11; // rdx
  CEntityInstance *v12; // r12
  CDOTA_BaseNPC *Parent; // rax
  unsigned __int16 v14; // dx
  int v15; // esi
  CBaseEntity *v16; // r14
  int v17; // eax
  CEntityIdentity *v18; // rdx
  CEntityIdentity *v19; // rdx
  int m_Value; // r15d
  CDOTA_BaseNPC *v21; // rax
  Vector *AbsOrigin; // r13
  CDOTA_BaseNPC *v23; // rax
  const char *m_pAsString; // rdi
  CDOTA_BaseNPC *v25; // r13
  CDOTA_BaseNPC *v26; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v28; // rax
  const Vector *v29; // r15
  CDOTA_ParticleManager *v30; // rax
  CDOTA_ParticleManager *v31; // rax
  CDOTA_BaseNPC *v32; // rax
  int v33; // eax
  unsigned __int8 v34; // r14
  CDOTA_BaseNPC *v35; // rax
  float v36; // xmm1_4
  CDOTA_BaseNPC *v37; // rax
  CDOTA_BaseNPC *v38; // r13
  CModifieractoryDictionary *v39; // rax
  IModifierFactory *Factory; // rax
  CDOTA_Buff *ModifierByName; // r13
  void (__fastcall *v42)(CDOTA_Buff *, __int64, float); // r14
  float v43; // xmm0_4
  float v44; // xmm1_4
  CDOTA_BaseNPC *v45; // rax
  int v46; // r13d
  CDOTA_BaseNPC *v47; // rax
  CDOTABaseAbility *pAbility; // [rsp+8h] [rbp-68h]
  KeyValues kv; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v50; // [rsp+38h] [rbp-38h]
  Vector v52; // 0:xmm0_8.8,8:xmm1_4.4

  v50 = __readfsqword(0x28u);
  if ( this->m_bAllowSplit )
  {
    m_Index = params->hattacker.m_Index;
    if ( m_Index + 2 > 1 )
    {
      v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
      if ( v5 != 0 )
      {
        v6 = &v5[params->hattacker.m_Index & 0x1FF];
        if ( v6 != 0 && m_Index == v6->m_EHandle.m_Index )
        {
          m_pInstance = v6->m_pInstance;
          if ( v6->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == m_pInstance )
          {
            if ( this->m_iAttackCount == this->split_attack_count )
            {
              this->m_bAllowSplit = 0;
              Parent = CDOTA_Buff::GetParent(this);
              if ( Parent->m_hOwnerEntity.m_Value.m_Index == -1 )
              {
                v14 = 0x7FFF;
                v15 = 0x7FFF;
              }
              else
              {
                v14 = Parent->m_hOwnerEntity.m_Value.m_Index & 0x7FFF;
                v15 = v14;
              }
              v16 = 0;
              v17 = (Parent->m_hOwnerEntity.m_Value.m_Index >> 15 << 15) | v14 & 0x7FFF;
              if ( (v17 + 2) > 1 )
              {
                v18 = g_pEntitySystem->m_EntityList.m_pIdentityChunks[v15 >> 9];
                if ( v18 != 0 )
                {
                  v19 = &v18[v15 & 0x1FF];
                  if ( v19 != 0 && v17 == v19->m_EHandle.m_Index )
                    v16 = v19->m_pInstance;
                }
              }
              m_Value = CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value;
              v21 = CDOTA_Buff::GetParent(this);
              AbsOrigin = CBaseEntity::GetAbsOrigin(v21);
              v23 = CDOTA_Buff::GetParent(this);
              m_pAsString = "";
              if ( v23->m_iszUnitName.m_Value.u.m_Id != 0 )
                m_pAsString = v23->m_iszUnitName.m_Value.u.m_pAsString;
              v25 = DOTA_Character_ScriptSpawn_Synchronous(m_pAsString, m_Value, v16, 0, 0, *AbsOrigin);
              if ( v25 != 0 )
              {
                v26 = CDOTA_Buff::GetParent(this);
                ParticleManager = GetParticleManager();
                LODWORD(v26) = CDOTA_ParticleManager::CreateParticle(
                                 ParticleManager,
                                 "particles/units/heroes/hero_enigma/enigma_demonic_conversion.vpcf",
                                 1,
                                 v25,
                                 0,
                                 v26);
                v28 = CDOTA_Buff::GetParent(this);
                v29 = CBaseEntity::GetAbsOrigin(v28);
                v30 = GetParticleManager();
                CDOTA_ParticleManager::SetParticleControl(v30, v26, 1, *&v29->x, v29->z);
                v31 = GetParticleManager();
                CDOTA_ParticleManager::ReleaseParticleIndex(v31, v26);
                v32 = CDOTA_Buff::GetParent(this);
                v33 = (*(v32->_vptr_IHandleEntity + 414))(v32);
                CDOTA_BaseNPC::SetControllableByPlayer(v25, v33, 0);
                v34 = this->m_nSpawnNum + 3;
                if ( v34 != v25->m_nUnitLabelIndex.m_Value )
                {
                  (*(v25->_vptr_IHandleEntity + 22))(v25, 3417, 0xFFFFFFFFLL, 0xFFFFFFFFLL);
                  v25->m_nUnitLabelIndex.m_Value = v34;
                }
                v35 = CDOTA_Buff::GetParent(this);
                v52 = *CBaseEntity::GetAbsOrigin(v35);
                FindClearSpaceForUnit(v25, v52, 1);
                KeyValues::KeyValues(&kv, "modifier_demonic_conversion");
                (*(this->_vptr_CDOTA_Buff + 30))(this);
                v36 = 0.0;
                if ( g_pGameRules != 0 )
                  v36 = *&g_pGameRules[18].m_szQuestName[20];
                KeyValues::SetFloat(&kv, "duration", v36);
                KeyValues::SetInt(&kv, "allowsplit", 0);
                KeyValues::SetInt(&kv, "spawncount", this->m_nSpawnNum + 3);
                pAbility = CDOTA_Buff::GetAbility(this);
                v37 = CDOTA_Buff::GetParent(this);
                CDOTA_BaseNPC::AddNewModifier(v25, v37, pAbility, "modifier_demonic_conversion", &kv, 0);
                KeyValues::~KeyValues(&kv);
              }
              v38 = CDOTA_Buff::GetParent(this);
              v39 = ModifierFactoryDictionary();
              Factory = CModifieractoryDictionary::FindFactory(v39, "modifier_demonic_conversion");
              ModifierByName = CDOTA_ModifierManager::FindModifierByName(
                                 &v38->m_ModifierManager,
                                 Factory,
                                 "modifier_demonic_conversion",
                                 0);
              v42 = *(ModifierByName->_vptr_CDOTA_Buff + 63);
              (*(this->_vptr_CDOTA_Buff + 30))(this);
              v44 = 0.0;
              if ( g_pGameRules != 0 )
                v44 = *&g_pGameRules[18].m_szQuestName[20];
              v42(ModifierByName, 1, (v43 - v44) + this->life_extension);
              v45 = CDOTA_Buff::GetParent(this);
              v46 = (*(v45->_vptr_IHandleEntity + 156))(v45);
              v47 = CDOTA_Buff::GetParent(this);
              CDOTA_BaseNPC::ModifyHealth(v47, v46, 0, 0, 0);
            }
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
                  if ( v11->m_pInstance != 0
                    && BYTE3(v12[7]._vptr_IHandleEntity) != 0
                    && (v12[43].m_iszPrivateVScripts.u.m_Id & 0x10) == 0
                    && CDOTA_Buff::GetParent(this)->m_iTeamNum.m_Value != HIBYTE(v12[7].m_CScriptComponent) )
                  {
                    ++this->m_iAttackCount;
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


// CDOTA_Modifier_Enigma_DemonicConversion::GetUnitLifetimeFraction  (line 434, @0x0000000002a90410, libserver.so)  // inlines: DOTAGameRules, GetGameTime
ModifierVariant_t __fastcall CDOTA_Modifier_Enigma_DemonicConversion::GetUnitLifetimeFraction(
        CDOTA_Modifier_Enigma_DemonicConversion *const this,
        const CModifierParams *const params)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  float v5; // xmm0_4
  __int64 v6; // xmm2_8
  unsigned int v8; // [rsp+Ch] [rbp-14h]
  ModifierVariant_t result; // 0:rax.16

  (*(this->_vptr_CDOTA_Buff + 30))(this, params);
  v4 = 0.0;
  if ( g_pGameRules != 0 )
    v4 = *&g_pGameRules[18].m_szQuestName[20];
  *&v8 = v3 - v4;
  v5 = (*(this->_vptr_CDOTA_Buff + 31))(this);
  v6 = v8;
  result.m_szVal = 0;
  *&v6 = *&v8 / v5;
  *&result.m_eType = (v6 << 32) | 1;
  return result;
}


// CDOTA_Ability_Enigma_MidnightPulse::~CDOTA_Ability_Enigma_MidnightPulse  (line 445, @0x0000000002ac5460, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Enigma_MidnightPulse::~CDOTA_Ability_Enigma_MidnightPulse(
        CDOTA_Ability_Enigma_MidnightPulse *const this)
{
  this->_vptr_IHandleEntity = &off_43F2AB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Enigma_MidnightPulse::~CDOTA_Ability_Enigma_MidnightPulse  (line 445, @0x0000000002ac5480, libserver.so)  // inlines: ~CDOTA_Ability_Enigma_MidnightPulse
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Enigma_MidnightPulse::~CDOTA_Ability_Enigma_MidnightPulse(
        CDOTA_Ability_Enigma_MidnightPulse *const this)
{
  this->_vptr_IHandleEntity = &off_43F2AB0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Enigma_MidnightPulse::Schema_DynamicBinding  (line 447, @0x0000000002ab8ab0, libserver.so)
// globals: CDOTA_Ability_Enigma_MidnightPulse::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Enigma_MidnightPulse::Schema_DynamicBinding(
        const CDOTA_Ability_Enigma_MidnightPulse *const this)
{
  return CDOTA_Ability_Enigma_MidnightPulse::s_pSchemaBinding;
}


// CDOTA_Ability_Enigma_MidnightPulse::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 447, @0x0000000002ab8ac0, libserver.so)
// globals: CDOTA_Ability_Enigma_MidnightPulse::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Enigma_MidnightPulse::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Enigma_MidnightPulse::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Enigma_MidnightPulse::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Enigma_MidnightPulse::CEntityInstanceEntityClass::DestructInstance  (line 447, @0x0000000002ab8ad0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Enigma_MidnightPulse>
void __fastcall CDOTA_Ability_Enigma_MidnightPulse::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Enigma_MidnightPulse::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Enigma_MidnightPulse::CEntityInstanceEntityClass::FreeInstance  (line 447, @0x0000000002ab8af0, libserver.so)
void __fastcall CDOTA_Ability_Enigma_MidnightPulse::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Enigma_MidnightPulse::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Enigma_MidnightPulse::CEntityInstanceEntityClass::CanAllocate  (line 447, @0x0000000002ab8b10, libserver.so)
bool __fastcall CDOTA_Ability_Enigma_MidnightPulse::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Enigma_MidnightPulse::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Enigma_MidnightPulse::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 447, @0x0000000002ab8b20, libserver.so)
// globals: CDOTA_Ability_Enigma_MidnightPulse::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Enigma_MidnightPulse::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Enigma_MidnightPulse::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Enigma_MidnightPulse::s_pSchemaBinding;
}


// CDOTA_Ability_Enigma_MidnightPulse::CEntityInstanceEntityClass::AllocateInstance  (line 447, @0x0000000002abecc0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Enigma_MidnightPulse::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Enigma_MidnightPulse::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Enigma_MidnightPulse::CEntityInstanceEntityClass::ConstructInstance  (line 447, @0x0000000002ac29c0, libserver.so)  // inlines: CDOTA_Ability_Enigma_MidnightPulse, Construct<CDOTA_Ability_Enigma_MidnightPulse>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Enigma_MidnightPulse::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Enigma_MidnightPulse::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_43F2AB0;
  }
  return p;
}


// CDOTA_Ability_Enigma_MidnightPulse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 447, @0x0000000002acbe30, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Enigma_MidnightPulse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Enigma_MidnightPulse::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Enigma_MidnightPulse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 447, @0x0000000002acbe50, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Enigma_MidnightPulse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Enigma_MidnightPulse::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Enigma_MidnightPulse::GetEntityClassInternal  (line 447, @0x0000000002adb520, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "enigma_midnight_pulse", "CDOTA_Ability_Enigma_MidnightPulse"
// globals: `guard variable for'CDOTA_Ability_Enigma_MidnightPulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_MidnightPulseClass, CDOTA_Ability_Enigma_MidnightPulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_MidnightPulseClass, __dso_handle, CDOTA_Ability_Enigma_MidnightPulse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Enigma_MidnightPulse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_MidnightPulseClassInfo, CDOTA_Ability_Enigma_MidnightPulse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_MidnightPulseClassInfo
CEntityClass *__cdecl CDOTA_Ability_Enigma_MidnightPulse::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Enigma_MidnightPulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_MidnightPulseClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Enigma_MidnightPulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_MidnightPulseClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Enigma_MidnightPulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_MidnightPulseClass);
    CDOTA_Ability_Enigma_MidnightPulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_MidnightPulseClass._vptr_CEntityClass = off_43F2A30;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Enigma_MidnightPulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_MidnightPulseClass);
    __cxa_atexit(
      CDOTA_Ability_Enigma_MidnightPulse::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Enigma_MidnightPulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_MidnightPulseClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Enigma_MidnightPulseClass != 0 )
    return &CDOTA_Ability_Enigma_MidnightPulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_MidnightPulseClass;
  if ( `guard variable for'CDOTA_Ability_Enigma_MidnightPulse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_MidnightPulseClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Enigma_MidnightPulse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_MidnightPulseClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Enigma_MidnightPulse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_MidnightPulseClassInfo,
      "CDOTA_Ability_Enigma_MidnightPulse",
      "enigma_midnight_pulse",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Enigma_MidnightPulse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_MidnightPulseClassInfo);
  }
  CDOTA_Ability_Enigma_MidnightPulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_MidnightPulseClass.m_pClassInfo = &CDOTA_Ability_Enigma_MidnightPulse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_MidnightPulseClassInfo;
  CDOTA_Ability_Enigma_MidnightPulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_MidnightPulseClass.m_pBaseClassInfo = CDOTA_Ability_Enigma_MidnightPulse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_MidnightPulseClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Enigma_MidnightPulseClass = &CDOTA_Ability_Enigma_MidnightPulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_MidnightPulseClass;
  CDOTA_Ability_Enigma_MidnightPulse::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_MidnightPulseClassInfo.m_pClass = &CDOTA_Ability_Enigma_MidnightPulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_MidnightPulseClass;
  CDOTA_Ability_Enigma_MidnightPulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_MidnightPulseClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Enigma_MidnightPulseClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Enigma_MidnightPulse::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_MidnightPulseClass;
}


// CDOTA_Ability_Enigma_MidnightPulse::GetAOERadius  (line 451, @0x0000000002ae6600, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>
float __fastcall CDOTA_Ability_Enigma_MidnightPulse::GetAOERadius(CDOTA_Ability_Enigma_MidnightPulse *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
}


// CDOTA_Ability_Enigma_MidnightPulse::IsHiddenWhenStolen  (line 454, @0x0000000002ab8b30, libserver.so)
bool __fastcall CDOTA_Ability_Enigma_MidnightPulse::IsHiddenWhenStolen(CDOTA_Ability_Enigma_MidnightPulse *const this)
{
  return 1;
}


// CDOTA_Ability_Enigma_MidnightPulse::GetGestureBasedActivity  (line 457, @0x0000000002ab8b40, libserver.so)
Activity __fastcall CDOTA_Ability_Enigma_MidnightPulse::GetGestureBasedActivity(
        CDOTA_Ability_Enigma_MidnightPulse *const this)
{
  return 1676;
}


// CDOTA_Ability_Enigma_MidnightPulse::YouForgotToImplementOrDeclareServerClass  (line 463, @0x0000000002a778d0, libserver.so)
int __fastcall CDOTA_Ability_Enigma_MidnightPulse::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Enigma_MidnightPulse *const this)
{
  return 0;
}


// CDOTA_Ability_Enigma_MidnightPulse::GetServerClass  (line 463, @0x0000000002a8a070, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Enigma_MidnightPulse::GetServerClass(
        CDOTA_Ability_Enigma_MidnightPulse *const this)
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


// CDOTA_Ability_Enigma_MidnightPulse::OnSpellStart  (line 472, @0x0000000002a9a430, libserver.so)  // inlines: GetLevelSpecialValueFor<float>, GetTeamNumber
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetCaster, CDOTABaseAbility::GetCursorPosition, Thinker_Create, KeyValues::~KeyValues, __stack_chk_fail, _Unwind_Resume
// strings: "modifier_enigma_midnight_pulse_thinker"
void __fastcall CDOTA_Ability_Enigma_MidnightPulse::OnSpellStart(CDOTA_Ability_Enigma_MidnightPulse *const this)
{
  float v2; // xmm1_4
  int m_Value; // r13d
  CDOTA_BaseNPC *Caster; // rax
  KeyValues kv; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int64 v6; // [rsp+48h] [rbp-28h]
  Vector CursorPosition; // 0:kr00_12.12

  v6 = __readfsqword(0x28u);
  CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_enigma_midnight_pulse_thinker");
  KeyValues::SetFloat(&kv, "duration", v2);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  Thinker_Create(Caster, this, "modifier_enigma_midnight_pulse_thinker", &kv, CursorPosition, m_Value, 0, 0, 0);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Enigma_MidnightPulse::GetAbilityDamageToTargetOverInterval  (line 486, @0x0000000002aa3fe0, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
__int64 __fastcall CDOTA_Ability_Enigma_MidnightPulse::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Enigma_MidnightPulse *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r13d
  float fTimeToExit; // [rsp+0h] [rbp-34h]
  float fDuration; // [rsp+4h] [rbp-30h]
  float fIntervalb; // [rsp+8h] [rbp-2Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PURE )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "radius", -1, 0);
    fTimeToExit = LevelSpecialValue / (*(pTarget->_vptr_IHandleEntity + 386))(pTarget);
    fDuration = fminf(fInterval, CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0));
    fIntervalb = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "damage_percent", -1, 0);
    return (((*(pTarget->_vptr_IHandleEntity + 156))(pTarget) * fIntervalb) * fminf(fDuration, fTimeToExit));
  }
  return result;
}


// CDOTA_Modifier_Enigma_MidnightPulseThinker::~CDOTA_Modifier_Enigma_MidnightPulseThinker  (line 505, @0x0000000002ac1b10, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Enigma_MidnightPulseThinker::~CDOTA_Modifier_Enigma_MidnightPulseThinker(
        CDOTA_Modifier_Enigma_MidnightPulseThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_43F3570;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Enigma_MidnightPulseThinker::~CDOTA_Modifier_Enigma_MidnightPulseThinker  (line 505, @0x0000000002ac1b30, libserver.so)  // inlines: ~CDOTA_Modifier_Enigma_MidnightPulseThinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Enigma_MidnightPulseThinker::~CDOTA_Modifier_Enigma_MidnightPulseThinker(
        CDOTA_Modifier_Enigma_MidnightPulseThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_43F3570;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Enigma_MidnightPulseThinker::IsHidden  (line 510, @0x0000000002ab8b50, libserver.so)
bool __fastcall CDOTA_Modifier_Enigma_MidnightPulseThinker::IsHidden(
        CDOTA_Modifier_Enigma_MidnightPulseThinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Enigma_MidnightPulseThinker::OnCreated  (line 527, @0x0000000002a9ddf0, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, Vector
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, DotaRetrieveAbilityValue<int>, CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CGridNav::DestroyTreesAroundPoint, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControl, CDOTA_ParticleManager::SetParticleFoWProperties, CDOTA_Buff::StartIntervalThink (13 total)
// strings: "particles/units/heroes/hero_enigma/enigma_midnight_pulse.vpcf", "Hero_Enigma.Midnight_Pulse"
void __fastcall CDOTA_Modifier_Enigma_MidnightPulseThinker::OnCreated(
        CDOTA_Modifier_Enigma_MidnightPulseThinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTA_BaseNPC *Caster; // rax
  unsigned int v6; // r12d
  CDOTA_BaseNPC *Parent; // rax
  float v8; // xmm3_4
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v10; // rax
  const Vector *AbsOrigin; // rax
  int n_FXIndex; // r13d
  const Vector *v13; // r12
  CDOTA_ParticleManager *v14; // rax
  CDOTA_ParticleManager *v15; // rax
  CDOTA_ParticleManager *v16; // rax
  float v17; // xmm1_4
  CDOTA_BaseNPC *v18; // rax
  float flFoWRadius; // [rsp+Ch] [rbp-34h]
  float flFoWRadiusa; // [rsp+Ch] [rbp-34h]
  double v21; // [rsp+10h] [rbp-30h]
  Vector v22; // 0:xmm0_8.8,8:xmm1_4.4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->damage_percent = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "damage_percent", -1, 0);
  else
    this->damage_percent = 0.0;
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->radius, "radius");
  Caster = CDOTA_Buff::GetCaster(this);
  v6 = (*(Caster->_vptr_IHandleEntity + 414))(Caster);
  flFoWRadius = this->radius;
  Parent = CDOTA_Buff::GetParent(this);
  v22 = *CBaseEntity::GetAbsOrigin(Parent);
  CGridNav::DestroyTreesAroundPoint(&g_GridNav, 0, v6, v22, flFoWRadius, v8);
  ParticleManager = GetParticleManager();
  this->n_FXIndex = CDOTA_ParticleManager::CreateParticle(
                      ParticleManager,
                      "particles/units/heroes/hero_enigma/enigma_midnight_pulse.vpcf",
                      2,
                      0,
                      0,
                      0);
  v10 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v10);
  n_FXIndex = this->n_FXIndex;
  v13 = AbsOrigin;
  v14 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v14, n_FXIndex, 0, *&v13->x, v13->z);
  LODWORD(v13) = this->n_FXIndex;
  *&v21 = COERCE_UNSIGNED_INT(this->radius);
  v15 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v15, v13, 1, v21, 0.0);
  LODWORD(v13) = this->n_FXIndex;
  flFoWRadiusa = this->radius;
  v16 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleFoWProperties(v16, v13, 0, -1, flFoWRadiusa);
  CDOTA_Buff::StartIntervalThink(this, 1.0, v17);
  v18 = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(v18, "Hero_Enigma.Midnight_Pulse", 0.0, 0, 0);
}


// CDOTA_Modifier_Enigma_MidnightPulseThinker::OnDestroy  (line 547, @0x0000000002a7a5e0, libserver.so)
// calls: GetParticleManager, CDOTA_ParticleManager::DestroyParticleEffect, CDOTA_Buff::GetParent, UTIL_Remove
void __fastcall CDOTA_Modifier_Enigma_MidnightPulseThinker::OnDestroy(
        CDOTA_Modifier_Enigma_MidnightPulseThinker *const this)
{
  int n_FXIndex; // r12d
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *Parent; // rax

  n_FXIndex = this->n_FXIndex;
  ParticleManager = GetParticleManager();
  CDOTA_ParticleManager::DestroyParticleEffect(ParticleManager, n_FXIndex, 0);
  Parent = CDOTA_Buff::GetParent(this);
  UTIL_Remove(Parent);
}


// CDOTA_Modifier_Enigma_MidnightPulseThinker::OnIntervalThink  (line 557, @0x0000000002a99590, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, Purge, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_Buff::GetAbility, CDOTA_Buff::GetCaster, ApplyDamage, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, _Unwind_Resume
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Enigma_MidnightPulseThinker::OnIntervalThink(
        CDOTA_Modifier_Enigma_MidnightPulseThinker *const this)
{
  __m128i v1; // xmm2
  float v3; // r12d
  CDOTA_BaseNPC *Parent; // rbx
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rax
  __int64 v7; // rbx
  CHandle<CBaseEntity> *v8; // rdx
  uint32 m_Index; // eax
  __int16 v10; // cx
  CEntityIdentity *v11; // rdx
  CEntityIdentity *v12; // rdx
  CDOTA_BaseNPC *m_pInstance; // r12
  CDOTABaseAbility *Ability; // r14
  CDOTA_BaseNPC *Caster; // rax
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
  FindUnitsInRadius(this->m_iTeam, AbsOrigin, Parent, v3, &hEntities, 2, 3, 528, 0, 0);
  if ( hEntities.m_Size > 0 )
  {
    v7 = 0;
    do
    {
      while ( 1 )
      {
        v8 = &hEntities.m_Memory.m_pMemory[v7];
        m_Index = v8->m_Index;
        if ( v8->m_Index + 2 > 1 )
        {
          v10 = v8->m_Index;
          v11 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v8->m_Index) >> 9) & 0x3F];
          if ( v11 != 0 )
          {
            v12 = &v11[v10 & 0x1FF];
            if ( v12 != 0 && m_Index == v12->m_EHandle.m_Index )
            {
              m_pInstance = v12->m_pInstance;
              if ( v12->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                break;
            }
          }
        }
        if ( hEntities.m_Size <= ++v7 )
          goto LABEL_11;
      }
      flDamage = ((*(m_pInstance->_vptr_IHandleEntity + 156))(v12->m_pInstance) * this->damage_percent) / 100.0;
      Ability = CDOTA_Buff::GetAbility(this);
      Caster = CDOTA_Buff::GetCaster(this);
      ApplyDamage(Caster, m_pInstance, Ability, flDamage, 4, 0);
      ++v7;
    }
    while ( hEntities.m_Size > v7 );
  }
LABEL_11:
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&hEntities);
  if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
    if ( (hEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&hEntities.m_Memory);
  }
}


// CDOTA_Ability_Enigma_BlackHole::~CDOTA_Ability_Enigma_BlackHole  (line 579, @0x0000000002ac54b0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Enigma_BlackHole::~CDOTA_Ability_Enigma_BlackHole(
        CDOTA_Ability_Enigma_BlackHole *const this)
{
  this->_vptr_IHandleEntity = &off_43F38D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Enigma_BlackHole::~CDOTA_Ability_Enigma_BlackHole  (line 579, @0x0000000002ac54d0, libserver.so)  // inlines: ~CDOTA_Ability_Enigma_BlackHole
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Enigma_BlackHole::~CDOTA_Ability_Enigma_BlackHole(
        CDOTA_Ability_Enigma_BlackHole *const this)
{
  this->_vptr_IHandleEntity = &off_43F38D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Enigma_BlackHole::Schema_DynamicBinding  (line 581, @0x0000000002ab8b60, libserver.so)
// globals: CDOTA_Ability_Enigma_BlackHole::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Enigma_BlackHole::Schema_DynamicBinding(
        const CDOTA_Ability_Enigma_BlackHole *const this)
{
  return CDOTA_Ability_Enigma_BlackHole::s_pSchemaBinding;
}


// CDOTA_Ability_Enigma_BlackHole::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 581, @0x0000000002ab8b70, libserver.so)
// globals: CDOTA_Ability_Enigma_BlackHole::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Enigma_BlackHole::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Enigma_BlackHole::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Enigma_BlackHole::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Enigma_BlackHole::CEntityInstanceEntityClass::DestructInstance  (line 581, @0x0000000002ab8b80, libserver.so)  // inlines: Destruct<CDOTA_Ability_Enigma_BlackHole>
void __fastcall CDOTA_Ability_Enigma_BlackHole::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Enigma_BlackHole::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Enigma_BlackHole::CEntityInstanceEntityClass::FreeInstance  (line 581, @0x0000000002ab8ba0, libserver.so)
void __fastcall CDOTA_Ability_Enigma_BlackHole::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Enigma_BlackHole::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Enigma_BlackHole::CEntityInstanceEntityClass::CanAllocate  (line 581, @0x0000000002ab8bc0, libserver.so)
bool __fastcall CDOTA_Ability_Enigma_BlackHole::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Enigma_BlackHole::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Enigma_BlackHole::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 581, @0x0000000002ab8bd0, libserver.so)
// globals: CDOTA_Ability_Enigma_BlackHole::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Enigma_BlackHole::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Enigma_BlackHole::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Enigma_BlackHole::s_pSchemaBinding;
}


// CDOTA_Ability_Enigma_BlackHole::CEntityInstanceEntityClass::AllocateInstance  (line 581, @0x0000000002abed00, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Enigma_BlackHole::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Enigma_BlackHole::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 920);
  memset(v1, 0, 0x398u);
  return v1;
}


// CDOTA_Ability_Enigma_BlackHole::CEntityInstanceEntityClass::ConstructInstance  (line 581, @0x0000000002ac29f0, libserver.so)  // inlines: CDOTA_Ability_Enigma_BlackHole, CEntityHandle, CHandle, Construct<CDOTA_Ability_Enigma_BlackHole>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Enigma_BlackHole::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Enigma_BlackHole::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *(p + 228) = -1;
    *p = &off_43F38D0;
  }
  return p;
}


// CDOTA_Ability_Enigma_BlackHole::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 581, @0x0000000002acbe80, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Enigma_BlackHole::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Enigma_BlackHole::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Enigma_BlackHole::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 581, @0x0000000002acbea0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Enigma_BlackHole::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Enigma_BlackHole::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Enigma_BlackHole::GetEntityClassInternal  (line 581, @0x0000000002adb670, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes2_01.cpp
// strings: "enigma_black_hole", "CDOTA_Ability_Enigma_BlackHole"
// globals: `guard variable for'CDOTA_Ability_Enigma_BlackHole::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_BlackHoleClass, CDOTA_Ability_Enigma_BlackHole::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_BlackHoleClass, __dso_handle, CDOTA_Ability_Enigma_BlackHole::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Enigma_BlackHole::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_BlackHoleClassInfo, CDOTA_Ability_Enigma_BlackHole::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_BlackHoleClassInfo
CEntityClass *__cdecl CDOTA_Ability_Enigma_BlackHole::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Enigma_BlackHole::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_BlackHoleClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Enigma_BlackHole::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_BlackHoleClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Enigma_BlackHole::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_BlackHoleClass);
    CDOTA_Ability_Enigma_BlackHole::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_BlackHoleClass._vptr_CEntityClass = off_43F3850;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Enigma_BlackHole::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_BlackHoleClass);
    __cxa_atexit(
      CDOTA_Ability_Enigma_BlackHole::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Enigma_BlackHole::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_BlackHoleClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Enigma_BlackHoleClass != 0 )
    return &CDOTA_Ability_Enigma_BlackHole::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_BlackHoleClass;
  if ( `guard variable for'CDOTA_Ability_Enigma_BlackHole::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_BlackHoleClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Enigma_BlackHole::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_BlackHoleClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Enigma_BlackHole::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_BlackHoleClassInfo,
      "CDOTA_Ability_Enigma_BlackHole",
      "enigma_black_hole",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Enigma_BlackHole::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_BlackHoleClassInfo);
  }
  CDOTA_Ability_Enigma_BlackHole::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_BlackHoleClass.m_pClassInfo = &CDOTA_Ability_Enigma_BlackHole::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_BlackHoleClassInfo;
  CDOTA_Ability_Enigma_BlackHole::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_BlackHoleClass.m_pBaseClassInfo = CDOTA_Ability_Enigma_BlackHole::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_BlackHoleClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Enigma_BlackHoleClass = &CDOTA_Ability_Enigma_BlackHole::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_BlackHoleClass;
  CDOTA_Ability_Enigma_BlackHole::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Enigma_BlackHoleClassInfo.m_pClass = &CDOTA_Ability_Enigma_BlackHole::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_BlackHoleClass;
  CDOTA_Ability_Enigma_BlackHole::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_BlackHoleClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Enigma_BlackHoleClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Enigma_BlackHole::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Enigma_BlackHoleClass;
}


// CDOTA_Ability_Enigma_BlackHole::GetConceptRecipientType  (line 597, @0x0000000002ab8be0, libserver.so)
int __fastcall CDOTA_Ability_Enigma_BlackHole::GetConceptRecipientType(CDOTA_Ability_Enigma_BlackHole *const this)
{
  return 4;
}


// CDOTA_Ability_Enigma_BlackHole::GetAssociatedSecondaryAbilities  (line 599, @0x0000000002ab8bf0, libserver.so)
// strings: "enigma_midnight_pulse"
const char *__fastcall CDOTA_Ability_Enigma_BlackHole::GetAssociatedSecondaryAbilities(
        CDOTA_Ability_Enigma_BlackHole *const this)
{
  return "enigma_midnight_pulse";
}


// CDOTA_Ability_Enigma_BlackHole::GetStolenActivityModifier  (line 600, @0x0000000002ab8c00, libserver.so)
const char *__fastcall CDOTA_Ability_Enigma_BlackHole::GetStolenActivityModifier(
        CDOTA_Ability_Enigma_BlackHole *const this)
{
  return "black_hole";
}


// CDOTA_Ability_Enigma_BlackHole::YouForgotToImplementOrDeclareServerClass  (line 616, @0x0000000002a778e0, libserver.so)
int __fastcall CDOTA_Ability_Enigma_BlackHole::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Enigma_BlackHole *const this)
{
  return 0;
}


// CDOTA_Ability_Enigma_BlackHole::GetServerClass  (line 616, @0x0000000002a8a4f0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Enigma_BlackHole::GetServerClass(CDOTA_Ability_Enigma_BlackHole *const this)
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


// CDOTA_Ability_Enigma_BlackHole::OnSpellStart  (line 624, @0x0000000002aa2c90, libserver.so)  // inlines: GetAbilityData, GetEHandle, GetEntryIndex, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, Set, SetBool, entindex, operator=
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, KeyValues::KeyValues, KeyValues::SetInt, KeyValues::SetString, CDOTABaseAbility::GetCursorPosition, CDOTABaseAbility::GetCaster, CDOTAFogOfWarSystem::AddTempViewer, Thinker_Create, CEntityInstance::GetEntityIndex, CreateUnitEvent, DOTA_EmitSoundLocationWithCaster (17 total)
// strings: "pull_radius", "modifier_enigma_black_hole_thinker", "modifier_enigma_black_hole_pull", "aura_apply_modifier", "aura_search_team", "aura_search_type" (8 total)
void __fastcall CDOTA_Ability_Enigma_BlackHole::OnSpellStart(CDOTA_Ability_Enigma_BlackHole *const this)
{
  int LevelSpecialValue; // r13d
  __m128i v3; // xmm0
  float v4; // r15d
  int v5; // r14d
  __m128i v6; // xmm3
  float v7; // r14d
  CDOTA_BaseNPC *Caster; // rax
  int m_Value; // r14d
  CDOTA_BaseNPC *v10; // rax
  CDOTA_BaseNPC *v11; // rax
  CEntityIdentity *m_pEntity; // rdx
  int v13; // eax
  __int16 v14; // cx
  CDOTA_BaseNPC *v15; // rax
  CEntityIndex v16; // eax
  CDOTA_BaseNPC *v17; // r14
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r13d
  CDOTA_BaseNPC *v20; // rax
  float v21; // xmm3_4
  Vector vLocation; // [rsp+20h] [rbp-60h] BYREF
  KeyValues kv; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-38h]
  Vector CursorPosition; // 0:kr14_12.12

  v24 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "pull_radius", -1, 0);
  *v3.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0);
  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  v5 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "vision_radius", -1, 0);
  KeyValues::KeyValues(&kv, "modifier_enigma_black_hole_thinker");
  KeyValues::SetInt(&kv, "aura", 1);
  KeyValues::SetString(&kv, "aura_apply_modifier", "modifier_enigma_black_hole_pull");
  KeyValues::SetInt(&kv, "aura_radius", LevelSpecialValue);
  KeyValues::SetInt(&kv, "aura_search_team", 2);
  KeyValues::SetInt(&kv, "aura_search_type", 19);
  KeyValues::SetInt(&kv, "aura_search_flags", 16);
  *v6.m128i_i32 = v5;
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
  vLocation = CDOTABaseAbility::GetCursorPosition(this);
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTAFogOfWarSystem::AddTempViewer(
    &g_DOTAFogOfWarSystem,
    FoWViewerType_t::FOWVIEWERTYPE_BLACKHOLE,
    Caster->m_iTeamNum.m_Value,
    &vLocation,
    v7,
    v4,
    1);
  m_Value = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value;
  CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
  v10 = CDOTABaseAbility::GetCaster(this);
  v11 = Thinker_Create(v10, this, "modifier_enigma_black_hole_thinker", &kv, CursorPosition, m_Value, 0, 1, 0);
  if ( v11 != 0 && (m_pEntity = v11->m_pEntity) != 0 )
  {
    v13 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
    v14 = 0x7FFF;
    if ( m_pEntity->m_EHandle.m_Index != -1 )
      v14 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
    LOWORD(this->m_hThinker.m_Index) = v14 | this->m_hThinker.m_Index & 0x8000;
    this->m_hThinker.m_Index = (v13 << 15) | this->m_hThinker.m_Index & 0x7FFF;
  }
  else
  {
    this->m_hThinker.m_Index = -1;
  }
  v15 = CDOTABaseAbility::GetCaster(this);
  v16.m_Data = CEntityInstance::GetEntityIndex(v15).m_Data;
  CreateUnitEvent(v16, 0, 25, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_IMPORTANT_ABILITY);
  v17 = CDOTABaseAbility::GetCaster(this);
  vLocation = CDOTABaseAbility::GetCursorPosition(this);
  DOTA_EmitSoundLocationWithCaster(&vLocation, "Hero_Enigma.BlackHole.Cast", v17);
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  vLocation = CDOTABaseAbility::GetCursorPosition(this);
  v20 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(
    g_pGameRules,
    v20,
    0,
    m_iAbilityID,
    0,
    0,
    *&vLocation.x,
    vLocation.z,
    v4,
    v21);
  KeyValues::~KeyValues(&kv);
}


// CDOTA_Ability_Enigma_BlackHole::OnChannelFinish  (line 657, @0x0000000002a83900, libserver.so)  // inlines: Get, GetAbilityData, GetEntityIdentity, GetEntryIndex, GetInstance, IndexToIdentity, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, CDOTAGamerules::SendProjectionAbilityEndChannelMessage, CDOTABaseAbility::LoadAbilityData, UTIL_Remove
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Enigma_BlackHole::OnChannelFinish(
        CDOTA_Ability_Enigma_BlackHole *const this,
        bool bInterrupted)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r12d
  CDOTA_BaseNPC *Caster; // rax
  CEntityInstance *m_pInstance; // rdi

  m_Index = this->m_hThinker.m_Index;
  if ( m_Index + 2 > 1 )
  {
    v4 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(this->m_hThinker.m_Index) >> 9) & 0x3F];
    if ( v4 != 0 )
    {
      v5 = &v4[this->m_hThinker.m_Index & 0x1FF];
      if ( v5 != 0 && m_Index == v5->m_EHandle.m_Index )
      {
        m_pInstance = v5->m_pInstance;
        if ( v5->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
          UTIL_Remove(m_pInstance);
      }
    }
  }
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  Caster = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityEndChannelMessage(g_pGameRules, Caster, m_iAbilityID);
}


// CDOTA_Ability_Enigma_BlackHole::GetAbilityDamageToTargetOverInterval  (line 672, @0x0000000002a9b540, libserver.so)  // inlines: Min<float>
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTA_BaseNPC::FindAbilityByName
// strings: "near_damage", "enigma_midnight_pulse"
__int64 __fastcall CDOTA_Ability_Enigma_BlackHole::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Enigma_BlackHole *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int v7; // r13d
  CDOTA_BaseNPC *Caster; // rax
  int v9; // eax
  CDOTA_BaseNPC *v10; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float v12; // [rsp-8h] [rbp-2Ch]
  float v13; // [rsp-8h] [rbp-2Ch]

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_PURE )
  {
    v12 = fminf(fInterval, CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "duration", -1, 0));
    v7 = (CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "near_damage", -1, 0) * v12);
    Caster = CDOTABaseAbility::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(Caster)
      && (v10 = CDOTABaseAbility::GetCaster(this),
          (AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v10, "enigma_midnight_pulse", 0)) != 0) )
    {
      v13 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(AbilityByName, "damage_percent", -1, 0) * v12;
      v9 = ((*(pTarget->_vptr_IHandleEntity + 156))(pTarget) * v13);
    }
    else
    {
      v9 = 0;
    }
    return (v7 + v9);
  }
  return result;
}


// CDOTA_Modifier_Enigma_BlackHoleThinker::~CDOTA_Modifier_Enigma_BlackHoleThinker  (line 701, @0x0000000002ac1ac0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Enigma_BlackHoleThinker::~CDOTA_Modifier_Enigma_BlackHoleThinker(
        CDOTA_Modifier_Enigma_BlackHoleThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_43F4390;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Enigma_BlackHoleThinker::~CDOTA_Modifier_Enigma_BlackHoleThinker  (line 701, @0x0000000002ac1ae0, libserver.so)  // inlines: ~CDOTA_Modifier_Enigma_BlackHoleThinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Enigma_BlackHoleThinker::~CDOTA_Modifier_Enigma_BlackHoleThinker(
        CDOTA_Modifier_Enigma_BlackHoleThinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_43F4390;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Enigma_BlackHoleThinker::IsHidden  (line 711, @0x0000000002ab8c10, libserver.so)
bool __fastcall CDOTA_Modifier_Enigma_BlackHoleThinker::IsHidden(CDOTA_Modifier_Enigma_BlackHoleThinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Enigma_BlackHoleThinker::GetNumAvoidLocations  (line 719, @0x0000000002ab8c20, libserver.so)
int __fastcall CDOTA_Modifier_Enigma_BlackHoleThinker::GetNumAvoidLocations(
        CDOTA_Modifier_Enigma_BlackHoleThinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Enigma_BlackHoleThinker::GetAvoidLocation  (line 720, @0x0000000002ac2350, libserver.so)
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin
Vector __fastcall CDOTA_Modifier_Enigma_BlackHoleThinker::GetAvoidLocation(
        CDOTA_Modifier_Enigma_BlackHoleThinker *const this,
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


// CDOTA_Modifier_Enigma_BlackHoleThinker::AvoidStrength  (line 721, @0x0000000002ab8c30, libserver.so)
float __fastcall CDOTA_Modifier_Enigma_BlackHoleThinker::AvoidStrength(
        CDOTA_Modifier_Enigma_BlackHoleThinker *const this,
        CDOTA_Bot *pBot)
{
  return 0.89999998;
}


// CDOTA_Modifier_Enigma_BlackHoleThinker::GetAvoidRadius  (line 722, @0x0000000002ab8c40, libserver.so)
float __fastcall CDOTA_Modifier_Enigma_BlackHoleThinker::GetAvoidRadius(
        CDOTA_Modifier_Enigma_BlackHoleThinker *const this,
        int iAvoid)
{
  return this->pull_radius + 200.0;
}


// CDOTA_Modifier_Enigma_BlackHoleThinker::IsPersistentAvoidance  (line 723, @0x0000000002ab8c60, libserver.so)
bool __fastcall CDOTA_Modifier_Enigma_BlackHoleThinker::IsPersistentAvoidance(
        CDOTA_Modifier_Enigma_BlackHoleThinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Enigma_BlackHoleThinker::OnCreated  (line 744, @0x0000000002aab790, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::StartIntervalThink
// strings: "pull_radius", "far_radius", "near_radius"
void __fastcall CDOTA_Modifier_Enigma_BlackHoleThinker::OnCreated(
        CDOTA_Modifier_Enigma_BlackHoleThinker *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  float v6; // xmm1_4

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->pull_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "pull_radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
LABEL_7:
    this->far_radius = 0;
    v5 = CDOTA_Buff::GetAbility(this);
    if ( v5 != 0 )
      goto LABEL_4;
LABEL_8:
    this->near_radius = 0;
    goto LABEL_5;
  }
  this->pull_radius = 0;
  v4 = CDOTA_Buff::GetAbility(this);
  if ( v4 == 0 )
    goto LABEL_7;
LABEL_3:
  this->far_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "far_radius", -1, 0);
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_4:
  this->near_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v5, "near_radius", -1, 0);
LABEL_5:
  this->m_bFoundFive = 0;
  CDOTA_Buff::StartIntervalThink(this, 0.1, v6);
}


// CDOTA_Modifier_Enigma_BlackHoleThinker::OnDestroy  (line 769, @0x0000000002a7a620, libserver.so)
// calls: CDOTA_Buff::GetParent, UTIL_Remove
void __fastcall CDOTA_Modifier_Enigma_BlackHoleThinker::OnDestroy(CDOTA_Modifier_Enigma_BlackHoleThinker *const this)
{
  CDOTA_BaseNPC *Parent; // rax

  Parent = CDOTA_Buff::GetParent(this);
  UTIL_Remove(Parent);
}


// CDOTA_Modifier_Enigma_BlackHoleThinker::OnIntervalThink  (line 784, @0x0000000002ab6c40, libserver.so)  // inlines: AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<int>, Element, Find, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, GrowMemory, HasElement, IndexToIdentity, IsValid, LookupEntity, Purge, RemoveAll, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*, operator[], set_event_team, set_event_type, set_has_event_team, set_has_event_type, set_has_killer_account_id, set_killer_account_id, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTA_Buff::GetParent, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, FindUnitsInRadius, CDOTA_BaseNPC::FindModifierByName, CMsgTournamentItemEvent::CMsgTournamentItemEvent, CDOTA_PlayerResource::GetSteamID, TournamentItemEvent, CMsgTournamentItemEvent::~CMsgTournamentItemEvent, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::~CUtlVectorBase, CUtlMemory<int, int>::Purge, CUtlMemory<int, int>::Grow (14 total)
// strings: "modifier_enigma_black_hole_pull", "tournament_drops"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Enigma_BlackHoleThinker::OnIntervalThink(
        CDOTA_Modifier_Enigma_BlackHoleThinker *const this)
{
  __m128i v1; // xmm1
  float v3; // r13d
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_BaseNPC *v5; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *Caster; // rax
  __int64 v8; // r12
  int v9; // ebx
  CHandle<CBaseEntity> *v10; // rdx
  uint32 m_Index; // eax
  __int16 v12; // cx
  CEntityIdentity *v13; // rdx
  CEntityIdentity *v14; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  int v16; // eax
  int *v17; // rcx
  int v18; // edx
  int v19; // eax
  __int64 m_Size; // r13
  int v21; // eax
  int *v22; // rax
  bool v23; // al
  CDOTA_BaseNPC *v24; // rax
  int v25; // eax
  int v26; // [rsp+2Ch] [rbp-E4h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > vecNearbyHeroes; // [rsp+40h] [rbp-D0h] BYREF
  CUtlVector<int,CUtlMemory<int,int> > vecPlayersAffected; // [rsp+60h] [rbp-B0h] BYREF
  _BYTE v30[16]; // [rsp+80h] [rbp-90h] BYREF
  int v31; // [rsp+90h] [rbp-80h]
  int SteamID; // [rsp+98h] [rbp-78h]
  int v33; // [rsp+A0h] [rbp-70h]
  _BOOL4 v34; // [rsp+B8h] [rbp-58h]

  if ( this->m_bFoundFive )
    return;
  *v1.m128i_i32 = this->pull_radius;
  vecNearbyHeroes.m_Size = 0;
  vecNearbyHeroes.m_Memory.m_pMemory = 0;
  vecNearbyHeroes.m_Memory.m_nAllocationCount = 0;
  vecNearbyHeroes.m_Memory.m_nGrowSize = 0;
  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  Parent = CDOTA_Buff::GetParent(this);
  v5 = CDOTA_Buff::GetParent(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v5);
  Caster = CDOTA_Buff::GetCaster(this);
  FindUnitsInRadius(Caster->m_iTeamNum.m_Value, AbsOrigin, Parent, v3, &vecNearbyHeroes, 2, 1, 0, 0, 0);
  vecPlayersAffected.m_Size = 0;
  vecPlayersAffected.m_Memory.m_pMemory = 0;
  vecPlayersAffected.m_Memory.m_nAllocationCount = 0;
  vecPlayersAffected.m_Memory.m_nGrowSize = 0;
  if ( vecNearbyHeroes.m_Size <= 0 )
    goto LABEL_23;
  v8 = 0;
  v9 = 0;
  do
  {
    while ( 1 )
    {
      v10 = &vecNearbyHeroes.m_Memory.m_pMemory[v8];
      m_Index = vecNearbyHeroes.m_Memory.m_pMemory[v8].m_Index;
      if ( m_Index + 2 > 1 )
      {
        v12 = v10->m_Index;
        v13 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v10->m_Index) >> 9) & 0x3F];
        if ( v13 != 0 )
        {
          v14 = &v13[v12 & 0x1FF];
          if ( v14 != 0 && m_Index == v14->m_EHandle.m_Index )
          {
            m_pInstance = v14->m_pInstance;
            if ( v14->m_pInstance != 0
              && m_pInstance->m_bIsDOTANPC
              && CDOTA_BaseNPC::FindModifierByName(m_pInstance, "modifier_enigma_black_hole_pull", 0) != 0 )
            {
              v16 = (*(m_pInstance->_vptr_IHandleEntity + 414))(m_pInstance);
              if ( vecPlayersAffected.m_Size <= 0 )
                goto LABEL_17;
              if ( v16 != *vecPlayersAffected.m_Memory.m_pMemory )
                break;
            }
          }
        }
      }
LABEL_4:
      ++v9;
      ++v8;
      if ( vecNearbyHeroes.m_Size <= v9 )
        goto LABEL_21;
    }
    v17 = vecPlayersAffected.m_Memory.m_pMemory + 1;
    v18 = 0;
    while ( ++v18 != vecPlayersAffected.m_Size )
    {
      if ( v16 == *v17++ )
      {
        if ( v18 >= 0 )
          goto LABEL_4;
        break;
      }
    }
LABEL_17:
    v19 = (*(m_pInstance->_vptr_IHandleEntity + 414))(m_pInstance);
    m_Size = vecPlayersAffected.m_Size;
    v26 = v19;
    v21 = vecPlayersAffected.m_Size;
    if ( vecPlayersAffected.m_Size == vecPlayersAffected.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<int,int>::Grow(&vecPlayersAffected.m_Memory, 1);
      v21 = vecPlayersAffected.m_Size;
    }
    vecPlayersAffected.m_Size = v21 + 1;
    v22 = &vecPlayersAffected.m_Memory.m_pMemory[m_Size];
    if ( v22 == 0 )
      goto LABEL_4;
    ++v9;
    ++v8;
    *v22 = v26;
  }
  while ( vecNearbyHeroes.m_Size > v9 );
LABEL_21:
  if ( vecPlayersAffected.m_Size > 4 )
  {
    this->m_bFoundFive = 1;
    CMsgTournamentItemEvent::CMsgTournamentItemEvent(v30);
    v31 |= 4u;
    v33 = 11;
    v23 = CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value == 3;
    v31 |= 0x80u;
    v34 = v23;
    v24 = CDOTA_Buff::GetCaster(this);
    v25 = (*(v24->_vptr_IHandleEntity + 414))(v24);
    SteamID = CDOTA_PlayerResource::GetSteamID(g_pDOTAPlayerResource, v25);
    v31 |= 1u;
    TournamentItemEvent(v30, "tournament_drops");
    CMsgTournamentItemEvent::~CMsgTournamentItemEvent(v30);
  }
LABEL_23:
  vecPlayersAffected.m_Size = 0;
  if ( (vecPlayersAffected.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<int,int>::Purge(&vecPlayersAffected.m_Memory);
    if ( (vecPlayersAffected.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<int,int>::Purge(&vecPlayersAffected.m_Memory);
  }
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&vecNearbyHeroes);
}


// CDOTA_Modifier_Enigma_BlackHole_Pull::~CDOTA_Modifier_Enigma_BlackHole_Pull  (line 824, @0x0000000002ac1a50, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Enigma_BlackHole_Pull::~CDOTA_Modifier_Enigma_BlackHole_Pull(
        CDOTA_Modifier_Enigma_BlackHole_Pull *const this)
{
  this->_vptr_CDOTA_Buff = &off_43F46B0;
  this->_vptr_CHorizontalMotionController = &off_43F4998;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Enigma_BlackHole_Pull::~CDOTA_Modifier_Enigma_BlackHole_Pull  (line 824, @0x0000000002ac1a80, libserver.so)  // inlines: ~CDOTA_Modifier_Enigma_BlackHole_Pull
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Enigma_BlackHole_Pull::~CDOTA_Modifier_Enigma_BlackHole_Pull(
        CDOTA_Modifier_Enigma_BlackHole_Pull *const this)
{
  this->_vptr_CDOTA_Buff = &off_43F46B0;
  this->_vptr_CHorizontalMotionController = &off_43F4998;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Enigma_BlackHole_Pull::IsPurgable  (line 833, @0x0000000002ab8c70, libserver.so)
bool __fastcall CDOTA_Modifier_Enigma_BlackHole_Pull::IsPurgable(CDOTA_Modifier_Enigma_BlackHole_Pull *const this)
{
  return 1;
}


// CDOTA_Modifier_Enigma_BlackHole_Pull::IsHorizontalMotionValidToApply  (line 841, @0x0000000002ab8c80, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Enigma_BlackHole_Pull::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_Enigma_BlackHole_Pull *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Enigma_BlackHole_Pull::IsMotionController  (line 843, @0x0000000002ab8cb0, libserver.so)
bool __fastcall CDOTA_Modifier_Enigma_BlackHole_Pull::IsMotionController(
        CDOTA_Modifier_Enigma_BlackHole_Pull *const this)
{
  return 1;
}


// CDOTA_Modifier_Enigma_BlackHole_Pull::GetStatusEffectName  (line 845, @0x0000000002ab8cc0, libserver.so)
// strings: "particles/status_fx/status_effect_enigma_blackhole_tgt.vpcf"
const char *__fastcall CDOTA_Modifier_Enigma_BlackHole_Pull::GetStatusEffectName(
        CDOTA_Modifier_Enigma_BlackHole_Pull *const this)
{
  return "particles/status_fx/status_effect_enigma_blackhole_tgt.vpcf";
}


// CDOTA_Modifier_Enigma_BlackHole_Pull::StatusEffectPriority  (line 846, @0x0000000002ab8cd0, libserver.so)
int __fastcall CDOTA_Modifier_Enigma_BlackHole_Pull::StatusEffectPriority(
        CDOTA_Modifier_Enigma_BlackHole_Pull *const this)
{
  return 15;
}


// CDOTA_Modifier_Enigma_BlackHole_Pull::GetOverrideAnimation  (line 850, @0x0000000002ab8ce0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Enigma_BlackHole_Pull::GetOverrideAnimation(
        CDOTA_Modifier_Enigma_BlackHole_Pull *const this,
        const CModifierParams *const params)
{
  return 0x44BC800000000001uLL;
}


// CDOTA_Modifier_Enigma_BlackHole_Pull::DeclareFunctions  (line 879, @0x0000000002a778f0, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Enigma_BlackHole_Pull::GetOverrideAnimation(CModifierParams const&), CDOTA_Modifier_Enigma_BlackHole_Pull::GetOverrideAnimationRate(CModifierParams const&)
void __fastcall CDOTA_Modifier_Enigma_BlackHole_Pull::DeclareFunctions(
        CDOTA_Modifier_Enigma_BlackHole_Pull *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_Enigma_BlackHole_Pull::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
  this->m_Functions[92].__delta = 0;
  this->m_Functions[92].__pfn = CDOTA_Modifier_Enigma_BlackHole_Pull::GetOverrideAnimationRate;
}


// CDOTA_Modifier_Enigma_BlackHole_Pull::GetOverrideAnimationRate  (line 887, @0x0000000002a77930, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Enigma_BlackHole_Pull::GetOverrideAnimationRate(
        CDOTA_Modifier_Enigma_BlackHole_Pull *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = 0;
  *&result.m_eType = (LODWORD(this->animation_rate) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Enigma_BlackHole_Pull::OnCreated  (line 894, @0x0000000002a9dfc0, libserver.so)  // inlines: AssignTo, DOTAGameRules, DotaRetrieveAbilityValue<float>, Get, GetGameTime, GetInstance, GetLevelSpecialValueFor<float>, GetThinker, ToDOTABaseNPC, operator CBaseEntity*
// calls: CDOTA_Buff::GetAbility, DotaRetrieveAbilityValue<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::StartIntervalThink, CDOTA_Buff::GetParent, CDOTALocomotor::ApplyHorizontalMotionController, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::Destroy, CDOTA_Buff::GetCaster, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin (15 total)
// strings: "pull_radius", "pull_speed", "far_radius", "near_radius", "far_damage", "near_damage" (11 total)
void __fastcall CDOTA_Modifier_Enigma_BlackHole_Pull::OnCreated(
        CDOTA_Modifier_Enigma_BlackHole_Pull *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  CDOTABaseAbility *v10; // rax
  CDOTABaseAbility *v11; // rax
  float v12; // xmm1_4
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v14; // rax
  float v15; // xmm0_4
  CDOTABaseAbility *v16; // rax
  CEntityInstance *v17; // rax
  const CBaseEntity *v18; // r12
  CDOTA_BaseNPC *Caster; // r14
  CDOTA_BaseNPC *v20; // r13
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v22; // rax
  const Vector *AbsOrigin; // r14
  CDOTA_BaseNPC *v24; // r15
  CDOTA_ParticleManager *v25; // rax
  CDOTA_BaseNPC *v26; // rax
  const Vector *v27; // r14
  CDOTA_ParticleManager *v28; // rax
  const Vector *v29; // r12
  CDOTA_ParticleManager *v30; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(Ability, &this->pull_radius, "pull_radius");
  v4 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v4, &this->pull_speed, "pull_speed");
  v5 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v5, &this->far_radius, "far_radius");
  v6 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v6, &this->near_radius, "near_radius");
  v7 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v7, &this->far_damage, "far_damage");
  v8 = CDOTA_Buff::GetAbility(this);
  DotaRetrieveAbilityValue<int>(v8, &this->near_damage, "near_damage");
  v9 = CDOTA_Buff::GetAbility(this);
  if ( v9 != 0 )
    this->tick_rate = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v9, "tick_rate", -1, 0);
  else
    this->tick_rate = 0.0;
  v10 = CDOTA_Buff::GetAbility(this);
  if ( v10 != 0 )
    this->pull_rotate_speed = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v10, "pull_rotate_speed", -1, 0);
  else
    this->pull_rotate_speed = 0.0;
  v11 = CDOTA_Buff::GetAbility(this);
  if ( v11 != 0 )
    this->animation_rate = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v11, "animation_rate", -1, 0);
  else
    this->animation_rate = 0.0;
  CDOTA_Buff::StartIntervalThink(this, 0.0, v12);
  Parent = CDOTA_Buff::GetParent(this);
  v14 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::ApplyHorizontalMotionController(v14, &this->CHorizontalMotionController, 0);
  v15 = 0.97000003;
  if ( g_pGameRules != 0 )
    v15 = *&g_pGameRules[18].m_szQuestName[20] + 0.97000003;
  this->m_flDamageTick = v15;
  v16 = CDOTA_Buff::GetAbility(this);
  v17 = CEntityHandle::operator CEntityInstance *(&v16[1]);
  v18 = v17;
  if ( v17 != 0 && BYTE3(v17[7]._vptr_IHandleEntity) != 0 )
  {
    Caster = CDOTA_Buff::GetCaster(this);
    v20 = CDOTA_Buff::GetParent(this);
    ParticleManager = GetParticleManager();
    LODWORD(v20) = CDOTA_ParticleManager::CreateParticle(
                     ParticleManager,
                     "particles/units/heroes/hero_enigma/enigma_blackhole_target.vpcf",
                     2,
                     v20,
                     0,
                     Caster);
    v22 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v22);
    v24 = CDOTA_Buff::GetParent(this);
    v25 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(v25, v20, 0, v24, 5, "attach_hitloc", *AbsOrigin, 1);
    v26 = CDOTA_Buff::GetParent(this);
    v27 = CBaseEntity::GetAbsOrigin(v26);
    v28 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v28, v20, 1, *&v27->x, v27->z);
    v29 = CBaseEntity::GetAbsOrigin(v18);
    v30 = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControl(v30, v20, 2, *&v29->x, v29->z);
    CDOTA_Buff::AddParticle(this, v20, 0, 0, -1, 0, 0);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Enigma_BlackHole_Pull::OnDestroy  (line 928, @0x0000000002a7b190, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController
void __fastcall CDOTA_Modifier_Enigma_BlackHole_Pull::OnDestroy(CDOTA_Modifier_Enigma_BlackHole_Pull *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::RemoveHorizontalMotionController(v3, &this->CHorizontalMotionController);
}


// CDOTA_Modifier_Enigma_BlackHole_Pull::OnRefresh  (line 937, @0x0000000002aad430, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<float>, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "pull_radius", "pull_speed", "pull_rotate_speed", "far_radius", "near_radius", "far_damage" (9 total)
void __fastcall CDOTA_Modifier_Enigma_BlackHole_Pull::OnRefresh(
        CDOTA_Modifier_Enigma_BlackHole_Pull *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTABaseAbility *v4; // rax
  CDOTABaseAbility *v5; // rax
  CDOTABaseAbility *v6; // rax
  CDOTABaseAbility *v7; // rax
  CDOTABaseAbility *v8; // rax
  CDOTABaseAbility *v9; // rax
  CDOTABaseAbility *v10; // rax
  CDOTABaseAbility *v11; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
  {
    this->pull_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "pull_radius", -1, 0);
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
      goto LABEL_3;
  }
  else
  {
    this->pull_radius = 0;
    v4 = CDOTA_Buff::GetAbility(this);
    if ( v4 != 0 )
    {
LABEL_3:
      this->pull_speed = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v4, "pull_speed", -1, 0);
      v5 = CDOTA_Buff::GetAbility(this);
      if ( v5 != 0 )
        goto LABEL_4;
      goto LABEL_13;
    }
  }
  this->pull_speed = 0;
  v5 = CDOTA_Buff::GetAbility(this);
  if ( v5 != 0 )
  {
LABEL_4:
    this->pull_rotate_speed = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v5, "pull_rotate_speed", -1, 0);
    v6 = CDOTA_Buff::GetAbility(this);
    if ( v6 != 0 )
      goto LABEL_5;
    goto LABEL_14;
  }
LABEL_13:
  this->pull_rotate_speed = 0.0;
  v6 = CDOTA_Buff::GetAbility(this);
  if ( v6 != 0 )
  {
LABEL_5:
    this->far_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v6, "far_radius", -1, 0);
    v7 = CDOTA_Buff::GetAbility(this);
    if ( v7 != 0 )
      goto LABEL_6;
    goto LABEL_15;
  }
LABEL_14:
  this->far_radius = 0;
  v7 = CDOTA_Buff::GetAbility(this);
  if ( v7 != 0 )
  {
LABEL_6:
    this->near_radius = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v7, "near_radius", -1, 0);
    v8 = CDOTA_Buff::GetAbility(this);
    if ( v8 != 0 )
      goto LABEL_7;
    goto LABEL_16;
  }
LABEL_15:
  this->near_radius = 0;
  v8 = CDOTA_Buff::GetAbility(this);
  if ( v8 != 0 )
  {
LABEL_7:
    this->far_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v8, "far_damage", -1, 0);
    v9 = CDOTA_Buff::GetAbility(this);
    if ( v9 != 0 )
      goto LABEL_8;
    goto LABEL_17;
  }
LABEL_16:
  this->far_damage = 0;
  v9 = CDOTA_Buff::GetAbility(this);
  if ( v9 != 0 )
  {
LABEL_8:
    this->near_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(v9, "near_damage", -1, 0);
    v10 = CDOTA_Buff::GetAbility(this);
    if ( v10 != 0 )
      goto LABEL_9;
LABEL_18:
    this->tick_rate = 0.0;
    v11 = CDOTA_Buff::GetAbility(this);
    if ( v11 != 0 )
      goto LABEL_10;
    goto LABEL_19;
  }
LABEL_17:
  this->near_damage = 0;
  v10 = CDOTA_Buff::GetAbility(this);
  if ( v10 == 0 )
    goto LABEL_18;
LABEL_9:
  this->tick_rate = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v10, "tick_rate", -1, 0);
  v11 = CDOTA_Buff::GetAbility(this);
  if ( v11 != 0 )
  {
LABEL_10:
    this->animation_rate = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v11, "animation_rate", -1, 0);
    return;
  }
LABEL_19:
  this->animation_rate = 0.0;
}


// CDOTA_Modifier_Enigma_BlackHole_Pull::CheckState  (line 952, @0x0000000002a77950, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Enigma_BlackHole_Pull::CheckState(
        CDOTA_Modifier_Enigma_BlackHole_Pull *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x28uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFFFFFFD7LL;
}


// CDOTA_Modifier_Enigma_BlackHole_Pull::UpdateHorizontalMotion  (line 960, @0x0000000002a872a0, libserver.so)  // inlines: FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetThinker, IndexToIdentity, IsValid, Length2D, LookupEntity, Normalized, ToDOTABaseNPC, VectorAdd, VectorMultiply, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator*, operator+, operator-
// calls: CDOTA_Buff::GetAbility, CDOTA_Buff::Destroy, CBaseEntity::GetAbsOrigin, sincos, CBaseEntity::SetAbsOrigin, CBaseEntity::GetAbsAngles, CBaseEntity::SetAbsAngles, VectorNormalize
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Enigma_BlackHole_Pull::UpdateHorizontalMotion(
        CDOTA_Modifier_Enigma_BlackHole_Pull *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  CDOTABaseAbility *Ability; // rax
  int vptr_IHandleEntity; // edx
  unsigned __int16 v8; // cx
  CEntityIdentity *v9; // rax
  CEntityIdentity *v10; // rax
  const CBaseEntity *m_pInstance; // r13
  const Vector *AbsOrigin; // r14
  const Vector *v13; // rax
  float v14; // xmm1_4
  vec_t v15; // xmm4_4
  vec_t v16; // xmm3_4
  float v17; // xmm0_4
  vec_t v18; // xmm1_4
  __int64 v19; // rax
  double pull_rotate_speed; // xmm2_8
  __m128d v21; // xmm1
  vec_t v22; // xmm4_4
  const Vector *v23; // rax
  float v24; // xmm1_4
  float v25; // xmm2_4
  float v26; // xmm7_4
  float x; // r12d
  float v28; // r13d
  float y; // r15d
  const Vector *v30; // rax
  vec_t v31; // xmm0_4
  vec_t v32; // xmm2_4
  __m128i v33; // xmm3
  __m128i x_low; // xmm4
  __m128i y_low; // xmm6
  double v36; // [rsp+8h] [rbp-88h]
  double v37; // [rsp+10h] [rbp-80h]
  double v38; // [rsp+18h] [rbp-78h]
  const Vector *v39; // [rsp+20h] [rbp-70h]
  double v40; // [rsp+20h] [rbp-70h]
  const Vector *v41; // [rsp+20h] [rbp-70h]
  float z; // [rsp+28h] [rbp-68h]
  float flTravelDistancea; // [rsp+2Ch] [rbp-64h]
  double cosx; // [rsp+30h] [rbp-60h] BYREF
  double sinx; // [rsp+38h] [rbp-58h] BYREF
  QAngle angles; // [rsp+40h] [rbp-50h] BYREF
  Vector vOrigin; // [rsp+50h] [rbp-40h] BYREF

  Ability = CDOTA_Buff::GetAbility(this);
  vptr_IHandleEntity = Ability[1]._vptr_IHandleEntity;
  if ( (vptr_IHandleEntity + 2) > 1
    && (v8 = Ability[1]._vptr_IHandleEntity,
        (v9 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v8 >> 9) & 0x3F]) != 0)
    && (v10 = &v9[v8 & 0x1FF]) != 0
    && vptr_IHandleEntity == v10->m_EHandle.m_Index
    && (m_pInstance = v10->m_pInstance, v10->m_pInstance != 0)
    && m_pInstance->m_bIsDOTANPC )
  {
    z = vec3_origin.z;
    AbsOrigin = CBaseEntity::GetAbsOrigin(me);
    v39 = CBaseEntity::GetAbsOrigin(m_pInstance);
    sincos((a3 * this->pull_rotate_speed), &sinx, &cosx);
    v36 = cosx;
    v37 = sinx;
    v38 = (v39->x - AbsOrigin->x);
    v40 = (v39->y - AbsOrigin->y);
    v13 = CBaseEntity::GetAbsOrigin(m_pInstance);
    v14 = v36 * v40 + v38 * v37;
    v15 = v13->y - v14;
    v16 = v13->z - z;
    v17 = v36 * v38 - v40 * v37;
    v18 = v13->x - v17;
    vOrigin.y = v15;
    vOrigin.z = v16;
    vOrigin.x = v18;
    CBaseEntity::SetAbsOrigin(me, &vOrigin);
    v19 = *&CBaseEntity::GetAbsAngles(me)->x;
    angles.z = 0.0;
    pull_rotate_speed = this->pull_rotate_speed;
    angles.x = 0.0;
    v21 = _mm_cvtps_pd(HIDWORD(v19));
    v21.m128d_f64[0] = v21.m128d_f64[0] + a3 * 1.5 * pull_rotate_speed * 180.0 / 3.141592653589793;
    v22 = _mm_movedup_pd(v21).m128d_f64[0];
    angles.y = v22;
    CBaseEntity::SetAbsAngles(me, &angles);
    v41 = CBaseEntity::GetAbsOrigin(me);
    v23 = CBaseEntity::GetAbsOrigin(m_pInstance);
    v24 = v23->y - v41->y;
    v25 = fsqrt(((v23->x - v41->x) * (v23->x - v41->x)) + (v24 * v24));
    v26 = fminf(v25, this->pull_speed * a3);
    if ( v25 == 0.0 )
    {
      x = vec3_origin.x;
      v28 = z;
      y = vec3_origin.y;
    }
    else
    {
      flTravelDistancea = v26;
      vOrigin.x = v23->x - v41->x;
      vOrigin.y = v24;
      vOrigin.z = 0.0;
      VectorNormalize(&vOrigin);
      v33 = LODWORD(flTravelDistancea);
      x_low = LODWORD(vOrigin.x);
      y_low = LODWORD(vOrigin.y);
      *x_low.m128i_i32 = vOrigin.x * flTravelDistancea;
      *y_low.m128i_i32 = vOrigin.y * flTravelDistancea;
      *v33.m128i_i32 = flTravelDistancea * vOrigin.z;
      x = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
      y = COERCE_FLOAT(_mm_cvtsi128_si32(y_low));
      v28 = COERCE_FLOAT(_mm_cvtsi128_si32(v33));
    }
    v30 = CBaseEntity::GetAbsOrigin(me);
    v31 = v28 + v30->z;
    v32 = x + v30->x;
    vOrigin.y = y + v30->y;
    vOrigin.z = v31;
    vOrigin.x = v32;
    CBaseEntity::SetAbsOrigin(me, &vOrigin);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Enigma_BlackHole_Pull::OnIntervalThink  (line 1002, @0x0000000002a9b630, libserver.so)  // inlines: DOTAGameRules, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetGameTime, GetInstance, GetThinker, IndexToIdentity, IsValid, Length2D, LookupEntity, ToDOTABaseNPC, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator-
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::ApplyHorizontalMotionController, CDOTA_Buff::GetAbility, CDOTA_Buff::Destroy, CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<float>, ApplyDamage
// strings: "enigma_midnight_pulse"
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Enigma_BlackHole_Pull::OnIntervalThink(CDOTA_Modifier_Enigma_BlackHole_Pull *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v3; // rax
  CDOTABaseAbility *Ability; // rax
  int vptr_IHandleEntity; // edx
  unsigned __int16 v6; // cx
  CEntityIdentity *v7; // rax
  CEntityIdentity *v8; // rax
  const CBaseEntity *m_pInstance; // r13
  float v10; // xmm0_4
  CDOTA_BaseNPC *v11; // rax
  const Vector *AbsOrigin; // r14
  const Vector *v13; // rax
  float v14; // xmm0_4
  float v15; // xmm0_4
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v17; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTA_BaseNPC *v19; // rax
  int v20; // r14d
  CDOTABaseAbility *v21; // r13
  CDOTA_BaseNPC *v22; // r12
  CDOTA_BaseNPC *v23; // rax
  float near_damage; // xmm0_4
  CDOTABaseAbility *v25; // r14
  CDOTA_BaseNPC *v26; // r13
  CDOTA_BaseNPC *v27; // rax
  float damage_percent; // [rsp+Ch] [rbp-24h]
  float damage_percenta; // [rsp+Ch] [rbp-24h]

  Parent = CDOTA_Buff::GetParent(this);
  v3 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  CDOTALocomotor::ApplyHorizontalMotionController(v3, &this->CHorizontalMotionController, 1);
  Ability = CDOTA_Buff::GetAbility(this);
  vptr_IHandleEntity = Ability[1]._vptr_IHandleEntity;
  if ( (vptr_IHandleEntity + 2) <= 1
    || (v6 = Ability[1]._vptr_IHandleEntity,
        (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v6 >> 9) & 0x3F]) == 0)
    || (v8 = &v7[v6 & 0x1FF]) == 0
    || vptr_IHandleEntity != v8->m_EHandle.m_Index
    || (m_pInstance = v8->m_pInstance, v8->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC
    || CDOTA_Buff::GetAbility(this) == 0 )
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
    return;
  }
  v10 = 0.0;
  if ( g_pGameRules != 0 )
    v10 = *&g_pGameRules[18].m_szQuestName[20];
  if ( v10 >= this->m_flDamageTick )
  {
    v11 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v11);
    v13 = CBaseEntity::GetAbsOrigin(m_pInstance);
    v14 = fsqrt(((v13->x - AbsOrigin->x) * (v13->x - AbsOrigin->x)) + ((v13->y - AbsOrigin->y) * (v13->y - AbsOrigin->y)));
    if ( this->near_radius > v14 )
    {
      near_damage = this->near_damage;
    }
    else
    {
      if ( this->far_radius <= v14 )
      {
LABEL_15:
        v15 = 0.97000003;
        if ( g_pGameRules != 0 )
          v15 = *&g_pGameRules[18].m_szQuestName[20] + 0.97000003;
        this->m_flDamageTick = v15;
        Caster = CDOTA_Buff::GetCaster(this);
        if ( CDOTA_BaseNPC::HasScepter(Caster) && (CDOTA_Buff::GetParent(this)->m_iUnitType & 0x800) == 0 )
        {
          v17 = CDOTA_Buff::GetCaster(this);
          AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v17, "enigma_midnight_pulse", 0);
          if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
          {
            damage_percent = CDOTABaseAbility::GetLevelSpecialValueFor<float>(AbilityByName, "damage_percent", -1, 0);
            v19 = CDOTA_Buff::GetParent(this);
            v20 = (*(v19->_vptr_IHandleEntity + 156))(v19);
            v21 = CDOTA_Buff::GetAbility(this);
            v22 = CDOTA_Buff::GetParent(this);
            v23 = CDOTA_Buff::GetCaster(this);
            ApplyDamage(v23, v22, v21, (v20 * damage_percent) / 100.0, 4, 0);
          }
        }
        return;
      }
      near_damage = this->far_damage;
    }
    damage_percenta = near_damage;
    v25 = CDOTA_Buff::GetAbility(this);
    v26 = CDOTA_Buff::GetParent(this);
    v27 = CDOTA_Buff::GetCaster(this);
    ApplyDamage(v27, v26, v25, damage_percenta, 4, 0);
    goto LABEL_15;
  }
}


