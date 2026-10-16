// Reconstructed from DWARF by pahole; not original source.

// src/game/shared/dota/units/dota_unit_hero_earthshaker.cpp:28
class CDOTA_Unit_Hero_Earthshaker : public CDOTA_BaseNPC_Hero {
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
	CDOTA_Unit_Hero_Earthshaker(CDOTA_Unit_Hero_Earthshaker &);
	CDOTA_Unit_Hero_Earthshaker(CDOTA_Unit_Hero_Earthshaker &);
	CDOTA_Unit_Hero_Earthshaker();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual ~CDOTA_Unit_Hero_Earthshaker();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// sizeof = 5872
};

// src/game/shared/dota/units/dota_unit_hero_earthshaker.cpp:35
class C_CDOTA_Unit_Hero_Earthshaker_MapInstall {
	C_CDOTA_Unit_Hero_Earthshaker_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_earthshaker.cpp:49
class CDOTA_Ability_Earthshaker_Fissure : public CDOTABaseAbility {
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
	CDOTA_Ability_Earthshaker_Fissure(CDOTA_Ability_Earthshaker_Fissure &);
	CDOTA_Ability_Earthshaker_Fissure(CDOTA_Ability_Earthshaker_Fissure &);
	CDOTA_Ability_Earthshaker_Fissure();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual const char * GetStolenActivityModifier();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Earthshaker_Fissure();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[310] GetStolenActivityModifier
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// vtable[322] GetStunDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_earthshaker.cpp:194
class CDOTA_Modifier_Earthshaker_Fissure_Stun : public CDOTA_Modifier_Stunned {
public:

	CDOTA_Modifier_Earthshaker_Fissure_Stun(CDOTA_Modifier_Earthshaker_Fissure_Stun &);
	CDOTA_Modifier_Earthshaker_Fissure_Stun(const CDOTA_Modifier_Earthshaker_Fissure_Stun &);
	CDOTA_Modifier_Earthshaker_Fissure_Stun();
	virtual ~CDOTA_Modifier_Earthshaker_Fissure_Stun();

	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_earthshaker.cpp:205
class CDOTA_Modifier_Earthshaker_Fissure_Thinker : public CDOTA_Buff {
public:

	CDOTA_Modifier_Earthshaker_Fissure_Thinker();
	virtual void OnDestroy();
	virtual bool ShouldSendToClients();
	virtual bool IsHidden();
	virtual void CheckState(CDOTABuffState &);
	virtual ~CDOTA_Modifier_Earthshaker_Fissure_Thinker();

	// vtable[60] OnDestroy
	// vtable[8] ShouldSendToClients
	// vtable[11] IsHidden
	// vtable[5] CheckState
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_earthshaker.cpp:247
class CDOTA_Modifier_Fissure_Rooted : public CDOTA_Modifier_Rooted {
public:

	CDOTA_Modifier_Fissure_Rooted(CDOTA_Modifier_Fissure_Rooted &);
	CDOTA_Modifier_Fissure_Rooted(const CDOTA_Modifier_Fissure_Rooted &);
	CDOTA_Modifier_Fissure_Rooted();
	virtual bool IsPurgable();
	virtual ~CDOTA_Modifier_Fissure_Rooted();

	// vtable[14] IsPurgable
	// sizeof = 2984
};

// src/game/shared/dota/units/dota_unit_hero_earthshaker.cpp:264
class CDOTA_Ability_Earthshaker_EnchantTotem : public CDOTABaseAbility {
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
	CDOTA_Ability_Earthshaker_EnchantTotem(CDOTA_Ability_Earthshaker_EnchantTotem &);
	CDOTA_Ability_Earthshaker_EnchantTotem(CDOTA_Ability_Earthshaker_EnchantTotem &);
	CDOTA_Ability_Earthshaker_EnchantTotem();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual float GetCooldown(int);
	virtual int CastFilterResult(CDOTA_BaseNPC *);
	virtual const char * GetCustomCastError(CDOTA_BaseNPC *);
	virtual void OnSpellStart();
	virtual int GetBehavior();
	virtual float GetCastPoint();
	virtual int GetCastRange(const Vector &, CDOTA_BaseNPC *);
	virtual const char * GetStolenActivityModifier();
	virtual float GetStunDuration();
	virtual ~CDOTA_Ability_Earthshaker_EnchantTotem();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[242] GetCooldown
	// vtable[256] CastFilterResult
	// vtable[257] GetCustomCastError
	// vtable[266] OnSpellStart
	// vtable[251] GetBehavior
	// vtable[231] GetCastPoint
	// vtable[226] GetCastRange
	// vtable[310] GetStolenActivityModifier
	// vtable[322] GetStunDuration
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_earthshaker.cpp:302
class C_CDOTA_Ability_Earthshaker_EnchantTotem_MapInstall {
	C_CDOTA_Ability_Earthshaker_EnchantTotem_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_earthshaker.cpp:470
class CDOTA_Modifier_Earthshaker_EnchantTotem_Leap : public CDOTA_Buff, public CHorizontalMotionController, public CVerticalMotionController {
public:

private:

	float m_flPredictedTotalTime;  // +0xbd0
	float m_flCurrentTimeHoriz;  // +0xbe0
	float m_flCurrentTimeVert;  // +0xbe4
	bool m_bHorizontalMotionInterrupted;  // +0xbe8
	bool m_bDamageApplied;  // +0xbe9
	bool m_bTargetTeleported;  // +0xbea

	float m_flInitialVelocityZ;  // +0xc04
	CDOTA_Modifier_Earthshaker_EnchantTotem_Leap();
	virtual void OnCreated(KeyValues *);
	virtual void OnDestroy();
	virtual void DeclareFunctions();
	virtual void CheckState(CDOTABuffState &);
	virtual bool IsHidden();
	virtual bool IsStunDebuff();
	virtual bool IsPurgable();
	virtual void UpdateHorizontalMotion(CDOTA_BaseNPC *, float);
	virtual void UpdateVerticalMotion(CDOTA_BaseNPC *, float);
	virtual void OnHorizontalMotionInterrupted();
	virtual void OnVerticalMotionInterrupted();
	virtual bool IsHorizontalMotionValidToApply();
	virtual bool IsVerticalMotionValidToApply();
	virtual bool IsMotionController();
	ModifierVariant_t GetOverrideAnimation(const CModifierParams &);
	virtual bool RemoveOnDeath();
	void DisableMotionControl();
	virtual ~CDOTA_Modifier_Earthshaker_EnchantTotem_Leap();

	// vtable[57] OnCreated
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[5] CheckState
	// vtable[11] IsHidden
	// vtable[16] IsStunDebuff
	// vtable[14] IsPurgable
	// vtable[89] UpdateHorizontalMotion
	// vtable[90] UpdateVerticalMotion
	// vtable[91] OnHorizontalMotionInterrupted
	// vtable[92] OnVerticalMotionInterrupted
	// vtable[93] IsHorizontalMotionValidToApply
	// vtable[94] IsVerticalMotionValidToApply
	// vtable[21] IsMotionController
	// vtable[54] RemoveOnDeath
	// sizeof = 3080
};

// src/game/shared/dota/units/dota_unit_hero_earthshaker.cpp:757
class CDOTA_Modifier_Earthshaker_EnchantTotem : public CDOTA_Buff {
public:

private:

	int totem_damage_percentage;  // +0xba8
	CDOTA_Modifier_Earthshaker_EnchantTotem();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void OnDestroy();
	void StopTotemSound();
	virtual void DeclareFunctions();
	ModifierVariant_t GetModifierBaseDamageOutgoing_Percentage(const CModifierParams &);
	ModifierVariant_t OnAttacked(const CModifierParams &);
	virtual const char * GetHeroEffectName();
	virtual int HeroEffectPriority();
	ModifierVariant_t GetActivityTranslationModifiers(const CModifierParams &);
	ModifierVariant_t GetAttackSound(const CModifierParams &);
	virtual ~CDOTA_Modifier_Earthshaker_EnchantTotem();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[60] OnDestroy
	// vtable[65] DeclareFunctions
	// vtable[72] GetHeroEffectName
	// vtable[73] HeroEffectPriority
	// sizeof = 3000
};

// src/game/shared/dota/units/dota_unit_hero_earthshaker.cpp:897
class CDOTA_Ability_Earthshaker_Aftershock : public CDOTABaseAbility {
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
	CDOTA_Ability_Earthshaker_Aftershock(CDOTA_Ability_Earthshaker_Aftershock &);
	CDOTA_Ability_Earthshaker_Aftershock(CDOTA_Ability_Earthshaker_Aftershock &);
	CDOTA_Ability_Earthshaker_Aftershock();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual ServerClass * GetServerClass();
	virtual int YouForgotToImplementOrDeclareServerClass();
	virtual const char * GetIntrinsicModifierName();
	virtual ~CDOTA_Ability_Earthshaker_Aftershock();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[35] GetServerClass
	// vtable[36] YouForgotToImplementOrDeclareServerClass
	// vtable[280] GetIntrinsicModifierName
	// sizeof = 912
};

// src/game/shared/dota/units/dota_unit_hero_earthshaker.cpp:910
class C_CDOTA_Ability_Earthshaker_Aftershock_MapInstall {
	C_CDOTA_Ability_Earthshaker_Aftershock_MapInstall();

	// sizeof = 1
};

// src/game/shared/dota/units/dota_unit_hero_earthshaker.cpp:920
class CDOTA_Modifier_Earthshaker_Aftershock : public CDOTA_Buff {
public:

private:

	int aftershock_range;  // +0xba8
	CDOTA_Modifier_Earthshaker_Aftershock();
	virtual void OnCreated(KeyValues *);
	virtual void OnRefresh(KeyValues *);
	virtual void DeclareFunctions();
	ModifierVariant_t OnAbilityExecuted(const CModifierParams &);
	virtual bool IsHidden();
	virtual ~CDOTA_Modifier_Earthshaker_Aftershock();

	// vtable[57] OnCreated
	// vtable[58] OnRefresh
	// vtable[65] DeclareFunctions
	// vtable[11] IsHidden
	// sizeof = 2992
};

// src/game/shared/dota/units/dota_unit_hero_earthshaker.cpp:1013
class CDOTA_Ability_Earthshaker_EchoSlam : public CDOTABaseAbility {
public:

private:

	int echo_slam_damage_range;  // +0x390
	int echo_slam_echo_search_range;  // +0x394
	int echo_slam_echo_range;  // +0x398
	int echo_slam_echo_damage;  // +0x39c
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
	CDOTA_Ability_Earthshaker_EchoSlam(CDOTA_Ability_Earthshaker_EchoSlam &);
	CDOTA_Ability_Earthshaker_EchoSlam(CDOTA_Ability_Earthshaker_EchoSlam &);
	CDOTA_Ability_Earthshaker_EchoSlam();
	const V_uuid_t & GetEntityClassUUID();
	CEntityClassInfo * GetEntityClassInfo();
	CEntityClass * GetEntityClassInternal();
	CEntityClass * GetEntityClass();
	void SetupEntClassInputs(CEntityClass *);
	void SetupEntClassComponentOverrides(CEntityClass *);

	virtual void OnSpellStart();
	virtual bool OnProjectileHit(EHANDLE, const Vector &);
	virtual bool ShouldSpeakAbilityConcept(int);
	virtual const char * GetStolenActivityModifier();
	virtual int GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *, float, DAMAGE_TYPES);
	virtual ~CDOTA_Ability_Earthshaker_EchoSlam();
	/* tag__fprintf: const_type tag not supported! */;

	// vtable[0] Schema_DynamicBinding
	// vtable[266] OnSpellStart
	// vtable[289] OnProjectileHit
	// vtable[298] ShouldSpeakAbilityConcept
	// vtable[310] GetStolenActivityModifier
	// vtable[320] GetAbilityDamageToTargetOverInterval
	// sizeof = 928
};

// ==== functions (decompiled by Hex-Rays; names/signatures from DWARF) ====

// CDOTA_Unit_Hero_Earthshaker::~CDOTA_Unit_Hero_Earthshaker  (line 28, @0x0000000002a18750, libserver.so)
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero
void __fastcall CDOTA_Unit_Hero_Earthshaker::~CDOTA_Unit_Hero_Earthshaker(CDOTA_Unit_Hero_Earthshaker *const this)
{
  this->_vptr_IHandleEntity = &off_4337E90;
  this->_vptr_INextBotEventResponder = &off_4338E70;
  this->_vptr_CObstructionObject = &off_43391A0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
}


// CDOTA_Unit_Hero_Earthshaker::~CDOTA_Unit_Hero_Earthshaker  (line 28, @0x0000000002a18790, libserver.so)  // inlines: ~CDOTA_Unit_Hero_Earthshaker
// calls: CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero, CBaseEntity::operator delete
void __fastcall CDOTA_Unit_Hero_Earthshaker::~CDOTA_Unit_Hero_Earthshaker(CDOTA_Unit_Hero_Earthshaker *const this)
{
  this->_vptr_IHandleEntity = &off_4337E90;
  this->_vptr_INextBotEventResponder = &off_4338E70;
  this->_vptr_CObstructionObject = &off_43391A0;
  CDOTA_BaseNPC_Hero::~CDOTA_BaseNPC_Hero(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Unit_Hero_Earthshaker::Schema_DynamicBinding  (line 30, @0x0000000002a08b30, libserver.so)
// globals: CDOTA_Unit_Hero_Earthshaker::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Earthshaker::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Earthshaker *const this)
{
  return CDOTA_Unit_Hero_Earthshaker::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 30, @0x0000000002a08b60, libserver.so)
// globals: CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass::DestructInstance  (line 30, @0x0000000002a08b70, libserver.so)  // inlines: Destruct<CDOTA_Unit_Hero_Earthshaker>
void __fastcall CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass::FreeInstance  (line 30, @0x0000000002a08b90, libserver.so)
void __fastcall CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass::CanAllocate  (line 30, @0x0000000002a08bb0, libserver.so)
bool __fastcall CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 30, @0x0000000002a08bc0, libserver.so)
// globals: CDOTA_Unit_Hero_Earthshaker::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Unit_Hero_Earthshaker::s_pSchemaBinding;
}


// CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass::AllocateInstance  (line 30, @0x0000000002a0f500, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 5872);
  memset(v1, 0, 0x16F0u);
  return v1;
}


// CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass::ConstructInstance  (line 30, @0x0000000002a13440, libserver.so)  // inlines: CDOTA_Unit_Hero_Earthshaker, Construct<CDOTA_Unit_Hero_Earthshaker>
// calls: CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero
CEntityInstance *__fastcall CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTA_BaseNPC_Hero::CDOTA_BaseNPC_Hero(p);
    *p = &off_4337E90;
    *(p + 236) = &off_4338E70;
    *(p + 257) = &off_43391A0;
  }
  return p;
}


// CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002a20790, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 30, @0x0000000002a20880, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Unit_Hero_Earthshaker::GetEntityClassInternal  (line 30, @0x0000000002a3c4d0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTA_BaseNPC_Hero::InitScriptDesc, CDOTA_BaseNPC_Hero::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "npc_dota_hero_earthshaker", "CDOTA_Unit_Hero_Earthshaker"
// globals: `guard variable for'CDOTA_Unit_Hero_Earthshaker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EarthshakerClass, CDOTA_Unit_Hero_Earthshaker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EarthshakerClass, __dso_handle, CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Unit_Hero_Earthshaker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EarthshakerClassInfo, CDOTA_Unit_Hero_Earthshaker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EarthshakerClassInfo
CEntityClass *__cdecl CDOTA_Unit_Hero_Earthshaker::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Unit_Hero_Earthshaker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EarthshakerClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Earthshaker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EarthshakerClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Unit_Hero_Earthshaker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EarthshakerClass);
    CDOTA_Unit_Hero_Earthshaker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EarthshakerClass._vptr_CEntityClass = off_4337E10;
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Earthshaker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EarthshakerClass);
    __cxa_atexit(
      CDOTA_Unit_Hero_Earthshaker::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Unit_Hero_Earthshaker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EarthshakerClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Unit_Hero_EarthshakerClass != 0 )
    return &CDOTA_Unit_Hero_Earthshaker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EarthshakerClass;
  if ( `guard variable for'CDOTA_Unit_Hero_Earthshaker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EarthshakerClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Unit_Hero_Earthshaker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EarthshakerClassInfo) != 0 )
  {
    EntityClassInfo = CDOTA_BaseNPC_Hero::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Unit_Hero_Earthshaker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EarthshakerClassInfo,
      "CDOTA_Unit_Hero_Earthshaker",
      "npc_dota_hero_earthshaker",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Unit_Hero_Earthshaker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EarthshakerClassInfo);
  }
  CDOTA_Unit_Hero_Earthshaker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EarthshakerClass.m_pClassInfo = &CDOTA_Unit_Hero_Earthshaker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EarthshakerClassInfo;
  CDOTA_Unit_Hero_Earthshaker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EarthshakerClass.m_pBaseClassInfo = CDOTA_Unit_Hero_Earthshaker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EarthshakerClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Unit_Hero_EarthshakerClass = &CDOTA_Unit_Hero_Earthshaker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EarthshakerClass;
  CDOTA_Unit_Hero_Earthshaker::GetEntityClassInfo(void)::g_EntityCDOTA_Unit_Hero_EarthshakerClassInfo.m_pClass = &CDOTA_Unit_Hero_Earthshaker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EarthshakerClass;
  CDOTA_Unit_Hero_Earthshaker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EarthshakerClass.m_pScriptClassDesc = CDOTA_BaseNPC_Hero::InitScriptDesc();
  g_pEntityCDOTA_Unit_Hero_EarthshakerClass->m_pComponentOverrides = 0;
  return &CDOTA_Unit_Hero_Earthshaker::GetEntityClassInternal(void)::g_EntityCDOTA_Unit_Hero_EarthshakerClass;
}


// CDOTA_Unit_Hero_Earthshaker::YouForgotToImplementOrDeclareServerClass  (line 35, @0x00000000029b49c0, libserver.so)
int __fastcall CDOTA_Unit_Hero_Earthshaker::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Unit_Hero_Earthshaker *const this)
{
  return 0;
}


// CDOTA_Unit_Hero_Earthshaker::GetServerClass  (line 35, @0x00000000029c9e70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Unit_Hero_Earthshaker::GetServerClass(CDOTA_Unit_Hero_Earthshaker *const this)
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


// CDOTA_Ability_Earthshaker_Fissure::~CDOTA_Ability_Earthshaker_Fissure  (line 49, @0x0000000002a16e80, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Earthshaker_Fissure::~CDOTA_Ability_Earthshaker_Fissure(
        CDOTA_Ability_Earthshaker_Fissure *const this)
{
  this->_vptr_IHandleEntity = &off_4339270;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Earthshaker_Fissure::~CDOTA_Ability_Earthshaker_Fissure  (line 49, @0x0000000002a16ea0, libserver.so)  // inlines: ~CDOTA_Ability_Earthshaker_Fissure
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Earthshaker_Fissure::~CDOTA_Ability_Earthshaker_Fissure(
        CDOTA_Ability_Earthshaker_Fissure *const this)
{
  this->_vptr_IHandleEntity = &off_4339270;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Earthshaker_Fissure::Schema_DynamicBinding  (line 51, @0x0000000002a08bd0, libserver.so)
// globals: CDOTA_Ability_Earthshaker_Fissure::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Earthshaker_Fissure::Schema_DynamicBinding(
        const CDOTA_Ability_Earthshaker_Fissure *const this)
{
  return CDOTA_Ability_Earthshaker_Fissure::s_pSchemaBinding;
}


// CDOTA_Ability_Earthshaker_Fissure::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 51, @0x0000000002a08be0, libserver.so)
// globals: CDOTA_Ability_Earthshaker_Fissure::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Earthshaker_Fissure::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Earthshaker_Fissure::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Earthshaker_Fissure::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Earthshaker_Fissure::CEntityInstanceEntityClass::DestructInstance  (line 51, @0x0000000002a08bf0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Earthshaker_Fissure>
void __fastcall CDOTA_Ability_Earthshaker_Fissure::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Earthshaker_Fissure::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Earthshaker_Fissure::CEntityInstanceEntityClass::FreeInstance  (line 51, @0x0000000002a08c10, libserver.so)
void __fastcall CDOTA_Ability_Earthshaker_Fissure::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Earthshaker_Fissure::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Earthshaker_Fissure::CEntityInstanceEntityClass::CanAllocate  (line 51, @0x0000000002a08c30, libserver.so)
bool __fastcall CDOTA_Ability_Earthshaker_Fissure::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Earthshaker_Fissure::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Earthshaker_Fissure::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 51, @0x0000000002a08c40, libserver.so)
// globals: CDOTA_Ability_Earthshaker_Fissure::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Earthshaker_Fissure::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Earthshaker_Fissure::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Earthshaker_Fissure::s_pSchemaBinding;
}


// CDOTA_Ability_Earthshaker_Fissure::CEntityInstanceEntityClass::AllocateInstance  (line 51, @0x0000000002a0f540, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Earthshaker_Fissure::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Earthshaker_Fissure::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Earthshaker_Fissure::CEntityInstanceEntityClass::ConstructInstance  (line 51, @0x0000000002a13f00, libserver.so)  // inlines: CDOTA_Ability_Earthshaker_Fissure, Construct<CDOTA_Ability_Earthshaker_Fissure>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Earthshaker_Fissure::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Earthshaker_Fissure::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_4339270;
  }
  return p;
}


// CDOTA_Ability_Earthshaker_Fissure::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 51, @0x0000000002a1f220, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Earthshaker_Fissure::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Earthshaker_Fissure::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Earthshaker_Fissure::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 51, @0x0000000002a1f240, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Earthshaker_Fissure::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Earthshaker_Fissure::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Earthshaker_Fissure::GetEntityClassInternal  (line 51, @0x0000000002a36260, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "CDOTA_Ability_Earthshaker_Fissure"
// globals: `guard variable for'CDOTA_Ability_Earthshaker_Fissure::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_FissureClass, CDOTA_Ability_Earthshaker_Fissure::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_FissureClass, __dso_handle, CDOTA_Ability_Earthshaker_Fissure::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Earthshaker_Fissure::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_FissureClassInfo, CDOTA_Ability_Earthshaker_Fissure::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_FissureClassInfo
CEntityClass *__cdecl CDOTA_Ability_Earthshaker_Fissure::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Earthshaker_Fissure::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_FissureClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Earthshaker_Fissure::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_FissureClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Earthshaker_Fissure::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_FissureClass);
    CDOTA_Ability_Earthshaker_Fissure::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_FissureClass._vptr_CEntityClass = off_43391F0;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Earthshaker_Fissure::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_FissureClass);
    __cxa_atexit(
      CDOTA_Ability_Earthshaker_Fissure::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Earthshaker_Fissure::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_FissureClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Earthshaker_FissureClass != 0 )
    return &CDOTA_Ability_Earthshaker_Fissure::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_FissureClass;
  if ( `guard variable for'CDOTA_Ability_Earthshaker_Fissure::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_FissureClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Earthshaker_Fissure::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_FissureClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Earthshaker_Fissure::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_FissureClassInfo,
      "CDOTA_Ability_Earthshaker_Fissure",
      "earthshaker_fissure",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Earthshaker_Fissure::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_FissureClassInfo);
  }
  CDOTA_Ability_Earthshaker_Fissure::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_FissureClass.m_pClassInfo = &CDOTA_Ability_Earthshaker_Fissure::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_FissureClassInfo;
  CDOTA_Ability_Earthshaker_Fissure::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_FissureClass.m_pBaseClassInfo = CDOTA_Ability_Earthshaker_Fissure::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_FissureClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Earthshaker_FissureClass = &CDOTA_Ability_Earthshaker_Fissure::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_FissureClass;
  CDOTA_Ability_Earthshaker_Fissure::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_FissureClassInfo.m_pClass = &CDOTA_Ability_Earthshaker_Fissure::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_FissureClass;
  CDOTA_Ability_Earthshaker_Fissure::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_FissureClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Earthshaker_FissureClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Earthshaker_Fissure::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_FissureClass;
}


// CDOTA_Ability_Earthshaker_Fissure::GetStolenActivityModifier  (line 56, @0x0000000002a08c50, libserver.so)
const char *__fastcall CDOTA_Ability_Earthshaker_Fissure::GetStolenActivityModifier(
        CDOTA_Ability_Earthshaker_Fissure *const this)
{
  return "fissure";
}


// CDOTA_Ability_Earthshaker_Fissure::OnSpellStart  (line 66, @0x0000000002a04ae0, libserver.so)  // inlines: AddObstructionProperty, AddToTail, CUtlMemory, CUtlVector, CUtlVectorBase, CopyConstruct<CDOTA_BaseNPC*>, CopyConstruct<Vector>, DotProduct, Element, Find, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetLevelSpecialValueFor<float>, GetLevelSpecialValueFor<int>, GetPaddedCollisionRadius, GetTeamNumber, GrowMemory, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, NormalizeInPlace, Purge, RemoveAll, ToDOTABaseNPC, ToDOTABaseNPCHero, ToDOTABaseNPCRealHero, Vector, VectorAdd, VectorMultiply, VectorSubtract, operator CBaseEntity*, operator CEntityInstance*, operator*, operator*=, operator+, operator+=, operator-, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTABaseAbility::GetCaster, CBaseEntity::GetAbsOrigin, CDOTABaseAbility::GetCursorTarget, VectorNormalize, CBaseEntity::GetModel, KeyValues::KeyValues, KeyValues::SetFloat, CDOTABaseAbility::GetDuration, GetParticleManager, CDOTA_ParticleManager::CreateParticle (38 total)
// strings: "fissure_radius", "fissure_duration", "modifier_earthshaker_fissure", "modifier_stunned", "particles/units/heroes/hero_earthshaker/earthshaker_fissure.vpcf", "modifier_earthshaker_fissure_stun" (8 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Earthshaker_Fissure::OnSpellStart(CDOTA_Ability_Earthshaker_Fissure *const this)
{
  int LevelSpecialValue; // ebx
  __m128i v3; // xmm0
  unsigned int v4; // r12d
  CDOTA_BaseNPC *Caster; // rax
  const Vector *AbsOrigin; // rbx
  CBaseEntity *CursorTarget; // rax
  const Vector *v8; // rax
  __int64 v9; // xmm0_8
  float y; // xmm1_4
  vec_t v11; // xmm1_4
  vec_t v12; // xmm0_4
  void (__fastcall *v13)(IGameModelInfo *, CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *, Vector *, Vector *); // r13
  CDOTA_BaseNPC *v14; // rax
  __m128i x_low; // xmm5
  __m128i y_low; // xmm6
  float v17; // ebx
  CDOTA_BaseNPC *v18; // rax
  const Vector *v19; // rax
  unsigned int v20; // xmm2_4
  unsigned int v21; // xmm1_4
  vec_t v22; // xmm0_4
  int (**vptr_IHandleEntity)(...); // rax
  int v24; // eax
  __m128i v25; // xmm4
  __m128i v26; // xmm5
  float v27; // r14d
  CDOTA_BaseNPC *v28; // rax
  const Vector *v29; // rax
  unsigned int v30; // xmm2_4
  unsigned int v31; // xmm1_4
  int v32; // eax
  int v33; // r14d
  float v34; // xmm1_4
  float v35; // xmm1_4
  CDOTA_BaseNPC *v36; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v38; // rax
  CDOTA_ParticleManager *v39; // rax
  CDOTA_ParticleManager *v40; // rax
  CDOTA_ParticleManager *v41; // rax
  CDOTA_ParticleManager *v42; // rax
  CDOTA_BaseNPC *v43; // rax
  int m_Value; // ebx
  CDOTA_BaseNPC *v45; // rax
  CDOTA_BaseNPC *v46; // rax
  ObstructionRecord_t *m_pObstructionRecord; // rcx
  int m_nObstructionProperties; // edx
  CDOTA_BaseNPC *v49; // rbx
  CDOTA_BaseNPC *v50; // rax
  __int64 v51; // r12
  CHandle<CBaseEntity> *v52; // rdx
  uint32 m_Index; // eax
  __int16 v54; // cx
  CEntityIdentity *v55; // rdx
  CEntityIdentity *v56; // rdx
  CEntityInstance *m_pInstance; // rbx
  __int64 m_Size; // r14
  CDOTA_BaseNPC **v59; // rdx
  int v60; // eax
  int v61; // eax
  CDOTA_BaseNPC **v62; // rax
  CDOTA_BaseNPC *v63; // rax
  const Vector *v64; // r14
  const Vector *v65; // rax
  float v66; // xmm0_4
  double v67; // xmm1_8
  float v68; // xmm1_4
  __m128i v69; // xmm3
  float v70; // xmm1_4
  int v71; // r14d
  const Vector *v72; // rax
  float v73; // xmm4_4
  __int64 v74; // r14
  float v75; // xmm5_4
  float v76; // xmm6_4
  int v77; // eax
  Vector *v78; // rax
  char m_CScriptComponent_high; // r14
  int (**v80)(...); // rax
  CDOTA_BaseNPC_Hero *v81; // r14
  CDOTA_BaseNPC *v82; // rax
  CDOTA_BaseNPC_Hero *v83; // rdi
  CDOTA_BaseNPC *v84; // rax
  __m128i v85; // xmm3
  float v86; // r14d
  CDOTA_BaseNPC *v87; // rax
  __int64 v88; // rbx
  __int64 v89; // r13
  int j; // r12d
  CDOTA_BaseNPC *v91; // rax
  CDOTA_BaseNPC *v92; // rax
  const QAngle *AbsAngles; // rax
  float v94; // [rsp+2Ch] [rbp-184h]
  float v95; // [rsp+30h] [rbp-180h]
  float v96; // [rsp+34h] [rbp-17Ch]
  int nSegments; // [rsp+38h] [rbp-178h]
  float flFoWRadius; // [rsp+3Ch] [rbp-174h]
  int i; // [rsp+58h] [rbp-158h]
  float v100; // [rsp+5Ch] [rbp-154h]
  float x; // [rsp+60h] [rbp-150h]
  float v102; // [rsp+64h] [rbp-14Ch]
  float v103; // [rsp+68h] [rbp-148h]
  float v104; // [rsp+68h] [rbp-148h]
  float v105; // [rsp+68h] [rbp-148h]
  float v106; // [rsp+68h] [rbp-148h]
  float fFissureStepLength; // [rsp+6Ch] [rbp-144h]
  float fFissureStepLengtha; // [rsp+6Ch] [rbp-144h]
  float fFissureStepLengthb; // [rsp+6Ch] [rbp-144h]
  Vector vFissureDir; // [rsp+70h] [rbp-140h] BYREF
  Vector v111; // [rsp+80h] [rbp-130h]
  Vector mins; // [rsp+90h] [rbp-120h] BYREF
  Vector maxs; // [rsp+A0h] [rbp-110h] BYREF
  Vector vStartPos; // [rsp+B0h] [rbp-100h] BYREF
  Vector vEndPos; // [rsp+C0h] [rbp-F0h] BYREF
  Vector vFissureLoc; // [rsp+D0h] [rbp-E0h] BYREF
  CUtlVector<CDOTA_BaseNPC*,CUtlMemory<CDOTA_BaseNPC*,int> > fissuredEntities; // [rsp+E0h] [rbp-D0h] BYREF
  CUtlVector<Vector,CUtlMemory<Vector,int> > fissuredEntityPositions; // [rsp+100h] [rbp-B0h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+120h] [rbp-90h] BYREF
  KeyValues kv; // [rsp+140h] [rbp-70h] BYREF
  KeyValues kv2; // [rsp+160h] [rbp-50h] BYREF
  unsigned __int64 v122; // [rsp+178h] [rbp-38h]
  Vector CursorPosition; // 0:kr00_12.12

  v122 = __readfsqword(0x28u);
  LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "fissure_radius", -1, 0);
  *v3.m128i_i32 = CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "fissure_duration", -1, 0);
  v4 = _mm_cvtsi128_si32(v3);
  flFoWRadius = LevelSpecialValue;
  fFissureStepLength = LevelSpecialValue * 0.25;
  Caster = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(Caster);
  if ( CDOTABaseAbility::GetCursorTarget(this) != 0 )
  {
    CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
    v8 = CBaseEntity::GetAbsOrigin(CursorTarget);
    *&v9 = v8->x;
    y = v8->y;
  }
  else
  {
    CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
    v9 = *&CursorPosition.x;
    v111 = CursorPosition;
    y = CursorPosition.y;
  }
  v11 = y - AbsOrigin->y;
  v12 = *&v9 - AbsOrigin->x;
  vFissureDir.z = 0.0;
  vFissureDir.y = v11;
  vFissureDir.x = v12;
  if ( VectorNormalize(&vFissureDir) < 0.0099999998 )
  {
    v92 = CDOTABaseAbility::GetCaster(this);
    AbsAngles = CBaseEntity::GetAbsAngles(v92);
    AngleVectors(AbsAngles, &vFissureDir, 0, 0);
  }
  v13 = *(modelinfo->_vptr_IAppSystem + 16);
  v14 = CDOTABaseAbility::GetCaster(this);
  CBaseEntity::GetModel(&entities, v14);
  v13(modelinfo, &entities, &mins, &maxs);
  x_low = LODWORD(vFissureDir.x);
  y_low = LODWORD(vFissureDir.y);
  *x_low.m128i_i32 = vFissureDir.x * (maxs.x - mins.x);
  *y_low.m128i_i32 = vFissureDir.y * (maxs.x - mins.x);
  v17 = COERCE_FLOAT(_mm_cvtsi128_si32(x_low));
  LODWORD(v13) = _mm_cvtsi128_si32(y_low);
  v103 = (maxs.x - mins.x) * vFissureDir.z;
  v18 = CDOTABaseAbility::GetCaster(this);
  v19 = CBaseEntity::GetAbsOrigin(v18);
  *&v20 = v17 + v19->x;
  *&v21 = *&v13 + v19->y;
  v22 = v103 + v19->z;
  vptr_IHandleEntity = this->_vptr_IHandleEntity;
  *&vStartPos.x = __PAIR64__(v21, v20);
  vStartPos.z = v22;
  v24 = vptr_IHandleEntity[229](this, &vec3_origin, 0);
  v25 = LODWORD(vFissureDir.x);
  v26 = LODWORD(vFissureDir.y);
  *v25.m128i_i32 = vFissureDir.x * v24;
  *v26.m128i_i32 = vFissureDir.y * v24;
  LODWORD(v13) = _mm_cvtsi128_si32(v25);
  v27 = COERCE_FLOAT(_mm_cvtsi128_si32(v26));
  v104 = v24 * vFissureDir.z;
  v28 = CDOTABaseAbility::GetCaster(this);
  v29 = CBaseEntity::GetAbsOrigin(v28);
  x = vFissureDir.x;
  *&v30 = *&v13 + v29->x;
  *&v31 = v27 + v29->y;
  vEndPos.z = v104 + v29->z;
  *&vEndPos.x = __PAIR64__(v31, v30);
  v96 = fFissureStepLength * vFissureDir.x;
  v102 = -vFissureDir.y;
  v94 = vFissureDir.z * fFissureStepLength;
  v95 = fFissureStepLength * vFissureDir.y;
  v32 = (*(this->_vptr_IHandleEntity + 229))(this, &vec3_origin, 0);
  fissuredEntities.m_Size = 0;
  fissuredEntities.m_Memory.m_pMemory = 0;
  fissuredEntities.m_Memory.m_nAllocationCount = 0;
  fissuredEntities.m_Memory.m_nGrowSize = 0;
  fissuredEntityPositions.m_Size = 0;
  fissuredEntityPositions.m_Memory.m_pMemory = 0;
  fissuredEntityPositions.m_Memory.m_nAllocationCount = 0;
  fissuredEntityPositions.m_Memory.m_nGrowSize = 0;
  v33 = (v32 / fFissureStepLength);
  nSegments = v33;
  KeyValues::KeyValues(&kv, "modifier_earthshaker_fissure");
  KeyValues::SetFloat(&kv, "duration", v34);
  KeyValues::KeyValues(&kv2, "modifier_stunned");
  CDOTABaseAbility::GetDuration(this);
  KeyValues::SetFloat(&kv2, "duration", v35);
  v36 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v36) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_earthshaker/earthshaker_fissure.vpcf",
                   8,
                   0,
                   0,
                   v36);
  v38 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v38, v36, 0, *&vStartPos.x, vStartPos.z);
  v39 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v39, v36, 1, *&vEndPos.x, vEndPos.z);
  v40 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleFoWProperties(v40, v36, 0, 1, flFoWRadius);
  *&entities.m_Size = v4;
  LODWORD(entities.m_Memory.m_pMemory) = 0;
  v41 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v41, v36, 2, *&entities.m_Size, *&entities.m_Memory.m_pMemory);
  v42 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v42, v36);
  v43 = CDOTABaseAbility::GetCaster(this);
  vFissureLoc = *CBaseEntity::GetAbsOrigin(v43);
  if ( v33 > 0 )
  {
    i = 0;
    while ( 1 )
    {
      m_Value = this->m_iTeamNum.m_Value;
      vFissureLoc.x = v96 + vFissureLoc.x;
      vFissureLoc.y = v95 + vFissureLoc.y;
      vFissureLoc.z = v94 + vFissureLoc.z;
      v45 = CDOTABaseAbility::GetCaster(this);
      v46 = Thinker_Create(v45, this, "modifier_earthshaker_fissure", &kv, vFissureLoc, m_Value, 1, 0, 0);
      m_nObstructionProperties = v46->m_nObstructionProperties;
      m_pObstructionRecord = v46->m_pObstructionRecord;
      BYTE1(m_nObstructionProperties) |= 8u;
      v46->m_nObstructionProperties = m_nObstructionProperties;
      if ( m_pObstructionRecord != 0 )
        m_pObstructionRecord->m_ObjectProperties = m_nObstructionProperties;
      C2DGridObstructionManager::UpdateObjectObstruction(&g_GridNav.m_ObstructionManager, &v46->CObstructionObject);
      entities.m_Size = 0;
      entities.m_Memory.m_nAllocationCount = 0;
      entities.m_Memory.m_pMemory = 0;
      entities.m_Memory.m_nGrowSize = 0;
      v49 = CDOTABaseAbility::GetCaster(this);
      v50 = CDOTABaseAbility::GetCaster(this);
      FindUnitsInRadius(v50->m_iTeamNum.m_Value, &vFissureLoc, v49, flFoWRadius, &entities, 3, 19, 80, 0, 0);
      if ( entities.m_Size > 0 )
        break;
LABEL_46:
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
      if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
        if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
      }
      if ( ++i == nSegments )
        goto LABEL_48;
    }
    v51 = 0;
    while ( 1 )
    {
      v52 = &entities.m_Memory.m_pMemory[v51];
      m_Index = v52->m_Index;
      if ( v52->m_Index + 2 <= 1
        || (v54 = v52->m_Index,
            (v55 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v52->m_Index) >> 9) & 0x3F]) == 0)
        || (v56 = &v55[v54 & 0x1FF]) == 0
        || m_Index != v56->m_EHandle.m_Index
        || (m_pInstance = v56->m_pInstance, v56->m_pInstance == 0)
        || BYTE3(m_pInstance[7]._vptr_IHandleEntity) == 0 )
      {
        m_pInstance = 0;
      }
      if ( CDOTABaseAbility::GetCaster(this) != m_pInstance )
      {
        m_Size = fissuredEntities.m_Size;
        if ( fissuredEntities.m_Size <= 0 )
          goto LABEL_22;
        if ( m_pInstance != *fissuredEntities.m_Memory.m_pMemory )
          break;
      }
LABEL_45:
      if ( entities.m_Size <= ++v51 )
        goto LABEL_46;
    }
    v59 = fissuredEntities.m_Memory.m_pMemory + 1;
    v60 = 0;
    while ( ++v60 != fissuredEntities.m_Size )
    {
      if ( m_pInstance == *v59++ )
      {
        if ( v60 != -1 )
          goto LABEL_45;
        v61 = fissuredEntities.m_Size;
        if ( fissuredEntities.m_Memory.m_nAllocationCount != fissuredEntities.m_Size )
          goto LABEL_23;
        goto LABEL_58;
      }
    }
LABEL_22:
    v61 = fissuredEntities.m_Size;
    if ( fissuredEntities.m_Memory.m_nAllocationCount == fissuredEntities.m_Size )
    {
LABEL_58:
      CUtlMemory<CDOTA_BaseNPC *,int>::Grow(&fissuredEntities.m_Memory, 1);
      v61 = fissuredEntities.m_Size;
    }
LABEL_23:
    fissuredEntities.m_Size = v61 + 1;
    v62 = &fissuredEntities.m_Memory.m_pMemory[m_Size];
    if ( v62 != 0 )
      *v62 = m_pInstance;
    v63 = CDOTABaseAbility::GetCaster(this);
    v64 = CBaseEntity::GetAbsOrigin(v63);
    v65 = CBaseEntity::GetAbsOrigin(m_pInstance);
    v66 = (((v65->x - v64->x) * v102) + ((v65->y - v64->y) * x)) + ((v65->z - v64->z) * 0.0);
    v67 = ((*(&m_pInstance[48]._vptr_IHandleEntity + 1) + *&m_pInstance[48].m_pEntity) * 3.0) - fabs(v66);
    if ( v67 < 0.0 )
    {
      v105 = 0.0;
      v68 = 0.0;
    }
    else
    {
      v68 = v67;
      v105 = 0.0 * v68;
    }
    v69 = LODWORD(v102);
    *v69.m128i_i32 = v102 * v68;
    v70 = v68 * x;
    *&v71 = COERCE_FLOAT(_mm_cvtsi128_si32(v69));
    fFissureStepLengtha = v70;
    if ( v66 < 0.0 )
    {
      v71 ^= 0x80000000;
      fFissureStepLengtha = -v70;
      v105 = -v105;
    }
    v72 = CBaseEntity::GetAbsOrigin(m_pInstance);
    v73 = *&v71;
    v74 = fissuredEntityPositions.m_Size;
    v75 = fFissureStepLengtha + v72->y;
    v76 = v105 + v72->z;
    v100 = v73 + v72->x;
    v77 = fissuredEntityPositions.m_Size;
    fFissureStepLengthb = v75;
    v106 = v76;
    if ( fissuredEntityPositions.m_Size == fissuredEntityPositions.m_Memory.m_nAllocationCount )
    {
      CUtlMemory<Vector,int>::Grow(&fissuredEntityPositions.m_Memory, 1);
      v77 = fissuredEntityPositions.m_Size;
    }
    fissuredEntityPositions.m_Size = v77 + 1;
    v78 = &fissuredEntityPositions.m_Memory.m_pMemory[v74];
    if ( v78 != 0 )
    {
      v78->x = v100;
      v78->y = fFissureStepLengthb;
      v78->z = v106;
    }
    m_CScriptComponent_high = HIBYTE(m_pInstance[7].m_CScriptComponent);
    if ( m_CScriptComponent_high != CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value )
    {
      v80 = m_pInstance[58]._vptr_IHandleEntity;
      if ( (BYTE1(v80) & 2) == 0 && LOBYTE(m_pInstance[71]._vptr_IHandleEntity) == 0 && (BYTE1(v80) & 1) == 0 )
      {
        v81 = 0;
        if ( BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0
          && (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0
          && LOBYTE(m_pInstance[71].m_pEntity) == 0 )
        {
          v81 = m_pInstance;
        }
        v82 = CDOTABaseAbility::GetCaster(this);
        if ( v82 != 0 && (v82->m_iUnitType & 1) != 0 )
          v83 = v82;
        else
          v83 = 0;
        EconEntity_OnOwnerKillEaterEvent(
          v83,
          v81,
          kill_eater_event_t::kKillEaterEventType_Earthshaker_FissureStuns,
          1,
          INVALID_ITEM_DEF_INDEX);
        v84 = CDOTABaseAbility::GetCaster(this);
        CDOTA_BaseNPC::AddNewModifier(m_pInstance, v84, this, "modifier_earthshaker_fissure_stun", &kv2, 0);
        *v85.m128i_i32 = (*(this->_vptr_IHandleEntity + 247))(this);
        v86 = COERCE_FLOAT(_mm_cvtsi128_si32(v85));
        v87 = CDOTABaseAbility::GetCaster(this);
        ApplyDamage(v87, m_pInstance, this, v86, 2, 0);
      }
    }
    goto LABEL_45;
  }
LABEL_48:
  v88 = 0;
  v89 = 0;
  for ( j = 0; fissuredEntities.m_Size > j; ++v88 )
  {
    FindClearSpaceForUnit(fissuredEntities.m_Memory.m_pMemory[v89], fissuredEntityPositions.m_Memory.m_pMemory[v88], 0);
    ++j;
    ++v89;
  }
  v91 = CDOTABaseAbility::GetCaster(this);
  DOTA_EmitSoundLocationWithCaster(&vStartPos, "Hero_EarthShaker.Fissure.Cast", v91);
  DOTA_EmitSoundLocation(&vEndPos, "Hero_EarthShaker.Fissure", 0);
  KeyValues::~KeyValues(&kv2);
  KeyValues::~KeyValues(&kv);
  fissuredEntityPositions.m_Size = 0;
  if ( (fissuredEntityPositions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<Vector,int>::Purge(&fissuredEntityPositions.m_Memory);
    if ( (fissuredEntityPositions.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<Vector,int>::Purge(&fissuredEntityPositions.m_Memory);
  }
  fissuredEntities.m_Size = 0;
  if ( (fissuredEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
  {
    CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&fissuredEntities.m_Memory);
    if ( (fissuredEntities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      CUtlMemory<CDOTA_BaseNPC *,int>::Purge(&fissuredEntities.m_Memory);
  }
}


// CDOTA_Ability_Earthshaker_Fissure::GetAbilityDamageToTargetOverInterval  (line 176, @0x00000000029bb370, libserver.so)
// calls: CDOTA_BaseNPC::GetArmorReductionForDamageType
__int64 __fastcall CDOTA_Ability_Earthshaker_Fissure::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Earthshaker_Fissure *const this,
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


// CDOTA_Ability_Earthshaker_Fissure::GetStunDuration  (line 186, @0x00000000029deb40, libserver.so)
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<float>
float __fastcall CDOTA_Ability_Earthshaker_Fissure::GetStunDuration(CDOTA_Ability_Earthshaker_Fissure *const this)
{
  return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "stun_duration", -1, 1);
}


// CDOTA_Modifier_Earthshaker_Fissure_Stun::~CDOTA_Modifier_Earthshaker_Fissure_Stun  (line 194, @0x0000000002a108c0, libserver.so)  // inlines: ~CDOTA_Modifier_Stunned
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Earthshaker_Fissure_Stun::~CDOTA_Modifier_Earthshaker_Fissure_Stun(
        CDOTA_Modifier_Earthshaker_Fissure_Stun *const this)
{
  this->_vptr_CDOTA_Buff = &off_411CD70;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Earthshaker_Fissure_Stun::~CDOTA_Modifier_Earthshaker_Fissure_Stun  (line 194, @0x0000000002a108e0, libserver.so)  // inlines: ~CDOTA_Modifier_Earthshaker_Fissure_Stun, ~CDOTA_Modifier_Stunned
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Earthshaker_Fissure_Stun::~CDOTA_Modifier_Earthshaker_Fissure_Stun(
        CDOTA_Modifier_Earthshaker_Fissure_Stun *const this)
{
  this->_vptr_CDOTA_Buff = &off_411CD70;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Earthshaker_Fissure_Thinker::~CDOTA_Modifier_Earthshaker_Fissure_Thinker  (line 205, @0x0000000002a123d0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Earthshaker_Fissure_Thinker::~CDOTA_Modifier_Earthshaker_Fissure_Thinker(
        CDOTA_Modifier_Earthshaker_Fissure_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_433A050;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Earthshaker_Fissure_Thinker::~CDOTA_Modifier_Earthshaker_Fissure_Thinker  (line 205, @0x0000000002a123f0, libserver.so)  // inlines: ~CDOTA_Modifier_Earthshaker_Fissure_Thinker
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Earthshaker_Fissure_Thinker::~CDOTA_Modifier_Earthshaker_Fissure_Thinker(
        CDOTA_Modifier_Earthshaker_Fissure_Thinker *const this)
{
  this->_vptr_CDOTA_Buff = &off_433A050;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Earthshaker_Fissure_Thinker::ShouldSendToClients  (line 211, @0x0000000002a08c60, libserver.so)
bool __fastcall CDOTA_Modifier_Earthshaker_Fissure_Thinker::ShouldSendToClients(
        CDOTA_Modifier_Earthshaker_Fissure_Thinker *const this)
{
  return 0;
}


// CDOTA_Modifier_Earthshaker_Fissure_Thinker::IsHidden  (line 213, @0x0000000002a08c70, libserver.so)
bool __fastcall CDOTA_Modifier_Earthshaker_Fissure_Thinker::IsHidden(
        CDOTA_Modifier_Earthshaker_Fissure_Thinker *const this)
{
  return 1;
}


// CDOTA_Modifier_Earthshaker_Fissure_Thinker::OnDestroy  (line 222, @0x00000000029b7b90, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTA_BaseNPC::UnitEmitSound, UTIL_Remove
// strings: "Hero_EarthShaker.FissureDestroy"
void __fastcall CDOTA_Modifier_Earthshaker_Fissure_Thinker::OnDestroy(
        CDOTA_Modifier_Earthshaker_Fissure_Thinker *const this)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTA_BaseNPC *v3; // rax

  Parent = CDOTA_Buff::GetParent(this);
  CDOTA_BaseNPC::UnitEmitSound(Parent, "Hero_EarthShaker.FissureDestroy", 0.0, 0, 0);
  v3 = CDOTA_Buff::GetParent(this);
  UTIL_Remove(v3);
}


// CDOTA_Modifier_Earthshaker_Fissure_Thinker::CheckState  (line 232, @0x00000000029b49d0, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Earthshaker_Fissure_Thinker::CheckState(
        CDOTA_Modifier_Earthshaker_Fissure_Thinker *const this,
        CDOTABuffState *const buffState)
{
  uint64 m_nDisabledStateMask; // rax

  m_nDisabledStateMask = buffState->m_nDisabledStateMask;
  buffState->m_nEnabledStateMask |= 0x800307uLL;
  buffState->m_nDisabledStateMask = m_nDisabledStateMask & 0xFFFFFFFFFF7FFCF8LL;
}


// CDOTA_Modifier_Fissure_Rooted::~CDOTA_Modifier_Fissure_Rooted  (line 247, @0x0000000002a12f40, libserver.so)  // inlines: ~CDOTA_Modifier_Rooted
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Fissure_Rooted::~CDOTA_Modifier_Fissure_Rooted(
        CDOTA_Modifier_Fissure_Rooted *const this)
{
  this->_vptr_CDOTA_Buff = &off_411ECF0;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Fissure_Rooted::~CDOTA_Modifier_Fissure_Rooted  (line 247, @0x0000000002a12f60, libserver.so)  // inlines: ~CDOTA_Modifier_Fissure_Rooted, ~CDOTA_Modifier_Rooted
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Fissure_Rooted::~CDOTA_Modifier_Fissure_Rooted(
        CDOTA_Modifier_Fissure_Rooted *const this)
{
  this->_vptr_CDOTA_Buff = &off_411ECF0;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Fissure_Rooted::IsPurgable  (line 251, @0x0000000002a08c80, libserver.so)
bool __fastcall CDOTA_Modifier_Fissure_Rooted::IsPurgable(CDOTA_Modifier_Fissure_Rooted *const this)
{
  return 0;
}


// CDOTA_Ability_Earthshaker_EnchantTotem::~CDOTA_Ability_Earthshaker_EnchantTotem  (line 264, @0x0000000002a16ed0, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Earthshaker_EnchantTotem::~CDOTA_Ability_Earthshaker_EnchantTotem(
        CDOTA_Ability_Earthshaker_EnchantTotem *const this)
{
  this->_vptr_IHandleEntity = &off_433A6D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Earthshaker_EnchantTotem::~CDOTA_Ability_Earthshaker_EnchantTotem  (line 264, @0x0000000002a16ef0, libserver.so)  // inlines: ~CDOTA_Ability_Earthshaker_EnchantTotem
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Earthshaker_EnchantTotem::~CDOTA_Ability_Earthshaker_EnchantTotem(
        CDOTA_Ability_Earthshaker_EnchantTotem *const this)
{
  this->_vptr_IHandleEntity = &off_433A6D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Earthshaker_EnchantTotem::Schema_DynamicBinding  (line 266, @0x0000000002a08c90, libserver.so)
// globals: CDOTA_Ability_Earthshaker_EnchantTotem::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Earthshaker_EnchantTotem::Schema_DynamicBinding(
        const CDOTA_Ability_Earthshaker_EnchantTotem *const this)
{
  return CDOTA_Ability_Earthshaker_EnchantTotem::s_pSchemaBinding;
}


// CDOTA_Ability_Earthshaker_EnchantTotem::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 266, @0x0000000002a08ca0, libserver.so)
// globals: CDOTA_Ability_Earthshaker_EnchantTotem::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Earthshaker_EnchantTotem::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Earthshaker_EnchantTotem::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Earthshaker_EnchantTotem::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Earthshaker_EnchantTotem::CEntityInstanceEntityClass::DestructInstance  (line 266, @0x0000000002a08cb0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Earthshaker_EnchantTotem>
void __fastcall CDOTA_Ability_Earthshaker_EnchantTotem::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Earthshaker_EnchantTotem::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Earthshaker_EnchantTotem::CEntityInstanceEntityClass::FreeInstance  (line 266, @0x0000000002a08cd0, libserver.so)
void __fastcall CDOTA_Ability_Earthshaker_EnchantTotem::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Earthshaker_EnchantTotem::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Earthshaker_EnchantTotem::CEntityInstanceEntityClass::CanAllocate  (line 266, @0x0000000002a08cf0, libserver.so)
bool __fastcall CDOTA_Ability_Earthshaker_EnchantTotem::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Earthshaker_EnchantTotem::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Earthshaker_EnchantTotem::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 266, @0x0000000002a08d00, libserver.so)
// globals: CDOTA_Ability_Earthshaker_EnchantTotem::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Earthshaker_EnchantTotem::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Earthshaker_EnchantTotem::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Earthshaker_EnchantTotem::s_pSchemaBinding;
}


// CDOTA_Ability_Earthshaker_EnchantTotem::CEntityInstanceEntityClass::AllocateInstance  (line 266, @0x0000000002a0f580, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Earthshaker_EnchantTotem::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Earthshaker_EnchantTotem::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Earthshaker_EnchantTotem::CEntityInstanceEntityClass::ConstructInstance  (line 266, @0x0000000002a13f30, libserver.so)  // inlines: CDOTA_Ability_Earthshaker_EnchantTotem, Construct<CDOTA_Ability_Earthshaker_EnchantTotem>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Earthshaker_EnchantTotem::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Earthshaker_EnchantTotem::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_433A6D0;
  }
  return p;
}


// CDOTA_Ability_Earthshaker_EnchantTotem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 266, @0x0000000002a1f270, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Earthshaker_EnchantTotem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Earthshaker_EnchantTotem::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Earthshaker_EnchantTotem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 266, @0x0000000002a1f290, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Earthshaker_EnchantTotem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Earthshaker_EnchantTotem::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Earthshaker_EnchantTotem::GetEntityClassInternal  (line 266, @0x0000000002a363b0, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "earthshaker_enchant_totem", "CDOTA_Ability_Earthshaker_EnchantTotem"
// globals: `guard variable for'CDOTA_Ability_Earthshaker_EnchantTotem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_EnchantTotemClass, CDOTA_Ability_Earthshaker_EnchantTotem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_EnchantTotemClass, __dso_handle, CDOTA_Ability_Earthshaker_EnchantTotem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Earthshaker_EnchantTotem::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_EnchantTotemClassInfo, CDOTA_Ability_Earthshaker_EnchantTotem::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_EnchantTotemClassInfo
CEntityClass *__cdecl CDOTA_Ability_Earthshaker_EnchantTotem::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Earthshaker_EnchantTotem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_EnchantTotemClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Earthshaker_EnchantTotem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_EnchantTotemClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Earthshaker_EnchantTotem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_EnchantTotemClass);
    CDOTA_Ability_Earthshaker_EnchantTotem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_EnchantTotemClass._vptr_CEntityClass = off_433A650;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Earthshaker_EnchantTotem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_EnchantTotemClass);
    __cxa_atexit(
      CDOTA_Ability_Earthshaker_EnchantTotem::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Earthshaker_EnchantTotem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_EnchantTotemClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Earthshaker_EnchantTotemClass != 0 )
    return &CDOTA_Ability_Earthshaker_EnchantTotem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_EnchantTotemClass;
  if ( `guard variable for'CDOTA_Ability_Earthshaker_EnchantTotem::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_EnchantTotemClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Earthshaker_EnchantTotem::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_EnchantTotemClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Earthshaker_EnchantTotem::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_EnchantTotemClassInfo,
      "CDOTA_Ability_Earthshaker_EnchantTotem",
      "earthshaker_enchant_totem",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Earthshaker_EnchantTotem::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_EnchantTotemClassInfo);
  }
  CDOTA_Ability_Earthshaker_EnchantTotem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_EnchantTotemClass.m_pClassInfo = &CDOTA_Ability_Earthshaker_EnchantTotem::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_EnchantTotemClassInfo;
  CDOTA_Ability_Earthshaker_EnchantTotem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_EnchantTotemClass.m_pBaseClassInfo = CDOTA_Ability_Earthshaker_EnchantTotem::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_EnchantTotemClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Earthshaker_EnchantTotemClass = &CDOTA_Ability_Earthshaker_EnchantTotem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_EnchantTotemClass;
  CDOTA_Ability_Earthshaker_EnchantTotem::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_EnchantTotemClassInfo.m_pClass = &CDOTA_Ability_Earthshaker_EnchantTotem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_EnchantTotemClass;
  CDOTA_Ability_Earthshaker_EnchantTotem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_EnchantTotemClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Earthshaker_EnchantTotemClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Earthshaker_EnchantTotem::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_EnchantTotemClass;
}


// CDOTA_Ability_Earthshaker_EnchantTotem::GetCastRange  (line 294, @0x0000000002a33a20, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCastRange, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "distance_scepter"
int __fastcall CDOTA_Ability_Earthshaker_EnchantTotem::GetCastRange(
        CDOTA_Ability_Earthshaker_EnchantTotem *const this,
        const Vector *const vLocation,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "distance_scepter", -1, 0);
  else
    return CDOTABaseAbility::GetCastRange(this, &vec3_origin, 0);
}


// CDOTA_Ability_Earthshaker_EnchantTotem::GetStolenActivityModifier  (line 296, @0x0000000002a08d10, libserver.so)
const char *__fastcall CDOTA_Ability_Earthshaker_EnchantTotem::GetStolenActivityModifier(
        CDOTA_Ability_Earthshaker_EnchantTotem *const this)
{
  return "totem";
}


// CDOTA_Ability_Earthshaker_EnchantTotem::YouForgotToImplementOrDeclareServerClass  (line 302, @0x00000000029b49f0, libserver.so)
int __fastcall CDOTA_Ability_Earthshaker_EnchantTotem::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Earthshaker_EnchantTotem *const this)
{
  return 0;
}


// CDOTA_Ability_Earthshaker_EnchantTotem::GetServerClass  (line 302, @0x00000000029c9a70, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Earthshaker_EnchantTotem::GetServerClass(
        CDOTA_Ability_Earthshaker_EnchantTotem *const this)
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


// CDOTA_Ability_Earthshaker_EnchantTotem::GetCooldown  (line 312, @0x00000000029e57e0, libserver.so)
// calls: CDOTABaseAbility::GetCooldown, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "special_bonus_unique_earthshaker"
float __fastcall CDOTA_Ability_Earthshaker_EnchantTotem::GetCooldown(
        CDOTA_Ability_Earthshaker_EnchantTotem *const this,
        int iLevel)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  float result; // xmm0_4
  float flCooldown; // [rsp+Ch] [rbp-14h]

  flCooldown = CDOTABaseAbility::GetCooldown(this, iLevel);
  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "special_bonus_unique_earthshaker", 0);
  result = flCooldown;
  if ( AbilityByName != 0 && AbilityByName->m_iLevel.m_Value > 0 )
    return flCooldown - CDOTABaseAbility::GetLevelSpecialValueFor<int>(AbilityByName, "value", 1, 1);
  return result;
}


// CDOTA_Ability_Earthshaker_EnchantTotem::CastFilterResult  (line 338, @0x00000000029b67d0, libserver.so)
// calls: CDOTABaseAbility::GetCaster
int __fastcall CDOTA_Ability_Earthshaker_EnchantTotem::CastFilterResult(
        CDOTA_Ability_Earthshaker_EnchantTotem *const this,
        CDOTA_BaseNPC *pTarget)
{
  CDOTA_BaseNPC *Caster; // rax
  int v4; // edx

  Caster = CDOTABaseAbility::GetCaster(this);
  v4 = 0;
  if ( Caster != pTarget )
    return 23;
  return v4;
}


// CDOTA_Ability_Earthshaker_EnchantTotem::GetCustomCastError  (line 348, @0x00000000029b4a00, libserver.so)
const char *__fastcall CDOTA_Ability_Earthshaker_EnchantTotem::GetCustomCastError(
        CDOTA_Ability_Earthshaker_EnchantTotem *const this,
        CDOTA_BaseNPC *pTarget)
{
  return "";
}


// CDOTA_Ability_Earthshaker_EnchantTotem::GetBehavior  (line 353, @0x00000000029b8520, libserver.so)  // inlines: GetAbilityData, GetBehavior
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::LoadAbilityData
int __fastcall CDOTA_Ability_Earthshaker_EnchantTotem::GetBehavior(CDOTA_Ability_Earthshaker_EnchantTotem *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(Caster) )
    return 56;
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  return m_pAbilityData->m_iAbilityBehavior;
}


// CDOTA_Ability_Earthshaker_EnchantTotem::GetCastPoint  (line 366, @0x00000000029deb60, libserver.so)
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, CDOTABaseAbility::GetCastPoint, CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetLevelSpecialValueFor<float>
// strings: "castpoint_scepter"
float __fastcall CDOTA_Ability_Earthshaker_EnchantTotem::GetCastPoint(
        CDOTA_Ability_Earthshaker_EnchantTotem *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  Caster = CDOTABaseAbility::GetCaster(this);
  if ( !CDOTA_BaseNPC::HasScepter(Caster) || CDOTABaseAbility::GetCursorTarget(this) != 0 )
    return CDOTABaseAbility::GetCastPoint(this);
  else
    return CDOTABaseAbility::GetLevelSpecialValueFor<float>(this, "castpoint_scepter", 1, 0);
}


// CDOTA_Ability_Earthshaker_EnchantTotem::OnSpellStart  (line 379, @0x00000000029df440, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FastSqrt, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetParent, GetTeamNumber, IndexToIdentity, IsValid, Length2D, LookupEntity, Purge, ToDOTABaseNPC, Vector, VectorSubtract, _mm_load_ss, _mm_set_ss, _mm_sqrt_ss, operator CBaseEntity*, operator CEntityInstance*, operator!=, operator-, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetCursorTarget, CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::HasScepter, KeyValues::KeyValues, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CDOTA_ParticleManager::SetParticleControlEnt, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::ReleaseParticleIndex (25 total)
// strings: "modifier_earthshaker_enchant_totem", "particles/units/heroes/hero_earthshaker/earthshaker_totem_cast.vpcf", "attach_hitloc", "earthshaker_aftershock", "aftershock_range", "modifier_stunned" (11 total)
// globals: CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Ability_Earthshaker_EnchantTotem::OnSpellStart(
        CDOTA_Ability_Earthshaker_EnchantTotem *const this)
{
  CBaseEntity *CursorTarget; // rax
  CBaseEntity *v3; // rbx
  CDOTA_BaseNPC *Caster; // rax
  float v5; // xmm1_4
  CDOTA_BaseNPC *v6; // rbx
  CDOTA_BaseNPC *v7; // rax
  CDOTA_BaseNPC *v8; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_BaseNPC *v10; // r13
  CDOTA_ParticleManager *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  const Vector *v13; // r13
  CDOTA_BaseNPC *v14; // r14
  CDOTA_ParticleManager *v15; // rax
  CDOTA_ParticleManager *v16; // rax
  CDOTA_BaseNPC *v17; // rax
  CDOTA_BaseNPC *v18; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v20; // r13
  float LevelSpecialValue; // xmm0_4
  CDOTA_BaseNPC *v22; // r14
  CDOTA_BaseNPC *v23; // rax
  const Vector *v24; // rbx
  CDOTA_BaseNPC *v25; // rax
  float v26; // xmm1_4
  __int64 v27; // rbx
  CHandle<CBaseEntity> *v28; // rdx
  uint32 m_Index; // eax
  __int16 v30; // cx
  CEntityIdentity *v31; // rdx
  CEntityIdentity *v32; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTA_BaseNPC *v34; // rax
  CDOTA_BaseNPC *v35; // rax
  CBaseEntity *OwnerEntity; // rbx
  CGameSceneNode *m_pParent; // rdi
  CDOTA_ParticleManager *v38; // rax
  int Particle; // ebx
  CDOTA_ParticleManager *v40; // rax
  CDOTA_ParticleManager *v41; // rax
  CDOTA_BaseNPC *v42; // rax
  CDOTA_BaseNPC *v43; // rax
  const Vector *AbsOrigin; // rbx
  float v45; // xmm0_4
  float v46; // xmm1_4
  __int64 (__fastcall *v47)(CDOTA_Ability_Earthshaker_EnchantTotem *const, CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > *, _QWORD); // rbx
  float v48; // xmm1_4
  float v49; // xmm1_4
  float v50; // xmm1_4
  CDOTA_BaseNPC *v51; // rbx
  CDOTA_BaseNPC *v52; // rax
  float flRadius; // [rsp+24h] [rbp-9Ch]
  CBaseEntity *flDamage; // [rsp+30h] [rbp-90h]
  float flDamagea; // [rsp+30h] [rbp-90h]
  float flDamageb; // [rsp+30h] [rbp-90h]
  double v57; // [rsp+40h] [rbp-80h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+50h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v60; // [rsp+88h] [rbp-38h]
  Vector CursorPosition; // 0:kr00_12.12
  Vector v62; // 0:kr14_12.12

  v60 = __readfsqword(0x28u);
  CursorTarget = CDOTABaseAbility::GetCursorTarget(this);
  v3 = CursorTarget;
  if ( CursorTarget != 0 && CursorTarget->m_bIsDOTANPC )
  {
    Caster = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::HasScepter(Caster);
    flDamage = v3;
  }
  else
  {
    v42 = CDOTABaseAbility::GetCaster(this);
    if ( CDOTA_BaseNPC::HasScepter(v42) )
    {
      CursorPosition = CDOTABaseAbility::GetCursorPosition(this);
      *&entities.m_Size = CursorPosition;
      if ( vec3_origin.x != CursorPosition.x
        || vec3_origin.y != *(&entities.m_Size + 1)
        || vec3_origin.z != CursorPosition.z )
      {
        v43 = CDOTABaseAbility::GetCaster(this);
        AbsOrigin = CBaseEntity::GetAbsOrigin(v43);
        v62 = CDOTABaseAbility::GetCursorPosition(this);
        v45 = v62.x - AbsOrigin->x;
        v46 = v62.y - AbsOrigin->y;
        v47 = *(this->_vptr_IHandleEntity + 226);
        flDamageb = fsqrt((v45 * v45) + (v46 * v46));
        *&entities.m_Size = CDOTABaseAbility::GetCursorPosition(this);
        LODWORD(v47) = v47(this, &entities, 0);
        if ( ((*(this->_vptr_IHandleEntity + 228))(this) + v47) >= flDamageb )
        {
          *&entities.m_Size = CDOTABaseAbility::GetCursorPosition(this);
          KeyValues::KeyValues(&kv, "modifier_earthshaker_enchant_totem_leap");
          KeyValues::SetFloat(&kv, "vLocX", v48);
          KeyValues::SetFloat(&kv, "vLocY", v49);
          KeyValues::SetFloat(&kv, "vLocZ", v50);
          v51 = CDOTABaseAbility::GetCaster(this);
          v52 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(v52, v51, this, "modifier_earthshaker_enchant_totem_leap", &kv, 0);
          KeyValues::~KeyValues(&kv);
          return;
        }
      }
    }
    flDamage = 0;
  }
  KeyValues::KeyValues(&kv, "modifier_earthshaker_enchant_totem");
  CDOTABaseAbility::GetDuration(this);
  KeyValues::SetFloat(&kv, "duration", v5);
  v6 = CDOTABaseAbility::GetCaster(this);
  v7 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::AddNewModifier(v7, v6, this, "modifier_earthshaker_enchant_totem", &kv, 0);
  v8 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v8) = CDOTA_ParticleManager::CreateParticle(
                  ParticleManager,
                  "particles/units/heroes/hero_earthshaker/earthshaker_totem_cast.vpcf",
                  2,
                  v8,
                  0,
                  0);
  v10 = CDOTABaseAbility::GetCaster(this);
  v11 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v11, v8, 0, v10, 1, 0, vec3_invalid, 1);
  v12 = CDOTABaseAbility::GetCaster(this);
  v13 = CBaseEntity::GetAbsOrigin(v12);
  v14 = CDOTABaseAbility::GetCaster(this);
  v15 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControlEnt(v15, v8, 1, v14, 5, "attach_hitloc", *v13, 1);
  v16 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v16, v8);
  KeyValues::~KeyValues(&kv);
  v17 = CDOTABaseAbility::GetCaster(this);
  if ( CDOTA_BaseNPC::HasScepter(v17) && flDamage != 0 )
  {
    v18 = CDOTABaseAbility::GetCaster(this);
    AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v18, "earthshaker_aftershock", 0);
    v20 = AbilityByName;
    if ( AbilityByName != 0
      && AbilityByName->m_iLevel.m_Value > 0
      && (CDOTABaseAbility::GetCaster(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
    {
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v20, "aftershock_range", 1, 0);
      entities.m_Size = 0;
      entities.m_Memory.m_pMemory = 0;
      entities.m_Memory.m_nAllocationCount = 0;
      entities.m_Memory.m_nGrowSize = 0;
      flRadius = LevelSpecialValue;
      v22 = CDOTABaseAbility::GetCaster(this);
      v23 = CDOTABaseAbility::GetCaster(this);
      v24 = CBaseEntity::GetAbsOrigin(v23);
      v25 = CDOTABaseAbility::GetCaster(this);
      FindUnitsInRadius(v25->m_iTeamNum.m_Value, v24, v22, flRadius, &entities, 2, 19, 0, 0, 0);
      KeyValues::KeyValues(&kv, "modifier_stunned");
      CDOTABaseAbility::GetDuration(v20);
      KeyValues::SetFloat(&kv, "duration", v26);
      if ( entities.m_Size > 0 )
      {
        v27 = 0;
        do
        {
          while ( 1 )
          {
            v28 = &entities.m_Memory.m_pMemory[v27];
            m_Index = v28->m_Index;
            if ( v28->m_Index + 2 > 1 )
            {
              v30 = v28->m_Index;
              v31 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v28->m_Index) >> 9) & 0x3F];
              if ( v31 != 0 )
              {
                v32 = &v31[v30 & 0x1FF];
                if ( v32 != 0 && m_Index == v32->m_EHandle.m_Index )
                {
                  m_pInstance = v32->m_pInstance;
                  if ( v32->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                    break;
                }
              }
            }
            if ( entities.m_Size <= ++v27 )
              goto LABEL_19;
          }
          v34 = CDOTABaseAbility::GetCaster(this);
          CDOTA_BaseNPC::AddNewModifier(m_pInstance, v34, v20, "modifier_stunned", &kv, 0);
          flDamagea = (*(v20->_vptr_IHandleEntity + 247))(v20);
          v35 = CDOTABaseAbility::GetCaster(this);
          ApplyDamage(v35, m_pInstance, v20, flDamagea, 2, 0);
          ++v27;
        }
        while ( entities.m_Size > v27 );
      }
LABEL_19:
      OwnerEntity = 0;
      m_pParent = this->m_pGameSceneNode->m_pParent;
      if ( m_pParent != 0 )
        OwnerEntity = CGameSceneNode::GetOwnerEntity(m_pParent);
      v38 = GetParticleManager();
      Particle = CDOTA_ParticleManager::CreateParticle(
                   v38,
                   "particles/units/heroes/hero_earthshaker/earthshaker_aftershock.vpcf",
                   1,
                   OwnerEntity,
                   0,
                   0);
      *&v57 = flRadius;
      *(&v57 + 1) = flRadius;
      v40 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControl(v40, Particle, 1, v57, flRadius);
      v41 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v41, Particle);
      KeyValues::~KeyValues(&kv);
      CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
      if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
      {
        CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
        if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
          CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
      }
    }
  }
}


// CDOTA_Ability_Earthshaker_EnchantTotem::GetStunDuration  (line 446, @0x00000000029b7220, libserver.so)  // inlines: IsTrained
// calls: CDOTABaseAbility::GetCaster, CDOTA_BaseNPC::FindAbilityByName, CDOTABaseAbility::GetEffectiveLevel, CDOTABaseAbility::GetDuration
// strings: "earthshaker_aftershock"
float __fastcall CDOTA_Ability_Earthshaker_EnchantTotem::GetStunDuration(
        CDOTA_Ability_Earthshaker_EnchantTotem *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v3; // rbx

  Caster = CDOTABaseAbility::GetCaster(this);
  AbilityByName = CDOTA_BaseNPC::FindAbilityByName(Caster, "earthshaker_aftershock", 0);
  v3 = AbilityByName;
  if ( AbilityByName != 0 && CDOTABaseAbility::GetEffectiveLevel(AbilityByName) >= 0 )
    return CDOTABaseAbility::GetDuration(v3);
  else
    return 0.0;
}


// CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::~CDOTA_Modifier_Earthshaker_EnchantTotem_Leap  (line 470, @0x0000000002a12350, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::~CDOTA_Modifier_Earthshaker_EnchantTotem_Leap(
        CDOTA_Modifier_Earthshaker_EnchantTotem_Leap *const this)
{
  this->_vptr_CDOTA_Buff = &off_433B190;
  this->_vptr_CHorizontalMotionController = &off_433B498;
  this->_vptr_CVerticalMotionController = &off_433B4D8;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::~CDOTA_Modifier_Earthshaker_EnchantTotem_Leap  (line 470, @0x0000000002a12380, libserver.so)  // inlines: ~CDOTA_Modifier_Earthshaker_EnchantTotem_Leap
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::~CDOTA_Modifier_Earthshaker_EnchantTotem_Leap(
        CDOTA_Modifier_Earthshaker_EnchantTotem_Leap *const this)
{
  this->_vptr_CDOTA_Buff = &off_433B190;
  this->_vptr_CHorizontalMotionController = &off_433B498;
  this->_vptr_CVerticalMotionController = &off_433B4D8;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::IsHidden  (line 485, @0x0000000002a08d20, libserver.so)
bool __fastcall CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::IsHidden(
        CDOTA_Modifier_Earthshaker_EnchantTotem_Leap *const this)
{
  return 1;
}


// CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::IsStunDebuff  (line 486, @0x0000000002a08d30, libserver.so)
bool __fastcall CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::IsStunDebuff(
        CDOTA_Modifier_Earthshaker_EnchantTotem_Leap *const this)
{
  return 1;
}


// CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::IsPurgable  (line 488, @0x0000000002a08d40, libserver.so)
bool __fastcall CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::IsPurgable(
        CDOTA_Modifier_Earthshaker_EnchantTotem_Leap *const this)
{
  return 0;
}


// CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::IsHorizontalMotionValidToApply  (line 494, @0x0000000002a08d50, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::IsHorizontalMotionValidToApply(
        CDOTA_Modifier_Earthshaker_EnchantTotem_Leap *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::IsVerticalMotionValidToApply  (line 495, @0x0000000002a08d80, libserver.so)  // inlines: IsMarkedForDeletion
bool __fastcall CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::IsVerticalMotionValidToApply(
        CDOTA_Modifier_Earthshaker_EnchantTotem_Leap *const this)
{
  return (*(&this->CDOTA_Buff + 138) & 4) == 0;
}


// CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::IsMotionController  (line 497, @0x0000000002a08db0, libserver.so)
bool __fastcall CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::IsMotionController(
        CDOTA_Modifier_Earthshaker_EnchantTotem_Leap *const this)
{
  return 1;
}


// CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::RemoveOnDeath  (line 504, @0x0000000002a08dc0, libserver.so)
bool __fastcall CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::RemoveOnDeath(
        CDOTA_Modifier_Earthshaker_EnchantTotem_Leap *const this)
{
  return 0;
}


// CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::DeclareFunctions  (line 529, @0x00000000029b4a10, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::GetOverrideAnimation(CModifierParams const&)
void __fastcall CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::DeclareFunctions(
        CDOTA_Modifier_Earthshaker_EnchantTotem_Leap *const this)
{
  this->m_Functions[90].__pfn = CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::GetOverrideAnimation;
  this->m_Functions[90].__delta = 0;
}


// CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::GetOverrideAnimation  (line 536, @0x00000000029b4a30, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::GetOverrideAnimation(
        CDOTA_Modifier_Earthshaker_EnchantTotem_Leap *const this,
        const CModifierParams *const params)
{
  return 0x44BDA00000000001uLL;
}


// CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::CheckState  (line 541, @0x00000000029b4a50, libserver.so)  // inlines: Enable
void __fastcall CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::CheckState(
        CDOTA_Modifier_Earthshaker_EnchantTotem_Leap *const this,
        CDOTABuffState *const buffState)
{
  buffState->m_nEnabledStateMask |= 0x20uLL;
  buffState->m_nDisabledStateMask &= ~0x20uLL;
}


// CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::OnCreated  (line 550, @0x00000000029e10a0, libserver.so)  // inlines: DotaRetrieveAbilityValue<float>, GetLevelSpecialValueFor<float>, Square<float>, VectorDivide, VectorSubtract, operator-, operator/, operator=
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::ApplyHorizontalMotionController, CDOTA_Buff::Destroy, CDOTALocomotor::ApplyVerticalMotionController, CBaseEntity::GetAbsOrigin, GetPositionOnGround, KeyValues::GetFloat, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<float>, CDOTA_Buff::CreateBuffParticleEffect, GetParticleManager, CDOTA_ParticleManager::SetParticleControlEnt (15 total)
// strings: "vLocZ", "vLocY", "vLocX", "particles/units/heroes/hero_earthshaker/earthshaker_totem_leap_blur.vpcf", "attach_hitloc"
// globals: ES_MINIMUM_HEIGHT_ABOVE_LOWEST, ES_MINIMUM_HEIGHT_ABOVE_HIGHEST, ES_ACCELERATION_Z
void __fastcall CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::OnCreated(
        CDOTA_Modifier_Earthshaker_EnchantTotem_Leap *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Parent; // rax
  CDOTALocomotor *v5; // rax
  CDOTA_BaseNPC *v6; // rax
  CDOTALocomotor *v7; // rax
  CDOTA_BaseNPC *v8; // r13
  CDOTA_BaseNPC *v9; // rax
  const Vector *AbsOrigin; // rax
  float v11; // xmm1_4
  float v12; // xmm1_4
  vec_t v13; // xmm0_4
  CDOTABaseAbility *Ability; // rdi
  float LevelSpecialValue; // xmm0_4
  __m128d z_low; // xmm2
  float v17; // xmm4_4
  float z; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  double v23; // xmm0_8
  float v24; // xmm3_4
  float m_flInitialVelocityZ; // xmm2_4
  float v26; // xmm0_4
  float v27; // xmm2_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm2_4
  vec_t v32; // xmm0_4
  CDOTA_BaseNPC *v33; // rax
  int BuffParticleEffect; // r12d
  CDOTA_BaseNPC *v35; // rax
  const Vector *v36; // r13
  CDOTA_BaseNPC *v37; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  vec_t Float; // [rsp+8h] [rbp-38h]
  vec_t v40; // [rsp+Ch] [rbp-34h]
  Vector PositionOnGround; // 0:kr00_12.12

  this->m_bHorizontalMotionInterrupted = 0;
  this->m_bDamageApplied = 0;
  this->m_bTargetTeleported = 0;
  Parent = CDOTA_Buff::GetParent(this);
  v5 = (*(Parent->_vptr_IHandleEntity + 376))(Parent);
  if ( CDOTALocomotor::ApplyHorizontalMotionController(v5, &this->CHorizontalMotionController, 0)
    && (v6 = CDOTA_Buff::GetParent(this),
        v7 = (*(v6->_vptr_IHandleEntity + 376))(v6),
        CDOTALocomotor::ApplyVerticalMotionController(v7, &this->CVerticalMotionController, 0)) )
  {
    v8 = CDOTA_Buff::GetParent(this);
    v9 = CDOTA_Buff::GetParent(this);
    AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
    PositionOnGround = GetPositionOnGround(AbsOrigin, v8);
    this->m_vStartPosition.z = PositionOnGround.z;
    this->m_vStartPosition.x = PositionOnGround.x;
    this->m_flCurrentTimeHoriz = 0.0;
    this->m_vStartPosition.y = PositionOnGround.y;
    this->m_flCurrentTimeVert = 0.0;
    Float = KeyValues::GetFloat(pKV, "vLocZ", PositionOnGround.z);
    v40 = KeyValues::GetFloat(pKV, "vLocY", v11);
    v13 = KeyValues::GetFloat(pKV, "vLocX", v12);
    this->m_vLoc.x = v13;
    this->m_vLoc.y = v40;
    this->m_vLoc.z = Float;
    this->m_vLastKnownTargetPosition.x = v13;
    this->m_vLastKnownTargetPosition.y = v40;
    this->m_vLastKnownTargetPosition.z = Float;
    Ability = CDOTA_Buff::GetAbility(this);
    if ( Ability != 0 )
      LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(Ability, "duration", -1, 0);
    else
      LevelSpecialValue = 0.0;
    z_low = LODWORD(this->m_vLastKnownTargetPosition.z);
    v17 = (ES_MINIMUM_HEIGHT_ABOVE_LOWEST * LevelSpecialValue) * LevelSpecialValue;
    z = this->m_vStartPosition.z;
    v19 = fmaxf(
            fminf(*z_low.m128d_f64, z) + v17,
            fmaxf(this->m_vLastKnownTargetPosition.z, z) + ES_MINIMUM_HEIGHT_ABOVE_HIGHEST);
    v20 = fsqrt(((v19 - z) + (v19 - z)) * ES_ACCELERATION_Z);
    v21 = ES_ACCELERATION_Z;
    this->m_flInitialVelocityZ = v20;
    v22 = (v20 * v20) - ((v21 + v21) * (*z_low.m128d_f64 - this->m_vStartPosition.z));
    if ( v22 < 0.0 )
      v23 = 0.0;
    else
      v23 = v22;
    z_low.m128d_f64[0] = sqrt(v23);
    v24 = _mm_movedup_pd(z_low).m128d_f64[0];
    m_flInitialVelocityZ = this->m_flInitialVelocityZ;
    this->m_vHorizontalVelocity.z = 0.0;
    v26 = m_flInitialVelocityZ;
    v27 = (m_flInitialVelocityZ - v24) / v21;
    v28 = (v26 + v24) / v21;
    v29 = this->m_vLastKnownTargetPosition.y - this->m_vStartPosition.y;
    v30 = fmaxf(v28, v27);
    v31 = 1.0 / v30;
    this->m_flPredictedTotalTime = v30;
    v32 = (this->m_vLastKnownTargetPosition.x - this->m_vStartPosition.x) * (1.0 / v30);
    this->m_vHorizontalVelocity.y = v29 * v31;
    this->m_vHorizontalVelocity.x = v32;
    v33 = CDOTA_Buff::GetParent(this);
    BuffParticleEffect = CDOTA_Buff::CreateBuffParticleEffect(
                           this,
                           "particles/units/heroes/hero_earthshaker/earthshaker_totem_leap_blur.vpcf",
                           1,
                           v33,
                           0);
    v35 = CDOTA_Buff::GetParent(this);
    v36 = CBaseEntity::GetAbsOrigin(v35);
    v37 = CDOTA_Buff::GetParent(this);
    ParticleManager = GetParticleManager();
    CDOTA_ParticleManager::SetParticleControlEnt(
      ParticleManager,
      BuffParticleEffect,
      1,
      v37,
      5,
      "attach_hitloc",
      *v36,
      1);
    CDOTA_Buff::AddParticle(this, BuffParticleEffect, 0, 0, -1, 0, 0);
  }
  else
  {
    CDOTA_Buff::Destroy(this, 0, 0, 0);
  }
}


// CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::UpdateHorizontalMotion  (line 619, @0x00000000029b95e0, libserver.so)  // inlines: NormalizeInPlace, VectorAdd, VectorDivide, VectorMultiply, VectorSubtract, operator*, operator+, operator-, operator/, operator=
// calls: CBaseEntity::GetAbsOrigin, VectorNormalize, CBaseEntity::SetAbsOrigin
// globals: ES_MAX_HORIZONTAL_ACCELERATION
void __fastcall CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::UpdateHorizontalMotion(
        CDOTA_Modifier_Earthshaker_EnchantTotem_Leap *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  float m_flPredictedTotalTime; // xmm2_4
  float y; // xmm3_4
  float v8; // xmm4_4
  float v9; // xmm4_4
  const Vector *AbsOrigin; // rax
  float v11; // xmm3_4
  float v12; // xmm2_4
  vec_t v13; // xmm4_4
  vec_t v14; // xmm0_4
  float v15; // xmm0_4
  vec_t v16; // xmm3_4
  vec_t v17; // xmm2_4
  vec_t v18; // xmm0_4
  float v19; // [rsp+Ch] [rbp-44h]
  float v20; // [rsp+10h] [rbp-40h]
  float dtb; // [rsp+14h] [rbp-3Ch]
  float v23; // [rsp+18h] [rbp-38h]
  float x; // [rsp+18h] [rbp-38h]
  float z; // [rsp+1Ch] [rbp-34h]
  Vector vVelDif; // [rsp+20h] [rbp-30h] BYREF
  Vector vNewPos; // [rsp+30h] [rbp-20h] BYREF

  m_flPredictedTotalTime = this->m_flPredictedTotalTime;
  y = this->m_vStartPosition.y;
  v8 = fminf(a3 + this->m_flCurrentTimeHoriz, m_flPredictedTotalTime);
  this->m_flCurrentTimeHoriz = v8;
  v9 = v8 / m_flPredictedTotalTime;
  v19 = ((this->m_vLastKnownTargetPosition.x - this->m_vStartPosition.x) * v9) + this->m_vStartPosition.x;
  v23 = ((this->m_vLastKnownTargetPosition.y - y) * v9) + y;
  AbsOrigin = CBaseEntity::GetAbsOrigin(me);
  v20 = a3;
  v11 = 1.0 / a3;
  v12 = v23;
  x = AbsOrigin->x;
  dtb = AbsOrigin->y;
  z = AbsOrigin->z;
  v13 = (0.0 * v11) - this->m_vHorizontalVelocity.z;
  v14 = ((v19 - AbsOrigin->x) * v11) - this->m_vHorizontalVelocity.x;
  vVelDif.y = ((v12 - dtb) * v11) - this->m_vHorizontalVelocity.y;
  vVelDif.z = v13;
  vVelDif.x = v14;
  v15 = fminf(VectorNormalize(&vVelDif), ES_MAX_HORIZONTAL_ACCELERATION);
  v16 = ((vVelDif.x * v15) * v20) + this->m_vHorizontalVelocity.x;
  v17 = ((vVelDif.y * v15) * v20) + this->m_vHorizontalVelocity.y;
  v18 = ((v15 * vVelDif.z) * v20) + this->m_vHorizontalVelocity.z;
  this->m_vHorizontalVelocity.x = v16;
  this->m_vHorizontalVelocity.y = v17;
  this->m_vHorizontalVelocity.z = v18;
  vNewPos.x = (v16 * v20) + x;
  vNewPos.y = (v17 * v20) + dtb;
  vNewPos.z = (v20 * v18) + z;
  CBaseEntity::SetAbsOrigin(me, &vNewPos);
}


// CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::UpdateVerticalMotion  (line 644, @0x00000000029dfb40, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Square<float>, ToDOTABaseNPC, Vector, operator CBaseEntity*, operator CEntityInstance*, operator[], ~CUtlVector
// calls: CBaseEntity::GetAbsOrigin, CDOTA_Buff::GetParent, GetGroundHeight, CBaseEntity::SetAbsOrigin, KeyValues::KeyValues, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::AddNewModifier, KeyValues::~KeyValues, CDOTA_BaseNPC::FindAbilityByName (23 total)
// strings: "modifier_earthshaker_enchant_totem", "earthshaker_aftershock", "aftershock_range", "modifier_stunned", "particles/units/heroes/hero_earthshaker/earthshaker_aftershock.vpcf"
// globals: ES_ACCELERATION_Z, CEntityHandle::gm_pEntityList
void __fastcall CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::UpdateVerticalMotion(
        CDOTA_Modifier_Earthshaker_EnchantTotem_Leap *const this,
        CDOTA_BaseNPC *me,
        float a3,
        float dt)
{
  float v6; // xmm2_4
  float v7; // xmm5_4
  float m_flInitialVelocityZ; // r14d
  const Vector *AbsOrigin; // rax
  float m_flCurrentTimeVert; // xmm0_4
  float v11; // xmm3_4
  float v12; // xmm0_4
  CDOTA_BaseNPC *Parent; // rax
  float GroundHeight; // xmm0_4
  CDOTABaseAbility *Ability; // rax
  float v16; // xmm1_4
  CDOTABaseAbility *v17; // r13
  CDOTA_BaseNPC *Caster; // rbx
  CDOTA_BaseNPC *v19; // rax
  CDOTA_BaseNPC *v20; // rax
  CDOTABaseAbility *AbilityByName; // rax
  CDOTABaseAbility *v22; // r13
  float LevelSpecialValue; // xmm0_4
  CDOTA_BaseNPC *v24; // r14
  CDOTA_BaseNPC *v25; // rax
  const Vector *v26; // rbx
  CDOTA_BaseNPC *v27; // rax
  float v28; // xmm1_4
  __int64 v29; // rbx
  CHandle<CBaseEntity> *v30; // rdx
  uint32 m_Index; // eax
  __int16 v32; // cx
  CEntityIdentity *v33; // rdx
  CEntityIdentity *v34; // rdx
  CDOTA_BaseNPC *m_pInstance; // r14
  CDOTA_BaseNPC *v36; // rax
  CDOTA_BaseNPC *v37; // rax
  CDOTA_BaseNPC *v38; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v40; // rax
  CDOTA_ParticleManager *v41; // rax
  float v42; // [rsp+20h] [rbp-A0h]
  float flRadius; // [rsp+28h] [rbp-98h]
  float flDamage; // [rsp+2Ch] [rbp-94h]
  float flDamagea; // [rsp+2Ch] [rbp-94h]
  Vector vNewPos; // [rsp+30h] [rbp-90h] BYREF
  double v47; // [rsp+40h] [rbp-80h]
  float v48; // [rsp+48h] [rbp-78h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+50h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v51; // [rsp+88h] [rbp-38h]

  v6 = a3 + this->m_flCurrentTimeVert;
  v51 = __readfsqword(0x28u);
  v7 = ES_ACCELERATION_Z;
  m_flInitialVelocityZ = this->m_flInitialVelocityZ;
  this->m_flCurrentTimeVert = v6;
  flDamage = v6;
  v42 = v7;
  AbsOrigin = CBaseEntity::GetAbsOrigin(me);
  m_flCurrentTimeVert = this->m_flCurrentTimeVert;
  v11 = m_flCurrentTimeVert * m_flCurrentTimeVert;
  v12 = m_flCurrentTimeVert * this->m_flInitialVelocityZ;
  *&vNewPos.x = *&AbsOrigin->x;
  vNewPos.z = (((-0.5 * ES_ACCELERATION_Z) * v11) + this->m_vStartPosition.z) + v12;
  Parent = CDOTA_Buff::GetParent(this);
  GroundHeight = GetGroundHeight(&vNewPos, Parent);
  if ( GroundHeight > vNewPos.z && (m_flInitialVelocityZ - (flDamage * v42)) < 0.0 )
  {
    vNewPos.z = GroundHeight;
    CBaseEntity::SetAbsOrigin(me, &vNewPos);
    if ( !this->m_bHorizontalMotionInterrupted )
    {
      KeyValues::KeyValues(&kv, "modifier_earthshaker_enchant_totem");
      Ability = CDOTA_Buff::GetAbility(this);
      CDOTABaseAbility::GetDuration(Ability);
      KeyValues::SetFloat(&kv, "duration", v16);
      v17 = CDOTA_Buff::GetAbility(this);
      Caster = CDOTA_Buff::GetCaster(this);
      v19 = CDOTA_Buff::GetCaster(this);
      CDOTA_BaseNPC::AddNewModifier(v19, Caster, v17, "modifier_earthshaker_enchant_totem", &kv, 0);
      KeyValues::~KeyValues(&kv);
      v20 = CDOTA_Buff::GetCaster(this);
      AbilityByName = CDOTA_BaseNPC::FindAbilityByName(v20, "earthshaker_aftershock", 0);
      v22 = AbilityByName;
      if ( AbilityByName != 0
        && AbilityByName->m_iLevel.m_Value > 0
        && (CDOTA_Buff::GetCaster(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
      {
        LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<float>(v22, "aftershock_range", 1, 0);
        entities.m_Size = 0;
        entities.m_Memory.m_pMemory = 0;
        entities.m_Memory.m_nAllocationCount = 0;
        entities.m_Memory.m_nGrowSize = 0;
        flRadius = LevelSpecialValue;
        v24 = CDOTA_Buff::GetCaster(this);
        v25 = CDOTA_Buff::GetCaster(this);
        v26 = CBaseEntity::GetAbsOrigin(v25);
        v27 = CDOTA_Buff::GetCaster(this);
        FindUnitsInRadius(v27->m_iTeamNum.m_Value, v26, v24, flRadius, &entities, 2, 19, 0, 0, 0);
        KeyValues::KeyValues(&kv, "modifier_stunned");
        CDOTABaseAbility::GetDuration(v22);
        KeyValues::SetFloat(&kv, "duration", v28);
        if ( entities.m_Size > 0 )
        {
          v29 = 0;
          do
          {
            v30 = &entities.m_Memory.m_pMemory[v29];
            m_Index = v30->m_Index;
            if ( v30->m_Index + 2 > 1 )
            {
              v32 = v30->m_Index;
              v33 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v30->m_Index) >> 9) & 0x3F];
              if ( v33 != 0 )
              {
                v34 = &v33[v32 & 0x1FF];
                if ( v34 != 0 && m_Index == v34->m_EHandle.m_Index )
                {
                  m_pInstance = v34->m_pInstance;
                  if ( v34->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
                  {
                    v36 = CDOTA_Buff::GetCaster(this);
                    CDOTA_BaseNPC::AddNewModifier(m_pInstance, v36, v22, "modifier_stunned", &kv, 0);
                    flDamagea = (*(v22->_vptr_IHandleEntity + 247))(v22);
                    v37 = CDOTA_Buff::GetCaster(this);
                    ApplyDamage(v37, m_pInstance, v22, flDamagea, 2, 0);
                  }
                }
              }
            }
            ++v29;
          }
          while ( entities.m_Size > v29 );
        }
        v38 = CDOTA_Buff::GetParent(this);
        ParticleManager = GetParticleManager();
        LODWORD(v38) = CDOTA_ParticleManager::CreateParticle(
                         ParticleManager,
                         "particles/units/heroes/hero_earthshaker/earthshaker_aftershock.vpcf",
                         1,
                         v38,
                         0,
                         0);
        *&v47 = flRadius;
        *(&v47 + 1) = flRadius;
        v48 = flRadius;
        v40 = GetParticleManager();
        CDOTA_ParticleManager::SetParticleControl(v40, v38, 1, v47, v48);
        v41 = GetParticleManager();
        CDOTA_ParticleManager::ReleaseParticleIndex(v41, v38);
        KeyValues::~KeyValues(&kv);
        CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities);
      }
    }
    CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::DisableMotionControl(this);
    (*(this->_vptr_CDOTA_Buff + 63))(this, 1, 0.15000001);
  }
  else
  {
    CBaseEntity::SetAbsOrigin(me, &vNewPos);
  }
}


// CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::OnHorizontalMotionInterrupted  (line 714, @0x00000000029b4a60, libserver.so)
void __fastcall CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::OnHorizontalMotionInterrupted(
        CDOTA_Modifier_Earthshaker_EnchantTotem_Leap *const this)
{
  this->m_bHorizontalMotionInterrupted = 1;
}


// CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::OnVerticalMotionInterrupted  (line 723, @0x00000000029b7bf0, libserver.so)
// calls: CDOTA_Buff::Destroy
void __fastcall CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::OnVerticalMotionInterrupted(
        CDOTA_Modifier_Earthshaker_EnchantTotem_Leap *const this)
{
  CDOTA_Buff::Destroy(this, 0, 0, 0);
}


// CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::DisableMotionControl  (line 730, @0x00000000029d0870, libserver.so)
// calls: CDOTA_Buff::GetParent, CDOTALocomotor::RemoveHorizontalMotionController, CDOTALocomotor::RemoveVerticalMotionController
// callers: CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::OnDestroy, CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::UpdateVerticalMotion
void __fastcall CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::DisableMotionControl(
        CDOTA_Modifier_Earthshaker_EnchantTotem_Leap *const this)
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


// CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::OnDestroy  (line 740, @0x00000000029d08d0, libserver.so)
// calls: CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::DisableMotionControl
void __fastcall CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::OnDestroy(
        CDOTA_Modifier_Earthshaker_EnchantTotem_Leap *const this)
{
  CDOTA_Modifier_Earthshaker_EnchantTotem_Leap::DisableMotionControl(this);
}


// CDOTA_Modifier_Earthshaker_EnchantTotem::~CDOTA_Modifier_Earthshaker_EnchantTotem  (line 757, @0x0000000002a12300, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Earthshaker_EnchantTotem::~CDOTA_Modifier_Earthshaker_EnchantTotem(
        CDOTA_Modifier_Earthshaker_EnchantTotem *const this)
{
  this->_vptr_CDOTA_Buff = &off_433B550;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Earthshaker_EnchantTotem::~CDOTA_Modifier_Earthshaker_EnchantTotem  (line 757, @0x0000000002a12320, libserver.so)  // inlines: ~CDOTA_Modifier_Earthshaker_EnchantTotem
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Earthshaker_EnchantTotem::~CDOTA_Modifier_Earthshaker_EnchantTotem(
        CDOTA_Modifier_Earthshaker_EnchantTotem *const this)
{
  this->_vptr_CDOTA_Buff = &off_433B550;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Earthshaker_EnchantTotem::OnDestroy  (line 765, @0x0000000002a2cad0, libserver.so)  // inlines: StopTotemSound
// calls: CSoundOpGameSystem::StopSoundEvent, CDOTA_Buff::GetCaster, CBaseEntity::StopSound
// strings: "Hero_EarthShaker.Totem.TI6.Layer"
void __fastcall CDOTA_Modifier_Earthshaker_EnchantTotem::OnDestroy(CDOTA_Modifier_Earthshaker_EnchantTotem *const this)
{
  CDOTA_BaseNPC *Caster; // rax

  CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, &this->m_nTotemSound);
  Caster = CDOTA_Buff::GetCaster(this);
  CBaseEntity::StopSound(Caster, "Hero_EarthShaker.Totem.TI6.Layer");
}


// CDOTA_Modifier_Earthshaker_EnchantTotem::GetHeroEffectName  (line 781, @0x0000000002a08dd0, libserver.so)
// strings: "particles/units/heroes/hero_earthshaker/earthshaker_totem_hero_effect.vpcf"
const char *__fastcall CDOTA_Modifier_Earthshaker_EnchantTotem::GetHeroEffectName(
        CDOTA_Modifier_Earthshaker_EnchantTotem *const this)
{
  return "particles/units/heroes/hero_earthshaker/earthshaker_totem_hero_effect.vpcf";
}


// CDOTA_Modifier_Earthshaker_EnchantTotem::HeroEffectPriority  (line 782, @0x0000000002a08de0, libserver.so)
int __fastcall CDOTA_Modifier_Earthshaker_EnchantTotem::HeroEffectPriority(
        CDOTA_Modifier_Earthshaker_EnchantTotem *const this)
{
  return 100;
}


// CDOTA_Modifier_Earthshaker_EnchantTotem::OnCreated  (line 800, @0x00000000029f7980, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::UnitEmitSound
// strings: "totem_damage_percentage", "Hero_EarthShaker.Totem"
void __fastcall CDOTA_Modifier_Earthshaker_EnchantTotem::OnCreated(
        CDOTA_Modifier_Earthshaker_EnchantTotem *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax
  CDOTA_BaseNPC *Caster; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->totem_damage_percentage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                      Ability,
                                      "totem_damage_percentage",
                                      -1,
                                      0);
  else
    this->totem_damage_percentage = 0;
  Caster = CDOTA_Buff::GetCaster(this);
  this->m_nTotemSound = CDOTA_BaseNPC::UnitEmitSound(Caster, "Hero_EarthShaker.Totem", 0.0, 0, 0);
}


// CDOTA_Modifier_Earthshaker_EnchantTotem::OnRefresh  (line 816, @0x00000000029f8980, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>, StopTotemSound
// calls: CSoundOpGameSystem::StopSoundEvent, CDOTA_Buff::GetCaster, CBaseEntity::StopSound, CDOTA_BaseNPC::UnitEmitSound, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "Hero_EarthShaker.Totem.TI6.Layer", "Hero_EarthShaker.Totem", "totem_damage_percentage"
void __fastcall CDOTA_Modifier_Earthshaker_EnchantTotem::OnRefresh(
        CDOTA_Modifier_Earthshaker_EnchantTotem *const this,
        KeyValues *pKV)
{
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v4; // rax
  CDOTABaseAbility *Ability; // rax

  CSoundOpGameSystem::StopSoundEvent(g_pSoundOpGameSystem, &this->m_nTotemSound);
  Caster = CDOTA_Buff::GetCaster(this);
  CBaseEntity::StopSound(Caster, "Hero_EarthShaker.Totem.TI6.Layer");
  v4 = CDOTA_Buff::GetCaster(this);
  this->m_nTotemSound = CDOTA_BaseNPC::UnitEmitSound(v4, "Hero_EarthShaker.Totem", 0.0, 0, 0);
  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->totem_damage_percentage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                      Ability,
                                      "totem_damage_percentage",
                                      -1,
                                      0);
  else
    this->totem_damage_percentage = 0;
}


// CDOTA_Modifier_Earthshaker_EnchantTotem::DeclareFunctions  (line 827, @0x00000000029b4a80, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Earthshaker_EnchantTotem::GetModifierBaseDamageOutgoing_Percentage(CModifierParams const&), CDOTA_Modifier_Earthshaker_EnchantTotem::OnAttacked(CModifierParams const&), CDOTA_Modifier_Earthshaker_EnchantTotem::GetActivityTranslationModifiers(CModifierParams const&), CDOTA_Modifier_Earthshaker_EnchantTotem::GetAttackSound(CModifierParams const&)
void __fastcall CDOTA_Modifier_Earthshaker_EnchantTotem::DeclareFunctions(
        CDOTA_Modifier_Earthshaker_EnchantTotem *const this)
{
  this->m_Functions[34].__pfn = CDOTA_Modifier_Earthshaker_EnchantTotem::GetModifierBaseDamageOutgoing_Percentage;
  this->m_Functions[34].__delta = 0;
  this->m_Functions[137].__delta = 0;
  this->m_Functions[137].__pfn = CDOTA_Modifier_Earthshaker_EnchantTotem::OnAttacked;
  this->m_Functions[155].__pfn = CDOTA_Modifier_Earthshaker_EnchantTotem::GetActivityTranslationModifiers;
  this->m_Functions[155].__delta = 0;
  this->m_Functions[156].__pfn = CDOTA_Modifier_Earthshaker_EnchantTotem::GetAttackSound;
  this->m_Functions[156].__delta = 0;
}


// CDOTA_Modifier_Earthshaker_EnchantTotem::GetModifierBaseDamageOutgoing_Percentage  (line 837, @0x00000000029b4af0, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Earthshaker_EnchantTotem::GetModifierBaseDamageOutgoing_Percentage(
        CDOTA_Modifier_Earthshaker_EnchantTotem *const this,
        const CModifierParams *const params)
{
  __m128i v2; // xmm0
  ModifierVariant_t result; // 0:rax.16

  *v2.m128i_i32 = this->totem_damage_percentage;
  result.m_szVal = 0;
  *&result.m_eType = (_mm_cvtsi128_si32(v2) << 32) | 1;
  return result;
}


// CDOTA_Modifier_Earthshaker_EnchantTotem::OnAttacked  (line 844, @0x00000000029c5a00, libserver.so)  // inlines: AttackerNPC, Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsUnitMyParent, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster, CDOTA_Buff::GetParent, GetParticleManager, CDOTA_ParticleManager::CreateParticle, CBaseEntity::GetAbsOrigin, CDOTA_ParticleManager::SetParticleControlEnt, CDOTA_ParticleManager::ReleaseParticleIndex, CDOTA_Buff::Destroy
// strings: "particles/units/heroes/hero_earthshaker/earthshaker_totem_blur_impact.vpcf", "attach_hitloc"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Earthshaker_EnchantTotem::OnAttacked(
        CDOTA_Modifier_Earthshaker_EnchantTotem *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CConcreteEntityList *v5; // rcx
  unsigned __int64 m_Index_low; // rsi
  CEntityIdentity *v7; // rdx
  CEntityIdentity *v8; // rdx
  CBaseAnimating *m_pInstance; // r12
  uint32 v10; // edx
  unsigned int v11; // eax
  CEntityIdentity *v12; // rsi
  CEntityIdentity *v13; // rsi
  CDOTA_BaseNPC *v14; // r14
  unsigned __int8 m_Value; // r15
  CEntityIdentity *v16; // rax
  CEntityIdentity *v17; // rax
  CDOTA_BaseNPC *Parent; // r14
  CDOTA_ParticleManager *ParticleManager; // rax
  const Vector *AbsOrigin; // r15
  CDOTA_ParticleManager *v22; // rax
  CDOTA_ParticleManager *v23; // rax
  CDOTA_ParticleManager *v24; // rax
  CDOTA_BaseNPC *v25; // rbx

  m_Index = params->htarget.m_Index;
  v5 = CEntityHandle::gm_pEntityList;
  if ( m_Index + 2 <= 1
    || (m_Index_low = LOWORD(params->htarget.m_Index),
        (v7 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(m_Index_low >> 9) & 0x3F]) == 0)
    || (v8 = &v7[m_Index_low & 0x1FF]) == 0
    || m_Index != v8->m_EHandle.m_Index
    || (m_pInstance = v8->m_pInstance, v8->m_pInstance == 0)
    || !m_pInstance->m_bIsDOTANPC )
  {
    m_pInstance = 0;
  }
  v10 = params->hattacker.m_Index;
  v11 = v10 + 2;
  if ( v10 + 2 <= 1
    || (v12 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F]) == 0
    || (v13 = &v12[params->hattacker.m_Index & 0x1FF]) == 0
    || v10 != v13->m_EHandle.m_Index
    || (v14 = v13->m_pInstance, v13->m_pInstance == 0)
    || !v14->m_bIsDOTANPC )
  {
    v14 = 0;
  }
  if ( m_pInstance != 0 )
  {
    m_Value = m_pInstance->m_iTeamNum.m_Value;
    if ( m_Value == CDOTA_Buff::GetCaster(this)->m_iTeamNum.m_Value )
    {
      v10 = params->hattacker.m_Index;
      v5 = CEntityHandle::gm_pEntityList;
      v11 = v10 + 2;
    }
    else if ( v14 != 0 && v14 == CDOTA_Buff::GetParent(this) )
    {
      Parent = CDOTA_Buff::GetParent(this);
      ParticleManager = GetParticleManager();
      LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                          ParticleManager,
                          "particles/units/heroes/hero_earthshaker/earthshaker_totem_blur_impact.vpcf",
                          2,
                          m_pInstance,
                          0,
                          Parent);
      AbsOrigin = CBaseEntity::GetAbsOrigin(m_pInstance);
      v22 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v22, Parent, 0, m_pInstance, 5, "attach_hitloc", *AbsOrigin, 1);
      v23 = GetParticleManager();
      CDOTA_ParticleManager::SetParticleControlEnt(v23, Parent, 1, m_pInstance, 1, 0, vec3_invalid, 1);
      v24 = GetParticleManager();
      CDOTA_ParticleManager::ReleaseParticleIndex(v24, Parent);
      v10 = params->hattacker.m_Index;
      v5 = CEntityHandle::gm_pEntityList;
      v11 = v10 + 2;
    }
    else
    {
      v10 = params->hattacker.m_Index;
      v5 = CEntityHandle::gm_pEntityList;
      v11 = v10 + 2;
    }
  }
  if ( v11 > 1 )
  {
    v16 = v5->m_pIdentityChunks[(LOWORD(params->hattacker.m_Index) >> 9) & 0x3F];
    if ( v16 != 0 )
    {
      v17 = &v16[params->hattacker.m_Index & 0x1FF];
      if ( v17 != 0 && v17->m_EHandle.m_Index == v10 )
      {
        v25 = v17->m_pInstance;
        if ( v17->m_pInstance != 0 && v25->m_bIsDOTANPC && CDOTA_Buff::GetParent(this) == v25 )
          CDOTA_Buff::Destroy(this, 0, 0, 0);
      }
    }
  }
  return 1uLL;
}


// CDOTA_Modifier_Earthshaker_EnchantTotem::GetActivityTranslationModifiers  (line 873, @0x00000000029b4b10, libserver.so)
ModifierVariant_t __fastcall CDOTA_Modifier_Earthshaker_EnchantTotem::GetActivityTranslationModifiers(
        CDOTA_Modifier_Earthshaker_EnchantTotem *const this,
        const CModifierParams *const params)
{
  ModifierVariant_t result; // 0:rax.16

  result.m_szVal = "enchant_totem";
  *&result.m_eType = 2;
  return result;
}


// CDOTA_Modifier_Earthshaker_EnchantTotem::GetAttackSound  (line 880, @0x00000000029c2630, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, TargetNPC, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTA_Buff::GetCaster
// strings: "Hero_EarthShaker.Totem.Attack"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Earthshaker_EnchantTotem::GetAttackSound(
        CDOTA_Modifier_Earthshaker_EnchantTotem *const this,
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
    result.m_szVal = "Hero_EarthShaker.Totem.Attack";
  return result;
}


// CDOTA_Ability_Earthshaker_Aftershock::~CDOTA_Ability_Earthshaker_Aftershock  (line 897, @0x0000000002a16f20, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Earthshaker_Aftershock::~CDOTA_Ability_Earthshaker_Aftershock(
        CDOTA_Ability_Earthshaker_Aftershock *const this)
{
  this->_vptr_IHandleEntity = &off_433B8B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Earthshaker_Aftershock::~CDOTA_Ability_Earthshaker_Aftershock  (line 897, @0x0000000002a16f40, libserver.so)  // inlines: ~CDOTA_Ability_Earthshaker_Aftershock
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Earthshaker_Aftershock::~CDOTA_Ability_Earthshaker_Aftershock(
        CDOTA_Ability_Earthshaker_Aftershock *const this)
{
  this->_vptr_IHandleEntity = &off_433B8B0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Earthshaker_Aftershock::Schema_DynamicBinding  (line 899, @0x0000000002a08df0, libserver.so)
// globals: CDOTA_Ability_Earthshaker_Aftershock::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Earthshaker_Aftershock::Schema_DynamicBinding(
        const CDOTA_Ability_Earthshaker_Aftershock *const this)
{
  return CDOTA_Ability_Earthshaker_Aftershock::s_pSchemaBinding;
}


// CDOTA_Ability_Earthshaker_Aftershock::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 899, @0x0000000002a08e00, libserver.so)
// globals: CDOTA_Ability_Earthshaker_Aftershock::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Earthshaker_Aftershock::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Earthshaker_Aftershock::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Earthshaker_Aftershock::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Earthshaker_Aftershock::CEntityInstanceEntityClass::DestructInstance  (line 899, @0x0000000002a08e10, libserver.so)  // inlines: Destruct<CDOTA_Ability_Earthshaker_Aftershock>
void __fastcall CDOTA_Ability_Earthshaker_Aftershock::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Earthshaker_Aftershock::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Earthshaker_Aftershock::CEntityInstanceEntityClass::FreeInstance  (line 899, @0x0000000002a08e30, libserver.so)
void __fastcall CDOTA_Ability_Earthshaker_Aftershock::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Earthshaker_Aftershock::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Earthshaker_Aftershock::CEntityInstanceEntityClass::CanAllocate  (line 899, @0x0000000002a08e50, libserver.so)
bool __fastcall CDOTA_Ability_Earthshaker_Aftershock::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Earthshaker_Aftershock::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Earthshaker_Aftershock::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 899, @0x0000000002a08e60, libserver.so)
// globals: CDOTA_Ability_Earthshaker_Aftershock::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Earthshaker_Aftershock::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Earthshaker_Aftershock::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Earthshaker_Aftershock::s_pSchemaBinding;
}


// CDOTA_Ability_Earthshaker_Aftershock::CEntityInstanceEntityClass::AllocateInstance  (line 899, @0x0000000002a0f5c0, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Earthshaker_Aftershock::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Earthshaker_Aftershock::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 912);
  memset(v1, 0, 0x390u);
  return v1;
}


// CDOTA_Ability_Earthshaker_Aftershock::CEntityInstanceEntityClass::ConstructInstance  (line 899, @0x0000000002a13f60, libserver.so)  // inlines: CDOTA_Ability_Earthshaker_Aftershock, Construct<CDOTA_Ability_Earthshaker_Aftershock>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Earthshaker_Aftershock::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Earthshaker_Aftershock::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_433B8B0;
  }
  return p;
}


// CDOTA_Ability_Earthshaker_Aftershock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 899, @0x0000000002a1f2c0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Earthshaker_Aftershock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Earthshaker_Aftershock::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Earthshaker_Aftershock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 899, @0x0000000002a1f2e0, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Earthshaker_Aftershock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Earthshaker_Aftershock::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Earthshaker_Aftershock::GetEntityClassInternal  (line 899, @0x0000000002a36500, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "earthshaker_aftershock", "CDOTA_Ability_Earthshaker_Aftershock"
// globals: `guard variable for'CDOTA_Ability_Earthshaker_Aftershock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_AftershockClass, CDOTA_Ability_Earthshaker_Aftershock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_AftershockClass, __dso_handle, CDOTA_Ability_Earthshaker_Aftershock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Earthshaker_Aftershock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_AftershockClassInfo, CDOTA_Ability_Earthshaker_Aftershock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_AftershockClassInfo
CEntityClass *__cdecl CDOTA_Ability_Earthshaker_Aftershock::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Earthshaker_Aftershock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_AftershockClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Earthshaker_Aftershock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_AftershockClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Earthshaker_Aftershock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_AftershockClass);
    CDOTA_Ability_Earthshaker_Aftershock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_AftershockClass._vptr_CEntityClass = off_433B830;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Earthshaker_Aftershock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_AftershockClass);
    __cxa_atexit(
      CDOTA_Ability_Earthshaker_Aftershock::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Earthshaker_Aftershock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_AftershockClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Earthshaker_AftershockClass != 0 )
    return &CDOTA_Ability_Earthshaker_Aftershock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_AftershockClass;
  if ( `guard variable for'CDOTA_Ability_Earthshaker_Aftershock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_AftershockClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Earthshaker_Aftershock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_AftershockClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Earthshaker_Aftershock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_AftershockClassInfo,
      "CDOTA_Ability_Earthshaker_Aftershock",
      "earthshaker_aftershock",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Earthshaker_Aftershock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_AftershockClassInfo);
  }
  CDOTA_Ability_Earthshaker_Aftershock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_AftershockClass.m_pClassInfo = &CDOTA_Ability_Earthshaker_Aftershock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_AftershockClassInfo;
  CDOTA_Ability_Earthshaker_Aftershock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_AftershockClass.m_pBaseClassInfo = CDOTA_Ability_Earthshaker_Aftershock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_AftershockClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Earthshaker_AftershockClass = &CDOTA_Ability_Earthshaker_Aftershock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_AftershockClass;
  CDOTA_Ability_Earthshaker_Aftershock::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_AftershockClassInfo.m_pClass = &CDOTA_Ability_Earthshaker_Aftershock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_AftershockClass;
  CDOTA_Ability_Earthshaker_Aftershock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_AftershockClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Earthshaker_AftershockClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Earthshaker_Aftershock::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_AftershockClass;
}


// CDOTA_Ability_Earthshaker_Aftershock::GetIntrinsicModifierName  (line 903, @0x0000000002a08e70, libserver.so)
// strings: "modifier_earthshaker_aftershock"
const char *__fastcall CDOTA_Ability_Earthshaker_Aftershock::GetIntrinsicModifierName(
        CDOTA_Ability_Earthshaker_Aftershock *const this)
{
  return "modifier_earthshaker_aftershock";
}


// CDOTA_Ability_Earthshaker_Aftershock::YouForgotToImplementOrDeclareServerClass  (line 910, @0x00000000029b4b30, libserver.so)
int __fastcall CDOTA_Ability_Earthshaker_Aftershock::YouForgotToImplementOrDeclareServerClass(
        CDOTA_Ability_Earthshaker_Aftershock *const this)
{
  return 0;
}


// CDOTA_Ability_Earthshaker_Aftershock::GetServerClass  (line 910, @0x00000000029ca0b0, libserver.so)  // inlines: GetGameClass
// calls: CEntityClass::GetGameClass
ServerClass *__fastcall CDOTA_Ability_Earthshaker_Aftershock::GetServerClass(
        CDOTA_Ability_Earthshaker_Aftershock *const this)
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


// CDOTA_Modifier_Earthshaker_Aftershock::~CDOTA_Modifier_Earthshaker_Aftershock  (line 920, @0x0000000002a122b0, libserver.so)
// calls: CDOTA_Buff::~CDOTA_Buff
void __fastcall CDOTA_Modifier_Earthshaker_Aftershock::~CDOTA_Modifier_Earthshaker_Aftershock(
        CDOTA_Modifier_Earthshaker_Aftershock *const this)
{
  this->_vptr_CDOTA_Buff = &off_433C370;
  CDOTA_Buff::~CDOTA_Buff(this);
}


// CDOTA_Modifier_Earthshaker_Aftershock::~CDOTA_Modifier_Earthshaker_Aftershock  (line 920, @0x0000000002a122d0, libserver.so)  // inlines: ~CDOTA_Modifier_Earthshaker_Aftershock
// calls: CDOTA_Buff::~CDOTA_Buff, operator delete
void __fastcall CDOTA_Modifier_Earthshaker_Aftershock::~CDOTA_Modifier_Earthshaker_Aftershock(
        CDOTA_Modifier_Earthshaker_Aftershock *const this)
{
  this->_vptr_CDOTA_Buff = &off_433C370;
  CDOTA_Buff::~CDOTA_Buff(this);
  operator delete(this);
}


// CDOTA_Modifier_Earthshaker_Aftershock::IsHidden  (line 931, @0x0000000002a08e80, libserver.so)
bool __fastcall CDOTA_Modifier_Earthshaker_Aftershock::IsHidden(CDOTA_Modifier_Earthshaker_Aftershock *const this)
{
  return 1;
}


// CDOTA_Modifier_Earthshaker_Aftershock::OnCreated  (line 942, @0x00000000029f7280, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "aftershock_range"
void __fastcall CDOTA_Modifier_Earthshaker_Aftershock::OnCreated(
        CDOTA_Modifier_Earthshaker_Aftershock *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->aftershock_range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "aftershock_range", -1, 0);
  else
    this->aftershock_range = 0;
}


// CDOTA_Modifier_Earthshaker_Aftershock::OnRefresh  (line 949, @0x00000000029f6e60, libserver.so)  // inlines: AssignTo, DotaRetrieveAbilityValue<int>, GetLevelSpecialValueFor<int>
// calls: CDOTA_Buff::GetAbility, CDOTABaseAbility::GetLevelSpecialValueFor<int>
// strings: "aftershock_range"
void __fastcall CDOTA_Modifier_Earthshaker_Aftershock::OnRefresh(
        CDOTA_Modifier_Earthshaker_Aftershock *const this,
        KeyValues *pKV)
{
  CDOTABaseAbility *Ability; // rax

  Ability = CDOTA_Buff::GetAbility(this);
  if ( Ability != 0 )
    this->aftershock_range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(Ability, "aftershock_range", -1, 0);
  else
    this->aftershock_range = 0;
}


// CDOTA_Modifier_Earthshaker_Aftershock::DeclareFunctions  (line 956, @0x00000000029b4b40, libserver.so)  // inlines: SetFunction
// globals: CDOTA_Modifier_Earthshaker_Aftershock::OnAbilityExecuted(CModifierParams const&)
void __fastcall CDOTA_Modifier_Earthshaker_Aftershock::DeclareFunctions(
        CDOTA_Modifier_Earthshaker_Aftershock *const this)
{
  this->m_Functions[128].__pfn = CDOTA_Modifier_Earthshaker_Aftershock::OnAbilityExecuted;
  this->m_Functions[128].__delta = 0;
}


// CDOTA_Modifier_Earthshaker_Aftershock::OnAbilityExecuted  (line 963, @0x00000000029dbd60, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase, FStrEq, Get, GetAbilityName, GetEntityIdentity, GetEntryIndex, GetInstance, GetTeamNumber, IndexToIdentity, IsAbilityAnItem, IsToggle, IsUnitMyParent, IsValid, LookupEntity, Purge, ToDOTABaseNPC, UnitNPC, Vector, _V_strcmp, operator CBaseEntity*, operator CDOTABaseAbility*, operator CEntityInstance*, operator[], ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: __stack_chk_fail, CDOTA_Buff::GetParent, CEntityHandle::operator CEntityInstance*, CDOTA_Buff::GetCaster, CDOTA_BaseNPC::HasScepter, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, KeyValues::KeyValues, CDOTA_Buff::GetAbility, CDOTABaseAbility::GetDuration, KeyValues::SetFloat, CDOTA_BaseNPC::AddNewModifier (22 total)
// strings: "elder_titan_return_spirit", "earthshaker_enchant_totem", "modifier_stunned", "particles/units/heroes/hero_earthshaker/earthshaker_aftershock.vpcf"
// globals: CEntityHandle::gm_pEntityList
ModifierVariant_t __fastcall CDOTA_Modifier_Earthshaker_Aftershock::OnAbilityExecuted(
        CDOTA_Modifier_Earthshaker_Aftershock *const this,
        const CModifierParams *const params)
{
  uint32 m_Index; // eax
  CEntityIdentity *v4; // rdx
  CEntityIdentity *v5; // rdx
  CDOTA_BaseNPC *m_pInstance; // r13
  CEntityInstance *v9; // rax
  CEntityInstance *v10; // r12
  const char **m_Id; // rax
  const char *v12; // rsi
  CDOTA_BaseNPC *Caster; // rax
  __m128i v14; // xmm3
  const char **v15; // rax
  float v16; // r13d
  CDOTA_BaseNPC *v17; // r14
  CDOTA_BaseNPC *v18; // rax
  const Vector *AbsOrigin; // r12
  CDOTA_BaseNPC *v20; // rax
  CDOTABaseAbility *Ability; // rax
  float v22; // xmm1_4
  __int64 v23; // r13
  int v24; // r12d
  CHandle<CBaseEntity> *v25; // rdx
  uint32 v26; // eax
  __int16 v27; // cx
  CEntityIdentity *v28; // rdx
  CEntityIdentity *v29; // rdx
  CDOTA_BaseNPC *v30; // r14
  CDOTABaseAbility *v31; // r15
  CDOTA_BaseNPC *v32; // rax
  CDOTABaseAbility *v33; // rax
  CDOTABaseAbility *v34; // r15
  CDOTA_BaseNPC *v35; // rax
  CDOTA_BaseNPC *Parent; // r12
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v38; // rax
  CDOTA_ParticleManager *v39; // rax
  float flDamage; // [rsp+2Ch] [rbp-84h]
  double v41; // [rsp+30h] [rbp-80h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities; // [rsp+40h] [rbp-70h] BYREF
  KeyValues kv; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v44; // [rsp+78h] [rbp-38h]

  v44 = __readfsqword(0x28u);
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
        if ( v5->m_pInstance != 0
          && m_pInstance->m_bIsDOTANPC
          && CDOTA_Buff::GetParent(this) == m_pInstance
          && (CDOTA_Buff::GetParent(this)->m_nUnitState64.m_Value & 0x10000000) == 0 )
        {
          v9 = CEntityHandle::operator CEntityInstance *(&params->ability);
          v10 = v9;
          if ( v9 != 0 )
          {
            m_Id = v9[18].m_iszPrivateVScripts.u.m_Id;
            if ( m_Id == 0
              || (v12 = *m_Id, *m_Id == 0)
              || v12 != "elder_titan_return_spirit" && strcmp(v12, "elder_titan_return_spirit") != 0 )
            {
              if ( (*(v10->_vptr_IHandleEntity + 223))(v10) == 0
                && ((*(v10->_vptr_IHandleEntity + 251))(v10) & 0x200) == 0 )
              {
                Caster = CDOTA_Buff::GetCaster(this);
                if ( !CDOTA_BaseNPC::HasScepter(Caster)
                  || (v15 = v10[18].m_iszPrivateVScripts.u.m_Id) == 0
                  || *v15 == 0
                  || strcmp(*v15, "earthshaker_enchant_totem") != 0 )
                {
                  *v14.m128i_i32 = this->aftershock_range;
                  entities.m_Size = 0;
                  entities.m_Memory.m_pMemory = 0;
                  entities.m_Memory.m_nAllocationCount = 0;
                  entities.m_Memory.m_nGrowSize = 0;
                  v16 = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
                  v17 = CDOTA_Buff::GetCaster(this);
                  v18 = CDOTA_Buff::GetCaster(this);
                  AbsOrigin = CBaseEntity::GetAbsOrigin(v18);
                  v20 = CDOTA_Buff::GetCaster(this);
                  FindUnitsInRadius(v20->m_iTeamNum.m_Value, AbsOrigin, v17, v16, &entities, 2, 19, 0, 0, 0);
                  KeyValues::KeyValues(&kv, "modifier_stunned");
                  Ability = CDOTA_Buff::GetAbility(this);
                  CDOTABaseAbility::GetDuration(Ability);
                  KeyValues::SetFloat(&kv, "duration", v22);
                  if ( entities.m_Size > 0 )
                  {
                    v23 = 0;
                    v24 = 0;
                    do
                    {
                      v25 = &entities.m_Memory.m_pMemory[v23];
                      v26 = entities.m_Memory.m_pMemory[v23].m_Index;
                      if ( v26 + 2 > 1 )
                      {
                        v27 = v25->m_Index;
                        v28 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v25->m_Index) >> 9) & 0x3F];
                        if ( v28 != 0 )
                        {
                          v29 = &v28[v27 & 0x1FF];
                          if ( v29 != 0 && v26 == v29->m_EHandle.m_Index )
                          {
                            v30 = v29->m_pInstance;
                            if ( v29->m_pInstance != 0 && v30->m_bIsDOTANPC )
                            {
                              v31 = CDOTA_Buff::GetAbility(this);
                              v32 = CDOTA_Buff::GetCaster(this);
                              CDOTA_BaseNPC::AddNewModifier(v30, v32, v31, "modifier_stunned", &kv, 0);
                              v33 = CDOTA_Buff::GetAbility(this);
                              flDamage = (*(v33->_vptr_IHandleEntity + 247))(v33);
                              v34 = CDOTA_Buff::GetAbility(this);
                              v35 = CDOTA_Buff::GetCaster(this);
                              ApplyDamage(v35, v30, v34, flDamage, 2, 0);
                            }
                          }
                        }
                      }
                      ++v24;
                      ++v23;
                    }
                    while ( entities.m_Size > v24 );
                  }
                  Parent = CDOTA_Buff::GetParent(this);
                  ParticleManager = GetParticleManager();
                  LODWORD(Parent) = CDOTA_ParticleManager::CreateParticle(
                                      ParticleManager,
                                      "particles/units/heroes/hero_earthshaker/earthshaker_aftershock.vpcf",
                                      1,
                                      Parent,
                                      0,
                                      0);
                  *&v41 = this->aftershock_range;
                  *(&v41 + 1) = *&v41;
                  v38 = GetParticleManager();
                  CDOTA_ParticleManager::SetParticleControl(v38, Parent, 1, v41, *&v41);
                  v39 = GetParticleManager();
                  CDOTA_ParticleManager::ReleaseParticleIndex(v39, Parent);
                  KeyValues::~KeyValues(&kv);
                  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&entities);
                  if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                  {
                    CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
                    if ( (entities.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                      CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&entities.m_Memory);
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


// CDOTA_Ability_Earthshaker_EchoSlam::~CDOTA_Ability_Earthshaker_EchoSlam  (line 1013, @0x0000000002a16f70, libserver.so)
// calls: CDOTABaseAbility::~CDOTABaseAbility
void __fastcall CDOTA_Ability_Earthshaker_EchoSlam::~CDOTA_Ability_Earthshaker_EchoSlam(
        CDOTA_Ability_Earthshaker_EchoSlam *const this)
{
  this->_vptr_IHandleEntity = &off_433C6D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
}


// CDOTA_Ability_Earthshaker_EchoSlam::~CDOTA_Ability_Earthshaker_EchoSlam  (line 1013, @0x0000000002a16f90, libserver.so)  // inlines: ~CDOTA_Ability_Earthshaker_EchoSlam
// calls: CDOTABaseAbility::~CDOTABaseAbility, CBaseEntity::operator delete
void __fastcall CDOTA_Ability_Earthshaker_EchoSlam::~CDOTA_Ability_Earthshaker_EchoSlam(
        CDOTA_Ability_Earthshaker_EchoSlam *const this)
{
  this->_vptr_IHandleEntity = &off_433C6D0;
  CDOTABaseAbility::~CDOTABaseAbility(this);
  CBaseEntity::operator delete(this);
}


// CDOTA_Ability_Earthshaker_EchoSlam::Schema_DynamicBinding  (line 1015, @0x0000000002a08e90, libserver.so)
// globals: CDOTA_Ability_Earthshaker_EchoSlam::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Earthshaker_EchoSlam::Schema_DynamicBinding(
        const CDOTA_Ability_Earthshaker_EchoSlam *const this)
{
  return CDOTA_Ability_Earthshaker_EchoSlam::s_pSchemaBinding;
}


// CDOTA_Ability_Earthshaker_EchoSlam::CEntityInstanceEntityClass::Schema_DynamicBinding  (line 1015, @0x0000000002a08ea0, libserver.so)
// globals: CDOTA_Ability_Earthshaker_EchoSlam::CEntityInstanceEntityClass::s_pSchemaBinding
const CSchemaClassBindingBase *__fastcall CDOTA_Ability_Earthshaker_EchoSlam::CEntityInstanceEntityClass::Schema_DynamicBinding(
        const CDOTA_Ability_Earthshaker_EchoSlam::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Earthshaker_EchoSlam::CEntityInstanceEntityClass::s_pSchemaBinding;
}


// CDOTA_Ability_Earthshaker_EchoSlam::CEntityInstanceEntityClass::DestructInstance  (line 1015, @0x0000000002a08eb0, libserver.so)  // inlines: Destruct<CDOTA_Ability_Earthshaker_EchoSlam>
void __fastcall CDOTA_Ability_Earthshaker_EchoSlam::CEntityInstanceEntityClass::DestructInstance(
        CDOTA_Ability_Earthshaker_EchoSlam::CEntityInstanceEntityClass *const this,
        CEntityInstance *p)
{
  (*(p->_vptr_IHandleEntity + 1))(p);
}


// CDOTA_Ability_Earthshaker_EchoSlam::CEntityInstanceEntityClass::FreeInstance  (line 1015, @0x0000000002a08ed0, libserver.so)
void __fastcall CDOTA_Ability_Earthshaker_EchoSlam::CEntityInstanceEntityClass::FreeInstance(
        CDOTA_Ability_Earthshaker_EchoSlam::CEntityInstanceEntityClass *const this,
        void *p)
{
  (*(*g_pMemAlloc + 16LL))(g_pMemAlloc, p);
}


// CDOTA_Ability_Earthshaker_EchoSlam::CEntityInstanceEntityClass::CanAllocate  (line 1015, @0x0000000002a08ef0, libserver.so)
bool __fastcall CDOTA_Ability_Earthshaker_EchoSlam::CEntityInstanceEntityClass::CanAllocate(
        const CDOTA_Ability_Earthshaker_EchoSlam::CEntityInstanceEntityClass *const this)
{
  return 1;
}


// CDOTA_Ability_Earthshaker_EchoSlam::CEntityInstanceEntityClass::GetInstanceSchemaBinding  (line 1015, @0x0000000002a08f00, libserver.so)
// globals: CDOTA_Ability_Earthshaker_EchoSlam::s_pSchemaBinding
const ISchemaBinding *__fastcall CDOTA_Ability_Earthshaker_EchoSlam::CEntityInstanceEntityClass::GetInstanceSchemaBinding(
        CDOTA_Ability_Earthshaker_EchoSlam::CEntityInstanceEntityClass *const this)
{
  return CDOTA_Ability_Earthshaker_EchoSlam::s_pSchemaBinding;
}


// CDOTA_Ability_Earthshaker_EchoSlam::CEntityInstanceEntityClass::AllocateInstance  (line 1015, @0x0000000002a0f600, libserver.so)  // inlines: memset
// calls: memset
void *__fastcall CDOTA_Ability_Earthshaker_EchoSlam::CEntityInstanceEntityClass::AllocateInstance(
        CDOTA_Ability_Earthshaker_EchoSlam::CEntityInstanceEntityClass *const this)
{
  void *v1; // rbx

  v1 = (**g_pMemAlloc)(g_pMemAlloc, 928);
  memset(v1, 0, 0x3A0u);
  return v1;
}


// CDOTA_Ability_Earthshaker_EchoSlam::CEntityInstanceEntityClass::ConstructInstance  (line 1015, @0x0000000002a13f90, libserver.so)  // inlines: CDOTA_Ability_Earthshaker_EchoSlam, Construct<CDOTA_Ability_Earthshaker_EchoSlam>
// calls: CDOTABaseAbility::CDOTABaseAbility
CEntityInstance *__fastcall CDOTA_Ability_Earthshaker_EchoSlam::CEntityInstanceEntityClass::ConstructInstance(
        CDOTA_Ability_Earthshaker_EchoSlam::CEntityInstanceEntityClass *const this,
        void *p)
{
  if ( p != 0 )
  {
    CDOTABaseAbility::CDOTABaseAbility(p);
    *p = &off_433C6D0;
  }
  return p;
}


// CDOTA_Ability_Earthshaker_EchoSlam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1015, @0x0000000002a1f310, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass
void __fastcall CDOTA_Ability_Earthshaker_EchoSlam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Earthshaker_EchoSlam::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
}


// CDOTA_Ability_Earthshaker_EchoSlam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass  (line 1015, @0x0000000002a1f330, libserver.so)  // inlines: ~CEntityInstanceEntityClass
// calls: CEntityClass::~CEntityClass, operator delete
void __fastcall CDOTA_Ability_Earthshaker_EchoSlam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(
        CDOTA_Ability_Earthshaker_EchoSlam::CEntityInstanceEntityClass *const this)
{
  this->_vptr_CEntityClass = off_3FAF330;  // vptr: CEntityInstance::CEntityInstanceEntityClass
  CEntityClass::~CEntityClass(this);
  operator delete(this);
}


// CDOTA_Ability_Earthshaker_EchoSlam::GetEntityClassInternal  (line 1015, @0x0000000002a36650, libserver.so)  // inlines: CEntityInstanceEntityClass, GetEntityClassInfo, SetClassInfo, SetupEntClassComponentOverrides
// calls: __cxa_guard_acquire, CEntityClass::CEntityClass, __cxa_guard_release, __cxa_atexit, CDOTABaseAbility::InitScriptDesc, CDOTABaseAbility::GetEntityClassInfo, CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper, __cxa_guard_abort, _Unwind_Resume
// callers: _GLOBAL__sub_I__unity_heroes1_01.cpp
// strings: "earthshaker_echo_slam", "CDOTA_Ability_Earthshaker_EchoSlam"
// globals: `guard variable for'CDOTA_Ability_Earthshaker_EchoSlam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_EchoSlamClass, CDOTA_Ability_Earthshaker_EchoSlam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_EchoSlamClass, __dso_handle, CDOTA_Ability_Earthshaker_EchoSlam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass(), `guard variable for'CDOTA_Ability_Earthshaker_EchoSlam::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_EchoSlamClassInfo, CDOTA_Ability_Earthshaker_EchoSlam::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_EchoSlamClassInfo
CEntityClass *__cdecl CDOTA_Ability_Earthshaker_EchoSlam::GetEntityClassInternal()
{
  CEntityClassInfo *EntityClassInfo; // rax

  if ( `guard variable for'CDOTA_Ability_Earthshaker_EchoSlam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_EchoSlamClass == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Earthshaker_EchoSlam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_EchoSlamClass) != 0 )
  {
    CEntityClass::CEntityClass(&CDOTA_Ability_Earthshaker_EchoSlam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_EchoSlamClass);
    CDOTA_Ability_Earthshaker_EchoSlam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_EchoSlamClass._vptr_CEntityClass = off_433C650;
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Earthshaker_EchoSlam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_EchoSlamClass);
    __cxa_atexit(
      CDOTA_Ability_Earthshaker_EchoSlam::CEntityInstanceEntityClass::~CEntityInstanceEntityClass,
      &CDOTA_Ability_Earthshaker_EchoSlam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_EchoSlamClass,
      &_dso_handle);
  }
  if ( g_pEntityCDOTA_Ability_Earthshaker_EchoSlamClass != 0 )
    return &CDOTA_Ability_Earthshaker_EchoSlam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_EchoSlamClass;
  if ( `guard variable for'CDOTA_Ability_Earthshaker_EchoSlam::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_EchoSlamClassInfo == 0
    && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Earthshaker_EchoSlam::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_EchoSlamClassInfo) != 0 )
  {
    EntityClassInfo = CDOTABaseAbility::GetEntityClassInfo();
    CEntityClassInfo_StaticHelper::CEntityClassInfo_StaticHelper(
      &CDOTA_Ability_Earthshaker_EchoSlam::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_EchoSlamClassInfo,
      "CDOTA_Ability_Earthshaker_EchoSlam",
      "earthshaker_echo_slam",
      0,
      EntityClassInfo);
    __cxa_guard_release(&`guard variable for'CDOTA_Ability_Earthshaker_EchoSlam::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_EchoSlamClassInfo);
  }
  CDOTA_Ability_Earthshaker_EchoSlam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_EchoSlamClass.m_pClassInfo = &CDOTA_Ability_Earthshaker_EchoSlam::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_EchoSlamClassInfo;
  CDOTA_Ability_Earthshaker_EchoSlam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_EchoSlamClass.m_pBaseClassInfo = CDOTA_Ability_Earthshaker_EchoSlam::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_EchoSlamClassInfo.m_pBaseClassInfo;
  g_pEntityCDOTA_Ability_Earthshaker_EchoSlamClass = &CDOTA_Ability_Earthshaker_EchoSlam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_EchoSlamClass;
  CDOTA_Ability_Earthshaker_EchoSlam::GetEntityClassInfo(void)::g_EntityCDOTA_Ability_Earthshaker_EchoSlamClassInfo.m_pClass = &CDOTA_Ability_Earthshaker_EchoSlam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_EchoSlamClass;
  CDOTA_Ability_Earthshaker_EchoSlam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_EchoSlamClass.m_pScriptClassDesc = CDOTABaseAbility::InitScriptDesc();
  g_pEntityCDOTA_Ability_Earthshaker_EchoSlamClass->m_pComponentOverrides = 0;
  return &CDOTA_Ability_Earthshaker_EchoSlam::GetEntityClassInternal(void)::g_EntityCDOTA_Ability_Earthshaker_EchoSlamClass;
}


// CDOTA_Ability_Earthshaker_EchoSlam::ShouldSpeakAbilityConcept  (line 1020, @0x0000000002a08f10, libserver.so)
bool __fastcall CDOTA_Ability_Earthshaker_EchoSlam::ShouldSpeakAbilityConcept(
        CDOTA_Ability_Earthshaker_EchoSlam *const this,
        int iConcept)
{
  return 0;
}


// CDOTA_Ability_Earthshaker_EchoSlam::GetStolenActivityModifier  (line 1022, @0x0000000002a08f20, libserver.so)
const char *__fastcall CDOTA_Ability_Earthshaker_EchoSlam::GetStolenActivityModifier(
        CDOTA_Ability_Earthshaker_EchoSlam *const this)
{
  return "slam";
}


// CDOTA_Ability_Earthshaker_EchoSlam::OnSpellStart  (line 1041, @0x0000000002a05da0, libserver.so)  // inlines: CEntityHandle, CHandle, CUtlMemory, CUtlVector, CUtlVectorBase, Color, Get, GetAbilityData, GetEHandle, GetEntityIdentity, GetEntryIndex, GetInstance, GetInt, GetLevelSpecialValueFor<int>, GetSerialNumber, GetTeamNumber, IndexToIdentity, IsValid, LookupEntity, Purge, QueueConcept, Set, ToDOTABaseNPC, ToDOTABaseNPCHero, Vector, entindex, operator CBaseEntity*, operator CEntityInstance*, operator=, operator[], sTrackingProjectileCreateInfo, set_event_team, set_event_type, set_has_event_team, set_has_event_type, set_has_killer_account_id, set_killer_account_id, ~CUtlMemory, ~CUtlVector, ~CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, CDOTABaseAbility::GetCaster, CEntityInstance::GetEntityIndex, CreateUnitEvent, CBaseEntity::GetAbsOrigin, FindUnitsInRadius, CDOTA_BaseNPC::HasScepter, CDOTA_BaseNPC::UnitEmitSound, CDOTA_ProjectileManager::CreateTrackingProjectile, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CUtlMemory<CHandle<CBaseEntity>, int>::Purge, GetParticleManager (31 total)
// strings: "echo_slam_damage_range", "echo_slam_echo_search_range", "echo_slam_echo_range", "echo_slam_echo_damage", "particles/units/heroes/hero_earthshaker/earthshaker_echoslam.vpcf", "Hero_EarthShaker.EchoSlamEcho" (11 total)
// globals: CEntityHandle::gm_pEntityList, INVALID_ITEM_DEF_INDEX
void __fastcall CDOTA_Ability_Earthshaker_EchoSlam::OnSpellStart(CDOTA_Ability_Earthshaker_EchoSlam *const this)
{
  CDOTA_BaseNPC *Caster; // rax
  CEntityIndex v3; // eax
  __m128i v4; // xmm2
  float v5; // r13d
  vec_t y; // xmm0_4
  vec_t z; // xmm0_4
  CDOTA_BaseNPC *v8; // r12
  CDOTA_BaseNPC *v9; // rax
  const Vector *AbsOrigin; // rbx
  CDOTA_BaseNPC *v11; // rax
  CDOTA_BaseNPC *v12; // rax
  bool HasScepter; // al
  float v14; // xmm0_4
  CDOTA_BaseNPC *v15; // rax
  __m128i v16; // xmm3
  int v17; // r13d
  int v18; // eax
  CHandle<CBaseEntity> *v19; // rdx
  uint32 m_Index; // eax
  __int16 v21; // cx
  CEntityIdentity *v22; // rdx
  CEntityIdentity *v23; // rdx
  CEntityInstance *m_pInstance; // r14
  float v25; // r12d
  const Vector *v26; // rbx
  CDOTA_BaseNPC *v27; // rax
  CDOTA_BaseNPC *v28; // rax
  __int64 v29; // r12
  int v30; // ebx
  CHandle<CBaseEntity> *v31; // rdx
  uint32 v32; // eax
  __int16 v33; // cx
  CEntityIdentity *v34; // rdx
  CEntityIdentity *v35; // rdx
  CEntityInstance *v36; // rcx
  CEntityIdentity *m_pEntity; // rdx
  int v38; // eax
  __int16 v39; // si
  CEntityIdentity *v40; // rax
  int v41; // edx
  __int16 v42; // cx
  CDOTA_BaseNPC *v43; // rbx
  CDOTA_ParticleManager *ParticleManager; // rax
  CDOTA_ParticleManager *v45; // rax
  CDOTA_ParticleManager *v46; // rax
  __m128i v47; // xmm1
  float v48; // r13d
  CDOTA_BaseNPC *v49; // r12
  CDOTA_BaseNPC *v50; // rax
  const Vector *v51; // rbx
  CDOTA_BaseNPC *v52; // rax
  __int64 v53; // rbx
  CHandle<CBaseEntity> *v54; // rdx
  uint32 v55; // eax
  __int16 v56; // cx
  CEntityIdentity *v57; // rdx
  CEntityIdentity *v58; // rdx
  CDOTA_BaseNPC *v59; // r12
  __m128i v60; // xmm6
  float v61; // r13d
  CDOTA_BaseNPC *v62; // rax
  __m128i v63; // xmm4
  float v64; // r13d
  CDOTA_BaseNPC *v65; // rax
  CDOTA_BaseNPC *v66; // rax
  float v67; // xmm2_4
  CDOTA_Speech *m_pSpeech; // rdi
  CDOTA_BaseNPC *v69; // rax
  CDOTA_BaseNPC *v70; // rax
  DOTAAbilityData_t *m_pAbilityData; // rax
  int m_iAbilityID; // r13d
  CDOTA_BaseNPC *v73; // rax
  const Vector *v74; // r12
  CDOTA_BaseNPC *v75; // rax
  float v76; // xmm3_4
  CDOTA_BaseNPC *v77; // rax
  CDOTA_BaseNPC *v78; // rax
  CDOTA_BaseNPC_Hero *v79; // rdi
  bool v80; // al
  CDOTA_BaseNPC *v81; // rax
  int v82; // eax
  float flPerHeroShake; // [rsp+28h] [rbp-1A8h]
  int iEchoHeroes; // [rsp+2Ch] [rbp-1A4h]
  __int64 i; // [rsp+38h] [rbp-198h]
  float flShakeSize; // [rsp+48h] [rbp-188h]
  float m_Size; // [rsp+4Ch] [rbp-184h]
  int m_nValue; // [rsp+4Ch] [rbp-184h]
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities_echo; // [rsp+50h] [rbp-180h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > entities_damage; // [rsp+70h] [rbp-160h] BYREF
  CResponseCriteriaSet criteria; // [rsp+90h] [rbp-140h] BYREF
  CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int> > te_msg; // [rsp+D0h] [rbp-100h] BYREF
  int SteamID; // [rsp+E8h] [rbp-E8h]
  int v94; // [rsp+F0h] [rbp-E0h]
  _BOOL4 v95; // [rsp+108h] [rbp-C8h]
  sTrackingProjectileCreateInfo info; // [rsp+130h] [rbp-A0h] BYREF
  unsigned __int64 v97; // [rsp+198h] [rbp-38h]

  v97 = __readfsqword(0x28u);
  this->echo_slam_damage_range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "echo_slam_damage_range", -1, 0);
  this->echo_slam_echo_search_range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(
                                        this,
                                        "echo_slam_echo_search_range",
                                        -1,
                                        0);
  this->echo_slam_echo_range = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "echo_slam_echo_range", -1, 0);
  this->echo_slam_echo_damage = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "echo_slam_echo_damage", -1, 0);
  Caster = CDOTABaseAbility::GetCaster(this);
  v3.m_Data = CEntityInstance::GetEntityIndex(Caster).m_Data;
  CreateUnitEvent(v3, 0, 25, EDOTAHeroChaseEventType::DOTA_HERO_CHASE_EVENT_TYPE_IMPORTANT_ABILITY);
  *v4.m128i_i32 = this->echo_slam_echo_search_range;
  info.hTarget.m_Index = -1;
  info.hSource.m_Index = -1;
  info.colorGemColor = 0;
  info.bProvidesVision = 0;
  info.pAttackRecord = 0;
  v5 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
  info.vSourceLoc.x = vec3_origin.x;
  y = vec3_origin.y;
  info.iVisionTeamNumber = -1;
  info.vSourceLoc.y = y;
  z = vec3_origin.z;
  info.pszEffectName = "particles/units/heroes/hero_earthshaker/earthshaker_echoslam.vpcf";
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
  info.iMoveSpeed = 800;
  info.iSourceAttachment = 3;
  entities_echo.m_Size = 0;
  entities_echo.m_Memory.m_pMemory = 0;
  entities_echo.m_Memory.m_nAllocationCount = 0;
  entities_echo.m_Memory.m_nGrowSize = 0;
  v8 = CDOTABaseAbility::GetCaster(this);
  v9 = CDOTABaseAbility::GetCaster(this);
  AbsOrigin = CBaseEntity::GetAbsOrigin(v9);
  v11 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v11->m_iTeamNum.m_Value, AbsOrigin, v8, v5, &entities_echo, 2, 19, 16, 0, 0);
  m_Size = entities_echo.m_Size;
  v12 = CDOTABaseAbility::GetCaster(this);
  HasScepter = CDOTA_BaseNPC::HasScepter(v12);
  v14 = 0.5;
  if ( HasScepter )
    v14 = 0.75;
  flShakeSize = v14 * m_Size;
  v15 = CDOTABaseAbility::GetCaster(this);
  flPerHeroShake = 3.0;
  if ( CDOTA_BaseNPC::HasScepter(v15) )
    flPerHeroShake = 4.0;
  m_nValue = dota_echoslam_max_projectiles.m_pParent->m_Value.m_nValue;
  if ( entities_echo.m_Size <= 0 )
  {
    iEchoHeroes = 0;
  }
  else
  {
    v17 = 0;
    i = 0;
    iEchoHeroes = 0;
    do
    {
      v19 = &entities_echo.m_Memory.m_pMemory[i];
      m_Index = v19->m_Index;
      if ( v19->m_Index + 2 > 1 )
      {
        v21 = v19->m_Index;
        v22 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v19->m_Index) >> 9) & 0x3F];
        if ( v22 != 0 )
        {
          v23 = &v22[v21 & 0x1FF];
          if ( v23 != 0 && m_Index == v23->m_EHandle.m_Index )
          {
            m_pInstance = v23->m_pInstance;
            if ( v23->m_pInstance != 0 && BYTE3(m_pInstance[7]._vptr_IHandleEntity) != 0 )
            {
              if ( (m_pInstance[43].m_iszPrivateVScripts.u.m_Id & 1) != 0 )
              {
                ++iEchoHeroes;
                CDOTA_BaseNPC::UnitEmitSound(m_pInstance, "Hero_EarthShaker.EchoSlamEcho", 0.0, 0, 0);
                flShakeSize = flShakeSize + flPerHeroShake;
              }
              *v16.m128i_i32 = this->echo_slam_echo_range;
              te_msg.m_Size = 0;
              te_msg.m_Memory.m_pMemory = 0;
              te_msg.m_Memory.m_nAllocationCount = 0;
              te_msg.m_Memory.m_nGrowSize = 0;
              v25 = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
              v26 = CBaseEntity::GetAbsOrigin(m_pInstance);
              v27 = CDOTABaseAbility::GetCaster(this);
              FindUnitsInRadius(v27->m_iTeamNum.m_Value, v26, m_pInstance, v25, &te_msg, 2, 19, 16, 0, 0);
              v28 = CDOTABaseAbility::GetCaster(this);
              CDOTA_BaseNPC::HasScepter(v28);
              if ( te_msg.m_Size > 0 )
              {
                v29 = 0;
                v30 = 0;
                do
                {
                  while ( 1 )
                  {
                    v31 = &te_msg.m_Memory.m_pMemory[v29];
                    v32 = te_msg.m_Memory.m_pMemory[v29].m_Index;
                    if ( v32 + 2 > 1 )
                    {
                      v33 = v31->m_Index;
                      v34 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v31->m_Index) >> 9) & 0x3F];
                      if ( v34 != 0 )
                      {
                        v35 = &v34[v33 & 0x1FF];
                        if ( v35 != 0 && v32 == v35->m_EHandle.m_Index )
                        {
                          v36 = v35->m_pInstance;
                          if ( v35->m_pInstance != 0 && BYTE3(v36[7]._vptr_IHandleEntity) != 0 && m_pInstance != v36 )
                            break;
                        }
                      }
                    }
                    ++v30;
                    ++v29;
                    if ( te_msg.m_Size <= v30 )
                      goto LABEL_37;
                  }
                  m_pEntity = m_pInstance->m_pEntity;
                  if ( m_pEntity != 0 )
                  {
                    v38 = (m_pEntity->m_EHandle.m_Index >> 15) - (m_pEntity->m_flags & 1);
                    v39 = 0x7FFF;
                    if ( m_pEntity->m_EHandle.m_Index != -1 )
                      v39 = m_pEntity->m_EHandle.m_Index & 0x7FFF;
                    LOWORD(info.hSource.m_Index) = v39 | info.hSource.m_Index & 0x8000;
                    info.hSource.m_Index = (v38 << 15) | info.hSource.m_Index & 0x7FFF;
                  }
                  else
                  {
                    info.hSource.m_Index = -1;
                  }
                  info.iMoveSpeed = 550;
                  v40 = v36->m_pEntity;
                  if ( v40 != 0 )
                  {
                    v41 = (v40->m_EHandle.m_Index >> 15) - (v40->m_flags & 1);
                    v42 = 0x7FFF;
                    if ( v40->m_EHandle.m_Index != -1 )
                      v42 = v40->m_EHandle.m_Index & 0x7FFF;
                    LOWORD(info.hTarget.m_Index) = v42 | info.hTarget.m_Index & 0x8000;
                    info.hTarget.m_Index = (v41 << 15) | info.hTarget.m_Index & 0x7FFF;
                  }
                  else
                  {
                    info.hTarget.m_Index = -1;
                  }
                  if ( ++v17 > m_nValue )
                    info.bServerOnly = 1;
                  CDOTA_ProjectileManager::CreateTrackingProjectile(&g_DOTAProjectileManager, &info);
                  ++v30;
                  ++v29;
                }
                while ( te_msg.m_Size > v30 );
              }
LABEL_37:
              CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&te_msg);
              if ( (te_msg.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
              {
                CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&te_msg.m_Memory);
                if ( (te_msg.m_Memory.m_nGrowSize & 0xC0000000) == 0 )
                  CUtlMemory<CHandle<CBaseEntity>,int>::Purge(&te_msg.m_Memory);
              }
            }
          }
        }
      }
      v18 = i++;
    }
    while ( entities_echo.m_Size > v18 + 1 );
  }
  v43 = CDOTABaseAbility::GetCaster(this);
  ParticleManager = GetParticleManager();
  LODWORD(v43) = CDOTA_ParticleManager::CreateParticle(
                   ParticleManager,
                   "particles/units/heroes/hero_earthshaker/earthshaker_echoslam_start.vpcf",
                   0,
                   v43,
                   0,
                   0);
  LODWORD(te_msg.m_Memory.m_pMemory) = 0;
  *&te_msg.m_Size = COERCE_UNSIGNED_INT(fminf(flShakeSize, 20.0));
  v45 = GetParticleManager();
  CDOTA_ParticleManager::SetParticleControl(v45, v43, 1, *&te_msg.m_Size, *&te_msg.m_Memory.m_pMemory);
  v46 = GetParticleManager();
  CDOTA_ParticleManager::ReleaseParticleIndex(v46, v43);
  *v47.m128i_i32 = this->echo_slam_damage_range;
  entities_damage.m_Size = 0;
  entities_damage.m_Memory.m_pMemory = 0;
  entities_damage.m_Memory.m_nAllocationCount = 0;
  entities_damage.m_Memory.m_nGrowSize = 0;
  v48 = COERCE_FLOAT(_mm_cvtsi128_si32(v47));
  v49 = CDOTABaseAbility::GetCaster(this);
  v50 = CDOTABaseAbility::GetCaster(this);
  v51 = CBaseEntity::GetAbsOrigin(v50);
  v52 = CDOTABaseAbility::GetCaster(this);
  FindUnitsInRadius(v52->m_iTeamNum.m_Value, v51, v49, v48, &entities_damage, 2, 19, 16, 0, 0);
  if ( entities_damage.m_Size > 0 )
  {
    v53 = 0;
    do
    {
      while ( 1 )
      {
        v54 = &entities_damage.m_Memory.m_pMemory[v53];
        v55 = v54->m_Index;
        if ( v54->m_Index + 2 > 1 )
        {
          v56 = v54->m_Index;
          v57 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(LOWORD(v54->m_Index) >> 9) & 0x3F];
          if ( v57 != 0 )
          {
            v58 = &v57[v56 & 0x1FF];
            if ( v58 != 0 && v55 == v58->m_EHandle.m_Index )
            {
              v59 = v58->m_pInstance;
              if ( v58->m_pInstance != 0 && v59->m_bIsDOTANPC )
                break;
            }
          }
        }
        if ( ++v53 >= entities_damage.m_Size )
          goto LABEL_51;
      }
      *v60.m128i_i32 = (*(this->_vptr_IHandleEntity + 247))(this);
      v61 = COERCE_FLOAT(_mm_cvtsi128_si32(v60));
      v62 = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(v62, v59, this, v61, 2, 0);
      *v63.m128i_i32 = this->echo_slam_echo_damage;
      v64 = COERCE_FLOAT(_mm_cvtsi128_si32(v63));
      v65 = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(v65, v59, this, v64, 2, 0);
      v66 = CDOTABaseAbility::GetCaster(this);
      CDOTA_BaseNPC::HasScepter(v66);
      ++v53;
    }
    while ( v53 < entities_damage.m_Size );
  }
LABEL_51:
  CResponseCriteriaSet::CResponseCriteriaSet(&criteria);
  CResponseCriteriaSet::AppendCriteria(&criteria, "echoslam_count", 1.0, v67);
  m_pSpeech = CDOTABaseAbility::GetCaster(this)->m_Speech.m_pSpeech;
  if ( m_pSpeech != 0 )
    CDOTA_Speech::QueueConcept(m_pSpeech, 18, 0.5, &criteria, 4, 0, 0, 0, 0);
  if ( iEchoHeroes > 2 )
  {
    v78 = CDOTABaseAbility::GetCaster(this);
    if ( v78 != 0 && (v78->m_iUnitType & 1) != 0 )
      v79 = v78;
    else
      v79 = 0;
    EconEntity_OnOwnerKillEaterEvent(
      v79,
      0,
      kill_eater_event_t::kKillEaterEventType_Earthshaker_3HeroEchoslams,
      1,
      INVALID_ITEM_DEF_INDEX);
    if ( iEchoHeroes > 4 )
    {
      CMsgTournamentItemEvent::CMsgTournamentItemEvent(&te_msg);
      te_msg.m_Memory.m_nAllocationCount |= 4u;
      v94 = 8;
      v80 = CDOTABaseAbility::GetCaster(this)->m_iTeamNum.m_Value == 3;
      te_msg.m_Memory.m_nAllocationCount |= 0x80u;
      v95 = v80;
      v81 = CDOTABaseAbility::GetCaster(this);
      v82 = (*(v81->_vptr_IHandleEntity + 414))(v81);
      SteamID = CDOTA_PlayerResource::GetSteamID(g_pDOTAPlayerResource, v82);
      te_msg.m_Memory.m_nAllocationCount |= 1u;
      TournamentItemEvent(&te_msg, "tournament_drops");
      CMsgTournamentItemEvent::~CMsgTournamentItemEvent(&te_msg);
    }
  }
  if ( entities_echo.m_Size != 0 )
  {
    v69 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v69, "Hero_EarthShaker.EchoSlam", 0.0, 0, 0);
  }
  else
  {
    v77 = CDOTABaseAbility::GetCaster(this);
    CDOTA_BaseNPC::UnitEmitSound(v77, "Hero_EarthShaker.EchoSlamSmall", 0.0, 0, 0);
  }
  v70 = CDOTABaseAbility::GetCaster(this);
  CDOTA_BaseNPC::StartGesture(v70, 1539, 0.0, 0.0, 3, 0, 1.0);
  m_pAbilityData = this->m_pAbilityData;
  if ( m_pAbilityData == 0 )
  {
    CDOTABaseAbility::LoadAbilityData(this, 0);
    m_pAbilityData = this->m_pAbilityData;
  }
  m_iAbilityID = m_pAbilityData->m_iAbilityID;
  v73 = CDOTABaseAbility::GetCaster(this);
  v74 = CBaseEntity::GetAbsOrigin(v73);
  v75 = CDOTABaseAbility::GetCaster(this);
  CDOTAGamerules::SendProjectionAbilityMessage(g_pGameRules, v75, 0, m_iAbilityID, 0, 0, *&v74->x, v74->z, -1.0, v76);
  CResponseCriteriaSet::~CResponseCriteriaSet(&criteria);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities_damage);
  CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVectorBase(&entities_echo);
}


// CDOTA_Ability_Earthshaker_EchoSlam::OnProjectileHit  (line 1167, @0x00000000029c26d0, libserver.so)  // inlines: Get, GetEntityIdentity, GetEntryIndex, GetInstance, InState, IndexToIdentity, IsInvulnerable, IsMagicImmune, IsValid, LookupEntity, ToDOTABaseNPC, operator CBaseEntity*, operator CEntityInstance*
// calls: CDOTABaseAbility::GetCaster, ApplyDamage
// globals: CEntityHandle::gm_pEntityList
__int64 __fastcall CDOTA_Ability_Earthshaker_EchoSlam::OnProjectileHit(
        CDOTA_Ability_Earthshaker_EchoSlam *const this,
        unsigned __int16 *hTarget,
        const Vector *const vLocation)
{
  int v3; // eax
  unsigned __int64 v4; // rsi
  CEntityIdentity *v5; // rcx
  CEntityIdentity *v6; // rcx
  CDOTA_BaseNPC *m_pInstance; // rbx
  unsigned __int64 m_Value; // rax
  CDOTA_BaseNPC *Caster; // rax
  float echo_slam_echo_damage; // [rsp-1Ch] [rbp-1Ch]

  v3 = *hTarget;
  if ( (*hTarget + 2) <= 1 )
    return 1;
  v4 = *hTarget;
  v5 = CEntityHandle::gm_pEntityList->m_pIdentityChunks[(v4 >> 9) & 0x3F];
  if ( v5 == 0 )
    return 1;
  v6 = &v5[v4 & 0x1FF];
  if ( v6 == 0 || v3 != v6->m_EHandle.m_Index )
    return 1;
  m_pInstance = v6->m_pInstance;
  if ( v6->m_pInstance != 0 && m_pInstance->m_bIsDOTANPC )
  {
    m_Value = m_pInstance->m_nUnitState64.m_Value;
    if ( (m_Value & 0x200) == 0 && !m_pInstance->m_bIsWaitingToSpawn.m_Value && (m_Value & 0x100) == 0 )
    {
      echo_slam_echo_damage = this->echo_slam_echo_damage;
      Caster = CDOTABaseAbility::GetCaster(this);
      ApplyDamage(Caster, m_pInstance, this, echo_slam_echo_damage, 2, 0);
    }
  }
  return 1;
}


// CDOTA_Ability_Earthshaker_EchoSlam::GetAbilityDamageToTargetOverInterval  (line 1182, @0x00000000029f11b0, libserver.so)  // inlines: CUtlMemory, CUtlVector, CUtlVectorBase
// calls: CDOTABaseAbility::GetLevelSpecialValueFor<int>, __cxa_guard_acquire, CUtlVectorBase<CHandle<CBaseEntity>, CUtlMemory<CHandle<CBaseEntity>, int> >::RemoveAll, CDOTABaseAbility::GetCaster, CDOTA_Bot::GetNearbyCreeps, CDOTA_Bot::GetNearbyHeroes, CDOTA_BaseNPC::GetArmorReductionForDamageType, __cxa_guard_release, __cxa_atexit
// strings: "echo_slam_echo_search_range", "echo_slam_echo_damage"
// globals: `guard variable for'CDOTA_Ability_Earthshaker_EchoSlam::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities, CDOTA_Ability_Earthshaker_EchoSlam::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities, __dso_handle, CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector()
__int64 __fastcall CDOTA_Ability_Earthshaker_EchoSlam::GetAbilityDamageToTargetOverInterval(
        CDOTA_Ability_Earthshaker_EchoSlam *const this,
        CDOTA_BaseNPC *pTarget,
        float fInterval,
        DAMAGE_TYPES eDamageType)
{
  __int64 result; // rax
  int LevelSpecialValue; // r13d
  CDOTA_BaseNPC *Caster; // rax
  CDOTA_BaseNPC *v9; // rax
  int v10; // r13d
  int v11; // eax
  int m_Size; // ebx

  result = 0;
  if ( eDamageType == DAMAGE_TYPES::DAMAGE_TYPE_MAGICAL )
  {
    LevelSpecialValue = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "echo_slam_echo_search_range", -1, 1);
    if ( `guard variable for'CDOTA_Ability_Earthshaker_EchoSlam::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities == 0
      && __cxa_guard_acquire(&`guard variable for'CDOTA_Ability_Earthshaker_EchoSlam::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities) != 0 )
    {
      CDOTA_Ability_Earthshaker_EchoSlam::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Size = 0;
      CDOTA_Ability_Earthshaker_EchoSlam::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Memory.m_pMemory = 0;
      CDOTA_Ability_Earthshaker_EchoSlam::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Memory.m_nAllocationCount = 0;
      CDOTA_Ability_Earthshaker_EchoSlam::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Memory.m_nGrowSize = 0;
      __cxa_guard_release(&`guard variable for'CDOTA_Ability_Earthshaker_EchoSlam::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities);
      __cxa_atexit(
        CUtlVector<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::~CUtlVector,
        &CDOTA_Ability_Earthshaker_EchoSlam::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities,
        &_dso_handle);
    }
    CUtlVectorBase<CHandle<CBaseEntity>,CUtlMemory<CHandle<CBaseEntity>,int>>::RemoveAll(&CDOTA_Ability_Earthshaker_EchoSlam::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities);
    if ( CDOTABaseAbility::GetCaster(this)->m_pBot != 0 )
    {
      Caster = CDOTABaseAbility::GetCaster(this);
      CDOTA_Bot::GetNearbyCreeps(
        Caster->m_pBot,
        DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
        &CDOTA_Ability_Earthshaker_EchoSlam::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities,
        LevelSpecialValue);
      v9 = CDOTABaseAbility::GetCaster(this);
      CDOTA_Bot::GetNearbyHeroes(
        v9->m_pBot,
        DOTA_UNIT_TARGET_TEAM::DOTA_UNIT_TARGET_TEAM_ENEMY,
        &CDOTA_Ability_Earthshaker_EchoSlam::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities,
        LevelSpecialValue);
    }
    v10 = CDOTABaseAbility::GetLevelSpecialValueFor<int>(this, "echo_slam_echo_damage", -1, 1);
    v11 = (*(this->_vptr_IHandleEntity + 247))(this);
    m_Size = CDOTA_Ability_Earthshaker_EchoSlam::GetAbilityDamageToTargetOverInterval(CDOTA_BaseNPC *,float,DAMAGE_TYPES)::hEntities.m_Size;
    return ((m_Size * m_Size * v10 + v11) * (1.0 - CDOTA_BaseNPC::GetArmorReductionForDamageType(pTarget, 2)));
  }
  return result;
}


